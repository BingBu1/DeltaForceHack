#pragma once
#include <Windows.h>

#include <string>
#include <string_view>

#include <xorstr.hpp>
#include <Psapi.h>
#include "Sunday.hpp"
namespace Result {
	enum ResultStatus : int32_t {
		None = 1 << 0,
		Call = 1 << 1,
		Lea = 1 << 2,
		Jmp = 1 << 3,
		Read = 1 << 4,
		UnRead = 1 << 5
	};
}
using namespace Result;


class Search {
public:
	Search() : SearchBuf() {}
	~Search() { m_sunday .~SunDaySearch(); }
	bool SearchMem(HMODULE SearchBegin, ULONG64 SearchEnd , std::string_view SearchStr);
	bool SearchMem(HMODULE SearchBegin, ULONG64 SearchEnd , std::string_view SearchStr, int RetIndex);
	template<typename T>
	T GetSearchResult(LONG64 Offset, ResultStatus resultstatus);
private:
    SunDaySearch m_sunday{};
    std::vector<ULONG64> SearchResult{};
    ULONG64 SearchBuf = {};
};

inline bool Search::SearchMem(HMODULE SearchBegin, ULONG64 SearchEnd, std::string_view SearchStr) {
	return SearchMem(SearchBegin, SearchEnd, SearchStr, 0);
}

inline bool Search::SearchMem(HMODULE SearchBegin, ULONG64 SearchEnd, std::string_view SearchStr, int RetIndex){
	std::vector<ULONG64>{}.swap(SearchResult);
	SearchBuf = NULL;
	MODULEINFO ModuleInfo{};
	if (SearchEnd == 0) {
		GetModuleInformation(GetCurrentProcess(), SearchBegin, &ModuleInfo, sizeof(MODULEINFO));
		SearchEnd = ModuleInfo.SizeOfImage;
	}
	m_sunday.SearchMemory(SearchStr.data(), reinterpret_cast<ULONG64>(SearchBegin), SearchEnd, SearchResult);
	if (SearchResult.empty() || RetIndex > SearchResult.size()) {
		fmt::print("{} Error\n", SearchStr);
		return false;
	}
	SearchBuf = SearchResult[RetIndex];
	return true;
}

template<typename T>
inline T Search::GetSearchResult(LONG64 Offset, ResultStatus resultstatus){
	int32_t status = resultstatus;
	if (!SearchBuf)
		return (T)NULL;
	auto tmp = SearchBuf + Offset;
	if (status & ResultStatus::None) {
		if (status & Read)
			return *reinterpret_cast<T*>(tmp);
		else if (status & UnRead)
			return (T)tmp;
		//Ĭ�Ϸ���Read
		return *reinterpret_cast<T*>(tmp);
	}
	if (status & ResultStatus::Call || status & ResultStatus::Jmp) {
		if (status & Read)
			tmp = *reinterpret_cast<PULONG64>(tmp);
		else if (status & UnRead)
			tmp = (ULONG64)tmp;
		return (T)m_sunday.CallBaseCalc(tmp);
	}
	if (status & ResultStatus::Lea) {
		if (status & Read)
			tmp = *reinterpret_cast<PULONG64>(tmp);
		else if (status & UnRead)
			tmp = (ULONG64)tmp;
		return (T)m_sunday.CallBaseCalc(tmp, 7, 3);
	}
	return tmp;
}
