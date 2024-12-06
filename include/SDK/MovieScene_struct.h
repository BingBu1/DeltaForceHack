
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum MovieScene.ESubSequenceTimeType
enum class ESubSequenceTimeType : int {
	Nearest = 0,
	Floor = 1,
	Ceil = 2,
	ESubSequenceTimeType_MAX = 3
};

// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : int {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5
};

// Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : int {
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 3,
	EMovieSceneBlendType_MAX = 4
};

// Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : int {
	Linear = 0,
	SinIn = 1,
	SinOut = 2,
	SinInOut = 3,
	QuadIn = 4,
	QuadOut = 5,
	QuadInOut = 6,
	CubicIn = 7,
	CubicOut = 8,
	CubicInOut = 9,
	QuartIn = 10,
	QuartOut = 11,
	QuartInOut = 12,
	QuintIn = 13,
	QuintOut = 14,
	QuintInOut = 15,
	ExpoIn = 16,
	ExpoOut = 17,
	ExpoInOut = 18,
	CircIn = 19,
	CircOut = 20,
	CircInOut = 21,
	EMovieSceneBuiltInEasing_MAX = 22
};

// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : int {
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2
};

// Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : int {
	Tick = 0,
	Platform = 1,
	Audio = 2,
	Timecode = 3,
	EUpdateClockSource_MAX = 4
};

// Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : int {
	FrameLocked = 0,
	WithSubFrames = 1,
	EMovieSceneEvaluationType_MAX = 2
};

// Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : int {
	Stopped = 0,
	Playing = 1,
	Recording = 2,
	Scrubbing = 3,
	Jumping = 4,
	Stepping = 5,
	Paused = 6,
	MAX = 7
};

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : int {
	Local = 0,
	Root = 1,
	EMovieSceneObjectBindingSpace_MAX = 2
};

// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : int {
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3
};

// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : int {
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3
};

// Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : int {
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdatePositionMethod_MAX = 3
};

// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : int {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3
};

// ScriptStruct MovieScene.MovieSceneSectionGroup
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneSectionGroup {
public:

	struct TArray<struct TWeakObjectPtr<struct UMovieSceneSection>> Sections; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneObjectBindingIDs {
public:

	struct TArray<struct FMovieSceneObjectBindingID> ids; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneTrackLabels {
public:

	struct TArray<struct FString> Strings; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEditorData
// Size: 0xf0 (Inherited: 0x00)
struct FMovieSceneEditorData {
public:

	struct TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates; // 0x00(0x50)
	struct TArray<struct FString> PinnedNodes; // 0x50(0x10)
	double ViewStart; // 0x60(0x08)
	double ViewEnd; // 0x68(0x08)
	double WorkStart; // 0x70(0x08)
	double WorkEnd; // 0x78(0x08)
	/*struct TSet<struct FFrameNumber>*/char MarkedFrames[0x50]; // 0x80(0x50)
	struct FFloatRange WorkingRange; // 0xd0(0x10)
	struct FFloatRange ViewRange; // 0xe0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneExpansionState
// Size: 0x01 (Inherited: 0x00)
struct FMovieSceneExpansionState {
public:

	bool bExpanded; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneMarkedFrame
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneMarkedFrame {
public:

	struct FFrameNumber FrameNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Label; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneTimecodeSource
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneTimecodeSource {
public:

	struct FTimecode Timecode; // 0x00(0x14)
	struct FFrameNumber DeltaFrame; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneBinding
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneBinding {
public:

	struct FGuid ObjectGuid; // 0x00(0x10)
	struct FString BindingName; // 0x10(0x10)
	struct TArray<struct UMovieSceneTrack*> Tracks; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.OptionalMovieSceneBlendType
// Size: 0x02 (Inherited: 0x00)
struct FOptionalMovieSceneBlendType {
public:

	enum class EMovieSceneBlendType BlendType; // 0x00(0x01)
	bool bIsValid; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// Size: 0x88 (Inherited: 0x00)
struct FMovieSceneEvalTemplatePtr {
public:

	char pad_0[0x88]; // 0x00(0x88)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// Size: 0x01 (Inherited: 0x00)
struct FMovieSceneEmptyStruct {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// Size: 0x70 (Inherited: 0x00)
struct FMovieSceneEvaluationMetaData {
public:

	struct TArray<struct FMovieSceneSequenceID> ActiveSequences; // 0x00(0x10)
	struct TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10(0x10)
	struct TMap<struct FMovieSceneSequenceID, uint32_t> SubTemplateSerialNumbers; // 0x20(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneEvaluationGroup {
public:

	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x00(0x10)
	struct TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// Size: 0x0c (Inherited: 0x00)
struct FMovieSceneEvaluationGroupLUTIndex {
public:

	int32_t LUTOffset; // 0x00(0x04)
	int32_t NumInitPtrs; // 0x04(0x04)
	int32_t NumEvalPtrs; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSegment
// Size: 0x58 (Inherited: 0x00)
struct FMovieSceneSegment {
public:

	char pad_0[0x58]; // 0x00(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSubSectionData
// Size: 0x1c (Inherited: 0x00)
struct FMovieSceneSubSectionData {
public:

	struct TWeakObjectPtr<struct UMovieSceneSubSection> Section; // 0x00(0x08)
	struct FGuid ObjectBindingId; // 0x08(0x10)
	enum class ESectionEvaluationFlags Flags; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// Size: 0x3a8 (Inherited: 0x00)
struct FMovieSceneRootEvaluationTemplateInstance {
public:

	char pad_0[0x68]; // 0x00(0x68)
	struct TMap<struct FMovieSceneSequenceID, struct UObject*> DirectorInstances; // 0x68(0x50)
	char pad_B8[0x2f0]; // 0xb8(0x2f0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// Size: 0x50 (Inherited: 0x00)
struct FGeneratedMovieSceneKeyStruct {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieScenePossessable
// Size: 0x48 (Inherited: 0x00)
struct FMovieScenePossessable {
public:

	struct TArray<struct FName> Tags; // 0x00(0x10)
	struct FGuid Guid; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct UClass* PossessedObjectClass; // 0x30(0x08)
	struct FGuid ParentGuid; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEasingSettings
// Size: 0x48 (Inherited: 0x00)
struct FMovieSceneEasingSettings {
public:

	int32_t AutoEaseInDuration; // 0x00(0x04)
	int32_t AutoEaseOutDuration; // 0x04(0x04)
	char MovieSceneBuiltInEaseInTypeProxy; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	/*struct TScriptInterface<IMovieSceneEasingFunction>*/char EaseIn[0x10]; // 0x10(0x10)
	bool bManualEaseIn; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t ManualEaseInDuration; // 0x24(0x04)
	char MovieSceneBuiltInEaseOutTypeProxy; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	/*struct TScriptInterface<IMovieSceneEasingFunction>*/char EaseOut[0x10]; // 0x30(0x10)
	bool bManualEaseOut; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t ManualEaseOutDuration; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// Size: 0x02 (Inherited: 0x00)
struct FMovieSceneSectionEvalOptions {
public:

	bool bCanEditCompletionMode; // 0x00(0x01)
	enum class EMovieSceneCompletionMode CompletionMode; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneSectionParameters {
public:

	struct FFrameNumber StartFrameOffset; // 0x00(0x04)
	float TimeScale; // 0x04(0x04)
	int32_t HierarchicalBias; // 0x08(0x04)
	float StartOffset; // 0x0c(0x04)
	float PrerollTime; // 0x10(0x04)
	float PostrollTime; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.SectionEvaluationData
// Size: 0x0c (Inherited: 0x00)
struct FSectionEvaluationData {
public:

	int32_t ImplIndex; // 0x00(0x04)
	struct FFrameNumber ForcedTime; // 0x04(0x04)
	enum class ESectionEvaluationFlags Flags; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneSequenceInstanceData {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneSequenceReplProperties {
public:

	struct FFrameTime LastKnownPosition; // 0x00(0x08)
	enum class EMovieScenePlayerStatus LastKnownStatus; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t LastKnownNumLoops; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSpawnable
// Size: 0x90 (Inherited: 0x00)
struct FMovieSceneSpawnable {
public:

	struct FTransform SpawnTransform; // 0x00(0x30)
	struct TArray<struct FName> Tags; // 0x30(0x10)
	bool bContinuouslyRespawn; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FGuid Guid; // 0x44(0x10)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString Name; // 0x58(0x10)
	struct UObject* ObjectTemplate; // 0x68(0x08)
	struct TArray<struct FGuid> ChildPossessables; // 0x70(0x10)
	enum class ESpawnOwnership Ownership; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FName LevelName; // 0x84(0x08)
	char pad_8C[0x4]; // 0x8c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTrackDisplayOptions {
public:

	char bShowVerticalFrames : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTrackEvalOptions {
public:

	char bCanEvaluateNearestSection : 1; // 0x00(0x01)
	char bEvalNearestSection : 1; // 0x00(0x01)
	char bEvaluateInPreroll : 1; // 0x00(0x01)
	char bEvaluateInPostroll : 1; // 0x00(0x01)
	char bEvaluateNearestSection : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneChannel
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneChannel {
public:

	char pad_0[0x8]; // 0x00(0x08)
	char bActive : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneEvalTemplateBase {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneObjectBindingID {
public:

	int32_t SequenceID; // 0x00(0x04)
	enum class EMovieSceneObjectBindingSpace Space; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FGuid Guid; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneKeyHandleMap
// Size: 0x60 (Inherited: 0x60)
struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneEvaluationField {
public:

	struct TArray<struct FMovieSceneFrameRange> Ranges; // 0x00(0x10)
	struct TArray<struct FMovieSceneEvaluationGroup> Groups; // 0x10(0x10)
	struct TArray<struct FMovieSceneEvaluationMetaData> MetaData; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSequenceID
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneSequenceID {
public:

	uint32_t Value; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTrackIdentifier {
public:

	uint32_t Value; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneSegmentIdentifier {
public:

	int32_t IdentifierIndex; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneFrameRange
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneFrameRange {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSubSectionFieldData
// Size: 0x60 (Inherited: 0x00)
struct FMovieSceneSubSectionFieldData {
public:

	char pad_0[0x60]; // 0x00(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneTrackFieldData
// Size: 0x60 (Inherited: 0x00)
struct FMovieSceneTrackFieldData {
public:

	char pad_0[0x60]; // 0x00(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneEvaluationTemplateSerialNumber {
public:

	uint32_t Value; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// Size: 0xa0 (Inherited: 0x00)
struct FMovieSceneSequenceHierarchy {
public:

	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences; // 0x00(0x50)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// Size: 0x0c (Inherited: 0x00)
struct FMovieSceneSequenceTransform {
public:

	float TimeScale; // 0x00(0x04)
	struct FFrameTime offset; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneSequenceInstanceDataPtr {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// Size: 0x38 (Inherited: 0x00)
struct FMovieSceneTrackImplementationPtr {
public:

	char pad_0[0x38]; // 0x00(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.SectionEvaluationDataTree
// Size: 0x60 (Inherited: 0x00)
struct FSectionEvaluationDataTree {
public:

	char pad_0[0x60]; // 0x00(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneEvaluationTrackSegments {
public:

	struct TArray<int32_t> SegmentIdentifierToIndex; // 0x00(0x10)
	struct TArray<struct FMovieSceneSegment> SortedSegments; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneTangentData
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneTangentData {
public:

	float ArriveTangent; // 0x00(0x04)
	float LeaveTangent; // 0x04(0x04)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ArriveTangentWeight; // 0x0c(0x04)
	float LeaveTangentWeight; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneKeyStruct {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneObjectPathChannelKeyValue {
public:

	/*struct TSoftObjectPtr<UObject>*/char SoftPtr[0x28]; // 0x00(0x28)
	struct UObject* HardPtr; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// Size: 0x28 (Inherited: 0x00)
struct FMovieScenePropertySectionData {
public:

	struct FName PropertyName; // 0x00(0x08)
	struct FString PropertyPath; // 0x08(0x10)
	struct FName FunctionName; // 0x18(0x08)
	struct FName NotifyFunctionName; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneSequenceLoopCount {
public:

	int32_t Value; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneBoolChannel
// Size: 0x98 (Inherited: 0x10)
struct FMovieSceneBoolChannel : public FMovieSceneChannel {
public:

	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	bool DefaultValue; // 0x20(0x01)
	bool bHasDefaultValue; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct TArray<bool> Values; // 0x28(0x10)
	char pad_38[0x60]; // 0x38(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneByteChannel
// Size: 0xa0 (Inherited: 0x10)
struct FMovieSceneByteChannel : public FMovieSceneChannel {
public:

	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	char DefaultValue; // 0x20(0x01)
	bool bHasDefaultValue; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct TArray<char> Values; // 0x28(0x10)
	struct UEnum* Enum; // 0x38(0x08)
	char pad_40[0x60]; // 0x40(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneIntegerChannel
// Size: 0x98 (Inherited: 0x10)
struct FMovieSceneIntegerChannel : public FMovieSceneChannel {
public:

	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	int32_t DefaultValue; // 0x20(0x04)
	bool bHasDefaultValue; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct TArray<int32_t> Values; // 0x28(0x10)
	char pad_38[0x60]; // 0x38(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneMaterialChannel
// Size: 0x98 (Inherited: 0x10)
struct FMovieSceneMaterialChannel : public FMovieSceneChannel {
public:

	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	bool DefaultValue; // 0x20(0x01)
	bool bHasDefaultValue; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct TArray<struct UMaterialInterface*> Values; // 0x28(0x10)
	char pad_38[0x60]; // 0x38(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// Size: 0x20 (Inherited: 0x10)
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase {
public:

	enum class EMovieSceneCompletionMode CompletionMode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct TWeakObjectPtr<struct UMovieSceneSection> SourceSectionPtr; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// Size: 0x10 (Inherited: 0x10)
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// Size: 0x24 (Inherited: 0x00)
struct FMovieSceneBindingOverrideData {
public:

	struct FMovieSceneObjectBindingID ObjectBindingId; // 0x00(0x18)
	struct TWeakObjectPtr<struct UObject> Object; // 0x18(0x08)
	bool bOverridesDefault; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneFloatChannel
// Size: 0xa8 (Inherited: 0x10)
struct FMovieSceneFloatChannel : public FMovieSceneChannel {
public:

	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x10(0x01)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct FFrameNumber> Times; // 0x18(0x10)
	struct TArray<struct FMovieSceneFloatValue> Values; // 0x28(0x10)
	float DefaultValue; // 0x38(0x04)
	bool bHasDefaultValue; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FMovieSceneKeyHandleMap KeyHandles; // 0x40(0x60)
	struct FFrameRate TickResolution; // 0xa0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEvaluationOperand
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneEvaluationOperand {
public:

	struct FGuid ObjectBindingId; // 0x00(0x10)
	struct FMovieSceneSequenceID SequenceID; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneSequenceHierarchyNode {
public:

	struct FMovieSceneSequenceID ParentId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FMovieSceneSequenceID> Children; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEvaluationKey
// Size: 0x0c (Inherited: 0x00)
struct FMovieSceneEvaluationKey {
public:

	struct FMovieSceneSequenceID SequenceID; // 0x00(0x04)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x04(0x04)
	uint32_t SectionIndex; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneEvaluationFieldTrackPtr {
public:

	struct FMovieSceneSequenceID SequenceID; // 0x00(0x04)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// Size: 0xa8 (Inherited: 0x00)
struct FMovieSceneTemplateGenerationLedger {
public:

	struct FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x08(0x50)
	struct TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges; // 0x58(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// Size: 0xa8 (Inherited: 0x00)
struct FMovieSceneSubSequenceData {
public:

	struct FSoftObjectPath Sequence; // 0x00(0x18)
	struct FMovieSceneSequenceTransform RootToSequenceTransform; // 0x18(0x0c)
	struct FFrameRate TickResolution; // 0x24(0x08)
	struct FMovieSceneSequenceID DeterministicSequenceID; // 0x2c(0x04)
	struct FMovieSceneFrameRange PlayRange; // 0x30(0x10)
	struct FMovieSceneFrameRange PreRollRange; // 0x40(0x10)
	struct FMovieSceneFrameRange PostRollRange; // 0x50(0x10)
	int32_t HierarchicalBias; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x68(0x18)
	char pad_80[0x8]; // 0x80(0x08)
	struct FGuid SubSectionSignature; // 0x88(0x10)
	struct FMovieSceneSequenceTransform OuterToInnerTransform; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// Size: 0xf8 (Inherited: 0x00)
struct FMovieSceneEvaluationTrack {
public:

	struct FGuid ObjectBindingId; // 0x00(0x10)
	uint16_t EvaluationPriority; // 0x10(0x02)
	enum class EEvaluationMethod EvaluationMethod; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FMovieSceneEvaluationTrackSegments Segments; // 0x18(0x20)
	struct UMovieSceneTrack* SourceTrack; // 0x38(0x08)
	struct FSectionEvaluationDataTree EvaluationTree; // 0x40(0x60)
	struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates; // 0xa0(0x10)
	struct FMovieSceneTrackImplementationPtr TrackTemplate; // 0xb0(0x38)
	struct FName EvaluationGroup; // 0xe8(0x08)
	char bEvaluateInPreroll : 1; // 0xf0(0x01)
	char bEvaluateInPostroll : 1; // 0xf0(0x01)
	char bTearDownPriority : 1; // 0xf0(0x01)
	char pad_F0_3 : 5; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneFloatValue
// Size: 0x24 (Inherited: 0x00)
struct FMovieSceneFloatValue {
public:

	float Value; // 0x00(0x04)
	enum class ERichCurveInterpMode InterpMode; // 0x04(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FMovieSceneTangentData Tangent; // 0x08(0x14)
	struct FName Tag; // 0x1c(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// Size: 0x28 (Inherited: 0x08)
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct {
public:

	struct FFrameNumber Time; // 0x08(0x04)
	char pad_C[0x1c]; // 0x0c(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannel
// Size: 0xd0 (Inherited: 0x10)
struct FMovieSceneObjectPathChannel : public FMovieSceneChannel {
public:

	struct UClass* PropertyClass; // 0x10(0x08)
	struct TArray<struct FFrameNumber> Times; // 0x18(0x10)
	struct TArray<struct FMovieSceneObjectPathChannelKeyValue> Values; // 0x28(0x10)
	struct FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x38(0x30)
	char pad_68[0x60]; // 0x68(0x60)
	bool bForceSoftPtr; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneSequencePlaybackSettings {
public:

	char bAutoPlay : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FMovieSceneSequenceLoopCount LoopCount; // 0x04(0x04)
	float PlayRate; // 0x08(0x04)
	float StartTime; // 0x0c(0x04)
	char bRandomStartTime : 1; // 0x10(0x01)
	char bRestoreState : 1; // 0x10(0x01)
	char bDisableMovementInput : 1; // 0x10(0x01)
	char bDisableLookAtInput : 1; // 0x10(0x01)
	char bHidePlayer : 1; // 0x10(0x01)
	char bHideHud : 1; // 0x10(0x01)
	char bDisableCameraCuts : 1; // 0x10(0x01)
	char bPauseAtEnd : 1; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate {
public:

	struct FMovieScenePropertySectionData PropertyData; // 0x20(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// Size: 0x20 (Inherited: 0x20)
struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneOrderedEvaluationKey {
public:

	struct FMovieSceneEvaluationKey Key; // 0x00(0x0c)
	uint16_t SetupIndex; // 0x0c(0x02)
	uint16_t TearDownIndex; // 0x0e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// Size: 0x0c (Inherited: 0x08)
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr {
public:

	struct FMovieSceneSegmentIdentifier SegmentID; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// Size: 0x2f0 (Inherited: 0x00)
struct FMovieSceneEvaluationTemplate {
public:

	struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks; // 0x00(0x50)
	char pad_50[0x50]; // 0x50(0x50)
	struct FMovieSceneEvaluationField EvaluationField; // 0xa0(0x30)
	struct FMovieSceneSequenceHierarchy Hierarchy; // 0xd0(0xa0)
	struct FGuid SequenceSignature; // 0x170(0x10)
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FMovieSceneTemplateGenerationLedger TemplateLedger; // 0x188(0xa8)
	struct FMovieSceneTrackFieldData TrackFieldData; // 0x230(0x60)
	struct FMovieSceneSubSectionFieldData SubSectionFieldData; // 0x290(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
