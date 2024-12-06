
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MovieSceneTracks.MovieSceneTransformOrigin
// Size: 0x30 (Inherited: 0x30)
class UMovieSceneTransformOrigin : public UInterface {
public:


	struct FTransform BP_GetTransformOrigin(); // Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0x798 (Inherited: 0xf8)
class UMovieScene3DTransformSection : public UMovieSceneSection {
public:

	struct FMovieSceneTransformMask TransformMask; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FMovieSceneFloatChannel translation[0x3]; // 0x100(0x1f8)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x2f8(0x1f8)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x4f0(0x1f8)
	struct FMovieSceneFloatChannel ManualWeight; // 0x6e8(0xa8)
	char pad_790[0x4]; // 0x790(0x04)
	bool bUseQuaternionInterpolation; // 0x794(0x01)
	char pad_795[0x3]; // 0x795(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x230 (Inherited: 0xf8)
class UMovieSceneActorReferenceSection : public UMovieSceneSection {
public:

	struct FMovieSceneActorReferenceData ActorReferenceData; // 0xf8(0xa8)
	struct FIntegralCurve ActorGuidIndexCurve; // 0x1a0(0x80)
	struct TArray<struct FString> ActorGuidStrings; // 0x220(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x2a8 (Inherited: 0xf8)
class UMovieSceneAudioSection : public UMovieSceneSection {
public:

	struct USoundBase* Sound; // 0xf8(0x08)
	struct FFrameNumber StartFrameOffset; // 0x100(0x04)
	float StartOffset; // 0x104(0x04)
	float AudioStartTime; // 0x108(0x04)
	float AudioDilationFactor; // 0x10c(0x04)
	float AudioVolume; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FMovieSceneFloatChannel SoundVolume; // 0x118(0xa8)
	struct FMovieSceneFloatChannel PitchMultiplier; // 0x1c0(0xa8)
	bool bSuppressSubtitles; // 0x268(0x01)
	bool bOverrideAttenuation; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)
	struct USoundAttenuation* AttenuationSettings; // 0x270(0x08)
	/*struct FDelegate*/char OnQueueSubtitles[0x10]; // 0x278(0x10)
	/*struct FMulticastInlineDelegate*/char OnAudioFinished[0x10]; // 0x288(0x10)
	/*struct FMulticastInlineDelegate*/char OnAudioPlaybackPercent[0x10]; // 0x298(0x10)

	void SetStartOffset(struct FFrameNumber InStartOffset); // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0x70 (Inherited: 0x60)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack {
public:

	struct TArray<struct UMovieSceneSection*> AudioSections; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x198 (Inherited: 0xf8)
class UMovieSceneByteSection : public UMovieSceneSection {
public:

	struct FMovieSceneByteChannel ByteCurve; // 0xf8(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// Size: 0x138 (Inherited: 0xf8)
class UMovieSceneCameraAnimSection : public UMovieSceneSection {
public:

	struct FMovieSceneCameraAnimSectionData AnimData; // 0xf8(0x20)
	struct UCameraAnim* CameraAnim; // 0x118(0x08)
	float PlayRate; // 0x120(0x04)
	float PlayScale; // 0x124(0x04)
	float BlendInTime; // 0x128(0x04)
	float BlendOutTime; // 0x12c(0x04)
	bool bLooping; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size: 0x70 (Inherited: 0x60)
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack {
public:

	struct TArray<struct UMovieSceneSection*> CameraAnimSections; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0x120 (Inherited: 0xf8)
class UMovieSceneCameraCutSection : public UMovieSceneSection {
public:

	struct FGuid CameraGuid; // 0xf8(0x10)
	struct FMovieSceneObjectBindingID CameraBindingID; // 0x108(0x18)

	void SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID); // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0x70 (Inherited: 0x60)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack {
public:

	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0x138 (Inherited: 0xf8)
class UMovieSceneCameraShakeSection : public UMovieSceneSection {
public:

	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xf8(0x20)
	struct UClass* ShakeClass; // 0x118(0x08)
	float PlayScale; // 0x120(0x04)
	enum class ECameraAnimPlaySpace PlaySpace; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x128(0x0c)
	char pad_134[0x4]; // 0x134(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0x70 (Inherited: 0x60)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack {
public:

	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x190 (Inherited: 0x168)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection {
public:

	struct FString ShotDisplayName; // 0x168(0x10)
	struct FText DisplayName; // 0x178(0x18)

	void SetShotDisplayName(struct FString InShotDisplayName); // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0x88 (Inherited: 0x88)
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x398 (Inherited: 0xf8)
class UMovieSceneColorSection : public UMovieSceneSection {
public:

	struct FMovieSceneFloatChannel RedCurve; // 0xf8(0xa8)
	struct FMovieSceneFloatChannel GreenCurve; // 0x1a0(0xa8)
	struct FMovieSceneFloatChannel BlueCurve; // 0x248(0xa8)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x2f0(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x198 (Inherited: 0xf8)
class UMovieSceneEnumSection : public UMovieSceneSection {
public:

	struct FMovieSceneByteChannel EnumCurve; // 0xf8(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x200 (Inherited: 0xf8)
class UMovieSceneEventSection : public UMovieSceneSection {
public:

	struct FNameCurve Events; // 0xf8(0x78)
	struct FMovieSceneEventSectionData EventData; // 0x170(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneEventSubtitleSection
// Size: 0x118 (Inherited: 0xf8)
class UMovieSceneEventSubtitleSection : public UMovieSceneSection {
public:

	struct FText SubtitleContent; // 0xf8(0x18)
	bool bNoticeAudio; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	int32_t Priority; // 0x114(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x190 (Inherited: 0xf8)
class UMovieSceneIntegerSection : public UMovieSceneSection {
public:

	struct FMovieSceneIntegerChannel IntegerCurve; // 0xf8(0x98)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0x110 (Inherited: 0xf8)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection {
public:

	enum class ELevelVisibility Visibility; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct TArray<struct FName> LevelNames; // 0x100(0x10)

	void SetVisibility(enum class ELevelVisibility InVisibility); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0x70 (Inherited: 0x60)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack {
public:

	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
// Size: 0x1c8 (Inherited: 0xf8)
class UMovieSceneObjectPropertySection : public UMovieSceneSection {
public:

	struct FMovieSceneObjectPathChannel ObjectChannel; // 0xf8(0xd0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0x70 (Inherited: 0x60)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack {
public:

	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x198 (Inherited: 0xf8)
class UMovieSceneParticleSection : public UMovieSceneSection {
public:

	struct FMovieSceneParticleChannel ParticleKeys; // 0xf8(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0x70 (Inherited: 0x60)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack {
public:

	struct TArray<struct UMovieSceneSection*> ParticleSections; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Size: 0x1c8 (Inherited: 0xf8)
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection {
public:

	struct FMovieSceneObjectPathChannel MaterialChannel; // 0xf8(0xd0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x200 (Inherited: 0xf8)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection {
public:

	struct FMovieSceneSkeletalAnimationParams Params; // 0xf8(0xe0)
	struct UAnimSequence* AnimSequence; // 0x1d8(0x08)
	struct UAnimSequenceBase* Animation; // 0x1e0(0x08)
	float StartOffset; // 0x1e8(0x04)
	float EndOffset; // 0x1ec(0x04)
	float PlayRate; // 0x1f0(0x04)
	char bReverse : 1; // 0x1f4(0x01)
	char pad_1F4_1 : 7; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
	struct FName SlotName; // 0x1f8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0x78 (Inherited: 0x60)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack {
public:

	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x60(0x10)
	bool bUseLegacySectionIndexBlend; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// Size: 0x80 (Inherited: 0x60)
class UMovieSceneSpawnTrack : public UMovieSceneTrack {
public:

	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
	struct FGuid ObjectGuid; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x1a0 (Inherited: 0xf8)
class UMovieSceneStringSection : public UMovieSceneSection {
public:

	struct FMovieSceneStringChannel StringCurve; // 0xf8(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneVectorSection
// Size: 0x3a0 (Inherited: 0xf8)
class UMovieSceneVectorSection : public UMovieSceneSection {
public:

	struct FMovieSceneFloatChannel Curves[0x4]; // 0xf8(0x2a0)
	int32_t ChannelsUsed; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0x88 (Inherited: 0x60)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack {
public:

	char bFireEventsWhenForwards : 1; // 0x60(0x01)
	char bFireEventsWhenBackwards : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	enum class EFireEventsAtPosition EventPosition; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct FMovieSceneObjectBindingID> EventReceivers; // 0x68(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0x120 (Inherited: 0xf8)
class UMovieScene3DConstraintSection : public UMovieSceneSection {
public:

	struct FGuid ConstraintId; // 0xf8(0x10)
	struct FMovieSceneObjectBindingID ConstraintBindingID; // 0x108(0x18)

	void SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID); // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0x70 (Inherited: 0x60)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack {
public:

	struct TArray<struct UMovieSceneSection*> ConstraintSections; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0x98 (Inherited: 0x60)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack {
public:

	struct UMovieSceneSection* SectionToKey; // 0x60(0x08)
	struct FName PropertyName; // 0x68(0x08)
	struct FString PropertyPath; // 0x70(0x10)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x80(0x10)
	bool bCanBlend; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	int32_t EaseOutDuration; // 0x94(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneBoolSection
// Size: 0x198 (Inherited: 0xf8)
class UMovieSceneBoolSection : public UMovieSceneSection {
public:

	bool DefaultValue; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FMovieSceneBoolChannel BoolCurve; // 0x100(0x98)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 0xf8 (Inherited: 0xf8)
class UMovieSceneEventSectionBase : public UMovieSceneSection {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x1a0 (Inherited: 0xf8)
class UMovieSceneFloatSection : public UMovieSceneSection {
public:

	struct FMovieSceneFloatChannel FloatCurve; // 0xf8(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0x70 (Inherited: 0x60)
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack {
public:

	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x138 (Inherited: 0xf8)
class UMovieSceneParameterSection : public UMovieSceneSection {
public:

	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x108(0x10)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x118(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x128(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneEventSubtitlesTrack
// Size: 0x88 (Inherited: 0x88)
class UMovieSceneEventSubtitlesTrack : public UMovieSceneEventTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0x138 (Inherited: 0x120)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection {
public:

	struct FName AttachSocketName; // 0x120(0x08)
	struct FName AttachComponentName; // 0x128(0x08)
	enum class EAttachmentRule AttachmentLocationRule; // 0x130(0x01)
	enum class EAttachmentRule AttachmentRotationRule; // 0x131(0x01)
	enum class EAttachmentRule AttachmentScaleRule; // 0x132(0x01)
	enum class EDetachmentRule DetachmentLocationRule; // 0x133(0x01)
	enum class EDetachmentRule DetachmentRotationRule; // 0x134(0x01)
	enum class EDetachmentRule DetachmentScaleRule; // 0x135(0x01)
	char pad_136[0x2]; // 0x136(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x1d0 (Inherited: 0x120)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection {
public:

	struct FMovieSceneFloatChannel TimingCurve; // 0x120(0xa8)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1c8(0x01)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0x1c9(0x01)
	char pad_1CA[0x2]; // 0x1ca(0x02)
	char bFollow : 1; // 0x1cc(0x01)
	char bReverse : 1; // 0x1cc(0x01)
	char bForceUpright : 1; // 0x1cc(0x01)
	char pad_1CC_3 : 5; // 0x1cc(0x01)
	char pad_1CD[0x3]; // 0x1cd(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0x70 (Inherited: 0x70)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0x70 (Inherited: 0x70)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0x98 (Inherited: 0x98)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0x98 (Inherited: 0x98)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0x98 (Inherited: 0x98)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0xa0 (Inherited: 0x98)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack {
public:

	struct UEnum* Enum; // 0x98(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0xa0 (Inherited: 0x98)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack {
public:

	bool bIsSlateColor; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0xa0 (Inherited: 0x98)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack {
public:

	struct UEnum* Enum; // 0x98(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Size: 0x98 (Inherited: 0x98)
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0x98 (Inherited: 0x98)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0x98 (Inherited: 0x98)
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Size: 0xa8 (Inherited: 0x98)
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack {
public:

	struct UClass* PropertyClass; // 0x98(0x08)
	bool bForceSoftPtr; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size: 0xa0 (Inherited: 0x98)
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack {
public:

	int32_t MaterialIndex; // 0x98(0x04)
	bool bForceSoftPtr; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0x98 (Inherited: 0x98)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneTransformTrack
// Size: 0x98 (Inherited: 0x98)
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0xa0 (Inherited: 0x98)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack {
public:

	int32_t NumChannelsUsed; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneSpawnSection
// Size: 0x198 (Inherited: 0x198)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Size: 0x120 (Inherited: 0xf8)
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase {
public:

	struct FMovieSceneEvent Event; // 0xf8(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
// Size: 0x188 (Inherited: 0xf8)
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase {
public:

	struct FMovieSceneEventChannel EventChannel; // 0xf8(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x1b8 (Inherited: 0x1a0)
class UMovieSceneFadeSection : public UMovieSceneFloatSection {
public:

	struct FLinearColor FadeColor; // 0x1a0(0x10)
	char bFadeAudio : 1; // 0x1b0(0x01)
	char pad_1B0_1 : 7; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x1a0 (Inherited: 0x1a0)
class UMovieSceneSlomoSection : public UMovieSceneFloatSection {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0x78 (Inherited: 0x70)
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack {
public:

	struct UMaterialParameterCollection* MPC; // 0x70(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0x78 (Inherited: 0x70)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack {
public:

	int32_t MaterialIndex; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneParameterWithMaterialInsSection
// Size: 0x1d8 (Inherited: 0x138)
class UMovieSceneParameterWithMaterialInsSection : public UMovieSceneParameterSection {
public:

	struct FMaterialParameterNameAndIns MaterialParamNameAndIns; // 0x138(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0x98 (Inherited: 0x98)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0x98 (Inherited: 0x98)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0x98 (Inherited: 0x98)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
