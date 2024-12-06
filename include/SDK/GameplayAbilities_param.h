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
	struct Function_GameplayAbilities_AbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Param
	{
	public:

	};

	struct Function_GameplayAbilities_AbilitySystemComponent_TryActivateAbilityByClass_Param
	{
	public:

		struct UClass* InAbilityToActivate; // 0x00(0x08)
		bool bAllowRemoteActivation; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GameplayAbilities_AbilitySystemBlueprintLibrary_TargetDataHasOrigin_Param
	{
	public:

		struct FGameplayAbilityTargetDataHandle TargetData; // 0x00(0x28)
		int32_t Index; // 0x28(0x04)
		bool ReturnValue; // 0x2c(0x01)
	};

	struct Function_GameplayAbilities_GameplayCueInterface_ForwardGameplayCueToParent_Param
	{
	public:

	};

	struct Function_GameplayAbilities_GameplayCueNotify_Actor_WhileActive_Param
	{
	public:

		struct AActor* MyTarget; // 0x00(0x08)
		struct FGameplayCueParameters Parameters; // 0x08(0xb8)
		bool ReturnValue; // 0xc0(0x01)
	};

	struct Function_GameplayAbilities_GameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Param
	{
	public:

		struct UGameplayEffect* GameplayEffect; // 0x00(0x08)
		struct FGameplayEffectSpec Spec; // 0x08(0x298)
		struct UAbilitySystemComponent* ASC; // 0x2a0(0x08)
		bool ReturnValue; // 0x2a8(0x01)
	};

	struct Function_GameplayAbilities_GameplayEffectStackingExpiration_OnExpiration_Param
	{
	public:

		struct FGameplayEffectSpec Spec; // 0x00(0x298)
		int32_t StackToRemove; // 0x298(0x04)
		int32_t ReturnValue; // 0x29c(0x04)
	};

	struct Function_GameplayAbilities_GameplayTagReponseTable_TagResponseEvent_Param
	{
	public:

		struct FGameplayTag Tag; // 0x00(0x08)
		int32_t NewCount; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct UAbilitySystemComponent* ASC; // 0x10(0x08)
		int32_t Idx; // 0x18(0x04)
	};

	struct Function_GameplayAbilities_GameplayAbility_SetShouldBlockOtherAbilities_Param
	{
	public:

		bool bShouldBlockAbilities; // 0x00(0x01)
	};

	struct Function_GameplayAbilities_GameplayAbilityTargetActor_ConfirmTargeting_Param
	{
	public:

	};

	struct Function_GameplayAbilities_GameplayAbilityWorldReticle_SetReticleMaterialParamVector_Param
	{
	public:

		struct FName ParamName; // 0x00(0x08)
		struct FVector Value; // 0x08(0x0c)
	};

	struct Function_GameplayAbilities_GameplayCueNotify_Static_WhileActive_Param
	{
	public:

		struct AActor* MyTarget; // 0x00(0x08)
		struct FGameplayCueParameters Parameters; // 0x08(0xb8)
		bool ReturnValue; // 0xc0(0x01)
	};

	struct Function_GameplayAbilities_AbilityTask_MoveToLocation_MoveToLocation_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FName TaskInstanceName; // 0x08(0x08)
		struct FVector Location; // 0x10(0x0c)
		float Duration; // 0x1c(0x04)
		struct UCurveFloat* OptionalInterpolationCurve; // 0x20(0x08)
		struct UCurveVector* OptionalVectorInterpolationCurve; // 0x28(0x08)
		struct UAbilityTask_MoveToLocation* ReturnValue; // 0x30(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_NetworkSyncPoint_WaitNetSync_Param
	{
	public:

	};

	struct Function_GameplayAbilities_AbilityTask_PlayMontageAndWait_OnMontageInterrupted_Param
	{
	public:

	};

	struct Function_GameplayAbilities_AbilityTask_Repeat_RepeatAction_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		float TimeBetweenActions; // 0x08(0x04)
		int32_t TotalActionCount; // 0x0c(0x04)
		struct UAbilityTask_Repeat* ReturnValue; // 0x10(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_SpawnActor_SpawnActor_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FGameplayAbilityTargetDataHandle TargetData; // 0x08(0x28)
		struct UClass* Class; // 0x30(0x08)
		struct UAbilityTask_SpawnActor* ReturnValue; // 0x38(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_StartAbilityState_StartAbilityState_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FName StateName; // 0x08(0x08)
		bool bEndCurrentState; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UAbilityTask_StartAbilityState* ReturnValue; // 0x18(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct AGameplayAbilityTargetActor* TargetActor; // 0x08(0x08)
		struct FName TaskInstanceName; // 0x10(0x08)
		float Duration; // 0x18(0x04)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct UAbilityTask_VisualizeTargeting* ReturnValue; // 0x20(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FGameplayTagRequirements TagRequirements; // 0x08(0x40)
		bool IncludeTriggeredAbilities; // 0x48(0x01)
		bool TriggerOnce; // 0x49(0x01)
		char pad_4A[0x6]; // 0x4a(0x06)
		struct UAbilityTask_WaitAbilityActivate* ReturnValue; // 0x50(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FGameplayTagQuery Query; // 0x08(0x48)
		bool TriggerOnce; // 0x50(0x01)
		char pad_51[0x7]; // 0x51(0x07)
		struct UAbilityTask_WaitAbilityCommit* ReturnValue; // 0x58(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FGameplayAttribute InAttribute; // 0x08(0x38)
		struct FGameplayTag InWithTag; // 0x40(0x08)
		struct FGameplayTag InWithoutTag; // 0x48(0x08)
		enum class EWaitAttributeChangeComparison InComparisonType; // 0x50(0x01)
		char pad_51[0x3]; // 0x51(0x03)
		float InComparisonValue; // 0x54(0x04)
		bool TriggerOnce; // 0x58(0x01)
		char pad_59[0x7]; // 0x59(0x07)
		struct AActor* OptionalExternalOwner; // 0x60(0x08)
		struct UAbilityTask_WaitAttributeChange* ReturnValue; // 0x68(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FGameplayAttribute AttributeNumerator; // 0x08(0x38)
		struct FGameplayAttribute AttributeDenominator; // 0x40(0x38)
		enum class EWaitAttributeChangeComparison ComparisonType; // 0x78(0x01)
		char pad_79[0x3]; // 0x79(0x03)
		float ComparisonValue; // 0x7c(0x04)
		bool bTriggerOnce; // 0x80(0x01)
		char pad_81[0x7]; // 0x81(0x07)
		struct AActor* OptionalExternalOwner; // 0x88(0x08)
		struct UAbilityTask_WaitAttributeChangeRatioThreshold* ReturnValue; // 0x90(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FGameplayAttribute Attribute; // 0x08(0x38)
		enum class EWaitAttributeChangeComparison ComparisonType; // 0x40(0x01)
		char pad_41[0x3]; // 0x41(0x03)
		float ComparisonValue; // 0x44(0x04)
		bool bTriggerOnce; // 0x48(0x01)
		char pad_49[0x7]; // 0x49(0x07)
		struct AActor* OptionalExternalOwner; // 0x50(0x08)
		struct UAbilityTask_WaitAttributeChangeThreshold* ReturnValue; // 0x58(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitCancel_WaitCancel_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct UAbilityTask_WaitCancel* ReturnValue; // 0x08(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitConfirm_WaitConfirm_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct UAbilityTask_WaitConfirm* ReturnValue; // 0x08(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitConfirmCancel_WaitConfirmCancel_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct UAbilityTask_WaitConfirmCancel* ReturnValue; // 0x08(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitDelay_WaitDelay_Param
	{
	public:

	};

	struct Function_GameplayAbilities_AbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Param
	{
	public:

		struct UAbilitySystemComponent* Target; // 0x00(0x08)
		struct FGameplayEffectSpec SpecApplied; // 0x08(0x298)
		struct FActiveGameplayEffectHandle ActiveHandle; // 0x2a0(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FGameplayTagRequirements SourceTagRequirements; // 0x08(0x40)
		struct FGameplayTagRequirements TargetTagRequirements; // 0x48(0x40)
		struct AActor* OptionalExternalTarget; // 0x88(0x08)
		bool OnlyTriggerOnce; // 0x90(0x01)
		char pad_91[0x7]; // 0x91(0x07)
		struct UAbilityTask_WaitGameplayEffectBlockedImmunity* ReturnValue; // 0x98(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FActiveGameplayEffectHandle Handle; // 0x08(0x08)
		struct UAbilityTask_WaitGameplayEffectRemoved* ReturnValue; // 0x10(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FActiveGameplayEffectHandle Handle; // 0x08(0x08)
		struct UAbilityTask_WaitGameplayEffectStackChange* ReturnValue; // 0x10(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitGameplayEvent_WaitGameplayEvent_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FGameplayTag EventTag; // 0x08(0x08)
		struct AActor* OptionalExternalTarget; // 0x10(0x08)
		bool OnlyTriggerOnce; // 0x18(0x01)
		bool OnlyMatchExact; // 0x19(0x01)
		char pad_1A[0x6]; // 0x1a(0x06)
		struct UAbilityTask_WaitGameplayEvent* ReturnValue; // 0x20(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitGameplayTag_GameplayTagCallback_Param
	{
	public:

		struct FGameplayTag Tag; // 0x00(0x08)
		int32_t NewCount; // 0x08(0x04)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitInputPress_WaitInputPress_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		bool bTestAlreadyPressed; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UAbilityTask_WaitInputPress* ReturnValue; // 0x10(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitInputRelease_WaitInputRelease_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		bool bTestAlreadyReleased; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UAbilityTask_WaitInputRelease* ReturnValue; // 0x10(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitMovementModeChange_OnMovementModeChange_Param
	{
	public:

		struct ACHARACTER* CHARACTER; // 0x00(0x08)
		enum class EMovementMode PrevMovementMode; // 0x08(0x01)
		char PreviousCustomMode; // 0x09(0x01)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitOverlap_WaitForOverlap_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct UAbilityTask_WaitOverlap* ReturnValue; // 0x08(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitTargetData_WaitTargetDataUsingActor_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FName TaskInstanceName; // 0x08(0x08)
		enum class EGameplayTargetingConfirmation ConfirmationType; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct AGameplayAbilityTargetActor* TargetActor; // 0x18(0x08)
		struct UAbilityTask_WaitTargetData* ReturnValue; // 0x20(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FVector Direction; // 0x08(0x0c)
		float MinimumMagnitude; // 0x14(0x04)
		struct UAbilityTask_WaitVelocityChange* ReturnValue; // 0x18(0x08)
	};

	struct Function_GameplayAbilities_GameplayEffectExecutionCalculation_Execute_Param
	{
	public:

		struct FGameplayEffectCustomExecutionParameters ExecutionParams; // 0x00(0xf8)
		struct FGameplayEffectCustomExecutionOutput OutExecutionOutput; // 0xf8(0x18)
	};

	struct Function_GameplayAbilities_GameplayModMagnitudeCalculation_CalculateBaseMagnitude_Param
	{
	public:

		struct FGameplayEffectSpec Spec; // 0x00(0x298)
		float ReturnValue; // 0x298(0x04)
	};

	struct Function_GameplayAbilities_AbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FName TaskInstanceName; // 0x08(0x08)
		struct FVector WorldDirection; // 0x10(0x0c)
		float Strength; // 0x1c(0x04)
		float Duration; // 0x20(0x04)
		bool bIsAdditive; // 0x24(0x01)
		char pad_25[0x3]; // 0x25(0x03)
		struct UCurveFloat* StrengthOverTime; // 0x28(0x08)
		enum class ERootMotionFinishVelocityMode VelocityOnFinishMode; // 0x30(0x01)
		char pad_31[0x3]; // 0x31(0x03)
		struct FVector SetVelocityOnFinish; // 0x34(0x0c)
		float ClampVelocityOnFinish; // 0x40(0x04)
		char pad_44[0x4]; // 0x44(0x04)
		struct UAbilityTask_ApplyRootMotionConstantForce* ReturnValue; // 0x48(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Param
	{
	public:

		struct FHitResult Hit; // 0x00(0x88)
	};

	struct Function_GameplayAbilities_AbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Param
	{
	public:

		struct AActor* OriginalTarget; // 0x00(0x08)
		struct AActor* NewTarget; // 0x08(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FName TaskInstanceName; // 0x08(0x08)
		struct FVector TargetLocation; // 0x10(0x0c)
		float Duration; // 0x1c(0x04)
		bool bSetNewMovementMode; // 0x20(0x01)
		enum class EMovementMode MovementMode; // 0x21(0x01)
		bool bRestrictSpeedToExpected; // 0x22(0x01)
		char pad_23[0x5]; // 0x23(0x05)
		struct UCurveVector* PathOffsetCurve; // 0x28(0x08)
		enum class ERootMotionFinishVelocityMode VelocityOnFinishMode; // 0x30(0x01)
		char pad_31[0x3]; // 0x31(0x03)
		struct FVector SetVelocityOnFinish; // 0x34(0x0c)
		float ClampVelocityOnFinish; // 0x40(0x04)
		char pad_44[0x4]; // 0x44(0x04)
		struct UAbilityTask_ApplyRootMotionMoveToForce* ReturnValue; // 0x48(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FName TaskInstanceName; // 0x08(0x08)
		struct FVector Location; // 0x10(0x0c)
		char pad_1C[0x4]; // 0x1c(0x04)
		struct AActor* LocationActor; // 0x20(0x08)
		float Strength; // 0x28(0x04)
		float Duration; // 0x2c(0x04)
		float radius; // 0x30(0x04)
		bool bIsPush; // 0x34(0x01)
		bool bIsAdditive; // 0x35(0x01)
		bool bNoZForce; // 0x36(0x01)
		char pad_37[0x1]; // 0x37(0x01)
		struct UCurveFloat* StrengthDistanceFalloff; // 0x38(0x08)
		struct UCurveFloat* StrengthOverTime; // 0x40(0x08)
		bool bUseFixedWorldDirection; // 0x48(0x01)
		char pad_49[0x3]; // 0x49(0x03)
		struct FRotator FixedWorldDirection; // 0x4c(0x0c)
		enum class ERootMotionFinishVelocityMode VelocityOnFinishMode; // 0x58(0x01)
		char pad_59[0x3]; // 0x59(0x03)
		struct FVector SetVelocityOnFinish; // 0x5c(0x0c)
		float ClampVelocityOnFinish; // 0x68(0x04)
		char pad_6C[0x4]; // 0x6c(0x04)
		struct UAbilityTask_ApplyRootMotionRadialForce* ReturnValue; // 0x70(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FGameplayTargetDataFilterHandle SourceFilter; // 0x08(0x10)
		struct FGameplayTagQuery SourceTagQuery; // 0x18(0x48)
		struct FGameplayTagQuery TargetTagQuery; // 0x60(0x48)
		bool TriggerOnce; // 0xa8(0x01)
		char pad_A9[0x7]; // 0xa9(0x07)
		struct AActor* OptionalExternalOwner; // 0xb0(0x08)
		bool ListenForPeriodicEffect; // 0xb8(0x01)
		char pad_B9[0x7]; // 0xb9(0x07)
		struct UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue; // 0xc0(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FGameplayTargetDataFilterHandle SourceFilter; // 0x08(0x10)
		struct FGameplayTagQuery SourceTagQuery; // 0x18(0x48)
		struct FGameplayTagQuery TargetTagQuery; // 0x60(0x48)
		bool TriggerOnce; // 0xa8(0x01)
		char pad_A9[0x7]; // 0xa9(0x07)
		struct AActor* OptionalExternalOwner; // 0xb0(0x08)
		bool ListenForPeriodicEffect; // 0xb8(0x01)
		char pad_B9[0x7]; // 0xb9(0x07)
		struct UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue; // 0xc0(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FGameplayTag Tag; // 0x08(0x08)
		struct AActor* InOptionalExternalTarget; // 0x10(0x08)
		bool OnlyTriggerOnce; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct UAbilityTask_WaitGameplayTagAdded* ReturnValue; // 0x20(0x08)
	};

	struct Function_GameplayAbilities_AbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Param
	{
	public:

		struct UGameplayAbility* OwningAbility; // 0x00(0x08)
		struct FGameplayTag Tag; // 0x08(0x08)
		struct AActor* InOptionalExternalTarget; // 0x10(0x08)
		bool OnlyTriggerOnce; // 0x18(0x01)
		char pad_19[0x7]; // 0x19(0x07)
		struct UAbilityTask_WaitGameplayTagRemoved* ReturnValue; // 0x20(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
