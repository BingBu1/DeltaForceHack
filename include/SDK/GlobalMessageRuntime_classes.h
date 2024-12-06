
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GlobalMessageRuntime.MessageBPLibrary
// Size: 0x30 (Inherited: 0x30)
class UMessageBPLibrary : public UBlueprintFunctionLibrary {
public:


	bool STATIC_UnlistenMessageByName(struct FName MessageId, struct UObject* Listener, struct UGMMessageManager* Mgr); // Function GlobalMessageRuntime.MessageBPLibrary.UnlistenMessageByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GlobalMessageRuntime.GMMessageManager
// Size: 0x170 (Inherited: 0x30)
class UGMMessageManager : public UObject {
public:

	char pad_30[0x140]; // 0x30(0x140)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GlobalMessageRuntime.MovieSceneMessageSection
// Size: 0x188 (Inherited: 0xf8)
class UMovieSceneMessageSection : public UMovieSceneSection {
public:

	struct FMovieSceneMessageSectionData MessageData; // 0xf8(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GlobalMessageRuntime.MovieSceneMessageTrack
// Size: 0x88 (Inherited: 0x60)
class UMovieSceneMessageTrack : public UMovieSceneNameableTrack {
public:

	char bFireMessagesWhenForwards : 1; // 0x60(0x01)
	char bFireMessagesWhenBackwards : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	enum class EFireMessagesAtPosition MessagePosition; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct FMovieSceneObjectBindingID> MessageReceivers; // 0x68(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GlobalMessageRuntime.PropertiesContainer
// Size: 0x38 (Inherited: 0x38)
class UPropertiesContainer : public UField {
public:


	struct UObject* STATIC_Get(); // Function GlobalMessageRuntime.PropertiesContainer.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GlobalMessageRuntime.MessageVerify
// Size: 0x80 (Inherited: 0x30)
class UMessageVerify : public UObject {
public:

	char pad_30[0x50]; // 0x30(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GlobalMessageRuntime.RpcProxyComponent
// Size: 0x100 (Inherited: 0x100)
class URpcProxyComponent : public UActorComponent {
public:


	void Unreliable_Notify(struct UObject* InObject, struct FName MessageName, struct TArray<char> Buffer); // Function GlobalMessageRuntime.RpcProxyComponent.Unreliable_Notify // (Net|Native|Event|Protected|NetClient) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
