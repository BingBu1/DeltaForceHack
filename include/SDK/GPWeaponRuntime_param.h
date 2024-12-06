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
	struct Function_GPWeaponRuntime_AbilityTask_WaitDelayWhileAbilityActive_WaitDelayWhileAbilityActive_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		float Time; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct UAbilityTask_WaitDelayWhileAbilityActive* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPWeaponRuntime_ActorPoolInterface_SetActorPoolMethod_Param
	{
	public:

		enum class EActorPoolMethod Val; // 0x00(0x01)
	};

	struct Function_GPWeaponRuntime_ConeTrace_SphereTraceMultiForObjects_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector Start; // 0x08(0x0c)
		struct FVector End; // 0x14(0x0c)
		float radius; // 0x20(0x04)
		char pad_24[0x4]; // 0x24(0x04)
		struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x28(0x10)
		bool bTraceComplex; // 0x38(0x01)
		char pad_39[0x7]; // 0x39(0x07)
		struct TArray<struct AActor*> ActorsToIgnore; // 0x40(0x10)
		enum class EDrawDebugTrace DrawDebugType; // 0x50(0x01)
		char pad_51[0x7]; // 0x51(0x07)
		struct TArray<struct FHitResult> OutHits; // 0x58(0x10)
		bool bIgnoreSelf; // 0x68(0x01)
		char pad_69[0x3]; // 0x69(0x03)
		struct FLinearColor TraceColor; // 0x6c(0x10)
		struct FLinearColor TraceHitColor; // 0x7c(0x10)
		float DrawTime; // 0x8c(0x04)
		bool ReturnValue; // 0x90(0x01)
	};

	struct Function_GPWeaponRuntime_GPProjectileReplicateComponent_ClientPublishTrajectoryItems_Param
	{
	public:

		struct TArray<struct FRepProjectileTrajectoryItem> TrajectoryItems; // 0x00(0x10)
	};

	struct Function_GPWeaponRuntime_GPWeaponAttributeSetEquip_OnRep_UnEquipTimeRate_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPWeaponRuntime_GPWeaponAttributeSetFireMode_OnRep_PullBoltTimeRate_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPWeaponRuntime_GPWeaponAttributeSetWeaponAmmo_SetWeaponCarriedAmmoCountWithCallBack_Param
	{
	public:

		float NewValue; // 0x00(0x04)
	};

	struct Function_GPWeaponRuntime_GPWeaponAttributeSetWeaponChangeClip_OnRep_WeaponChangeClipTimeRate_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPWeaponRuntime_GPWeaponAttributeSetWeaponDamage_OnRep_HeadDamageRate_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

	struct Function_GPWeaponRuntime_GPWeaponAttributeSetWeaponPerk_OnRep_Penetrate_Param
	{
	public:

		float OldValue; // 0x00(0x04)
	};

	struct Function_GPWeaponRuntime_GPWeaponBlueprintLibrary_GetWeaponManagerComponent_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		struct UGPWeaponManagerComponent* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPWeaponRuntime_GPWeaponBulletManager_CreateBulletAppearanceByFastTArray_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPWeaponComponentBase_WeaponDetaching_Param
	{
	public:

		bool bHangToBack; // 0x00(0x01)
		enum class EWeaponSwitchType SwitchType; // 0x01(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponDataComponentAnimInterface_IsZooming_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponDataComponentAppearanceInterface_ShouldSpawn3P_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponDataComponentFiringInterface_UpdateSprintAutoDelayFireOnceInfo_Param
	{
	public:

		bool InAutoFire; // 0x00(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponDataComponentOverHeatInterface_WeaponTickHeat_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPWeaponRuntime_GPWeaponDataComponentStateInterface_SetCurrentStateType_Param
	{
	public:

		enum class EGPWeaponStateType InStateType; // 0x00(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponDataComponentZoomInterface_IsZooming_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponDataInterface_IsSupportComboMeleeAttack_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponFireModeInterface_GetProjectileInitSpeed_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPWeaponRuntime_GPWeaponFireSocketInterface_MarkFireSocketInfoDirty_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPWeaponFuncComponentAppearanceInterface_UpdateWeaponMeshVisibility_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPWeaponGlobals_SetAssistedAimingEnable_Param
	{
	public:

		bool Enable; // 0x00(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponInterface_SetWeaponBipodDeploy_Param
	{
	public:

		bool IsCanWeaponBipodDeploy; // 0x00(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponManagerInterface_IsWeaponExist_Param
	{
	public:

		struct FWeaponIdentity InWeaponIdentity; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponPhysicsInterface_IsPhysicsAssetValidateForWeaponTrace_Param
	{
	public:

		struct UPhysicsAsset* PhysicsAsset; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponProxyInterface_ThirdPersonStateGuard_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPWeaponReplicateComponent_UpdateOwnerClientAttachments_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPWeaponStateBase_SetAttributeSetFloatValue_Param
	{
	public:

		struct FGameplayAttribute Attribute; // 0x00(0x38)
		float Value; // 0x38(0x04)
		bool ReturnValue; // 0x3c(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponTickInterface_WeaponTick_Param
	{
	public:

		float DeltaSecond; // 0x00(0x04)
	};

	struct Function_GPWeaponRuntime_GPWeaponTickActorInterface_WeaponTick_Param
	{
	public:

		float DeltaSecond; // 0x00(0x04)
	};

	struct Function_GPWeaponRuntime_WeaponStateTimeLineOwnerInterface_ServerVerifyStateFrameImp_Param
	{
	public:

		struct FStateFrame WSFrame; // 0x00(0x30)
		float InCheckCode; // 0x30(0x04)
		bool ReturnValue; // 0x34(0x01)
	};

	struct Function_GPWeaponRuntime_ReplicatedProjectileMovementComponent_OnRep_StopHitResult_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPProjectile_OnProjectileStop_Param
	{
	public:

		struct FHitResult ImpactResult; // 0x00(0x88)
	};

	struct Function_GPWeaponRuntime_GPWeaponFireModeBase_OnProjectileHit_Param
	{
	public:

		uint64_t BulletGuid; // 0x00(0x08)
		struct AGPWeaponBulletBase* Bullet; // 0x08(0x08)
		struct FHitResult HitResult; // 0x10(0x88)
	};

	struct Function_GPWeaponRuntime_GPWeaponFSMStateBase_OnPredictFinishTimeReach_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPWeaponProjectileMovementComponent_SetInitFlyingInfo_Param
	{
	public:

		struct FVector InFlyDir; // 0x00(0x0c)
		float InInitSpeed; // 0x0c(0x04)
		float InZeroDistance; // 0x10(0x04)
	};

	struct Function_GPWeaponRuntime_GPWeaponBulletBase_GetCharacterOwner_Param
	{
	public:

		struct AActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPWeaponRuntime_GPWeaponDataComponentAppearance_IsMeshHiddenPropagateToChildren_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponFuncComponentAppearance_UnSetForceKeepFullMipLevels_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPWeaponFireModeSpawnable_OnPreKeep_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPWeaponFireModeThrowable_ValidateFirePos_Param
	{
	public:

		struct FVector FireLocation; // 0x00(0x0c)
		struct FVector OutLocation; // 0x0c(0x0c)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponFSMStateCancelPreFire_OnCancelPreFire_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPWeaponFSMStateChangeClip_ReloadAmmoDelay_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPProjectileMovementComponent_MoveStep_Param
	{
	public:

		float StepTime; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponBulletProjectile_ReleaseToPool_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPWeaponBulletThrowableProjectile_TryStartLerpClientMesh3P_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPWeaponDataComponentCore_OnAttributeSetDirty_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPWeaponDataComponentFiring_ServerSetFireModeIndex_Param
	{
	public:

		char FireModeIndex; // 0x00(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponDataComponentProxy_UpdateDataZoom_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPWeaponDataComponentState_RPC_ClientNotifyStateFrameInValid_Param
	{
	public:

		int32_t ClientStateNo; // 0x00(0x04)
	};

	struct Function_GPWeaponRuntime_GPWeaponDataComponentZoom_ToggleZoom_Param
	{
	public:

		int8_t ForceZoom; // 0x00(0x01)
		bool IsQuickZoom; // 0x01(0x01)
		bool ReturnValue; // 0x02(0x01)
	};

	struct Function_GPWeaponRuntime_GPWeaponFSMStateMeleeFiring_RefreshMeleeComboAttack_Param
	{
	public:

	};

	struct Function_GPWeaponRuntime_GPWeaponDataComponentStateAbility_SwitchToWeaponStateAbilityInner_Param
	{
	public:

		struct UAbilitySystemComponent* ASC; // 0x00(0x08)
		enum class EGPWeaponStateType StateType; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
