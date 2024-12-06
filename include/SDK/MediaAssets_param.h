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
	struct Function_MediaAssets_MediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Param
	{
	public:

		struct TArray<struct FMediaCaptureDevice> OutDevices; // 0x00(0x10)
		int32_t Filter; // 0x10(0x04)
	};

	struct Function_MediaAssets_MediaPlayer_SupportsSeeking_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_MediaAssets_MediaPlaylist_Replace_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UMediaSource* Replacement; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_MediaAssets_MediaSoundComponent_SetSpectralAnalysisSettings_Param
	{
	public:

		struct TArray<float> InFrequenciesToAnalyze; // 0x00(0x10)
		enum class EMediaSoundComponentFFTSize InFFTSize; // 0x10(0x01)
	};

	struct Function_MediaAssets_MediaTexture_SetMediaPlayer_Param
	{
	public:

		struct UMediaPlayer* NewMediaPlayer; // 0x00(0x08)
	};

	struct Function_MediaAssets_MediaSource_Validate_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_MediaAssets_FileMediaSource_SetFilePath_Param
	{
	public:

		struct FString Path; // 0x00(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
