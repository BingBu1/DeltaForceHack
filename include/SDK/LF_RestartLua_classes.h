
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass LF_RestartLua.LF_RestartLua_C
// Size: 0x98 (Inherited: 0x88)
class ULF_RestartLua_C : public UDFMFlowRestartLuaBase {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x88(0x08)
	struct FTimerHandle CachedTimerHandle; // 0x90(0x08)

	void DoReconnectServer(); // Function LF_RestartLua.LF_RestartLua_C.DoReconnectServer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
