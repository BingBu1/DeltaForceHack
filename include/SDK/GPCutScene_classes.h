
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPCutScene.GPSequenceActorStream
// Size: 0x448 (Inherited: 0x378)
class AGPSequenceActorStream : public AActor {
public:

	struct FSeqStreamSection CurSection; // 0x378(0x20)
	struct FSeqStreamSection LastSection; // 0x398(0x20)
	char pad_3B8[0x30]; // 0x3b8(0x30)
	struct TArray<struct FSeqStreamSection> SequenceStream; // 0x3e8(0x10)
	char pad_3F8[0x50]; // 0x3f8(0x50)

	void StopSequenceStream(); // Function GPCutScene.GPSequenceActorStream.StopSequenceStream // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceBaker
// Size: 0x70 (Inherited: 0x30)
class UGPSequenceBaker : public UObject {
public:

	bool bBaking; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t BakeFrame; // 0x34(0x04)
	float BakeTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct ULevelSequencePlayer* LevelSequencePlayer; // 0x40(0x08)
	char pad_48[0x28]; // 0x48(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceBindingComponent
// Size: 0x188 (Inherited: 0x100)
class UGPSequenceBindingComponent : public UActorComponent {
public:

	char pad_100[0x10]; // 0x100(0x10)
	bool bIsBinding; // 0x110(0x01)
	enum class EGPSequenceBindingActorType BindingActorType; // 0x111(0x01)
	char pad_112[0x2]; // 0x112(0x02)
	int32_t RelevantPlayerIndex; // 0x114(0x04)
	struct TWeakObjectPtr<struct ALevelSequenceActor> SequenceActor; // 0x118(0x08)
	bool bServerDebugDraw; // 0x120(0x01)
	char pad_121[0x13]; // 0x121(0x13)
	bool bCanBreak; // 0x134(0x01)
	char pad_135[0xb]; // 0x135(0x0b)
	struct FTransform ServerDebugBox; // 0x140(0x30)
	char pad_170[0x1]; // 0x170(0x01)
	bool bDisablePhysics; // 0x171(0x01)
	bool bDisableCollision; // 0x172(0x01)
	bool bDisableMovement; // 0x173(0x01)
	bool bDisabledAI; // 0x174(0x01)
	bool bCutSceneMode; // 0x175(0x01)
	char pad_176[0x2]; // 0x176(0x02)
	struct TWeakObjectPtr<struct AGPSequenceMannequin> BoundMannequin; // 0x178(0x08)
	float ActingSpeed; // 0x180(0x04)
	enum class EGPSequencePerspectiveMode PerspectiveMode; // 0x184(0x01)
	bool bEnableMovementInput; // 0x185(0x01)
	bool bEnableLootAtInput; // 0x186(0x01)
	char pad_187[0x1]; // 0x187(0x01)

	void TestSetTPPMode(); // Function GPCutScene.GPSequenceBindingComponent.TestSetTPPMode // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceBindingTags
// Size: 0x30 (Inherited: 0x30)
class UGPSequenceBindingTags : public UObject {
public:


	struct FName STATIC_GetVehicleTag(int32_t Index); // Function GPCutScene.GPSequenceBindingTags.GetVehicleTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceCameraActor
// Size: 0xd70 (Inherited: 0xd60)
class AGPSequenceCameraActor : public ACineCameraActor {
public:

	enum class ESequenceCameraType CameraType; // 0xd60(0x01)
	char pad_D61[0x7]; // 0xd61(0x07)
	struct UGPSequenceCameraComponent* SequenceCameraComponent; // 0xd68(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceCameraComponent
// Size: 0xd20 (Inherited: 0xd10)
class UGPSequenceCameraComponent : public UCineCameraComponent {
public:

	enum class ESequenceCameraType CameraType; // 0xd10(0x01)
	char pad_D11[0xf]; // 0xd11(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceDebugActor
// Size: 0x388 (Inherited: 0x378)
class AGPSequenceDebugActor : public AActor {
public:

	struct TArray<struct FSoftObjectPath> LevelsToLoad; // 0x378(0x10)

	void LoadLevel(); // Function GPCutScene.GPSequenceDebugActor.LoadLevel // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceDebugComponent
// Size: 0x100 (Inherited: 0x100)
class UGPSequenceDebugComponent : public UActorComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceDefaultProxy
// Size: 0x418 (Inherited: 0x400)
class AGPSequenceDefaultProxy : public ASkeletalMeshActor {
public:

	char pad_400[0x18]; // 0x400(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceGlobalConfig
// Size: 0x58 (Inherited: 0x40)
class UGPSequenceGlobalConfig : public UDeveloperSettings {
public:

	bool bDrawGizmos; // 0x40(0x01)
	bool bDrawTitle; // 0x41(0x01)
	bool bDrawPreloadTrigger; // 0x42(0x01)
	bool bDrawBindingSpawner; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)
	struct UClass* DefaultVehicleClass; // 0x48(0x08)
	struct UClass* DefaultCharacterClass; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceMannequin
// Size: 0x390 (Inherited: 0x378)
class AGPSequenceMannequin : public AActor {
public:

	char pad_378[0x18]; // 0x378(0x18)

	void OnSequenceEnd(struct AGPSequenceActor* InOwnerSequence); // Function GPCutScene.GPSequenceMannequin.OnSequenceEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceMannequinAssemblyComponent
// Size: 0x130 (Inherited: 0x100)
class UGPSequenceMannequinAssemblyComponent : public UActorComponent {
public:

	struct TArray<struct UClass*> TypeOfComponentsToDuplicates; // 0x100(0x10)
	struct TArray<struct FName> IncludedComponents; // 0x110(0x10)
	struct TArray<struct FName> ExcludedComponents; // 0x120(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequencePrepareComponent
// Size: 0x150 (Inherited: 0x100)
class UGPSequencePrepareComponent : public UActorComponent {
public:

	bool bEnablePreload; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct TArray<struct FSoftObjectPath> PreloadSubLevels; // 0x108(0x10)
	float PreloadRadius; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct FVector> StreamInLocation; // 0x120(0x10)
	struct TArray<struct ULevelStreaming*> PreloadSubLevelPtrs; // 0x130(0x10)
	struct ATriggerBase* PreloadTrigger; // 0x140(0x08)
	char pad_148[0x8]; // 0x148(0x08)

	void TestPreload(); // Function GPCutScene.GPSequencePrepareComponent.TestPreload // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequencePreSpawnComponent
// Size: 0x210 (Inherited: 0x100)
class UGPSequencePreSpawnComponent : public UActorComponent {
public:

	bool bEnablePrespawn; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float PrespawnFrameTimeOccupancy; // 0x104(0x04)
	float PrespawnRange; // 0x108(0x04)
	float TimeToPrespawnInAdvance; // 0x10c(0x04)
	char pad_110[0x48]; // 0x110(0x48)
	struct AGPSequenceActor* Owner; // 0x158(0x08)
	char pad_160[0x8]; // 0x160(0x08)
	struct ULevelSequencePlayer* Player; // 0x168(0x08)
	char pad_170[0x20]; // 0x170(0x20)
	/*struct TSet<struct UGPSequencePrespawnObjectState*>*/char PrespawnObjectStateCache[0x50]; // 0x190(0x50)
	struct ATriggerSphere* PrespawnTrigger; // 0x1e0(0x08)
	char pad_1E8[0x18]; // 0x1e8(0x18)
	struct TArray<struct AActor*> CurrentPrespawnedActors; // 0x200(0x10)

	void OnTriggerPrespawn(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function GPCutScene.GPSequencePreSpawnComponent.OnTriggerPrespawn // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequencePrespawnObjectState
// Size: 0x88 (Inherited: 0x38)
class UGPSequencePrespawnObjectState : public UMovieScenePrespawnObjectState {
public:

	char pad_38[0x50]; // 0x38(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceProxy
// Size: 0x410 (Inherited: 0x400)
class AGPSequenceProxy : public ASkeletalMeshActor {
public:

	struct AActor* BindingActor; // 0x400(0x08)
	struct UAnimationAsset* LastAnimAsset; // 0x408(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceSystem
// Size: 0xac0 (Inherited: 0x38)
class UGPSequenceSystem : public UWorldSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnBeginCutScene[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnEndCutScene[0x10]; // 0x48(0x10)
	struct TMap<struct FName, struct TWeakObjectPtr<struct AGPSequenceActor>> CachedSequenceActors; // 0x58(0x50)
	char pad_A8[0x10]; // 0xa8(0x10)
	struct AGPSequenceActor* CurrentCutSceneSequence; // 0xb8(0x08)
	char pad_C0[0xa00]; // 0xc0(0xa00)

	void ResumeCurrentPlayingSequence(); // Function GPCutScene.GPSequenceSystem.ResumeCurrentPlayingSequence // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceUtils
// Size: 0x30 (Inherited: 0x30)
class UGPSequenceUtils : public UBlueprintFunctionLibrary {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSubLevelPreloader
// Size: 0x3e8 (Inherited: 0x3c0)
class AGPSubLevelPreloader : public AGPTriggerBase {
public:

	struct TArray<struct FSoftObjectPath> PreloadSubLevels; // 0x3c0(0x10)
	struct TArray<struct ULevelStreaming*> PreloadSubLevelPtrs; // 0x3d0(0x10)
	enum class EGPSubLevelPreloaderStatus Status; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)

	void TestPreload(); // Function GPCutScene.GPSubLevelPreloader.TestPreload // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceMaster
// Size: 0x378 (Inherited: 0x378)
class AGPSequenceMaster : public AActor {
public:


	void OnSetPerspectiveMode(enum class EGPSequencePerspectiveMode Mode); // Function GPCutScene.GPSequenceMaster.OnSetPerspectiveMode // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPCutScene.GPSequenceActor
// Size: 0x6c0 (Inherited: 0x378)
class AGPSequenceActor : public AGPSequenceMaster {
public:

	/*struct FMulticastInlineDelegate*/char OnBeginSequence[0x10]; // 0x378(0x10)
	/*struct FMulticastInlineDelegate*/char OnEndSequence[0x10]; // 0x388(0x10)
	/*struct FMulticastInlineDelegate*/char OnPreEndSequence[0x10]; // 0x398(0x10)
	/*struct FMulticastInlineDelegate*/char OnSequenceEvent[0x10]; // 0x3a8(0x10)
	/*struct FMulticastInlineDelegate*/char OnSkipSequence[0x10]; // 0x3b8(0x10)
	/*struct FMulticastInlineDelegate*/char OnCameraLeave[0x10]; // 0x3c8(0x10)
	/*struct FMulticastInlineDelegate*/char OnCameraEnter[0x10]; // 0x3d8(0x10)
	/*struct FMulticastInlineDelegate*/char OnCameraCut[0x10]; // 0x3e8(0x10)
	enum class ENetRole LocalNetRole; // 0x3f8(0x01)
	enum class ENetRole RemoteNetRole; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
	struct FString Title; // 0x400(0x10)
	struct FSoftObjectPath LevelSequence; // 0x410(0x18)
	float BakedLevelSequenceLength; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x430(0x08)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x438(0x14)
	bool bSetTransformOrigin; // 0x44c(0x01)
	char PlaybackPriority; // 0x44d(0x01)
	bool bCanBreak; // 0x44e(0x01)
	bool bNotifySequenceStatus; // 0x44f(0x01)
	enum class EGPSequenceTriggerMode TriggerMode; // 0x450(0x01)
	enum class EGPSequencePreloadActorType TriggerPreloadActorType; // 0x451(0x01)
	char pad_452[0x6]; // 0x452(0x06)
	/*struct TSoftObjectPtr<AActor>*/char TriggerSpecial[0x28]; // 0x458(0x28)
	enum class EGPSequenceTriggerAuth TriggerAuth; // 0x480(0x01)
	bool bTriggerMute; // 0x481(0x01)
	bool bPlayOnlyOnce; // 0x482(0x01)
	char pad_483[0x1]; // 0x483(0x01)
	float SyncTimeTolerance; // 0x484(0x04)
	float PreEndRestTime; // 0x488(0x04)
	bool bPreEndStartFade; // 0x48c(0x01)
	char pad_48D[0x1]; // 0x48d(0x01)
	bool bEnableDistortion; // 0x48e(0x01)
	bool LockFrameRate; // 0x48f(0x01)
	bool bPauseActorsWhenPlayCS; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct TArray<struct UClass*> ActorClassesNeedPause; // 0x498(0x10)
	bool bCutSceneMode; // 0x4a8(0x01)
	bool bMuteStreamingInCutScene; // 0x4a9(0x01)
	char pad_4AA[0x2]; // 0x4aa(0x02)
	struct FViewTargetTransitionParams CutSceneCameraEnterBlendParam; // 0x4ac(0x10)
	struct FViewTargetTransitionParams CutSceneCameraLeaveBlendParam; // 0x4bc(0x10)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct APlayerStart* CutSceneLeaveSpot; // 0x4d0(0x08)
	float CutSceneLeaveSpeed; // 0x4d8(0x04)
	bool bSeamlessPlay; // 0x4dc(0x01)
	char pad_4DD[0x3]; // 0x4dd(0x03)
	struct APlayerStart* SeamlessEnterSpot; // 0x4e0(0x08)
	float SeamlessEnterSpeed; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct TArray<struct FGPSequenceBindingInfo> BindingConfig; // 0x4f0(0x10)
	bool bDefaultDestroySequenceWhenEnd; // 0x500(0x01)
	bool bForceDestroyWhenEnd; // 0x501(0x01)
	bool bDefaultSyncStatusWhenAuthority; // 0x502(0x01)
	bool bCrossLevel; // 0x503(0x01)
	char pad_504[0x1]; // 0x504(0x01)
	bool bDebugDraw; // 0x505(0x01)
	char pad_506[0x5a]; // 0x506(0x5a)
	bool bWaitSeamless; // 0x560(0x01)
	char pad_561[0x5f]; // 0x561(0x5f)
	bool bWaitPreparing; // 0x5c0(0x01)
	bool bWaitLoading; // 0x5c1(0x01)
	bool bWaitCaching; // 0x5c2(0x01)
	bool bWaitPrespawn; // 0x5c3(0x01)
	bool bLevelSequenceActorLazyLoad; // 0x5c4(0x01)
	enum class EGPSequenceStatus Status; // 0x5c5(0x01)
	char pad_5C6[0x2]; // 0x5c6(0x02)
	int32_t PlayCount; // 0x5c8(0x04)
	float PlayTime; // 0x5cc(0x04)
	float StopTime; // 0x5d0(0x04)
	char pad_5D4[0x4]; // 0x5d4(0x04)
	struct TMap<struct FName, struct AGPSequenceDefaultProxy*> CachedDefaultProxyActors; // 0x5d8(0x50)
	struct FViewTargetTransitionParams CurrentCameraEnterBlendParam; // 0x628(0x10)
	struct FViewTargetTransitionParams CurrentCameraLeaveBlendParam; // 0x638(0x10)
	bool bWaitingEnterCameraCut; // 0x648(0x01)
	bool bWaitingLeaveCameraCut; // 0x649(0x01)
	bool bHasLeftCameraCut; // 0x64a(0x01)
	bool bBreaked; // 0x64b(0x01)
	struct TWeakObjectPtr<struct AActor> OldViewTarget; // 0x64c(0x08)
	char pad_654[0xc]; // 0x654(0x0c)
	struct AActor* LastTriggerActor; // 0x660(0x08)
	struct TArray<struct FGPSequenceBoundActorInfo> CachedBoundActors; // 0x668(0x10)
	enum class EGPSequenceStatus ReplicatedServerStatus; // 0x678(0x01)
	char pad_679[0x3]; // 0x679(0x03)
	float ReplicatedServerPlayTime; // 0x67c(0x04)
	float ReplicatedServerStopTime; // 0x680(0x04)
	bool ReplicatedServerBreaked; // 0x684(0x01)
	bool bSequenceSyncing; // 0x685(0x01)
	char pad_686[0x2]; // 0x686(0x02)
	float SequenceSyncRate; // 0x688(0x04)
	char pad_68C[0x4]; // 0x68c(0x04)
	struct UShapeComponent* CollisionComponent; // 0x690(0x08)
	struct UGPSequencePrepareComponent* PrepareComponent; // 0x698(0x08)
	struct UGPSequenceDebugComponent* DebugComponent; // 0x6a0(0x08)
	struct UGPSequencePreSpawnComponent* PrespawnComponent; // 0x6a8(0x08)
	char pad_6B0[0x10]; // 0x6b0(0x10)

	void UnloadLevels(); // Function GPCutScene.GPSequenceActor.UnloadLevels // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
