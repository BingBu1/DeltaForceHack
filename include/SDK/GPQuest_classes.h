
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPQuest.GPQuestActionAsyncReturnActionBase
// Size: 0x38 (Inherited: 0x38)
class UGPQuestActionAsyncReturnActionBase : public UBlueprintAsyncActionBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestActionLib_Basic
// Size: 0x30 (Inherited: 0x30)
class UGPQuestActionLib_Basic : public UBlueprintFunctionLibrary {
public:


	void STATIC_QA_SetStageTitle(struct AGPQuestActionContext* QAContext, struct FText InStageTitle); // Function GPQuest.GPQuestActionLib_Basic.QA_SetStageTitle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestAudioSubsystem
// Size: 0x3f0 (Inherited: 0x378)
class AGPQuestAudioSubsystem : public AActor {
public:

	struct UDataTable* AudioDataTable2D; // 0x378(0x08)
	struct UDataTable* AudioDataTable3D; // 0x380(0x08)
	struct UDataTable* AudioDataTableCommon; // 0x388(0x08)
	struct TArray<struct FGPQuestPlayingAudioInfo> PlayingAudiosInfo; // 0x390(0x10)
	char pad_3A0[0x50]; // 0x3a0(0x50)

	void StopAudio(struct FName AudioDataTableKey, int32_t TransitionMS); // Function GPQuest.GPQuestAudioSubsystem.StopAudio // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestClientProxy
// Size: 0x468 (Inherited: 0x378)
class AGPQuestClientProxy : public AActor {
public:

	/*struct FMulticastInlineDelegate*/char ServerLootingStatusBroadcast[0x10]; // 0x378(0x10)
	/*struct FMulticastInlineDelegate*/char ServerMapStatusBroadcast[0x10]; // 0x388(0x10)
	/*struct FMulticastInlineDelegate*/char ServerHudViewsLoadedBroadcast[0x10]; // 0x398(0x10)
	struct TArray<enum class GameHUDSate> AddedGameHudStates; // 0x3a8(0x10)
	struct TArray<enum class GameHUDSate> RemovedGameHudStates; // 0x3b8(0x10)
	struct FGPQuestObjectiveHUDInfo ObjectiveHUDInfo; // 0x3c8(0x50)
	struct FGPQuestObjectiveHUDInfo OptionalObjectiveHUDInfo; // 0x418(0x50)

	void SetOptionalObjectiveInfo(struct FGPQuestObjectiveHUDInfo& InObjectiveInfo); // Function GPQuest.GPQuestClientProxy.SetOptionalObjectiveInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestCountdownBase
// Size: 0x420 (Inherited: 0x378)
class AGPQuestCountdownBase : public AActor {
public:

	bool bIsStoped; // 0x378(0x01)
	bool bIsFinished; // 0x379(0x01)
	char pad_37A[0x6]; // 0x37a(0x06)
	int64_t StartDateTime; // 0x380(0x08)
	int32_t CountdownDuration; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct FText Title; // 0x390(0x18)
	char pad_3A8[0x10]; // 0x3a8(0x10)
	enum class ECountDownHUDClassType CountDownHUDClassType; // 0x3b8(0x01)
	enum class EQA_CountdownType CountdownType; // 0x3b9(0x01)
	char pad_3BA[0x6]; // 0x3ba(0x06)
	struct UClass* CountDownHUDClass; // 0x3c0(0x08)
	char pad_3C8[0x8]; // 0x3c8(0x08)
	struct TMap<enum class ECountDownHUDClassType, struct UClass*> CountDownHUDMap; // 0x3d0(0x50)

	void Recountdown(int32_t Duration); // Function GPQuest.GPQuestCountdownBase.Recountdown // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestTextUtils
// Size: 0x30 (Inherited: 0x30)
class UGPQuestTextUtils : public UBlueprintFunctionLibrary {
public:


	struct FText STATIC_GetFinalText(struct FGPQuestText& Text); // Function GPQuest.GPQuestTextUtils.GetFinalText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestHUDSubsystem
// Size: 0x438 (Inherited: 0x378)
class AGPQuestHUDSubsystem : public AActor {
public:

	struct FGPQuestObjectiveHUDInfo ObjectiveInfo; // 0x378(0x50)
	enum class EGPQuestObjectiveState ObjectiveState; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	/*struct FMulticastInlineDelegate*/char OnSetObjectiveTitleEvent[0x10]; // 0x3d0(0x10)
	/*struct FMulticastInlineDelegate*/char OnObjectiveStateChangedEvent[0x10]; // 0x3e0(0x10)
	/*struct FMulticastInlineDelegate*/char OnSetObjTitleWithHBarEvent[0x10]; // 0x3f0(0x10)
	struct FText StageTitle; // 0x400(0x18)
	/*struct FMulticastInlineDelegate*/char OnSetStageTitleEvent[0x10]; // 0x418(0x10)
	/*struct FMulticastInlineDelegate*/char OnPlayObjectiveNoticeEvent[0x10]; // 0x428(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestInteractorInterface
// Size: 0x30 (Inherited: 0x30)
class UGPQuestInteractorInterface : public UInterface {
public:


	void OnStatusChanged_Broadcast(); // Function GPQuest.GPQuestInteractorInterface.OnStatusChanged_Broadcast // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestLevelResetComponent
// Size: 0x128 (Inherited: 0x100)
class UGPQuestLevelResetComponent : public UActorComponent {
public:

	/*struct FMulticastInlineDelegate*/char OnLevelReset[0x10]; // 0x100(0x10)
	struct TArray<struct FGPQuestReleventStageInfo> RelevantStages; // 0x110(0x10)
	bool bListenResetEventOnce; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)

	void TestReset(); // Function GPQuest.GPQuestLevelResetComponent.TestReset // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestMarkerBase
// Size: 0x418 (Inherited: 0x378)
class AGPQuestMarkerBase : public AActor {
public:

	struct UGPQuestRuleHelperComponent* RuleHelper; // 0x378(0x08)
	float DistanceThreshold; // 0x380(0x04)
	float MarkerScale; // 0x384(0x04)
	enum class EGPQuestActionMarkerType markerType; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	float MarkerTimeLimit; // 0x38c(0x04)
	bool AlwaysTop; // 0x390(0x01)
	bool ShowInBigMap; // 0x391(0x01)
	char pad_392[0xa]; // 0x392(0x0a)
	bool MarkerActive; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	int32_t MarkerActiveUpdate; // 0x3a0(0x04)
	bool Client_AlwaysTop_Active; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	struct TArray<uint64_t> ValidUins; // 0x3a8(0x10)
	struct FString DebugName; // 0x3b8(0x10)
	bool ShowMarkCircel; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	struct FVector ShowMarkCircelOffset; // 0x3cc(0x0c)
	struct FVector ShowMarkCircelScale; // 0x3d8(0x0c)
	bool IsUIOutMarkerArea; // 0x3e4(0x01)
	bool bIsAimed; // 0x3e5(0x01)
	char pad_3E6[0x2]; // 0x3e6(0x02)
	float MaxDistance; // 0x3e8(0x04)
	struct FVector2D OriginMarkerPos; // 0x3ec(0x08)
	struct FVector2D EllipseAreaMarkerPos; // 0x3f4(0x08)
	struct FVector2D OutScreenDir; // 0x3fc(0x08)
	char pad_404[0xc]; // 0x404(0x0c)
	struct UUserWidget* MarkerView; // 0x410(0x08)

	void ShowMarkCircelOnClient(); // Function GPQuest.GPQuestMarkerBase.ShowMarkCircelOnClient // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestRuleHelperComponent
// Size: 0x100 (Inherited: 0x100)
class UGPQuestRuleHelperComponent : public UActorComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestSettings
// Size: 0x58 (Inherited: 0x30)
class UGPQuestSettings : public UObject {
public:

	struct UClass* QuestParentClass; // 0x30(0x08)
	struct UClass* QuestStageParentClass; // 0x38(0x08)
	struct UClass* QuestDefaultMarkerClass; // 0x40(0x08)
	struct UClass* QuestDefaultCountdownClass; // 0x48(0x08)
	bool bEnableCleanupStageRelevantLevels; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	struct UGPQuestSettings* STATIC_Get(); // Function GPQuest.GPQuestSettings.Get // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestStageUtils
// Size: 0x30 (Inherited: 0x30)
class UGPQuestStageUtils : public UBlueprintFunctionLibrary {
public:


	struct FString STATIC_GetStageTitleKey(struct AGPQuestStage* QStage); // Function GPQuest.GPQuestStageUtils.GetStageTitleKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestSystem
// Size: 0xf8 (Inherited: 0x38)
class UGPQuestSystem : public UWorldSubsystem {
public:

	char pad_38[0x8]; // 0x38(0x08)
	/*struct FMulticastInlineDelegate*/char OnPreBeginQuestEvent[0x10]; // 0x40(0x10)
	/*struct FMulticastInlineDelegate*/char OnPostEndQuestEvent[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char OnPreBeginStageEvent[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char OnPostEndStageEvent[0x10]; // 0x70(0x10)
	/*struct FMulticastInlineDelegate*/char OnStageStateChangedEvent[0x10]; // 0x80(0x10)
	/*struct FMulticastInlineDelegate*/char OnResetStageEvent[0x10]; // 0x90(0x10)
	/*struct FMulticastInlineDelegate*/char OnPreBeginObjectiveEvent[0x10]; // 0xa0(0x10)
	/*struct FMulticastInlineDelegate*/char OnPostEndObjectiveEvent[0x10]; // 0xb0(0x10)
	/*struct FMulticastInlineDelegate*/char OnReplayStageEvent[0x10]; // 0xc0(0x10)
	/*struct FMulticastInlineDelegate*/char OnNoReplayStageEvent[0x10]; // 0xd0(0x10)
	struct AGPQuest* CurrentQuest; // 0xe0(0x08)
	struct TArray<struct AGPQuest*> PlayingQuests; // 0xe8(0x10)

	void UnloadQuest(struct UObject* WorldContextObject, int32_t QuestID); // Function GPQuest.GPQuestSystem.UnloadQuest // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestUtils
// Size: 0x30 (Inherited: 0x30)
class UGPQuestUtils : public UBlueprintFunctionLibrary {
public:


	struct AGPQuest* STATIC_ToQuest(struct AGPQuestActionContext* QAContext); // Function GPQuest.GPQuestUtils.ToQuest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestVolume
// Size: 0x3f8 (Inherited: 0x378)
class AGPQuestVolume : public AActor {
public:

	bool bEnableRangeRadius; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FQuestFullID QuestFullID; // 0x380(0x10)
	struct USphereComponent* QuestVolumeTrigger; // 0x390(0x08)
	int32_t SOLQuestCDOId; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct TArray<struct AActor*> InQuestVolumeActors; // 0x3a0(0x10)
	struct AGPQuest* GPQuest; // 0x3b0(0x08)
	char pad_3B8[0x4]; // 0x3b8(0x04)
	int32_t ContractTeamID; // 0x3bc(0x04)
	struct FText ObjectionDes; // 0x3c0(0x18)
	struct FText BriefObjectionDes; // 0x3d8(0x18)
	bool IsTeamShared; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)

	void OnQuestAreaTriggerEndOverlapped(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function GPQuest.GPQuestVolume.OnQuestAreaTriggerEndOverlapped // (Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPTQuestContext
// Size: 0x78 (Inherited: 0x30)
class UGPTQuestContext : public UObject {
public:

	char pad_30[0x48]; // 0x30(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPTRPCQuestComponent
// Size: 0x100 (Inherited: 0x100)
class UGPTRPCQuestComponent : public UActorComponent {
public:


	void ServerReplayStage(struct AGPQuest* Quest); // Function GPQuest.GPTRPCQuestComponent.ServerReplayStage // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPTQuestNative
// Size: 0x60 (Inherited: 0x58)
class UGPTQuestNative : public UGPToolBase {
public:

	struct UGPTQuestContext* Context; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestActionContext
// Size: 0x408 (Inherited: 0x378)
class AGPQuestActionContext : public AActor {
public:

	struct TMap<int32_t, struct UGPQuestObjectiveAsyncReturnActionBase*> MapObjectiveAsyncReturnActions; // 0x378(0x50)
	int32_t CurrentObjectiveId; // 0x3c8(0x04)
	struct FGPQuestObjectiveInfo RecentObjectiveInfo; // 0x3cc(0x08)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct TArray<struct UGPQuestActionAsyncReturnActionBase*> QActions; // 0x3d8(0x10)
	struct TArray<struct UGPQuestStageAsyncReturnActionBase*> QStageActions; // 0x3e8(0x10)
	char pad_3F8[0x10]; // 0x3f8(0x10)

	void StageGraphJumpObjective(int32_t objectiveId); // Function GPQuest.GPQuestActionContext.StageGraphJumpObjective // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestObjectiveAsyncReturnActionBase
// Size: 0x48 (Inherited: 0x38)
class UGPQuestObjectiveAsyncReturnActionBase : public UBlueprintAsyncActionBase {
public:

	struct TArray<struct UGPQuestActionAsyncReturnActionBase*> QActions; // 0x38(0x10)

	void FireReturnAction(enum class EGPQuestObjectiveAsyncReturnBranch Branch); // Function GPQuest.GPQuestObjectiveAsyncReturnActionBase.FireReturnAction // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestStageAsyncReturnActionBase
// Size: 0x38 (Inherited: 0x38)
class UGPQuestStageAsyncReturnActionBase : public UBlueprintAsyncActionBase {
public:


	void FireReturnAction(enum class EGPQuestStageAsyncReturnBranch Branch); // Function GPQuest.GPQuestStageAsyncReturnActionBase.FireReturnAction // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuest
// Size: 0x4a0 (Inherited: 0x408)
class AGPQuest : public AGPQuestActionContext {
public:

	struct UGPQuestRuleHelperComponent* RuleHelper; // 0x408(0x08)
	int32_t QuestID; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct FString QuestName; // 0x418(0x10)
	struct FString QLevelBaseDir; // 0x428(0x10)
	bool bMainQuest; // 0x438(0x01)
	bool bPlaying; // 0x439(0x01)
	char pad_43A[0x6]; // 0x43a(0x06)
	struct UClass* ClassOfClientProxy; // 0x440(0x08)
	enum class EGPQuestEndReason LastEndReason; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct AGPQuestClientProxy* ClientProxyActor; // 0x450(0x08)
	struct TArray<struct AGPQuestMarkerBase*> ClientQuestMarkerArray; // 0x458(0x10)
	struct AGPQuestStage* CurrentStage; // 0x468(0x08)
	int32_t QuestStagesCount; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct TArray<struct UClass*> CachedQuestStageClassList; // 0x478(0x10)
	struct AGPQuestVolume* GPQuestVolume; // 0x488(0x08)
	struct TArray<struct AGPQuestMarkerBase*> GPQuestMarkerArray; // 0x490(0x10)

	void QuestGraphJumpStage(struct FString StageName, enum class EGPQuestPlayReason reason); // Function GPQuest.GPQuest.QuestGraphJumpStage // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestStage
// Size: 0x528 (Inherited: 0x408)
class AGPQuestStage : public AGPQuestActionContext {
public:

	struct UGPQuestRuleHelperComponent* RuleHelper; // 0x408(0x08)
	struct UGPQuestStageAsyncReturnActionBase* StageAsyncReturnAction; // 0x410(0x08)
	struct TArray<struct FName> ReturnActionPins; // 0x418(0x10)
	enum class ENetRole LocalNetRole; // 0x428(0x01)
	enum class ENetRole RemoteNetRole; // 0x429(0x01)
	char pad_42A[0x6]; // 0x42a(0x06)
	struct AGPQuest* OwningQuest; // 0x430(0x08)
	struct FGPQuestStageData Data; // 0x438(0x60)
	enum class EGPQuestStageState StageState; // 0x498(0x01)
	enum class EGPQuestPlayReason PlayReason; // 0x499(0x01)
	char pad_49A[0x6]; // 0x49a(0x06)
	struct ULevelStreaming* QLevelStreaming; // 0x4a0(0x08)
	struct ULevel* QLevel; // 0x4a8(0x08)
	struct FName QLevelFullName; // 0x4b0(0x08)
	struct FString QLevelBaseDir; // 0x4b8(0x10)
	struct FString StageName; // 0x4c8(0x10)
	int32_t StageId; // 0x4d8(0x04)
	int32_t OwningQuestId; // 0x4dc(0x04)
	bool bPlaying; // 0x4e0(0x01)
	char pad_4E1[0x3]; // 0x4e1(0x03)
	int32_t StageObjectivesCount; // 0x4e4(0x04)
	float MaxResetStageDelay; // 0x4e8(0x04)
	bool bNeedResetStageWhenFailed; // 0x4ec(0x01)
	char pad_4ED[0x3]; // 0x4ed(0x03)
	float StageTimeLimit; // 0x4f0(0x04)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct TArray<struct FString> RelevantLevels; // 0x4f8(0x10)
	struct TArray<struct FString> RelevantLevels_HD; // 0x508(0x10)
	struct FName FadeUITextKeyName; // 0x518(0x08)
	char pad_520[0x8]; // 0x520(0x08)

	void ResetStageBroadcast(enum class EGPQuestPlayReason reason); // Function GPQuest.GPQuestStage.ResetStageBroadcast // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestObjectiveAsyncReturnAction_Default
// Size: 0x68 (Inherited: 0x48)
class UGPQuestObjectiveAsyncReturnAction_Default : public UGPQuestObjectiveAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnComplete[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailed[0x10]; // 0x58(0x10)

	void STATIC_EndQuestObjectiveNew(struct AGPQuest* Quest, enum class EGPQuestObjectiveAsyncReturnBranch Branch); // Function GPQuest.GPQuestObjectiveAsyncReturnAction_Default.EndQuestObjectiveNew // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPQuest.GPQuestStageAsyncReturnAction_Default
// Size: 0x98 (Inherited: 0x38)
class UGPQuestStageAsyncReturnAction_Default : public UGPQuestStageAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnComplete[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailed[0x10]; // 0x48(0x10)
	char pad_58[0x40]; // 0x58(0x40)

	void STATIC_ReplayQuestStage(struct AGPQuest* Quest, enum class EGPQuestPlayReason reason); // Function GPQuest.GPQuestStageAsyncReturnAction_Default.ReplayQuestStage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
