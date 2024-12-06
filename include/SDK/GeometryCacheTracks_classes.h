
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// Size: 0x138 (Inherited: 0xf8)
class UMovieSceneGeometryCacheSection : public UMovieSceneSection {
public:

	struct FMovieSceneGeometryCacheParams Params; // 0xf8(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// Size: 0x70 (Inherited: 0x60)
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack {
public:

	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
