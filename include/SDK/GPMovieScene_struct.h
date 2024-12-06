
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct GPMovieScene.ConsoleCommandTrackTabRow
// Size: 0x90 (Inherited: 0x10)
struct FConsoleCommandTrackTabRow : public FDescRowBase {
public:

	struct FText MenuName; // 0x10(0x18)
	struct FText MenuTips; // 0x28(0x18)
	struct FText SectionDisplayName; // 0x40(0x18)
	struct FString ConsoleVariable; // 0x58(0x10)
	struct FString Value; // 0x68(0x10)
	bool bShouldExecuteResetCommand; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString ResetCommand; // 0x80(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPMovieScene.GPMovieSceneConsoleCommandTemplate
// Size: 0x68 (Inherited: 0x20)
struct FGPMovieSceneConsoleCommandTemplate : public FMovieSceneEvalTemplate {
public:

	struct FString ConsoleVariableName; // 0x20(0x10)
	struct FString Value; // 0x30(0x10)
	struct FString LastValue; // 0x40(0x10)
	bool bShouldExecuteResetCommand; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString ResetCommand; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPMovieScene.GPMovieSceneSubtitlesParams
// Size: 0x08 (Inherited: 0x00)
struct FGPMovieSceneSubtitlesParams {
public:

	struct FName SubtitlesID; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPMovieScene.GPMovieSceneSubtitlesTemplate
// Size: 0x28 (Inherited: 0x20)
struct FGPMovieSceneSubtitlesTemplate : public FMovieSceneEvalTemplate {
public:

	struct FGPMovieSceneSubtitlesParams Params; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
