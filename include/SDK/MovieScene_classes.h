
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MovieScene.MovieSceneSequencePlayer
// Size: 0x9f0 (Inherited: 0x30)
class UMovieSceneSequencePlayer : public UObject {
public:

	char pad_30[0x4b8]; // 0x30(0x4b8)
	/*struct FMulticastInlineDelegate*/char OnPlay[0x10]; // 0x4e8(0x10)
	/*struct FMulticastInlineDelegate*/char OnPlayReverse[0x10]; // 0x4f8(0x10)
	/*struct FMulticastInlineDelegate*/char OnStop[0x10]; // 0x508(0x10)
	/*struct FMulticastInlineDelegate*/char OnPause[0x10]; // 0x518(0x10)
	/*struct FMulticastInlineDelegate*/char OnFinished[0x10]; // 0x528(0x10)
	enum class EMovieScenePlayerStatus Status; // 0x538(0x01)
	char pad_539[0x3]; // 0x539(0x03)
	char bReversePlayback : 1; // 0x53c(0x01)
	char pad_53C_1 : 7; // 0x53c(0x01)
	char pad_53D[0x3]; // 0x53d(0x03)
	struct UMovieSceneSequence* Sequence; // 0x540(0x08)
	struct FFrameNumber StartTime; // 0x548(0x04)
	int32_t DurationFrames; // 0x54c(0x04)
	int32_t CurrentNumLoops; // 0x550(0x04)
	char pad_554[0x14]; // 0x554(0x14)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x568(0x14)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x580(0x3a8)
	char pad_928[0x68]; // 0x928(0x68)
	struct FMovieSceneSequenceReplProperties NetSyncProps; // 0x990(0x10)
	/*struct TScriptInterface<IMovieScenePlaybackClient>*/char PlaybackClient[0x10]; // 0x9a0(0x10)
	char pad_9B0[0x40]; // 0x9b0(0x40)

	void UpdateTimeCursorPosition(struct FFrameTime NewPosition, enum class EUpdatePositionMethod Method); // Function MovieScene.MovieSceneSequencePlayer.UpdateTimeCursorPosition // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieScenePrespawnObjectState
// Size: 0x38 (Inherited: 0x30)
class UMovieScenePrespawnObjectState : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieScenePlaybackClient
// Size: 0x30 (Inherited: 0x30)
class UMovieScenePlaybackClient : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieSceneBindingOverrides
// Size: 0x98 (Inherited: 0x30)
class UMovieSceneBindingOverrides : public UObject {
public:

	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // 0x30(0x10)
	char pad_40[0x58]; // 0x40(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x30 (Inherited: 0x30)
class UMovieSceneBindingOwnerInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x40 (Inherited: 0x30)
class UMovieSceneBuiltInEasingFunction : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	enum class EMovieSceneBuiltInEasing Type; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x40 (Inherited: 0x30)
class UMovieSceneEasingExternalCurve : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct UCurveFloat* Curve; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieSceneEasingFunction
// Size: 0x30 (Inherited: 0x30)
class UMovieSceneEasingFunction : public UInterface {
public:


	float OnEvaluate(float Interp); // Function MovieScene.MovieSceneEasingFunction.OnEvaluate // (Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieSceneFolder
// Size: 0x78 (Inherited: 0x30)
class UMovieSceneFolder : public UObject {
public:

	struct FName FolderName; // 0x30(0x08)
	struct TArray<struct UMovieSceneFolder*> ChildFolders; // 0x38(0x10)
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks; // 0x48(0x10)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieSceneKeyProxy
// Size: 0x30 (Inherited: 0x30)
class UMovieSceneKeyProxy : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieSceneSignedObject
// Size: 0x58 (Inherited: 0x30)
class UMovieSceneSignedObject : public UObject {
public:

	struct FGuid Signature; // 0x30(0x10)
	char pad_40[0x18]; // 0x40(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieSceneSection
// Size: 0xf8 (Inherited: 0x58)
class UMovieSceneSection : public UMovieSceneSignedObject {
public:

	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x58(0x02)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct FMovieSceneEasingSettings Easing; // 0x60(0x48)
	struct FMovieSceneFrameRange SectionRange; // 0xa8(0x10)
	struct FFrameNumber PreRollFrames; // 0xb8(0x04)
	struct FFrameNumber PostRollFrames; // 0xbc(0x04)
	int32_t RowIndex; // 0xc0(0x04)
	int32_t OverlapPriority; // 0xc4(0x04)
	char bIsActive : 1; // 0xc8(0x01)
	char bIsLocked : 1; // 0xc8(0x01)
	char pad_C8_2 : 6; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float StartTime; // 0xcc(0x04)
	float EndTime; // 0xd0(0x04)
	float PrerollTime; // 0xd4(0x04)
	float PostrollTime; // 0xd8(0x04)
	char bIsInfinite : 1; // 0xdc(0x01)
	char pad_DC_1 : 7; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	bool bSupportsInfiniteRange; // 0xe0(0x01)
	struct FOptionalMovieSceneBlendType BlendType; // 0xe1(0x02)
	char pad_E3[0x15]; // 0xe3(0x15)

	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieSceneTrack
// Size: 0x60 (Inherited: 0x58)
class UMovieSceneTrack : public UMovieSceneSignedObject {
public:

	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x58(0x04)
	char pad_5C[0x1]; // 0x5c(0x01)
	bool bIsEvalDisabled; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieSceneSequence
// Size: 0x3c8 (Inherited: 0x58)
class UMovieSceneSequence : public UMovieSceneSignedObject {
public:

	char pad_58[0x20]; // 0x58(0x20)
	struct FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate; // 0x78(0x2f0)
	enum class EMovieSceneCompletionMode DefaultCompletionMode; // 0x368(0x01)
	bool bParentContextsAreSignificant; // 0x369(0x01)
	bool bPlayableDirectly; // 0x36a(0x01)
	char pad_36B[0x5d]; // 0x36b(0x5d)

	void UnbindPossessableObjects(struct FGuid& ObjectId); // Function MovieScene.MovieSceneSequence.UnbindPossessableObjects // (Native|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieScene
// Size: 0x140 (Inherited: 0x58)
class UMovieScene : public UMovieSceneSignedObject {
public:

	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x58(0x10)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x68(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0x78(0x10)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; // 0x88(0x50)
	struct TArray<struct UMovieSceneTrack*> MasterTracks; // 0xd8(0x10)
	struct UMovieSceneSubTrack* RuntimeSubTrack; // 0xe8(0x08)
	struct UMovieSceneTrack* CameraCutTrack; // 0xf0(0x08)
	struct FMovieSceneFrameRange SelectionRange; // 0xf8(0x10)
	struct FMovieSceneFrameRange PlaybackRange; // 0x108(0x10)
	struct FFrameRate TickResolution; // 0x118(0x08)
	struct FFrameRate DisplayRate; // 0x120(0x08)
	enum class EMovieSceneEvaluationType EvaluationType; // 0x128(0x01)
	enum class EUpdateClockSource ClockSource; // 0x129(0x01)
	char pad_12A[0x6]; // 0x12a(0x06)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; // 0x130(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieSceneSubSection
// Size: 0x168 (Inherited: 0xf8)
class UMovieSceneSubSection : public UMovieSceneSection {
public:

	struct FMovieSceneSectionParameters Parameters; // 0xf8(0x18)
	float StartOffset; // 0x110(0x04)
	float TimeScale; // 0x114(0x04)
	float PrerollTime; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct UMovieSceneSequence* SubSequence; // 0x120(0x08)
	/*LazyObjectProperty*/char ActorToRecord[0x1c]; // 0x128(0x1c)
	char pad_144[0x4]; // 0x144(0x04)
	struct FString TargetSequenceName; // 0x148(0x10)
	struct FDirectoryPath TargetPathToRecordTo; // 0x158(0x10)

	void SetSequence(struct UMovieSceneSequence* Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.TestMovieSceneSection
// Size: 0xf8 (Inherited: 0xf8)
class UTestMovieSceneSection : public UMovieSceneSection {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0x60 (Inherited: 0x60)
class UMovieSceneNameableTrack : public UMovieSceneTrack {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.TestMovieSceneTrack
// Size: 0x78 (Inherited: 0x60)
class UTestMovieSceneTrack : public UMovieSceneTrack {
public:

	bool bHighPassFilter; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.TestMovieSceneSequence
// Size: 0x3d0 (Inherited: 0x3c8)
class UTestMovieSceneSequence : public UMovieSceneSequence {
public:

	struct UMovieScene* MovieScene; // 0x3c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MovieScene.MovieSceneSubTrack
// Size: 0x88 (Inherited: 0x60)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack {
public:

	struct TArray<struct UMovieSceneSection*> Sections; // 0x60(0x10)
	bool bActiveInEditorOnly; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString CustomGroupName; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
