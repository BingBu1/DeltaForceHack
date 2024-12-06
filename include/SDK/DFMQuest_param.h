/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif


namespace Dumper
{
	struct Function_DFMQuest_QASimpleActionProxy_Init_Param
	{
	public:

		struct FSimpleActionArguments InArg1; // 0x00(0x20)
		struct FSimpleActionExtArgument InArg2; // 0x20(0x90)
	};

	struct Function_DFMQuest_QASimpleQuestProxy_BP_ShowTitle_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		bool Enable; // 0x04(0x01)
	};

	struct Function_DFMQuest_DFMQuestAITeamChecker_OnGroupSpawnEnd_Param
	{
	public:

		struct AAIGroupSpawnerBase* Spawner; // 0x00(0x08)
	};

	struct Function_DFMQuest_DFMQuestAIManager_QuestAIManager_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct ADFMQuestAIManager* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMQuest_DFMQuestAudioSubsystem_Get_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct ADFMQuestAudioSubsystem* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMQuest_DFMQuestGamingArea_OnQuestStageEnd_Param
	{
	public:

		struct AGPQuestStage* QuestStage; // 0x00(0x08)
	};

	struct Function_DFMQuest_DFMQuestGamingAreaPlayerComponent_StartCountDown_Param
	{
	public:

		int32_t CountDownSeconds; // 0x00(0x04)
		bool bOutGamingAreaWouldSuicide; // 0x04(0x01)
	};

	struct Function_DFMQuest_DFMQuestGetItemListener_QA_GetItemListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		int64_t ListenedItemId; // 0x08(0x08)
		int32_t ItemNum; // 0x10(0x04)
		bool bOnce; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		struct UDFMQuestGetItemListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_DFMQuestHUDSubsystem_GetQuestHUDSubsystem_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct ADFMQuestHUDSubsystem* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMQuest_DFMQuestMarker_OnLoadedAllControllerClass_Param
	{
	public:

	};

	struct Function_DFMQuest_DFMQuestPlayersChaseTargetComponent_OnRep_CurrentPosition_Param
	{
	public:

	};

	struct Function_DFMQuest_DFMQuestSubtitleSubsystem_RemoveSubtitle_Param
	{
	public:

		enum class ESubtitleType SubtitleType; // 0x00(0x01)
	};

	struct Function_DFMQuest_DFMQuestSystem_SpawnQuestHUDChannel_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
	};

	struct Function_DFMQuest_DFMQuestUtils_GetCurrentQuest_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AGPQuest* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMQuest_DFMQuestVolume_OnLocalFocusChange_Param
	{
	public:

		struct AActor* OldTarget; // 0x00(0x08)
		struct AActor* NewTarget; // 0x08(0x08)
	};

	struct Function_DFMQuest_DisplayHUDVolume_OnVolumeEndOverlap_Param
	{
	public:

		struct AActor* OverlappedActor; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
	};

	struct Function_DFMQuest_MovementRestrictionVolume_OnVolumeEndOverlap_Param
	{
	public:

		struct AActor* OverlappedActor; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
	};

	struct Function_DFMQuest_QA_HUDLoadListener_QA_HUDLoadListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct UQA_HUDLoadListener* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMQuest_ObjectiveContentView_SetTraceActor_Param
	{
	public:

		struct AActor* TargetActor; // 0x00(0x08)
	};

	struct Function_DFMQuest_ObjectiveHintView_SetObjectiveType_Param
	{
	public:

		bool bMainObjective; // 0x00(0x01)
	};

	struct Function_DFMQuest_ObjectiveTipsView_SetTips_Param
	{
	public:

		struct FText Tips; // 0x00(0x18)
	};

	struct Function_DFMQuest_QA_ActivateTimeBomb_QA_ActivateTimeBomb_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName QATag_Interactor_TimeBomb_TimeBombActor; // 0x08(0x08)
		int32_t ExplodeDuration; // 0x10(0x04)
		int32_t RandomWiresNum; // 0x14(0x04)
		int32_t WrongWirePunishTime; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UQA_ActivateTimeBomb* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_AIDeathListener_QA_MultiAIDeathListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct TArray<struct FName> AITags; // 0x08(0x10)
		int32_t AINum; // 0x18(0x04)
		bool bShowMarker; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct FQMarkerSpawnParams QMarkerParams; // 0x20(0x28)
		struct UQA_AIDeathListener* ReturnValue; // 0x48(0x08)
	};

	struct Function_DFMQuest_QA_AIFightMeListener_QA_AIFightMeListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName Tag; // 0x08(0x08)
		struct ADFMPlayerController* Player; // 0x10(0x08)
		struct UQA_AIFightMeListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_AITeamSizeListener_QA_AITeamSizeListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		enum class EQA_AITeamSizeListenerOption Option; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FName QATag_AIGroupSpawnerBase_TeamName; // 0x0c(0x08)
		enum class EGPQuestActionCompareOperator Compare; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		int32_t size; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UQA_AITeamSizeListener* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_AllClientLoadingCompletedListener_QA_AllClientLoadingCompletedListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		bool bOnce; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UQA_AllClientLoadingCompletedListener* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_ButtonClickedListener_QA_ButtonClickedListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName ButtonName; // 0x08(0x08)
		struct UQA_ButtonClickedListener* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_MandelBrickListener_QA_MandelBrickListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct ACHARACTER* OperatorCharacter; // 0x08(0x08)
		struct FName MandelBrickTag; // 0x10(0x08)
		struct UQA_MandelBrickListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_CarryBodyListener_QA_CarryBodyListener_Param
	{
	public:

		struct AGPQuestActionContext* InQAContext; // 0x00(0x08)
		struct ACHARACTER* CHARACTER; // 0x08(0x08)
		struct FName Name; // 0x10(0x08)
		struct UQA_CarryBodyListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_CarryBodySpawnListener_QA_OnCarryBodySpawnListener_Param
	{
	public:

		struct AGPQuestActionContext* InQAContext; // 0x00(0x08)
		struct FName Tag; // 0x08(0x08)
		bool Once; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_CarryBodySpawnListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_ClientHudLoadListener_QA_ClientHudLoadListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct TArray<struct FName> HUDNames; // 0x08(0x10)
		float TimeOutSeconds; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UQA_ClientHudLoadListener* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_Countdown_QA_StopStageCountdown_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct UQA_Countdown* QACountdown; // 0x08(0x08)
	};

	struct Function_DFMQuest_QA_Delay_QA_Delay_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		float Delay; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct UQA_Delay* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_EnableManningListener_QA_ManningListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName SourceTag; // 0x08(0x08)
		struct AGPCharacter* Operator; // 0x10(0x08)
		int32_t TeamId; // 0x18(0x04)
		bool Once; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct UQA_EnableManningListener* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_FadeOutListener_QA_FadeOutListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		bool bOnce; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UQA_FadeOutListener* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_FirstPlayerSeamLessEnterListener_QA_FirstPlayerSeamLessEnterListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		bool bOnce; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UQA_FirstPlayerSeamLessEnterListener* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_FixedRocketExplodeListener_QA_FixedRocketExplodeListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		bool bOnce; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UQA_FixedRocketExplodeListener* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_GPSequence_QA_ResetSequence_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName QATag_GPSequenceActor_GPSequence; // 0x08(0x08)
		enum class EGPQuestActionScope Scope; // 0x10(0x01)
	};

	struct Function_DFMQuest_QA_GPSequenceEventListener_QA_ListenSequenceEvent_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName QATag_GPSequenceActor_GPSequence; // 0x08(0x08)
		enum class EGPSequenceCustomEvent EventName; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FName EventSubName; // 0x14(0x08)
		enum class EGPQuestActionScope Scope; // 0x1c(0x01)
		bool bOnce; // 0x1d(0x01)
		char pad_1E[0x2]; // 0x1e(0x02)
		struct UQA_GPSequenceEventListener* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_GPCommonMediaPlayer_QA_PlayCommonMedia_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName MediaName; // 0x08(0x08)
		struct UQA_GPCommonMediaPlayer* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_GPCommonMediaPlayer_Server_QA_PlayCommonMedia_Server_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName MediaName; // 0x08(0x08)
		float MediaLength; // 0x10(0x04)
		float Timeout; // 0x14(0x04)
		struct UQA_GPCommonMediaPlayer_Server* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_GPSubtitleSequence_QA_GPSubtitleSequenceWithTeamIds_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName SubtitleSeqId; // 0x08(0x08)
		enum class ESubtitleSequenceType SubtitleSeqType; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct TArray<int32_t> TeamIds; // 0x18(0x10)
		struct AActor* SpeakerActor; // 0x28(0x08)
		struct UQA_GPSubtitleSequence* ReturnValue; // 0x30(0x08)
	};

	struct Function_DFMQuest_QA_HealthListener_QA_HealthListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName QATag_; // 0x08(0x08)
		enum class EGPQuestActionCompareOperator Compare; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float Percent; // 0x14(0x04)
		struct UQA_HealthListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_CharacterBuffListener_QA_CharacterBuffListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct AActor* CHARACTER; // 0x08(0x08)
		int32_t BuffId; // 0x10(0x04)
		bool bListenAdd; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		struct UQA_CharacterBuffListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_InAreaPlayerListener_QA_InAreaPlayerListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName QATag; // 0x08(0x08)
		float FailedTimeLimit; // 0x10(0x04)
		float FixedNtfTimeStep; // 0x14(0x04)
		bool bOnceForFailed; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct UQA_InAreaPlayerListener* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_InteractorController_QA_InteractorController_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName QATag_GPQuestInteractorInterface_InteractorTag; // 0x08(0x08)
		enum class EQA_InteractorControllerOption Option; // 0x10(0x01)
		enum class EGPQuestActionScope Scope; // 0x11(0x01)
		char pad_12[0x6]; // 0x12(0x06)
		struct UQA_InteractorController* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_InteractorStatusListener_QA_InteractorStatusListener_Param
	{
	public:

		struct AGPQuestActionContext* InQAContext; // 0x00(0x08)
		struct FName InteractorTag; // 0x08(0x08)
		struct FName ReleaseParams; // 0x10(0x08)
		bool Once; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct UQA_InteractorStatusListener* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_InteractorButtonShownListener_QA_InteractorButtonShownListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName InteractorTag; // 0x08(0x08)
		bool Once; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_InteractorButtonShownListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_TutorialLootingListener_QA_TutorialLootingListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct AActor* InteractorActor; // 0x08(0x08)
		int32_t LootingAiIndex; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct UQA_TutorialLootingListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_TutorialMapGuideListener_QA_TutorialMapGuideListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct UQA_TutorialMapGuideListener* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMQuest_QA_MorseCodeSuccessListener_QA_MorseCodeSuccessListener_Param
	{
	public:

		struct AGPQuestActionContext* InQAContext; // 0x00(0x08)
		struct FName InteractorTag; // 0x08(0x08)
		struct UQA_MorseCodeSuccessListener* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_LevelSequenceActingOnPauseTrigger_QA_LevelSequenceActingOnPauseTrigger_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct UClass* ActorClass; // 0x08(0x08)
		struct FName actorTag; // 0x10(0x08)
		bool bOnce; // 0x18(0x01)
		enum class EGPQuestActionScope Scope; // 0x19(0x01)
		char pad_1A[0x6]; // 0x1a(0x06)
		struct UQA_LevelSequenceActingOnPauseTrigger* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_ListenPlayerOffBattle_QA_ListenPlayerOffBattle_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct AGPCharacter* GPCharacter; // 0x08(0x08)
		float OffBattleTime; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct UQA_ListenPlayerOffBattle* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_LootingListener_QA_LootingListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName SourceTag; // 0x08(0x08)
		struct UQA_LootingListener* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_MultiTriggerListener_QA_MultiTriggerListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		enum class EGPQuestActionTriggerType Type; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FName QATag_; // 0x0c(0x08)
		char pad_14[0x4]; // 0x14(0x04)
		struct UClass* ActorTypeA; // 0x18(0x08)
		struct UClass* ActorTypeB; // 0x20(0x08)
		enum class EQA_TriggerListenerOption Option; // 0x28(0x01)
		enum class EGPQuestActionScope Scope; // 0x29(0x01)
		bool bOnce; // 0x2a(0x01)
		char pad_2B[0x5]; // 0x2b(0x05)
		struct UQA_MultiTriggerListener* ReturnValue; // 0x30(0x08)
	};

	struct Function_DFMQuest_QA_PlayerDeathListener_QA_PlayerDeathListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		bool bOnce; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UQA_PlayerDeathListener* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_PlayerExitListener_QA_PlayerExitListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct ACHARACTER* Player; // 0x08(0x08)
		struct FName QATag; // 0x10(0x08)
		struct UQA_PlayerExitListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_PlayerSafePathListener_QA_PlayerSafePathListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		enum class EQA_PlayerSafePathListenerOption Option; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FName QATag_GPPlayerSafePathListener_PlayerSafePathListener; // 0x0c(0x08)
		enum class EGPQuestActionScope Scope; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		struct UQA_PlayerSafePathListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_PlayersChaseTargetListener_QA_PlayersChaseTargetListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct UClass* TargetClass; // 0x08(0x08)
		enum class EPlayersChaseTargetMode CheckMode; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FName QATag_TargetTag; // 0x14(0x08)
		float TargetThreshold; // 0x1c(0x04)
		float WarningThreshold; // 0x20(0x04)
		float FailThreshold; // 0x24(0x04)
		struct UQA_PlayersChaseTargetListener* ReturnValue; // 0x28(0x08)
	};

	struct Function_DFMQuest_QA_PlayerSkillListener_QA_OnWeaponBowBeginFire_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct UQA_PlayerSkillListener* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMQuest_QA_DetectorArrowFireListener_QA_DetectorArrowFireListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct AGPCharacter* Player; // 0x08(0x08)
		struct UQA_DetectorArrowFireListener* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_PlayerTransitionMove_QA_StartTransitionMove_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct AGPCharacter* Player; // 0x08(0x08)
		struct FName QATag; // 0x10(0x08)
		enum class EGPQuestActionScope Scope; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct UQA_PlayerTransitionMove* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_RandomRangeExec_QA_RandomNumber_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		float Weight1; // 0x08(0x04)
		float Weight2; // 0x0c(0x04)
		float Weight3; // 0x10(0x04)
		float Weight4; // 0x14(0x04)
		struct UQA_RandomRangeExec* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_RestResurrectCoin_QA_ResetResurrectCoin_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct APlayerController* TargetPlayerCtrl; // 0x08(0x08)
		struct UQA_RestResurrectCoin* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_SequenceStream_QA_StopSequenceStream_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName SequenceStreamTag; // 0x08(0x08)
		struct UQA_SequenceStream* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_CutSceneViewTargetListener_QA_SequenceToPlayerCameraListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct APlayerController* Player; // 0x08(0x08)
		float TransitionSpeed; // 0x10(0x04)
		bool bCopyLocAndRot; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		struct UQA_CutSceneViewTargetListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_ShowGuidePopWindowListener_QA_ShowGuidePopWindowListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		int32_t GuideID; // 0x08(0x04)
		struct FName GuideAudio; // 0x0c(0x08)
		char pad_14[0x4]; // 0x14(0x04)
		struct UQA_ShowGuidePopWindowListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_SimplePathFollower_QA_SimplePathFollower_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		enum class EQA_SimplePathFollowerOption Option; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FName QATag_GPPathFollower_PathFollower; // 0x0c(0x08)
		enum class EGPQuestActionScope Scope; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		struct UQA_SimplePathFollower* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_SimpleActionListener_QAS_PlayCustomAnim_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct UAnimSequenceBase* AnimSequenceToPlay1P; // 0x08(0x08)
		struct UAnimSequenceBase* AnimSequenceToPlay3P; // 0x10(0x08)
		float PlayRate; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UQA_SimpleActionBase* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_DFMMissionActionLib_QA_SomeOneCarraySomeBody_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct ACHARACTER* CHARACTER; // 0x08(0x08)
		struct FName Name; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_LevelActionListener_QA_EnterRaidWorld_Param
	{
	public:

	};

	struct Function_DFMQuest_QA_SimpleQuestListener_QAS_CheckServerDone_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct UQA_SimpleQuestListener* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMQuest_QA_SpawnAI_QA_SpawnAI_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName QATag_AIGroupSpawnerBase_TeamName; // 0x08(0x08)
		struct FName QATag_MoveToSpotTag; // 0x10(0x08)
		bool bWander; // 0x18(0x01)
		bool bAddDefaultMarker; // 0x19(0x01)
		char pad_1A[0x6]; // 0x1a(0x06)
		struct UQA_SpawnAI* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_SpawnAIByDrama_QA_SpawnAIByDrama_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName DramaTag; // 0x08(0x08)
		char DifficultyLevel; // 0x10(0x01)
		bool bUseBPSpawnAI; // 0x11(0x01)
		char pad_12[0x6]; // 0x12(0x06)
		struct UQA_SpawnAIByDrama* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_SpawnedAIAliveSizeListener_QA_SpawnedAIAliveSizeListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName AITeamTag; // 0x08(0x08)
		struct UQA_SpawnedAIAliveSizeListener* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_TaggedTimer_QA_TaggedTimer_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		enum class EQA_TimerMode Mode; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FName QA_TimerTag; // 0x0c(0x08)
		float TriggerInterval; // 0x14(0x04)
		int32_t TriggerCount; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UQA_TaggedTimer* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_TargetHealthListener_QA_TargetHealthListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct UClass* TargetClass; // 0x08(0x08)
		struct FName QATag_TargetTag; // 0x10(0x08)
		float HealthPercent; // 0x18(0x04)
		bool bOnce; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct UQA_TargetHealthListener* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_TargetTakeDamageListener_QA_TargetTakeDamageListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct UClass* TargetClass; // 0x08(0x08)
		struct FName QATag_TargetTag; // 0x10(0x08)
		enum class EQADamageType DamageType; // 0x18(0x01)
		bool bOnce; // 0x19(0x01)
		char pad_1A[0x6]; // 0x1a(0x06)
		struct UQA_TargetTakeDamageListener* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_TeamAllDiedListener_QA_TeamAllDiedListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		bool EnableResurrectCoin; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UQA_TeamAllDiedListener* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_TeamBuyBackListener_QA_TeamBuyBackListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct UQA_TeamBuyBackListener* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMQuest_QA_TeamDeathListener_QA_TeamDeathListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		int32_t QTeamId; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct UQA_TeamDeathListener* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_TeammateRebornListener_QA_TeammateRebornListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct UQA_TeammateRebornListener* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMQuest_QA_TeleportPlayerAsync_QA_TeleportAllPlayersAsync_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName QATag_PlayerStartTag; // 0x08(0x08)
		struct UQA_TeleportPlayerAsync* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_Timer_QA_Timer_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		enum class EQA_TimerMode Mode; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		float TriggerInterval; // 0x0c(0x04)
		int32_t TriggerCount; // 0x10(0x04)
		struct FName Tag; // 0x14(0x08)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UQA_Timer* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_Tips_QA_Tips_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FString sMessage; // 0x08(0x10)
		float Time; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UQA_Tips* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_TrainStatusListener_TrainPlateRotateComplete_Param
	{
	public:

	};

	struct Function_DFMQuest_QA_TriggerAISpawnUnit_QA_TriggerAISpawnUnit_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName UnitTag; // 0x08(0x08)
		struct UQA_TriggerAISpawnUnit* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_TriggerListener_QA_TriggerListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		enum class EGPQuestActionTriggerType Type; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FName QATag_; // 0x0c(0x08)
		enum class EQA_TriggerListenerOption Option; // 0x14(0x01)
		enum class EGPQuestActionScope Scope; // 0x15(0x01)
		bool bOnce; // 0x16(0x01)
		bool bCheckOverlaping; // 0x17(0x01)
		bool PlayerMustHasContract; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct UQA_TriggerListener* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_VehicleDeathListener_QA_VehicleDeathListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName VehicleTag; // 0x08(0x08)
		bool bOnce; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_VehicleDeathListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_VehicleDramaPathFinishedListener_QA_VehicleDramaPathFinishedListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName VehicleTag; // 0x08(0x08)
		bool bOnce; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_VehicleDramaPathFinishedListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMQuest_QA_VehicleDriverDiedListener_QA_VehicleDriverDiedListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName VehicleTag; // 0x08(0x08)
		struct UQA_VehicleDriverDiedListener* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMQuest_QA_VehiclePathFollower_QA_VehiclePathFollowStop_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName VehicleTag; // 0x08(0x08)
		enum class EGPQuestActionScope Scope; // 0x10(0x01)
	};

	struct Function_DFMQuest_QA_VehiclePathFollowerCustomEvent_QA_VehiclePathFollowListenCustomEvent_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName VehicleTag; // 0x08(0x08)
		struct FName EventName; // 0x10(0x08)
		bool bOnce; // 0x18(0x01)
		enum class EGPQuestActionScope Scope; // 0x19(0x01)
		char pad_1A[0x6]; // 0x1a(0x06)
		struct UQA_VehiclePathFollowerCustomEvent* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMQuest_QA_VehicleSpawnListener_QA_VehicleSpawnListener_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct UQA_VehicleSpawnListener* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMQuest_QuestCutSceneHUD_TouchTimeOut_Param
	{
	public:

	};

	struct Function_DFMQuest_QuestHUDController_OnQuestStateUpdate_Param
	{
	public:

		struct FText PopText; // 0x00(0x18)
		enum class EGPQuestStageState QuestState; // 0x18(0x01)
	};

	struct Function_DFMQuest_QuestObjectiveView_ShowOptionalObjective_Param
	{
	public:

		struct FGPQuestText QuestText; // 0x00(0x28)
		int32_t ObjectiveIndex; // 0x28(0x04)
	};

	struct Function_DFMQuest_QuestStatusTipsView_SetQuestText_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
	};

	struct Function_DFMQuest_DFMQuestActionLib_QA_VehicleStartAutoDrive_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName VehicleTag; // 0x08(0x08)
		float ExpectVelocity; // 0x10(0x04)
		float ExpectDuration; // 0x14(0x04)
	};

	struct Function_DFMQuest_DFMQuestClientProxy_UpdateOnlyShowActorTags_Param
	{
	public:

		struct TArray<struct FName> ActorTags; // 0x00(0x10)
	};

	struct Function_DFMQuest_SOLQuestActionLib_QA_ToggleExitOpenBanner_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName Tag; // 0x08(0x08)
		struct FText ExitOpenText; // 0x10(0x18)
		enum class ESOLUIIconType SOLUIIconType; // 0x28(0x01)
		char pad_29[0x3]; // 0x29(0x03)
		float ExitOpenTextDuration; // 0x2c(0x04)
	};

	struct Function_DFMQuest_IntroQuestClientProxy_SaveGame_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FName CheckPointTag; // 0x08(0x08)
	};

	struct Function_DFMQuest_RaidQuestClientProxy_OnServerMatchEnded_Param
	{
	public:

		enum class EMatchOverReason MatchOverReason; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		int64_t PlayerUin; // 0x08(0x08)
	};

	struct Function_DFMQuest_SOLQuestClientProxy_OnRep_MapQuestRangeData_Param
	{
	public:

	};

	struct Function_DFMQuest_TutorialQuestClientProxy_UnlockLuaHUDPanels_Param
	{
	public:

		struct TArray<struct FString> PanelNames; // 0x00(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
