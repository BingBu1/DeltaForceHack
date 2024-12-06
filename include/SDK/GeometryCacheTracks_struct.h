
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
// Size: 0x40 (Inherited: 0x00)
struct FMovieSceneGeometryCacheParams {
public:

	struct UGeometryCache* GeometryCacheAsset; // 0x00(0x08)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x08(0x04)
	struct FFrameNumber StartFrameOffset; // 0x0c(0x04)
	struct FFrameNumber EndFrameOffset; // 0x10(0x04)
	float PlayRate; // 0x14(0x04)
	char bReverse : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float StartOffset; // 0x1c(0x04)
	float EndOffset; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FSoftObjectPath GeometryCache; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
// Size: 0x48 (Inherited: 0x40)
struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams {
public:

	struct FFrameNumber SectionStartTime; // 0x40(0x04)
	struct FFrameNumber SectionEndTime; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
// Size: 0x68 (Inherited: 0x20)
struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate {
public:

	struct FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
