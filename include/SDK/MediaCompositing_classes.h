
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MediaCompositing.MovieSceneMediaSection
// Size: 0x128 (Inherited: 0xf8)
class UMovieSceneMediaSection : public UMovieSceneSection {
public:

	struct UMediaSource* MediaSource; // 0xf8(0x08)
	bool bLooping; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FFrameNumber StartFrameOffset; // 0x104(0x04)
	struct UMediaTexture* MediaTexture; // 0x108(0x08)
	struct UMediaSoundComponent* MediaSoundComponent; // 0x110(0x08)
	bool bUseExternalMediaPlayer; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct UMediaPlayer* ExternalMediaPlayer; // 0x120(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MediaCompositing.MovieSceneMediaTrack
// Size: 0x70 (Inherited: 0x60)
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack {
public:

	struct TArray<struct UMovieSceneSection*> MediaSections; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
