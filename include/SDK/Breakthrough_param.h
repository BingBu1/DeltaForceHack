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
	struct Function_Breakthrough_AirDropMainView_OnRefreshData_Param
	{
	public:

	};

	struct Function_Breakthrough_AnchorSpawnArea_SetDangerous_Param
	{
	public:

		float RebornTime; // 0x00(0x04)
	};

	struct Function_Breakthrough_BattleCampSector_SetConfigVehicleSpawnCD_Param
	{
	public:

	};

	struct Function_Breakthrough_BattleFieldCampSectorMarkerItem_OnCampSectorMarkerShowed_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughBalanceDataTableManager_OnCurveDataLoadComplete_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> Assets; // 0x00(0x10)
	};

	struct Function_Breakthrough_ConquestBalanceDataTableManager_OnCurveDataLoadComplete_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> Assets; // 0x00(0x10)
	};

	struct Function_Breakthrough_BattleFieldDeduceComponent_OnPlayDeduceDelay_Param
	{
	public:

		int32_t InIndex; // 0x00(0x04)
	};

	struct Function_Breakthrough_BattleFieldElevator_OnPlayElevatorMovingEndAudioTimerHandle_Param
	{
	public:

	};

	struct Function_Breakthrough_BattleFieldMarkingRoulette_SendSpeakVO_Param
	{
	public:

		struct FBattleFieldMarkingItemData InVOName; // 0x00(0x68)
	};

	struct Function_Breakthrough_BattleFieldOrdersComponent_VehicleDiedAddScore_Param
	{
	public:

		struct ADFMVehicleBase* Vehicle; // 0x00(0x08)
		struct AGPCharacter* AttackerCharacter; // 0x08(0x08)
	};

	struct Function_Breakthrough_BattleFieldRankSkillBackground_UpdateUIDegree_Param
	{
	public:

		float InDegree; // 0x00(0x04)
	};

	struct Function_Breakthrough_BattleFieldTopBarTextWidget_OnAnimationEnd_Param
	{
	public:

	};

	struct Function_Breakthrough_BattleSectorAnchor_UpdatePlayerInAnchorState_Param
	{
	public:

		bool InIsPlayerOccupyingAnchor; // 0x00(0x01)
	};

	struct Function_Breakthrough_BattleSectorBase_SetConfigVehicleSpawnCD_Param
	{
	public:

		struct FBattleSectorDefines BRDataRow; // 0x00(0x58)
	};

	struct Function_Breakthrough_BattleSectorTrigger_OnOverlapEnd_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
	};

	struct Function_Breakthrough_BattleSectorVehicle_OnRep_IsActive_Param
	{
	public:

	};

	struct Function_Breakthrough_BigMapBattleMainKey_BP_InitWidget_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakThroughAISubsystem_SpawnTestBot_Param
	{
	public:

		int32_t Camp; // 0x00(0x04)
		int32_t ArmdedForce; // 0x04(0x04)
		struct FName TemplateName; // 0x08(0x08)
		struct FVector SpawnPos; // 0x10(0x0c)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct ADFMCharacter* ReturnValue; // 0x20(0x08)
	};

	struct Function_Breakthrough_BreakthroughBigMapHUDController_VehicleOnFireInfoUpdate_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughCharacter_SetMoveComponentActive_Param
	{
	public:

		bool bActive; // 0x00(0x01)
	};

	struct Function_Breakthrough_BreakthroughCountDownTimerView_OnClientBreakthroughInFightBack_Param
	{
	public:

		bool InFightBack; // 0x00(0x01)
	};

	struct Function_Breakthrough_BreakthroughDataComponent_SetRoundRedeployTLogData_Param
	{
	public:

		uint64_t OpenId; // 0x00(0x08)
		enum class ERoundRedeployTLogDataType RoundRedeployTLogDataType; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct FOnePlayerOneSectorData OnePlayerOneSectorData; // 0x10(0x30)
	};

	struct Function_Breakthrough_BreakthroughDeployArmHeroGroupView_SetArmID_Param
	{
	public:

		int32_t InArmID; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughDeployBagTabItem_OnCheckBoxStateChanged_Param
	{
	public:

		bool bIsChecked; // 0x00(0x01)
	};

	struct Function_Breakthrough_BreakthroughDeployHeroItemView_OnEnsureButtonUnhovered_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughDeployPackageView_ShowWeaponStoreHud_Param
	{
	public:

		enum class EAttachPosition InAttachPosition; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughDeployPointCanSelectQuadView_SetType_Param
	{
	public:

		int32_t Type; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughDeploySelectedHeroView_ShowHeroList_Param
	{
	public:

		bool bIsShow; // 0x00(0x01)
	};

	struct Function_Breakthrough_BreakthroughDSLogic_OnServerLeftVotes_Param
	{
	public:

		int32_t LeftVotes; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughDynamicMusic_UpdateConditionStage_Param
	{
	public:

		enum class EDynamicMusicCondition Condition; // 0x00(0x01)
		char Stage; // 0x01(0x01)
	};

	struct Function_Breakthrough_BreakthroughFirstDeployCountDownView_SetCountDownTitleType_Param
	{
	public:

		int32_t InTitleType; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughGPSubsystem_OnSecter2WinPlay_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughKillFeecbackIconView_Update_Param
	{
	public:

		float DT; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughKillFeecbackInfoView_Update_Param
	{
	public:

		float DT; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughKillFeecbackMainView_UpdateNum_Param
	{
	public:

		float Delta; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughKillFeecbackNumView_Update_Param
	{
	public:

		float DT; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughKillMarkerView_RefreshKillerMarkerWidget_Param
	{
	public:

		uint64_t KillerUin; // 0x00(0x08)
		struct FText EnemyName; // 0x08(0x18)
		int32_t EnemyLevel; // 0x20(0x04)
		int32_t EnemyKillSelf; // 0x24(0x04)
		int32_t SelfKillEnemy; // 0x28(0x04)
		int32_t SoldierCategory; // 0x2c(0x04)
		struct FGPWeaponDescInfo WeaponDes; // 0x30(0x108)
	};

	struct Function_Breakthrough_BreakthroughNotifyReceiveComponent_ServerIsFirstOrderBroadCast_Param
	{
	public:

		bool InbIsFirstOrderBroadCast; // 0x00(0x01)
	};

	struct Function_Breakthrough_BreakthroughNotifySubSystem_TickThinkWirelessDialog_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughOrderBroadcastPanel_OnShowBattleReportOrderTips_Param
	{
	public:

		struct FBattleFieldBroadcastTipInfo InTipInfo; // 0x00(0x70)
		int32_t OrderPriority; // 0x70(0x04)
		float ShowAnimTime; // 0x74(0x04)
	};

	struct Function_Breakthrough_BreakthroughPlayerSettlementComponent_ShowCampEmptyTips_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughPreMatchStageFlowComponent_OnWaitLoadingTimerOut_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughRank_UpdateSkillUIState_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughRankItem_PlayInAnimation_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughRankView_UpdateRankViewRoulette_Param
	{
	public:

		int32_t InIndex; // 0x00(0x04)
		float InFactor; // 0x04(0x04)
		float InAngle; // 0x08(0x04)
	};

	struct Function_Breakthrough_BreakthroughRedeployArmSelectedView_UpdateRedeployBtn_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughRedeployButtonView_SetMainTitleText4AllState_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
	};

	struct Function_Breakthrough_BreakthroughRedeployComponent_TimerTickCollectVehicleInfo_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughRedeployGestureView_WidgetOnDrag_Param
	{
	public:

		int32_t OnClickTouchIndex; // 0x00(0x04)
		struct FVector2D LastScreenSpacePosition; // 0x04(0x08)
		struct FVector2D ScreenSpacePosition; // 0x0c(0x08)
	};

	struct Function_Breakthrough_BreakthroughRedeployHeroInfoView_UpdateCloseHeroInfoButtonState_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughRedeployHudField_SetGuideStatusByEnum_Param
	{
	public:

		enum class EBattleFieldInGameGuideType GuideType; // 0x00(0x01)
		enum class EBreakthroughRedeployOneGuideStatus GuideStatus; // 0x01(0x01)
	};

	struct Function_Breakthrough_BreakthroughRedeployHudLogic_VisibleRedeployArmSelectedViewCloseHeroInfoButton_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughRedeployPointHubItemDetail_UpdateItemState_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughRedeployPointSelectQuad_StopShakeRedeployCDAnim_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughRedeployPointVehicleHubItem_SetVehicleSpawnerStatus_Param
	{
	public:

		struct UHubOneTypeVehicleStatus* InStatus; // 0x00(0x08)
	};

	struct Function_Breakthrough_BreakthroughRedeployVoteTipsView_OnClientOnSectorActived_Param
	{
	public:

		struct AActor* Sector; // 0x00(0x08)
	};

	struct Function_Breakthrough_BreakthroughRepPolicy_OnRep_VehicleVolatileInfoList_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughSectorAnchorCapView_UpdateSectorAnchorOccupyProgressBar_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughSectorAnchorGuidance_SetOccupyPointView_Param
	{
	public:

		struct ABattleSectorBase* InBattleSector; // 0x00(0x08)
	};

	struct Function_Breakthrough_BreakthroughSectorAnchorMarkerItem_OnTipsInfoNtf_Param
	{
	public:

		struct FBattleFieldBroadcastTipInfo InTipInfo; // 0x00(0x70)
	};

	struct Function_Breakthrough_BreakthroughSectorAnchorMarkerWidget_UpdateDropAnim_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughSectorAnchorProgress_UpdateSectorAnchorProgress_Param
	{
	public:

		float InDeltaTime; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughSectorBattleProgressSectorAnchorInfo_UpdateAnchorCapturedAnimation_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughSectorPoint_SetSectorNum_Param
	{
	public:

		int32_t InSectorNum; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughSectorProgressInfo_UpdateTransitioningSectorTopBar_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughSectorTranitionCountDownView_PlayCountDownAnimation_Param
	{
	public:

		int32_t InCountDownTime; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughStatisticsComponent_ShowAbilityHitMark_Param
	{
	public:

		struct ACHARACTER* CHARACTER; // 0x00(0x08)
	};

	struct Function_Breakthrough_BreakthroughSupportMapItemHUDView_StopAnimationLoop_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughTeamInfoHudView_OnTeamDragBtnClicked_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughTeamInfoItemHudView_UpdateTeammateState_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughTeamMemberInfoHUDView_UpdatePlayerBehaviorStatus_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughTipsWeakBroadcastHDPanel_OnShowPCBattleReportWeakTips_Param
	{
	public:

		struct FBattleFieldBroadcastTipInfo InTipInfo; // 0x00(0x70)
	};

	struct Function_Breakthrough_BreakthroughTopTimeCountDownView_StopUIAudio_Param
	{
	public:

		struct FName AudioName; // 0x00(0x08)
	};

	struct Function_Breakthrough_BreakthroughTweenSelectPoint_MakeSelectPoint_Param
	{
	public:

		struct FString TweenName; // 0x00(0x10)
		float DurTime; // 0x10(0x04)
		struct FBreakthroughRedeploySelectPointTweenData Start; // 0x14(0x1c)
		struct FBreakthroughRedeploySelectPointTweenData End; // 0x30(0x1c)
		enum class EaseType EaseType; // 0x4c(0x01)
		bool IsLoop; // 0x4d(0x01)
		char pad_4E[0x2]; // 0x4e(0x02)
		struct UBreakthroughTweenSelectPoint* ReturnValue; // 0x50(0x08)
	};

	struct Function_Breakthrough_BreakthroughUtil_ShortenNonSpecialString_Param
	{
	public:

		struct FString InStr; // 0x00(0x10)
		int32_t maxLen; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct FString ReturnValue; // 0x18(0x10)
	};

	struct Function_Breakthrough_CommonPopWindowV2LuaBaseWidget_OnLuaHudClose_Param
	{
	public:

	};

	struct Function_Breakthrough_ConquestTopBarView_OnTopBarButtonClicked_Param
	{
	public:

	};

	struct Function_Breakthrough_DamageEventTriggerVolume_SendBreakthroughBigEventInfoFlow_Param
	{
	public:

	};

	struct Function_Breakthrough_DamageEventVolume_OnVolumeEndOverlap_Param
	{
	public:

		struct AActor* OverlappedActor; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
	};

	struct Function_Breakthrough_DFFortificationView_OnPercentChanged_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		float InCurPer; // 0x08(0x04)
		bool InbIs1P; // 0x0c(0x01)
	};

	struct Function_Breakthrough_ForbiddenArea_OnOverlapEnd_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
	};

	struct Function_Breakthrough_FortificationBuildComponent_ServerSwitchToCanBuildWeapon_Param
	{
	public:

	};

	struct Function_Breakthrough_FortificationProxy_OnRep_CachedBuildPercent_Param
	{
	public:

		float InPrePer; // 0x00(0x04)
	};

	struct Function_Breakthrough_FortificationSystem_OnFortificationClassArrayLoaded_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> AssetRefArray; // 0x00(0x10)
	};

	struct Function_Breakthrough_GameMode_Breakthrough_WaitAllPlayerLoadingFinished_Param
	{
	public:

	};

	struct Function_Breakthrough_GameMode_Conquest_WaitAllPlayerLoadingFinished_Param
	{
	public:

	};

	struct Function_Breakthrough_DeployVehicleStatus_UpdateStatus_Param
	{
	public:

	};

	struct Function_Breakthrough_GameState_Breakthrough_UpdatePlayerStatsQuitMatch_Param
	{
	public:

		uint64_t InPlayerUin; // 0x00(0x08)
		bool bIsQuitMatch; // 0x08(0x01)
	};

	struct Function_Breakthrough_GlitchVolume_OnOverlapEnd_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
	};

	struct Function_Breakthrough_GPKismetBreakthrough_ShowFadeIn_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FFadeInfo InFadeInfo; // 0x08(0x24)
	};

	struct Function_Breakthrough_HudItemTemplateView_ShowUsing_Param
	{
	public:

		bool bShow; // 0x00(0x01)
	};

	struct Function_Breakthrough_ItemDetailViewLuaBaseWidget_SetInventoryItemInfo_Param
	{
	public:

		struct FInventoryItemInfo InventoryItemInfo; // 0x00(0x538)
	};

	struct Function_Breakthrough_MedalBaseWidget_SetMedalText_Param
	{
	public:

		struct FText MedalName; // 0x00(0x18)
		struct FText MedalDesc; // 0x18(0x18)
	};

	struct Function_Breakthrough_PlayerGMComponentBreakthrough_UploadClientReady_Param
	{
	public:

	};

	struct Function_Breakthrough_RedeployArmSelectedPackageItemView_ShowLockedMask_Param
	{
	public:

		bool bShow; // 0x00(0x01)
	};

	struct Function_Breakthrough_RedeployChooseItemGroupView_SetHeaderText_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
	};

	struct Function_Breakthrough_RedeployPointSelectEffectView_PlayAnim_AutoIn_Param
	{
	public:

	};

	struct Function_Breakthrough_ReDeployPointsPanel_UpdateSelectedQuadWidgetPos_Param
	{
	public:

		float InDeltaTime; // 0x00(0x04)
	};

	struct Function_Breakthrough_RedeployUIElementView_PlayAnima_Die_Param
	{
	public:

	};

	struct Function_Breakthrough_SceneFXTrigger_OnOverlapEnd_Param
	{
	public:

		struct AActor* OverlappedActor; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
	};

	struct Function_Breakthrough_ScoreboardBaseWidget_UpdateSelfHangUp_Param
	{
	public:

	};

	struct Function_Breakthrough_ScoreboardHUDView_TickRefresh_Param
	{
	public:

	};

	struct Function_Breakthrough_ScoreboardListItemBaseWidget_SetStat_Param
	{
	public:

		struct FPlayerStatItem InStatItem; // 0x00(0x48)
	};

	struct Function_Breakthrough_ScreenMarkerRipple_SetRippleColor_Param
	{
	public:

		int32_t InCamp; // 0x00(0x04)
	};

	struct Function_Breakthrough_SectorAnchorCapView_OnReceiveMulticastOccupyStatusChanged_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		int32_t OccupyCampId; // 0x08(0x04)
		int32_t BetterCamp; // 0x0c(0x04)
		struct FName CapturePointName; // 0x10(0x08)
	};

	struct Function_Breakthrough_SectorAnchorFlag_UpdateFlagState_Param
	{
	public:

		float InOccupyVal; // 0x00(0x04)
	};

	struct Function_Breakthrough_SectorAnchorFlagAnimInstance_SetFlagState_Param
	{
	public:

		bool bIsFly; // 0x00(0x01)
	};

	struct Function_Breakthrough_SectorAnchorHUDView_SetFlaggedFrameWidget_Param
	{
	public:

		bool bShowFlaggedFrame; // 0x00(0x01)
	};

	struct Function_Breakthrough_SectorAnchorViewController_OnSectorTransitioning_Param
	{
	public:

		float TransTime; // 0x00(0x04)
		bool bIsTransitioning; // 0x04(0x01)
	};

	struct Function_Breakthrough_SectorAnchorMarker_ShowAcRising_Param
	{
	public:

		float RiseTime; // 0x00(0x04)
	};

	struct Function_Breakthrough_HubOneTypeVehicleStatus_Reset_Param
	{
	public:

	};

	struct Function_Breakthrough_SpawnAreaHub_WaitHudFieldInit_Param
	{
	public:

	};

	struct Function_Breakthrough_VehicleRefreshRule_OnSectorTransEnd_Param
	{
	public:

		int32_t ActiveSector; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughBigMapHUDView_OnBigMapBattleMainKeyClassComplete_Param
	{
	public:

		struct FSoftObjectPath SoftObjectPath; // 0x00(0x18)
	};

	struct Function_Breakthrough_BreakthroughSplineAreaView_SetTintColor_Param
	{
	public:

		struct FLinearColor Color; // 0x00(0x10)
	};

	struct Function_Breakthrough_BreakthroughTipsBroadCastView_OnShowBattleReportTips_Param
	{
	public:

		struct FBattleFieldBroadcastTipInfo InTipInfo; // 0x00(0x70)
	};

	struct Function_Breakthrough_ReDeployPointSelectableWidget_UpdateWidget_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughVehicleSpawner_UpdateIsSpawnedAliveValue_Param
	{
	public:

		bool InIsSpawnedAlive; // 0x00(0x01)
	};

	struct Function_Breakthrough_ForbiddenBox_OnOverlapEnd_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
	};

	struct Function_Breakthrough_ReDeployChooseItemBaseHUDView_UpdateRightInfoWidget_Param
	{
	public:

		uint64_t InUint64Value; // 0x00(0x08)
	};

	struct Function_Breakthrough_RedeployChooseItemBaseView_UpdateStyleType_Param
	{
	public:

	};

	struct Function_Breakthrough_RedeployWeaponPresetStoreBaseHUDView_UpdateRightInfoWidget_Param
	{
	public:

		int32_t InInt32Value; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughSupportReleaseView_UpdateFreeNum_Param
	{
	public:

		int32_t FreeNum; // 0x00(0x04)
	};

	struct Function_Breakthrough_BreakthroughGeneralStrongBroadcastView_SetTipsText_Param
	{
	public:

		struct FText InShowTips; // 0x00(0x18)
	};

	struct Function_Breakthrough_BreakthroughIconStrongBroadcastView_SetTipsText_Param
	{
	public:

		struct FText InShowTips; // 0x00(0x18)
	};

	struct Function_Breakthrough_BreakthroughOrderItemBroadcastView_SetTipsText_Param
	{
	public:

		struct FText InShowTips; // 0x00(0x18)
	};

	struct Function_Breakthrough_BreakthroughSpecialStrongBroadcastView_UpdateCampIcon_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughTipsWeakBroadcastView_SetWeakTipsInfo_Param
	{
	public:

		struct FBattleFieldBroadcastTipInfo InTipInfo; // 0x00(0x70)
	};

	struct Function_Breakthrough_BreakthroughWirelessDialogBroadcastView_ShowSubtitle_Param
	{
	public:

		struct FText SpeakerName; // 0x00(0x18)
		struct FText SubtitleText; // 0x18(0x18)
	};

	struct Function_Breakthrough_ReDeployPointBaseWidget_InitWidget_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughRedeployPointVehicleHub_SetHide_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughCampVehicleSpawner_TimerTickCheckSpawnIDAvaliable_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughVehicleSpawnerActiveByAnchorOccupy_OnServerSectorOccupyStatusChanged_Param
	{
	public:

	};

	struct Function_Breakthrough_SectorSplineAreaViewController_OnSectorActived_Param
	{
	public:

		struct AActor* NewSector; // 0x00(0x08)
	};

	struct Function_Breakthrough_RedeployArmItemHUDView_OnClientReceiveWeaponStore_Param
	{
	public:

		int32_t InArmedForceID; // 0x00(0x04)
		uint32_t InUint32; // 0x04(0x04)
	};

	struct Function_Breakthrough_ReDeployVehicleInfoHUDView_RemoveSpawnAreaHubIsActiveChangedDelegate_Param
	{
	public:

	};

	struct Function_Breakthrough_RedeployWeaponStoreHUDView_OnFrameTaskTimer_GeneratorIcon_Param
	{
	public:

	};

	struct Function_Breakthrough_ReDeployVehicleItemView_UpdateItemView_Param
	{
	public:

	};

	struct Function_Breakthrough_RedeployWeaponPresetStoreItemView_SetUsingPresetIndex_Param
	{
	public:

		int32_t InUsingPresetIndex; // 0x00(0x04)
	};

	struct Function_Breakthrough_RedeployWeaponPresetStoreHUDView_OnClientReceiveWeaponPresetStore_Param
	{
	public:

		uint64_t InWeaponItemID; // 0x00(0x08)
	};

	struct Function_Breakthrough_RedeployMarkerBaseWidget_unRegisterDelegates_Param
	{
	public:

	};

	struct Function_Breakthrough_RebornWarTowerMarker_UnLock_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughGlobalStageCampSectorOwnerView_ShowBubble_Param
	{
	public:

		bool Show; // 0x00(0x01)
	};

	struct Function_Breakthrough_BreakthroughGlobalStageSectorOwnerView_ShowBubble_Param
	{
	public:

		bool Show; // 0x00(0x01)
	};

	struct Function_Breakthrough_BreakthroughGlobalStageSectorTextView_PlayAnim_AutoOut_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughRebornFlagMarker_UpdateProgress_Param
	{
	public:

		float InNumber; // 0x00(0x04)
		float InWidth; // 0x04(0x04)
		float InProgress; // 0x08(0x04)
	};

	struct Function_Breakthrough_BreakthroughRedeployLocalCharacterPoint_UpdatePlayerArmsIcon_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughRedeployPointView_ShowBubble_Param
	{
	public:

		bool Show; // 0x00(0x01)
	};

	struct Function_Breakthrough_BreakthroughRedeploySectorAnchorPointView_SetPointSelected_Param
	{
	public:

		bool seelected; // 0x00(0x01)
	};

	struct Function_Breakthrough_BreakthroughRedeployTeamMatePoint_UpdatePlayerArmsIcon_Param
	{
	public:

	};

	struct Function_Breakthrough_BreakthroughVehiclePointView_BP_SetColorType_Param
	{
	public:

		int32_t ColorType; // 0x00(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
