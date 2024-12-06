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
	struct Function_DFScreenShotTool_DFScreenShotRequest_OnScreenShotCapturedSpliceWatermark_Param
	{
	public:

		int32_t InSizeX; // 0x00(0x04)
		int32_t InSizeY; // 0x04(0x04)
		struct TArray<struct FColor> InImageData; // 0x08(0x10)
		struct FString ScreenshotName; // 0x18(0x10)
		struct UGameInstance* GameInstance; // 0x28(0x08)
	};

	struct Function_DFScreenShotTool_DFScreenShotToolManager_OnDFMScreenshotFinishDelegate_Param
	{
	public:

		struct FString ScreenshotName; // 0x00(0x10)
		bool WithWaterMark; // 0x10(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
