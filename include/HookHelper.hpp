#pragma once
#include "pch.h"
class HookHelper {
public:
	inline static bool SetVtTableHook(PULONG64 HookBase, PVOID Funs, PVOID OldFuns);
};



bool HookHelper::SetVtTableHook(PULONG64 HookBase, PVOID Funs, PVOID OldFuns) {
	DWORD Temp{};
	BOOL IsSurr{};
	IsSurr = VirtualProtect(HookBase, 8, PAGE_EXECUTE_READWRITE, &Temp);
	if (!IsSurr)
		return false;

	*(PULONG64)OldFuns = *HookBase;
	*HookBase = (ULONG64)Funs;

	IsSurr = VirtualProtect(HookBase, 8, Temp, &Temp);
	return IsSurr;
}