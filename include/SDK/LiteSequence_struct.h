
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum LiteSequence.EParticleKeyType
enum class EParticleKeyType : int {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKeyType_MAX = 3
};

// Enum LiteSequence.ELiteSequencePlayerStatus
enum class ELiteSequencePlayerStatus : int {
	Stopped = 0,
	Playing = 1,
	Paused = 2,
	MAX = 3
};

// Enum LiteSequence.ELiteSequencePlayDirection
enum class ELiteSequencePlayDirection : int {
	Forwards = 0,
	Backwards = 1,
	ELiteSequencePlayDirection_MAX = 2
};

// Enum LiteSequence.ELiteSequenceEvaluationType
enum class ELiteSequenceEvaluationType : int {
	FrameLocked = 0,
	WithSubFrames = 1,
	ELiteSequenceEvaluationType_MAX = 2
};

// Enum LiteSequence.EUpdateCursorMethod
enum class EUpdateCursorMethod : int {
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdateCursorMethod_MAX = 3
};

// Enum LiteSequence.EAnimSequenceState
enum class EAnimSequenceState : int {
	Start = 0,
	Pause = 1,
	Resume = 2,
	Stop = 3,
	EAnimSequenceState_MAX = 4
};

// ScriptStruct LiteSequence.LiteSequenceSpawnable
// Size: 0xb0 (Inherited: 0x00)
struct FLiteSequenceSpawnable {
public:

	struct FTransform SpawnTransform; // 0x00(0x30)
	bool bContinuouslyRespawn; // 0x30(0x01)
	bool bExternal; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	struct FGuid Guid; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString Name; // 0x48(0x10)
	struct UObject* ObjectTemplate; // 0x58(0x08)
	struct TMap<struct FGuid, struct FLiteSequencePossessable> PossessableBindings; // 0x60(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.LiteSequencePossessable
// Size: 0x30 (Inherited: 0x00)
struct FLiteSequencePossessable {
public:

	struct FGuid Guid; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FGuid ParentGuid; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.LiteSequenceBinding
// Size: 0x30 (Inherited: 0x00)
struct FLiteSequenceBinding {
public:

	struct FGuid ObjectGuid; // 0x00(0x10)
	struct FString BindingName; // 0x10(0x10)
	struct TArray<struct ULiteSequenceTrack*> Tracks; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.LiteSequenceComponentBinding
// Size: 0x38 (Inherited: 0x00)
struct FLiteSequenceComponentBinding {
public:

	struct FGuid ObjectGuid; // 0x00(0x10)
	struct FString BindingName; // 0x10(0x10)
	struct UActorComponent* ComponentTemplate; // 0x20(0x08)
	struct TArray<struct ULiteSequenceTrack*> Tracks; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.LiteSequenceSpawnablePoolManger
// Size: 0x50 (Inherited: 0x00)
struct FLiteSequenceSpawnablePoolManger {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.PlaybackRange
// Size: 0x08 (Inherited: 0x00)
struct FPlaybackRange {
public:

	struct FFrameNumber LowerFrameBound; // 0x00(0x04)
	struct FFrameNumber UpperFrameBound; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.LiteSequenceChannel
// Size: 0x08 (Inherited: 0x00)
struct FLiteSequenceChannel {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.LiteSequenceTangentData
// Size: 0x14 (Inherited: 0x00)
struct FLiteSequenceTangentData {
public:

	float ArriveTangent; // 0x00(0x04)
	float LeaveTangent; // 0x04(0x04)
	float ArriveTangentWeight; // 0x08(0x04)
	float LeaveTangentWeight; // 0x0c(0x04)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.LiteSequencePlaybackParams
// Size: 0x08 (Inherited: 0x00)
struct FLiteSequencePlaybackParams {
public:

	bool bAutoPlay; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float PlayRate; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.LiteSequenceBoolChannel
// Size: 0x30 (Inherited: 0x08)
struct FLiteSequenceBoolChannel : public FLiteSequenceChannel {
public:

	struct TArray<struct FFrameNumber> Times; // 0x08(0x10)
	struct TArray<bool> Values; // 0x18(0x10)
	bool DefaultValue; // 0x28(0x01)
	bool bHasDefaultValue; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.LiteSequenceParticleChannel
// Size: 0x30 (Inherited: 0x08)
struct FLiteSequenceParticleChannel : public FLiteSequenceChannel {
public:

	struct TArray<struct FFrameNumber> Times; // 0x08(0x10)
	struct TArray<enum class EParticleKeyType> Values; // 0x18(0x10)
	enum class EParticleKeyType DefaultValue; // 0x28(0x01)
	bool bHasDefaultValue; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.LiteSequenceFloatChannel
// Size: 0x40 (Inherited: 0x08)
struct FLiteSequenceFloatChannel : public FLiteSequenceChannel {
public:

	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x08(0x01)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FLiteSequenceFloatValue> Values; // 0x20(0x10)
	float DefaultValue; // 0x30(0x04)
	bool bHasDefaultValue; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FFrameRate TickResolution; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.LiteSequenceFloatValue
// Size: 0x1c (Inherited: 0x00)
struct FLiteSequenceFloatValue {
public:

	float Value; // 0x00(0x04)
	enum class ERichCurveInterpMode InterpMode; // 0x04(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FLiteSequenceTangentData Tangent; // 0x08(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.LiteSequencePlaybackConfig
// Size: 0x20 (Inherited: 0x00)
struct FLiteSequencePlaybackConfig {
public:

	struct FLiteSequencePlaybackParams PlaybackParams; // 0x00(0x08)
	bool bUseRandomRotationOffset; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t AngleRangeLowerBound; // 0x0c(0x04)
	int32_t AngleRangeUpperBound; // 0x10(0x04)
	struct FVector SequenceScale; // 0x14(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.ColorParameterCurves
// Size: 0x108 (Inherited: 0x00)
struct FColorParameterCurves {
public:

	struct FName ParameterName; // 0x00(0x08)
	struct FLiteSequenceFloatChannel RedCurve; // 0x08(0x40)
	struct FLiteSequenceFloatChannel GreenCurve; // 0x48(0x40)
	struct FLiteSequenceFloatChannel BlueCurve; // 0x88(0x40)
	struct FLiteSequenceFloatChannel AlphaCurve; // 0xc8(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.ScalarParameterCurves
// Size: 0x48 (Inherited: 0x00)
struct FScalarParameterCurves {
public:

	struct FName ParameterName; // 0x00(0x08)
	struct FLiteSequenceFloatChannel ParameterCurve; // 0x08(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LiteSequence.LiteSequenceDataRow
// Size: 0xc0 (Inherited: 0x10)
struct FLiteSequenceDataRow : public FDescRowBase {
public:

	struct FName ResourceId; // 0x10(0x08)
	/*struct TSoftObjectPtr<ULiteSequence>*/char LiteSequencePath[0x28]; // 0x18(0x28)
	/*struct TSoftObjectPtr<ULiteSequence>*/char LiteSequencePath_LowQuality[0x28]; // 0x40(0x28)
	/*struct TSoftObjectPtr<ULiteSequence>*/char LiteSequencePath_HighQuality[0x28]; // 0x68(0x28)
	struct FName AudioResourceId; // 0x90(0x08)
	bool bLimitByMaxInstanceNum; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t MaxInstanceNum; // 0x9c(0x04)
	struct FLiteSequencePlaybackConfig Config; // 0xa0(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
