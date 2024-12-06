
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : int {
	ContextActor = 0,
	ExternalActor = 1,
	Component = 2,
	EActorSequenceObjectReferenceType_MAX = 3
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// Size: 0x20 (Inherited: 0x00)
struct FActorSequenceObjectReferenceMap {
public:

	struct TArray<struct FGuid> BindingIds; // 0x00(0x10)
	struct TArray<struct FActorSequenceObjectReferences> References; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferences
// Size: 0x10 (Inherited: 0x00)
struct FActorSequenceObjectReferences {
public:

	struct TArray<struct FActorSequenceObjectReference> array; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ActorSequence.ActorSequenceObjectReference
// Size: 0x28 (Inherited: 0x00)
struct FActorSequenceObjectReference {
public:

	enum class EActorSequenceObjectReferenceType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid ActorID; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString PathToComponent; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
