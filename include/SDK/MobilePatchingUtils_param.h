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
	struct Function_MobilePatchingUtils_MobilePatchingLibrary_RequestContent_Param
	{
	public:

	};

	struct Function_MobilePatchingUtils_MobileInstalledContent_Mount_Param
	{
	public:

		int32_t PakOrder; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FString MountPoint; // 0x08(0x10)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_MobilePatchingUtils_MobilePendingContent_StartInstall_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
