
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class Hall.HallCameraCtrlComponentBase
// Size: 0x270 (Inherited: 0x100)
class UHallCameraCtrlComponentBase : public UActorComponent {
public:

	/*struct FMulticastInlineDelegate*/char HallCameraMovedDone[0x10]; // 0x100(0x10)
	bool bAdjustCameraFOV; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float MaxViewportScale; // 0x114(0x04)
	float MinViewportScale; // 0x118(0x04)
	float MaxCameraFOV; // 0x11c(0x04)
	float MinCameraFOV; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct ACameraActor* CustomViewTargetActor; // 0x128(0x08)
	struct ACineCameraActor* CustomCineCameraActor; // 0x130(0x08)
	char pad_138[0x10]; // 0x138(0x10)
	struct TWeakObjectPtr<struct ASceneCapture2D> SceneCapture; // 0x148(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComp; // 0x150(0x08)
	struct AActor* HallTargetActor; // 0x158(0x08)
	char pad_160[0x18]; // 0x160(0x18)
	struct AActor* CachedTouchedActor; // 0x178(0x08)
	char pad_180[0x30]; // 0x180(0x30)
	struct AActor* CameraPivotActor; // 0x1b0(0x08)
	char pad_1B8[0x18]; // 0x1b8(0x18)
	struct TWeakObjectPtr<struct AActor> SeqCameraPoint; // 0x1d0(0x08)
	struct TWeakObjectPtr<struct ACameraActor> CameraCustom; // 0x1d8(0x08)
	float RotateYawCameraVel; // 0x1e0(0x04)
	float RotatePitchCameraVel; // 0x1e4(0x04)
	bool bRotateLagEnabled; // 0x1e8(0x01)
	char pad_1E9[0x3]; // 0x1e9(0x03)
	float RotateInterpSpeed; // 0x1ec(0x04)
	char pad_1F0[0x1]; // 0x1f0(0x01)
	bool bCharacterLookAtEnable; // 0x1f1(0x01)
	char pad_1F2[0x2]; // 0x1f2(0x02)
	float ReboundTransitionLastTime; // 0x1f4(0x04)
	char pad_1F8[0x68]; // 0x1f8(0x68)
	struct AActor* CurrTargetActor; // 0x260(0x08)
	char pad_268[0x8]; // 0x268(0x08)

	void SetCustonViewTarget(); // Function Hall.HallCameraCtrlComponentBase.SetCustonViewTarget // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallCharacter
// Size: 0x890 (Inherited: 0x7d0)
class AHallCharacter : public AHallCharacterBase {
public:

	/*struct FMulticastInlineDelegate*/char HallCharacterSetup[0x10]; // 0x7d0(0x10)
	/*struct FMulticastInlineDelegate*/char HallCharacterStartSetup[0x10]; // 0x7e0(0x10)
	struct UHallCharacterAppearanceProxyComponent* AppearanceProxyComponent; // 0x7f0(0x08)
	struct UHallCharacterWeaponComponent* WeaponComponent; // 0x7f8(0x08)
	char pad_800[0x8]; // 0x800(0x08)
	/*struct FMulticastInlineDelegate*/char OnHallCharacterAnimPlayEnd[0x10]; // 0x808(0x10)
	/*struct FMulticastInlineDelegate*/char OnHallCharacterAnimSetChanged[0x10]; // 0x818(0x10)
	bool bDefaultTickable; // 0x828(0x01)
	char pad_829[0x67]; // 0x829(0x67)

	void UnequipWeapon(); // Function Hall.HallCharacter.UnequipWeapon // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallCharacterAnimPreviewer
// Size: 0x4a0 (Inherited: 0x378)
class AHallCharacterAnimPreviewer : public AActor {
public:

	bool bSpawnWhenMapLoaded; // 0x378(0x01)
	bool bKeepInPIE; // 0x379(0x01)
	enum class EPrevAnimHallCharacter PreviewHallCharacterID; // 0x37a(0x01)
	char pad_37B[0x5]; // 0x37b(0x05)
	struct FString PreviewCharacterID; // 0x380(0x10)
	enum class EHallCharacterAnim PreviewHallCharacterAnim; // 0x390(0x01)
	bool bUseSpecificAnimBP; // 0x391(0x01)
	char pad_392[0x6]; // 0x392(0x06)
	struct UClass* PrevAnimBP; // 0x398(0x08)
	bool bTakingWeapon; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FString PreviewPresetWeaponID; // 0x3a8(0x10)
	struct FString PreviewEquipment_Helmet; // 0x3b8(0x10)
	bool bTakingHelmet; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct FString PreviewEquipment_ChestHanging; // 0x3d0(0x10)
	bool bTakingChestHanging; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct FString PreviewEquipment_Bag; // 0x3e8(0x10)
	bool bTakingBag; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct FString PreviewEquipment_BreastPlate; // 0x400(0x10)
	bool bTakingBreastPlate; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	struct TWeakObjectPtr<struct AActor> PlayerSpawnPoint; // 0x414(0x08)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct UClass* CharacterClass; // 0x420(0x08)
	struct TWeakObjectPtr<struct AHallMainDisplayCtrl> HallDisplayCtrl; // 0x428(0x08)
	struct UHallItemDisplayComponent* ItemDisplayComponent; // 0x430(0x08)
	struct FString PreviewItemId; // 0x438(0x10)
	struct TWeakObjectPtr<struct AActor> WeaponSpawnPoint; // 0x448(0x08)
	uint64_t PreviewWeaponID; // 0x450(0x08)
	uint64_t PreviewSkinID; // 0x458(0x08)
	bool bOpenWeaponAdapter; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	float MaxBound; // 0x464(0x04)
	float MinBound; // 0x468(0x04)
	struct TWeakObjectPtr<struct ACameraActor> DebugHallCamera; // 0x46c(0x08)
	char pad_474[0x4]; // 0x474(0x04)
	struct TArray<struct TWeakObjectPtr<struct AActor>> TeammateSpawnPoints; // 0x478(0x10)
	struct TArray<struct FHallCharacterProxy> HallCharacterProxies; // 0x488(0x10)
	struct TWeakObjectPtr<struct AAssembleWeaponActor> PreviewWeaponActor; // 0x498(0x08)

	void SpawnDisplayWeapon(); // Function Hall.HallCharacterAnimPreviewer.SpawnDisplayWeapon // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallCharacterAppearanceProxyComponent
// Size: 0x970 (Inherited: 0x5a0)
class UHallCharacterAppearanceProxyComponent : public UDFMCharacterAppearanceProxyComponent {
public:

	char pad_5A0[0x180]; // 0x5a0(0x180)
	struct FHallWeaponAnimInfo EmptyHandAnimInfo; // 0x720(0x48)
	struct FHallWeaponAnimInfo DefaultWeaponAnimInfo; // 0x768(0x48)
	struct TMap<struct FName, struct FHallWeaponAnimInfo> DefaultWeaponSubTypesAnimInfoMap; // 0x7b0(0x50)
	struct FHallWeaponAnimInfo CurrentWeaponAnimInfo; // 0x800(0x48)
	char pad_848[0xd8]; // 0x848(0xd8)
	struct TMap<struct FName, struct UMaterialInstance*> UIRenderIngoreMatInstMap; // 0x920(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallCharacterCameraActor
// Size: 0xdb0 (Inherited: 0xd00)
class AHallCharacterCameraActor : public ACameraActor {
public:

	struct USplineComponent* SplineIn; // 0xd00(0x08)
	struct USplineComponent* SplineCameraMovePath; // 0xd08(0x08)
	struct USplineComponent* SplineTemp; // 0xd10(0x08)
	char pad_D18[0x98]; // 0xd18(0x98)

	void SetRollbackCamera(struct AHallCharacterCameraActor* InRollbackCamera); // Function Hall.HallCharacterCameraActor.SetRollbackCamera // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallCharacterCtrlComponentBase
// Size: 0x170 (Inherited: 0x100)
class UHallCharacterCtrlComponentBase : public UActorComponent {
public:

	struct UClass* CharacterClass; // 0x100(0x08)
	struct TWeakObjectPtr<struct AActor> MainCharacterSpawnPoint; // 0x108(0x08)
	struct TArray<struct TWeakObjectPtr<struct AActor>> CharacterSpawnPoints; // 0x110(0x10)
	struct TMap<int32_t, struct AHallCharacter*> AllSlotCharacter; // 0x120(0x50)

	struct AHallCharacter* SpawnPlayerCharacterWithSlot(int32_t InSlot); // Function Hall.HallCharacterCtrlComponentBase.SpawnPlayerCharacterWithSlot // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallCharacterSpawnConfig
// Size: 0x390 (Inherited: 0x378)
class AHallCharacterSpawnConfig : public AActor {
public:

	bool bEnable; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct TArray<struct FHallCharacterSpawnInfo> SpawnInfos; // 0x380(0x10)

	bool IsEnable(); // Function Hall.HallCharacterSpawnConfig.IsEnable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallCharacterVoiceComponent
// Size: 0x158 (Inherited: 0x100)
class UHallCharacterVoiceComponent : public UActorComponent {
public:

	char pad_100[0x38]; // 0x100(0x38)
	/*struct FMulticastInlineDelegate*/char On2DVoiceStoppedDelegate[0x10]; // 0x138(0x10)
	/*struct FDelegate*/char OnGPAudioFinishedBluprint[0x10]; // 0x148(0x10)

	void On2DVoiceStopped(enum class EGPEventCallbackType EventCallback, int32_t PlayId); // Function Hall.HallCharacterVoiceComponent.On2DVoiceStopped // (Final|Native|Private|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallCharacterWeaponComponent
// Size: 0x148 (Inherited: 0x100)
class UHallCharacterWeaponComponent : public UActorComponent {
public:

	char pad_100[0x18]; // 0x100(0x18)
	/*struct FMulticastInlineDelegate*/char OnWeaponLoadComplete[0x10]; // 0x118(0x10)
	struct UModularWeaponDesc* WeaponDesc; // 0x128(0x08)
	struct AAssembleWeaponActor* EquippedWeaponActor; // 0x130(0x08)
	char pad_138[0x10]; // 0x138(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallDisplayCameraActor
// Size: 0xd60 (Inherited: 0xd00)
class AHallDisplayCameraActor : public ACameraActor {
public:

	struct USplineComponent* SplineIn; // 0xd00(0x08)
	struct USplineComponent* SplineCameraMovePath; // 0xd08(0x08)
	struct TWeakObjectPtr<struct AHallDisplayCameraActor> RollBackCamera; // 0xd10(0x08)
	char pad_D18[0x48]; // 0xd18(0x48)

	void SetEasingType(enum class EGPWeaponEasingType InEasingType); // Function Hall.HallDisplayCameraActor.SetEasingType // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallDisplayCtrlInterface
// Size: 0x30 (Inherited: 0x30)
class UHallDisplayCtrlInterface : public UInterface {
public:


	void RefreshCharacterLookAtTarget(struct FVector Target); // Function Hall.HallDisplayCtrlInterface.RefreshCharacterLookAtTarget // (Native|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallDisplayCtrlManager
// Size: 0x88 (Inherited: 0x38)
class UHallDisplayCtrlManager : public UGameInstanceSubsystem {
public:

	struct TMap<struct FName, struct AHallDisplayCtrlBase*> DisplayCtrls; // 0x38(0x50)

	struct TArray<struct FString> GetMiniWorldSubLevels(struct FName MiniWorldType, bool bOpenLevelExistCheck, struct TArray<struct FString>& NoExistSubLevelNames); // Function Hall.HallDisplayCtrlManager.GetMiniWorldSubLevels // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallDisplayItemActor
// Size: 0x388 (Inherited: 0x378)
class AHallDisplayItemActor : public AActor {
public:

	struct USkeletalMeshComponent* SkeletalMeshComp; // 0x378(0x08)
	struct UStaticMeshComponent* StaticMeshComp; // 0x380(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallDisplayStageConfiger
// Size: 0x8c8 (Inherited: 0x378)
class AHallDisplayStageConfiger : public AActor {
public:

	struct TMap<enum class EHallCharacterDisplayStage, int32_t> BgPlateMatIdx; // 0x378(0x50)
	int32_t DefaultBgPlateMatIdx; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct TMap<enum class EHallCharacterDisplayStage, int32_t> BgFogMatIdx; // 0x3d0(0x50)
	int32_t DefaultBgFogMatIdx; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct TMap<enum class EHallCharacterDisplayStage, int32_t> FogEffectIdx; // 0x428(0x50)
	int32_t DefaultFogEffectIdx; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct TMap<enum class EHallCharacterDisplayStage, struct FString> HallLightTag; // 0x480(0x50)
	struct FString DefaultHallLightTag; // 0x4d0(0x10)
	struct TMap<enum class EHallCharacterDisplayStage, bool> bResetOtherLights; // 0x4e0(0x50)
	bool DefaultbResetOtherLights; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct TMap<enum class EHallCharacterDisplayStage, struct TWeakObjectPtr<struct AActor>> HallLightGroup; // 0x538(0x50)
	struct TWeakObjectPtr<struct AActor> DefaultHallLightGroup; // 0x588(0x08)
	struct TMap<enum class EHallCharacterDisplayStage, struct UClass*> RuntimeHallLightGroupBP; // 0x590(0x50)
	struct UClass* DefaultRuntimeHallLightGroupBP; // 0x5e0(0x08)
	struct TMap<enum class EHallCharacterDisplayStage, struct FString> PresetDisplayCharacterID; // 0x5e8(0x50)
	struct FString DefaultPresetDisplayCharacterID; // 0x638(0x10)
	struct TMap<enum class EHallCharacterDisplayStage, struct UClass*> CharacterClass; // 0x648(0x50)
	struct UClass* DefaultCharacterClass; // 0x698(0x08)
	struct TMap<enum class EHallCharacterDisplayStage, struct TWeakObjectPtr<struct AActor>> SpawnPoint; // 0x6a0(0x50)
	struct TWeakObjectPtr<struct AActor> DefaultSpawnPoint; // 0x6f0(0x08)
	struct TMap<enum class EHallCharacterDisplayStage, struct FHallCharacterMotionInfo> MotionInfo; // 0x6f8(0x50)
	struct FHallCharacterMotionInfo DefaultMotionInfo; // 0x748(0x168)
	struct UHallSurroundingDisplayStageConfig* SurroundConfig; // 0x8b0(0x08)
	struct UHallLightDisplayStageConfig* LightConfig; // 0x8b8(0x08)
	struct UHallCharacterDisplayStageConfig* CharacterConfig; // 0x8c0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallFunctionStatics
// Size: 0x30 (Inherited: 0x30)
class UHallFunctionStatics : public UBlueprintFunctionLibrary {
public:


	void STATIC_Stop2DHeroAudio(); // Function Hall.HallFunctionStatics.Stop2DHeroAudio // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallGeneralLevelSequenceCtrlComponent
// Size: 0x150 (Inherited: 0x100)
class UHallGeneralLevelSequenceCtrlComponent : public UActorComponent {
public:

	/*struct FMulticastInlineDelegate*/char OnGeneralSeqFinished[0x10]; // 0x100(0x10)
	struct ALevelSequenceActor* CurSequenceActor; // 0x110(0x08)
	char pad_118[0x38]; // 0x118(0x38)

	void ResetGeneralLevelSequence(); // Function Hall.HallGeneralLevelSequenceCtrlComponent.ResetGeneralLevelSequence // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallGeneralRotateComponent
// Size: 0x1a0 (Inherited: 0x100)
class UHallGeneralRotateComponent : public UActorComponent {
public:

	char pad_100[0x60]; // 0x100(0x60)
	enum class EGPWeaponEasingType TransitionEasingType; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	struct TWeakObjectPtr<struct AActor> RotateTargetActor; // 0x164(0x08)
	struct FVector2D PitchRange; // 0x16c(0x08)
	struct FVector2D YawRange; // 0x174(0x08)
	struct FVector2D RollRange; // 0x17c(0x08)
	float Strength; // 0x184(0x04)
	float ReboundTransitionTime; // 0x188(0x04)
	struct FVector RotateSpeed; // 0x18c(0x0c)
	bool LockRoll; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallHighLevelDisplayComponent
// Size: 0x150 (Inherited: 0x100)
class UHallHighLevelDisplayComponent : public UActorComponent {
public:

	char pad_100[0x20]; // 0x100(0x20)
	int32_t DefaultPosition; // 0x120(0x04)
	int32_t DefaultHighLevel; // 0x124(0x04)
	struct FString MiniWorldName; // 0x128(0x10)
	bool bHandleMultilLevels; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	struct FName LoadLevelActionName; // 0x13c(0x08)
	struct FName UnloadLevelActionName; // 0x144(0x08)
	char pad_14C[0x4]; // 0x14c(0x04)

	void UnloadBPLevel(struct FString InAvatarId); // Function Hall.HallHighLevelDisplayComponent.UnloadBPLevel // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallItemDisplayComponent
// Size: 0x120 (Inherited: 0x100)
class UHallItemDisplayComponent : public UActorComponent {
public:

	struct TWeakObjectPtr<struct AActor> ItemSpawnPoint; // 0x100(0x08)
	bool IsCalBound; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float CalBoundMaxY; // 0x10c(0x04)
	float CalBoundMinY; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct AHallDisplayItemActor* HallDisplayItemActor; // 0x118(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallLevelSequenceCameraParamActor
// Size: 0x380 (Inherited: 0x378)
class AHallLevelSequenceCameraParamActor : public AActor {
public:

	float FieldOfView; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallLevelSequenceComponent
// Size: 0x148 (Inherited: 0x100)
class UHallLevelSequenceComponent : public UActorComponent {
public:

	struct AHallMainDisplayCtrl* OwnerCtrl; // 0x100(0x08)
	char pad_108[0x18]; // 0x108(0x18)
	struct ALevelSequenceActor* HallCharacterLevelSequenceActor; // 0x120(0x08)
	char pad_128[0x18]; // 0x128(0x18)
	struct TWeakObjectPtr<struct AHallLevelSequenceCameraParamActor> CameraParamActor; // 0x140(0x08)

	void OnMovieSceneSequencePlayerEventStop(); // Function Hall.HallLevelSequenceComponent.OnMovieSceneSequencePlayerEventStop // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallLevelSequenceManager
// Size: 0x48 (Inherited: 0x38)
class UHallLevelSequenceManager : public UWorldSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnSequenceStopped[0x10]; // 0x38(0x10)

	void UnBindOnSeqStopped(struct UObject* obj); // Function Hall.HallLevelSequenceManager.UnBindOnSeqStopped // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallLevelStreamingManager
// Size: 0x48 (Inherited: 0x38)
class UHallLevelStreamingManager : public UWorldSubsystem {
public:

	char pad_38[0x10]; // 0x38(0x10)

	bool UnloadHallSubLevels(struct UObject* WorldContextObject, struct TArray<struct FName>& InLevelNames); // Function Hall.HallLevelStreamingManager.UnloadHallSubLevels // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallLightGroupCollectorActor
// Size: 0x398 (Inherited: 0x378)
class AHallLightGroupCollectorActor : public AActor {
public:

	struct TWeakObjectPtr<struct ADFMLightGroup> LightGroupActor; // 0x378(0x08)
	struct TArray<struct TWeakObjectPtr<struct AActor>> CollectorActors; // 0x380(0x10)
	struct TWeakObjectPtr<struct APostProcessVolume> PostProcessVolumn; // 0x390(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallMainCameraCtrlComponent
// Size: 0x2e8 (Inherited: 0x100)
class UHallMainCameraCtrlComponent : public UActorComponent {
public:

	char pad_100[0x18]; // 0x100(0x18)
	/*struct FMulticastInlineDelegate*/char HallCameraMovedDone[0x10]; // 0x118(0x10)
	struct AHallMainDisplayCtrl* OwnerCtrl; // 0x128(0x08)
	char pad_130[0x24]; // 0x130(0x24)
	bool bAdjustCameraFOV; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	float MaxViewportScale; // 0x158(0x04)
	float MinViewportScale; // 0x15c(0x04)
	float MaxCameraFOV; // 0x160(0x04)
	float MinCameraFOV; // 0x164(0x04)
	float ExpandScale; // 0x168(0x04)
	bool bUseZAxis; // 0x16c(0x01)
	char pad_16D[0x43]; // 0x16d(0x43)
	struct ACameraActor* CustomViewTargetActor; // 0x1b0(0x08)
	char pad_1B8[0x8]; // 0x1b8(0x08)
	struct TMap<struct FName, struct ASceneCapture*> AttachSceneCaptureActors; // 0x1c0(0x50)
	char pad_210[0x4]; // 0x210(0x04)
	float ZoomSensitivity; // 0x214(0x04)
	char pad_218[0x8]; // 0x218(0x08)
	float RotateYawSensitivity; // 0x220(0x04)
	float RotatePitchSensitivity; // 0x224(0x04)
	char pad_228[0x20]; // 0x228(0x20)
	float ReboundTransitionLastTime; // 0x248(0x04)
	char pad_24C[0x44]; // 0x24c(0x44)
	struct TMap<enum class EEquipmentType, struct AHallPostProcessDisplayActor*> HallPostProcessDisplayActors; // 0x290(0x50)
	struct FTimerHandle PostProcessVolumnTimerHandler; // 0x2e0(0x08)

	struct ACameraActor* GetCustomViewTarget(); // Function Hall.HallMainCameraCtrlComponent.GetCustomViewTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallMainCharacterAnimInstance
// Size: 0x520 (Inherited: 0x280)
class UHallMainCharacterAnimInstance : public UAnimInstance {
public:

	bool bIsMainCharacter; // 0x280(0x01)
	bool bIsEquippedWithWeapon; // 0x281(0x01)
	bool bIsEquipping; // 0x282(0x01)
	char pad_283[0x1]; // 0x283(0x01)
	float LookAtWeight; // 0x284(0x04)
	float fLookAtWeight; // 0x288(0x04)
	float LookAtSpeedStrength; // 0x28c(0x04)
	struct FVector LookAtTarget; // 0x290(0x0c)
	bool bIsCharAnimChanged; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct FHallUsingWeaponAnim HallUsingWeaponAnims; // 0x2a0(0x148)
	struct UAnimSequenceBase* HallHeroActionShow; // 0x3e8(0x08)
	struct FHallCharacterIKInfo HallIKInfo; // 0x3f0(0xc0)
	enum class EHallCharacterAnimStateMechineType HallCharacterAnimStateMechineType; // 0x4b0(0x01)
	bool IsEquipWeaponShow; // 0x4b1(0x01)
	bool IsPerformShow; // 0x4b2(0x01)
	bool IsTakeAwayShow; // 0x4b3(0x01)
	bool IsHelmetShow; // 0x4b4(0x01)
	bool IsCrackedSettlementShow; // 0x4b5(0x01)
	bool IsCrackedSettlementWalk; // 0x4b6(0x01)
	bool IsMainFlowHallShow; // 0x4b7(0x01)
	/*struct FMulticastInlineDelegate*/char OnAnimSetChangeEvent[0x10]; // 0x4b8(0x10)
	/*struct FMulticastInlineDelegate*/char OnAnimChangeEvent[0x10]; // 0x4c8(0x10)
	struct UAnimSequenceBase* SettlementIdleAnim; // 0x4d8(0x08)
	struct UAnimSequenceBase* SettlementWalkAnim; // 0x4e0(0x08)
	struct UAnimSequenceBase* HallIdleAnim; // 0x4e8(0x08)
	struct UAnimSequenceBase* HallShowAnim; // 0x4f0(0x08)
	bool bIsIdle; // 0x4f8(0x01)
	bool bIsAdaptiveIK; // 0x4f9(0x01)
	char pad_4FA[0x2]; // 0x4fa(0x02)
	float AdaptiveIKData; // 0x4fc(0x04)
	char pad_500[0x20]; // 0x500(0x20)

	void SetSettlementSceneTeamPos(int32_t PosId); // Function Hall.HallMainCharacterAnimInstance.SetSettlementSceneTeamPos // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallMainCharacterCtrlComponent
// Size: 0x3d0 (Inherited: 0x100)
class UHallMainCharacterCtrlComponent : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)
	struct AHallMainDisplayCtrl* OwnerCtrl; // 0x108(0x08)
	struct UClass* CharacterClass; // 0x110(0x08)
	struct TArray<struct TWeakObjectPtr<struct AActor>> CharacterSpawnPoints; // 0x118(0x10)
	struct AHallCharacter* MainCharacter; // 0x128(0x08)
	struct FString PlayerTagPrefix; // 0x130(0x10)
	struct TMap<int32_t, struct AHallCharacter*> TeammateCharacters; // 0x140(0x50)
	struct AHallCharacter* TouchedCharacter; // 0x190(0x08)
	float RotateSensitivity; // 0x198(0x04)
	bool IsLookAtEnable; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	float LookAtAngleThresHold; // 0x1a0(0x04)
	float LookAtBeginSpeed; // 0x1a4(0x04)
	char pad_1A8[0x228]; // 0x1a8(0x228)

	void SpawnTeamMateCharacter(int32_t Slot); // Function Hall.HallMainCharacterCtrlComponent.SpawnTeamMateCharacter // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallMainCharacterFaceAnimInstance
// Size: 0x2a0 (Inherited: 0x280)
class UHallMainCharacterFaceAnimInstance : public UAnimInstance {
public:

	float LookAtWeight; // 0x280(0x04)
	float LookAtSpeedStrength; // 0x284(0x04)
	struct FVector LookAtTarget; // 0x288(0x0c)
	char pad_294[0xc]; // 0x294(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallMainDisplayCtrl
// Size: 0x7a0 (Inherited: 0x378)
class AHallMainDisplayCtrl : public AActor {
public:

	char pad_378[0x18]; // 0x378(0x18)
	struct UHallMainCameraCtrlComponent* CameraCtrlComponent; // 0x390(0x08)
	struct UHallMainCharacterCtrlComponent* CharacterCtrlComponent; // 0x398(0x08)
	struct UHallMainLightCtrlComponent* LightCtrlComponent; // 0x3a0(0x08)
	struct UHallSurroundingCtrlComponent* SurroundCtrlComponent; // 0x3a8(0x08)
	struct UHallItemDisplayComponent* ItemDisplayComponent; // 0x3b0(0x08)
	struct UHallWeaponDisplayComponent* WeaponDisplayComponent; // 0x3b8(0x08)
	struct UHallLevelSequenceComponent* LevelSequenceComponent; // 0x3c0(0x08)
	struct FHallCharacterMotionInfo MainCharacterMotionInfo; // 0x3c8(0x168)
	struct TMap<enum class EHallMainDisplayType, struct FHallMainDisplayInfo> DisplayInfos; // 0x530(0x50)
	struct TMap<enum class EHallCharacterDisplayStage, struct FHallCharacterDisplayStageInfo> CharacterDisplayStages; // 0x580(0x50)
	struct TMap<enum class EHallMainDisplayType, bool> FloorVisibleConfig; // 0x5d0(0x50)
	struct TWeakObjectPtr<struct AHallDisplayStageConfiger> StageConfigerWP; // 0x620(0x08)
	struct TArray<struct UClass*> MainHallSequenceActorClassArray; // 0x628(0x10)
	struct AGPSequenceActor* CurrentPlayingMainHallSequenceActor; // 0x638(0x08)
	struct UClass* MainHallSequenceIdleActorClass; // 0x640(0x08)
	struct AGPSequenceActor* MainHallIdleSequenceActor; // 0x648(0x08)
	bool bIsInitDisplayType; // 0x650(0x01)
	char pad_651[0x1f]; // 0x651(0x1f)
	bool bCtrlEnable; // 0x670(0x01)
	bool IsDebug; // 0x671(0x01)
	char pad_672[0x6]; // 0x672(0x06)
	struct UUserWidget* DebugWidget; // 0x678(0x08)
	enum class EHallCharacterDisplayStage DebugDisplayStage; // 0x680(0x01)
	enum class EHallMainDisplayType DebugDisplayType; // 0x681(0x01)
	char pad_682[0x32]; // 0x682(0x32)
	bool bIsInteractEnabled; // 0x6b4(0x01)
	bool bCanRotate; // 0x6b5(0x01)
	bool bCanScale; // 0x6b6(0x01)
	char pad_6B7[0x65]; // 0x6b7(0x65)
	struct TWeakObjectPtr<struct APostProcessVolume> ChangeAvatarPostProcessVolume; // 0x71c(0x08)
	float AvatarPostProcessVolumnDuration; // 0x724(0x04)
	char pad_728[0x8]; // 0x728(0x08)
	struct FTimerHandle AvatarPostProcessVolumnTimerHandler; // 0x730(0x08)
	char pad_738[0x10]; // 0x738(0x10)
	struct FName HDRIBackDropActor1Name; // 0x748(0x08)
	struct AActor* HDRIBackDrop1; // 0x750(0x08)
	struct FName HDRIBackDropActor2Name; // 0x758(0x08)
	struct AActor* HDRIBackDrop2; // 0x760(0x08)
	struct FName CustomSceneArray1Name; // 0x768(0x08)
	struct TArray<struct AActor*> CustomSceneArray1; // 0x770(0x10)
	struct FName CustomSceneArray2Name; // 0x780(0x08)
	struct TArray<struct AActor*> CustomSceneArray2; // 0x788(0x10)
	char pad_798[0x8]; // 0x798(0x08)

	void TryBindMemberHallIdleCameraSequence(struct FName BindingTag, struct AHallCharacter* BindingActor); // Function Hall.HallMainDisplayCtrl.TryBindMemberHallIdleCameraSequence // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallMainDisplayStageComponent
// Size: 0x100 (Inherited: 0x100)
class UHallMainDisplayStageComponent : public UActorComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallMainLightCtrlComponent
// Size: 0x198 (Inherited: 0x100)
class UHallMainLightCtrlComponent : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)
	struct TWeakObjectPtr<struct AExponentialHeightFog> ExponentialHeightFog; // 0x108(0x08)
	struct TWeakObjectPtr<struct ASkyLight> SkyLight; // 0x110(0x08)
	struct TWeakObjectPtr<struct AActor> LightSource; // 0x118(0x08)
	struct TArray<struct FString> HallLightGroups; // 0x120(0x10)
	struct TArray<struct AActor*> HallLightGroupToCtrlCache; // 0x130(0x10)
	char pad_140[0x58]; // 0x140(0x58)

	void TurnOffAllHallLights(); // Function Hall.HallMainLightCtrlComponent.TurnOffAllHallLights // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallMatchDisplayLevelSequenceActor
// Size: 0x378 (Inherited: 0x378)
class AHallMatchDisplayLevelSequenceActor : public AActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallMatchSceneEnvComponent
// Size: 0x100 (Inherited: 0x100)
class UHallMatchSceneEnvComponent : public UActorComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallPlayerController
// Size: 0xa50 (Inherited: 0xa50)
class AHallPlayerController : public AGPPlayerController {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallPostProcessDisplayActor
// Size: 0x3c8 (Inherited: 0x378)
class AHallPostProcessDisplayActor : public AActor {
public:

	/*struct TSoftObjectPtr<UMaterialInstance>*/char MaterialInstPath[0x28]; // 0x378(0x28)
	struct TWeakObjectPtr<struct UMaterialInstanceDynamic> MaterialInstDynamic; // 0x3a0(0x08)
	int32_t Capture2DWidth; // 0x3a8(0x04)
	float PostProcessVolumuDelayTime; // 0x3ac(0x04)
	float PostProcessVolumnDuration; // 0x3b0(0x04)
	struct TWeakObjectPtr<struct ASceneCapture2D> SceneCapture; // 0x3b4(0x08)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct USceneCaptureComponent2D* SceneCaptureComp; // 0x3c0(0x08)

	void SetAttachActor(struct AActor* AttachActor); // Function Hall.HallPostProcessDisplayActor.SetAttachActor // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallSceneActor
// Size: 0x380 (Inherited: 0x378)
class AHallSceneActor : public AActor {
public:

	struct FName SceneActorName; // 0x378(0x08)

	void Unregiser(); // Function Hall.HallSceneActor.Unregiser // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallSceneBGActor
// Size: 0x390 (Inherited: 0x388)
class AHallSceneBGActor : public AStaticMeshActor {
public:

	struct FName MeshName; // 0x388(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallSceneBGManager
// Size: 0x268 (Inherited: 0x38)
class UHallSceneBGManager : public UWorldSubsystem {
public:

	char pad_38[0x18]; // 0x38(0x18)
	struct TMap<struct FString, struct UObject*> PreLoadedMeshObjectMap; // 0x50(0x50)
	struct TMap<struct FString, struct UObject*> PreLoadedAnimInstObjectMap; // 0xa0(0x50)
	struct TMap<struct FName, struct ALevelSequenceActor*> AllMatchSequences; // 0xf0(0x50)
	struct TMap<struct FString, struct UObject*> PreLoadMatchSequenceMap; // 0x140(0x50)
	struct TMap<struct FName, struct AHallSceneBGActor*> HallSceneBGActorMap; // 0x190(0x50)
	struct TMap<struct FName, struct AHallSceneActor*> HallSceneActorMap; // 0x1e0(0x50)
	char pad_230[0x20]; // 0x230(0x20)
	struct TWeakObjectPtr<struct UMaterialInstanceDynamic> SceneMatInsDynamic; // 0x250(0x08)
	struct TWeakObjectPtr<struct UTexture> SceneTexture; // 0x258(0x08)
	struct TWeakObjectPtr<struct AActor> CurLoadedBpActor; // 0x260(0x08)

	void SwitchBGMatVectorParam(int32_t InMatIndex, struct FName& InMeshName, struct FName& InParamName, struct FVector InValue); // Function Hall.HallSceneBGManager.SwitchBGMatVectorParam // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallSceneCapture2DComponent
// Size: 0x100 (Inherited: 0x100)
class UHallSceneCapture2DComponent : public UActorComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallScenePreviewer
// Size: 0x3e0 (Inherited: 0x378)
class AHallScenePreviewer : public AActor {
public:

	struct UHallSceneVideoPlayerComponent* SceneVideoPlayerComponent; // 0x378(0x08)
	struct FName MiniWorldName; // 0x380(0x08)
	struct TArray<struct FName> SubLevels; // 0x388(0x10)
	bool bCanSpawnBP; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	struct FName RootActorTagName; // 0x39c(0x08)
	enum class ETransformRule TransformRule; // 0x3a4(0x01)
	bool bSwitchVideo; // 0x3a5(0x01)
	bool bIsMatch; // 0x3a6(0x01)
	char pad_3A7[0x1]; // 0x3a7(0x01)
	struct FName OperatorVideoName; // 0x3a8(0x08)
	struct FName ClothTagName; // 0x3b0(0x08)
	struct FName VideoBgTagName; // 0x3b8(0x08)
	struct FName SceneBpID; // 0x3c0(0x08)
	struct TWeakObjectPtr<struct AActor> RootActor; // 0x3c8(0x08)
	struct TWeakObjectPtr<struct AActor> SceneBPActor; // 0x3d0(0x08)
	char pad_3D8[0x8]; // 0x3d8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallSceneVideoPlayerComponent
// Size: 0x138 (Inherited: 0x100)
class UHallSceneVideoPlayerComponent : public UActorComponent {
public:

	struct UBinkMediaPlayer* MediaPlayerPtr; // 0x100(0x08)
	struct FName VideoMeshName; // 0x108(0x08)
	bool bEnableReleaseResource; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	int32_t VideoMaterialIndex; // 0x114(0x04)
	struct FName TextureName; // 0x118(0x08)
	char pad_120[0x18]; // 0x120(0x18)

	void OnMediaReachedEnd(); // Function Hall.HallSceneVideoPlayerComponent.OnMediaReachedEnd // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallSequenceDirector
// Size: 0x38 (Inherited: 0x38)
class UHallSequenceDirector : public ULevelSequenceDirector {
public:


	void PauseSequence(); // Function Hall.HallSequenceDirector.PauseSequence // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallSettlementAnimInstance
// Size: 0x2a0 (Inherited: 0x280)
class UHallSettlementAnimInstance : public UAnimInstance {
public:

	struct FString SettlementAnimName; // 0x280(0x10)
	struct UAnimSequenceBase* SettlementAnim; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallSettlementSnapshotStudio
// Size: 0x3b8 (Inherited: 0x378)
class AHallSettlementSnapshotStudio : public AActor {
public:

	struct UClass* CharacterClass; // 0x378(0x08)
	struct TWeakObjectPtr<struct AActor> CharacterSpawnPoint; // 0x380(0x08)
	struct UMaterialInterface* BackgroundMaterial; // 0x388(0x08)
	int32_t RenderTargetSizeX; // 0x390(0x04)
	int32_t RenderTargetSizeY; // 0x394(0x04)
	float CaptureFOV; // 0x398(0x04)
	struct FVector CaptureRelativeLocation; // 0x39c(0x0c)
	struct TArray<struct FHallSettlementSnapshotCandidate> SnapshotCandidates; // 0x3a8(0x10)

	struct AHallCharacter* SpawnCharacter(); // Function Hall.HallSettlementSnapshotStudio.SpawnCharacter // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallSurroundingCtrlComponent
// Size: 0x158 (Inherited: 0x100)
class UHallSurroundingCtrlComponent : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)
	struct TWeakObjectPtr<struct AStaticMeshActor> BgPlate; // 0x108(0x08)
	struct TWeakObjectPtr<struct AStaticMeshActor> FloorPlate; // 0x110(0x08)
	struct TArray<struct UMaterialInterface*> BgPlateMats; // 0x118(0x10)
	struct TWeakObjectPtr<struct AStaticMeshActor> BgFog; // 0x128(0x08)
	struct TArray<struct UMaterialInterface*> BgFogMats; // 0x130(0x10)
	float DistanceFromBgToCamera; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct TArray<struct TWeakObjectPtr<struct AActor>> HallFogEffects; // 0x148(0x10)

	void SetBgTexFromImg(struct AStaticMeshActor* BgActor, struct UImage* Image); // Function Hall.HallSurroundingCtrlComponent.SetBgTexFromImg // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallWatchDisplayComponent
// Size: 0x160 (Inherited: 0x100)
class UHallWatchDisplayComponent : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)
	struct FName WatchRootMeshName; // 0x108(0x08)
	int32_t SwitchInterval; // 0x110(0x04)
	bool bCalculateBound; // 0x114(0x01)
	bool bRotatorFix; // 0x115(0x01)
	bool bCalculateByZ; // 0x116(0x01)
	char pad_117[0x1]; // 0x117(0x01)
	float MinBoundZ; // 0x118(0x04)
	float MaxBoundZ; // 0x11c(0x04)
	float MinBoundY; // 0x120(0x04)
	float MaxBoundY; // 0x124(0x04)
	struct TWeakObjectPtr<struct ASkeletalMeshActor> CurWatchMeshActor; // 0x128(0x08)
	char pad_130[0x30]; // 0x130(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallWeaponDisplayComponent
// Size: 0x188 (Inherited: 0x100)
class UHallWeaponDisplayComponent : public UActorComponent {
public:

	/*struct FDelegate*/char OnWeaponLoadedCompletedSignature[0x10]; // 0x100(0x10)
	struct AAssembleWeaponActor* WeaponActor; // 0x110(0x08)
	struct UModularWeaponDesc* WeaponDesc; // 0x118(0x08)
	char pad_120[0x10]; // 0x120(0x10)
	struct TWeakObjectPtr<struct AActor> OriginWeaponLocActor; // 0x130(0x08)
	struct UModularApperanceBaseProvider* ModularAppearanceBaseProvider; // 0x138(0x08)
	struct TWeakObjectPtr<struct AActor> CurWeaponSpawnPoint; // 0x140(0x08)
	struct TWeakObjectPtr<struct AActor> WeaponSpawnPoint; // 0x148(0x08)
	struct TWeakObjectPtr<struct AActor> WeaponSpawnPoint2; // 0x150(0x08)
	bool EnableTrans; // 0x158(0x01)
	bool IsUseMeleeWeapon; // 0x159(0x01)
	bool IsDisplayAdapter; // 0x15a(0x01)
	char pad_15B[0x1]; // 0x15b(0x01)
	float CalBoundMaxY; // 0x15c(0x04)
	float CalBoundMinY; // 0x160(0x04)
	float CalBoundMaxZ; // 0x164(0x04)
	float CalBoundMinZ; // 0x168(0x04)
	char pad_16C[0x1c]; // 0x16c(0x1c)

	void PostApplyWorldOffset(struct UWorld* World, struct FIntVector IntVector1, struct FIntVector IntVector2); // Function Hall.HallWeaponDisplayComponent.PostApplyWorldOffset // (Final|Native|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallWeaponDisplaySequenceComponent
// Size: 0x138 (Inherited: 0x100)
class UHallWeaponDisplaySequenceComponent : public UActorComponent {
public:

	struct TArray<struct FSoftObjectPath> WeaponLevelSequences; // 0x100(0x10)
	struct ALevelSequenceActor* CurSequenceActor; // 0x110(0x08)
	struct TWeakObjectPtr<struct AAssembleWeaponActor> CurWeaponActor; // 0x118(0x08)
	/*struct FMulticastInlineDelegate*/char OnSeqFinished[0x10]; // 0x120(0x10)
	char pad_130[0x8]; // 0x130(0x08)

	void PostApplyWorldOffset(struct UWorld* World, struct FIntVector IntVector1, struct FIntVector IntVector2); // Function Hall.HallWeaponDisplaySequenceComponent.PostApplyWorldOffset // (Final|Native|Private|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallWeaponSkinSceneDisplayComponent
// Size: 0x158 (Inherited: 0x100)
class UHallWeaponSkinSceneDisplayComponent : public UActorComponent {
public:

	char pad_100[0x28]; // 0x100(0x28)
	struct FName LoadLevelActionName; // 0x128(0x08)
	struct FName UnloadLevelActionName; // 0x130(0x08)
	/*struct FMulticastInlineDelegate*/char OnLoadSublevelGroupDone[0x10]; // 0x138(0x10)
	/*struct FMulticastInlineDelegate*/char OnUnLoadSublevelGroupDone[0x10]; // 0x148(0x10)

	void OnUnloadLatentActionCompleted(int32_t LinkID); // Function Hall.HallWeaponSkinSceneDisplayComponent.OnUnloadLatentActionCompleted // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.LuaLevelUtil
// Size: 0x30 (Inherited: 0x30)
class ULuaLevelUtil : public UObject {
public:


	void UnloadSettlement(struct UWorld* World); // Function Hall.LuaLevelUtil.UnloadSettlement // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.RoleInfoLogoActor
// Size: 0x378 (Inherited: 0x378)
class ARoleInfoLogoActor : public AActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.SandBoxMap
// Size: 0x1ff0 (Inherited: 0x378)
class ASandBoxMap : public AActor {
public:

	struct AStaticMeshActor* MapActor; // 0x378(0x08)
	struct ACameraActor* MainCamera; // 0x380(0x08)
	struct TArray<struct FSandBoxMapCamConfig> TargetInfos; // 0x388(0x10)
	struct ACameraActor* StartCamPos; // 0x398(0x08)
	struct ACameraActor* EndCamPos; // 0x3a0(0x08)
	float MiddlePosPercentage; // 0x3a8(0x04)
	float ShowNamePosPercentage; // 0x3ac(0x04)
	float InitPosPercentage; // 0x3b0(0x04)
	float AdvanceSpreadTime; // 0x3b4(0x04)
	float MoveScale; // 0x3b8(0x04)
	float ScrollScale; // 0x3bc(0x04)
	float HeightToTarget; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct FRuntimeFloatCurve CameraTransitionCurve; // 0x3c8(0xa0)
	struct FRuntimeFloatCurve CharacterRotationCurve; // 0x468(0xa0)
	bool bUseCameraCurve; // 0x508(0x01)
	bool bUseCameraSequence; // 0x509(0x01)
	bool bUseCameraDOFCurve; // 0x50a(0x01)
	char pad_50B[0x1]; // 0x50b(0x01)
	float CameraTransitionDuration; // 0x50c(0x04)
	struct FRuntimeFloatCurve CameraLocationCurve; // 0x510(0xa0)
	struct FRuntimeFloatCurve CameraRotationForwardCurve; // 0x5b0(0xa0)
	struct FRuntimeFloatCurve CameraRotationReverseCurve; // 0x650(0xa0)
	struct FRuntimeFloatCurve CameraPOIToPOICurve; // 0x6f0(0xa0)
	struct FRuntimeFloatCurve CameraRailForwardCurve; // 0x790(0xa0)
	struct FRuntimeFloatCurve CameraRailReverseCurve; // 0x830(0xa0)
	struct UTexture* DefaultUnlockTex; // 0x8d0(0x08)
	struct FVector PCLocation; // 0x8d8(0x0c)
	struct FRotator PCRotator; // 0x8e4(0x0c)
	struct FVector HitLocation; // 0x8f0(0x0c)
	char pad_8FC[0x4]; // 0x8fc(0x04)
	/*struct FMulticastInlineDelegate*/char OnHeightPercentageChange[0x10]; // 0x900(0x10)
	struct UMaterialInstanceDynamic* MapMID1; // 0x910(0x08)
	struct UMaterialInstanceDynamic* MapMID2; // 0x918(0x08)
	char pad_920[0x58]; // 0x920(0x58)
	struct ACameraActor* TargetCamera; // 0x978(0x08)
	char pad_980[0x18]; // 0x980(0x18)
	struct TArray<struct UMaterialInstanceDynamic*> MapMIDList; // 0x998(0x10)
	char pad_9A8[0x8]; // 0x9a8(0x08)
	struct UMaterialParameterCollectionInstance* MatParamCollectionIns; // 0x9b0(0x08)
	struct TMap<struct FName, struct FLinearColor> TargetColorParameterMap; // 0x9b8(0x50)
	struct TMap<struct FName, float> TargetScalarParameterMap; // 0xa08(0x50)
	char pad_A58[0xa0]; // 0xa58(0xa0)
	struct TMap<int32_t, struct FVector> UIActorScaleMap; // 0xaf8(0x50)
	char pad_B48[0x10]; // 0xb48(0x10)
	struct TMap<int32_t, enum class ESandBoxMapState> OriginTargetStateMap; // 0xb58(0x50)
	struct TMap<int32_t, enum class ESandBoxMapState> PrevTargetStateMap; // 0xba8(0x50)
	struct TMap<int32_t, enum class ESandBoxMapState> CurTargetStateMap; // 0xbf8(0x50)
	struct TArray<struct AActor*> FogActors; // 0xc48(0x10)
	char pad_C58[0x12e8]; // 0xc58(0x12e8)
	struct UCameraComponent* MainCameraComponent; // 0x1f40(0x08)
	char pad_1F48[0x10]; // 0x1f48(0x10)
	struct ALevelSequenceActor* CameraMapInSeqActor; // 0x1f58(0x08)
	struct ALevelSequenceActor* CameraTopToPOISeqActor; // 0x1f60(0x08)
	struct ALevelSequenceActor* CameraPOIToDetailActor; // 0x1f68(0x08)
	struct ALevelSequenceActor* UnlockSeqActor; // 0x1f70(0x08)
	struct TArray<struct ALevelSequenceActor*> UnlockLevelSeqActor; // 0x1f78(0x10)
	struct ULevelSequence* MapInSeq; // 0x1f88(0x08)
	struct ULevelSequence* TopToPOISeq; // 0x1f90(0x08)
	struct ULevelSequence* POIToTopSeq; // 0x1f98(0x08)
	struct ULevelSequence* POIToPOISeq; // 0x1fa0(0x08)
	struct ULevelSequence* CurToLockSeq; // 0x1fa8(0x08)
	struct ULevelSequence* UnlockSeq; // 0x1fb0(0x08)
	struct ULevelSequence* UnlockLevelSeq; // 0x1fb8(0x08)
	struct AActor* EmptyActor; // 0x1fc0(0x08)
	struct AActor* RootActor; // 0x1fc8(0x08)
	struct UMaterialParameterCollection* MatParamCollection; // 0x1fd0(0x08)
	struct TArray<struct ACameraRig_Rail*> CameraRigRails; // 0x1fd8(0x10)
	char pad_1FE8[0x8]; // 0x1fe8(0x08)

	void UnRegisterUIActor(int32_t Group, struct ASandBoxMapActor* Target); // Function Hall.SandBoxMap.UnRegisterUIActor // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.SandBoxMapActor
// Size: 0x380 (Inherited: 0x378)
class ASandBoxMapActor : public AActor {
public:

	int32_t Group; // 0x378(0x04)
	bool bIsUI; // 0x37c(0x01)
	bool bIsRegisterToGroup; // 0x37d(0x01)
	bool bIsHide; // 0x37e(0x01)
	char pad_37F[0x1]; // 0x37f(0x01)

	void SwitchActorState(enum class ESandBoxMapState SwitchState); // Function Hall.SandBoxMapActor.SwitchActorState // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.SyncMap
// Size: 0x450 (Inherited: 0x378)
class ASyncMap : public AActor {
public:

	struct USceneCaptureComponent2D* SceneCapture; // 0x378(0x08)
	char pad_380[0x8]; // 0x380(0x08)
	struct AActor* MainCamera; // 0x388(0x08)
	struct AActor* SyncMapActor; // 0x390(0x08)
	int32_t RotateDir; // 0x398(0x04)
	float RotateChangeDuration; // 0x39c(0x04)
	struct FRuntimeFloatCurve RotateChangeCurve; // 0x3a0(0xa0)
	struct FRotator RotateSpeed; // 0x440(0x0c)
	char pad_44C[0x4]; // 0x44c(0x04)

	void StopTick(); // Function Hall.SyncMap.StopTick // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallDisplayCtrlBase
// Size: 0x388 (Inherited: 0x378)
class AHallDisplayCtrlBase : public AActor {
public:

	struct FName HallDisplayTypeStr; // 0x378(0x08)
	float fPureModeAspectRatio; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)

	void OnDisplayCtrlUnInit(); // Function Hall.HallDisplayCtrlBase.OnDisplayCtrlUnInit // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallDisplayLevelSequenceComponentBase
// Size: 0x190 (Inherited: 0x100)
class UHallDisplayLevelSequenceComponentBase : public UActorComponent {
public:

	char pad_100[0x48]; // 0x100(0x48)
	struct ACameraActor* CameraActor; // 0x148(0x08)
	char pad_150[0x38]; // 0x150(0x38)
	struct ALevelSequenceActor* HallDisplayLevelSequenceActor; // 0x188(0x08)

	void OnMovieSequenceEventStop(); // Function Hall.HallDisplayLevelSequenceComponentBase.OnMovieSequenceEventStop // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallDisplayStageConfig
// Size: 0x38 (Inherited: 0x30)
class UHallDisplayStageConfig : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallBattlePassDisplayCtrl
// Size: 0x428 (Inherited: 0x388)
class AHallBattlePassDisplayCtrl : public AHallDisplayCtrlBase {
public:

	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x388(0x08)
	struct UHallWeaponDisplayComponent* WeaponDisplayComponent; // 0x390(0x08)
	struct UHallItemDisplayComponent* BreastPlateDisplayComponent; // 0x398(0x08)
	struct UHallItemDisplayComponent* BagDisplayComponent; // 0x3a0(0x08)
	struct UHallItemDisplayComponent* ChestHangingDisplayComponent; // 0x3a8(0x08)
	struct UHallItemDisplayComponent* ItemDisplayComponentPendant; // 0x3b0(0x08)
	struct UHallItemDisplayComponent* ItemDisplayComponentHelmet; // 0x3b8(0x08)
	struct UHallItemDisplayComponent* ItemDisplayComponentMedicine; // 0x3c0(0x08)
	struct UHallSceneVideoPlayerComponent* VideoDisplayComponent; // 0x3c8(0x08)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x3d0(0x50)
	char pad_420[0x8]; // 0x420(0x08)

	void StopVideo(); // Function Hall.HallBattlePassDisplayCtrl.StopVideo // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallCommonDisplayCtrl
// Size: 0x4a0 (Inherited: 0x388)
class AHallCommonDisplayCtrl : public AHallDisplayCtrlBase {
public:

	char pad_388[0x10]; // 0x388(0x10)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DiplayInfoMap; // 0x398(0x50)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x3e8(0x08)
	struct UHallCharacterCtrlComponentBase* CharacterCtrlComponent; // 0x3f0(0x08)
	struct UHallItemDisplayComponent* ItemDisplayComponent; // 0x3f8(0x08)
	struct UHallWeaponDisplayComponent* WeaponDisplayComponent; // 0x400(0x08)
	bool EnableCapture2D; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct UTextureRenderTarget2D* Capture2DRT; // 0x410(0x08)
	float RotateSensitivity; // 0x418(0x04)
	float ZoomSensitivity; // 0x41c(0x04)
	char pad_420[0x8]; // 0x420(0x08)
	struct AActor* TouchTargetActor; // 0x428(0x08)
	bool bIsInteractEnabled; // 0x430(0x01)
	bool bCanRotate; // 0x431(0x01)
	bool bCanScale; // 0x432(0x01)
	bool bInertiaEnabled; // 0x433(0x01)
	float InertiaDeceleration; // 0x434(0x04)
	float InertiaStrength; // 0x438(0x04)
	bool bViewMoveEnabled; // 0x43c(0x01)
	char pad_43D[0x3]; // 0x43d(0x03)
	float MoveSensitivity; // 0x440(0x04)
	struct FVector2D MoveRange; // 0x444(0x08)
	char pad_44C[0x3c]; // 0x44c(0x3c)
	enum class EHallRotationType HallRotationType; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	/*struct FMulticastInlineDelegate*/char OnTargetActorTouchedDelegate[0x10]; // 0x490(0x10)

	void SetRotateSensitivity(float& InValue); // Function Hall.HallCommonDisplayCtrl.SetRotateSensitivity // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallLotteryDisplayCtrl
// Size: 0x5d0 (Inherited: 0x388)
class AHallLotteryDisplayCtrl : public AHallDisplayCtrlBase {
public:

	char pad_388[0x20]; // 0x388(0x20)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x3a8(0x08)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x3b0(0x50)
	struct UHallLotteryDisplaySequenceComponent* HallLotteryLevelSequenceComponent; // 0x400(0x08)
	char pad_408[0x10]; // 0x408(0x10)
	float AutoFinishTime_MandelBrick; // 0x418(0x04)
	float ShowGuideTime_MandelBrick; // 0x41c(0x04)
	int32_t ItemQualityNormalLimit; // 0x420(0x04)
	struct FName EnterAudioName_MandelBrick; // 0x424(0x08)
	struct FName UIUnboxingMandelScanLoop_MandelBrick; // 0x42c(0x08)
	char pad_434[0x4]; // 0x434(0x04)
	struct FName UIUnboxingMandelScanStop_MandelBrick; // 0x438(0x08)
	char pad_440[0x4]; // 0x440(0x04)
	struct FName FadeInAudioName_MandelBrick; // 0x444(0x08)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct FName UIUnboxingMandelScan_MandelBrick; // 0x450(0x08)
	char pad_458[0x4]; // 0x458(0x04)
	struct FName ClickPressedAudioName_MandelBrick; // 0x45c(0x08)
	char pad_464[0x4]; // 0x464(0x04)
	struct FName ClickReleasedAudioName_MandelBrick; // 0x468(0x08)
	char pad_470[0x4]; // 0x470(0x04)
	struct FName FadeOutAudioName_MandelBrick; // 0x474(0x08)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct FName MythicQualityAudioName_MandelBrick; // 0x480(0x08)
	struct FName NormalQualityAudioName_MandelBrick; // 0x488(0x08)
	struct FName ShowAudioName_MandelBrick; // 0x490(0x08)
	char pad_498[0x4]; // 0x498(0x04)
	struct FName ProgressAudioName_MandelBrick; // 0x49c(0x08)
	struct FName RTPC_Mandel_Scan_Intensity; // 0x4a4(0x08)
	struct FName LoopMusicAudioName_MandelBrick; // 0x4ac(0x08)
	struct FName StopMusicAudioName_MandelBrick; // 0x4b4(0x08)
	struct FName UIUnboxingMandel_MandelBrick; // 0x4bc(0x08)
	struct FName ShowMusicAudioName_MandelBrick; // 0x4c4(0x08)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct AStaticMeshActor* MandelBrickActor; // 0x4d0(0x08)
	struct UParticleSystemComponent* FXC_NormalLine_MandelBrick; // 0x4d8(0x08)
	struct UParticleSystemComponent* FXC_ClickLine_MandelBrick; // 0x4e0(0x08)
	struct UParticleSystemComponent* FXC_TipsLine_MandelBrick; // 0x4e8(0x08)
	/*struct FMulticastInlineDelegate*/char OnMandelBrickOperateStart[0x10]; // 0x4f0(0x10)
	bool bOnMandelBrickOperateStart; // 0x500(0x01)
	char pad_501[0x7]; // 0x501(0x07)
	/*struct FMulticastInlineDelegate*/char OnMandelBrickEffectStart[0x10]; // 0x508(0x10)
	bool bOnMandelBrickEffectStart; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
	/*struct FMulticastInlineDelegate*/char OnMandelBrickFinish[0x10]; // 0x520(0x10)
	/*struct FMulticastInlineDelegate*/char OnUpdateShowGuideTips[0x10]; // 0x530(0x10)
	struct UCurveLinearColor* CurveLinearColor_MandelBrick; // 0x540(0x08)
	struct TMap<int32_t, struct UCurveLinearColor*> LinearColorMap; // 0x548(0x50)
	struct UMaterialInstanceDynamic* EmissionEffectMaterial_MandelBrick; // 0x598(0x08)
	struct UMaterialInstanceDynamic* LineEffectMaterial_MandelBrick; // 0x5a0(0x08)
	struct UDFMUIAudioPlayer* AudioPlayer; // 0x5a8(0x08)
	char pad_5B0[0x10]; // 0x5b0(0x10)
	float AutoSpeed; // 0x5c0(0x04)
	float ManualSpeed; // 0x5c4(0x04)
	char pad_5C8[0x8]; // 0x5c8(0x08)

	void SetHallDisplaySequence(); // Function Hall.HallLotteryDisplayCtrl.SetHallDisplaySequence // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallLotteryTenDisplayCtrl
// Size: 0x640 (Inherited: 0x388)
class AHallLotteryTenDisplayCtrl : public AHallDisplayCtrlBase {
public:

	char pad_388[0x20]; // 0x388(0x20)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x3a8(0x08)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x3b0(0x50)
	struct UHallLotteryDisplaySequenceComponent* HallLotteryLevelSequenceComponent; // 0x400(0x08)
	char pad_408[0x8]; // 0x408(0x08)
	struct TMap<int32_t, struct FMandelBrick> MandelBrickMap; // 0x410(0x50)
	struct AActor* RotatingMeshActor; // 0x460(0x08)
	struct USphereComponent* OuterCollision; // 0x468(0x08)
	struct USphereComponent* InnerCollision; // 0x470(0x08)
	bool bSequenceFinished; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct UCurveLinearColor* CurveLinearColor_MandelBrick; // 0x480(0x08)
	struct TMap<int32_t, struct UCurveLinearColor*> LinearColorMap; // 0x488(0x50)
	int32_t ItemQualityNormalLimit; // 0x4d8(0x04)
	struct FName EnterAudioName_MandelBrick; // 0x4dc(0x08)
	struct FName UIUnboxingMandelScanLoop_MandelBrick; // 0x4e4(0x08)
	struct FName UIUnboxingMandelScanStop_MandelBrick; // 0x4ec(0x08)
	struct FName FadeInAudioName_MandelBrick; // 0x4f4(0x08)
	char pad_4FC[0x4]; // 0x4fc(0x04)
	struct FName UIUnboxingMandelScan_MandelBrick; // 0x500(0x08)
	char pad_508[0x4]; // 0x508(0x04)
	struct FName ClickPressedAudioName_MandelBrick; // 0x50c(0x08)
	struct FName ClickReleasedAudioName_MandelBrick; // 0x514(0x08)
	struct FName FadeOutAudioName_MandelBrick; // 0x51c(0x08)
	struct FName MythicQualityAudioName_MandelBrick; // 0x524(0x08)
	struct FName NormalQualityAudioName_MandelBrick; // 0x52c(0x08)
	char pad_534[0x4]; // 0x534(0x04)
	struct FName UI_Unboxing_Mandel_Dozen_Show_Mythic_MandelBrick; // 0x538(0x08)
	struct FName UI_Unboxing_Mandel_Dozen_Show_Normal_MandelBrick; // 0x540(0x08)
	struct FName ShowAudioName_MandelBrick; // 0x548(0x08)
	struct FName ProgressAudioName_MandelBrick; // 0x550(0x08)
	struct FName LoopMusicAudioName_MandelBrick; // 0x558(0x08)
	struct FName StopMusicAudioName_MandelBrick; // 0x560(0x08)
	struct FName UIUnboxingMandel_MandelBrick; // 0x568(0x08)
	struct FName UI_Unboxing_Mandel_Dozen_Spin_MandelBrick; // 0x570(0x08)
	char pad_578[0x4]; // 0x578(0x04)
	struct FName ShowMusicAudioName_MandelBrick; // 0x57c(0x08)
	char pad_584[0x4]; // 0x584(0x04)
	struct UDFMUIAudioPlayer* AudioPlayer; // 0x588(0x08)
	/*struct FMulticastInlineDelegate*/char OnUpdateShowGuideTipsTen[0x10]; // 0x590(0x10)
	/*struct FMulticastInlineDelegate*/char OnMandelBrickTenFinish[0x10]; // 0x5a0(0x10)
	char pad_5B0[0xc]; // 0x5b0(0x0c)
	bool bAllFinished; // 0x5bc(0x01)
	char pad_5BD[0x3]; // 0x5bd(0x03)
	struct UMaterialInterface* ParentMaterial; // 0x5c0(0x08)
	char pad_5C8[0x28]; // 0x5c8(0x28)
	double RotationSpeedRate; // 0x5f0(0x08)
	double AutoRotationSpeedRate; // 0x5f8(0x08)
	double MaxRotationSpeed; // 0x600(0x08)
	double MinRotationSpeed; // 0x608(0x08)
	double Deceleration; // 0x610(0x08)
	double Acceleration; // 0x618(0x08)
	char pad_620[0x4]; // 0x620(0x04)
	float RotationSpeedParam; // 0x624(0x04)
	float AutoFinishTime_MandelBrick; // 0x628(0x04)
	float ShowGuideTime_MandelBrick; // 0x62c(0x04)
	char pad_630[0x10]; // 0x630(0x10)

	void SetMandelBrickThreshold(int32_t MandelBrickIndex, float ThresHold); // Function Hall.HallLotteryTenDisplayCtrl.SetMandelBrickThreshold // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallMainFlowDisplayCtrl
// Size: 0x5b8 (Inherited: 0x388)
class AHallMainFlowDisplayCtrl : public AHallDisplayCtrlBase {
public:

	char pad_388[0x8]; // 0x388(0x08)
	/*struct FMulticastInlineDelegate*/char OnMainFlowHallModeSeqFinishedEvent[0x10]; // 0x390(0x10)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x3a0(0x08)
	struct UHallCharacterCtrlComponentBase* SOLCharacterCtrlComponent; // 0x3a8(0x08)
	struct UHallCharacterCtrlComponentBase* MPCharacterCtrlComponent; // 0x3b0(0x08)
	struct UHallSceneVideoPlayerComponent* SOLSceneVideoPlayerComponent; // 0x3b8(0x08)
	struct UHallSceneVideoPlayerComponent* MPSceneVideoPlayerComponent; // 0x3c0(0x08)
	struct UHallCharacterVoiceComponent* HallCharacterVoiceComponent; // 0x3c8(0x08)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DiplayInfoMap; // 0x3d0(0x50)
	struct TMap<struct FName, struct FMainFlowSeqInfo> MainFlowSeqInfoMap; // 0x420(0x50)
	struct TMap<struct FName, struct FMainFlowSeqInfo> MainFlowModelSeqMap; // 0x470(0x50)
	/*struct TSoftObjectPtr<UBinkMediaTexture>*/char MPMediaTexture[0x28]; // 0x4c0(0x28)
	/*struct TSoftObjectPtr<UBinkMediaTexture>*/char SOLMediaTexture[0x28]; // 0x4e8(0x28)
	/*struct FMulticastInlineDelegate*/char OnWindowActive[0x10]; // 0x510(0x10)
	/*struct FMulticastInlineDelegate*/char OnAnimSeqLoaded[0x10]; // 0x520(0x10)
	char pad_530[0x88]; // 0x530(0x88)

	void UnequipByEquipmentType(enum class EMainFlowCtrlType InCtrlType, int32_t& InSlotId, enum class EEquipmentType EquipmentType); // Function Hall.HallMainFlowDisplayCtrl.UnequipByEquipmentType // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallMatchDisplayCtrl
// Size: 0x470 (Inherited: 0x388)
class AHallMatchDisplayCtrl : public AHallDisplayCtrlBase {
public:

	char pad_388[0x20]; // 0x388(0x20)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x3a8(0x08)
	struct UHallCharacterCtrlComponentBase* CharacterCtrlComponent; // 0x3b0(0x08)
	struct UHallSceneVideoPlayerComponent* SceneVideoPlayerComponent; // 0x3b8(0x08)
	struct UHallCharacterVoiceComponent* HallCharacterVoiceComponent; // 0x3c0(0x08)
	struct UHallHighLevelDisplayComponent* HallHighLevelDisplayComponent; // 0x3c8(0x08)
	struct UHallCharacterLevelSeqComponentBase* DisplayLevelSequenceComponent1; // 0x3d0(0x08)
	struct UHallCharacterLevelSeqComponentBase* DisplayLevelSequenceComponent2; // 0x3d8(0x08)
	struct UHallCharacterLevelSeqComponentBase* DisplayLevelSequenceComponent3; // 0x3e0(0x08)
	struct UHallCharacterLevelSeqComponentBase* DisplayLevelSequenceComponent4; // 0x3e8(0x08)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DiplayInfoMap; // 0x3f0(0x50)
	struct TWeakObjectPtr<struct AActor> SceneBpParentActor; // 0x440(0x08)
	enum class ECustomTransformRule CustomTransformRule; // 0x448(0x01)
	enum class EMatchCtrlType MatchCtrlType; // 0x449(0x01)
	char pad_44A[0x6]; // 0x44a(0x06)
	struct FString DefaultVideoInName; // 0x450(0x10)
	struct FString DefaultVideoLoopName; // 0x460(0x10)

	void UnloadLightLevel(struct FString InAvatarId); // Function Hall.HallMatchDisplayCtrl.UnloadLightLevel // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallMPLobbyDisplayCtrl
// Size: 0x450 (Inherited: 0x388)
class AHallMPLobbyDisplayCtrl : public AHallDisplayCtrlBase {
public:

	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x388(0x08)
	struct UHallCharacterCtrlComponentBase* CharacterCtrlComponent; // 0x390(0x08)
	char pad_398[0x8]; // 0x398(0x08)
	struct TArray<struct AActor*> FogActors; // 0x3a0(0x10)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x3b0(0x50)
	bool bUseCapture2D; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char MaterialInstPath[0x28]; // 0x408(0x28)
	struct TWeakObjectPtr<struct UMaterialInstanceDynamic> MaterialInstDynamic; // 0x430(0x08)
	char pad_438[0x18]; // 0x438(0x18)

	void SetDisplayType(struct FString InDisplayType); // Function Hall.HallMPLobbyDisplayCtrl.SetDisplayType // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallOperatorItemDisplayCtrl
// Size: 0x458 (Inherited: 0x388)
class AHallOperatorItemDisplayCtrl : public AHallDisplayCtrlBase {
public:

	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x388(0x08)
	struct UHallGeneralRotateComponent* GeneralRotateComponent; // 0x390(0x08)
	struct ASceneSkeleteMeshActor* HeroItemMeshActor; // 0x398(0x08)
	struct AActor* SceneOrigin; // 0x3a0(0x08)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x3a8(0x50)
	bool bReboundEnable; // 0x3f8(0x01)
	char pad_3F9[0x1f]; // 0x3f9(0x1f)
	struct AActor* TouchedActor; // 0x418(0x08)
	struct TArray<struct AActor*> FogActors; // 0x420(0x10)
	char pad_430[0x28]; // 0x430(0x28)

	void SetDisplayType(struct FString InDisplayType); // Function Hall.HallOperatorItemDisplayCtrl.SetDisplayType // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallSecretServiceCtrl
// Size: 0x450 (Inherited: 0x388)
class AHallSecretServiceCtrl : public AHallDisplayCtrlBase {
public:

	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x388(0x08)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x390(0x50)
	struct TMap<struct FString, struct ALevelSequenceActor*> LevelSequenceActors; // 0x3e0(0x50)
	char pad_430[0x20]; // 0x430(0x20)

	void StopSequence(struct FString InSeqName); // Function Hall.HallSecretServiceCtrl.StopSequence // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallSettlementDisplayCtrl
// Size: 0x4c0 (Inherited: 0x388)
class AHallSettlementDisplayCtrl : public AHallDisplayCtrlBase {
public:

	/*struct FMulticastInlineDelegate*/char OnHallSettlementResReadyEvent[0x10]; // 0x388(0x10)
	/*struct FMulticastInlineDelegate*/char HallSettlementSeqEnd[0x10]; // 0x398(0x10)
	struct UHallCharacterCtrlComponentBase* CharacterCtrlComponent; // 0x3a8(0x08)
	struct TWeakObjectPtr<struct AActor> BaseActor; // 0x3b0(0x08)
	struct TWeakObjectPtr<struct AActor> BaseActor2; // 0x3b8(0x08)
	struct TMap<struct FName, struct FSoftObjectPath> DisplayLevelSeqPaths; // 0x3c0(0x50)
	struct TMap<struct FName, struct ALevelSequenceActor*> DisplayLevelSeqActors; // 0x410(0x50)
	char pad_460[0x60]; // 0x460(0x60)

	void PlayLevelSeqActor(struct FName LevelSeqActorName); // Function Hall.HallSettlementDisplayCtrl.PlayLevelSeqActor // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallVehicleDisplayCtrl
// Size: 0x400 (Inherited: 0x388)
class AHallVehicleDisplayCtrl : public AHallDisplayCtrlBase {
public:

	char pad_388[0x8]; // 0x388(0x08)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x390(0x08)
	bool bRotateViewCameraActive; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DiplayInfoMap; // 0x3a0(0x50)
	char pad_3F0[0x10]; // 0x3f0(0x10)

	void SetVehicleDisplayType(uint64_t VehicleId, bool bIsModified); // Function Hall.HallVehicleDisplayCtrl.SetVehicleDisplayType // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallWatchDisplayCtrl
// Size: 0x3f0 (Inherited: 0x388)
class AHallWatchDisplayCtrl : public AHallDisplayCtrlBase {
public:

	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x388(0x08)
	struct UHallWatchDisplayComponent* WatchDisplayComponent; // 0x390(0x08)
	struct TMap<struct FName, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x398(0x50)
	char pad_3E8[0x8]; // 0x3e8(0x08)

	void SetDisplayWatchItem(struct FString InItemID); // Function Hall.HallWatchDisplayCtrl.SetDisplayWatchItem // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallWeaponDisplayCtrl
// Size: 0x568 (Inherited: 0x388)
class AHallWeaponDisplayCtrl : public AHallDisplayCtrlBase {
public:

	struct UHallWeaponDisplayComponent* HallWeaponDisplayComponent; // 0x388(0x08)
	struct UHallCameraCtrlComponentBase* CameraCtrlComponent; // 0x390(0x08)
	struct UHallWeaponDisplaySequenceComponent* HallWeaponDisplaySequenceComponent; // 0x398(0x08)
	struct UHallGeneralRotateComponent* GeneralRotateComponent; // 0x3a0(0x08)
	struct UHallWatchDisplayComponent* WatchDisplayComponent; // 0x3a8(0x08)
	struct UHallGeneralLevelSequenceCtrlComponent* GeneralLevelSequenceCtrlComponent; // 0x3b0(0x08)
	struct UHallWeaponSkinSceneDisplayComponent* WeaponSkinSceneDisplayComponent; // 0x3b8(0x08)
	char pad_3C0[0x18]; // 0x3c0(0x18)
	struct AActor* TouchedActor; // 0x3d8(0x08)
	struct TArray<struct AActor*> FogActors; // 0x3e0(0x10)
	char pad_3F0[0x90]; // 0x3f0(0x90)
	struct TArray<struct FSoftObjectPath> BoardBGMatPaths; // 0x480(0x10)
	struct TMap<struct FString, struct FHallDisplayInfoBase> DisplayInfoMap; // 0x490(0x50)
	bool bCanInteract; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	/*struct FMulticastInlineDelegate*/char OnTouchPressedSignature[0x10]; // 0x4e8(0x10)
	/*struct FMulticastInlineDelegate*/char OnWeaponDisplayedSignature[0x10]; // 0x4f8(0x10)
	bool bReboundEnable; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
	struct TMap<enum class EWeaponItemType, int32_t> WeaponTypeMaxScaleMap; // 0x510(0x50)
	bool bModifyCameraScaleEnable; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	float ZoomSensitivity; // 0x564(0x04)

	void SkipWeaponCutScene(); // Function Hall.HallWeaponDisplayCtrl.SkipWeaponCutScene // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallCharacterLevelSeqComponentBase
// Size: 0x230 (Inherited: 0x190)
class UHallCharacterLevelSeqComponentBase : public UHallDisplayLevelSequenceComponentBase {
public:

	float FromAlpha; // 0x190(0x04)
	float ToAlpha; // 0x194(0x04)
	float StartFadeDuration; // 0x198(0x04)
	float StopFadeDuration; // 0x19c(0x04)
	struct FLinearColor FadeColor; // 0x1a0(0x10)
	bool bAttachWatch; // 0x1b0(0x01)
	bool bIsOperator; // 0x1b1(0x01)
	bool bUseCameraFade; // 0x1b2(0x01)
	char pad_1B3[0x1]; // 0x1b3(0x01)
	struct FName HallCharacterBindingTag; // 0x1b4(0x08)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct FString PoseFrame; // 0x1c0(0x10)
	char pad_1D0[0x60]; // 0x1d0(0x60)

	void OnSeqLoadedComplete(); // Function Hall.HallCharacterLevelSeqComponentBase.OnSeqLoadedComplete // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallExpertDisplaySequenceComponent
// Size: 0x210 (Inherited: 0x190)
class UHallExpertDisplaySequenceComponent : public UHallDisplayLevelSequenceComponentBase {
public:

	bool bCameraTrackFade; // 0x190(0x01)
	bool bCommitTransition; // 0x191(0x01)
	char pad_192[0x2a]; // 0x192(0x2a)
	float FromAlpha; // 0x1bc(0x04)
	float ToAlpha; // 0x1c0(0x04)
	float FadeDuration; // 0x1c4(0x04)
	float StopFadeDuration; // 0x1c8(0x04)
	struct FLinearColor FadeColor; // 0x1cc(0x10)
	char pad_1DC[0x24]; // 0x1dc(0x24)
	struct AHallCharacter* CurrentHallCharacter; // 0x200(0x08)
	char pad_208[0x8]; // 0x208(0x08)

	void StopTransition(); // Function Hall.HallExpertDisplaySequenceComponent.StopTransition // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallHeroActionShowComponent
// Size: 0x1b0 (Inherited: 0x190)
class UHallHeroActionShowComponent : public UHallDisplayLevelSequenceComponentBase {
public:

	struct AHallCharacter* CurHallCharacter; // 0x190(0x08)
	char pad_198[0x18]; // 0x198(0x18)

	void OnHallCharacterLoadedDone(struct AHallCharacter* InHallCharacter, struct FString ActionId, bool IsUsedSeq); // Function Hall.HallHeroActionShowComponent.OnHallCharacterLoadedDone // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallLotteryDisplaySequenceComponent
// Size: 0x1e0 (Inherited: 0x190)
class UHallLotteryDisplaySequenceComponent : public UHallDisplayLevelSequenceComponentBase {
public:

	char pad_190[0x18]; // 0x190(0x18)
	struct FSoftObjectPath LevelSequencePath; // 0x1a8(0x18)
	struct FSoftObjectPath LevelSequencePathPC; // 0x1c0(0x18)
	char pad_1D8[0x8]; // 0x1d8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallMatchDisplayLevelSequenceComponent
// Size: 0x1c0 (Inherited: 0x190)
class UHallMatchDisplayLevelSequenceComponent : public UHallDisplayLevelSequenceComponentBase {
public:

	char pad_190[0x8]; // 0x190(0x08)
	struct AHallCharacter* LevelSequenceHallCharacter; // 0x198(0x08)
	char pad_1A0[0x20]; // 0x1a0(0x20)

	void OnHallCharacterMeshLoadComplete(); // Function Hall.HallMatchDisplayLevelSequenceComponent.OnHallCharacterMeshLoadComplete // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallSurroundingDisplayStageConfig
// Size: 0x48 (Inherited: 0x38)
class UHallSurroundingDisplayStageConfig : public UHallDisplayStageConfig {
public:

	int32_t BgPlateMatIdx; // 0x38(0x04)
	int32_t BgFogMatIdx; // 0x3c(0x04)
	int32_t FogEffectIdx; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallLightDisplayStageConfig
// Size: 0x60 (Inherited: 0x38)
class UHallLightDisplayStageConfig : public UHallDisplayStageConfig {
public:

	struct FString HallLightTag; // 0x38(0x10)
	bool bResetOtherLights; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct TWeakObjectPtr<struct AActor> HallLightGroup; // 0x4c(0x08)
	char pad_54[0x4]; // 0x54(0x04)
	struct UClass* RuntimeHallLightGroupBP; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallCharacterDisplayStageConfig
// Size: 0x1c0 (Inherited: 0x38)
class UHallCharacterDisplayStageConfig : public UHallDisplayStageConfig {
public:

	struct FString PresetDisplayCharacterID; // 0x38(0x10)
	struct UClass* CharacterClass; // 0x48(0x08)
	struct TWeakObjectPtr<struct AActor> SpawnPoint; // 0x50(0x08)
	struct FHallCharacterMotionInfo MotionInfo; // 0x58(0x168)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallCollectionDisplayCtrl
// Size: 0x510 (Inherited: 0x4a0)
class AHallCollectionDisplayCtrl : public AHallCommonDisplayCtrl {
public:

	struct TMap<struct FString, struct ALevelSequenceActor*> LevelSeqActors; // 0x4a0(0x50)
	struct TWeakObjectPtr<struct AHallLevelSequenceCameraParamActor> CameraParamActor; // 0x4f0(0x08)
	char pad_4F8[0x18]; // 0x4f8(0x18)

	void StopCurrentSequence(); // Function Hall.HallCollectionDisplayCtrl.StopCurrentSequence // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallExpertDisplayCtrl
// Size: 0x568 (Inherited: 0x4a0)
class AHallExpertDisplayCtrl : public AHallCommonDisplayCtrl {
public:

	struct AStaticMeshActor* ExpertBackground2; // 0x4a0(0x08)
	struct UHallExpertDisplaySequenceComponent* HallExpertLevelSequenceComponent; // 0x4a8(0x08)
	struct UHallCharacterVoiceComponent* HallCharacterVoiceComponent; // 0x4b0(0x08)
	struct TMap<struct FName, struct AEmitter*> SceneEmitters; // 0x4b8(0x50)
	struct UMaterialParameterCollection* ExpertEnvMaterialParamColl; // 0x508(0x08)
	struct UMaterialInstanceDynamic* ExpertBackgroundMatDynamic; // 0x510(0x08)
	struct TMap<struct FString, struct UTexture2D*> CachedBGImages; // 0x518(0x50)

	void ToggleInteracted(bool CanInteracted); // Function Hall.HallExpertDisplayCtrl.ToggleInteracted // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Hall.HallOperatorDisplayCtrl
// Size: 0x508 (Inherited: 0x4a0)
class AHallOperatorDisplayCtrl : public AHallCommonDisplayCtrl {
public:

	struct AStaticMeshActor* ExpertBackground2; // 0x4a0(0x08)
	struct UHallCharacterLevelSeqComponentBase* HallExpertLevelSequenceComponent; // 0x4a8(0x08)
	struct UHallHeroActionShowComponent* HallHeroActionShowComponent; // 0x4b0(0x08)
	struct UHallCharacterVoiceComponent* HallCharacterVoiceComponent; // 0x4b8(0x08)
	struct UHallSceneVideoPlayerComponent* HallSceneVideoPlayerComponent; // 0x4c0(0x08)
	struct UHallHighLevelDisplayComponent* HallHighLevelDisplayComponent; // 0x4c8(0x08)
	struct AActor* ExtraSceneActorOrigin; // 0x4d0(0x08)
	/*struct FMulticastInlineDelegate*/char OnHeroSeqPlayPaused[0x10]; // 0x4d8(0x10)
	char pad_4E8[0x20]; // 0x4e8(0x20)

	void UnloadBPLevel(struct FString InAvatarId); // Function Hall.HallOperatorDisplayCtrl.UnloadBPLevel // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
