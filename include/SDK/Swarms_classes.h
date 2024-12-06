
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class Swarms.SwarmsActorInterface
// Size: 0x30 (Inherited: 0x30)
class USwarmsActorInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Swarms.TestSwarmsActor
// Size: 0x3f0 (Inherited: 0x378)
class ATestSwarmsActor : public AActor {
public:

	char pad_378[0x8]; // 0x378(0x08)
	bool bIsTick; // 0x380(0x01)
	bool bIsDebugDestroy; // 0x381(0x01)
	bool bIsEnemySwarms; // 0x382(0x01)
	enum class ESwarmsQualityLevel QualityLevel; // 0x383(0x01)
	float CheckEnemyDelay; // 0x384(0x04)
	enum class ECollisionChannel TargetTraceChannel; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct USwarmsComponent* SwarmsComponent; // 0x390(0x08)
	char pad_398[0x58]; // 0x398(0x58)

	bool SubCheckOverlapResult(struct APawn* Char); // Function Swarms.TestSwarmsActor.SubCheckOverlapResult // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Swarms.SwarmsComponent
// Size: 0x798 (Inherited: 0x100)
class USwarmsComponent : public UActorComponent {
public:

	bool bIsDrawMainVolume; // 0x100(0x01)
	bool bIsDrawDamageBox; // 0x101(0x01)
	bool bIsDrawDebugConnectedInfo; // 0x102(0x01)
	bool bIsDrawDebugConnectedSingle; // 0x103(0x01)
	bool bIsDrawDebugLineTrace; // 0x104(0x01)
	bool bIsDrawDebugTargetPath; // 0x105(0x01)
	char pad_106[0x2]; // 0x106(0x02)
	int32_t DrawBlockIndex; // 0x108(0x04)
	int32_t DrawDebugCell_Y; // 0x10c(0x04)
	int32_t DrawDebugCell_Z; // 0x110(0x04)
	bool bIsParallelFindPath; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	int32_t ClientOneFrameCheckNum; // 0x118(0x04)
	float DamageAreaSize; // 0x11c(0x04)
	float DamageArea_HitRate; // 0x120(0x04)
	float DamageArea_ShowRate; // 0x124(0x04)
	float LODCheckCD; // 0x128(0x04)
	int32_t SpawnPointsCheckCellNum; // 0x12c(0x04)
	struct TArray<struct FVector> SpawnPoints; // 0x130(0x10)
	struct TArray<struct FVector> SpawnPoints_Crouch; // 0x140(0x10)
	struct TArray<struct FVector> SpawnPoints_Prone; // 0x150(0x10)
	struct FSwarmsQualitySettings HighSetting; // 0x160(0x20)
	struct FSwarmsQualitySettings MediumSetting; // 0x180(0x20)
	struct FSwarmsQualitySettings LowSetting; // 0x1a0(0x20)
	struct FSwarmsMeshRendererData MeshData; // 0x1c0(0x48)
	struct FSwarmsBoidsSettings BoidsSettings_SOL; // 0x208(0x98)
	struct FSwarmsBoidsSettings BoidsSettings_BF; // 0x2a0(0x98)
	struct FSwarmsVoxelSettings VoxelSettings; // 0x338(0x44)
	char pad_37C[0x64]; // 0x37c(0x64)
	struct FSwarmsQualitySettings CurrQualitySettings; // 0x3e0(0x20)
	struct FSwarmsBoidsSettings BoidsSettings; // 0x400(0x98)
	float MaxLifeTime; // 0x498(0x04)
	struct FVector MainVolumeSize; // 0x49c(0x0c)
	int32_t CellNumX; // 0x4a8(0x04)
	int32_t CellNumY; // 0x4ac(0x04)
	int32_t CellNumZ; // 0x4b0(0x04)
	int32_t CurrMapCellsNum; // 0x4b4(0x04)
	int32_t CurrBoidsNum; // 0x4b8(0x04)
	float CurrPlayTime; // 0x4bc(0x04)
	float CellDataScale; // 0x4c0(0x04)
	float CellSizeReciprocalY; // 0x4c4(0x04)
	float CellSizeReciprocalZ; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct FTransform ActorToWorldTransform; // 0x4d0(0x30)
	struct FMatrix WorldToActorMatrix; // 0x500(0x40)
	struct FMatrix ActorToWorldMatrix; // 0x540(0x40)
	bool bIsInitBlocksParams; // 0x580(0x01)
	bool bIsSyncMapInfo; // 0x581(0x01)
	bool bIsPlaying; // 0x582(0x01)
	bool bIsCheckingCell; // 0x583(0x01)
	bool bIsInitBoids; // 0x584(0x01)
	char pad_585[0x3]; // 0x585(0x03)
	struct FVector CurrForward; // 0x588(0x0c)
	struct FVector CurrRight; // 0x594(0x0c)
	struct FVector CurrUp; // 0x5a0(0x0c)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	struct FQuat ActorQuat; // 0x5b0(0x10)
	struct UInstancedStaticMeshComponent* ISMComponent; // 0x5c0(0x08)
	struct TArray<struct FTransform> TransArray; // 0x5c8(0x10)
	struct TArray<float> CustomDataArray; // 0x5d8(0x10)
	struct TArray<float> ISMCustomDataArray; // 0x5e8(0x10)
	struct TArray<struct FVector> ValidSpawnPoints; // 0x5f8(0x10)
	int32_t TotalBlockNum; // 0x608(0x04)
	float BlockCehckTime; // 0x60c(0x04)
	int32_t OneSecondCheckNum; // 0x610(0x04)
	char CurrBlockIndex; // 0x614(0x01)
	char CurrBlockStart; // 0x615(0x01)
	char CurrBlockEnd; // 0x616(0x01)
	char CurrBlockMinDamageX; // 0x617(0x01)
	struct TArray<char> BlockCellsInfo; // 0x618(0x10)
	int32_t CurrBlockCount; // 0x628(0x04)
	char pad_62C[0x4]; // 0x62c(0x04)
	struct TArray<int32_t> AllBlockCellsNumber; // 0x630(0x10)
	struct TArray<char> AllBlockCellsInfo; // 0x640(0x10)
	int32_t ClientInUesBlockIndex; // 0x650(0x04)
	int32_t ClientInUesCellIndex; // 0x654(0x04)
	int32_t CurrCheckY; // 0x658(0x04)
	int32_t CurrCheckZ; // 0x65c(0x04)
	float FadeInSpeed; // 0x660(0x04)
	char pad_664[0x4]; // 0x664(0x04)
	struct TArray<int32_t> DamageCheckStartCells; // 0x668(0x10)
	float CurrDamageSpeed; // 0x678(0x04)
	float CurrDamageMinX; // 0x67c(0x04)
	float CurrDamageMaxX; // 0x680(0x04)
	float CurrDamageShowMaxX; // 0x684(0x04)
	char pad_688[0xc8]; // 0x688(0xc8)
	int32_t CurrLOD; // 0x750(0x04)
	float NextCheckLODTime; // 0x754(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> AllMainMaterials; // 0x758(0x10)
	float BaseMoveToTargetCostTime; // 0x768(0x04)
	float CheckTargetAddDistance; // 0x76c(0x04)
	float DamageAreaMoveCost; // 0x770(0x04)
	char pad_774[0x24]; // 0x774(0x24)

	void UpdateInstances(); // Function Swarms.SwarmsComponent.UpdateInstances // (Final|Native|Protected|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Swarms.SwarmsComponentCPU
// Size: 0x7b0 (Inherited: 0x798)
class USwarmsComponentCPU : public USwarmsComponent {
public:

	int32_t LowModeRowSize; // 0x798(0x04)
	float LowModeOffsetY; // 0x79c(0x04)
	float LowModeOffsetZ; // 0x7a0(0x04)
	char pad_7A4[0xc]; // 0x7a4(0x0c)

	void UpdateTransArray_Low(float DeltaTime); // Function Swarms.SwarmsComponentCPU.UpdateTransArray_Low // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
