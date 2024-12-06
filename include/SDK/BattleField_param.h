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
	struct Function_BattleField_BattleFieldAudioPlayerComponent_ServerTriggerTip_Param
	{
	public:

		struct FBattleFieldTipInfo TipInfo; // 0x00(0x20)
	};

	struct Function_BattleField_BattleFieldCapturePoint_OnRep_CapturedCamp_Param
	{
	public:

		int32_t OldCamp; // 0x00(0x04)
	};

	struct Function_BattleField_BattleFieldCharacter_SwitchWeaponPreset_Param
	{
	public:

		uint64_t WeaponItemId; // 0x00(0x08)
		int32_t WeaponPresetIndex; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_BattleField_BattleFieldGameMode_RebornPlayer_Param
	{
	public:

		struct AController* PlayerController; // 0x00(0x08)
	};

	struct Function_BattleField_BattleFieldGameRuleComponent_RequsetReborn_Param
	{
	public:

		struct FRebornInformation RebornInformation; // 0x00(0xc0)
	};

	struct Function_BattleField_BattleFieldGameState_UpdatePlayerStatsOffline_Param
	{
	public:

		uint64_t InPlayerUin; // 0x00(0x08)
		bool bIsOffline; // 0x08(0x01)
	};

	struct Function_BattleField_BattleFieldHUD_NotifyTeamInfoHUDMVP_Param
	{
	public:

	};

	struct Function_BattleField_BattleFieldMapHUDController_OnPlayerKillInfoNtf_Param
	{
	public:

		struct TArray<struct FKillInfo> NewAddKillInfo; // 0x00(0x10)
	};

	struct Function_BattleField_BattleFieldNotifySubSystem_ShowAcRising_Param
	{
	public:

		float RiseTime; // 0x00(0x04)
	};

	struct Function_BattleField_BattleFieldPlayerState_UpdateFootStepAudioStyleID_Param
	{
	public:

		int64_t CurrHeroID; // 0x00(0x08)
	};

	struct Function_BattleField_BattleFieldRedeployView_ShowWeaponChange_Param
	{
	public:

	};

	struct Function_BattleField_BattleFieldSettlementView_OnBattleFieldEndMatchEvent_Param
	{
	public:

		int32_t InWinCamp; // 0x00(0x04)
	};

	struct Function_BattleField_BattleFieldStatisticsComponent_CalculateAndShowStickToTheGoalInfo_Param
	{
	public:

		struct ACHARACTER* CHARACTER; // 0x00(0x08)
	};

	struct Function_BattleField_BattleFieldTeamSystem_OnPlayerSettlementEnd_Param
	{
	public:

		int64_t PlayerUin; // 0x00(0x08)
	};

	struct Function_BattleField_BattleFieldUtil_PruneString_Param
	{
	public:

		struct FString InStr; // 0x00(0x10)
		int32_t maxLen; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_BattleField_BattleReportTipsView_SetShow_Param
	{
	public:

		bool Show; // 0x00(0x01)
	};

	struct Function_BattleField_BigMapBattleFieldHUDView_OnAddDecSliderCurNumChanged_Param
	{
	public:

		int32_t InCurNum; // 0x00(0x04)
		int32_t InChangeNum; // 0x04(0x04)
	};

	struct Function_BattleField_CanMakeDamageBreakablePawn_DestroyedTrigger_Param
	{
	public:

		struct FDamageResultInfo DamageResult; // 0x00(0x5e0)
	};

	struct Function_BattleField_CapturePointIconHUDController_OnCapturePointHUDUpdate_Param
	{
	public:

		struct ABattleFieldCapturePoint* InCapturePoint; // 0x00(0x08)
	};

	struct Function_BattleField_CapturePointViewItem_UnLockClickBtn_Param
	{
	public:

	};

	struct Function_BattleField_PlayerGMComponentBattleField_GMServerKickPvpBot_Param
	{
	public:

		int32_t Count; // 0x00(0x04)
	};

	struct Function_BattleField_PvpAIComponent_TakeOverDebugInfo_Param
	{
	public:

		struct APvpAIDebugInfo* AIDebugInfo; // 0x00(0x08)
	};

	struct Function_BattleField_PvpAIDebugInfo_TickTimerHandler_Param
	{
	public:

	};

	struct Function_BattleField_PvpAiOverviewDebugInfo_OnRep_ObjectiveInfos_Param
	{
	public:

	};

	struct Function_BattleField_PvpAiPersonDetailDebugInfo_ServerCloseSpectateModeLogicPlayerKillHandler_Param
	{
	public:

		struct AGPPlayerController* LocalPlayerController; // 0x00(0x08)
	};

	struct Function_BattleField_PVPAISubsystem_RandomIndexWithWeight_Param
	{
	public:

		struct TArray<float> Weights; // 0x00(0x10)
		int32_t ReturnValue; // 0x10(0x04)
	};

	struct Function_BattleField_VCRBuilder_GenerateViewCell_Param
	{
	public:

	};

	struct Function_BattleField_VCRManager_ReadBinary_Param
	{
	public:

	};

	struct Function_BattleField_PVPAIJobs_SetOwner_Param
	{
	public:

		struct ADFMAIPlayerController* Controller; // 0x00(0x08)
	};

	struct Function_BattleField_MoveToCapturePointJob_SetTargetRoutePoint_Param
	{
	public:

		struct ABattleRoutePoint* RoutePoint; // 0x00(0x08)
	};

	struct Function_BattleField_MoveToCapturePointFlankJob_SetFlankRoutePoint_Param
	{
	public:

		struct ABattleRoutePoint* Point; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
