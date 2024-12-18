#pragma once
#include <Windows.h>

namespace AnitAnitCheat {

inline HMODULE THIS_Module     = NULL;
inline size_t THIS_MoudleBegin = NULL;
inline size_t THIS_MoudleSize  = NULL;
inline size_t THIS_MoudleEnd   = NULL;

typedef enum _OBJECT_INFORMATION_CLASS {
    ObjectBasicInformation,        // 0
    ObjectNameInformation,         // 1
    ObjectTypeInformation,         // 2
    ObjectTypesInformation,        // 3
    ObjectHandleFlagInformation,   // 4
    ObjectSessionInformation,      // 5
    ObjectSessionObjectInformation // 6
} OBJECT_INFORMATION_CLASS;


inline void FuckPeHead(HMODULE Module){
    PBYTE module = PBYTE(Module);
    memset(Module, 0, 4096);
}

inline size_t GetMoudleSize(HMODULE Module){
	IMAGE_DOS_HEADER *Dos = PIMAGE_DOS_HEADER(Module);
    IMAGE_NT_HEADERS *NT_HEAD = PIMAGE_NT_HEADERS(PBYTE(Dos) + Dos->e_lfanew);
    return NT_HEAD->OptionalHeader.SizeOfImage;
}

inline BOOL m_IsBadReadPtr(const void *lp, UINT_PTR ucb) {
	size_t ReadAddress = size_t(lp);
	if(ReadAddress >= THIS_MoudleBegin && ReadAddress <= THIS_MoudleEnd) {
		return TRUE;
	}
	return callOrigin(m_IsBadReadPtr, lp, ucb);
}

inline size_t m_VirtualQueryEx(HANDLE hProcess, LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength) {
	if(hProcess == GetCurrentProcess()){
        size_t ReadAddress = size_t(lpAddress);
        if(ReadAddress >= THIS_MoudleBegin && ReadAddress<= THIS_MoudleEnd){
            auto Retval = callOrigin(m_VirtualQueryEx, hProcess, lpAddress, lpBuffer, dwLength);
            if(lpBuffer) {
	            lpBuffer->BaseAddress       = 0;
	            lpBuffer->AllocationProtect = PAGE_NOACCESS;
	            lpBuffer->Protect	        = PAGE_NOACCESS;
	            lpBuffer->RegionSize        = 0;
	            lpBuffer->AllocationBase    = 0;
                return Retval;
            }
            return Retval;
        }
    }
    return callOrigin(m_VirtualQueryEx, hProcess, lpAddress, lpBuffer, dwLength);
}

inline BOOL m_ReadProcessMemory(HANDLE hProcess, LPCVOID lpBaseAddress, LPVOID lpBuffer, SIZE_T nSize, SIZE_T *lpNumberOfBytesRead){
	if(hProcess == GetCurrentProcess()) {
		size_t ReadAddress = size_t(lpBaseAddress);
        if(ReadAddress >= THIS_MoudleBegin && ReadAddress<= THIS_MoudleEnd){
            SetLastErrorEx(0, 0);
            return FALSE;
        }
	}
	return callOrigin(m_ReadProcessMemory, hProcess, lpBaseAddress, lpBuffer, nSize, lpNumberOfBytesRead);
}


inline NTSTATUS m_NtQueryObject(HANDLE Handle, OBJECT_INFORMATION_CLASS ObjectInformationClass, PVOID ObjectInformation, ULONG ObjectInformationLength, PULONG ReturnLength) {
    return 0xC0000008;
}

inline HDC m_GetDC(HWND hWnd){
    return nullptr;
}

inline void m_Sleep(ULONG dwMilliseconds){
	return callOrigin(m_Sleep, dwMilliseconds);
}

inline BOOL m_GetWindowDisplayAffinity(HWND hWnd, DWORD *pdwAffinity){
    if(pdwAffinity){
        *pdwAffinity = WDA_NONE;
    }
    return true;
}
inline void EnableByPass(){
    THIS_MoudleBegin = size_t(THIS_Module);
    THIS_MoudleSize = GetMoudleSize(THIS_Module);
    THIS_MoudleEnd = size_t(THIS_Module) + THIS_MoudleSize;
	FuckPeHead(THIS_Module);
    auto ntdll = GetModuleHandle(xorstr_("ntdll.dll"));
    auto ZwQuertObject_pfn = decltype(&m_NtQueryObject)(GetProcAddress(ntdll, xorstr_("NtQueryObject")));
	
    HookMessage::Install(IsBadReadPtr, m_IsBadReadPtr);
	HookMessage::Install(VirtualQueryEx, m_VirtualQueryEx);
    HookMessage::Install(ReadProcessMemory, m_ReadProcessMemory);
    // HookMessage::Install(ZwQuertObject_pfn, m_NtQueryObject);
    HookMessage::Install(Sleep, m_Sleep);
    HookMessage::Install(GetDC, m_GetDC);
    HookMessage::Install(GetWindowDisplayAffinity, m_GetWindowDisplayAffinity);
}

}
