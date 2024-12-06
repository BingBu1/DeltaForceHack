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
	struct Function_AssetRegistry_AssetRegistryHelpers_ToSoftObjectPath_Param
	{
	public:

		struct FAssetData InAssetData; // 0x00(0x50)
		struct FSoftObjectPath ReturnValue; // 0x50(0x18)
	};

	struct Function_AssetRegistry_AssetRegistry_UseFilterToExcludeAssets_Param
	{
	public:

		struct TArray<struct FAssetData> AssetDataList; // 0x00(0x10)
		struct FARFilter Filter; // 0x10(0xe8)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
