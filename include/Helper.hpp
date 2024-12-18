#pragma once
#include "pch.h"
#include <string>
#include <codecvt>

__attribute__((always_inline))
inline std::string utf_16_To_utf_8(const wchar_t* str16) {
	char *TmpStr{};
	if (str16 == nullptr || IsBadReadPtr(str16, 8))
		return "";
	int size = WideCharToMultiByte(CP_UTF8, 0, str16, -1, NULL, 0, NULL, NULL); // get size of UTF-8 
	TmpStr = new char [size];
	WideCharToMultiByte(CP_UTF8, 0, str16, -1, TmpStr, size, NULL, NULL); // UTF-16 to UTF-8
	std::string RetVal = TmpStr;
	delete [] TmpStr;
	return RetVal;
}

namespace helper {
	template<typename F, typename ...Parm>
	F call(ULONG64 funs, Parm... parm) {
		using fn = F(*)(...);
		return reinterpret_cast<fn>(funs)(parm...);
	}
}

inline void KillOurProcessByCmd() {
	std::string ProcessName;
	ProcessName.resize(255);
	GetModuleFileNameA(NULL, ProcessName.data(), ProcessName.size());
	auto Pos = ProcessName.rfind("\\");
	ProcessName = ProcessName.substr(Pos + 1, ProcessName.size());
	ProcessName = xorstr_("taskkill /f  /im  ") + ProcessName;
	system(ProcessName.c_str());
}

inline Dumper::FVector operator - (const Dumper::FVector& A)
{
	return { -A.X, -A.Y, -A.Z };
}

inline std::wstring Utf8ToUtf16(const std::string& str) 
{
	if (str.empty()) return {};
	int sizeNeeded = MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), nullptr, 0);
	std::wstring wstrTo(sizeNeeded, 0);
	MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), &wstrTo[0], sizeNeeded);
	return wstrTo;
}

inline std::string Utf16ToUtf8(const std::wstring& utf16str) 
{
	if (utf16str.empty()) {
		return std::string();
	}
 
	// 获取转换后的长度（以字符为单位，不包括null终止符）
	int bytesRequired = WideCharToMultiByte(CP_UTF8, 0, utf16str.data(), static_cast<int>(utf16str.size()), NULL, 0, NULL, NULL);
	if (bytesRequired <= 0) {
		return std::string();
	}
 
	// 分配足够长度的std::string
	std::string utf8str(bytesRequired, '\0');
 
	// 执行转换
	int result = WideCharToMultiByte(CP_UTF8, 0, utf16str.data(), static_cast<int>(utf16str.size()), utf8str.data(), bytesRequired, NULL, NULL);
	if (result == 0) {
		return std::string();
	}
 
	return utf8str;
}

inline std::wstring towide(const std::string &str){
	std::wstring wmodule(str.size(), L'\0');
	std::use_facet<std::ctype<wchar_t>>(std::locale()).widen(str.data(), str.data() + str.size(), &wmodule[0]);
	return wmodule;
}

inline std::wstring towide(const std::string_view &str){
	std::wstring wmodule(str.size(), L'\0');
	std::use_facet<std::ctype<wchar_t>>(std::locale()).widen(str.data(), str.data() + str.size(), &wmodule[0]);
	return wmodule;
}

inline std::string tonarrow(const std::wstring &str) {
	std::string lowmodule(str.size(), L'\0');
	std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(str.data(), str.data() + str.size(), '?', &lowmodule[0]);
	return lowmodule;
}
inline unsigned int Decode85Byte(char c)                                    { return c >= '\\' ? c-36 : c-35; }

inline void         Decode85(const unsigned char* src, unsigned char* dst)
{
    while (*src)
    {
        unsigned int tmp = Decode85Byte(src[0]) + 85 * (Decode85Byte(src[1]) + 85 * (Decode85Byte(src[2]) + 85 * (Decode85Byte(src[3]) + 85 * Decode85Byte(src[4]))));
        dst[0] = ((tmp >> 0) & 0xFF); dst[1] = ((tmp >> 8) & 0xFF); dst[2] = ((tmp >> 16) & 0xFF); dst[3] = ((tmp >> 24) & 0xFF);   // We can't assume little-endianness.
        src += 5;
        dst += 4;
    }
}

inline size_t sizeof_base85(const char * base85){
	size_t compressed_ttf_size = ((strlen(base85) + 4) / 5) * 4;
	return compressed_ttf_size;
}
