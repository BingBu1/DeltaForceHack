
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMQuest.QASimpleActionProxy
// Size: 0x50 (Inherited: 0x30)
class UQASimpleActionProxy : public UObject {
public:

	char pad_30[0x20]; // 0x30(0x20)

	void Init(struct FSimpleActionArguments& InArg1, struct FSimpleActionExtArgument& InArg2); // Function DFMQuest.QASimpleActionProxy.Init // (Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QASimpleQuestProxy
// Size: 0x98 (Inherited: 0x30)
class UQASimpleQuestProxy : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FString LisName; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnTrigger[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnUnTrigger[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnSingleTrigger[0x10]; // 0x68(0x10)
	/*struct FMulticastInlineDelegate*/char OnUnSingleTrigger[0x10]; // 0x78(0x10)
	/*struct FMulticastInlineDelegate*/char OnTimeTickTrigger[0x10]; // 0x88(0x10)

	void BP_ShowTitle(int32_t Index, bool Enable); // Function DFMQuest.QASimpleQuestProxy.BP_ShowTitle // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.ContractQuest
// Size: 0x4b8 (Inherited: 0x4a0)
class AContractQuest : public AGPQuest {
public:

	char pad_4A0[0x8]; // 0x4a0(0x08)
	struct FQuestFullID QuestFullID; // 0x4a8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestAISettings
// Size: 0x48 (Inherited: 0x30)
class UDFMQuestAISettings : public UObject {
public:

	struct FName BBKey_QuestCommand_QuestTargetLocation; // 0x30(0x08)
	struct FName BBKey_QuestCommand_WanderCenter; // 0x38(0x08)
	struct UClass* QuestAIDefaultMarkerClass; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestAITeamChecker
// Size: 0x108 (Inherited: 0x30)
class UDFMQuestAITeamChecker : public UObject {
public:

	char pad_30[0x30]; // 0x30(0x30)
	struct FName TeamName; // 0x60(0x08)
	char pad_68[0xa0]; // 0x68(0xa0)

	void OnGroupSpawnEnd(struct AAIGroupSpawnerBase* Spawner); // Function DFMQuest.DFMQuestAITeamChecker.OnGroupSpawnEnd // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestAIManager
// Size: 0x3c8 (Inherited: 0x378)
class ADFMQuestAIManager : public ALevelSubsystem {
public:

	struct TMap<struct FName, struct UDFMQuestAITeamChecker*> TeamCheckers; // 0x378(0x50)

	struct ADFMQuestAIManager* STATIC_QuestAIManager(struct UObject* WorldContextObject); // Function DFMQuest.DFMQuestAIManager.QuestAIManager // (Final|Native|Static|Protected|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestAudioSubsystem
// Size: 0x400 (Inherited: 0x3f0)
class ADFMQuestAudioSubsystem : public AGPQuestAudioSubsystem {
public:

	char pad_3F0[0x10]; // 0x3f0(0x10)

	struct ADFMQuestAudioSubsystem* STATIC_Get(struct UObject* WorldContextObject); // Function DFMQuest.DFMQuestAudioSubsystem.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestGamingArea
// Size: 0x3b8 (Inherited: 0x378)
class ADFMQuestGamingArea : public AActor {
public:

	char pad_378[0x18]; // 0x378(0x18)
	int32_t PunishCountdownSeconds; // 0x390(0x04)
	bool OutGamingAreaWouldSuicide; // 0x394(0x01)
	bool bAutoFollowQuestActivate; // 0x395(0x01)
	char pad_396[0x2]; // 0x396(0x02)
	struct TArray<struct FGamingAreaQuestSetting> ActivationQuestSettings; // 0x398(0x10)
	/*struct FMulticastInlineDelegate*/char OnGamingAreaActivateChange[0x10]; // 0x3a8(0x10)

	void OnQuestStageEnd(struct AGPQuestStage* QuestStage); // Function DFMQuest.DFMQuestGamingArea.OnQuestStageEnd // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestGamingAreaPlayerComponent
// Size: 0x130 (Inherited: 0x100)
class UDFMQuestGamingAreaPlayerComponent : public UActorComponent {
public:

	int64_t CountdownEndTicks; // 0x100(0x08)
	bool bIsOutGamingArea; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	struct FName OutGamingAreaWarningHUDName; // 0x10c(0x08)
	bool OutGamingAreaWouldSuicide; // 0x114(0x01)
	char pad_115[0xb]; // 0x115(0x0b)
	/*struct FMulticastInlineDelegate*/char PlayerLeaveGameingAreaSignature[0x10]; // 0x120(0x10)

	void StartCountDown(int32_t CountDownSeconds, bool bOutGamingAreaWouldSuicide); // Function DFMQuest.DFMQuestGamingAreaPlayerComponent.StartCountDown // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestGetItemListener
// Size: 0xc0 (Inherited: 0x38)
class UDFMQuestGetItemListener : public UGPQuestActionAsyncReturnActionBase {
public:

	char pad_38[0x18]; // 0x38(0x18)
	/*struct FMulticastInlineDelegate*/char OnQuestGetItemDelegate[0x10]; // 0x50(0x10)
	char pad_60[0x60]; // 0x60(0x60)

	struct UDFMQuestGetItemListener* STATIC_QA_GetItemListener(struct AGPQuestActionContext* QAContext, int64_t ListenedItemId, int32_t ItemNum, bool bOnce); // Function DFMQuest.DFMQuestGetItemListener.QA_GetItemListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestHUDSubsystem
// Size: 0x458 (Inherited: 0x438)
class ADFMQuestHUDSubsystem : public AGPQuestHUDSubsystem {
public:

	char pad_438[0x10]; // 0x438(0x10)
	/*struct FMulticastInlineDelegate*/char OnUpdateOptionalObjectiveEvent[0x10]; // 0x448(0x10)

	struct ADFMQuestHUDSubsystem* STATIC_GetQuestHUDSubsystem(struct UObject* WorldContextObject); // Function DFMQuest.DFMQuestHUDSubsystem.GetQuestHUDSubsystem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestMarker
// Size: 0x418 (Inherited: 0x418)
class ADFMQuestMarker : public AGPQuestMarkerBase {
public:


	void OnLoadedAllControllerClass(); // Function DFMQuest.DFMQuestMarker.OnLoadedAllControllerClass // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestPlayersChaseTargetComponent
// Size: 0x160 (Inherited: 0x100)
class UDFMQuestPlayersChaseTargetComponent : public UActorComponent {
public:

	enum class EPlayerPosition CurrentPosition; // 0x100(0x01)
	char pad_101[0xf]; // 0x101(0x0f)
	struct FName WarningHudName; // 0x110(0x08)
	struct FName FailHudName; // 0x118(0x08)
	/*struct FMulticastInlineDelegate*/char OnPlayerInTargetZone[0x10]; // 0x120(0x10)
	/*struct FMulticastInlineDelegate*/char OnPlayerInSafeZone[0x10]; // 0x130(0x10)
	/*struct FMulticastInlineDelegate*/char OnPlayerInWarningZone[0x10]; // 0x140(0x10)
	/*struct FMulticastInlineDelegate*/char OnPlayerInFailZone[0x10]; // 0x150(0x10)

	void OnRep_CurrentPosition(); // Function DFMQuest.DFMQuestPlayersChaseTargetComponent.OnRep_CurrentPosition // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestSubtitleSubsystem
// Size: 0x398 (Inherited: 0x378)
class ADFMQuestSubtitleSubsystem : public ADFMSubtitleSubSystem {
public:

	struct TArray<struct FNoticeInfos> AllNoticeArray; // 0x378(0x10)
	struct FTimerHandle PopNoticeTimerHandle; // 0x388(0x08)
	char pad_390[0x8]; // 0x390(0x08)

	void RemoveSubtitle(enum class ESubtitleType& SubtitleType); // Function DFMQuest.DFMQuestSubtitleSubsystem.RemoveSubtitle // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestSystem
// Size: 0x1e0 (Inherited: 0xf8)
class UDFMQuestSystem : public UGPQuestSystem {
public:

	struct UClass* QASimpleQuestProxyClass; // 0xf8(0x08)
	struct UClass* QASimpleActionProxyClass; // 0x100(0x08)
	char pad_108[0xd8]; // 0x108(0xd8)

	void SpawnQuestHUDChannel(struct UObject* WorldContextObject); // Function DFMQuest.DFMQuestSystem.SpawnQuestHUDChannel // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestTimerActor
// Size: 0x380 (Inherited: 0x378)
class ADFMQuestTimerActor : public AActor {
public:

	char pad_378[0x8]; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestUtils
// Size: 0x30 (Inherited: 0x30)
class UDFMQuestUtils : public UBlueprintFunctionLibrary {
public:


	struct AGPQuest* STATIC_GetCurrentQuest(struct UObject* WorldContextObject); // Function DFMQuest.DFMQuestUtils.GetCurrentQuest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestVolume
// Size: 0x420 (Inherited: 0x3f8)
class ADFMQuestVolume : public AGPQuestVolume {
public:

	struct TArray<struct FSOLQAObjectiveData> ObjectiveDataArray; // 0x3f8(0x10)
	char pad_408[0x18]; // 0x408(0x18)

	void OnLocalFocusChange(struct AActor* OldTarget, struct AActor* NewTarget); // Function DFMQuest.DFMQuestVolume.OnLocalFocusChange // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DisplayHUDVolume
// Size: 0x3e0 (Inherited: 0x380)
class ADisplayHUDVolume : public ATriggerSphere {
public:

	struct TArray<enum class GameHUDSate> AddGlobalHUDStates_OnEnter; // 0x380(0x10)
	struct TArray<enum class GameHUDSate> RemoveGlobalHUDStates_OnLeave; // 0x390(0x10)
	struct TArray<struct FName> DisplayHUDNames; // 0x3a0(0x10)
	struct TArray<struct FName> HideHUDNamesOnLeave; // 0x3b0(0x10)
	struct TArray<struct FString> DisplayLuaHUDNames; // 0x3c0(0x10)
	struct TArray<enum class GameHUDSate> RemoveSpecialHUDStates; // 0x3d0(0x10)

	void OnVolumeEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function DFMQuest.DisplayHUDVolume.OnVolumeEndOverlap // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.MovementRestrictionVolume
// Size: 0x398 (Inherited: 0x380)
class AMovementRestrictionVolume : public ATriggerBox {
public:

	enum class ERVLeaveBehaviour LeaveBehaviour; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct UGPCharacterMovementLimitDataAsset* RestrictionData_OnEnter; // 0x388(0x08)
	struct UGPCharacterMovementLimitDataAsset* RestrictionData_OnLeave; // 0x390(0x08)

	void OnVolumeEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function DFMQuest.MovementRestrictionVolume.OnVolumeEndOverlap // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.IntroSaveGameSetting
// Size: 0x48 (Inherited: 0x30)
class UIntroSaveGameSetting : public USaveGame {
public:

	int32_t PlayerId; // 0x30(0x04)
	struct FName StageName; // 0x34(0x08)
	uint32_t objectiveId; // 0x3c(0x04)
	struct FName CheckPointTag; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_HUDLoadListener
// Size: 0x50 (Inherited: 0x38)
class UQA_HUDLoadListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnHUDLoadComplete[0x10]; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)

	struct UQA_HUDLoadListener* STATIC_QA_HUDLoadListener(struct AGPQuestActionContext* QAContext); // Function DFMQuest.QA_HUDLoadListener.QA_HUDLoadListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.ObjectiveContentView
// Size: 0x3d8 (Inherited: 0x388)
class UObjectiveContentView : public UBaseUIView {
public:

	struct UTextBlock* ObjectiveTitle; // 0x388(0x08)
	struct UTextBlock* ObjectiveProgressText; // 0x390(0x08)
	struct UProgressBar* CommonPorgressBar; // 0x398(0x08)
	struct FText CurObjectTitle; // 0x3a0(0x18)
	struct FColor ProgressColor_H; // 0x3b8(0x04)
	struct FColor ProgressColor_M; // 0x3bc(0x04)
	struct FColor ProgressColor_L; // 0x3c0(0x04)
	float ObjectiveTimeLimit; // 0x3c4(0x04)
	char pad_3C8[0x10]; // 0x3c8(0x10)

	void SetTraceActor(struct AActor* TargetActor); // Function DFMQuest.ObjectiveContentView.SetTraceActor // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.ObjectiveHintView
// Size: 0x3c0 (Inherited: 0x388)
class UObjectiveHintView : public UBaseUIView {
public:

	struct UTextBlock* HintText; // 0x388(0x08)
	float ShowHintTime; // 0x390(0x04)
	float FadeOutTime; // 0x394(0x04)
	char pad_398[0x28]; // 0x398(0x28)

	void SetObjectiveType(bool bMainObjective); // Function DFMQuest.ObjectiveHintView.SetObjectiveType // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.ObjectiveTipsView
// Size: 0x390 (Inherited: 0x388)
class UObjectiveTipsView : public UBaseUIView {
public:

	struct URichTextBlock* GuideTips; // 0x388(0x08)

	void SetTips(struct FText Tips); // Function DFMQuest.ObjectiveTipsView.SetTips // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_ActivateTimeBomb
// Size: 0x70 (Inherited: 0x38)
class UQA_ActivateTimeBomb : public UGPQuestActionAsyncReturnActionBase {
public:

	char pad_38[0x18]; // 0x38(0x18)
	/*struct FMulticastInlineDelegate*/char OnBombExploded[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char OnBombDisabled[0x10]; // 0x60(0x10)

	struct UQA_ActivateTimeBomb* STATIC_QA_ActivateTimeBomb(struct AGPQuestActionContext* QAContext, struct FName QATag_Interactor_TimeBomb_TimeBombActor, int32_t ExplodeDuration, int32_t RandomWiresNum, int32_t WrongWirePunishTime); // Function DFMQuest.QA_ActivateTimeBomb.QA_ActivateTimeBomb // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_AIDeathListener
// Size: 0xa0 (Inherited: 0x38)
class UQA_AIDeathListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnTrigger[0x10]; // 0x38(0x10)
	char pad_48[0x58]; // 0x48(0x58)

	struct UQA_AIDeathListener* STATIC_QA_MultiAIDeathListener(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> AITags, int32_t AINum, bool bShowMarker, struct FQMarkerSpawnParams QMarkerParams); // Function DFMQuest.QA_AIDeathListener.QA_MultiAIDeathListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_AIFightMeListener
// Size: 0x60 (Inherited: 0x38)
class UQA_AIFightMeListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnFight[0x10]; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct UQA_AIFightMeListener* STATIC_QA_AIFightMeListener(struct AGPQuestActionContext* QAContext, struct FName Tag, struct ADFMPlayerController* Player); // Function DFMQuest.QA_AIFightMeListener.QA_AIFightMeListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_AITeamSizeListener
// Size: 0x78 (Inherited: 0x38)
class UQA_AITeamSizeListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSizeChanged[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnComparePass[0x10]; // 0x48(0x10)
	char pad_58[0x20]; // 0x58(0x20)

	struct UQA_AITeamSizeListener* STATIC_QA_AITeamSizeListener(struct AGPQuestActionContext* QAContext, enum class EQA_AITeamSizeListenerOption Option, struct FName QATag_AIGroupSpawnerBase_TeamName, enum class EGPQuestActionCompareOperator Compare, int32_t size); // Function DFMQuest.QA_AITeamSizeListener.QA_AITeamSizeListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_AllClientLoadingCompletedListener
// Size: 0x58 (Inherited: 0x38)
class UQA_AllClientLoadingCompletedListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnCompleted[0x10]; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct AGPQuestActionContext* QA_Context; // 0x50(0x08)

	struct UQA_AllClientLoadingCompletedListener* STATIC_QA_AllClientLoadingCompletedListener(struct AGPQuestActionContext* QAContext, bool bOnce); // Function DFMQuest.QA_AllClientLoadingCompletedListener.QA_AllClientLoadingCompletedListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_ButtonClickedListener
// Size: 0x58 (Inherited: 0x38)
class UQA_ButtonClickedListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnClicked[0x10]; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)

	struct UQA_ButtonClickedListener* STATIC_QA_ButtonClickedListener(struct AGPQuestActionContext* QAContext, struct FName ButtonName); // Function DFMQuest.QA_ButtonClickedListener.QA_ButtonClickedListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_MandelBrickListener
// Size: 0x60 (Inherited: 0x38)
class UQA_MandelBrickListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnPickedUp[0x10]; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct UQA_MandelBrickListener* STATIC_QA_MandelBrickListener(struct AGPQuestActionContext* QAContext, struct ACHARACTER* OperatorCharacter, struct FName MandelBrickTag); // Function DFMQuest.QA_MandelBrickListener.QA_MandelBrickListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_CarryBodyListener
// Size: 0x60 (Inherited: 0x38)
class UQA_CarryBodyListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnDoInteractDelegate[0x10]; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct UQA_CarryBodyListener* STATIC_QA_CarryBodyListener(struct AGPQuestActionContext* InQAContext, struct ACHARACTER* CHARACTER, struct FName Name); // Function DFMQuest.QA_CarryBodyListener.QA_CarryBodyListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_CarryBodySpawnListener
// Size: 0x68 (Inherited: 0x38)
class UQA_CarryBodySpawnListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSpawnDelegate[0x10]; // 0x38(0x10)
	char pad_48[0x20]; // 0x48(0x20)

	struct UQA_CarryBodySpawnListener* STATIC_QA_OnCarryBodySpawnListener(struct AGPQuestActionContext* InQAContext, struct FName Tag, bool Once); // Function DFMQuest.QA_CarryBodySpawnListener.QA_OnCarryBodySpawnListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_ClientHudLoadListener
// Size: 0x68 (Inherited: 0x38)
class UQA_ClientHudLoadListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnClientHudsLoaded[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnTimeOut[0x10]; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)

	struct UQA_ClientHudLoadListener* STATIC_QA_ClientHudLoadListener(struct AGPQuestActionContext* QAContext, struct TArray<struct FName> HUDNames, float TimeOutSeconds); // Function DFMQuest.QA_ClientHudLoadListener.QA_ClientHudLoadListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_Countdown
// Size: 0x68 (Inherited: 0x38)
class UQA_Countdown : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnFinished[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnStoped[0x10]; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)

	void STATIC_QA_StopStageCountdown(struct AGPQuestActionContext* QAContext, struct UQA_Countdown* QACountdown); // Function DFMQuest.QA_Countdown.QA_StopStageCountdown // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_Delay
// Size: 0x60 (Inherited: 0x38)
class UQA_Delay : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnDelay[0x10]; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct UQA_Delay* STATIC_QA_Delay(struct AGPQuestActionContext* QAContext, float Delay); // Function DFMQuest.QA_Delay.QA_Delay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_EnableManningListener
// Size: 0x60 (Inherited: 0x38)
class UQA_EnableManningListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnManningCompleted[0x10]; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct UQA_EnableManningListener* STATIC_QA_ManningListener(struct AGPQuestActionContext* QAContext, struct FName SourceTag, struct AGPCharacter* Operator, int32_t TeamId, bool Once); // Function DFMQuest.QA_EnableManningListener.QA_ManningListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_FadeOutListener
// Size: 0x68 (Inherited: 0x38)
class UQA_FadeOutListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnFadeOut[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnClientRealFadeOut[0x10]; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)

	struct UQA_FadeOutListener* STATIC_QA_FadeOutListener(struct AGPQuestActionContext* QAContext, bool bOnce); // Function DFMQuest.QA_FadeOutListener.QA_FadeOutListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_FirstPlayerSeamLessEnterListener
// Size: 0x60 (Inherited: 0x38)
class UQA_FirstPlayerSeamLessEnterListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnCompleted[0x10]; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct AGPQuestActionContext* QA_Context; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)

	struct UQA_FirstPlayerSeamLessEnterListener* STATIC_QA_FirstPlayerSeamLessEnterListener(struct AGPQuestActionContext* QAContext, bool bOnce); // Function DFMQuest.QA_FirstPlayerSeamLessEnterListener.QA_FirstPlayerSeamLessEnterListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_FixedRocketExplodeListener
// Size: 0x58 (Inherited: 0x38)
class UQA_FixedRocketExplodeListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnExplode[0x10]; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)

	struct UQA_FixedRocketExplodeListener* STATIC_QA_FixedRocketExplodeListener(struct AGPQuestActionContext* QAContext, bool bOnce); // Function DFMQuest.QA_FixedRocketExplodeListener.QA_FixedRocketExplodeListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_GPSequence
// Size: 0x98 (Inherited: 0x38)
class UQA_GPSequence : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnBeginSequence[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnSkipSequence[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnPreEndSequence[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnEndSequence[0x10]; // 0x68(0x10)
	char pad_78[0x20]; // 0x78(0x20)

	void STATIC_QA_ResetSequence(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, enum class EGPQuestActionScope Scope); // Function DFMQuest.QA_GPSequence.QA_ResetSequence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_GPSequenceEventListener
// Size: 0x70 (Inherited: 0x38)
class UQA_GPSequenceEventListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSequenceEvent[0x10]; // 0x38(0x10)
	char pad_48[0x28]; // 0x48(0x28)

	struct UQA_GPSequenceEventListener* STATIC_QA_ListenSequenceEvent(struct AGPQuestActionContext* QAContext, struct FName QATag_GPSequenceActor_GPSequence, enum class EGPSequenceCustomEvent EventName, struct FName EventSubName, enum class EGPQuestActionScope Scope, bool bOnce); // Function DFMQuest.QA_GPSequenceEventListener.QA_ListenSequenceEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_GPCommonMediaPlayer
// Size: 0x78 (Inherited: 0x38)
class UQA_GPCommonMediaPlayer : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnBeginMedia[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnEndMedia[0x10]; // 0x48(0x10)
	char pad_58[0x20]; // 0x58(0x20)

	struct UQA_GPCommonMediaPlayer* STATIC_QA_PlayCommonMedia(struct AGPQuestActionContext* QAContext, struct FName MediaName); // Function DFMQuest.QA_GPCommonMediaPlayer.QA_PlayCommonMedia // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_GPCommonMediaPlayer_Server
// Size: 0x88 (Inherited: 0x38)
class UQA_GPCommonMediaPlayer_Server : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnEndMedia[0x10]; // 0x38(0x10)
	char pad_48[0x40]; // 0x48(0x40)

	struct UQA_GPCommonMediaPlayer_Server* STATIC_QA_PlayCommonMedia_Server(struct AGPQuestActionContext* QAContext, struct FName MediaName, float MediaLength, float Timeout); // Function DFMQuest.QA_GPCommonMediaPlayer_Server.QA_PlayCommonMedia_Server // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_GPSubtitleSequence
// Size: 0x68 (Inherited: 0x38)
class UQA_GPSubtitleSequence : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnBeginSubtitleSeq[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnEndSubtitleSeq[0x10]; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)

	struct UQA_GPSubtitleSequence* STATIC_QA_GPSubtitleSequenceWithTeamIds(struct AGPQuestActionContext* QAContext, struct FName& SubtitleSeqId, enum class ESubtitleSequenceType SubtitleSeqType, struct TArray<int32_t> TeamIds, struct AActor* SpeakerActor); // Function DFMQuest.QA_GPSubtitleSequence.QA_GPSubtitleSequenceWithTeamIds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_HealthListener
// Size: 0x68 (Inherited: 0x38)
class UQA_HealthListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnHealthChanged[0x10]; // 0x38(0x10)
	char pad_48[0x20]; // 0x48(0x20)

	struct UQA_HealthListener* STATIC_QA_HealthListener(struct AGPQuestActionContext* QAContext, struct FName QATag_, enum class EGPQuestActionCompareOperator Compare, float Percent); // Function DFMQuest.QA_HealthListener.QA_HealthListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_CharacterBuffListener
// Size: 0x68 (Inherited: 0x38)
class UQA_CharacterBuffListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnCharacterBuffChanged[0x10]; // 0x38(0x10)
	char pad_48[0x20]; // 0x48(0x20)

	struct UQA_CharacterBuffListener* STATIC_QA_CharacterBuffListener(struct AGPQuestActionContext* QAContext, struct AActor* CHARACTER, int32_t BuffId, bool bListenAdd); // Function DFMQuest.QA_CharacterBuffListener.QA_CharacterBuffListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_InAreaPlayerListener
// Size: 0x88 (Inherited: 0x38)
class UQA_InAreaPlayerListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnFailed[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char NtfDFMPlayerCharacters[0x10]; // 0x48(0x10)
	char pad_58[0x30]; // 0x58(0x30)

	struct UQA_InAreaPlayerListener* STATIC_QA_InAreaPlayerListener(struct AGPQuestActionContext* QAContext, struct FName QATag, float FailedTimeLimit, float FixedNtfTimeStep, bool bOnceForFailed); // Function DFMQuest.QA_InAreaPlayerListener.QA_InAreaPlayerListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_InteractorController
// Size: 0x98 (Inherited: 0x38)
class UQA_InteractorController : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnActivated[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnDeactivated[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnSucceed[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailed[0x10]; // 0x68(0x10)
	char pad_78[0x20]; // 0x78(0x20)

	struct UQA_InteractorController* STATIC_QA_InteractorController(struct AGPQuestActionContext* QAContext, struct FName QATag_GPQuestInteractorInterface_InteractorTag, enum class EQA_InteractorControllerOption Option, enum class EGPQuestActionScope Scope); // Function DFMQuest.QA_InteractorController.QA_InteractorController // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_InteractorStatusListener
// Size: 0x70 (Inherited: 0x38)
class UQA_InteractorStatusListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnDoInteractDelegate[0x10]; // 0x38(0x10)
	char pad_48[0x28]; // 0x48(0x28)

	struct UQA_InteractorStatusListener* STATIC_QA_InteractorStatusListener(struct AGPQuestActionContext* InQAContext, struct FName InteractorTag, struct FName ReleaseParams, bool Once); // Function DFMQuest.QA_InteractorStatusListener.QA_InteractorStatusListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_InteractorButtonShownListener
// Size: 0x60 (Inherited: 0x38)
class UQA_InteractorButtonShownListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnButtonShow[0x10]; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct UQA_InteractorButtonShownListener* STATIC_QA_InteractorButtonShownListener(struct AGPQuestActionContext* QAContext, struct FName InteractorTag, bool Once); // Function DFMQuest.QA_InteractorButtonShownListener.QA_InteractorButtonShownListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_TutorialLootingListener
// Size: 0x78 (Inherited: 0x38)
class UQA_TutorialLootingListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnButtonShow[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnLootingBegin[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnLootingEnd[0x10]; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)

	struct UQA_TutorialLootingListener* STATIC_QA_TutorialLootingListener(struct AGPQuestActionContext* QAContext, struct AActor* InteractorActor, int32_t LootingAiIndex); // Function DFMQuest.QA_TutorialLootingListener.QA_TutorialLootingListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_TutorialMapGuideListener
// Size: 0x60 (Inherited: 0x38)
class UQA_TutorialMapGuideListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnMiniMapGuideFinished[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnBigMapGuideFinished[0x10]; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)

	struct UQA_TutorialMapGuideListener* STATIC_QA_TutorialMapGuideListener(struct AGPQuestActionContext* QAContext); // Function DFMQuest.QA_TutorialMapGuideListener.QA_TutorialMapGuideListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_MorseCodeSuccessListener
// Size: 0x60 (Inherited: 0x38)
class UQA_MorseCodeSuccessListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnMorseCodeSuccessDelegate[0x10]; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct UQA_MorseCodeSuccessListener* STATIC_QA_MorseCodeSuccessListener(struct AGPQuestActionContext* InQAContext, struct FName InteractorTag); // Function DFMQuest.QA_MorseCodeSuccessListener.QA_MorseCodeSuccessListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_LevelSequenceActingOnPauseTrigger
// Size: 0x68 (Inherited: 0x38)
class UQA_LevelSequenceActingOnPauseTrigger : public UGPQuestActionAsyncReturnActionBase {
public:

	char pad_38[0x20]; // 0x38(0x20)
	/*struct FMulticastInlineDelegate*/char OnTriggerPause[0x10]; // 0x58(0x10)

	struct UQA_LevelSequenceActingOnPauseTrigger* STATIC_QA_LevelSequenceActingOnPauseTrigger(struct AGPQuestActionContext* QAContext, struct UClass* ActorClass, struct FName actorTag, bool bOnce, enum class EGPQuestActionScope Scope); // Function DFMQuest.QA_LevelSequenceActingOnPauseTrigger.QA_LevelSequenceActingOnPauseTrigger // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_ListenPlayerOffBattle
// Size: 0x88 (Inherited: 0x38)
class UQA_ListenPlayerOffBattle : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OffBattle[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnBattle[0x10]; // 0x48(0x10)
	char pad_58[0x30]; // 0x58(0x30)

	struct UQA_ListenPlayerOffBattle* STATIC_QA_ListenPlayerOffBattle(struct AGPQuestActionContext* QAContext, struct AGPCharacter* GPCharacter, float OffBattleTime); // Function DFMQuest.QA_ListenPlayerOffBattle.QA_ListenPlayerOffBattle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_LootingListener
// Size: 0x60 (Inherited: 0x38)
class UQA_LootingListener : public UGPQuestActionAsyncReturnActionBase {
public:

	struct AGPQuestActionContext* QAContext; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
	/*struct FMulticastInlineDelegate*/char OnLooting[0x10]; // 0x50(0x10)

	struct UQA_LootingListener* STATIC_QA_LootingListener(struct AGPQuestActionContext* QAContext, struct FName SourceTag); // Function DFMQuest.QA_LootingListener.QA_LootingListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_MultiTriggerListener
// Size: 0x90 (Inherited: 0x38)
class UQA_MultiTriggerListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnTriggerActorTypeA[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnTriggerActorTypeB[0x10]; // 0x48(0x10)
	char pad_58[0x38]; // 0x58(0x38)

	struct UQA_MultiTriggerListener* STATIC_QA_MultiTriggerListener(struct AGPQuestActionContext* QAContext, enum class EGPQuestActionTriggerType Type, struct FName QATag_, struct UClass* ActorTypeA, struct UClass* ActorTypeB, enum class EQA_TriggerListenerOption Option, enum class EGPQuestActionScope Scope, bool bOnce); // Function DFMQuest.QA_MultiTriggerListener.QA_MultiTriggerListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_PlayerDeathListener
// Size: 0x58 (Inherited: 0x38)
class UQA_PlayerDeathListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnPlayerDied[0x10]; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)

	struct UQA_PlayerDeathListener* STATIC_QA_PlayerDeathListener(struct AGPQuestActionContext* QAContext, bool bOnce); // Function DFMQuest.QA_PlayerDeathListener.QA_PlayerDeathListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_PlayerExitListener
// Size: 0x98 (Inherited: 0x38)
class UQA_PlayerExitListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnStart[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnCancel[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnEscaping[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnEscaped[0x10]; // 0x68(0x10)
	char pad_78[0x20]; // 0x78(0x20)

	struct UQA_PlayerExitListener* STATIC_QA_PlayerExitListener(struct AGPQuestActionContext* QAContext, struct ACHARACTER* Player, struct FName QATag); // Function DFMQuest.QA_PlayerExitListener.QA_PlayerExitListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_PlayerSafePathListener
// Size: 0x78 (Inherited: 0x38)
class UQA_PlayerSafePathListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnEnterSafePath[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnLeaveSafePath[0x10]; // 0x48(0x10)
	char pad_58[0x20]; // 0x58(0x20)

	struct UQA_PlayerSafePathListener* STATIC_QA_PlayerSafePathListener(struct AGPQuestActionContext* QAContext, enum class EQA_PlayerSafePathListenerOption Option, struct FName QATag_GPPlayerSafePathListener_PlayerSafePathListener, enum class EGPQuestActionScope Scope); // Function DFMQuest.QA_PlayerSafePathListener.QA_PlayerSafePathListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_PlayersChaseTargetListener
// Size: 0x90 (Inherited: 0x38)
class UQA_PlayersChaseTargetListener : public UGPQuestActionAsyncReturnActionBase {
public:

	char pad_38[0x18]; // 0x38(0x18)
	/*struct FMulticastInlineDelegate*/char OnEnterTargetZone[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char OnEnterSafeZone[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char OnEnterWarningZone[0x10]; // 0x70(0x10)
	/*struct FMulticastInlineDelegate*/char OnEnterFailZone[0x10]; // 0x80(0x10)

	struct UQA_PlayersChaseTargetListener* STATIC_QA_PlayersChaseTargetListener(struct AGPQuestActionContext* QAContext, struct UClass* TargetClass, enum class EPlayersChaseTargetMode CheckMode, struct FName QATag_TargetTag, float TargetThreshold, float WarningThreshold, float FailThreshold); // Function DFMQuest.QA_PlayersChaseTargetListener.QA_PlayersChaseTargetListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_PlayerSkillListener
// Size: 0x80 (Inherited: 0x38)
class UQA_PlayerSkillListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSwitchToBow[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnTrigger[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailed[0x10]; // 0x58(0x10)
	char pad_68[0x18]; // 0x68(0x18)

	struct UQA_PlayerSkillListener* STATIC_QA_OnWeaponBowBeginFire(struct AGPQuestActionContext* QAContext); // Function DFMQuest.QA_PlayerSkillListener.QA_OnWeaponBowBeginFire // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_DetectorArrowFireListener
// Size: 0x58 (Inherited: 0x38)
class UQA_DetectorArrowFireListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnBowBeginFire[0x10]; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)

	struct UQA_DetectorArrowFireListener* STATIC_QA_DetectorArrowFireListener(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player); // Function DFMQuest.QA_DetectorArrowFireListener.QA_DetectorArrowFireListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_PlayerTransitionMove
// Size: 0x78 (Inherited: 0x38)
class UQA_PlayerTransitionMove : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnTransitionMoveBegin[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnTransitionMoveEnd[0x10]; // 0x48(0x10)
	char pad_58[0x20]; // 0x58(0x20)

	struct UQA_PlayerTransitionMove* STATIC_QA_StartTransitionMove(struct AGPQuestActionContext* QAContext, struct AGPCharacter* Player, struct FName QATag, enum class EGPQuestActionScope Scope); // Function DFMQuest.QA_PlayerTransitionMove.QA_StartTransitionMove // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_RandomRangeExec
// Size: 0x80 (Inherited: 0x38)
class UQA_RandomRangeExec : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char Range1[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char Range2[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char Range3[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char Range4[0x10]; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)

	struct UQA_RandomRangeExec* STATIC_QA_RandomNumber(struct AGPQuestActionContext* QAContext, float Weight1, float Weight2, float Weight3, float Weight4); // Function DFMQuest.QA_RandomRangeExec.QA_RandomNumber // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_RestResurrectCoin
// Size: 0x38 (Inherited: 0x38)
class UQA_RestResurrectCoin : public UGPQuestActionAsyncReturnActionBase {
public:


	struct UQA_RestResurrectCoin* STATIC_QA_ResetResurrectCoin(struct AGPQuestActionContext* QAContext, struct APlayerController* TargetPlayerCtrl); // Function DFMQuest.QA_RestResurrectCoin.QA_ResetResurrectCoin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_SequenceStream
// Size: 0x80 (Inherited: 0x38)
class UQA_SequenceStream : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSectionBegin[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnSectionEnd[0x10]; // 0x48(0x10)
	char pad_58[0x28]; // 0x58(0x28)

	struct UQA_SequenceStream* STATIC_QA_StopSequenceStream(struct AGPQuestActionContext* QAContext, struct FName SequenceStreamTag); // Function DFMQuest.QA_SequenceStream.QA_StopSequenceStream // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_CutSceneViewTargetListener
// Size: 0x68 (Inherited: 0x38)
class UQA_CutSceneViewTargetListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnTrigger[0x10]; // 0x38(0x10)
	char pad_48[0x20]; // 0x48(0x20)

	struct UQA_CutSceneViewTargetListener* STATIC_QA_SequenceToPlayerCameraListener(struct AGPQuestActionContext* QAContext, struct APlayerController* Player, float TransitionSpeed, bool bCopyLocAndRot); // Function DFMQuest.QA_CutSceneViewTargetListener.QA_SequenceToPlayerCameraListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_ShowGuidePopWindowListener
// Size: 0x58 (Inherited: 0x38)
class UQA_ShowGuidePopWindowListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnClosed[0x10]; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)

	struct UQA_ShowGuidePopWindowListener* STATIC_QA_ShowGuidePopWindowListener(struct AGPQuestActionContext* QAContext, int32_t GuideID, struct FName GuideAudio); // Function DFMQuest.QA_ShowGuidePopWindowListener.QA_ShowGuidePopWindowListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_SimplePathFollower
// Size: 0x78 (Inherited: 0x38)
class UQA_SimplePathFollower : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnBeginFollow[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnEndFollow[0x10]; // 0x48(0x10)
	char pad_58[0x20]; // 0x58(0x20)

	struct UQA_SimplePathFollower* STATIC_QA_SimplePathFollower(struct AGPQuestActionContext* QAContext, enum class EQA_SimplePathFollowerOption Option, struct FName QATag_GPPathFollower_PathFollower, enum class EGPQuestActionScope Scope); // Function DFMQuest.QA_SimplePathFollower.QA_SimplePathFollower // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_SimpleActionBase
// Size: 0x58 (Inherited: 0x38)
class UQA_SimpleActionBase : public UGPQuestActionAsyncReturnActionBase {
public:

	char pad_38[0x20]; // 0x38(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_SimpleActionListener
// Size: 0x78 (Inherited: 0x38)
class UQA_SimpleActionListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnTrigger[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnUnTrigger[0x10]; // 0x48(0x10)
	char pad_58[0x20]; // 0x58(0x20)

	struct UQA_SimpleActionBase* STATIC_QAS_PlayCustomAnim(struct AGPQuestActionContext* QAContext, struct UAnimSequenceBase* AnimSequenceToPlay1P, struct UAnimSequenceBase* AnimSequenceToPlay3P, float PlayRate); // Function DFMQuest.QA_SimpleActionListener.QAS_PlayCustomAnim // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMMissionActionLib
// Size: 0x30 (Inherited: 0x30)
class UDFMMissionActionLib : public UBlueprintFunctionLibrary {
public:


	void STATIC_QA_SomeOneCarraySomeBody(struct AGPQuestActionContext* QAContext, struct ACHARACTER* CHARACTER, struct FName Name); // Function DFMQuest.DFMMissionActionLib.QA_SomeOneCarraySomeBody // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_LevelActionListener
// Size: 0x78 (Inherited: 0x38)
class UQA_LevelActionListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnTrigger[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnUnTrigger[0x10]; // 0x48(0x10)
	char pad_58[0x20]; // 0x58(0x20)

	struct UQA_LevelActionListener* STATIC_QA_EnterRaidWorld(/*struct AGPQuest* GPQuest, struct TArray<struct TSoftObjectPtr<UWorld>> Levels, bool New*/); // Function DFMQuest.QA_LevelActionListener.QA_EnterRaidWorld // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_SimpleQuestListener
// Size: 0xf0 (Inherited: 0x38)
class UQA_SimpleQuestListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnTrigger[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnUnTrigger[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnSingleTrigger[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnUnSingleTrigger[0x10]; // 0x68(0x10)
	/*struct FMulticastInlineDelegate*/char OnTimeTickTrigger[0x10]; // 0x78(0x10)
	char pad_88[0x68]; // 0x88(0x68)

	struct UQA_SimpleQuestListener* STATIC_QAS_CheckServerDone(struct AGPQuestActionContext* QAContext); // Function DFMQuest.QA_SimpleQuestListener.QAS_CheckServerDone // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_SpawnAI
// Size: 0x68 (Inherited: 0x38)
class UQA_SpawnAI : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSpawned[0x10]; // 0x38(0x10)
	char pad_48[0x20]; // 0x48(0x20)

	struct UQA_SpawnAI* STATIC_QA_SpawnAI(struct AGPQuestActionContext* QAContext, struct FName QATag_AIGroupSpawnerBase_TeamName, struct FName QATag_MoveToSpotTag, bool bWander, bool bAddDefaultMarker); // Function DFMQuest.QA_SpawnAI.QA_SpawnAI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_SpawnAIByDrama
// Size: 0x70 (Inherited: 0x38)
class UQA_SpawnAIByDrama : public UGPQuestActionAsyncReturnActionBase {
public:

	char pad_38[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnSpawnEnd[0x10]; // 0x48(0x10)
	char pad_58[0x18]; // 0x58(0x18)

	struct UQA_SpawnAIByDrama* STATIC_QA_SpawnAIByDrama(struct AGPQuestActionContext* QAContext, struct FName DramaTag, char DifficultyLevel, bool bUseBPSpawnAI); // Function DFMQuest.QA_SpawnAIByDrama.QA_SpawnAIByDrama // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_SpawnedAIAliveSizeListener
// Size: 0x58 (Inherited: 0x38)
class UQA_SpawnedAIAliveSizeListener : public UGPQuestActionAsyncReturnActionBase {
public:

	char pad_38[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnAIAliveSizeChanged[0x10]; // 0x48(0x10)

	struct UQA_SpawnedAIAliveSizeListener* STATIC_QA_SpawnedAIAliveSizeListener(struct AGPQuestActionContext* QAContext, struct FName AITeamTag); // Function DFMQuest.QA_SpawnedAIAliveSizeListener.QA_SpawnedAIAliveSizeListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_TaggedTimer
// Size: 0x80 (Inherited: 0x38)
class UQA_TaggedTimer : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnTimer[0x10]; // 0x38(0x10)
	char pad_48[0x30]; // 0x48(0x30)
	struct ADFMQuestTimerActor* TimerActor; // 0x78(0x08)

	struct UQA_TaggedTimer* STATIC_QA_TaggedTimer(struct AGPQuestActionContext* QAContext, enum class EQA_TimerMode Mode, struct FName QA_TimerTag, float TriggerInterval, int32_t TriggerCount); // Function DFMQuest.QA_TaggedTimer.QA_TaggedTimer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_TargetHealthListener
// Size: 0x68 (Inherited: 0x38)
class UQA_TargetHealthListener : public UGPQuestActionAsyncReturnActionBase {
public:

	char pad_38[0x20]; // 0x38(0x20)
	/*struct FMulticastInlineDelegate*/char OnHealthPercentTriggered[0x10]; // 0x58(0x10)

	struct UQA_TargetHealthListener* STATIC_QA_TargetHealthListener(struct AGPQuestActionContext* QAContext, struct UClass* TargetClass, struct FName QATag_TargetTag, float HealthPercent, bool bOnce); // Function DFMQuest.QA_TargetHealthListener.QA_TargetHealthListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_TargetTakeDamageListener
// Size: 0x60 (Inherited: 0x38)
class UQA_TargetTakeDamageListener : public UGPQuestActionAsyncReturnActionBase {
public:

	char pad_38[0x18]; // 0x38(0x18)
	/*struct FMulticastInlineDelegate*/char OnTargetTakenDamage[0x10]; // 0x50(0x10)

	struct UQA_TargetTakeDamageListener* STATIC_QA_TargetTakeDamageListener(struct AGPQuestActionContext* QAContext, struct UClass* TargetClass, struct FName QATag_TargetTag, enum class EQADamageType DamageType, bool bOnce); // Function DFMQuest.QA_TargetTakeDamageListener.QA_TargetTakeDamageListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_TeamAllDiedListener
// Size: 0x58 (Inherited: 0x38)
class UQA_TeamAllDiedListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnTeamAllDied[0x10]; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)

	struct UQA_TeamAllDiedListener* STATIC_QA_TeamAllDiedListener(struct AGPQuestActionContext* QAContext, bool EnableResurrectCoin); // Function DFMQuest.QA_TeamAllDiedListener.QA_TeamAllDiedListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_TeamBuyBackListener
// Size: 0x50 (Inherited: 0x38)
class UQA_TeamBuyBackListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char BuyBack[0x10]; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)

	struct UQA_TeamBuyBackListener* STATIC_QA_TeamBuyBackListener(struct AGPQuestActionContext* QAContext); // Function DFMQuest.QA_TeamBuyBackListener.QA_TeamBuyBackListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_TeamDeathListener
// Size: 0x58 (Inherited: 0x38)
class UQA_TeamDeathListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnTeamDied[0x10]; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)

	struct UQA_TeamDeathListener* STATIC_QA_TeamDeathListener(struct AGPQuestActionContext* QAContext, int32_t QTeamId); // Function DFMQuest.QA_TeamDeathListener.QA_TeamDeathListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_TeammateRebornListener
// Size: 0x50 (Inherited: 0x38)
class UQA_TeammateRebornListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnTeammateReborn[0x10]; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)

	struct UQA_TeammateRebornListener* STATIC_QA_TeammateRebornListener(struct AGPQuestActionContext* QAContext); // Function DFMQuest.QA_TeammateRebornListener.QA_TeammateRebornListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_TeleportPlayerAsync
// Size: 0x60 (Inherited: 0x38)
class UQA_TeleportPlayerAsync : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnTeleportFinished[0x10]; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct UQA_TeleportPlayerAsync* STATIC_QA_TeleportAllPlayersAsync(struct AGPQuestActionContext* QAContext, struct FName QATag_PlayerStartTag); // Function DFMQuest.QA_TeleportPlayerAsync.QA_TeleportAllPlayersAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_Timer
// Size: 0x78 (Inherited: 0x38)
class UQA_Timer : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnTimer[0x10]; // 0x38(0x10)
	char pad_48[0x30]; // 0x48(0x30)

	struct UQA_Timer* STATIC_QA_Timer(struct AGPQuestActionContext* QAContext, enum class EQA_TimerMode Mode, float TriggerInterval, int32_t TriggerCount, struct FName Tag); // Function DFMQuest.QA_Timer.QA_Timer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_Tips
// Size: 0x38 (Inherited: 0x38)
class UQA_Tips : public UGPQuestActionAsyncReturnActionBase {
public:


	struct UQA_Tips* STATIC_QA_Tips(struct AGPQuestActionContext* QAContext, struct FString sMessage, float Time); // Function DFMQuest.QA_Tips.QA_Tips // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_TrainStatusListener
// Size: 0x80 (Inherited: 0x38)
class UQA_TrainStatusListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnTrainBreakStatusChange[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnTrainStatusChange[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnTrainPlateRotateComplete[0x10]; // 0x58(0x10)
	char pad_68[0x18]; // 0x68(0x18)

	void TrainPlateRotateComplete(); // Function DFMQuest.QA_TrainStatusListener.TrainPlateRotateComplete // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_TriggerAISpawnUnit
// Size: 0x98 (Inherited: 0x38)
class UQA_TriggerAISpawnUnit : public UGPQuestActionAsyncReturnActionBase {
public:

	char pad_38[0x40]; // 0x38(0x40)
	/*struct FMulticastInlineDelegate*/char OnSpawnEnd[0x10]; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)

	struct UQA_TriggerAISpawnUnit* STATIC_QA_TriggerAISpawnUnit(struct AGPQuestActionContext* QAContext, struct FName UnitTag); // Function DFMQuest.QA_TriggerAISpawnUnit.QA_TriggerAISpawnUnit // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_TriggerListener
// Size: 0x70 (Inherited: 0x38)
class UQA_TriggerListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnTrigger[0x10]; // 0x38(0x10)
	char pad_48[0x28]; // 0x48(0x28)

	struct UQA_TriggerListener* STATIC_QA_TriggerListener(struct AGPQuestActionContext* QAContext, enum class EGPQuestActionTriggerType Type, struct FName QATag_, enum class EQA_TriggerListenerOption Option, enum class EGPQuestActionScope Scope, bool bOnce, bool bCheckOverlaping, bool PlayerMustHasContract); // Function DFMQuest.QA_TriggerListener.QA_TriggerListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_VehicleDeathListener
// Size: 0x60 (Inherited: 0x38)
class UQA_VehicleDeathListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnVehicleDied[0x10]; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct UQA_VehicleDeathListener* STATIC_QA_VehicleDeathListener(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, bool bOnce); // Function DFMQuest.QA_VehicleDeathListener.QA_VehicleDeathListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_VehicleDramaPathFinishedListener
// Size: 0x60 (Inherited: 0x38)
class UQA_VehicleDramaPathFinishedListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnVehicleDramaPathFinished[0x10]; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct UQA_VehicleDramaPathFinishedListener* STATIC_QA_VehicleDramaPathFinishedListener(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, bool bOnce); // Function DFMQuest.QA_VehicleDramaPathFinishedListener.QA_VehicleDramaPathFinishedListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_VehicleDriverDiedListener
// Size: 0x58 (Inherited: 0x38)
class UQA_VehicleDriverDiedListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnDriverDied[0x10]; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)

	struct UQA_VehicleDriverDiedListener* STATIC_QA_VehicleDriverDiedListener(struct AGPQuestActionContext* QAContext, struct FName VehicleTag); // Function DFMQuest.QA_VehicleDriverDiedListener.QA_VehicleDriverDiedListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_VehiclePathFollower
// Size: 0xb0 (Inherited: 0x38)
class UQA_VehiclePathFollower : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnBeginFollow[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnEndFollow[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnPauseFollow[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnResumeFollow[0x10]; // 0x68(0x10)
	char pad_78[0x38]; // 0x78(0x38)

	void STATIC_QA_VehiclePathFollowStop(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, enum class EGPQuestActionScope Scope); // Function DFMQuest.QA_VehiclePathFollower.QA_VehiclePathFollowStop // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_VehiclePathFollowerCustomEvent
// Size: 0x78 (Inherited: 0x38)
class UQA_VehiclePathFollowerCustomEvent : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnCustomEvent[0x10]; // 0x38(0x10)
	char pad_48[0x30]; // 0x48(0x30)

	struct UQA_VehiclePathFollowerCustomEvent* STATIC_QA_VehiclePathFollowListenCustomEvent(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, struct FName EventName, bool bOnce, enum class EGPQuestActionScope Scope); // Function DFMQuest.QA_VehiclePathFollowerCustomEvent.QA_VehiclePathFollowListenCustomEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QA_VehicleSpawnListener
// Size: 0x60 (Inherited: 0x38)
class UQA_VehicleSpawnListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnVehicleSpawned[0x10]; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)

	struct UQA_VehicleSpawnListener* STATIC_QA_VehicleSpawnListener(struct AGPQuestActionContext* QAContext); // Function DFMQuest.QA_VehicleSpawnListener.QA_VehicleSpawnListener // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QuestCutSceneHUD
// Size: 0x3c8 (Inherited: 0x388)
class UQuestCutSceneHUD : public UBaseUIView {
public:

	float TimeToWaitSecondTouch; // 0x388(0x04)
	float DelayEnableTouchTime; // 0x38c(0x04)
	struct UButton* Btn_SkipCS; // 0x390(0x08)
	struct UHorizontalBox* Txt_SkipTips; // 0x398(0x08)
	struct UImage* Img_SkipTips; // 0x3a0(0x08)
	char pad_3A8[0x20]; // 0x3a8(0x20)

	void TouchTimeOut(); // Function DFMQuest.QuestCutSceneHUD.TouchTimeOut // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QuestHUDController
// Size: 0x188 (Inherited: 0xb0)
class UQuestHUDController : public UBaseUIController {
public:

	char pad_B0[0xd8]; // 0xb0(0xd8)

	void OnQuestStateUpdate(struct FText PopText, enum class EGPQuestStageState& QuestState); // Function DFMQuest.QuestHUDController.OnQuestStateUpdate // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QuestHUDPanelView
// Size: 0x398 (Inherited: 0x388)
class UQuestHUDPanelView : public UBaseUIView {
public:

	struct UQuestObjectiveView* ObjectiveTitle; // 0x388(0x08)
	struct UQuestStatusTipsView* QuestState; // 0x390(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QuestObjectiveView
// Size: 0x428 (Inherited: 0x388)
class UQuestObjectiveView : public UBaseUIView {
public:

	struct UTextBlock* StageTitle; // 0x388(0x08)
	struct UTextBlock* RemainTimeText; // 0x390(0x08)
	struct UObjectiveContentView* MainObjective; // 0x398(0x08)
	struct UVerticalBox* OptionalObjectiveWidgets; // 0x3a0(0x08)
	struct UClass* ClassObjectiveItemView; // 0x3a8(0x08)
	int32_t StartWarningSeconds; // 0x3b0(0x04)
	float InterpSpeed; // 0x3b4(0x04)
	char pad_3B8[0x1c]; // 0x3b8(0x1c)
	bool bInWarning; // 0x3d4(0x01)
	char pad_3D5[0x3]; // 0x3d5(0x03)
	struct TMap<int32_t, struct UObjectiveContentView*> OptionalObjectiveItems; // 0x3d8(0x50)

	void ShowOptionalObjective(struct FGPQuestText QuestText, int32_t ObjectiveIndex); // Function DFMQuest.QuestObjectiveView.ShowOptionalObjective // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.QuestStatusTipsView
// Size: 0x3c0 (Inherited: 0x388)
class UQuestStatusTipsView : public UBaseUIView {
public:

	struct UTextBlock* TextQuestTitle; // 0x388(0x08)
	float ShowTipsTime; // 0x390(0x04)
	float FadeOutTime; // 0x394(0x04)
	char pad_398[0x28]; // 0x398(0x28)

	void SetQuestText(struct FText InText); // Function DFMQuest.QuestStatusTipsView.SetQuestText // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestActionLib
// Size: 0x30 (Inherited: 0x30)
class UDFMQuestActionLib : public UGPQuestActionLib_Basic {
public:


	void STATIC_QA_VehicleStartAutoDrive(struct AGPQuestActionContext* QAContext, struct FName VehicleTag, float ExpectVelocity, float ExpectDuration); // Function DFMQuest.DFMQuestActionLib.QA_VehicleStartAutoDrive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.DFMQuestClientProxy
// Size: 0x520 (Inherited: 0x468)
class ADFMQuestClientProxy : public AGPQuestClientProxy {
public:

	struct TArray<struct FName> OnlyShowActorTags; // 0x468(0x10)
	struct TArray<struct FName> OnlyHideActorTags; // 0x478(0x10)
	struct FString CurrentBannerText; // 0x488(0x10)
	int32_t CurrentTodId; // 0x498(0x04)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct AActor* CurrentBossActor; // 0x4a0(0x08)
	struct FText CurrentStripText; // 0x4a8(0x18)
	float StripHeightOffset; // 0x4c0(0x04)
	char pad_4C4[0x4c]; // 0x4c4(0x4c)
	struct FName QuestCutSceneHUDName; // 0x510(0x08)
	char pad_518[0x8]; // 0x518(0x08)

	void UpdateOnlyShowActorTags(struct TArray<struct FName>& ActorTags); // Function DFMQuest.DFMQuestClientProxy.UpdateOnlyShowActorTags // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.SOLQuestActionLib
// Size: 0x30 (Inherited: 0x30)
class USOLQuestActionLib : public UDFMQuestActionLib {
public:


	void STATIC_QA_ToggleExitOpenBanner(struct AGPQuestActionContext* QAContext, struct FName Tag, struct FText ExitOpenText, enum class ESOLUIIconType SOLUIIconType, float ExitOpenTextDuration); // Function DFMQuest.SOLQuestActionLib.QA_ToggleExitOpenBanner // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.IntroQuestClientProxy
// Size: 0x538 (Inherited: 0x520)
class AIntroQuestClientProxy : public ADFMQuestClientProxy {
public:

	char pad_520[0x18]; // 0x520(0x18)

	void SaveGame(struct AGPQuestActionContext* QAContext, struct FName CheckPointTag); // Function DFMQuest.IntroQuestClientProxy.SaveGame // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.RaidQuestClientProxy
// Size: 0x570 (Inherited: 0x520)
class ARaidQuestClientProxy : public ADFMQuestClientProxy {
public:

	char pad_520[0x38]; // 0x520(0x38)
	struct TArray<struct FString> DependentLevels; // 0x558(0x10)
	char pad_568[0x8]; // 0x568(0x08)

	void OnServerMatchEnded(enum class EMatchOverReason MatchOverReason, int64_t PlayerUin); // Function DFMQuest.RaidQuestClientProxy.OnServerMatchEnded // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.SOLQuestClientProxy
// Size: 0x540 (Inherited: 0x520)
class ASOLQuestClientProxy : public ADFMQuestClientProxy {
public:

	char pad_520[0x8]; // 0x520(0x08)
	struct FMapQuestRangeData MapQuestRangeData; // 0x528(0x18)

	void OnRep_MapQuestRangeData(); // Function DFMQuest.SOLQuestClientProxy.OnRep_MapQuestRangeData // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMQuest.TutorialQuestClientProxy
// Size: 0x618 (Inherited: 0x520)
class ATutorialQuestClientProxy : public ADFMQuestClientProxy {
public:

	char pad_520[0x18]; // 0x520(0x18)
	struct TArray<struct FName> LockedHUDNames; // 0x538(0x10)
	struct TArray<struct FString> LockedLuaHUDNames; // 0x548(0x10)
	struct TArray<enum class EInputActionType> DisabledInputActions; // 0x558(0x10)
	int32_t CurrentGuideClickId; // 0x568(0x04)
	bool CurrentForceClick; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)
	int32_t CurrentDialogId; // 0x570(0x04)
	int32_t CurrentGuidePopWindowId; // 0x574(0x04)
	int32_t CurrentGuidePopTipsId; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct FString CurrentGuidePopButtonWord; // 0x580(0x10)
	bool CurrentGuidePopButtonStrengh; // 0x590(0x01)
	char pad_591[0x3]; // 0x591(0x03)
	struct FName CurrentGuideAudioName; // 0x594(0x08)
	char pad_59C[0x4]; // 0x59c(0x04)
	int64_t CurrentCustomRooleteeMedItem; // 0x5a0(0x08)
	bool IsListeningLooting; // 0x5a8(0x01)
	char pad_5A9[0x7]; // 0x5a9(0x07)
	int64_t ListeningNetGuid; // 0x5b0(0x08)
	int64_t LootingAiIndex; // 0x5b8(0x08)
	bool IsListeningMapHud; // 0x5c0(0x01)
	bool IsRemindEscape; // 0x5c1(0x01)
	bool ListenMapTargetClick; // 0x5c2(0x01)
	bool UsingDefaultKeySetting; // 0x5c3(0x01)
	char pad_5C4[0x12]; // 0x5c4(0x12)
	bool bCompleteMiniMapGuide; // 0x5d6(0x01)
	bool bCompleteBigMapGuide; // 0x5d7(0x01)
	char pad_5D8[0x40]; // 0x5d8(0x40)

	void UnlockLuaHUDPanels(struct TArray<struct FString>& PanelNames); // Function DFMQuest.TutorialQuestClientProxy.UnlockLuaHUDPanels // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
