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
	struct Function_IrisWorld_BigMapIrisHUDView_PlaySwitchAnimationIris_Param
	{
	public:

		bool bSwitchToFullScreen; // 0x00(0x01)
	};

	struct Function_IrisWorld_BigMapQuestDetailView_OnTrackBtnClick_Param
	{
	public:

	};

	struct Function_IrisWorld_CountDownHUDBaseView_SetType_Param
	{
	public:

		int32_t TypeID; // 0x00(0x04)
	};

	struct Function_IrisWorld_DeadBodyDrugSubSystem_OnAIPlayerDiedEvent_Param
	{
	public:

		struct AController* cpc; // 0x00(0x08)
	};

	struct Function_IrisWorld_IrisRaidDataComponent_SwitchRaidStage_Param
	{
	public:

		enum class ERaidStage NewStage; // 0x00(0x01)
	};

	struct Function_IrisWorld_IrisRaidDataStatisticsComponent_OnServerRaidQuestEnded_Param
	{
	public:

		int64_t CurQuestID; // 0x00(0x08)
		enum class ERaidStage CurStage; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		int32_t TimeSpent; // 0x0c(0x04)
	};

	struct Function_IrisWorld_IrisRaidEntranceView_EnterRaid_Param
	{
	public:

	};

	struct Function_IrisWorld_Stronghold_SpawnNPCs_Param
	{
	public:

	};

	struct Function_IrisWorld_StrongholdSpawnContainer_Unspawn_Param
	{
	public:

	};

	struct Function_IrisWorld_IrisStrongholdComponent_UpdateState_Param
	{
	public:

		uint32_t StrongholdID; // 0x00(0x04)
		enum class EStrongholdState EState; // 0x04(0x01)
	};

	struct Function_IrisWorld_IrisWorldCustomPlayerStateDataComponent_OnRep_EndAlertTimestamp_Param
	{
	public:

	};

	struct Function_IrisWorld_IrisWorldGameMode_RebornPlayer_Param
	{
	public:

		struct AController* PlayerController; // 0x00(0x08)
		bool RefillArmor; // 0x08(0x01)
	};

	struct Function_IrisWorld_IrisWorldGameplayDelegates_NotifyIrisSafeHouseReady_Param
	{
	public:

	};

	struct Function_IrisWorld_IrisWorldGameplaySubsystem_OnClientSeamlessTravelFinished_Param
	{
	public:

		bool bReconnect; // 0x00(0x01)
	};

	struct Function_IrisWorld_IrisWorldGamePlayUtils_SpawnTeamMateCharacter_Param
	{
	public:

		struct UWorld* WorldContext; // 0x00(0x08)
		struct AActor* ReturnValue; // 0x08(0x08)
	};

	struct Function_IrisWorld_IrisWorldGameplayBlueprintHelper_StartRedAlert_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float Timeout; // 0x08(0x04)
	};

	struct Function_IrisWorld_IrisWorldGameState_SetMuteFoliage_Param
	{
	public:

		bool bValue; // 0x00(0x01)
	};

	struct Function_IrisWorld_IrisWorldHUD_OnQuestStageChanged_Param
	{
	public:

		struct FName QuestStageName; // 0x00(0x08)
	};

	struct Function_IrisWorld_IrisWorldPlayerSettlementComponent_ServerCollectPlayerSettlementData_Param
	{
	public:

		enum class EMatchOverReason MatchOverReason; // 0x00(0x01)
	};

	struct Function_IrisWorld_IrisWorldPlayerState_SetPlayerVisiable_Param
	{
	public:

		bool bPlayerVisiable; // 0x00(0x01)
	};

	struct Function_IrisWorld_IrisWorldRaidInfoActor_GetRaidInfo_Param
	{
	public:

		struct UObject* InWorldContext; // 0x00(0x08)
		struct AIrisWorldRaidInfoActor* ReturnValue; // 0x08(0x08)
	};

	struct Function_IrisWorld_QA_FillAllWeaponAmmo_QA_FillAllWeaponAmmo_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct APlayerController* TargetPlayerCtrl; // 0x08(0x08)
		struct UQA_FillAllWeaponAmmo* ReturnValue; // 0x10(0x08)
	};

	struct Function_IrisWorld_QA_GetRaidDifficult_QA_GetRaidDifficult_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct UQA_GetRaidDifficult* ReturnValue; // 0x08(0x08)
	};

	struct Function_IrisWorld_QA_IrisCheckPoint_QA_EnableFindNearestCheckPoint_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct UQA_IrisCheckPoint* ReturnValue; // 0x08(0x08)
	};

	struct Function_IrisWorld_RaidBuyConditionView_ShowView_Param
	{
	public:

	};

	struct Function_IrisWorld_RaidCountDownHUDView_SetType_Param
	{
	public:

		int32_t TypeID; // 0x00(0x04)
	};

	struct Function_IrisWorld_RaidMainHUDView_ShowView_Param
	{
	public:

	};

	struct Function_IrisWorld_RaidMainSideView_OnInit_Param
	{
	public:

	};

	struct Function_IrisWorld_RaidMapHUDController_UpdateEnemyStatus_Param
	{
	public:

		float Delta; // 0x00(0x04)
	};

	struct Function_IrisWorld_RaidMissionCompleteView_OnTouchEvent_Clicked_Param
	{
	public:

	};

	struct Function_IrisWorld_RaidMissionItemView_OnRaidMissionSettlement_Param
	{
	public:

		int32_t RaidID; // 0x00(0x04)
		int32_t QuestID; // 0x04(0x04)
	};

	struct Function_IrisWorld_RaidMissionTargetItemView_OnMissionStateChanged_Param
	{
	public:

	};

	struct Function_IrisWorld_RaidPreviewHUDView_StartMatchTeammate_Param
	{
	public:

		int32_t RaidID; // 0x00(0x04)
		int32_t SubMode; // 0x04(0x04)
	};

	struct Function_IrisWorld_RaidPropItemView_OnPropItemStateChange_Param
	{
	public:

	};

	struct Function_IrisWorld_RaidScreenMarkerView_ShowLine_Param
	{
	public:

		bool bEnableShow; // 0x00(0x01)
	};

	struct Function_IrisWorld_RaidStageRemainTimeView_SetRaidGameDifficultLevelText_Param
	{
	public:

	};

	struct Function_IrisWorld_RaidTeamHUDController_OnHurtCheckBtnStateChanged_Param
	{
	public:

		bool bIsChecked; // 0x00(0x01)
	};

	struct Function_IrisWorld_PlayerVoteItem_BPOnUpdatePlayer_Param
	{
	public:

	};

	struct Function_IrisWorld_RaidVoteItemView_UpdateVoteInfo_Param
	{
	public:

		struct TArray<struct FRaidVoteInfo> RaidVoteInfo; // 0x00(0x10)
	};

	struct Function_IrisWorld_RaidVoteView_UpdateVoteInfo_Param
	{
	public:

		struct TArray<struct FRaidVoteInfo> RaidVoteInfo; // 0x00(0x10)
	};

	struct Function_IrisWorld_RedAlertHUDView_GetRedAlertEndtimestamp_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_IrisWorld_SafeHouseLevelSubSys_Get_Param
	{
	public:

		struct UWorld* WorldContext; // 0x00(0x08)
		struct ASafeHouseLevelSubSys* ReturnValue; // 0x08(0x08)
	};

	struct Function_IrisWorld_SeamlessTravelTestView_OnSeamlessTravelEnd_Param
	{
	public:

	};

	struct Function_IrisWorld_WorldCruiseActor_StartTarget_Param
	{
	public:

		struct AGPPlayerController* cpc; // 0x00(0x08)
	};

	struct Function_IrisWorld_WorldCruiseActorSpawner_Spawn_Param
	{
	public:

	};

	struct Function_IrisWorld_IrisGameRuleComponent_RemoveCharacterComponents_Param
	{
	public:

		struct AController* DFMController; // 0x00(0x08)
	};

	struct Function_IrisWorld_MapMissionHUDView_OnClick_Param
	{
	public:

	};

	struct Function_IrisWorld_MapStrongholdHUDView_OnClick_Param
	{
	public:

	};

	struct Function_IrisWorld_DiscoveryGameRuleComponent_OnRecAny2DSBeginRaidReq_Param
	{
	public:

		uint64_t RaidID; // 0x00(0x08)
		struct TArray<uint64_t> PlayerIds; // 0x08(0x10)
	};

	struct Function_IrisWorld_RaidGameRuleComponent_OnRecAny2DSBeginRaidReq_Param
	{
	public:

		uint64_t RaidID; // 0x00(0x08)
		struct TArray<uint64_t> PlayerIds; // 0x08(0x10)
	};

	struct Function_IrisWorld_SafeHouseGameRuleComponent_OnCharacterEnterSafeHouseRule_Param
	{
	public:

		struct APawn* TargetPawn; // 0x00(0x08)
	};

	struct Function_IrisWorld_SubGameMode_SafeHouse_OnSafeHouseEnvUnloadSuccess_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
