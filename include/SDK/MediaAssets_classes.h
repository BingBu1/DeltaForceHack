
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MediaAssets.MediaPlayer
// Size: 0x140 (Inherited: 0x30)
class UMediaPlayer : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnEndReached[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnMediaClosed[0x10]; // 0x40(0x10)
	/*struct FMulticastInlineDelegate*/char OnMediaOpened[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char OnMediaOpenFailed[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char OnPlaybackResumed[0x10]; // 0x70(0x10)
	/*struct FMulticastInlineDelegate*/char OnPlaybackSuspended[0x10]; // 0x80(0x10)
	/*struct FMulticastInlineDelegate*/char OnSeekCompleted[0x10]; // 0x90(0x10)
	/*struct FMulticastInlineDelegate*/char OnTracksChanged[0x10]; // 0xa0(0x10)
	struct FTimespan CacheAhead; // 0xb0(0x08)
	struct FTimespan CacheBehind; // 0xb8(0x08)
	struct FTimespan CacheBehindGame; // 0xc0(0x08)
	bool NativeAudioOut; // 0xc8(0x01)
	bool PlayOnOpen; // 0xc9(0x01)
	char pad_CA[0x2]; // 0xca(0x02)
	char Shuffle : 1; // 0xcc(0x01)
	char Loop : 1; // 0xcc(0x01)
	char pad_CC_2 : 6; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct UMediaPlaylist* Playlist; // 0xd0(0x08)
	int32_t PlaylistIndex; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FTimespan TimeDelay; // 0xe0(0x08)
	float HorizontalFieldOfView; // 0xe8(0x04)
	float VerticalFieldOfView; // 0xec(0x04)
	struct FRotator ViewRotation; // 0xf0(0x0c)
	char pad_FC[0x2c]; // 0xfc(0x2c)
	struct FGuid PlayerGUID; // 0x128(0x10)
	char pad_138[0x8]; // 0x138(0x08)

	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MediaAssets.MediaPlaylist
// Size: 0x40 (Inherited: 0x30)
class UMediaPlaylist : public UObject {
public:

	struct TArray<struct UMediaSource*> Items; // 0x30(0x10)

	bool Replace(int32_t Index, struct UMediaSource* Replacement); // Function MediaAssets.MediaPlaylist.Replace // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MediaAssets.MediaSoundComponent
// Size: 0x8e0 (Inherited: 0x6d0)
class UMediaSoundComponent : public USynthComponent {
public:

	enum class EMediaSoundChannels Channels; // 0x6d0(0x04)
	bool DynamicRateAdjustment; // 0x6d4(0x01)
	char pad_6D5[0x3]; // 0x6d5(0x03)
	float RateAdjustmentFactor; // 0x6d8(0x04)
	struct FFloatRange RateAdjustmentRange; // 0x6dc(0x10)
	char pad_6EC[0x4]; // 0x6ec(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x6f0(0x08)
	char pad_6F8[0x1e8]; // 0x6f8(0x1e8)

	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MediaAssets.MediaTexture
// Size: 0x210 (Inherited: 0x140)
class UMediaTexture : public UTexture {
public:

	enum class TextureAddress AddressX; // 0x140(0x01)
	enum class TextureAddress AddressY; // 0x141(0x01)
	bool AutoClear; // 0x142(0x01)
	char pad_143[0x1]; // 0x143(0x01)
	struct FLinearColor ClearColor; // 0x144(0x10)
	char pad_154[0x4]; // 0x154(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x158(0x08)
	char pad_160[0xb0]; // 0x160(0xb0)

	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MediaAssets.MediaSource
// Size: 0x88 (Inherited: 0x30)
class UMediaSource : public UObject {
public:

	char pad_30[0x58]; // 0x30(0x58)

	bool Validate(); // Function MediaAssets.MediaSource.Validate // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MediaAssets.BaseMediaSource
// Size: 0x90 (Inherited: 0x88)
class UBaseMediaSource : public UMediaSource {
public:

	struct FName PlayerName; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x90 (Inherited: 0x88)
class UPlatformMediaSource : public UMediaSource {
public:

	struct UMediaSource* MediaSource; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MediaAssets.FileMediaSource
// Size: 0xb8 (Inherited: 0x90)
class UFileMediaSource : public UBaseMediaSource {
public:

	struct FString FilePath; // 0x90(0x10)
	bool PrecacheFile; // 0xa0(0x01)
	char pad_A1[0x17]; // 0xa1(0x17)

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MediaAssets.StreamMediaSource
// Size: 0xa0 (Inherited: 0x90)
class UStreamMediaSource : public UBaseMediaSource {
public:

	struct FString StreamUrl; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MediaAssets.TimeSynchronizableMediaSource
// Size: 0xa0 (Inherited: 0x90)
class UTimeSynchronizableMediaSource : public UBaseMediaSource {
public:

	bool bUseTimeSynchronization; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	int32_t FrameDelay; // 0x94(0x04)
	double TimeDelay; // 0x98(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
