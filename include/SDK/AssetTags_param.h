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
	struct Function_AssetTags_AssetTagsSubsystem_GetCollectionsContainingAssetPtr_Param
	{
	public:

		struct UObject* AssetPtr; // 0x00(0x08)
		struct TArray<struct FName> ReturnValue; // 0x08(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
