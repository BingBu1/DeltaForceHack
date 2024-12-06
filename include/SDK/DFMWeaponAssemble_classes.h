
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMWeaponAssemble.GunCameraParamsRowManager
// Size: 0x48 (Inherited: 0x38)
class UGunCameraParamsRowManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.AssemblerCameraParamsRowManager
// Size: 0x48 (Inherited: 0x38)
class UAssemblerCameraParamsRowManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.AssemblerCameraCtrl
// Size: 0x970 (Inherited: 0x378)
class AAssemblerCameraCtrl : public AActor {
public:

	struct FSoftObjectPath CamParamsTablePath; // 0x378(0x18)
	struct FSoftObjectPath CamResetParamsTablePath; // 0x390(0x18)
	struct FSoftObjectPath DefaultCamParamsTablePath; // 0x3a8(0x18)
	struct FSoftObjectPath SlideScreenTablePath; // 0x3c0(0x18)
	struct FSoftObjectPath DefaultSlideTablePath; // 0x3d8(0x18)
	struct UCurveFloat* SpeedCurve; // 0x3f0(0x08)
	struct FMobileDOFInfo DefaultMobileDOF; // 0x3f8(0x34)
	struct FPinchParams PinchParams; // 0x42c(0x18)
	char pad_444[0x4]; // 0x444(0x04)
	struct FBeginCamParams BeginCamParams; // 0x448(0x148)
	float CamSpeedOnBegin; // 0x590(0x04)
	float RotateRootSpeed; // 0x594(0x04)
	float RotateArroundSpeed; // 0x598(0x04)
	float AutoRotateSpeed; // 0x59c(0x04)
	float ResetCamLength; // 0x5a0(0x04)
	float ZoomOutSpeed; // 0x5a4(0x04)
	float MinCameraDist; // 0x5a8(0x04)
	float CamLengthInterim; // 0x5ac(0x04)
	float DefaultLerpTime; // 0x5b0(0x04)
	float LerpSpeedUnit; // 0x5b4(0x04)
	float MobileFixedLerpSpeed; // 0x5b8(0x04)
	float GunLookScale; // 0x5bc(0x04)
	struct FGunCameraParamsRow GunLookCenterCameraParm; // 0x5c0(0xa0)
	float GunLookMaxRoll; // 0x660(0x04)
	float GunLookMaxRollExtra; // 0x664(0x04)
	float RotateCameraSpeed; // 0x668(0x04)
	bool bOpenCorrectionAlpha; // 0x66c(0x01)
	char bLockRotate : 1; // 0x66d(0x01)
	char pad_66D_1 : 7; // 0x66d(0x01)
	enum class EAssemblerCameraType CameraType; // 0x66e(0x01)
	char pad_66F[0x1]; // 0x66f(0x01)
	/*struct FMulticastInlineDelegate*/char OnTouchMoveStart[0x10]; // 0x670(0x10)
	/*struct FMulticastInlineDelegate*/char OnTouchMoveEnd[0x10]; // 0x680(0x10)
	/*struct FMulticastInlineDelegate*/char OnTouchMove[0x10]; // 0x690(0x10)
	/*struct FMulticastInlineDelegate*/char OnTouched[0x10]; // 0x6a0(0x10)
	/*struct FMulticastInlineDelegate*/char OnRotateStart[0x10]; // 0x6b0(0x10)
	/*struct FMulticastInlineDelegate*/char OnRotateEnd[0x10]; // 0x6c0(0x10)
	/*struct FMulticastInlineDelegate*/char OnCameraPointChanged[0x10]; // 0x6d0(0x10)
	/*struct FMulticastInlineDelegate*/char OnCameraChanged[0x10]; // 0x6e0(0x10)
	/*struct FMulticastInlineDelegate*/char OnGesturePinch[0x10]; // 0x6f0(0x10)
	/*struct FMulticastInlineDelegate*/char OnGestureFlick[0x10]; // 0x700(0x10)
	/*struct FMulticastInlineDelegate*/char OnCameraLerpStart[0x10]; // 0x710(0x10)
	/*struct FMulticastInlineDelegate*/char OnCameraLerpEnd[0x10]; // 0x720(0x10)
	/*struct FMulticastInlineDelegate*/char OnCameraLerp[0x10]; // 0x730(0x10)
	struct TMap<enum class EAssemblerCamPoint, struct FGunCameraParamsRow> CameraParams; // 0x740(0x50)
	struct FVector FocusCenterOffset; // 0x790(0x0c)
	float FocusCenterDistanceRatio; // 0x79c(0x04)
	bool bWeaponAttachPosToBoundBoxOrigin; // 0x7a0(0x01)
	bool bOpenOffsetWeapon; // 0x7a1(0x01)
	char pad_7A2[0x6]; // 0x7a2(0x06)
	struct ABracketActor* Bracket; // 0x7a8(0x08)
	struct AActor* ViewTargetPoint; // 0x7b0(0x08)
	enum class EAssemblerCamPoint CurCameraPoint; // 0x7b8(0x01)
	char pad_7B9[0x7]; // 0x7b9(0x07)
	struct APlayerCameraManager* CameraManager; // 0x7c0(0x08)
	struct AAssembleWeaponActor* TargetWeapon; // 0x7c8(0x08)
	struct UMobilePlayerInput* MobileInput; // 0x7d0(0x08)
	struct FMobileDOFInfo CurMobileDOF; // 0x7d8(0x34)
	char pad_80C[0x164]; // 0x80c(0x164)

	void UpdateDOFParam(enum class EAssemblerCamPoint CameraPoint); // Function DFMWeaponAssemble.AssemblerCameraCtrl.UpdateDOFParam // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.AssemblerStartPoint
// Size: 0x378 (Inherited: 0x378)
class AAssemblerStartPoint : public AActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.AssembleWeaponActor
// Size: 0x540 (Inherited: 0x378)
class AAssembleWeaponActor : public AActor {
public:

	char pad_378[0x10]; // 0x378(0x10)
	struct UModularApperanceBaseProvider* ModularApperanceBaseProvider; // 0x388(0x08)
	struct UAssembleWeaponNodeTree* NodeTree; // 0x390(0x08)
	struct UAssembleWeaponNodeTree* SnapshotNodeTree; // 0x398(0x08)
	struct TMap<int16_t, struct USkeletalMeshComponent*> MeshComMap; // 0x3a0(0x50)
	struct TMap<struct FSoftObjectPath, struct USkeletalMesh*> ItemIdToMeshMap; // 0x3f0(0x50)
	struct USkeletalMeshComponent* RootPartMesh; // 0x440(0x08)
	struct UModularWeaponDesc* Desc; // 0x448(0x08)
	struct FName CurrentDescRowName; // 0x450(0x08)
	char bIdle : 1; // 0x458(0x01)
	char bStreamInFullTex : 1; // 0x458(0x01)
	char pad_458_2 : 6; // 0x458(0x01)
	char pad_459[0x17]; // 0x459(0x17)
	/*struct FDelegate*/char OnDynamicLoadMeshesComplete[0x10]; // 0x470(0x10)
	char pad_480[0x20]; // 0x480(0x20)
	struct UWeaponDataComponentAdapterSimple* AdapterComponent; // 0x4a0(0x08)
	struct TArray<struct UWeaponSkinApperanceModiferBase*> SkinApperanceModifers; // 0x4a8(0x10)
	char pad_4B8[0x28]; // 0x4b8(0x28)
	uint64_t PreviewPresetId; // 0x4e0(0x08)
	uint64_t PreviewSkinApperanceId; // 0x4e8(0x08)
	enum class EWeaponPartMeshType LoadMeshType; // 0x4f0(0x01)
	bool IsDisplayAdapter; // 0x4f1(0x01)
	char pad_4F2[0x2]; // 0x4f2(0x02)
	float CalBoundMax; // 0x4f4(0x04)
	float CalBoundMin; // 0x4f8(0x04)
	bool bCreateForPreview; // 0x4fc(0x01)
	char pad_4FD[0x3]; // 0x4fd(0x03)
	struct UModularWeaponMeshProxy* MeshProxy; // 0x500(0x08)
	bool bEnalbePartOffset; // 0x508(0x01)
	bool Use3PTemplateMaterial; // 0x509(0x01)
	char pad_50A[0x2]; // 0x50a(0x02)
	int32_t ForceLod; // 0x50c(0x04)
	struct UModularWeaponSkeletalMeshComponent* MainWeaponMeshSkeletalComponent; // 0x510(0x08)
	struct FVector FixedTransformPosition; // 0x518(0x0c)
	struct FVector LastFixedTransformPosition; // 0x524(0x0c)
	char pad_530[0x8]; // 0x530(0x08)
	float TickCounter; // 0x538(0x04)
	char pad_53C[0x4]; // 0x53c(0x04)

	void UpdateFixWorldTransformLocation(); // Function DFMWeaponAssemble.AssembleWeaponActor.UpdateFixWorldTransformLocation // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.AssembleWeaponNodeTree
// Size: 0x40 (Inherited: 0x30)
class UAssembleWeaponNodeTree : public UObject {
public:

	struct TArray<struct FGPAssemblePartNode> AllNodes; // 0x30(0x10)

	void SetSocketFlag(struct FGPAssemblePartNode& Node, bool bIsSimulateParentNode); // Function DFMWeaponAssemble.AssembleWeaponNodeTree.SetSocketFlag // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.AssembleWeaponDataLibrary
// Size: 0x30 (Inherited: 0x30)
class UAssembleWeaponDataLibrary : public UObject {
public:


	struct FFastEquipResult STATIC_RemoveNodeFromeDescByIndex(struct UModularWeaponDesc* Desc, int32_t PartNodeIndex, bool bOnlyForCheck, bool bFillVirtualParts); // Function DFMWeaponAssemble.AssembleWeaponDataLibrary.RemoveNodeFromeDescByIndex // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.AssembleWeaponMgr
// Size: 0x388 (Inherited: 0x378)
class AAssembleWeaponMgr : public AActor {
public:

	char pad_378[0x10]; // 0x378(0x10)

	struct AAssembleWeaponActor* GetEmptyWeapon(struct UWorld* InWorld); // Function DFMWeaponAssemble.AssembleWeaponMgr.GetEmptyWeapon // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.AssemblyPlayerController
// Size: 0xa50 (Inherited: 0xa50)
class AAssemblyPlayerController : public AGPPlayerController {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.BracketActor
// Size: 0x3e8 (Inherited: 0x378)
class ABracketActor : public AActor {
public:

	struct UClass* BpAssemblerCameraCtrl; // 0x378(0x08)
	struct UAnimMontage* ShakeMontage; // 0x380(0x08)
	struct UAnimMontage* DropMontage; // 0x388(0x08)
	struct FName WeaponRootSocket; // 0x390(0x08)
	struct FName RotateRootSocket; // 0x398(0x08)
	struct FRotator DefaultCameraRotation; // 0x3a0(0x0c)
	struct FRotator DefaultRelativeRotation; // 0x3ac(0x0c)
	struct FVector DefaultOffset; // 0x3b8(0x0c)
	float DefaultBracketYaw; // 0x3c4(0x04)
	struct USkeletalMeshComponent* SelfSkeletalMeshCom; // 0x3c8(0x08)
	struct UAnimInstance* SelfAnimInstance; // 0x3d0(0x08)
	char pad_3D8[0x10]; // 0x3d8(0x10)

	void SetYaw(float Yaw); // Function DFMWeaponAssemble.BracketActor.SetYaw // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.CaptureExclude
// Size: 0x388 (Inherited: 0x378)
class ACaptureExclude : public AActor {
public:

	struct TArray<struct TWeakObjectPtr<struct AActor>> ExcludeList; // 0x378(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.LightEnvToogle
// Size: 0x3b0 (Inherited: 0x378)
class ALightEnvToogle : public AActor {
public:

	struct TWeakObjectPtr<struct APostProcessVolume> WeakPostProcess; // 0x378(0x08)
	struct TWeakObjectPtr<struct ANZSkyBoxActor> WeakNZSkyBoxActor; // 0x380(0x08)
	struct TWeakObjectPtr<struct AExponentialHeightFog> WeakFogActor; // 0x388(0x08)
	struct TWeakObjectPtr<struct ADirectionalLight> WeakDirLightActor; // 0x390(0x08)
	struct TWeakObjectPtr<struct ASkyLight> WeakSkyLightActor; // 0x398(0x08)
	struct TWeakObjectPtr<struct AActor> DisplayBoardLights; // 0x3a0(0x08)
	struct TWeakObjectPtr<struct AActor> AssemblyTableLights; // 0x3a8(0x08)

	void ToogleEnv(bool bOpen); // Function DFMWeaponAssemble.LightEnvToogle.ToogleEnv // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.DFMModularAppearanceProvider
// Size: 0x30 (Inherited: 0x30)
class UDFMModularAppearanceProvider : public UModularApperanceBaseProvider {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.CaptureRTResult
// Size: 0x48 (Inherited: 0x30)
class UCaptureRTResult : public UObject {
public:

	struct UTextureRenderTarget2D* ColorRT; // 0x30(0x08)
	struct FVector2D SizeUV; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.RTICapture
// Size: 0x480 (Inherited: 0x378)
class ARTICapture : public AActor {
public:

	char pad_378[0x8]; // 0x378(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x380(0x08)
	struct USceneComponent* RTIRootComponent; // 0x388(0x08)
	char pad_390[0x40]; // 0x390(0x40)
	struct TMap<struct FSoftObjectPath, struct FRTILightBPData> AllRTILightBPDataMap; // 0x3d0(0x50)
	struct TMap<struct ULightComponentBase*, struct FRTIOriginLightComponentData> OriginLightComponentBaseDataMap; // 0x420(0x50)
	struct ALightShadowVolume* LightShadowVolumeActor; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)

	void HandleCaptureWeapon(struct AAssembleWeaponActor* Weapon, struct FVector2D RTSize, struct FRTIConfigRow& RTIConfigRow, struct UCaptureRTResult* CaptureRTResult); // Function DFMWeaponAssemble.RTICapture.HandleCaptureWeapon // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.RTICaptureHelper
// Size: 0x30 (Inherited: 0x30)
class URTICaptureHelper : public UObject {
public:


	void STATIC_HandleLightBPActor(struct AActor* LightBPActor, bool bEnable, struct ARTICapture* RTICapture); // Function DFMWeaponAssemble.RTICaptureHelper.HandleLightBPActor // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.RTISceneCaptureComponent2D
// Size: 0xcf0 (Inherited: 0xcf0)
class URTISceneCaptureComponent2D : public USceneCaptureComponent2D {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.RuntimeIconAction
// Size: 0x80 (Inherited: 0x30)
class URuntimeIconAction : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct UDFMImage* DFMImage; // 0x38(0x08)
	struct URuntimeTile* Tile; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
	struct UTexture2D* StaticIcon_Texture2D; // 0x50(0x08)
	struct UPaperSprite* StaticIcon_PaperSprite; // 0x58(0x08)
	struct AAssembleWeaponActor* Weapon; // 0x60(0x08)
	char pad_68[0x10]; // 0x68(0x10)
	struct UCaptureRTResult* CaptureRTResult; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.RuntimeIconMaker
// Size: 0xb0 (Inherited: 0x30)
class URuntimeIconMaker : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct URuntimeIconAction*> RTIActionList; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
	struct TMap<uint64_t, struct FRTIPreLoadRuntimeIconData> RTIPreLoadRuntimeIconDataList; // 0x50(0x50)
	char pad_A0[0x10]; // 0xa0(0x10)

	int64_t STATIC_StaticRequestStaticIconByObject(/*struct TSoftObjectPtr<UObject>& Icon, struct UImage* TargetImage, bool bLazy*/); // Function DFMWeaponAssemble.RuntimeIconMaker.StaticRequestStaticIconByObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.WeaponAssemblerUtil
// Size: 0x30 (Inherited: 0x30)
class UWeaponAssemblerUtil : public UObject {
public:


	enum class EAssemblerCamPoint STATIC_TouchToSwitchPoint(struct FVector2D ScreenPos); // Function DFMWeaponAssemble.WeaponAssemblerUtil.TouchToSwitchPoint // (Final|Native|Static|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.WeaponAssembleSubsystem
// Size: 0x190 (Inherited: 0x38)
class UWeaponAssembleSubsystem : public UGameInstanceSubsystem {
public:

	char bOpenAssemblerEditor : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct TWeakObjectPtr<struct AAssembleWeaponMgr> WeaponActorMgr; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct TMap<struct FSoftObjectPath, struct TWeakObjectPtr<struct USkeletalMesh>> SkeletalsMap; // 0x48(0x50)
	struct UModularApperanceBaseProvider* ModularAppearanceProvider; // 0x98(0x08)
	struct TWeakObjectPtr<struct AWeaponDisplayBoard> DisplayBoard; // 0xa0(0x08)
	struct TWeakObjectPtr<struct AAssembleWeaponActor> GunsmithWeapon; // 0xa8(0x08)
	struct TWeakObjectPtr<struct AActor> WeaponIntermediateActor; // 0xb0(0x08)
	struct AAssemblerCameraCtrl* AssemblerCameraCtrl; // 0xb8(0x08)
	struct TWeakObjectPtr<struct AActor> ViewTargetPoint; // 0xc0(0x08)
	struct TWeakObjectPtr<struct ABracketActor> BracketActor; // 0xc8(0x08)
	struct TWeakObjectPtr<struct ALightEnvToogle> LightEnvActor; // 0xd0(0x08)
	/*struct FMulticastInlineDelegate*/char OnOpenGunSmithScene[0x10]; // 0xd8(0x10)
	/*struct FMulticastInlineDelegate*/char OnCloseGunSmithScene[0x10]; // 0xe8(0x10)
	/*struct FMulticastInlineDelegate*/char OnGunSmithLightEnvPrepareFinsh[0x10]; // 0xf8(0x10)
	char pad_108[0x20]; // 0x108(0x20)
	struct URuntimeIconMaker* RuntimeIconMaker; // 0x128(0x08)
	/*struct TSet<struct UObject*>*/char RTIResourceList_PreLoad[0x50]; // 0x130(0x50)
	struct URuntimeIconManager* RuntimeIconManager; // 0x180(0x08)
	struct ARTICapture* RTICapture; // 0x188(0x08)

	void ToggleTextureStreaming(bool bOpen); // Function DFMWeaponAssemble.WeaponAssembleSubsystem.ToggleTextureStreaming // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.WeaponDataComponentAdapterSimple
// Size: 0x1e8 (Inherited: 0x100)
class UWeaponDataComponentAdapterSimple : public UActorComponent {
public:

	char pad_100[0x18]; // 0x100(0x18)
	struct TArray<struct UWeaponAdapterBaseSimple*> AdapterItems; // 0x118(0x10)
	char pad_128[0xb0]; // 0x128(0xb0)
	struct TArray<struct UWeaponAdapterItemBase*> AdapterLists; // 0x1d8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.WeaponDisplayBoard
// Size: 0x520 (Inherited: 0x378)
class AWeaponDisplayBoard : public AActor {
public:

	struct TArray<struct TWeakObjectPtr<struct AActor>> SpawnPoints; // 0x378(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> SpecialSpawnPoints; // 0x388(0x10)
	struct TWeakObjectPtr<struct AActor> DisplayBoardLights; // 0x398(0x08)
	struct TWeakObjectPtr<struct AActor> AssemblyTableLights; // 0x3a0(0x08)
	struct TWeakObjectPtr<struct AEmitter> SlideEndParticles; // 0x3a8(0x08)
	struct UCurveFloat* SlideCurve; // 0x3b0(0x08)
	struct UCurveFloat* DropCurve; // 0x3b8(0x08)
	struct FSoftObjectPath GunDropBackSequence; // 0x3c0(0x18)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x3d8(0x08)
	float WeaponScale; // 0x3e0(0x04)
	float WeaponPopSpeed; // 0x3e4(0x04)
	float PopDistance; // 0x3e8(0x04)
	float SlideDistance; // 0x3ec(0x04)
	float SlidePageDuration1; // 0x3f0(0x04)
	float SlidePageDuration2; // 0x3f4(0x04)
	struct TArray<struct AAssembleWeaponActor*> AllWeapoons; // 0x3f8(0x10)
	/*struct FMulticastInlineDelegate*/char OnWeaponSpawn[0x10]; // 0x408(0x10)
	/*struct FMulticastInlineDelegate*/char OnPopWeaponEnd[0x10]; // 0x418(0x10)
	/*struct FMulticastInlineDelegate*/char OnSliderPageEnd[0x10]; // 0x428(0x10)
	float SlidePageSpeed; // 0x438(0x04)
	char pad_43C[0x2c]; // 0x43c(0x2c)
	struct TArray<struct TWeakObjectPtr<struct AActor>> WeaponPoint; // 0x468(0x10)
	char pad_478[0xa8]; // 0x478(0xa8)

	int16_t Touch(struct FVector2D ScreenPos); // Function DFMWeaponAssemble.WeaponDisplayBoard.Touch // (Final|Native|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.WeaponPresetGenerateTool
// Size: 0x30 (Inherited: 0x30)
class UWeaponPresetGenerateTool : public UBlueprintFunctionLibrary {
public:


	struct UGPModularWeaponDesc* STATIC_GenerateWepaonPresetInner(struct UGPModularWeaponDesc* InWeaponDesc, struct FWeaponPresetGenerateParam Param); // Function DFMWeaponAssemble.WeaponPresetGenerateTool.GenerateWepaonPresetInner // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.WeaponPresetGenerateToolCommandlet
// Size: 0x88 (Inherited: 0x88)
class UWeaponPresetGenerateToolCommandlet : public UCommandlet {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.WeaponSkinPreviewSpawner
// Size: 0x388 (Inherited: 0x378)
class AWeaponSkinPreviewSpawner : public AActor {
public:

	struct AAssembleWeaponActor* WeaponActor; // 0x378(0x08)
	struct UModularWeaponDesc* Desc; // 0x380(0x08)

	void RefreshWeaponActor(); // Function DFMWeaponAssemble.WeaponSkinPreviewSpawner.RefreshWeaponActor // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.WeaponTest
// Size: 0x88 (Inherited: 0x40)
class UWeaponTest : public UDeveloperSettings {
public:

	struct FSoftObjectPath WeaponTestCharacterConfigTablePath; // 0x40(0x18)
	struct FSoftObjectPath WeaponTestWeaponPresetConfigTablePath; // 0x58(0x18)
	struct FSoftObjectPath NPCTemplateBPPath; // 0x70(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.WeaponTestWorldSystem
// Size: 0x78 (Inherited: 0x38)
class UWeaponTestWorldSystem : public UWorldSubsystem {
public:

	struct TArray<struct AActor*> Characters; // 0x38(0x10)
	struct TArray<struct AAssembleWeaponActor*> WeaponActors; // 0x48(0x10)
	struct AActor* LastViewTarget; // 0x58(0x08)
	struct AGPPlayerController* CachePlayerController; // 0x60(0x08)
	struct AActor* FocusTarget; // 0x68(0x08)
	struct FName SrcCameraStyle; // 0x70(0x08)

	void EnableFocusWeaponMode(); // Function DFMWeaponAssemble.WeaponTestWorldSystem.EnableFocusWeaponMode // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.WeaponAdapterBaseSimple
// Size: 0x160 (Inherited: 0x30)
class UWeaponAdapterBaseSimple : public UObject {
public:

	char pad_30[0x130]; // 0x30(0x130)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.WeaponAdapterItemAimDownSightsSimple
// Size: 0x168 (Inherited: 0x160)
class UWeaponAdapterItemAimDownSightsSimple : public UWeaponAdapterBaseSimple {
public:

	struct USkeletalMeshComponent* AdapterMeshCom; // 0x160(0x08)

	void OnAnimSeqLoadComplete(struct FSoftObjectPath& AssetPath); // Function DFMWeaponAssemble.WeaponAdapterItemAimDownSightsSimple.OnAnimSeqLoadComplete // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.WeaponAdapterItemBipodSimple
// Size: 0x160 (Inherited: 0x160)
class UWeaponAdapterItemBipodSimple : public UWeaponAdapterBaseSimple {
public:


	void TryModifyBipod(struct AAssembleWeaponActor* AssembleWeaponActor); // Function DFMWeaponAssemble.WeaponAdapterItemBipodSimple.TryModifyBipod // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMWeaponAssemble.WeaponExtraModelBaseSimple
// Size: 0x160 (Inherited: 0x160)
class UWeaponExtraModelBaseSimple : public UWeaponAdapterBaseSimple {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
