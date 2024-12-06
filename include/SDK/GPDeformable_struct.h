
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPDeformable.EGPDeformableActorStage
enum class EGPDeformableActorStage : int {
	GPDeformableActor_None = 0,
	GPDeformableActor_GeneratePoint = 1,
	GPDeformableActor_GenerateGrid = 2,
	GPDeformableActor_GenerateSmoke = 3,
	GPDeformableActor_MAX = 4
};

// Enum GPDeformable.EGPDeformableStage
enum class EGPDeformableStage : int {
	Init = 0,
	Move = 1,
	CheckHeight = 2,
	GenerateMesh = 3,
	Normal = 4,
	EGPDeformableStage_MAX = 5
};

// Enum GPDeformable.EUASMovementMode
enum class EUASMovementMode : int {
	UASMovementMode_None = 0,
	UASMovementMode_ClientLocalControlled = 1,
	UASMovementMode_ServerAIControlled = 2,
	UASMovementMode_Server = 3,
	UASMovementMode_Simulate = 4,
	UASMovementMode_MAX = 5
};

// ScriptStruct GPDeformable.DeformableEmitParticleConfig
// Size: 0x40 (Inherited: 0x00)
struct FDeformableEmitParticleConfig {
public:

	int32_t QualityLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	/*struct TSoftClassPtr<UObject>*/char ShapeComponentClass[0x28]; // 0x08(0x28)
	struct TArray<struct FDeformableEmitParticleDeviceConfig> DeviceConfigs; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPDeformable.DeformableEmitParticleDeviceConfig
// Size: 0x30 (Inherited: 0x00)
struct FDeformableEmitParticleDeviceConfig {
public:

	int32_t DeviceLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	/*struct TSoftClassPtr<UObject>*/char ShapeComponentClass[0x28]; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPDeformable.GPDeformableEmitVolumeCube
// Size: 0x50 (Inherited: 0x00)
struct FGPDeformableEmitVolumeCube {
public:

	int32_t GridIndex; // 0x00(0x04)
	float InitRadius; // 0x04(0x04)
	float TargetRadius; // 0x08(0x04)
	float BaseDelayTime; // 0x0c(0x04)
	float ExpandTime; // 0x10(0x04)
	float ExpandDelayTime; // 0x14(0x04)
	float ExpandLocTime; // 0x18(0x04)
	float ExpandLocDelayTime; // 0x1c(0x04)
	float BaseExpandTime; // 0x20(0x04)
	struct FVector InitOriginCenter; // 0x24(0x0c)
	struct FVector ExpandOriginCenter; // 0x30(0x0c)
	float LandTime; // 0x3c(0x04)
	struct FVector FinalOriginCenter; // 0x40(0x0c)
	float EmitLifeTime; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPDeformable.GPDeformableEmitSphere
// Size: 0x58 (Inherited: 0x00)
struct FGPDeformableEmitSphere {
public:

	int32_t GridIndex; // 0x00(0x04)
	float InitRadius; // 0x04(0x04)
	float TargetRadius; // 0x08(0x04)
	int32_t StartVertexIndex; // 0x0c(0x04)
	int32_t EndVertexIndex; // 0x10(0x04)
	float BaseDelayTime; // 0x14(0x04)
	float ExpandTime; // 0x18(0x04)
	float ExpandDelayTime; // 0x1c(0x04)
	float ExpandLocTime; // 0x20(0x04)
	float ExpandLocDelayTime; // 0x24(0x04)
	float BaseExpandTime; // 0x28(0x04)
	struct FVector InitOriginCenter; // 0x2c(0x0c)
	struct FVector ExpandOriginCenter; // 0x38(0x0c)
	float LandTime; // 0x44(0x04)
	struct FVector FinalOriginCenter; // 0x48(0x0c)
	float EmitLifeTime; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPDeformable.GPDeformableEmiter
// Size: 0x48 (Inherited: 0x00)
struct FGPDeformableEmiter {
public:

	float EmitStartDistance; // 0x00(0x04)
	float CurrentEmitDistance; // 0x04(0x04)
	struct UCurveFloat* EmitScaleCurve; // 0x08(0x08)
	struct TArray<struct FGPDeformableEmitMeshEmitData> EmitDataArray; // 0x10(0x10)
	struct TArray<struct FTransform> InstancedTransforms; // 0x20(0x10)
	struct UInstancedStaticMeshComponent* InstancedStaticMeshComponent; // 0x30(0x08)
	struct TArray<struct FGPDeformableSubEmiter> SubEmiters; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPDeformable.GPDeformableSubEmiter
// Size: 0x50 (Inherited: 0x00)
struct FGPDeformableSubEmiter {
public:

	float EmitStartDistance; // 0x00(0x04)
	float CurrentEmitDistance; // 0x04(0x04)
	struct TArray<struct FGPDeformableEmitMeshEmitData> EmitDataArray; // 0x08(0x10)
	struct TArray<struct FTransform> InstancedTransforms; // 0x18(0x10)
	char pad_28[0x10]; // 0x28(0x10)
	struct FVector ZerodBasedCenter; // 0x38(0x0c)
	bool bZerodBasedCenterInit; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct UInstancedStaticMeshComponent* InstancedStaticMeshComponent; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPDeformable.GPDeformableEmitMeshEmitData
// Size: 0x9c (Inherited: 0x00)
struct FGPDeformableEmitMeshEmitData {
public:

	struct FVector InitScale; // 0x00(0x0c)
	struct FVector TargetScale; // 0x0c(0x0c)
	float ScaleTime; // 0x18(0x04)
	struct FVector InitLocation; // 0x1c(0x0c)
	struct FVector TargetLocation; // 0x28(0x0c)
	struct FVector LocationDelta; // 0x34(0x0c)
	float CurrnetMoveVelocity; // 0x40(0x04)
	float CurrnetMoveDistance; // 0x44(0x04)
	float TotalMoveDistance; // 0x48(0x04)
	float LocationTime; // 0x4c(0x04)
	struct FRotator InitRotator; // 0x50(0x0c)
	struct FRotator TargetRotator; // 0x5c(0x0c)
	float RotatorTime; // 0x68(0x04)
	float InitAlphaThresholdValue; // 0x6c(0x04)
	float TargetAlphaThresholdValue; // 0x70(0x04)
	float AlphaThresholdTime; // 0x74(0x04)
	struct FVector InitColorLife; // 0x78(0x0c)
	struct FVector TargetColorLife; // 0x84(0x0c)
	float FadeInTime; // 0x90(0x04)
	float TickTime; // 0x94(0x04)
	bool IsInTick; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPDeformable.GPDeformableEmitConfig
// Size: 0xf8 (Inherited: 0x00)
struct FGPDeformableEmitConfig {
public:

	struct FString EmiterName; // 0x00(0x10)
	float MaxEmitDistanceInSingle; // 0x10(0x04)
	bool UseSubEmiter; // 0x14(0x01)
	bool EmitAtFirstPoint; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float DelayEmitTime; // 0x18(0x04)
	float EmitDistance; // 0x1c(0x04)
	int32_t EmitNumberInPile; // 0x20(0x04)
	struct FVector EmitLocationRandomBox; // 0x24(0x0c)
	float EmitLocaltionTime; // 0x30(0x04)
	float EmitLocationMaxVelocity; // 0x34(0x04)
	float EmitLocationAcceletation; // 0x38(0x04)
	struct FVector EmitScaleRandomMax; // 0x3c(0x0c)
	struct FVector EmitScaleRandomMin; // 0x48(0x0c)
	struct FVector EmitInitScale; // 0x54(0x0c)
	float EmitScaleDelayTime; // 0x60(0x04)
	float EmitScaleTime; // 0x64(0x04)
	struct UCurveFloat* EmitScaleCurve; // 0x68(0x08)
	struct FRotator EmitRotatorRandomMax; // 0x70(0x0c)
	struct FRotator EmitRotatorRandomMin; // 0x7c(0x0c)
	float EmitRotatorTime; // 0x88(0x04)
	struct FVector InitColorLife; // 0x8c(0x0c)
	struct FVector TargetColorLife; // 0x98(0x0c)
	float FadeInTime; // 0xa4(0x04)
	struct FVector FadeOutInitColorLife; // 0xa8(0x0c)
	struct FVector FadeOutTargetColorLife; // 0xb4(0x0c)
	struct FVector FadeOutTargetScale; // 0xc0(0x0c)
	bool EnableFadeoutScale; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	float DelayFadeOutTime; // 0xd0(0x04)
	float FadeOutTime; // 0xd4(0x04)
	bool InvisibleInFadeOut; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UStaticMesh* StaticMesh; // 0xe0(0x08)
	struct UMaterialInstance* MaterialInstance; // 0xe8(0x08)
	int32_t ExplosionFXStencilIndex; // 0xf0(0x04)
	enum class ERendererStencilMask ExplosionFXStencilMask; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPDeformable.GPDeformableActorConfig
// Size: 0x80 (Inherited: 0x00)
struct FGPDeformableActorConfig {
public:

	float VoxelSize; // 0x00(0x04)
	int32_t VerticalGridNum; // 0x04(0x04)
	int32_t HonrizontalGridNum; // 0x08(0x04)
	int32_t PileNum; // 0x0c(0x04)
	float MoveSize; // 0x10(0x04)
	float GridSizeY; // 0x14(0x04)
	float GridSizeZ; // 0x18(0x04)
	float ForwardGridDistanceScale; // 0x1c(0x04)
	float HonrizontalDistanceScale; // 0x20(0x04)
	float VerticalDistanceScale; // 0x24(0x04)
	float DesignCubeGrideSizeYInHighQuality; // 0x28(0x04)
	float DesignCubeGrideSizeZInHighQuality; // 0x2c(0x04)
	int32_t IteratorGridInFrame; // 0x30(0x04)
	bool EnableAnimation; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float InitMaxRadius; // 0x38(0x04)
	float TargetRadius; // 0x3c(0x04)
	float ExpandLifeMinTime; // 0x40(0x04)
	float ExpandLifeMaxTime; // 0x44(0x04)
	float ExpandDelayLifeMinTime; // 0x48(0x04)
	float ExpandDelayLifeMaxTime; // 0x4c(0x04)
	float ExpandLocLifeMinTime; // 0x50(0x04)
	float ExpandLocLifeMaxTime; // 0x54(0x04)
	float ExpandDelayLocLifeMinTime; // 0x58(0x04)
	float ExpandDelayLocLifeMaxTime; // 0x5c(0x04)
	float EmitFallMinSpeed; // 0x60(0x04)
	float EmitFallMaxSpeed; // 0x64(0x04)
	float PopDistance; // 0x68(0x04)
	int32_t UseUASZ; // 0x6c(0x04)
	float DelayTimePerPile; // 0x70(0x04)
	int32_t BeginAnimModuleIndex; // 0x74(0x04)
	struct FName MaterialParameterName; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPDeformable.DeformableConfigAsset
// Size: 0x68 (Inherited: 0x00)
struct FDeformableConfigAsset {
public:

	int32_t Quality; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	/*struct TSoftObjectPtr<UStaticMesh>*/char MeshAssetPath[0x28]; // 0x08(0x28)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char MaterialAssetPath[0x28]; // 0x30(0x28)
	struct UStaticMesh* MeshAsset; // 0x58(0x08)
	struct UMaterialInstance* MaterialAsset; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPDeformable.VolumeSmokeTODMatParameter
// Size: 0x10 (Inherited: 0x00)
struct FVolumeSmokeTODMatParameter {
public:

	int32_t TODWeatherIndex; // 0x00(0x04)
	struct FName MatParameterName; // 0x04(0x08)
	float Value; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPDeformable.SpawnDeformableActorConfig
// Size: 0x20 (Inherited: 0x00)
struct FSpawnDeformableActorConfig {
public:

	int32_t GamePlayMode; // 0x00(0x04)
	int32_t MapID; // 0x04(0x04)
	struct FName Desc; // 0x08(0x08)
	struct UClass* DeformableActorClass; // 0x10(0x08)
	struct UClass* DeformableActorMovementClass; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPDeformable.UASMovementStack
// Size: 0x1c (Inherited: 0x00)
struct FUASMovementStack {
public:

	struct FVector OriginLocation; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float MoveTime; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
