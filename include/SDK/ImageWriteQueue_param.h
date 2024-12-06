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
	struct Function_ImageWriteQueue_ImageWriteBlueprintLibrary_ExportToDisk_Param
	{
	public:

		struct UTexture* Texture; // 0x00(0x08)
		struct FString Filename; // 0x08(0x10)
		char pad_18[0x8]; // 0x18(0x08)
		struct FImageWriteOptions Options; // 0x20(0x60)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
