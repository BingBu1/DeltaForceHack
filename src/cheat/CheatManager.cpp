#include "pch.h"
#include "CheatManager.h"
#include "SearchHelper.hpp"

#include "esp.h"
CheatManager::CheatManager(){
    AddMenu(this);
}

void CheatManager::Search(){
	using namespace Result;
	class Search m_search{};
	HMODULE gm = HMODULE(this->Game);
	while((GetModuleHandleA(xorstr_("d3d12.dll")) == NULL || GetModuleHandleA(xorstr_("d3d11.dll")) == NULL))
		Sleep(1000);

	m_search.SearchMem(gm, 0, xorstr_("48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 48 8B D0 C6 05 ?? ?? ?? ?? 01"));
	auto g_name = m_search.GetSearchResult<size_t>(0, ResultStatus::Lea);
	if(!g_name) {
		Sleep(1000);
		Search();
		return;
	}
	m_search.SearchMem(gm, 0, xorstr_("48 8B 35 ?? ?? ?? ?? EB 31"));
	auto g_world = m_search.GetSearchResult<size_t>(0x0, ResultStatus::Lea);
	m_search.SearchMem(gm, 0, xorstr_("74 0C 48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? E8 ?? ?? ?? ?? 84 C0"));
	auto g_object = m_search.GetSearchResult<size_t>(0x2, ResultStatus::Lea);
	g_object += 0x10;

	Dumper::InitSdk(L"DeltaForceClient-Win64-Shipping.exe", g_object - Game, g_name - Game, g_world - Game);
	//---------------------------------------------------------------------
	m_search.SearchMem(gm, 0, xorstr_("E8 ?? ?? ?? ?? 48 8B CB 0F 10 00 0F 11 83 ?? ?? ?? ?? 0F 10 48"));
	GET_BONE_MATRIX_OFFSET = m_search.GetSearchResult<size_t>(0x0, ResultStatus::Call) - Game;
}

void CheatManager::Init(){
	Game = reinterpret_cast<uint64_t>(GetModuleHandleW(xorstr_(L"DeltaForceClient-Win64-Shipping.exe")));
    Search();
	while (!(*Dumper::UWorld::GWorld ) || IsBadReadPtr(*Dumper::UWorld::GWorld, 8)) {
		Sleep(1000);
	}
#define Init(x) x::GetInstance()
	Init(Esp);
#undef Init
}