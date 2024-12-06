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
	struct Function_MovieSceneCapture_MovieSceneCaptureEnvironment_IsCaptureInProgress_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_MovieSceneCapture_MovieSceneCaptureProtocolBase_IsCapturing_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_MovieSceneCapture_MovieSceneCapture_SetImageCaptureProtocolType_Param
	{
	public:

		struct UClass* ProtocolType; // 0x00(0x08)
	};

	struct Function_MovieSceneCapture_UserDefinedCaptureProtocol_StopCapturingFinalPixels_Param
	{
	public:

	};

	struct Function_MovieSceneCapture_UserDefinedImageCaptureProtocol_WriteImageToDisk_Param
	{
	public:

		struct FCapturedPixels PixelData; // 0x00(0x10)
		struct FCapturedPixelsID StreamID; // 0x10(0x50)
		struct FFrameMetrics FrameMetrics; // 0x60(0x10)
		bool bCopyImageData; // 0x70(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
