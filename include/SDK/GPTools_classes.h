
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPTools.GPTFlowLogger
// Size: 0x30 (Inherited: 0x30)
class UGPTFlowLogger : public UObject {
public:


	void STATIC_ResetBuffer(); // Function GPTools.GPTFlowLogger.ResetBuffer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPTools.GPTFlowTimeline
// Size: 0x30 (Inherited: 0x30)
class UGPTFlowTimeline : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPTools.GPTFlowTimelineContext
// Size: 0x110 (Inherited: 0x30)
class UGPTFlowTimelineContext : public UObject {
public:

	char pad_30[0xe0]; // 0x30(0xe0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPTools.GPToolGUI
// Size: 0x30 (Inherited: 0x30)
class UGPToolGUI : public UObject {
public:


	bool STATIC_VSliderIntEx(struct FString Label, struct FVector2D size, int32_t& V, int32_t v_min, int32_t v_max, struct FString Format); // Function GPTools.GPToolGUI.VSliderIntEx // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPTools.GPToolManager
// Size: 0x368 (Inherited: 0x38)
class UGPToolManager : public UGameInstanceSubsystem {
public:

	struct TArray<struct UGPToolBase*> Tools; // 0x38(0x10)
	struct UClass* ScriptToolBaseClass; // 0x48(0x08)
	struct UGameViewportClient* GameViewport; // 0x50(0x08)
	char pad_58[0x10]; // 0x58(0x10)
	struct UGPToolBase* SelectedTool; // 0x68(0x08)
	char pad_70[0x2f8]; // 0x70(0x2f8)

	void Show(); // Function GPTools.GPToolManager.Show // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPTools.GPTRPCComponent
// Size: 0x100 (Inherited: 0x100)
class UGPTRPCComponent : public UActorComponent {
public:


	void ServerExecConsoleCommand(struct FString Cmd); // Function GPTools.GPTRPCComponent.ServerExecConsoleCommand // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPTools.GPToolSettings
// Size: 0x68 (Inherited: 0x40)
class UGPToolSettings : public UDeveloperSettings {
public:

	struct TArray<struct UClass*> BuiltinToolList; // 0x40(0x10)
	struct UClass* ScriptToolBaseClass; // 0x50(0x08)
	struct UClass* SignificanceBaseClass; // 0x58(0x08)
	struct UClass* SignificanceDefaultClass; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPTools.GPTProfilerContext
// Size: 0x70 (Inherited: 0x30)
class UGPTProfilerContext : public UObject {
public:

	char pad_30[0x40]; // 0x30(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPTools.GPToolBase
// Size: 0x58 (Inherited: 0x30)
class UGPToolBase : public UObject {
public:

	struct FString Name; // 0x30(0x10)
	int32_t Permission; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString ScriptPath; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPTools.GPToolBPBase
// Size: 0x58 (Inherited: 0x58)
class UGPToolBPBase : public UGPToolBase {
public:


	void OnImGUI(); // Function GPTools.GPToolBPBase.OnImGUI // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPTools.GPTProfiler
// Size: 0x58 (Inherited: 0x58)
class UGPTProfiler : public UGPToolBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
