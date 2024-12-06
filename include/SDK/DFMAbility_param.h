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
	struct Function_DFMAbility_AbilityAttachBaseMesh_UpdatePostEffectVectorParameters_Param
	{
	public:

		struct FName PostEffectName; // 0x00(0x08)
		struct FName ParameterName; // 0x08(0x08)
		struct FLinearColor Value; // 0x10(0x10)
	};

	struct Function_DFMAbility_AbilityLauncherFireMode_TrySpawnFakeBullet_Param
	{
	public:

		struct FWeaponFireRepInfo RepInfo; // 0x00(0x80)
	};

	struct Function_DFMAbility_AbilityNodeTriggerInterface_SetTriggerType_Param
	{
	public:

		int32_t Type; // 0x00(0x04)
	};

	struct Function_DFMAbility_AbilityOverloadBuffHandler_TrySendEvent_Param
	{
	public:

		bool bIsAdd; // 0x00(0x01)
	};

	struct Function_DFMAbility_AbilityProjectileInterface_SetVelocityStartPos_Param
	{
	public:

		struct FVector pos; // 0x00(0x0c)
	};

	struct Function_DFMAbility_AbilitySpawnActorInterface_StartFadeOut_Param
	{
	public:

	};

	struct Function_DFMAbility_AbilityBlueprintsSpawnActorInterface_BP_OnSetAbilitOwner_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct AActor* CHARACTER; // 0x08(0x08)
	};

	struct Function_DFMAbility_AbilityTraceTargetInterface_SetTraceTargetPos_Param
	{
	public:

		struct FVector pos; // 0x00(0x0c)
		int32_t SkillEntityIndex; // 0x0c(0x04)
	};

	struct Function_DFMAbility_AbilityVehicleAnimInstance_GetSocketUpOffsetLoaction_Param
	{
	public:

		struct FName Name; // 0x00(0x08)
		float offset; // 0x08(0x04)
		enum class ERelativeTransformSpace Space; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FVector ReturnValue; // 0x10(0x0c)
	};

	struct Function_DFMAbility_AbilityWeaponBulletGrenadeC4_BP_StickyToTarget_Param
	{
	public:

	};

	struct Function_DFMAbility_ArtilleryShellingTemplate_ClientDebugTraceLine_Param
	{
	public:

		struct FVector Start; // 0x00(0x0c)
		struct FVector End; // 0x0c(0x0c)
		struct FColor Color; // 0x18(0x04)
		struct FHitResult HitResult; // 0x1c(0x88)
		float radius; // 0xa4(0x04)
	};

	struct Function_DFMAbility_ArtilleryShellProjectileMovementComponent_Init_Param
	{
	public:

		struct FVector InitVelocity; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct FArtilleryShellMovementParameter MovementParameter; // 0x10(0x40)
	};

	struct Function_DFMAbility_BowArrowMesh_SetArrowType_Param
	{
	public:

		bool IsProxSensorArrow; // 0x00(0x01)
	};

	struct Function_DFMAbility_ChainHookComponent_UpdateLocation_Param
	{
	public:

		struct FVector Start; // 0x00(0x0c)
		struct FVector End; // 0x0c(0x0c)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_DFMAbility_DFMAbilityBeacon_IsEnemy_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMAbility_DFMAbilityBunkerPiece_OnRep_Health_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityDamageTaker_IsDestroy_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMAbility_DFMAbilityDFMVehicle_VehicleRecycle_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityDun_OnSprintStateChange_Param
	{
	public:

		bool bCurSprintState; // 0x00(0x01)
	};

	struct Function_DFMAbility_DFMAbilityFlyRebot_VehicleMovementModeChanged_Param
	{
	public:

		struct ACHARACTER* CHARACTER; // 0x00(0x08)
		enum class EMovementMode PrevMovementMode; // 0x08(0x01)
		char PreviousCustomMode; // 0x09(0x01)
	};

	struct Function_DFMAbility_DFMAbilityGameStateComponent_Rep_AbilityTemplateRepData_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityIncendiaryGrenade_TryIncendiaryActor_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityLevelActorManager_UnRegisterProjectile_Param
	{
	public:

		struct AGPWeaponBulletBase* InProjectile; // 0x00(0x08)
	};

	struct Function_DFMAbility_DFMAbilityLogicTemplate_WeaponProjectileSpawnActorCallback_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		int32_t LogicID; // 0x04(0x04)
		struct AActor* Actor; // 0x08(0x08)
		struct FName ActorName; // 0x10(0x08)
	};

	struct Function_DFMAbility_DFMAbilityParticleSmokeWallComponent_TickMoveParticle_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_DFMAbility_DFMAbilitySmokeDeformableActor_UpdateTickInterval_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilitySmokeWallUAS_UnRegisterAbilityActor_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityThrowBlocking_TryAddBreakThroughScore_Param
	{
	public:

		struct FDamageResultInfo DamageResult; // 0x00(0x5e0)
	};

	struct Function_DFMAbility_DFMAbilityThrowBlockingGrenade_TrySpawnBlockingActor_Param
	{
	public:

		struct FHitResult ImpactResult; // 0x00(0x88)
	};

	struct Function_DFMAbility_DFMAbilityTraceLine_OnSprintStateChange_Param
	{
	public:

		bool bCurSprintState; // 0x00(0x01)
	};

	struct Function_DFMAbility_DFMAbilityUASActiveComponent_TickState_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_DFMAbility_DFMAbilityUtil_ReleaseUIByName_Param
	{
	public:

		struct UObject* World; // 0x00(0x08)
		struct FName PanelConfigName; // 0x08(0x08)
	};

	struct Function_DFMAbility_DFMCruiseMissileFuncComponent_SwitchWeaponNextFrame_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMCruiseMissileMain_UpdateViewData_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMCruiseMissileMovementComponent_StopReport_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMDeformableMeshEmitComponent_UnRegisterToFXDelegate_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMSupportPackSubSystem_SetSupportLockerData_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UClass* LockerData; // 0x08(0x08)
	};

	struct Function_DFMAbility_DFMVehicleSkillBoss04Component_ServerUpdateShootDir_Param
	{
	public:

		struct FVector dir; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct AActor* LockTarget; // 0x10(0x08)
	};

	struct Function_DFMAbility_EMPBuffCueHandler_RemoveScreenEffect_Param
	{
	public:

	};

	struct Function_DFMAbility_ExtinguishIncendiaryComponent_RemoveCustomBoxes_Param
	{
	public:

	};

	struct Function_DFMAbility_FiringBleedingCueHandler_TryCancelWeaponOperate_Param
	{
	public:

	};

	struct Function_DFMAbility_GPWeaponAbilityFireModeDirectLauncher_SpawnGrenade_Param
	{
	public:

		struct FVector StartLocation; // 0x00(0x0c)
		struct FVector FireRotation; // 0x0c(0x0c)
		struct FVector AffectInitVelocity; // 0x18(0x0c)
		char pad_24[0x4]; // 0x24(0x04)
		uint64_t BulletGuid; // 0x28(0x08)
	};

	struct Function_DFMAbility_ThrowBlockingAnimInstance_CheckMaxPlayTimeSeconds_Param
	{
	public:

		float DeltaSeconds; // 0x00(0x04)
	};

	struct Function_DFMAbility_WeaponFireModeSwarms_UpdatePreview_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_DFMAbility_WeaponFireModeThrowableSpawnSmokeUAS_UnRegisterLocalUASActorInitiazliced_Param
	{
	public:

	};

	struct Function_DFMAbility_WeaponFireModeThrowBlocking_ShowSwitchButtonHUD_Param
	{
	public:

		bool bActive; // 0x00(0x01)
	};

	struct Function_DFMAbility_WeaponFuncComponentZoyaSwarmsItem_TrySpawnCastEffect_3P_Param
	{
	public:

	};

	struct Function_DFMAbility_WeaponThrowBunkerDataComponentAnim_PlayAudioStop_Param
	{
	public:

	};

	struct Function_DFMAbility_ZoyaSwarmsItemAnimInstance_SetIsBindToTarget_Param
	{
	public:

		bool bIsBindToTarget; // 0x00(0x01)
	};

	struct Function_DFMAbility_ZoyaSwarmsPreviewActor_TickMove_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_DFMAbility_ZoyaSwarmsWeapon_CheckSwarmsCanFire_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMAbility_DFMAbilityWeaponThrowableBullet_DestroyLevelActorSpawnBySelf_Param
	{
	public:

		struct AActor* SelfActor; // 0x00(0x08)
		enum class EAbilityLevelActorType ActorType; // 0x08(0x01)
	};

	struct Function_DFMAbility_ArtilleryShell_UpdateDynamicCollisionElement_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityProjectile_OnRep_Target_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilitySystemBase_Update_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityInstance_IsServer_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMAbility_QA_AbilityLogicTask_TickLogic_Param
	{
	public:

	};

	struct Function_DFMAbility_ThrowBlockingPartComponent_UpdateState_Param
	{
	public:

	};

	struct Function_DFMAbility_WeaponBulletBuff_ServerAEffectBuff_Param
	{
	public:

		struct TArray<struct FAbilityDetectorBuffData> AddBuffs; // 0x00(0x10)
		struct ADFMCharacter* DFMCharacter; // 0x10(0x08)
		bool Add; // 0x18(0x01)
	};

	struct Function_DFMAbility_AbilityWeaponBulletGrenade_InitBulletGrenade_Param
	{
	public:

		struct AActor* GrenadeOwner; // 0x00(0x08)
		struct FVector FireStartLocation; // 0x08(0x0c)
		struct FVector InitVelocity; // 0x14(0x0c)
	};

	struct Function_DFMAbility_DFMAbilityEMPBullet_SpawnSubBullet_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityEMPSubBullet_InitBulletInfo_Param
	{
	public:

		struct ADFMAbilityEMPBullet* EMPBullet; // 0x00(0x08)
		struct FWeaponBulletBaseInitParam ParentParam; // 0x08(0x80)
		struct FRotator Rotator; // 0x88(0x0c)
		float RandomDelay; // 0x94(0x04)
	};

	struct Function_DFMAbility_DFMAbilityWeaponThrowableKnife_TryInitPathMeshInstance_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityLevelActor_Rep_Destroy_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityDetectorBase_SubCheckOverlapResult_Param
	{
	public:

		struct AGPCharacter* Char; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_DFMAbility_ArtilleryShell_GuidedMissle_StopFlyAudio_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityDefaultSystem_RecycleAttachMesh_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		struct FName MeshName; // 0x04(0x08)
	};

	struct Function_DFMAbility_DFMAbilityStateSystem_OnLeaveStateSignal_Param
	{
	public:

		struct UQA_AbilityLogicTask* QA; // 0x00(0x08)
		int32_t SkillEntityIndex; // 0x08(0x04)
		int32_t LogicID; // 0x0c(0x04)
		enum class EAbilityTriggerType Trigger; // 0x10(0x01)
	};

	struct Function_DFMAbility_DFMAbilityInstanceAdvancedScan_OnScanResult_Param
	{
	public:

		int32_t InSkillID; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<struct AActor*> InScanArray; // 0x08(0x10)
	};

	struct Function_DFMAbility_DFMAbilityInstanceRankSkill_OnRefreshRankSkillUIState_Param
	{
	public:

		char RefreshReason; // 0x00(0x01)
	};

	struct Function_DFMAbility_DFMAbilityInstanceAssault_OnPlayerSlidingTackle_Param
	{
	public:

		struct AGPCharacter* GPChar; // 0x00(0x08)
	};

	struct Function_DFMAbility_DFMAbilityInstanceCruiseMissile_OnEscaping_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityInstanceEngineer_SetEngineVehicleRecycleData_Param
	{
	public:

		float HealthPercent; // 0x00(0x04)
		float PowerPercent; // 0x04(0x04)
	};

	struct Function_DFMAbility_DFMAbilityInstanceMine_OnAbilitySpawnActorCreated_Param
	{
	public:

		struct AActor* CharacterOwner; // 0x00(0x08)
		struct AActor* SpawnActor; // 0x08(0x08)
	};

	struct Function_DFMAbility_DFMAbilityInstanceSelfCure_OnCharaterHealthChange_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityInstanceSmokeWall_OnClientInputLieDownEvent_Param
	{
	public:

		enum class ECharacterFSMEventDefine FSMEvent; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Value; // 0x04(0x04)
		struct UObject* EventObject; // 0x08(0x08)
	};

	struct Function_DFMAbility_DFMUASPilotMovementComponent_InitPilot_Param
	{
	public:

	};

	struct Function_DFMAbility_QA_AbilityAddHealth_QA_AbilityAddHealth_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct AActor* TargetCharacter; // 0x10(0x08)
		int32_t AddHealth; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityAddSheild_QA_AbilityAddSheild_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		float AddSheildValue; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityAddSkillNum_QA_AbilityAddSkillNum_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		int32_t AddNum; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityAttachMeshAnim_SetAttachMesh_Param
	{
	public:

		struct FAbilityBlackBorad_AttachMesh AttachMeshData; // 0x00(0x90)
		struct AGPCharacter* CHARACTER; // 0x90(0x08)
		struct FName MeshName; // 0x98(0x08)
		struct UGPSkeletalMeshComponent* ItemMesh; // 0xa0(0x08)
		bool IsBindMesh; // 0xa8(0x01)
	};

	struct Function_DFMAbility_QA_AbilityDestroyMeshAnim_QA_AbilityDestroyMeshAnim_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FName _MeshName; // 0x10(0x08)
		struct UQA_AbilityDestroyMeshAnim* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityTagMeshAnim_QA_AbilityTagMeshAnim_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FName InMeshName; // 0x10(0x08)
		struct FName InTag; // 0x18(0x08)
		bool InAdd; // 0x20(0x01)
		bool InCheck; // 0x21(0x01)
		char pad_22[0x6]; // 0x22(0x06)
		struct UQA_AbilityTagMeshAnim* ReturnValue; // 0x28(0x08)
	};

	struct Function_DFMAbility_QA_AbilityAudio_QA_AbilityAudio_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct UGPAudioEventAsset* InAudioEventAsset; // 0x10(0x08)
		enum class EGPAudioBlueprintType EType; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		float Duration; // 0x1c(0x04)
		bool bNeedMakeNoise; // 0x20(0x01)
		bool bPreCutted; // 0x21(0x01)
		enum class EAudioRoleType RoleType; // 0x22(0x01)
		char pad_23[0x5]; // 0x23(0x05)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x28(0x08)
	};

	struct Function_DFMAbility_QA_AbilityResourceAudio_QA_AbilityResourceAudio_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FName InResouceID; // 0x10(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityLogicState_QA_BeginAbilityState_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMAbility_QA_AbilityRevertBehaviorCall_QA_AbilityRevertSlotButton_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMAbility_QA_AbilityBuff_QA_AbilityBuff_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		int32_t BuffId; // 0x10(0x04)
		int32_t BFBuffID; // 0x14(0x04)
		int32_t HDBuffID; // 0x18(0x04)
		int32_t HDBFBuffID; // 0x1c(0x04)
		enum class ECharacterPart Part; // 0x20(0x01)
		char pad_21[0x7]; // 0x21(0x07)
		struct FAbilityBuffAwardConfig BF_AwardConfigIn; // 0x28(0xb8)
		struct FAbilityBuffAwardConfig SOL_AwardConfigIn; // 0xe0(0xb8)
		bool AddOrRemove; // 0x198(0x01)
		bool RemoveBuffOnAbilityAbort; // 0x199(0x01)
		bool UseBFBuffWhenIsBF; // 0x19a(0x01)
		bool UseHDBuffWhenIsHD; // 0x19b(0x01)
		char pad_19C[0x4]; // 0x19c(0x04)
		struct UQA_AbilityBuff* ReturnValue; // 0x1a0(0x08)
	};

	struct Function_DFMAbility_QA_C302PassiveBuff_QA_C302PassiveBuff_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		float CD; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityCameraModifier_QA_AbilityCameraModifier_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct UClass* NewModifierClass; // 0x10(0x08)
		bool AddOrRemove; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityCastWeaponAmmo_QA_AbilityCastWeaponAmmo_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class ECharingSlot Slot; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		int32_t Cast; // 0x14(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityCheckWeaponAmmo_QA_AbilityCheckWeaponAmmo_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class ECharingSlot Slot; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FName Op; // 0x14(0x08)
		int32_t AmmoNum; // 0x1c(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityCD_QA_AbilityCD_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		float CD; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityUseCD_QA_AbilityUseCD_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMAbility_QA_AbilityAddCD_QA_AbilityAddCD_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		float Value; // 0x10(0x04)
		bool isPercent; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityCDEx_QA_AbilityCDEx_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		float CD; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityChangeCharacterAnimation_QA_AbilityChangeCharacterAnimation_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct UBlendSpaceBase* MoveBS; // 0x10(0x08)
		struct UAnimSequence* IdleAnim; // 0x18(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityChangeWeaponAnimMap_QA_AbilityChangeWeaponAnimMap_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		bool isClear; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FName ItemID; // 0x14(0x08)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityConsumeItem_QA_AbilityConsumeItem_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMAbility_QA_AbilityRecycleSpawnActor_QA_AbilityRecycleSpawnActor_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FAbilityRecycleSpawnActorData InRecycleData; // 0x10(0x50)
		struct UQA_AbilityRecycleSpawnActor* ReturnValue; // 0x60(0x08)
	};

	struct Function_DFMAbility_QA_AbilityActiveSpawnActor_QA_AbilityActiveSpawnActor_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class ECharingSlot ItemPos; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_AbilityActiveSpawnActor* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityCostScore_QA_AbilityCostScore_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMAbility_QA_AbilityCrosshairPercent_QA_AbilityCrosshairPercent_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		float InSequenceLength; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_SetSupportAmmo_QA_SetSupportAmmo_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FName InMeshName; // 0x10(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityDelay_QA_AbilityDelay_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		float Delay; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityCustomDelay_QA_AbilityCustomDelay_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		float serverDelay; // 0x10(0x04)
		float clientDelay; // 0x14(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityDriverFlyRebot_QA_AbilityDriverFlyRebot_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FName VehicleName; // 0x10(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityDriverVehicle_QA_AbilityDriverVehicle_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FName VehicleName; // 0x10(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityEnableLongPress_QA_AbilityEnableLongPress_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		bool Enable; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityEndLogic_QA_AbilityEndLogic_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMAbility_QA_AbilityEquipAnim_QA_AbilityEquipAnim_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		bool Equip; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		int32_t IngoreSlot; // 0x14(0x04)
		int32_t QuietEquipSlot; // 0x18(0x04)
		float blendIn; // 0x1c(0x04)
		float blendOut; // 0x20(0x04)
		float preTrigger; // 0x24(0x04)
		enum class EInteractivePutWeaponType PutWeaponType; // 0x28(0x01)
		enum class EInteractiveGetWeaponType GetWeaponType; // 0x29(0x01)
		char pad_2A[0x6]; // 0x2a(0x06)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x30(0x08)
	};

	struct Function_DFMAbility_QA_AbilityEquipWeapon_QA_AbilityEquipWeapon_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		bool Equip; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FName WeaponID; // 0x14(0x08)
		int32_t AttachPos; // 0x1c(0x04)
		bool UniqueWeapon; // 0x20(0x01)
		char pad_21[0x7]; // 0x21(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x28(0x08)
	};

	struct Function_DFMAbility_QA_AbilityFunction_QA_AbilityFunction_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName FunctionName; // 0x08(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMAbility_QA_AbilityHandleRush_QA_AbilityHandleRush_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class ESkillActorEvent InEventName; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityItemPreviewActor_QA_AbilityItemPreviewActor_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FAbilityItemPreviewData AbilityItemPreviewData; // 0x10(0x38)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x48(0x08)
	};

	struct Function_DFMAbility_QA_AbilityRemoveItemPreviewActor_QA_AbilityRemoveItemPreviewActor_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMAbility_QA_AbilityLineTrace_QA_AbilityLineTrace_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class ECollisionChannel _Channel; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float _TraceLenth; // 0x14(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityLineTraceCheck_QA_AbilityLineTraceCheck_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class ECollisionChannel _Channel; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float _TraceLenth; // 0x14(0x04)
		float InForwardTraceLenth; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityLogicLeaveState_QA_EndAbilityState_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class EAbilityTriggerType Trigger; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityEnd_QA_EndAbility_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FEndAbilityOption EndOption; // 0x10(0x03)
		char pad_13[0x5]; // 0x13(0x05)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityCheckNormalBreak_QA_AbilityCheckNormalBreak_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMAbility_QA_AbilityMeshMaterialEffect_QA_AbilityMeshMaterialEffect_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct TMap<struct FName, struct FMeshMatEffectConfig> Configs; // 0x10(0x50)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x60(0x08)
	};

	struct Function_DFMAbility_QA_AbilityNotify_QA_AbilityNotify_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class ESkillActorEvent InEventName; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityNotifyDSReplay_QA_AbilityNotifyDSReplay_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FName InReplayDebugName; // 0x10(0x08)
		float InDuration; // 0x18(0x04)
		float InRadius; // 0x1c(0x04)
		struct FColor InColor; // 0x20(0x04)
		char pad_24[0x4]; // 0x24(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x28(0x08)
	};

	struct Function_DFMAbility_QA_AbilityNotifyForwardScan_QA_AbilityNotifyForwardScan_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		bool IsActive; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityNotifyRush_QA_AbilityNotifyRush_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class ESkillActorEvent InEventName; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityRushSetting_QA_AbilityRushSetting_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FAbilityRushSettingConfig Config; // 0x10(0x190)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x1a0(0x08)
	};

	struct Function_DFMAbility_QA_AbilityOverrideAnimingCheck_QA_AbilityOverrideAnimingCheck_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		bool bOverrideAimingCheck; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityPlayMontage_QA_AbilityPlayMontageWithAnimSet_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName _LogicName; // 0x08(0x08)
		struct FAbilityPlayMontageDataP2 Data; // 0x10(0x138)
		struct UQA_AbilityPlayMontage* ReturnValue; // 0x148(0x08)
	};

	struct Function_DFMAbility_QA_AbilityStopMontage_QA_AbilityStopMontage_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName _LogicName; // 0x08(0x08)
		int32_t PlayIndex; // 0x10(0x04)
		enum class EAnimationPlayType AnimationPlayType; // 0x14(0x01)
		char pad_15[0x3]; // 0x15(0x03)
		struct UQA_AbilityStopMontage* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityTakeDemageStopMontage_QA_AbilityTakeDemageStopMontage_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName _LogicName; // 0x08(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMAbility_QA_AbilityPlayUIAudio_QA_AbilityPlayUIAudio_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct UGPAudioEventAsset* AudioAsset; // 0x10(0x08)
		bool Include3P; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityPreviewActor_QA_AbilityPreviewActor_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* InLogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FAbilityPreviewData PreviewData; // 0x10(0xf0)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x100(0x08)
	};

	struct Function_DFMAbility_QA_AbilityEnablePreviewLine_QA_AbilityEnablePreviewLine_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		bool Enable; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityProcessBar_QA_AbilityProcessBar_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		float Time; // 0x10(0x04)
		struct FName Name; // 0x14(0x08)
		int32_t BarType; // 0x1c(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityProjectileActor_QA_AbilityProjectileActor_Param
	{
	public:

	};

	struct Function_DFMAbility_QA_AbilityPullOutFireArrow_QA_AbilityPullOutFireArrow_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FName Text; // 0x10(0x08)
		float Time; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityRankSkillOperate_QA_AbilityRankSkillOperate_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMAbility_QA_AbilityRemoveWeapon_QA_AbilityRemoveWeapon_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FName WeaponID; // 0x10(0x08)
		int32_t AttachPos; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilitySendSupportPackTarget_QA_AbilitySendSupportPackTarget_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class ESupportType SupportType; // 0x10(0x01)
		bool bSelfUse; // 0x11(0x01)
		char pad_12[0x6]; // 0x12(0x06)
		struct TArray<enum class ECharingSlot> InCharingSlotList; // 0x18(0x10)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x28(0x08)
	};

	struct Function_DFMAbility_QA_AbilitySetCharAbilityMask_QA_AbilitySetCharAbilityMask_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		bool bEnableAbility; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct FSetCharAbilityMaskData MaskData; // 0x18(0x10)
		struct FSetCharAbilityMaskData MPMaskData; // 0x28(0x10)
		struct UQA_AbilitySetCharAbilityMask* ReturnValue; // 0x38(0x08)
	};

	struct Function_DFMAbility_QA_AbilitySetCharCanProneFireMove_QA_AbilitySetCharCanProneFireMove_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		bool CanProneFireMove; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilitySetUseC301Launcher_QA_AbilitySetUseC301Launcher_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		bool UseC301Launcher; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		int32_t LastBulletCnt; // 0x14(0x04)
		bool IsFire; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityShowDetectorMap_QA_AbilityShowDetectorMap_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct UClass* ActorClass; // 0x08(0x08)
		float DetectorMapRadius; // 0x10(0x04)
		float _SlideSpeedDelay; // 0x14(0x04)
		float _DetectorRadius; // 0x18(0x04)
		float _DetectorRadiusScale; // 0x1c(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityShowDetectorMapEx_QA_AbilityShowDetectorMapEx_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct UClass* ActorClass; // 0x08(0x08)
		float DetectorMapRadius; // 0x10(0x04)
		float _SlideSpeedDelay; // 0x14(0x04)
		float _DetectorRadius; // 0x18(0x04)
		float _DetectorRadiusScale; // 0x1c(0x04)
		float MarkerShowTime; // 0x20(0x04)
		bool IsShowMarkerInMap; // 0x24(0x01)
		char pad_25[0x3]; // 0x25(0x03)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x28(0x08)
	};

	struct Function_DFMAbility_QA_AbilityShowPanel_QA_AbilityShowPanel_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FName PanelName; // 0x10(0x08)
		bool Show; // 0x18(0x01)
		bool _Include3p; // 0x19(0x01)
		char pad_1A[0x6]; // 0x1a(0x06)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityShowTips_QA_AbilityShowTips_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FName Text; // 0x10(0x08)
		float Time; // 0x18(0x04)
		bool bUseLuaShowTips; // 0x1c(0x01)
		char pad_1D[0x3]; // 0x1d(0x03)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityKeyTips_QA_AbilityKeyTips_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct TArray<struct FRightKeyTipsSkillData> InTipsData; // 0x10(0x10)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilitySkillConflictID_QA_AbilitySkillConflictID_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		int32_t ConflictID; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilitySkillUIEvent_QA_AbilitySkillUIEvent_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FName Key; // 0x10(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilitySoundVisualizationNotify_QA_AbilitySoundVisualizationNotify_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class ESoundVisualizationType EventType; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilitySpawnActor_QA_AbilitySpawnActor_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FAASpawnActorData InSpawnActorData; // 0x10(0x70)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x80(0x08)
	};

	struct Function_DFMAbility_QA_AbilityNotifySpawnActor_QA_AbilityNotifySpawnActor_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FName InNotifyName; // 0x10(0x08)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityStaminaChange_QA_AbilityStaminaChange_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class EStaminaIndependentChangeType InStaminaChangeType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float InDeltaSeconds; // 0x14(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilitySwithLeftWeapon_QA_AbilitySwithLeftWeapon_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FName InWeaponId; // 0x10(0x08)
		int32_t InAttachPos; // 0x18(0x04)
		int32_t InWeaponManagerSlot; // 0x1c(0x04)
		bool InIsEquipWeapon; // 0x20(0x01)
		char pad_21[0x7]; // 0x21(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x28(0x08)
	};

	struct Function_DFMAbility_QA_AbilitySwithWeapon_QA_AbilitySwithWeapon_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class EAbilitySwithWeaponType SwitchType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		int32_t AttachPos; // 0x14(0x04)
		bool OnlySwitchPosWeapon; // 0x18(0x01)
		bool CoverPendingSwitch; // 0x19(0x01)
		enum class EWeaponSwitchType InWeaponEquipSwitchType; // 0x1a(0x01)
		bool IncludeSkillWeapon; // 0x1b(0x01)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityTrigger_QA_AbilityTagTrigger_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class EGPQuestActionTriggerType Type; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FName QATag; // 0x14(0x08)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityEnableUseTogether_QA_AbilityEnableUseTogether_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		bool Enable; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityCastSkill_QA_AbilityCastSkill_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		int32_t SkillId; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct UQA_AbilityCastSkill* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityHookSkill_QA_AbilityHookSkill_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		int32_t SkillId; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct UQA_AbilityHookSkill* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityUseSupportPack_QA_AbilityUseSupportPack_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class ESupportType SupportType; // 0x10(0x01)
		bool bCondCheck; // 0x11(0x01)
		char pad_12[0x6]; // 0x12(0x06)
		struct UQA_AbilityUseSupportPack* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityWantCharacterSpeak_QA_AbilityWantCharacterSpeak_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		enum class ECharacterAudioType InVoiceType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FName InVoiceName; // 0x14(0x08)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityWeaponProjectileActor_QA_AbilityWeaponProjectileActor_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FAbilityWeaponProjectileData ProjectileData; // 0x10(0x80)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x90(0x08)
	};

	struct Function_DFMAbility_ThrowBlockingPreviewPartComponent_InitPreviewPart_Param
	{
	public:

		struct USceneComponent* BaseNode; // 0x00(0x08)
		struct UMeshComponent* Mesh; // 0x08(0x08)
	};

	struct Function_DFMAbility_WeaponBulletArrow_GetFlyDistance_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_DFMAbility_WeaponBulletPenetratingSniper_BP_CreateBulletBuff_Param
	{
	public:

		struct FHitResult ImpactResult; // 0x00(0x88)
	};

	struct Function_DFMAbility_WeaponBulletSupport_ServerOverlapByBullet_Param
	{
	public:

		struct AActor* Target; // 0x00(0x08)
	};

	struct Function_DFMAbility_AbilityWeaponBulletGrenadeMine_OnRep_AbilitySuppressionMine_Param
	{
	public:

	};

	struct Function_DFMAbility_ADS_OnProjectileIntercepted_Param
	{
	public:

		struct FVector ProjectilePos; // 0x00(0x0c)
		char pad_C[0x4]; // 0x0c(0x04)
		struct AActor* BulletCreator; // 0x10(0x08)
	};

	struct Function_DFMAbility_DFMAbilityADSDefencer_OnSectorTransEnd_Param
	{
	public:

		int32_t ActiveID; // 0x00(0x04)
	};

	struct Function_DFMAbility_RebornFlag_TryStickyToThrowAttachable_Param
	{
	public:

		struct FHitResult ImpactResult; // 0x00(0x88)
		bool ReturnValue; // 0x88(0x01)
	};

	struct Function_DFMAbility_DFMAbilityBuffDetector_UpdatePostEffectVectorParameters_Param
	{
	public:

		struct FName PostEffectName; // 0x00(0x08)
		struct FName ParameterName; // 0x08(0x08)
		struct FLinearColor Value; // 0x10(0x10)
	};

	struct Function_DFMAbility_DFMAbilityBuffSystem_ProcessKillAward_Param
	{
	public:

		struct UDFMCharacterBuffEntityBase* BuffEntity; // 0x00(0x08)
		int32_t SkillEntityIndex; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct UQA_AbilityBuff* BuffQA; // 0x10(0x08)
		struct FKillInfo NewKillInfo; // 0x18(0x148)
		struct UGPModularWeaponDesc* Desc; // 0x160(0x08)
	};

	struct Function_DFMAbility_DFMAbilityPlayMontageSystem_TryBindAudioTrigger_Param
	{
	public:

		int32_t SkillEntityIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FAbilityPlayMontageResources ResourceData; // 0x08(0x30)
	};

	struct Function_DFMAbility_QA_AbilityBehaviorCall_QA_AbilitySlotButton_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName FunctionName; // 0x08(0x08)
		enum class ESlotButton sb; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_QA_AbilityChangeBehaviorCall_QA_AbilityChangeSlotButton_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName InLogicName; // 0x08(0x08)
		struct FName FunctionName; // 0x10(0x08)
		enum class ESlotButton sb; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x20(0x08)
	};

	struct Function_DFMAbility_QA_AbilityFSMStatusInstanceListner_QA_AbilityFSMStatusInstanceListner_Param
	{
	public:

		struct ADFMAbilityLogicTemplate* LogicTemplate; // 0x00(0x08)
		struct FName FunctionName; // 0x08(0x08)
		enum class EFSMGamePlayStatusDefine Status; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UQA_AbilityLogicTask* ReturnValue; // 0x18(0x08)
	};

	struct Function_DFMAbility_WeaponBulletProxSensorArrow_UpdateClientPostProcessEffect_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityBaseBox_UpdateBoxCDList_Param
	{
	public:

		int64_t Uin; // 0x00(0x08)
		float CD; // 0x08(0x04)
	};

	struct Function_DFMAbility_DFMAbilityPlacementBase_OnRep_bActived_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityIncendiaryArea_UnPackageCellInfo_Param
	{
	public:

		int32_t CellInfo; // 0x00(0x04)
		int32_t X; // 0x04(0x04)
		int32_t Y; // 0x08(0x04)
		int32_t XOffset; // 0x0c(0x04)
		int32_t YOffset; // 0x10(0x04)
		enum class EIncendiaryAreaCellDiffuseType DiffuseType; // 0x14(0x01)
	};

	struct Function_DFMAbility_DFMAbilityBlindingSmokeMine_TryExtinguishIncendiary_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityDetector_IsDestroy_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMAbility_DFMAbilityFireArrow_StopFireArrowDamage_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilitySensorDetector_BP_ApplySensorEffect_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityProxSensor_IsOnwerEnemyWithCharacter_Param
	{
	public:

		struct AGPCharacterBase* Charecter; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_DFMAbility_DFMAbilityProxSensorAdvanceScan_TickScan_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityStormBall_IsDestroy_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMAbility_DFMAbilitySuppressionMine_SuppressionMineTriggerEvent_Param
	{
	public:

		struct AActor* NewCharacterOwner; // 0x00(0x08)
		struct AActor* Bunker; // 0x08(0x08)
		int32_t TriggerType; // 0x10(0x04)
	};

	struct Function_DFMAbility_ZoyaSwarmsActor_UpdateTravelerGameAk_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityAmmoBox_SpecialAddAmmo_Param
	{
	public:

		struct ADFMCharacter* TargetChar; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_DFMAbility_DFMAbilityMineBase_OnPawnDie_Param
	{
	public:

		struct AGPCharacterBase* CHARACTER; // 0x00(0x08)
	};

	struct Function_DFMAbility_DFMAbilityBarbedWireArea_TrySetMaterialParams_Param
	{
	public:

		struct UFXResourceContainerComponent* FxComponent; // 0x00(0x08)
		struct FVector Location; // 0x08(0x0c)
		float Time; // 0x14(0x04)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_DFMAbility_DFMAbilityMedic_UpdateTimeMap_Param
	{
	public:

	};

	struct Function_DFMAbility_DFMAbilityAntiTankMine_OnOverlapEnd_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComp; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
	};

	struct Function_DFMAbility_DFMAbilityClaymoreMine_OnOverlapEnd_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComp; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
