
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum Swarms.ESwarmsQualityLevel
enum class ESwarmsQualityLevel : int {
	Low = 0,
	Medium = 1,
	High = 2,
	ESwarmsQualityLevel_MAX = 3
};

// Enum Swarms.ESwarmsFadeInType
enum class ESwarmsFadeInType : int {
	None = 0,
	Scale = 1,
	ScaleAsAlpha = 2,
	Alpha = 3,
	ESwarmsFadeInType_MAX = 4
};

// ScriptStruct Swarms.SwarmsFindPathData
// Size: 0x10 (Inherited: 0x00)
struct FSwarmsFindPathData {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Swarms.SwarmsMoveToTargetData
// Size: 0x70 (Inherited: 0x00)
struct FSwarmsMoveToTargetData {
public:

	char pad_0[0x70]; // 0x00(0x70)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Swarms.SwarmsMapCellData
// Size: 0x29 (Inherited: 0x00)
struct FSwarmsMapCellData {
public:

	char pad_0[0x29]; // 0x00(0x29)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Swarms.SwarmsBoidsData
// Size: 0x44 (Inherited: 0x00)
struct FSwarmsBoidsData {
public:

	char pad_0[0x44]; // 0x00(0x44)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Swarms.SwarmsVoxelSettings
// Size: 0x44 (Inherited: 0x00)
struct FSwarmsVoxelSettings {
public:

	enum class ECollisionChannel CellTraceChannel; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector CellCheckSize; // 0x04(0x0c)
	int32_t BlockSize; // 0x10(0x04)
	float FirstBlockCheckRate; // 0x14(0x04)
	int32_t FirstCheckBlockNum; // 0x18(0x04)
	int32_t ClientStartMinBlock; // 0x1c(0x04)
	int32_t BackConnecteCellNum; // 0x20(0x04)
	float DiffuseSimCenterOffsetZ; // 0x24(0x04)
	struct FVector2D DamageCheckStart; // 0x28(0x08)
	struct FVector2D DiffuseSimStart; // 0x30(0x08)
	float DiffuseSimStopDistance; // 0x38(0x04)
	int32_t CellsNextTargetCheckDistance; // 0x3c(0x04)
	float CellsNextTargetYZWeight; // 0x40(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Swarms.SwarmsBoidsSettings
// Size: 0x98 (Inherited: 0x00)
struct FSwarmsBoidsSettings {
public:

	float MaxLifeTime; // 0x00(0x04)
	struct FVector MainVolumeSize; // 0x04(0x0c)
	float SpawnAlphaRate; // 0x10(0x04)
	float SpawnAlphaMin; // 0x14(0x04)
	float SpawnAlphaMax; // 0x18(0x04)
	float SpawnDuration; // 0x1c(0x04)
	float PitchLimitValue; // 0x20(0x04)
	float YawLimitValue; // 0x24(0x04)
	float Acceleration; // 0x28(0x04)
	float SpawnVelocity; // 0x2c(0x04)
	float SpawnTurningDelay; // 0x30(0x04)
	float BaseVelocity; // 0x34(0x04)
	float RandomAddVelocity; // 0x38(0x04)
	float TurningSpeed; // 0x3c(0x04)
	float XMoveExtraSpace; // 0x40(0x04)
	float NavPathRollbackDistance; // 0x44(0x04)
	float NavPathVelocityRatio; // 0x48(0x04)
	float NavPathMaxVelocityRatio; // 0x4c(0x04)
	float NavPathMinCellDistance; // 0x50(0x04)
	float StopNavPitchRandomRange; // 0x54(0x04)
	float StopNavYawRandomRange; // 0x58(0x04)
	float DeathLoopFadeOutSpeed; // 0x5c(0x04)
	float MoveToTargetMaxDisToCamera; // 0x60(0x04)
	float MoveToTargetTime; // 0x64(0x04)
	struct UCurveFloat* MoveToTargetCurve; // 0x68(0x08)
	float MoveToTargetHitRate; // 0x70(0x04)
	float MoveToTargetFadeInRate; // 0x74(0x04)
	float MoveToTargetZMoveCostRate; // 0x78(0x04)
	float MoveToTargetMaxDis; // 0x7c(0x04)
	float MoveToTargetMinSpeedRate; // 0x80(0x04)
	float MoveToTargetMaxSpeedRate; // 0x84(0x04)
	float MoveToTargetPathRadius; // 0x88(0x04)
	float MoveToTargetPathRandomOffset; // 0x8c(0x04)
	float NoiseOffset; // 0x90(0x04)
	float NoiseSpeed; // 0x94(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Swarms.SwarmsMeshRendererData
// Size: 0x48 (Inherited: 0x00)
struct FSwarmsMeshRendererData {
public:

	struct TArray<struct UStaticMesh*> AllMeshes; // 0x00(0x10)
	struct TArray<struct UMaterialInterface*> AllMaterials; // 0x10(0x10)
	struct FLinearColor EmissiveColor; // 0x20(0x10)
	struct FLinearColor EnemyEmissiveColor; // 0x30(0x10)
	float FadeInTime; // 0x40(0x04)
	float FadeInMaxVal; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Swarms.SwarmsQualitySettings
// Size: 0x20 (Inherited: 0x00)
struct FSwarmsQualitySettings {
public:

	int32_t BoidsNum; // 0x00(0x04)
	char MaxTargetNum; // 0x04(0x01)
	char TargetBoidsNum; // 0x05(0x01)
	bool bCastShadow; // 0x06(0x01)
	enum class ESwarmsFadeInType FadeInType; // 0x07(0x01)
	bool bIsLowMoveMode; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t LowModeRowNum; // 0x0c(0x04)
	struct TArray<float> LODDistanceSettings; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
