#pragma once
#include <Windows.h>
#include <detours.h>
#include <unordered_map>
#include <map>

#define CheckMetHodIsLoad(n) (*reinterpret_cast<PULONG64>(n) != NULL)
#define MetHodGetInstance(n) CheckMetHodIsLoad(n) ?  Hack::CallFuns<PVOID>(Cvar::Hack_Base.P_GetInstance, *reinterpret_cast<PULONG64>(n) ) : nullptr
#define MetHodGetInstance_(n,t) CheckMetHodIsLoad(n) ?  Hack::CallFuns<t>(Cvar::Hack_Base.P_GetInstance, *reinterpret_cast<PULONG64>(n) ) : nullptr

#define TypeGet(n) CheckMetHodIsLoad(n) ? (*reinterpret_cast<PULONG64>(n)): NULL
#define NEWNULL 0ull

#define Install_(a,b) HookMessage::Install(reinterpret_cast<decltype(&b)>(a) , &b)

#define callOrigin(function, ...) \
	HookMessage::call(function,__VA_ARGS__)

class HookMessage {
public:
	template<typename Fn>
	static void Install(Fn HookDir, Fn NewFuns) {
		if (!HookDir)return;
		Begin(HookDir, NewFuns);
		OringMap[reinterpret_cast<PVOID>(NewFuns)] = reinterpret_cast<PVOID>(HookDir);
	}
	template<typename Fn>
	static void UnInstall(Fn HookDir) {
		End(HookDir);
		OringMap.erase(reinterpret_cast<PVOID>(HookDir));
	}

	template<typename Fn>
	_NODISCARD static Fn GetOring(Fn Funs) noexcept {
		if (OringMap.find(reinterpret_cast<PVOID>(Funs)) == OringMap.end()) {
			return (Fn)nullptr;
		}
		return (Fn)(OringMap[reinterpret_cast<PVOID>(Funs)]);
	}

	template<typename RType, typename... Params>
	static RType call(RType(*handler)(Params...), Params... parms) {
		auto Origin = GetOring(handler);
		if (Origin != nullptr) {
			return Origin(parms...);
		}
		return RType();
	}

private:
	inline static std::map<PVOID, PVOID> OringMap{};

	template<typename Fn>
	static void Begin(Fn& Funs, Fn NewFuns) {
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourAttach(&(PVOID&)Funs, NewFuns);
		DetourTransactionCommit();
	}

	template<typename Fn>
	static void End(Fn _Funs) {
		Fn oring = GetOring(_Funs);
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourDetach(&(PVOID&)oring, (PVOID)_Funs);
		DetourTransactionCommit();
	}
};