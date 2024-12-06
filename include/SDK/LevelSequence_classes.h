
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class LevelSequence.LevelSequenceActor
// Size: 0x768 (Inherited: 0x378)
class ALevelSequenceActor : public AActor {
public:

	char pad_378[0x10]; // 0x378(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x388(0x14)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct ULevelSequencePlayer* SequencePlayer; // 0x3a0(0x08)
	struct FSoftObjectPath LevelSequence; // 0x3a8(0x18)
	float SubSequenceFadeTime; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct TMap<struct FString, struct FSubLevelSequenceGroup> SubLevelSequenceGroup; // 0x3c8(0x50)
	char pad_418[0x50]; // 0x418(0x50)
	struct TArray<struct AActor*> AdditionalEventReceivers; // 0x468(0x10)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x478(0x02)
	char pad_47A[0x6]; // 0x47a(0x06)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x480(0x08)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x488(0x08)
	char PlaybackPriority; // 0x490(0x01)
	char bAutoPlay : 1; // 0x491(0x01)
	char bOverrideInstanceData : 1; // 0x491(0x01)
	char bReplicatePlayback : 1; // 0x491(0x01)
	char pad_491_3 : 5; // 0x491(0x01)
	char pad_492[0x6]; // 0x492(0x06)
	struct UObject* DefaultInstanceData; // 0x498(0x08)
	struct TMap<struct FString, struct FSoftObjectPath> MobileSequencesForSubLevelSequenceVolume; // 0x4a0(0x50)
	struct TMap<struct FString, struct FSoftObjectPath> PC_SequencesForSubLevelSequenceVolume; // 0x4f0(0x50)
	int32_t SequenceManagerPriority; // 0x540(0x04)
	char pad_544[0x214]; // 0x544(0x214)
	struct ULevelSequenceBurnIn* BurnInInstance; // 0x758(0x08)
	bool bShowBurnin; // 0x760(0x01)
	char pad_761[0x7]; // 0x761(0x07)

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LevelSequence.LevelSequenceDirector
// Size: 0x38 (Inherited: 0x30)
class ULevelSequenceDirector : public UObject {
public:

	struct ULevelSequencePlayer* Player; // 0x30(0x08)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0x80 (Inherited: 0x30)
class UDefaultLevelSequenceInstanceData : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct AActor* TransformOriginActor; // 0x38(0x08)
	struct FTransform TransformOrigin; // 0x40(0x30)
	bool bConsiderWorldOriginRebasing; // 0x70(0x01)
	char pad_71[0xf]; // 0x71(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LevelSequence.LevelSequenceMetaData
// Size: 0x30 (Inherited: 0x30)
class ULevelSequenceMetaData : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LevelSequence.InteriorFogComponent
// Size: 0x5e0 (Inherited: 0x590)
class UInteriorFogComponent : public UBoxComponent {
public:

	struct UMaterialInterface* InteriorFogMaterial; // 0x590(0x08)
	struct FLinearColor Albedo; // 0x598(0x10)
	float ExtinctionScale; // 0x5a8(0x04)
	float ExcludeRange; // 0x5ac(0x04)
	float ExcludeOpacity; // 0x5b0(0x04)
	bool bUseOverrideSettings; // 0x5b4(0x01)
	char pad_5B5[0x3]; // 0x5b5(0x03)
	float ExtendVisibleDistance; // 0x5b8(0x04)
	bool bUseOverrideVisibleDistance; // 0x5bc(0x01)
	char pad_5BD[0x3]; // 0x5bd(0x03)
	float InsideSwitch; // 0x5c0(0x04)
	char pad_5C4[0x4]; // 0x5c4(0x04)
	struct UStaticMeshComponent* FogMesh; // 0x5c8(0x08)
	float CurExtendVisibleDistance; // 0x5d0(0x04)
	char pad_5D4[0xc]; // 0x5d4(0x0c)

	void SetExtinctionScale(float NewExtinctionScale); // Function LevelSequence.InteriorFogComponent.SetExtinctionScale // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LevelSequence.LevelSequence
// Size: 0x520 (Inherited: 0x3c8)
class ULevelSequence : public UMovieSceneSequence {
public:

	struct UMovieScene* MovieScene; // 0x3c8(0x08)
	bool bIgnoreReferenceObjectCache; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x3d8(0x50)
	struct FLevelSequenceBindingReferences BindingReferences; // 0x428(0xa0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x4c8(0x50)
	struct UClass* DirectorClass; // 0x518(0x08)

	void RemoveMetaDataByClass(struct UClass* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x30 (Inherited: 0x30)
class ULevelSequenceBurnInInitSettings : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x58 (Inherited: 0x30)
class ULevelSequenceBurnInOptions : public UObject {
public:

	bool bUseBurnIn; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FSoftClassPath BurnInClass; // 0x38(0x18)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x50(0x08)

	void SetBurnIn(struct FSoftClassPath InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x358 (Inherited: 0x298)
class ULevelSequenceBurnIn : public UUserWidget {
public:

	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x298(0xb8)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x350(0x08)

	void SetSettings(struct UObject* InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0xa8 (Inherited: 0xa8)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LevelSequence.LevelSequencePlayer
// Size: 0xb10 (Inherited: 0x9f0)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer {
public:

	/*struct FMulticastInlineDelegate*/char OnCameraCut[0x10]; // 0x9f0(0x10)
	char pad_A00[0x110]; // 0xa00(0x110)

	struct UCameraComponent* GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LevelSequence.SubLevelSequenceVolumeManager
// Size: 0x130 (Inherited: 0x38)
class USubLevelSequenceVolumeManager : public UWorldSubsystem {
public:

	char pad_38[0xf8]; // 0x38(0xf8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LevelSequence.SubLevelSequenceVolume
// Size: 0x770 (Inherited: 0x590)
class USubLevelSequenceVolume : public UBoxComponent {
public:

	struct FString GroupName; // 0x590(0x10)
	struct TMap<struct FString, struct FVolumeSequence> MobileSeq; // 0x5a0(0x50)
	struct TMap<struct FString, struct FVolumeSequence> PcSeq; // 0x5f0(0x50)
	struct TMap<struct FString, struct FVolumeSequence> GeneralSeq; // 0x640(0x50)
	float FadeDistance; // 0x690(0x04)
	bool bUseVolumeSkyLight; // 0x694(0x01)
	bool bForbidFog; // 0x695(0x01)
	char pad_696[0x2]; // 0x696(0x02)
	struct UInteriorFogComponent* InteriorFog; // 0x698(0x08)
	char pad_6A0[0xd0]; // 0x6a0(0xd0)

	void SetVolumeSequence(struct FString SequenceNameInManager, struct FSoftObjectPath Path, int32_t Priority); // Function LevelSequence.SubLevelSequenceVolume.SetVolumeSequence // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
