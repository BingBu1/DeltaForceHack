
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class BinkMediaPlayer.BinkFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
class UBinkFunctionLibrary : public UBlueprintFunctionLibrary {
public:


	struct FTimespan STATIC_BinkLoadingMovie_GetTime(); // Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BinkMediaPlayer.BinkMediaPlayer
// Size: 0x148 (Inherited: 0x30)
class UBinkMediaPlayer : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	/*struct FMulticastInlineDelegate*/char OnMediaClosed[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnMediaOpened[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnMediaReachedEnd[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnPlaybackSuspended[0x10]; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
	char Looping : 1; // 0x88(0x01)
	char StartImmediately : 1; // 0x88(0x01)
	char DelayedOpen : 1; // 0x88(0x01)
	char pad_88_3 : 5; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FVector2D BinkDestinationUpperLeft; // 0x8c(0x08)
	struct FVector2D BinkDestinationLowerRight; // 0x94(0x08)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString URL; // 0xa0(0x10)
	enum class EBinkMediaPlayerBinkBufferModes BinkBufferMode; // 0xb0(0x01)
	enum class EBinkMediaPlayerBinkSoundTrack BinkSoundTrack; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	int32_t BinkSoundTrackStart; // 0xb4(0x04)
	enum class EBinkMediaPlayerBinkDrawStyle BinkDrawStyle; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32_t BinkLayerDepth; // 0xbc(0x04)
	char pad_C0[0x38]; // 0xc0(0x38)
	struct UBinkMediaSrt* CurSubtitle; // 0xf8(0x08)
	char pad_100[0x48]; // 0x100(0x48)

	bool SupportsSeeking(); // Function BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BinkMediaPlayer.BinkMediaSrt
// Size: 0x58 (Inherited: 0x30)
class UBinkMediaSrt : public UObject {
public:

	struct TArray<struct FBinkMediaSrtEntry> Entries; // 0x30(0x10)
	int32_t CurStartTime; // 0x40(0x04)
	int32_t CurEndTime; // 0x44(0x04)
	int32_t CurIndex; // 0x48(0x04)
	int32_t NextStartTime; // 0x4c(0x04)
	int32_t LastEndTime; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BinkMediaPlayer.BinkMediaTexture
// Size: 0x178 (Inherited: 0x140)
class UBinkMediaTexture : public UTexture {
public:

	enum class TextureAddress AddressX; // 0x140(0x01)
	enum class TextureAddress AddressY; // 0x141(0x01)
	char pad_142[0x6]; // 0x142(0x06)
	struct UBinkMediaPlayer* MediaPlayer; // 0x148(0x08)
	enum class EPixelFormat PixelFormat; // 0x150(0x01)
	bool tonemap; // 0x151(0x01)
	char pad_152[0x2]; // 0x152(0x02)
	float OutputNits; // 0x154(0x04)
	float Alpha; // 0x158(0x04)
	bool DecodeSRGB; // 0x15c(0x01)
	bool bKeepLastFrame; // 0x15d(0x01)
	bool bReleaseResourceAfterClose; // 0x15e(0x01)
	char pad_15F[0x19]; // 0x15f(0x19)

	void SetMediaPlayer(struct UBinkMediaPlayer* InMediaPlayer); // Function BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BinkMediaPlayer.BinkMoviePlayerSettings
// Size: 0x50 (Inherited: 0x30)
class UBinkMoviePlayerSettings : public UObject {
public:

	enum class EBinkMoviePlayerBinkBufferModes BinkBufferMode; // 0x30(0x01)
	enum class EBinkMoviePlayerBinkSoundTrack BinkSoundTrack; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t BinkSoundTrackStart; // 0x34(0x04)
	struct FVector2D BinkDestinationUpperLeft; // 0x38(0x08)
	struct FVector2D BinkDestinationLowerRight; // 0x40(0x08)
	enum class EPixelFormat BinkPixelFormat; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
