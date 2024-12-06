
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPCutScene.EGPSequenceCustomEvent
enum class EGPSequenceCustomEvent : int {
	GeneralEvent = 0,
	KillVehicle = 1,
	EGPSequenceCustomEvent_MAX = 2
};

// Enum GPCutScene.FGPSequenceBindingActorPolicy
enum class FGPSequenceBindingActorPolicy : int {
	Unkown = 0,
	TriggerActor = 1,
	TriggerActorAttached = 2,
	SpecialActor = 3,
	SpecialActorAttached = 4,
	TaggedActor = 5,
	TaggedActorAttached = 6,
	PlayerActorAttached = 7,
	PlayerActorClientTeamMate = 8,
	PlayerActorClient = 9,
	PlayerActor = 10,
	FGPSequenceBindingActorPolicy_MAX = 11
};

// Enum GPCutScene.ESequenceCameraType
enum class ESequenceCameraType : int {
	Cinematic = 0,
	CopyFromFPP = 1,
	CopyFromTPP = 2,
	ESequenceCameraType_MAX = 3
};

// Enum GPCutScene.EGPSequenceStatus
enum class EGPSequenceStatus : int {
	Stopped = 0,
	Loading = 1,
	Playing = 2,
	Paused = 3,
	EGPSequenceStatus_MAX = 4
};

// Enum GPCutScene.EGPSequenceEvent
enum class EGPSequenceEvent : int {
	Unkown = 0,
	EGPSequenceEvent_MAX = 1
};

// Enum GPCutScene.EGPSequenceTriggerAuth
enum class EGPSequenceTriggerAuth : int {
	Unkown = 0,
	ClientOnly = 1,
	Authority = 2,
	EGPSequenceTriggerAuth_MAX = 3
};

// Enum GPCutScene.EGPSequencePhysicsMode
enum class EGPSequencePhysicsMode : int {
	Unkown = 0,
	Disable = 1,
	Enable = 2,
	EGPSequencePhysicsMode_MAX = 3
};

// Enum GPCutScene.EGPSequencePreloadActorType
enum class EGPSequencePreloadActorType : int {
	AnyAny = 0,
	Player1 = 1,
	Player2 = 2,
	Player3 = 3,
	Player4 = 4,
	PlayerAny = 5,
	VehiclePlayer = 6,
	VehicleAny = 7,
	AIAny = 8,
	SpecialActor = 9,
	None = 10,
	EGPSequencePreloadActorType_MAX = 11
};

// Enum GPCutScene.EGPSequenceTriggerMode
enum class EGPSequenceTriggerMode : int {
	AnyAny = 0,
	Player1 = 1,
	Player2 = 2,
	Player3 = 3,
	Player4 = 4,
	PlayerAny = 5,
	VehiclePlayer = 6,
	VehicleAny = 7,
	AIAny = 8,
	SpecialActor = 9,
	Custom = 10,
	EGPSequenceTriggerMode_MAX = 11
};

// Enum GPCutScene.EGPSequenceBindingActorType
enum class EGPSequenceBindingActorType : int {
	Unkown = 0,
	Player = 1,
	Vehicle = 2,
	AI = 3,
	EGPSequenceBindingActorType_MAX = 4
};

// Enum GPCutScene.EGPSequencePerspectiveMode
enum class EGPSequencePerspectiveMode : int {
	Unknown = 0,
	FPP = 1,
	TPP = 2,
	TPPWithFacialAnimation = 3,
	EGPSequencePerspectiveMode_MAX = 4
};

// Enum GPCutScene.EGPSequencePrepareStatus
enum class EGPSequencePrepareStatus : int {
	Initial = 0,
	Preloading = 1,
	Preloaded = 2,
	PrepareAllReady = 3,
	Unloading = 4,
	Unloaded = 5,
	EGPSequencePrepareStatus_MAX = 6
};

// Enum GPCutScene.EGPSubLevelPreloaderStatus
enum class EGPSubLevelPreloaderStatus : int {
	Initial = 0,
	Preloading = 1,
	Preloaded = 2,
	AllReady = 3,
	EGPSubLevelPreloaderStatus_MAX = 4
};

// ScriptStruct GPCutScene.SeqStreamSection
// Size: 0x20 (Inherited: 0x00)
struct FSeqStreamSection {
public:

	struct FName Key; // 0x00(0x08)
	struct AGPSequenceActor* SequenceActor; // 0x08(0x08)
	bool bPreloadNetSection; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t PreloadStep; // 0x14(0x04)
	bool bPreloaded; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPCutScene.GPSequenceBoundActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FGPSequenceBoundActorInfo {
public:

	struct FName BindingTag; // 0x00(0x08)
	struct AActor* BoundActor; // 0x08(0x08)
	bool bBindOriginActor; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPCutScene.GPSequencePrepareCondition
// Size: 0x40 (Inherited: 0x00)
struct FGPSequencePrepareCondition {
public:

	struct FTransform StartTransform; // 0x00(0x30)
	struct FVector StartSpeed; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPCutScene.LevelSequenceAssetAnalyzeRow
// Size: 0x68 (Inherited: 0x08)
struct FLevelSequenceAssetAnalyzeRow : public FTableRowBase {
public:

	struct FString ShotName; // 0x08(0x10)
	int32_t ObjectCount; // 0x18(0x04)
	int32_t SpawnableCount; // 0x1c(0x04)
	int32_t PossessableCount; // 0x20(0x04)
	int32_t TransformTrack; // 0x24(0x04)
	int32_t SpawnedTrack; // 0x28(0x04)
	int32_t AttachTrack; // 0x2c(0x04)
	int32_t AnimationTrack; // 0x30(0x04)
	int32_t SkeletalMeshTrack; // 0x34(0x04)
	int32_t ParticleTrack; // 0x38(0x04)
	int32_t EventTrack; // 0x3c(0x04)
	int32_t FocalLengthTrack; // 0x40(0x04)
	int32_t CameraShakeTrack; // 0x44(0x04)
	int32_t ManualFocusTrack; // 0x48(0x04)
	int32_t ApertureTrack; // 0x4c(0x04)
	int32_t VisibilityTrack; // 0x50(0x04)
	int32_t VelocityScaleTrack; // 0x54(0x04)
	int32_t ConstrainAspectRatioTrack; // 0x58(0x04)
	int32_t VignetteSettingTrack; // 0x5c(0x04)
	int32_t MobilityTrack; // 0x60(0x04)
	int32_t OtherTrack; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPCutScene.GPSequenceBindingInitParam
// Size: 0x02 (Inherited: 0x00)
struct FGPSequenceBindingInitParam {
public:

	enum class EGPSequencePhysicsMode PhysicsMode; // 0x00(0x01)
	enum class EGPSequencePerspectiveMode PerspectiveMode; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPCutScene.GPSequenceBindingActorInfo
// Size: 0x50 (Inherited: 0x00)
struct FGPSequenceBindingActorInfo {
public:

	enum class FGPSequenceBindingActorPolicy ActorPolicy; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName SocketName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	/*struct TSoftObjectPtr<AActor>*/char SpecialActor[0x28]; // 0x10(0x28)
	struct FName SpecialActorTag; // 0x38(0x08)
	struct UClass* ClassOfActorTag; // 0x40(0x08)
	int32_t PlayerIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPCutScene.GPSequenceBindingInfo
// Size: 0x60 (Inherited: 0x00)
struct FGPSequenceBindingInfo {
public:

	struct FName BindingTag; // 0x00(0x08)
	struct FGPSequenceBindingActorInfo ActorInfo; // 0x08(0x50)
	struct FGPSequenceBindingInitParam InitParam; // 0x58(0x02)
	bool bBindOriginalActor; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
