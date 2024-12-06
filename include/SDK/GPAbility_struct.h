
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPAbility.EGPAbilityGivenPolicy
enum class EGPAbilityGivenPolicy : int {
	GiveNew = 0,
	GiveOnce = 1,
	FindOrGiveNew = 2,
	FindOrGiveOnce = 3,
	FindExisted = 4,
	OnceFlag = 5,
	FindFlag = 6,
	EGPAbilityGivenPolicy_MAX = 7
};

// Enum GPAbility.EAttributeSetTickType
enum class EAttributeSetTickType : int {
	None = 0,
	ServerSide = 1,
	ClientSide = 2,
	BothSide = 3,
	Max = 4
};

// Enum GPAbility.EGPValidFlag
enum class EGPValidFlag : int {
	Valid = 0,
	Invalid = 1,
	EGPValidFlag_MAX = 2
};

// Enum GPAbility.EEditorExec
enum class EEditorExec : int {
	InEditorExec = 0,
	NoEditorExec = 1,
	EEditorExec_MAX = 2
};

// ScriptStruct GPAbility.GPAbilitySpecHandleKey
// Size: 0x08 (Inherited: 0x00)
struct FGPAbilitySpecHandleKey {
public:

	struct FGameplayAbilitySpecHandle AbilityHandle; // 0x00(0x04)
	int32_t Key; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAbility.AbilityActivationInfos
// Size: 0x130 (Inherited: 0x108)
struct FAbilityActivationInfos : public FFastArraySerializer {
public:

	struct TArray<struct FAbilityActivationItem> Handles; // 0x108(0x10)
	struct UGPASC* Owner; // 0x118(0x08)
	struct TArray<struct FAbilityActivationItem> Predictions; // 0x120(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAbility.AbilityActivationItem
// Size: 0xe0 (Inherited: 0x0c)
struct FAbilityActivationItem : public FFastArraySerializerItem {
public:

	struct FGameplayAbilitySpecHandle Handle; // 0x0c(0x04)
	struct FPredictionKey PredictionKey; // 0x10(0x18)
	struct FGameplayEventData TriggerEventData; // 0x28(0xb0)
	bool bReplicateEventData; // 0xd8(0x01)
	bool bRemovedByRPC; // 0xd9(0x01)
	char pad_DA[0x6]; // 0xda(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAbility.GPAbilityRepHandles
// Size: 0xa0 (Inherited: 0x00)
struct FGPAbilityRepHandles {
public:

	struct TMap<struct FGameplayAbilitySpecHandle, struct FGPAbilityPairArray> AbilityAttachedData; // 0x00(0x50)
	struct TMap<struct FGameplayAbilitySpecHandle, struct FGameplayAbilitySpecHandle> OuterLookup; // 0x50(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAbility.GPAbilityPairArray
// Size: 0x10 (Inherited: 0x00)
struct FGPAbilityPairArray {
public:

	struct TArray<struct FGPAbilityPair> Info; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAbility.GPAbilityPair
// Size: 0x10 (Inherited: 0x00)
struct FGPAbilityPair {
public:

	struct UClass* AbilityClass; // 0x00(0x08)
	struct FGameplayAbilitySpecHandle SpecHandle; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAbility.SavedAttribute
// Size: 0x40 (Inherited: 0x00)
struct FSavedAttribute {
public:

	struct FGameplayAttribute Attribute; // 0x00(0x38)
	float SavedValue; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAbility.AttributeChangeCustomData
// Size: 0x38 (Inherited: 0x00)
struct FAttributeChangeCustomData {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x08(0x08)
	struct TWeakObjectPtr<struct AActor> EffectCauser; // 0x10(0x08)
	char pad_18[0x20]; // 0x18(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAbility.GPAbilitySystemAttributeReg
// Size: 0x10 (Inherited: 0x00)
struct FGPAbilitySystemAttributeReg {
public:

	struct TArray<struct UClass*> Infos; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAbility.GPAbilitySystemAbilityReg
// Size: 0x10 (Inherited: 0x00)
struct FGPAbilitySystemAbilityReg {
public:

	struct TArray<struct UClass*> Infos; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAbility.GPEffectContext
// Size: 0xd0 (Inherited: 0x70)
struct FGPEffectContext : public FGameplayEffectContext {
public:

	struct TWeakObjectPtr<struct UAbilitySystemComponent> OriginalInstigatorASC; // 0x70(0x08)
	struct TWeakObjectPtr<struct AActor> OriginalInstigator; // 0x78(0x08)
	struct TMap<struct FName, float> ContextFloats; // 0x80(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAbility.GPTypeToTable
// Size: 0x10 (Inherited: 0x00)
struct FGPTypeToTable {
public:

	struct UClass* Type; // 0x00(0x08)
	struct UDataTable* Table; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
