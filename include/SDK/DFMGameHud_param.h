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
	struct Function_DFMGameHud_AbilityDetectorEnemyItemView_OnEquipChanged_Param
	{
	public:

	};

	struct Function_DFMGameHud_AbilityDetectorEnemyLstHudView_OnDetectorEnemyChanged_Param
	{
	public:

		struct AGPCharacter* CHARACTER; // 0x00(0x08)
		bool bShow; // 0x08(0x01)
	};

	struct Function_DFMGameHud_AbilityEngineerVehicleHudController_OnVehicleOperate_Param
	{
	public:

		bool On; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct AActor* Actor; // 0x08(0x08)
		struct ACHARACTER* CHARACTER; // 0x10(0x08)
	};

	struct Function_DFMGameHud_AbilityLockerView_RemoveWidgetFromUsingPool_Param
	{
	public:

		enum class EGPAbilityLockerType markerType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t Index; // 0x04(0x04)
	};

	struct Function_DFMGameHud_ActorLocationTipsWidget_UpdateView_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
	};

	struct Function_DFMGameHud_AILabDebugView_OnUinInfoChanged_Param
	{
	public:

	};

	struct Function_DFMGameHud_AILabOBHudView_OnSpectateBriefInfoChanged_Param
	{
	public:

	};

	struct Function_DFMGameHud_AILabOBTeamItemView_OnUinClicked_Param
	{
	public:

		struct FString Value; // 0x00(0x10)
	};

	struct Function_DFMGameHud_AILabStyleView_OnItemClicked_Param
	{
	public:

		struct FString Value; // 0x00(0x10)
	};

	struct Function_DFMGameHud_AIMsgHUDView_PlayerControllerChanged_Param
	{
	public:

		struct APlayerController* NewController; // 0x00(0x08)
	};

	struct Function_DFMGameHud_AmmoAddTips_OnShowTips_Param
	{
	public:

		struct TArray<int32_t> BulletLevelArray; // 0x00(0x10)
	};

	struct Function_DFMGameHud_ReloadRouletteHUDView_OnTouchPointNumChanged_Param
	{
	public:

		int32_t TouchPointNum; // 0x00(0x04)
	};

	struct Function_DFMGameHud_ReloadRouletteItemView_BPSetType_Param
	{
	public:

		bool Selected; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t InType; // 0x04(0x04)
	};

	struct Function_DFMGameHud_AnimDebugLogView_ShowDebugPanel_Param
	{
	public:

		bool Show; // 0x00(0x01)
		enum class EAnimDebugType ShowDebugType; // 0x01(0x01)
	};

	struct Function_DFMGameHud_AnimTrackingWidget_BP_PlayTrackingAnimation_Param
	{
	public:

	};

	struct Function_DFMGameHud_AssistedAimingDebugLogView_OnRotateStickyLogInfo_Param
	{
	public:

		float StickyParam; // 0x00(0x04)
		float Friction; // 0x04(0x04)
		float MoveSpeed; // 0x08(0x04)
		float DistanceHorizontal; // 0x0c(0x04)
		float ReduceScale; // 0x10(0x04)
		bool bHitPreventMissEnable; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		int32_t HitContinueMissNumber; // 0x18(0x04)
		float HitPreventMissStartTime; // 0x1c(0x04)
		float HitBulletRadius; // 0x20(0x04)
	};

	struct Function_DFMGameHud_BallisticTargetHUDView_ResetCraters_Param
	{
	public:

	};

	struct Function_DFMGameHud_BattleFieldSafeAreaScreenEffectHUD_OnMatchOver_Param
	{
	public:

		enum class EMatchOverReason MatchOverReason; // 0x00(0x01)
	};

	struct Function_DFMGameHud_BattleStatusHud_RefreshSneakView_Param
	{
	public:

	};

	struct Function_DFMGameHud_BaseBattleStatusItem_BPShow_Param
	{
	public:

	};

	struct Function_DFMGameHud_BloodBarTipsHudItem_OnUpdateHealthBar_Param
	{
	public:

		float Health; // 0x00(0x04)
		bool Initialize; // 0x04(0x01)
	};

	struct Function_DFMGameHud_BloodBarTipsUIController_OnCharRestart_Param
	{
	public:

		struct AGPCharacterBase* CHARACTER; // 0x00(0x08)
	};

	struct Function_DFMGameHud_BossBeLaserScreenEffectController_SetupBossActor_Param
	{
	public:

		struct AActor* Boss; // 0x00(0x08)
	};

	struct Function_DFMGameHud_BreakAwayScreenEffectHUD_OnOutAnimaPlayEnd_Param
	{
	public:

	};

	struct Function_DFMGameHud_BroadcastHudItem_SetHidden_Param
	{
	public:

	};

	struct Function_DFMGameHud_BroadcastHudView_PopBroadcastMsg_Param
	{
	public:

	};

	struct Function_DFMGameHud_BuffAndStaminaViewPC_UpdateKeyTip_Param
	{
	public:

	};

	struct Function_DFMGameHud_BuffItemHUDView_UpdatePrograss_Param
	{
	public:

		uint64_t InArg1; // 0x00(0x08)
		uint64_t InArg2; // 0x08(0x08)
		uint64_t InArg3; // 0x10(0x08)
	};

	struct Function_DFMGameHud_BuffListDetailHUDView_SetBuffList_Param
	{
	public:

		struct TArray<struct FCharacterBuff> buffArray; // 0x00(0x10)
	};

	struct Function_DFMGameHud_BuffListDetailItemView_SetCharacterBuffEffectEntity_Param
	{
	public:

		struct FName Ebuff; // 0x00(0x08)
		struct UDFMCharacterBuffEntityBase* BuffEntity; // 0x08(0x08)
		uint32_t Cnt; // 0x10(0x04)
		uint32_t BuffId; // 0x14(0x04)
	};

	struct Function_DFMGameHud_ButtonClickProxy_OnButtonClick_Param
	{
	public:

	};

	struct Function_DFMGameHud_CaptureTextView_ShowCapturedBgImage_Param
	{
	public:

		bool bShow; // 0x00(0x01)
	};

	struct Function_DFMGameHud_CharacterArmorBarItem_SetCharacterArmorBarView_Param
	{
	public:

		struct FCharacterArmorBarItemView ViewData; // 0x00(0x3c)
	};

	struct Function_DFMGameHud_CharacterArmorStatusItem_Update_Param
	{
	public:

		float Delta; // 0x00(0x04)
	};

	struct Function_DFMGameHud_CharacterAttrsDebugHud_RefreshAttributesOpDatas_Param
	{
	public:

	};

	struct Function_DFMGameHud_CharacterBloodBase_SetListenBuffEventTag_Param
	{
	public:

		struct ADFMCharacter* InCharacter; // 0x00(0x08)
		struct FName InListenBuffEventTag; // 0x08(0x08)
	};

	struct Function_DFMGameHud_CharacterBuffListView_UpdateBuffList_Param
	{
	public:

	};

	struct Function_DFMGameHud_CharacterHealthInfoHud_OnWatchCharEquipmentChanage_Param
	{
	public:

	};

	struct Function_DFMGameHud_CharacterMiniManView_UpdatePose_Param
	{
	public:

	};

	struct Function_DFMGameHud_CharaterBuffDetailTipItemView_SetSepLineVisibility_Param
	{
	public:

		enum class ESlateVisibility InVisibility; // 0x00(0x01)
	};

	struct Function_DFMGameHud_CharaterBuffDetailTipView_UpdateBuffTipView_Param
	{
	public:

		struct TArray<struct FCharacterBuffListViewData> VisibleArray; // 0x00(0x10)
	};

	struct Function_DFMGameHud_CommonBuffItemView_TryPlayBuffAnimation_Param
	{
	public:

	};

	struct Function_DFMGameHud_CommonBuffItemViewHD_SetBuffData_Param
	{
	public:

		struct FCommonBuffItemDataView ViewData; // 0x00(0x20)
	};

	struct Function_DFMGameHud_CommonRouletteItemView_InitItemWidgetThroughCpp_Param
	{
	public:

	};

	struct Function_DFMGameHud_CommonRouletteItemInnerContentView_SetContentImageOpacity_Param
	{
	public:

		float InOpacity; // 0x00(0x04)
	};

	struct Function_DFMGameHud_CommonRouletteView_SetDisabledIndexs_Param
	{
	public:

		float RouletteStartAngle; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<int32_t> InItemsIndex; // 0x08(0x10)
	};

	struct Function_DFMGameHud_CommonRouletteInfoView_BP_SetType_Param
	{
	public:

		int32_t Type; // 0x00(0x04)
	};

	struct Function_DFMGameHud_ContractObjectionIconViewController_UpdateQuestProgress_Param
	{
	public:

		int64_t UpdateQuestId; // 0x00(0x08)
		char QuestState; // 0x08(0x01)
	};

	struct Function_DFMGameHud_ContractPointIconViewController_UpdateQuestProgress_Param
	{
	public:

		int64_t UpdateQuestId; // 0x00(0x08)
		char QuestState; // 0x08(0x01)
	};

	struct Function_DFMGameHud_DamageHudView_OnReceiveDamage_Param
	{
	public:

		struct AActor* Taker; // 0x00(0x08)
		struct FVector WorldPos; // 0x08(0x0c)
		float DamageValue; // 0x14(0x04)
		float ArmorReduceDamageValue; // 0x18(0x04)
		enum class EDamageShowType DamageShowType; // 0x1c(0x01)
		enum class ECharacterPart HitPart; // 0x1d(0x01)
	};

	struct Function_DFMGameHud_DamageHudViewTextItem_BPSetStyle_Param
	{
	public:

		int32_t ColorType; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DeathCloseEyeScreenEffectHUD_RemoveBlurEffect_Param
	{
	public:

	};

	struct Function_DFMGameHud_DeathDamageInfoDetailItem_CallBPSetType_Param
	{
	public:

		bool bLastDamage; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DeathDamageInfoPanel_OnDamageInfosScrollBoxGetItemCount_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DeathDamageInfoViewNew_OpenDeathInfoView_Param
	{
	public:

	};

	struct Function_DFMGameHud_DeployPointsPanel_UnInitView_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFCodedLockView_OnNumBtnClick_Param
	{
	public:

		int32_t Num; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFCommonCancelBtnView_OnCancelButtonClk_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFCommonHUDScreenMutex_TickMutex_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFCommonLineWidget_UpdatePosition_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFCountdownView_UpdateColorView_Param
	{
	public:

		int32_t InCurCountdownTime; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFFixedWeaponBarHUD_SetLevelColor_Param
	{
	public:

		int32_t InLevel; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFHDActionCommonProgressBar_SetActionName_Param
	{
	public:

		struct FText InActionName; // 0x00(0x18)
	};

	struct Function_DFMGameHud_DFHDActionTipsView_OnDFHDActionTipsUpdatePressedProgress_Param
	{
	public:

		struct FName ActionOrAxisName; // 0x00(0x08)
		float Perc; // 0x08(0x04)
	};

	struct Function_DFMGameHud_DFHDBloodBarBase_BPSetStyle_Param
	{
	public:

		int32_t BloodColorType; // 0x00(0x04)
		bool bHeal; // 0x04(0x01)
	};

	struct Function_DFMGameHud_DFHDGMAimingDebugView_ResetRecord_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFHDInteractorExposeItem_Detail_BP_StopInAni_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFHDInteractorMarkerView_UpdateUI_Param
	{
	public:

		struct FString Name; // 0x00(0x10)
		int32_t Distance; // 0x10(0x04)
		int32_t KeyTipsType; // 0x14(0x04)
		struct FVector2D MarkerPosition; // 0x18(0x08)
	};

	struct Function_DFMGameHud_DFHDInteractorMissionItem_BP_ShowMissionType_Param
	{
	public:

		int32_t InMissionType; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFHDInteractorMissionItem_Detail_BP_StopInAni_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFHDInteractorPanelItem_OnSwitchAniEnd_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFHDInteractorPanelItem_DescText_SetLongWeapon_Param
	{
	public:

		bool InbLong; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFHDInteractorSpaceItem_BP_ShowGridLayout_Param
	{
	public:

		int32_t InWidth; // 0x00(0x04)
		int32_t InHeight; // 0x04(0x04)
		bool InbBagIsEnough; // 0x08(0x01)
	};

	struct Function_DFMGameHud_DFHDInteractorView_CarryBody_OnRefreshCarryBodyPanel_Param
	{
	public:

		int32_t Type; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFHDInteractorZoomItem_BP_PlayPressAniWithSpeed_Param
	{
	public:

		int32_t InState; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFHDPerformanceStatus_UpdateTemperature_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFHDSettingsInputPanel_UnbindHoveringKey_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFHDSkillItem_OnSkillButtonReleased_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFHDVehicleSkillButtonWidget_OnTickDelegate_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFHitScreenEffectWithDir_BP_OnActive_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFInteractorExposeTipsItem_BP_PlayAni_Param
	{
	public:

		int32_t InAniType; // 0x00(0x04)
		bool InbPlay; // 0x04(0x01)
	};

	struct Function_DFMGameHud_DFInteractorMissionTipsItem_BP_SetMissionType_Param
	{
	public:

		int32_t InType; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFInteractorPCInfoView_OnPCMorseCodeSuccess_Param
	{
	public:

		bool bSuccess; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct AActor* InHackPC; // 0x08(0x08)
	};

	struct Function_DFMGameHud_DFInteractorWishTipsItem_BP_PlayAni_Param
	{
	public:

		int32_t InAniType; // 0x00(0x04)
		bool InbPlay; // 0x04(0x01)
	};

	struct Function_DFMGameHud_DFKillerInfoCardViewKeyTips_InitSkip_Param
	{
	public:

		struct FName Name; // 0x00(0x08)
	};

	struct Function_DFMGameHud_DFMAudioDebugView_UpdateDropdownList_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMLoopFirePriorityDebugView_RefreshManagerConfig_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMAudioHDRDebugViewerItem_UpdateView_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMAudioPriorityDebugViewerItem_OnTimeOut_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMAudioPriorityDebugViewer_OnShowPriorityTypeChanged_Param
	{
	public:

		struct FString SelectedType; // 0x00(0x10)
	};

	struct Function_DFMGameHud_DFMAudioTestEmitter_UpdatePlayMode_Param
	{
	public:

		struct FString InPlayMode; // 0x00(0x10)
	};

	struct Function_DFMGameHud_DFMAudioTestMaster_UpdateSelectedEmitterInfoView_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMBaseUserWidget_Visible_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMBloodStripController_OnVehicleHealthUpdate_Param
	{
	public:

		struct UDFMVehicleHealthComponent* TargetComponent; // 0x00(0x08)
		float NormalizedHpPercent; // 0x08(0x04)
	};

	struct Function_DFMGameHud_DFMBloodStripView_UpdateHpPercent_Param
	{
	public:

		float Percent; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMBowCrossHairBPView_OnSwitchZoomState_Param
	{
	public:

		bool bFlag; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMCCTVView_UpdateMonitorInfo_Param
	{
	public:

		struct TArray<struct FViewCharacterInfo> ViewCharacterInfos; // 0x00(0x10)
		struct FText AreaName; // 0x10(0x18)
	};

	struct Function_DFMGameHud_DFMCommonActionButtonView_SetText_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
	};

	struct Function_DFMGameHud_DFMCommonBannerController_HideBanner_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMCommonBannerView_SetBannerText_Param
	{
	public:

		struct FText Text; // 0x00(0x18)
	};

	struct Function_DFMGameHud_DFMCommonButtonIcon_BP_SetSelected_Param
	{
	public:

		bool InSelected; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMCommonButtonV3S1_BP_InitWidget_Param
	{
	public:

		bool InShowIcon; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMCommonCountdownView_ShowCommonCountdown_Param
	{
	public:

		struct FSOLCommonCountdownItem CommonCountdownItem; // 0x00(0x38)
	};

	struct Function_DFMGameHud_DFMCommonKeyTipsView_OnZoomStateChanged_Param
	{
	public:

		bool ZoomState; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMCommonQTEButtonView_PlayOutAnim_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMCommonQuality_BP_SetQualityByType_Param
	{
	public:

		int32_t InType; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMCountDownHUDView_DoOneCountDown_Param
	{
	public:

		int32_t TimeSeconds; // 0x00(0x04)
		bool InUseTenSecondsType; // 0x04(0x01)
		bool bPlayAudio; // 0x05(0x01)
	};

	struct Function_DFMGameHud_DFMCrossHairFeedback_PlayFeedbackAnimation_Param
	{
	public:

		enum class EFeedbackAnimType AnimType; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMCrossHairViewDebugger_OnHitScreenPosition_Param
	{
	public:

		struct FVector2D Position; // 0x00(0x08)
	};

	struct Function_DFMGameHud_DFMCrossHairViewNew_OnWeaponZoom_Param
	{
	public:

		bool bZoom; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMCruiseMissileView_UpdateUI_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMCustomLayoutStackDataCenter_PushOldData_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMDisplayQualityController_UpdateDisplayStyle_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMBombCountdownView_OnTimeBombBCutWire_Param
	{
	public:

		struct FBombWireInfo WireInfo; // 0x00(0x0c)
	};

	struct Function_DFMGameHud_DFMDisposalBombView_UpdateBombProgress_Param
	{
	public:

		struct AInteractor_TimeBomb* inTimeBomb; // 0x00(0x08)
	};

	struct Function_DFMGameHud_DFMFixedWeaponMainView_OnLoadComplete_Param
	{
	public:

		struct FSoftObjectPath Path; // 0x00(0x18)
	};

	struct Function_DFMGameHud_DFMFixedWeaponState_BP_UpdateWeaponHealthPrecent_Param
	{
	public:

		float InHealthPrecent; // 0x00(0x04)
		float InMaxHealth; // 0x04(0x04)
		float InCurrentHealth; // 0x08(0x04)
	};

	struct Function_DFMGameHud_DFMGameChatHUDView_OnReceiveMsgs_Param
	{
	public:

		struct TArray<struct FString> Arr; // 0x00(0x10)
	};

	struct Function_DFMGameHud_DFMGameChatTextWidget_SetText_Param
	{
	public:

		struct FString Msg; // 0x00(0x10)
	};

	struct Function_DFMGameHud_DFMGameHudDelegates_TryTrackDoorFromLua_Param
	{
	public:

		bool bInTrack; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FString DoorName; // 0x08(0x10)
		struct FVector WorldLocation; // 0x18(0x0c)
	};

	struct Function_DFMGameHud_DFMGMActivityDebugView_OnUpdateGMView_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMGMAIInfoView_RefreshTestAI_Param
	{
	public:

		struct FString NpcName; // 0x00(0x10)
		int32_t NpcDiffculty; // 0x10(0x04)
	};

	struct Function_DFMGameHud_DFMGMConsoleInputView_GetHistroyString_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_DFMGameHud_DFMGMFootStepDebugView_PerformMaterialTrace_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMGMInputManagerDebugView_UpdateSprintInfo_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMGMRecordDebugViewItem_OnCheckBoxStatusChanged_Param
	{
	public:

		bool bIsChecked; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMGMRecordDebugView_UpdateInputPresets_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
	};

	struct Function_DFMGameHud_DFMGMTrackCameraHudView_UpdateWeaponSocketDropdownList_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMHDWeaponHudView_UpdateScopeView_Param
	{
	public:

		bool bShowZoomRateTip; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMHitMarkView_OnMakeHitFeedBack_Param
	{
	public:

		enum class EHitEventType InHitEventType; // 0x00(0x01)
		enum class ECharacterPart HitPart; // 0x01(0x01)
		char pad_2[0x6]; // 0x02(0x06)
		struct AGPCharacter* Taker; // 0x08(0x08)
		int32_t ArmorLevel; // 0x10(0x04)
	};

	struct Function_DFMGameHud_DFMHitViewInterface_OnShowLoopHitEffect_Param
	{
	public:

		bool bLoop; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMHUD_OnWeaponPanelCreated_Param
	{
	public:

		struct FString FunctionName; // 0x00(0x10)
		struct UBaseUIView* View; // 0x10(0x08)
	};

	struct Function_DFMGameHud_DFMHUDBloodStainView_OnClientBuffEffectPain_Param
	{
	public:

		struct AGPCharacter* CHARACTER; // 0x00(0x08)
		bool Enable; // 0x08(0x01)
	};

	struct Function_DFMGameHud_DFMHudHelper_TriggerUIClickAudio_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
	};

	struct Function_DFMGameHud_DFMHUDHitBaseView_NativePlayLoopAnimation_Param
	{
	public:

		struct UWidgetAnimation* InAnim; // 0x00(0x08)
		bool bLoop; // 0x08(0x01)
	};

	struct Function_DFMGameHud_DFMHUDHitDirView_OnVehicleHealthDamaged_Param
	{
	public:

		float Damage; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FTakeHitInfo TakeHitInfo; // 0x08(0xd0)
	};

	struct Function_DFMGameHud_DFMHUDHitDirViewItem_ShowHitDir_Param
	{
	public:

		float Damage; // 0x00(0x04)
		float ShowTime; // 0x04(0x04)
		struct FVector sourceLoc; // 0x08(0x0c)
	};

	struct Function_DFMGameHud_DFMHUDHitDirViewItemV2_ShowHitDir_Param
	{
	public:

		float Damage; // 0x00(0x04)
		float ShowTime; // 0x04(0x04)
		struct FVector sourceLoc; // 0x08(0x0c)
		char pad_14[0x4]; // 0x14(0x04)
		struct AActor* Target; // 0x18(0x08)
	};

	struct Function_DFMGameHud_DFMHUDHitDirViewV2_OnVehicleHealthDamaged_Param
	{
	public:

		float DamagePrecent; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FTakeHitInfo TakeHitInfo; // 0x08(0xd0)
	};

	struct Function_DFMGameHud_DFMHUDHitFeedBack_PlayFeedbackTipsAnimation_Param
	{
	public:

		enum class EFeedbackTipsAnimType InHitEventType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t Level; // 0x04(0x04)
	};

	struct Function_DFMGameHud_DFMHUDHitView_PlayLoopHitView_Param
	{
	public:

		struct UObject* obj; // 0x00(0x08)
		bool Loop; // 0x08(0x01)
	};

	struct Function_DFMGameHud_DFMHudLevelSubsystem_OnTriggerUIAudio_Param
	{
	public:

		struct FName UIAudioName; // 0x00(0x08)
	};

	struct Function_DFMGameHud_DFMHudMvcViewBase_Visible_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMInteractorButton_OnItemOperatorButtonClick_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMInteractorButton_SingleItem_OnWishTipsLoadComplete_Param
	{
	public:

		struct FSoftObjectPath InPath; // 0x00(0x18)
	};

	struct Function_DFMGameHud_DFMInteractorRadioInfoView_OnUseRadio_Param
	{
	public:

		struct TArray<struct APlayerExitBase*> InExitArray; // 0x00(0x10)
		struct TArray<struct APlayerExitBase*> InSelectedArray; // 0x10(0x10)
		struct AActor* InRadio; // 0x20(0x08)
	};

	struct Function_DFMGameHud_DFMInteractorUtil_TryInteractKeyDwon_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMInteractorView_UpdateScreenPositionByInteractableProxy_Param
	{
	public:

		struct AGPPlayerController* Controller; // 0x00(0x08)
		struct UDFMInteractorView_WhiteDot* WhiteDotWidget; // 0x08(0x08)
		struct FInteractableProxy InInteractableProxy; // 0x10(0x10)
		bool bEdgeTracking; // 0x20(0x01)
	};

	struct Function_DFMGameHud_DFMInteractorView_InteractBase_OnInteractKeyDown_Param
	{
	public:

		int32_t Type; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMInteractorView_ItemBaseSub_UpdateInteractableInfo_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		struct FInteractableInfo InInfo; // 0x08(0x30)
		bool ShowBtn; // 0x38(0x01)
	};

	struct Function_DFMGameHud_DFMInteractorView_RescueFlag_BP_Tick_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMInteractorView_WhiteDot_RecoveryMedium_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMLongPressButton_ActiveRelease_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMediaImage_PlayMedia_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMeleeWeaponSelectItemView_OnClickedEvent_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMidKeyTipsView_EndShow_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileArmdedForceItemView_SetUsingType_Param
	{
	public:

		int32_t Type; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMMobileArmdedForceItemViewPC_SetUsingType_Param
	{
	public:

		int32_t Type; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMMobileChargeGunCrosshairView_OnSwitchZoomState_Param
	{
	public:

		bool bFlag; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMMobileCircleUserWidget_CheckIfInCircle_Param
	{
	public:

		struct FGeometry MyGeometry; // 0x00(0x44)
		char pad_44[0x4]; // 0x44(0x04)
		struct FPointerEvent InTouchEvent; // 0x48(0x70)
		bool ReturnValue; // 0xb8(0x01)
	};

	struct Function_DFMGameHud_DFMMobileCustomLayoutAttachPanel_SaveBtnSteerChange_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileCustomLayoutBPLibrary_ShareCustomLayoutInfo_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FString CustomLayoutName; // 0x08(0x10)
	};

	struct Function_DFMGameHud_DFMMobileCustomLayoutDraggableButton_SetSprintAreaSize_Param
	{
	public:

		float RunSize; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMMobileCustomLayoutView_ShareCustomLayout_Param
	{
	public:

		struct FString LayoutName; // 0x00(0x10)
	};

	struct Function_DFMGameHud_DFMMobileCustomShapeButton_SetAdvancedHitTexture_Param
	{
	public:

		struct UTexture2D* InTexture; // 0x00(0x08)
	};

	struct Function_DFMGameHud_DFMWeaponFireIconImage_SetWeapon_Param
	{
	public:

		struct AWeaponBase* Weapon; // 0x00(0x08)
		struct AGPCharacterBase* WeaponOwner; // 0x08(0x08)
	};

	struct Function_DFMGameHud_DFMMobileForbidMoveCtrlWidget_OnWidgetVisibilityChange_Param
	{
	public:

		bool IsVisible; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMMobileGMAiDifficultyView_RefreshAllInfo_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileGMCharacterLogView_UpdateDouDouInfo_Param
	{
	public:

		struct FVector2D TouchPoint; // 0x00(0x08)
		struct FVector2D StandardPoint; // 0x08(0x08)
	};

	struct Function_DFMGameHud_DFMMobileGMRotationConsoleView_ShowGyroDebugMsg_Param
	{
	public:

		struct FText ReturnValue; // 0x00(0x18)
	};

	struct Function_DFMGameHud_DFMMobileGMTeamInfoView_OnCloseTeamDetailBtnClicked_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileGMView_ShowGMPanel_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileHeavyMachineGunView_OnButtonExitClick_Param
	{
	public:

	};

	struct Function_DFMGameHud_HelmetFaceMaskViewModel_UpdateHelmetMaskView_PC_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
	};

	struct Function_DFMGameHud_DFMMobileItemPC_OuterTick_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileJoystickUserWidget_OnTouchReleasedEvent_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileMedkitButtonView_RefreshView_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileOpenSightButtonView_OnSightCheck_Param
	{
	public:

		bool bIsChecked; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMMobileQuitButtonView_OnClickQuitGame_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileRotationButtonView_OnTopLeftFireDown_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileRunAreaDraggableButton_UpdatePosition_Param
	{
	public:

		float OldScale; // 0x00(0x04)
		float NewScale; // 0x04(0x04)
	};

	struct Function_DFMGameHud_DFMMobileSkillItemPC_SetUsingType_Param
	{
	public:

		int32_t Type; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMMobileSkillItemWatch_SetUsingType_Param
	{
	public:

		int32_t Type; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMMobileSprintAreaDragButton_UpdatePosition_Param
	{
	public:

		float OldScale; // 0x00(0x04)
		float NewScale; // 0x04(0x04)
	};

	struct Function_DFMGameHud_DFMMobileStaminaView_TickLogic_Param
	{
	public:

		float InDeltaTime; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMMobileSubtitleView_ShowSubtitle_Param
	{
	public:

		struct FText SpeakerName; // 0x00(0x18)
		struct FText SubtitleText; // 0x18(0x18)
	};

	struct Function_DFMGameHud_DFMMobileSupportCrosshairView_OnSupportSelfCureVibileSignature_Param
	{
	public:

		bool Visible; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float animTime; // 0x04(0x04)
	};

	struct Function_DFMGameHud_DFMMobileSwitchPotView_SwitchPot_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileTalentSensitiveView_OnEnterSensitiveAlert_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileTalentSensitiveNerve_SetState_Param
	{
	public:

		int32_t State; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMMobileVehicleChangeSeatButton_UnInit_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileVehicleSeatButton_UnInit_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileVehicleSwitchWeaponButton_OnTickAmmoInfo_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileWeaponExpandableButton_SetCurrentSelectedItemId_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
	};

	struct Function_DFMGameHud_DFMMobileWeaponHUDView_UpdateCandidateWeaponList_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileWeaponSwitchItemView_K2_SwitchWeaponCanSwitchFlag_Param
	{
	public:

		bool bCanSwitch; // 0x00(0x01)
	};

	struct Function_DFMGameHud_WeaponSwitchViewModel_UpdateWeaponList_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileWeaponThrowableView_OnWorldThrowableWeaponProjectileExplode_Param
	{
	public:

		struct AActor* ProjectileActor; // 0x00(0x08)
	};

	struct Function_DFMGameHud_DFMMobileWeaponThrowableWarningItemView_OnThrowActive_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMonitorFade_OnLoadComplete_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMovementTestView_SetDrawCurrentMovementDebugCharacterCapsureEnable_Param
	{
	public:

		bool Value; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMNPCDialogView_SelectBranch_Param
	{
	public:

		enum class EDialogJumpType JumpType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		int64_t JumpId; // 0x08(0x08)
		bool ContinueJump; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct FString Args; // 0x18(0x10)
	};

	struct Function_DFMGameHud_DFMOverLoadSkillView_OverLoadSetProcess_Param
	{
	public:

		float Angle; // 0x00(0x04)
		int32_t Time; // 0x04(0x04)
	};

	struct Function_DFMGameHud_DFMRescueMySelfItemView_SetTeamIndexText_Param
	{
	public:

		int32_t InTeamIndex; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMRescueMySelfView_UpdateImpendingProgressBar_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMSafeHouseInteractorView_OnUIEventFired_Param
	{
	public:

		struct FDFMWidgetEvent EvtParam; // 0x00(0x10)
	};

	struct Function_DFMGameHud_DFMScrollText_SetLastScrollText_Param
	{
	public:

		struct FText InLastScrollText; // 0x00(0x18)
	};

	struct Function_DFMGameHud_DFMSkillCommonTips_Show_BPApi_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMSkillDetailView_ShowSkillDetail_Param
	{
	public:

		bool Up; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMSkillDetailViewItem_GetRowNameFromSkillId_Param
	{
	public:

		int64_t SkillId; // 0x00(0x08)
		struct FName ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMGameHud_DFMSkillDetailButton_OnMicStateChange_Param
	{
	public:

		int32_t ButtonType; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMSkillProcessBarActionView_OnShowSkillProcessBarAction_Param
	{
	public:

		bool Show; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Time; // 0x04(0x04)
		struct FName Name; // 0x08(0x08)
		int32_t SkillId; // 0x10(0x04)
		int32_t Type; // 0x14(0x04)
	};

	struct Function_DFMGameHud_DFMSkillThreatMarkerItemView_TickConditionalUpdate_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
		struct FVector CharacterLoc; // 0x04(0x0c)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_DFMGameHud_DFMSnoicDirView_UpdateSonicTarget_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMStingerMissleAimingMarkView_SetDis_Param
	{
	public:

		int32_t Dis; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMStingerMissleAimingView_PlayLockingStateAudio_Param
	{
	public:

		struct FStingMissileHudInfo HudInfo; // 0x00(0x38)
	};

	struct Function_DFMGameHud_DFMSystemSettingHelper_SprintTriggerSensitivityChangeBroadcast_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMTeamPlayerInfoView_UpdatePlayerInfo_Param
	{
	public:

		int32_t InPlayerInnerIndex; // 0x00(0x04)
		bool InIsSelf; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FTeamMemberInfo InTeamMemberInfo; // 0x08(0x40)
	};

	struct Function_DFMGameHud_DFMTipsCommonButton_SetTipsFullData_Param
	{
	public:

		int32_t ColorType; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FText ActionName; // 0x08(0x18)
		struct FSoftObjectPath IconPath; // 0x20(0x18)
		enum class ESTipsCommonButtonAnimType AnimType; // 0x38(0x01)
	};

	struct Function_DFMGameHud_DFMWeakNetAppearLevelSubsystem_ShowWaitingView_Param
	{
	public:

		enum class EWeakNetWorkWaitFunctionID FunctionId; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMWeldingGunView_UpdateUI_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMWidgetUtil_Visible_Param
	{
	public:

		struct UWidget* Widget; // 0x00(0x08)
	};

	struct Function_DFMGameHud_DFPCMorseCodeView_CheckIsPwdNum_Param
	{
	public:

		int32_t InNum; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_DFMGameHud_DFPCOperationFireMissileItemView_OnFireBtnClick_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFPCOperationsView_BP_PlayShowNormalAni_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFPCPwdInputView_OnOKBtnClick_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFScouterTipsView_SetScoutedNearestTips_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFScouterView_StopScoutItemAni_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFSimulate3DViewController_Tick3DView_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
		struct FVector WorldLoc; // 0x04(0x0c)
	};

	struct Function_DFMGameHud_DFUnlockingView_OnSafeBoxUnlockMiniGameCylinderRandomed_Param
	{
	public:

		struct AActor* InSafeBox; // 0x00(0x08)
	};

	struct Function_DFMGameHud_DFUnlockingView_SpringPlug_BP_StopAnim_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFUnlockingView_Sequence_BP_StopAnim_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFUnlockingView_SequenceBox_BP_StopAnim_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFVehicleEmptyRootView_Refresh_Param
	{
	public:

	};

	struct Function_DFMGameHud_EvacuteTimeWidget_PlayEndDestroyed_Param
	{
	public:

	};

	struct Function_DFMGameHud_ExitConsumeItemHudController_OnReqShow_Param
	{
	public:

		uint64_t InItemID; // 0x00(0x08)
		uint32_t InCount; // 0x08(0x04)
	};

	struct Function_DFMGameHud_ExitEscapingHudController_UpdateView_Param
	{
	public:

	};

	struct Function_DFMGameHud_ExitHudView_OnStartEscapeButtonClicked_Param
	{
	public:

	};

	struct Function_DFMGameHud_ExitMediaVideoHUDView_PlayMedia_Param
	{
	public:

		struct FString VideoName; // 0x00(0x10)
	};

	struct Function_DFMGameHud_ExitPaymentHUDView_BP_FadeOut_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_DFMGameHud_ExitPaymentHUDController_OnSOLExitPaymentUpdate_Param
	{
	public:

		struct APlayerExitBase* PlayerExit; // 0x00(0x08)
		bool bShow; // 0x08(0x01)
	};

	struct Function_DFMGameHud_ExitRestrictionTipHUDView_UpdateTipText_Param
	{
	public:

	};

	struct Function_DFMGameHud_FlaggedFrameWidget_OnFadeOutEnd_Param
	{
	public:

	};

	struct Function_DFMGameHud_FlashDroneScreenEffectHUD_StopScreenAnim_Param
	{
	public:

	};

	struct Function_DFMGameHud_FlashLightButtonHUDView_OnFlashLightBtnClick_Param
	{
	public:

	};

	struct Function_DFMGameHud_FrontEndLoadingManager_UnregisterDelegate_Param
	{
	public:

		struct FString MapName; // 0x00(0x10)
	};

	struct Function_DFMGameHud_GameMarkerPanel_RemoveWidgetFromUsingPool_Param
	{
	public:

		uint32_t markerType; // 0x00(0x04)
		int32_t Index; // 0x04(0x04)
	};

	struct Function_DFMGameHud_GiantTowerSeatButton_OnSeatButtonClicked_Param
	{
	public:

	};

	struct Function_DFMGameHud_GiantTowerSeatView_SetTowerWeaponSeatState_Param
	{
	public:

	};

	struct Function_DFMGameHud_GiantTowerView_OnTowerWeaponStateChanged_Param
	{
	public:

		struct AActor* InDFMTieBreaker; // 0x00(0x08)
	};

	struct Function_DFMGameHud_GPMarkerBubbleBox_BP_SetPveRpgNum_Param
	{
	public:

		int32_t RpgNum; // 0x00(0x04)
	};

	struct Function_DFMGameHud_HDKeyIconBoxWidget_BP_UpdateProgressBar_Param
	{
	public:

		float Prog; // 0x00(0x04)
	};

	struct Function_DFMGameHud_HDStatusProgressBar_UpdateProgressDown_Param
	{
	public:

		float ProgressDown; // 0x00(0x04)
	};

	struct Function_DFMGameHud_HeroCardLuaBaseWidget_SetCardInfoPlayerName_Param
	{
	public:

		struct FText InPlayerName; // 0x00(0x18)
	};

	struct Function_DFMGameHud_HoldBreathIconView_SetType_Param
	{
	public:

		int32_t Type; // 0x00(0x04)
	};

	struct Function_DFMGameHud_ImportantTipsController_HideView_Param
	{
	public:

	};

	struct Function_DFMGameHud_InGameUpgradeTipsHUDView_TEST_InGameUpgradeTipsShow_Param
	{
	public:

		int32_t InUpgradeTipsType; // 0x00(0x04)
	};

	struct Function_DFMGameHud_InputMonitor_UnRegisterMouseButtonDown_Param
	{
	public:

	};

	struct Function_DFMGameHud_KillFeedBackNumView_OnKillFeedBackNumViewFadeOut_Param
	{
	public:

		bool bIsLittleScore; // 0x00(0x01)
	};

	struct Function_DFMGameHud_KillTipsHUDView_PlayAnim_Param
	{
	public:

		enum class EKillTipWidgetType WidgetType; // 0x00(0x01)
	};

	struct Function_DFMGameHud_KillTipsLoopListWidget_PushNewTips_Param
	{
	public:

		struct FKillTipsViewData TipData; // 0x00(0x01)
	};

	struct Function_DFMGameHud_KillTipWidgetView_BPShow_Param
	{
	public:

	};

	struct Function_DFMGameHud_LowHealthScreenEffectHUD_OnMatchOver_Param
	{
	public:

		enum class EMatchOverReason MatchOverReason; // 0x00(0x01)
	};

	struct Function_DFMGameHud_LuaHudHelperLibrary_SetPositionWithAlignment_Param
	{
	public:

		struct UWidget* Widget; // 0x00(0x08)
		struct UWidget* AlignmentWidget; // 0x08(0x08)
		struct FVector2D AlignmentCoordinate; // 0x10(0x08)
	};

	struct Function_DFMGameHud_MapMarkerEngineerCarViewController_OnVehicleOperate_Param
	{
	public:

		bool On; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct AActor* Actor; // 0x08(0x08)
		struct ACHARACTER* CHARACTER; // 0x10(0x08)
	};

	struct Function_DFMGameHud_MarkWindowHUDIconView_Decipher_OnDecipherMarkerTypeChanged_Param
	{
	public:

		struct AActor* MarkedActor; // 0x00(0x08)
		uint64_t ActorID; // 0x08(0x08)
		enum class EMarkerCoordinatedType markerType; // 0x10(0x01)
	};

	struct Function_DFMGameHud_MarkWindowHUDView_UpdateAimMarkerToMarkerManeger_Param
	{
	public:

	};

	struct Function_DFMGameHud_MatchObserverMainItem_UpdateItemInfo_Param
	{
	public:

		struct FString Num; // 0x00(0x10)
		struct FString Desc; // 0x10(0x10)
	};

	struct Function_DFMGameHud_MatchObserverMainView_UpdateObservingCheckBox_Param
	{
	public:

	};

	struct Function_DFMGameHud_MiniManView_UpdateBpCharacterPose_Param
	{
	public:

		struct FString CharacterStateName; // 0x00(0x10)
	};

	struct Function_DFMGameHud_MiniMapHUDView_Compasses_BP_CompassesVisibleType_Param
	{
	public:

		int32_t InType; // 0x00(0x04)
	};

	struct Function_DFMGameHud_MiniMapHUDView_Dangerous_SetHide_Param
	{
	public:

	};

	struct Function_DFMGameHud_MiniMapHUDView_MapTips_SetHide_Param
	{
	public:

	};

	struct Function_DFMGameHud_MiniMapHUDView_TipsNonres_Alert_OnTextDurationEnd_Param
	{
	public:

	};

	struct Function_DFMGameHud_MissionSystemHudController_UpdatePanel_Param
	{
	public:

		struct FPlayerMissionInfo MissionInfo; // 0x00(0x40)
	};

	struct Function_DFMGameHud_MissionSystemHudQuestMainNew_UpdateMissionRewards_Param
	{
	public:

		struct TArray<struct FMissionRewardsInfo> rewards; // 0x00(0x10)
	};

	struct Function_DFMGameHud_NearbyPickupHUD_PickTopRankItem_Param
	{
	public:

	};

	struct Function_DFMGameHud_NearbyPickupItem_PickItem_Param
	{
	public:

	};

	struct Function_DFMGameHud_ObserverTeamInfoItemMandelBrickView_BP_SetType_Param
	{
	public:

		enum class EBlueprintPlunderState MandelBrickType; // 0x00(0x01)
	};

	struct Function_DFMGameHud_ObserverTeamInfoItemView_UpdateTeamInfo_Param
	{
	public:

		int32_t TeamId; // 0x00(0x04)
		uint16_t KillNums; // 0x04(0x02)
		char pad_6[0x2]; // 0x06(0x02)
		uint32_t InventoryValue; // 0x08(0x04)
		struct FLinearColor TeamColor; // 0x0c(0x10)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct TArray<enum class EOBPlayerStatusType> InPlayerStatusInfo; // 0x20(0x10)
	};

	struct Function_DFMGameHud_PlayerBuffAnimView_PlayInAnim_Param
	{
	public:

	};

	struct Function_DFMGameHud_PlayerDamageHudView_UpdateDamageView_Param
	{
	public:

		int32_t CachedInnerIndex; // 0x00(0x04)
	};

	struct Function_DFMGameHud_PlayerHUDView_UpdatePlayerStatus_Param
	{
	public:

	};

	struct Function_DFMGameHud_PlayerReviveButton_BP_SetState_Param
	{
	public:

		enum class EPlayerReviveButtonState State; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FText Text; // 0x08(0x18)
	};

	struct Function_DFMGameHud_PlayerReviveHudView_UpdateRescuingView_PC_Param
	{
	public:

	};

	struct Function_DFMGameHud_PlayerSoundHudView_OnMyMaxSoundLevelChanged_Param
	{
	public:

		int32_t OldLevel; // 0x00(0x04)
		int32_t NewLevel; // 0x04(0x04)
		enum class ESoundVisualizationType OldType; // 0x08(0x01)
		enum class ESoundVisualizationType NewType; // 0x09(0x01)
	};

	struct Function_DFMGameHud_PlayerStaminaHudView_PlayStaminaNotEnoughAnim_Param
	{
	public:

	};

	struct Function_DFMGameHud_POIHUDTipsView_SetHud_Param
	{
	public:

		struct FText TextFirst; // 0x00(0x18)
		struct FText TextSecond; // 0x18(0x18)
		struct FLinearColor Color; // 0x30(0x10)
		char POILevelInt; // 0x40(0x01)
	};

	struct Function_DFMGameHud_POIProductViewController_SOLIntroEventState_Param
	{
	public:

		char EventStateUint; // 0x00(0x01)
	};

	struct Function_DFMGameHud_PopupQuitGameHudView_OnClickResumeGame_Param
	{
	public:

	};

	struct Function_DFMGameHud_PVETalentButtonView_SetAuraTalent_Param
	{
	public:

		struct FTalentDataRow TalentData; // 0x00(0xf0)
	};

	struct Function_DFMGameHud_PVETalentItemView_SetTalentData_Param
	{
	public:

		struct FTalentDataRow TalentData; // 0x00(0xf0)
	};

	struct Function_DFMGameHud_RaidBigMapHUDView_LevelBox_InitRaidLevelBox_Param
	{
	public:

		struct FText StageName; // 0x00(0x18)
		struct FSoftObjectPath BgObjectPath; // 0x18(0x18)
	};

	struct Function_DFMGameHud_RaidBigMapHUDView_LiveTabBtn_BP_SetBtnType_Param
	{
	public:

		int32_t InType; // 0x00(0x04)
	};

	struct Function_DFMGameHud_RaidBigMapHUDView_LiveTabList_OnButtonClick_DataBoard_Param
	{
	public:

	};

	struct Function_DFMGameHud_RaidBigMapHUDView_SidePanel_OnButtonClick_Param
	{
	public:

	};

	struct Function_DFMGameHud_RaidBigMapHUDView_SidePanelBox_SetTitle_Param
	{
	public:

		struct FText Text; // 0x00(0x18)
	};

	struct Function_DFMGameHud_RankSkillBase_UpdateSkillStatus_Param
	{
	public:

		enum class ESkillUIState InSkillUIState; // 0x00(0x01)
	};

	struct Function_DFMGameHud_RemainTimeHUDView_OnSOLStartMatchInfoDelayShow_Param
	{
	public:

	};

	struct Function_DFMGameHud_RouletteHUDView_RouletteTacticalActionOperate_Param
	{
	public:

		enum class ERouletteActionType OperationType; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SafeAreaScreenEffectHUD_RemoveSafeAreaPostProcess_Param
	{
	public:

		struct UMaterialInstanceDynamic* MaterialDMI; // 0x00(0x08)
	};

	struct Function_DFMGameHud_SafeHouseInteractorView_OnUIEventFired_Param
	{
	public:

		struct FDFMWidgetEvent EvtParam; // 0x00(0x10)
	};

	struct Function_DFMGameHud_ScoutMarkHUDView_UpdateScoutMarker_Param
	{
	public:

		struct FMarkCharacterInfo Info; // 0x00(0x50)
		struct UPlayerMarkerEnemyWidget* Widget; // 0x50(0x08)
	};

	struct Function_DFMGameHud_ScreenEffectDebugView_UnLoadScreenEffects_Param
	{
	public:

	};

	struct Function_DFMGameHud_SeamlessEntryHUDView_BossInfo_BP_SetStyle_Param
	{
	public:

		int32_t Style; // 0x00(0x04)
	};

	struct Function_DFMGameHud_SeamlessEntryHUDView_EvacuationPoint_AnimFadeInOut_Param
	{
	public:

		bool In; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SeamlessEntryHUDView_Instruction_SetInfo_Param
	{
	public:

	};

	struct Function_DFMGameHud_SeamlessEntryHUDView_InstructionDesc_SetInfo_Param
	{
	public:

	};

	struct Function_DFMGameHud_SeamlessEntryHUDView_InstructionDetail_SetInfo_Param
	{
	public:

	};

	struct Function_DFMGameHud_SeamlessEntryHUDView_InstructionList_SetProgressText_Param
	{
	public:

		int32_t Progress; // 0x00(0x04)
	};

	struct Function_DFMGameHud_SeamlessEntryHUDView_MainKey_SetLegendViewToggleText_Param
	{
	public:

		bool CurrentShow; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SeamlessEntryHUDView_Media_PlayMedia_Param
	{
	public:

		struct FString VideoName; // 0x00(0x10)
		bool PauseCutScene; // 0x10(0x01)
		bool bAutoHide; // 0x11(0x01)
	};

	struct Function_DFMGameHud_SeamlessEntryHUDView_TaskList_AnimFadeInOut_Param
	{
	public:

		bool In; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SeamlessEntryHUDView_TipsBox_SetTitleText_Param
	{
	public:

		struct FText TitleText; // 0x00(0x18)
	};

	struct Function_DFMGameHud_SeamlessEntryHUDView_TipsTask_OnCloseButtonClicked_Param
	{
	public:

	};

	struct Function_DFMGameHud_SelectedFrameWidget_BP_FadeOut_Param
	{
	public:

	};

	struct Function_DFMGameHud_SettlementHudController_OnSpectateStatusChanged_Param
	{
	public:

		bool bIsLiveSpectating; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SettlementHudView_Witness_Param
	{
	public:

	};

	struct Function_DFMGameHud_SettlementWatchFight_UpdateTeamInfo_Param
	{
	public:

	};

	struct Function_DFMGameHud_SettlementWaitWatchFightInFade_PlayWaitAnimationEvent_Param
	{
	public:

		bool bShow; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SettlementWatchFightFriendInfo_ShowCharacter_Param
	{
	public:

	};

	struct Function_DFMGameHud_SettlementWatchFightNew_UpdateTeamInfo_Param
	{
	public:

	};

	struct Function_DFMGameHud_SettlementWatchFightHDNew_UpdateTeamInfo_Param
	{
	public:

	};

	struct Function_DFMGameHud_ShopBaseItemUIView_SetItem_Param
	{
	public:

		struct FInGameMallConfigRow InGameMallConfigRow; // 0x00(0x88)
		bool Display; // 0x88(0x01)
		char pad_89[0x3]; // 0x89(0x03)
		int32_t ItemIndex; // 0x8c(0x04)
	};

	struct Function_DFMGameHud_ShopBaseUIView_SetInteractor_Param
	{
	public:

		struct AInteractorBase* Interactor; // 0x00(0x08)
	};

	struct Function_DFMGameHud_SkillEffectHUDView_OnPerformSkillEffect_Param
	{
	public:

		int32_t BuffId; // 0x00(0x04)
		bool bStart; // 0x04(0x01)
	};

	struct Function_DFMGameHud_SkillMineDirView_OnMineActivated_Param
	{
	public:

		struct FVector ActivatedLocation; // 0x00(0x0c)
		float InShowTimeForDirItem; // 0x0c(0x04)
		struct AActor* Target; // 0x10(0x08)
	};

	struct Function_DFMGameHud_SneakingHUDWidget_Show_BPApi_Param
	{
	public:

	};

	struct Function_DFMGameHud_SoftCoverScreenEffectHUD_ProcessSoftCoverHUD_Param
	{
	public:

		bool bShow; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SOLBigMap_MapFloorComponent_HD_OnClick_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLBigMap_MapFloor_HD_BP_SetUpDownType_Param
	{
	public:

		int32_t Type; // 0x00(0x04)
	};

	struct Function_DFMGameHud_SOLBigMap_MapFloorComponent_Mobile_OnClick_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLBigMap_MapLocationComponent_HD_BP_SetText_Param
	{
	public:

		struct FText InText; // 0x00(0x18)
	};

	struct Function_DFMGameHud_SOLBigMap_MapLocation_HD_OnClick_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLBigMap_MapLocationComponent_Mobile_BP_SetSelected_Param
	{
	public:

		bool bInSelected; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SOLBigMap_MapLocation_Mobile_OnClick_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLBigMapHUDView_ContractTipsBtn_OnCheckStateChanged_Param
	{
	public:

		bool bIsChecked; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SOLBigMapHUDView_InfoSwitch_OnCheckBoxSwitch_Param
	{
	public:

		bool bIsChecked; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SOLBigMapHUDView_LiveTabBtn_BP_SetBtnType_Param
	{
	public:

		int32_t InType; // 0x00(0x04)
	};

	struct Function_DFMGameHud_SOLBigMapHUDView_LiveTabList_OnButtonClick_Wish_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLBigMapHUDView_MapTipsList_BP_SetTipsListType_Param
	{
	public:

		int32_t InType; // 0x00(0x04)
	};

	struct Function_DFMGameHud_SOLBigMapHUDView_IconTextMapTips_BP_SetIsRight_Param
	{
	public:

		bool InIsRight; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SOLBigMapHUDView_POIBoxMapTips_OnProcessItemWidget_Param
	{
	public:

		int32_t Position; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UWidget* ItemWidget; // 0x08(0x08)
	};

	struct Function_DFMGameHud_SOLBigMapHUDView_ContractMapTips_SetLimitTime_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLBigMapHUDView_IteractBtnMapTips_OnItemOperatorButtonClick_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLBigMapHUDView_IteractBtnListMapTips_OnFadeOutEnd_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLBigMapHUDView_MarkTipsBtn_OnScroll_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLBigMapHUDView_MissionTitle_UpdateSelect_Param
	{
	public:

		bool bSelected; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SOLBigMapHUDView_MultiBtnBox_UpdateSelect_Param
	{
	public:

		bool bSelected; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SOLBigMapHUDView_SidePanel_UpdateContractTipsBox_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLBigMapHUDView_TipsBox_OnSOLEventStateChanged_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLBlueprintWeaponHudView_OnMutexChanged_Param
	{
	public:

		struct FMutexQueueItem PreHolder; // 0x00(0x30)
		struct FMutexQueueItem CurHolder; // 0x30(0x30)
		enum class EMutexChangeReason ChangeReason; // 0x60(0x01)
	};

	struct Function_DFMGameHud_DangerItem_BP_FadeOut_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLBlueprintWeaponHudView_HD_OnMutexChanged_Param
	{
	public:

		struct FMutexQueueItem PreHolder; // 0x00(0x30)
		struct FMutexQueueItem CurHolder; // 0x30(0x30)
		enum class EMutexChangeReason ChangeReason; // 0x60(0x01)
	};

	struct Function_DFMGameHud_SOLBroadcastHUDView_TickProcess_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLCaptureGameView_StartGame_Param
	{
	public:

	};

	struct Function_DFMGameHud_ContractAccessHUD_HandWearablesKey_BP_ShowOrHideFKey_Param
	{
	public:

		bool bShow; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SOLContractAccessHUD_HandWearableNew_SOLContractAccept_Inner_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLContractInfoHUDView_UpdateInteractKeyPress_Param
	{
	public:

		float Percent; // 0x00(0x04)
	};

	struct Function_DFMGameHud_SOLContractInfoHudController_OnSOLContractAccessUpdate_Param
	{
	public:

		struct AInteractor_PureContractNPC* ContractNPC; // 0x00(0x08)
		bool bShow; // 0x08(0x01)
	};

	struct Function_DFMGameHud_SOLContractTipHUDView_UpdateQuestProgress_Param
	{
	public:

		int64_t UpdateQuestId; // 0x00(0x08)
		char QuestState; // 0x08(0x01)
	};

	struct Function_DFMGameHud_SOLContractVoteHUDView_UpdateHUD_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLEstimatedTimeItem_BP_ShowIconOnly_Param
	{
	public:

		bool bIconOnly; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SOLEstimatedTimeHudView_ShowEventEstimatedTime_Param
	{
	public:

		struct FSOLEventEstimatedTimeData DataItem; // 0x00(0x18)
	};

	struct Function_DFMGameHud_SOLEvacuationEventHUDView_SetState_Param
	{
	public:

		enum class ESOLEvacuationEventHUDViewState InState; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SOLEventBannerFlyIconHudView_OnMiniIconFadeIn_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLEventBannerHUDView_TriggerSOLBlueprintWeaponHudInit_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLEventProgressHudView_ShowSOLEventProgress_Param
	{
	public:

		struct FSOLEventProgressDataItem EventProgressDataItem; // 0x00(0x28)
	};

	struct Function_DFMGameHud_SOLHealthMainView_SetLine_Param
	{
	public:

		char Part; // 0x00(0x01)
		char State; // 0x01(0x01)
	};

	struct Function_DFMGameHud_MiniMap_ShieldedArea_OnFadeOutEnd_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLBigMap_ShieldedArea_OnFadeOutEnd_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLQuestInteractHUDView_StopQuestAnimation_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLQuestManningView_OnMutexChanged_Param
	{
	public:

		struct FMutexQueueItem PreHolder; // 0x00(0x30)
		struct FMutexQueueItem CurHolder; // 0x30(0x30)
		enum class EMutexChangeReason ChangeReason; // 0x60(0x01)
	};

	struct Function_DFMGameHud_SOLQuestMarkWindowView_BP_SetMarkType_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLQuestTipConditionBox_InitQuestCondition_Param
	{
	public:

		struct FText QuestConditionDes; // 0x00(0x18)
	};

	struct Function_DFMGameHud_SOLQuestTipHUDView_UpdateQuestProgress_Param
	{
	public:

		int64_t UpdateQuestId; // 0x00(0x08)
		char QuestState; // 0x08(0x01)
	};

	struct Function_DFMGameHud_SOLScreenMarkerCommon_BP_SetDistTextPosition_Param
	{
	public:

		int32_t InPositionType; // 0x00(0x04)
	};

	struct Function_DFMGameHud_SOLStartMatchInfoHUDView_OnSOLStartMatchInfoShow_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLTimelineTipHUDView_SetStyle_Param
	{
	public:

		int32_t Style; // 0x00(0x04)
	};

	struct Function_DFMGameHud_SoundVisualizationPanel_TryAttachToTopDirectionHud_Param
	{
	public:

	};

	struct Function_DFMGameHud_TeamInfoHUDView_UpdateTeammateInfoIcon_Param
	{
	public:

		int32_t HealthChangeAmount; // 0x00(0x04)
	};

	struct Function_DFMGameHud_TeamInfoView_UpdateTeamInfoView_Param
	{
	public:

	};

	struct Function_DFMGameHud_TelescopeHUDView_ShowAlarm_Param
	{
	public:

		enum class ESlateVisibility EVisibility; // 0x00(0x01)
	};

	struct Function_DFMGameHud_TopDirectionIndicatorHUD_SetVisualizationPanelWidget_Param
	{
	public:

		struct UUserWidget* InWidget; // 0x00(0x08)
	};

	struct Function_DFMGameHud_TopDirectionSoundWidget_PlaySizeChangeAnim_Param
	{
	public:

		char OldDistanceType; // 0x00(0x01)
		char NewDistanceType; // 0x01(0x01)
	};

	struct Function_DFMGameHud_WeaponAssemblyBPLibrary_UpdateGunID_Param
	{
	public:

		struct AAssembleWeaponActor* Weapon; // 0x00(0x08)
		struct FText NewGunID; // 0x08(0x18)
		uint64_t PresetId; // 0x20(0x08)
		bool ReturnValue; // 0x28(0x01)
	};

	struct Function_DFMGameHud_WeaponDebugHud_DamageValidate_OnRecvPointHitFaild_Param
	{
	public:

		struct FPointHitActionResult PointHitActionResult; // 0x00(0x20)
	};

	struct Function_DFMGameHud_WeaponDebugLogView_ShowDebugPanel_Param
	{
	public:

		bool Show; // 0x00(0x01)
		enum class EWeaponDebugType ShowDebugType; // 0x01(0x01)
	};

	struct Function_DFMGameHud_WeaponFireStatDebugLogView_ResetData_Param
	{
	public:

	};

	struct Function_DFMGameHud_WeaponHUDBlueprintLibrary_UseSceneWeapon_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct ACHARACTER* CharacterActor; // 0x08(0x08)
		struct AActor* WeaponActor; // 0x10(0x08)
	};

	struct Function_DFMGameHud_WeaponInputHUDComponent_OnReload_Param
	{
	public:

	};

	struct Function_DFMGameHud_MapBaseHUDView_RemoveMapItem_Param
	{
	public:

		struct UClass* WidgetClass; // 0x00(0x08)
		struct FName Key; // 0x08(0x08)
	};

	struct Function_DFMGameHud_MapItemHUDView_TryMarkMapTarget_Param
	{
	public:

		bool bAdd; // 0x00(0x01)
	};

	struct Function_DFMGameHud_MobileControlPadView_SetFingerIndex_Param
	{
	public:

		struct FPointerEvent InTouchEvent; // 0x00(0x70)
	};

	struct Function_DFMGameHud_AIMsgWidgetBase_BPStartRemoveMsgWidget_Param
	{
	public:

		bool bIsFight; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFControllerRouletteBase_UpdateDragOffset_Param
	{
	public:

	};

	struct Function_DFMGameHud_PlayerBaseIconViewController_InGlitchVolumeChanged_Param
	{
	public:

		struct AGPPlayerState* AGPPlayerState; // 0x00(0x08)
	};

	struct Function_DFMGameHud_MiniGameViewBase_StartGame_Param
	{
	public:

		int32_t InSeed; // 0x00(0x04)
	};

	struct Function_DFMGameHud_GameMarkerBaseWidget_UpdateAimedCircleRadiusOpacity_Param
	{
	public:

	};

	struct Function_DFMGameHud_CrosshairViewProxy_InitStateFromMat_Param
	{
	public:

	};

	struct Function_DFMGameHud_DamageHintHUDView_UpdatePopupText_Param
	{
	public:

		float Delta; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DeployPointBaseWidget_UpdateWidget_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_DFMGameHud_InteractorPanelBase_BP_CannotPlaceC4WhenChangeWeapon_Param
	{
	public:

		struct AActor* InInteractor; // 0x00(0x08)
		struct FGameplayTag InTag; // 0x08(0x08)
	};

	struct Function_DFMGameHud_DFHDPlayerNameHUDView_UpdatePlayerStateDynamic_Param
	{
	public:

		float InDeltaTime; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFVehicleBaseView_Refresh_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMActionCommonProgressBar_UpdatePosition_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMBaseUIView_Visible_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMFixedWeaponCommonView_UpdateWeaponHealthPrecent_Param
	{
	public:

		float InHealthPrecent; // 0x00(0x04)
		float InMaxHealth; // 0x04(0x04)
		float InCurrentHealth; // 0x08(0x04)
	};

	struct Function_DFMGameHud_DFMInteractorView_ItemBase_RefreshLayout_Param
	{
	public:

	};

	struct Function_DFMGameHud_InteractorOperateSizeBox_ButtonOnclick_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMWeaponBarBase_UpdateWeaponImage_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFPCOperationItemView_BP_PlayShowAni_Param
	{
	public:

	};

	struct Function_DFMGameHud_KillTipsLoopListItemWidget_SetHidden_Param
	{
	public:

	};

	struct Function_DFMGameHud_LoadingViewBase_SetPreShow_Param
	{
	public:

		bool IsPreShow; // 0x00(0x01)
	};

	struct Function_DFMGameHud_MapBaseHUDController_OnUnregisterActor_Param
	{
	public:

		struct AActor* ChangedActor; // 0x00(0x08)
	};

	struct Function_DFMGameHud_MarkWindowHUDIconView_InitIconImage_Param
	{
	public:

		struct FSoftObjectPath ImagePath; // 0x00(0x18)
		float InMaxIconSize; // 0x18(0x04)
		struct FLinearColor Color; // 0x1c(0x10)
	};

	struct Function_DFMGameHud_PlayerInfoHUDView_UpdateStaminaHud_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLBigMapHUDView_CommonBtn_OnSelectMapTarget_Param
	{
	public:

		char MapSignTypeInt; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FName TargetName; // 0x04(0x08)
		char pad_C[0x4]; // 0x0c(0x04)
		struct UMapIconViewController* IconViewController; // 0x10(0x08)
	};

	struct Function_DFMGameHud_BigMapHUDView_UpdateTLogData_Param
	{
	public:

		enum class EBigMapOperateType OperateType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t AccNum; // 0x04(0x04)
	};

	struct Function_DFMGameHud_MiniMapHUDView_UpdateBattleFieldCurMapScale_Param
	{
	public:

	};

	struct Function_DFMGameHud_AbilityDetectorMapItemHUDView_UpdateMarkerType_Param
	{
	public:

		enum class EGPQuestActionMarkerType Type; // 0x00(0x01)
	};

	struct Function_DFMGameHud_AdjustableMapItemBase_OnMiniMapClipUpdate_Param
	{
	public:

		struct FVector2D MiniMapCenterAbsolutePos; // 0x00(0x08)
		float MiniMapPixelRadius; // 0x08(0x04)
	};

	struct Function_DFMGameHud_PlayerBaseItemView_BP_LocalCharacterShowIn_Param
	{
	public:

	};

	struct Function_DFMGameHud_BigMapQuestTipHUDView_OnQuestUpdate_Param
	{
	public:

		int64_t UpdateQuestId; // 0x00(0x08)
		char ObjType; // 0x08(0x01)
	};

	struct Function_DFMGameHud_CommonMiniMapItemHUDView_SetMarkerTrackItem_Param
	{
	public:

		struct TArray<int32_t> TeammateIndexArr; // 0x00(0x10)
		bool bHasSelf; // 0x10(0x01)
	};

	struct Function_DFMGameHud_MapItemRippleHUDView_PlayRippleAnimationInner_Param
	{
	public:

	};

	struct Function_DFMGameHud_MissionMapItemHUDView_UpdateMarkerType_Param
	{
	public:

		enum class EGPQuestActionMarkerType Type; // 0x00(0x01)
	};

	struct Function_DFMGameHud_PlayerMarkingBaseItemView_GetAnimation_Param
	{
	public:

	};

	struct Function_DFMGameHud_CharacterSummonsMapItemHUDView_BP_HandlePlayerStatusChanged_Param
	{
	public:

		enum class EMapPlayerIconState InState; // 0x00(0x01)
	};

	struct Function_DFMGameHud_AILabCharacterMapIconHUDView_OnAILabCharacterInfoChange_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLEventMarkerHUDView_UpdateView_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLPlayerDeathItemHudView_BP_SetDeathType_Param
	{
	public:

		int32_t InDeathType; // 0x00(0x04)
	};

	struct Function_DFMGameHud_TimeLineEventMapHUDView_SetRangeEffect_Param
	{
	public:

		float RangeRadius; // 0x00(0x04)
		bool bShowEventIcon; // 0x04(0x01)
	};

	struct Function_DFMGameHud_AbilityEngineerVehicleHudView_OnOwnerOperaterBeDamaged_Param
	{
	public:

		float Damage; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FTakeHitInfo TakeHitInfo; // 0x08(0xd0)
	};

	struct Function_DFMGameHud_DFMMobileWeaponViewBase_OnAmmoCountChanged_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMAssassinateButtonView_UpdateViewStatus_Param
	{
	public:

		bool bShow; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMMedicalSyringeButtonView_UpdateViewStatus_Param
	{
	public:

		bool bShow; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMMobileBowControlView_OnButtonClicked_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileCarryBodyButtonView_UpdateViewType_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileCrouchButtonView_UpdateCrouchImage_Param
	{
	public:

		int32_t Flag; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMMobileSkillItem_UpdateItemVisible_Param
	{
	public:

		bool entityVisible; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMMobileEyeButtonView_OnEyeBtnPressMoved_Param
	{
	public:

		struct FVector2D BeginLocation; // 0x00(0x08)
		struct FVector2D Location; // 0x08(0x08)
	};

	struct Function_DFMGameHud_DFMMobileJumpButtonView_UpdateJumpImage_Param
	{
	public:

		int32_t Flag; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMMobileMarkingButtonView_SetBtnIconImage_Param
	{
	public:

		int32_t InBtnType; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMMobileMovementButtonView_New_UpdateLockMoveButtonStatus_Param
	{
	public:

		bool bShow; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMMobilePeekButtonView_SetRightPeekFingerIndex_Param
	{
	public:

		struct FPointerEvent InTouchEvent; // 0x00(0x70)
	};

	struct Function_DFMGameHud_DFMMobileProneButtonView_RefreshButtonStatus_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileRangeScopeView_UpdateView_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileSilentWalkButtonView_OnSilentWalkModeChange_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileSkillView_UseSkill_Param
	{
	public:

		struct UDFMMobileSkillItem* Widget; // 0x00(0x08)
		bool Pressed; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		int32_t InFigerIndex; // 0x0c(0x04)
	};

	struct Function_DFMGameHud_DFMMobileSonicView_UpdateSonicWidget_Param
	{
	public:

		struct USonicInfoWidget* SonicWidget; // 0x00(0x08)
		struct FBuffDetectorUpdateData UpdateData; // 0x08(0x40)
	};

	struct Function_DFMGameHud_DFMMobileVehicleSkillButton_OnUseSkill_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileVehicleWeaponButton_SetButtonTargetLayout_Param
	{
	public:

		struct FString TargetLayout; // 0x00(0x10)
		struct UDFMMobileCustomLayoutDraggableButton* targetButton; // 0x10(0x08)
	};

	struct Function_DFMGameHud_DFMMobileXPPChangeView_SetXPPButtonTargetLayout_Param
	{
	public:

		struct FString TargetLayout; // 0x00(0x10)
	};

	struct Function_DFMGameHud_DFMNetworkStatusView_RefreshRTTView_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMParachuteView_UpdateViewStatus_Param
	{
	public:

		bool bShow; // 0x00(0x01)
		bool bShowCancel; // 0x01(0x01)
		bool bShowWarning; // 0x02(0x01)
	};

	struct Function_DFMGameHud_DFMWeaponInspectButtonView_OnButtonClicked_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMWeaponQuicklySwitchButtonView_OnNotifyActiveWeaponChanged_Param
	{
	public:

		struct AWeaponBase* PreWeapon; // 0x00(0x08)
		struct AWeaponBase* NewWeapon; // 0x08(0x08)
	};

	struct Function_DFMGameHud_DFMZiplineButtonView_UpdateViewStatus_Param
	{
	public:

		bool bShow; // 0x00(0x01)
		bool bShowCancelZipline; // 0x01(0x01)
	};

	struct Function_DFMGameHud_IntroZiplineButtonView_OnBtnClicked_Param
	{
	public:

	};

	struct Function_DFMGameHud_MobileBowCancelChargeControlView_OnButtonClicked_Param
	{
	public:

	};

	struct Function_DFMGameHud_TelescopeButtonHUD_OnTelescopeButtonClicked_Param
	{
	public:

	};

	struct Function_DFMGameHud_AIMsgMarkWidget_UpdateMsgMarkColor_Param
	{
	public:

		enum class EAIMsgType AIMsgType; // 0x00(0x01)
	};

	struct Function_DFMGameHud_AmmoRouletteHDHUDView_SetPendingAmmoType_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFCommercializationRoulette_OnPlayerHeroIdChanged_Param
	{
	public:

		uint64_t Uin; // 0x00(0x08)
		uint64_t HeroID; // 0x08(0x08)
	};

	struct Function_DFMGameHud_MarkingRouletteHUDView_OnMarkingBtnUp_Param
	{
	public:

	};

	struct Function_DFMGameHud_ScopeRouletteView_SwitchToScope_Param
	{
	public:

	};

	struct Function_DFMGameHud_BattlefieldPlayerIconViewController_OnPlayerArmedForceChanged_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLPlayerIconViewController_OnBlueprintPlunderInfoUpdate_Param
	{
	public:

		struct FBlueprintPlunderInfo BlueprintPlunderInfo; // 0x00(0xb0)
	};

	struct Function_DFMGameHud_CaptureGameView_DoCapture_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMGameHud_EngineerSonicTrapTriggerMarkWidget_BP_UpdateStyle_Param
	{
	public:

		float Opacity; // 0x00(0x04)
		float size; // 0x04(0x04)
	};

	struct Function_DFMGameHud_GPQuestMarkerWidget_BP_ShowQuestMarkerRight_Param
	{
	public:

		bool bShowRight; // 0x00(0x01)
	};

	struct Function_DFMGameHud_PlayerMarkerFriendlyWidget_OnBFCharIsInRedeployChange_Param
	{
	public:

		bool Change2IsInRedeploy; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		uint64_t InPlayerUin; // 0x08(0x08)
	};

	struct Function_DFMGameHud_PlayerMarkerDeathWidget_OnRescueLoopAnimEnd_Param
	{
	public:

	};

	struct Function_DFMGameHud_PlayerMarkerImpendingDeathWidget_PlayCryForHelpAnimation_Param
	{
	public:

	};

	struct Function_DFMGameHud_PlayerMarkingBaseWidget_OnMarkingDoubleClickDown_Param
	{
	public:

	};

	struct Function_DFMGameHud_PlayerMarkerAimedWidget_OnMarkingAnimationFinished_Param
	{
	public:

	};

	struct Function_DFMGameHud_PlayerMarkerDetectorWidget_PlayIn_Param
	{
	public:

		bool NewTarget; // 0x00(0x01)
	};

	struct Function_DFMGameHud_PlayerMarkerGunnerRobotWidget_BP_UpdateStyle_Param
	{
	public:

		float Opacity; // 0x00(0x04)
		float size; // 0x04(0x04)
	};

	struct Function_DFMGameHud_PlayerMarkerLaserPointerWidget_ShowMarker_Param
	{
	public:

	};

	struct Function_DFMGameHud_PlayerMarkerStingerMissleWidget_PlayIn_Param
	{
	public:

		bool NewTarget; // 0x00(0x01)
	};

	struct Function_DFMGameHud_PlayerMarkerSupportPackWidget_PlayIn_Param
	{
	public:

		bool NewTarget; // 0x00(0x01)
	};

	struct Function_DFMGameHud_PlayerMarkerSupportWeaponWidget_PlayIn_Param
	{
	public:

		bool NewTarget; // 0x00(0x01)
	};

	struct Function_DFMGameHud_PlayerMarkerSuppressionMineWidget_PlayIn_Param
	{
	public:

	};

	struct Function_DFMGameHud_VehicleMarkerWidget_UpdateDropAnim_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_DFMGameHud_RectangleCrosshairViewProxy_UpdateSpread_Param
	{
	public:

		float Spread; // 0x00(0x04)
	};

	struct Function_DFMGameHud_CircleCrosshairViewProxy_UpdateSpread_Param
	{
	public:

		float Spread; // 0x00(0x04)
	};

	struct Function_DFMGameHud_RangeTargetHUDView_Update_Param
	{
	public:

		float Delta; // 0x00(0x04)
	};

	struct Function_DFMGameHud_PlayerMarkerEnemyWidget_UpdateVisibility_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFHDInteractorPanel_TryCloseInteractDetail_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFHDPlayerNameLocalPlayerHUDView_SetCanvasVisibility_Param
	{
	public:

		bool bEnterFreeCamera; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFHDVehicleBloodWidget_OnVehicleDamage_Param
	{
	public:

		struct UDFMVehicleHealthComponent* Component; // 0x00(0x08)
		float NormalizedHP; // 0x08(0x04)
	};

	struct Function_DFMGameHud_DFHDVehicleKeyTipsWidget_OnVehicleExtraPartInfosFinish_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFHDVehicleWeaponBarWidget_OnVehicleExtraPartInfosFinish_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileHelicopterDriveView_RefreshCameraModeState_Param
	{
	public:

		bool bNewFPP; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMMobileVehicleGunView_RefreshCameraModeState_Param
	{
	public:

		bool bNewFPP; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMMobileTankDriveView_RefreshCameraModeState_Param
	{
	public:

		bool bNewFPP; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMMobileVehicleBaseMovement_OnControllerUnPossessPawn_Param
	{
	public:

		struct APlayerController* Controller; // 0x00(0x08)
	};

	struct Function_DFMGameHud_DFMMobileVehicleBloodWidget_OnVehicleDamage_Param
	{
	public:

		struct UDFMVehicleHealthComponent* Component; // 0x00(0x08)
		float NormalizedHP; // 0x08(0x04)
	};

	struct Function_DFMGameHud_DFMMobileVehicleCommonView_StartLean_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileVehicleDriveView_TrumpetBtnReleased_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileVehicleSkillPanel_OnVehicleExtraPartInfosFinish_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileVehicleSwitchWeaponWidget_OnUpdateWeaponList_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFVehicleSkillWidget_RefreshSkillKey_Param
	{
	public:

		struct FString SkillKey; // 0x00(0x10)
	};

	struct Function_DFMGameHud_DFVehicleWeaponAimWidget_RefreshCameraModeState_Param
	{
	public:

		bool bNewFPP; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFVehicleWeaponMirrorWidget_RefreshCameraModeState_Param
	{
	public:

		bool bNewFPP; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFKillerInfoCardView_SOL_RefreshView_Param
	{
	public:

		struct FKillInfo KillInfo; // 0x00(0x148)
	};

	struct Function_DFMGameHud_DFMC102AdrenalineView_BP_PlayHUDAnim_Param
	{
	public:

		bool bStart; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMC202BeCatTracingView_SetTracingLevel_Param
	{
	public:

		int32_t TracingLevel; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMC202CatSneakView_BP_PlayHUDAnim_Param
	{
	public:

		bool bStart; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMC202CatTracingEnemyView_SetMarkEnemyCnt_Param
	{
	public:

		int32_t EnemyCnt; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMUsingItemTipsHUDView_PostOnGameHudStateChanged_Param
	{
	public:

	};

	struct Function_DFMGameHud_GiantTowerWeaponSeatView_OnWeaponAimClicked_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMInteractorView_InteractList_ClickSingleItem_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
	};

	struct Function_DFMGameHud_DFMInteractorView_Rescue_OnShowRescueButton_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMInteractorView_Plunder_UpdateCurrentRaceScore_Param
	{
	public:

		float Score; // 0x00(0x04)
		float MaxScore; // 0x04(0x04)
	};

	struct Function_DFMGameHud_DFMInteractorView_ProgressBar_ShowProgress_Param
	{
	public:

		float InDuration; // 0x00(0x04)
	};

	struct Function_DFMGameHud_CharacterArmorView_OnFocusPawnChanged_Param
	{
	public:

		struct APawn* NewFocusPawan; // 0x00(0x08)
	};

	struct Function_DFMGameHud_HealthDetailHUDView_OnShowFoodButtonClick_Param
	{
	public:

	};

	struct Function_DFMGameHud_BodyHealthDetailHUDView_OnShowFoodButtonClick_Param
	{
	public:

	};

	struct Function_DFMGameHud_HealthDetailItemLabelHUDView_OnBuffDescBtnClicked_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileWeaponToolbarGun_OnBipodDeployStatusChange_Param
	{
	public:

		uint64_t WeaponGuid; // 0x00(0x08)
		bool bIsDeploy; // 0x08(0x01)
	};

	struct Function_DFMGameHud_DFMMobileWeaponToolbarKnife_BP_SetSelected_Param
	{
	public:

		bool bSelected; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMRightKeyTipsSkillView_UpdateTipsData_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<struct FRightKeyTipsSkillData> NameList; // 0x08(0x10)
	};

	struct Function_DFMGameHud_DFPCOperationDownloadView_ShowIcon_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		struct FName InItemIDName; // 0x08(0x08)
	};

	struct Function_DFMGameHud_DFPCOperationFireMissileView_OnSomeoneItemFired_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFPCOperationFireRocketView_OnFireState_Param
	{
	public:

		int32_t InState; // 0x00(0x04)
		bool b1P; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct AActor* InHackPC; // 0x08(0x08)
		int32_t HasClickState; // 0x10(0x04)
	};

	struct Function_DFMGameHud_DFPCOperationOpenDoorView_OnOpenState_Param
	{
	public:

		int32_t InState; // 0x00(0x04)
		bool b1P; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct AActor* InHackPC; // 0x08(0x08)
	};

	struct Function_DFMGameHud_InteractorSizeBoxAcquireItemAppearance_OnClickEvent_Param
	{
	public:

	};

	struct Function_DFMGameHud_InteractorSizeBoxGeneralSkillAppearance_OnClickEvent_Param
	{
	public:

	};

	struct Function_DFMGameHud_LoadingView_ShouldShowGuideInfo_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMGameHud_ModeLoadingView_BP_UpdateWidget_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_DFMGameHud_WarfareLoadingView_OnSkipButtonClicked_Param
	{
	public:

	};

	struct Function_DFMGameHud_SafeHouseMapHUDController_OnAsyncLoadMapLocationTable_Param
	{
	public:

		struct FSoftObjectPath SoftObjectPath; // 0x00(0x18)
	};

	struct Function_DFMGameHud_SOLMapHUDController_UpdateQuestProgress_Param
	{
	public:

		int64_t UpdateQuestId; // 0x00(0x08)
		char ObjType; // 0x08(0x01)
	};

	struct Function_DFMGameHud_QuestMarkWindowHUDIconView_UpdateView_Param
	{
	public:

		struct UMarkWindowHUDView* MarkWindow; // 0x00(0x08)
		float InDeltaTime; // 0x08(0x04)
	};

	struct Function_DFMGameHud_ScoutMarkWidget_BP_SetArrowImage_Param
	{
	public:

		int32_t Type; // 0x00(0x04)
	};

	struct Function_DFMGameHud_SOLBigMapHUDView_MissionBtn_OnQuestObjectionTimerUpdate_Param
	{
	public:

		uint64_t InPlayerUin; // 0x00(0x08)
		int64_t QuestID; // 0x08(0x08)
		int64_t QuestObjectionID; // 0x10(0x08)
		float TimeSpent; // 0x18(0x04)
	};

	struct Function_DFMGameHud_WeaponInputDefault_OnWeaponStartFireFailed_Param
	{
	public:

		char ret; // 0x00(0x01)
	};

	struct Function_DFMGameHud_AbilityDetectorHudView_OnDetectorMapShow_Param
	{
	public:

		bool Show; // 0x00(0x01)
	};

	struct Function_DFMGameHud_AbilityDetectorHudViewEx_OnDetectorMapShow_Param
	{
	public:

		bool Show; // 0x00(0x01)
	};

	struct Function_DFMGameHud_RaidBigMapHUDView_Main_UpdateQuestProgress_Param
	{
	public:

		int64_t UpdateQuestId; // 0x00(0x08)
		char ObjType; // 0x08(0x01)
	};

	struct Function_DFMGameHud_SeamlessEntryHUDView_Main_UpdateAspectRatio_Param
	{
	public:

	};

	struct Function_DFMGameHud_SOLBigMapHUDView_Main_UpdateRemainTime_Param
	{
	public:

		float Delta; // 0x00(0x04)
	};

	struct Function_DFMGameHud_MiniMapHUDViewRaid_OnQuestStageChanged_Param
	{
	public:

		struct FName QuestStageName; // 0x00(0x08)
	};

	struct Function_DFMGameHud_OBPlayerItemView_SetOBPlayerPanelVisibility_Param
	{
	public:

		bool bOBMatchCompIsOBingPlayer; // 0x00(0x01)
	};

	struct Function_DFMGameHud_SOLPlayerItemView_BP_SetMapPlayerIconState_Param
	{
	public:

		enum class EMapPlayerIconState InState; // 0x00(0x01)
	};

	struct Function_DFMGameHud_BtnImageMapItemHUDView_OnSelectBtnClicked_Param
	{
	public:

	};

	struct Function_DFMGameHud_PlayerItemMarkingItemView_UpdateItemMarker_Param
	{
	public:

	};

	struct Function_DFMGameHud_PlayerLocationMarkingItemView_UpdateLocationMarker_Param
	{
	public:

	};

	struct Function_DFMGameHud_AmmoStatusHud_OnWeaponStartFireFailed_Param
	{
	public:

		char ret; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMLeftFireButton_OnWeaponZoomingStateChange_Param
	{
	public:

		bool InAimOpen; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMMobileAimButtonView_RefreshButtonStatus_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileFireButtonView_UpdateMoveFireModeSetting_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileReloadView_RefreshArrowV2_Param
	{
	public:

		bool bForceUpdate; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMMobileWeaponBipView_ShowBipTip_Param
	{
	public:

		bool isShow; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMMobileWeaponPowerFlashView_OnOpenPowerFlash_Param
	{
	public:

		bool bPlayAudio; // 0x00(0x01)
	};

	struct Function_DFMGameHud_DFMMobileWeaponTacticalEquipItem_OnBtnUnhovered_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileWeaponTacticalEquipView_UpdateTacticalEquipSimplePanel_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMWeaponTacticalEquipItem_OnBtnUnhovered_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMWeaponTacticalEquipView_OnShowTacticalEquipPanel_Param
	{
	public:

		bool isShow; // 0x00(0x01)
	};

	struct Function_DFMGameHud_UDFMMobileWeaponRangeFinder_OnBtnClicked_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileCustomSkillItem_OnCustomButtonPressed_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileTankStateWidget_OnTankRecover_Param
	{
	public:

		struct FName PartName; // 0x00(0x08)
		int32_t FuncFlag; // 0x08(0x04)
	};

	struct Function_DFMGameHud_DFMMobileVehicleButtonMovement_OnBtnThrottleReleased_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFMMobileVehicleSliderMovement_OnThrottleSliderEnd_Param
	{
	public:

	};

	struct Function_DFMGameHud_DFVehicleDetectionSkillWidget_BP_SetType_Param
	{
	public:

		int32_t InType; // 0x00(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
