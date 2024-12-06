
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GameplayAbilities.AbilitySystemGlobals
// Size: 0x268 (Inherited: 0x30)
class UAbilitySystemGlobals : public UObject {
public:

	struct FSoftClassPath AbilitySystemGlobalsClassName; // 0x30(0x18)
	char pad_48[0x28]; // 0x48(0x28)
	struct FGameplayTag ActivateFailIsDeadTag; // 0x70(0x08)
	struct FName ActivateFailIsDeadName; // 0x78(0x08)
	struct FGameplayTag ActivateFailCooldownTag; // 0x80(0x08)
	struct FName ActivateFailCooldownName; // 0x88(0x08)
	struct FGameplayTag ActivateFailCostTag; // 0x90(0x08)
	struct FName ActivateFailCostName; // 0x98(0x08)
	struct FGameplayTag ActivateFailTagsBlockedTag; // 0xa0(0x08)
	struct FName ActivateFailTagsBlockedName; // 0xa8(0x08)
	struct FGameplayTag ActivateFailTagsMissingTag; // 0xb0(0x08)
	struct FName ActivateFailTagsMissingName; // 0xb8(0x08)
	struct FGameplayTag ActivateFailNetworkingTag; // 0xc0(0x08)
	struct FName ActivateFailNetworkingName; // 0xc8(0x08)
	int32_t MinimalReplicationTagCountBits; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FNetSerializeScriptStructCache TargetDataStructCache; // 0xd8(0x10)
	bool bAllowGameplayModEvaluationChannels; // 0xe8(0x01)
	enum class EGameplayModEvaluationChannel DefaultGameplayModEvaluationChannel; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	struct FName GameplayModEvaluationChannelAliases[0xa]; // 0xec(0x50)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FSoftObjectPath GlobalCurveTableName; // 0x140(0x18)
	struct UCurveTable* GlobalCurveTable; // 0x158(0x08)
	struct FSoftObjectPath GlobalAttributeMetaDataTableName; // 0x160(0x18)
	struct UDataTable* GlobalAttributeMetaDataTable; // 0x178(0x08)
	struct FSoftObjectPath GlobalAttributeSetDefaultsTableName; // 0x180(0x18)
	struct TArray<struct FSoftObjectPath> GlobalAttributeSetDefaultsTableNames; // 0x198(0x10)
	struct TArray<struct UCurveTable*> GlobalAttributeDefaultsTables; // 0x1a8(0x10)
	struct FSoftObjectPath GlobalGameplayCueManagerClass; // 0x1b8(0x18)
	struct FSoftObjectPath GlobalGameplayCueManagerName; // 0x1d0(0x18)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x1e8(0x10)
	struct FSoftObjectPath GameplayTagResponseTableName; // 0x1f8(0x18)
	struct UGameplayTagReponseTable* GameplayTagResponseTable; // 0x210(0x08)
	bool PredictTargetGameplayEffects; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct UGameplayCueManager* GlobalGameplayCueManager; // 0x220(0x08)
	char pad_228[0x40]; // 0x228(0x40)

	void ToggleIgnoreAbilitySystemCosts(); // Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts // (Exec|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilitySystemComponent
// Size: 0x1340 (Inherited: 0x170)
class UAbilitySystemComponent : public UGameplayTasksComponent {
public:

	char pad_170[0x10]; // 0x170(0x10)
	struct TArray<struct FAttributeDefaults> DefaultStartingData; // 0x180(0x10)
	struct TArray<struct UAttributeSet*> SpawnedAttributes; // 0x190(0x10)
	struct FName AffectedAnimInstanceTag; // 0x1a0(0x08)
	char pad_1A8[0x1a0]; // 0x1a8(0x1a0)
	float OutgoingDuration; // 0x348(0x04)
	float IncomingDuration; // 0x34c(0x04)
	char pad_350[0x20]; // 0x350(0x20)
	struct TArray<struct FString> ClientDebugStrings; // 0x370(0x10)
	struct TArray<struct FString> ServerDebugStrings; // 0x380(0x10)
	char pad_390[0x60]; // 0x390(0x60)
	bool UserAbilityActivationInhibited; // 0x3f0(0x01)
	bool ReplicationProxyEnabled; // 0x3f1(0x01)
	bool bSuppressGrantAbility; // 0x3f2(0x01)
	bool bSuppressGameplayCues; // 0x3f3(0x01)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct TArray<struct AGameplayAbilityTargetActor*> SpawnedTargetActors; // 0x3f8(0x10)
	char pad_408[0x28]; // 0x408(0x28)
	struct AActor* OwnerActor; // 0x430(0x08)
	struct AActor* AvatarActor; // 0x438(0x08)
	char pad_440[0x10]; // 0x440(0x10)
	struct FGameplayAbilitySpecContainer ActivatableAbilities; // 0x450(0x120)
	char pad_570[0x30]; // 0x570(0x30)
	struct TArray<struct UGameplayAbility*> AllReplicatedInstancedAbilities; // 0x5a0(0x10)
	char pad_5B0[0x1d0]; // 0x5b0(0x1d0)
	struct FGameplayAbilityRepAnimMontage RepAnimMontageInfo; // 0x780(0x30)
	bool bCachedIsNetSimulated; // 0x7b0(0x01)
	bool bPendingMontageRep; // 0x7b1(0x01)
	char pad_7B2[0x6]; // 0x7b2(0x06)
	struct FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo; // 0x7b8(0x30)
	char pad_7E8[0xa0]; // 0x7e8(0xa0)
	struct FActiveGameplayEffectsContainer ActiveGameplayEffects; // 0x888(0x480)
	struct FActiveGameplayCueContainer ActiveGameplayCues; // 0xd08(0x128)
	struct FActiveGameplayCueContainer MinimalReplicationGameplayCues; // 0xe30(0x128)
	char pad_F58[0x128]; // 0xf58(0x128)
	struct TArray<char> BlockedAbilityBindings; // 0x1080(0x10)
	char pad_1090[0x128]; // 0x1090(0x128)
	struct FMinimalReplicationTagCountMap MinimalReplicationTags; // 0x11b8(0x60)
	char pad_1218[0x10]; // 0x1218(0x10)
	struct FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap; // 0x1228(0x118)

	bool TryActivateAbilityByClass(struct UClass* InAbilityToActivate, bool bAllowRemoteActivation); // Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayCueManager
// Size: 0x318 (Inherited: 0x38)
class UGameplayCueManager : public UDataAsset {
public:

	char pad_38[0x18]; // 0x38(0x18)
	struct FGameplayCueObjectLibrary RuntimeGameplayCueObjectLibrary; // 0x50(0x50)
	struct FGameplayCueObjectLibrary EditorGameplayCueObjectLibrary; // 0xa0(0x50)
	char pad_F0[0x1c8]; // 0xf0(0x1c8)
	struct TArray<struct UClass*> LoadedGameplayCueNotifyClasses; // 0x2b8(0x10)
	struct TArray<struct UClass*> GameplayCueClassesForPreallocation; // 0x2c8(0x10)
	struct TArray<struct FGameplayCuePendingExecute> PendingExecuteCues; // 0x2d8(0x10)
	int32_t GameplayCueSendContextCount; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct TArray<struct FPreallocationInfo> PreallocationInfoList_Internal; // 0x2f0(0x10)
	char pad_300[0x18]; // 0x300(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayEffect
// Size: 0x7c0 (Inherited: 0x30)
class UGameplayEffect : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	enum class EGameplayEffectDurationType DurationPolicy; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FGameplayEffectModifierMagnitude DurationMagnitude; // 0x40(0x1a8)
	struct FScalableFloat Period; // 0x1e8(0x20)
	bool bExecutePeriodicEffectOnApplication; // 0x208(0x01)
	enum class EGameplayEffectPeriodInhibitionRemovedPolicy PeriodicInhibitionPolicy; // 0x209(0x01)
	char pad_20A[0x6]; // 0x20a(0x06)
	struct TArray<struct FGameplayModifierInfo> Modifiers; // 0x210(0x10)
	struct TArray<struct FGameplayEffectExecutionDefinition> Executions; // 0x220(0x10)
	struct FScalableFloat ChanceToApplyToTarget; // 0x230(0x20)
	struct TArray<struct UClass*> ApplicationRequirements; // 0x250(0x10)
	struct TArray<struct UClass*> TargetEffectClasses; // 0x260(0x10)
	struct TArray<struct FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x270(0x10)
	struct TArray<struct UClass*> OverflowEffects; // 0x280(0x10)
	bool bDenyOverflowApplication; // 0x290(0x01)
	bool bClearStackOnOverflow; // 0x291(0x01)
	char pad_292[0x6]; // 0x292(0x06)
	struct TArray<struct UClass*> PrematureExpirationEffectClasses; // 0x298(0x10)
	struct TArray<struct UClass*> RoutineExpirationEffectClasses; // 0x2a8(0x10)
	bool bRequireModifierSuccessToTriggerCues; // 0x2b8(0x01)
	bool bSuppressStackingCues; // 0x2b9(0x01)
	char pad_2BA[0x6]; // 0x2ba(0x06)
	struct TArray<struct FGameplayEffectCue> GameplayCues; // 0x2c0(0x10)
	struct UGameplayEffectUIData* UIData; // 0x2d0(0x08)
	struct FInheritedTagContainer InheritableGameplayEffectTags; // 0x2d8(0x60)
	struct FInheritedTagContainer InheritableOwnedTagsContainer; // 0x338(0x60)
	struct FGameplayTagRequirements OngoingTagRequirements; // 0x398(0x40)
	struct FGameplayTagRequirements ApplicationTagRequirements; // 0x3d8(0x40)
	struct FGameplayTagRequirements RemovalTagRequirements; // 0x418(0x40)
	struct FInheritedTagContainer RemoveGameplayEffectsWithTags; // 0x458(0x60)
	struct FGameplayTagRequirements GrantedApplicationImmunityTags; // 0x4b8(0x40)
	struct FGameplayEffectQuery GrantedApplicationImmunityQuery; // 0x4f8(0x150)
	char pad_648[0x8]; // 0x648(0x08)
	struct FGameplayEffectQuery RemoveGameplayEffectQuery; // 0x650(0x150)
	char pad_7A0[0x1]; // 0x7a0(0x01)
	enum class EGameplayEffectStackingType StackingType; // 0x7a1(0x01)
	char pad_7A2[0x2]; // 0x7a2(0x02)
	int32_t StackLimitCount; // 0x7a4(0x04)
	enum class EGameplayEffectStackingDurationPolicy StackDurationRefreshPolicy; // 0x7a8(0x01)
	enum class EGameplayEffectStackingPeriodPolicy StackPeriodResetPolicy; // 0x7a9(0x01)
	enum class EGameplayEffectStackingExpirationPolicy StackExpirationPolicy; // 0x7aa(0x01)
	char pad_7AB[0x5]; // 0x7ab(0x05)
	struct TArray<struct FGameplayAbilitySpecDef> GrantedAbilities; // 0x7b0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	bool STATIC_TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& TargetData, int32_t Index); // Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilitySystemDebugHUD
// Size: 0x468 (Inherited: 0x468)
class AAbilitySystemDebugHUD : public AHUD {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilitySystemInterface
// Size: 0x30 (Inherited: 0x30)
class UAbilitySystemInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilitySystemReplicationProxyInterface
// Size: 0x30 (Inherited: 0x30)
class UAbilitySystemReplicationProxyInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilitySystemTestPawn
// Size: 0x420 (Inherited: 0x400)
class AAbilitySystemTestPawn : public ADefaultPawn {
public:

	char pad_400[0x18]; // 0x400(0x18)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x418(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayAbilityBlueprint
// Size: 0xa8 (Inherited: 0xa8)
class UGameplayAbilityBlueprint : public UBlueprint {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayAbilitySet
// Size: 0x48 (Inherited: 0x38)
class UGameplayAbilitySet : public UDataAsset {
public:

	struct TArray<struct FGameplayAbilityBindInfo> Abilities; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayCueInterface
// Size: 0x30 (Inherited: 0x30)
class UGameplayCueInterface : public UInterface {
public:


	void ForwardGameplayCueToParent(); // Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayCueNotify_Actor
// Size: 0x3e8 (Inherited: 0x378)
class AGameplayCueNotify_Actor : public AActor {
public:

	bool bAutoDestroyOnRemove; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	float AutoDestroyDelay; // 0x37c(0x04)
	bool WarnIfTimelineIsStillRunning; // 0x380(0x01)
	bool WarnIfLatentActionIsStillRunning; // 0x381(0x01)
	char pad_382[0x2]; // 0x382(0x02)
	struct FGameplayTag GameplayCueTag; // 0x384(0x08)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct FGameplayTagReferenceHelper ReferenceHelper; // 0x390(0x10)
	struct FName GameplayCueName; // 0x3a0(0x08)
	bool bAutoAttachToOwner; // 0x3a8(0x01)
	bool IsOverride; // 0x3a9(0x01)
	bool bUniqueInstancePerInstigator; // 0x3aa(0x01)
	bool bUniqueInstancePerSourceObject; // 0x3ab(0x01)
	bool bAllowMultipleOnActiveEvents; // 0x3ac(0x01)
	bool bAllowMultipleWhileActiveEvents; // 0x3ad(0x01)
	char pad_3AE[0x2]; // 0x3ae(0x02)
	int32_t NumPreallocatedInstances; // 0x3b0(0x04)
	char pad_3B4[0x34]; // 0x3b4(0x34)

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayCueSet
// Size: 0x98 (Inherited: 0x38)
class UGameplayCueSet : public UDataAsset {
public:

	struct TArray<struct FGameplayCueNotifyData> GameplayCueData; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayEffectCustomApplicationRequirement
// Size: 0x30 (Inherited: 0x30)
class UGameplayEffectCustomApplicationRequirement : public UObject {
public:


	bool CanApplyGameplayEffect(struct UGameplayEffect* GameplayEffect, struct FGameplayEffectSpec& Spec, struct UAbilitySystemComponent* ASC); // Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayEffectStackingExpiration
// Size: 0x30 (Inherited: 0x30)
class UGameplayEffectStackingExpiration : public UObject {
public:


	int32_t OnExpiration(struct FGameplayEffectSpec& Spec, int32_t StackToRemove); // Function GameplayAbilities.GameplayEffectStackingExpiration.OnExpiration // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayTagReponseTable
// Size: 0x1f0 (Inherited: 0x38)
class UGameplayTagReponseTable : public UDataAsset {
public:

	struct TArray<struct FGameplayTagResponseTableEntry> Entries; // 0x38(0x10)
	char pad_48[0x1a8]; // 0x48(0x1a8)

	void TagResponseEvent(struct FGameplayTag Tag, int32_t NewCount, struct UAbilitySystemComponent* ASC, int32_t Idx); // Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.TickableAttributeSetInterface
// Size: 0x30 (Inherited: 0x30)
class UTickableAttributeSetInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayAbility
// Size: 0x408 (Inherited: 0x30)
class UGameplayAbility : public UObject {
public:

	char pad_30[0x80]; // 0x30(0x80)
	struct FGameplayTagContainer AbilityTags; // 0xb0(0x20)
	bool bReplicateInputDirectly; // 0xd0(0x01)
	bool RemoteInstanceEnded; // 0xd1(0x01)
	char pad_D2[0x4]; // 0xd2(0x04)
	enum class EGameplayAbilityReplicationPolicy ReplicationPolicy; // 0xd6(0x01)
	enum class EGameplayAbilityInstancingPolicy InstancingPolicy; // 0xd7(0x01)
	bool bServerRespectsRemoteAbilityCancellation; // 0xd8(0x01)
	bool bRetriggerInstancedAbility; // 0xd9(0x01)
	char pad_DA[0x6]; // 0xda(0x06)
	struct FGameplayAbilityActivationInfo CurrentActivationInfo; // 0xe0(0x20)
	struct FGameplayEventData CurrentEventData; // 0x100(0xb0)
	enum class EGameplayAbilityNetExecutionPolicy NetExecutionPolicy; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct UClass* CostGameplayEffectClass; // 0x1b8(0x08)
	struct TArray<struct FAbilityTriggerData> AbilityTriggers; // 0x1c0(0x10)
	struct UClass* CooldownGameplayEffectClass; // 0x1d0(0x08)
	struct FGameplayTagQuery CancelAbilitiesMatchingTagQuery; // 0x1d8(0x48)
	struct FGameplayTagContainer CancelAbilitiesWithTag; // 0x220(0x20)
	struct FGameplayTagContainer BlockAbilitiesWithTag; // 0x240(0x20)
	struct FGameplayTagContainer ActivationOwnedTags; // 0x260(0x20)
	struct FGameplayTagContainer ActivationRequiredTags; // 0x280(0x20)
	struct FGameplayTagContainer ActivationBlockedTags; // 0x2a0(0x20)
	struct FGameplayTagContainer SourceRequiredTags; // 0x2c0(0x20)
	struct FGameplayTagContainer SourceBlockedTags; // 0x2e0(0x20)
	struct FGameplayTagContainer TargetRequiredTags; // 0x300(0x20)
	struct FGameplayTagContainer TargetBlockedTags; // 0x320(0x20)
	char pad_340[0x20]; // 0x340(0x20)
	struct TArray<struct UGameplayTask*> ActiveTasks; // 0x360(0x10)
	char pad_370[0x10]; // 0x370(0x10)
	struct UAnimMontage* CurrentMontage; // 0x380(0x08)
	char pad_388[0x60]; // 0x388(0x60)
	bool bIsActive; // 0x3e8(0x01)
	bool bIsCancelable; // 0x3e9(0x01)
	bool bIsBlockingOtherAbilities; // 0x3ea(0x01)
	char pad_3EB[0x15]; // 0x3eb(0x15)
	bool bMarkPendingKillOnAbilityEnd; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)

	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities); // Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AttributeSet
// Size: 0x38 (Inherited: 0x30)
class UAttributeSet : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask
// Size: 0x88 (Inherited: 0x70)
class UAbilityTask : public UGameplayTask {
public:

	struct UGameplayAbility* Ability; // 0x70(0x08)
	struct UAbilitySystemComponent* AbilitySystemComponent; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x488 (Inherited: 0x378)
class AGameplayAbilityTargetActor : public AActor {
public:

	bool ShouldProduceTargetDataOnServer; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FGameplayAbilityTargetingLocationInfo StartLocation; // 0x380(0x70)
	char pad_3F0[0x30]; // 0x3f0(0x30)
	struct APlayerController* MasterPC; // 0x420(0x08)
	struct UGameplayAbility* OwningAbility; // 0x428(0x08)
	bool bDestroyOnConfirmation; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct AActor* SourceActor; // 0x438(0x08)
	struct FWorldReticleParameters ReticleParams; // 0x440(0x0c)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UClass* ReticleClass; // 0x450(0x08)
	struct FGameplayTargetDataFilterHandle Filter; // 0x458(0x10)
	bool bDebug; // 0x468(0x01)
	char pad_469[0x17]; // 0x469(0x17)
	struct UAbilitySystemComponent* GenericDelegateBoundASC; // 0x480(0x08)

	void ConfirmTargeting(); // Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// Size: 0x398 (Inherited: 0x378)
class AGameplayAbilityWorldReticle : public AActor {
public:

	struct FWorldReticleParameters Parameters; // 0x378(0x0c)
	bool bFaceOwnerFlat; // 0x384(0x01)
	bool bSnapToTargetedActor; // 0x385(0x01)
	bool bIsTargetValid; // 0x386(0x01)
	bool bIsTargetAnActor; // 0x387(0x01)
	struct APlayerController* MasterPC; // 0x388(0x08)
	struct AActor* TargetingActor; // 0x390(0x08)

	void SetReticleMaterialParamVector(struct FName ParamName, struct FVector Value); // Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayCueNotify_Static
// Size: 0x58 (Inherited: 0x30)
class UGameplayCueNotify_Static : public UObject {
public:

	struct FGameplayTag GameplayCueTag; // 0x30(0x08)
	struct FGameplayTagReferenceHelper ReferenceHelper; // 0x38(0x10)
	struct FName GameplayCueName; // 0x48(0x08)
	bool IsOverride; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GameplayAbilities.GameplayCueNotify_Static.WhileActive // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayCueTranslator
// Size: 0x30 (Inherited: 0x30)
class UGameplayCueTranslator : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayEffectCalculation
// Size: 0x40 (Inherited: 0x30)
class UGameplayEffectCalculation : public UObject {
public:

	struct TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayEffectUIData
// Size: 0x30 (Inherited: 0x30)
class UGameplayEffectUIData : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayAbility_CharacterJump
// Size: 0x408 (Inherited: 0x408)
class UGameplayAbility_CharacterJump : public UGameplayAbility {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayAbility_Montage
// Size: 0x440 (Inherited: 0x408)
class UGameplayAbility_Montage : public UGameplayAbility {
public:

	struct UAnimMontage* MontageToPlay; // 0x408(0x08)
	float PlayRate; // 0x410(0x04)
	struct FName SectionName; // 0x414(0x08)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct TArray<struct UClass*> GameplayEffectClassesWhileAnimating; // 0x420(0x10)
	struct TArray<struct UGameplayEffect*> GameplayEffectsWhileAnimating; // 0x430(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilitySystemTestAttributeSet
// Size: 0x78 (Inherited: 0x38)
class UAbilitySystemTestAttributeSet : public UAttributeSet {
public:

	float MaxHealth; // 0x38(0x04)
	float Health; // 0x3c(0x04)
	float Mana; // 0x40(0x04)
	float MaxMana; // 0x44(0x04)
	float Damage; // 0x48(0x04)
	float SpellDamage; // 0x4c(0x04)
	float PhysicalDamage; // 0x50(0x04)
	float CritChance; // 0x54(0x04)
	float CritMultiplier; // 0x58(0x04)
	float ArmorDamageReduction; // 0x5c(0x04)
	float DodgeChance; // 0x60(0x04)
	float LifeSteal; // 0x64(0x04)
	float Strength; // 0x68(0x04)
	float StackingAttribute1; // 0x6c(0x04)
	float StackingAttribute2; // 0x70(0x04)
	float NoStackAttribute; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xc0 (Inherited: 0x88)
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask {
public:

	struct FName ForceName; // 0x88(0x08)
	enum class ERootMotionFinishVelocityMode FinishVelocityMode; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FVector FinishSetVelocity; // 0x94(0x0c)
	float FinishClampVelocity; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UCharacterMovementComponent* MovementComponent; // 0xa8(0x08)
	char pad_B0[0x10]; // 0xb0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// Size: 0xd0 (Inherited: 0x88)
class UAbilityTask_MoveToLocation : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnTargetLocationReached[0x10]; // 0x88(0x10)
	char pad_98[0x4]; // 0x98(0x04)
	struct FVector StartLocation; // 0x9c(0x0c)
	struct FVector TargetLocation; // 0xa8(0x0c)
	float DurationOfMovement; // 0xb4(0x04)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UCurveFloat* LerpCurve; // 0xc0(0x08)
	struct UCurveVector* LerpCurveVector; // 0xc8(0x08)

	struct UAbilityTask_MoveToLocation* STATIC_MoveToLocation(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, float Duration, struct UCurveFloat* OptionalInterpolationCurve, struct UCurveVector* OptionalVectorInterpolationCurve); // Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// Size: 0xa0 (Inherited: 0x88)
class UAbilityTask_NetworkSyncPoint : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnSync[0x10]; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	void STATIC_WaitNetSync(struct UGameplayAbility* OwningAbility, enum class EAbilityTaskNetSyncType SyncType); // Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// Size: 0x110 (Inherited: 0x88)
class UAbilityTask_PlayMontageAndWait : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnCompleted[0x10]; // 0x88(0x10)
	/*struct FMulticastInlineDelegate*/char OnBlendOut[0x10]; // 0x98(0x10)
	/*struct FMulticastInlineDelegate*/char OnInterrupted[0x10]; // 0xa8(0x10)
	/*struct FMulticastInlineDelegate*/char OnCancelled[0x10]; // 0xb8(0x10)
	char pad_C8[0x28]; // 0xc8(0x28)
	struct UAnimMontage* MontageToPlay; // 0xf0(0x08)
	float Rate; // 0xf8(0x04)
	struct FName StartSection; // 0xfc(0x08)
	float AnimRootMotionTranslationScale; // 0x104(0x04)
	bool bStopWhenAbilityEnds; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)

	void OnMontageInterrupted(); // Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_Repeat
// Size: 0xc0 (Inherited: 0x88)
class UAbilityTask_Repeat : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnPerformAction[0x10]; // 0x88(0x10)
	/*struct FMulticastInlineDelegate*/char OnFinished[0x10]; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	struct UAbilityTask_Repeat* STATIC_RepeatAction(struct UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount); // Function GameplayAbilities.AbilityTask_Repeat.RepeatAction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_SpawnActor
// Size: 0xd0 (Inherited: 0x88)
class UAbilityTask_SpawnActor : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char Success[0x10]; // 0x88(0x10)
	/*struct FMulticastInlineDelegate*/char DidNotSpawn[0x10]; // 0x98(0x10)
	char pad_A8[0x28]; // 0xa8(0x28)

	struct UAbilityTask_SpawnActor* STATIC_SpawnActor(struct UGameplayAbility* OwningAbility, struct FGameplayAbilityTargetDataHandle TargetData, struct UClass* Class); // Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// Size: 0xc0 (Inherited: 0x88)
class UAbilityTask_StartAbilityState : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnStateEnded[0x10]; // 0x88(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateInterrupted[0x10]; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	struct UAbilityTask_StartAbilityState* STATIC_StartAbilityState(struct UGameplayAbility* OwningAbility, struct FName StateName, bool bEndCurrentState); // Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// Size: 0xb0 (Inherited: 0x88)
class UAbilityTask_VisualizeTargeting : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char TimeElapsed[0x10]; // 0x88(0x10)
	char pad_98[0x18]; // 0x98(0x18)

	struct UAbilityTask_VisualizeTargeting* STATIC_VisualizeTargetingUsingActor(struct UGameplayAbility* OwningAbility, struct AGameplayAbilityTargetActor* TargetActor, struct FName TaskInstanceName, float Duration); // Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// Size: 0x140 (Inherited: 0x88)
class UAbilityTask_WaitAbilityActivate : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnActivate[0x10]; // 0x88(0x10)
	char pad_98[0xa8]; // 0x98(0xa8)

	struct UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivateWithTagRequirements(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// Size: 0x100 (Inherited: 0x88)
class UAbilityTask_WaitAbilityCommit : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnCommit[0x10]; // 0x88(0x10)
	char pad_98[0x68]; // 0x98(0x68)

	struct UAbilityTask_WaitAbilityCommit* STATIC_WaitForAbilityCommit_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTagQuery Query, bool TriggerOnce); // Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// Size: 0x100 (Inherited: 0x88)
class UAbilityTask_WaitAttributeChange : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnChange[0x10]; // 0x88(0x10)
	char pad_98[0x60]; // 0x98(0x60)
	struct UAbilitySystemComponent* ExternalOwner; // 0xf8(0x08)

	struct UAbilityTask_WaitAttributeChange* STATIC_WaitForAttributeChangeWithComparison(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute InAttribute, struct FGameplayTag InWithTag, struct FGameplayTag InWithoutTag, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool TriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Size: 0x148 (Inherited: 0x88)
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnChange[0x10]; // 0x88(0x10)
	char pad_98[0xa8]; // 0x98(0xa8)
	struct UAbilitySystemComponent* ExternalOwner; // 0x140(0x08)

	struct UAbilityTask_WaitAttributeChangeRatioThreshold* STATIC_WaitForAttributeChangeRatioThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute AttributeNumerator, struct FGameplayAttribute AttributeDenominator, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Size: 0xf8 (Inherited: 0x88)
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnChange[0x10]; // 0x88(0x10)
	char pad_98[0x58]; // 0x98(0x58)
	struct UAbilitySystemComponent* ExternalOwner; // 0xf0(0x08)

	struct UAbilityTask_WaitAttributeChangeThreshold* STATIC_WaitForAttributeChangeThreshold(struct UGameplayAbility* OwningAbility, struct FGameplayAttribute Attribute, enum class EWaitAttributeChangeComparison ComparisonType, float ComparisonValue, bool bTriggerOnce, struct AActor* OptionalExternalOwner); // Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitCancel
// Size: 0xa0 (Inherited: 0x88)
class UAbilityTask_WaitCancel : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnCancel[0x10]; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	struct UAbilityTask_WaitCancel* STATIC_WaitCancel(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// Size: 0xa8 (Inherited: 0x88)
class UAbilityTask_WaitConfirm : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnConfirm[0x10]; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitConfirm* STATIC_WaitConfirm(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// Size: 0xb0 (Inherited: 0x88)
class UAbilityTask_WaitConfirmCancel : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnConfirm[0x10]; // 0x88(0x10)
	/*struct FMulticastInlineDelegate*/char OnCancel[0x10]; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)

	struct UAbilityTask_WaitConfirmCancel* STATIC_WaitConfirmCancel(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitDelay
// Size: 0xa0 (Inherited: 0x88)
class UAbilityTask_WaitDelay : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnFinish[0x10]; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)

	void STATIC_WaitDelay(struct UGameplayAbility* OwningAbility, float Time); // Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Size: 0x1c0 (Inherited: 0x88)
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask {
public:

	char pad_88[0x128]; // 0x88(0x128)
	struct UAbilitySystemComponent* ExternalOwner; // 0x1b0(0x08)
	char pad_1B8[0x8]; // 0x1b8(0x08)

	void OnApplyGameplayEffectCallback(struct UAbilitySystemComponent* Target, struct FGameplayEffectSpec& SpecApplied, struct FActiveGameplayEffectHandle ActiveHandle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Size: 0x130 (Inherited: 0x88)
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char bLocked[0x10]; // 0x88(0x10)
	char pad_98[0x88]; // 0x98(0x88)
	struct UAbilitySystemComponent* ExternalOwner; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)

	struct UAbilityTask_WaitGameplayEffectBlockedImmunity* STATIC_WaitGameplayEffectBlockedByImmunity(struct UGameplayAbility* OwningAbility, struct FGameplayTagRequirements SourceTagRequirements, struct FGameplayTagRequirements TargetTagRequirements, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Size: 0xc8 (Inherited: 0x88)
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnRemoved[0x10]; // 0x88(0x10)
	/*struct FMulticastInlineDelegate*/char InvalidHandle[0x10]; // 0x98(0x10)
	char pad_A8[0x20]; // 0xa8(0x20)

	struct UAbilityTask_WaitGameplayEffectRemoved* STATIC_WaitForGameplayEffectRemoved(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Size: 0xc0 (Inherited: 0x88)
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnChange[0x10]; // 0x88(0x10)
	/*struct FMulticastInlineDelegate*/char InvalidHandle[0x10]; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)

	struct UAbilityTask_WaitGameplayEffectStackChange* STATIC_WaitForGameplayEffectStackChange(struct UGameplayAbility* OwningAbility, struct FActiveGameplayEffectHandle Handle); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEvent
// Size: 0xb8 (Inherited: 0x88)
class UAbilityTask_WaitGameplayEvent : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char EventReceived[0x10]; // 0x88(0x10)
	char pad_98[0x8]; // 0x98(0x08)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0xa0(0x08)
	char pad_A8[0x10]; // 0xa8(0x10)

	struct UAbilityTask_WaitGameplayEvent* STATIC_WaitGameplayEvent(struct UGameplayAbility* OwningAbility, struct FGameplayTag EventTag, struct AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// Size: 0xb0 (Inherited: 0x88)
class UAbilityTask_WaitGameplayTag : public UAbilityTask {
public:

	char pad_88[0x10]; // 0x88(0x10)
	struct UAbilitySystemComponent* OptionalExternalTarget; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	void GameplayTagCallback(struct FGameplayTag Tag, int32_t NewCount); // Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// Size: 0xa8 (Inherited: 0x88)
class UAbilityTask_WaitInputPress : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnPress[0x10]; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitInputPress* STATIC_WaitInputPress(struct UGameplayAbility* OwningAbility, bool bTestAlreadyPressed); // Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// Size: 0xa8 (Inherited: 0x88)
class UAbilityTask_WaitInputRelease : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnRelease[0x10]; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	struct UAbilityTask_WaitInputRelease* STATIC_WaitInputRelease(struct UGameplayAbility* OwningAbility, bool bTestAlreadyReleased); // Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// Size: 0xa8 (Inherited: 0x88)
class UAbilityTask_WaitMovementModeChange : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnChange[0x10]; // 0x88(0x10)
	char pad_98[0x10]; // 0x98(0x10)

	void OnMovementModeChange(struct ACHARACTER* CHARACTER, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x98 (Inherited: 0x88)
class UAbilityTask_WaitOverlap : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnOverlap[0x10]; // 0x88(0x10)

	struct UAbilityTask_WaitOverlap* STATIC_WaitForOverlap(struct UGameplayAbility* OwningAbility); // Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// Size: 0xc8 (Inherited: 0x88)
class UAbilityTask_WaitTargetData : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char ValidData[0x10]; // 0x88(0x10)
	/*struct FMulticastInlineDelegate*/char Cancelled[0x10]; // 0x98(0x10)
	struct UClass* TargetClass; // 0xa8(0x08)
	struct AGameplayAbilityTargetActor* TargetActor; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)

	struct UAbilityTask_WaitTargetData* STATIC_WaitTargetDataUsingActor(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, enum class EGameplayTargetingConfirmation ConfirmationType, struct AGameplayAbilityTargetActor* TargetActor); // Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// Size: 0xb0 (Inherited: 0x88)
class UAbilityTask_WaitVelocityChange : public UAbilityTask {
public:

	/*struct FMulticastInlineDelegate*/char OnVelocityChage[0x10]; // 0x88(0x10)
	struct UMovementComponent* CachedMovementComponent; // 0x98(0x08)
	char pad_A0[0x10]; // 0xa0(0x10)

	struct UAbilityTask_WaitVelocityChange* STATIC_CreateWaitVelocityChange(struct UGameplayAbility* OwningAbility, struct FVector Direction, float MinimumMagnitude); // Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// Size: 0x4a0 (Inherited: 0x488)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor {
public:

	float MaxRange; // 0x488(0x04)
	struct FCollisionProfileName TraceProfile; // 0x48c(0x08)
	bool bTraceAffectsAimPitch; // 0x494(0x01)
	char pad_495[0xb]; // 0x495(0x0b)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// Size: 0x490 (Inherited: 0x488)
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor {
public:

	float radius; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Size: 0x3b0 (Inherited: 0x398)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle {
public:

	struct UCapsuleComponent* CollisionComponent; // 0x398(0x08)
	struct TArray<struct UActorComponent*> VisualizationComponents; // 0x3a0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayCueNotify_HitImpact
// Size: 0x68 (Inherited: 0x58)
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static {
public:

	struct USoundBase* Sound; // 0x58(0x08)
	struct UParticleSystem* ParticleSystem; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayCueTranslator_Test
// Size: 0x30 (Inherited: 0x30)
class UGameplayCueTranslator_Test : public UGameplayCueTranslator {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayEffectExecutionCalculation
// Size: 0x48 (Inherited: 0x40)
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation {
public:

	bool bRequiresPassedInTags; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayModMagnitudeCalculation
// Size: 0x48 (Inherited: 0x40)
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation {
public:

	bool bAllowNonNetAuthorityDependencyRegistration; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	float CalculateBaseMagnitude(struct FGameplayEffectSpec& Spec); // Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// Size: 0x48 (Inherited: 0x30)
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData {
public:

	struct FText Description; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0xf0 (Inherited: 0xc0)
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base {
public:

	/*struct FMulticastInlineDelegate*/char OnFinish[0x10]; // 0xc0(0x10)
	struct FVector WorldDirection; // 0xd0(0x0c)
	float Strength; // 0xdc(0x04)
	float Duration; // 0xe0(0x04)
	bool bIsAdditive; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct UCurveFloat* StrengthOverTime; // 0xe8(0x08)

	struct UAbilityTask_ApplyRootMotionConstantForce* STATIC_ApplyRootMotionConstantForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, struct UCurveFloat* StrengthOverTime, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x118 (Inherited: 0xc0)
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base {
public:

	/*struct FMulticastInlineDelegate*/char OnFinish[0x10]; // 0xc0(0x10)
	/*struct FMulticastInlineDelegate*/char OnLanded[0x10]; // 0xd0(0x10)
	struct FRotator Rotation; // 0xe0(0x0c)
	float Distance; // 0xec(0x04)
	float Height; // 0xf0(0x04)
	float Duration; // 0xf4(0x04)
	float MinimumLandedTriggerTime; // 0xf8(0x04)
	bool bFinishOnLanded; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct UCurveVector* PathOffsetCurve; // 0x100(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)

	void OnLandedCallback(struct FHitResult& Hit); // Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x138 (Inherited: 0xc0)
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base {
public:

	/*struct FMulticastInlineDelegate*/char OnFinished[0x10]; // 0xc0(0x10)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct FVector StartLocation; // 0xd8(0x0c)
	struct FVector TargetLocation; // 0xe4(0x0c)
	struct AActor* TargetActor; // 0xf0(0x08)
	struct FVector TargetLocationOffset; // 0xf8(0x0c)
	enum class ERootMotionMoveToActorTargetOffsetType OffsetAlignment; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float Duration; // 0x108(0x04)
	bool bDisableDestinationReachedInterrupt; // 0x10c(0x01)
	bool bSetNewMovementMode; // 0x10d(0x01)
	enum class EMovementMode NewMovementMode; // 0x10e(0x01)
	bool bRestrictSpeedToExpected; // 0x10f(0x01)
	struct UCurveVector* PathOffsetCurve; // 0x110(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x118(0x08)
	struct UCurveFloat* TargetLerpSpeedHorizontalCurve; // 0x120(0x08)
	struct UCurveFloat* TargetLerpSpeedVerticalCurve; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)

	void OnTargetActorSwapped(struct AActor* OriginalTarget, struct AActor* NewTarget); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x110 (Inherited: 0xc0)
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base {
public:

	/*struct FMulticastInlineDelegate*/char OnTimedOut[0x10]; // 0xc0(0x10)
	/*struct FMulticastInlineDelegate*/char OnTimedOutAndDestinationReached[0x10]; // 0xd0(0x10)
	struct FVector StartLocation; // 0xe0(0x0c)
	struct FVector TargetLocation; // 0xec(0x0c)
	float Duration; // 0xf8(0x04)
	bool bSetNewMovementMode; // 0xfc(0x01)
	enum class EMovementMode NewMovementMode; // 0xfd(0x01)
	bool bRestrictSpeedToExpected; // 0xfe(0x01)
	char pad_FF[0x1]; // 0xff(0x01)
	struct UCurveVector* PathOffsetCurve; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)

	struct UAbilityTask_ApplyRootMotionMoveToForce* STATIC_ApplyRootMotionMoveToForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector TargetLocation, float Duration, bool bSetNewMovementMode, enum class EMovementMode MovementMode, bool bRestrictSpeedToExpected, struct UCurveVector* PathOffsetCurve, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x118 (Inherited: 0xc0)
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base {
public:

	/*struct FMulticastInlineDelegate*/char OnFinish[0x10]; // 0xc0(0x10)
	struct FVector Location; // 0xd0(0x0c)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct AActor* LocationActor; // 0xe0(0x08)
	float Strength; // 0xe8(0x04)
	float Duration; // 0xec(0x04)
	float radius; // 0xf0(0x04)
	bool bIsPush; // 0xf4(0x01)
	bool bIsAdditive; // 0xf5(0x01)
	bool bNoZForce; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct UCurveFloat* StrengthDistanceFalloff; // 0xf8(0x08)
	struct UCurveFloat* StrengthOverTime; // 0x100(0x08)
	bool bUseFixedWorldDirection; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	struct FRotator FixedWorldDirection; // 0x10c(0x0c)

	struct UAbilityTask_ApplyRootMotionRadialForce* STATIC_ApplyRootMotionRadialForce(struct UGameplayAbility* OwningAbility, struct FName TaskInstanceName, struct FVector Location, struct AActor* LocationActor, float Strength, float Duration, float radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, struct UCurveFloat* StrengthDistanceFalloff, struct UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, struct FRotator FixedWorldDirection, enum class ERootMotionFinishVelocityMode VelocityOnFinishMode, struct FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Size: 0x1e0 (Inherited: 0x1c0)
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied {
public:

	/*struct FMulticastInlineDelegate*/char OnApplied[0x10]; // 0x1c0(0x10)
	char pad_1D0[0x10]; // 0x1d0(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Self* STATIC_WaitGameplayEffectAppliedToSelf_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Size: 0x1e0 (Inherited: 0x1c0)
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied {
public:

	/*struct FMulticastInlineDelegate*/char OnApplied[0x10]; // 0x1c0(0x10)
	char pad_1D0[0x10]; // 0x1d0(0x10)

	struct UAbilityTask_WaitGameplayEffectApplied_Target* STATIC_WaitGameplayEffectAppliedToTarget_Query(struct UGameplayAbility* OwningAbility, struct FGameplayTargetDataFilterHandle SourceFilter, struct FGameplayTagQuery SourceTagQuery, struct FGameplayTagQuery TargetTagQuery, bool TriggerOnce, struct AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Size: 0xc0 (Inherited: 0xb0)
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag {
public:

	/*struct FMulticastInlineDelegate*/char Added[0x10]; // 0xb0(0x10)

	struct UAbilityTask_WaitGameplayTagAdded* STATIC_WaitGameplayTagAdd(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Size: 0xc0 (Inherited: 0xb0)
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag {
public:

	/*struct FMulticastInlineDelegate*/char Removed[0x10]; // 0xb0(0x10)

	struct UAbilityTask_WaitGameplayTagRemoved* STATIC_WaitGameplayTagRemove(struct UGameplayAbility* OwningAbility, struct FGameplayTag Tag, struct AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Size: 0x4c0 (Inherited: 0x4a0)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace {
public:

	float CollisionRadius; // 0x4a0(0x04)
	float CollisionHeight; // 0x4a4(0x04)
	char pad_4A8[0x18]; // 0x4a8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Size: 0x4a0 (Inherited: 0x4a0)
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Size: 0x4e0 (Inherited: 0x4c0)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace {
public:

	struct UClass* PlacedActorClass; // 0x4c0(0x08)
	struct UMaterialInterface* PlacedActorMaterial; // 0x4c8(0x08)
	char pad_4D0[0x10]; // 0x4d0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
