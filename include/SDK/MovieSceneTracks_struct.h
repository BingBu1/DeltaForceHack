
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : int {
	X = 0,
	Y = 1,
	Z = 2,
	NEG_X = 3,
	NEG_Y = 4,
	NEG_Z = 5,
	MovieScene3DPathSection_MAX = 6
};

// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : int {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3
};

// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : int {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2
};

// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : int {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3
};

// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// Size: 0x50 (Inherited: 0x20)
struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate {
public:

	struct FMovieSceneObjectBindingID AttachBindingID; // 0x20(0x18)
	struct FName AttachSocketName; // 0x38(0x08)
	struct FName AttachComponentName; // 0x40(0x08)
	enum class EAttachmentRule AttachmentLocationRule; // 0x48(0x01)
	enum class EAttachmentRule AttachmentRotationRule; // 0x49(0x01)
	enum class EAttachmentRule AttachmentScaleRule; // 0x4a(0x01)
	enum class EDetachmentRule DetachmentLocationRule; // 0x4b(0x01)
	enum class EDetachmentRule DetachmentRotationRule; // 0x4c(0x01)
	enum class EDetachmentRule DetachmentScaleRule; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size: 0xe8 (Inherited: 0x20)
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate {
public:

	struct FMovieSceneObjectBindingID PathBindingID; // 0x20(0x18)
	struct FMovieSceneFloatChannel TimingCurve; // 0x38(0xa8)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0xe0(0x01)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	char bFollow : 1; // 0xe4(0x01)
	char bReverse : 1; // 0xe4(0x01)
	char bForceUpright : 1; // 0xe4(0x01)
	char pad_E4_3 : 5; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// Size: 0x48 (Inherited: 0x08)
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct {
public:

	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector Scale; // 0x20(0x0c)
	struct FFrameNumber Time; // 0x2c(0x04)
	char pad_30[0x18]; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct {
public:

	struct FVector Scale; // 0x08(0x0c)
	struct FFrameNumber Time; // 0x14(0x04)
	char pad_18[0x18]; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct {
public:

	struct FRotator Rotation; // 0x08(0x0c)
	struct FFrameNumber Time; // 0x14(0x04)
	char pad_18[0x18]; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct {
public:

	struct FVector Location; // 0x08(0x0c)
	struct FFrameNumber Time; // 0x14(0x04)
	char pad_18[0x18]; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneActorReferenceKey {
public:

	struct FMovieSceneObjectBindingID Object; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate {
public:

	struct UMovieSceneAudioSection* AudioSection; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// Size: 0x80 (Inherited: 0x20)
struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate {
public:

	struct FMovieSceneObjectBindingID CameraBindingID; // 0x20(0x18)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform CutTransform; // 0x40(0x30)
	bool bHasCutTransform; // 0x70(0x01)
	char pad_71[0xf]; // 0x71(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// Size: 0x38 (Inherited: 0x08)
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct {
public:

	struct FLinearColor Color; // 0x08(0x10)
	struct FFrameNumber Time; // 0x18(0x04)
	char pad_1C[0x1c]; // 0x1c(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// Size: 0x2f0 (Inherited: 0x48)
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate {
public:

	struct FMovieSceneFloatChannel Curves[0x4]; // 0x48(0x2a0)
	enum class EMovieSceneBlendType BlendType; // 0x2e8(0x01)
	bool bCanBlend; // 0x2e9(0x01)
	char pad_2EA[0x2]; // 0x2ea(0x02)
	int32_t EaseOutDuration; // 0x2ec(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneEventPayloadVariable {
public:

	struct FString Value; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// Size: 0x90 (Inherited: 0x10)
struct FMovieSceneEventChannel : public FMovieSceneChannel {
public:

	struct TArray<struct FFrameNumber> KeyTimes; // 0x10(0x10)
	struct TArray<struct FMovieSceneEvent> KeyValues; // 0x20(0x10)
	char pad_30[0x60]; // 0x30(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// Size: 0xe0 (Inherited: 0x20)
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate {
public:

	struct FMovieSceneFloatChannel FadeCurve; // 0x20(0xa8)
	struct FLinearColor FadeColor; // 0xc8(0x10)
	char bFadeAudio : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// Size: 0x38 (Inherited: 0x20)
struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate {
public:

	enum class ELevelVisibility Visibility; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FName> LevelNames; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// Size: 0x5f0 (Inherited: 0x00)
struct FTransformParameterNameAndCurves {
public:

	struct FName ParameterName; // 0x00(0x08)
	struct FMovieSceneFloatChannel translation[0x3]; // 0x08(0x1f8)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x200(0x1f8)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x3f8(0x1f8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// Size: 0x2a8 (Inherited: 0x00)
struct FColorParameterNameAndCurves {
public:

	struct FName ParameterName; // 0x00(0x08)
	struct FMovieSceneFloatChannel RedCurve; // 0x08(0xa8)
	struct FMovieSceneFloatChannel GreenCurve; // 0xb0(0xa8)
	struct FMovieSceneFloatChannel BlueCurve; // 0x158(0xa8)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x200(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// Size: 0x200 (Inherited: 0x00)
struct FVectorParameterNameAndCurves {
public:

	struct FName ParameterName; // 0x00(0x08)
	struct FMovieSceneFloatChannel XCurve; // 0x08(0xa8)
	struct FMovieSceneFloatChannel YCurve; // 0xb0(0xa8)
	struct FMovieSceneFloatChannel ZCurve; // 0x158(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// Size: 0xb0 (Inherited: 0x00)
struct FScalarParameterNameAndCurve {
public:

	struct FName ParameterName; // 0x00(0x08)
	struct FMovieSceneFloatChannel ParameterCurve; // 0x08(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// Size: 0x118 (Inherited: 0x48)
struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate {
public:

	struct FMovieSceneObjectPathChannel ObjectChannel; // 0x48(0xd0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MaterialParameterNameAndIns
// Size: 0xa0 (Inherited: 0x00)
struct FMaterialParameterNameAndIns {
public:

	struct FName ParameterName; // 0x00(0x08)
	struct FMovieSceneMaterialChannel MaterialIns; // 0x08(0x98)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// Size: 0x100 (Inherited: 0x20)
struct FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate {
public:

	int32_t MaterialIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0x28(0xd0)
	bool bForceSoftPtr; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// Size: 0x2f0 (Inherited: 0x48)
struct FMovieSceneVectorPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
public:

	struct FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x48(0x2a0)
	int32_t NumChannelsUsed; // 0x2e8(0x04)
	enum class EMovieSceneBlendType BlendType; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// Size: 0xe8 (Inherited: 0x48)
struct FMovieSceneIntegerPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
public:

	struct FMovieSceneIntegerChannel IntegerCurve; // 0x48(0x98)
	enum class EMovieSceneBlendType BlendType; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// Size: 0xe8 (Inherited: 0x48)
struct FMovieSceneEnumPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
public:

	struct FMovieSceneByteChannel EnumCurve; // 0x48(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// Size: 0xe8 (Inherited: 0x48)
struct FMovieSceneBytePropertySectionTemplate : public FMovieScenePropertySectionTemplate {
public:

	struct FMovieSceneByteChannel ByteCurve; // 0x48(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// Size: 0xf8 (Inherited: 0x48)
struct FMovieSceneFloatPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
public:

	struct FMovieSceneFloatChannel FloatFunction; // 0x48(0xa8)
	enum class EMovieSceneBlendType BlendType; // 0xf0(0x01)
	bool bCanBlend; // 0xf1(0x01)
	char pad_F2[0x2]; // 0xf2(0x02)
	int32_t EaseOutDuration; // 0xf4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Size: 0xc8 (Inherited: 0x20)
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate {
public:

	struct FMovieSceneFloatChannel SlomoCurve; // 0x20(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// Size: 0xb8 (Inherited: 0x20)
struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate {
public:

	struct FMovieSceneBoolChannel Curve; // 0x20(0x98)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTransformMask {
public:

	uint32_t Mask; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// Size: 0xa8 (Inherited: 0x10)
struct FMovieSceneActorReferenceData : public FMovieSceneChannel {
public:

	struct TArray<struct FFrameNumber> KeyTimes; // 0x10(0x10)
	char pad_20[0x18]; // 0x20(0x18)
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues; // 0x38(0x10)
	char pad_48[0x60]; // 0x48(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneCameraAnimSectionData {
public:

	struct UCameraAnim* CameraAnim; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float PlayScale; // 0x0c(0x04)
	float BlendInTime; // 0x10(0x04)
	float BlendOutTime; // 0x14(0x04)
	bool bLooping; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// Size: 0x20 (Inherited: 0x20)
struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneCameraShakeSectionData {
public:

	struct UClass* ShakeClass; // 0x00(0x08)
	float PlayScale; // 0x08(0x04)
	enum class ECameraAnimPlaySpace PlaySpace; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneEventPtrs {
public:

	struct UFunction* Function; // 0x00(0x08)
	/*struct TFieldPath<FNone>*/char BoundObjectProperty[0x20]; // 0x08(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Size: 0x90 (Inherited: 0x10)
struct FMovieSceneEventSectionData : public FMovieSceneChannel {
public:

	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FEventPayload> KeyValues; // 0x20(0x10)
	char pad_30[0x60]; // 0x30(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneEventParameters {
public:

	char pad_0[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
// Size: 0x38 (Inherited: 0x20)
struct FMovieSceneEventTemplateBase : public FMovieSceneEvalTemplate {
public:

	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x20(0x10)
	char bFireEventsWhenForwards : 1; // 0x30(0x01)
	char bFireEventsWhenBackwards : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size: 0x60 (Inherited: 0x20)
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate {
public:

	struct TArray<struct FScalarParameterNameAndCurve> Scalars; // 0x20(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> Vectors; // 0x30(0x10)
	struct TArray<struct FColorParameterNameAndCurves> Colors; // 0x40(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> Transforms; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// Size: 0xa0 (Inherited: 0xa0)
struct FMovieSceneParticleChannel : public FMovieSceneByteChannel {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// Size: 0xa8 (Inherited: 0x10)
struct FMovieSceneStringChannel : public FMovieSceneChannel {
public:

	struct TArray<struct FFrameNumber> Times; // 0x10(0x10)
	struct TArray<struct FString> Values; // 0x20(0x10)
	struct FString DefaultValue; // 0x30(0x10)
	bool bHasDefaultValue; // 0x40(0x01)
	char pad_41[0x67]; // 0x41(0x67)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size: 0xe0 (Inherited: 0x48)
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
public:

	struct FMovieSceneBoolChannel BoolCurve; // 0x48(0x98)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size: 0xe0 (Inherited: 0x00)
struct FMovieSceneSkeletalAnimationParams {
public:

	struct UAnimSequenceBase* Animation; // 0x00(0x08)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x08(0x04)
	struct FFrameNumber StartFrameOffset; // 0x0c(0x04)
	struct FFrameNumber EndFrameOffset; // 0x10(0x04)
	float PlayRate; // 0x14(0x04)
	char bReverse : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName SlotName; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct FMovieSceneFloatChannel Weight; // 0x28(0xa8)
	bool bSkipAnimNotifiers; // 0xd0(0x01)
	bool bForceCustomMode; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	float StartOffset; // 0xd4(0x04)
	float EndOffset; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneSubtitlesParams
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneSubtitlesParams {
public:

	struct FText SubtitleContent; // 0x00(0x18)
	bool bNoticeAudio; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t Priority; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// Size: 0x28 (Inherited: 0x08)
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct {
public:

	struct FFrameNumber Time; // 0x08(0x04)
	char pad_C[0x1c]; // 0x0c(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// Size: 0x6a0 (Inherited: 0x00)
struct FMovieScene3DTransformTemplateData {
public:

	struct FMovieSceneFloatChannel TranslationCurve[0x3]; // 0x00(0x1f8)
	struct FMovieSceneFloatChannel RotationCurve[0x3]; // 0x1f8(0x1f8)
	struct FMovieSceneFloatChannel ScaleCurve[0x3]; // 0x3f0(0x1f8)
	struct FMovieSceneFloatChannel ManualWeight; // 0x5e8(0xa8)
	enum class EMovieSceneBlendType BlendType; // 0x690(0x01)
	char pad_691[0x3]; // 0x691(0x03)
	struct FMovieSceneTransformMask Mask; // 0x694(0x04)
	bool bUseQuaternionInterpolation; // 0x698(0x01)
	char pad_699[0x7]; // 0x699(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Size: 0xf0 (Inherited: 0x20)
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate {
public:

	struct FMovieScenePropertySectionData PropertyData; // 0x20(0x28)
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0x48(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate {
public:

	struct FMovieSceneCameraAnimSectionData SourceData; // 0x20(0x20)
	struct FFrameNumber SectionStartTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// Size: 0x48 (Inherited: 0x20)
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate {
public:

	struct FMovieSceneCameraShakeSectionData SourceData; // 0x20(0x20)
	struct FFrameNumber SectionStartTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneEvent
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneEvent {
public:

	struct FMovieSceneEventPtrs Ptrs; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.EventPayload
// Size: 0x30 (Inherited: 0x00)
struct FEventPayload {
public:

	struct FName EventName; // 0x00(0x08)
	struct FMovieSceneEventParameters Parameters; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
// Size: 0x60 (Inherited: 0x38)
struct FMovieSceneEventRepeaterTemplate : public FMovieSceneEventTemplateBase {
public:

	struct FMovieSceneEventPtrs EventToTrigger; // 0x38(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
// Size: 0x58 (Inherited: 0x38)
struct FMovieSceneEventTriggerTemplate : public FMovieSceneEventTemplateBase {
public:

	struct TArray<struct FFrameNumber> EventTimes; // 0x38(0x10)
	struct TArray<struct FMovieSceneEventPtrs> Events; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Size: 0xc8 (Inherited: 0x38)
struct FMovieSceneEventSectionTemplate : public FMovieSceneEventTemplateBase {
public:

	struct FMovieSceneEventSectionData EventData; // 0x38(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// Size: 0x68 (Inherited: 0x60)
struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate {
public:

	struct UMaterialParameterCollection* MPC; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// Size: 0x68 (Inherited: 0x60)
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate {
public:

	int32_t MaterialIndex; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Size: 0x60 (Inherited: 0x60)
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// Size: 0xc0 (Inherited: 0x20)
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate {
public:

	struct FMovieSceneParticleChannel ParticleKeys; // 0x20(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// Size: 0xf0 (Inherited: 0x48)
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
public:

	struct FMovieSceneStringChannel StringCurve; // 0x48(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// Size: 0xe0 (Inherited: 0xe0)
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// Size: 0xe8 (Inherited: 0xe0)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams {
public:

	struct FFrameNumber SectionStartTime; // 0xe0(0x04)
	struct FFrameNumber SectionEndTime; // 0xe4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneSubtitlesTemplate
// Size: 0x40 (Inherited: 0x20)
struct FMovieSceneSubtitlesTemplate : public FMovieSceneEvalTemplate {
public:

	struct FMovieSceneSubtitlesParams Params; // 0x20(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// Size: 0x40 (Inherited: 0x28)
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase {
public:

	char pad_28[0x8]; // 0x28(0x08)
	struct FVector4 Vector; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// Size: 0x38 (Inherited: 0x28)
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase {
public:

	struct FVector Vector; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// Size: 0x30 (Inherited: 0x28)
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase {
public:

	struct FVector2D Vector; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
// Size: 0x6c0 (Inherited: 0x20)
struct FMovieSceneComponentTransformSectionTemplate : public FMovieSceneEvalTemplate {
public:

	struct FMovieScene3DTransformTemplateData TemplateData; // 0x20(0x6a0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
// Size: 0x6e8 (Inherited: 0x48)
struct FMovieSceneEulerTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
public:

	struct FMovieScene3DTransformTemplateData TemplateData; // 0x48(0x6a0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
// Size: 0x6e8 (Inherited: 0x48)
struct FMovieSceneTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
public:

	struct FMovieScene3DTransformTemplateData TemplateData; // 0x48(0x6a0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// Size: 0x108 (Inherited: 0x20)
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate {
public:

	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20(0xe8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
