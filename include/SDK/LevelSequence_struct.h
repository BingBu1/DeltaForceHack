
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct LevelSequence.LevelSequenceCameraSettings
// Size: 0x02 (Inherited: 0x00)
struct FLevelSequenceCameraSettings {
public:

	bool bOverrideAspectRatioAxisConstraint; // 0x00(0x01)
	enum class EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LevelSequence.SubLevelSequenceGroup
// Size: 0x58 (Inherited: 0x00)
struct FSubLevelSequenceGroup {
public:

	int32_t GroupPriority; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FString, struct FSubLevelSequence> SubLevelSequences; // 0x08(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LevelSequence.SubLevelSequence
// Size: 0x28 (Inherited: 0x00)
struct FSubLevelSequence {
public:

	struct FSoftObjectPath Sequence; // 0x00(0x18)
	int32_t Priority; // 0x18(0x04)
	float Weight; // 0x1c(0x04)
	bool bEnable; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LevelSequence.BoundActorProxy
// Size: 0x01 (Inherited: 0x00)
struct FBoundActorProxy {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// Size: 0xa0 (Inherited: 0x00)
struct FLevelSequenceBindingReferences {
public:

	struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x00(0x50)
	/*struct TSet<struct FGuid>*/char AnimSequenceInstances[0x50]; // 0x50(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// Size: 0x10 (Inherited: 0x00)
struct FLevelSequenceBindingReferenceArray {
public:

	struct TArray<struct FLevelSequenceBindingReference> References; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// Size: 0x38 (Inherited: 0x00)
struct FLevelSequenceBindingReference {
public:

	struct FString PackageName; // 0x00(0x10)
	struct FSoftObjectPath ExternalObjectPath; // 0x10(0x18)
	struct FString ObjectPath; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// Size: 0x50 (Inherited: 0x00)
struct FLevelSequenceObjectReferenceMap {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// Size: 0x20 (Inherited: 0x00)
struct FLevelSequenceLegacyObjectReference {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LevelSequence.LevelSequenceObject
// Size: 0x38 (Inherited: 0x00)
struct FLevelSequenceObject {
public:

	/*LazyObjectProperty*/char ObjectOrOwner[0x1c]; // 0x00(0x1c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString ComponentName; // 0x20(0x10)
	struct TWeakObjectPtr<struct UObject> CachedComponent; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LevelSequence.VolumeSequence
// Size: 0x20 (Inherited: 0x00)
struct FVolumeSequence {
public:

	struct FSoftObjectPath Sequence; // 0x00(0x18)
	int32_t Priority; // 0x18(0x04)
	bool Enable; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LevelSequence.SequenceInfo
// Size: 0x20 (Inherited: 0x00)
struct FSequenceInfo {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// Size: 0x0c (Inherited: 0x00)
struct FLevelSequenceSnapshotSettings {
public:

	char ZeroPadAmount; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FFrameRate FrameRate; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// Size: 0xb8 (Inherited: 0x00)
struct FLevelSequencePlayerSnapshot {
public:

	struct FString MasterName; // 0x00(0x10)
	struct FQualifiedFrameTime MasterTime; // 0x10(0x10)
	struct FQualifiedFrameTime SourceTime; // 0x20(0x10)
	struct FString CurrentShotName; // 0x30(0x10)
	struct FQualifiedFrameTime CurrentShotLocalTime; // 0x40(0x10)
	struct FQualifiedFrameTime CurrentShotSourceTime; // 0x50(0x10)
	struct FString SourceTimecode; // 0x60(0x10)
	/*struct TSoftObjectPtr<UCameraComponent>*/char CameraComponent[0x28]; // 0x70(0x28)
	struct FLevelSequenceSnapshotSettings Settings; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct ULevelSequence* ActiveShot; // 0xa8(0x08)
	struct FMovieSceneSequenceID ShotID; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
