
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPGameFlow.GPGameFlowUtils
// Size: 0x30 (Inherited: 0x30)
class UGPGameFlowUtils : public UBlueprintFunctionLibrary {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameFlow.GPGameFlowStringArg
// Size: 0x40 (Inherited: 0x30)
class UGPGameFlowStringArg : public UObject {
public:

	struct FString RawString; // 0x30(0x10)

	struct FString ToString(); // Function GPGameFlow.GPGameFlowStringArg.ToString // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameFlow.GameFlowDelegates
// Size: 0xb0 (Inherited: 0x38)
class UGameFlowDelegates : public UGameInstanceSubsystem {
public:

	char pad_38[0x8]; // 0x38(0x08)
	/*struct FMulticastInlineDelegate*/char OnPreEnterGameFlowStage[0x10]; // 0x40(0x10)
	/*struct FMulticastInlineDelegate*/char OnEnterGameFlowStage[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char OnPostEnterGameFlowStage[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char OnLeaveGameFlowStage[0x10]; // 0x70(0x10)
	/*struct FMulticastInlineDelegate*/char OnPostLeaveGameFlowStage[0x10]; // 0x80(0x10)
	/*struct FMulticastInlineDelegate*/char OnGameFlowGraphPlay[0x10]; // 0x90(0x10)
	/*struct FMulticastInlineDelegate*/char OnGameFlowGraphStop[0x10]; // 0xa0(0x10)

	void UpdatePendingNextFlowStage(enum class EGameFlowStageType InGameFlowStage); // Function GPGameFlow.GameFlowDelegates.UpdatePendingNextFlowStage // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameFlow.GameFlowGraph
// Size: 0xa8 (Inherited: 0x30)
class UGameFlowGraph : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FString GFGraphName; // 0x38(0x10)
	struct UGameFlowStage* CurrentStage; // 0x48(0x08)
	struct TMap<struct UClass*, struct UGameFlowStage*> AllStageMap; // 0x50(0x50)
	struct UGameInstance* OwningGameInstance; // 0xa0(0x08)

	void STATIC_OnLuaGameFlowEvent(struct UGameInstance* GameInst, struct FString MdlName, struct FString EvtName, struct FString ArgStr); // Function GPGameFlow.GameFlowGraph.OnLuaGameFlowEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameFlow.GPLuaGameFlowEventListener
// Size: 0x70 (Inherited: 0x38)
class UGPLuaGameFlowEventListener : public UBlueprintAsyncActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnLuaGameFlowEvent[0x10]; // 0x38(0x10)
	char pad_48[0x28]; // 0x48(0x28)

	struct UGPLuaGameFlowEventListener* STATIC_ListenLuaModuleEvent(struct UGameFlowStage* GFStage, struct FString ModuleEvent); // Function GPGameFlow.GPLuaGameFlowEventListener.ListenLuaModuleEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameFlow.GameFlowStage
// Size: 0x90 (Inherited: 0x30)
class UGameFlowStage : public UObject {
public:

	struct TArray<struct UGPLuaGameFlowEventListener*> ListLuaGameFlowEventListeners; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)
	struct UObject* LastLeaveArgs; // 0x58(0x08)
	bool bEnableGlobalLuaModuleFuncAndEvent; // 0x60(0x01)
	enum class EGameFlowStageType FlowStageType; // 0x61(0x01)
	enum class EGameFlowStageType PendingNextFlowStage; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
	struct FString GFStageName; // 0x68(0x10)
	struct UClass* GFStageBackClass; // 0x78(0x08)
	struct UGameFlowGraph* Owner; // 0x80(0x08)
	struct UGPGameFlowStagePlayerBase* Player; // 0x88(0x08)

	void OnTick(float DeltaTime); // Function GPGameFlow.GameFlowStage.OnTick // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameFlow.GPGameFlowGraphPlayer
// Size: 0x40 (Inherited: 0x38)
class UGPGameFlowGraphPlayer : public UGameInstanceSubsystem {
public:

	struct UGameFlowGraph* CurrentGraph; // 0x38(0x08)

	void Stop(); // Function GPGameFlow.GPGameFlowGraphPlayer.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameFlow.GPGameFlowStagePlayerBase
// Size: 0x48 (Inherited: 0x38)
class UGPGameFlowStagePlayerBase : public UBlueprintAsyncActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnFlowBranch[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGameFlow.GPGameFlowStagePlayer
// Size: 0x48 (Inherited: 0x48)
class UGPGameFlowStagePlayer : public UGPGameFlowStagePlayerBase {
public:


	struct UGPGameFlowStagePlayer* STATIC_EnterGameFlowStage(struct UGameFlowGraph* GFGraph, struct UClass* GFStageClass); // Function GPGameFlow.GPGameFlowStagePlayer.EnterGameFlowStage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
