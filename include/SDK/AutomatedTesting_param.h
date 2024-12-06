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
	struct Function_AutomatedTesting_AutomatedTestingHelpers_WriteExecResult_Param
	{
	public:

		struct FString Result; // 0x00(0x10)
	};

	struct Function_AutomatedTesting_BPAutomatedTestingConfig_MountPufferPaks_Param
	{
	public:

	};

	struct Function_AutomatedTesting_RuntimeSceneCaptureCamera_SaveCaptureResult_Param
	{
	public:

		struct UTextureRenderTarget2D* InCaptureResult; // 0x00(0x08)
		struct FString CaptureResultSavedPath; // 0x08(0x10)
		struct FString CaptureResultSavedName; // 0x18(0x10)
		bool bShouldSave; // 0x28(0x01)
	};

	struct Function_AutomatedTesting_RuntimeSceneCaptureController_SplitString_Param
	{
	public:

		struct FString SourceString; // 0x00(0x10)
		struct FString Delimiter; // 0x10(0x10)
		bool bCullEmpty; // 0x20(0x01)
		char pad_21[0x7]; // 0x21(0x07)
		struct TArray<struct FString> ReturnValue; // 0x28(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
