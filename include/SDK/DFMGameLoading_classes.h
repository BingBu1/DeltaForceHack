
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMGameLoading.DFMFlowBaseInterface
// Size: 0x30 (Inherited: 0x30)
class UDFMFlowBaseInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowManager
// Size: 0x1b8 (Inherited: 0x30)
class UDFMFlowManager : public UObject {
public:

	char pad_30[0xa]; // 0x30(0x0a)
	struct FMulticastSparseDelegate OnLoadingFinished; // 0x3a(0x01)
	struct FMulticastSparseDelegate OnLoadingMainFlowFinishedDelegate; // 0x3b(0x01)
	struct FMulticastSparseDelegate OnLoadingProgressUpdate; // 0x3c(0x01)
	char pad_3D[0x13]; // 0x3d(0x13)
	struct FLoadingFlowSteps LoadingFlowSteps; // 0x50(0x48)
	struct TArray<struct UDFMFlowBase*> RunningFlows; // 0x98(0x10)
	struct FRunningFlowContext CurRunningMainFlowContext; // 0xa8(0x40)
	struct UDFMFlowBase* CurrentMainFlow; // 0xe8(0x08)
	struct TArray<struct UDFMFlowCheckable*> FlowCheckables; // 0xf0(0x10)
	char pad_100[0x10]; // 0x100(0x10)
	struct TArray<struct FLoadingFlowTypeConfig> CachedLoadingConfig; // 0x110(0x10)
	struct UGameInstance* CachedGameInstance; // 0x120(0x08)
	struct FTimerHandle NextMainFlowTimerHandle; // 0x128(0x08)
	char pad_130[0x88]; // 0x130(0x88)

	void StartFlowsWithConfigIns(struct ULoadingFlowStepsConfig* ConfigIns); // Function DFMGameLoading.DFMFlowManager.StartFlowsWithConfigIns // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMGameLoadingManager
// Size: 0x198 (Inherited: 0x38)
class UDFMGameLoadingManager : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnLoadingViewVisible[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnLoadingViewClosed[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnEnterTargetLevel[0x10]; // 0x58(0x10)
	struct ULoadingViewBase* LoadingView; // 0x68(0x08)
	struct ULoadingViewContext* LoadingViewContext; // 0x70(0x08)
	char pad_78[0x30]; // 0x78(0x30)
	struct UDFMFlowManager* LoadingFlowManager; // 0xa8(0x08)
	char pad_B0[0x38]; // 0xb0(0x38)
	struct ULoadingSubDataWrapper* LoadingSubDataWrapper; // 0xe8(0x08)
	struct ULoadingConfigSettings* LoadingConfigSettings; // 0xf0(0x08)
	/*struct FMulticastInlineDelegate*/char OnGameLoadingEnd[0x10]; // 0xf8(0x10)
	/*struct FMulticastInlineDelegate*/char OnGameLoadingFinishedCallLuaSettlement[0x10]; // 0x108(0x10)
	/*struct FMulticastInlineDelegate*/char OnGameLoadingPostConnectDS[0x10]; // 0x118(0x10)
	char pad_128[0x18]; // 0x128(0x18)
	/*struct FMulticastInlineDelegate*/char OnLoadingFailed2LoginDelegate[0x10]; // 0x140(0x10)
	char pad_150[0x48]; // 0x150(0x48)

	void WarmUpLoadingView(); // Function DFMGameLoading.DFMGameLoadingManager.WarmUpLoadingView // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMPreloadManager
// Size: 0xa0 (Inherited: 0x30)
class UDFMPreloadManager : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<uint64_t> PreloadHandleArray; // 0x40(0x10)
	struct TMap<struct UClass*, int32_t> PreloadActorMap; // 0x50(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.LoadingFlowStepsConfig
// Size: 0xc8 (Inherited: 0x30)
class ULoadingFlowStepsConfig : public UObject {
public:

	struct FLoadingFlowSteps LoadingFlowSteps; // 0x30(0x48)
	/*struct TSoftClassPtr<UObject>*/char DefaultLoadingView[0x28]; // 0x78(0x28)
	/*struct TSoftClassPtr<UObject>*/char DefaultMovieLoadingView[0x28]; // 0xa0(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.LoadingConfigSettings
// Size: 0x148 (Inherited: 0x30)
class ULoadingConfigSettings : public UObject {
public:

	struct FSoftClassPath LoadingViewClassPath; // 0x30(0x18)
	struct FSoftClassPath WarfareLoadingViewClassPath; // 0x48(0x18)
	struct TArray<struct FSoftClassPath> UsableLoadingViewClassList; // 0x60(0x10)
	struct FString LobbyLevelName; // 0x70(0x10)
	struct FString LobbyLevelFullPath; // 0x80(0x10)
	struct FString LoginLevelName; // 0x90(0x10)
	struct FString LoginLevelFullPath; // 0xa0(0x10)
	struct FString LoadingLevelName; // 0xb0(0x10)
	struct FString LoadingLevelFullPath; // 0xc0(0x10)
	/*struct TSoftClassPtr<UObject>*/char OpenWorldPVPTargetLevelFlowSteps[0x28]; // 0xd0(0x28)
	/*struct TSoftClassPtr<UObject>*/char OpenWorldPVETargetLevelFlowSteps[0x28]; // 0xf8(0x28)
	/*struct TSoftClassPtr<UObject>*/char EditorGameInitFlowSteps[0x28]; // 0x120(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.LoadingSubDataWrapper
// Size: 0x60 (Inherited: 0x30)
class ULoadingSubDataWrapper : public UObject {
public:

	char pad_30[0x30]; // 0x30(0x30)

	void WarmUpNextMainStageData(struct FLoadingGameFlowStageConfig& PreLoadDataConfig); // Function DFMGameLoading.LoadingSubDataWrapper.WarmUpNextMainStageData // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.LoadingViewContext
// Size: 0xe8 (Inherited: 0x30)
class ULoadingViewContext : public UObject {
public:

	char pad_30[0x50]; // 0x30(0x50)
	struct TMap<struct FSoftClassPath, struct UClass*> CachedLoadingViewClasses; // 0x80(0x50)
	char pad_D0[0x18]; // 0xd0(0x18)

	void OnLoadingViewClassLoaded(); // Function DFMGameLoading.LoadingViewContext.OnLoadingViewClassLoaded // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowBase
// Size: 0x70 (Inherited: 0x30)
class UDFMFlowBase : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct UDFMFlowManager* FlowManager; // 0x38(0x08)
	struct UGameInstance* CachedGameInstance; // 0x40(0x08)
	char pad_48[0x28]; // 0x48(0x28)

	void OnFlowStart(); // Function DFMGameLoading.DFMFlowBase.OnFlowStart // (Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowBPBase
// Size: 0x70 (Inherited: 0x70)
class UDFMFlowBPBase : public UDFMFlowBase {
public:


	void BP_Tick(float DeltaSeconds); // Function DFMGameLoading.DFMFlowBPBase.BP_Tick // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowCheckable
// Size: 0x70 (Inherited: 0x70)
class UDFMFlowCheckable : public UDFMFlowBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowCheckablePoint
// Size: 0x78 (Inherited: 0x70)
class UDFMFlowCheckablePoint : public UDFMFlowBase {
public:

	char pad_70[0x8]; // 0x70(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowCleanLobby
// Size: 0x70 (Inherited: 0x70)
class UDFMFlowCleanLobby : public UDFMFlowBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowDelayCheckablePoint
// Size: 0x80 (Inherited: 0x70)
class UDFMFlowDelayCheckablePoint : public UDFMFlowBase {
public:

	char pad_70[0x10]; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowFetchLobbyServerData
// Size: 0x70 (Inherited: 0x70)
class UDFMFlowFetchLobbyServerData : public UDFMFlowBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowJustWait
// Size: 0x80 (Inherited: 0x70)
class UDFMFlowJustWait : public UDFMFlowBase {
public:

	char pad_70[0x10]; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowLoadDataTable
// Size: 0x70 (Inherited: 0x70)
class UDFMFlowLoadDataTable : public UDFMFlowBase {
public:


	void OnPreloadFinish(struct FDataTableUseSceneValue& UseSceneType, int32_t LoadedNum); // Function DFMGameLoading.DFMFlowLoadDataTable.OnPreloadFinish // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowLuaBusinessProcess
// Size: 0x70 (Inherited: 0x70)
class UDFMFlowLuaBusinessProcess : public UDFMFlowBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowOpenTargetLevel
// Size: 0xa0 (Inherited: 0x70)
class UDFMFlowOpenTargetLevel : public UDFMFlowBase {
public:

	char pad_70[0x30]; // 0x70(0x30)

	void LoadMapProgress(float Progress); // Function DFMGameLoading.DFMFlowOpenTargetLevel.LoadMapProgress // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowPrecompilePSO
// Size: 0x80 (Inherited: 0x70)
class UDFMFlowPrecompilePSO : public UDFMFlowBase {
public:

	char pad_70[0x10]; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMSubFlowBase
// Size: 0x78 (Inherited: 0x70)
class UDFMSubFlowBase : public UDFMFlowBase {
public:

	struct TWeakObjectPtr<struct UDFMFlowBase> ParentFlowPtr; // 0x70(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowPrepareStartupBP
// Size: 0x70 (Inherited: 0x70)
class UDFMFlowPrepareStartupBP : public UDFMFlowBase {
public:


	void OnPreloadFinished(struct TArray<struct FSoftObjectPath> Paths); // Function DFMGameLoading.DFMFlowPrepareStartupBP.OnPreloadFinished // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowRestartLuaBase
// Size: 0x88 (Inherited: 0x70)
class UDFMFlowRestartLuaBase : public UDFMFlowBase {
public:

	char pad_70[0x18]; // 0x70(0x18)

	void UpdateProgress(float Progress); // Function DFMGameLoading.DFMFlowRestartLuaBase.UpdateProgress // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowWeaponData
// Size: 0x70 (Inherited: 0x70)
class UDFMFlowWeaponData : public UDFMFlowBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowCheckAllPlayerStreamingLevelCompleted
// Size: 0x78 (Inherited: 0x70)
class UDFMFlowCheckAllPlayerStreamingLevelCompleted : public UDFMFlowCheckable {
public:

	char pad_70[0x8]; // 0x70(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowTimerCheck
// Size: 0x80 (Inherited: 0x70)
class UDFMFlowTimerCheck : public UDFMFlowCheckable {
public:

	char pad_70[0x10]; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowResourcePreload
// Size: 0x90 (Inherited: 0x70)
class UDFMFlowResourcePreload : public UDFMFlowCheckable {
public:

	char pad_70[0x20]; // 0x70(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowStreamingLevelWatch
// Size: 0x78 (Inherited: 0x70)
class UDFMFlowStreamingLevelWatch : public UDFMFlowCheckable {
public:

	char pad_70[0x8]; // 0x70(0x08)

	void OnStreamingLevelLoadPercentage(int32_t Percentage); // Function DFMGameLoading.DFMFlowStreamingLevelWatch.OnStreamingLevelLoadPercentage // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowUIAsyncLoadWatch
// Size: 0x90 (Inherited: 0x70)
class UDFMFlowUIAsyncLoadWatch : public UDFMFlowCheckable {
public:

	char pad_70[0x20]; // 0x70(0x20)

	void OnUIAsyncLoadPercentage(float Percentage, struct TArray<struct FName> BlockGameFlowViewNameArray); // Function DFMGameLoading.DFMFlowUIAsyncLoadWatch.OnUIAsyncLoadPercentage // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMSubFlowBPBase
// Size: 0x78 (Inherited: 0x78)
class UDFMSubFlowBPBase : public UDFMSubFlowBase {
public:


	void BP_Tick(float DeltaSeconds); // Function DFMGameLoading.DFMSubFlowBPBase.BP_Tick // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowCheckLobbyReady
// Size: 0x80 (Inherited: 0x80)
class UDFMFlowCheckLobbyReady : public UDFMFlowTimerCheck {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowCheckPlayerState
// Size: 0x80 (Inherited: 0x80)
class UDFMFlowCheckPlayerState : public UDFMFlowTimerCheck {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMGameLoading.DFMFlowPrepareSafeHouse
// Size: 0x88 (Inherited: 0x78)
class UDFMFlowPrepareSafeHouse : public UDFMSubFlowBPBase {
public:

	char pad_78[0x10]; // 0x78(0x10)

	void TeleportEnd(); // Function DFMGameLoading.DFMFlowPrepareSafeHouse.TeleportEnd // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
