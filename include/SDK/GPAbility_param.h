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
	struct Function_GPAbility_AttachedAbilities_Z_GetAbilitySet_Param
	{
	public:

		struct TArray<struct UClass*> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPAbility_AttachedAttributes_Z_GetAttributeSet_Param
	{
	public:

		struct TArray<struct UClass*> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPAbility_GPASBluePrintLibrary_EffectContextHasActors_Param
	{
	public:

		struct FGameplayEffectContextHandle EffectContext; // 0x00(0x18)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPAbility_GPASC_TryActivateAbilityByClassWithOutput_Param
	{
	public:

		struct UClass* InAbilityToActivate; // 0x00(0x08)
		struct TArray<struct UGPAbilityBase*> activedAbility; // 0x08(0x10)
		bool bAllowRemoteActivation; // 0x18(0x01)
		bool ReturnValue; // 0x19(0x01)
	};

	struct Function_GPAbility_GPBPLib_IsInEditor_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAbility_GPClassReigstry_RegisterAttribute_Param
	{
	public:

		struct UClass* ActorClass; // 0x00(0x08)
		struct UClass* AttributeClass; // 0x08(0x08)
		bool bPersistent; // 0x10(0x01)
	};

	struct Function_GPAbility_GPTypeToTableConfiguration_FindTableForType_Param
	{
	public:

		struct UClass* Class; // 0x00(0x08)
		struct UDataTable* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPAbility_GPAbilityBase_OwnerHasGameplayTag_Param
	{
	public:

		struct FGameplayTag Tag; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPAbility_GPAttributeSetAbilityLevel_OnRep_AbilityLevel_Param
	{
	public:

		struct FGameplayAttributeData OldData; // 0x00(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
