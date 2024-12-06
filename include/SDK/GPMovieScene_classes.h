
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPMovieScene.GPMovieSceneConsoleCommandSection
// Size: 0x140 (Inherited: 0xf8)
class UGPMovieSceneConsoleCommandSection : public UMovieSceneSection {
public:

	struct FString ConsoleVariableName; // 0xf8(0x10)
	struct FString Value; // 0x108(0x10)
	bool bShouldExecuteResetCommand; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FString ResetCommand; // 0x120(0x10)
	struct FString DisplayName; // 0x130(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPMovieScene.GPMovieSceneConsoleCommandTrack
// Size: 0x70 (Inherited: 0x60)
class UGPMovieSceneConsoleCommandTrack : public UMovieSceneNameableTrack {
public:

	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPMovieScene.GPMovieSceneDelegates
// Size: 0x58 (Inherited: 0x38)
class UGPMovieSceneDelegates : public UWorldSubsystem {
public:

	char pad_38[0x20]; // 0x38(0x20)

	struct UGPMovieSceneDelegates* STATIC_Get(struct UObject* WorldContext); // Function GPMovieScene.GPMovieSceneDelegates.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPMovieScene.GPMovieSceneSubtitlesSection
// Size: 0x100 (Inherited: 0xf8)
class UGPMovieSceneSubtitlesSection : public UMovieSceneSection {
public:

	struct FName SubtitlesID; // 0xf8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPMovieScene.GPMovieSceneSubtitlesTrack
// Size: 0x88 (Inherited: 0x88)
class UGPMovieSceneSubtitlesTrack : public UMovieSceneEventTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
