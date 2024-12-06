
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class LiteSequence.LiteSequence
// Size: 0x98 (Inherited: 0x30)
class ULiteSequence : public UObject {
public:

	struct TMap<struct FGuid, struct FLiteSequenceComponentBinding> ComponentBindings; // 0x30(0x50)
	struct FPlaybackRange PlaybackRange; // 0x80(0x08)
	uint64_t TickResolution; // 0x88(0x08)
	uint64_t DisplayRate; // 0x90(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LiteSequence.LiteSequenceConsoleCommand
// Size: 0x30 (Inherited: 0x30)
class ULiteSequenceConsoleCommand : public UObject {
public:


	void TestPlayLiteSequence(struct FName& SequenceName); // Function LiteSequence.LiteSequenceConsoleCommand.TestPlayLiteSequence // (Final|Exec|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LiteSequence.LiteSequencePerformanceTest
// Size: 0x3e8 (Inherited: 0x378)
class ALiteSequencePerformanceTest : public AActor {
public:

	struct FSoftObjectPath LiteSequencePath; // 0x378(0x18)
	struct FSoftObjectPath LevelSequencePath; // 0x390(0x18)
	char pad_3A8[0x18]; // 0x3a8(0x18)
	double CollectingTime; // 0x3c0(0x08)
	char pad_3C8[0x10]; // 0x3c8(0x10)
	struct ULiteSequence* LiteSequence; // 0x3d8(0x08)
	struct ULevelSequence* LevelSequence; // 0x3e0(0x08)

	void PerformanceTestStart(bool bTestLevelSequence, float InRate); // Function LiteSequence.LiteSequencePerformanceTest.PerformanceTestStart // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LiteSequence.InstanceContainer
// Size: 0x378 (Inherited: 0x378)
class AInstanceContainer : public AActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LiteSequence.LiteSequencePlayerComponent
// Size: 0x450 (Inherited: 0x100)
class ULiteSequencePlayerComponent : public UActorComponent {
public:

	char pad_100[0x10]; // 0x100(0x10)
	struct FSoftObjectPath LiteSequencePath; // 0x110(0x18)
	struct FLiteSequencePlaybackParams Params; // 0x128(0x08)
	bool bUseOriginSequenceAsset; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FSoftObjectPath OriginSequencePath; // 0x138(0x18)
	char pad_150[0xf0]; // 0x150(0xf0)
	struct ULiteSequence* Sequence; // 0x240(0x08)
	struct TWeakObjectPtr<struct AActor> AttachOwner; // 0x248(0x08)
	struct AActor* InstanceContainer; // 0x250(0x08)
	struct USceneComponent* InstanceSocket; // 0x258(0x08)
	struct FFrameNumber StartTime; // 0x260(0x04)
	int32_t DurationFrames; // 0x264(0x04)
	int32_t CurrentNumLoops; // 0x268(0x04)
	int32_t LoopCount; // 0x26c(0x04)
	char pad_270[0x18]; // 0x270(0x18)
	struct USceneComponent* AttachSocket; // 0x288(0x08)
	struct FName AttachSocketName; // 0x290(0x08)
	struct UGPAudioEventAsset* AudioEventAsset; // 0x298(0x08)
	char pad_2A0[0x1b0]; // 0x2a0(0x1b0)

	void TryLoadAudioInternal(struct FSoftObjectPath& AudioPath); // Function LiteSequence.LiteSequencePlayerComponent.TryLoadAudioInternal // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LiteSequence.LiteSequencePlayerManager
// Size: 0xe0 (Inherited: 0x38)
class ULiteSequencePlayerManager : public UGameInstanceSubsystem {
public:

	char pad_38[0xa8]; // 0x38(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LiteSequence.LiteSequenceResourceManager
// Size: 0x48 (Inherited: 0x38)
class ULiteSequenceResourceManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LiteSequence.LiteSequenceTrack
// Size: 0x50 (Inherited: 0x30)
class ULiteSequenceTrack : public UObject {
public:

	bool bIsEvalDisabled; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FGuid BindingGuid; // 0x34(0x10)
	struct FPlaybackRange SectionRange; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LiteSequence.LiteSequence3DTransformTrack
// Size: 0x2d8 (Inherited: 0x50)
class ULiteSequence3DTransformTrack : public ULiteSequenceTrack {
public:

	struct FLiteSequenceFloatChannel translation[0x3]; // 0x50(0xc0)
	struct FLiteSequenceFloatChannel Rotation[0x3]; // 0x110(0xc0)
	struct FLiteSequenceFloatChannel Scale[0x3]; // 0x1d0(0xc0)
	struct FLiteSequenceFloatChannel ManualWeight; // 0x290(0x40)
	bool bUseQuaternionInterpolation; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LiteSequence.LiteSequenceParticleTrack
// Size: 0x80 (Inherited: 0x50)
class ULiteSequenceParticleTrack : public ULiteSequenceTrack {
public:

	struct FLiteSequenceParticleChannel ParticleKeys; // 0x50(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LiteSequence.LiteSequenceSpawnTrack
// Size: 0x80 (Inherited: 0x50)
class ULiteSequenceSpawnTrack : public ULiteSequenceTrack {
public:

	struct FLiteSequenceBoolChannel BoolCurve; // 0x50(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LiteSequence.LiteSequenceComponentMaterialTrack
// Size: 0x78 (Inherited: 0x50)
class ULiteSequenceComponentMaterialTrack : public ULiteSequenceTrack {
public:

	int32_t MaterialIndex; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FScalarParameterCurves> Scalars; // 0x58(0x10)
	struct TArray<struct FColorParameterCurves> Colors; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LiteSequence.LiteSequenceSkeletalAnimationTrack
// Size: 0x68 (Inherited: 0x50)
class ULiteSequenceSkeletalAnimationTrack : public ULiteSequenceTrack {
public:

	struct UAnimSequenceBase* Animation; // 0x50(0x08)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x58(0x04)
	struct FFrameNumber StartFrameOffset; // 0x5c(0x04)
	struct FFrameNumber EndFrameOffset; // 0x60(0x04)
	float PlayRate; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
