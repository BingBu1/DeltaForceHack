
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPDeformable.GPDeformableActor
// Size: 0x6b8 (Inherited: 0x378)
class AGPDeformableActor : public AActor {
public:

	struct TArray<bool> VisibleList; // 0x378(0x10)
	struct TArray<struct FVector> SyncMoveList; // 0x388(0x10)
	struct TArray<struct FVector> SyncMoveForwardList; // 0x398(0x10)
	bool bInDisappearing; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	uint64_t OwnerPlayerUin; // 0x3b0(0x08)
	uint32_t PseudoRandomSeed; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct AActor* OwnerCharacter; // 0x3c0(0x08)
	struct UGPDeformableActorRuntimeData* RuntimeData; // 0x3c8(0x08)
	bool bIsLocalControlled; // 0x3d0(0x01)
	bool bIsAIControlled; // 0x3d1(0x01)
	bool bIsUseVolumetric; // 0x3d2(0x01)
	char pad_3D3[0x1]; // 0x3d3(0x01)
	float AccumulateLifeTime; // 0x3d4(0x04)
	float AccumulateIdleLifeTime; // 0x3d8(0x04)
	float AccumulateDisappearTime; // 0x3dc(0x04)
	enum class EGPDeformableStage DeformableStage; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct UGPDeformableShapeComponentBase* DeformableSmokeComponent; // 0x3e8(0x08)
	uint64_t LoadHandler; // 0x3f0(0x08)
	int32_t CurrentVolumeSmokeLevelIndex; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct TArray<struct UBoxComponent*> VisibilityBoxArray; // 0x400(0x10)
	char pad_410[0x4]; // 0x410(0x04)
	int32_t MovePointCount; // 0x414(0x04)
	float ToFloorDistance; // 0x418(0x04)
	float radius; // 0x41c(0x04)
	float HalfHeight; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct UProceduralMeshComponent* GenerateMesh; // 0x428(0x08)
	int32_t IteratorCount; // 0x430(0x04)
	bool bEnableCheckVerticalLine; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	float MaxLifeTime; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	/*struct TSoftClassPtr<UObject>*/char DeformableShableClass[0x28]; // 0x440(0x28)
	/*struct TSoftClassPtr<UObject>*/char HD_DeformableShapeClass[0x28]; // 0x468(0x28)
	/*struct TSoftClassPtr<UObject>*/char VolumeSmokeClass[0x28]; // 0x490(0x28)
	/*struct TSoftClassPtr<UObject>*/char RayMarchingSmokeClass[0x28]; // 0x4b8(0x28)
	/*struct TSoftClassPtr<UObject>*/char ParticleSmokeClass[0x28]; // 0x4e0(0x28)
	/*struct TSoftClassPtr<UObject>*/char EmitParticleSmokeClass[0x28]; // 0x508(0x28)
	/*struct TSoftClassPtr<UObject>*/char EmitParticleSmokeClass_MobileLow[0x28]; // 0x530(0x28)
	/*struct TSoftClassPtr<UObject>*/char EmitParticleSmokeClass_MobileVeryLow[0x28]; // 0x558(0x28)
	/*struct TSoftClassPtr<UObject>*/char EmitParticleSmokeClass_HD[0x28]; // 0x580(0x28)
	/*struct TSoftClassPtr<UObject>*/char EmitParticleSmokeClass_HDLow[0x28]; // 0x5a8(0x28)
	struct TArray<struct FDeformableEmitParticleConfig> EmitParticleClassArray_HD; // 0x5d0(0x10)
	struct TArray<struct FDeformableEmitParticleConfig> EmitParticleClassArray_Mobile; // 0x5e0(0x10)
	float DisappearTime; // 0x5f0(0x04)
	enum class ECollisionChannel GridTestChannel; // 0x5f4(0x01)
	char pad_5F5[0x3]; // 0x5f5(0x03)
	struct FGPDeformableActorConfig SmokeParamConfig; // 0x5f8(0x80)
	struct FCollisionResponseContainer CollisionResponse; // 0x678(0x20)
	char pad_698[0x4]; // 0x698(0x04)
	struct FVector MinPoint; // 0x69c(0x0c)
	struct FVector MaxPoint; // 0x6a8(0x0c)
	char pad_6B4[0x4]; // 0x6b4(0x04)

	void UnRegisterBoxCollision(); // Function GPDeformable.GPDeformableActor.UnRegisterBoxCollision // (Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableAnimModule
// Size: 0x48 (Inherited: 0x30)
class UGPDeformableAnimModule : public UObject {
public:

	struct UGPDeformableSphereComponent* DeformableSphereComponent; // 0x30(0x08)
	struct TArray<struct FGPDeformableEmitSphere> EmitList; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableCubeAnimModule
// Size: 0x78 (Inherited: 0x30)
class UGPDeformableCubeAnimModule : public UObject {
public:

	char pad_30[0x30]; // 0x30(0x30)
	struct UGPDeformableShapeComponentBase* ShapeComponent; // 0x60(0x08)
	struct TArray<struct FGPDeformableEmitVolumeCube> EmitList; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableEmitEntity
// Size: 0x30 (Inherited: 0x30)
class UGPDeformableEmitEntity : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableGameStateComponent
// Size: 0x1d8 (Inherited: 0x100)
class UGPDeformableGameStateComponent : public UActorComponent {
public:

	float OriginVolumetricFogGridSizeZ; // 0x100(0x04)
	float OriginVolumetricFogGridSizeXY; // 0x104(0x04)
	int32_t TemporalReprojection; // 0x108(0x04)
	float LastRecordVolumetricViewDistance; // 0x10c(0x04)
	bool bDynamicSetVolumetricViewDistance; // 0x110(0x01)
	bool bIsLocalFocusInside; // 0x111(0x01)
	char pad_112[0x2]; // 0x112(0x02)
	struct TWeakObjectPtr<struct UExponentialHeightFogComponent> HeightFogComponent; // 0x114(0x08)
	bool bIsLocalControlledReleaseUAS; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct TArray<struct AGPDeformableActor*> DeformableActors; // 0x120(0x10)
	struct TArray<struct AGPDeformableActor*> VolumeSmokeActors; // 0x130(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> PreInsideActorList; // 0x140(0x10)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct TWeakObjectPtr<struct AGPDeformableActor>> CharacterInSmokeMap; // 0x150(0x50)
	struct TArray<struct TWeakObjectPtr<struct AActor>> TempActorList; // 0x1a0(0x10)
	int32_t InSmokeWallBuffId; // 0x1b0(0x04)
	float TickActorInSideTime; // 0x1b4(0x04)
	bool bOnlyCheckActorInsideInDS; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float TickAccumulateTime; // 0x1bc(0x04)
	bool bTickCheckActors; // 0x1c0(0x01)
	bool bTickVolumeInFront; // 0x1c1(0x01)
	char pad_1C2[0x2]; // 0x1c2(0x02)
	int32_t CurrentInFrontVolumeCount; // 0x1c4(0x04)
	int32_t LastCalcFrontVolumeFrame; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct FTimerHandle VolumeSmokeLevelTimer; // 0x1d0(0x08)

	void UpdateVolumetricViewDistance(); // Function GPDeformable.GPDeformableGameStateComponent.UpdateVolumetricViewDistance // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableActorRuntimeData
// Size: 0xd0 (Inherited: 0x30)
class UGPDeformableActorRuntimeData : public UObject {
public:

	int32_t CurrentMoveIndex; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FVector> MoveOriginPointList; // 0x38(0x10)
	struct TArray<struct FVector> MoveForwardList; // 0x48(0x10)
	struct TArray<char> MovePointStateList; // 0x58(0x10)
	struct TArray<struct FVector> BottomOriginPointList; // 0x68(0x10)
	struct TArray<struct FVector> TopOriginPointList; // 0x78(0x10)
	struct TArray<struct FVector> WorldSpaceVertices; // 0x88(0x10)
	bool IsGeneratingGrid; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t CurrentGenerateWorldPileIndex; // 0x9c(0x04)
	int32_t CurrentGenerateGridIndex; // 0xa0(0x04)
	int32_t PileNum; // 0xa4(0x04)
	int32_t HonrizontalGridCount; // 0xa8(0x04)
	int32_t VerticalGridCount; // 0xac(0x04)
	float HonrizontalGridSize; // 0xb0(0x04)
	float VerticalGridSize; // 0xb4(0x04)
	char pad_B8[0x18]; // 0xb8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableUnitSphere
// Size: 0x68 (Inherited: 0x30)
class UGPDeformableUnitSphere : public UObject {
public:

	char pad_30[0x38]; // 0x30(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPUASActor
// Size: 0x4a0 (Inherited: 0x378)
class AGPUASActor : public AActor {
public:

	char pad_378[0x8]; // 0x378(0x08)
	bool bIsLocalControlled; // 0x380(0x01)
	bool bIsAIControlled; // 0x381(0x01)
	char pad_382[0x2]; // 0x382(0x02)
	float LastGenerateTime; // 0x384(0x04)
	float AccumulateLifeTime; // 0x388(0x04)
	float AccumulateIdleLifeTime; // 0x38c(0x04)
	char pad_390[0x70]; // 0x390(0x70)
	struct FVector InitActorLocation; // 0x400(0x0c)
	char pad_40C[0x14]; // 0x40c(0x14)
	uint64_t OwnerPlayerUin; // 0x420(0x08)
	bool bIsDeformableActorCreated; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct TArray<struct FSpawnDeformableActorConfig> SpawnConfig; // 0x430(0x10)
	struct UGPUASMovementComponent* MovementComponent; // 0x440(0x08)
	struct UCapsuleComponent* CapsuleComponent; // 0x448(0x08)
	struct UClass* DeformableActorClass; // 0x450(0x08)
	struct UClass* DeformableActorMovementClass; // 0x458(0x08)
	struct AGPDeformableActor* TargetDeformable; // 0x460(0x08)
	uint64_t FireId; // 0x468(0x08)
	int32_t MaxSamplePoint; // 0x470(0x04)
	float DefaultSampleSize; // 0x474(0x04)
	float DelayDestroyTime; // 0x478(0x04)
	float PreDestroyTime; // 0x47c(0x04)
	bool EnableDestroyAfterBuildingMoveList; // 0x480(0x01)
	char pad_481[0x3]; // 0x481(0x03)
	float MaxLifeTime; // 0x484(0x04)
	float MaxIdleLifeTime; // 0x488(0x04)
	float MaxFlyDistance; // 0x48c(0x04)
	float MaxValidMovePointDistance; // 0x490(0x04)
	float MaxFlyTime; // 0x494(0x04)
	float MinDistanceToGenerateSmoke; // 0x498(0x04)
	float StepMaxGenerateTime; // 0x49c(0x04)

	void SyncMovePointToServer(int32_t Index, struct FVector InMovePoint, struct FVector InDirection); // Function GPDeformable.GPUASActor.SyncMovePointToServer // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPUASActorInterface
// Size: 0x30 (Inherited: 0x30)
class UGPUASActorInterface : public UInterface {
public:


	bool IsLocalControlled(); // Function GPDeformable.GPUASActorInterface.IsLocalControlled // (Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPUASMovementComponent
// Size: 0x2f8 (Inherited: 0x140)
class UGPUASMovementComponent : public UMovementComponent {
public:

	char pad_140[0x10]; // 0x140(0x10)
	struct FVector MoveForwardDirection; // 0x150(0x0c)
	struct FVector2D LastInputRotation; // 0x15c(0x08)
	char pad_164[0x4]; // 0x164(0x04)
	struct TArray<struct FVector2D> InputList; // 0x168(0x10)
	struct TArray<float> InputTimeList; // 0x178(0x10)
	struct TArray<struct FVector2D> InputDeltaList; // 0x188(0x10)
	float TickCheckMaxInputTime; // 0x198(0x04)
	float DirectionTime; // 0x19c(0x04)
	float TicMoveAccumulateTime; // 0x1a0(0x04)
	bool bDisableInput; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	float MoveDidstance; // 0x1a8(0x04)
	int32_t StruckedFrames; // 0x1ac(0x04)
	float MoveTime; // 0x1b0(0x04)
	struct FVector UASBeginOriginLocation; // 0x1b4(0x0c)
	struct FVector UASBeginVelocity; // 0x1c0(0x0c)
	bool bNetMulticastCastDirty; // 0x1cc(0x01)
	char pad_1CD[0x3]; // 0x1cd(0x03)
	struct FVector LastMultiCastVelocity; // 0x1d0(0x0c)
	struct FVector PerceiveBlockDirection; // 0x1dc(0x0c)
	bool bIsPerceiveBlock; // 0x1e8(0x01)
	char pad_1E9[0x3f]; // 0x1e9(0x3f)
	bool bMoveUpOnHit; // 0x228(0x01)
	char pad_229[0x2b]; // 0x229(0x2b)
	bool bIsDeceleration; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	float InitMoveSpeed; // 0x258(0x04)
	float AssumeMaxMoveDistance; // 0x25c(0x04)
	float StartDecelerationMoveTime; // 0x260(0x04)
	float CurrentPitchAngle; // 0x264(0x04)
	enum class EUASMovementMode MovementMode; // 0x268(0x01)
	bool bIsPausedMoveInControlled; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)
	struct AActor* Owner; // 0x270(0x08)
	float MaxSpeed; // 0x278(0x04)
	float FinalMinSpeed; // 0x27c(0x04)
	float SimulateSpeedScale; // 0x280(0x04)
	float Acceleration; // 0x284(0x04)
	float Deceleration; // 0x288(0x04)
	float DecelerationMoveRate; // 0x28c(0x04)
	float MoveSpeedRotationAngle; // 0x290(0x04)
	float DecelerationRotationAngle; // 0x294(0x04)
	float AccelerationRotationAngle; // 0x298(0x04)
	float DistanceToFloor; // 0x29c(0x04)
	float CheckFloorDistance; // 0x2a0(0x04)
	bool ForceDistToFloor; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	float PopUpSpeed; // 0x2a8(0x04)
	float VelocityLerp; // 0x2ac(0x04)
	float DirectionLerp; // 0x2b0(0x04)
	float DirectionFollowCD; // 0x2b4(0x04)
	float DirectionDotValue; // 0x2b8(0x04)
	float PerceiveBlockDistance; // 0x2bc(0x04)
	bool bEnablePerceiveBlock; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float InputYawMaxTime; // 0x2c4(0x04)
	int32_t InputYawMaxCount; // 0x2c8(0x04)
	int32_t InverseInputAttenuation; // 0x2cc(0x04)
	float CheckMaxInputLimitTime; // 0x2d0(0x04)
	float MaxInputDeltaLimit; // 0x2d4(0x04)
	bool EnableInputToMove; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	float RelicateMoveDeltaTime; // 0x2dc(0x04)
	float ServerValidDistance; // 0x2e0(0x04)
	float SimulatePositionChaseTime; // 0x2e4(0x04)
	float SimulateServerTime; // 0x2e8(0x04)
	float RotationSpeed; // 0x2ec(0x04)
	bool bCanMoveDir; // 0x2f0(0x01)
	bool bCanModifyPitch; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)

	void TickSimulateMove(float DeltaTime); // Function GPDeformable.GPUASMovementComponent.TickSimulateMove // (Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.RangeFinderDigitalDisplayActor
// Size: 0x520 (Inherited: 0x378)
class ARangeFinderDigitalDisplayActor : public AActor {
public:

	char DigitalLength; // 0x378(0x01)
	char VaildNumber; // 0x379(0x01)
	char pad_37A[0x2]; // 0x37a(0x02)
	struct FColor FontColor_Hip; // 0x37c(0x04)
	struct FColor FontColor_Aim; // 0x380(0x04)
	struct FColor ZeroColor; // 0x384(0x04)
	struct FColor NotZeroColor; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct FTransform Trans_HipDistance; // 0x390(0x30)
	struct FTransform Trans_HipPreFalling; // 0x3c0(0x30)
	struct FTransform Trans_AimDistance; // 0x3f0(0x30)
	/*struct TSoftObjectPtr<UStaticMesh>*/char NumPlaneMeshPath[0x28]; // 0x420(0x28)
	struct FSoftObjectPath Mat_DigitalDisplayPath; // 0x448(0x18)
	/*struct TSoftObjectPtr<UStaticMesh>*/char DigitalDisplayMeshUIPath[0x28]; // 0x460(0x28)
	struct FSoftObjectPath Mat_DigitalDisplayUIPath; // 0x488(0x18)
	struct FVector TargetScale; // 0x4a0(0x0c)
	bool IsAimActor; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	struct UStaticMeshComponent* NumPlaneMesh; // 0x4b0(0x08)
	struct UMaterialInstanceDynamic* MatDigitalDisplay; // 0x4b8(0x08)
	struct UProceduralMeshComponent* ProceduralMesh; // 0x4c0(0x08)
	struct UStaticMeshComponent* NumPlaneMeshUI; // 0x4c8(0x08)
	struct UMaterialInstanceDynamic* MatDigitalDisplayUI; // 0x4d0(0x08)
	struct TArray<char> NumTArray; // 0x4d8(0x10)
	struct TArray<struct FColor> ColorTArray; // 0x4e8(0x10)
	struct TArray<struct FVector2D> UVTArray; // 0x4f8(0x10)
	struct TArray<struct FColor> VertexColors; // 0x508(0x10)
	float DisplayNumber; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableShapeComponentBase
// Size: 0x2d0 (Inherited: 0x100)
class UGPDeformableShapeComponentBase : public UActorComponent {
public:

	char pad_100[0x90]; // 0x100(0x90)
	int32_t QualitySettingIndex; // 0x190(0x04)
	int32_t VolumeSmokeLevelIndex; // 0x194(0x04)
	int32_t CurrentTODWeatherID; // 0x198(0x04)
	char pad_19C[0x94]; // 0x19c(0x94)
	struct UProceduralMeshComponent* GenerateMesh; // 0x230(0x08)
	struct UGPDeformableActorRuntimeData* RuntimeDataPtr; // 0x238(0x08)
	float VoxelSize; // 0x240(0x04)
	int32_t VerticalGridNum; // 0x244(0x04)
	int32_t HonrizontalGridNum; // 0x248(0x04)
	int32_t PileNum; // 0x24c(0x04)
	float MoveSize; // 0x250(0x04)
	float GridSizeY; // 0x254(0x04)
	float GridSizeZ; // 0x258(0x04)
	float ForwardGridDistanceScale; // 0x25c(0x04)
	float HonrizontalDistanceScale; // 0x260(0x04)
	float VerticalDistanceScale; // 0x264(0x04)
	float DesignCubeGrideSizeYInHighQuality; // 0x268(0x04)
	float DesignCubeGrideSizeZInHighQuality; // 0x26c(0x04)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char DefaultMaterialPath[0x28]; // 0x270(0x28)
	/*struct TSoftObjectPtr<UStaticMesh>*/char DefaultMeshAssetPath[0x28]; // 0x298(0x28)
	struct UMaterialInstance* RuntimeDefaultMatInst; // 0x2c0(0x08)
	struct UMaterialInstanceDynamic* CacheMID; // 0x2c8(0x08)

	bool ReadVibilityList(struct TArray<bool>& InList); // Function GPDeformable.GPDeformableShapeComponentBase.ReadVibilityList // (Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableBoxComponent
// Size: 0x2f0 (Inherited: 0x2d0)
class UGPDeformableBoxComponent : public UGPDeformableShapeComponentBase {
public:

	float DensityTestSize; // 0x2d0(0x04)
	char pad_2D4[0x1c]; // 0x2d4(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableCubeRayMarchingComponent
// Size: 0x3a0 (Inherited: 0x2d0)
class UGPDeformableCubeRayMarchingComponent : public UGPDeformableShapeComponentBase {
public:

	char pad_2D0[0x8]; // 0x2d0(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x2d8(0x08)
	int32_t RenderTextureSizeX; // 0x2e0(0x04)
	int32_t RenderTextureSizeY; // 0x2e4(0x04)
	float PaintDensity; // 0x2e8(0x04)
	float PaintRadius; // 0x2ec(0x04)
	float VolumeDistanceToEdge; // 0x2f0(0x04)
	float CubeScale; // 0x2f4(0x04)
	struct UMaterial* PaintMaterial; // 0x2f8(0x08)
	struct UMaterialInstance* RayMarchingMaterial; // 0x300(0x08)
	struct UStaticMesh* BaseMesh; // 0x308(0x08)
	float BoxScale; // 0x310(0x04)
	float XYFrames; // 0x314(0x04)
	struct UStaticMeshComponent* StaticComponent; // 0x318(0x08)
	struct FVector TillingBaseBox; // 0x320(0x0c)
	struct FVector TillingBaseValue; // 0x32c(0x0c)
	int32_t FarSteps; // 0x338(0x04)
	int32_t NearSteps; // 0x33c(0x04)
	float FarDistanceForSteps; // 0x340(0x04)
	int32_t CurrentRayMarchingSteps; // 0x344(0x04)
	struct UMaterialInstanceDynamic* DynamicRayMarchingMaterial; // 0x348(0x08)
	struct FVector ZeroBasedAABBCenter; // 0x350(0x0c)
	bool bInitGenerating; // 0x35c(0x01)
	bool bIsCreateCube; // 0x35d(0x01)
	char pad_35E[0x2]; // 0x35e(0x02)
	struct UTextureRenderTarget2D* CurrentRenderTarget; // 0x360(0x08)
	struct UStaticMesh* CurrentCubeMeshAsset; // 0x368(0x08)
	struct UMaterialInstance* CurrentMaterialInstance; // 0x370(0x08)
	struct UMaterialInstance* CurrentHQCubeMaterialInstance; // 0x378(0x08)
	struct TArray<struct UMaterialInstance*> CurrentMaterialInstanceArray; // 0x380(0x10)
	struct TArray<struct UStaticMesh*> CurrentMeshArray; // 0x390(0x10)

	void TickRecalculateStep(); // Function GPDeformable.GPDeformableCubeRayMarchingComponent.TickRecalculateStep // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableInstancedSmokeComponent
// Size: 0x3e0 (Inherited: 0x2d0)
class UGPDeformableInstancedSmokeComponent : public UGPDeformableShapeComponentBase {
public:

	bool bInitGenerating; // 0x2d0(0x01)
	bool bIsGeneratingMesh; // 0x2d1(0x01)
	char pad_2D2[0x6]; // 0x2d2(0x06)
	bool bIsCreateCube; // 0x2d8(0x01)
	char pad_2D9[0xb]; // 0x2d9(0x0b)
	bool bIsTickAnimation; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct UStaticMesh* CurrentCubeMeshAsset; // 0x2e8(0x08)
	struct UMaterialInstance* CurrentMaterialInstance; // 0x2f0(0x08)
	bool bRenderInstance; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct UGPDeformableCubeAnimModule* AnimModule; // 0x300(0x08)
	struct UInstancedStaticMeshComponent* InstancedComponent; // 0x308(0x08)
	struct TArray<struct FTransform> InstancedTransforms; // 0x310(0x10)
	struct TArray<struct FDeformableConfigAsset> ConfigAssetArray; // 0x320(0x10)
	struct TArray<struct UMeshComponent*> MeshList; // 0x330(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstanceList; // 0x340(0x10)
	int32_t IteratorMeshInFrame; // 0x350(0x04)
	int32_t IteratorCreateCubeInFrame; // 0x354(0x04)
	int32_t IteratorDelayNewstMoveIndex; // 0x358(0x04)
	float SizeRandomMin; // 0x35c(0x04)
	float SizeRandomMax; // 0x360(0x04)
	struct FVector CubeRandomOffsetMin; // 0x364(0x0c)
	struct FVector CubeRandomOffsetMax; // 0x370(0x0c)
	float ForwardSizeScale; // 0x37c(0x04)
	float MaxWidthSize; // 0x380(0x04)
	bool EnableGeneratingInFlying; // 0x384(0x01)
	bool EnableAnimation; // 0x385(0x01)
	char pad_386[0x2]; // 0x386(0x02)
	float InitMaxRadius; // 0x388(0x04)
	float TargetRadius; // 0x38c(0x04)
	float ExpandLifeMinTime; // 0x390(0x04)
	float ExpandLifeMaxTime; // 0x394(0x04)
	float ExpandDelayLifeMinTime; // 0x398(0x04)
	float ExpandDelayLifeMaxTime; // 0x39c(0x04)
	float ExpandLocLifeMinTime; // 0x3a0(0x04)
	float ExpandLocLifeMaxTime; // 0x3a4(0x04)
	float ExpandDelayLocLifeMinTime; // 0x3a8(0x04)
	float ExpandDelayLocLifeMaxTime; // 0x3ac(0x04)
	float EmitFallMinSpeed; // 0x3b0(0x04)
	float EmitFallMaxSpeed; // 0x3b4(0x04)
	float PopDistance; // 0x3b8(0x04)
	int32_t UseUASZ; // 0x3bc(0x04)
	float DelayTimePerPile; // 0x3c0(0x04)
	int32_t BeginAnimModuleIndex; // 0x3c4(0x04)
	struct FName MaterialParameterName; // 0x3c8(0x08)
	int32_t ParameterCustomDataIndex; // 0x3d0(0x04)
	char pad_3D4[0xc]; // 0x3d4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableMeshComponent
// Size: 0x320 (Inherited: 0x2d0)
class UGPDeformableMeshComponent : public UGPDeformableShapeComponentBase {
public:

	float DensityTestSize; // 0x2d0(0x04)
	float ExpandMinRadius; // 0x2d4(0x04)
	float ExpandMaxRadius; // 0x2d8(0x04)
	int32_t PileNumStep; // 0x2dc(0x04)
	float BaseVerticalOffset; // 0x2e0(0x04)
	float RandomSphereGap; // 0x2e4(0x04)
	int32_t RandomSpereCount; // 0x2e8(0x04)
	struct FVector RandomCenterOffsetMin; // 0x2ec(0x0c)
	struct FVector RandomCenterOffsetMax; // 0x2f8(0x0c)
	char pad_304[0x1c]; // 0x304(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableMeshEmitComponent
// Size: 0x3e0 (Inherited: 0x2d0)
class UGPDeformableMeshEmitComponent : public UGPDeformableShapeComponentBase {
public:

	char pad_2D0[0x8]; // 0x2d0(0x08)
	bool bInitGenerating; // 0x2d8(0x01)
	bool bIsGeneratingPath; // 0x2d9(0x01)
	char pad_2DA[0x2]; // 0x2da(0x02)
	int32_t CurrentPileIndex; // 0x2dc(0x04)
	bool bIsGenerateEmiter; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	int32_t HonrizontalCubeCount; // 0x2e4(0x04)
	int32_t VerticalCubeCount; // 0x2e8(0x04)
	float HonrizontalCubeSize; // 0x2ec(0x04)
	float VerticalCubeSize; // 0x2f0(0x04)
	int32_t CurrentCreateCubePileIndex; // 0x2f4(0x04)
	int32_t CurrentGridIndex; // 0x2f8(0x04)
	bool bIsTickAnimation; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	float AccumulateDelayMoveTime; // 0x300(0x04)
	float AccumulateMoveTime; // 0x304(0x04)
	float CurrentEmitDistance; // 0x308(0x04)
	bool bIsTickFadeOut; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	float FadeOutTickTime; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct TArray<struct FVector> PathList; // 0x318(0x10)
	struct TArray<float> PathDistList; // 0x328(0x10)
	struct TArray<float> PathXYDistList; // 0x338(0x10)
	float PathTotalDistance; // 0x348(0x04)
	float PathTotalXYDistance; // 0x34c(0x04)
	int32_t LastPathXYMovedIndex; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct TArray<struct FGPDeformableEmiter> EmiterArray; // 0x358(0x10)
	struct TArray<struct FGPDeformableEmitConfig> EmiterConfigs; // 0x368(0x10)
	float IteratorPathZOffset; // 0x378(0x04)
	float AlphaThresholdInitValue; // 0x37c(0x04)
	float AlphaThresholdTargetValue; // 0x380(0x04)
	float AlphaThresholdTime; // 0x384(0x04)
	struct FVector InitColorLife; // 0x388(0x0c)
	struct FVector TargetColorLife; // 0x394(0x0c)
	float ColorLifeTime; // 0x3a0(0x04)
	float FadeOutTime; // 0x3a4(0x04)
	struct UStaticMesh* StaticMesh; // 0x3a8(0x08)
	struct UMaterialInstance* MaterialInstance; // 0x3b0(0x08)
	int32_t StartMoveIndex; // 0x3b8(0x04)
	float DelayMoveTime; // 0x3bc(0x04)
	float MoveSpeed; // 0x3c0(0x04)
	bool MoveIgoreZ; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	int32_t IteratorPathPointInFrame; // 0x3c8(0x04)
	int32_t IteratorCreateCubeInFrame; // 0x3cc(0x04)
	int32_t IteratorDelayNewstMoveIndex; // 0x3d0(0x04)
	char pad_3D4[0xc]; // 0x3d4(0x0c)

	void ClearEmiter(); // Function GPDeformable.GPDeformableMeshEmitComponent.ClearEmiter // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableMeshLineComponent
// Size: 0x3e0 (Inherited: 0x2d0)
class UGPDeformableMeshLineComponent : public UGPDeformableShapeComponentBase {
public:

	struct TArray<struct FVector> CachedVertices; // 0x2d0(0x10)
	struct TArray<int32_t> CachedTriangles; // 0x2e0(0x10)
	struct TArray<struct FVector> CachedNormals; // 0x2f0(0x10)
	struct TArray<struct FVector2D> CachedUV0; // 0x300(0x10)
	struct TArray<struct FVector2D> CachedUV1; // 0x310(0x10)
	struct TArray<struct FProcMeshTangent> CachedTangents; // 0x320(0x10)
	struct TArray<struct FColor> CachedVertexColors; // 0x330(0x10)
	bool bUseHighQualityCube; // 0x340(0x01)
	bool bInitGenerating; // 0x341(0x01)
	bool bIsGeneratingMesh; // 0x342(0x01)
	char pad_343[0x5]; // 0x343(0x05)
	bool bIsCreateCube; // 0x348(0x01)
	char pad_349[0xb]; // 0x349(0x0b)
	bool bIsTickAnimation; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	struct TArray<struct FVector> VolumeLocalCenterList; // 0x358(0x10)
	struct TArray<float> VolumeLocalCenterDistList; // 0x368(0x10)
	float LocalCenterTotalDistance; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct UStaticMesh* StaticMesh; // 0x380(0x08)
	struct FVector StaticMeshLocalCenter; // 0x388(0x0c)
	struct FVector StaticMeshLocalForward; // 0x394(0x0c)
	float MeshDistance; // 0x3a0(0x04)
	int32_t SmoothDivideCount; // 0x3a4(0x04)
	int32_t SmoothCalcBezierCount; // 0x3a8(0x04)
	int32_t IteratorMeshInFrame; // 0x3ac(0x04)
	int32_t IteratorCreateCubeInFrame; // 0x3b0(0x04)
	int32_t IteratorDelayNewstMoveIndex; // 0x3b4(0x04)
	float SizeRandomMin; // 0x3b8(0x04)
	float SizeRandomMax; // 0x3bc(0x04)
	struct FVector CubeRandomOffsetMin; // 0x3c0(0x0c)
	struct FVector CubeRandomOffsetMax; // 0x3cc(0x0c)
	float ForwardSizeScale; // 0x3d8(0x04)
	float MaxWidthSize; // 0x3dc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformablePlaneSmokeComponent
// Size: 0x400 (Inherited: 0x2d0)
class UGPDeformablePlaneSmokeComponent : public UGPDeformableShapeComponentBase {
public:

	int32_t CurrentConfigLevelIndex; // 0x2d0(0x04)
	bool bUseHighQualityCube; // 0x2d4(0x01)
	bool bInitGenerating; // 0x2d5(0x01)
	bool bIsGeneratingMesh; // 0x2d6(0x01)
	char pad_2D7[0x5]; // 0x2d7(0x05)
	bool bIsCreateCube; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	int32_t HonrizontalCubeCount; // 0x2e0(0x04)
	int32_t VerticalCubeCount; // 0x2e4(0x04)
	float HonrizontalCubeSize; // 0x2e8(0x04)
	float VerticalCubeSize; // 0x2ec(0x04)
	char pad_2F0[0x8]; // 0x2f0(0x08)
	bool bIsTickAnimation; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct UStaticMesh* CurrentCubeMeshAsset; // 0x300(0x08)
	struct UMaterialInstance* CurrentMaterialInstance; // 0x308(0x08)
	struct UMaterialInstance* CurrentHQCubeMaterialInstance; // 0x310(0x08)
	struct TArray<struct UMaterialInstance*> CurrentMaterialInstanceArray; // 0x318(0x10)
	struct TArray<struct UStaticMesh*> CurrentMeshArray; // 0x328(0x10)
	struct TArray<struct FVector> WorldSpaceVertices; // 0x338(0x10)
	struct TArray<struct FDeformableConfigAsset> ConfigAssetArray; // 0x348(0x10)
	int32_t IteratorMeshInFrame; // 0x358(0x04)
	int32_t IteratorCreateCubeInFrame; // 0x35c(0x04)
	int32_t IteratorDelayNewstMoveIndex; // 0x360(0x04)
	float SizeRandomMin; // 0x364(0x04)
	float SizeRandomMax; // 0x368(0x04)
	struct FVector CubeRandomOffsetMin; // 0x36c(0x0c)
	struct FVector CubeRandomOffsetMax; // 0x378(0x0c)
	float ForwardSizeScale; // 0x384(0x04)
	float MaxWidthSize; // 0x388(0x04)
	bool EnableGeneratingInFlying; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	int32_t ForwardBaseLineEdgeVertexCount; // 0x390(0x04)
	int32_t ForwardUpperLineEdgeVertexCount; // 0x394(0x04)
	int32_t HonrizontalBaseLineEdgeVertexCount; // 0x398(0x04)
	int32_t HonrizontalUpperLineEdgeVertexCount; // 0x39c(0x04)
	int32_t VerticalBaseLineEdgeVertexCount; // 0x3a0(0x04)
	int32_t VerticalUpperLineEdgeVertexCount; // 0x3a4(0x04)
	float ExpandDistance; // 0x3a8(0x04)
	float EdgeDistance; // 0x3ac(0x04)
	bool EnableAnimation; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	float InitMaxRadius; // 0x3b4(0x04)
	float TargetRadius; // 0x3b8(0x04)
	float ExpandLifeMinTime; // 0x3bc(0x04)
	float ExpandLifeMaxTime; // 0x3c0(0x04)
	float ExpandDelayLifeMinTime; // 0x3c4(0x04)
	float ExpandDelayLifeMaxTime; // 0x3c8(0x04)
	float ExpandLocLifeMinTime; // 0x3cc(0x04)
	float ExpandLocLifeMaxTime; // 0x3d0(0x04)
	float ExpandDelayLocLifeMinTime; // 0x3d4(0x04)
	float ExpandDelayLocLifeMaxTime; // 0x3d8(0x04)
	float EmitFallMinSpeed; // 0x3dc(0x04)
	float EmitFallMaxSpeed; // 0x3e0(0x04)
	float PopDistance; // 0x3e4(0x04)
	int32_t UseUASZ; // 0x3e8(0x04)
	float DelayTimePerPile; // 0x3ec(0x04)
	int32_t BeginAnimModuleIndex; // 0x3f0(0x04)
	struct FName MaterialParameterName; // 0x3f4(0x08)
	char pad_3FC[0x4]; // 0x3fc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableSphereComponent
// Size: 0x3b0 (Inherited: 0x2d0)
class UGPDeformableSphereComponent : public UGPDeformableShapeComponentBase {
public:

	struct UGPDeformableUnitSphere* UnitSpere; // 0x2d0(0x08)
	struct UGPDeformableAnimModule* AnimModule; // 0x2d8(0x08)
	bool bEnableAnimation; // 0x2e0(0x01)
	bool bIsTickCalculateGridVertices; // 0x2e1(0x01)
	bool bIsTickExpandSphere; // 0x2e2(0x01)
	bool bIsTickAnimation; // 0x2e3(0x01)
	int32_t CurrentExpandPileIndex; // 0x2e4(0x04)
	int32_t CurrentGridIndex; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct TArray<float> GridSphereRadius; // 0x2f0(0x10)
	struct TArray<struct FVector> GridSphereCenters; // 0x300(0x10)
	struct TArray<struct FRotator> GridSphereRotator; // 0x310(0x10)
	struct TArray<float> GridSphereMoveRates; // 0x320(0x10)
	int32_t LongitudeLineNum; // 0x330(0x04)
	int32_t LatitudeLineNum; // 0x334(0x04)
	int32_t IteratorSphereCount; // 0x338(0x04)
	float SpereMinRadius; // 0x33c(0x04)
	float SpereMaxRadius; // 0x340(0x04)
	float RadiusRandomMin; // 0x344(0x04)
	float RadiusRandomMax; // 0x348(0x04)
	struct FVector RadiusRandomOffsetMin; // 0x34c(0x0c)
	struct FVector RadiusRandomOffsetMax; // 0x358(0x0c)
	float RandomSphereIncreaseDistace; // 0x364(0x04)
	float BottomSphereRadiusScale; // 0x368(0x04)
	bool EnablePlayAnimation; // 0x36c(0x01)
	char pad_36D[0x3]; // 0x36d(0x03)
	int32_t EnablePlayAnimation_DelayPileIndex; // 0x370(0x04)
	float InitMaxRadius; // 0x374(0x04)
	float ExpandLifeMinTime; // 0x378(0x04)
	float ExpandLifeMaxTime; // 0x37c(0x04)
	float ExpandDelayLifeMinTime; // 0x380(0x04)
	float ExpandDelayLifeMaxTime; // 0x384(0x04)
	float ExpandLocLifeMinTime; // 0x388(0x04)
	float ExpandLocLifeMaxTime; // 0x38c(0x04)
	float ExpandDelayLocLifeMinTime; // 0x390(0x04)
	float ExpandDelayLocLifeMaxTime; // 0x394(0x04)
	float EmitFallMinSpeed; // 0x398(0x04)
	float EmitFallMaxSpeed; // 0x39c(0x04)
	float PopDistance; // 0x3a0(0x04)
	int32_t BeginAnimModuleIndex; // 0x3a4(0x04)
	int32_t UseUASZ; // 0x3a8(0x04)
	float DelayTimePerPile; // 0x3ac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableVolumeRayMarchingComponent
// Size: 0x330 (Inherited: 0x2d0)
class UGPDeformableVolumeRayMarchingComponent : public UGPDeformableShapeComponentBase {
public:

	char pad_2D0[0xc]; // 0x2d0(0x0c)
	bool bIsGeneratingMesh; // 0x2dc(0x01)
	bool bInitGenerating; // 0x2dd(0x01)
	bool bIsCreateCube; // 0x2de(0x01)
	char pad_2DF[0x1]; // 0x2df(0x01)
	struct UTextureRenderTarget2D* RenderTarget; // 0x2e0(0x08)
	int32_t RenderTextureSizeX; // 0x2e8(0x04)
	int32_t RenderTextureSizeY; // 0x2ec(0x04)
	float PaintDensity; // 0x2f0(0x04)
	float PaintRadius; // 0x2f4(0x04)
	float VolumeDistanceToEdge; // 0x2f8(0x04)
	float CubeScale; // 0x2fc(0x04)
	struct UMaterial* PaintMaterial; // 0x300(0x08)
	struct UMaterialInstance* RayMarchingMaterial; // 0x308(0x08)
	float BoxScale; // 0x310(0x04)
	float XYFrames; // 0x314(0x04)
	struct UTextureRenderTarget2D* CurrentRenderTarget; // 0x318(0x08)
	struct UProceduralMeshComponent* ProceduralMeshComponent; // 0x320(0x08)
	char pad_328[0x8]; // 0x328(0x08)

	void TickExpandVertices(); // Function GPDeformable.GPDeformableVolumeRayMarchingComponent.TickExpandVertices // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPDeformable.GPDeformableVolumeSmokeComponent
// Size: 0x440 (Inherited: 0x2d0)
class UGPDeformableVolumeSmokeComponent : public UGPDeformableShapeComponentBase {
public:

	char pad_2D0[0x8]; // 0x2d0(0x08)
	bool bInFadeOut; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	float TickFadeOutTime; // 0x2dc(0x04)
	bool bUseHighQualityCube; // 0x2e0(0x01)
	bool bInitGenerating; // 0x2e1(0x01)
	char pad_2E2[0x6]; // 0x2e2(0x06)
	bool bIsCreateCube; // 0x2e8(0x01)
	char pad_2E9[0xb]; // 0x2e9(0x0b)
	bool bIsTickAnimation; // 0x2f4(0x01)
	char pad_2F5[0x3]; // 0x2f5(0x03)
	struct UStaticMesh* CurrentCubeMeshAsset; // 0x2f8(0x08)
	struct UMaterialInstance* CurrentMaterialInstance; // 0x300(0x08)
	struct UMaterialInstance* CurrentHQCubeMaterialInstance; // 0x308(0x08)
	struct TArray<struct UMaterialInstance*> CurrentMaterialInstanceArray; // 0x310(0x10)
	struct TArray<struct UStaticMesh*> CurrentMeshArray; // 0x320(0x10)
	struct UGPDeformableCubeAnimModule* AnimModule; // 0x330(0x08)
	struct FVolumeSmokeTODMatParameter CurrentVolumeSmokeTODMatParameter; // 0x338(0x10)
	struct TArray<struct FDeformableConfigAsset> ConfigAssetArray; // 0x348(0x10)
	struct TArray<struct FVolumeSmokeTODMatParameter> TODWeatherParameters; // 0x358(0x10)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char HighQualityCubeMaterialInstancePath[0x28]; // 0x368(0x28)
	struct TArray<struct UMeshComponent*> MeshList; // 0x390(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstanceList; // 0x3a0(0x10)
	int32_t IteratorMeshInFrame; // 0x3b0(0x04)
	int32_t IteratorCreateCubeInFrame; // 0x3b4(0x04)
	int32_t IteratorDelayNewstMoveIndex; // 0x3b8(0x04)
	float SizeRandomMin; // 0x3bc(0x04)
	float SizeRandomMax; // 0x3c0(0x04)
	struct FVector CubeRandomOffsetMin; // 0x3c4(0x0c)
	struct FVector CubeRandomOffsetMax; // 0x3d0(0x0c)
	float ForwardSizeScale; // 0x3dc(0x04)
	float MaxWidthSize; // 0x3e0(0x04)
	bool EnableGeneratingInFlying; // 0x3e4(0x01)
	bool EnableAnimation; // 0x3e5(0x01)
	char pad_3E6[0x2]; // 0x3e6(0x02)
	float InitMaxRadius; // 0x3e8(0x04)
	float TargetRadius; // 0x3ec(0x04)
	float ExpandLifeMinTime; // 0x3f0(0x04)
	float ExpandLifeMaxTime; // 0x3f4(0x04)
	float ExpandDelayLifeMinTime; // 0x3f8(0x04)
	float ExpandDelayLifeMaxTime; // 0x3fc(0x04)
	float ExpandLocLifeMinTime; // 0x400(0x04)
	float ExpandLocLifeMaxTime; // 0x404(0x04)
	float ExpandDelayLocLifeMinTime; // 0x408(0x04)
	float ExpandDelayLocLifeMaxTime; // 0x40c(0x04)
	float EmitFallMinSpeed; // 0x410(0x04)
	float EmitFallMaxSpeed; // 0x414(0x04)
	float PopDistance; // 0x418(0x04)
	int32_t UseUASZ; // 0x41c(0x04)
	float DelayTimePerPile; // 0x420(0x04)
	int32_t BeginAnimModuleIndex; // 0x424(0x04)
	struct FName MaterialParameterName; // 0x428(0x08)
	float FadeOutTime; // 0x430(0x04)
	char pad_434[0xc]; // 0x434(0x0c)

	void TickFadeOut(float DeltaTime); // Function GPDeformable.GPDeformableVolumeSmokeComponent.TickFadeOut // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
