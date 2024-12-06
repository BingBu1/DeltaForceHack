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
	struct Function_GameplayTags_BlueprintGameplayTagLibrary_RemoveGameplayTag_Param
	{
	public:

		struct FGameplayTagContainer TagContainer; // 0x00(0x20)
		struct FGameplayTag Tag; // 0x20(0x08)
		bool ReturnValue; // 0x28(0x01)
	};

	struct Function_GameplayTags_GameplayTagAssetInterface_HasMatchingGameplayTag_Param
	{
	public:

		struct FGameplayTag TagToCheck; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
