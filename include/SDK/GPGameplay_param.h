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
	struct Function_GPGameplay_GPGameInstance_PreloadLevels_Param
	{
	public:

		struct TArray<struct UObject*> OutPreloadedObjects; // 0x00(0x10)
	};

	struct Function_GPGameplay_AIDebugPanelV2_OnDebugTargetChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_AIDebugPanelV2_BP_Update_Param
	{
	public:

		float DeltaSecond; // 0x00(0x04)
	};

	struct Function_GPGameplay_AttachableItemInterface_AttachableItem_SetParentItemID_Param
	{
	public:

		int32_t ParentItemID; // 0x00(0x04)
	};

	struct Function_GPGameplay_AttachableItemInterface_AttachableItem_OnParentDestroyed_Param
	{
	public:

	};

	struct Function_GPGameplay_AttachableItemInterface_AttachableItem_IsDestroyed_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_AttachableItemInterface_AttachableItem_GetParentItemID_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_AttackerValueDataManager_GetKillIconPath_Param
	{
	public:

		uint64_t AttackerValueId; // 0x00(0x08)
		struct FSoftObjectPath ReturnValue; // 0x08(0x18)
	};

	struct Function_GPGameplay_AttackerValueDataManager_GetDeathDetailIconPath_Param
	{
	public:

		uint64_t AttackerValueId; // 0x00(0x08)
		struct FSoftObjectPath ReturnValue; // 0x08(0x18)
	};

	struct Function_GPGameplay_AttackLevelDetailCorrectionManager_GetRowByGroupId_Param
	{
	public:

		int32_t GroupID; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FAttackLevelCorrection ReturnValue; // 0x08(0x138)
	};

	struct Function_GPGameplay_AttackLevelDetailCorrectionManager_GetRowByDelta_Param
	{
	public:

		uint64_t GroupID; // 0x00(0x08)
		int32_t AttackLevel; // 0x08(0x04)
		int32_t ArmorLevel; // 0x0c(0x04)
		struct FAttackLevelParamGroup ReturnValue; // 0x10(0x14)
	};

	struct Function_GPGameplay_KillInfoWeaponInfoFuzzyMatchManager_IsRowQualifyId_Param
	{
	public:

		struct FKillInfoWeaponImageRow InRow; // 0x00(0x78)
		struct FFuzzyMatchIdCollection InFuzzyMatchIdCollection; // 0x78(0x18)
		bool ReturnValue; // 0x90(0x01)
	};

	struct Function_GPGameplay_KillInfoWeaponInfoFuzzyMatchManager_GetByFuzzyMatchIdCollection_Param
	{
	public:

		struct FFuzzyMatchIdCollection InFuzzyMatchIdCollection; // 0x00(0x18)
		struct FText OutDescName; // 0x18(0x18)
		struct FSoftObjectPath OutPath; // 0x30(0x18)
		enum class EWeaponItemType OutWeaponItemType; // 0x48(0x01)
		bool ReturnValue; // 0x49(0x01)
	};

	struct Function_GPGameplay_UserWidgetHelperLib_SetCanvasSlotPos_Param
	{
	public:

		struct UObject* Widget; // 0x00(0x08)
		struct FVector2D ScreenSpacePosition; // 0x08(0x08)
		struct FVector2D AlignPos; // 0x10(0x08)
		struct UObject* WorldContexntObject; // 0x18(0x08)
	};

	struct Function_GPGameplay_UserWidgetHelperLib_RemoveUserWidget_Param
	{
	public:

		struct UObject* Widget; // 0x00(0x08)
	};

	struct Function_GPGameplay_UserWidgetHelperLib_GetSpriteSize_Param
	{
	public:

		struct UObject* Sprite; // 0x00(0x08)
		struct FVector2D ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_UserWidgetHelperLib_AddUserWidget_Param
	{
	public:

		struct UObject* Widget; // 0x00(0x08)
		int32_t ZOrder; // 0x08(0x04)
		int32_t LayerOrder; // 0x0c(0x04)
	};

	struct Function_GPGameplay_BowArrow_SetArrowType_Param
	{
	public:

		bool IsProxSensorArrow; // 0x00(0x01)
	};

	struct Function_GPGameplay_BowArrow_SetArrowEffect_Param
	{
	public:

		bool bActive; // 0x00(0x01)
	};

	struct Function_GPGameplay_BowArrow_OnChargeStateChange_Param
	{
	public:

		bool ischarging; // 0x00(0x01)
	};

	struct Function_GPGameplay_BowArrow_BP_SetFXRenderMatrixMode_Param
	{
	public:

		struct UFXResourceContainerComponent* FXResource; // 0x00(0x08)
		enum class ERenderMatrixMode MatrixMode; // 0x08(0x01)
	};

	struct Function_GPGameplay_BowArrow_BP_OnChargeStateChange_Param
	{
	public:

		bool ischarging; // 0x00(0x01)
	};

	struct Function_GPGameplay_BowDataComponentArrowAppearance_TryInitArrowActor_Param
	{
	public:

	};

	struct Function_GPGameplay_BowDataComponentArrowAppearance_ShowZoomHUD3P_Param
	{
	public:

		struct FName HudName; // 0x00(0x08)
		bool bActive; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_BowDataComponentArrowAppearance_ShowZoomHUD_Param
	{
	public:

		struct FName HudName; // 0x00(0x08)
		bool bActive; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_BowDataComponentArrowAppearance_SetWeaponHUDState3P_Param
	{
	public:

		bool bActive; // 0x00(0x01)
	};

	struct Function_GPGameplay_BowDataComponentArrowAppearance_SetWeaponHUDState_Param
	{
	public:

		bool bActive; // 0x00(0x01)
	};

	struct Function_GPGameplay_BowDataComponentArrowAppearance_SetMask_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_BowDataComponentArrowAppearance_SetArrowMeshActive_Param
	{
	public:

		bool bActive; // 0x00(0x01)
	};

	struct Function_GPGameplay_BowDataComponentArrowAppearance_SetArrow_Param
	{
	public:

		struct ABowArrow* ArrowMesh; // 0x00(0x08)
	};

	struct Function_GPGameplay_BowDataComponentArrowAppearance_RegisterLiveSpectating_Param
	{
	public:

		bool doRegister; // 0x00(0x01)
	};

	struct Function_GPGameplay_BowDataComponentArrowAppearance_OnLocalPlayerPawnChanged_Param
	{
	public:

		struct AActor* OldCharacter; // 0x00(0x08)
		struct AActor* NewCharacter; // 0x08(0x08)
	};

	struct Function_GPGameplay_BowDataComponentArrowAppearance_OnChargeStateChange_Param
	{
	public:

		bool ischarging; // 0x00(0x01)
	};

	struct Function_GPGameplay_BowDataComponentArrowAppearance_OnCancelChargingBtnClicked_Param
	{
	public:

	};

	struct Function_GPGameplay_BowDataComponentArrowAppearance_IsProxSensorArow_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_BowDataComponentArrowAppearance_CheckIsSpectating_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_BowDataComponentArrowAppearance_BP_SetBowArrowMeshActive_Param
	{
	public:

		bool Active; // 0x00(0x01)
		bool NeedEffect; // 0x01(0x01)
	};

	struct Function_GPGameplay_BreathInfo_ToggleHoldBreath_Param
	{
	public:

	};

	struct Function_GPGameplay_BreathInfo_CheckCanHoldBreath_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_CharacterAnimSnapshotManager_GetCharacterSnapShotPoseType_Param
	{
	public:

		struct AGPCharacter* InGPCharacter; // 0x00(0x08)
		struct FCharacterSnapShotPoseType ReturnValue; // 0x08(0x02)
	};

	struct Function_GPGameplay_CharacterAnimSnapshotManager_GetBoneTransformOnVehicle_Param
	{
	public:

		uint64_t VehicleId; // 0x00(0x08)
		struct FName SeatName; // 0x08(0x08)
		struct FName BoneName; // 0x10(0x08)
		bool bLeanOut; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct FTransform OutTransform; // 0x20(0x30)
		bool ReturnValue; // 0x50(0x01)
	};

	struct Function_GPGameplay_CharacterAnimSnapshotManager_GetBoneTransformOnSceneWeapon_Param
	{
	public:

		uint64_t SceneWeaponID; // 0x00(0x08)
		struct FName BoneName; // 0x08(0x08)
		struct FTransform OutTransform; // 0x10(0x30)
		bool ReturnValue; // 0x40(0x01)
	};

	struct Function_GPGameplay_CharacterAnimSnapshotManager_GetBoneTransform_Param
	{
	public:

		enum class ECharacterSnatshotBasePose Pose; // 0x00(0x01)
		enum class ECharacterSnatshotSubPose Lean; // 0x01(0x01)
		char pad_2[0x2]; // 0x02(0x02)
		struct FName BoneName; // 0x04(0x08)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FTransform OutTransform; // 0x10(0x30)
		bool ReturnValue; // 0x40(0x01)
	};

	struct Function_GPGameplay_ChargeGunDataCompAmmoAppearance_OnAmmoCountChange_Param
	{
	public:

		float WeaponAmmoCount; // 0x00(0x04)
		float CarryWeaponAmmoCount; // 0x04(0x04)
	};

	struct Function_GPGameplay_ChargeGunDataCompAmmoAppearance_GetDynamicSkeletalMeshComponent_Param
	{
	public:

		enum class EAdapterItemType InAdpaterType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct USkeletalMeshComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_CompositedBipod_TickCheckWeaponBipodDeploy_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_CompositedBipod_ShowBipTip_Param
	{
	public:

		bool isShow; // 0x00(0x01)
		bool bForceChange; // 0x01(0x01)
	};

	struct Function_GPGameplay_CompositedBipod_OnMeshLoaded_Param
	{
	public:

		uint64_t Guid; // 0x00(0x08)
	};

	struct Function_GPGameplay_CompositedBipod_OnDelayCloseTick_Param
	{
	public:

	};

	struct Function_GPGameplay_CompositedBipod_OnBoolPropertyChanged_Param
	{
	public:

		char PropertyType; // 0x00(0x01)
	};

	struct Function_GPGameplay_CompositedBipod_OnAssetLoad_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> AssetRef; // 0x00(0x10)
	};

	struct Function_GPGameplay_CompositedBipod_OnAnimLoadComplete_Param
	{
	public:

		struct FSoftObjectPath AssetPath; // 0x00(0x18)
	};

	struct Function_GPGameplay_CompositedBipod_IsTraceResultSucceed_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_CompositedBipod_DelayApplyDynamicAttribute_Param
	{
	public:

	};

	struct Function_GPGameplay_CompositedBipod_CheckCanWeaponBipodDeployByBox_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_CompositedBipod_CheckCanWeaponBipodDeploy_Param
	{
	public:

	};

	struct Function_GPGameplay_CompositedBipod_CanPlayCharacterAnim_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_CompositedBipod_ApplyDynamicAttribute_Param
	{
	public:

		bool Apply; // 0x00(0x01)
	};

	struct Function_GPGameplay_CompositedLaser_OnMeshLoaded_Param
	{
	public:

		uint64_t Guid; // 0x00(0x08)
	};

	struct Function_GPGameplay_CompositedLaser_OnLaserFlareMeshLoaded_Param
	{
	public:

		struct FSoftObjectPath ObjectPath; // 0x00(0x18)
	};

	struct Function_GPGameplay_CompositedLaser_OnLaserFlareMatLoaded_Param
	{
	public:

		struct FSoftObjectPath ObjectPath; // 0x00(0x18)
	};

	struct Function_GPGameplay_CompositedLaser_EnableLaserFlare_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_DamageMakerInterface_SetSourceVehicleId_Param
	{
	public:

		int32_t InSourceVehicleId; // 0x00(0x04)
	};

	struct Function_GPGameplay_DamageMakerInterface_PostDamageMakerApplyDamage_Param
	{
	public:

		bool bIsServer; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FDamageResultInfo DamageResult; // 0x08(0x5e0)
	};

	struct Function_GPGameplay_DamageMakerInterface_OnProcessBulletPointHitAction_Param
	{
	public:

		struct FRequestPointHitActionParam RequestPointHitParam; // 0x00(0x1a8)
	};

	struct Function_GPGameplay_DamageMakerInterface_OnBulletPointHitActionFaild_Param
	{
	public:

		struct FPointHitActionResult HitActionFaild; // 0x00(0x20)
	};

	struct Function_GPGameplay_DamageMakerInterface_GetWeaponItemType_Param
	{
	public:

		struct UObject* ActorObject; // 0x00(0x08)
		enum class EWeaponItemType ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_DamageMakerInterface_GetUin_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_DamageMakerInterface_GetSourceVehicleId_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_DamageMakerInterface_GetActorType_Param
	{
	public:

		struct UObject* ActorObject; // 0x00(0x08)
		enum class EDamageActorType ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_DamageMakerInterface_DamageMakerShouldIgnoreDamage_Param
	{
	public:

		struct FDamageSourceInfo SourceInfo; // 0x00(0x2a8)
		struct FDamageResultInfo DamageResult; // 0x2a8(0x5e0)
		bool ReturnValue; // 0x888(0x01)
	};

	struct Function_GPGameplay_DamageMakerInterface_DamageMakerModifyDamage_Param
	{
	public:

		struct FDamageSourceInfo SourceInfo; // 0x00(0x2a8)
		struct FDamageResultInfo DamageResult; // 0x2a8(0x5e0)
	};

	struct Function_GPGameplay_DamageMakerInterface_DamageMakerGetId_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_DamageMakerInterface_DamageMakerGetGId_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_DamageMakerInterface_DamageMakerClientPreview_Param
	{
	public:

		struct FDamageResultInfo DamageResult; // 0x00(0x5e0)
	};

	struct Function_GPGameplay_DamageMakerInterface_DamageMakerApplyDamage_Param
	{
	public:

		bool bIsServer; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FDamageResultInfo DamageResult; // 0x08(0x5e0)
	};

	struct Function_GPGameplay_DamageStateRecordMgr_NewRecorder_Param
	{
	public:

		enum class EDamageStateRecordType InArg; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct UDamageStateRecorder* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_DamageSystemImpl_MakeRadialDamageBuffBP_Param
	{
	public:

	};

	struct Function_GPGameplay_DamageSystemImpl_MakeRadialDamageBP_Param
	{
	public:

	};

	struct Function_GPGameplay_DamageSystemImpl_MakePointDamageBPSimple_Param
	{
	public:

	};

	struct Function_GPGameplay_DamageSystemImpl_MakePointDamageBP_Param
	{
	public:

	};

	struct Function_GPGameplay_DamageSystemImpl_MakePhysicalDamageBP2_Param
	{
	public:

	};

	struct Function_GPGameplay_DamageSystemImpl_MakePhysicalDamageBP_Param
	{
	public:

	};

	struct Function_GPGameplay_DamageSystemInterface_Shutdown_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
	};

	struct Function_GPGameplay_DamageSystemInterface_ShouldIgnoreDamageTrace_Param
	{
	public:

	};

	struct Function_GPGameplay_DamageSystemInterface_Reset_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
	};

	struct Function_GPGameplay_DamageSystemInterface_RequestPointHitAction_Param
	{
	public:

		struct FRequestPointHitActionParam HitActionParam; // 0x00(0x1a8)
	};

	struct Function_GPGameplay_DamageSystemInterface_OnServerReceiveMakeDamageRequest_Param
	{
	public:

		struct AActor* ChannelActor; // 0x00(0x08)
		struct TArray<struct FDamageResultInfo> DamageResults; // 0x08(0x10)
	};

	struct Function_GPGameplay_DamageSystemInterface_OnServerReceiveHitActionRequest_Param
	{
	public:

		struct AActor* ChannelActor; // 0x00(0x08)
		struct FRequestPointHitActionParam RequsetHitActionParam; // 0x08(0x1a8)
	};

	struct Function_GPGameplay_DamageSystemInterface_OnClientReceiveApplyDamageRequest_Param
	{
	public:

		struct AActor* ChannelActor; // 0x00(0x08)
		struct FDamageResultInfo DamageResult; // 0x08(0x5e0)
	};

	struct Function_GPGameplay_DamageSystemInterface_OnClientNotifyFaildHitAction_Param
	{
	public:

		struct AActor* ChannelActor; // 0x00(0x08)
		struct AActor* DamageMakerActor; // 0x08(0x08)
		struct FPointHitActionResult S2CRequestPointHitActionFaild; // 0x10(0x20)
	};

	struct Function_GPGameplay_DamageSystemInterface_OnClientNotifyApplyHitAction_Param
	{
	public:

		struct AActor* ChannelActor; // 0x00(0x08)
		struct FRequestPointHitActionParam RequsetHitActionParam; // 0x08(0x1a8)
	};

	struct Function_GPGameplay_DamageSystemInterface_MakeRadialDamage_Param
	{
	public:

	};

	struct Function_GPGameplay_DamageSystemInterface_MakePointDamage_Param
	{
	public:

	};

	struct Function_GPGameplay_DamageSystemInterface_MakePhysicalDamage_Param
	{
	public:

	};

	struct Function_GPGameplay_DamageSystemInterface_MakeCustomPhyscialDamage_Param
	{
	public:

	};

	struct Function_GPGameplay_DamageSystemInterface_MakeBuffDamage_Param
	{
	public:

	};

	struct Function_GPGameplay_DamageSystemInterface_IsDebug_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_DamageSystemInterface_Init_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
	};

	struct Function_GPGameplay_DamageSystemInterface_GetPostMakeRadialDamageDelegate_Param
	{
	public:

	};

	struct Function_GPGameplay_DamageSystemInterface_GetPostMakeDamageDelegate_Param
	{
	public:

	};

	struct Function_GPGameplay_DamageSystemInterface_GetBeforeMakeDamageDelegate_Param
	{
	public:

	};

	struct Function_GPGameplay_DamageSystemInterface_CaculateDamage_Param
	{
	public:

		struct FDamageSourceInfo SourceInfo; // 0x00(0x2a8)
		struct FDamageResultInfo DamageResult; // 0x2a8(0x5e0)
		bool ReturnValue; // 0x888(0x01)
	};

	struct Function_GPGameplay_DamageSystemInterface_ApplyRadialDamageBlockRate_Param
	{
	public:

		struct FDamageSourceInfo SourceInfo; // 0x00(0x2a8)
		bool bBlock; // 0x2a8(0x01)
		char pad_2A9[0x7]; // 0x2a9(0x07)
		struct FDamageResultInfo DamageResult; // 0x2b0(0x5e0)
	};

	struct Function_GPGameplay_DamageSystemUtil_IsWeaponDamage_Param
	{
	public:

		struct FDamageSourceInfo SourceInfo; // 0x00(0x2a8)
		bool ReturnValue; // 0x2a8(0x01)
	};

	struct Function_GPGameplay_DamageSystemUtil_GetWeaponType_Param
	{
	public:

		struct FDamageSourceInfo SourceInfo; // 0x00(0x2a8)
		enum class EWeaponItemType ReturnValue; // 0x2a8(0x01)
	};

	struct Function_GPGameplay_DamageTakerInterface_ShouldIgnoreDamage_Param
	{
	public:

		enum class EDamageGameState DamageGameState; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_DamageTakerInterface_SelectFirstHitResultsForExplodeDamage_Param
	{
	public:

		struct TArray<struct FHitResult> InHitResults; // 0x00(0x10)
		struct FHitResult OutHitResult; // 0x10(0x88)
	};

	struct Function_GPGameplay_DamageTakerInterface_OnDamageTakerApplyDamageBP_Param
	{
	public:

		bool bIsServer; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FDamageResultInfo DamageResult; // 0x08(0x5e0)
	};

	struct Function_GPGameplay_DamageTakerInterface_IsDamageableComponent_Param
	{
	public:

		struct UPrimitiveComponent* Component; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_DamageTakerInterface_IgnoreDamageOnPrematch_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_DamageTakerInterface_GetUin_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_DamageTakerInterface_GetRadialDamageSamplePoint_Param
	{
	public:

		struct TArray<struct FRadialSamplePoint> OutSamplePoint; // 0x00(0x10)
		enum class EDamageExplodeBlockCheckType ExplodeBlockCheckType; // 0x10(0x01)
	};

	struct Function_GPGameplay_DamageTakerInterface_GetLivingStatus_Param
	{
	public:

		char ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_DamageTakerInterface_GetDamageTakerInterestExtend_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_DamageTakerInterface_GetComponentsRadialDamageSamplePoint_Param
	{
	public:

		struct UPrimitiveComponent* Component; // 0x00(0x08)
		int32_t BodyIndex; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct TArray<struct FRadialSamplePoint> OutSamplePoint; // 0x10(0x10)
	};

	struct Function_GPGameplay_DamageTakerInterface_GetActorType_Param
	{
	public:

		struct UObject* ActorObject; // 0x00(0x08)
		enum class EDamageActorType ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_DamageTakerInterface_DamageTakerShouldIgnoreDamage_Param
	{
	public:

		struct FDamageSourceInfo SourceInfo; // 0x00(0x2a8)
		struct FDamageResultInfo DamageResult; // 0x2a8(0x5e0)
		bool ReturnValue; // 0x888(0x01)
	};

	struct Function_GPGameplay_DamageTakerInterface_DamageTakerModifyDamage_Param
	{
	public:

		struct FDamageSourceInfo SourceInfo; // 0x00(0x2a8)
		struct FDamageResultInfo DamageResult; // 0x2a8(0x5e0)
	};

	struct Function_GPGameplay_DamageTakerInterface_DamageTakerClientPreview_Param
	{
	public:

		struct FDamageResultInfo DamageResult; // 0x00(0x5e0)
	};

	struct Function_GPGameplay_DamageTakerInterface_DamageTakerApplyDamageEffect_Param
	{
	public:

		bool bIsServer; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FDamageResultInfo DamageResult; // 0x08(0x5e0)
	};

	struct Function_GPGameplay_DamageTakerInterface_BeforeDamageTakerApplyDamageEffect_Param
	{
	public:

		bool bIsServer; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FDamageResultInfo InOutDamageResult; // 0x08(0x5e0)
	};

	struct Function_GPGameplay_DamageTakerInterface_AfterDamageTakerApplyDamageEffect_Param
	{
	public:

		bool bIsServer; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FDamageResultInfo InOutDamageResult; // 0x08(0x5e0)
	};

	struct Function_GPGameplay_DamageValidateDebugComponent_ClientDebugLagRpc_Param
	{
	public:

		float ClientServerTime; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct AActor* CHARACTER; // 0x08(0x08)
	};

	struct Function_GPGameplay_DamageValidateSystemImpl_OnRuleClassLoaded_Param
	{
	public:

		struct FSoftObjectPath SoftObjectPath; // 0x00(0x18)
	};

	struct Function_GPGameplay_DamageValidateSystemImpl_OnActorSpawnedCallback_Param
	{
	public:

		struct AActor* SpawnedActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_DamageValidateSystemImpl_CollectStatInfo_Param
	{
	public:

		uint64_t RuleId; // 0x00(0x08)
		enum class EDamageValidateResult Result; // 0x08(0x01)
	};

	struct Function_GPGameplay_DamageValidateSystemInterface_ValidateHitAction_Param
	{
	public:

		enum class EDamageValidateType ValidateType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FRequestPointHitActionParam RequestParam; // 0x08(0x1a8)
		struct AActor* ChannelActor; // 0x1b0(0x08)
		struct FPointHitActionResult ReturnValue; // 0x1b8(0x20)
	};

	struct Function_GPGameplay_DamageValidateSystemInterface_Shutdown_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
	};

	struct Function_GPGameplay_DamageValidateSystemInterface_SetEnable_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_DamageValidateSystemInterface_SetDebug_Param
	{
	public:

		bool bDebug; // 0x00(0x01)
	};

	struct Function_GPGameplay_DamageValidateSystemInterface_Reset_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
	};

	struct Function_GPGameplay_DamageValidateSystemInterface_IsEnable_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_DamageValidateSystemInterface_IsDebug_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_DamageValidateSystemInterface_Init_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
	};

	struct Function_GPGameplay_DamageValidateSystemInterface_GetDamageStateRecordMgr_Param
	{
	public:

		struct ADamageStateRecordMgr* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_DFLensFlareComponent_UpdateLensFlareParam_Param
	{
	public:

	};

	struct Function_GPGameplay_DFLensFlareComponent_TickLensFlare_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_DFLensFlareComponent_IsInScreen_C_Param
	{
	public:

		float X; // 0x00(0x04)
		float Y; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_DFReplayNetDriver_UpdateLoadingInProtocolReplay_Param
	{
	public:

		int32_t Percentage; // 0x00(0x04)
	};

	struct Function_GPGameplay_DFReplayNetDriver_OnReplayStarted_Param
	{
	public:

		struct UDemoNetDriver* ReplayDriver; // 0x00(0x08)
	};

	struct Function_GPGameplay_DrawHelperSystem_GetDrawHelper_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct ADrawHelperSystem* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_DrawHelperSystem_FlushAll_Param
	{
	public:

	};

	struct Function_GPGameplay_DrawHelperSystem_Flush_Param
	{
	public:

		int32_t Group; // 0x00(0x04)
	};

	struct Function_GPGameplay_DrawHelperSystem_DrawString_Param
	{
	public:

		struct FVector TextLocation; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FString Text; // 0x10(0x10)
		struct FColor Color; // 0x20(0x04)
		float Duration; // 0x24(0x04)
	};

	struct Function_GPGameplay_DrawHelperSystem_DrawPoint_Param
	{
	public:

		struct FVector Position; // 0x00(0x0c)
		struct FLinearColor Color; // 0x0c(0x10)
		float PointSize; // 0x1c(0x04)
		char DepthPriority; // 0x20(0x01)
		char pad_21[0x3]; // 0x21(0x03)
		float LifeTime; // 0x24(0x04)
		int32_t Group; // 0x28(0x04)
	};

	struct Function_GPGameplay_DrawHelperSystem_DrawMesh_Param
	{
	public:

		struct TArray<struct FVector> Verts; // 0x00(0x10)
		struct TArray<int32_t> Indices; // 0x10(0x10)
		struct FColor Color; // 0x20(0x04)
		char DepthPriority; // 0x24(0x01)
		char pad_25[0x3]; // 0x25(0x03)
		float LifeTime; // 0x28(0x04)
		int32_t Group; // 0x2c(0x04)
	};

	struct Function_GPGameplay_DrawHelperSystem_DrawLine_Param
	{
	public:

		struct FVector Start; // 0x00(0x0c)
		struct FVector End; // 0x0c(0x0c)
		struct FLinearColor Color; // 0x18(0x10)
		char DepthPriority; // 0x28(0x01)
		char pad_29[0x3]; // 0x29(0x03)
		float Thickness; // 0x2c(0x04)
		float LifeTime; // 0x30(0x04)
		int32_t Group; // 0x34(0x04)
	};

	struct Function_GPGameplay_DrawHelperSystem_DrawDirectionalArrow_Param
	{
	public:

		struct FMatrix ArrowToWorld; // 0x00(0x40)
		struct FColor InColor; // 0x40(0x04)
		float Length; // 0x44(0x04)
		float ArrowSize; // 0x48(0x04)
		char DepthPriority; // 0x4c(0x01)
		char pad_4D[0x3]; // 0x4d(0x03)
		int32_t Group; // 0x50(0x04)
	};

	struct Function_GPGameplay_DrawHelperSystem_DrawBox_Param
	{
	public:

		struct FBox Box; // 0x00(0x1c)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct FTransform Xform; // 0x20(0x30)
		struct FColor Color; // 0x50(0x04)
		char DepthPriority; // 0x54(0x01)
		char pad_55[0x3]; // 0x55(0x03)
		float LifeTime; // 0x58(0x04)
		int32_t Group; // 0x5c(0x04)
	};

	struct Function_GPGameplay_FlashLightCanvasActor_RestoreFlashLightCanvasContent_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_FlashLightCanvasActor_GetTextureRenderTarget2D_Param
	{
	public:

		struct UTextureRenderTarget2D* rt2D; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_FlashLightCanvasActor_CalculatePowerFlashScreenPosition_Param
	{
	public:

		struct AGPCharacter* CHARACTER; // 0x00(0x08)
		struct FVector WorldPos; // 0x08(0x0c)
		float Alpha; // 0x14(0x04)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_TransformWorldLocToScreenOvalLoc_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		char pad_8[0x8]; // 0x08(0x08)
		struct FVector4 In_TargetWorldLoc; // 0x10(0x10)
		struct UWidget* In_ParentCanvas; // 0x20(0x08)
		bool Out_bOffScreen; // 0x28(0x01)
		char pad_29[0x3]; // 0x29(0x03)
		struct FVector2D Out_FactorXY; // 0x2c(0x08)
		float SafeRatio; // 0x34(0x04)
		struct FVector2D ReturnValue; // 0x38(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_ToggleFourFingersConsole_Param
	{
	public:

		bool bOpen; // 0x00(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_ShowAILabHUD_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_SetIsRelicateDynamicActors_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		bool bEnable; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_SetHideCursorDuringCapture_Param
	{
	public:

		struct AActor* Context; // 0x00(0x08)
		bool Hide; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_SetAnimMontageSlotName_Param
	{
	public:

		struct UAnimMontage* InMontage; // 0x00(0x08)
		struct FName NewSlotName; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_SetActorInitialized_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_SendCharacterFSMGlobalEvent_Param
	{
	public:

		struct ACHARACTER* CHARACTER; // 0x00(0x08)
		struct FGameplayTag EventTag; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_RemoveComponentFromActor_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
		struct UActorComponent* Component; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_RecycleActorFromPool_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AActor* ActorInstance; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_RandomPickUniqueNumbersInRange_Param
	{
	public:

		int32_t RangeMin; // 0x00(0x04)
		int32_t RangeMax; // 0x04(0x04)
		int32_t PickSize; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct TArray<int32_t> ReturnValue; // 0x10(0x10)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_ProjectPoint_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FVector Point; // 0x08(0x0c)
		struct FVector NavPoint; // 0x14(0x0c)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_OnAllLevelLoaded_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_NotifyServerLevelVisible_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FName LevelName; // 0x08(0x08)
		bool bVisible; // 0x10(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_NewObjectByClass_Param
	{
	public:

		struct UObject* ObjectOwner; // 0x00(0x08)
		struct UClass* objectClass; // 0x08(0x08)
		struct UObject* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_LineTestDeformableActor_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FVector ZeroBasedLineStart; // 0x08(0x0c)
		struct FVector ZeroBasedLineEnd; // 0x14(0x0c)
		float HitDistance; // 0x20(0x04)
		bool ReturnValue; // 0x24(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsValidPlayerUIN_Param
	{
	public:

		struct FGPPlayerUIN Uin; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsValidGEHandle_Param
	{
	public:

		struct FActiveGameplayEffectHandle Handle; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsUnderFPP_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsStandalone_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsServer_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool bIncludeStandalone; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsReplayRecording_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsReplayPlaying_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsRegionOverseas_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsRegionCN_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsOwnByLocalPlayer_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsLocalPlayerFPPMode_Param
	{
	public:

		struct ACHARACTER* Char; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsLocalPlayer_Param
	{
	public:

		struct ACHARACTER* Char; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsGameEnd_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsEditor_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsDefaultUnderFPP_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsClient_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool bIncludeStandalone; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsBuildRegionGlobal_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsBuildRegionGA_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsBuildRegionCN_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_IsAbilityActive_Param
	{
	public:

		struct UGameplayAbility* InAbility; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_InvalidateGEHandle_Param
	{
	public:

		struct FActiveGameplayEffectHandle Handle; // 0x00(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_HasLocalPlayer_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_HasDSAgent_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GPPrintString_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FString inString; // 0x08(0x10)
		bool bPrintToScreen; // 0x18(0x01)
		bool bPrintToLog; // 0x19(0x01)
		char pad_1A[0x2]; // 0x1a(0x02)
		struct FLinearColor TextColor; // 0x1c(0x10)
		float Duration; // 0x2c(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GPDrawDebugSphere_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Center; // 0x08(0x0c)
		float radius; // 0x14(0x04)
		int32_t Segments; // 0x18(0x04)
		struct FLinearColor LineColor; // 0x1c(0x10)
		float Duration; // 0x2c(0x04)
		float Thickness; // 0x30(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GPDrawDebugPoint_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Position; // 0x08(0x0c)
		float size; // 0x14(0x04)
		struct FLinearColor PointColor; // 0x18(0x10)
		float Duration; // 0x28(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GPDrawDebugLine_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector LineStart; // 0x08(0x0c)
		struct FVector LineEnd; // 0x14(0x0c)
		struct FLinearColor LineColor; // 0x20(0x10)
		float Duration; // 0x30(0x04)
		float Thickness; // 0x34(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GPDrawDebugCylinder_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		float radius; // 0x20(0x04)
		int32_t Segments; // 0x24(0x04)
		struct FLinearColor LineColor; // 0x28(0x10)
		float Duration; // 0x38(0x04)
		float Thickness; // 0x3c(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GPDrawDebugCircle_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Center; // 0x08(0x0c)
		float radius; // 0x14(0x04)
		int32_t NumSegments; // 0x18(0x04)
		struct FLinearColor LineColor; // 0x1c(0x10)
		float Duration; // 0x2c(0x04)
		float Thickness; // 0x30(0x04)
		struct FVector YAxis; // 0x34(0x0c)
		struct FVector ZAxis; // 0x40(0x0c)
		bool bDrawAxis; // 0x4c(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GPDrawDebugBox_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Center; // 0x08(0x0c)
		struct FVector Extent; // 0x14(0x0c)
		struct FLinearColor LineColor; // 0x20(0x10)
		struct FRotator Rotation; // 0x30(0x0c)
		float Duration; // 0x3c(0x04)
		float Thickness; // 0x40(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GPDrawDebugArrow_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector LineStart; // 0x08(0x0c)
		struct FVector LineEnd; // 0x14(0x0c)
		float ArrowSize; // 0x20(0x04)
		struct FLinearColor LineColor; // 0x24(0x10)
		float Duration; // 0x34(0x04)
		float Thickness; // 0x38(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GotoMap_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FString URL; // 0x08(0x10)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetUseMouseForTouch_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetUinByPC_Param
	{
	public:

		struct AGPPlayerController* GPPc; // 0x00(0x08)
		struct FGPPlayerUIN ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetUinByChar_Param
	{
	public:

		struct AGPCharacter* GPCh; // 0x00(0x08)
		struct FGPPlayerUIN ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetUin_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FGPPlayerUIN ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetTotalPlayerCount_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetTotalAlivePlayerCount_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetServerTimeSeconds_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetPlayerStateByUin_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FGPPlayerUIN Uin; // 0x08(0x08)
		struct AGPPlayerState* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetPlayerPcByUin_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FGPPlayerUIN Uin; // 0x08(0x08)
		struct AGPPlayerController* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetPlayerControllerByUin_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FGPPlayerUIN Uin; // 0x08(0x08)
		struct AGPPlayerController* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetPlayerController_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct APlayerController* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetPlayerChByUin_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FGPPlayerUIN Uin; // 0x08(0x08)
		struct AGPCharacter* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetNow_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetNearestAlivedPlayerCh_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector OrginLoc; // 0x08(0x0c)
		char pad_14[0x4]; // 0x14(0x04)
		struct AGPCharacter* ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetNavPathLength_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FVector StartPos; // 0x08(0x0c)
		struct FVector EndPos; // 0x14(0x0c)
		float PathLen; // 0x20(0x04)
		bool ReturnValue; // 0x24(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetMeshScreenRatio_Param
	{
	public:

		struct USkeletalMeshComponent* MeshComp; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetMarkingCharacterVoiceConfigByMarkingChatType_Param
	{
	public:

		int32_t InMarkingChatType; // 0x00(0x04)
		bool bIsRespond; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetLowestDirectionAroundActor_Param
	{
	public:

		struct AActor* TargetActor; // 0x00(0x08)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x08(0x10)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x18(0x10)
		float DirOffset; // 0x28(0x04)
		float TraceHeight; // 0x2c(0x04)
		bool bShowDebug; // 0x30(0x01)
		char pad_31[0x3]; // 0x31(0x03)
		struct FVector ReturnValue; // 0x34(0x0c)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetLocalUin_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FGPPlayerUIN ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetLocalSHCharacter_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AGPSafeHouseCharacter* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetLocalGPPlayerState_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AGPPlayerState* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetLocalGPPlayerController_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AGPPlayerController* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetLocalGPCharacter_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AGPCharacter* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetLocalFocusCharacterPlayerState_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AGPPlayerState* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetLocalFocusCharacterBase_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct ACharacterBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetLocalCharacterCameraLocationAndFordward_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Location; // 0x08(0x0c)
		struct FVector Forward; // 0x14(0x0c)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetLocalActor_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AActor* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetLocal1PCharacterCameraLocationAndFordward_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Location; // 0x08(0x0c)
		struct FVector Forward; // 0x14(0x0c)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetGPPlayerState_Param
	{
	public:

		struct AGPPlayerController* GPPc; // 0x00(0x08)
		struct AGPPlayerState* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetGPGameState_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AGPGameState* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetGPGameDifficulty_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FName ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetGPController_Param
	{
	public:

		struct AGPCharacter* GPCh; // 0x00(0x08)
		struct AGPPlayerController* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetGPCharacter_Param
	{
	public:

		struct AGPPlayerController* GPPc; // 0x00(0x08)
		struct AGPCharacter* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetDistanceFormLocalCharacter_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetDefaultSingleton_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClass* Class; // 0x08(0x08)
		bool bCreate; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UClass* RegClass; // 0x18(0x08)
		struct UObject* ReturnValue; // 0x20(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetDateNowBySeconds_Param
	{
	public:

		int64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetDateNowByMilliseconds_Param
	{
	public:

		int64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetCurrentWeaponIsZooming_Param
	{
	public:

		struct AGPCharacterBase* Char; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetComponentByName_Param
	{
	public:

		struct AActor* OwnerActor; // 0x00(0x08)
		struct UClass* ComponentClass; // 0x08(0x08)
		struct FString FindName; // 0x10(0x10)
		struct UActorComponent* ReturnValue; // 0x20(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetCharacterCurrentBasePoseByFracture_Param
	{
	public:

		struct ACHARACTER* Char; // 0x00(0x08)
		enum class EChracterPoseType ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetCharacterCurrentBasePose_Param
	{
	public:

		struct ACHARACTER* Char; // 0x00(0x08)
		bool UseArmFracture; // 0x08(0x01)
		enum class EChracterPoseType ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetCharacterBase_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct ACharacterBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetCharacterAnimBasePose_Param
	{
	public:

		struct ACHARACTER* Char; // 0x00(0x08)
		enum class EChracterPoseType ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetCDO_Param
	{
	public:

		struct UClass* Class; // 0x00(0x08)
		struct UObject* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetCampPlayerCount_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		int32_t Camp; // 0x08(0x04)
		int32_t ReturnValue; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetBoneWorldLocation_Param
	{
	public:

		struct USkinnedMeshComponent* MeshComp; // 0x00(0x08)
		struct FName BoneName; // 0x08(0x08)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetASC_Param
	{
	public:

		struct UObject* Target; // 0x00(0x08)
		struct UAbilitySystemComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetAnimMontageSlotName_Param
	{
	public:

		struct UAnimMontage* InMontage; // 0x00(0x08)
		struct FName ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetAnimItemTypeIsFPP_Param
	{
	public:

		enum class EWeaponAnimItemType InItemType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetAnimItemType_Param
	{
	public:

		enum class EChracterPoseType InPoseType; // 0x00(0x01)
		bool bIsFPP; // 0x01(0x01)
		enum class EWeaponAnimItemType ReturnValue; // 0x02(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetAnimationCurve_Param
	{
	public:

		struct UAnimSequence* inAnimSeq; // 0x00(0x08)
		struct FName CurveName; // 0x08(0x08)
		struct TArray<float> Times; // 0x10(0x10)
		struct TArray<float> Values; // 0x20(0x10)
		bool ReturnValue; // 0x30(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetAnAlivedPlayerCh_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AGPCharacter* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetAimTarget_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float Distance; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct AActor* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GetAimNearestTarget_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float Distance; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct AActor* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_GenerateBrunchOfPoint_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		int32_t Num; // 0x08(0x04)
		struct FVector postion; // 0x0c(0x0c)
		struct TArray<struct FVector> ReturnValue; // 0x18(0x10)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_FStringToInt64_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FString str; // 0x08(0x10)
		int64_t ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_FindPlayerComponent_Param
	{
	public:

		struct UClass* Class; // 0x00(0x08)
		struct UObject* WorldContextObject; // 0x08(0x08)
		struct AGPPlayerController* PC; // 0x10(0x08)
		struct UActorComponent* ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_FindDeltaAngleDegreesAndDirection_Param
	{
	public:

		float A1; // 0x00(0x04)
		float A2; // 0x04(0x04)
		float AngleOut; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_FindComponentByClass_Param
	{
	public:

		struct AActor* OwnerActor; // 0x00(0x08)
		struct UClass* CompClass; // 0x08(0x08)
		struct UActorComponent* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_FindCapsureInfoFromPhysicsBody_Param
	{
	public:

		struct USkeletalMeshComponent* SkeletalMesh; // 0x00(0x08)
		struct FName TargetBone; // 0x08(0x08)
		bool ret; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FVector Center; // 0x14(0x0c)
		float HalfHeight; // 0x20(0x04)
		float radius; // 0x24(0x04)
		struct FRotator Rotation; // 0x28(0x0c)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_FindAllCollisionHighPoint_Param
	{
	public:

		struct ACHARACTER* Target; // 0x00(0x08)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_FindAimingTarget_Param
	{
	public:

		struct ACHARACTER* CharacterDoingAiming; // 0x00(0x08)
		float MaxDectDistance; // 0x08(0x04)
		struct FHitResult ReturnValue; // 0x0c(0x88)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_FindActorDataComponent_Param
	{
	public:

		struct UClass* Class; // 0x00(0x08)
		struct AActor* Target; // 0x08(0x08)
		struct UActorComponent* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_DoesCurveExist_Param
	{
	public:

		struct UAnimSequence* inAnimSeq; // 0x00(0x08)
		struct FName CurveName; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_DFMOpenLevelSimple_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FName LevelName; // 0x08(0x08)
		bool bAbsolute; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct FString Options; // 0x18(0x10)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_DFMOpenLevel_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FName LevelName; // 0x08(0x08)
		bool bAbsolute; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct FString Options; // 0x18(0x10)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_DebugPlayerController_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_CreateMaterialInstanceDynamic_Param
	{
	public:

		struct UMaterialInterface* ParentMaterial; // 0x00(0x08)
		struct UObject* InOuter; // 0x08(0x08)
		struct UMaterialInstanceDynamic* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_CheckTargetLocationIsInViewport2_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FVector InTargetLocation; // 0x08(0x0c)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_CheckTargetLocationIsInViewport_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FVector InTargetLocation; // 0x08(0x0c)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_CheckIfLocInCircle_Param
	{
	public:

		struct UWidget* CheckWidget; // 0x00(0x08)
		struct FVector2D Loc; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_CheckIfInCircle_Param
	{
	public:

		struct UWidget* CheckWidget; // 0x00(0x08)
		struct FGeometry MyGeometry; // 0x08(0x44)
		char pad_4C[0x4]; // 0x4c(0x04)
		struct FPointerEvent InTouchEvent; // 0x50(0x70)
		bool ReturnValue; // 0xc0(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_CalculateHorAngle_Param
	{
	public:

		struct FVector VectorA; // 0x00(0x0c)
		struct FVector VectorB; // 0x0c(0x0c)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_CalculateAngle_Param
	{
	public:

		struct FVector VectorA; // 0x00(0x0c)
		struct FVector VectorB; // 0x0c(0x0c)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_CalcOffsetLoc_Param
	{
	public:

		float StartLoc; // 0x00(0x04)
		float InterSpace; // 0x04(0x04)
		int32_t Count; // 0x08(0x04)
		int32_t TotalCount; // 0x0c(0x04)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_CalcObjectsDiff_Param
	{
	public:

		struct TArray<struct UObject*> NewList; // 0x00(0x10)
		struct TArray<struct UObject*> OldList; // 0x10(0x10)
		struct TArray<struct UObject*> Additions; // 0x20(0x10)
		struct TArray<struct UObject*> Removes; // 0x30(0x10)
		bool ReturnValue; // 0x40(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_CalcDirectionAndAngle_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		struct FVector InVector; // 0x08(0x0c)
		float OutAngle; // 0x14(0x04)
		enum class EDirection ReturnValue; // 0x18(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_CalcDirection_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		struct FVector InVector; // 0x08(0x0c)
		enum class EDirection ReturnValue; // 0x14(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_ApplyNewMainWeaponScale_Param
	{
	public:

		struct AGPCharacterBase* WeaponOwner; // 0x00(0x08)
		float NewScale; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_AddComponentToActorV2_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
		struct UClass* CompClass; // 0x08(0x08)
		struct USceneComponent* AttachTo; // 0x10(0x08)
		struct UActorComponent* ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_AddComponentToActor_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
		struct UClass* CompClass; // 0x08(0x08)
		struct USceneComponent* AttachTo; // 0x10(0x08)
		bool bUseExsist; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct UActorComponent* ReturnValue; // 0x20(0x08)
	};

	struct Function_GPGameplay_GameplayBlueprintHelper_AcquireActorFromPool_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UClass* ActorClass; // 0x08(0x08)
		struct FTransform SpawnTransform; // 0x10(0x30)
		enum class ESpawnActorCollisionHandlingMethod CollisionHandlingOverride; // 0x40(0x01)
		char pad_41[0x7]; // 0x41(0x07)
		struct AActor* Owner; // 0x48(0x08)
		struct AActor* ReturnValue; // 0x50(0x08)
	};

	struct Function_GPGameplay_GameRuleSubsystemCollection_OnWorldSettingsReady_Param
	{
	public:

		struct AGPWorldSettings* InGPWorldSettings; // 0x00(0x08)
	};

	struct Function_GPGameplay_GameRuleSubsystemCollection_OnGameRuleDeactive_Param
	{
	public:

		enum class EGameRuleType InGameRule; // 0x00(0x01)
	};

	struct Function_GPGameplay_GameRuleSubsystemCollection_OnGameRuleActive_Param
	{
	public:

		enum class EGameRuleType InGameRule; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAbilityDetectorEffectSubsystem_Get_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct UGPAbilityDetectorEffectSubsystem* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPAbilityGameStateComponent_TryGetAbilityEntityTemplate_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct AGPAbilityLogicTemplate* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPAbilityGameStateComponent_GetSystemObj_Param
	{
	public:

		enum class EDFMAbilityLogicType Type; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct UObject* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPAbilityGameStateComponent_GetRowConfigFromDataTable_Param
	{
	public:

		int32_t ID; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillDataRow ReturnValue; // 0x08(0x588)
	};

	struct Function_GPGameplay_GPAbilityGameStateComponent_GetConflictRowConfigFromDataTable_Param
	{
	public:

		int32_t ID; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillConflictRow ReturnValue; // 0x08(0x70)
	};

	struct Function_GPGameplay_GPAbilityInstance_GetSkillUIState_Param
	{
	public:

		enum class ESkillUIState ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAbilityInstance_GetSkillUIInfo_Param
	{
	public:

		struct FSkillUIInfo ReturnValue; // 0x00(0x78)
	};

	struct Function_GPGameplay_GPAbilityInstance_GetActivated_Param
	{
	public:

		enum class ESkillItemUsingType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAbilityLogicTemplate_RemoveFromCharacter_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityLogicTemplate_OnCharacterReborn_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityLogicTemplate_BP_GiveSameSkill_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityLogicTemplate_AutoPlay_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilitySharedEffectComponent_OnHealthChange_Param
	{
	public:

		struct AActor* Owner; // 0x00(0x08)
		int32_t CurrentValue; // 0x08(0x04)
		int32_t MaxValue; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPAbilityUtil_ReleasePreLoadUI_Param
	{
	public:

		struct UObject* World; // 0x00(0x08)
		struct FName PanelConfigName; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPAbilityUtil_PushDataFlow_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
		struct FSkillDataFlowRecordItem DataFlowItem; // 0x08(0x28)
		bool bUseTimingWheel; // 0x30(0x01)
	};

	struct Function_GPGameplay_GPAbilityUtil_PreLoadUI_Param
	{
	public:

		struct UObject* World; // 0x00(0x08)
		struct FName PanelConfigName; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPAbilityUtil_IsMPMode_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPAbilityUtil_AbilityShowUI_Param
	{
	public:

		struct UObject* World; // 0x00(0x08)
		struct FName PanelConfigName; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPAbilityUtil_AbilityHideUI_Param
	{
	public:

		struct UObject* World; // 0x00(0x08)
		struct FName PanelConfigName; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPActionSequenceComponent_OnOwnerCharacterReborn_Param
	{
	public:

	};

	struct Function_GPGameplay_GPActionSequenceComponent_OnOwnerCharacterDied_Param
	{
	public:

		struct AGPCharacterBase* CHARACTER; // 0x00(0x08)
		struct AController* Killer; // 0x08(0x08)
		struct UDamageType* DamageType; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPAdvancedTickingComponent_OnOwnerCharacterReborn_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAdvancedTickingComponent_OnOwnerCharacterDied_Param
	{
	public:

		struct AGPCharacterBase* CHARACTER; // 0x00(0x08)
		struct AController* Killer; // 0x08(0x08)
		struct UDamageType* DamageType; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPAIAnimProxyComponent_ForceLocomotionAnim_Param
	{
	public:

		struct UAnimSequence* Anim; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPAIDataComponentAnim_OnOwnerCharacterReborn_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAIDataComponentAnim_OnOwnerCharacterDied_Param
	{
	public:

		struct AGPCharacterBase* CHARACTER; // 0x00(0x08)
		struct AController* Killer; // 0x08(0x08)
		struct UDamageType* DamageType; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPAIDataComponentAnim_GetDeathAnimByPart_Param
	{
	public:

		enum class ECharacterPart Part; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float SourceYaw; // 0x04(0x04)
		struct FName ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPAlarmTower_ServerSetDestruct_Param
	{
	public:

		bool Destruct; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAlarmTower_ServerDoAlarm_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAlarmTower_ServerCancelAlarm_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAlarmTower_RemoveEnemy_Param
	{
	public:

		struct AGPCharacter* CHARACTER; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPAlarmTower_IsAlarming_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAlarmTower_DoAlarm_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAlarmTower_DestructAlarm_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAlarmTower_ChangeEffect_Param
	{
	public:

		struct FLinearColor Color; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAlarmTower_CancelAlarm_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAlarmTower_BP_IsDestruct_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAlarmTower_AddEnemy_Param
	{
	public:

		struct AGPCharacter* CHARACTER; // 0x00(0x08)
	};

	struct Function_GPGameplay_CharacterAnimDataObjectSingleton_OnAnimLoadCompleted_Param
	{
	public:

		struct FSoftObjectPath AssetRef; // 0x00(0x18)
	};

	struct Function_GPGameplay_CharacterAnimDataObjectSingleton_GetTacticalActionAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimTacticalActionType TacticalActionType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_CharacterAnimDataObjectSingleton_GetRaiseWatchAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimRaiseWatchType RaiseWatchType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_CharacterAnimDataObjectSingleton_GetParachuteAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimParachuteType ParachuteType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_CharacterAnimDataObjectSingleton_GetMarkingAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimMarkingType MarkingType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_CharacterAnimDataObjectSingleton_GetKnockbackyAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimKnockbackType KnockbackType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_CharacterAnimDataObjectSingleton_GetFirefightingAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimFirefightingType FirefightingType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_CharacterAnimDataObjectSingleton_GetCustomAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_CharacterAnimDataObjectSingleton_GetClimbLadderAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimClimbLadderType ClimbLadderType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_CharacterAnimDataObjectSingleton_GetCarryBodyAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimCarryBodyType CarryBodyAnimType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_CharacterAnimDataObjectSingleton_GetBunkerAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimBunkerType BunkerTyep; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_CharacterAnimDataObjectSingleton_GetApplySprayAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimApplySprayType ApplySprayType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPAnimFragmentComponent_StickOnGround_Param
	{
	public:

		float Delay; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAnimFragmentComponent_SetAcceleration_Param
	{
	public:

		struct FVector Acceleration; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPAnimTrigger_PlayAnim_Param
	{
	public:

		struct AActor* AnimActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPAnimTrigger_OnTriggerDelayTimer_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAttributeSetDamageFigure_OnRep_WeaponVendorCrit_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAttributeSetDamageFigure_OnRep_WeaponCrit_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAttributeSetDamageFigure_OnRep_WeaknessRate_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAttributeSetDamageFigure_OnRep_TargetResistance_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAttributeSetDamageFigure_OnRep_TargetReduction_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAttributeSetDamageFigure_OnRep_TargetMultiple_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAttributeSetDamageFigure_OnRep_SourceMultiple_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAttributeSetDamageFigure_OnRep_SourceAddition_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAttributeSetDamageFigure_OnRep_EquipAddition_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAttributeSetDamageFigure_OnRep_DamageDefence_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAttributeSetDamageFigure_OnRep_DamageAddition_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAttributeSetDamageFigure_OnRep_CritAddition_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAudioControllerComponent_NotifyCharacterPlayFootstepWithAnim_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPAudioControllerComponent_GetWaterRTPCName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPAudioControllerComponent_GetLandedSoundType_Param
	{
	public:

		float FallHeight; // 0x00(0x04)
		enum class EGPAudioFootSoundType ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPAudioControllerComponent_GetFakeFootstepStatus_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		enum class EFakeFootstepStatus ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPAudioControllerComponent_ClientPlayLandedFootstep_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		float FallHeight; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPAudioControllerComponent_ClientPlayJumpFootstep_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPAudioControllerComponent_ClampWaterRTPCValue_Param
	{
	public:

		float InDepth; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPAudioControllerComponent_CheckUseFakeFootstep_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPAudioControllerComponent_CheckSatisfiedFootstepInterval_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		float CurrentTime; // 0x08(0x04)
		float TimeScalar; // 0x0c(0x04)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPAudioSubtitleSystem_ServerPlaySubtitle_Param
	{
	public:

		struct FText Subtilte; // 0x00(0x18)
		struct UGPAudioEventAsset* AudioEvent; // 0x18(0x08)
		enum class ESubtitlePriorityType PriorityType; // 0x20(0x01)
		enum class ESubtitleHudType HUDType; // 0x21(0x01)
		char pad_22[0x6]; // 0x22(0x06)
		struct AActor* SpeakerActor; // 0x28(0x08)
		float SubtitleDuration; // 0x30(0x04)
	};

	struct Function_GPGameplay_GPAudioSubtitleSystem_ServerAddAudioSubtitle_Param
	{
	public:

		struct FName SubtitleKey; // 0x00(0x08)
		enum class ESubtitlePriorityType PriorityType; // 0x08(0x01)
		enum class ESubtitleHudType HUDType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct AActor* SpeakerActor; // 0x10(0x08)
		float SubtitleDuration; // 0x18(0x04)
	};

	struct Function_GPGameplay_GPAudioSubtitleSystem_GetPendingQueueTop_Param
	{
	public:

		struct FAudioSubtitleInfo ReturnValue; // 0x00(0x38)
	};

	struct Function_GPGameplay_GPAudioSubtitleSystem_GetPendingQueueLength_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAudioSubtitleSystem_GetAudioSubtitleSystem_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AGPAudioSubtitleSystem* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPAudioSubtitleSystem_ClientPlaySubtitle_Param
	{
	public:

		struct FText Subtilte; // 0x00(0x18)
		struct UGPAudioEventAsset* AudioEvent; // 0x18(0x08)
		enum class ESubtitlePriorityType PriorityType; // 0x20(0x01)
		enum class ESubtitleHudType HUDType; // 0x21(0x01)
		char pad_22[0x6]; // 0x22(0x06)
		struct AActor* SpeakerActor; // 0x28(0x08)
		float SubtitleDuration; // 0x30(0x04)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_UpdateSpectWeaponInfoFlag_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
		bool bReplicate; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_UpdateSpectWeaponInfo_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
		struct AActor* NewViewTarget; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_UpdateSpectMemberInfo_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
		struct AActor* NewViewTarget; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_UnRegisterSpectatingRelevantActor_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_TryLeaveLiveSpectateMode_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_TryLeaveAISpectateMode_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_TryEnterLiveSpectateMode_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_TryEnterAISpectateMode_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_SpectateActor_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
		struct AActor* NewViewTarget; // 0x08(0x08)
		float BlendTime; // 0x10(0x04)
		enum class EViewTargetBlendFunction BlendFunc; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		float BlendExp; // 0x18(0x04)
		bool bLockOutgoing; // 0x1c(0x01)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_SetLocalFocusActor_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
		struct AActor* NewViewTarget; // 0x08(0x08)
		float BlendTime; // 0x10(0x04)
		enum class EViewTargetBlendFunction BlendFunc; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		float BlendExp; // 0x18(0x04)
		bool bLockOutgoing; // 0x1c(0x01)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_ResetToLocalPlayerPawn_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_RegisterSpectatingRelevantActor_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_RefreshSpectMemberInfo_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_NotifySpectatingRelevantActor_Param
	{
	public:

	};

	struct Function_GPGameplay_GPBattleFieldSystem_LiveSpectateSpectificTargetUin_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
		uint64_t TargetUin; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_LiveSpectateSpectificTargetNetGUID_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
		uint32_t TargetNetGUID; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_LiveSpectateSpectificTarget_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
		struct AActor* Target; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_LiveSpectateNext_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
		bool nextTarget; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_LiveSpectateLikeGod_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
		float TargetHeight; // 0x08(0x04)
		bool useSpectificPoint; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FVector TargetPoint; // 0x10(0x0c)
		bool ReturnValue; // 0x1c(0x01)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_LiveSpectateAINext_Param
	{
	public:

		struct AGPNetworkPlayerController* Player; // 0x00(0x08)
		bool nextTarget; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_GetCurrentLocalPlayerUin_Param
	{
	public:

		int64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_GetCurrentLocalPlayerTeamID_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_GetCurrentLocalPlayerPawn_Param
	{
	public:

		struct AGPCharacterBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_GetCurrentLocalPlayerInput_Param
	{
	public:

		struct UGPPlayerInput* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_GetCurrentLocalPlayerInnerTeamIndex_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_GetCurrentLocalPlayerController_Param
	{
	public:

		struct AGPNetworkPlayerController* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_GetCurrentLocalFocusPlayerPawn_Param
	{
	public:

		struct AGPCharacterBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_GetCurrentLocalFocusGPCharacter_Param
	{
	public:

		struct AGPCharacterBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_GetCurrentLocalFocusActor_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_Get_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UGPBattleFieldSystem* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_FilterLocalFocusActorFromViewTarget_Param
	{
	public:

		struct AGPNetworkPlayerController* InPlayerController; // 0x00(0x08)
		struct AGPCharacterBase* InPlayerPawn; // 0x08(0x08)
		struct AActor* InViewTarget; // 0x10(0x08)
		struct AActor* ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_FilterLocalFocusActorFromPlayer_Param
	{
	public:

		struct AGPNetworkPlayerController* InPlayerController; // 0x00(0x08)
		struct AGPCharacterBase* InPlayerPawn; // 0x08(0x08)
		struct AActor* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_ClientTestSpectateTargetActor_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPBattleFieldSystem_ClientTestResetSpectate_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCampInfoUtil_ServerSetCampTypeAndTeamID_Param
	{
	public:

		struct AActor* Source; // 0x00(0x08)
		enum class ECampType CampType; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		int32_t TeamId; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPCampInfoUtil_IsTeammate_Param
	{
	public:

		struct AActor* Source; // 0x00(0x08)
		struct AActor* Target; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPCampInfoUtil_IsNeutralCamp_Param
	{
	public:

		struct AActor* Source; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCampInfoUtil_GetTeamInfoByTeamId_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		int32_t TeamId; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FTeamInfo InTeamInfo; // 0x10(0x150)
		bool ReturnValue; // 0x160(0x01)
	};

	struct Function_GPGameplay_GPCampInfoUtil_GetTeamInfo_Param
	{
	public:

		struct AActor* Source; // 0x00(0x08)
		struct FTeamInfo InTeamInfo; // 0x08(0x150)
		bool ReturnValue; // 0x158(0x01)
	};

	struct Function_GPGameplay_GPCampInfoUtil_GetTeamID_Param
	{
	public:

		struct AActor* Source; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPCampInfoUtil_GetCampType_Param
	{
	public:

		struct AActor* Source; // 0x00(0x08)
		enum class ECampType ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCampInfoUtil_GetCampInfo_Param
	{
	public:

		struct AActor* Source; // 0x00(0x08)
		struct FCampInfo InCampInfo; // 0x08(0x18)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_GPGameplay_GPCampInfoUtil_GatherCampMembers_Param
	{
	public:

		struct AActor* Source; // 0x00(0x08)
		struct TArray<struct FTeamMemberInfo> members; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPCharacterAudioConfig_GetExpertVoiceDataTable_Param
	{
	public:

		int64_t ExpertId; // 0x00(0x08)
		struct UDataTable* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPCharacterAudioConfig_Get_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UGPCharacterAudioConfig* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_WantRandomCharacterSpeak_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FString AudioTypeString; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_WantCharacterSpeak_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		struct FString AudioTypeString; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_UpdateNextTriggerAICrackTime_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_StopCharacterSpeak_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		struct FString AudioTypeString; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_SetLastFootstepPlayTime_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		float InTime; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_ServerWantCharacterSpeak_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		struct FString AudioTypeString; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_ServerStopCharacterSpeak_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		struct FString AudioTypeString; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_ServerPlayLandedFootstep_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		float FallHeight; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_ServerPlayJumpFootstep_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_ScaleWeaponFireAttenuationScale_Param
	{
	public:

		struct AGPCharacter* TargetCharacter; // 0x00(0x08)
		float AttenuationScalar; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_ScaleCrouchFootsteps_Param
	{
	public:

		struct AGPCharacter* TargetCharacter; // 0x00(0x08)
		bool bScale; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		float AttenuationScalar; // 0x0c(0x04)
		float VolumeScalar; // 0x10(0x04)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_RequestOutdoorObstruction_Param
	{
	public:

		struct AGPCharacterBase* InCharacter; // 0x00(0x08)
		enum class EGPAudioBlueprintType InReason; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		float LastTime; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_RequestFakeFootstep_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		enum class EFakeFootstepReason InReason; // 0x08(0x01)
		bool bRequest; // 0x09(0x01)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_RegisterCharacterVOService_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_PlayFPPFootStep_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		bool bIsLeftFootstep; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_PlayFootstep_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		enum class EGPAudioFootSoundType AudioType; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UPhysicalMaterial* PhysMat; // 0x10(0x08)
		struct UPhysicalMaterialAudioDataAsset* BindConfig; // 0x18(0x08)
		bool bForceUseAudioType; // 0x20(0x01)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_PlayCharacterTurningAudio_Param
	{
	public:

		struct AGPCharacterBase* InCharacter; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_PlayAutonomousLandedFootstep_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		float FallHeight; // 0x08(0x04)
		bool bIsFallHigh; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_PlayAutonomousJumpFootstep_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		bool bIsJumpHigh; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_NotifySoundVisualizationWithNoRealActor_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		enum class ESoundVisualizationType EventType; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FVector SoundLocation; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_NotifySoundVisualizationWithAudioTypeName_Param
	{
	public:

		struct AActor* SourceActor; // 0x00(0x08)
		struct AActor* ActorToBlame; // 0x08(0x08)
		struct FName AudioTypeName; // 0x10(0x08)
		struct FVector SoundLocation; // 0x18(0x0c)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_NotifySoundVisualizationWithAudioTypeEnum_Param
	{
	public:

		struct AActor* SourceActor; // 0x00(0x08)
		struct AActor* ActorToBlame; // 0x08(0x08)
		enum class EGPAudioBlueprintType EType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FVector SoundLocation; // 0x14(0x0c)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_NotifySoundVisualization_Param
	{
	public:

		struct AActor* SourceActor; // 0x00(0x08)
		struct AActor* ActorToBlame; // 0x08(0x08)
		enum class ESoundVisualizationType EventType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FVector SoundLocation; // 0x14(0x0c)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_NotifyFootStepSoundVisualization_Param
	{
	public:

		struct AActor* SourceActor; // 0x00(0x08)
		struct AActor* ActorToBlame; // 0x08(0x08)
		enum class EGPAudioFootSoundType FootSoundType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FVector SoundLocation; // 0x14(0x0c)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_NotifyCharacterPlayFootstepWithAnim_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_NotifyCharacterAnimLODChanged_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		int32_t NewLOD; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_LocalCharacterStateAudioChanged_Param
	{
	public:

		struct AGPCharacter* LocalCharacter; // 0x00(0x08)
		enum class EStateAudioEventType StateAudioType; // 0x08(0x01)
		bool bEnterState; // 0x09(0x01)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_GetUseSoftCoverBushAudio_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_GetRandomFlybyTriggerCD_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_GetLastFootstepPlayTime_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_GetLandedSoundType_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		float FallHeight; // 0x08(0x04)
		enum class EGPAudioFootSoundType ReturnValue; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_GetIsInWater_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_GetFakeFootstepStatus_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		enum class EFakeFootstepStatus ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_GetEnableFootstepLog_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_GetCharacterVelocity_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_GetCharacterLocation_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_DeregisterCharacterVOService_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_CheckUseFakeFootstep_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_CheckSatisfiedFootstepIntervalWithState_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		float CurrentTime; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_CheckSatisfiedFootstepInterval_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		float CurrentTime; // 0x08(0x04)
		float TimeScalar; // 0x0c(0x04)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPCharacterAudioProxy_CheckCurrentTimeCanTriggerAICrack_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCharacterBubbleComponent_OnRep_StateChange_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBubbleComponent_OnRep_DeadStateChange_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBubbleComponent_OnHealthChange_Param
	{
	public:

		struct AActor* Owner; // 0x00(0x08)
		int32_t CurrentValue; // 0x08(0x04)
		int32_t MaxValue; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPCharacterBubbleComponent_OnCharacterAmmoCountChange_Param
	{
	public:

		struct AWeaponBase* Weapon; // 0x00(0x08)
		float WeaponAmmoCount; // 0x08(0x04)
		float CarryWeaponAmmoCount; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPCharacterDetectEffectComponent_SupportPackSim_Param
	{
	public:

		struct AActor* From; // 0x00(0x08)
		struct AActor* To; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPCharacterDetectEffectComponent_SetDetectMarkerEnable_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterDetectEffectComponent_SetDetectLstEnable_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterDetectEffectComponent_OnRep_bShowMarker_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterDetectEffectComponent_OnRep_bInMarkerLst_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterDetectEffectComponent_ClientSetDetectLstEnable_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterSkillInterface_SetSkillControlActor_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterVehicleInterface_StartBoom_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterVehicleInterface_SetStingerMissileCanLock_Param
	{
	public:

		bool can; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterVehicleInterface_SetAbilityOffControlledVehicle_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterVehicleInterface_SetAbilityControlledVehicle_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterVehicleInterface_RetriveItems_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterVehicleInterface_IsVehicleOperate_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterVehicleInterface_IsVehicleDestroy_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterVehicleInterface_IsOperateControlledVehicle_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterVehicleInterface_IsAbilityControlledVehicle_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterVehicleInterface_GetStingerMissileCanLock_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterVehicleInterface_GetOffAbilityVehicle_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterVehicleInterface_GetCharacterPlayerId_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterVehicleInterface_GetAbilityOffControlledVehicle_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterVehicleInterface_GetAbilityControlledVehicle_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterVehicleInterface_CureVehicle_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterVoiceComponent_WantCharacterSpeakWithName_Param
	{
	public:

		struct FString AudioTypeString; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPCharacterVoiceComponent_WantCharacterSpeak_Param
	{
	public:

		enum class ECharacterAudioType AudioType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterVoiceComponent_StopCharacterSpeakWithName_Param
	{
	public:

		struct FString AudioTypeString; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPCharacterVoiceComponent_StopCharacterSpeak_Param
	{
	public:

		enum class ECharacterAudioType AudioType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterVoiceComponent_OnHeroIdChanged_Param
	{
	public:

		uint64_t HeroID; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterVoiceComponent_OnAvatarIdChanged_Param
	{
	public:

		uint64_t AvatarID; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterVoiceComponent_CharacterStateAudioChanged_Param
	{
	public:

		enum class EStateAudioEventType StateAudioType; // 0x00(0x01)
		bool bEnterState; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCheatManager_ShowSceneDebug_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCheatManager_RelativeTeleport_Param
	{
	public:

		struct FVector Disp; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPCheatManager_PlayTwoHandedGesture_Param
	{
	public:

		struct FName ResId; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCheatManager_PlayOneHandedGesture_Param
	{
	public:

		struct FName ResId; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCheatManager_PlayCharacterVoice_Param
	{
	public:

		struct FName ResId; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCheatManager_NextDebugTargetAI_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCheatManager_GiveWeaponByRec_Param
	{
	public:

		int64_t RecID; // 0x00(0x08)
		int32_t EquipPosition; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPCheatManager_GiveWeapon_Param
	{
	public:

		int64_t PresetId; // 0x00(0x08)
		int32_t EquipPosition; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPCheatManager_EnableDamageValidation_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
		bool bDebug; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCheatManager_ApplySpray_Param
	{
	public:

		struct FName ResId; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPClientSeamlessTravel_WaitStreamingComplete_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPClientSeamlessTravel_SwitchToDSClientPlayerInner_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPClientSeamlessTravel_SwitchToDSClientPlayer_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPClientSeamlessTravel_OnPostLeaveGameFlow_Param
	{
	public:

		enum class EGameFlowStageType InGameFlowStage; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPClientSeamlessTravel_OnPostEnterGameFlow_Param
	{
	public:

		enum class EGameFlowStageType InGameFlowStage; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPClientSeamlessTravel_OnPostConnectDS_Param
	{
	public:

		struct UNetConnection* InNetConnection; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPClientSeamlessTravel_OnNetDriverShutdown_Param
	{
	public:

		struct UNetDriver* NetDriver; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPClientSeamlessTravel_OnDSConnected_Param
	{
	public:

		struct UNetConnection* InNetConnection; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPClientSeamlessTravel_OnActorSpawned_Param
	{
	public:

		struct AActor* NewActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPClientSeamlessTravel_OnActorChannelSpawnNewPC_Param
	{
	public:

		struct APlayerController* NewPC; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPClientSeamlessTravel_IsInSeamlessTravel_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPClientSeamlessTravel_Get_Param
	{
	public:

		struct UWorld* WordContext; // 0x00(0x08)
		struct UGPClientSeamlessTravel* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPClientSeamlessTravel_ClassAddSeamlessFlag_Param
	{
	public:

		struct UClass* InClass; // 0x00(0x08)
		enum class ESeamlessFlag InFlag; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPClientSeamlessTravel_ActorAddSeamlessFlag_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		enum class ESeamlessFlag InFlag; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPComBoardComponent_UpdateSimulatedZiplineInfo_Param
	{
	public:

		struct FGPZiplineSimulatedInfo InSimulatedInfo; // 0x00(0x40)
	};

	struct Function_GPGameplay_GPComBoardComponent_SyncZiplineInfoToClient_Param
	{
	public:

		struct FGPZiplineActorInfo InZiplineInfo; // 0x00(0xc0)
	};

	struct Function_GPGameplay_GPComBoardComponent_ServerGetOnZipline_Param
	{
	public:

		struct FGPZiplineActorInfo InZiplineInfo; // 0x00(0xc0)
	};

	struct Function_GPGameplay_GPComBoardComponent_ServerGetOffZipline_Param
	{
	public:

		enum class EEndZiplineReason EndZiplineReason; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPComBoardComponent_SendClientMovedLengthToServer_Param
	{
	public:

		float ClientMovedLength; // 0x00(0x04)
		struct FVector ServerLocation; // 0x04(0x0c)
	};

	struct Function_GPGameplay_GPComBoardComponent_ReactivateZipline_Param
	{
	public:

	};

	struct Function_GPGameplay_GPComBoardComponent_Radar_GetAllTypeActorsWithinDistance_Param
	{
	public:

		struct UClass* ActorType; // 0x00(0x08)
		float Distance; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct TArray<struct AActor*> OutActorArray; // 0x10(0x10)
	};

	struct Function_GPGameplay_GPComBoardComponent_Radar_GetAllCharactersWithinDistance_Param
	{
	public:

		float Distance; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<struct ACHARACTER*> OutCharacterArray; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPComBoardComponent_Radar_CheckIsInViewport_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		bool bInViewport; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FVector2D ViewportPosition; // 0x0c(0x08)
		bool bForceUpdate; // 0x14(0x01)
	};

	struct Function_GPGameplay_GPComBoardComponent_Radar_CheckCharacterVisibility_Param
	{
	public:

		struct ACHARACTER* InCharacter; // 0x00(0x08)
		bool bIsVisible; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct TArray<struct AActor*> IgnoreActors; // 0x10(0x10)
		bool bForceUpdate; // 0x20(0x01)
	};

	struct Function_GPGameplay_GPComBoardComponent_Radar_CheckActorVisibility_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		bool bIsVisible; // 0x08(0x01)
		bool bForceUpdate; // 0x09(0x01)
	};

	struct Function_GPGameplay_GPComBoardComponent_ProcessZiplineExit_Param
	{
	public:

	};

	struct Function_GPGameplay_GPComBoardComponent_ProcessZiplineCooldown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPComBoardComponent_OnRep_TouchBushChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_GPComBoardComponent_OnRep_SoftCoverStatusChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_GPComBoardComponent_OnRep_ReceiveServerZiplineInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPComBoardComponent_OnRep_HideMyselfFromOthers_Param
	{
	public:

	};

	struct Function_GPGameplay_GPComBoardComponent_OnRep_HiddenCharacterGUIDs_Param
	{
	public:

	};

	struct Function_GPGameplay_GPComBoardComponent_OnCharacterLanded_Param
	{
	public:

		float FallHeight; // 0x00(0x04)
		bool bIsFallHigh; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPComBoardComponent_OnCharacterJump_Param
	{
	public:

		bool bIsJumpHigh; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPComBoardComponent_IsMovableActor_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPComBoardComponent_IsDynamicObstacleActor_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPComBoardComponent_HideMySelfFromOthers_Param
	{
	public:

		bool bHide; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPComBoardComponent_GMHideMySelfFromOthers_Param
	{
	public:

		bool bHide; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPComBoardComponent_Client2ServerLeanPeekTypeValue_Param
	{
	public:

		char PeekValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCommercializationComponent_Server2ClientsApplySpray_Param
	{
	public:

		struct FSprayInfo SprayInfo; // 0x00(0x3c)
	};

	struct Function_GPGameplay_GPCommercializationComponent_RecordEmoteUsageData_Param
	{
	public:

		int32_t ActionType; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		uint64_t ResourceId; // 0x08(0x08)
		uint32_t Rarity; // 0x10(0x04)
	};

	struct Function_GPGameplay_GPCommercializationComponent_OnRep_CommercializationItems_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCommercializationComponent_OnPossessedBy_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCommercializationComponent_OnPlayerHeroIdChanged_Param
	{
	public:

		uint64_t Uin; // 0x00(0x08)
		uint64_t HeroID; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPCommercializationComponent_OnKillInfoNotify_Param
	{
	public:

		struct TArray<struct FKillInfo> NewAddKillInfo; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPCommercializationComponent_OnItemsUpdated_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCommercializationComponent_OnEnterIrisSafeHouse_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCommercializationComponent_Client2ServerApplySpray_Param
	{
	public:

		struct FSprayInfo SprayInfo; // 0x00(0x3c)
	};

	struct Function_GPGameplay_GPCommercializationItem_OnSprayPaintLoadCompleted_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> Paths; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPCommercializationItem_OnItemLoadCompleted_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> Paths; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_WantCharacterSpeak_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		struct FString AudioTypeString; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_StopCharacterSpeak_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		struct FString AudioTypeString; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_ServerWantCharacterSpeak_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		struct FString AudioTypeString; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_ServerStopPlayerVoice_Param
	{
	public:

		uint32_t CharacterGUID; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FString AudioTypeString; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_ServerStopCharacterSpeak_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
		struct FString AudioTypeString; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_ServerRequestRegisterCharacterVOService_Param
	{
	public:

		uint32_t CharacterGUID; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		uint64_t CharacterUin; // 0x08(0x08)
		uint64_t HeroID; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_ServerRequestDeregisterCharacterVOService_Param
	{
	public:

		uint32_t CharacterGUID; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_ServerRegisterCharacterVOService_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_ServerPlayPlayerVoice_Param
	{
	public:

		uint32_t CharacterGUID; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FString AudioTypeString; // 0x08(0x10)
		int32_t RandomIndex; // 0x18(0x04)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_ServerDeregisterCharacterVOService_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_OnTimerTriggered_Param
	{
	public:

		uint32_t CharacterGUID; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_GetEnableCharacterVOService_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_ClientWantRandomCharacterSpeak_Param
	{
	public:

		struct FString AudioTypeString; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_ClientStopPlayerVoice_Param
	{
	public:

		uint32_t CharacterGUID; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FString AudioTypeString; // 0x08(0x10)
		bool bRequestFromServer; // 0x18(0x01)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_ClientRegisterCharacterVOService_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_ClientPlayPlayerVoice_Param
	{
	public:

		uint32_t CharacterGUID; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		uint64_t CharacterUin; // 0x08(0x08)
		uint64_t HeroID; // 0x10(0x08)
		struct FString AudioTypeString; // 0x18(0x10)
		bool bRequestFromServer; // 0x28(0x01)
		bool bTeammateWithListener; // 0x29(0x01)
		char pad_2A[0x2]; // 0x2a(0x02)
		int32_t RandomIndex; // 0x2c(0x04)
	};

	struct Function_GPGameplay_GPControllerAudioComponent_ClientDeregisterCharacterVOService_Param
	{
	public:

		struct AGPCharacter* InCharacter; // 0x00(0x08)
	};

	struct Function_GPGameplay_PartsDataTableManager_GetPartDataRow_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		struct UObject* WorldContextObject; // 0x08(0x08)
		struct FPartsDataRow ReturnValue; // 0x10(0x130)
	};

	struct Function_GPGameplay_PartsDataTableManager_GetAllPendantPartIDs_Param
	{
	public:

		struct TArray<int64_t> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_PartsRuleTableManager_GetRuleRows_Param
	{
	public:

		uint32_t RuleId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<struct FPartsRuleRow> OutRuleList; // 0x08(0x10)
	};

	struct Function_GPGameplay_GunPresetTableManager_UpdateGunID_Param
	{
	public:

		struct FText NewID; // 0x00(0x18)
		uint64_t OldID; // 0x18(0x08)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_GPGameplay_GunPresetTableManager_SortKey_Param
	{
	public:

	};

	struct Function_GPGameplay_GunPresetTableManager_SetRecPart_Param
	{
	public:

		struct FText NewRec; // 0x00(0x18)
		uint64_t PresetId; // 0x18(0x08)
	};

	struct Function_GPGameplay_GunPresetTableManager_SetGunName_Param
	{
	public:

		struct FText NewName; // 0x00(0x18)
		int32_t GunIndx; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		uint64_t PresetId; // 0x20(0x08)
	};

	struct Function_GPGameplay_GunPresetTableManager_RemoveRowByPresetId_Param
	{
	public:

		uint64_t PresetId; // 0x00(0x08)
	};

	struct Function_GPGameplay_GunPresetTableManager_RemoveRow_Param
	{
	public:

		int32_t GunIndx; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		uint64_t PresetId; // 0x08(0x08)
	};

	struct Function_GPGameplay_GunPresetTableManager_GetGunsByWeaponId_Param
	{
	public:

		uint64_t WeaponID; // 0x00(0x08)
		struct TArray<struct FGunPresetRow> ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_GunPresetTableManager_GetGunByItemId_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		struct FGunPresetRow ReturnValue; // 0x08(0x38)
	};

	struct Function_GPGameplay_GunPresetTableManager_GetGunByIndex_Param
	{
	public:

		int32_t GunIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FGunPresetRow ReturnValue; // 0x08(0x38)
	};

	struct Function_GPGameplay_GunPresetTableManager_AddRow_Param
	{
	public:

		struct FGunPresetRow NewRow; // 0x00(0x38)
		int32_t ReturnValue; // 0x38(0x04)
	};

	struct Function_GPGameplay_GunDescTableManager_SortKey_Param
	{
	public:

	};

	struct Function_GPGameplay_GunDescTableManager_RemoveRows_Param
	{
	public:

		uint64_t DescId; // 0x00(0x08)
	};

	struct Function_GPGameplay_GunDescTableManager_AddRow_Param
	{
	public:

		struct FGunDescRow Row; // 0x00(0x80)
	};

	struct Function_GPGameplay_PartSocketTableManager_GetSocketIdByName_Param
	{
	public:

		struct FName SocketName; // 0x00(0x08)
		uint32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_RecFunctionTableManager_HasVirtualPart_Param
	{
	public:

		uint64_t RecID; // 0x00(0x08)
		uint32_t ParentSocketId; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		uint64_t OutItemId; // 0x10(0x08)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPGameplay_RecFunctionTableManager_GetSameSerieList_Param
	{
	public:

		uint32_t SerieId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<struct FRecFunctionRow> ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_RecFunctionTableManager_GetRow_Param
	{
	public:

		uint64_t FunctionId; // 0x00(0x08)
		struct FRecFunctionRow ReturnValue; // 0x08(0xd0)
	};

	struct Function_GPGameplay_RecFunctionTableManager_GetFunctionIdByPresetID_Param
	{
	public:

		uint64_t DefaultPresetID; // 0x00(0x08)
		uint64_t MPDefaultPresetID; // 0x08(0x08)
		uint64_t ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_RecFunctionTableManager_Get_Param
	{
	public:

		struct URecFunctionTableManager* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_PartsFunctionTableManager_IsLazy_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_PartsFunctionTableManager_BPGetFuncRows_Param
	{
	public:

		uint64_t FuncId; // 0x00(0x08)
		struct TArray<struct FPartsFunctionRow> OutFuncList; // 0x08(0x10)
	};

	struct Function_GPGameplay_PartsAnimFunctionTableManager_GetFuncRows_Param
	{
	public:

		uint64_t FuncId; // 0x00(0x08)
		struct TArray<struct FPartsAnimFunctionRow> OutFuncList; // 0x08(0x10)
	};

	struct Function_GPGameplay_RTIConfigTableManager_AddRow_Param
	{
	public:

		struct FRTIConfigRow NewRow; // 0x00(0x40)
	};

	struct Function_GPGameplay_WeaponExtraModleTableManager_GetExtraModelRowsByRecId_Param
	{
	public:

		uint64_t RecID; // 0x00(0x08)
		struct TArray<struct FWeaponExtraModelRow> OutRows; // 0x08(0x10)
	};

	struct Function_GPGameplay_PartsMeshSocketNameInfoManager_GetRowByItemId_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		uint64_t SkinApperanceId; // 0x08(0x08)
		struct FWeaponPartsSkeletalMeshSocketNameInfo ReturnValue; // 0x10(0x50)
	};

	struct Function_GPGameplay_PartsMeshSocketNameInfoManager_GetRootBoneName_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		uint64_t SkinApperanceId; // 0x08(0x08)
		enum class EWeaponPartMeshType MeshType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FName ReturnValue; // 0x14(0x08)
	};

	struct Function_GPGameplay_AttackAdapterFunctionManager_GetAttackerInfo_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		int32_t CurrentDurability; // 0x08(0x04)
		struct FAttackerInfo ReturnValue; // 0x0c(0x14)
	};

	struct Function_GPGameplay_GPDestructibleComponent_ShouldEnableSimulatePhysics_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPDestructibleComponent_SetDestructionState_Param
	{
	public:

	};

	struct Function_GPGameplay_GPDestructibleComponent_ResetDestruction_Param
	{
	public:

	};

	struct Function_GPGameplay_GPDestructibleComponent_PlayHitAnimation_Param
	{
	public:

		float HealthRate; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPDestructibleComponent_OnDestructionTimeOut_Param
	{
	public:

	};

	struct Function_GPGameplay_GPDestructibleComponent_OnDebrisOverlap_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComp; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
		bool bFromSweep; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct FHitResult SweepResult; // 0x20(0x88)
	};

	struct Function_GPGameplay_GPDestructibleComponent_OnDebrisCollide_Param
	{
	public:

		struct UPrimitiveComponent* HitComp; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		struct FVector NormalImpulse; // 0x18(0x0c)
		struct FHitResult Hit; // 0x24(0x88)
	};

	struct Function_GPGameplay_GPDestructibleComponent_OnBeforeSimulatePhysics_Param
	{
	public:

	};

	struct Function_GPGameplay_GPDestructibleComponent_OnAnimationEnd_Param
	{
	public:

	};

	struct Function_GPGameplay_GPDestructibleComponent_IsSkeletalMeshBelongToComponent_Param
	{
	public:

		struct USkeletalMeshComponent* USkeletalMeshComp; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPDestructibleComponent_IsNeedSimulateRootBone_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPDestructibleComponent_IsAlreadyDestruct_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPDestructibleComponent_EarlyOutPhysicsSimulationIfCan_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPDestructibleComponent_EarlyOutDestruction_Param
	{
	public:

	};

	struct Function_GPGameplay_GPDestructibleComponent_EarlyOutAnimationIfCan_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPDestructibleComponent_DestructByDir_Param
	{
	public:

		struct FTransform RelativeTransform; // 0x00(0x30)
		struct FVector InHitLocation; // 0x30(0x0c)
		struct FVector InHitNormal; // 0x3c(0x0c)
	};

	struct Function_GPGameplay_GPDestructibleComponent_Destruct_Param
	{
	public:

	};

	struct Function_GPGameplay_GPDestructibleComponent_BeginPreLoadAsset_Param
	{
	public:

	};

	struct Function_GPGameplay_GPDestructibleComponent_BeginPreBreakState_Param
	{
	public:

	};

	struct Function_GPGameplay_GPDialogSubsystem_StartDialog_Param
	{
	public:

		struct FString DialogID; // 0x00(0x10)
		struct AActor* DialogActor; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPDialogSubsystem_Get_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AGPDialogSubsystem* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPDialogSubsystem_EndCurrentDialog_Param
	{
	public:

	};

	struct Function_GPGameplay_GPDialogSubsystem_BP_StartDialog_Param
	{
	public:

		struct FString DialogID; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPDialogSubsystem_BP_OnAddDialogAction_Param
	{
	public:

		struct UGPDialogAsyncActionBase* DialogAction; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPDialogSubsystem_BP_EndCurrentDialog_Param
	{
	public:

	};

	struct Function_GPGameplay_GPEmitterWithAudio_BP_OnPartcleSystemDeactivate_Param
	{
	public:

	};

	struct Function_GPGameplay_GPEmitterWithAudio_BP_OnPartcleSystemActivate_Param
	{
	public:

	};

	struct Function_GPGameplay_GPExplosionEffectComponent_PlayRadialBlurEffect_Param
	{
	public:

		float InIntensity; // 0x00(0x04)
		bool bShouldPlay; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPExplosionEffectComponent_PlayExplosionEffect_Param
	{
	public:

		enum class EExplosionType ExplosionType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector ExplosionLocation; // 0x04(0x0c)
	};

	struct Function_GPGameplay_GPFightStateComponent_SetState_Param
	{
	public:

		enum class EGPCharacterFightStateType StateType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_SetPlayerToLeisureState_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_SetMotionType_Param
	{
	public:

		enum class EGPAIMotionType NewMotionType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_SetLeisureMoveType_Param
	{
	public:

		enum class EGPCharacterLeisureMoveType moveType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_SetInCoverState_Param
	{
	public:

		enum class EGPCharacterInCoverPoseType StateType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_SetAlertState_Param
	{
	public:

		enum class EGPCharacterAlertStateType StateType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_ServerReplicatePlayerInCutSceneStateType_Param
	{
	public:

		enum class EGPCharacterFightStateType StetaType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_OnRep_FightState_Param
	{
	public:

	};

	struct Function_GPGameplay_GPFightStateComponent_GetMoveDirState_Param
	{
	public:

		enum class EGPCharacterMoveDirStateType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_GetLocomotionType_Param
	{
	public:

		enum class EGPCharacterFightStateType FightState; // 0x00(0x01)
		enum class EGPCharacterAlertStateType AlertState; // 0x01(0x01)
		enum class EGPCharacterInCoverPoseType InCoverState; // 0x02(0x01)
		bool bIsCrouch; // 0x03(0x01)
		bool bIsHalfSquat; // 0x04(0x01)
		bool bIsSprint; // 0x05(0x01)
		enum class EGPAICharaLocomotionType ReturnValue; // 0x06(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_GetCurrentMotionType_Param
	{
	public:

		enum class EGPAIMotionType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_GetCurrentMotionFightState_Param
	{
	public:

		enum class EGPCharacterFightStateType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_GetCurrentLocomotionType_Param
	{
	public:

		enum class EGPAICharaLocomotionType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_GetCurrentFightStateType_Param
	{
	public:

		enum class EGPCharacterFightStateType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_GetAICurrentLocomotionType_Param
	{
	public:

		struct AGPCharacter* AIChara; // 0x00(0x08)
		enum class EGPAICharaLocomotionType ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_EnableProneRotator_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_EnableAdditiveGunPos_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_CanSpotTurn_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_CanSpeaking_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_CanGunShooting_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_CanChangeClip_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFightStateComponent_CanAimTarget_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPGameplayDelegates_Get_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct UGPGameplayDelegates* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPGameplayDelegates_BroadcastSkillBPEvent_Param
	{
	public:

		struct FName Key; // 0x00(0x08)
		struct FName Value; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPGameplayGlobalDelegates_Get_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct UGPGameplayGlobalDelegates* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPGameplayStatics_StartLocalDS_Param
	{
	public:

		struct FString Params; // 0x00(0x10)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPGameplayStatics_ShowConfirmWindowWithSingleBtn_Param
	{
	public:

		struct UObject* ObjectContext; // 0x00(0x08)
		struct FText Texts; // 0x08(0x18)
	};

	struct Function_GPGameplay_GPGameplayStatics_ShowCommonTips_Param
	{
	public:

		struct UObject* ObjectContext; // 0x00(0x08)
		struct FText Tips; // 0x08(0x18)
		float ShowTime; // 0x20(0x04)
		bool bPositive; // 0x24(0x01)
		bool bShowInMobile; // 0x25(0x01)
		bool bShowInHD; // 0x26(0x01)
	};

	struct Function_GPGameplay_GPGameplayStatics_LoadTODLevel_Param
	{
	public:

		struct UWorld* InWorld; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPGameplayStatics_HideActiveCommonTips_Param
	{
	public:

		struct UObject* ObjectContext; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPGameplayStatics_GetWorldName_Param
	{
	public:

		struct UObject* ObjectContetx; // 0x00(0x08)
		struct FName ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPGameplayStatics_GetExecutableFilePath_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPGameplayStatics_GetClientFirstNetPlayerController_Param
	{
	public:

		struct UObject* ObjectContetx; // 0x00(0x08)
		struct APlayerController* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPGameplayStatics_GetBaseWorldName_Param
	{
	public:

		struct UObject* ObjectContetx; // 0x00(0x08)
		struct FName ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPGameplayStatics_GameplayGPMEndExclude_Param
	{
	public:

		struct UWorld* InWorld; // 0x00(0x08)
		struct FString ExcludeTag; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPGameplayStatics_GameplayGPMBeginExclude_Param
	{
	public:

		struct UWorld* InWorld; // 0x00(0x08)
		struct FString ExcludeTag; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPGameplayStatics_GameplayChangeFpsOPAndType_Param
	{
	public:

		enum class ELowFpsType FpsType; // 0x00(0x01)
		enum class ELowFpsOP FpsOP; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPGameplayStatics_GameplayChangeFpsOP_Param
	{
	public:

		enum class ELowFpsOP FpsOPType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPGameplayStatics_CheckPropmtForFramerateStability_Param
	{
	public:

		struct UObject* ObjectCtx; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPGameplayStatics_AssignNextCommonTipType_Param
	{
	public:

		struct UObject* ObjectContext; // 0x00(0x08)
		bool bPopTips; // 0x08(0x01)
		bool bPopCenter; // 0x09(0x01)
	};

	struct Function_GPGameplay_GPGeneralCSRPCComponent_Call_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
		struct FName FuncName; // 0x08(0x08)
		struct UObject* Arg; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPGeneralCSRPCUtils_Call_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
		struct FName FuncName; // 0x08(0x08)
		struct UObject* Arg; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPHitEffectComponent_SetHitEffectType_Param
	{
	public:

		enum class EHitEffectType EffectType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPHitEffectComponent_ReceiveBulletWhoosh_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHitEffectComponent_ProcessClientOnTakeHitHealthMulticast_Param
	{
	public:

		struct AActor* TargetCharacter; // 0x00(0x08)
		float LocalDamageDone; // 0x08(0x04)
		float TotalDamageDone; // 0x0c(0x04)
		struct FHitResult HitResult; // 0x10(0x88)
		struct FGameplayTagContainer SourceTags; // 0x98(0x20)
		struct AActor* SourceActor; // 0xb8(0x08)
		struct AActor* SourceCharacter; // 0xc0(0x08)
		enum class EDamageType DamageType; // 0xc8(0x01)
		enum class EHitEventType HitEventType; // 0xc9(0x01)
		char pad_CA[0x2]; // 0xca(0x02)
		int32_t ArmorLevel; // 0xcc(0x04)
		uint64_t AttackerValueId; // 0xd0(0x08)
	};

	struct Function_GPGameplay_GPHitEffectComponent_ProcessClientOnTakeHitHealth_Param
	{
	public:

		struct AActor* TargetCharacter; // 0x00(0x08)
		float LocalDamageDone; // 0x08(0x04)
		struct FHitResult HitResult; // 0x0c(0x88)
		char pad_94[0x4]; // 0x94(0x04)
		struct FGameplayTagContainer SourceTags; // 0x98(0x20)
		struct AActor* SourceActor; // 0xb8(0x08)
		struct AActor* SourceCharacter; // 0xc0(0x08)
		enum class EDamageType DamageType; // 0xc8(0x01)
		enum class EHitEventType HitEventType; // 0xc9(0x01)
		char pad_CA[0x2]; // 0xca(0x02)
		int32_t ArmorLevel; // 0xcc(0x04)
		float HealthPercent; // 0xd0(0x04)
		struct FVector MakerOwnerLocation; // 0xd4(0x0c)
		uint64_t AttackerValueId; // 0xe0(0x08)
	};

	struct Function_GPGameplay_GPHitEffectComponent_PlayTakeHitEffectsForShield_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHitEffectComponent_PlayTakeHitEffects_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHitEffectComponent_PlayShieldBrokenEffect_Param
	{
	public:

		struct FVector HitPoint; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPHitEffectComponent_PlayHitFlagAnimation_Param
	{
	public:

		struct FHitResult HitResult; // 0x00(0x88)
		struct AActor* SourceCharacter; // 0x88(0x08)
		enum class EDamageType DamageType; // 0x90(0x01)
		enum class EHitEventType HitEventType; // 0x91(0x01)
	};

	struct Function_GPGameplay_GPHitEffectComponent_OnRep_PlayTakeHitEffectsForShield_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHitEffectComponent_OnRep_PlayTakeHitEffects_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHitEffectComponent_OnRep_PlayShieldBrokenEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHitEffectComponent_OnOwnerCharacterReborn_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHitEffectComponent_OnOwnerCharacterDied_Param
	{
	public:

		struct AGPCharacterBase* CHARACTER; // 0x00(0x08)
		struct AController* Killer; // 0x08(0x08)
		struct UDamageType* DamageType; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPHitEffectComponent_IsWeaponHitWeakness_Param
	{
	public:

		struct FGameplayEffectContextHandle EffectContext; // 0x00(0x18)
		struct AActor* TargetActor; // 0x18(0x08)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_GPGameplay_GPHitEffectComponent_GetEffectScaleByLocalCharacter_Param
	{
	public:

		struct FVector TargetPoint; // 0x00(0x0c)
		struct FVector ReturnValue; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_GPHitEffectComponent_GetEffectScaleByDistance_Param
	{
	public:

		struct FVector SourcePoint; // 0x00(0x0c)
		struct FVector TargetPoint; // 0x0c(0x0c)
		struct FVector ReturnValue; // 0x18(0x0c)
	};

	struct Function_GPGameplay_GPHitEffectComponent_EndHitFlagAnimation_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHitEffectComponent_ClientOnTakeHitShield_Param
	{
	public:

		struct AActor* TargetCharacter; // 0x00(0x08)
		float LocalDamageDone; // 0x08(0x04)
		struct FHitResult HitResult; // 0x0c(0x88)
		char pad_94[0x4]; // 0x94(0x04)
		struct FGameplayTagContainer SourceTags; // 0x98(0x20)
		struct AActor* SourceActor; // 0xb8(0x08)
		struct ACHARACTER* SourceCharacter; // 0xc0(0x08)
	};

	struct Function_GPGameplay_GPHitEffectComponent_ClientOnTakeHitHealthMulticast_Param
	{
	public:

		struct AActor* TargetCharacter; // 0x00(0x08)
		float LocalDamageDone; // 0x08(0x04)
		float TotalDamageDone; // 0x0c(0x04)
		struct FHitResult HitResult; // 0x10(0x88)
		struct FGameplayTagContainer SourceTags; // 0x98(0x20)
		struct AActor* SourceActor; // 0xb8(0x08)
		struct AActor* SourceCharacter; // 0xc0(0x08)
		enum class EDamageType DamageType; // 0xc8(0x01)
		enum class EHitEventType HitEventType; // 0xc9(0x01)
		char pad_CA[0x2]; // 0xca(0x02)
		int32_t ArmorLevelf; // 0xcc(0x04)
	};

	struct Function_GPGameplay_GPHitEffectComponent_ClientOnTakeHitHealth_Param
	{
	public:

		struct AActor* TargetCharacter; // 0x00(0x08)
		float LocalDamageDone; // 0x08(0x04)
		struct FHitResult HitResult; // 0x0c(0x88)
		char pad_94[0x4]; // 0x94(0x04)
		struct FGameplayTagContainer SourceTags; // 0x98(0x20)
		struct AActor* SourceActor; // 0xb8(0x08)
		struct AActor* SourceCharacter; // 0xc0(0x08)
		enum class EDamageType DamageType; // 0xc8(0x01)
		enum class EHitEventType HitEventType; // 0xc9(0x01)
		char pad_CA[0x2]; // 0xca(0x02)
		int32_t ArmorLevel; // 0xcc(0x04)
		float HealthPercent; // 0xd0(0x04)
	};

	struct Function_GPGameplay_GPHitEffectComponent_ClientMakeHitFeedBack_Param
	{
	public:

		struct AActor* TargetCharacter; // 0x00(0x08)
		float LocalDamageDone; // 0x08(0x04)
		struct FHitResult HitResult; // 0x0c(0x88)
		char pad_94[0x4]; // 0x94(0x04)
		struct FGameplayTagContainer SourceTags; // 0x98(0x20)
		struct AActor* SourceActor; // 0xb8(0x08)
		struct AActor* SourceCharacter; // 0xc0(0x08)
		enum class EDamageType DamageType; // 0xc8(0x01)
		enum class EHitEventType HitEventType; // 0xc9(0x01)
		char pad_CA[0x2]; // 0xca(0x02)
		int32_t ArmorLevel; // 0xcc(0x04)
		uint64_t AttackerValueId; // 0xd0(0x08)
	};

	struct Function_GPGameplay_GPHotFixHelperComponent_OnRep_HotFixRepVectorArray_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHotFixHelperComponent_OnRep_HotFixRepIntArray_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHotFixHelperComponent_OnRep_HotFixRepFloatArray_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHotFixHelperComponent_HotFixServerToClientRPC_Param
	{
	public:

		struct FHotFixHelperDataInfo HotFixDataInfo; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPHotFixHelperComponent_HotFixClientToServerRPC_Param
	{
	public:

		struct FHotFixHelperDataInfo HotFixDataInfo; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPHudDataReplicator_OnRep_GPHudFastArray_Param
	{
	public:

		struct FGPHudDataFastArray OldGPHudDataFastArray; // 0x00(0x120)
	};

	struct Function_GPGameplay_GPInputInterface_TurnLookUpAtRate_Param
	{
	public:

		float Rate; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputInterface_TurnAtRate_Param
	{
	public:

		float Rate; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputInterface_SetMoveRight_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputInterface_SetMoveForward_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputInterface_MoveUp_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputInterface_Jump_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_RetriggerPressingKeyCorrInput_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_ReleasePressing_Param
	{
	public:

		char ReleaseType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPInputManager_ProcessPullOutArrow_Param
	{
	public:

		enum class EInputActionType KeyActionType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPInputManager_ProcessKeyESC_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_ProcessGMToggleGhostWalk_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_ProcessGMToggleFlyWalk_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_ProcessGMMinusSpeed100_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_ProcessGMAddSpeed100_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_ProcessFirefighting_Param
	{
	public:

		enum class EInputActionType KeyActionType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPInputManager_ProcessCloseDeathDetail_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnThirdVehicleSkillUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnThirdVehicleSkillDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnSwitchChatWindow_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnSecondVehicleWeaponFire_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnSecondVehicleSkillUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnSecondVehicleSkillDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnMiniMapScaleChange_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnMapKeyUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnMapKeyDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnMapDigitalKey4_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnMapDigitalKey3_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnMapDigitalKey2_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnMapDigitalKey1_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnLockVehicleCameraRelease_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnLockVehicleCameraPress_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputZoomUpBigMapScale_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputZoomDownBigMapScale_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputVehicleTrumpetReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputVehicleTrumpet_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputVehicleSwitchXPP_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputVehicleHeadOut_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputVehicleBrakeReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputVehicleBrake_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputVehicleBoost_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputVehicleAimUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputVehicleAimDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputVault_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputTPPRotateCameraReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputTPPRotateCamera_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputToggleVoiceSpeaking_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputToggleScoreboardReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputToggleScoreboard_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputToggleLegends_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputSwitchWeapon4_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputSwitchWeapon3_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputSwitchWeapon2_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputSwitchWeapon1_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputSwitchVehicleWeapon2_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputSwitchVehicleWeapon1_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputSwitchToPreWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputSwitchToNextWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputSwitchTacticalEquipmentUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputSwitchTacticalEquipmentDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputSwitchScrollVehicleWeapon2_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputSwitchScrollVehicleWeapon1_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputSkillCustom1Released_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputSkillCustom1Down_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputRouletteMedUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputRouletteMedDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputRouletteLeftBtnDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputRouletteEquipUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputRouletteEquipDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputRescueReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputRescue_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputRequestRescueReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputRequestRescue_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputRangeToggleAnalysisPanel_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputRangeRefreshAnalysisPanel_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputRangeManageWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputRangeFinderDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputQuickResYes_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputQuickResNo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputPullOutArrowReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputPullOutArrowDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputOpenPowerFlash_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputOpenParachute_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputOpenMap_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputMuteAll_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputMarkReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputMark_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputMapLongPressSelectUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputMapLongPressSelectDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputLootingOpenHealthTag_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputLootingOpenBag_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputLocatePlayer_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputLeaveVehicle_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyZiplineButtonDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyWeaponInspect_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyWeaponBipodDeploy_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyUnSprint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyUnSilentWalk_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyUnSideAim_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyUnJump_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyUnHoldBreath_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyUnAim_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyToggleRecordPanel_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyToggleRecordMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyTelescope_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeySwitchWeaponFireMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeySwitchMouseMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyStopFire_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyStartFire_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeySprint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeySkillButtonUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeySkillButtonDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeySilentWalk_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeySideAim_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyShowWeaponPanel_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyShowQuestPanel_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyShowGMPanel_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyShowAnimPanel_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyRightLeanPeekUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyRightLeanPeekDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyReloadUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyReload_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyProneHoldReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyProneHold_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyProneDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyObserver_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyMouseScrollUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyMouseScrollDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyLeftLeanPeekUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyLeftLeanPeekDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyJumpAndVaultReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyJumpAndVault_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyJump_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyHoldBreath_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyGMToggleGhostWalk_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyGMToggleFlyWalk_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyGMSubClientTimeDilation_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyGMSnapshot_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyGMRecoverClientTimeDilation_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyGMMinusSpeed100_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyGMAddSpeed100_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyGMAddClientTimeDilation_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyESC_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyDropCarryBody_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyDoNothing_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyCrouch_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyChangeXPP_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyCarryBody_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyAssassinateRelease_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyAssassinateDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeyAim_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeepVoiceSpeakingReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputKeepVoiceSpeaking_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputInteractRelease_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputInteractPress_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputInteract2Release_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputInteract2Press_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputGMHurtMe_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputFirefightingReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputFirefightingDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputExit3DSafeHouse_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputCrouchHoldReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputCrouchHold_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputCommercializationUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputCommercializationDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputCloseParachute_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputCloseDeathDetail_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputChangeTelescopeFovBtnUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputChangeTelescopeFOV_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputChangeSight_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputCancelRoulette_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputBattleFieldPropSkillReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputBattleFieldPropSkillDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputAxisTurn_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputManager_OnInputAxisMoveUp_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputManager_OnInputAxisMoveRight_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputManager_OnInputAxisMoveForward_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputManager_OnInputAxisLookUp_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputManager_OnInputAxisAirYaw_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputManager_OnInputAxisAirThrottle_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputManager_OnInputAxisAirRoll_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputManager_OnInputAxisAirPitch_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputManager_OnInputAutoSprint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputArtillerySupportUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputArtillerySupportDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionShowLuaRuntimeDebugPanel_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveUpReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveRollRightReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveRollRight_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveRollLeftReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveRollLeft_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveRightReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveRight_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveLeftReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveLeft_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveForwardReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveForward_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveDownReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveBackwardReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionMoveBackward_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionHideHUD_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirYawRightReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirYawRight_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirYawLeftReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirYawLeft_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirThrottleUpReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirThrottleUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirThrottleDownReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirThrottleDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirRollRightReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirRollRight_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirRollLeftReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirRollLeft_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirPitchUpReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirPitchUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirPitchDownReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputActionAirPitchDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputAbilityTestSpawn_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputAbilityItemSecondReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputAbilityItemSecond_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputAbilityItemReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputAbilityItem_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputAbilityDetailDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputAbilityDetail_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputAbandonRescueReleased_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInputAbandonRescue_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_WatchKillCamReplay_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_WatchFightReportVoice_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_WatchFightPlayerCard_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_WatchFightExit_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_WatchFightDeathDetailInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_WatchFightChangeTarget_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_UpdateFocusPoint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_SwitchToFreeCamera_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_StartMoveCamera_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_ShowTeamInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_ShowPlayerMarker_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_ShowOutLineEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_ShowHideRouteDebugView_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_ShowHidePanel_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_RightBtnClick_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_PrevTeam_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_NextTeam_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_LeftBtnClick_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_GenerateMoveRoute_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_GenerateFaceRoute_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_ClearMoveRoute_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_ClearFaceRoute_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_CatchMoveRoutePoint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_CatchFaceRoutePoint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_CameraSpeedUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnInput_OBC_CameraSpeedDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnHudInputAxis_Param
	{
	public:

		enum class EInputAxisType InputAxisType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float InputValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPInputManager_OnHudInputAction_Param
	{
	public:

		enum class EInputActionType InputActionType; // 0x00(0x01)
		bool InputValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPInputManager_OnFourthVehicleSkillUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnFourthVehicleSkillDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnFirstVehicleSkillUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnFirstVehicleSkillDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnExitFreeLookaroundMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnEnterFreeLookaroundMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnEnqueueInputAction_Param
	{
	public:

		enum class EInputActionType InputActionType; // 0x00(0x01)
		bool bDelayOneTick; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPInputManager_OnChangeVehicleSeat6_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnChangeVehicleSeat5_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnChangeVehicleSeat4_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnChangeVehicleSeat3_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnChangeVehicleSeat2_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_OnChangeVehicleSeat1_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputManager_IsInputDeviceAimAssistAllowed_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPInputManager_IsAxisEnabledWhenUIOnly_Param
	{
	public:

		enum class EInputAxisType InputAxisType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPInputManager_IsActionEnabledWhenUIOnly_Param
	{
	public:

		enum class EInputActionType InputActionType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPInputManager_GetReleasedInputActionTypeByActionName_Param
	{
	public:

		struct FName ActionName; // 0x00(0x08)
		enum class EInputActionType ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPInputManager_GetPressedInputActionTypeByActionName_Param
	{
	public:

		struct FName ActionName; // 0x00(0x08)
		enum class EInputActionType ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPInputManager_GetAxisNameByInputAxisType_Param
	{
	public:

		enum class EInputAxisType InputAxisType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FName ReturnValue; // 0x04(0x08)
	};

	struct Function_GPGameplay_GPInputManager_GetActionNameByInputActionType_Param
	{
	public:

		enum class EInputActionType InputActionType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FName ReturnValue; // 0x04(0x08)
	};

	struct Function_GPGameplay_GPItemSubsystem_SwitchWhenAbilityItemAmmoEmpty_Param
	{
	public:

		struct AWeaponBase* Weapon; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPItemSubsystem_IsAbilityItemByWeaponId_Param
	{
	public:

		uint64_t WeaponID; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPItemSubsystem_IsAbilityItem_Param
	{
	public:

		struct AWeaponBase* Weapon; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPItemSubsystem_GetModularAppearanceProvider_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
		struct UModularApperanceBaseProvider* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPItemSubsystem_GetItemQuality_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPItemSubsystem_GetItemMeshPath_Param
	{
	public:

		uint64_t AmmoId; // 0x00(0x08)
		struct FSoftObjectPath ReturnValue; // 0x08(0x18)
	};

	struct Function_GPGameplay_GPItemSubsystem_GetInventoryMatchedAmmo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPItemSubsystem_Get_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
		struct UGPItemSubsystem* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPItemSubsystem_GenGid_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPKnockbackMoveComponent_StopKnockback_Param
	{
	public:

	};

	struct Function_GPGameplay_GPKnockbackMoveComponent_StartGetUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPKnockbackMoveComponent_OnFallDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPKnockbackMoveComponent_OnClientStopKnockbackTimer_Param
	{
	public:

	};

	struct Function_GPGameplay_GPKnockbackMoveComponent_IsServerOfflineMode_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPKnockbackMoveComponent_ClientStopKnockback_Param
	{
	public:

	};

	struct Function_GPGameplay_GPKnockbackMoveComponent_ClientPlayEndAnim_Param
	{
	public:

	};

	struct Function_GPGameplay_GPKnockbackMoveComponent_ClientKnockback_Param
	{
	public:

		struct FVector weaponPos; // 0x00(0x0c)
		enum class EKnockbackFromType InKnockbackFromType; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GPKnockbackMoveComponent_ClearKnockMoveMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPKnockbackMoveComponent_ClearClientStopKnockbackTimer_Param
	{
	public:

	};

	struct Function_GPGameplay_GPKnockbackMoveComponent_CheckPlayEndAnim_Param
	{
	public:

	};

	struct Function_GPGameplay_GPKnockbackMoveComponent_BreakKnockback_Param
	{
	public:

	};

	struct Function_GPGameplay_GPLevelSequenceActingComponent_StopLevelSequence_Param
	{
	public:

	};

	struct Function_GPGameplay_GPLevelSequenceActingComponent_PlayLevelSequence_Param
	{
	public:

	};

	struct Function_GPGameplay_GPLevelSequenceActingComponent_PauseLevelSequence_Param
	{
	public:

	};

	struct Function_GPGameplay_GPLevelSequenceActingComponent_OnRep_LevelSequenceActor_Param
	{
	public:

	};

	struct Function_GPGameplay_GPLevelSequenceActingComponent_OnLevelSeuqenceStop_Param
	{
	public:

	};

	struct Function_GPGameplay_GPLevelSequenceActingComponent_OnLevelSeuqencePlay_Param
	{
	public:

	};

	struct Function_GPGameplay_GPLevelSequenceActingComponent_OnLevelSeuqencePause_Param
	{
	public:

	};

	struct Function_GPGameplay_GPLevelSequenceActingComponent_OnLevelSeuqenceFinished_Param
	{
	public:

	};

	struct Function_GPGameplay_GPLevelSequenceActingComponent_ClientsBindSequenceActor_Param
	{
	public:

		struct ALevelSequenceActor* SequenceActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMarkerColorConfig_GetColorByType_Param
	{
	public:

		enum class EGPMarkerColorType InColorType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FLinearColor ReturnValue; // 0x04(0x10)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_WantLocalCharacterSpeak_Param
	{
	public:

		enum class EMarkingMarkerType MarkingMarkerType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t MarkingSubType; // 0x04(0x04)
		bool bIsRespond; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_UpdateMapUnitMarker_Param
	{
	public:

		struct FUnitMarkingInfo MarkingUnitInfo; // 0x00(0x58)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_UpdateMapLocationMarker_Param
	{
	public:

		struct FLocationMarkingInfo MarkingLocationInfo; // 0x00(0x48)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_UpdateMapItemMarker_Param
	{
	public:

		struct FItemMarkingInfo MarkingItemInfo; // 0x00(0x168)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_TickMarkingInfoArrays_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ServerRemoveBubbleMarker_Param
	{
	public:

		enum class EQuickChatMarkingItemType InItemType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct AActor* MarkedActor; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ServerCancelUnitMarkerByBigMap_Param
	{
	public:

		struct AActor* MarkedActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ServerCancelUnitMarker_Param
	{
	public:

		uint64_t MarkerUniqueId; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ServerCancelLocationMarker_Param
	{
	public:

		enum class EMarkingLocationType CancelMarkingLocationType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct AGPCharacter* MarkerOwner; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ServerCancelItemMarker_Param
	{
	public:

		enum class EMarkingItemType CancelMarkingItemType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		uint64_t ItemID; // 0x08(0x08)
		bool bIsRespond; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct AGPCharacter* MarkerOwner; // 0x18(0x08)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ServerAddUnitMarkerByBigMap_Param
	{
	public:

		struct AActor* MarkedActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ServerAddUnitMarker_Param
	{
	public:

		uint64_t MarkerUniqueId; // 0x00(0x08)
		uint64_t MarkerPlayerUin; // 0x08(0x08)
		struct AActor* MarkedActor; // 0x10(0x08)
		uint32_t markerType; // 0x18(0x04)
		enum class EMarkerCampType ShowMarkerCamp; // 0x1c(0x01)
		enum class EMarkerCampType MarkedActorCamp; // 0x1d(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ServerAddLocationMarker_Param
	{
	public:

		enum class EMarkingLocationType InMarkingLocationType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector InMarkingLocation; // 0x04(0x0c)
		struct FVector InMarkingHitNormal; // 0x10(0x0c)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ServerAddItemRespondMarker_Param
	{
	public:

		struct FItemMarkingInfo MarkingItemInfo; // 0x00(0x168)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ServerAddItemMarker_Param
	{
	public:

		struct AActor* ItemActor; // 0x00(0x08)
		enum class EMarkingItemType MarkingItemType; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ServerAddItemInContainerMarker_Param
	{
	public:

		struct AActor* ContainerActor; // 0x00(0x08)
		uint64_t ItemID; // 0x08(0x08)
		uint64_t ItemGid; // 0x10(0x08)
		enum class EMarkingItemType MarkingItemType; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct FGPWeaponDescInfo WeaponDescInfo; // 0x20(0x108)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ServerAddBubbleMarker_Param
	{
	public:

		uint32_t InMarkerType; // 0x00(0x04)
		enum class EQuickChatMarkingItemType InItemType; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct AGPCharacter* OwnerCharacter; // 0x08(0x08)
		struct AActor* MarkedActor; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_SendChatMsg_Param
	{
	public:

		enum class EMarkingChatType MarkingChatType; // 0x00(0x01)
		bool bIsRespond; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_RespondToMarker_Param
	{
	public:

		uint32_t markerType; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UGPMarkerItemBase* MarkerItem; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_RemoveUnitMarkingInfoFromAll_Param
	{
	public:

		struct FUnitMarkingInfo UnitMarkingInfo; // 0x00(0x58)
		bool bRemovedProactively; // 0x58(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_RemoveUnitMarkingInfo_Param
	{
	public:

		uint64_t InUniqueId; // 0x00(0x08)
		bool bRemovedProactively; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_RemoveUnitBubbleMarkingInfo_Param
	{
	public:

		struct AActor* MarkedActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_RemoveMapUnitMarker_Param
	{
	public:

		struct FUnitMarkingInfo MarkingUnitInfo; // 0x00(0x58)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_RemoveMapLocMarker_Param
	{
	public:

		struct AGPCharacter* OwnerCharacter; // 0x00(0x08)
		enum class EMarkingLocationType MarkingLocationType; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_RemoveMapItemMarker_Param
	{
	public:

		struct AGPCharacter* OwnerCharacter; // 0x00(0x08)
		enum class EMarkingItemType MarkingItemType; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_RemoveLocationMarkingInfo_Param
	{
	public:

		enum class EMarkingLocationType CancelMarkingLocationType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct AGPCharacter* MarkerOwner; // 0x08(0x08)
		bool bRemovedProactively; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_RemoveItemMarkingInfo_Param
	{
	public:

		enum class EMarkingItemType CancelMarkingItemType; // 0x00(0x01)
		bool bIsRespond; // 0x01(0x01)
		char pad_2[0x6]; // 0x02(0x06)
		struct AGPCharacter* MarkerOwner; // 0x08(0x08)
		bool bRemovedProactively; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_PreFilterPendingMarkActors_SOL_Param
	{
	public:

		struct TArray<struct AActor*> OutPendingMarkActors; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_PlayerWantToRespondMarker_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerControllerComponent_PlayerWantToRespondMapMarker_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerControllerComponent_PlayerWantToMarkSomething_Param
	{
	public:

		bool bOnlyLocation; // 0x00(0x01)
		enum class EMarkingLocationType MarkingLocationType; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_PlayerWantToCancelMarker_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerControllerComponent_OnRep_UnitMarkingInfoArray_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerControllerComponent_OnRep_UnitBubbleMarkingInfoArray_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerControllerComponent_OnRep_LocationMarkingInfoArray_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerControllerComponent_OnRep_ItemMarkingInfoArray_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerControllerComponent_OnMarkingDoubleClickDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerControllerComponent_IsUnitMarkingInfoShouldRemoved_Param
	{
	public:

		struct FUnitMarkingInfo MarkingUnitInfo; // 0x00(0x58)
		bool ReturnValue; // 0x58(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_IsLocationMarkingInfoShouldRemoved_Param
	{
	public:

		struct FLocationMarkingInfo MarkingLocationInfo; // 0x00(0x48)
		bool ReturnValue; // 0x48(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_IsItemRespondMarkingInfoShouldRemoved_Param
	{
	public:

		struct FItemMarkingInfo MarkingItemInfo; // 0x00(0x168)
		bool ReturnValue; // 0x168(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_IsItemMarkingInfoShouldRemoved_Param
	{
	public:

		struct FItemMarkingInfo MarkingItemInfo; // 0x00(0x168)
		bool ReturnValue; // 0x168(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_IsActorSameCampAsLocal_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_GetShowMarkedItemByGID_Param
	{
	public:

		uint64_t ItemGid; // 0x00(0x08)
		struct FItemMarkingInfo ShowItemMarkingInfo; // 0x08(0x168)
		bool ReturnValue; // 0x170(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_GetPlayerMarkItem_Param
	{
	public:

		struct AGPCharacter* OwnerCharacter; // 0x00(0x08)
		struct FItemMarkingInfo OutItemMarkingInfo; // 0x08(0x168)
		bool ReturnValue; // 0x170(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_GetMPMurderer_Param
	{
	public:

		struct AGPCharacter* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_GetMarkingCharacterVoiceConfigInComp_Param
	{
	public:

		uint32_t InMarkerType; // 0x00(0x04)
		int32_t MarkingSubType; // 0x04(0x04)
		bool bIsRespond; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_GetMarkedItemsByGID_Param
	{
	public:

		uint64_t ItemGid; // 0x00(0x08)
		struct TArray<struct FItemMarkingInfo> OutItemMarkingInfos; // 0x08(0x10)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_GetLootItemsMaxQuality_Param
	{
	public:

		struct AGPCharacter* CHARACTER; // 0x00(0x08)
		struct AActor* Loot0bj; // 0x08(0x08)
		int32_t ReturnValue; // 0x10(0x04)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_GetItemMarkingInfoByItemID_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		struct FItemMarkingInfo OutItemMarkingInfo; // 0x08(0x168)
		bool ReturnValue; // 0x170(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_GetCurMarkingConfig_Param
	{
	public:

		struct FMarkingConfigDataTableRow ReturnValue; // 0x00(0x1f8)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_FindIsReplicatedMarkerInfoByPlayerUin_Param
	{
	public:

		uint64_t InPlayerUin; // 0x00(0x08)
		int32_t InMarkerType; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_DoMarkUnit_Param
	{
	public:

		struct AActor* InUnitActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_DoMarkItem_Param
	{
	public:

		struct AActor* InItemActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ClientShowBubbleMarker_Param
	{
	public:

		struct FBubbleMarkingInfo NewMarkerInfo; // 0x00(0x38)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ClientRemoveUnitMarkingInfo_Param
	{
	public:

		struct FUnitMarkingInfo UnitMarkingInfo; // 0x00(0x58)
		bool bRemovedProactively; // 0x58(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ClientRemoveLocationMarkingInfo_Param
	{
	public:

		struct FLocationMarkingInfo LocationMarkingInfo; // 0x00(0x48)
		bool bRemovedProactively; // 0x48(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ClientRemoveItemMarkingInfo_Param
	{
	public:

		struct FItemMarkingInfo ItemMarkingInfo; // 0x00(0x168)
		bool bRemovedProactively; // 0x168(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_ClientHideItemMarker_Param
	{
	public:

		struct AActor* ItemActor; // 0x00(0x08)
		bool bHide; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_CancelMarkItem_Param
	{
	public:

		struct AActor* InItemActor; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_AddUnitMarkingInfo_Param
	{
	public:

		struct FUnitMarkingInfo InUnitMarkingInfo; // 0x00(0x58)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_AddUnitBubbleMarkingInfo_Param
	{
	public:

		struct FBubbleMarkingInfo BubbleMarkingInfo; // 0x00(0x38)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_AddMapUnitMarker_Param
	{
	public:

		struct FUnitMarkingInfo MarkingUnitInfo; // 0x00(0x58)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_AddMapLocationMarker_Param
	{
	public:

		struct FLocationMarkingInfo MarkingLocationInfo; // 0x00(0x48)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_AddMapItemMarker_Param
	{
	public:

		struct FItemMarkingInfo MarkingItemInfo; // 0x00(0x168)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_AddLocationMarkingInfo_Param
	{
	public:

		struct FLocationMarkingInfo NewInfo; // 0x00(0x48)
	};

	struct Function_GPGameplay_GPMarkerControllerComponent_AddItemMarkingInfo_Param
	{
	public:

		struct FItemMarkingInfo NewInfo; // 0x00(0x168)
	};

	struct Function_GPGameplay_GPMarkerCoordinator_MarkerTypeChange_Param
	{
	public:

		struct FMarkerCoordinatedStruct MarkedActorStruct; // 0x00(0x70)
		enum class EMarkerCoordinatedType ChangedType; // 0x70(0x01)
		bool bAdd; // 0x71(0x01)
		enum class EMarkerCoordinatedType ReturnValue; // 0x72(0x01)
	};

	struct Function_GPGameplay_GPMarkerCoordinator_GetMaxType_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerCoordinator_GetMarkedActorGUID_Param
	{
	public:

		struct AActor* MarkedActor; // 0x00(0x08)
		uint32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPMarkerManager_UpdateTeamCharaterMarker_Param
	{
	public:

		float InDeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPMarkerManager_UpdateCurrentAimMarker_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerManager_UnregisterMarkerInCoordinator_Param
	{
	public:

		struct UGPPlayerItemMarkerItem* ItemMarkerItem; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMarkerManager_TrackCurrentAimMapTrackedMarkerInMap_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerManager_TickLocalMarking_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPMarkerManager_SetCurInteractorPanelShowingActor_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMarkerManager_RemoveUnitMarkingMarker_Param
	{
	public:

		uint64_t MarkerUniqueId; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMarkerManager_RegisterMarkerInCoordinator_Param
	{
	public:

		struct FItemMarkingInfo ItemMarkingInfo; // 0x00(0x168)
	};

	struct Function_GPGameplay_GPMarkerManager_RecoverUnitMarkingInfoForLaterPlayer_Param
	{
	public:

		struct AController* PlayerController; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMarkerManager_ProcessEnemyMarker_Param
	{
	public:

		struct AActor* EnemyActor; // 0x00(0x08)
		bool bAdd; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_Play3DAudio_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerManager_OnItemMarkerTypeChanged_Param
	{
	public:

		struct AActor* MarkedActor; // 0x00(0x08)
		uint64_t ActorID; // 0x08(0x08)
		enum class EMarkerCoordinatedType markerType; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_OnGPQuestMarkerCreateOrDestroy_Param
	{
	public:

		struct AGPQuestMarkerBase* QuestMarker; // 0x00(0x08)
		bool bCreate; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_OnGPGamePlayerPostLogin_Param
	{
	public:

		struct AController* PlayerController; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMarkerManager_On3DAudioLoaded_Param
	{
	public:

		struct FSoftObjectPath AudioSoftPath; // 0x00(0x18)
		struct FVector Location; // 0x18(0x0c)
		struct FRotator Rotator; // 0x24(0x0c)
	};

	struct Function_GPGameplay_GPMarkerManager_IsOthersMarkerShouldPlayAudio_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_IsActorMarkedByMarking_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_HandleEarlyActorMarker_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerManager_GetVehicleMarkerCamp_Param
	{
	public:

		struct AController* OwnerController; // 0x00(0x08)
		struct AActor* VehicleActor; // 0x08(0x08)
		enum class EMarkerCampType ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_GetShowMarkerCamp_Param
	{
	public:

		enum class EMarkerCampType MarkedActorCamp; // 0x00(0x01)
		enum class EMarkerCampType ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_GetPlayerMarkedLocalOnDeathMarker_Param
	{
	public:

		struct TArray<uint64_t> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPMarkerManager_GetMarkedActorCamp_Param
	{
	public:

		struct AController* OwnController; // 0x00(0x08)
		struct AActor* MarkedActor; // 0x08(0x08)
		uint32_t markerType; // 0x10(0x04)
		char InMarkerClassType; // 0x14(0x01)
		enum class EMarkerCampType ReturnValue; // 0x15(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_GetItemMarkingInfoByMarkedActor_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		struct FItemMarkingInfo ReturnValue; // 0x08(0x168)
	};

	struct Function_GPGameplay_GPMarkerManager_GetItemMarkerCoordinatedType_Param
	{
	public:

		enum class EMarkingItemType MarkingItemType; // 0x00(0x01)
		enum class EMarkerCoordinatedType ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_GetItemFromPendingUsingPool_Param
	{
	public:

		uint32_t markerType; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UGPMarkerItemBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPMarkerManager_GetCurrentAimMapTrackedMarker_Param
	{
	public:

		struct UUserWidget* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMarkerManager_Get_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct AGPMarkerManager* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPMarkerManager_ForceShowKillCamSelfMarker_Param
	{
	public:

		struct AActor* EnemyActor; // 0x00(0x08)
		bool bForceShow; // 0x08(0x01)
		enum class EMarkerUIWigetType NeedShowMarkerUIWiget; // 0x09(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_ForceShowEnemyMarkerBloodBar_Param
	{
	public:

		struct AActor* EnemyActor; // 0x00(0x08)
		bool bForceShow; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_ForceShowEnemyMarker_Param
	{
	public:

		struct AActor* EnemyActor; // 0x00(0x08)
		bool bForceShow; // 0x08(0x01)
		enum class EMarkerUIWigetType NeedShowMarkerUIWiget; // 0x09(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_ForceLockEnemyMarker_Param
	{
	public:

		struct AActor* EnemyActor; // 0x00(0x08)
		bool bForceShow; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_EnableLowHealthBubble_Param
	{
	public:

		enum class ELowHealthBubbleSourceType SourceType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_EnableLowAmmoBubble_Param
	{
	public:

		enum class ELowAmmoBubbleSourceType SourceType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_EnableAutoShowBubble_Param
	{
	public:

		enum class ESupportType BubbleType; // 0x00(0x01)
		enum class EAutoShowBubbleSourceType SourceType; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_DisableLowHealthBubble_Param
	{
	public:

		enum class ELowHealthBubbleSourceType SourceType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_DisableLowAmmoBubble_Param
	{
	public:

		enum class ELowAmmoBubbleSourceType SourceType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_DisableAutoShowBubble_Param
	{
	public:

		enum class ESupportType BubbleType; // 0x00(0x01)
		enum class EAutoShowBubbleSourceType SourceType; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_ClientSetItemMarkingMarkerVisible_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		bool bShow; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_ClientSetIgnoreMarkerWithGUID_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		bool bIgnore; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_ClearMarkerItemMap_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerManager_CheckOutMarkersMarkingByScreenPos_Param
	{
	public:

		struct TArray<struct AActor*> PendingMarkActors; // 0x00(0x10)
		float AimCheckMarkerRadius; // 0x10(0x04)
	};

	struct Function_GPGameplay_GPMarkerManager_CheckMarkingInfoArrayAndAddNewMarker_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerManager_CanAutoShowBubble_Param
	{
	public:

		enum class ESupportType BubbleType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPMarkerManager_AddSOLTeamMemberMarker_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerManager_AddPendingCreateQuestMarker_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerManager_AddItemToPendingUsingPool_Param
	{
	public:

		uint32_t markerType; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UGPMarkerItemBase* ItemToAdd; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPMarkerManager_AddCampMemberMarker_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerManager_AddBattleFieldTeamMemberMarker_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMaterialProxy_SwitchMaterial_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMaterialProxy_SetVectorParameterValue_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct FLinearColor Value; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPMaterialProxy_SetTextureParameterValue_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		struct UTexture* Value; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPMaterialProxy_SetScalarParameterValue_Param
	{
	public:

		struct FName ParameterName; // 0x00(0x08)
		float Value; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPMaterialProxy_SetKeywordEnable_Param
	{
	public:

		struct FName Keyword; // 0x00(0x08)
		bool bEnable; // 0x08(0x01)
		bool bImmediateSwitchMaterial; // 0x09(0x01)
	};

	struct Function_GPGameplay_GPMaterialProxy_PreloadMaterialByShaderKey_Param
	{
	public:

		struct TArray<struct FName> InShaderKeywords; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPMaterialProxy_InitMaterialVariant_Param
	{
	public:

		struct UMaterialInterface* InOriMaterial; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPModularWeaponAnimInstance_SetThrowMagCL_Param
	{
	public:

		bool InbUpdate; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float InMagclVel; // 0x04(0x04)
		float InAddSpeedZ; // 0x08(0x04)
		struct FVector StartLocation; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_GPObserverPawn_UpdateNearbyCharacterList_Param
	{
	public:

	};

	struct Function_GPGameplay_GPObserverPawn_SetWeaponSocketAttachName_Param
	{
	public:

		struct FString SocketName; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPObserverPawn_SetRelativeToSocket_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPObserverPawn_SetPositionActorTransform_Param
	{
	public:

		struct FVector Loc; // 0x00(0x0c)
		struct FRotator Rotator; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_GPObserverPawn_SetFocusCharacterSocketName_Param
	{
	public:

		struct FString SocketName; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPObserverPawn_SetEnableFocusCharacterSocket_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPObserverPawn_SetCharacterSocketAttachName_Param
	{
	public:

		struct FString SocketName; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPObserverPawn_OBC_UpdateFocusPoint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPObserverPawn_OBC_StartMoveCamera_Param
	{
	public:

	};

	struct Function_GPGameplay_GPObserverPawn_OBC_ShowHideRouteDebugView_Param
	{
	public:

	};

	struct Function_GPGameplay_GPObserverPawn_OBC_GenerateMoveRoute_Param
	{
	public:

	};

	struct Function_GPGameplay_GPObserverPawn_OBC_GenerateFaceRoute_Param
	{
	public:

	};

	struct Function_GPGameplay_GPObserverPawn_OBC_ClearMoveRoute_Param
	{
	public:

	};

	struct Function_GPGameplay_GPObserverPawn_OBC_ClearFaceRoute_Param
	{
	public:

	};

	struct Function_GPGameplay_GPObserverPawn_OBC_CatchMoveRoutePoint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPObserverPawn_OBC_CatchFaceRoutePoint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPObserverPawn_LimitOBPlayerRotator_Param
	{
	public:

		struct FRotator PlayerRotator; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPObserverPawn_HighlightFocusActor_Param
	{
	public:

		bool bHighlight; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPObserverPawn_DetachFromTarget_Param
	{
	public:

	};

	struct Function_GPGameplay_GPObserverPawn_Client2ServerSetActorTransform_Param
	{
	public:

		struct FVector Loc; // 0x00(0x0c)
		struct FRotator Rotator; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_GPObserverPawn_AttachToWeaponSocket_Param
	{
	public:

		bool bAttach; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPObserverPawn_AttachToTarget_Param
	{
	public:

		struct ACHARACTER* TargetCharacter; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPObserverPawn_AttachToCharacterSocket_Param
	{
	public:

		bool bAttach; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPOnlineSession_TestDisconnect_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
		struct UNetDriver* NetDriver; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPOnlineSession_HandleNetworkFailureNextFrame_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
		struct UNetDriver* NetDriver; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPOutLineEffectComponent_UpdateLocalPlayerOutLineCnt_Param
	{
	public:

		int32_t Delta; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPOutLineEffectComponent_UpdateForceStopEffectTimeByArray_Param
	{
	public:

		int32_t OutLineBitArray; // 0x00(0x04)
		bool bIsPlay; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPOutLineEffectComponent_UpdateForceStopEffectTime_Param
	{
	public:

		enum class EOutLineEffectType OutLineEffectType; // 0x00(0x04)
		bool bIsPlay; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPOutLineEffectComponent_TryForceStopAllEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_GPOutLineEffectComponent_StopOutLineEffectArry_Param
	{
	public:

		int32_t OutLineArry; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPOutLineEffectComponent_StopOutLineEffect_Param
	{
	public:

		enum class EOutLineEffectType OutLineType; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPOutLineEffectComponent_StopAllOutLineEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_GPOutLineEffectComponent_PlayOutLineEffectArry_Param
	{
	public:

		int32_t OutLineArry; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPOutLineEffectComponent_PlayOutLineEffect_Param
	{
	public:

		enum class EOutLineEffectType OutLineType; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPOutLineEffectComponent_OnOwnerCharacterDied_Param
	{
	public:

		struct AGPCharacterBase* CHARACTER; // 0x00(0x08)
		struct AController* Killer; // 0x08(0x08)
		struct UDamageType* DamageType; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPOutLineEffectComponent_GetMatInstance_Param
	{
	public:

		struct UMaterialInterface* mateInerface; // 0x00(0x08)
		struct UMaterialInstanceDynamic* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPOutLineEffectComponent_CreateStaticMeshCopy_Param
	{
	public:

		struct UStaticMeshComponent* StaticMesh; // 0x00(0x08)
		struct UMaterialInstanceDynamic* Mat; // 0x08(0x08)
		struct UMaterialInterface* SecondPassmat; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPParachuteComponent_UpdatePlayerParachuteActorInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPParachuteComponent_TryParachute_Param
	{
	public:

		struct FVector Origin; // 0x00(0x0c)
		struct FVector Dest; // 0x0c(0x0c)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPGameplay_GPParachuteComponent_ShowParachuteActorTpp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPParachuteComponent_SetParachuteActorAttachToSocket_Param
	{
	public:

	};

	struct Function_GPGameplay_GPParachuteComponent_ServerReplicateParachuteInfos_Param
	{
	public:

		enum class EPlayerParachutePhaseType Phase; // 0x00(0x01)
		char MovementType; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPParachuteComponent_OnRep_ParachuteInfoChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_GPParachuteComponent_OnPostWorldOriginOffsetChange_Param
	{
	public:

		struct UWorld* InWorld; // 0x00(0x08)
		struct FIntVector Loc1; // 0x08(0x0c)
		struct FIntVector Loc2; // 0x14(0x0c)
	};

	struct Function_GPGameplay_GPParachuteComponent_OnParachuteViewShow_Param
	{
	public:

		struct FString FunctionName; // 0x00(0x10)
		struct UBaseUIView* View; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPParachuteComponent_IsPlayerParachute_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPParachuteComponent_IsParachuting_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPParachuteComponent_IsGlide_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPParachuteComponent_GetAnimDataComponent_Param
	{
	public:

		struct UGPAnimDataComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPathFollowComponent_TransToCustomSpeed_Param
	{
	public:

		float InTargetSpeed; // 0x00(0x04)
		float InFadingDistance; // 0x04(0x04)
		bool bShouldKeepCustomSpeed; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPPathFollowComponent_ToggleReverse_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPathFollowComponent_Stop_Param
	{
	public:

		bool bIsAllowedInClient; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPathFollowComponent_SetReverse_Param
	{
	public:

		bool bReverse; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPathFollowComponent_SetCurrentSpeed_Param
	{
	public:

		float Speed; // 0x00(0x04)
		bool bIsFixedSpeed; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPPathFollowComponent_Resume_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPathFollowComponent_PlayPathWithWayPoint_Param
	{
	public:

		struct AActor* InPath; // 0x00(0x08)
		struct AActor* InWayPoint; // 0x08(0x08)
		bool bForceReplay; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPPathFollowComponent_PlayPath_Param
	{
	public:

		struct AActor* InPath; // 0x00(0x08)
		bool bForceReplay; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPPathFollowComponent_Play_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPathFollowComponent_Pause_Param
	{
	public:

		struct FName reason; // 0x00(0x08)
		bool bIsAllowedInClient; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPPathFollowComponent_OnRep_ReplicatedSnapshotData_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPathFollowComponent_GetReplicatedSnapshotData_Param
	{
	public:

		struct FGPPathFollowSnapshotData ReturnValue; // 0x00(0xb0)
	};

	struct Function_GPGameplay_GPPathFollowComponent_GetPathFollowWayPointData_Param
	{
	public:

		struct FGPPathFollowWayPointData ReturnValue; // 0x00(0x28)
	};

	struct Function_GPGameplay_GPPathFollowComponent_GetLocalSnapshotData_Param
	{
	public:

		struct FGPPathFollowSnapshotData ReturnValue; // 0x00(0xb0)
	};

	struct Function_GPGameplay_GPPathFollowComponent_GetCurrentPathFollowProgress_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPathWayPoint_AttachToSpline_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPathWayPoint_AttachPointToCuspidalPoint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPathWayPoint_AttachAllPointsToSpline_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPerkComponent_RemovePerk_Param
	{
	public:

		uint32_t InPerkId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPerkComponent_RemoveAllPerks_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPerkComponent_OnRep_CharacterPerkArray_Param
	{
	public:

		struct FCharacterPerkFastArray OldCharacterPerkArray; // 0x00(0x120)
	};

	struct Function_GPGameplay_GPPerkComponent_GetCharacterPerks_Param
	{
	public:

		struct TArray<struct FCharacterPerk> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPPerkComponent_DumpPerkInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPerkSPEffectInstanceInterface_Tick_Param
	{
	public:

		float DeltaSeconds; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPerkSPEffectInstanceInterface_OnDeactive_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPerkSPEffectInstanceInterface_OnActive_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerCameraManager_SetPPS_GhostEffect_Param
	{
	public:

		bool bRadialBlur; // 0x00(0x01)
		bool bGhostEffect; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPPlayerCameraManager_SetForceAddDefaultPP_Param
	{
	public:

		bool InForceAddDefaultPP; // 0x00(0x01)
		bool InClearCachedPPBlends; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPPlayerCameraManager_SetDefaultFov_Param
	{
	public:

		float InFOV; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerCameraManager_RemovePostprocessMat_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerCameraManager_RefreshGNearClippingPlane_Param
	{
	public:

		float NearPlaneDistance; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerCameraManager_OnEnterGameFlowStage_Param
	{
	public:

		enum class EGameFlowStageType StageType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerCameraManager_GetZoomRateByFov_Param
	{
	public:

		float InFOV; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPPlayerCameraManager_GetSceneFov_Param
	{
	public:

		struct FVector2D ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPlayerCameraManager_GetFovWithZoomRate_Param
	{
	public:

		float InZoomRate; // 0x00(0x04)
		float InFOV; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPPlayerCameraManager_GetFOVAngleForSensitivity_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerCameraManager_GetForceAddDefaultPP_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerCameraManager_GetDesignAspect_Param
	{
	public:

		struct FVector2D ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPlayerCameraManager_GetBasicFovForScale_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerCameraManager_CalcSceneFov_Param
	{
	public:

		enum class EFovAdjustMode InFovAdjustMode; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector2D InDesignAspect; // 0x04(0x08)
		struct FVector2D InDesignFovs; // 0x0c(0x08)
		struct FVector2D InCurAspect; // 0x14(0x08)
		struct FVector2D ReturnValue; // 0x1c(0x08)
	};

	struct Function_GPGameplay_GPPlayerCameraManager_AddPostprocessMat_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMissionSubsystem_PlayerSetupMission_Param
	{
	public:

		struct AGPPlayerController* Player; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMissionSubsystem_PlayerFetchMission_Param
	{
	public:

		struct AGPPlayerController* Player; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMissionSubsystem_OnEndPlay_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMissionSubsystem_OnBeginPlay_Param
	{
	public:

		struct UObject* InObj; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMissionSubsystem_Get_Param
	{
	public:

		struct UObject* obj; // 0x00(0x08)
		struct UGPMissionSubsystem* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPPlayerMissionComponent_InitMission_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerMissionComponent_EndPlay_Param
	{
	public:

		enum class EEndPlayReason EndPlayReason; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerMissionComponent_BeginPlay_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMissionComponent_SimulateMissionReplicate_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMissionComponent_RemoveMissionDlalogGourpID_Param
	{
	public:

		struct FString Tag; // 0x00(0x10)
		int64_t GroupID; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPMissionComponent_OnRep_MissionScore_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMissionComponent_OnRep_MissionInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMissionComponent_OnRep_MissionGiver_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMissionComponent_InitAllMission_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMissionComponent_GetMissionDialogGroupID_Param
	{
	public:

		struct FString Tag; // 0x00(0x10)
		int64_t oldGourpID; // 0x10(0x08)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPGameplay_GPMissionComponent_GetLeftMissionTimeLimit_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPMissionComponent_GetFirstTargetTag_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPMissionComponent_GetFirstTarget_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPMissionComponent_AddMissionDialogGroupID_Param
	{
	public:

		struct FString Tag; // 0x00(0x10)
		int64_t GroupID; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPGameStateMissionComponent_unRegisterDelegates_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameStateMissionComponent_RegisterDelegates_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameStateMissionComponent_PlayerSetupMission_Param
	{
	public:

		struct AGPPlayerController* cpc; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPGameStateMissionComponent_GPActivateMissionMode_Param
	{
	public:

		bool Activate; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t Type; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPGameStateMissionComponent_GetGPMissionSubSystem_Param
	{
	public:

		struct UGPMissionSubsystem* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPlayerStart_CalcuOverlapPlayerCount_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPoolTriggerSphere_BP_OnPoolableUsed_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPoolTriggerSphere_BP_OnPoolableCreated_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPostEffectManager_UpdatePostprocessViewportParam_Param
	{
	public:

		struct UMaterialInstanceDynamic* CurDynamicMat; // 0x00(0x08)
		struct FVector2D InViewPortLeftTop; // 0x08(0x08)
		struct FVector2D InViewPortSize; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPPostEffectManager_UpdatePostEffectVectorParameters_Param
	{
	public:

		struct FString PostEffectName; // 0x00(0x10)
		struct FString ParameterName; // 0x10(0x10)
		struct FLinearColor Value; // 0x20(0x10)
	};

	struct Function_GPGameplay_GPPostEffectManager_UpdatePostEffectScalarParameters_Param
	{
	public:

		struct FString PostEffectName; // 0x00(0x10)
		struct FString ParameterName; // 0x10(0x10)
		float Value; // 0x20(0x04)
	};

	struct Function_GPGameplay_GPPostEffectManager_UpdateDisplayStyle_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPostEffectManager_SwitchDisplayStyle_Param
	{
	public:

		struct FString InStyle; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPPostEffectManager_SetPostScreenEffectActiveWithViewSize_Param
	{
	public:

		struct UMaterialInterface* MaterialInstanceDynamic; // 0x00(0x08)
		bool bEnabled; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FVector2D ViewportLeftTop; // 0x0c(0x08)
		struct FVector2D ViewportSize; // 0x14(0x08)
	};

	struct Function_GPGameplay_GPPostEffectManager_SetPostScreenEffectActive_Param
	{
	public:

		struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x00(0x08)
		bool bEnabled; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPPostEffectManager_SetPostEffectActive_Param
	{
	public:

		struct FString PostEffectName; // 0x00(0x10)
		bool bEnabled; // 0x10(0x01)
		enum class EPerfGearQualityLevel OverrideQualityLevel; // 0x11(0x01)
	};

	struct Function_GPGameplay_GPPostEffectManager_ResetDisplayStyle_Param
	{
	public:

		struct TArray<struct FString> ResetPanelList; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPPostEffectManager_RemoveScreenOCStaticMesh_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPostEffectManager_RemovePostScreenEffect_Param
	{
	public:

		struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPostEffectManager_RemovePostEffect_Param
	{
	public:

		struct FString PostEffectName; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPPostEffectManager_Get_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct AGPPostEffectManager* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPPostEffectManager_DisableAllStyle_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPostEffectManager_DisableAllPostEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPostEffectManager_AddScreenOCStaticMesh_Param
	{
	public:

	};

	struct Function_GPGameplay_GPProjectileGameComponent_UnRegisterFXItem_Param
	{
	public:

		struct UObject* Owner; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPProjectileGameComponent_RegisterFXItem_Param
	{
	public:

		struct UObject* Owner; // 0x00(0x08)
		struct FVector ZeroBasedCenter; // 0x08(0x0c)
		float Dist; // 0x14(0x04)
	};

	struct Function_GPGameplay_GPProjectileGameComponent_NeedResetTranslucencySort_Param
	{
	public:

		struct UFXResourceContainerComponent* InFXComponent; // 0x00(0x08)
		float Distance; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GPProjectileGameComponent_IsOverlapFXItem_Param
	{
	public:

		struct FVector ZeroBasedCenter; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct UObject* IgnoredOwner; // 0x10(0x08)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPGameplay_GPPushedComponent_ServerReplicatePushedInfos_Param
	{
	public:

		bool bIsClientPushed; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector Velocity; // 0x04(0x0c)
	};

	struct Function_GPGameplay_GPRushMoveComponent_TickRush3P_Param
	{
	public:

	};

	struct Function_GPGameplay_GPRushMoveComponent_StopCheckRushMoveCheckVault_Param
	{
	public:

	};

	struct Function_GPGameplay_GPRushMoveComponent_ServerRushMoveDirection_Param
	{
	public:

		struct FVector MoveDirection; // 0x00(0x0c)
		float v1; // 0x0c(0x04)
		float v2; // 0x10(0x04)
		float v3; // 0x14(0x04)
		float v4; // 0x18(0x04)
	};

	struct Function_GPGameplay_GPRushMoveComponent_PlayAudio_Param
	{
	public:

	};

	struct Function_GPGameplay_GPRushMoveComponent_OnRushMoveCheckVault_Param
	{
	public:

	};

	struct Function_GPGameplay_GPRushMoveComponent_NetMulticastRushMoveDirection_Param
	{
	public:

		struct FVector MoveDirection; // 0x00(0x0c)
		float v1; // 0x0c(0x04)
		float v2; // 0x10(0x04)
		float v3; // 0x14(0x04)
		float v4; // 0x18(0x04)
	};

	struct Function_GPGameplay_GPRushMoveComponent_BeginCheckRushMoveCheckVault_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSceneActorReplicator_OnServerActorChannelInfoUpdate_Param
	{
	public:

		struct FGPActorChannelInfo ActorChannelInfo; // 0x00(0x14)
	};

	struct Function_GPGameplay_GPSceneActorReplicator_OnSceneWeaponBeginFire_Param
	{
	public:

		struct AActor* CHARACTER; // 0x00(0x08)
		struct AActor* WeaponPawn; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPSceneActorReplicator_OnRep_RepSceneActorInfos_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSceneActorReplicator_OnRep_OnSpawned_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSceneActorReplicator_NetMulticast_SceneWeaponOnFireInfos_Param
	{
	public:

		struct TArray<struct FSceneWeaponOnFireInfo> InSceneWeaponOnFireInfoArr; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPSceneActorReplicator_NetMulticast_SceneVehicleLocationNew_Param
	{
	public:

		struct FHudDataLocSceneVehicleInfo SceneVehicleInfo; // 0x00(0x20)
		struct FHudDataLocMsg HudDataLocMsg; // 0x20(0x10)
	};

	struct Function_GPGameplay_GPSceneActorReplicator_NetMulticast_CharacterLocationNew_Param
	{
	public:

		struct FHudDataLocCharacterInfo CharacterInfo; // 0x00(0x20)
		struct FHudDataLocMsg HudDataLocMsg; // 0x20(0x10)
	};

	struct Function_GPGameplay_GPSceneComponent_CallConstructionScript_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSceneQuery_CheckQueryCachesExpired_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSceneQueryInterface_UpdateMovableSceneElement_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSceneQueryInterface_UnregisterSceneQuery_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSceneQueryInterface_RegisterSceneQuery_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSeamlessEnterSubsystem_StartIrisSeamlessEnter_Param
	{
	public:

		struct FName MapName; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSeamlessEnterSubsystem_IsInSeamlessEnter_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSharedRepairInterface_RepairGetMaxHealth_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSharedRepairInterface_RepairGetCurrentHealth_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSharedRepairInterface_RepairGetCharacter_Param
	{
	public:

		struct ACHARACTER* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSharedRepairInterface_RepairChangeHealth_Param
	{
	public:

		float HealthAdd; // 0x00(0x04)
		struct FHitResult HitResult; // 0x04(0x88)
	};

	struct Function_GPGameplay_GPSharedRepairInterface_GetAllRepairRecord_Param
	{
	public:

		struct TMap<uint64_t, float> InRepairRecordMap; // 0x00(0x50)
	};

	struct Function_GPGameplay_GPSharedRepairInterface_AddRepairRecord_Param
	{
	public:

		uint64_t PlayerUin; // 0x00(0x08)
		float InRepairTime; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPSHPlayerController_OnInputUnSprint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSHPlayerController_OnInputUnJump_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSHPlayerController_OnInputTurnAtRate_Param
	{
	public:

		float Rate; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSHPlayerController_OnInputTurn_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSHPlayerController_OnInputToggleProne_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSHPlayerController_OnInputToggleCrouch_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSHPlayerController_OnInputSprint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSHPlayerController_OnInputSilentWalk_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSHPlayerController_OnInputMoveRight_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSHPlayerController_OnInputMoveForward_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSHPlayerController_OnInputLookUpAtRate_Param
	{
	public:

		float Rate; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSHPlayerController_OnInputLookUp_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSHPlayerController_OnInputJump_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSHPlayerController_GetGPSHCharacter_Param
	{
	public:

		struct AGPSafeHouseCharacter* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSHPlayerController_GetGPPlayerInput_Param
	{
	public:

		struct UGPPlayerInput* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_WantUseEx_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		bool isCancel; // 0x04(0x01)
		bool ReturnValue; // 0x05(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_WantUse_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		struct FSkillEventArgs Args; // 0x04(0x0c)
		bool isCancel; // 0x10(0x01)
		bool ReturnValue; // 0x11(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_UpdateServerPreviewData_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FAbilityBlackBorad_PreviewActor Data; // 0x08(0x70)
	};

	struct Function_GPGameplay_GPSkillComponent_UpdateServerItemPreviewData_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		struct FVector Loc; // 0x04(0x0c)
		struct FVector SLOC; // 0x10(0x0c)
		struct FRotator Rot; // 0x1c(0x0c)
		bool Valid; // 0x28(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_UpdateLongPress_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_TrySkillInputCache_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		enum class ESkillBtnCall SkillCall; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FSkillEventArgs Args; // 0x08(0x0c)
	};

	struct Function_GPGameplay_GPSkillComponent_TryGiveSkill_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_TryGiveExpertSkill_Param
	{
	public:

		int32_t ExpertId; // 0x00(0x04)
		int32_t UltimateSkillId; // 0x04(0x04)
		int32_t ActiveSkillID; // 0x08(0x04)
		int32_t SupportSkillId; // 0x0c(0x04)
		int32_t PassiveSkillID; // 0x10(0x04)
		int32_t CommonPassiveSkillID; // 0x14(0x04)
		struct TArray<int32_t> CommonSkillIDList; // 0x18(0x10)
		bool ReturnValue; // 0x28(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_TryClearSkill_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_TryClearCD_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_TryClearAllSkill_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_TickUserCheckInputCache_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_TickReplicateSkillState_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_SwitchWeaponButtonPressed_Param
	{
	public:

		enum class ECharacterFSMEventDefine FSMEvent; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Value; // 0x04(0x04)
		struct UObject* EventObject; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_SwitchServerEndSkill_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_SkillPressCancelWeaponOperation_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		enum class ESkillBtnCall Call; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_SkillFireButton_Param
	{
	public:

		bool presse; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_SkillCheckFireDown_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_SetSpecialMeshAnimLod_Param
	{
	public:

		int32_t inLOD; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_SetSkillEventArgs_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		struct FSkillEventArgs Args; // 0x04(0x0c)
	};

	struct Function_GPGameplay_GPSkillComponent_SetSkillEntityVisible_Param
	{
	public:

		enum class ESkillUISlot SkillUISlot; // 0x00(0x01)
		bool Visible; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_SetSkillAttachMeshVisible_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		struct FName MeshName; // 0x04(0x08)
		bool Visible; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_SetExpertId_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_SetCurSkillCutOutCount_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_SetCanTickCommand_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		bool Enable; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_SetAbilityProp2Id_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_SetAbilityProp1Id_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_SetAbilityPassiveId_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_SetAbilityId_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_SetAbilityByType_Param
	{
	public:

		enum class ESkillLogicType Type; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerTriggerBehavior_Param
	{
	public:

		enum class ESkillBehavior skillbehavior; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t SkillId; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerSwitchWeaponSuccess_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_ServerReconnectEndAbility_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerPlayerRescueStartDelegate_Param
	{
	public:

		struct AGPCharacterBase* Player; // 0x00(0x08)
		struct AGPCharacterBase* RescueTarget; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerPlayerRescueEndDelegate_Param
	{
	public:

		struct AGPCharacterBase* Player; // 0x00(0x08)
		struct AGPCharacterBase* RescueTarget; // 0x08(0x08)
		bool IsSucess; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerMPGiveExpertSkill_Param
	{
	public:

		int32_t ExportId; // 0x00(0x04)
		int32_t UltimateSkillId; // 0x04(0x04)
		int32_t ActiveSkillID; // 0x08(0x04)
		int32_t SupportSkillId; // 0x0c(0x04)
		int32_t PassiveSkillID; // 0x10(0x04)
		int32_t CommonPassiveSkillID; // 0x14(0x04)
		int32_t CustomSkillId; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct TArray<int32_t> CommonSkillIDList; // 0x20(0x10)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerGiveSkill_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerGiveExpertSkill_Param
	{
	public:

		int32_t ExportId; // 0x00(0x04)
		int32_t UltimateSkillId; // 0x04(0x04)
		int32_t ActiveSkillID; // 0x08(0x04)
		int32_t SupportSkillId; // 0x0c(0x04)
		int32_t PassiveSkillID; // 0x10(0x04)
		int32_t CommonPassiveSkillID; // 0x14(0x04)
		struct TArray<int32_t> CommonSkillIDList; // 0x18(0x10)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerEnterFSM_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerEndAbility_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerDoTrigger_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		int32_t LogicID; // 0x04(0x04)
		enum class EAbilityTriggerType Type; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		int32_t Index; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerClearSkill_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerClearCD_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerClearAllSkill_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_ServerAddUserCommand_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		enum class ESkillBtnCall Call; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerActivateSucess_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerActivateState_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		struct FSkillEventArgs Args; // 0x04(0x0c)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerActivateSkill_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		struct FSkillEventArgs Args; // 0x04(0x0c)
	};

	struct Function_GPGameplay_GPSkillComponent_ServerActivateFailed_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_RPCSwitchMainWeapon_Param
	{
	public:

		enum class EWeaponSwitchType SwitchType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_RPC_CastSkillSeccess_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_RPC_CastSkillFailed_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_Rep_SkillEntityStates3p_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_Rep_SkillEntityStates_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_Rep_SkillDetailInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_RecordSkillEnterTime_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		float Time; // 0x04(0x04)
		int32_t ExcuteCount; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_RecordLogicLeave_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		int32_t ExcuteCount; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_RecordLogicEnter_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<int32_t> LogicNodes; // 0x08(0x10)
		int32_t ExcuteCount; // 0x18(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_RecordLastLogicEnter_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<int32_t> LogicNodes; // 0x08(0x10)
		int32_t ExcuteCount; // 0x18(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ProcessDataFlowRescueSuccess_Param
	{
	public:

		struct AActor* Teammate; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_ProcessDataFlowRescueStart_Param
	{
	public:

		struct AActor* Teammate; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_ProcessDataFlowRecordSwitchBunker_Param
	{
	public:

		struct AActor* BunkerWeaponActor; // 0x00(0x08)
		bool isSwitch; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_ProcessDataFlowRecordReleaseSmoke_Param
	{
	public:

		struct AActor* SmokeActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_ProcessDataFlowRecordReleaseBunker_Param
	{
	public:

		struct AActor* BunkerWeaponActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_ProcessDataFlowRecordBunkerKillTarget_Param
	{
	public:

		struct FKillInfo KillInfo; // 0x00(0x148)
	};

	struct Function_GPGameplay_GPSkillComponent_ProcessDataFlowRecordBunkerDead_Param
	{
	public:

		struct AActor* BunkerActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_ProcessDataFlowRecordBunkerBeActivated_Param
	{
	public:

		struct AActor* BunkerActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_ProcessDataFlowKillSupport_Param
	{
	public:

		struct FKillInfo KillInfo; // 0x00(0x148)
	};

	struct Function_GPGameplay_GPSkillComponent_ProcessDataFlowDeadSupport_Param
	{
	public:

		struct FKillInfo KillInfo; // 0x00(0x148)
	};

	struct Function_GPGameplay_GPSkillComponent_Process_Rep_SkillEntityStates3P_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_Process_Rep_SkillEntityStates_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_PreMatch_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_OnVehicleTakeDamage_Param
	{
	public:

		struct FDamageResultInfo DamageResult; // 0x00(0x5e0)
	};

	struct Function_GPGameplay_GPSkillComponent_OnUseSKillUpdateCharacterForbit_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		uint64_t Mask; // 0x08(0x08)
		bool Value; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_OnSkillWeaponFire_Param
	{
	public:

		enum class ESkillBehavior skillbehavior; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t SkillId; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_OnServerPlayerStartSlidingTackle_Param
	{
	public:

		struct AGPCharacter* SlidingCharacterOwner; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_OnServerPlayerEndSlidingTackle_Param
	{
	public:

		struct AGPCharacter* SlidingCharacterOwner; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_OnRushVoice_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_OnRecordStateChange_Param
	{
	public:

		enum class EFSMCharacterState CharacterState; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_OnRecordSkillStateChange_Param
	{
	public:

		enum class EFSMCharacterState CharacterState; // 0x00(0x01)
		enum class ESkillStateType SkillStateType; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_OnPossessedBy_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_OnPlayerUsePassiveSkill_Param
	{
	public:

		struct AActor* TargetActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_OnPlayerMakeDamage_Param
	{
	public:

		struct FDamageResultInfo DamageResult; // 0x00(0x5e0)
	};

	struct Function_GPGameplay_GPSkillComponent_OnPlayerKill_Param
	{
	public:

		struct FKillInfo KillInfo; // 0x00(0x148)
	};

	struct Function_GPGameplay_GPSkillComponent_OnPlayerDoRepair_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_OnPlayerBeKnockDown_Param
	{
	public:

		struct FKillInfo KillInfo; // 0x00(0x148)
	};

	struct Function_GPGameplay_GPSkillComponent_OnPlayerBeKilled_Param
	{
	public:

		struct FKillInfo KillInfo; // 0x00(0x148)
	};

	struct Function_GPGameplay_GPSkillComponent_OnPlayerAssistKill_Param
	{
	public:

		struct FKillInfo KillInfo; // 0x00(0x148)
	};

	struct Function_GPGameplay_GPSkillComponent_OnNetReconnectSuccess_Param
	{
	public:

		bool bReconnect; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_OnLongPress_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_OnLiveStateChange_Param
	{
	public:

		enum class ECharacterLiveStatus old; // 0x00(0x01)
		enum class ECharacterLiveStatus cur; // 0x01(0x01)
		char pad_2[0x6]; // 0x02(0x06)
		struct AActor* MakerActor; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_OnGPCharacterBeingAssassinateAction_Param
	{
	public:

		bool InAction; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_OnFireDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_OnClientSwitchWeaponSuccess_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_OnClientEnterSkillStateLog_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_OnCharacterReborn_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_OnCharacterCameraModeEndChanged_Param
	{
	public:

		bool IsFPP; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_OnCharacterCameraModeBeginChanged_Param
	{
	public:

		bool IsFPP; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_OnBeginRush_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_OnBeginLadderAction_Param
	{
	public:

		struct AGPCharacterBase* CHARACTER; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_OnBeginKnockBackAction_Param
	{
	public:

		struct AGPCharacterBase* CHARACTER; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_OnBeginBotControllAction_Param
	{
	public:

		struct AGPCharacterBase* CHARACTER; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_OnAsyncLoadTableComplete_Param
	{
	public:

		struct FSoftObjectPath AssetRef; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPSkillComponent_OnAbilityEntityTemplateLoad_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_OnAbilityAddDamageModifyItem_Param
	{
	public:

		struct FName Item; // 0x00(0x08)
		float Value; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct AGPCharacterBase* CHARACTER; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_NotifyActiveWeaponZoomStateChanged_Param
	{
	public:

		bool InZooming; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_NotifyActiveWeaponStateChanged_Param
	{
	public:

		enum class EGPWeaponStateType LastState; // 0x00(0x01)
		enum class EGPWeaponStateType NewState; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_MulSetAbilityByType_Param
	{
	public:

		enum class ESkillLogicType Type; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_MPTryGiveExpertSkill_Param
	{
	public:

		int32_t ExpertId; // 0x00(0x04)
		int32_t UltimateSkillId; // 0x04(0x04)
		int32_t ActiveSkillID; // 0x08(0x04)
		int32_t SupportSkillId; // 0x0c(0x04)
		int32_t PassiveSkillID; // 0x10(0x04)
		int32_t CommonPassiveSkillID; // 0x14(0x04)
		int32_t CustomSkillId; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct TArray<int32_t> CommonSkillIDList; // 0x20(0x10)
		bool UsePreviousBattleFiledSkill; // 0x30(0x01)
		bool ReturnValue; // 0x31(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_ModifySkillCDPercent_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		float DeltaPercent; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_ModifySkillCD_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		float DeltaTime; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_ModifyCDSpeed_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		float Speed; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_IsValidSkill_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_IsInSkillInputCache_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_IsC402_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_IsC401_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_IsC302_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_IsC301_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_IsC202_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_IsC201_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_IsC102_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_IsC101_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_GiveSkill_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_GetSpecialAttachMesh_Param
	{
	public:

		struct FName MeshName; // 0x00(0x08)
		struct UGPSkeletalMeshComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_GetSkillWeaponSkinApperanceInfo_Param
	{
	public:

		uint64_t SkillWeaponId; // 0x00(0x08)
		struct FWeaponSkinInfo ReturnValue; // 0x08(0x88)
	};

	struct Function_GPGameplay_GPSkillComponent_GetSkillWeaponSkinApperanceId_Param
	{
	public:

		uint64_t SkillWeaponId; // 0x00(0x08)
		uint64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_GetSkillUIStateByID_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		enum class ESkillUIState ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_GetSkillUIState_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		enum class ESkillUIState ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_GetSkillStateType_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		enum class ESkillStateType ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_GetSkillStateID_Param
	{
	public:

		enum class ESkillStateType SkillStateType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_GetSkillScoreCost_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_GetSkillRuntimeDuration_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_GetSkillRowByID_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillDataRow ReturnValue; // 0x08(0x588)
	};

	struct Function_GPGameplay_GPSkillComponent_GetSkillKeyStatus_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		enum class ESkillKeyStatus ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_GetSkillEntityDataBySlot_Param
	{
	public:

		enum class ESkillUISlot Slot; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FGPAbilityEntityData ReturnValue; // 0x08(0x318)
	};

	struct Function_GPGameplay_GPSkillComponent_GetSkillConflictType_Param
	{
	public:

		enum class ESkillStateType InSkillStateType; // 0x00(0x01)
		enum class ESkillStateType CurrentSkillStateType; // 0x01(0x01)
		char pad_2[0x2]; // 0x02(0x02)
		int32_t CheckSkill; // 0x04(0x04)
		enum class ESkillConflictResolveType ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_GetSkillConflictRow_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillConflictRow ReturnValue; // 0x08(0x70)
	};

	struct Function_GPGameplay_GPSkillComponent_GetSkillConfigDuration_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_GetRestoreRemainTime_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_GetRestoreConfigTime_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_GetLastUsedSkillCutOutCount_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_GetExpertId_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_GetCurrentArmedforceCommonData_Param
	{
	public:

		struct FArmedforceCommonData ReturnValue; // 0x00(0xa4)
	};

	struct Function_GPGameplay_GPSkillComponent_GetCDRemainTime_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_GetCDConfigTime_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_GetAvatarMeshAnimIns_Param
	{
	public:

		struct FName MeshName; // 0x00(0x08)
		bool FPP; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UGPAbilityAnimInstance* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_GetAvatarMesh_Param
	{
	public:

		struct FName MeshName; // 0x00(0x08)
		bool FPP; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct USkeletalMeshComponent* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_GetArmedforceCommonDataByExpertID_Param
	{
	public:

		int32_t ExpertId; // 0x00(0x04)
		struct FArmedforceCommonData ReturnValue; // 0x04(0xa4)
	};

	struct Function_GPGameplay_GPSkillComponent_GetAbilityGSComp_Param
	{
	public:

		struct UGPAbilityGameStateComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_GetAbilityDataSystem_Param
	{
	public:

		struct UGPAbilityDataSystem* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_FireButton_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		bool presse; // 0x04(0x01)
		bool ReturnValue; // 0x05(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_DSActivateSkill_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		struct FSkillEventArgs Args; // 0x04(0x0c)
	};

	struct Function_GPGameplay_GPSkillComponent_ConditionEnableSkillInputCache_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_ClientSwitchMainWeapon_Param
	{
	public:

		enum class EWeaponSwitchType SwitchType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_ClientShowUIStateTips_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		enum class ESkillUIState State; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		float Time; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ClientShowPanel_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		bool Show; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FName Name; // 0x08(0x08)
		float PanelLifetime; // 0x10(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ClientSetSkillTarget_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct AActor* InSkillTarget; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_ClientSetSkillItemGID_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		uint64_t gid; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_ClientPlayAudio2D_Param
	{
	public:

		struct UGPAudioEventAsset* InAudioAsset; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_ClientOnModifyCD_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ClientExecuteVehicleSkill_Param
	{
	public:

		struct FString Key; // 0x00(0x10)
		struct TArray<char> ParamterData; // 0x10(0x10)
	};

	struct Function_GPGameplay_GPSkillComponent_ClientClearWhenLiveStateChange_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ClientCharacterSpeak_Param
	{
	public:

		struct FName VoiceType; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_ClientActiveVehicleSkill_Param
	{
	public:

		struct FString Key; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPSkillComponent_ClearSkillInputCache_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_ClearSkill_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ClearCD_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ClearAllSkill_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_ClearAllCacheInput_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_CharacterSpeakName_Param
	{
	public:

		struct FString VoiceType; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPSkillComponent_CharacterSpeak_Param
	{
	public:

		struct FName VoiceType; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkillComponent_CanSkillInputCache_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_CancelRushVoice_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_BeginTickUserCheckInputCache_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillComponent_AddRepairRecord_Param
	{
	public:

		struct AActor* RepairedActor; // 0x00(0x08)
		float RepairTime; // 0x08(0x04)
		float RepairHealth; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ActivateSucess_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillComponent_ActivateState_CheckWeaponState_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		bool bIsBreakSkilling; // 0x04(0x01)
		bool ReturnValue; // 0x05(0x01)
	};

	struct Function_GPGameplay_GPSkillComponent_ActivateFailed_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillDataFlow_SetSkillState_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillDataFlow_GetExpertId_Param
	{
	public:

		struct AGPCharacter* Char; // 0x00(0x08)
		uint64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPSkillDataFlow_ClearSkillStates_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillDataFlow_AddSkillDataKnock_Param
	{
	public:

		int32_t ExpertId; // 0x00(0x04)
		int32_t UseSkillId; // 0x04(0x04)
		int32_t BuffId; // 0x08(0x04)
		bool bUseWheel; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GPSkillDataFlow_AddSkillDataHeal_Param
	{
	public:

		int32_t ExpertId; // 0x00(0x04)
		int32_t UseSkillId; // 0x04(0x04)
		int32_t BuffId; // 0x08(0x04)
		float HealCount; // 0x0c(0x04)
		bool bUseWheel; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPSkillDataFlow_AddSkillDataDamage_Param
	{
	public:

		int32_t ExpertId; // 0x00(0x04)
		int32_t UseSkillId; // 0x04(0x04)
		int32_t BuffId; // 0x08(0x04)
		float DamageCount; // 0x0c(0x04)
		bool bUseWheel; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPSkillDataFlow_AddSkillDataBuff_Param
	{
	public:

		enum class EDataFlowType FlowType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t ExpertId; // 0x04(0x04)
		int32_t UseSkillId; // 0x08(0x04)
		int32_t BuffId; // 0x0c(0x04)
		float BuffTime; // 0x10(0x04)
		bool bUseWheel; // 0x14(0x01)
	};

	struct Function_GPGameplay_GPSkillDataFlow_AddPOIName_Param
	{
	public:

		struct FString POIName; // 0x00(0x10)
		bool bIsKiller; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPSkillDataFlow_AddMovement_Param
	{
	public:

		enum class EDataFlowType Type; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector Distance; // 0x04(0x0c)
		bool bUseWheel; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPSkillEffectOptimize_IsEnablePlaySKillEffect_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FName EffectId; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPSkillProjectile_SetReleaseTimer_Param
	{
	public:

		float Val; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSkillProjectile_ReleaseToPool_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkillProjectile_ProcessProjectileDamage_Param
	{
	public:

		struct FHitResult HitResult; // 0x00(0x88)
		float InPenetrateDamageRate; // 0x88(0x04)
	};

	struct Function_GPGameplay_GPSkillProjectile_OnClientProjectileHit_Param
	{
	public:

		struct FHitResult HitResult; // 0x00(0x88)
	};

	struct Function_GPGameplay_GPSkillProjectile_OnBulletProjectileStop_Param
	{
	public:

		struct FHitResult ImpactResult; // 0x00(0x88)
	};

	struct Function_GPGameplay_GPSkillProjectile_OnBulletProjectileHit_Param
	{
	public:

		struct FHitResult ImpactResult; // 0x00(0x88)
	};

	struct Function_GPGameplay_GPSkillProjectile_OnBulletFinishCheckHit_Param
	{
	public:

		struct FVector EndLocation; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPSkillProjectile_InitializeMovement_Param
	{
	public:

		struct FVector BulletSpawnLoc; // 0x00(0x0c)
		struct FRotator BulletSpawnRot; // 0x0c(0x0c)
		float InitSpeed; // 0x18(0x04)
		float InInitSpeedFor3P; // 0x1c(0x04)
		float InZeroGravityDistance; // 0x20(0x04)
	};

	struct Function_GPGameplay_GPSkillProjectile_InitHitScan_Param
	{
	public:

		bool bShouldDelay; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSkillProjectile_InitBulletMovementComp_Param
	{
	public:

		struct FVector InFlyDir; // 0x00(0x0c)
		float InInitSpeed; // 0x0c(0x04)
		float InZeroDistance; // 0x10(0x04)
	};

	struct Function_GPGameplay_GPSkillProjectile_DoProcessProjectileDamage_Param
	{
	public:

		struct FHitResult HitResult; // 0x00(0x88)
		float InPenetrateDamageRate; // 0x88(0x04)
	};

	struct Function_GPGameplay_GPSkillProjectile_CheckHitArm_Param
	{
	public:

		struct FHitResult HitResult; // 0x00(0x88)
		bool ReturnValue; // 0x88(0x01)
	};

	struct Function_GPGameplay_GPSkillProjectile_CheckHitAndDamage_Param
	{
	public:

		struct FHitResult HitResult; // 0x00(0x88)
		struct FVector StartLoc; // 0x88(0x0c)
		struct FVector EndLoc; // 0x94(0x0c)
		bool ReturnValue; // 0xa0(0x01)
	};

	struct Function_GPGameplay_GPSlidingTackleComponent_ServerReplicateSlidingTackleInfos_Param
	{
	public:

		bool IsSliding; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSlidingTackleComponent_AimButtonReleased_Param
	{
	public:

		enum class ECharacterFSMEventDefine FSMEvent; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Value; // 0x04(0x04)
		struct UObject* EventObject; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPSlidingTackleComponent_AimButtonPressed_Param
	{
	public:

		enum class ECharacterFSMEventDefine FSMEvent; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Value; // 0x04(0x04)
		struct UObject* EventObject; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_StartCountDown_Param
	{
	public:

		struct FSlotChargingData Info; // 0x00(0x118)
		int32_t AddNum; // 0x118(0x04)
		float overrideTime; // 0x11c(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_ServerAddSlotChargingTime_Param
	{
	public:

		float Time; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_ResumeSlotCharging_Param
	{
	public:

		enum class ECharingSlot ChargingSlot; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_ResetPropsSlot_Param
	{
	public:

		int32_t cdid; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_ResetAllSlot_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSlotChargingComponent_Rep_RepCountdownInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSlotChargingComponent_Rep_bEXSkillDone_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSlotChargingComponent_RemoveSlotChargingData_Param
	{
	public:

		enum class ECharingSlot ChargingSlot; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_PauseSlotCharging_Param
	{
	public:

		enum class ECharingSlot ChargingSlot; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_OnReDeployStart_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSlotChargingComponent_OnReDeployEnd_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSlotChargingComponent_OnPlayerSeamlessEnterFinish_Param
	{
	public:

		uint64_t PlayerUin; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_OnFirstPlayerSeamlessEnterFinish_Param
	{
	public:

		uint64_t PlayerUin; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_OnCharacterAmmoCountChange_Param
	{
	public:

		struct AWeaponBase* Weapon; // 0x00(0x08)
		float WeaponAmmoCount; // 0x08(0x04)
		float CarryWeaponAmmoCount; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_ModifySlotChargingData_Param
	{
	public:

		enum class ECharingSlot ChargingSlot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Num; // 0x04(0x04)
		float Speed; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_IsValidSlot_Param
	{
	public:

		enum class ECharingSlot Slot; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_GetSlotTotalNum_Param
	{
	public:

		enum class ECharingSlot ChargingSlot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_GetSlotPercentTime_Param
	{
	public:

		enum class ECharingSlot Slot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_GetSlotPassTime_Param
	{
	public:

		enum class ECharingSlot Slot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_GetSlotNum_Param
	{
	public:

		enum class ECharingSlot ChargingSlot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_GetSlotMaxTime_Param
	{
	public:

		enum class ECharingSlot Slot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_GetSlotMaxNum_Param
	{
	public:

		enum class ECharingSlot ChargingSlot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_GetSlotLeftTime_Param
	{
	public:

		enum class ECharingSlot Slot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_GetSlotChargingCntByAmmoPack_Param
	{
	public:

		enum class ECharingSlot ChargingSlot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_GetSlotChargingCntByAmmoBox_Param
	{
	public:

		enum class ECharingSlot ChargingSlot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_GetSlotByID_Param
	{
	public:

		int32_t cdid; // 0x00(0x04)
		enum class ECharingSlot ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_GetSlotAmmoNum_Param
	{
	public:

		enum class ECharingSlot ChargingSlot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_GetDefaultSlotCarryNum_Param
	{
	public:

		enum class ECharingSlot ChargingSlot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_GetDefaultSlotAmmoNum_Param
	{
	public:

		enum class ECharingSlot ChargingSlot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_GetChargingSlotById_Param
	{
	public:

		int32_t cdid; // 0x00(0x04)
		enum class ECharingSlot ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_ComsumSlotWeaponNum_Param
	{
	public:

		enum class ECharingSlot ChargingSlot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t Num; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_ComsumSlotWeaponAmmoNum_Param
	{
	public:

		enum class ECharingSlot ChargingSlot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t Num; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_ClientSlotNumChange_Param
	{
	public:

		enum class ECharingSlot Slot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t Count; // 0x04(0x04)
		int32_t cdid; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_ClientSlotDone_Param
	{
	public:

		enum class ECharingSlot Slot; // 0x00(0x01)
		bool done; // 0x01(0x01)
		char pad_2[0x2]; // 0x02(0x02)
		int32_t cdid; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_AddSlotChargingNum_Param
	{
	public:

		enum class ECharingSlot Slot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t Num; // 0x04(0x04)
		float overrideTime; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPSlotChargingComponent_AddSlotChargingData_Param
	{
	public:

		int32_t cdid; // 0x00(0x04)
		enum class ECharingSlot ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPSoundVisualizationComponent_OnWeaponConfigTableLoadComplete_Param
	{
	public:

		struct FSoftObjectPath AssetRef; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPSoundVisualizationComponent_OnLocalCharacterBasePoseChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSoundVisualizationComponent_OnConfigTableLoadComplete_Param
	{
	public:

		struct FSoftObjectPath AssetRef; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPSoundVisualizationComponent_HandleSoundVisualizationWithNoRealActor_Param
	{
	public:

		enum class ESoundVisualizationType EventType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector SoundLocation; // 0x04(0x0c)
	};

	struct Function_GPGameplay_GPSoundVisualizationComponent_HandleSoundVisualizationOptimized_Param
	{
	public:

		struct AActor* SourceActor; // 0x00(0x08)
		struct AActor* ActorToBlame; // 0x08(0x08)
		enum class ESoundVisualizationType EventType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FVector SoundLocation; // 0x14(0x0c)
	};

	struct Function_GPGameplay_GPSoundVisualizationComponent_HandleSoundVisualization_Param
	{
	public:

		struct AActor* SourceActor; // 0x00(0x08)
		struct AActor* ActorToBlame; // 0x08(0x08)
		enum class ESoundVisualizationType EventType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FVector SoundLocation; // 0x14(0x0c)
	};

	struct Function_GPGameplay_GPSplinePath_FindDistanceAlongSplineClosestToLocation_Param
	{
	public:

		struct FVector Location; // 0x00(0x0c)
		float ReturnValue; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPSplinePath_CreateWaypointAtScreenCenter_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSplinePath_CreateWaypoint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSplinePath_AttachWayPointsToSpline_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSpringArmComponent_SetLeaveVehicleLerpSpringArm_Param
	{
	public:

		bool bLerp; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float LerpTime; // 0x04(0x04)
		float SpringArmLength; // 0x08(0x04)
		struct FVector NewTargetOffset; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_GPSpringArmComponent_SetCameraModeToNpcTalk_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSprintComponent_UnSprint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSprintComponent_UnSilentWalk_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSprintComponent_UnHalfSquatWalk_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSprintComponent_Sprint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSprintComponent_SilentWalk_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSprintComponent_ServerEnterSuperSprint_Param
	{
	public:

		bool bEnter; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSprintComponent_OnOwnerCharacterReborn_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSprintComponent_OnOwnerCharacterDied_Param
	{
	public:

		struct AGPCharacterBase* CHARACTER; // 0x00(0x08)
		struct AController* Killer; // 0x08(0x08)
		struct UDamageType* DamageType; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPSprintComponent_HalfSquatWalk_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSprintComponent_GetIsSprinting_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSprintComponent_GetIsSilentWalk_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSprintComponent_GetIsHalfSquatWalk_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSprintComponent_CanSprint_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSprintComponent_CanSilentWalk_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPStaminaDataComponent_UpdateStaminaHudAnimSprint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPStaminaDataComponent_UpdateStaminaHudAnim_Param
	{
	public:

		enum class EStaminaIndependentChangeType StaminaChangeType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPStaminaDataComponent_UpdateStamina_Param
	{
	public:

		float DeltaSeconds; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPStaminaDataComponent_UpdateActionStaminaStatus_Param
	{
	public:

	};

	struct Function_GPGameplay_GPStaminaDataComponent_UnSprint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPStaminaDataComponent_SetStaminOnClient_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPStaminaDataComponent_RequestStaminaChange_Param
	{
	public:

		enum class EStaminaIndependentChangeType StaminaChangeType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float DeltaSeconds; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPStaminaDataComponent_OnStaminaChanged_Param
	{
	public:

		struct FOnGPAttributeChangeData CallbackData; // 0x00(0x60)
	};

	struct Function_GPGameplay_GPStaminaDataComponent_OnRep_CanSuperSprint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPStaminaDataComponent_OnRep_CanSprint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPStaminaDataComponent_IsTiredStateAllowSuperSprint_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPStaminaDataComponent_IsTiredStateAllowSprint_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPStaminaDataComponent_IsStaninaLowInSuperSprint_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPStaminaDataComponent_IsStaninaLow_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPStaminaDataComponent_GetStaninaValue_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPStaminaDataComponent_GetStaninaPercentGivingValue_Param
	{
	public:

		float Current; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPStaminaDataComponent_GetStaninaPercent_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPStaminaDataComponent_GetStaminaIndependentChangeInfo_Param
	{
	public:

		enum class EStaminaIndependentChangeType Type; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FStaminaIndependentChangeInfo ReturnValue; // 0x04(0x10)
	};

	struct Function_GPGameplay_GPStaminaDataComponent_GetStaminaExclusiveChangeInfo_Param
	{
	public:

		enum class EStaminaExclusiveChangeType Type; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FStaminaExclusiveChangeInfo ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPStaminaDataComponent_GetMaxStaninaValue_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPStaticMeshComponent_SetMultiDrawEffect_Param
	{
	public:

		bool InDrawMultiEffect; // 0x00(0x01)
		bool InReverseCulling; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPStaticMeshComponent_SetEffectPassMaterial_Param
	{
	public:

		struct UMaterialInterface* InEffectPassMaterial; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSubtitleLevelSubsystem_ServerRequestSubtitleSequence_Param
	{
	public:

		struct FName SubtitleSeqId; // 0x00(0x08)
		enum class ESubtitleSequenceType SubtitleSeqType; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct AActor* SpeakerActor; // 0x10(0x08)
		struct TArray<int32_t> TeamIds; // 0x18(0x10)
	};

	struct Function_GPGameplay_GPSubtitleLevelSubsystem_OnRep_CurrentSubtitleSeqId_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSubtitleLevelSubsystem_Get_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AGPSubtitleLevelSubsystem* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_SubTileViewCreated_Param
	{
	public:

		struct FString FunctionName; // 0x00(0x10)
		struct UBaseUIView* View; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_StopSubtitleGroup_Param
	{
	public:

		struct FName SubtitleGroupId; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_SkipCurrentSubtitleSequence_Param
	{
	public:

		struct FName SubtitleSeqId; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_SkipCurrentSubtitle_Param
	{
	public:

		struct FName SubtitleSeqId; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_RequestSubtitleSequenceWithTeamId_Param
	{
	public:

		struct FName SubtitleSeqId; // 0x00(0x08)
		enum class ESubtitleSequenceType SubtitleSeqType; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct TArray<int32_t> TeamIds; // 0x10(0x10)
		struct AActor* SpeakerActor; // 0x20(0x08)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_RequestSubtitleSequence_Param
	{
	public:

		struct FName SubtitleSeqId; // 0x00(0x08)
		enum class ESubtitleSequenceType SubtitleSeqType; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct AActor* SpeakerActor; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_RequestSubtitleGroup_Param
	{
	public:

		struct FName SubtitleGroupId; // 0x00(0x08)
		enum class ESubtitleSequenceType SubtitleSeqType; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct AActor* SpeakerActor; // 0x10(0x08)
		int32_t SubtitleGroupIdx; // 0x18(0x04)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_PlaySubtitleGroupSequence_Param
	{
	public:

		struct FSubtitleGroupItem SubtitleGroupItem; // 0x00(0x18)
		enum class ESubtitleSequenceType CurrentSubtitleSeqType; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct AActor* SpeakerActor; // 0x20(0x08)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_OnSubtitleSeqFinished_Param
	{
	public:

		int32_t SubtitleIdx; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSubtitleSequenceInfo SubtitleSeqInfo; // 0x08(0x38)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_OnSubtitleInteractorKeyPressed_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_GetSubtitleGroupDataTableName_Param
	{
	public:

		enum class ESubtitleSequenceType SubtitleSeqType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FName ReturnValue; // 0x04(0x08)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_GetCurrentSubtitleSeq_Param
	{
	public:

		struct FSubtitleSequenceInfo CurrentInfo; // 0x00(0x38)
		int32_t ReturnValue; // 0x38(0x04)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_GetCurrentSubtitleGroupInfo_Param
	{
	public:

		struct FSubtitleGroupInfo ReturnValue; // 0x00(0x90)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_GetAkActorOnCharacterMeshSocket_Param
	{
	public:

		struct AActor* TargetCharacter; // 0x00(0x08)
		struct FName SocketName; // 0x08(0x08)
		struct AActor* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_Get_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UGPSubtitleWorldSubsystem* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_ClientRequestSubtitleSequenceOverrideSpeakerName_Param
	{
	public:

		struct FName SubtitleSeqId; // 0x00(0x08)
		enum class ESubtitleSequenceType SubtitleSeqType; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct FText SpeakerName; // 0x10(0x18)
		struct AActor* SpeakerActor; // 0x28(0x08)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_ClientRequestSubtitleSequenceOverride_Param
	{
	public:

		struct FText SpeakerName; // 0x00(0x18)
		struct FText SubtitleContent; // 0x18(0x18)
		struct UGPAudioEventAsset* AudioAsset; // 0x30(0x08)
		float SubtitleDuration; // 0x38(0x04)
		char pad_3C[0x4]; // 0x3c(0x04)
		struct AActor* SpeakerActor; // 0x40(0x08)
		bool bOverrideSamePriority; // 0x48(0x01)
		char SubtitlePriority; // 0x49(0x01)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_ClientRequestSubtitleSequence_Param
	{
	public:

		struct FName SubtitleSeqId; // 0x00(0x08)
		enum class ESubtitleSequenceType SubtitleSeqType; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct AActor* SpeakerActor; // 0x10(0x08)
		struct TArray<int32_t> TeamIds; // 0x18(0x10)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_CheckIfSubtitleGroupItemNeedLoop_Param
	{
	public:

		struct FSubtitleGroupItem SubtitleGroupItem; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_CheckIfSubtitleGroupFinished_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_CheckIfSubtitleGroupCloseToFinished_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_CheckIfCurrentSubtitleGroupPlaying_Param
	{
	public:

		struct FName SubtitleGroupId; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPSubtitleWorldSubsystem_CheckIfCanSkipCurrentSubtitleGroup_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPTeamComponent_UpdateTeamComponentInfo_Param
	{
	public:

	};

	struct DelegateFunction_GPGameplay_GPTeamComponent_TeamInfoUpdateSignature__DelegateSignature_Param
	{
	public:

		struct FTeamInfo TeamInfo; // 0x00(0x150)
	};

	struct Function_GPGameplay_GPTeamComponent_GetTeamID_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPTeamComponent_GetCamp_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPTestReplicatedComponent_ServerSetReplicateIntValue_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPTestReplicatedComponent_ServerSetReplicateFloatValue_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPTestReplicatedComponent_ServerSetConfigIntValue_Param
	{
	public:

		int32_t Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPTestReplicatedComponent_ServerSetConfigFloatValue_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPTestReplicatedComponent_OnRep_TestInt_Param
	{
	public:

	};

	struct Function_GPGameplay_GPTestReplicatedComponent_OnRep_TestFloat_Param
	{
	public:

	};

	struct Function_GPGameplay_GPTransitionMoveComponent_OnRep_TargetRotation_Param
	{
	public:

	};

	struct Function_GPGameplay_GPTransitionMoveComponent_OnRep_TargetAbsoluteLocation_Param
	{
	public:

	};

	struct Function_GPGameplay_GPTransitionMoveComponent_BeginTransitionMovement_Param
	{
	public:

		struct FVector InAbsoluteLocation; // 0x00(0x0c)
		struct FRotator InRotation; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_TryLeaveClimbLadder_Param
	{
	public:

		enum class EClimbLadderCheckType CheckType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float CurMoveExplicitTime; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_TryClimbLadder_Param
	{
	public:

		enum class EClimbLadderCheckType CheckType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_SetLadderPointTransform_Param
	{
	public:

		struct FTransform BottomStart; // 0x00(0x30)
		struct FTransform BottomEnd; // 0x30(0x30)
		struct FTransform TopStart; // 0x60(0x30)
		struct FTransform TopEnd; // 0x90(0x30)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_SetbInLadderCheckBox_Param
	{
	public:

		bool bInCheckBox; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_ServerReplicateVaultInfos_Param
	{
	public:

		struct FGPVaultRepInfo InVaultRepInfo; // 0x00(0x98)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_ServerReplicateClimbLadderMoveInfo_Param
	{
	public:

		struct FRepGPClimbLadderMoveInfo RepInfo; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_ServerReplicateClimbLadderInfos_Param
	{
	public:

		struct FGPClimbLadderRepInfo RepInfo; // 0x00(0xe0)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_ServerReplicateClimbLadderActorLocation_Param
	{
	public:

		struct FTransform CharacterTransform; // 0x00(0x30)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_ServerCheckClimbLadderCollision_Param
	{
	public:

		struct FGPClimbLadderRepInfo RepInfo; // 0x00(0xe0)
		bool ReturnValue; // 0xe0(0x01)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_ReachClimbLadderSequenceBreakPointTime_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_ProcessInputAction_Param
	{
	public:

		char InputAction; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_OnRep_ClimbLadderRepInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_OnRep_ClimbLadderMoveInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_OnRep_ClimbLadderCharacterTransform_Param
	{
	public:

	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_OnOwnerCharacterReborn_Param
	{
	public:

	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_OnOwnerCharacterDied_Param
	{
	public:

		struct AGPCharacterBase* CHARACTER; // 0x00(0x08)
		struct AController* Killer; // 0x08(0x08)
		struct UDamageType* DamageType; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_IsVaulting_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_IsMoveBackwardOnAccel_Param
	{
	public:

		struct FVector Accel; // 0x00(0x0c)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_IsInClimbLadderWithAnim_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_IsInClimbLadder_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_GetClimbLadderSequenceBreakPointTime_Param
	{
	public:

		struct UAnimSequence* ClimbLadderSequence; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_FixClimbLadderTransform_Param
	{
	public:

		enum class EClimbLadderFixTransformType FixType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_ClientDebugPoint_Param
	{
	public:

		struct FVector Loc; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPVaultAndClimbComponent_CheckClimbLadderCollision_Param
	{
	public:

		enum class EClimbLadderCheckType CheckType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPVehicleBase_SwitchSpecificSeat_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		struct FName SeatName; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPVehicleBase_SwitchSeat_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		struct FName SeatName; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPVehicleBase_SetEnableNetSync_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVehicleBase_QuerySeatExist_Param
	{
	public:

		struct FName SeatName; // 0x00(0x08)
		struct AActor* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPVehicleBase_QueryNearestAvailableSeatEx_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		enum class EVehicleSeatType SeatType; // 0x08(0x01)
		bool StrongType; // 0x09(0x01)
		char pad_A[0x2]; // 0x0a(0x02)
		struct FName ReturnValue; // 0x0c(0x08)
	};

	struct Function_GPGameplay_GPVehicleBase_QueryNearestAvailableSeat_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		bool DriverPerfect; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FName ReturnValue; // 0x0c(0x08)
	};

	struct Function_GPGameplay_GPVehicleBase_QueryDriver_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPVehicleBase_QueryAvailableSeatEx_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		enum class EVehicleSeatType SeatType; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FName ReturnValue; // 0x0c(0x08)
	};

	struct Function_GPGameplay_GPVehicleBase_QueryAllPassengers_Param
	{
	public:

		struct TArray<struct AActor*> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPVehicleBase_QueryActorExist_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		struct FName SeatName; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPVehicleBase_OnVehicleExtraPartInfosChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_GPVehicleBase_OnPhysicsSimulatedForceClosedChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_GPVehicleBase_OnMarkedCampIDArrayChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_GPVehicleBase_KickAllPassengers_Param
	{
	public:

	};

	struct Function_GPGameplay_GPVehicleBase_IsDefaultFPP_Param
	{
	public:

		struct FName SeatName; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPVehicleBase_InteractorSwitchSeat_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		enum class EVehicleSeatType TargetVehicleSeatType; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FName SeatName; // 0x0c(0x08)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_GPGameplay_GPVehicleBase_InteractorGetOn_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		enum class EVehicleSeatType VehicleSeatType; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FName ResultSeat; // 0x0c(0x08)
		bool isTeleport; // 0x14(0x01)
		bool isUseSpecificSeat; // 0x15(0x01)
		char pad_16[0x2]; // 0x16(0x02)
		struct FName SpecificSeat; // 0x18(0x08)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_GPGameplay_GPVehicleBase_InteractorGetOff_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		bool bIsTeleport; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_GPVehicleBase_GetSeatMapping_Param
	{
	public:

		struct TMap<struct AActor*, struct FName> ReturnValue; // 0x00(0x50)
	};

	struct Function_GPGameplay_GPVehicleBase_GetOn_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		struct FName SeatName; // 0x08(0x08)
		bool bIsTeleport; // 0x10(0x01)
		bool ReturnValue; // 0x11(0x01)
	};

	struct Function_GPGameplay_GPVehicleBase_GetOff_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		bool bIsTeleport; // 0x08(0x01)
		bool bIsToFloorPoint; // 0x09(0x01)
		bool ReturnValue; // 0x0a(0x01)
	};

	struct Function_GPGameplay_GPVehicleBase_CustomBPEvent_Param
	{
	public:

		int32_t OpCode; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPVehicleAnimDataComponent_GetCharacterGetOffAnimation_Param
	{
	public:

		struct FName SeatName; // 0x00(0x08)
		struct UAnimationAsset* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_TrySwitchSeat_Param
	{
	public:

		struct FName SeatName; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_SetParentAttachment_Param
	{
	public:

		struct APawn* Parent; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_SetOnCarPassOut_Param
	{
	public:

		bool bPassOut; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_SetInVehicleLeanOut_Param
	{
	public:

		bool isLeanOut; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_ServerTrySwitchSeat_Param
	{
	public:

		struct FName SeatName; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_ServerSetWeaponSeatInfo_Param
	{
	public:

		struct FName SeatName; // 0x00(0x08)
		struct FRotator Rotator; // 0x08(0x0c)
		int32_t WeaponIdx; // 0x14(0x04)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_ServerReplicateVehicleLeanOut_Param
	{
	public:

		bool bLeanOut; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_ServerGetOnCarWithSpecificSeat_Param
	{
	public:

		struct APawn* Vehicle; // 0x00(0x08)
		struct FName SeatName; // 0x08(0x08)
		bool bTeleportGetOnOff; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_OnVehiclePlayerViewToServer_Param
	{
	public:

		struct FRotator PlayViewRotation; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_OnRep_OnVehicleDebugShow_Param
	{
	public:

	};

	struct Function_GPGameplay_GPVehicleDataComponent_OnRep_OnVehicleChange_Param
	{
	public:

	};

	struct Function_GPGameplay_GPVehicleDataComponent_OnRep_OnParentAttachmentChange_Param
	{
	public:

	};

	struct Function_GPGameplay_GPVehicleDataComponent_OnRep_DataNotifyNumber_Param
	{
	public:

	};

	struct Function_GPGameplay_GPVehicleDataComponent_IsOnVehicleWeaponSeat_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_GetVehicleMesh_Param
	{
	public:

		struct USkeletalMeshComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_GetVehicle_Param
	{
	public:

		struct APawn* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_GetSeat_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_GetParentAttachment_Param
	{
	public:

		struct APawn* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_GetOnTest_Param
	{
	public:

		struct APawn* Vehicle; // 0x00(0x08)
		struct FName SeatName; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_GetOnCarWithSpecificSeat_Param
	{
	public:

		struct APawn* Vehicle; // 0x00(0x08)
		struct FName SeatName; // 0x08(0x08)
		bool bTeleportGetOnOff; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_GetOn_Param
	{
	public:

		struct APawn* Vehicle; // 0x00(0x08)
		struct FName SeatName; // 0x08(0x08)
		bool isTeleport; // 0x10(0x01)
		enum class EAnimVehicleSeatType SeatAnimType; // 0x11(0x01)
		bool bCanRot; // 0x12(0x01)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_GetOffVehicle_Param
	{
	public:

		struct APawn* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_GetOffTest_Param
	{
	public:

	};

	struct Function_GPGameplay_GPVehicleDataComponent_GetLastSeatName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_GetLastSeat_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_GetDieOnVehicle_Param
	{
	public:

		struct APawn* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_GetbSittingInVehicle_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_GetbIsTeleport_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_GetbCanRatationInVehicle_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_Client2ServerUpdateLeanOutOffset_Param
	{
	public:

		bool bIsLeanOut; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector offset; // 0x04(0x0c)
	};

	struct Function_GPGameplay_GPVehicleDataComponent_CheckCanVehicleLeanOut_Param
	{
	public:

		bool bAfterLeanOut; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPVehiclePhysicsReplicationComponent_BrocastPhysicsReplicatedDataToClients_Param
	{
	public:

		uint32_t BrocastedId; // 0x00(0x04)
		char pad_4[0xc]; // 0x04(0x0c)
		struct FGPVehiclePhysicsReplicatedData ReplicatedData; // 0x10(0x40)
	};

	struct Function_GPGameplay_GPVisiableActorGroup_ServerSetActorGroupVisiable_Param
	{
	public:

		bool Visiable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVisiableActorGroup_OnRep_IsGroupVisiable_Param
	{
	public:

	};

	struct Function_GPGameplay_GPWeaponAbilityFireModeLauncher_TrySpawnFakeBullet_Param
	{
	public:

		struct FWeaponFireRepInfo RepInfo; // 0x00(0x80)
	};

	struct Function_GPGameplay_GPWeaponAbilityFireModeLauncher_OnSwitchWeaponNextFrame_Param
	{
	public:

	};

	struct Function_GPGameplay_GPWeaponAbilityFireModeLauncher_OnEndfireSwitchWeaponInNextFrame_Param
	{
	public:

	};

	struct Function_GPGameplay_GPWeaponSkillComponent_GetIsAttaching_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPWorldSettings_ProcessLoadLevelPercentage_Param
	{
	public:

		int32_t Percentage; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPWorldSettings_GetWorldSettings_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AGPWorldSettings* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPWorldSettings_GetGameRuleSetting_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		enum class EGameRuleType RuleType; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct FGPGameRuleSetting ReturnValue; // 0x10(0x78)
	};

	struct Function_GPGameplay_InteractorRepairInterface_SetRepairSpeed_Param
	{
	public:

		float InRepairSpeed; // 0x00(0x04)
	};

	struct Function_GPGameplay_InteractorRepairInterface_SetLastRepairTime_Param
	{
	public:

		float InLastRepairTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_InteractorRepairInterface_ServerStartRepair_Param
	{
	public:

	};

	struct Function_GPGameplay_InteractorRepairInterface_ServerRepairInterrupt_Param
	{
	public:

	};

	struct Function_GPGameplay_InteractorRepairInterface_ServerRepairEnd_Param
	{
	public:

	};

	struct Function_GPGameplay_InteractorRepairInterface_RepairingHealth_Param
	{
	public:

		float InHealth; // 0x00(0x04)
	};

	struct Function_GPGameplay_InteractorRepairInterface_IsNeedRepair_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_InteractorRepairInterface_GetRepairSpeed_Param
	{
	public:

		float InRepairSpeed; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_InteractorRepairInterface_GetRepairDuration_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_InteractorRepairInterface_GetLastRepairTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_InteractorRepairInterface_GetCurrentNeedRepairHealth_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_InteractorRepairInterface_GetAllRepairRecord_Param
	{
	public:

		struct TMap<uint64_t, float> InRepairRecordMap; // 0x00(0x50)
	};

	struct Function_GPGameplay_InteractorRepairInterface_ClientStartRepair_Param
	{
	public:

	};

	struct Function_GPGameplay_InteractorRepairInterface_ClientRepairInterrupt_Param
	{
	public:

	};

	struct Function_GPGameplay_InteractorRepairInterface_ClientRepairEnd_Param
	{
	public:

	};

	struct Function_GPGameplay_InteractorRepairInterface_AddRepairRecord_Param
	{
	public:

		uint64_t PlayerUin; // 0x00(0x08)
		float InRepairTime; // 0x08(0x04)
	};

	struct Function_GPGameplay_LauncherDataComponentEffect_OnC301LauncherFire_Param
	{
	public:

		int32_t LastBulletCnt; // 0x00(0x04)
	};

	struct Function_GPGameplay_LauncherDataComponentEffect_InitMaterialInstance_Param
	{
	public:

	};

	struct Function_GPGameplay_MaterialSequencerPlayer_Update_Param
	{
	public:

		float Time; // 0x00(0x04)
	};

	struct Function_GPGameplay_MaterialSequencerPlayer_Stop_Param
	{
	public:

	};

	struct Function_GPGameplay_MaterialSequencerPlayer_Play_Param
	{
	public:

		struct UMaterialSequencer* InBindSequence; // 0x00(0x08)
	};

	struct Function_GPGameplay_MaterialSequencerPlayer_IsPlaying_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_MaterialSequencerPlayer_InitWithMultiMaterials_Param
	{
	public:

		struct TArray<struct UMaterialInterface*> InBindMaterials; // 0x00(0x10)
	};

	struct Function_GPGameplay_MaterialSequencerPlayer_InitWithMultiMaterialProxys_Param
	{
	public:

		struct TArray<struct UGPMaterialProxy*> InBindMaterials; // 0x00(0x10)
	};

	struct Function_GPGameplay_MaterialSequencerPlayer_Init_Param
	{
	public:

		struct UMaterialSequencer* InBindSequence; // 0x00(0x08)
		struct UMaterialInterface* InBindMaterial; // 0x08(0x08)
	};

	struct Function_GPGameplay_MaterialSequencerPlayer_GetDataFloat_Param
	{
	public:

		struct FName ParamName; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_ModularApperanceBaseProvider_GetMergeableRow_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		uint64_t AppearanceId; // 0x08(0x08)
		struct FPartsMergeableRow ReturnValue; // 0x10(0x48)
	};

	struct Function_GPGameplay_ModularApperanceBaseProvider_GetAppearanceData_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		uint64_t AppearanceId; // 0x08(0x08)
		struct FPartsStyleAppearanceRow ReturnValue; // 0x10(0xb8)
	};

	struct Function_GPGameplay_ModularApperanceBaseProvider_DoesPackageExist_Param
	{
	public:

		struct UModularWeaponDesc* Desc; // 0x00(0x08)
		struct FString OutErrorInfo; // 0x08(0x10)
		enum class EWeaponPartMeshType PartMesh; // 0x18(0x01)
		bool ReturnValue; // 0x19(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDataComponentDynamicAppearance_OnLoadWeaponDynamicPartsSkeletalMeshCompleted_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> Assets; // 0x00(0x10)
		struct USkeletalMeshComponent* InMainSkeletalMeshComponent; // 0x10(0x08)
		struct UModularWeaponDesc* InModularWeaponDesc; // 0x18(0x08)
		struct TArray<uint64_t> InModularWeaponDescNodeMergingGUIDList; // 0x20(0x10)
		struct TArray<enum class EAdapterItemType> InitSrcDynamicPartTypeList; // 0x30(0x10)
		struct TArray<uint64_t> InSrcDynamicSubMeshGUIDList; // 0x40(0x10)
		struct TArray<struct FName> InSrcDynamicSubMeshAttachBoneNameList; // 0x50(0x10)
		struct TArray<uint64_t> InSrcDynamicSubMeshAttachMeshGUIDList; // 0x60(0x10)
		bool bInFirstPerson; // 0x70(0x01)
		bool bFPP; // 0x71(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDataComponentDynamicAppearance_OnAnimLoadCompleted_Param
	{
	public:

		struct FSoftObjectPath AssetRef; // 0x00(0x18)
	};

	struct Function_GPGameplay_ModularWeaponMeshProxy_SetSoftDepthOffset_Param
	{
	public:

		float SoftOffset; // 0x00(0x04)
	};

	struct Function_GPGameplay_ModularWeaponMeshProxy_SetForceLodEnable_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponMeshProxy_SetForceLOD_Param
	{
	public:

		int32_t LodCount; // 0x00(0x04)
	};

	struct Function_GPGameplay_ModularWeaponMeshProxy_ProcessDynamicParts_Param
	{
	public:

		struct UModularWeaponDesc* ModularWeaponDesc; // 0x00(0x08)
		bool bLocalPlayer; // 0x08(0x01)
		bool bFPP; // 0x09(0x01)
	};

	struct Function_GPGameplay_ModularWeaponMeshProxy_OnMergeComplete_Param
	{
	public:

		bool InbMergeSuccess; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct UModularWeaponDesc* Desc; // 0x08(0x08)
		struct USkeletalMesh* MergeSkeletalMesh; // 0x10(0x08)
		uint32_t MeshID; // 0x18(0x04)
		bool bInFirstPerson; // 0x1c(0x01)
		bool bInFPP; // 0x1d(0x01)
		bool bTeam; // 0x1e(0x01)
	};

	struct Function_GPGameplay_ModularWeaponMeshProxy_OnLoadWeaponDynamicPartsSkeletalMeshCompleted_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> Assets; // 0x00(0x10)
		struct USkeletalMeshComponent* InMainSkeletalMeshComponent; // 0x10(0x08)
		struct UModularWeaponDesc* InModularWeaponDesc; // 0x18(0x08)
		bool bInFirstPerson; // 0x20(0x01)
		bool bFPP; // 0x21(0x01)
	};

	struct Function_GPGameplay_ModularWeaponMeshProxy_IsDynamicPart_Param
	{
	public:

		enum class EAdapterItemType InAdpaterType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_ModularWeaponMeshProxy_GetFallbackMesh_Param
	{
	public:

		struct USkeletalMesh* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponMeshProxy_GetDynamicPartMeshComponentByAdapterType_Param
	{
	public:

		enum class EAdapterItemType InAdapterType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct USkeletalMeshComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_ModularWeaponMeshProxy_GetDynamicPartMeshComponent_Param
	{
	public:

		uint64_t Guid; // 0x00(0x08)
		struct USkeletalMeshComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_ModularWeaponMeshProxy_BuildDynamicPartSkeletalMeshComponents_Param
	{
	public:

		struct USkeletalMeshComponent* MainSkeletalMeshComponent; // 0x00(0x08)
		struct UModularWeaponDesc* InModularWeaponDesc; // 0x08(0x08)
		struct TArray<uint64_t> InMergingGUIDList; // 0x10(0x10)
		struct TArray<enum class EAdapterItemType> InDynamicPartTypeList; // 0x20(0x10)
		struct TArray<uint64_t> InDynamicSubMeshGUIDList; // 0x30(0x10)
		struct TArray<struct FName> InDynamicSubMeshAttachBoneNameList; // 0x40(0x10)
		struct TArray<uint64_t> InDynamicSubMeshAttachMeshGUIDList; // 0x50(0x10)
		bool bInFirstPerson; // 0x60(0x01)
		bool bFPP; // 0x61(0x01)
	};

	struct Function_GPGameplay_ModularWeaponMeshProxy_AsyncModifyModularWeapon_Param
	{
	public:

		struct UModularWeaponDesc* InWeaponDesc; // 0x00(0x08)
		bool bLocalPlayer; // 0x08(0x01)
		bool bFPP; // 0x09(0x01)
		bool InShouldUseAttachParentBound; // 0x0a(0x01)
		bool bTeam; // 0x0b(0x01)
	};

	struct Function_GPGameplay_ModularWeaponSkeletonGeneratorComponent_TestMergeModularWeaponRuntimeSkeleton_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponSkeletonGeneratorComponent_OnLoadWeaponPartSkeletalMeshCompleted_Param
	{
	public:

		struct FSoftObjectPath AssetPath; // 0x00(0x18)
		uint64_t ItemID; // 0x18(0x08)
	};

	struct Function_GPGameplay_ModularWeaponSkeletonGeneratorComponent_LoadWeaponAllPartsSkeletalMesh_Param
	{
	public:

		struct UModularWeaponDesc* WeaponDesc; // 0x00(0x08)
		int32_t RootIndex; // 0x08(0x04)
	};

	struct Function_GPGameplay_ModularWeaponSkeletonGeneratorComponent_GenerateWeaponRuntimeMergedSkeletonInternal_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponSkeletonGeneratorComponent_GenerateWeaponRuntimeMergedSkeleton_Param
	{
	public:

		struct UModularWeaponDesc* WeaponDesc; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponPartsMerge_OnMeshMergerFinshed_Param
	{
	public:

		bool bMergeSuccss; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct URuntimeSkeletalMesh* RuntimeSkeletalMesh; // 0x08(0x08)
		uint32_t MeshID; // 0x10(0x04)
	};

	struct Function_GPGameplay_ModularWeaponPartsMerge_OnLoadWeaponSkeletalMeshCompeleted_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> Assets; // 0x00(0x10)
	};

	struct Function_GPGameplay_ModularWeaponPartsMerge_OnLoadWeaponAllPartsSkeletalMeshCompleted_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> Assets; // 0x00(0x10)
		struct TArray<int32_t> PartNodeIdxs; // 0x10(0x10)
	};

	struct Function_GPGameplay_ModularWeaponPartsMerge_OnAsyncMeshMergeCompleted_Param
	{
	public:

		struct URuntimeSkeletalMesh* RuntimeSkeletalMesh; // 0x00(0x08)
		enum class EMeshMergeResultType MergeResultType; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		uint32_t MeshID; // 0x0c(0x04)
	};

	struct Function_GPGameplay_ModularWeaponPartsMerge_AddMeshOverrideMaterial_Param
	{
	public:

		struct UWeaponSkinModifier* SkinModify; // 0x00(0x08)
		int32_t MeshIdx; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		uint64_t ItemID; // 0x10(0x08)
		uint64_t SkinApperanceId; // 0x18(0x08)
		bool bLockAppearance; // 0x20(0x01)
		char pad_21[0x3]; // 0x21(0x03)
		int32_t LOD; // 0x24(0x04)
		int32_t SectionIdx; // 0x28(0x04)
		char pad_2C[0x4]; // 0x2c(0x04)
		struct UMaterialInterface* SrcMaterial; // 0x30(0x08)
		struct FWeaponSkinInfo SkinInfo; // 0x38(0x88)
	};

	struct Function_GPGameplay_ModularWeaponMergingTask_OnLoadWeaponPartSkeletalMeshCompleted_Param
	{
	public:

		struct FSoftObjectPath AssetPath; // 0x00(0x18)
		uint64_t ItemID; // 0x18(0x08)
	};

	struct Function_GPGameplay_ModularWeaponBuildingTask_OnMergeComplete_Param
	{
	public:

		bool bSuccess; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct UModularWeaponDesc* Desc; // 0x08(0x08)
		struct USkeletalMesh* MergeSkeletalMesh; // 0x10(0x08)
		uint32_t MeshID; // 0x18(0x04)
		bool bInFirstPerson; // 0x1c(0x01)
		bool bInFPP; // 0x1d(0x01)
		bool bInTeammate; // 0x1e(0x01)
	};

	struct Function_GPGameplay_ModularWeaponBuildingTask_OnLoadWeaponDynamicPartsSkeletalMeshCompleted_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> Assets; // 0x00(0x10)
		struct TArray<uint64_t> InModularWeaponDescNodeMergingGUIDList; // 0x10(0x10)
		struct TArray<enum class EAdapterItemType> InInitSrcDynamicPartTypeList; // 0x20(0x10)
		struct TArray<uint64_t> InSrcDynamicSubMeshGUIDList; // 0x30(0x10)
		struct TArray<struct FName> InSrcDynamicSubMeshAttachBoneNameList; // 0x40(0x10)
		struct TArray<uint64_t> InSrcDynamicSubMeshAttachMeshGUIDList; // 0x50(0x10)
		bool bInFirstPerson; // 0x60(0x01)
		bool bFPP; // 0x61(0x01)
	};

	struct Function_GPGameplay_ModularWeaponUtil_WeaponSpaceSocketLocationToRelativeLocation_Param
	{
	public:

		struct UModularWeaponDesc* InDesc; // 0x00(0x08)
		int32_t FindSocketPartNodeIndex; // 0x08(0x04)
		int32_t PartNodeIndex; // 0x0c(0x04)
		struct FVector InOutWeaponSpaceLoc; // 0x10(0x0c)
		struct FRotator InOutWeaponSpaceRotator; // 0x1c(0x0c)
		enum class EWeaponPartMeshType MeshType; // 0x28(0x01)
		char pad_29[0x3]; // 0x29(0x03)
		struct FVector OutLoc; // 0x2c(0x0c)
		struct FRotator OutRotator; // 0x38(0x0c)
	};

	struct Function_GPGameplay_ModularWeaponUtil_GetWeaponSpaceSocketLocation_Param
	{
	public:

		struct UModularWeaponDesc* InDesc; // 0x00(0x08)
		int32_t PartNodeIndex; // 0x08(0x04)
		struct FName SocketName; // 0x0c(0x08)
		enum class EWeaponPartMeshType MeshType; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		struct FVector OutLoc; // 0x18(0x0c)
		struct FRotator OutRotator; // 0x24(0x0c)
	};

	struct Function_GPGameplay_ModularWeaponUtil_GetUIAssetNameByItemId_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		uint64_t ItemMeshId; // 0x08(0x08)
		uint64_t SkinApperanceId; // 0x10(0x08)
		enum class EWeaponPartMeshType MeshType; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		struct FName ReturnValue; // 0x1c(0x08)
	};

	struct Function_GPGameplay_ModularWeaponUtil_GetPartValidInstallList_Param
	{
	public:

		uint64_t PartItemId; // 0x00(0x08)
		struct TArray<struct FPartsRuleRow> ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_ModularWeaponUtil_GetPartsDefaultItemInfoFromDesc_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		uint64_t ItemGUID; // 0x08(0x08)
		uint64_t SocketGUID; // 0x10(0x08)
		struct UModularWeaponDesc* Desc; // 0x18(0x08)
		struct FItemInfoContext ReturnValue; // 0x20(0x60)
	};

	struct Function_GPGameplay_ModularWeaponUtil_GetPartsDefaultItemInfo_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		int32_t Durability; // 0x08(0x04)
		char BindType; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		uint64_t BindPlayerId; // 0x10(0x08)
		bool bRawBinded; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct FItemInfoContext ReturnValue; // 0x20(0x60)
	};

	struct Function_GPGameplay_ModularWeaponUtil_GetFixedMeshItemId_Param
	{
	public:

		struct UModularWeaponDesc* InWeaponDesc; // 0x00(0x08)
		struct FGPModularWeaponPartNode PartNode; // 0x08(0x120)
		uint64_t ReturnValue; // 0x128(0x08)
	};

	struct Function_GPGameplay_ModularWeaponUtil_GetBoneRelativeLocationByUIAssetName_Param
	{
	public:

		struct FName AssetName; // 0x00(0x08)
		struct FName SocketName; // 0x08(0x08)
		struct FVector OutRelativeLocation; // 0x10(0x0c)
		struct FRotator OutRotator; // 0x1c(0x0c)
		bool ReturnValue; // 0x28(0x01)
	};

	struct Function_GPGameplay_ModularWeaponUtil_GetBoneRelativeLocationByItemId_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		uint64_t ItemMeshId; // 0x08(0x08)
		uint64_t SkinApperanceId; // 0x10(0x08)
		struct FName SocketName; // 0x18(0x08)
		enum class EWeaponPartMeshType MeshType; // 0x20(0x01)
		char pad_21[0x3]; // 0x21(0x03)
		struct FVector OutRelativeLocation; // 0x24(0x0c)
		struct FRotator OutRotator; // 0x30(0x0c)
		bool ReturnValue; // 0x3c(0x01)
	};

	struct Function_GPGameplay_ModularWeaponUtil_GetBoneRelativeLocation_Param
	{
	public:

		struct USkeletalMesh* InSkeletalMesh; // 0x00(0x08)
		struct FName SocketName; // 0x08(0x08)
		struct FVector OutRelativeLocation; // 0x10(0x0c)
		bool ReturnValue; // 0x1c(0x01)
	};

	struct Function_GPGameplay_ModularWeaponWorldSubSystem_RecycleGPModularWeaponDescNextFrame_Param
	{
	public:

		struct UGPModularWeaponDesc* InGPModularWeaponDesc; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponWorldSubSystem_RecycleGPModularWeaponDesc_Param
	{
	public:

		struct UGPModularWeaponDesc* InGPModularWeaponDesc; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponWorldSubSystem_PreAllocateGPModularWeaponDesc_Param
	{
	public:

		int32_t InAllocateNum; // 0x00(0x04)
	};

	struct Function_GPGameplay_ModularWeaponWorldSubSystem_AcquireGPModularWeaponDesc_Param
	{
	public:

		bool bAutoRecycleNextFrame; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct UGPModularWeaponDesc* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_MovementReplicationActor_OnRepMovementInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_MovementReplicationActor_BroadcastAILocation_Param
	{
	public:

		struct TArray<struct FVector> Locations; // 0x00(0x10)
	};

	struct Function_GPGameplay_MultiPostProcessManager_Get_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct UMultiPostProcessManager* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_MultiWeaponManagerInterface_RemoveWeaponManagerBySlot_Param
	{
	public:

		char WeaponSlot; // 0x00(0x01)
	};

	struct Function_GPGameplay_MultiWeaponManagerInterface_GetWeaponManagerBySlot_Param
	{
	public:

	};

	struct Function_GPGameplay_MultiWeaponManagerInterface_GetOrCreateWeaponManagerBySlot_Param
	{
	public:

	};

	struct Function_GPGameplay_MultiWeaponManagerInterface_GetAllWeaponManagers_Param
	{
	public:

	};

	struct Function_GPGameplay_PlaySequenceAnimListCallbackProxy_OnSequenceAnimListPlayEnded_Param
	{
	public:

		bool bInterrupted; // 0x00(0x01)
	};

	struct Function_GPGameplay_PlaySequenceAnimListCallbackProxy_CreateProxyObjectForPlaySequenceAnimList_Param
	{
	public:

		struct UGPAnimProxyComponent* AnimProxyComponent; // 0x00(0x08)
		struct FSequenceAnimListParam AnimListParam; // 0x08(0x10)
		struct UPlaySequenceAnimListCallbackProxy* ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameplay_RangeScopeSceneCaptureComponent_OnScopeCaptureLoaded_Param
	{
	public:

		struct FSoftObjectPath ScopeCaptureSP; // 0x00(0x18)
	};

	struct Function_GPGameplay_RangeScopeSceneCaptureComponent_DrawCaptureArea_Param
	{
	public:

		struct AHUD* HUD; // 0x00(0x08)
		struct UCanvas* Canvas; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPDSSceneExporterInterface_OnStaticSceneExport_Param
	{
	public:

		struct TMap<struct FString, struct FString> MetaData; // 0x00(0x50)
	};

	struct Function_GPGameplay_DFMScreenEffectInterface_SetupSourceActor_Param
	{
	public:

		struct AActor* SourceActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_DFMScreenEffectInterface_OnUpdateState_Param
	{
	public:

		struct FName EffectName; // 0x00(0x08)
	};

	struct Function_GPGameplay_DFMScreenEffectInterface_OnUpdateEffectLinearColorParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		struct FLinearColor InValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_DFMScreenEffectInterface_OnUpdateEffectFloatParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		float InValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_DFMScreenEffectInterface_OnFadeOut_Param
	{
	public:

		struct FName EffectName; // 0x00(0x08)
	};

	struct Function_GPGameplay_DFMScreenEffectInterface_OnDeactive_Param
	{
	public:

		struct FName EffectName; // 0x00(0x08)
	};

	struct Function_GPGameplay_DFMScreenEffectInterface_OnActive_Param
	{
	public:

		struct FName EffectName; // 0x00(0x08)
	};

	struct Function_GPGameplay_DFMScreenEffectInterface_NeedRemoveUIWhenDeactive_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_ScreenEffectManager_RemoveScreenEffect_Param
	{
	public:

		struct FName EffectName; // 0x00(0x08)
	};

	struct Function_GPGameplay_ScreenEffectManager_OnLoadEffectInfo_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> InPath; // 0x00(0x10)
		struct FScreenEffectInfo ScreenEffectInfo; // 0x10(0xf0)
		struct FName EffectName; // 0x100(0x08)
		bool bbAutoActive; // 0x108(0x01)
	};

	struct Function_GPGameplay_ScreenEffectManager_GetScreenEffectController_Param
	{
	public:

		struct FName EffectName; // 0x00(0x08)
		struct UScreenEffectControllerBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_ScreenEffectManager_Get_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct UScreenEffectManager* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_ScreenEffectManager_CheckRemoveOptimization_Param
	{
	public:

		struct FName Effect; // 0x00(0x08)
	};

	struct Function_GPGameplay_ScreenEffectManager_CheckAddOptimization_Param
	{
	public:

		struct FName Effect; // 0x00(0x08)
	};

	struct Function_GPGameplay_ScreenEffectManager_AddScreenEffect_Param
	{
	public:

		struct FName EffectName; // 0x00(0x08)
	};

	struct Function_GPGameplay_SeamlessReconnectSubSystem_StopListenNetDisconnect_Param
	{
	public:

	};

	struct Function_GPGameplay_SeamlessReconnectSubSystem_StartListenNetDisconnect_Param
	{
	public:

	};

	struct Function_GPGameplay_SeamlessReconnectSubSystem_SetEnableSeamlessReconnect_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_SeamlessReconnectSubSystem_ReStartReconnect_Param
	{
	public:

	};

	struct Function_GPGameplay_SeamlessReconnectSubSystem_OnNetReconnectSuccess_Param
	{
	public:

		bool bReconnect; // 0x00(0x01)
	};

	struct Function_GPGameplay_SeamlessReconnectSubSystem_OnNetReconnectPlayerControllerCreated_Param
	{
	public:

		struct APlayerController* NewPC; // 0x00(0x08)
	};

	struct Function_GPGameplay_SeamlessReconnectSubSystem_OnNetReconnectFail_Param
	{
	public:

	};

	struct Function_GPGameplay_SeamlessReconnectSubSystem_OnNetDisconnectWithoutWorld_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
		struct UNetDriver* NetDriver; // 0x08(0x08)
	};

	struct Function_GPGameplay_SeamlessReconnectSubSystem_OnNetDisconnect_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
		struct UNetDriver* NetDriver; // 0x08(0x08)
		enum class ENetworkFailure FailureType; // 0x10(0x01)
	};

	struct Function_GPGameplay_SeamlessReconnectSubSystem_NetDisconnectTest_Param
	{
	public:

	};

	struct Function_GPGameplay_SeamlessReconnectSubSystem_Get_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct USeamlessReconnectSubSystem* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_SeamlessReconnectSubSystem_BrowseSuccessChecker_Param
	{
	public:

	};

	struct Function_GPGameplay_SkillSubsystem_RemoveSkillEntityData_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_SkillSubsystem_GetSkillEntityData_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FGPAbilityEntityData ReturnValue; // 0x08(0x318)
	};

	struct Function_GPGameplay_SkillSubsystem_GetSkillConfigData_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillConfigData ReturnValue; // 0x08(0x38)
	};

	struct Function_GPGameplay_SkillSubsystem_GetRowConfigFromDataTable_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillDataRow ReturnValue; // 0x08(0x588)
	};

	struct Function_GPGameplay_SkillSubsystem_GetRowConfig_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillDataRow ReturnValue; // 0x08(0x588)
	};

	struct Function_GPGameplay_SkillSubsystem_GetGSComponent_Param
	{
	public:

		struct UGPAbilityGameStateComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_SkillSubsystem_GetGameStateNoSafeHouse_Param
	{
	public:

		struct AGPGameState* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_SkillSubsystem_GetConflictRowConfigFromDataTable_Param
	{
	public:

		int32_t ID; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillConflictRow ReturnValue; // 0x08(0x70)
	};

	struct Function_GPGameplay_SkillSubsystem_GetConflictRowConfig_Param
	{
	public:

		int32_t ID; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillConflictRow ReturnValue; // 0x08(0x70)
	};

	struct Function_GPGameplay_SkillSubsystem_ClearEntityData_Param
	{
	public:

	};

	struct Function_GPGameplay_SkillSubsystem_AddSkillEntityData_Param
	{
	public:

		int32_t SkillEntityUniqueID; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FGPAbilityEntityData ReturnValue; // 0x08(0x318)
	};

	struct Function_GPGameplay_SwitchWeaponTimeLineOwnerInterface_ServerVerifyFrameImp_Param
	{
	public:

		struct FSwitchWeaponFrame ClientFrame; // 0x00(0x38)
		struct FSwitchWeaponAntiCheatCode InCheckCode; // 0x38(0x08)
		bool ReturnValue; // 0x40(0x01)
	};

	struct Function_GPGameplay_SwitchWeaponTimeLineOwnerInterface_OnReceiveRemoteFrameInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_SwitchWeaponTimeLineOwnerInterface_OnAddFrame_Param
	{
	public:

		struct FSwitchWeaponFrame InFrame; // 0x00(0x38)
	};

	struct Function_GPGameplay_SwitchWeaponTimeLineOwnerInterface_HasAuthority_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_SwitchWeaponTimeLineOwnerInterface_DoVerifyFrame_Param
	{
	public:

		struct FSwitchWeaponFrame CurFrame; // 0x00(0x38)
		struct FSwitchWeaponFrame NewFrame; // 0x38(0x38)
		bool ReturnValue; // 0x70(0x01)
	};

	struct Function_GPGameplay_SwitchWeaponTimeLineOwnerInterface_DoAntiCheatCheck_Param
	{
	public:

		struct FSwitchWeaponFrame KeyFrame; // 0x00(0x38)
		struct FSwitchWeaponAntiCheatCode AntiCheatCode; // 0x38(0x08)
		bool ReturnValue; // 0x40(0x01)
	};

	struct Function_GPGameplay_SwitchWeaponTimeLineOwnerInterface_ClientNotifyFrameInValidImp_Param
	{
	public:

		int32_t ClientFrameNo; // 0x00(0x04)
	};

	struct Function_GPGameplay_SwitchWeaponTimeLineOwnerInterface_AddOrUpdateRemoteData_Param
	{
	public:

		struct FSwitchWeaponFrame InFrame; // 0x00(0x38)
	};

	struct Function_GPGameplay_TeamSystem_ServerRemoveFromTeam_Param
	{
	public:

		struct AController* C; // 0x00(0x08)
	};

	struct Function_GPGameplay_TeamSystem_ServerAddToTeam_Param
	{
	public:

		struct AController* C; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_TeamSystem_OnUpdateMemberInfoArray_Param
	{
	public:

		struct AController* InPlayer; // 0x00(0x08)
	};

	struct Function_GPGameplay_TeamSystem_OnPlayerLogin_Param
	{
	public:

		struct AController* Controller; // 0x00(0x08)
		bool bIsPlayerFromZoneSvr; // 0x08(0x01)
	};

	struct Function_GPGameplay_TeamSystem_OnPlayerDropMatch_Param
	{
	public:

		struct AController* Controller; // 0x00(0x08)
		bool bShouldFullyCleanUp; // 0x08(0x01)
	};

	struct Function_GPGameplay_TeamSystem_OnPlayerDied_Param
	{
	public:

		struct AController* Player; // 0x00(0x08)
	};

	struct Function_GPGameplay_TeamSystem_OnBotLogin_Param
	{
	public:

		struct AController* Controller; // 0x00(0x08)
	};

	struct Function_GPGameplay_TeamSystem_GetTeamInfoByTeamId_Param
	{
	public:

		int32_t TeamId; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FTeamInfo InTeamInfo; // 0x08(0x150)
		bool ReturnValue; // 0x158(0x01)
	};

	struct Function_GPGameplay_TextureMergeComponent_AsyncMergeInputTextures_Param
	{
	public:

		struct TArray<struct UTexture2D*> InputTexArray; // 0x00(0x10)
		int32_t TargetTexureSize; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct UObject* ObjectNotify; // 0x18(0x08)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_GPGameplay_TextureMergeComponent_AsyncMergeInputTextureGroups_Param
	{
	public:

		struct TArray<struct UTexture2D*> InputBaseColorTexArray; // 0x00(0x10)
		struct TArray<struct FVector4> InputColorTargeUVTransform; // 0x10(0x10)
		struct TArray<struct UTexture2D*> InputMACTexArray; // 0x20(0x10)
		struct TArray<struct FVector4> InputMACTargetUVTransform; // 0x30(0x10)
		struct TArray<struct UTexture2D*> InputNRTextureTexArray; // 0x40(0x10)
		struct TArray<struct FVector4> InputNRTargetUVTransform; // 0x50(0x10)
		int32_t TargetTexureSize; // 0x60(0x04)
		char pad_64[0x4]; // 0x64(0x04)
		struct UObject* ObjectNotify; // 0x68(0x08)
		bool ReturnValue; // 0x70(0x01)
	};

	struct Function_GPGameplay_WeaponActorSpawnerInterface_SpawnWeapon_Param
	{
	public:

		struct FWeaponActorSpawnParam WeaponActorSpawnParam; // 0x00(0x198)
		struct FWeaponActorSpawnerHandle OutHandle; // 0x198(0x08)
		bool ReturnValue; // 0x1a0(0x01)
	};

	struct Function_GPGameplay_WeaponActorSpawnerInterface_Reset_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponActorSpawnerInterface_Reclaim_Param
	{
	public:

		struct UObject* obj; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponActorSpawnerInterface_CleanUp_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponActorSpawnerInterface_CancelSpawn_Param
	{
	public:

		struct FWeaponActorSpawnerHandle Handle; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponAimAssistor_OnInitAssets_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> Curves; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponAimAssistor_OnCheckCharacterCanTrace_Param
	{
	public:

		struct ACHARACTER* CheckCharacter; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponAimAssistor_GetOverrideFilterBones_Param
	{
	public:

		struct ACHARACTER* CheckCharacter; // 0x00(0x08)
		bool bFoundOverride; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct TArray<struct FName> ReturnValue; // 0x10(0x10)
	};

	struct Function_GPGameplay_WeaponAnimSummaryIndexManager_IsLazy_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponAttributeLimitManager_GetAttriValueByName_Param
	{
	public:

		uint64_t RecID; // 0x00(0x08)
		struct FName DisplayName; // 0x08(0x08)
		float OutValue; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_GPGameplay_WeaponAttributeLimitManager_BPGetInstance_Param
	{
	public:

		struct UWeaponAttributeLimitManager* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponAttributeDetailDisplayManager_GetGunNewDisplayAttributeDetail_Param
	{
	public:

		uint64_t RecID; // 0x00(0x08)
		struct TArray<struct FWeaponAttributeDetailDisplayGroupNewRow> ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_WeaponAttributeDetailDisplayManager_GetGunDisplayAttributeDetailIdsInternal_Param
	{
	public:

		uint64_t RecID; // 0x00(0x08)
		struct TArray<struct FName> ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_WeaponAttributeDetailDisplayManager_GetGunDisplayAttributeDetailIds_Param
	{
	public:

		uint64_t RecID; // 0x00(0x08)
		struct TArray<struct FName> ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_WeaponAttributeDetailDisplayManager_GetGunDisplayAttributeDetail_Param
	{
	public:

		uint64_t RecID; // 0x00(0x08)
		struct TArray<struct FWeaponAttributeDetailDisplayItemRow> ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_WeaponToString_Param
	{
	public:

		struct AWeaponBase* WeaponBase; // 0x00(0x08)
		struct FString OutStr; // 0x08(0x10)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_WeaponDescToString_Param
	{
	public:

		struct FGPWeaponDescInfo InWeaponDesc; // 0x00(0x108)
		struct FString OutStr; // 0x108(0x10)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_StringToWeaponDesc_Param
	{
	public:

		struct FString InStr; // 0x00(0x10)
		struct FGPWeaponDescInfo OutWeaponDesc; // 0x10(0x108)
		bool ReturnValue; // 0x118(0x01)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_SpawnBulletBP_Param
	{
	public:

		struct AGPCharacter* CharacterOwner; // 0x00(0x08)
		int32_t BulletId; // 0x08(0x04)
		struct FVector StartLoc; // 0x0c(0x0c)
		struct FRotator StartRot; // 0x18(0x0c)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_SpawnBullet_Param
	{
	public:

		struct AGPCharacter* CharacterOwner; // 0x00(0x08)
		struct AWeaponBase* WeaponOwner; // 0x08(0x08)
		uint64_t BulletId; // 0x10(0x08)
		struct FVector StartLoc; // 0x18(0x0c)
		struct FRotator StartRot; // 0x24(0x0c)
		uint64_t EffectId; // 0x30(0x08)
		uint64_t HitFxId; // 0x38(0x08)
		uint64_t BulletTrailEffectId; // 0x40(0x08)
		struct AWeaponBulletPhysicsSimulate* ReturnValue; // 0x48(0x08)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_SetViewCharacterWeaponMode_Param
	{
	public:

		struct AActor* CharacterActor; // 0x00(0x08)
		enum class EGPWeaponMode WeaponMode; // 0x08(0x01)
		bool bRefresh; // 0x09(0x01)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_SetViewCharacterWeaponItemMode_Param
	{
	public:

		struct AWeaponBase* Weapon; // 0x00(0x08)
		enum class EGPWeaponMode WeaponMode; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_SendWeaponStateEventEnum_Param
	{
	public:

		struct AWeaponBase* Weapon; // 0x00(0x08)
		enum class EGPWeaponStateEvent EventName; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_SendWeaponStateEvent_Param
	{
	public:

		struct AWeaponBase* Weapon; // 0x00(0x08)
		struct FString EventName; // 0x08(0x10)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_SendWeaponEvent_Param
	{
	public:

		struct AWeaponBase* Weapon; // 0x00(0x08)
		enum class EGPWeaponInnerEvent RepInfo; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_IsCharacterOwnerLocalFocusPlayerPawn_Param
	{
	public:

		struct ACHARACTER* CHARACTER; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_GetWeaponType_Param
	{
	public:

		int64_t WeaponID; // 0x00(0x08)
		enum class EWeaponItemType ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_GetWeaponState_Param
	{
	public:

		struct AWeaponBase* Weapon; // 0x00(0x08)
		enum class EGPWeaponStateType ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_GetSuggestBulletProjectileRotation_Param
	{
	public:

		struct AActor* WorldContextActor; // 0x00(0x08)
		uint64_t BulletId; // 0x08(0x08)
		struct FVector StartLoc; // 0x10(0x0c)
		struct FVector TargetLoc; // 0x1c(0x0c)
		struct FRotator FireRotationOut; // 0x28(0x0c)
		char pad_34[0x4]; // 0x34(0x04)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x38(0x10)
		bool bIgnoreAllCollision; // 0x48(0x01)
		bool ReturnValue; // 0x49(0x01)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_GetItemDetailValue_Param
	{
	public:

		struct UModularWeaponDesc* WeaponDesc; // 0x00(0x08)
		struct TMap<char, float> ReturnValue; // 0x08(0x50)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_GetItemBaseMainAttributeValue_Param
	{
	public:

		uint64_t WeaponID; // 0x00(0x08)
		struct TMap<char, float> ReturnValue; // 0x08(0x50)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_GetCurrentLocalFocusPlayerPawn_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct ACHARACTER* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_ClearComponentImpacts_Param
	{
	public:

		struct USceneComponent* InComponent; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_ClearActorImpacts_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_AddWeaponWithPos_Param
	{
	public:

		struct AActor* CharacterActor; // 0x00(0x08)
		int64_t WeaponItemId; // 0x08(0x08)
		int32_t AttachPos; // 0x10(0x04)
		bool bSwitchToThisWeapon; // 0x14(0x01)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_AddWeaponByString_Param
	{
	public:

		struct APawn* Pawn; // 0x00(0x08)
		struct FString InStr; // 0x08(0x10)
		int32_t EquipPosition; // 0x18(0x04)
		bool bAutoSwitch; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct AWeaponBase* OutWeapon; // 0x20(0x08)
		bool bChangeGuid; // 0x28(0x01)
	};

	struct Function_GPGameplay_WeaponBlueprintLibrary_AddWeapon_Param
	{
	public:

		struct AActor* CharacterActor; // 0x00(0x08)
		struct UClass* WeaponClass; // 0x08(0x08)
	};

	struct Function_GPGameplay_FireArea_OnRep_FireAreaParam_Param
	{
	public:

	};

	struct Function_GPGameplay_FireArea_OnOverlapEnd_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
	};

	struct Function_GPGameplay_FireArea_OnOverlapBegin_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
		bool bFromSweep; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct FHitResult SweepResult; // 0x20(0x88)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapter_SetPartDynamicAttrValues_Param
	{
	public:

		struct TArray<uint64_t> PartGids; // 0x00(0x10)
		struct TArray<struct FName> AttrNames; // 0x10(0x10)
		struct TArray<float> Values; // 0x20(0x10)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapter_SetPartDynamicAttrValue_Param
	{
	public:

		uint64_t PartGid; // 0x00(0x08)
		struct FName AttrName; // 0x08(0x08)
		float Value; // 0x10(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapter_ServerSetWeaponSightDataRecordSingle_Param
	{
	public:

		struct FName AdapterType; // 0x00(0x08)
		bool bEnable; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		uint64_t ItemID; // 0x10(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapter_ServerSetWeaponSightDataRecord_Param
	{
	public:

		uint64_t BipodID; // 0x00(0x08)
		uint64_t LaserID; // 0x08(0x08)
		uint64_t FlashLightID; // 0x10(0x08)
		int32_t ScopeCount; // 0x18(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapter_ServerSetPartDynamicAttrValues_Param
	{
	public:

		struct TArray<uint64_t> PartGids; // 0x00(0x10)
		struct TArray<struct FName> AttrNames; // 0x10(0x10)
		struct TArray<float> Values; // 0x20(0x10)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapter_ServerSetPartDynamicAttrValue_Param
	{
	public:

		uint64_t PartGid; // 0x00(0x08)
		struct FName AttrName; // 0x08(0x08)
		float Value; // 0x10(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapter_OnRep_AdapterDynamicAttributes_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentAdapter_ClientSetPartDynamicAttrValues_Param
	{
	public:

		struct FModularWeaponDynamicAttributesBase InitAdapterDynamicAttributes; // 0x00(0x28)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapter_ClientSetPartDynamicAttrValue_Param
	{
	public:

		uint64_t PartGid; // 0x00(0x08)
		struct FName AttrName; // 0x08(0x08)
		float Value; // 0x10(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapterInterface_SupportFXFunction_Param
	{
	public:

		enum class EFxFuntionType FXType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FGPModularWeaponPartNode FunctionNode; // 0x08(0x120)
		bool ReturnValue; // 0x128(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapterInterface_SupportFunction_Param
	{
	public:

		enum class EWeaponAddFunction Func; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapterInterface_SupportAnimFunction_Param
	{
	public:

		enum class EWeaponPartAnimFunctionType AnimType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FGPModularWeaponPartNode FunctionNode; // 0x08(0x120)
		bool ReturnValue; // 0x128(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapterInterface_OnMeshComponentReady_Param
	{
	public:

		struct USkeletalMeshComponent* MeshCom; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapterInterface_OnAllMeshComponentReady_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentAdapterInterface_IsAdapterExisted_Param
	{
	public:

		enum class EWeaponAdapterType AdapterType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapterInterface_InitAdapters_Param
	{
	public:

		struct TArray<uint64_t> AdapterIds; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapterInterface_GetOnWeaponAdapterFunctionChangedDelegates_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentAdapterInterface_GetAdapterByType_Param
	{
	public:

		enum class EWeaponAdapterType AdapterType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct UWeaponAdapterItemBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapterInterface_GetAccessoryAnimSeq_Param
	{
	public:

		enum class EWeaponAdapterItemType AdapterItemType; // 0x00(0x01)
		enum class EWeaponAdapterHandIKPoseType IKPoseType; // 0x01(0x01)
		char pad_2[0x6]; // 0x02(0x06)
		struct UAnimSequence* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAdapterInterface_CanZoom_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_StopWeaponRecAnimation_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_StopWeaponOperationChartacterAnim_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_SetWeaponMeshTickOnce_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_SetWeaponMeshTick_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
		bool bEnableTickWhenNotRendered; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_SetNeedUpdateAnimation_Param
	{
	public:

		bool bNeedUpdate; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_SetNeedPlayWeaponAnimation_Param
	{
	public:

		bool bPlay; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_RequestLoadWeaponAnim_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_PlayFirstEquipAnim_Param
	{
	public:

		float blendIn; // 0x00(0x04)
		float blendOut; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_PlayFastUnEquipAnimNoBlend_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		float blendIn; // 0x10(0x04)
		float blendOut; // 0x14(0x04)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_PlayFastUnEquipAnim_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		float blendIn; // 0x10(0x04)
		float blendOut; // 0x14(0x04)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_PlayFastEquipAnim_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		float blendIn; // 0x10(0x04)
		float blendOut; // 0x14(0x04)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_OnAnimLoadReady_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_NeedToUpdateAnimation_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_NeedToPlayWeaponRecAnimation_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_IsWeaponTableSet_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_IsPlayingAnyMontage_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_InteractivePutWeapon_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		enum class EInteractivePutWeaponType PutWeaponType; // 0x10(0x01)
		bool NeedInacvtiveAnim; // 0x11(0x01)
		char pad_12[0x2]; // 0x12(0x02)
		float blendIn; // 0x14(0x04)
		float blendOut; // 0x18(0x04)
		bool bUseAnimTime; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		float InAnimTime; // 0x20(0x04)
		float ReturnValue; // 0x24(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_InteractiveGetWeapon_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		enum class EInteractiveGetWeaponType GetWeaponType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float blendIn; // 0x14(0x04)
		float blendOut; // 0x18(0x04)
		bool bUseAnimTime; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		float InAnimTime; // 0x20(0x04)
		float ReturnValue; // 0x24(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_HasWeaponPartAnimSeq_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		struct FName AnimName; // 0x08(0x08)
		enum class EChracterPoseType PoseType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FName MapKeyName; // 0x14(0x08)
		bool ReturnValue; // 0x1c(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetZoomWaggleParam_Param
	{
	public:

		float WaggleScope; // 0x00(0x04)
		float WaggleSpeed; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetZoomOutAnimTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetZoomInAnimTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetWeaponPartAnimSeq_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		struct FName AnimName; // 0x08(0x08)
		enum class EChracterPoseType PoseType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FName MapKeyName; // 0x14(0x08)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UAnimSequenceBase* ReturnValue; // 0x20(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetWeaponOperationAnimSeqArray_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		enum class EChracterPoseType PoseType; // 0x08(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x09(0x01)
		enum class EEightDirectionType DirectionType; // 0x0a(0x01)
		char pad_B[0x5]; // 0x0b(0x05)
		struct TArray<struct UAnimSequenceBase*> ReturnValue; // 0x10(0x10)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetWeaponMeshTickDebugInfo_Param
	{
	public:

		struct FString Result; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetSpecTagAnimWeaponOperationSeq_Param
	{
	public:

		struct FName VariableName; // 0x00(0x08)
		struct FGameplayTag Tag; // 0x08(0x08)
		enum class EChracterPoseType PoseType; // 0x10(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x11(0x01)
		enum class EEightDirectionType DirectionType; // 0x12(0x01)
		char pad_13[0x5]; // 0x13(0x05)
		struct UAnimSequenceBase* ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetSpecTagAnimBasePosSeq_Param
	{
	public:

		struct FName VariableName; // 0x00(0x08)
		struct FGameplayTag Tag; // 0x08(0x08)
		enum class EChracterPoseType PoseType; // 0x10(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x11(0x01)
		enum class EEightDirectionType DirectionType; // 0x12(0x01)
		char pad_13[0x5]; // 0x13(0x05)
		struct UAnimSequenceBase* ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetSpecTagAnim_Param
	{
	public:

		enum class EWeaponAnimDataTableType TableType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FName VariableName; // 0x04(0x08)
		struct FGameplayTag Tag; // 0x0c(0x08)
		enum class EChracterPoseType PoseType; // 0x14(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x15(0x01)
		enum class EEightDirectionType DirectionType; // 0x16(0x01)
		char pad_17[0x1]; // 0x17(0x01)
		struct UAnimSequenceBase* ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetSpecStringAnimWeaponOperationSeq_Param
	{
	public:

		struct FName VariableName; // 0x00(0x08)
		struct FString inString; // 0x08(0x10)
		enum class EChracterPoseType PoseType; // 0x18(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x19(0x01)
		enum class EEightDirectionType DirectionType; // 0x1a(0x01)
		char pad_1B[0x5]; // 0x1b(0x05)
		struct UAnimSequenceBase* ReturnValue; // 0x20(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetSpecStringAnim_Param
	{
	public:

		enum class EWeaponAnimDataTableType TableType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FName VariableName; // 0x04(0x08)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FString inString; // 0x10(0x10)
		enum class EChracterPoseType PoseType; // 0x20(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x21(0x01)
		enum class EEightDirectionType DirectionType; // 0x22(0x01)
		char pad_23[0x5]; // 0x23(0x05)
		struct UAnimSequenceBase* ReturnValue; // 0x28(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetSpecialWeaponAnimSeqArray_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		enum class EChracterPoseType PoseType; // 0x08(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x09(0x01)
		enum class EEightDirectionType DirectionType; // 0x0a(0x01)
		char pad_B[0x5]; // 0x0b(0x05)
		struct TArray<struct UAnimSequenceBase*> ReturnValue; // 0x10(0x10)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetSpecialWeaponAnimSeq_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		enum class EChracterPoseType PoseType; // 0x08(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x09(0x01)
		enum class EEightDirectionType DirectionType; // 0x0a(0x01)
		char pad_B[0x5]; // 0x0b(0x05)
		struct UAnimSequence* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetSpecialWeaponAnimMontage_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		enum class EChracterPoseType PoseType; // 0x08(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x09(0x01)
		enum class EEightDirectionType DirectionType; // 0x0a(0x01)
		char pad_B[0x5]; // 0x0b(0x05)
		struct UAnimMontage* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetSpecialWeaponAnimBS_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		enum class EChracterPoseType PoseType; // 0x08(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x09(0x01)
		enum class EEightDirectionType DirectionType; // 0x0a(0x01)
		char pad_B[0x5]; // 0x0b(0x05)
		struct UBlendSpaceBase* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetIsRightFire_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetCrrentAnimId_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetAnimOperationSeq_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		enum class EChracterPoseType PoseType; // 0x08(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x09(0x01)
		enum class EEightDirectionType DirectionType; // 0x0a(0x01)
		char pad_B[0x5]; // 0x0b(0x05)
		struct UAnimSequence* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetAnimOperationMontage_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		enum class EChracterPoseType PoseType; // 0x08(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x09(0x01)
		enum class EEightDirectionType DirectionType; // 0x0a(0x01)
		char pad_B[0x5]; // 0x0b(0x05)
		struct UAnimMontage* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetAnimOperationBS_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		enum class EChracterPoseType PoseType; // 0x08(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x09(0x01)
		enum class EEightDirectionType DirectionType; // 0x0a(0x01)
		char pad_B[0x5]; // 0x0b(0x05)
		struct UBlendSpaceBase* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetAnimByType_Param
	{
	public:

		struct FName AnimType; // 0x00(0x08)
		struct TWeakObjectPtr<struct UAnimSequenceBase> ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetAnimBasePosSeq_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		enum class EChracterPoseType PoseType; // 0x08(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x09(0x01)
		enum class EEightDirectionType DirectionType; // 0x0a(0x01)
		char pad_B[0x5]; // 0x0b(0x05)
		struct UAnimSequence* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetAnimBasePosBS_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		enum class EChracterPoseType PoseType; // 0x08(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x09(0x01)
		enum class EEightDirectionType DirectionType; // 0x0a(0x01)
		char pad_B[0x5]; // 0x0b(0x05)
		struct UBlendSpaceBase* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetAnimBaseMontage_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		enum class EChracterPoseType PoseType; // 0x08(0x01)
		enum class EAnimationSpecialUseType UseType; // 0x09(0x01)
		enum class EEightDirectionType DirectionType; // 0x0a(0x01)
		char pad_B[0x5]; // 0x0b(0x05)
		struct UAnimMontage* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetAnimationSequenceLengthByEventForCharacter_Param
	{
	public:

		enum class EGPWeaponInnerEvent InWeaponEvent; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_GetAnimationListDebugInfo_Param
	{
	public:

		struct FString Result; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimInterface_BlendOutCurrentMontage_Param
	{
	public:

		float BlendOutTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAppearanceInterface_IsModularWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAppearanceInterface_GetGPWeaponAppearanceInterface_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentConfigInterface_GetSoundFXId_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentConfigInterface_GetAttributeValue_Param
	{
	public:

		struct FName AttributeSetName; // 0x00(0x08)
		struct FName AttributeKey; // 0x08(0x08)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentConfigInterface_ApplyConfigToAttribute_Param
	{
	public:

		struct FName AttributeSetName; // 0x00(0x08)
		struct FName AttributeKey; // 0x08(0x08)
		float NewValue; // 0x10(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentCore_SetBoolProperty_Param
	{
	public:

		enum class EWeaponBoolPropertyType PropertyType; // 0x00(0x01)
		bool Enable; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentCore_OnRep_BoolPropertyChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentCore_GetCharacterAttrbuteSetOther_Param
	{
	public:

		struct TWeakObjectPtr<struct UGPAttributeSetOther> ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_SetBoolProperty_Param
	{
	public:

		enum class EWeaponBoolPropertyType PropertyType; // 0x00(0x01)
		bool Enable; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_RemoveAttributeCache_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_GetWeaponOwnerInterface_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_GetThrowableDataAttributeRefWritable_Param
	{
	public:

		struct FWeaponThrowableDataAttribute ReturnValue; // 0x00(0x328)
	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_GetMeleeDataAttributeRefWritable_Param
	{
	public:

		struct FWeaponMeleeDataAttribute ReturnValue; // 0x00(0x2e8)
	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_GetGPWeaponDataInterface_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_GetDataRecFunction_Param
	{
	public:

		struct FRecFunctionRow DataRecFunction; // 0x00(0xd0)
	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_GetDataModifierDebugInfo_Param
	{
	public:

		struct FString Result; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_GetDataAttribute_Param
	{
	public:

		struct FWeaponDataAttribute ReturnValue; // 0x00(0x638)
	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_GetDataAppearanceRefWritable_Param
	{
	public:

		struct FWeaponDataAppearance ReturnValue; // 0x00(0x238)
	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_GetDataAppearanceRef_Param
	{
	public:

		struct FWeaponDataAppearance ReturnValue; // 0x00(0x238)
	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_GetDataAppearanceConfigHitFX_Param
	{
	public:

		uint64_t InHitFXId; // 0x00(0x08)
		struct FWeaponDataHitFX ReturnValue; // 0x08(0x1680)
	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_GetCharacterAttrbuteSetOther_Param
	{
	public:

		struct TWeakObjectPtr<struct UGPAttributeSetOther> ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_GetBoolProperty_Param
	{
	public:

		enum class EWeaponBoolPropertyType PropertyType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_GetBitMaskPropertyValues_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentCoreInterface_GetAttributeDebugInfo_Param
	{
	public:

		struct FString Result; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponDataComponentFiringInterface_GetFireModeThrowable_Param
	{
	public:

		struct UGPWeaponFireModeThrowable* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentFiringInterface_GetFireModePhysicSimulate_Param
	{
	public:

		struct UGPWeaponFireModePhysicSimulate* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentFiringInterface_GetFireDurationSeconds_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentFiringInterface_GetCrruentFireModeType_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentPreviewLine_UpdateServerPreviewData_Param
	{
	public:

		struct FVector StartLocation; // 0x00(0x0c)
		struct FVector StartVelocity; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_WeaponDataComponentPreviewLine_UpdatePreviewVisible_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentPreviewLine_UpdatePreviewData_Param
	{
	public:

		bool bSendToServer; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentPreviewLine_UpdateAIStartFirePreviewData_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentPreviewLine_StartAyncPredict_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentPreviewLine_ShowPreviewLine_Param
	{
	public:

		bool bEnableTick; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentPreviewLine_OnPreviewAssetLoaded_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> Assets; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponDataComponentPreviewLine_InitUseAsyncTraceSystem_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentPreviewLine_HidePreviewLine_Param
	{
	public:

		bool bEnableTick; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentPreviewLine_GetProjectilePathSimFrequency_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentPreviewLine_CheckStartPosBlocked_Param
	{
	public:

		struct AGPCharacter* GPChar; // 0x00(0x08)
		struct FVector pos; // 0x08(0x0c)
		struct FVector ReturnValue; // 0x14(0x0c)
	};

	struct Function_GPGameplay_WeaponDataComponentPreviewLine_CancelPreviewAssetLoad_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentPreviewLine_CancelAyncPredict_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentProxy_SupportFXFunction_Param
	{
	public:

		enum class EFxFuntionType FXType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FGPModularWeaponPartNode FunctionNode; // 0x08(0x120)
		bool ReturnValue; // 0x128(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentProxy_SupportFunction_Param
	{
	public:

		enum class EWeaponAddFunction Func; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentProxy_SupportAnimFunction_Param
	{
	public:

		enum class EWeaponPartAnimFunctionType AnimType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FGPModularWeaponPartNode FunctionNode; // 0x08(0x120)
		bool ReturnValue; // 0x128(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentProxy_Rep_OnRepWeaponChangeClipTimScale_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentProxy_Rep_OnRepWeaponChangeClipTimeWhenEmpty_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentProxy_Rep_OnRepWeaponChangeClipTime_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentProxy_Rep_OnRepWeaponCarriedAmmoCount_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentProxy_OnRep_WeaponAmmoCount_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentProxy_IsAdapterExisted_Param
	{
	public:

		enum class EWeaponAdapterType AdapterType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentProxy_InitAdapters_Param
	{
	public:

		struct TArray<uint64_t> AdapterIds; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponDataComponentProxy_GetZoomWaggleParam_Param
	{
	public:

		float WaggleScope; // 0x00(0x04)
		float WaggleSpeed; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentProxy_GetZoomOutAnimTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentProxy_GetZoomInAnimTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentProxy_GetSupportOpenSightOnFire_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentProxy_GetPartSkeletalMesh3P_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		struct FSoftObjectPath ReturnValue; // 0x08(0x18)
	};

	struct Function_GPGameplay_WeaponDataComponentProxy_GetPartSkeletalMesh1P_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		struct FSoftObjectPath ReturnValue; // 0x08(0x18)
	};

	struct Function_GPGameplay_WeaponDataComponentProxy_GetModularWeaponDesc_Param
	{
	public:

		bool bRefreshDynamicAttr; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct UGPModularWeaponDesc* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentProxy_GetMagazineItemID_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentProxy_GetCharacterBagSkeletalMeshComponent_Param
	{
	public:

		bool bUseFPP; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct USkeletalMeshComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentProxy_GetAccessoryAnimSeq_Param
	{
	public:

		enum class EWeaponAdapterItemType AdapterItemType; // 0x00(0x01)
		enum class EWeaponAdapterHandIKPoseType IKPoseType; // 0x01(0x01)
		char pad_2[0x6]; // 0x02(0x06)
		struct UAnimSequence* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentProxy_CanZoom_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentZoomInterface_IsZoomingForFire_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentZoomInterface_GetZoomWaggleParam_Param
	{
	public:

		float WaggleScope; // 0x00(0x04)
		float WaggleSpeed; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentZoomInterface_GetZoomRate_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentZoomInterface_GetZoomOutAnimTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentZoomInterface_GetZoomInAnimTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponDataAttributeManager_ClearCaches_Param
	{
	public:

	};

	struct Function_GPGameplay_AmmoDataManager_IsMatchWeapon_Param
	{
	public:

		uint64_t WeaponRecId; // 0x00(0x08)
		uint64_t AmmoItemId; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_AmmoDataOverrideManager_GetAmmoDataOverride_Param
	{
	public:

		uint64_t WeaponRecId; // 0x00(0x08)
		uint64_t AmmoItemId; // 0x08(0x08)
		struct FAmmoDataOverideRow ReturnValue; // 0x10(0x38)
	};

	struct Function_GPGameplay_WeaponFireAssistedAimingDFM_OnMakeDamage_Param
	{
	public:

		struct AGPWeaponBulletBase* Bullet; // 0x00(0x08)
		struct FHitResult HitResult; // 0x08(0x88)
	};

	struct Function_GPGameplay_WeaponFireAssistedAimingDFM_OnInitAssistedAimingAssets_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> Curves; // 0x00(0x10)
	};

	struct Function_GPGameplay_PlacementPreviewActorBase_BP_OnPreviewTransformChanged_Param
	{
	public:

		struct FVector NewLoc; // 0x00(0x0c)
		struct FRotator NewRot; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_PlacementPreviewActorBase_BP_OnPreviewLocationValidChanged_Param
	{
	public:

		bool CurrLocValid; // 0x00(0x01)
	};

	struct Function_GPGameplay_PlacementPreviewActorBase_BP_OnPreviewConflictPlaceChanged_Param
	{
	public:

		bool NewLocConflict; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponFixedAudioInterface_StopLowHPAudio_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFixedAudioInterface_StopDestoryAudio_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFixedAudioInterface_SetRotateVerticalSpeed_Param
	{
	public:

		float InSpeed; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponFixedAudioInterface_SetRotateVerticalLimit_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFixedAudioInterface_SetRotateHorizontalSpeed_Param
	{
	public:

		float InSpeed; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponFixedAudioInterface_SetRotateHorizontalLimit_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFixedAudioInterface_SetOvetHeatRTPC_Param
	{
	public:

		float InValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponFixedAudioInterface_PlayLowHPAudio_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFixedAudioInterface_PlayGetOutAudio_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFixedAudioInterface_PlayGetInAudio_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFixedAudioInterface_PlayDestoryAudio_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFuncComponentAdditiveAnim_OnWeaponScopeRangeChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFuncComponentAdditiveAnimInterface_GetSpine2AdditiveResult_Param
	{
	public:

		struct FTransform Result; // 0x00(0x30)
	};

	struct Function_GPGameplay_WeaponFuncComponentAdditiveAnimInterface_GetLeftHandAdditiveResult_Param
	{
	public:

		struct FTransform Result; // 0x00(0x30)
	};

	struct Function_GPGameplay_WeaponFuncComponentAdditiveAnimInterface_EnableAdditiveAnim_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponFuncComponentAimOutline_TickAimOutline_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFuncComponentAimOutline_SwithchOutWhenFire_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFuncComponentAimOutline_SetHomingUin_Param
	{
	public:

		uint64_t Uin; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponFuncComponentAimOutline_RefreshUI_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFuncComponentAimOutline_OnWeaponInteractive_Param
	{
	public:

		bool PutOrGet; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponFuncComponentAimOutline_OnSupportAimShow_Param
	{
	public:

		struct FString FunctionName; // 0x00(0x10)
		struct UBaseUIView* View; // 0x10(0x08)
	};

	struct Function_GPGameplay_WeaponFuncComponentAimOutline_OnAmmoCountChange_Param
	{
	public:

		float WeaponAmmoCount; // 0x00(0x04)
		float CarryWeaponAmmoCount; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponFuncComponentAimOutline_AsyncRayTrace_Param
	{
	public:

	};

	struct Function_GPGameplay_AutoAddAmmoHelper_OnModifyAmmoTimeout_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFuncComponentBulletModel_UpdateSkinMaterial_Param
	{
	public:

		struct UObject* NewMeshPtr; // 0x00(0x08)
		uint64_t AmmoId; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponFuncComponentBulletModel_OnLoadSkinAssets_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> SoftObjectPaths; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponFuncComponentBulletModel_HideBulletModelExceptRec_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFuncComponentBulletModel_HideBulletModel_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFuncComponentFiringAnim_OnUseRTChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFuncComponentInspect_CheckInspectEnd_Param
	{
	public:

		bool bStopInspect; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponFuncComponentInspectInterface_IsInspecting_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponFuncComponentInspectInterface_GetInspectingLeftTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponFuncComponentInspectInterface_EnableInspect_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponGameInstanceSubSystem_ClearWeaponConstConfigCache_Param
	{
	public:

		bool bForceClearInnerPreloadAsset; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponGameModeDataTableMananger_GetInstance_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UWeaponGameModeDataTableMananger* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponHudModel_ToggleWeaponAddFunction_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHudModel_TickTacticalEquip_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponHudModel_ShowTacticalEquipPanel_Param
	{
	public:

		bool IsDown; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponHudModel_OnSwitchTacticalEquip_Param
	{
	public:

		bool IsDown; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponHudModel_OnScopeAdapterChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHudModel_OnRangeScopeChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHudModel_OnRangeFinderFunction_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHudModel_OnPowerFlashState_Param
	{
	public:

		int32_t StateType; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponHudModel_OnOpenPowerFlash_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHudModel_OnNotifyWeaponListChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHudModel_OnNotifyWeaponDescChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHudModel_OnNotifyScopeChanged_Param
	{
	public:

		bool bScopeAdapterChanged; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponHudModel_OnNotifyRepInventoryItem_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHudModel_OnNotifyBindCharacterChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHudModel_OnNotifyAmmoChanged_Param
	{
	public:

		float AmmoCount; // 0x00(0x04)
		float CarryWeaponAmmoCount; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponHudModel_OnNotifyActiveWeaponChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHudModel_GetDirAllTacticEquipsOpen_Param
	{
	public:

		int32_t Direction; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_WeaponHudController_SwitchZoomRate_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHudController_SwitchToTargetWeapon_Param
	{
	public:

		struct AWeaponBase* InWeapon; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponHudController_SwitchToTargetScope_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHudController_SwitchFireMode_Param
	{
	public:

		struct AWeaponBase* InWeapon; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponHudController_SetZoomType_Param
	{
	public:

		enum class EScopeZoomType ZoomType; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponHudController_OnNotifyWeaponListChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHudController_OnNotifyActiveWeaponChanged_Param
	{
	public:

		struct AWeaponBase* PreWeapon; // 0x00(0x08)
		struct AWeaponBase* NewWeapon; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponHudController_OnLocalPlayerPawnReady_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHudController_OnLocalPlayerPawnChanged_Param
	{
	public:

		struct AActor* OldCharacter; // 0x00(0x08)
		struct AActor* NewCharacter; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponHudController_IsCurrentAiming_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponHudController_GetLastWeaponInfo_Param
	{
	public:

		bool bIgnoreNull; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct UWeaponHudModel* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponHudController_GetCurWeaponInfo_Param
	{
	public:

		struct UWeaponHudModel* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponHudController_GetCurScope_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHudController_GetBreathInfo_Param
	{
	public:

		struct UBreathInfo* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponHudController_Get_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct UWeaponHudController* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponHudController_FindWeaponsByEquipPositions_Param
	{
	public:

		struct TArray<uint32_t> AttachPositions; // 0x00(0x10)
		struct TArray<struct UWeaponHudModel*> ReturnValue; // 0x10(0x10)
	};

	struct Function_GPGameplay_WeaponHudController_FindWeaponsByEquipPosition_Param
	{
	public:

		uint32_t AttachPosition; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<struct UWeaponHudModel*> ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_WeaponHudController_FindWeaponInfo_Param
	{
	public:

		struct AWeaponBase* Weapon; // 0x00(0x08)
		struct UWeaponHudModel* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponHudController_FindFirstWeaponByEquipPosition_Param
	{
	public:

		uint32_t AttachPosition; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UWeaponHudModel* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponInterface_TryAddAmmoByCheckPoint_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponInterface_ShouldDiscardWeaponOnDeactivateEnd_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponInterface_RefreshWeaponReplicatedExtraData_Param
	{
	public:

		struct FWeaponReplicateExtraData WeaponRepExtendData; // 0x00(0xf0)
	};

	struct Function_GPGameplay_WeaponInterface_RefreshWeaponAdapterDynamicAttributes_Param
	{
	public:

		struct FModularWeaponDynamicAttributesBase DynamicAttributes; // 0x00(0x28)
	};

	struct Function_GPGameplay_WeaponInterface_PlayFirstEquipAnim_Param
	{
	public:

		float blendIn; // 0x00(0x04)
		float blendOut; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_WeaponInterface_PlayFastUnEquipAnimNoBlend_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		float blendIn; // 0x10(0x04)
		float blendOut; // 0x14(0x04)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_GPGameplay_WeaponInterface_PlayFastUnEquipAnim_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		float blendIn; // 0x10(0x04)
		float blendOut; // 0x14(0x04)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_GPGameplay_WeaponInterface_PlayFastEquipAnim_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		float blendIn; // 0x10(0x04)
		float blendOut; // 0x14(0x04)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_GPGameplay_WeaponInterface_OnWeaponDeactivateEnd_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponInterface_OnWeaponDeactivateBegin_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponInterface_OnWeaponActivateEnd_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponInterface_OnWeaponActivateBegin_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponInterface_IsSubmachineWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponInterface_IsPVEWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponInterface_IsPistolWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponInterface_IsConfigEffective_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponInterface_InteractivePutWeapon_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		enum class EInteractivePutWeaponType PutWeaponType; // 0x10(0x01)
		bool NeedInacvtiveAnim; // 0x11(0x01)
		char pad_12[0x2]; // 0x12(0x02)
		float blendIn; // 0x14(0x04)
		float blendOut; // 0x18(0x04)
		bool bUseAnimTime; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		float InAnimTime; // 0x20(0x04)
		float ReturnValue; // 0x24(0x04)
	};

	struct Function_GPGameplay_WeaponInterface_InteractiveGetWeapon_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		enum class EInteractiveGetWeaponType GetWeaponType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float blendIn; // 0x14(0x04)
		float blendOut; // 0x18(0x04)
		bool bUseAnimTime; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		float InAnimTime; // 0x20(0x04)
		float ReturnValue; // 0x24(0x04)
	};

	struct Function_GPGameplay_WeaponInterface_GetWeaponType_Param
	{
	public:

		enum class EWeaponItemType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponInterface_GetWeaponBase_Param
	{
	public:

		struct AWeaponBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponInterface_GetThisWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponInterface_GetThirdPersonWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponInterface_GetPartSkeletalMesh3P_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		struct FSoftObjectPath ReturnValue; // 0x08(0x18)
	};

	struct Function_GPGameplay_WeaponInterface_GetPartSkeletalMesh1P_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		struct FSoftObjectPath ReturnValue; // 0x08(0x18)
	};

	struct Function_GPGameplay_WeaponInterface_GetOverrideAnimId_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponInterface_GetOrCreateThirdPersonWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponInterface_GetModularWeaponDesc_Param
	{
	public:

		bool bRefreshDynamicAttr; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct UGPModularWeaponDesc* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponInterface_GetItemId_Param
	{
	public:

		struct FItemID ReturnValue; // 0x00(0x18)
	};

	struct Function_GPGameplay_WeaponInterface_GetFirstPersonWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponInterface_GetEquipmentPartDamageType_Param
	{
	public:

		enum class EEquipmentPartDamageType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponInterface_GetCrrentAnimId_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponInterface_GetCharacterBagSkeletalMeshComponent_Param
	{
	public:

		bool bUseFPP; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct USkeletalMeshComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponInterface_CanAimOn_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_UnInit_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerInterface_SwitchWeaponEquipPosition_Param
	{
	public:

		uint32_t EquipPositionA; // 0x00(0x04)
		uint32_t EquipPositionB; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_SwitchToWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		uint32_t EquipPosition; // 0x04(0x04)
		enum class EWeaponSwitchType SwitchType; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_SwitchToTargetWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct AWeaponBase* Weapon; // 0x08(0x08)
		enum class EWeaponSwitchType SwitchType; // 0x10(0x01)
		bool Force; // 0x11(0x01)
		bool ReturnValue; // 0x12(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_SwitchToPreWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool bCanUseEmptyHand; // 0x02(0x01)
		bool ReturnValue; // 0x03(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_SwitchToNextWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool bCanUseEmptyHand; // 0x02(0x01)
		bool ReturnValue; // 0x03(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_SwitchToMeleeWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool bCanUseEmptyHand; // 0x02(0x01)
		bool ReturnValue; // 0x03(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_SwitchToMainWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_SwitchToLastUsedWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool bCanUseEmptyHand; // 0x02(0x01)
		bool IncludeSkillWeapon; // 0x03(0x01)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_SwitchToEmptyHand_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_SwitchToDefaultWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_RemoveWeaponInScene_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerInterface_RemoveWeaponByWeaponId_Param
	{
	public:

		uint64_t WeaponID; // 0x00(0x08)
		bool bRemoveAll; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_RemoveWeaponBySkillId_Param
	{
	public:

		uint64_t SkillId; // 0x00(0x08)
		bool bRemoveAll; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_RemoveWeapon_Param
	{
	public:

		uint32_t EquipPosition; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_RemoveAllWeaponExcludeSkillWeapon_Param
	{
	public:

		bool bAutoSwitchNext; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_RemoveAllWeapon_Param
	{
	public:

		bool bAutoSwitchNext; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_OnPostNetInit_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerInterface_OnCharacterDied_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerInterface_Init_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_HasPendingSwitchWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_GetWeaponList_Param
	{
	public:

		struct TArray<struct AWeaponBase*> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponManagerInterface_GetWeaponCount_Param
	{
	public:

		bool bIncludeMeleeWeapon; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponManagerInterface_GetWeaponByPosition_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerInterface_GetWeaponByGid_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerInterface_GetWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerInterface_GetPendingActiveWeapon_Param
	{
	public:

		struct AWeaponBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponManagerInterface_GetLastUsedWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerInterface_GetEmptyHandWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerInterface_GetDebugString_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponManagerInterface_GetCurrentWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerInterface_GetAllWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerInterface_GetAllEmptyHandWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerInterface_GetAllCurrentWeapon_Param
	{
	public:

		struct TArray<struct AWeaponBase*> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponManagerInterface_ForceSwitchToLastUsedWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool bCanUseEmptyHand; // 0x02(0x01)
		bool IncludeSkillWeapon; // 0x03(0x01)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_WeaponManagerInterface_EndInteractive_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerInterface_BeginInteractive_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerInterface_AddWeaponInScene_Param
	{
	public:

		struct AWeaponBase* InWeapon; // 0x00(0x08)
		uint64_t RecID; // 0x08(0x08)
		uint64_t Guid; // 0x10(0x08)
		uint32_t EquipPosition; // 0x18(0x04)
		bool ReturnValue; // 0x1c(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_OptimizeWeaponMeshTick_Param
	{
	public:

		struct USkeletalMeshComponent* MeshComp; // 0x00(0x08)
		bool InEnableTick; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_IsWeaponWeapon3PEffectOptimizeEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_IsWeaponSignificanceEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_IsWeaponMeshTickOptimizeEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_IsWeaponFeatureOptimizeEnable_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_IsWeaponFeatureDebugEnable_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_IsWeaponActorVisibleInDPVS_WeaponProxy_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponOptimize_IsWeaponActorVisibleInDPVS_Weapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponOptimize_IsFppObWeaponCreateDelay_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_IsFireTraceInfoCacheEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_IsEnableWeaponDPVSDebug_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_IsAimingResultCacheEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_IsAiInstantHitEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_Is3PWeaponPoolEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_Is3PWeaponDataModifyEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_Is3PWeaponBulletNetSyncedOnPC_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_Is3PTraceOptimizeEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_Is3PSimpleEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_Is3PLoadWeaponAnimEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_Is3PLoadMeshEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_Is3PBulletTracerOptimizeEnabled_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_GetWeaponWeapon3PSignificanceLevel_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponOptimize_GetIsEnableLaserHighFrequencyUpdate_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponOptimize_GetForceFeatureLevel_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponOptimize_GetAppearanceTickInterval_Param
	{
	public:

		bool b3P; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponProxyInterface_SupportFXFunction_Param
	{
	public:

		enum class EFxFuntionType FXType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FGPModularWeaponPartNode FunctionNode; // 0x08(0x120)
		bool ReturnValue; // 0x128(0x01)
	};

	struct Function_GPGameplay_WeaponProxyInterface_SupportFunction_Param
	{
	public:

		enum class EWeaponAddFunction Func; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponProxyInterface_SupportAnimFunction_Param
	{
	public:

		enum class EWeaponPartAnimFunctionType AnimType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FGPModularWeaponPartNode FunctionNode; // 0x08(0x120)
		bool ReturnValue; // 0x128(0x01)
	};

	struct Function_GPGameplay_WeaponProxyInterface_IsAdapterExisted_Param
	{
	public:

		enum class EWeaponAdapterType AdapterType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponProxyInterface_InitAdapters_Param
	{
	public:

		struct TArray<uint64_t> AdapterIds; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponProxyInterface_GetZoomWaggleParam_Param
	{
	public:

		float WaggleScope; // 0x00(0x04)
		float WaggleSpeed; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponProxyInterface_GetZoomOutAnimTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponProxyInterface_GetZoomInAnimTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponProxyInterface_GetWeaponDataRangeScopeManager_Param
	{
	public:

		struct UWeaponAdapterRangeScopeManager* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponProxyInterface_GetWeaponDataConfig_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponProxyInterface_GetWeaponDataAppearance_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponProxyInterface_GetWeaponDataAdapter_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponProxyInterface_GetSupportOpenSightOnFire_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponProxyInterface_GetOverrideAnimId_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponProxyInterface_GetMagazineItemID_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponProxyInterface_GetCharacterBagSkeletalMeshComponent_Param
	{
	public:

		bool bUseFPP; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct USkeletalMeshComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponProxyInterface_GetAccessoryAnimSeq_Param
	{
	public:

		enum class EWeaponAdapterItemType AdapterItemType; // 0x00(0x01)
		enum class EWeaponAdapterHandIKPoseType IKPoseType; // 0x01(0x01)
		char pad_2[0x6]; // 0x02(0x06)
		struct UAnimSequence* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponProxyInterface_CanZoom_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponReplicateComponent_UpdateWeaponExtraData_Param
	{
	public:

		struct FWeaponIdentity InWeaponIdentity; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponReplicateComponent_OnRepExtraDataList_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponReplicateComponent_OnRep_WeaponDPVSProxy_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponReplicateComponent_OnRep_OBWeaponIdentity_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponReplicateComponent_OnRep_OBWeaponAmmoNum_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponReplicateComponent_OnRep_OBWeaponAmmoDataInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponReplicateComponent_OnRep_AdapterDynamicAttrData_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponReplicateComponent_GetOBWeaponIdentity_Param
	{
	public:

		struct FWeaponIdentity ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponReplicateComponent_GetObAmmoInfo_Param
	{
	public:

		struct FWeaponIdentity Identity; // 0x00(0x04)
		struct FWeaponOBAmmoNum ReturnValue; // 0x04(0x0c)
	};

	struct Function_GPGameplay_WeaponReplicateComponent_GetObAmmoDataInfo_Param
	{
	public:

		struct FWeaponIdentity Identity; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FWeaponOBAmmoDataInfo ReturnValue; // 0x08(0x18)
	};

	struct Function_GPGameplay_FMysticalSkinColorMaterialManager_GetDefaultAppearanceID_Param
	{
	public:

		uint64_t InSkinId; // 0x00(0x08)
		uint64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponSkinUtil_SetMaterialBaseParam_Param
	{
	public:

		struct UMaterialInterface* OriginMaterial; // 0x00(0x08)
		struct UMaterialInstanceDynamic* DynamicMaterial; // 0x08(0x08)
		struct FMatrix LocalToMesh; // 0x10(0x40)
	};

	struct Function_GPGameplay_WeaponSkinUtil_ReplaceMaterials_Param
	{
	public:

		struct USkeletalMeshComponent* InMeshComponent; // 0x00(0x08)
		struct FReplaceMaterialParam ReplaceParam; // 0x08(0x18)
		struct TArray<struct UMaterialInterface*> ReturnValue; // 0x20(0x10)
	};

	struct Function_GPGameplay_WeaponSystem_OnMergeComplete_Param
	{
	public:

		bool InbMergeSuccess; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct UModularWeaponDesc* Desc; // 0x08(0x08)
		struct USkeletalMesh* MergeSkeletalMesh; // 0x10(0x08)
		uint32_t MeshID; // 0x18(0x04)
		bool bInFirstPerson; // 0x1c(0x01)
		bool bInFPP; // 0x1d(0x01)
	};

	struct Function_GPGameplay_WeaponSystem_OnEnterGameFlowStage_Param
	{
	public:

		enum class EGameFlowStageType GameFlowStage; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponSystem_OnAnimLoadComplete_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> InPaths; // 0x00(0x10)
		uint64_t WeaponID; // 0x10(0x08)
	};

	struct Function_GPGameplay_WeaponSystem_GetOrCreateWeaponHudModel_Param
	{
	public:

		struct UWeaponHudController* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponSystem_AsyncLoadAndCacheObject_Param
	{
	public:

		struct FSoftObjectPath ObjectPath; // 0x00(0x18)
		struct UObject* ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameplay_WeaponThrowableDataComponentPreview_UpdatePreviewVisible_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableDataComponentPreview_UpdatePreviewDeltaVelocity_Param
	{
	public:

		struct FVector TargetDeltaVelocity; // 0x00(0x0c)
	};

	struct Function_GPGameplay_WeaponThrowableDataComponentPreview_TryInitPreviewLine_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableDataComponentPreview_StartAyncPredict_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableDataComponentPreview_ShowPreviewLine_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableDataComponentPreview_OnPreviewAssetLoaded_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> Assets; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponThrowableDataComponentPreview_InitUseAsyncTraceSystem_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableDataComponentPreview_InitPredictBaseParams_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableDataComponentPreview_HidePreviewLine_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableDataComponentPreview_GetClientFakeOffset_Param
	{
	public:

		float Time; // 0x00(0x04)
		struct FVector ReturnValue; // 0x04(0x0c)
	};

	struct Function_GPGameplay_WeaponThrowableDataComponentPreview_GetClientFakeEndTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponThrowableDataComponentPreview_ClearClientFakeEndTime_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableDataComponentPreview_CheckClientFakeOffset_Param
	{
	public:

		float InOffsetTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponThrowableDataComponentPreview_CancelPreviewAssetLoad_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableDataComponentPreview_CancelAyncPredict_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowUASFXComponent_DestroyEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowUASFXComponent_DelayActiveFX_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowUASFXComponent_BeginPlayEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowUASFXComponent_ActiveFXWithVisible_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponViewComponentImpact_PlayImpactEffects_Param
	{
	public:

		struct FHitResult Hit; // 0x00(0x88)
		struct FVector BulletStartLoc; // 0x88(0x0c)
		bool bOnlyRicochet; // 0x94(0x01)
		char HitInfoOptFlag; // 0x95(0x01)
		bool bIsOverlapImpactForwardOfBlockImpact; // 0x96(0x01)
		bool bIsFirstOverlapImpact; // 0x97(0x01)
	};

	struct Function_GPGameplay_WeaponZoomHudInterface_UpdateViewWitchZoomProgress_Param
	{
	public:

		float ZoomProgress; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeldingGunComponent_UpdateHitEffect_Param
	{
	public:

		bool IsAttack; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector HitPoint; // 0x04(0x0c)
	};

	struct Function_GPGameplay_WeldingGunComponent_StopAudio_Param
	{
	public:

	};

	struct Function_GPGameplay_WeldingGunComponent_StopAllEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_WeldingGunComponent_StartFireEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_WeldingGunComponent_PlayAudio_Param
	{
	public:

	};

	struct Function_GPGameplay_WeldingGunComponent_HideHitEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_WeldingGunComponent_CreateHitEffect_Param
	{
	public:

		struct FVector Location; // 0x00(0x0c)
	};

	struct Function_GPGameplay_WeldingGunComponent_CheckHitEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_WeldingGunComponent_CheckHit_Param
	{
	public:

		struct FHitResult OutHitResult; // 0x00(0x88)
		struct FVector StartLoc; // 0x88(0x0c)
		struct FVector EndLoc; // 0x94(0x0c)
		bool ReturnValue; // 0xa0(0x01)
	};

	struct Function_GPGameplay_WorldDamageMaker_Get_Param
	{
	public:

		struct UWorldDamageMaker* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_ZiplineInteractorActor_OnNeedShowMarker_Param
	{
	public:

	};

	struct Function_GPGameplay_ZiplineInteractorActor_OnNeedHideMarker_Param
	{
	public:

	};

	struct Function_GPGameplay_ZiplineInteractorActor_OnExitZiplineArea_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
	};

	struct Function_GPGameplay_ZiplineInteractorActor_OnExitRedStartArea_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
	};

	struct Function_GPGameplay_ZiplineInteractorActor_OnExitGreenStartArea_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
	};

	struct Function_GPGameplay_ZiplineInteractorActor_OnEnterZiplineArea_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
		bool bFromSweep; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct FHitResult SweepResult; // 0x20(0x88)
	};

	struct Function_GPGameplay_ZiplineInteractorActor_OnEnterRedStartArea_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
		bool bFromSweep; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct FHitResult SweepResult; // 0x20(0x88)
	};

	struct Function_GPGameplay_ZiplineInteractorActor_OnEnterGreenStartArea_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
		bool bFromSweep; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct FHitResult SweepResult; // 0x20(0x88)
	};

	struct Function_GPGameplay_ZiplineInteractorActor_OnCooldown_Param
	{
	public:

	};

	struct Function_GPGameplay_ZiplineInteractorActor_OnAvailable_Param
	{
	public:

		bool bIsGreen; // 0x00(0x01)
	};

	struct Function_GPGameplay_ZiplineInteractorActor_BindOverlapEvent_Param
	{
	public:

		struct UBoxComponent* InComp; // 0x00(0x08)
	};

	struct Function_GPGameplay_BasePlayerState_OnRep_Uin_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentAppearance_OnInteractorPostProcessOutline_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t DepthValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAppearance_OnBuildMeshComplete_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAttributeCenterComponent_RefreshCurrentAttributeValue_Param
	{
	public:

		struct FString AttributeName; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAttributeCenterComponent_RefreshAllDirtyAttributeValue_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAttributeCenterComponent_OnRep_SpawnedAttributes_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAttributeCenterComponent_MarkAttributeDirty_Param
	{
	public:

		struct FString AttributeName; // 0x00(0x10)
		bool bImmediatlyUpdate; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPAttributeCenterComponent_ApplyAttributeOperatorEffectClass_Param
	{
	public:

		struct UClass* AOEClass; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPAttributeCenterComponent_ApplyAttributeOperatorEffect_Param
	{
	public:

		struct UAttributeOperatorEffect* AOE; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPAttributeCenterComponent_AddAttributeSetImpl_Param
	{
	public:

		struct UGPAttributeSet* Set; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPAttributeCenterComponent_AddAttributeSetByClassImpl_Param
	{
	public:

		struct UClass* SetClass; // 0x00(0x08)
		bool bInitDefault; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UGPAttributeSet* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_IntCharacter_ServerMove_Cosmetic_Param
	{
	public:

		float Timestamp; // 0x00(0x04)
		struct FVector_NetQuantize100 ClientVelocity; // 0x04(0x0c)
		float ClientDeltaTime; // 0x10(0x04)
	};

	struct Function_GPGameplay_IntCharacter_SendCharacterStates_Param
	{
	public:

		struct FCharacterStats States; // 0x00(0x50)
	};

	struct Function_GPGameplay_IntCharacter_OnRep_TurningPlaceData_Param
	{
	public:

	};

	struct Function_GPGameplay_IntCharacter_OnRep_StartStopData_Param
	{
	public:

	};

	struct Function_GPGameplay_IntCharacter_OnRep_IsProned_Param
	{
	public:

	};

	struct Function_GPGameplay_IntCharacter_OnRep_IsJumpedOverride_Param
	{
	public:

	};

	struct Function_GPGameplay_IntCharacter_OnRep_IsJumped_Param
	{
	public:

	};

	struct Function_GPGameplay_IntCharacter_OnRep_AutonomousInitRepProne_Param
	{
	public:

		bool bProne; // 0x00(0x01)
	};

	struct Function_GPGameplay_IntCharacter_OnRep_AutonomousInitRepCrouch_Param
	{
	public:

		bool bCrouch; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentFiring_ClientFixDataRecoil_Param
	{
	public:

		struct FWeaponDataRecoil InWaistDataRecoil; // 0x00(0x398)
		struct FWeaponDataRecoil InAimDataRecoil; // 0x398(0x398)
		struct FWeaponDataForCharacterState InDataCharacterState; // 0x730(0xa0)
	};

	struct Function_GPGameplay_GPFSMActionInstance_TriggerTransitionEvent_Param
	{
	public:

		enum class EGPFSMTransitionEvent CurrentEvent; // 0x00(0x01)
	};

	struct Function_GPGameplay_DrawTransformComponent_SampleHistoryValues_Param
	{
	public:

		float SampleInterval; // 0x00(0x04)
		int32_t DesiredSampleNum; // 0x04(0x04)
		struct TArray<struct FTransform> ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_DrawTransformComponent_GetHistoryValue_Param
	{
	public:

		float HistoryTime; // 0x00(0x04)
		char pad_4[0xc]; // 0x04(0x0c)
		struct FTransform ReturnValue; // 0x10(0x30)
	};

	struct Function_GPGameplay_GameplayAbilityWeaponState_GetStateType_Param
	{
	public:

		enum class EGPWeaponStateType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GameplayAbilityWeaponState_ActivateAbilityByStateType_Param
	{
	public:

		enum class EGPWeaponStateType StateType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPMarkerItemBase_ShowDebugMarkerInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerItemBase_OnMarkerNoBindActorShowTimerFinished_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerItemBase_OnBubbleTimerFinished_Param
	{
	public:

	};

	struct Function_GPGameplay_GPMarkerItemBase_OnAudioLoadComplete_Param
	{
	public:

		struct FSoftObjectPath AudioSoftPath; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPMarkerItemBase_IsAnyViewCreateConfigHasInit_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPNetworkActorComponent_BPGetIsLocalFocus_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPBaseSpring_SpringDamper_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPBaseSpring_SetTarget_Param
	{
	public:

		float InRadioTarget; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPBaseSpring_SetSpring_Param
	{
	public:

		float InSpringTime; // 0x00(0x04)
		float InSpringRadio; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPBaseSpring_FadeOut_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPBaseSpring_Close_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCameraModifier_Init_Param
	{
	public:

		struct AGPPlayerCameraManager* GPCameraMgr; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPFSMStateMachineComponent_ServerRequestState_Param
	{
	public:

		enum class EGPFSMTransitionEvent transitionEvent; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFSMStateMachineComponent_ServerReceivePredictState_Param
	{
	public:

		enum class EGPFSMTransitionEvent transitionEvent; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t clientTickNumber; // 0x04(0x04)
		struct FGPFSMNetworkedTransaction Transition; // 0x08(0x38)
	};

	struct Function_GPGameplay_GPFSMStateMachineComponent_ServerReceiveFSMGlobalEvent_Param
	{
	public:

		struct FGameplayTag EventTag; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPFSMStateMachineComponent_ServerDoingPredictState_Param
	{
	public:

		enum class EGPFSMTransitionEvent transitionEvent; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t clientTickNumber; // 0x04(0x04)
		struct FGPFSMNetworkedTransaction Transition; // 0x08(0x38)
		bool bNeedServerCheck; // 0x40(0x01)
	};

	struct Function_GPGameplay_GPFSMStateMachineComponent_OnHeavyTaskSyncServerStates_Param
	{
	public:

	};

	struct Function_GPGameplay_GPFSMStateMachineComponent_OnHeavyTaskFSMInitialize_Param
	{
	public:

	};

	struct Function_GPGameplay_GPFSMStateInstance_TriggerTransitionEvent_Param
	{
	public:

		enum class EGPFSMTransitionEvent CurrentEvent; // 0x00(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_UpdateWeaponSkinParamsByRandomSeed_Param
	{
	public:

		uint64_t RandomSeed; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_UpdateWeaponSkinParams_Param
	{
	public:

		uint64_t MysticalId; // 0x00(0x08)
		float Wear; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct TArray<struct FWeaponSkinParam> Params; // 0x10(0x10)
	};

	struct Function_GPGameplay_ModularWeaponDesc_UpdateNodeAttachPositionWithTuneValueImpl_Param
	{
	public:

		int32_t InPartIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<uint64_t> InFindSocketsItemId; // 0x08(0x10)
		struct FName FindSocketName; // 0x18(0x08)
		int32_t SocketPositionIndex; // 0x20(0x04)
		enum class EWeaponPartMeshType MeshType; // 0x24(0x01)
		char pad_25[0xb]; // 0x25(0x0b)
		struct FTransform ReturnValue; // 0x30(0x30)
	};

	struct Function_GPGameplay_ModularWeaponDesc_UpdateNodeAttachPositionImpl_Param
	{
	public:

		int32_t InPartIndex; // 0x00(0x04)
		enum class EWeaponPartMeshType MeshType; // 0x04(0x01)
		bool UpdateTunes; // 0x05(0x01)
		char pad_6[0xa]; // 0x06(0x0a)
		struct FTransform ReturnValue; // 0x10(0x30)
	};

	struct Function_GPGameplay_ModularWeaponDesc_UpdateNodeAttachPosition_Param
	{
	public:

		enum class EWeaponPartMeshType MeshType; // 0x00(0x01)
		bool UpdateTunes; // 0x01(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_UpdateExtraModelAttachPositionImpl_Param
	{
	public:

		int32_t InPartIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FTunePartFunctionTable TunePartFunctionRow; // 0x08(0xa0)
		int32_t SocketPositionIndex; // 0xa8(0x04)
		enum class EWeaponPartMeshType MeshType; // 0xac(0x01)
		char pad_AD[0x3]; // 0xad(0x03)
		struct FTransform ReturnValue; // 0xb0(0x30)
	};

	struct Function_GPGameplay_ModularWeaponDesc_ToGunDescRow_Internal_Param
	{
	public:

		struct TArray<struct FGunDescRow> OutArray; // 0x00(0x10)
		struct FGPModularWeaponPartNode TargetPart; // 0x10(0x120)
		int16_t DepthIndex; // 0x130(0x02)
		int16_t ParentIndex; // 0x132(0x02)
		uint32_t SocketId; // 0x134(0x04)
	};

	struct Function_GPGameplay_ModularWeaponDesc_ToGunDescRow_Param
	{
	public:

		struct TArray<struct FGunDescRow> OutArray; // 0x00(0x10)
	};

	struct Function_GPGameplay_ModularWeaponDesc_ShouldShowApperanceInteral_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_ShouldShowApperance_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_SetSkinInfoFromPbWeaponSkinInfoParam_Param
	{
	public:

		struct FPbWeaponSkinInfoParam InSkinInfoParam; // 0x00(0x78)
	};

	struct Function_GPGameplay_ModularWeaponDesc_SetSkinInfo_Param
	{
	public:

		struct FWeaponSkinInfo InSkinInfo; // 0x00(0x88)
	};

	struct Function_GPGameplay_ModularWeaponDesc_SetSkinApperanceId_Param
	{
	public:

		uint64_t InSkinApperanceId; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_SetSkin_Param
	{
	public:

		uint64_t InSkinId; // 0x00(0x08)
		uint64_t InFancyColorID; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_SetSkillSkinInfo_Param
	{
	public:

		uint64_t AvatarID; // 0x00(0x08)
		bool EnemyVisible; // 0x08(0x01)
		bool teammateVisible; // 0x09(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_SetRootGUID_Param
	{
	public:

		uint64_t Guid; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_SetPoorItemId_Param
	{
	public:

		uint64_t InPoorItemId; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_SetPartNodeGUIDFromSocketGUID_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		uint64_t Guid; // 0x08(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_SetPartNodeBindTypeFromSocketGUID_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		char BindType; // 0x08(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_SetPartNodeBindPlayerIdFromSocketGUID_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		uint64_t BindPlayerId; // 0x08(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_SetKillCnt_Param
	{
	public:

		int32_t KillCnt; // 0x00(0x04)
	};

	struct Function_GPGameplay_ModularWeaponDesc_SeteTuneNodeValueFromDesc_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		struct UModularWeaponDesc* Desc; // 0x08(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_SeteTuneNodeValue_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		uint64_t InTuneID; // 0x08(0x08)
		float InValue; // 0x10(0x04)
	};

	struct Function_GPGameplay_ModularWeaponDesc_SetBipodDeploy_Param
	{
	public:

		bool bIsDeploy; // 0x00(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_SetApplyTune_Param
	{
	public:

		bool inApplyTune; // 0x00(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_RevertDirfyFlagNodeFromSnapshot_Param
	{
	public:

		struct UModularWeaponDesc* Snapshot; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_ResetNode_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_ResetGUID_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDesc_RemoveParts_Param
	{
	public:

		int32_t InPartIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_ModularWeaponDesc_RelinkSocketGUID_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDesc_ReleaseSubNode_Param
	{
	public:

		struct FGPModularWeaponPartNode SubNode; // 0x00(0x120)
	};

	struct Function_GPGameplay_ModularWeaponDesc_ReleasePartsSubTreeSpace_Param
	{
	public:

		int32_t InRootNodeIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_ModularWeaponDesc_RefreshApperanceData_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDesc_RedirectSkinInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDesc_PrepareSkinApperanceIDFromIDs_Param
	{
	public:

		struct FWeaponSkinInfo InWeaponSkinInfo; // 0x00(0x88)
		bool ReturnValue; // 0x88(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_NodeType2CompareType_Param
	{
	public:

		enum class EModularPartNodeType LCompareType; // 0x00(0x01)
		enum class EModularWeaponDescCompare ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_MoveSrcNodeToDestNode_Param
	{
	public:

		int32_t SrcNodeIndex; // 0x00(0x04)
		int32_t DestNodeIndex; // 0x04(0x04)
		struct FName SocketName; // 0x08(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_LoadWeaponSkinAttachModel_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDesc_LoadClientOnlyWeaponExtraModelInfoImpl_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_LoadClientOnlyWeaponExtraModelInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDesc_IsSimulateStateBySocketGUID_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_IsSimulateState_Param
	{
	public:

		uint64_t SocketFlag; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_IsSelfSimulateStateBySocketGUID_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_IsSelfSimulateState_Param
	{
	public:

		uint64_t SocketFlag; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_IsParentSimulateStateBySocketGUID_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_IsParentSimulateState_Param
	{
	public:

		uint64_t SocketFlag; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_IsMergeablePartImpl_Param
	{
	public:

		int32_t PartNodeIndex; // 0x00(0x04)
		bool b1P; // 0x04(0x01)
		bool ReturnValue; // 0x05(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_IsMergeablePart_Param
	{
	public:

		int32_t PartNodeIndex; // 0x00(0x04)
		bool b1P; // 0x04(0x01)
		bool ReturnValue; // 0x05(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_IsLockApperance_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_IsFinetune_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_HasPart_Param
	{
	public:

		uint64_t PartGUID; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_HasModularWeaponDescCompare_Param
	{
	public:

		enum class EModularWeaponDescCompare LCompareType; // 0x00(0x01)
		enum class EModularWeaponDescCompare RCompareType; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetWeaponPartNodeIndexByType_Param
	{
	public:

		enum class EAdapterItemType AdapterType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct TArray<int32_t> ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetWeaponPartNodeIndexByExtraModelType_Param
	{
	public:

		enum class EWeaponExtraModelType ExtraModelType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct TArray<int32_t> ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetWeaponPartNodeFromSocketGUIDWithIndex_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		int32_t OutIndex; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FGPModularWeaponPartNode ReturnValue; // 0x10(0x120)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetWeaponPartNodeFromSocketGUID_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		struct FGPModularWeaponPartNode ReturnValue; // 0x08(0x120)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetWeaponPartNodeFromItemID_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		bool bFound; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct FGPModularWeaponPartNode ReturnValue; // 0x10(0x120)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetWeaponPartNodeByGUID_Param
	{
	public:

		uint64_t InPartGUID; // 0x00(0x08)
		int32_t OutIndex; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FGPModularWeaponPartNode ReturnValue; // 0x10(0x120)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetWeaponPartNode_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FGPModularWeaponPartNode ReturnValue; // 0x08(0x120)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetWeaponParentPartNodeByGUID_Param
	{
	public:

		uint64_t InPartGUID; // 0x00(0x08)
		struct FGPModularWeaponPartNode ReturnValue; // 0x08(0x120)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetUnLinkedParentNodeSocketGUIDs_Param
	{
	public:

		struct TArray<uint64_t> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetTuneNodeValue_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		uint64_t TuneId; // 0x08(0x08)
		float TuneValue; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetTuneNodeSocketNamesCount_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		uint64_t SocketGUID; // 0x08(0x08)
		uint64_t TuneId; // 0x10(0x08)
		uint64_t ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetTreeHashAboutStaticWeaponPart_Param
	{
	public:

		uint32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetSkinInfo_Param
	{
	public:

		struct FWeaponSkinInfo ReturnValue; // 0x00(0x88)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetSkinId_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetRootGUID_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetPendantID_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetPbWeaponSkinInfoParam_Param
	{
	public:

		struct FPbWeaponSkinInfoParam ReturnValue; // 0x00(0x78)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetPartNodeIndexFromSocketGUID_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetParentNodeFromSocketGUID_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		struct FGPModularWeaponPartNode ReturnValue; // 0x08(0x120)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetParentNodeFromItemIDs_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		struct TArray<uint64_t> ItemIds; // 0x08(0x10)
		struct FGPModularWeaponPartNode ReturnValue; // 0x18(0x120)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetModularContext_Param
	{
	public:

		struct FModularContext ReturnValue; // 0x00(0xc0)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetIsApplyTune_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetFancyColorID_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetBipodDeploy_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetAllVisableParts_Param
	{
	public:

		struct TArray<struct FGPModularWeaponPartNode> OutPartNodes; // 0x00(0x10)
	};

	struct Function_GPGameplay_ModularWeaponDesc_GetAllParts_Param
	{
	public:

		struct TArray<struct FGPModularWeaponPartNode> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_ModularWeaponDesc_FromGunDescRow_Param
	{
	public:

		struct TArray<struct FGunDescRow> inArray; // 0x00(0x10)
	};

	struct Function_GPGameplay_ModularWeaponDesc_FromBaseWeaponID_Param
	{
	public:

		uint64_t BaseWeaponId; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_ForceLoadClientOnlyWeaponExtraModelInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDesc_EndModify_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDesc_EncodeSocketGUIDFromParentSocketGUID_Param
	{
	public:

		uint64_t SocketId; // 0x00(0x08)
		uint64_t ParentSocketGUID; // 0x08(0x08)
		enum class EModularPartNodeType NodeType; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		uint64_t ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_EncodeSocketGUID_Param
	{
	public:

		uint64_t SocketId; // 0x00(0x08)
		uint64_t Depth; // 0x08(0x08)
		uint64_t ParentSocketGUID; // 0x10(0x08)
		enum class EModularPartNodeType NodeType; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		uint64_t ReturnValue; // 0x20(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_DecodeSocketIDFromSocketGUID_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		uint64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_DecodeSocketDepthFromSocketGUID_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		uint64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_DecodeParentSocketGUIDFromSocketGUID_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		uint64_t ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_DecodeNodeTypeFromSocketGUID_Param
	{
	public:

		uint64_t SocketGUID; // 0x00(0x08)
		enum class EModularPartNodeType ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_CompareRenderResult_Param
	{
	public:

		struct UModularWeaponDesc* Desc; // 0x00(0x08)
		enum class EModularWeaponDescCompare CompareType; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_ClearNodeAttachPosition_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDesc_CleanTree_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDesc_CleanExtraModelInfo_Param
	{
	public:

		enum class EModularPartNodeType NodeType; // 0x00(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_BuildTree_Param
	{
	public:

		uint64_t InRootPartItemID; // 0x00(0x08)
		uint64_t InRootPartFunctionID; // 0x08(0x08)
		uint64_t InRootPartAnimFunctionID; // 0x10(0x08)
		uint64_t InRootPartAudioFunctionID; // 0x18(0x08)
		uint64_t InRootPartFxFunctionID; // 0x20(0x08)
		uint64_t InRootPartsTypeId; // 0x28(0x08)
		char InRootPartsTypePriority; // 0x30(0x01)
		char pad_31[0x7]; // 0x31(0x07)
		uint64_t Guid; // 0x38(0x08)
		enum class EAdapterItemType InRootPartType; // 0x40(0x01)
		char pad_41[0x7]; // 0x41(0x07)
		struct FItemInfoContext ItemInfo; // 0x48(0x60)
		int32_t ReturnValue; // 0xa8(0x04)
	};

	struct Function_GPGameplay_ModularWeaponDesc_BuildFromWeaponParts_Param
	{
	public:

		struct TArray<struct FGPModularWeaponPartNode> InWeaponPartNodes; // 0x00(0x10)
	};

	struct Function_GPGameplay_ModularWeaponDesc_BuildFromModularWeaponDesc_Param
	{
	public:

		struct UModularWeaponDesc* WeaponDesc; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_BeginModify_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDesc_AttachSrcNodeToDestNode_Param
	{
	public:

		int32_t SrcNodeIndex; // 0x00(0x04)
		int32_t DestNodeIndex; // 0x04(0x04)
		uint32_t DestSocketId; // 0x08(0x04)
	};

	struct Function_GPGameplay_ModularWeaponDesc_AttachPendant_Param
	{
	public:

		uint64_t PendantItemId; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDesc_AttachNodeToDestNode_Param
	{
	public:

		int32_t SrcNodeIndex; // 0x00(0x04)
		int32_t DestNodeIndex; // 0x04(0x04)
		struct FName SocketName; // 0x08(0x08)
		bool bRemoveExist; // 0x10(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDesc_AddAPartToTree_Param
	{
	public:

		int32_t ParentIndex; // 0x00(0x04)
		uint32_t ParentSocketId; // 0x04(0x04)
		uint64_t AttachingPartID; // 0x08(0x08)
		uint64_t AttachingPartGUID; // 0x10(0x08)
		struct FItemInfoContext ItemInfo; // 0x18(0x60)
		int32_t ReturnValue; // 0x78(0x04)
	};

	struct Function_GPGameplay_GPPathFollower_Stop_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPathFollower_Resume_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPathFollower_Reset_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPathFollower_Play_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPathFollower_Pause_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPreviewLineActorBase_UpdatePreview_Param
	{
	public:

		bool bIsTracingLine; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPreviewLineActorBase_TrySetRenderMatrixMode_Param
	{
	public:

		enum class ERenderMatrixMode RenderMatrixMode; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPreviewLineActorBase_ShowPreview_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPreviewLineActorBase_HideAllInstance_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPreviewLineActorBase_Clear_Param
	{
	public:

	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_StopWeaponRagdollActor_Param
	{
	public:

	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_StopReplicate_Param
	{
	public:

	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_ServerGatherPhysicBodyCollectionData_Param
	{
	public:

		int32_t FrameIndex; // 0x00(0x04)
		float DeltaSeconds; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_RPC_ServerUpdateDeathPhysicsMovement_Param
	{
	public:

		struct AGPCharacterBase* UpdatePhysicsCharacter; // 0x00(0x08)
		float InSendPhysicsSimulateTime; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct TArray<struct FRepMovement> InReplicatePhysicsMovementArray; // 0x10(0x10)
	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_RPC_EnablePhysicsBodyCollectionDebug_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_RPC_ClientRemoveDeathPhysicsAuthority_Param
	{
	public:

		struct AGPCharacterBase* UpdatePhysicsCharacter; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_RPC_ClientNotifyAuthority_Param
	{
	public:

		struct AGPCharacterBase* UpdatePhysicsCharacter; // 0x00(0x08)
		struct AGPCharacterBase* InAuthoritativeClientCharacter; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_RPC_ClientAuthorityNotifyStop_Param
	{
	public:

		struct AGPCharacterBase* UpdatePhysicsCharacter; // 0x00(0x08)
		float SimulateTime; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_RecoverCacheSkeletalMesh_Param
	{
	public:

	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_OnRep_ReplicatePhysics_Param
	{
	public:

	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_OnClientGPCharacterDie_Param
	{
	public:

		struct AGPCharacterBase* InCharacter; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_MulticastServerClearByImpendingDeath_Param
	{
	public:

		struct FRagDollReplicateData InRagDollReplicateData; // 0x00(0x4c)
	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_MulticastActorLocation_Param
	{
	public:

		struct FVector_NetQuantize10 InActorLocation; // 0x00(0x0c)
		float InMeshOffsetZ; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_Multicast_ClearRagDollPhysicsReplicateData_Param
	{
	public:

	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_GetPhysicsWeight_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_ClientReceivePhysicBodyCollectionData_Param
	{
	public:

		struct FRagdollPhysicsBodyCollectionData PhysicsBodyCollectionData; // 0x00(0x18)
		int32_t FrameIndex; // 0x18(0x04)
		float DeltaSeconds; // 0x1c(0x04)
	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_CheckConstraintAndDisableLimbBody_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPRagDollPhysicsComponent_CheckBeginRagdollOverlap_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimBase_InitGetWeaponManagerComponent_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentAnimBase_GetWeaponManagerComponent_Param
	{
	public:

		struct UWeaponManagerComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimBase_EnablePlayInteractivePutWeaponAnim_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimBase_EnablePlayInteractiveGetWeaponAnim_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponDataComponentAnimBase_DelaySetWeaponMeshHidden_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentAnimBase_DelayAttachBackWeaponMesh_Param
	{
	public:

		bool bAttachBack; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float DelayTime; // 0x04(0x04)
		struct FString ContextString; // 0x08(0x10)
	};

	struct Function_GPGameplay_WeaponManagerComponent_SwitchWeaponEquipPosition_Param
	{
	public:

		uint32_t EquipPositionA; // 0x00(0x04)
		uint32_t EquipPositionB; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_SwitchToWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		uint32_t EquipPosition; // 0x04(0x04)
		enum class EWeaponSwitchType SwitchType; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_SwitchToTargetWeaponInner_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_SwitchToTargetWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct AWeaponBase* Weapon; // 0x08(0x08)
		enum class EWeaponSwitchType SwitchType; // 0x10(0x01)
		bool Force; // 0x11(0x01)
		bool ReturnValue; // 0x12(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_SwitchToPreWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool bCanUseEmptyHand; // 0x02(0x01)
		bool ReturnValue; // 0x03(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_SwitchToNextWeaponReverse_Param
	{
	public:

		enum class ESwitchWeaponContext SwitchWeaponContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool bCanUseEmptyHand; // 0x02(0x01)
		bool ReturnValue; // 0x03(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_SwitchToNextWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool bCanUseEmptyHand; // 0x02(0x01)
		bool ReturnValue; // 0x03(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_SwitchToMeleeWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool bCanUseEmptyHand; // 0x02(0x01)
		bool ReturnValue; // 0x03(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_SwitchToMainWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_SwitchToLastUsedWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool bCanUseEmptyHand; // 0x02(0x01)
		bool IncludeSkillWeapon; // 0x03(0x01)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_SwitchToEmptyHand_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_SwitchToDefaultWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_SetWeaponSlot_Param
	{
	public:

		char InWeaponSlot; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_ServerSwitchToTargetWeapon_Param
	{
	public:

		struct AWeaponBase* TargetWeapon; // 0x00(0x08)
		enum class EWeaponSwitchType SwitchType; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_ServerSwitchToNextWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool bCanUseEmptyHand; // 0x02(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_ServerRemoveWeapon_Param
	{
	public:

		struct AWeaponBase* TargetWeapon; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_RPC_ServerVerifyFrame_Param
	{
	public:

		struct FSwitchWeaponFrame ClientFrame; // 0x00(0x38)
		struct FSwitchWeaponAntiCheatCode InCheckCode; // 0x38(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_RPC_ClientNotifyFrameInValid_Param
	{
	public:

		int32_t ClientFrameNo; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponManagerComponent_RemoveWeaponInScene_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_RemoveWeaponByWeaponId_Param
	{
	public:

		uint64_t WeaponID; // 0x00(0x08)
		bool bRemoveAll; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_RemoveWeaponBySkillId_Param
	{
	public:

		uint64_t SkillId; // 0x00(0x08)
		bool bRemoveAll; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_RemoveWeapon_Param
	{
	public:

		uint32_t EquipPosition; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_RemoveAllWeapon_Param
	{
	public:

		bool bAutoSwitchNext; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_ProcessInteruptSkillWeaponSwitching_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_OnRepWeaponList_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_OnRepWeaponIDList_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_OnRep_RemoteTimeLineData_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_OnCharacterReborn_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_MeleeFireInLogic_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_IsWeaponExist_Param
	{
	public:

		struct FWeaponIdentity InWeaponIdentity; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_IsDefaultWeaponSlot_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_IsCanCancelSwitchCurrentWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_InitWeaponManagerConfig_Param
	{
	public:

		struct FWeaponManagerConfig InConfig; // 0x00(0x18)
	};

	struct Function_GPGameplay_WeaponManagerComponent_HasPendingSwitchWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_GetWeaponListMain_Param
	{
	public:

		struct TArray<struct AWeaponBase*> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponManagerComponent_GetWeaponListByType_Param
	{
	public:

		enum class EWeaponItemType WeaponType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct TArray<struct AWeaponBase*> ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_WeaponManagerComponent_GetWeaponList_Param
	{
	public:

		struct TArray<struct AWeaponBase*> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponManagerComponent_GetWeaponIDList_Param
	{
	public:

		struct TArray<uint64_t> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponManagerComponent_GetWeaponCount_Param
	{
	public:

		bool bIncludeMeleeWeapon; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponManagerComponent_GetWeaponByPosition_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_GetWeaponByIdentity_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_GetWeaponByGid_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_GetWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_GetPendingActiveWeapon_Param
	{
	public:

		struct AWeaponBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_GetNextWeapon_Param
	{
	public:

		bool bCanUseEmptyHand; // 0x00(0x01)
		bool bReverse; // 0x01(0x01)
		char pad_2[0x6]; // 0x02(0x06)
		struct AWeaponBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_GetMeleeOrEmptyWeapon_Param
	{
	public:

		struct AWeaponBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_GetLastWeapon_Param
	{
	public:

		bool bCanUseEmptyHand; // 0x00(0x01)
		bool IncludeSkillWeapon; // 0x01(0x01)
		char pad_2[0x6]; // 0x02(0x06)
		struct AWeaponBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_GetLastUsedWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_GetEmptyHandWeapons_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_GetEmptyHandWeaponBase_Param
	{
	public:

		struct AWeaponBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_GetEmptyHandWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_GetDefaultWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_GetDebugString_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponManagerComponent_GetCurrentWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_GetAllWeaponUsingTime_Param
	{
	public:

		struct TMap<uint64_t, float> ReturnValue; // 0x00(0x50)
	};

	struct Function_GPGameplay_WeaponManagerComponent_GetAllWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_GetAllEmptyHandWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_GetAllCurrentWeapon_Param
	{
	public:

		struct TArray<struct AWeaponBase*> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponManagerComponent_EndInteractive_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_CollectionWeaponUsingTime_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_ClientPreSwitchToTargetWeapon_Param
	{
	public:

		struct AWeaponBase* TargetWeapon; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_CancelSwitchCurrentWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_BP_RemoveWeapon_Param
	{
	public:

		int32_t EquipPosition; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_BP_GetWeaponByPosition_Param
	{
	public:

		uint32_t EquipPosition; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct AWeaponBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_BP_GetWeaponByIdentity_Param
	{
	public:

		struct FWeaponIdentity InWeaponIdentity; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct AWeaponBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_BP_GetWeaponByGid_Param
	{
	public:

		uint64_t gid; // 0x00(0x08)
		struct AWeaponBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_BP_GetWeapon_Param
	{
	public:

		uint32_t EquipPosition; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct AWeaponBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_BP_GetNextWeapon_Param
	{
	public:

		bool bCanUseEmptyHand; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct AWeaponBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_BP_GetLastUsedWeapon_Param
	{
	public:

		struct AWeaponBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_BP_GetEmptyHandWeapon_Param
	{
	public:

		struct AWeaponBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_BP_GetCurrentWeapon_Param
	{
	public:

		struct AWeaponBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_BP_GetCurActiveWeapon_Param
	{
	public:

		struct AWeaponBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponManagerComponent_BP_GetAllWeapon_Param
	{
	public:

		struct TArray<struct AWeaponBase*> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponManagerComponent_BP_AddWeaponDesc_Param
	{
	public:

		struct UModularWeaponDesc* WeaponDesc; // 0x00(0x08)
		int64_t Guid; // 0x08(0x08)
		int32_t EquipPosition; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_GPGameplay_WeaponManagerComponent_BeginInteractive_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponManagerComponent_ActivatePendingWeapon_Param
	{
	public:

		enum class EWeaponSwitchType SwitchType; // 0x00(0x01)
	};

	struct Function_GPGameplay_ReconnectionSystemBase_RemoveConnection_Param
	{
	public:

		struct APlayerController* PC; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_ReconnectionSystemBase_FoundConnection_Param
	{
	public:

		struct APlayerController* PC; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_ReconnectionSystemBase_FindConnection_Param
	{
	public:

		uint64_t ConnectionID; // 0x00(0x08)
		struct APlayerController* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_ReconnectionSystemBase_AddConnection_Param
	{
	public:

		struct APlayerController* PC; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_ScreenEffectBase_SetEffectSourceActor_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
	};

	struct Function_GPGameplay_ScreenEffectBase_OnUpdatePostprocessViewportParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		struct FVector2D InViewPortLeftTop; // 0x08(0x08)
		struct FVector2D InViewPortSize; // 0x10(0x08)
	};

	struct Function_GPGameplay_ScreenEffectBase_OnUpdateEffectVectorParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		struct FVector InValue; // 0x08(0x0c)
	};

	struct Function_GPGameplay_ScreenEffectBase_OnUpdateEffectTextureParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		struct UTexture* InValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_ScreenEffectBase_OnUpdateEffectParticleParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		char pad_8[0x8]; // 0x08(0x08)
		struct FParticleSysParam InValue; // 0x10(0x80)
	};

	struct Function_GPGameplay_ScreenEffectBase_OnUpdateEffectLinearColorParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		struct FLinearColor InValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_ScreenEffectBase_OnUpdateEffectFloatParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		float InValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_ScreenEffectBase_OnShow_Param
	{
	public:

	};

	struct Function_GPGameplay_ScreenEffectBase_OnInit_Param
	{
	public:

		struct FScreenEffectInfo ScreenEffectInfo; // 0x00(0xf0)
		struct FName InEffectName; // 0xf0(0x08)
	};

	struct Function_GPGameplay_ScreenEffectBase_OnHide_Param
	{
	public:

	};

	struct Function_GPGameplay_ScreenEffectBase_OnFadeOut_Param
	{
	public:

	};

	struct Function_GPGameplay_ScreenEffectBase_OnDeactive_Param
	{
	public:

	};

	struct Function_GPGameplay_ScreenEffectBase_OnActive_Param
	{
	public:

	};

	struct Function_GPGameplay_ScreenEffectBase_GetEffectFloatParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_ScreenEffectBase_ClearHideState_Param
	{
	public:

	};

	struct Function_GPGameplay_ScreenEffectControllerBase_SetEffectSourceActor_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
	};

	struct Function_GPGameplay_ScreenEffectControllerBase_SetEffectResoureTime_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		float InTime; // 0x04(0x04)
	};

	struct Function_GPGameplay_ScreenEffectControllerBase_OnUpdatePostprocessViewportParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		struct FVector2D InViewPortLeftTop; // 0x08(0x08)
		struct FVector2D InViewPortSize; // 0x10(0x08)
	};

	struct Function_GPGameplay_ScreenEffectControllerBase_OnUpdateEffectVectorParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		struct FVector InValue; // 0x08(0x0c)
	};

	struct Function_GPGameplay_ScreenEffectControllerBase_OnUpdateEffectTextureParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		struct UTexture* InValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_ScreenEffectControllerBase_OnUpdateEffectParticleParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		char pad_8[0x8]; // 0x08(0x08)
		struct FParticleSysParam InValue; // 0x10(0x80)
	};

	struct Function_GPGameplay_ScreenEffectControllerBase_OnUpdateEffectLinearColorParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		struct FLinearColor InValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_ScreenEffectControllerBase_OnUpdateEffectFloatParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		float InValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_ScreenEffectControllerBase_OnShow_Param
	{
	public:

	};

	struct Function_GPGameplay_ScreenEffectControllerBase_OnInit_Param
	{
	public:

		struct FScreenEffectInfo ScreenEffectInfo; // 0x00(0xf0)
		struct FName InEffectName; // 0xf0(0x08)
	};

	struct Function_GPGameplay_ScreenEffectControllerBase_OnHide_Param
	{
	public:

	};

	struct Function_GPGameplay_ScreenEffectControllerBase_OnFadeOut_Param
	{
	public:

	};

	struct Function_GPGameplay_ScreenEffectControllerBase_OnDeactive_Param
	{
	public:

	};

	struct Function_GPGameplay_ScreenEffectControllerBase_OnActive_Param
	{
	public:

	};

	struct Function_GPGameplay_ScreenEffectControllerBase_GetEffectView_Param
	{
	public:

		struct UScreenEffectBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_ScreenEffectControllerBase_GetEffectFloatParam_Param
	{
	public:

		struct FName InParamName; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_ScreenEffectControllerBase_FadeOutLimitDeactive_Param
	{
	public:

	};

	struct Function_GPGameplay_ScreenEffectControllerBase_ClearHideState_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentAmmo_RPC_ServerVerifyFrame_Param
	{
	public:

		struct FAmmoKeyFrame KeyFrame; // 0x00(0x38)
		float AntiCheatCode; // 0x38(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAmmo_RPC_ClientOnNotifyFrameInValid_Param
	{
	public:

		int32_t LocalFrameNo; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAmmo_RecieveObWeaponData_Param
	{
	public:

		int32_t CurrentAmmo; // 0x00(0x04)
		int32_t CarriedAmmo; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAmmo_OnWeaponAmmoOrCarriedAmmoChanged_Param
	{
	public:

		float NewClipAmmoCount; // 0x00(0x04)
		float NewCarriedAmmoCount; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAmmo_OnWeaponAmmoCountChanged_Param
	{
	public:

		float NewClipAmmoCount; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAmmo_OnRep_AmmoValue_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentAmmo_OnClipAmmoSizeChange_Param
	{
	public:

		float OldValue; // 0x00(0x04)
		float NewValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponDataComponentAmmo_GetCurrentAmmoData_Param
	{
	public:

		int32_t ClipNum; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FAmmoContext ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_WeaponDataComponentAmmo_GetCurReloadParam_Param
	{
	public:

		struct TArray<struct FAmmoDataItem> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponDataComponentAmmo_GetCarriedAmmoChangedDelegate_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentAmmo_GetAmmoChangedDelegate_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentAmmo_ClearPreviewAmmoGuard_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentState_RequestServerVerifyStateFrameForFire_Param
	{
	public:

		struct FStateFrame WSFrame; // 0x00(0x30)
		float InCheckCode; // 0x30(0x04)
		struct FFireAntiCheatInfo FireAntiCheatInfo; // 0x34(0x08)
	};

	struct Function_GPGameplay_WeaponDataComponentState_OnStateStartFireForAI_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentState_OnStateStartFire_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponDataComponentZoom_ShowZoomHUD_Param
	{
	public:

		struct FName HudName; // 0x00(0x08)
		bool bActive; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_WeaponDecalDetectionComponent_DetectionDecalVisibility_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFireRecoilDFM_LoadYawShakeCurve_Param
	{
	public:

		struct FSoftObjectPath SoftObjectPath; // 0x00(0x18)
	};

	struct Function_GPGameplay_WeaponFireRecoilDFM_LoadPitchShakeCurve_Param
	{
	public:

		struct FSoftObjectPath SoftObjectPath; // 0x00(0x18)
	};

	struct Function_GPGameplay_WeaponFuncComponentAmmo_ServerSetFullAmmo_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFuncComponentAmmo_ServerReloadAmmo_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFuncComponentAmmo_OnWeaponAmmoChanged_Param
	{
	public:

		float NewClipAmmoCount; // 0x00(0x04)
		float NewCarriedAmmoCount; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponFuncComponentAmmo_ClientOnAutoAddAmmoComplete_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFuncComponentEffect_OnPerfGearPipelineQualityChanged_Param
	{
	public:

		enum class EPerfGearQualityLevel QualityLevel; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponFuncComponentGunSway_OnWeaponZoomingStateChanged_Param
	{
	public:

		bool bIsZooming; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponFuncComponentGunSway_OnPoseChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFuncComponentGunSway_OnBreathValueFull_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFuncComponentGunSway_OnBreathStateChanged_Param
	{
	public:

		enum class EBreathState PreState; // 0x00(0x01)
		enum class EBreathState CurState; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponFuncComponentZoom_SetZoomRate_Param
	{
	public:

		enum class EZoomInParamType ParamType; // 0x00(0x01)
		bool bOverride; // 0x01(0x01)
		char pad_2[0x2]; // 0x02(0x02)
		float ZoomRate; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponFuncComponentZoom_SetWeaponFov_Param
	{
	public:

		enum class EZoomInParamType ParamType; // 0x00(0x01)
		bool bOverride; // 0x01(0x01)
		char pad_2[0x2]; // 0x02(0x02)
		float WeaponFOV; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponFuncComponentZoom_SetTargetCameraTransformInWeaponSpace_Param
	{
	public:

		enum class EZoomInParamType ParamType; // 0x00(0x01)
		bool bOverride; // 0x01(0x01)
		char pad_2[0xe]; // 0x02(0x0e)
		struct FTransform Trans; // 0x10(0x30)
	};

	struct Function_GPGameplay_WeaponFuncComponentZoom_SetCameraOffsetForDebug_Param
	{
	public:

		float CamOffset; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponFuncComponentZoom_SetCameraOffset_Param
	{
	public:

		enum class EZoomInParamType ParamType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float CamOffset; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponFuncComponentZoom_SetCameraFOV_Param
	{
	public:

		enum class EZoomInParamType ParamType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float CamFov; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponFuncComponentZoom_GetZoomInCameraFov_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponFuncComponentZoom_GetTargetParam_Param
	{
	public:

		struct FZoomInParamBase ReturnValue; // 0x00(0x80)
	};

	struct Function_GPGameplay_WeaponFuncComponentZoom_GetParamWeaponFov_Param
	{
	public:

		enum class EZoomInParamType ParamType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponFuncComponentZoom_GetParamCameraOffset_Param
	{
	public:

		enum class EZoomInParamType ParamType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponFuncComponentZoom_GetParamCameraFov_Param
	{
	public:

		enum class EZoomInParamType ParamType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponFuncComponentZoom_GetCenterTransformInWeaponSpace_Param
	{
	public:

		struct FTransform ReturnValue; // 0x00(0x30)
	};

	struct Function_GPGameplay_WeaponFuncComponentZoom_GetCenterTransformInCameraSpace_Param
	{
	public:

		struct FTransform OutTransform; // 0x00(0x30)
		bool ReturnValue; // 0x30(0x01)
	};

	struct Function_GPGameplay_WeaponFuncComponentZoom_GetCameraOffsetForDebug_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponFuncComponentZoom_CalcWeaponTransInCamDelta_Param
	{
	public:

		struct FTransform ReturnValue; // 0x00(0x30)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_UnRegisterToGPProjectileGameComponent_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_StickyToTarget_Param
	{
	public:

		struct FHitResult ImpactResult; // 0x00(0x88)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_RegisterToGPProjectileGameComponent_Param
	{
	public:

		struct UFXResourceContainerComponent* TargetFXComponent; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_OnExplosionEffectLifeTime_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_OnAudioLoad_Param
	{
	public:

		struct FSoftObjectPath AudioSoftPath; // 0x00(0x18)
		struct FName AudioName; // 0x18(0x08)
		enum class EGPAudioBlueprintType AudioType; // 0x20(0x01)
		char pad_21[0x3]; // 0x21(0x03)
		struct FVector TargetLocation; // 0x24(0x0c)
		struct AActor* TargetActor; // 0x30(0x08)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_NeedKeepStartStopAudio_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_MultiPlayBounceAudio_Param
	{
	public:

		struct FName AudioName; // 0x00(0x08)
		struct FVector Location; // 0x08(0x0c)
		int32_t Bounce; // 0x14(0x04)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_MulticastClientProjectileStop_Param
	{
	public:

		struct FHitResult ImpactResult; // 0x00(0x88)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_MulticastClientPlayPreExplosionEffect_Param
	{
	public:

		struct FVector ServerLoc; // 0x00(0x0c)
		struct FRotator ServerRotator; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_MulticastClientPlayExplosionEffect_Param
	{
	public:

		struct FVector ServerLoc; // 0x00(0x0c)
		struct FRotator ServerRotator; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_LoadProjectileMeshAssets_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_IsProjectileUnderWater_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_IsExplosionEffectPlayLiteSequence_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_GetPreExplosionEffectName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_GetExplosionEffectTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_GetExplosionEffectName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_DeactivateTailFX_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_ClientPlayPreExplosionEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_ClientPlayExplosionEffect_PureParticle_Param
	{
	public:

		struct FName EffectName; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_ClientPlayExplosionEffect_LiteSequence_Param
	{
	public:

		struct FName EffectName; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_ClientPlayExplosionEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_BP_SetExplosionEffectVectorParams_Param
	{
	public:

		struct FName Name; // 0x00(0x08)
		struct FVector Params; // 0x08(0x0c)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_BP_SetExplosionEffectFloatParams_Param
	{
	public:

		struct FName Name; // 0x00(0x08)
		float Params; // 0x08(0x04)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_BP_SetExplosionEffectColorParams_Param
	{
	public:

		struct FName Name; // 0x00(0x08)
		struct FLinearColor Params; // 0x08(0x10)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_BP_OverlapByBullet_Param
	{
	public:

		struct AGPWeaponBulletProjectile* Bullet; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_BP_OnStopExplosionEffect_Param
	{
	public:

		struct UFXResourceContainerComponent* ExplosionEffect; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponThrowableBulletProjectile_BP_OnPlayExplosionEffect_Param
	{
	public:

		struct UFXResourceContainerComponent* ExplosionEffect; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponSkinLogicComponent_OnAnimFinsh_Param
	{
	public:

		struct UMaterialSequencer* Anim; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponThrowableDataComponentFiring_ProcessDoFire_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableDataComponentFiring_ProcessBeginFire_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableDataComponentFiring_ClearFireThrowHideFlag_Param
	{
	public:

		bool bForce; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPGameMode_WaitForPlayerLoadingLevelTimeOut_Param
	{
	public:

		struct FName CheckLoadLevelReason; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPGameMode_NotifyStartMatchWithAllPlayerLoadLevelCompleted_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameMode_NotifyPlayerLoadLevelCompleted_Param
	{
	public:

		struct APlayerController* Player; // 0x00(0x08)
		struct FName CheckLoadLevelReason; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPGameMode_GetTeamMemberCountType_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPGameMode_GetSubGameModeType_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPGameMode_GetMainGameModeType_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPGameMode_GetGameRoomType_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPGameMode_GetGameMapID_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPGameMode_GetCharacterByUin_Param
	{
	public:

		uint64_t Uin; // 0x00(0x08)
		struct AGPCharacter* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPGameMode_GetCharacterByGUID_Param
	{
	public:

		uint32_t Guid; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct AGPCharacter* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPGameMode_GetAllCharacters_Param
	{
	public:

		bool bForceReCollect; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct TArray<struct AGPCharacter*> ReturnValue; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPGameState_StopStageFadeClientWithTimeout_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameState_StopFadeClient_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameState_StartFadeClient_Param
	{
	public:

		struct FFadeInfo FadeInfo; // 0x00(0x24)
	};

	struct Function_GPGameplay_GPGameState_SetFadeOutOnMinTime_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameState_ServerFindOrAddAllPlayerLoadLevelCompletedInfo_Param
	{
	public:

		struct FName CheckLoadLevelReason; // 0x00(0x08)
		struct FAllPlayerLoadLevelCompletedInfo ReturnValue; // 0x08(0x0c)
	};

	struct Function_GPGameplay_GPGameState_RegisterProjectileGameComponent_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameState_RealStopFadeClient_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameState_ProcessLoadLevelPercentage_Param
	{
	public:

		int32_t Percentage; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPGameState_OnServerStopFadeInternal_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameState_OnServerStopFade_Param
	{
	public:

		bool Force; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPGameState_OnServerStartFade_Param
	{
	public:

		struct FFadeInfo FadeInfo; // 0x00(0x24)
	};

	struct Function_GPGameplay_GPGameState_OnServerFadeMinTimeOver_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameState_OnSameTeam_Param
	{
	public:

		struct AActor* Actor1; // 0x00(0x08)
		struct AActor* Actor2; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPGameState_OnRep_NewAddKillInfoStartIndex_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameState_OnRep_KillInfoArrayBuffer_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameState_OnRep_IsInFade_Param
	{
	public:

		bool LastIsInFade; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPGameState_OnRep_DSTickInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameState_OnRep_DamageMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameState_OnRep_DamageFeature_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameState_OnRep_bStartMathWithAllPlayerReady_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameState_OnRep_AllPlayerLoadLevelCompletedInfoArray_Param
	{
	public:

	};

	struct Function_GPGameplay_GPGameState_MultiCastLoadLevel_Param
	{
	public:

		struct TArray<struct FString> LevelNames; // 0x00(0x10)
		bool LoadVisible; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPGameState_GetHasFinished3CGuide_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPGameState_GetGroupAlivePlayerCount_Param
	{
	public:

		int32_t InGroupIndex; // 0x00(0x04)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPGameState_GetAudioControllerComponent_Param
	{
	public:

		struct UGPAudioControllerComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPGameState_FindAllPlayerLoadLevelCompletedInfo_Param
	{
	public:

		struct FName CheckLoadLevelReason; // 0x00(0x08)
		struct FAllPlayerLoadLevelCompletedInfo AllPlayerLoadLevelCompletedInfo; // 0x08(0x0c)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_GPGameplay_GPGameState_ClientSetNewAddKillInfoStartIndex_Param
	{
	public:

		int32_t StartIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPGameViewportClient_SetViewportRatioRange_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FIntPoint InMinRatio; // 0x08(0x08)
		struct FIntPoint InMaxRatio; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPGameViewportClient_SetViewportRatio_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		struct FIntPoint NewRatio; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPGameViewportClient_SetCursor_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
		enum class EMouseCursor InCursor; // 0x08(0x01)
	};

	struct DelegateFunction_GPGameplay_GPGameViewportClient_PreKeyDown__DelegateSignature_Param
	{
	public:

		struct FKey InKey; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPGameplay_GPGameViewportClient_OnInputModeChanged_Param
	{
	public:

		enum class EGPInputModeType OldType; // 0x00(0x01)
		enum class EGPInputModeType NewType; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPGameViewportClient_EnableRatioConstrain_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPGameViewportClient_DisableRatioConstrain_Param
	{
	public:

		struct UObject* WorldContext; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_WhetherReplicateDynamicActors_Param
	{
	public:

		bool bReplicateDynamic; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_UpdateOBNiceInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_TrySimulateSafeBoxOperate_Param
	{
	public:

		int32_t boxId; // 0x00(0x04)
		float params1; // 0x04(0x04)
		float params2; // 0x08(0x04)
		int32_t OperateId; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_TryLiveSpectateLikeGod_Param
	{
	public:

		float SpectatingHeight; // 0x00(0x04)
		bool useSpectificPoint; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector TargetPoint; // 0x08(0x0c)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_TryLiveSpectateAINext_Param
	{
	public:

		bool nextTarget; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_TryLeaveAISpectateMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_TryGoodJob_Param
	{
	public:

		int32_t Uin; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_TryGetSpectatorBriefInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_TryFiringModeTypeChanged_Param
	{
	public:

		int32_t FiringMode; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_TryFastSafeOperate_Param
	{
	public:

		int32_t boxId; // 0x00(0x04)
		float params1; // 0x04(0x04)
		float params2; // 0x08(0x04)
		int32_t OperateId; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_TryEnterAISpectateMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_TryCallDeliverAI_Param
	{
	public:

		int32_t Diff; // 0x00(0x04)
		int32_t Style; // 0x04(0x04)
		bool IsTeammate; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_ServerTryLiveSpectateLikeGod_Param
	{
	public:

		float SpectatingHeight; // 0x00(0x04)
		bool useSpectificPoint; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FVector TargetPoint; // 0x08(0x0c)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_ServerSimulateSafeBoxOperate_Param
	{
	public:

		int32_t boxId; // 0x00(0x04)
		float params1; // 0x04(0x04)
		float params2; // 0x08(0x04)
		int32_t OperateId; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_ServerLiveSpectateAINext_Param
	{
	public:

		bool nextTarget; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_ServerLeaveAISpectateMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_ServerGoodJob_Param
	{
	public:

		uint64_t Uin; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_ServerGetSpectatorBriefInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_ServerFiringModeTypeChanged_Param
	{
	public:

		int32_t FiringMode; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_ServerFastSafeOperate_Param
	{
	public:

		int32_t boxId; // 0x00(0x04)
		float params1; // 0x04(0x04)
		float params2; // 0x08(0x04)
		int32_t OperateId; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_ServerEnterAISpectateMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_ServerCallDeliverAI_Param
	{
	public:

		int32_t Diff; // 0x00(0x04)
		int32_t Style; // 0x04(0x04)
		bool IsTeammate; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_Server2ClientTryInspectTeam_Param
	{
	public:

		float DelayTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_RouteServerFuncByName_Param
	{
	public:

		struct UObject* ObjectExecute; // 0x00(0x08)
		struct FName FuncName; // 0x08(0x08)
		struct TArray<char> FuncPamras; // 0x10(0x10)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_ReplaySpectateSpectificTarget_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
		bool IsAI; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_Rep_SpectatingLocalFocus_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_Rep_IsSpectatingAI_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_Rep_IsLiveSpectatingForReset_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_Rep_IsLiveSpectating_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_Rep_CurrentLocalFocusPlayerPawn_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_Rep_CurrentLocalFocus_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_Rep_BeingSpectatingCountChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_PlayerTryLiveSpectateSpectificTarget_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_PlayerTryLiveSpectateNext_Param
	{
	public:

		bool nextTarget; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_PlayerTryLeaveLiveSpectateMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_PlayerTryEnterLiveSpectateMode_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_OnServerCheckChangeWatchTargetTimeOut_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_GPSetViewTargetWithBlend_Param
	{
	public:

		struct AActor* NewViewTarget; // 0x00(0x08)
		bool needPridict; // 0x08(0x01)
		bool onlyClient; // 0x09(0x01)
		char pad_A[0x2]; // 0x0a(0x02)
		float BlendTime; // 0x0c(0x04)
		enum class EViewTargetBlendFunction BlendFunc; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float BlendExp; // 0x14(0x04)
		bool bLockOutgoing; // 0x18(0x01)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_GPServerSetViewTargetWithBlend_Param
	{
	public:

		struct AActor* NewViewTarget; // 0x00(0x08)
		bool isClientPredicted; // 0x08(0x01)
		bool isTargetNull; // 0x09(0x01)
		char pad_A[0x2]; // 0x0a(0x02)
		int32_t TargetCacheID; // 0x0c(0x04)
		float BlendTime; // 0x10(0x04)
		enum class EViewTargetBlendFunction BlendFunc; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		float BlendExp; // 0x18(0x04)
		bool bLockOutgoing; // 0x1c(0x01)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_GPClientSetViewTargetAck_Param
	{
	public:

		int32_t TargetCacheID; // 0x00(0x04)
		float BlendTime; // 0x04(0x04)
		enum class EViewTargetBlendFunction BlendFunc; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		float BlendExp; // 0x0c(0x04)
		bool bLockOutgoing; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_GetEnableLiveSpectatingFeature_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_GetBaseHUD_Param
	{
	public:

		struct ABaseHUD* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_DelaySetViewTarget_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_ClientToServerResetSpectateViewTarget_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_ClientToServerAcceptChangeWatchTarget_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_ClientSinpleSetViewTargetWithBlend_Param
	{
	public:

		struct AActor* NewViewTarget; // 0x00(0x08)
		float BlendTime; // 0x08(0x04)
		enum class EViewTargetBlendFunction BlendFunc; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		float BlendExp; // 0x10(0x04)
		bool bLockOutgoing; // 0x14(0x01)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_ClientInspectTeam_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_ClientGetSpectatorBriefInfo_Param
	{
	public:

		struct TArray<struct FSpectatorBriefInfo> OutAllPlayerBriefInfo; // 0x00(0x10)
		struct TArray<struct FSpectatorBriefInfo> OutAllAIBriefInfo; // 0x10(0x10)
		struct TArray<struct FSpectatorBriefInfo> OutAllNPCBriefInfo; // 0x20(0x10)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_ClientFastSafeOperate_Param
	{
	public:

		int32_t boxId; // 0x00(0x04)
		float params1; // 0x04(0x04)
		float params2; // 0x08(0x04)
		int32_t OperateId; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_Client2Server_ServerLiveSpectateNext_Param
	{
	public:

		bool nextTarget; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_Client2Server_ServerLeaveLiveSpectateMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkPlayerController_Client2Server_PlayerTryEnterLiveSpectateWithUin_Param
	{
	public:

		uint64_t TargetUin; // 0x00(0x08)
		bool bFirstEnter; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_Client2Server_PlayerTryEnterLiveSpectateWithNetGUID_Param
	{
	public:

		uint32_t TargetNetGUID; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_Client2Server_LiveSpectateSpectificTarget_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPNetworkPlayerController_ClearClientOnDelayDeathWatchDelegateHandle_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_SetTeamIdentity_Param
	{
	public:

		uint32_t Identity; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerState_SetTeamId_Param
	{
	public:

		int32_t InTeamId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerState_SetRevengeKillInfo_Param
	{
	public:

		struct FKillInfo KillInfo; // 0x00(0x148)
	};

	struct Function_GPGameplay_GPPlayerState_SetForcesType_Param
	{
	public:

		enum class EBattleFieldForcesType InForcesType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerState_SetCountDown_Param
	{
	public:

		struct FCommonCountDownInfo CountDownInfo; // 0x00(0x30)
	};

	struct Function_GPGameplay_GPPlayerState_SetCharacterModeId_Param
	{
	public:

		uint32_t ID; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerState_SetCharacterIsWanted_Param
	{
	public:

		bool bWanted; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerState_SetCamp_Param
	{
	public:

		int32_t InCamp; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerState_SetArmedForceID_Param
	{
	public:

		int32_t InArmForceID; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerState_OnTeamInfoChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_TeamId_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_SpectWeaponInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_SpectTelescopeInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_SpectSafeBoxInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_SpectMemberInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_SpectFashionMesh_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_ServerCountDownArray_Param
	{
	public:

		struct TArray<struct FCommonCountDownInfo> OldServerCountDownArray; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPPlayerState_OnRep_PlayerWeaponSkinSetup_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_PlayerWeaponSkinInfos_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_PlayerWeaponMysticalSkinInfos_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_PlayerIsWanted_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_PlayerGamePlayState_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_PlatformID_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_NiceInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_MemberInfoList_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_LoginInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_InGlitchVolume_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_ForcesType_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_DeadTickNum_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_CurrentCharacterLiveStatus_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_CampMemberInfoList_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_Camp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_bIsDeadBox_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_bFinishGame_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_bDeathWaitingRescueEnd_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_bDead_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_OnRep_AccountType_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerState_IsOffline_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerState_HasTeamMemberForWatch_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerState_GetTeamIdentity_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerState_GetTeamID_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerState_GetRevengeKillInfo_Param
	{
	public:

		struct FKillInfo ReturnValue; // 0x00(0x148)
	};

	struct Function_GPGameplay_GPPlayerState_GetForcesType_Param
	{
	public:

		enum class EBattleFieldForcesType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerState_GetCountDownByType_Param
	{
	public:

		enum class ECountDownPriority CountDowType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FCommonCountDownInfo CountDownInfo; // 0x08(0x30)
		bool ReturnValue; // 0x38(0x01)
	};

	struct Function_GPGameplay_GPPlayerState_GetCharacterModeId_Param
	{
	public:

		uint32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerState_GetCharacterIsWanted_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerState_GetCamp_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerState_GetArmedForceID_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerState_ClientOnAISendChatPreset_Param
	{
	public:

		uint64_t PlayerUin; // 0x00(0x08)
		struct FString AINick; // 0x08(0x10)
		struct FName PresetId; // 0x18(0x08)
	};

	struct Function_GPGameplay_GPPlayerState_ClientOnAISendChat_Param
	{
	public:

		uint64_t PlayerUin; // 0x00(0x08)
		struct FString AINick; // 0x08(0x10)
		struct FString Content; // 0x18(0x10)
	};

	struct Function_GPGameplay_GPPlayerState_AddKillInfo_Param
	{
	public:

		struct FKillInfo KillInfo; // 0x00(0x148)
	};

	struct Function_GPGameplay_GPPlayerState_AddBeKillInfo_Param
	{
	public:

		struct FKillInfo KillInfo; // 0x00(0x148)
	};

	struct Function_GPGameplay_ModularWeaponDataComponentAppearance_UnSetForceKeepMeshFullMipLevels_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDataComponentAppearance_UnSetForceKeepFullMipLevels_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDataComponentAppearance_SetForceKeepMeshFullMipLevels_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDataComponentAppearance_SetForceKeepFullMipLevels_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDataComponentAppearance_OnSingleMeshComponentReady_Param
	{
	public:

		struct USkeletalMeshComponent* MeshCom; // 0x00(0x08)
		uint64_t ItemID; // 0x08(0x08)
		uint64_t Guid; // 0x10(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDataComponentAppearance_ModifyWeaponParts_Param
	{
	public:

		struct UModularWeaponDesc* TargetModularWeaponDesc; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDataComponentAppearance_IsMeshCompositeFinished_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDataComponentAppearance_EnableForceMeshKeepFullMipLevels_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDataComponentAppearance_EnableForceKeepFullMipLevels_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_ModularWeaponDataComponentAppearance_CreateWeaponSkinLogicComponent_Param
	{
	public:

		struct UClass* InClass; // 0x00(0x08)
	};

	struct Function_GPGameplay_ModularWeaponDataComponentAppearance_ClearWeaponSkinLogicComponent_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDataComponentAppearance_AssembleModularWeaponSkeletalMesh_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponFuncComponentAppearance_OnMeshCompositeFinishedCallBack_Param
	{
	public:

		struct USkeletalMeshComponent* SkeletalMesh; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponThrowableFuncComponentAppearance_RecoverDelayVisible_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponThrowableFuncComponentAppearance_ProcessDelayVisible_Param
	{
	public:

	};

	struct Function_GPGameplay_CharacterAttributesCenterComponent_ServerReponseToClientDumpInfo_Param
	{
	public:

		struct TArray<struct FAttributeOpStructArray> Result; // 0x00(0x10)
	};

	struct Function_GPGameplay_CharacterAttributesCenterComponent_GetAttributesCenter_Param
	{
	public:

		struct AActor* Owner; // 0x00(0x08)
		struct UCharacterAttributesCenterComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_CharacterAttributesCenterComponent_ClientRequestDumpInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_CharacterBase_StartJump_Param
	{
	public:

	};

	struct Function_GPGameplay_CharacterBase_SprintRequest_Param
	{
	public:

		bool bSprint; // 0x00(0x01)
	};

	struct Function_GPGameplay_CharacterBase_SilentWalkRequest_Param
	{
	public:

		bool bSilentWalk; // 0x00(0x01)
	};

	struct Function_GPGameplay_CharacterBase_PersistSprintRequest_Param
	{
	public:

		bool bSprint; // 0x00(0x01)
	};

	struct Function_GPGameplay_CharacterBase_PersistRunRequest_Param
	{
	public:

		bool bRun; // 0x00(0x01)
	};

	struct Function_GPGameplay_CharacterBase_IsImpendingDeath_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_CharacterBase_IsFalling_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_CharacterBase_IsDead_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_CharacterBase_GetIsSprint_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_CharacterBase_GetIsProne_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_CharacterBase_GetIsInBasePoseState_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_CharacterBase_GetIsCrouch_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_CharacterBase_EndJump_Param
	{
	public:

	};

	struct Function_GPGameplay_CharacterBase_CharacterToggleProne_Param
	{
	public:

	};

	struct Function_GPGameplay_CharacterBase_CharacterToggleCrouch_Param
	{
	public:

	};

	struct Function_GPGameplay_CharacterBase_CharacterSprint_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponAdapterRangeScopeManager_OnSettingChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_GPFSMAction_ServerReceiveTransitionEvent_Param
	{
	public:

		enum class EGPFSMTransitionEvent EventType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFSMAction_GetActionByClass_Param
	{
	public:

		struct UClass* ActionClass; // 0x00(0x08)
		struct UGPFSMAction* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPAIAnimInstance_TriggerChangeURO_Param
	{
	public:

		bool bOpen; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAIAnimInstance_SetToggleLocomotionAnim_Param
	{
	public:

		struct UAnimSequence* Anim; // 0x00(0x08)
		bool bToggle; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPAIAnimInstance_GetRelevantAnimAssetTimeRemaining_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		int32_t StateIndex; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPAIAnimInstance_GetRelevantAnimAssetTime_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		int32_t StateIndex; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPAnimInstance_TriggerChangeURO_Param
	{
	public:

		bool bOpen; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAnimInstance_GetRelevantAnimAssetTimeRemaining_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		int32_t StateIndex; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPAnimInstance_GetRelevantAnimAssetTime_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		int32_t StateIndex; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPPendantAnimInstance_SetItemID_Param
	{
	public:

		uint64_t InItemID; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPVehicleAnimInstance_TriggerChangeURO_Param
	{
	public:

		bool bOpen; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPVehicleAnimInstance_GetRelevantAnimAssetTimeRemaining_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		int32_t StateIndex; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPVehicleAnimInstance_GetRelevantAnimAssetTime_Param
	{
	public:

		int32_t MachineIndex; // 0x00(0x04)
		int32_t StateIndex; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_SkillReplaceFireImage_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_SkillReplaceFire_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_SetButtonState_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		enum class ESkillButtonState State; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_Rep_SkillLogicState3P_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillEntityState3P State; // 0x08(0x58)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_Rep_SkillLogicState_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillEntityState State; // 0x08(0x78)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_RemoveRelativeWeapon_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillDataRow DataRow; // 0x08(0x588)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_RemoveRelativeBuff_Param
	{
	public:

		struct AGPCharacter* CHARACTER; // 0x00(0x08)
		struct FSkillDataRow DataRow; // 0x08(0x588)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_RemoveGamePlayFeature_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillDataRow DataRow; // 0x08(0x588)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_ReAddRelativeWeapon_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillDataRow DataRow; // 0x08(0x588)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_PreSetAbilityMask_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_PreSetAbilityFireMask_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		enum class EGPWeaponInnerEvent WeaponEvent; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_OnSkillRTTTimeOut_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_OnSkillFireRTTTimeOut_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_OnSkillEntityInstnaceClassLoaded_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAbilityDataSystem_OnIconLoaded_Param
	{
	public:

		struct FSoftObjectPath Path; // 0x00(0x18)
		int32_t SkillEntityIndex; // 0x18(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_OnExcuteCount_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_OnAbilityGameStateInit_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAbilityDataSystem_OnAbilityEntityTemplateLoad_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_NeedUpdate_Param
	{
	public:

		struct FSkillLogicStateBit ClientSkillLogicStateBit; // 0x00(0x50)
		struct TArray<char> NodeEnterBit; // 0x50(0x10)
		bool ReturnValue; // 0x60(0x01)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_InitSkillLockAbilitys_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_InitAbilityTemplate_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_InitAbilityData_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_InitAbilityCD_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_InitAbilityAudio_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_GiveSameSkill_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_GetSkillUIState_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		enum class ESkillUIState ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_GetSkillButtonVisible_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_GetPathByState_Param
	{
	public:

		int32_t SkillId; // 0x00(0x04)
		enum class ESkillButtonState State; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct FSoftObjectPath ReturnValue; // 0x08(0x18)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_GetGSComponent_Param
	{
	public:

		struct UGPAbilityGameStateComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_EndSkillReplaceFireImage_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_EndSkillReplaceFire_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_CreateAbilityTemplate_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_CreateAbilityInstance_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_AddRelativeWeapon_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillDataRow DataRow; // 0x08(0x588)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_AddRelativeBuff_Param
	{
	public:

		struct AGPCharacter* CHARACTER; // 0x00(0x08)
		struct FSkillDataRow DataRow; // 0x08(0x588)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_AddGamePlayFeature_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FSkillDataRow DataRow; // 0x08(0x588)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_AddClientExcuteCount_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		int32_t LogicID; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPAbilityDataSystem_AbilityDataRemoveFromParent_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAIAnimInstance_Locomotion_TriggerStop_Param
	{
	public:

		int32_t Stage; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAnimInstance_Locomotion_TriggerStop_Param
	{
	public:

		int32_t Stage; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAnimDataComponent_SwapThreadSafeWeaponAnimDataMap_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimDataComponent_OnWeaponEnableCheckUpdate_Param
	{
	public:

		struct FName AnimId; // 0x00(0x08)
		bool IsFPP; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPAnimDataComponent_OnCharacterAvatarChange_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimDataComponent_GetTacticalActionAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimTacticalActionType TacticalActionType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPAnimDataComponent_GetRaiseWatchAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimRaiseWatchType RaiseWatchType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPAnimDataComponent_GetParachuteAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimParachuteType ParachuteType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPAnimDataComponent_GetMarkingAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimMarkingType MarkingType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPAnimDataComponent_GetFirefightingAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimFirefightingType FirefightingType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPAnimDataComponent_GetCustomAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPAnimDataComponent_GetClimbLadderAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimClimbLadderType ClimbLadderType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPAnimDataComponent_GetCarryBodyAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimCarryBodyType CarryBodyAnimType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPAnimDataComponent_GetBunkerAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimBunkerType BunkerTyep; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPAnimDataComponent_GetApplySprayAnim_Param
	{
	public:

		struct FName AnimName; // 0x00(0x08)
		bool bIsFPP; // 0x08(0x01)
		enum class EAnimApplySprayType ApplySprayType; // 0x09(0x01)
		char pad_A[0x6]; // 0x0a(0x06)
		struct UAnimationAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_UpdateRotateMode_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_TurnOnPhysics_Param
	{
	public:

		struct FName StartBoneName; // 0x00(0x08)
		struct FName PhysAnimProfileName; // 0x08(0x08)
		float InitBlendAlpha; // 0x10(0x04)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_TurnOffPhysics_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_TakeDeathSnapShot_Param
	{
	public:

		bool InUseAnimationPose; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_StopSlotAnim_Param
	{
	public:

		enum class EAnimationPlayType PlayType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float blendOut; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_StartDying_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_SetMoveStance_Param
	{
	public:

		struct FGameplayTag NewMoveStanceTag; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_SetMontageWarpTargetSpeedLimit_Param
	{
	public:

		struct FName WarpPointName; // 0x00(0x08)
		float InVelLimitation; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_SetMontageWarpTargetScale_Param
	{
	public:

		struct FName WarpPointName; // 0x00(0x08)
		struct FVector TargetScale; // 0x08(0x0c)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_SetMontageWarpTarget_Param
	{
	public:

		struct FName WarpPointName; // 0x00(0x08)
		struct FVector WarpTarget; // 0x08(0x0c)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_SetFppSprintAnimPlayingRate_Param
	{
	public:

		float Speed; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_ServerStopMontage_Param
	{
	public:

		struct UAnimMontage* InAnimMontage; // 0x00(0x08)
		bool bIncludeOwner; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_ServerPlayAnimaiton_Param
	{
	public:

		struct UAnimSequenceBase* AnimSequence; // 0x00(0x08)
		enum class EAnimationPlayType AnimPlayType; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FName StartSection; // 0x0c(0x08)
		float PlayRate; // 0x14(0x04)
		bool bStopAllMontage; // 0x18(0x01)
		bool bIncludeOwner; // 0x19(0x01)
		char pad_1A[0x2]; // 0x1a(0x02)
		float ReturnValue; // 0x1c(0x04)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_ServerMontageJumpToSection_Param
	{
	public:

		struct UAnimMontage* InAnimMontage; // 0x00(0x08)
		struct FName NewSectionName; // 0x08(0x08)
		bool bIncludeOwner; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float ReturnValue; // 0x14(0x04)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_ServerInputVector_Param
	{
	public:

		struct FVector InInputVector; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_Rep_TurningInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_Rep_StartTurningTimeRep_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_PreActive_Param
	{
	public:

		int64_t InActiveWeaponId; // 0x00(0x08)
		bool IsFppWeapon; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_PlayHitReactPhysix_Param
	{
	public:

		struct FName hitBone; // 0x00(0x08)
		struct FVector hitDir; // 0x08(0x0c)
		struct FVector HitLocation; // 0x14(0x0c)
		bool bWithHitLocation; // 0x20(0x01)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_PlayEndEquip_Param
	{
	public:

		int64_t WeaponID; // 0x00(0x08)
		bool IsFppWeapon; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		float TimeToStartAnimAt; // 0x0c(0x04)
		struct UAnimSequenceBase* InactiveSeq; // 0x10(0x08)
		float PlayRate; // 0x18(0x04)
		bool NeedInActiveAnim; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		float InBlendInTime; // 0x20(0x04)
		float InBlendOutTime; // 0x24(0x04)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_PlayDeathPhysix_Param
	{
	public:

		struct FName SimulateRootBoneName; // 0x00(0x08)
		struct FName HipBoneName; // 0x08(0x08)
		float SimulateTime; // 0x10(0x04)
		float FrameDeltaTime; // 0x14(0x04)
		bool bEnableRootBodyGravity; // 0x18(0x01)
		bool hasBlend; // 0x19(0x01)
		bool ReturnValue; // 0x1a(0x01)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_PlayCharacterThreeAnimSequenceInner_Param
	{
	public:

		struct UAnimSequenceBase* AnimStart; // 0x00(0x08)
		struct UAnimSequenceBase* AnimLoop; // 0x08(0x08)
		struct UAnimSequenceBase* AnimEnd; // 0x10(0x08)
		struct UAnimInstance* LocalAnimInstance; // 0x18(0x08)
		float LoopTime; // 0x20(0x04)
		enum class EAnimationPlayType AnimPlayType; // 0x24(0x01)
		char pad_25[0x3]; // 0x25(0x03)
		float RateOverride; // 0x28(0x04)
		float BlendInOverride; // 0x2c(0x04)
		float BlendOutOverride; // 0x30(0x04)
		char pad_34[0x4]; // 0x34(0x04)
		struct UAnimMontage* ReturnValue; // 0x38(0x08)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_PlayCharacterMontage_Param
	{
	public:

		struct UAnimMontage* MontageToPlay; // 0x00(0x08)
		bool IsFPP; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		struct FName StartSectionName; // 0x0c(0x08)
		float InPlayRate; // 0x14(0x04)
		struct UAnimInstance* ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_PlayCharacterLoopAtEndAnimSequenceInner_Param
	{
	public:

		struct UAnimSequenceBase* AnimStart; // 0x00(0x08)
		struct UAnimInstance* LocalAnimInstance; // 0x08(0x08)
		float LoopTime; // 0x10(0x04)
		float LastStartTime; // 0x14(0x04)
		enum class EAnimationPlayType AnimPlayType; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		float RateOverride; // 0x1c(0x04)
		float BlendInOverride; // 0x20(0x04)
		float BlendOutOverride; // 0x24(0x04)
		struct UAnimMontage* ReturnValue; // 0x28(0x08)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_PlayCharacterLoopAnimSequenceInner_Param
	{
	public:

		struct TArray<struct UAnimSequenceBase*> AnimToPlayList; // 0x00(0x10)
		struct UAnimInstance* LocalAnimInstance; // 0x10(0x08)
		enum class EAnimationPlayType AnimPlayType; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		float RateOverride; // 0x1c(0x04)
		float BlendInOverride; // 0x20(0x04)
		float BlendOutOverride; // 0x24(0x04)
		int32_t LoopCount; // 0x28(0x04)
		float TimeToStartAnimAt; // 0x2c(0x04)
		int32_t AnimId; // 0x30(0x04)
		float DestAnimLength; // 0x34(0x04)
		int32_t LoopSectionIndex; // 0x38(0x04)
		char pad_3C[0x4]; // 0x3c(0x04)
		struct UAnimMontage* ReturnValue; // 0x40(0x08)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_PlayCharacterAnimSequenceWithRetInner_Param
	{
	public:

		struct UAnimSequenceBase* AnimToPlay; // 0x00(0x08)
		struct UAnimInstance* LocalAnimInstance; // 0x08(0x08)
		enum class EAnimationPlayType AnimPlayType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float RateOverride; // 0x14(0x04)
		float BlendInOverride; // 0x18(0x04)
		float BlendOutOverride; // 0x1c(0x04)
		int32_t LoopCount; // 0x20(0x04)
		float TimeToStartAnimAt; // 0x24(0x04)
		int32_t AnimId; // 0x28(0x04)
		bool bStopAllMontage; // 0x2c(0x01)
		char pad_2D[0x3]; // 0x2d(0x03)
		struct FName SectionName; // 0x30(0x08)
		float DestAnimLength; // 0x38(0x04)
		bool bEnableAutoBlendOut; // 0x3c(0x01)
		bool AddEndSection; // 0x3d(0x01)
		char pad_3E[0x2]; // 0x3e(0x02)
		struct UAnimMontage* ReturnValue; // 0x40(0x08)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_PlayCharacterAnimSequenceByXPP_Param
	{
	public:

		bool IsFPP; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct UAnimSequenceBase* AnimToPlay; // 0x08(0x08)
		enum class EAnimationPlayType AnimPlayType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float RateOverride; // 0x14(0x04)
		float BlendInOverride; // 0x18(0x04)
		float BlendOutOverride; // 0x1c(0x04)
		int32_t LoopCount; // 0x20(0x04)
		float TimeToStartAnimAt; // 0x24(0x04)
		int32_t AnimId; // 0x28(0x04)
		bool bStopAllMontage; // 0x2c(0x01)
		char pad_2D[0x3]; // 0x2d(0x03)
		struct FName SectionName; // 0x30(0x08)
		float DestAnimLength; // 0x38(0x04)
		bool AddEndSection; // 0x3c(0x01)
		char pad_3D[0x3]; // 0x3d(0x03)
		struct UAnimMontage* ReturnValue; // 0x40(0x08)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_PlayCharacterAnimSequence_Param
	{
	public:

		struct UAnimSequenceBase* AnimToPlay; // 0x00(0x08)
		enum class EAnimationPlayType AnimPlayType; // 0x08(0x01)
		char pad_9[0x3]; // 0x09(0x03)
		float RateOverride; // 0x0c(0x04)
		float BlendInOverride; // 0x10(0x04)
		float BlendOutOverride; // 0x14(0x04)
		int32_t LoopCount; // 0x18(0x04)
		float TimeToStartAnimAt; // 0x1c(0x04)
		int32_t AnimId; // 0x20(0x04)
		bool bStopAllMontage; // 0x24(0x01)
		char pad_25[0x3]; // 0x25(0x03)
		struct FName SectionName; // 0x28(0x08)
		float DestAnimLength; // 0x30(0x04)
		char pad_34[0x4]; // 0x34(0x04)
		struct UAnimMontage* ReturnValue; // 0x38(0x08)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_OnWeaponDetach_Param
	{
	public:

		int64_t WeaponID; // 0x00(0x08)
		bool IsFppWeapon; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_OnWeaponAttach_Param
	{
	public:

		int64_t WeaponID; // 0x00(0x08)
		bool IsFppWeapon; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_OnSkeletalMeshComponentHit_Param
	{
	public:

		struct FName MyBoneName; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_OnRep_ReplicatedAnimInfoExceptOwner_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_OnRep_ReplicatedAnimInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_NotifyPhysicsSkeletalMeshHit_Param
	{
	public:

		struct FName MyBoneName; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_IsVaulting_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_InnerSnapShotPhysDying_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_InnerSnapshotDyingPose_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_GetMoveStance_Param
	{
	public:

		struct FGameplayTag ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_GetFootOffset_Param
	{
	public:

		bool bLeftFoot; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector FootOffset; // 0x04(0x0c)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_EndDying_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_CheckPlayInactive_Param
	{
	public:

		int64_t WeaponID; // 0x00(0x08)
		bool IsFppWeapon; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UAnimSequenceBase* InactiveSeq; // 0x10(0x08)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_CachePhysixBonesTransformMap_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimProxyBaseComponent_AddPhysBlendInfo_Param
	{
	public:

		struct FName InBoneName; // 0x00(0x08)
		float InBlendTime; // 0x08(0x04)
		float InitBlendValue; // 0x0c(0x04)
		float InBlendOutStartTime; // 0x10(0x04)
	};

	struct Function_GPGameplay_GPCameraModeComponent_SyncClientWeaponDiscViewInfo_Param
	{
	public:

		uint32_t CurViewInfo; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCameraModeComponent_SetUserSettingFPPMode_Param
	{
	public:

		bool bNewFPP; // 0x00(0x01)
		bool bSnap; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCameraModeComponent_SetSimulatedUnderFPP_Param
	{
	public:

		enum class EGPCharacterCameraModeReason CameraModeReason; // 0x00(0x01)
		enum class EGPCharacterCameraModeType CameraModeType; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCameraModeComponent_SetRotationSpeed_Param
	{
	public:

		float Speed; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCameraModeComponent_SetGPCameraMode_Param
	{
	public:

		enum class EGPCharacterCameraModeReason CameraModeReason; // 0x00(0x01)
		enum class EGPCharacterCameraModeType CameraModeType; // 0x01(0x01)
		bool bCleanUserSetting; // 0x02(0x01)
	};

	struct Function_GPGameplay_GPCameraModeComponent_SetFPPMode_Param
	{
	public:

		bool bNewFPP; // 0x00(0x01)
		bool bSnap; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCameraModeComponent_ServerSetFreeLookaroundModeState_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCameraModeComponent_ServerSetFPPMode_Param
	{
	public:

		bool bNewFPP; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCameraModeComponent_ResetGPCameraMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCameraModeComponent_RefreshDefaultCameraMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCameraModeComponent_RefreshCameraMode_Param
	{
	public:

		bool bForceUpdate; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCameraModeComponent_OnSetCameraMode_Param
	{
	public:

		bool bNewFPP; // 0x00(0x01)
		bool bForceUpdate; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCameraModeComponent_OnRep_SceneWeaponViewInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCameraModeComponent_OnRep_PlayerViewInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCameraModeComponent_OnRep_PlayerSpectatingViewInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCameraModeComponent_GetSimulatedUnderFPP_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCameraModeComponent_GetGPCurCameraMode_Param
	{
	public:

		enum class EGPCharacterCameraModeReason CameraModeReason; // 0x00(0x01)
		enum class EGPCharacterCameraModeType ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCameraModeComponent_GetbUnderFPPMode_Param
	{
	public:

		bool bUseLocal; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCameraModeComponent_ExitFreeLookaroundMode_Param
	{
	public:

		bool bForceExit; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCameraModeComponent_EnterFreeLookaroundMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCameraModeComponent_ClearGPCameraMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPNetworkTransfromComponent_ServerReceivePackage_Param
	{
	public:

		struct FActorMoveMessage Msg; // 0x00(0x2c)
	};

	struct Function_GPGameplay_GPNetworkTransfromComponent_Rep_OnReceiveNewMovePackage_Param
	{
	public:

	};

	struct Function_GPGameplay_GPTacticalActionComponent_StopTacticalAction_Param
	{
	public:

	};

	struct Function_GPGameplay_GPTacticalActionComponent_StartMove_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPTacticalActionComponent_ServerStopTacticalAction_Param
	{
	public:

		bool bSwitchToLastGun; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPTacticalActionComponent_ServerPlayTacticalAction_Param
	{
	public:

		enum class ETacticalActionType TacticalActionType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPTacticalActionComponent_PlayTacticalAction_Param
	{
	public:

		struct UAnimMontage* AnimMontageTPP; // 0x00(0x08)
		struct UAnimMontage* AnimMontageFPP; // 0x08(0x08)
		float WaitTime; // 0x10(0x04)
	};

	struct Function_GPGameplay_GPTacticalActionComponent_ActionsNotNeedSwitchWeapon_Param
	{
	public:

		enum class ECharacterFSMEventDefine FSMEvent; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Value; // 0x04(0x04)
		struct UObject* EventObject; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPTacticalActionComponent_ActionsNeedSwitchWeapon_Param
	{
	public:

		enum class ECharacterFSMEventDefine FSMEvent; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Value; // 0x04(0x04)
		struct UObject* EventObject; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPSpringWithTransformTest_GetTransform_Param
	{
	public:

		float ADSPercent; // 0x00(0x04)
		char pad_4[0xc]; // 0x04(0x0c)
		struct FTransform ReturnValue; // 0x10(0x30)
	};

	struct Function_GPGameplay_GPHealthDataComponent_TestTakeHit_Param
	{
	public:

		float DamageAmount; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct AActor* HitCauser; // 0x08(0x08)
		bool randomLoc; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPHealthDataComponent_Suicide_Param
	{
	public:

		int32_t AttackerValueId; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_SingleRecoverFromImpendingDeath_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHealthDataComponent_SetSheildHealthMax_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_SetSheildHealth_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_SetRescueTimeIncrement_Param
	{
	public:

		uint64_t WeaponID; // 0x00(0x08)
		uint64_t AmmoId; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ServerTrySpeedUpCancelRescueMyself_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHealthDataComponent_ServerTryCancelSppedUpCancelRescueMyself_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHealthDataComponent_ServerTryCancelRescueMyselfImmediately_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHealthDataComponent_ServerTryCancelCancelRescueMyselfImmediately_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHealthDataComponent_ServerTriggerRescueAnimation_Param
	{
	public:

		bool Enable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ServerRebornMeFromImpendingDeath_Param
	{
	public:

		bool stayInBeingRescueState; // 0x00(0x01)
		bool FastRescue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ServerConfirmRescueSomeone_Param
	{
	public:

		struct AGPCharacterBase* Target; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ServerConfirmCancelRescueSomeone_Param
	{
	public:

		struct AGPCharacterBase* Target; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ServerConfirmBeingRescueBySomeone_Param
	{
	public:

		struct AGPCharacterBase* Target; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ServerAttampRescueSomeone_Param
	{
	public:

		struct AGPCharacterBase* Target; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ServerAttampCancelRescueSomeone_Param
	{
	public:

		struct AGPCharacterBase* Target; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ResetHealth_Param
	{
	public:

		float NewMaxHealth; // 0x00(0x04)
		float NewHealthRate; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ResetCurrentHelmetArmorHealthToMax_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHealthDataComponent_ResetCurrentHealthToMax_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHealthDataComponent_ResetCurrentArmorHealthToMax_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHealthDataComponent_Rep_TriggerRescueAnimation_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHealthDataComponent_Rep_FSMCurrentIsBeingRescuingBySomeone_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHealthDataComponent_OnRep_RescueInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHealthDataComponent_IsImpendingDeath_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPHealthDataComponent_IsFull_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPHealthDataComponent_IsEmpty_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct DelegateFunction_GPGameplay_GPHealthDataComponent_GPHealthCompEvent_ServerRebornMe__DelegateSignature_Param
	{
	public:

	};

	struct DelegateFunction_GPGameplay_GPHealthDataComponent_GPHealthCompEvent_HealthChanged__DelegateSignature_Param
	{
	public:

		int32_t DeltaHealth; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetThoraxHealth_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetSheildHealthMax_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetSheildHealth_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetRightLegHealth_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetRightArmHealth_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetRescueTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetNeedShowRescueNum_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetMaxImpendingDeathHealth_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetLootingBox_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetLeftLegHealth_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetLeftArmHealth_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetImpendingDeathHealth_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetHelmetArmorHealthMAX_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetHelmetArmorHealth_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetHealthPercentage_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetHealthPercent_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetHealthMax_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetHealth_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetHeadHealth_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetCharacterLiveStatus_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetBaseHealthMax_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetArmPercent_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetArmorHealthMAX_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetArmorHealth_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetAllHealthMax_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_GetAllHealth_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ClientSpectNotifyHealthTakeHit_Param
	{
	public:

		float Damage; // 0x00(0x04)
		float ArmorDamage; // 0x04(0x04)
		struct FTakeHitInfo TakeHitInfo; // 0x08(0xd0)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ClientOnSucceedRescue_Param
	{
	public:

		struct AGPCharacterBase* TargetCharacter; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ClientOnSucceedBeingRescue_Param
	{
	public:

		struct AGPCharacterBase* TargetCharacter; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ClientNotifyHealthTakeHit_Param
	{
	public:

		float Damage; // 0x00(0x04)
		float ArmorDamage; // 0x04(0x04)
		struct FTakeHitInfo TakeHitInfo; // 0x08(0xd0)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ClientConfirmRescueSomeone_Param
	{
	public:

		struct AGPCharacterBase* Target; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ClientConfirmRescueHelper_Param
	{
	public:

		struct AGPCharacterBase* Helper; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ClientConfirmCancelRescueSomeone_Param
	{
	public:

		struct AGPCharacterBase* Target; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ClientConfirmBeingRescueBySomeone_Param
	{
	public:

		struct AGPCharacterBase* Target; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ClientAttampRescueSomeone_Param
	{
	public:

		struct AGPCharacterBase* Target; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ClientAttampCancelRescueSomeone_Param
	{
	public:

		struct AGPCharacterBase* Target; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPHealthDataComponent_ClientAttampCancelRescueMyselfImmediately_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHealthDataComponent_ClientAttampCancelRescueMyself_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHealthDataComponent_ClientAttampCancelCancelRescueMyselfImmediately_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHealthDataComponent_ClientAttampCancelCancelRescueMyself_Param
	{
	public:

	};

	struct Function_GPGameplay_GPHealthDataComponent_AddHelth_Param
	{
	public:

		float HealthAmountAdd; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_TestServer_HeadTakeDamamge_Param
	{
	public:

		struct APawn* TargetPawn; // 0x00(0x08)
		struct FGameplayTagContainer Tags; // 0x08(0x20)
		struct APawn* SourcePawn; // 0x28(0x08)
		enum class EDamageType DamageType; // 0x30(0x01)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_RemainHealHP_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_WoundResistRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_ThoraxHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_ShieldHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_RightLegHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_RightArmHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_MinHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_MaxThoraxHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_MaxShieldHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_MaxRightLegHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_MaxRightArmHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_MaxLeftLegHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_MaxLeftArmHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_MaxImpendingDeathHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_MaxHelmetArmorHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_MaxHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_MaxHeadHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_MaxArmorHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_MaxAbdomenHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_LeftLegHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_LeftArmHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_IsAlive_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_ImpendingDeathNum_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_ImpendingDeathHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_HelmetArmorHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_Health_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_HeadHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_DizzyResistRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_ArmorHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_OnRep_AbdomenHealth_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetHealth_IsFullHP_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnReq_FireSpeedRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_UsingToolsSpeedRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_UsingMedicineSpeedRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_UsingLoadItem_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_UsingKeySpeedRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_UsingFoodSpeedRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_UseItemArmorExtraValue_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_SuperOverLoadThreshold_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_SoundVisualizationFactor_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_SkillCooldownReduction_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_SearchItemSpeedRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_RespirationDurationScale_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_RescueSpeedRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_OverLoadThreshold_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_LootingTimeFactor_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_ListenRangeRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_DamageReductionRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_CurrentRoleLoadValue_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_CharacterWeaponMainRecoil_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_CharacterWeaponMainControl_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_ChangeClipTimeFactor_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_BeHitEffectScale_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetOther_OnRep_AimingTimeFactor_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_SuperSprintBasicSpeed_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_StandSilentWalkSpeed_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_StandBasicSpeed_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_StaminaStandRunChangeValue_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_StaminaSprintChangeRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_StaminaRegenRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_StaminaIndependentPositiveChangeRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_StaminaIndependentNegativeChangeRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_StaminaCostRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_Stamina_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_SprintBasicSpeed_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_Speed_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_RuntimeMaxSpeed_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_ReadyWeaponRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_ProneBasicSpeed_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_Moveable_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_MaxStamina_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_LockSprint_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_JumpZVelocity_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_IsRightLegFracture_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_IsLeftLegFracture_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_ImpendingDeathBasicSpeed_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_FOVRate_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_EnableSprint_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_EnableSlide_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_CrouchSilentWalkSpeed_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_CrouchBasicSpeed_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAttributeSetSpeed_OnRep_AnimSpeedScale_Param
	{
	public:

		struct FGPGameplayAttributeData OldData; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPCameraModifier_AfterFPPPlayerLanding_OnViewTargetLanding_Param
	{
	public:

		struct ACHARACTER* Ch; // 0x00(0x08)
		float HeightIGP; // 0x08(0x04)
		float MaxSpeedIGP; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPCameraModifier_AfterDied_OnViewTargetChanged_Param
	{
	public:

		struct AGPPlayerController* GPPc; // 0x00(0x08)
		struct AActor* NewViewTarget; // 0x08(0x08)
		struct AActor* OldViewTarget; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPCameraModifier_DOFAfterDied_OnViewTargetChanged_Param
	{
	public:

		struct AGPPlayerController* GPPc; // 0x00(0x08)
		struct AActor* NewViewTarget; // 0x08(0x08)
		struct AActor* OldViewTarget; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPCameraModifier_LagCameraWhenRush_OnViewTargetDied_Param
	{
	public:

		struct AGPCharacterBase* CHARACTER; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCameraModifier_LagCameraWhenRush_OnViewTargetChanged_Param
	{
	public:

		struct AGPPlayerController* GPPc; // 0x00(0x08)
		struct AActor* NewViewTarget; // 0x08(0x08)
		struct AActor* OldViewTarget; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPCameraModifier_LagCameraWhenRush_EnableRushLagCamera_Param
	{
	public:

		bool bInEnabled; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FName CurveName; // 0x04(0x08)
	};

	struct Function_GPGameplay_GPCharacterMovementComponentBase_GetMovingProjectionOnAccel_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterMovementComponentBase_GetMovingDirAngle_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterMovementComponentBase_GetCurrFloorNormal_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPCharacterMovementComponentBase_GetCurrFloorForward_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPCharacterMovementComponentBase_GetCurrFloorAngle_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPDialogAction_AddDialogOption_GPDialogAction_AddDialogOption_Param
	{
	public:

		struct AGPDialogSubsystem* DialogSubsys; // 0x00(0x08)
		struct FText OptionTitle; // 0x08(0x18)
		struct UGPDialogAction_AddDialogOption* ReturnValue; // 0x20(0x08)
	};

	struct Function_GPGameplay_GPDialogAction_AddDialogOption_FireReturn_Param
	{
	public:

	};

	struct Function_GPGameplay_GPDialogAction_PlaySubtitleSequence_SubtitleSequenceEnd_Param
	{
	public:

		struct FSubtitleSequenceInfo SubtitleSeqInfo; // 0x00(0x38)
	};

	struct Function_GPGameplay_GPDialogAction_PlaySubtitleSequence_GPDialogAction_PlaySubtitleSequence_Param
	{
	public:

		struct AGPDialogSubsystem* DialogSubsys; // 0x00(0x08)
		struct FName SubtitleSequenceId; // 0x08(0x08)
		enum class ESubtitleSequenceType SubtitleSequenceType; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UGPDialogAction_PlaySubtitleSequence* ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameplay_GPDialogAction_OpenUI_GPDialogAction_OpenUI_Param
	{
	public:

		struct AGPDialogSubsystem* DialogSubsys; // 0x00(0x08)
		struct FString UIName; // 0x08(0x10)
		struct UGPDialogAction_OpenUI* ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameplay_GPFSMInstanceNetworkBase_ShouldWorkByNetworkConfiguration_Param
	{
	public:

		enum class EGPFSMNetworkIdentityType Type; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPFSMInstanceNetworkBase_SendFSMGlobalEvent_Param
	{
	public:

		struct FGameplayTag EventTag; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPFSMInstanceNetworkBase_PrintAllState_Param
	{
	public:

		struct TArray<struct FGuid> StateArray; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

	struct Function_GPGameplay_GPFSMInstanceNetworkBase_PostTickDispatch_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPFSMInstanceNetworkBase_OnRep_ForceStateResetTickNumber_Param
	{
	public:

	};

	struct Function_GPGameplay_GPFSMInstanceNetworkBase_OnClientSeamlessTravelEnd_Param
	{
	public:

		bool bReconnect; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPFSMInstanceNetworkBase_DelayOnRep_ForceStateResetTickNumber_Param
	{
	public:

	};

	struct Function_GPGameplay_GPFSMInstanceNetworkBase_DelayOnRep_ClientInitFSMActiveStates_Param
	{
	public:

	};

	struct Function_GPGameplay_GPFSMInstanceNetworkBase_DelayOnRep_ActiveStateChanges_Param
	{
	public:

	};

	struct Function_GPGameplay_GPFSMSkillEntityComponentBase_SendFSMEvent_Param
	{
	public:

		enum class ECharacterFSMEventDefine Event; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Value; // 0x04(0x04)
		struct UObject* EventObject; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPFSMSkillEntityComponentBase_Rep_SkillName_Param
	{
	public:

	};

	struct Function_GPGameplay_GPFSMSkillEntityComponentBase_Rep_SkillID_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputAimLogic_OnPlayerToggleEvent_Param
	{
	public:

		bool Force; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPInputAimLogic_OnCancelAimByProne_Param
	{
	public:

		int32_t FunFlag; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputAimLogic_OnAimingControlModeChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputAimLogic_OnActiveWeaponChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputChangeScopeLogic_SetCallRouletteThreshold_Param
	{
	public:

		float CallThreshold; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputChangeScopeLogic_ProcessChangeScopeBtnUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputChangeScopeLogic_ProcessChangeScopeBtnDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputChangeScopeLogic_ProcessButtonClick_Param
	{
	public:

		bool bInDoubleClick; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPInputChangeScopeLogic_OnScopeRouletteShow_Param
	{
	public:

		struct FString FunctionName; // 0x00(0x10)
		struct UBaseUIView* View; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPInputChangeScopeLogic_LoadGunSightRoulettePanel_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputFireLogic_OnWeaponZoomStateChange_Param
	{
	public:

		bool bZoom; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPInputFireLogic_CheckReplaceSKillNextFrame_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputLeftFireLogic_StopFire_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputLeftFireLogic_StartFire_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputLeftFireLogic_CheckReplaceSKillNextFrame_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputMarkingLogic_ProcessMarkingBtnUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputMarkingLogic_ProcessMarkingBtnDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputMarkingLogic_ProcessButtonClick_Param
	{
	public:

		bool bInDoubleClick; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPInputMarkingLogic_OnMarkingRouletteLoadedAndShow_Param
	{
	public:

		struct FString FunctionName; // 0x00(0x10)
		struct UBaseUIView* View; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPInputMarkingLogic_MobileGetAimingOperateType_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputMovementLogic_OnJoystickModeChanged_Param
	{
	public:

		enum class EJoystickMode InJoystickMode; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPInputReloadLogic_SetLongPressTime_Param
	{
	public:

		float LongPressTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPInputReloadLogic_ProcessReloadBtnUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputReloadLogic_ProcessReloadBtnDown_Param
	{
	public:

	};

	struct Function_GPGameplay_GPInputReloadLogic_ProcessButtonClick_Param
	{
	public:

		bool bInDoubleClick; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPWeaponInputLogic_OnReload_Param
	{
	public:

	};

	struct Function_GPGameplay_GPModularWeaponDesc_ToGunDescInfo_Param
	{
	public:

		struct FGPWeaponDescInfo GunDescInfo; // 0x00(0x108)
		uint64_t PlayerId; // 0x108(0x08)
	};

	struct Function_GPGameplay_GPModularWeaponDesc_SetAmmoCount_Param
	{
	public:

		uint64_t AmmoCount; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPModularWeaponDesc_RecycleNextFrame_Param
	{
	public:

		struct UGPModularWeaponDesc* InGPModularWeaponDesc; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPModularWeaponDesc_Recycle_Param
	{
	public:

		struct UGPModularWeaponDesc* InGPModularWeaponDesc; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPModularWeaponDesc_OnCreateItem_Param
	{
	public:

		enum class EDFMGamePlayMode GamePlayMode; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPModularWeaponDesc_GetPowerFlashCount_Param
	{
	public:

		char ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPModularWeaponDesc_GetPartAttrValue_Param
	{
	public:

		uint64_t PartGid; // 0x00(0x08)
		struct FName AttrName; // 0x08(0x08)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_GPGameplay_GPModularWeaponDesc_GetDynamicAttributes_Param
	{
	public:

		struct FModularWeaponDynamicAttrbuites ReturnValue; // 0x00(0x50)
	};

	struct Function_GPGameplay_GPModularWeaponDesc_GetCurrentAmmoItemId_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPModularWeaponDesc_GetCarriedAmmoCount_Param
	{
	public:

		uint16_t ReturnValue; // 0x00(0x02)
	};

	struct Function_GPGameplay_GPModularWeaponDesc_GetBitMaskPropertyValues_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPModularWeaponDesc_GetAmmoDataItems_Param
	{
	public:

		struct TArray<struct FAmmoDataItem> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPModularWeaponDesc_GetAmmoCountInClip_Param
	{
	public:

		uint16_t ReturnValue; // 0x00(0x02)
	};

	struct Function_GPGameplay_GPModularWeaponDesc_FromGunDescInfo_Param
	{
	public:

		struct FGPWeaponDescInfo GunDescInfo; // 0x00(0x108)
		bool bAttrOnly; // 0x108(0x01)
	};

	struct Function_GPGameplay_GPModularWeaponDesc_AddAmmoDataItem_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		uint64_t ItemGid; // 0x08(0x08)
		uint64_t ItemNum; // 0x10(0x08)
		uint64_t ItemBindPlayerID; // 0x18(0x08)
	};

	struct Function_GPGameplay_GPModularWeaponDesc_Acquire_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		bool bAutoRecycleNextFrame; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UGPModularWeaponDesc* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPPreviewLineActor_UpdatePreview_Source_Param
	{
	public:

		struct FVector Source; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct TArray<struct FVector> TargetPos; // 0x10(0x10)
	};

	struct Function_GPGameplay_GPPreviewLineActor_SetStartPoint_Param
	{
	public:

		struct FVector Loc; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPPreviewLineActor_CopyPathData_Param
	{
	public:

		struct TArray<struct FVector> NewPathPoints; // 0x00(0x10)
		int32_t StartIndex; // 0x10(0x04)
		struct FVector ExtendStartPoint; // 0x14(0x0c)
	};

	struct Function_GPGameplay_GPPreviewLineActor_CalculateTransform_Param
	{
	public:

		struct FVector PreLoc; // 0x00(0x0c)
		struct FVector Loc; // 0x0c(0x0c)
		char pad_18[0x8]; // 0x18(0x08)
		struct FTransform ReturnValue; // 0x20(0x30)
	};

	struct Function_GPGameplay_GPPreviewLineActor_BP_SetPathLineColor_Param
	{
	public:

		int32_t LineState; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPRagDollPhysicsComponentKinematicHip_GetDeathAnimByPart_Param
	{
	public:

		enum class ECharacterPart HitPart; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float TargetYaw; // 0x04(0x04)
		enum class EWeaponDeathType WeaponType; // 0x08(0x01)
		enum class EChracterPoseType Pose; // 0x09(0x01)
		char pad_A[0x2]; // 0x0a(0x02)
		struct FName ReturnValue; // 0x0c(0x08)
	};

	struct Function_GPGameplay_GPRagDollPhysicsComponentKinematicHip_EnableKinematicRagDoll_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_WeaponTraceForAI_Param
	{
	public:

		struct TArray<struct AActor*> IgnoreActors; // 0x00(0x10)
		struct TArray<struct UPrimitiveComponent*> IgnoreComponents; // 0x10(0x10)
		struct FVector Start; // 0x20(0x0c)
		struct FVector End; // 0x2c(0x0c)
		bool IgnoreHidden; // 0x38(0x01)
		char pad_39[0x3]; // 0x39(0x03)
		struct FHitResult OutHitResult; // 0x3c(0x88)
		bool ReturnValue; // 0xc4(0x01)
	};

	struct Function_GPGameplay_WeaponBase_WeaponRequestPointHitAction_Param
	{
	public:

		struct FGPWeaponHitInfo HitInfo; // 0x00(0xf0)
		enum class EDamageValidateType DamageValidateType; // 0xf0(0x01)
	};

	struct Function_GPGameplay_WeaponBase_WeaponReload_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_WeaponInspcet_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_WeaponCancelReloadSingle_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_WeaponCancelReload_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_WeaponCancelChamber_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_VerifyWeaponEvent_Param
	{
	public:

		enum class EGPWeaponInnerEvent EventType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponBase_UpdateAmmoInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_UpdateAmmoCount_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_UnEquipAmmo_Param
	{
	public:

		int32_t Num; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponBase_TryHoldToFireCancelCurrentState_Param
	{
	public:

		enum class EWeaponCancelCurrentStateReason CancelReason; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_SwitchWhenAbilityItemAmmoEmpty_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_SimulatedCameraModeChanged_Param
	{
	public:

		bool IsSimulatedUnderFPP; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_ShouldGPWeaponInnerEventCanIgnoreByDiffXPP_Param
	{
	public:

		enum class EGPWeaponInnerEvent EventType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponBase_SetWeaponUsed_Param
	{
	public:

		bool InUsed; // 0x00(0x01)
		bool bEndEquip; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponBase_SetWeaponTickEnabled_Param
	{
	public:

		bool bInTickable; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_SetWeaponSwitchToNext_Param
	{
	public:

		bool bQuiet; // 0x00(0x01)
		bool bSkillEnd; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponBase_SetWeaponReUse_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_SetWeaponMode_Param
	{
	public:

		enum class EGPWeaponMode InWeaponMode; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_SetWeaponMeshTickEnabled_Param
	{
	public:

		bool bInTickable; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_SetWeaponIdentity_Param
	{
	public:

		struct FWeaponIdentity InWeaponIdentity; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponBase_SetWeaponId_Param
	{
	public:

		uint64_t InWeaponRecId; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_SetWeaponGuid_Param
	{
	public:

		uint64_t InWeaponGuid; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_SetWeaponEquipPosition_Param
	{
	public:

		uint32_t InWeaponEquipPosition; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponBase_SetWeaponActive_Param
	{
	public:

		bool bInActive; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_SetThirdPersonWeaponOwner_Param
	{
	public:

		struct ACHARACTER* InOwner; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_SetServerBurstNum_Param
	{
	public:

		char BurstNum; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_SetKeepUsedWeapon_Param
	{
	public:

		bool KeepUsed; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_SetInfinityCarriedAmmo_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_SetFullAmmo_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_SetAmmoConumeType_Param
	{
	public:

		enum class EWeaponConsumeAmmoType ConsumeType; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_ServerUpdateAmmoDynamicAttr_Param
	{
	public:

		struct FModularWeaponDynamicAttrbuites DynamicAttrbuites; // 0x00(0x50)
	};

	struct Function_GPGameplay_WeaponBase_ServerProcessWeaponReplicatedData_Param
	{
	public:

		struct TArray<struct FGPWeaponDataOperationInfo> WeaponDataOperationArray; // 0x00(0x10)
	};

	struct Function_GPGameplay_WeaponBase_ServerProcessWeaponEventDataForHit_Param
	{
	public:

		struct FBulletHitInfo BulletHitInfo; // 0x00(0xc8)
	};

	struct Function_GPGameplay_WeaponBase_ServerProcessWeaponEventDataForFire_Param
	{
	public:

		char EventType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FWeaponFireRepInfo FireInfo; // 0x08(0x80)
		struct FString LightFeatureStr; // 0x88(0x10)
		float Timestamp; // 0x98(0x04)
	};

	struct Function_GPGameplay_WeaponBase_ServerProcessWeaponEventData_Param
	{
	public:

		char EventType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Timestamp; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponBase_ServerHoldToFireCancelCurrentState_Param
	{
	public:

		enum class EWeaponCancelCurrentStateReason CancelReason; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_SendReportClientHit_Param
	{
	public:

		uint64_t Guid; // 0x00(0x08)
		struct FProjectileTrajectoryItem LatestTrajectoryItem; // 0x08(0x2c)
		struct FHitResult BlockingHit; // 0x34(0x88)
		struct FVector RelativeLoc; // 0xbc(0x0c)
		struct FVector RelativeLocToBone; // 0xc8(0x0c)
	};

	struct Function_GPGameplay_WeaponBase_RPC_RequestServerHitAction_Param
	{
	public:

		struct FRequestPointHitActionParam DamageResult; // 0x00(0x1a8)
	};

	struct Function_GPGameplay_WeaponBase_RPC_ClientNotifyHitActionFaild_Param
	{
	public:

		struct FPointHitActionResult DamageResult; // 0x00(0x20)
	};

	struct Function_GPGameplay_WeaponBase_RPC_ClientApplyHitAction_Param
	{
	public:

		struct FRequestPointHitActionParam DamageResult; // 0x00(0x1a8)
	};

	struct Function_GPGameplay_WeaponBase_ResWeaponSwitchType_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_ResetActivateBefore_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_ReplicateModularWeaponDescToClients_Param
	{
	public:

		struct AGPCharacterBase* NewOwner; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_RefreshWeaponReplicatedExtraData_Param
	{
	public:

		struct FWeaponReplicateExtraData WeaponRepExtendData; // 0x00(0xf0)
	};

	struct Function_GPGameplay_WeaponBase_RefreshDynamicComponents_Param
	{
	public:

		bool bOb; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_RefreshConfigs_Param
	{
	public:

		bool bForceRefresh; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_RefreshAllComponents_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_ProcessWeaponEvent_Param
	{
	public:

		enum class EGPWeaponInnerEvent RepInfo; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_PlayFirstEquipAnim_Param
	{
	public:

		float blendIn; // 0x00(0x04)
		float blendOut; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_WeaponBase_PlayFastUnEquipAnimNoBlend_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		float blendIn; // 0x10(0x04)
		float blendOut; // 0x14(0x04)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_GPGameplay_WeaponBase_PlayFastUnEquipAnim_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		float blendIn; // 0x10(0x04)
		float blendOut; // 0x14(0x04)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_GPGameplay_WeaponBase_PlayFastEquipAnim_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		float blendIn; // 0x10(0x04)
		float blendOut; // 0x14(0x04)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_GPGameplay_WeaponBase_OnWeaponSwitchFinish_Param
	{
	public:

		struct AWeaponBase* Weapon; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_OnUpdateHasSecondaryWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_OnRepWeaponId_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_OnRepWeaponEquipPosition_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_OnRepPoorItemId_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_OnRepPerk_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_OnRepDynamicAttr_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_OnRepCharacterOwner_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_OnRepBuildModularDesc_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_OnRep_ServerWeaponIdentity_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_OnPostFire_Param
	{
	public:

		uint64_t FireId; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_OnCharacterOwnerReborn_Test_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_OnCharacterOwnerReborn_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_OnCharacterOwnerDied_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_NotifyKnockBackAction_Param
	{
	public:

		bool bInAction; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsWeaponUsed_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsWeaponUnderCurrentXPP_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsWeaponIgnoreTeammateBlock_Param
	{
	public:

		struct APawn* InPawn; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsWeaponDamage_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsWeaponActive_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsVisible_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsVehicleWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsThrowableWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsThrowableEnableInputCancel_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsSubmachineWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsSecondaryWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsRunningLogical_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsRequireAmmo_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsPVEWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsPistolWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsPawnIgnoreWeaponTrace_Param
	{
	public:

		struct APawn* InPawn; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsOverHeat_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsModularWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsMeleeWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsMainWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsLocalControl_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsKeepUsedWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsInPending_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsHideAllWeapon_RetIsContainExactTag_Param
	{
	public:

		bool bContainExactTag; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsHideAllWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsHeavyWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsEnableThirdPersonMeshTick_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsEmptyHand_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsDoubleHandsWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsConfigEffective_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsClipFull_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsClipAndCarryAmmoEmpty_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsCharacterTeammate_Param
	{
	public:

		struct ACHARACTER* CHARACTER; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsCharacterOwnerPlayerAI_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsCharacterOwnerOnFPPMode_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsCharacterOwnerOnDefaultFPPMode_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsCharacterOwnerInWeakStatus_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsCharacterOwnerAILab_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsCharacterOwnerAI_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsCharacterDied_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsBowWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsAmmoFinally_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IsAbilityItem_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_IgnoreLeftArmAnim_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_HoldToFireCancelCurrentState_Param
	{
	public:

		enum class EWeaponCancelCurrentStateReason CancelReason; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_HasActivateBefore_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_GetWeaponTypeValue_Param
	{
	public:

		char ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_GetWeaponType_Param
	{
	public:

		enum class EWeaponItemType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_GetWeaponSlot_Param
	{
	public:

		char ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_GetWeaponSecondaryMesh_Param
	{
	public:

		struct USkeletalMeshComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetWeaponSecondaryBaseMesh_Param
	{
	public:

		struct UMeshComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetWeaponReplicateComponent_Param
	{
	public:

		struct UWeaponReplicateComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetWeaponMode_Param
	{
	public:

		enum class EGPWeaponMode ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_GetWeaponManager_Param
	{
	public:

		struct UWeaponManagerComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetWeaponMainMesh_Param
	{
	public:

		struct USkeletalMeshComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetWeaponId_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetWeaponBaseMesh_Param
	{
	public:

		struct UMeshComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetWeaponAttachType_Param
	{
	public:

		enum class EGPWeaponAppearanceAttachType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_GetWeaponAmmoLogicType_Param
	{
	public:

		enum class EWeaponAmmoLogicType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_GetWeaponActor_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetThrowableWeaponType_Param
	{
	public:

		enum class EWeaponThrowableEffectType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_GetThisWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_GetThisGPWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_GetThirdPersonWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_GetThirdPersonGPWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_GetThirdPersonCharacterMesh_Param
	{
	public:

		struct USkeletalMeshComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetServerWeaponIdentity_Param
	{
	public:

		struct FWeaponIdentity ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponBase_GetServerActorName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetPartSkeletalMesh3P_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		struct FSoftObjectPath ReturnValue; // 0x08(0x18)
	};

	struct Function_GPGameplay_WeaponBase_GetPartSkeletalMesh1P_Param
	{
	public:

		uint64_t ItemID; // 0x00(0x08)
		struct FSoftObjectPath ReturnValue; // 0x08(0x18)
	};

	struct Function_GPGameplay_WeaponBase_GetPartMeshComponent_Param
	{
	public:

		uint64_t Guid; // 0x00(0x08)
		bool bOutMergeModel; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct USkeletalMeshComponent* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetOverrideAnimId_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetOrCreateThirdPersonWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_GetOrCreateThirdPersonGPWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_GetModularWeaponDesc_Param
	{
	public:

		bool bRefreshDynamicAttr; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct UGPModularWeaponDesc* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetModularDesc_Param
	{
	public:

		struct UModularWeaponDesc* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetItemId_Param
	{
	public:

		struct FItemID ReturnValue; // 0x00(0x18)
	};

	struct Function_GPGameplay_WeaponBase_GetIsFirstWeaponEquip_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_GetIsFirstEmptyInspect_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_GetFppObGPWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_GetFixedWeaponId_Param
	{
	public:

		uint32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponBase_GetFirstPersonWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_GetFirstPersonGPWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_GetFirstPersonCharacterMesh_Param
	{
	public:

		struct USkeletalMeshComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetFireTraceStartLocation_Param
	{
	public:

		struct FVector OutStartLoc; // 0x00(0x0c)
		struct FRotator OutStartRot; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_WeaponBase_GetEquipmentPartDamageType_Param
	{
	public:

		enum class EEquipmentPartDamageType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_GetCurrentActiveWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_GetCrrentAnimId_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetConsumeAmmoType_Param
	{
	public:

		enum class EWeaponConsumeAmmoType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_GetCharacterSkeletalMeshComponent_Param
	{
	public:

		struct USkeletalMeshComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetCharacterOwner_Param
	{
	public:

		struct ACHARACTER* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetCharacterName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetCharacterBagSkeletalMeshComponent_Param
	{
	public:

		bool bUseFPP; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct USkeletalMeshComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponBase_GetAORotationSpeed_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponBase_GetAmmoType_Param
	{
	public:

		char ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_EnableLastActive_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_CollectAmmoCount_Param
	{
	public:

		uint16_t Count; // 0x00(0x02)
	};

	struct Function_GPGameplay_WeaponBase_ClientRemoveWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBase_ClientFixDataSpread_Param
	{
	public:

		struct FWeaponDataSpread InWeaponDataSpread; // 0x00(0x120)
		struct FWeaponDataSpread InWeaponDataSpreadAim; // 0x120(0x120)
	};

	struct Function_GPGameplay_WeaponBase_ClientDetachInventory_Param
	{
	public:

		bool bHangToBack; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponBase_ClientChangeState_Param
	{
	public:

		enum class EGPWeaponStateType OldState; // 0x00(0x01)
		enum class EGPWeaponStateType NewState; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponBase_ClientActivateInventory_Param
	{
	public:

		bool bLastWeaponReserved; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponBase_Client2ServerApplyDynamicAttribute_Param
	{
	public:

		bool Apply; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		uint64_t PartfunId; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponBase_CanZoom_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_CanTakeDamageToTeammate_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_CanFire_Param
	{
	public:

		bool bCheckChamber; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponBase_CanEntryState_Param
	{
	public:

		enum class EGPWeaponStateType NewState; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponBase_CanCheckWeaponBipodDeploy_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_CancelCurrentState_Param
	{
	public:

		enum class EWeaponCancelCurrentStateReason CancelReason; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_CanAutoSwitchSkillWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_CanAimOn_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_CanAddAmmoByLooting_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_BP_AimOutlineEvent_Param
	{
	public:

		bool aim; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponBase_ApplyDynamicAttribute_Param
	{
	public:

		bool Apply; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		uint64_t PartfunId; // 0x08(0x08)
	};

	struct Function_GPGameplay_WeaponBase_AddGPWeaponViewComponent_Param
	{
	public:

		struct UGPWeaponViewComponentBase* Comp; // 0x00(0x08)
		bool bInitializeComponent; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponBase_AddGPWeaponFuncComponent_Param
	{
	public:

		struct UGPWeaponFuncComponentBase* Comp; // 0x00(0x08)
		bool bInitializeComponent; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponBase_AddGPWeaponDataComponent_Param
	{
	public:

		struct UGPWeaponDataComponentBase* Comp; // 0x00(0x08)
		bool bInitializeComponent; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponBase_ActivateInventory_Internal_Param
	{
	public:

		bool bLastWeaponReserved; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponInputDefaultLogic_OnWeaponStartFireFailed_Param
	{
	public:

		char ret; // 0x00(0x01)
	};

	struct Function_GPGameplay_MultiWeaponManagerComponent_OnRep_WeaponManagerSlots_Param
	{
	public:

	};

	struct Function_GPGameplay_ScreenEffecTimerController_DeactiveEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponExtraModelBase_OnMeshLoaded_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponAdapterItemIKTarget_OnMeshLoaded_Param
	{
	public:

		uint64_t Guid; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponAdapterItemBipod_OnMeshLoaded_Param
	{
	public:

		uint64_t Guid; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponAdapterItemBurnningPot_OnRep_UseCnt_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponAdapterItemLaser_OnMeshLoaded_Param
	{
	public:

		uint64_t Guid; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponAdapterItemMachineSight_SetCameraFOV_Param
	{
	public:

		bool ZoomIn; // 0x00(0x01)
		bool IsDelayCall; // 0x01(0x01)
	};

	struct Function_GPGameplay_WeaponAdapterItemRangeScope_SetStencilEnable_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponAdapterItemRangeScope_PrepareScopeCapture_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponAdapterScopeFor3P_GPWeaponMutableBoolPropertyOnRepCallback_Param
	{
	public:

		struct FString BoolPropertyName; // 0x00(0x10)
		bool OldPropertyValue; // 0x10(0x01)
		bool NewPropertyValue; // 0x11(0x01)
	};

	struct Function_GPGameplay_WeaponBulletExplosion_MulticastExplosionInfo_Param
	{
	public:

		struct FRPGExplosionInfo RepExplosionInfo; // 0x00(0x20)
	};

	struct Function_GPGameplay_WeaponBulletExplosion_GetPrimitiveComponent_Param
	{
	public:

		struct UPrimitiveComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponBulletExplosion_BP_OnStopExplosionEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBulletExplosion_BP_OnPlayExplosionEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponBulletHowitzer_BrocastExplosionToClient_Param
	{
	public:

		enum class EPhysicalSurface ProjectileHitSurface; // 0x00(0x01)
		bool bHitLandscape; // 0x01(0x01)
		char pad_2[0x2]; // 0x02(0x02)
		struct FVector ExplosionLoc; // 0x04(0x0c)
		struct FVector ExplosionPlane; // 0x10(0x0c)
		struct FGPWeaponBulletOnHitParams OnHitParams; // 0x1c(0x02)
	};

	struct Function_GPGameplay_WeaponFireModePlacement_TryStartDestroyPlacementPreviewActorTimer_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFireModePlacement_StopDestroyPlacementPreviewActorTimer_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFireModePlacement_SetPrimComp_Param
	{
	public:

		struct UPrimitiveComponent* InPrimComp; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponFireModePlacement_SetPreviewPlacementLocAndRot_Param
	{
	public:

		struct FVector NewLoc; // 0x00(0x0c)
		struct FRotator NewRot; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_WeaponFireModePlacement_SetPreviewHiddenInGame_Param
	{
	public:

		bool bHidden; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponFireModePlacement_OnThrowPlayWantVoice_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFireModePlacement_OnPreviewActorLoaded_Param
	{
	public:

		struct FSoftObjectPath Path; // 0x00(0x18)
	};

	struct Function_GPGameplay_WeaponFireModePlacement_LocationValidChange_Param
	{
	public:

		bool Valid; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponFireModePlacement_LoadPreviewActor_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFireModePlacement_GetPreviewMeshComponent_Param
	{
	public:

		struct UMeshComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponFireModePlacement_DoDestroyPlacementPreviewActor_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponFireModePlacement_ClearLoadPreviewActor_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponHomingBulletProjectile_OnRep_HomingInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponSkinLogic_Camouflage_SetEnable_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponSkinLogic_Camouflage_PlayMaterialAnim_Param
	{
	public:

		struct UMaterialSequencer* Anim; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponSkinLogic_Camouflage_PlayFadeOutAnim_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponSkinLogic_Camouflage_PlayFadeInAnim_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponSkinLogic_Camouflage_OnUpdate_Param
	{
	public:

		float Time; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerController_UpdateControlButtonRotateInfo_Param
	{
	public:

		enum class EMobileControlButtonType ControlButtonType; // 0x00(0x01)
		bool bAllowRotate; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_ToggleXPP_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ToggleRecordPanel_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ToggleRecordMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ToggleOperateUI_Param
	{
	public:

		bool bOperateUI; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_ToggleObserverModeInReplay_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ToggleObserverModeImp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ToggleObserverMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ToggleAiming_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_TickPlayerMoveAndRotInput_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ShowWeaponPanel_Param
	{
	public:

		char DebugType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_ShowGMPanel_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ShowAnimPanel_Param
	{
	public:

		char DebugType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_SetUseMouseForTouch_Param
	{
	public:

		bool Enable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_SetServerEnableProcessPlayerInput_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_SetProcessInputComp_Param
	{
	public:

		enum class EProcessInputCompReason reason; // 0x00(0x01)
		bool bEnable; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_SetClientEnableProcessPlayerInput_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_SetClientDisableProcessPlayerInput_Param
	{
	public:

		bool bDisable; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FString reason; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPPlayerController_ServerUpdateWeaponRepCompInfo_Param
	{
	public:

		struct AActor* InCharacter; // 0x00(0x08)
		struct FWeaponReplicateComponentInfo WeaponReplicateComponentInfo; // 0x08(0x18)
	};

	struct Function_GPGameplay_GPPlayerController_ServerUpdatePing_Param
	{
	public:

		float ExactPing; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerController_ServerToggleSpeaker_Param
	{
	public:

		bool bIsSpeakerOpen; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_ServerToggleObserverMode_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ServerToggleMic_Param
	{
	public:

		bool bIsMicOpen; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_Serverslomo_Param
	{
	public:

		bool bAdd; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_ServerRequestWeaponContexts_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ServerQueryQuitMatch_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ServerQueryEndMatch_Param
	{
	public:

		enum class EPlayerEndMatchReason reason; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_ServerProcessSpectFashionStart_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ServerProcessSpectFashionMesh_Param
	{
	public:

		struct FName AllMesh; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPlayerController_ServerEndGame_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ServerCheat_Param
	{
	public:

		struct FString Cmd; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPPlayerController_ServerBouncePing_Param
	{
	public:

		float ClientTimeStamp; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerController_Server_RcvACWorldTime_Param
	{
	public:

		float InACWorldTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerController_RouteAxisInputToOtherPlayerInServer_Param
	{
	public:

		int32_t PlayerIndex; // 0x00(0x04)
		struct FName VKeyName; // 0x04(0x08)
		float VKeyArg; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPPlayerController_RouteActionInputToOtherPlayerInServer_Param
	{
	public:

		int32_t PlayerIndex; // 0x00(0x04)
		struct FName VKeyName; // 0x04(0x08)
	};

	struct Function_GPGameplay_GPPlayerController_RequestWholeScreenRotationArea_Param
	{
	public:

		bool bRequest; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FString reason; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPPlayerController_RequestSnapshot_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		float ClientTime; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPPlayerController_QueryEndMatch_Param
	{
	public:

		enum class EPlayerEndMatchReason reason; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_QueryClientLoadingStatus_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_PlayExplosionEffect_Param
	{
	public:

		enum class EExplosionType ExplosionType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector ExplosionLocation; // 0x04(0x0c)
	};

	struct Function_GPGameplay_GPPlayerController_PlayExplosionBeHitCamera_Param
	{
	public:

		enum class EExplosionType ExplosionType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector ExplosionLocation; // 0x04(0x0c)
	};

	struct Function_GPGameplay_GPPlayerController_PlayerStopRequest_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnRep_ServerEnableProcessPlayerInput_Param
	{
	public:

		bool OldValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_OnRep_ObserverModeChange_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnRep_GPObserverPawn_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnNotifyServerLoadLevelCompleted_Param
	{
	public:

		struct FName CheckLoadLevelReason; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPlayerController_OnInputWheelieStop_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnInputWheelieStart_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnInputUnJump_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnInputSubTimeDilation_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnInputStoppieStop_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnInputStoppieStart_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnInputStandUp_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnInputJump_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnInputInteract2_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnInputInteract1_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnInputCancelFire_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnInputAddTimeDilation_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnGMSubClientTimeDilation_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnGMSnapshot_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnGMRecoverClientTimeDilation_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_OnGMAddClientTimeDilation_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_NtfServerClientLoadingStatus_Param
	{
	public:

		bool bIsFinished; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_NotifySnapshot_Param
	{
	public:

		struct FGPSnapshotInfo Info; // 0x00(0x60)
	};

	struct Function_GPGameplay_GPPlayerController_NotifySeamlessLoginReady_Param
	{
	public:

		bool bSeamlessEnter; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_NotifyClientFakeWeaponEvent_Param
	{
	public:

		struct FGPClippedWeaponFakeEventNeededInfo FakeEventInfo; // 0x00(0x48)
	};

	struct Function_GPGameplay_GPPlayerController_MobilePersistMoveRequest_Param
	{
	public:

		bool bInPersistMoveInput; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_LoadLobbyMap_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_KickMeOut_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_IsObserver_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_IsDead_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_Input_EnableGyroInput_Param
	{
	public:

		enum class EGyroscopeInputForbidReason InReason; // 0x00(0x01)
		bool bEnable; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_HandleAxisVirtualInputInClient_Param
	{
	public:

		int32_t PlayerIndex; // 0x00(0x04)
		struct FName VKeyName; // 0x04(0x08)
		float VKeyArg; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPPlayerController_HandleActionVirtualInputInClient_Param
	{
	public:

		int32_t PlayerIndex; // 0x00(0x04)
		struct FName VKeyName; // 0x04(0x08)
	};

	struct Function_GPGameplay_GPPlayerController_GetUinStr_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPPlayerController_GetReLoginCount_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerController_GetPlayerBaseRotation_Param
	{
	public:

		struct FRotator ReturnValue; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPPlayerController_GetLastInputRealTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPPlayerController_GetInputRotation_Param
	{
	public:

		struct FVector2D ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPlayerController_GetInputManager_Param
	{
	public:

		struct UGPInputManager* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPlayerController_GetInputComponentClass_Param
	{
	public:

		struct UClass* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPlayerController_GetGPPlayerInput_Param
	{
	public:

		struct UGPPlayerInput* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPlayerController_GetGPMarkerController_Param
	{
	public:

		struct UGPMarkerControllerComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPlayerController_GetGPLocalPlayer_Param
	{
	public:

		struct UGPLocalPlayer* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPlayerController_GetGPCharacter_Param
	{
	public:

		struct AGPCharacter* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPlayerController_GetEnableProcessPlayerInput_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_GetDefaultPawnClassForController_Param
	{
	public:

		struct UClass* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPlayerController_GetControllerAudioComp_Param
	{
	public:

		struct UGPControllerAudioComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPlayerController_GetControlButtonAllowRotate_Param
	{
	public:

		enum class EMobileControlButtonType ControlButtonType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_GetAimedActor_Param
	{
	public:

		float Dist; // 0x00(0x04)
		bool bSkipDoorRegion; // 0x04(0x01)
		char pad_5[0x3]; // 0x05(0x03)
		struct AActor* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPPlayerController_EndGame_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_DumpCurrentWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_CreateHUDDeferred_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_CloseGMPanel_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ClientSetLocationWithRebasing_Param
	{
	public:

		struct FVector NewLocation; // 0x00(0x0c)
		struct FRotator NewRotation; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_GPPlayerController_ClientReturnPing_Param
	{
	public:

		float ServerReturnedClientTimeStamp; // 0x00(0x04)
		float InServerTimeStamp; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPPlayerController_ClientRestartOnReLogin_Param
	{
	public:

		struct APawn* InPawn; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPPlayerController_ClientQuitMatch_Param
	{
	public:

		enum class EPlayerQuitMatchReason KickReason; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_ClientNotifyWeaponContexts_Param
	{
	public:

		struct TArray<struct FWeaponDataContext> WeaponContexts; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPPlayerController_ClientNotifyRestart_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ClientNotifyDied_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_CheckSendPing_Param
	{
	public:

	};

	struct Function_GPGameplay_GPPlayerController_ChangeTouchControlMode_Param
	{
	public:

		bool bControlCharacter; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPPlayerController_BP_GetPlayerViewPoint_Param
	{
	public:

		struct FVector out_Location; // 0x00(0x0c)
		struct FRotator out_Rotation; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_GPCharacterBase_VerifySwitchWeapon_Param
	{
	public:

		struct AWeaponBase* Weapon; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_TryReborn_Param
	{
	public:

		bool RefillArmor; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float FillHealthHPRate; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SwitchTurnInPlace_Param
	{
	public:

		bool OnOff; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SwitchToPreWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool bCanUseEmptyHand; // 0x02(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SwitchToNextWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool bCanUseEmptyHand; // 0x02(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SwitchToMeleeWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool bCanUseEmptyHand; // 0x02(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SwitchToMainWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SwitchToLastUsedWeapon_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
		bool bCanUseEmptyHand; // 0x02(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SwitchToEmptyHand_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SwitchToDest_Param
	{
	public:

		enum class ESwitchWeaponContext SWContext; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct AWeaponBase* Inv; // 0x08(0x08)
		enum class EWeaponSwitchType SwitchType; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SwitchLeftWeaponToEmptyHand_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_StopNetworkSlotmAnim_Param
	{
	public:

		enum class EAnimationPlayType AnimationPlayType; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_StopNetworkImpendingDeathHelpMontage_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_StopNetworkCustomAnim_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_StopMultiImpendingDeathHelpMontage_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_StopMultiFire_Param
	{
	public:

		int32_t FireIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_StopLeftArmAnim_FSM_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_StopLeftArmAnim_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_StopInteractivePutWeaponAnim_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_StopFire_Param
	{
	public:

		int32_t FireIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_StartMultiFire_Param
	{
	public:

		int32_t FireIndex; // 0x00(0x04)
		int32_t FireModeIndex; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_StartFireForAI_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_StartFire_Param
	{
	public:

		int32_t FireIndex; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_SkillForbitLeftHanldIK_Param
	{
	public:

		bool forbit; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_ShouldCreateDeadBody_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_ShouldCreateCarryBody_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SetWeaponHidden_Param
	{
	public:

		bool bHiddenWeapon; // 0x00(0x01)
		enum class EWeaponHiddenTag HiddenTag; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SetWeaponBipodDeploy_Param
	{
	public:

		bool bEnter; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SetUsingInteractiveBasePose_Param
	{
	public:

		bool bUse; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FString Context; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPCharacterBase_SetTargetActor_Param
	{
	public:

		struct AActor* InTargetActor; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_SetSpeedFactorGain_Param
	{
	public:

		struct FCharacterSpeedFactor NewFactorGainCoefficient; // 0x00(0x34)
		bool AddOrRemove; // 0x34(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SetSpeedFactorBase_Param
	{
	public:

		struct FCharacterSpeedFactor NewFactor; // 0x00(0x34)
	};

	struct Function_GPGameplay_GPCharacterBase_SetRotationMethod_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_SetRotationInputScale_Param
	{
	public:

		float Ratio; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_SetOverrideSpeedAndPose_Param
	{
	public:

		enum class EOverrideMovementType Pose; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SetGPCharacterHiddenInGame_Param
	{
	public:

		enum class EGPCharacterHiddenReason HiddenTag; // 0x00(0x01)
		bool bHide; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SetFPPLowerMeshHidden_Param
	{
	public:

		bool bFPPLowerMeshHidden; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FString SetReasonStr; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPCharacterBase_SetDeadCanOPtimise_Param
	{
	public:

		bool NewDeadCanOPtimise; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SetCharacterOutLineEffect_Param
	{
	public:

		bool Active; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		enum class EOutLineEffectType OutLineEffectType; // 0x04(0x04)
		int32_t OutLineValue; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_ServerSetOverrideSpeedAndPose_Param
	{
	public:

		enum class EOverrideMovementType Pose; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_ServerRemoveWeapon_Param
	{
	public:

		struct AWeaponBase* Weapon; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_ServerReceiveFSMTransitionEvent_Param
	{
	public:

		enum class EGPFSMTransitionEvent Event; // 0x00(0x01)
		bool bUpdateFSMImmediately; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_ServerReceiveFSMEvent_Param
	{
	public:

		enum class ECharacterFSMEventDefine Event; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Value; // 0x04(0x04)
		struct UObject* EventObject; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_ServerEnableDamageValidation_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
		bool bDebug; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_ServerAddWeaponByRec_Param
	{
	public:

		int64_t RecID; // 0x00(0x08)
		int32_t EquipPosition; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_ServerAddWeapon_Param
	{
	public:

		int64_t PresetId; // 0x00(0x08)
		int32_t EquipPosition; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_Server_SetTurnInplaceData_Param
	{
	public:

		bool isTurningPlace; // 0x00(0x01)
		bool isTurnRight; // 0x01(0x01)
		bool isTurningEnter; // 0x02(0x01)
		char pad_3[0x1]; // 0x03(0x01)
		float rotationYaw; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_Server_SetCharacterRotation_Param
	{
	public:

		struct FRotator inTargetRotation; // 0x00(0x0c)
		struct FRotator inCharacterRotation; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_GPCharacterBase_SendFSMTransitionEventAndClientPredictState_Param
	{
	public:

		enum class EGPFSMTransitionEvent Event; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SendFSMTransitionEventAndCheckClientPredictState_Param
	{
	public:

		enum class EGPFSMTransitionEvent Event; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SendFSMTransitionEvent_Param
	{
	public:

		enum class EGPFSMTransitionEvent Event; // 0x00(0x01)
		bool WantToServerExcute; // 0x01(0x01)
		bool bUpdateFSMImmediately; // 0x02(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SendFSMGlobalEvent_Param
	{
	public:

		struct FGameplayTag EventTag; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_SendFSMEvent_Param
	{
	public:

		enum class ECharacterFSMEventDefine Event; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Value; // 0x04(0x04)
		struct UObject* EventObject; // 0x08(0x08)
		bool WantToSendMSGToServer; // 0x10(0x01)
		bool ReturnValue; // 0x11(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_RPC_SetCharacterMarkActive_Param
	{
	public:

		bool Active; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct AGPCharacterBase* Source; // 0x08(0x08)
		struct AGPCharacterBase* Target; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_RPC_ServerMakeDamage_Param
	{
	public:

		struct FC2SBatchMakeDamage DamageResult; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPCharacterBase_RPC_RequestServerHitAction_Param
	{
	public:

		struct FRequestPointHitActionParam DamageResult; // 0x00(0x1a8)
	};

	struct Function_GPGameplay_GPCharacterBase_RPC_Reborn_Param
	{
	public:

		uint64_t SelfUin; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_RPC_Died_Param
	{
	public:

		uint64_t SelfUin; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_RPC_ClientNotifyHitActionFaild_Param
	{
	public:

		struct FS2CRequestPointHitActionFaild DamageResult; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPCharacterBase_RPC_ClientApplyRadialDamage_Param
	{
	public:

		struct FS2CDamageApply_Radial S2CDamageApply; // 0x00(0x30)
	};

	struct Function_GPGameplay_GPCharacterBase_RPC_ClientApplyHitAction_Param
	{
	public:

		struct FRequestPointHitActionParam DamageResult; // 0x00(0x1a8)
	};

	struct Function_GPGameplay_GPCharacterBase_RPC_ClientApplyDamageMulticast_Param
	{
	public:

		struct FS2CDamageApply S2CDamageApply; // 0x00(0x108)
	};

	struct Function_GPGameplay_GPCharacterBase_RPC_ClientApplyDamage_Param
	{
	public:

		struct FS2CDamageApply S2CDamageApply; // 0x00(0x108)
	};

	struct Function_GPGameplay_GPCharacterBase_ReleaseCoverPoint_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_PreloadHeroResourceAudio_Param
	{
	public:

		struct FName AudioName; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_PreloadHeroResourceAttachMesh_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_PlayTurningNetworkdedMontage_Param
	{
	public:

		bool isLeft; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float PlayRate; // 0x04(0x04)
		float turningAngle; // 0x08(0x04)
		float StartTime; // 0x0c(0x04)
		bool stopAllMontages; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_PlaySeamlessShowAnim_Param
	{
	public:

		float CameraLerpTime; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_PlayNetworkImpendingDeathHelpMontage_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_PlayNetworkdedMontage_Param
	{
	public:

		struct UAnimMontage* MontageToPlay; // 0x00(0x08)
		float PlayRate; // 0x08(0x04)
		float StartTime; // 0x0c(0x04)
		bool stopAllMontages; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_PlayNetworkCustom1And3PAnim_Param
	{
	public:

		struct UAnimSequenceBase* montageToPlayFPP; // 0x00(0x08)
		struct UAnimSequenceBase* montageToPlayTPP; // 0x08(0x08)
		float RateOverride; // 0x10(0x04)
		int32_t LoopCount; // 0x14(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_PlayMultiImpendingDeathHelpMontage_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_PlayMultiCastTurningNetworkdedMontage_Param
	{
	public:

		bool isLeft; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float PlayRate; // 0x04(0x04)
		float turningAngle; // 0x08(0x04)
		float StartTime; // 0x0c(0x04)
		bool stopAllMontages; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_PlayMultiCastNetworkdedMontage_Param
	{
	public:

		struct UAnimMontage* MontageToPlay; // 0x00(0x08)
		float PlayRate; // 0x08(0x04)
		float StartTime; // 0x0c(0x04)
		bool stopAllMontages; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_PlayLeftArmAnimInner_Param
	{
	public:

		struct FSoftObjectPath AnimPath; // 0x00(0x18)
		bool bIsLeftArmAnim; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		float AnimDuration; // 0x1c(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_PlayLeftArmAnim_FSM_Param
	{
	public:

		struct FName AnimRowName; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_PlayLeftArmAnim_Param
	{
	public:

		struct FName AnimRowName; // 0x00(0x08)
		float AnimDuration; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_PlayHeroResourceAudio_Param
	{
	public:

		struct FName AudioName; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_PlayHelmetAnim_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_PlayFirstEquipAnim_Param
	{
	public:

		float blendIn; // 0x00(0x04)
		float blendOut; // 0x04(0x04)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_PlayFastUnEquipAnimNoBlend_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		float blendIn; // 0x10(0x04)
		float blendOut; // 0x14(0x04)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_PlayFastUnEquipAnim_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		float blendIn; // 0x10(0x04)
		float blendOut; // 0x14(0x04)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_PlayFastEquipAnim_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		float blendIn; // 0x10(0x04)
		float blendOut; // 0x14(0x04)
		float ReturnValue; // 0x18(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_PlayCustom1And3PAnimWithType_Param
	{
	public:

		struct UAnimSequenceBase* montageToPlayFPP; // 0x00(0x08)
		struct UAnimSequenceBase* montageToPlayTPP; // 0x08(0x08)
		enum class EAnimationPlayType AnimationPlayType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float RateOverride; // 0x14(0x04)
		int32_t LoopCount; // 0x18(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_PlayCustom1And3PAnim_Param
	{
	public:

		struct UAnimSequenceBase* montageToPlayFPP; // 0x00(0x08)
		struct UAnimSequenceBase* montageToPlayTPP; // 0x08(0x08)
		float RateOverride; // 0x10(0x04)
		int32_t LoopCount; // 0x14(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_OnWeaponZoomingState_Param
	{
	public:

		bool bIsZooming; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_OnWeaponAllAmmoEmpty_Param
	{
	public:

		uint64_t WeaponID; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_OnWeaponAimingTriggered_Param
	{
	public:

		bool bAimingOn; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_OnWeaponActivate_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_OnReq_FireHit_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_OnRep_Palsy_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_OnRep_MyGUIDInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_OnRep_GPCharacterHiddenInGame_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_OnRep_DeadCanOptimise_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_OnRep_Dead_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_OnRep_CountingTime_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_OnRep_CountingEndTime_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_OnRep_CharacterMarkActive_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_OnRefreshGPCharacterHiddenInGame_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_OnMeshComponentHitCallback_Param
	{
	public:

		struct UPrimitiveComponent* HitComp; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		struct FVector NormalImpulse; // 0x18(0x0c)
		struct FHitResult Hit; // 0x24(0x88)
	};

	struct Function_GPGameplay_GPCharacterBase_OnDeadCanOPtimiseChange_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_OnClientShowCommonTips_Param
	{
	public:

		int32_t Type; // 0x00(0x04)
		float Time; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_OnCharacterTakeDamage_Param
	{
	public:

		struct FHitResult HitResult; // 0x00(0x88)
	};

	struct Function_GPGameplay_GPCharacterBase_NotifyMicStateChange_Param
	{
	public:

		int32_t ButtonType; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_MulticastSetOutLineEffectData_Param
	{
	public:

		int32_t OutLineBitArry; // 0x00(0x04)
		int32_t ProxSensorMark; // 0x04(0x04)
		int32_t PenetratingGunMark; // 0x08(0x04)
		int32_t BreakthroughDefenderMarkKey; // 0x0c(0x04)
		int32_t OnlyMarkerMarkKey; // 0x10(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_Multicast_StopCoverPointMontage_Param
	{
	public:

		struct UAnimMontage* montageToStop; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_Multicast_PlayCoverPointMontage_Param
	{
	public:

		struct UAnimMontage* MontageToPlay; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_ModifyAnimInstance_Param
	{
	public:

		struct UClass* NewClass; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_IsUseLeftHandWeapon_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_IsRealStart_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_IsPlayingLeftArmAnim_Param
	{
	public:

		char StopType; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_IsPlayerAI_SOL_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_IsPlayerAI_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_IsPlayer_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_IsPalsy_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_IsOffline_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_isFemale_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_IsCanBeRescue_Param
	{
	public:

		bool bCheckFSMState; // 0x00(0x01)
		bool bCheckDeathRescue; // 0x01(0x01)
		bool bCheckDeathWaitTime; // 0x02(0x01)
		bool bShowLog; // 0x03(0x01)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_IsBurden_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_IsAlive_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_IsAILab_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_IsAI_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_InteractivePutWeapon_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		enum class EInteractivePutWeaponType PutWeaponType; // 0x10(0x01)
		bool NeedInacvtiveAnim; // 0x11(0x01)
		char pad_12[0x2]; // 0x12(0x02)
		float blendIn; // 0x14(0x04)
		float blendOut; // 0x18(0x04)
		bool bUseAnimTime; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		float InAnimTime; // 0x20(0x04)
		float ReturnValue; // 0x24(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_InteractiveGetWeapon_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
		enum class EInteractiveGetWeaponType GetWeaponType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float blendIn; // 0x14(0x04)
		float blendOut; // 0x18(0x04)
		bool bUseAnimTime; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		float InAnimTime; // 0x20(0x04)
		float ReturnValue; // 0x24(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_IgnoreBoneHitResponceWhenDyingPhysics_Param
	{
	public:

		bool bIgnore; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_HasSecondaryWeapon_Param
	{
	public:

		bool bCheckSecondaryWeaponInHand; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_GetWeaponByServerWeaponIdentity_Param
	{
	public:

		struct FWeaponIdentity ServerWeaponIdentity; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct AWeaponBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_GetWeaponByServerActorName_Param
	{
	public:

		struct FName ServerActorName; // 0x00(0x08)
		struct AWeaponBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_GetWeaponByPosition_Param
	{
	public:

		uint32_t EquipPosition; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct AWeaponBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_GetWeaponByGuid_Param
	{
	public:

		uint64_t gid; // 0x00(0x08)
		struct AWeaponBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_GetTeamComp_Param
	{
	public:

		struct UGPTeamComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_GetSpeedFactorBase_Param
	{
	public:

		struct FCharacterSpeedFactor ReturnValue; // 0x00(0x34)
	};

	struct Function_GPGameplay_GPCharacterBase_GetSpeedFactor_Param
	{
	public:

		struct FCharacterSpeedFactor ReturnValue; // 0x00(0x34)
	};

	struct Function_GPGameplay_GPCharacterBase_GetSheildHealthMax_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_GetSheildHealth_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_GetSecondaryWeapon_Param
	{
	public:

		struct AWeaponBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_GetRelevantPlayerIndex_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_GetRealWeaponByIndex_Param
	{
	public:

		int32_t WeaponIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct AWeaponBase* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_GetRealWeapon_Param
	{
	public:

		struct AWeaponBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_GetMainWeapon_Param
	{
	public:

		struct AWeaponBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_GetInteractivePutWeaponReasonSet_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_GetHealthMax_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_GetHealthComp_Param
	{
	public:

		struct UGPHealthDataComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_GetHealth_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_GetFootLocation_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPCharacterBase_GetFirstPersonWeapon_Param
	{
	public:

		struct AWeaponBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_GetEnableDeathBeRescue_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_GetEmptyHandWeapon_Param
	{
	public:

		struct AWeaponBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_GetCurrentLeftWeapon_Param
	{
	public:

		struct AWeaponBase* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_GetCapsuleRadius_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_GetCapsuleHalfHeight_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_GetBurdenActor_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_GetBaseHealthMax_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_GetAllRealWeapon_Param
	{
	public:

		struct TArray<struct AWeaponBase*> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPCharacterBase_EndInteractive_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_EnableDyingPhysicsAnimProfile_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_EnableDyingPhysics_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_DyingToBeDeadBox_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_DoReborn_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_DoKnockDown_Param
	{
	public:

		struct FKillInfo KnockDownInfo; // 0x00(0x148)
	};

	struct Function_GPGameplay_GPCharacterBase_DoDying_Param
	{
	public:

		struct AController* KillerController; // 0x00(0x08)
		struct AController* EventInstigator; // 0x08(0x08)
		struct AActor* DamageCauser; // 0x10(0x08)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_DeathCleanupTimer_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_ClientShowCommonTipsStr_Param
	{
	public:

		struct FText sMessage; // 0x00(0x18)
		float Time; // 0x18(0x04)
		bool bPositive; // 0x1c(0x01)
		bool bShowInMobile; // 0x1d(0x01)
		bool bShowInHD; // 0x1e(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_ClientShowCommonTips_Param
	{
	public:

		int32_t Type; // 0x00(0x04)
		float Time; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_ClearSeamlessAnim_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_ClearOverrideSpeedAndPose_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_ClearInteractivePutWeaponReasonSet_Param
	{
	public:

		struct FString ContextString; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPCharacterBase_ClearGPCharacterHiddenInGame_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_ClearCharacterOutLineEffect_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_CharacterPalsy_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_CanUseItem_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_CanSwitchWeapon_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_CanReload_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_CanFire_Param
	{
	public:

		bool ignoreOperating; // 0x00(0x01)
		bool bPrintLog; // 0x01(0x01)
		char pad_2[0x2]; // 0x02(0x02)
		int32_t FireIndex; // 0x04(0x04)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_CanAimOn_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_CallAINextPressed_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_BP_PrePlayDying_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterBase_BP_IsCharacterTeammate_Param
	{
	public:

		struct APawn* CHARACTER; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCharacterBase_BlueprintStartUpdateOutline_Param
	{
	public:

		int32_t Type; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterBase_Blueprint_OnDamagedToOther_Param
	{
	public:

		struct AActor* TargetActor; // 0x00(0x08)
		float DamageAmount; // 0x08(0x04)
		struct FHitResult HitResult; // 0x0c(0x88)
		char pad_94[0x4]; // 0x94(0x04)
		struct FGameplayTagContainer EffectTags; // 0x98(0x20)
		struct AActor* DamageCauser; // 0xb8(0x08)
		struct APawn* SourcePawn; // 0xc0(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_Blueprint_OnDamaged_Param
	{
	public:

		struct AActor* TargetActor; // 0x00(0x08)
		float DamageAmount; // 0x08(0x04)
		struct FHitResult HitResult; // 0x0c(0x88)
		char pad_94[0x4]; // 0x94(0x04)
		struct AActor* DamageCauser; // 0x98(0x08)
		struct APawn* SourcePawn; // 0xa0(0x08)
	};

	struct Function_GPGameplay_GPCharacterBase_BeginInteractive_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSafeHouseCharacterBase_GetSafeHouseCharacterMovementComponent_Param
	{
	public:

		struct UGPSafeHouseCharacterMovementComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPSkeletalMeshComponentExtra_SetTemplateMaterial_Param
	{
	public:

		int32_t ElementIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UMaterialInterface* Material; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPSkeletalMeshComponentExtra_ResetTemplateMaterials_Param
	{
	public:

	};

	struct Function_GPGameplay_GPSkeletalMeshComponentExtra_GetMaterialVariantProxy_Param
	{
	public:

		int32_t MaterialIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UGPMaterialProxy* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPAbilityAnimInstance_GetMeshToCopy_Param
	{
	public:

		struct USkeletalMeshComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPRevealMarkerItem_OnShowHealthBarTimeEnd_Param
	{
	public:

	};

	struct Function_GPGameplay_GPRevealMarkerItem_OnCharacterTakeHit_Param
	{
	public:

		struct AActor* DamageMaker; // 0x00(0x08)
		struct AActor* DamageTaker; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPAnimProxyComponent_UpdateInVehiclePhysics_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPAnimProxyComponent_StopSequenceAnimList_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimProxyComponent_SetSimulateInVehiclePhysics_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAnimProxyComponent_SetIsInHeavyLandFromFly_Param
	{
	public:

		bool IsIn; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAnimProxyComponent_SetIsInFlyStartFromGround_Param
	{
	public:

		bool IsIn; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAnimProxyComponent_SetHighLOD_Param
	{
	public:

		bool HightLOD; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAnimProxyComponent_ProcessScopeChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimProxyComponent_PrePlaySequenceAnimList_Param
	{
	public:

		struct TArray<struct FSequenceAnim> AnimList; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAnimProxyComponent_PlaySequenceAnimList_Param
	{
	public:

		struct TArray<struct FSequenceAnim> AnimList; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPAnimProxyComponent_OnRepSequenceAnimListRep_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimProxyComponent_OnRep_PlayingAnimReq_Param
	{
	public:

	};

	struct Function_GPGameplay_GPAnimProxyComponent_OnBowChargeStateChange_Param
	{
	public:

		bool bIsCharging; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAnimProxyComponent_OnAnimLoadCompleted_Param
	{
	public:

		struct FSoftObjectPath AssetRef; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPAnimProxyComponent_NotifySprintStop_Param
	{
	public:

		bool SprintStop; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPAnimProxyComponent_GetHighLOD_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPBlackboardComponent_UpdateCustomReasonFsmStateMasks_Param
	{
	public:

		enum class EFSMForbidReason CustomReason; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		uint64_t Masks; // 0x08(0x08)
		bool Value; // 0x10(0x01)
	};

	struct Function_GPGameplay_GPBlackboardComponent_TryPullOutArrow_Param
	{
	public:

	};

	struct Function_GPGameplay_GPBlackboardComponent_SetScoreReturnTarget_Param
	{
	public:

		enum class EPlayerScoreReturnType InReturnType; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct AGPCharacterBase* InCharacter; // 0x08(0x08)
		struct FName InScoreReturnExtraParam; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPBlackboardComponent_SetOutLineVectorParams_Param
	{
	public:

		struct FName ParamKey; // 0x00(0x08)
		struct FVector ParamValue; // 0x08(0x0c)
	};

	struct Function_GPGameplay_GPBlackboardComponent_SetOutLineScalarParams_Param
	{
	public:

		struct FName ParamKey; // 0x00(0x08)
		float ParamValue; // 0x08(0x04)
	};

	struct Function_GPGameplay_GPBlackboardComponent_SetIsInSafeHouse_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPBlackboardComponent_SetIsInRange_Param
	{
	public:

		bool NewValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPBlackboardComponent_SetFightingEnd_Param
	{
	public:

	};

	struct Function_GPGameplay_GPBlackboardComponent_SetFighting_Param
	{
	public:

	};

	struct Function_GPGameplay_GPBlackboardComponent_SetbCanAllWeaponActions_Param
	{
	public:

		enum class EFSMForbidReason reason; // 0x00(0x01)
		bool Enable; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPBlackboardComponent_PrintAllFSMBitwiseValue_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPBlackboardComponent_OnOwnerCharacterReborn_Param
	{
	public:

	};

	struct Function_GPGameplay_GPBlackboardComponent_OnOwnerCharacterDied_Param
	{
	public:

		struct AGPCharacterBase* CHARACTER; // 0x00(0x08)
		struct AController* Killer; // 0x08(0x08)
		struct UDamageType* DamageType; // 0x10(0x08)
	};

	struct Function_GPGameplay_GPBlackboardComponent_IsSomeSkillCurrentUsing_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPBlackboardComponent_IsArrowMarkerUinBeSet_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPBlackboardComponent_GetIsInSafeHouse_Param
	{
	public:

		bool bExcludeRange; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPBlackboardComponent_GetIsInRange_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPBlackboardComponent_GetForbitReason_Param
	{
	public:

		enum class ESkillStateType SkillState; // 0x00(0x01)
		enum class EFSMForbidReason ReturnValue; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPBlackboardComponent_GetCurrentUsingSkillID_Param
	{
	public:

		enum class ESkillStateType SkillState; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPBlackboardComponent_GetCurrentServertime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPBlackboardComponent_GetCharacterCurrentBasePose_Param
	{
	public:

		enum class EChracterPoseType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPBlackboardComponent_GetAnyCurrentUsingSkillID_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPBlackboardComponent_ConsoleDebugBitArray_Param
	{
	public:

		struct FName BitName; // 0x00(0x08)
		bool Value; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPBlackboardComponent_ClearScoreReturn_Param
	{
	public:

	};

	struct Function_GPGameplay_GPBlackboardComponent_CanBeKnockBackInZipLine_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_UpdateSprintVelocity_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_UnLieDown_Param
	{
	public:

		bool bClientSimulation; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_ShowDebugServerPhysicCheckDraw_Param
	{
	public:

		float radius; // 0x00(0x04)
		float Height; // 0x04(0x04)
		struct FVector StartLoc; // 0x08(0x0c)
		struct FVector EndLoc; // 0x14(0x0c)
		struct FVector ImpactPoint; // 0x20(0x0c)
		float LifeTime; // 0x2c(0x04)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_SetPitchSwimDown_Param
	{
	public:

		bool bPitchPass; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_SetNetworkSmoothingMode_Param
	{
	public:

		enum class ENetworkSmoothingMode NewNetworkSmoothingMode; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_SetMaxWalkSpeed_Param
	{
	public:

		float InMaxWalkSpeed; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_SetForceSwimUpDown_Param
	{
	public:

		bool bInputForce; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_SetDisablePlayerPerformMovement_Param
	{
	public:

		bool bDisable; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FString reason; // 0x08(0x10)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_ServerSetForceSwimUpDown_Param
	{
	public:

		bool bInputForce; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_ServerReceiveClassicTransfromReplicatePackage_Param
	{
	public:

		struct FActorMoveMessage Msg; // 0x00(0x2c)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_RevertCapsuleChangeTimer_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterMovementComponent_ResetMaxWalkSpeed_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterMovementComponent_NewServerMoveOld_Param
	{
	public:

		struct FMoveInputParams Params; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_NewServerMoveNoBase_Param
	{
	public:

		struct FMoveParamsNoBase Params; // 0x00(0x3c)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_NewServerMoveDualNoBase_Param
	{
	public:

		struct FMoveInputParams Params0; // 0x00(0x18)
		struct FMoveParamsNoBase Params; // 0x18(0x3c)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_NewServerMoveDualHybridRootMotion_Param
	{
	public:

		struct FMoveInputParams Params0; // 0x00(0x18)
		struct FGPMoveParams Params; // 0x18(0x50)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_NewServerMoveDual_Param
	{
	public:

		struct FMoveInputParams Params0; // 0x00(0x18)
		struct FGPMoveParams Params; // 0x18(0x50)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_NewServerMove_Param
	{
	public:

		struct FGPMoveParams Params; // 0x00(0x50)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_LieDown_Param
	{
	public:

		bool bClientSimulation; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_IsTouchWaterVolume_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_IsServerOfflineUpdate_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_IsMovingSpeedMainlyForwardWithGivingAngle_Param
	{
	public:

		float Angle; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_IsMovingSpeedMainlyForward_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_IsMovingMainlyForward_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_IsLieDowning_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_IsKnockBackLanded_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_IsInShallowWater_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_IsControllerMovingMainlyForward_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_InitSpeed_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacterMovementComponent_GetDefaultMaxSpeedByMovementMode_Param
	{
	public:

		enum class EGPMovementType CurrentMovementMode; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_ForceUpdateClientPosition_Param
	{
	public:

		struct FVector NewLoc; // 0x00(0x0c)
		struct FVector NewVel; // 0x0c(0x0c)
		struct UPrimitiveComponent* NewBase; // 0x18(0x08)
		struct FName NewBaseBoneName; // 0x20(0x08)
		bool bHasBase; // 0x28(0x01)
		bool bBaseRelativePosition; // 0x29(0x01)
		char ServerMovementMode; // 0x2a(0x01)
		bool bSetControllerRot; // 0x2b(0x01)
		struct FRotator ControllerRot; // 0x2c(0x0c)
		struct FVector NewWorldLoc; // 0x38(0x0c)
		enum class ESetCharacterPositionAndRep2ClientReason reason; // 0x44(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_EnabbleMoveModeOfflineRunning_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_ClientToServerLargeAdjustPosition_Param
	{
	public:

		struct FVector ClientLoc; // 0x00(0x0c)
		struct FVector OriginLocation; // 0x0c(0x0c)
		struct FVector CameraPoint; // 0x18(0x0c)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_ClientShowServerPosition_Param
	{
	public:

		float Timestamp; // 0x00(0x04)
		struct FVector ServerLoc; // 0x04(0x0c)
		struct FVector ServerVelocity; // 0x10(0x0c)
		char ServerMovementMode; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct FString TipStr; // 0x20(0x10)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_ClientNoBaseAdjustPosition_Param
	{
	public:

		float Timestamp; // 0x00(0x04)
		struct FVector NewLoc; // 0x04(0x0c)
		struct FVector NewVelocity; // 0x10(0x0c)
		char ServerMovementMode; // 0x1c(0x01)
	};

	struct Function_GPGameplay_GPCharacterMovementComponent_AddImpulseOverride_Param
	{
	public:

		struct FVector Impulse; // 0x00(0x0c)
		bool bVelocityChange; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GPFSMInstance_TryCancelCurrentWeaponReload_Param
	{
	public:

		bool StopAnimation; // 0x00(0x01)
		enum class EAnimationPlayType Slot; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPFSMInstance_TryCancelAimingState_Param
	{
	public:

	};

	struct Function_GPGameplay_GPFSMInstance_SetSOLEscapedState_Param
	{
	public:

	};

	struct Function_GPGameplay_GPFSMInstance_ForceGetOnVehicle_Param
	{
	public:

		struct APawn* TargetCar; // 0x00(0x08)
		struct FName Seat; // 0x08(0x08)
	};

	struct Function_GPGameplay_GPFSMInstance_ForceGetOffVehicle_Param
	{
	public:

	};

	struct Function_GPGameplay_GPFSMInstance_FindBestPointForStand_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_GPGameplay_ModularWeaponDataComponentAnim_RefreshWeaponMeshBone_Param
	{
	public:

	};

	struct Function_GPGameplay_ModularWeaponDataComponentAnim_OnFirstEquipAnimStop_Param
	{
	public:

		struct UAnimMontage* Montage; // 0x00(0x08)
		bool bInterrupted; // 0x08(0x01)
	};

	struct Function_GPGameplay_WeaponThrowableDataComponentAnim_UpdateWeaponAnimInstanceParams_Param
	{
	public:

		enum class EGPWeaponInnerEvent EventType; // 0x00(0x01)
	};

	struct Function_GPGameplay_WeaponThrowableDataComponentAnim_InitWeaponAnimInstanceParams_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponAdapterItemAimDownSights_OnAnimSeqLoadComplete_Param
	{
	public:

		struct FSoftObjectPath AssetPath; // 0x00(0x18)
	};

	struct Function_GPGameplay_WeaponAdapterItemLaserWithFLight_OnMeshAssetLoaded_Param
	{
	public:

		uint64_t Guid; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponAdapterTransparentMagazine_UpdateAmmoNum_Param
	{
	public:

		float ammo; // 0x00(0x04)
	};

	struct Function_GPGameplay_WeaponAdapterTransparentMagazine_PrepareAdapter_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponAdapterItemScopeWithLaser_OnMeshAssetLoaded_Param
	{
	public:

		uint64_t Guid; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponAdapterScopeWithLaserFor3P_OnMeshAssetLoaded_Param
	{
	public:

		uint64_t Guid; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_WeaponFOV_Param
	{
	public:

		float NewFOV; // 0x00(0x04)
		float ReferenceAspect; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPCharacter_UpdateMeshLODInfo_Param
	{
	public:

		struct UObject* sMesh; // 0x00(0x08)
		enum class EEquipmentType Type; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCharacter_UpdateJumpZVelocity_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_UpdateAllMeshLODInfo_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_UnPlayerProne_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_UnPlayerCrouch_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_TickPlayerViewRotation_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacter_TestAttachParentSocket_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_SyncAnyAngleStopState_Param
	{
	public:

		bool StopState; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector StopMaker; // 0x04(0x0c)
	};

	struct Function_GPGameplay_GPCharacter_ShowDebugResetWalkingPosition_Param
	{
	public:

		struct FVector ShowLastWalkingPosition; // 0x00(0x0c)
		struct FColor ShowColor; // 0x0c(0x04)
	};

	struct Function_GPGameplay_GPCharacter_SetWeaponInspectDuration_Param
	{
	public:

		float Duration; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacter_SetNormalFireTime_Param
	{
	public:

		struct AGPCharacter* Self; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_SetMovementVelocityScaler_Param
	{
	public:

		float scaler; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacter_SetLogicPose_Param
	{
	public:

		enum class ECharacterLogicPoseType InLogicPose; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_SetItemInspectDuration_Param
	{
	public:

		float Duration; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacter_SetIndependentFOV_Param
	{
	public:

		struct UPrimitiveComponent* TargetMesh; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_SetEnableRelaxIdleState_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_SetEnablePhysics_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_SetCharacterHiddenAll_Param
	{
	public:

		bool bHide; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_SetBlackBoardDebugBitArray_Param
	{
	public:

		struct FName BitName; // 0x00(0x08)
		bool Value; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCharacter_ServerWantsToMoveRight1P_Param
	{
	public:

		bool Move; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_ServerWantsToMove1P_Param
	{
	public:

		bool Move; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_ServerUseSupportPack_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		enum class ESupportType SupportType; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCharacter_ServerSwitchBreathState_Param
	{
	public:

		enum class EBreathState CurState; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_ServerStartPerformAction_Param
	{
	public:

		struct FName ResId; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_ServerSetPreWeaponPosition_Param
	{
	public:

		int64_t pos; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_ServerSetMoveMentActiveAnd2Clinet_Param
	{
	public:

		bool bMovementActive; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_ServerSetActionDuration_Param
	{
	public:

		float Duration; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacter_ServerForceResetIdleState_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_ServerEndPerformAction_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_Server2ClinetSetMoveMentActive_Param
	{
	public:

		bool bMovementActive; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_SendClientKillZVolumeDebugInfo_Param
	{
	public:

		struct FVector BoxSize; // 0x00(0x0c)
		struct FVector BoxOrigin; // 0x0c(0x0c)
	};

	struct Function_GPGameplay_GPCharacter_SceneFOV_Param
	{
	public:

		float NewFOV; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacter_ResetToLastWalkingPosition_Param
	{
	public:

		bool bResetCharacterFSM; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_RequestStaminaChange_Param
	{
	public:

		enum class EStaminaIndependentChangeType StaminaChangeType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float DeltaSeconds; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPCharacter_RemovePreStateForRTTCheck_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_ReliableClientVeryShortAdjustPosition_Param
	{
	public:

		float Timestamp; // 0x00(0x04)
		struct FVector NewLoc; // 0x04(0x0c)
		struct UPrimitiveComponent* NewBase; // 0x10(0x08)
		struct FName NewBaseBoneName; // 0x18(0x08)
		bool bHasBase; // 0x20(0x01)
		bool bBaseRelativePosition; // 0x21(0x01)
		char ServerMovementMode; // 0x22(0x01)
		char pad_23[0x1]; // 0x23(0x01)
		struct FVector NewWorldLoc; // 0x24(0x0c)
	};

	struct Function_GPGameplay_GPCharacter_ReliableClientAdjustRootMotionSourcePosition_Param
	{
	public:

		float Timestamp; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FRootMotionSourceGroup ServerRootMotion; // 0x08(0xf8)
		bool bHasAnimRootMotion; // 0x100(0x01)
		char pad_101[0x3]; // 0x101(0x03)
		float ServerMontageTrackPosition; // 0x104(0x04)
		struct FVector ServerLoc; // 0x108(0x0c)
		struct FVector_NetQuantizeNormal ServerRotation; // 0x114(0x0c)
		float ServerVelZ; // 0x120(0x04)
		char pad_124[0x4]; // 0x124(0x04)
		struct UPrimitiveComponent* ServerBase; // 0x128(0x08)
		struct FName ServerBoneName; // 0x130(0x08)
		bool bHasBase; // 0x138(0x01)
		bool bBaseRelativePosition; // 0x139(0x01)
		char ServerMovementMode; // 0x13a(0x01)
		char pad_13B[0x1]; // 0x13b(0x01)
		struct FVector NewWorldLoc; // 0x13c(0x0c)
	};

	struct Function_GPGameplay_GPCharacter_ReliableClientAdjustRootMotionPosition_Param
	{
	public:

		float Timestamp; // 0x00(0x04)
		float ServerMontageTrackPosition; // 0x04(0x04)
		struct FVector ServerLoc; // 0x08(0x0c)
		struct FVector_NetQuantizeNormal ServerRotation; // 0x14(0x0c)
		float ServerVelZ; // 0x20(0x04)
		char pad_24[0x4]; // 0x24(0x04)
		struct UPrimitiveComponent* ServerBase; // 0x28(0x08)
		struct FName ServerBoneName; // 0x30(0x08)
		bool bHasBase; // 0x38(0x01)
		bool bBaseRelativePosition; // 0x39(0x01)
		char ServerMovementMode; // 0x3a(0x01)
		char pad_3B[0x1]; // 0x3b(0x01)
		struct FVector NewWorldLoc; // 0x3c(0x0c)
	};

	struct Function_GPGameplay_GPCharacter_ReliableClientAdjustPosition_Param
	{
	public:

		float Timestamp; // 0x00(0x04)
		struct FVector NewLoc; // 0x04(0x0c)
		struct FVector NewVel; // 0x10(0x0c)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UPrimitiveComponent* NewBase; // 0x20(0x08)
		struct FName NewBaseBoneName; // 0x28(0x08)
		bool bHasBase; // 0x30(0x01)
		bool bBaseRelativePosition; // 0x31(0x01)
		char ServerMovementMode; // 0x32(0x01)
		char pad_33[0x1]; // 0x33(0x01)
		struct FVector NewWorldLoc; // 0x34(0x0c)
	};

	struct Function_GPGameplay_GPCharacter_RecvClientResetWalkingPosition_Param
	{
	public:

		enum class EResetWalkingPositionType Type; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float LeftCDTime; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPCharacter_PlayFPPFootStep_Param
	{
	public:

		struct UPhysicalMaterial* PhysMat; // 0x00(0x08)
		enum class EGPAudioFootSoundType AudioType; // 0x08(0x01)
	};

	struct Function_GPGameplay_GPCharacter_PlayerProne_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_PlayerCrouch_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_OnXPPChange_Param
	{
	public:

		bool bNewFPP; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_OnWeaponInspectEnd_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_OnWeaponInspectBegin_Param
	{
	public:

		float InspectDuration; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacter_OnRep_LogicPoseChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_OnRep_IsChangeCapsuleWhenJump_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_OnRep_IsBeingRescueReplicate_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_OnRep_CharacterCollisionManager_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_OnRep_BreathState_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_OnHeroIdChanged_Param
	{
	public:

		uint64_t HeroID; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_OnEndVaultNotify_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_OnClientResetWalkingPosition_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_OnCheckCharacterInStuck_Param
	{
	public:

		struct FVector CharacterLocation; // 0x00(0x0c)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GPCharacter_OnCheckCharacterCanResetWalkingPosition_Param
	{
	public:

		struct FVector CharacterLocation; // 0x00(0x0c)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_GPGameplay_GPCharacter_OnCharacterBeDrop_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_OnCharacterBeCarry_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_OnBreathStateChanged_Param
	{
	public:

		enum class EBreathState PreState; // 0x00(0x01)
		enum class EBreathState CurState; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCharacter_OnBeginVaultNotify_Param
	{
	public:

		char InVaultAnimType; // 0x00(0x01)
		char InObstacleHeightType; // 0x01(0x01)
	};

	struct Function_GPGameplay_GPCharacter_NotifyWantSpeak_Param
	{
	public:

		struct FString str; // 0x00(0x10)
		struct FString Voice; // 0x10(0x10)
	};

	struct Function_GPGameplay_GPCharacter_MoveRight_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacter_MoveForward_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacter_JudgeInBattling_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_IsWeaponMeshCompositeFinished_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsUsingTelescope_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsSequenceBinding_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsRaiseWatch_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsPawnInVehicleLeanOut_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsOperateAbilityVehicle_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsNeedFPPFootStep_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsInPain_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsInLegFracture_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsInGiantTower_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsInDoubleLegFractureFromBlackboard_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsInDoubleLegFracture_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsInDoubleArmFracture_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsInClimbLadder_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsInBleeding_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsInArmFracture_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsGoldC301_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsDriver_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsCarryingBody_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_IsCarringBox_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_GetWorldVelocity_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPCharacter_GetWeaponModularWeaponDataComponentAppearance_Param
	{
	public:

		struct UModularWeaponDataComponentAppearance* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_GetViewRotOffset_Param
	{
	public:

		struct FRotator ReturnValue; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPCharacter_GetVehicle_Param
	{
	public:

		struct APawn* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_GetUin_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_GetTargetBodyPartShootVisibility_Param
	{
	public:

		struct ACHARACTER* otherCharacter; // 0x00(0x08)
		bool bDebug; // 0x08(0x01)
		enum class ECharacterPart ReturnValue; // 0x09(0x01)
	};

	struct Function_GPGameplay_GPCharacter_GetSeatName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_GetPreWeaponPosition_Param
	{
	public:

		int64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_GetPlayerViewRotation_Param
	{
	public:

		bool bUseLerped; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FRotator ReturnValue; // 0x04(0x0c)
	};

	struct Function_GPGameplay_GPCharacter_GetPlayerNameOverride_Param
	{
	public:

		struct FText ReturnValue; // 0x00(0x18)
	};

	struct Function_GPGameplay_GPCharacter_GetPlayerName_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPCharacter_GetParentAttachment_Param
	{
	public:

		struct APawn* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_GetOutLineMeshes_Param
	{
	public:

		struct TArray<struct UMeshComponent*> OutLineMeshs; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPCharacter_GetOrCreateBreathInfo_Param
	{
	public:

		struct UBreathInfo* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_GetOffVehicle_Param
	{
	public:

		struct APawn* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_GetOffControlledVehicle_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_GetOffAbilityVehicle_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_GetLogInfo_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameplay_GPCharacter_GetLastSeatName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_GetLastEnermyHitTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacter_GetItemSearchSpeedRate_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacter_GetFocusPoint_Param
	{
	public:

		struct FVector ReturnValue; // 0x00(0x0c)
	};

	struct Function_GPGameplay_GPCharacter_GetDieOnVehicle_Param
	{
	public:

		struct APawn* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_GetCurrentTeamID_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacter_GetCurrentRoleLoadValue_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacter_GetCurrentClientCharacterAvatarID_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_GetCurrentCharacterHeroID_Param
	{
	public:

		uint64_t ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_GetBodyPartLocation_Param
	{
	public:

		enum class ECharacterPart BodyPart; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		struct FVector ReturnValue; // 0x04(0x0c)
	};

	struct Function_GPGameplay_GPCharacter_GetAbilityVehicle_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_ForbitAbility_Param
	{
	public:

		int32_t AbilityId; // 0x00(0x04)
		float Time; // 0x04(0x04)
	};

	struct Function_GPGameplay_GPCharacter_ClientWantsToMoveRight1P_Param
	{
	public:

		bool Move; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_ClientWantsToMove1P_Param
	{
	public:

		bool Move; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_ClientResetWalkingPosition_Param
	{
	public:

		bool bOnlyShowDebug; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_ClientNotifyKillPlayer_Param
	{
	public:

		struct FKillInfo NewKillInfo; // 0x00(0x148)
	};

	struct Function_GPGameplay_GPCharacter_ClientForceResetIdleState_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_ClientEndPerformAction_Param
	{
	public:

		float Value; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacter_Client2ServerResetWalkingPosition_Param
	{
	public:

		struct FVector ClientLocation; // 0x00(0x0c)
		bool bOnlyCheckStuck; // 0x0c(0x01)
		bool bOnlyShowDebug; // 0x0d(0x01)
	};

	struct Function_GPGameplay_GPCharacter_Client2ServerCheatWalk_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_Client2ServerCheatGhost_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_Client2ServerCheatFly_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_Client2ServerCharacterBeingFlashed_Param
	{
	public:

		struct AGPCharacter* CHARACTER; // 0x00(0x08)
	};

	struct Function_GPGameplay_GPCharacter_ClearFOV_Param
	{
	public:

	};

	struct Function_GPGameplay_GPCharacter_CheckTargetBodyPartShootVisibility_Param
	{
	public:

		struct ACHARACTER* otherCharacter; // 0x00(0x08)
		bool bDebug; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct TArray<enum class ECharacterPart> ReturnValue; // 0x10(0x10)
	};

	struct Function_GPGameplay_GPCharacter_CanUseAbility_Param
	{
	public:

		int32_t AbilityId; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPGameplay_GPCharacter_CanRotationInVihicle_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPGameplay_GPCharacter_CalcWorldVelocity_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameplay_GPCharacter_AddPreStateForRTTCheck_Param
	{
	public:

		enum class EFSMCharacterState FSMState; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float PreStateRTTTime; // 0x04(0x04)
	};

	struct Function_GPGameplay_WeaponMeleeDataComponentAnim_OnBulletHitForDamage_Param
	{
	public:

		struct AGPWeaponBulletBase* Bullet; // 0x00(0x08)
		struct FHitResult HitResult; // 0x08(0x88)
	};

	struct Function_GPGameplay_WeaponMeleeDataComponentAnim_OnBulletHitAmbient_Param
	{
	public:

		struct APawn* Intigator; // 0x00(0x08)
		struct FHitResult HitReslut; // 0x08(0x88)
	};

	struct Function_GPGameplay_WeaponSupportDataAnimComponnent_OnAnimLoadCompleted_Param
	{
	public:

		struct FSoftObjectPath SoftObjectPath; // 0x00(0x18)
	};

	struct Function_GPGameplay_WeaponThrowableLeftDataComponentAnim_OnPostMeshHiddenChanged_Param
	{
	public:

	};

	struct Function_GPGameplay_WeaponAdapterItemForeGWithBipod_OnMeshAssetLoaded_Param
	{
	public:

		uint64_t Guid; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponAdapterItemForeGWithFLight_OnMeshAssetLoaded_Param
	{
	public:

		uint64_t Guid; // 0x00(0x08)
	};

	struct Function_GPGameplay_WeaponAdapterItemForeGWithLaser_OnMeshAssetLoaded_Param
	{
	public:

		uint64_t Guid; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
