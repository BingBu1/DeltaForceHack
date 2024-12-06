
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPAbility.AttachedAbilities
// Size: 0x30 (Inherited: 0x30)
class UAttachedAbilities : public UInterface {
public:


	struct TArray<struct UClass*> Z_GetAbilitySet(); // Function GPAbility.AttachedAbilities.Z_GetAbilitySet // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.AttachedAttributes
// Size: 0x30 (Inherited: 0x30)
class UAttachedAttributes : public UInterface {
public:


	struct TArray<struct UClass*> Z_GetAttributeSet(); // Function GPAbility.AttachedAttributes.Z_GetAttributeSet // (Native|Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPAbilitySystemGlobals
// Size: 0x298 (Inherited: 0x268)
class UGPAbilitySystemGlobals : public UAbilitySystemGlobals {
public:

	struct TArray<struct UClass*> BPAttributeSetsHolder; // 0x268(0x10)
	struct TArray<struct UClass*> BPAttributeSets; // 0x278(0x10)
	char pad_288[0x10]; // 0x288(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPASBluePrintLibrary
// Size: 0x30 (Inherited: 0x30)
class UGPASBluePrintLibrary : public UBlueprintFunctionLibrary {
public:


	bool STATIC_EffectContextHasActors(struct FGameplayEffectContextHandle EffectContext); // Function GPAbility.GPASBluePrintLibrary.EffectContextHasActors // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPAttributeIniter
// Size: 0x38 (Inherited: 0x30)
class UGPAttributeIniter : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPASC
// Size: 0x19b0 (Inherited: 0x1340)
class UGPASC : public UAbilitySystemComponent {
public:

	char pad_1340[0x108]; // 0x1340(0x108)
	int32_t DefaultAbiityLevel; // 0x1448(0x04)
	struct FGameplayTag TypeOfASC; // 0x144c(0x08)
	char pad_1454[0x4]; // 0x1454(0x04)
	struct TArray<struct FName> AttributeGroups; // 0x1458(0x10)
	struct TArray<struct UClass*> StaticAttributes; // 0x1468(0x10)
	/*struct TSet<struct UClass*>*/char AttachedAttributes[0x50]; // 0x1478(0x50)
	struct TArray<struct UClass*> PassiveEffects; // 0x14c8(0x10)
	struct TArray<struct UClass*> StaticAbilities; // 0x14d8(0x10)
	struct TMap<struct UClass*, struct UAttributeSet*> LookupTable; // 0x14e8(0x50)
	struct TMap<struct FString, struct UAttributeSet*> EquipAttrSetLookupTable; // 0x1538(0x50)
	struct FGameplayTagContainer StaticGameplayTags; // 0x1588(0x20)
	char pad_15A8[0x8]; // 0x15a8(0x08)
	struct FAbilityActivationInfos ActivedAbilities; // 0x15b0(0x130)
	char pad_16E0[0x140]; // 0x16e0(0x140)
	struct FGPAbilityRepHandles HandleInfos; // 0x1820(0xa0)
	char pad_18C0[0x60]; // 0x18c0(0x60)
	struct TMap<struct UClass*, struct AActor*> CacheActors; // 0x1920(0x50)
	/*struct TSoftObjectPtr<UCurveTable>*/char OverrideAtrributeConfig[0x28]; // 0x1970(0x28)
	char pad_1998[0x18]; // 0x1998(0x18)

	bool TryActivateAbilityByClassWithOutput(struct UClass* InAbilityToActivate, struct TArray<struct UGPAbilityBase*>& activedAbility, bool bAllowRemoteActivation); // Function GPAbility.GPASC.TryActivateAbilityByClassWithOutput // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPBPLib
// Size: 0x30 (Inherited: 0x30)
class UGPBPLib : public UBlueprintFunctionLibrary {
public:


	bool STATIC_IsInEditor(); // Function GPAbility.GPBPLib.IsInEditor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPClassReigstry
// Size: 0x30 (Inherited: 0x30)
class UGPClassReigstry : public UBlueprintFunctionLibrary {
public:


	void STATIC_RegisterAttribute(struct UClass* ActorClass, struct UClass* AttributeClass, bool bPersistent); // Function GPAbility.GPClassReigstry.RegisterAttribute // (Final|Native|Static|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPAbilitySystem
// Size: 0x418 (Inherited: 0x378)
class AGPAbilitySystem : public ALevelSubsystem {
public:

	struct TMap<struct UClass*, struct FGPAbilitySystemAbilityReg> AbilityConfigs; // 0x378(0x50)
	struct TMap<struct UClass*, struct FGPAbilitySystemAttributeReg> AttributeConfigs; // 0x3c8(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPCueManager
// Size: 0x330 (Inherited: 0x318)
class UGPCueManager : public UGameplayCueManager {
public:

	struct TArray<struct FSoftObjectPath> SoftPaths; // 0x318(0x10)
	struct TWeakObjectPtr<struct UWorld> CurWorld; // 0x328(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPCueManagerWatcher
// Size: 0x380 (Inherited: 0x378)
class AGPCueManagerWatcher : public AActor {
public:

	struct UGPCueManager* Instance; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPEffect
// Size: 0x7c0 (Inherited: 0x7c0)
class UGPEffect : public UGameplayEffect {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPOriginals
// Size: 0xf8 (Inherited: 0x30)
class UGPOriginals : public UObject {
public:

	struct FSoftClassPath GPOriginalsClassName; // 0x30(0x18)
	struct UGPOriginals* ConfigGPOriginals; // 0x48(0x08)
	struct FGameplayTag Tag_Demo; // 0x50(0x08)
	struct FGameplayTag Tag_Shield; // 0x58(0x08)
	struct FGameplayTag Tag_Health; // 0x60(0x08)
	struct FGameplayTag Tag_WeakenState; // 0x68(0x08)
	struct FGameplayTag Tag_RealDamage; // 0x70(0x08)
	struct FGameplayTag AttackType_Corrosive; // 0x78(0x08)
	struct FGameplayTag AttackType_Explosive; // 0x80(0x08)
	struct FGameplayTag AttackType_Incendiary; // 0x88(0x08)
	struct FGameplayTag AttackType_Shock; // 0x90(0x08)
	struct FGameplayTag DefenceType_EnergyShield; // 0x98(0x08)
	struct FGameplayTag State_Ice; // 0xa0(0x08)
	struct FGameplayTag Tag_IgnoreDamage; // 0xa8(0x08)
	struct UClass* GE_Demo; // 0xb0(0x08)
	struct UClass* CompatibleDamageEffect; // 0xb8(0x08)
	struct UClass* SuicideDamageEffect; // 0xc0(0x08)
	struct UClass* EnergyShieldEffect; // 0xc8(0x08)
	struct TArray<struct UClass*> StaticCues; // 0xd0(0x10)
	struct TArray<struct UClass*> InstancedCues; // 0xe0(0x10)
	struct FGameplayTag SkillCooldownSetByCallerTag; // 0xf0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPTypeToTableDeclaration
// Size: 0x88 (Inherited: 0x38)
class UGPTypeToTableDeclaration : public UGameInstanceSubsystem {
public:

	char pad_38[0x50]; // 0x38(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPTypeToTableConfiguration
// Size: 0x90 (Inherited: 0x30)
class UGPTypeToTableConfiguration : public UObject {
public:

	struct TArray<struct FGPTypeToTable> TypeToTable; // 0x30(0x10)
	struct TMap<struct UClass*, struct UDataTable*> Cache; // 0x40(0x50)

	struct UDataTable* FindTableForType(struct UClass* Class); // Function GPAbility.GPTypeToTableConfiguration.FindTableForType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPAbilityInner
// Size: 0x420 (Inherited: 0x408)
class UGPAbilityInner : public UGameplayAbility {
public:

	bool bReplicates; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct TArray<struct UClass*> Deps; // 0x410(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPAttributeHandler
// Size: 0x108 (Inherited: 0x100)
class UGPAttributeHandler : public UActorComponent {
public:

	struct UGPASC* OwnerASC; // 0x100(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPAttributeSetBase
// Size: 0x50 (Inherited: 0x38)
class UGPAttributeSetBase : public UAttributeSet {
public:

	char pad_38[0x18]; // 0x38(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPAbilityBase
// Size: 0x498 (Inherited: 0x420)
class UGPAbilityBase : public UGPAbilityInner {
public:

	struct TArray<struct UClass*> GrantedAbilities; // 0x420(0x10)
	bool ActivateAbilityOnGranted; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct TArray<struct FGameplayAbilitySpecHandle> GrantedAbilitiesHandles; // 0x438(0x10)
	char pad_448[0x50]; // 0x448(0x50)

	bool OwnerHasGameplayTag(struct FGameplayTag Tag); // Function GPAbility.GPAbilityBase.OwnerHasGameplayTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPAttributesComponent
// Size: 0x118 (Inherited: 0x108)
class UGPAttributesComponent : public UGPAttributeHandler {
public:

	struct TArray<struct UClass*> StaticAttributes; // 0x108(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPAbility.GPAttributeSetAbilityLevel
// Size: 0x68 (Inherited: 0x50)
class UGPAttributeSetAbilityLevel : public UGPAttributeSetBase {
public:

	struct FGameplayAttributeData AbilityLevel; // 0x50(0x10)
	float MaxAbilityLevel; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)

	void OnRep_AbilityLevel(struct FGameplayAttributeData& OldData); // Function GPAbility.GPAttributeSetAbilityLevel.OnRep_AbilityLevel // (Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
