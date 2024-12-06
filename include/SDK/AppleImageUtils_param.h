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
	struct Function_AppleImageUtils_AppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Param
	{
	public:

		struct UTexture* SourceImage; // 0x00(0x08)
		bool bWantColor; // 0x08(0x01)
		bool bUseGpu; // 0x09(0x01)
		char pad_A[0x2]; // 0x0a(0x02)
		float Scale; // 0x0c(0x04)
		enum class ETextureRotationDirection Rotate; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue; // 0x18(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
