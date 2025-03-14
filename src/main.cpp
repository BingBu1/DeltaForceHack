#include "pch.h"
#include "HookDx11Manager.h"
#include "CheatManager.h"
#include <Shlobj_core.h>
#include <minidumpapiset.h>
#include <TlHelp32.h>
#include "Anit.hpp"
#pragma comment(lib,"Dbghelp.lib")

std::unordered_map<void*, int> Error_Map{};

void DebugCmdOpen() {
  if (!AllocConsole())
    return;
  freopen_s(reinterpret_cast<FILE **>(stdin), "CONIN$", "r", stdin);
  freopen_s(reinterpret_cast<FILE **>(stdout), "CONOUT$", "w", stdout);
  SetConsoleTitle(TEXT("NULL"));
  SetConsoleCP(CP_UTF8);
}

auto Error(_EXCEPTION_POINTERS *ExceptionInfo) {
	wchar_t *ErrorText = new wchar_t[0x1000];
	std::wstring path{};
	path.resize(MAX_PATH);
	SHGetSpecialFolderPathW(0, path.data(), CSIDL_DESKTOPDIRECTORY, 0);
	wcscat_s(path.data(), path.size(), xorstr_(L"\\MiNidump.dmp"));
	DeleteFileW(path.c_str());
	HANDLE hFile = CreateFileW(path.c_str(), GENERIC_WRITE,
		           FILE_SHARE_WRITE, NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);
	MINIDUMP_EXCEPTION_INFORMATION exptInfo;
	auto Flags	           = static_cast<MINIDUMP_TYPE>(MiniDumpNormal);
	exptInfo.ThreadId          = ::GetCurrentThreadId();
	exptInfo.ExceptionPointers = ExceptionInfo;
	MiniDumpWriteDump(GetCurrentProcess(),
		  GetCurrentProcessId(),
		  hFile, Flags,
		  &exptInfo, NULL, NULL);
	CloseHandle(hFile);
	swprintf(ErrorText, sizeof(wchar_t[0x1000]), xorstr_(L"辅助捕捉到重大错误喵~\n异常错误代码: %x 喵呜~\n异常地址: %p 喵呜~\n请联系管理员发送桌面路径%s文件喵~。\n是否忽略异常继续运行。喵!"),
	         ExceptionInfo->ExceptionRecord->ExceptionCode,
	         ExceptionInfo->ExceptionRecord->ExceptionAddress,
	         path.c_str());

	if(MessageBoxW(0, ErrorText, xorstr_(L"游戏意外崩溃了..喵~"), MB_YESNO) == IDYES) {
		Error_Map[ExceptionInfo->ExceptionRecord->ExceptionAddress] = 2;
		return EXCEPTION_CONTINUE_EXECUTION;
	}
	ExitProcess(0);
}

LONG VehExp(_EXCEPTION_POINTERS *ExceptionInfo) {
	if(Error_Map.count(ExceptionInfo->ExceptionRecord->ExceptionAddress) && Error_Map[ExceptionInfo->ExceptionRecord->ExceptionAddress] == 2) {
		// Error_Map[ExceptionInfo->ExceptionRecord->ExceptionAddress] = 1;
		return EXCEPTION_CONTINUE_SEARCH;
	}
	if(ExceptionInfo->ExceptionRecord->ExceptionCode == 0xC0000005 || ExceptionInfo->ExceptionRecord->ExceptionCode == 0xc0000374) {
		return Error(ExceptionInfo);
	}
	return EXCEPTION_CONTINUE_SEARCH;
}

// 设置混淆强度
[[clang::annotate("^icall=3")]]
void Run() {
	DebugCmdOpen();
	// AddVectoredExceptionHandler(0, VehExp);
	AnitAnitCheat::EnableByPass();
	auto dx12  = HookDx12Manager::GetInstance();
	auto Cheat = CheatManager::GetInstance();
	Cheat->Init();
	dx12->HookDx12();
}

[[clang::annotate("+indbr ^icall=3 ^indbr=0")]]
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call,
                      LPVOID lpReserved) {
  switch (ul_reason_for_call) {
  case DLL_PROCESS_ATTACH: {
    ULONG_PTR Moudle_ = reinterpret_cast<ULONG_PTR>(hModule);
	AnitAnitCheat::THIS_Module = hModule;
    CloseHandle(CreateThread(NULL, NULL, LPTHREAD_START_ROUTINE(Run),
                             new HMODULE(hModule), NULL, NULL));
    break;
  }
  case DLL_THREAD_ATTACH:
  case DLL_THREAD_DETACH:
  case DLL_PROCESS_DETACH:
    break;
  }
  return TRUE;
}