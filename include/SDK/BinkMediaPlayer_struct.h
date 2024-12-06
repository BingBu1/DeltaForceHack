
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum BinkMediaPlayer.EBinkMediaPlayerBinkDrawStyle
enum class EBinkMediaPlayerBinkDrawStyle : int {
	BMASM_Bink_DS_RenderToTexture = 0,
	BMASM_Bink_DS_OverlayFillScreenWithAspectRatio = 1,
	BMASM_Bink_DS_OverlayOriginalMovieSize = 2,
	BMASM_Bink_DS_OverlayFillScreen = 3,
	BMASM_Bink_DS_OverlaySpecificDestinationRectangle = 4,
	BMASM_Bink_DS_MAX = 5
};

// Enum BinkMediaPlayer.EBinkMediaPlayerBinkSoundTrack
enum class EBinkMediaPlayerBinkSoundTrack : int {
	BMASM_Bink_Sound_None = 0,
	BMASM_Bink_Sound_Simple = 1,
	BMASM_Bink_Sound_LanguageOverride = 2,
	BMASM_Bink_Sound_52 = 3,
	BMASM_Bink_Sound_51LanguageOverride = 4,
	BMASM_Bink_Sound_72 = 5,
	BMASM_Bink_Sound_71LanguageOverride = 6,
	BMASM_Bink_Sound_MAX = 7
};

// Enum BinkMediaPlayer.EBinkMediaPlayerBinkBufferModes
enum class EBinkMediaPlayerBinkBufferModes : int {
	BMASM_Bink_Stream = 0,
	BMASM_Bink_PreloadAll = 1,
	BMASM_Bink_StreamUntilResident = 2,
	BMASM_Bink_MAX = 3
};

// Enum BinkMediaPlayer.EBinkMoviePlayerBinkSoundTrack
enum class EBinkMoviePlayerBinkSoundTrack : int {
	MP_Bink_Sound_None = 0,
	MP_Bink_Sound_Simple = 1,
	MP_Bink_Sound_LanguageOverride = 2,
	MP_Bink_Sound_52 = 3,
	MP_Bink_Sound_51LanguageOverride = 4,
	MP_Bink_Sound_72 = 5,
	MP_Bink_Sound_71LanguageOverride = 6,
	MP_Bink_Sound_MAX = 7
};

// Enum BinkMediaPlayer.EBinkMoviePlayerBinkBufferModes
enum class EBinkMoviePlayerBinkBufferModes : int {
	MP_Bink_Stream = 0,
	MP_Bink_PreloadAll = 1,
	MP_Bink_StreamUntilResident = 2,
	MP_Bink_MAX = 3
};

// ScriptStruct BinkMediaPlayer.BinkMediaSrtEntry
// Size: 0x28 (Inherited: 0x00)
struct FBinkMediaSrtEntry {
public:

	int32_t Index; // 0x00(0x04)
	int32_t StartTime; // 0x04(0x04)
	int32_t EndTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayText; // 0x10(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
