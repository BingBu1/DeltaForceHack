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
	struct Function_AssetManagerEx_FLibAssetManageHelperEx_SerializeAssetDetialArrayToString_Param
	{
	public:

		struct TArray<struct FAssetDetail> InAssetDetialList; // 0x00(0x10)
		struct FString ReturnValue; // 0x10(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
