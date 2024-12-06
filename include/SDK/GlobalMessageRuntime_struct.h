
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GlobalMessageRuntime.EMessageAuthorityType
enum class EMessageAuthorityType : int {
	EMessageTypeBoth = 0,
	EMessageTypeServer = 1,
	EMessageTypeClient = 2,
	EMessageAuthorityType_MAX = 3
};

// Enum GlobalMessageRuntime.EFireMessagesAtPosition
enum class EFireMessagesAtPosition : int {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireMessagesAtPosition_MAX = 3
};

// ScriptStruct GlobalMessageRuntime.MessageAny
// Size: 0x10 (Inherited: 0x00)
struct FMessageAny {
public:

	uint64_t Value; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GlobalMessageRuntime.MovieSceneMessageSectionData
// Size: 0x90 (Inherited: 0x10)
struct FMovieSceneMessageSectionData : public FMovieSceneChannel {
public:

	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FMessagePayload> KeyValues; // 0x20(0x10)
	char pad_30[0x60]; // 0x30(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GlobalMessageRuntime.MovieSceneMessageParameters
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneMessageParameters {
public:

	char pad_0[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GlobalMessageRuntime.MovieSceneMessageSectionTemplate
// Size: 0xc8 (Inherited: 0x20)
struct FMovieSceneMessageSectionTemplate : public FMovieSceneEvalTemplate {
public:

	struct FMovieSceneMessageSectionData MessageData; // 0x20(0x90)
	struct TArray<struct FMovieSceneObjectBindingID> MessageReceivers; // 0xb0(0x10)
	char bFireMessagesWhenForwards : 1; // 0xc0(0x01)
	char bFireMessagesWhenBackwards : 1; // 0xc0(0x01)
	char pad_C0_2 : 6; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GlobalMessageRuntime.MessagePayload
// Size: 0x30 (Inherited: 0x00)
struct FMessagePayload {
public:

	struct FMessageTag MessageKey; // 0x00(0x08)
	struct FMovieSceneMessageParameters Parameters; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
