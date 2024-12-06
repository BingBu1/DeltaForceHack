
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMAbility.EArtilleryShellDropMethod
enum class EArtilleryShellDropMethod : int {
	RANDOM = 0,
	ORDER = 1,
	EArtilleryShellDropMethod_MAX = 2
};

// Enum DFMAbility.EBattleFieldPropType
enum class EBattleFieldPropType : int {
	None = 0,
	ADS = 1,
	RebornFlag = 2,
	Bunker = 3,
	MedicalBox = 4,
	AmmoBox = 5,
	AntiTankMine = 6,
	ClayMoreMine = 7,
	EBattleFieldPropType_MAX = 8
};

// Enum DFMAbility.EAbilityDetectorTriggerType
enum class EAbilityDetectorTriggerType : int {
	None = 0,
	Recycle = 1,
	ManualActive = 2,
	Both = 3,
	EAbilityDetectorTriggerType_MAX = 4
};

// Enum DFMAbility.EIncendiaryAreaCellCheckState
enum class EIncendiaryAreaCellCheckState : int {
	Default = 0,
	PassTrace = 1,
	Failed = 2,
	Success = 3,
	EIncendiaryAreaCellCheckState_MAX = 4
};

// Enum DFMAbility.EIncendiaryAreaCellDiffuseType
enum class EIncendiaryAreaCellDiffuseType : int {
	Default = 0,
	X = 1,
	Nx = 2,
	Y = 3,
	Ny = 4,
	EIncendiaryAreaCellDiffuseType_MAX = 5
};

// Enum DFMAbility.EIncendiaryAreaType
enum class EIncendiaryAreaType : int {
	Incendiary = 0,
	BarbedWire = 1,
	EIncendiaryAreaType_MAX = 2
};

// Enum DFMAbility.EAbilityLevelActorType
enum class EAbilityLevelActorType : int {
	ENone = 0,
	EADS = 1,
	ERebornFlag = 2,
	EBunker = 3,
	EAbilityLevelActorType_MAX = 4
};

// Enum DFMAbility.EVehicleBehaviorForbit
enum class EVehicleBehaviorForbit : int {
	None = 0,
	Move = 1,
	Jump = 2,
	Boom = 3,
	TurnRate = 4,
	LookUpTurnRate = 5,
	EVehicleBehaviorForbit_MAX = 6
};

// Enum DFMAbility.EDFMAbilityCastFailedReason
enum class EDFMAbilityCastFailedReason : int {
	inCooldown = 0,
	StateFailed = 1,
	Disable = 2,
	Forbit = 3,
	CampNum = 4,
	Score = 5,
	TeamNum = 6,
	Sector = 7,
	EDFMAbilityCastFailedReason_MAX = 8
};

// Enum DFMAbility.EAbilitySmokeActorDetectionStage
enum class EAbilitySmokeActorDetectionStage : int {
	DetectionStage_None = 0,
	DetectionStage_Course = 1,
	DetectionStage_Voxel = 2,
	DetectionStage_MAX = 3
};

// Enum DFMAbility.ESmokeWallUASStage
enum class ESmokeWallUASStage : int {
	UASStage_None = 0,
	UASStage_Equip = 1,
	UASStage_Idle = 2,
	UASStage_Fly = 3,
	UASStage_MAX = 4
};

// Enum DFMAbility.EVehicleBoss04FireMode
enum class EVehicleBoss04FireMode : int {
	Default = 0,
	MachineGun = 1,
	StingerMissile = 2,
	EVehicleBoss04FireMode_MAX = 3
};

// Enum DFMAbility.EVehicleBoss04WeaponType
enum class EVehicleBoss04WeaponType : int {
	None = 0,
	MachineGun = 1,
	StingerMissle = 2,
	EVehicleBoss04WeaponType_MAX = 3
};

// Enum DFMAbility.EAudioRoleType
enum class EAudioRoleType : int {
	ET_ALL = 0,
	EE_1P = 1,
	EE_3P = 2,
	EAudioRoleType_MAX = 3
};

// Enum DFMAbility.EAbilitySwithWeaponType
enum class EAbilitySwithWeaponType : int {
	DefaultWeapon = 0,
	MainWeapon = 1,
	MeleeWeapon = 2,
	EmptyHand = 3,
	LastUsedWeapon = 4,
	NextWeapon = 5,
	PreWeapon = 6,
	PositionWeapon = 7,
	AnyWeapon = 8,
	LastThenAnyUsedWeapon = 9,
	LastUsedWeaponOrEmpty = 10,
	SkillWeapon = 11,
	SkillEnd = 12,
	EAbilitySwithWeaponType_MAX = 13
};

// Enum DFMAbility.ERebornFlagType
enum class ERebornFlagType : int {
	EAbility = 0,
	EVehicle = 1,
	ERankSkill = 2,
	ERebornFlagType_MAX = 3
};

// Enum DFMAbility.EThrowBlockingPartState
enum class EThrowBlockingPartState : int {
	Initial = 0,
	Spawn = 1,
	Normal = 2,
	Damaged = 3,
	Destroyed = 4,
	EThrowBlockingPartState_MAX = 5
};

// Enum DFMAbility.EThrowBlockingExpansionType
enum class EThrowBlockingExpansionType : int {
	FullyExpanded = 0,
	OnGround = 1,
	OnWall = 2,
	EThrowBlockingExpansionType_MAX = 3
};

// ScriptStruct DFMAbility.AbilityMineAnimInstanceProxy
// Size: 0x760 (Inherited: 0x748)
struct FAbilityMineAnimInstanceProxy : public FAnimInstanceProxy {
public:

	struct ADFMAbilitySuppressionMine* SuppressionMine; // 0x748(0x08)
	bool bIsActivate; // 0x750(0x01)
	bool bIsExplode; // 0x751(0x01)
	char pad_752[0xe]; // 0x752(0x0e)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.ProjectileExplodeInfo
// Size: 0x18 (Inherited: 0x00)
struct FProjectileExplodeInfo {
public:

	struct FVector HitProjectilePosition; // 0x00(0x0c)
	struct FName ProjectileName; // 0x0c(0x08)
	bool HasProcessed; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.ArtilleryShellMovementParameter
// Size: 0x40 (Inherited: 0x00)
struct FArtilleryShellMovementParameter {
public:

	int32_t SkillId; // 0x00(0x04)
	struct FVector Destination; // 0x04(0x0c)
	float Distance; // 0x10(0x04)
	struct FVector Direction; // 0x14(0x0c)
	float Accelerate; // 0x20(0x04)
	float Time; // 0x24(0x04)
	float FireTime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct AGPCharacter* MakerInstigator; // 0x30(0x08)
	int32_t CampId; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.BreakthroughEventRange
// Size: 0x08 (Inherited: 0x00)
struct FBreakthroughEventRange {
public:

	int32_t Max; // 0x00(0x04)
	int32_t Min; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.DFMAbilityBarbedWireTarget
// Size: 0x18 (Inherited: 0x00)
struct FDFMAbilityBarbedWireTarget {
public:

	bool bIsCurrInArea; // 0x00(0x01)
	bool bIsLastInArea; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector LastCheckLocation; // 0x04(0x0c)
	struct TWeakObjectPtr<struct AGPCharacter> Target; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.DFMAbilityBaseBoxCD
// Size: 0x10 (Inherited: 0x00)
struct FDFMAbilityBaseBoxCD {
public:

	int64_t Uin; // 0x00(0x08)
	float CD; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityBlackBorad_ItemPreview
// Size: 0x30 (Inherited: 0x00)
struct FAbilityBlackBorad_ItemPreview : public FAbilityFragment {
public:

	bool IsValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Position; // 0x04(0x0c)
	struct FVector ServerPosition; // 0x10(0x0c)
	struct FRotator Rot; // 0x1c(0x0c)
	struct AItemPreviewActor* PreviewActor; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityBlackBorad_LineTrace
// Size: 0x50 (Inherited: 0x00)
struct FAbilityBlackBorad_LineTrace : public FAbilityFragment {
public:

	struct TMap<int32_t, struct FHitResult> HitResult; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityBlackBorad_AttachMesh
// Size: 0x90 (Inherited: 0x00)
struct FAbilityBlackBorad_AttachMesh : public FAbilityFragment {
public:

	struct TMap<struct FName, struct FAbilitySkeletalMeshData> ItemMesh; // 0x00(0x50)
	struct TWeakObjectPtr<struct UGPSkeletalMeshComponent> WeakBindMesh; // 0x50(0x08)
	struct TWeakObjectPtr<struct UGPSkeletalMeshComponent> WeakBindMeshParent; // 0x58(0x08)
	struct FVector BindPos; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FQuat BindRot; // 0x70(0x10)
	struct FName BindMeshName; // 0x80(0x08)
	bool ForwardHitResult; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilitySkeletalMeshData
// Size: 0x0c (Inherited: 0x00)
struct FAbilitySkeletalMeshData {
public:

	struct TWeakObjectPtr<struct UGPSkeletalMeshComponent> WeakMesh; // 0x00(0x08)
	char pad_8[0x1]; // 0x08(0x01)
	bool IsBindMesh; // 0x09(0x01)
	bool bAddToRoot; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityAttachMeshData
// Size: 0x38 (Inherited: 0x00)
struct FAbilityAttachMeshData {
public:

	struct UGPSkeletalMeshComponent* ItemMesh; // 0x00(0x08)
	struct FVector dir; // 0x08(0x0c)
	struct FVector Right; // 0x14(0x0c)
	struct FVector Up; // 0x20(0x0c)
	struct FVector pos; // 0x2c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityBlackBorad_EngineerData
// Size: 0x38 (Inherited: 0x00)
struct FAbilityBlackBorad_EngineerData {
public:

	struct TWeakObjectPtr<struct AActor> Vehicle; // 0x00(0x08)
	struct TArray<struct TWeakObjectPtr<struct AActor>> RecycleBunkers; // 0x08(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> ActiveBunkers; // 0x18(0x10)
	struct APawn* OwnerPawn; // 0x28(0x08)
	enum class ESkillUISlot EngineerOverrideSkillUISlot; // 0x30(0x01)
	bool bSkillUISlotOverrided; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityBlackBorad_SpawnActor
// Size: 0xe8 (Inherited: 0x00)
struct FAbilityBlackBorad_SpawnActor : public FAbilityFragment {
public:

	struct TArray<struct FSystemSpawnActorData> ActorData; // 0x00(0x10)
	struct TMap<int32_t, struct FAbilityNotifyCommondData> NotifyCommonds; // 0x10(0x50)
	struct FHitResult HitResult; // 0x60(0x88)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityNotifyCommondData
// Size: 0x10 (Inherited: 0x00)
struct FAbilityNotifyCommondData {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.SystemSpawnActorData
// Size: 0x18 (Inherited: 0x00)
struct FSystemSpawnActorData {
public:

	struct AActor* Actor; // 0x00(0x08)
	struct TWeakObjectPtr<struct AActor> ActorRef; // 0x08(0x08)
	bool ClearWhenRemove; // 0x10(0x01)
	bool ClearWhenDie; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityBlackBorad_NotifyCommond
// Size: 0x50 (Inherited: 0x00)
struct FAbilityBlackBorad_NotifyCommond : public FAbilityFragment {
public:

	struct TMap<int32_t, struct FAbilityNotifyCommondData> NotifyCommonds; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.MarkerEffectData
// Size: 0x08 (Inherited: 0x00)
struct FMarkerEffectData {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.DFMAbilityArrowData
// Size: 0x20 (Inherited: 0x00)
struct FDFMAbilityArrowData {
public:

	enum class EDFMGamePlayMode GameMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CheckRadius; // 0x04(0x04)
	int64_t AttackValueId; // 0x08(0x08)
	int64_t BarbedWireAttackValueId; // 0x10(0x08)
	float MakeDamageInterval; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityTempalteLoadData
// Size: 0x18 (Inherited: 0x00)
struct FAbilityTempalteLoadData {
public:

	struct TArray<int32_t> SkillEntityIndexs; // 0x00(0x10)
	uint64_t LoadHandler; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityTemplateRepData
// Size: 0x30 (Inherited: 0x00)
struct FAbilityTemplateRepData {
public:

	int32_t SkillId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FAbilityTaskRepData> NodeData; // 0x08(0x10)
	struct TArray<int32_t> RepNodeArray; // 0x18(0x10)
	bool bUseDsRepData; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityTaskRepData
// Size: 0x40 (Inherited: 0x00)
struct FAbilityTaskRepData {
public:

	struct FString ClassPath; // 0x00(0x10)
	struct FString TaskName; // 0x10(0x10)
	struct TArray<char> BaseData; // 0x20(0x10)
	struct TArray<char> ParamData; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.DFMAbilityIncendiaryAreaClientCell
// Size: 0x20 (Inherited: 0x00)
struct FDFMAbilityIncendiaryAreaClientCell {
public:

	bool bIsActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector BaseLocation; // 0x04(0x0c)
	int32_t EffectHandleIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UFXResourceContainerComponent* Effect; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.DFMAbilityIncendiaryAreaCell
// Size: 0x2c (Inherited: 0x00)
struct FDFMAbilityIncendiaryAreaCell {
public:

	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
	bool bIsOnWater; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ExtinguishTime; // 0x0c(0x04)
	struct FVector Location; // 0x10(0x0c)
	struct FVector Normal; // 0x1c(0x0c)
	char pad_28[0x4]; // 0x28(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.EnginVehicleChargingData
// Size: 0x0c (Inherited: 0x00)
struct FEnginVehicleChargingData {
public:

	bool HasVehicleRecycle; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float VehicleHealthPercent; // 0x04(0x04)
	float VehiclePowerPercent; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.LevelAbilityActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FLevelAbilityActorInfo {
public:

	uint64_t ID; // 0x00(0x08)
	int32_t CampId; // 0x08(0x04)
	int32_t TeamId; // 0x0c(0x04)
	int32_t HP; // 0x10(0x04)
	int32_t CustomValue; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityProjectilData
// Size: 0x28 (Inherited: 0x00)
struct FAbilityProjectilData {
public:

	int32_t UpdateCount; // 0x00(0x04)
	struct FVector Velocity; // 0x04(0x0c)
	struct FVector pos; // 0x10(0x0c)
	struct FRotator Rot; // 0x1c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityMontageLoadHadnle
// Size: 0x10 (Inherited: 0x00)
struct FAbilityMontageLoadHadnle {
public:

	struct TArray<struct FAbilityMontageLoadData> LoadDatas; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityMontageLoadData
// Size: 0x14 (Inherited: 0x00)
struct FAbilityMontageLoadData {
public:

	int32_t SkillEntityIndex; // 0x00(0x04)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> InSkeletalMeshComponent; // 0x04(0x08)
	float PlayRate; // 0x0c(0x04)
	float StartingPosition; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityParticleSmokeWallParam
// Size: 0x1c (Inherited: 0x00)
struct FAbilityParticleSmokeWallParam {
public:

	int32_t MaterialIndex; // 0x00(0x04)
	struct FName ParamName; // 0x04(0x08)
	float StartValue; // 0x0c(0x04)
	float EndValue; // 0x10(0x04)
	float DelayTime; // 0x14(0x04)
	float FadeOutTime; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityMontageVisibleNotifyData
// Size: 0x18 (Inherited: 0x00)
struct FAbilityMontageVisibleNotifyData {
public:

	struct FTimerHandle NotifyTimer; // 0x00(0x08)
	int32_t SkillId; // 0x08(0x04)
	bool MeshVisible; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName MeshName; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityMontageLockNotifyData
// Size: 0x30 (Inherited: 0x00)
struct FAbilityMontageLockNotifyData {
public:

	struct FTimerHandle NotifyTimer; // 0x00(0x08)
	struct TArray<enum class ECharacterStateMask> LockStateAbilitys; // 0x08(0x10)
	struct TArray<enum class ECharacterStateMask> UnLockStateAbilitys; // 0x18(0x10)
	bool ReleaseLock; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityProjectileActorData
// Size: 0x48 (Inherited: 0x00)
struct FAbilityProjectileActorData {
public:

	struct UClass* ProjectileActorClass; // 0x00(0x08)
	/*struct TSoftClassPtr<UObject>*/char ProjectileActorClassSoftPath[0x28]; // 0x08(0x28)
	char pad_30[0x4]; // 0x30(0x04)
	struct FVector StartPosistion; // 0x34(0x0c)
	struct TWeakObjectPtr<struct AActor> Target; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.DFMAbilityAdvanceScanTracePathItem
// Size: 0x18 (Inherited: 0x00)
struct FDFMAbilityAdvanceScanTracePathItem {
public:

	struct FVector Point; // 0x00(0x0c)
	int32_t StartIndex; // 0x0c(0x04)
	struct ADFMCharacter* Target; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.DFMAbilityAdvanceScanItem
// Size: 0x18 (Inherited: 0x00)
struct FDFMAbilityAdvanceScanItem {
public:

	struct ADFMCharacter* Target; // 0x00(0x08)
	struct TArray<struct FVector> Paths; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityDeformableSmokeBox
// Size: 0xcc (Inherited: 0x00)
struct FAbilityDeformableSmokeBox {
public:

	char pad_0[0xcc]; // 0x00(0xcc)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityThrowBlockingSpawnMaterialParameter
// Size: 0x10 (Inherited: 0x00)
struct FAbilityThrowBlockingSpawnMaterialParameter {
public:

	struct FName ParamName; // 0x00(0x08)
	struct UCurveFloat* ParamCurve; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityThrowBlockingData
// Size: 0x30 (Inherited: 0x00)
struct FAbilityThrowBlockingData {
public:

	struct TArray<enum class EBuffGameRole> AllGameRoles; // 0x00(0x10)
	float MainPartMaxHP; // 0x10(0x04)
	float EdgePartMaxHP; // 0x14(0x04)
	float RadialDamageRate; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* HPCurve; // 0x20(0x08)
	float BurningCutHPSpeed; // 0x28(0x04)
	float BurningEdgeDamageRate; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.KnifeDrawPathData
// Size: 0x20 (Inherited: 0x00)
struct FKnifeDrawPathData {
public:

	struct TWeakObjectPtr<struct AActor> TargetChar; // 0x00(0x08)
	struct FVector PathStartPos; // 0x08(0x0c)
	struct FVector PathEndPos; // 0x14(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.CruiseMissileInputData
// Size: 0x10 (Inherited: 0x00)
struct FCruiseMissileInputData {
public:

	struct FVector2D InputVector; // 0x00(0x08)
	float Time; // 0x08(0x04)
	bool bSecondaryAccelerated; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.VehicleBoss04SkillState
// Size: 0x10 (Inherited: 0x00)
struct FVehicleBoss04SkillState {
public:

	enum class EVehicleBoss04FireMode FireMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FireDelta; // 0x04(0x04)
	float PreTime; // 0x08(0x04)
	float PostTime; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.VehicleBoss04WeaponInfo
// Size: 0xd0 (Inherited: 0x00)
struct FVehicleBoss04WeaponInfo {
public:

	bool bEnable; // 0x00(0x01)
	enum class EVehicleBoss04WeaponType WeaponType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FName> FireSockets; // 0x08(0x10)
	struct FVector SocketOffset; // 0x18(0x0c)
	float FireDelta; // 0x24(0x04)
	float FireRange; // 0x28(0x04)
	int32_t AttackId; // 0x2c(0x04)
	float PreTime; // 0x30(0x04)
	float PostTime; // 0x34(0x04)
	struct TArray<struct FVehicleBoss04WeaponFXInfo> FireFX; // 0x38(0x10)
	uint64_t HitFxId; // 0x48(0x08)
	struct TArray<struct FVehicleBoss04TrailFXInfo> TrailFX; // 0x50(0x10)
	struct TArray<struct FVehicleBoss04SoundInfo> SoundConf; // 0x60(0x10)
	float Speed; // 0x70(0x04)
	float MaxDis; // 0x74(0x04)
	/*struct TSoftObjectPtr<UStaticMesh>*/char MissleModel[0x28]; // 0x78(0x28)
	struct FVector ModelScale; // 0xa0(0x0c)
	bool bMobileUseLineBatcher; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct FLinearColor MobileColor; // 0xb0(0x10)
	float MobileThinkness; // 0xc0(0x04)
	int32_t BulletMaxNum; // 0xc4(0x04)
	float EffectPossibility; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.VehicleBoss04SoundInfo
// Size: 0x0c (Inherited: 0x00)
struct FVehicleBoss04SoundInfo {
public:

	struct FName SoundName; // 0x00(0x08)
	bool bAttachToBullet; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.VehicleBoss04TrailFXInfo
// Size: 0x54 (Inherited: 0x00)
struct FVehicleBoss04TrailFXInfo {
public:

	bool bIsReal; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName FXName; // 0x04(0x08)
	struct FVector offset; // 0x0c(0x0c)
	struct FVector Scale; // 0x18(0x0c)
	struct FRotator Rot; // 0x24(0x0c)
	struct FVector MOffset; // 0x30(0x0c)
	struct FVector MScale; // 0x3c(0x0c)
	struct FRotator MRot; // 0x48(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.VehicleBoss04WeaponFXInfo
// Size: 0x50 (Inherited: 0x00)
struct FVehicleBoss04WeaponFXInfo {
public:

	struct FName FXName; // 0x00(0x08)
	struct FVector offset; // 0x08(0x0c)
	struct FVector Scale; // 0x14(0x0c)
	struct FRotator Rot; // 0x20(0x0c)
	struct FVector MOffset; // 0x2c(0x0c)
	struct FVector MScale; // 0x38(0x0c)
	struct FRotator MRot; // 0x44(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.VehicleBoss04SoundRuntimeInfo
// Size: 0x218 (Inherited: 0x00)
struct FVehicleBoss04SoundRuntimeInfo {
public:

	struct FResourceAudioRow ResourceAudioFX; // 0x00(0x198)
	bool bAttachToBullet; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FSoftObjectLoader AudioPlaySP; // 0x1a0(0x18)
	struct FSoftObjectLoader CloseAudioEvent; // 0x1b8(0x18)
	struct FSoftObjectLoader MedAudioEvent; // 0x1d0(0x18)
	struct FSoftObjectLoader FarAudioEvent; // 0x1e8(0x18)
	struct FSoftObjectLoader AudioStopSP; // 0x200(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityAttachMeshLoadHadnle
// Size: 0x18 (Inherited: 0x00)
struct FAbilityAttachMeshLoadHadnle {
public:

	struct TArray<struct FAbilityAttachMeshLoadData> LoadDatas; // 0x00(0x10)
	int32_t LoadType; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityAttachMeshLoadData
// Size: 0x10 (Inherited: 0x00)
struct FAbilityAttachMeshLoadData {
public:

	int32_t SkillEntityIndex; // 0x00(0x04)
	struct FName MeshName; // 0x04(0x08)
	int32_t MaterialIndex; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityAttachMeshAnimData
// Size: 0x158 (Inherited: 0x00)
struct FAbilityAttachMeshAnimData {
public:

	struct FName ItemMeshKey; // 0x00(0x08)
	struct FName ItemMeshPartKey; // 0x08(0x08)
	/*struct TSoftObjectPtr<USkeletalMesh>*/char ItemMeshPath[0x28]; // 0x10(0x28)
	/*struct TSoftObjectPtr<USkeletalMesh>*/char ItemMeshPath3P[0x28]; // 0x38(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSeqPath[0x28]; // 0x60(0x28)
	float AnimRate; // 0x88(0x04)
	bool Loop; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	struct FName SocketName; // 0x90(0x08)
	struct FName SocketName_3P; // 0x98(0x08)
	struct FVector AttachRelativeLocation; // 0xa0(0x0c)
	struct FVector AttachRelativeScale3D; // 0xac(0x0c)
	struct FRotator AttachRelativeRotator; // 0xb8(0x0c)
	struct FName MeshName; // 0xc4(0x08)
	bool SetMeshVisible; // 0xcc(0x01)
	bool MeshVisible; // 0xcd(0x01)
	char pad_CE[0x2]; // 0xce(0x02)
	struct FName ParentMeshName; // 0xd0(0x08)
	struct FName Notify; // 0xd8(0x08)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char ItemMeshAudioPath[0x28]; // 0xe0(0x28)
	enum class EGPAudioBlueprintType ItemMeshAudioType; // 0x108(0x01)
	bool bIsBPAnim; // 0x109(0x01)
	char pad_10A[0x2]; // 0x10a(0x02)
	int32_t BPAnimIndex; // 0x10c(0x04)
	bool PreLoad; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FName EffectId; // 0x114(0x08)
	struct FName EffectSocketName; // 0x11c(0x08)
	struct FVector EffectRelativeLocation; // 0x124(0x0c)
	struct FVector EffectRelativeScale3D; // 0x130(0x0c)
	struct FRotator EffectRelativeRotator; // 0x13c(0x0c)
	bool SupportWeapon; // 0x148(0x01)
	bool IsBindMesh; // 0x149(0x01)
	bool bUseCurWeaponMesh; // 0x14a(0x01)
	char pad_14B[0x1]; // 0x14b(0x01)
	struct FName AvatarID; // 0x14c(0x08)
	bool InVisibleWhenTrigger; // 0x154(0x01)
	bool bSetForceKeepFullMipLevels; // 0x155(0x01)
	char pad_156[0x2]; // 0x156(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityAudioData
// Size: 0x18 (Inherited: 0x00)
struct FAbilityAudioData {
public:

	struct UGPAudioEventAsset* AudioEventAsset; // 0x00(0x08)
	enum class EGPAudioBlueprintType EType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Duration; // 0x0c(0x04)
	bool bNeedMakeNoise; // 0x10(0x01)
	bool bPreCutted; // 0x11(0x01)
	enum class EAudioRoleType RoleType; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityBuffAwardConfig
// Size: 0xb8 (Inherited: 0x00)
struct FAbilityBuffAwardConfig {
public:

	float KillAwardTime; // 0x00(0x04)
	enum class EStaminaIndependentChangeType KillAwardStaminaChangeType; // 0x04(0x01)
	bool bKillDataReport; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32_t KillAIAwardBuffID; // 0x08(0x04)
	int32_t KillPlayerAwardBuffID; // 0x0c(0x04)
	int32_t MaxIncreaseCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<enum class ECharingSlot, float> KillAIAwardChargingPercent; // 0x18(0x50)
	struct TMap<enum class ECharingSlot, float> KillPlayerAwardChargingPercent; // 0x68(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityRecycleSpawnActorData
// Size: 0x50 (Inherited: 0x00)
struct FAbilityRecycleSpawnActorData {
public:

	struct TMap<enum class ESkillRecycleType, struct FAbilityRecycleSpawnActorConf> RecycleConf; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityRecycleSpawnActorConf
// Size: 0x08 (Inherited: 0x00)
struct FAbilityRecycleSpawnActorConf {
public:

	enum class ECharingSlot ItemPos; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RecycleSlotChargingPercent; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityDriverFlyRebot
// Size: 0x08 (Inherited: 0x00)
struct FAbilityDriverFlyRebot {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityDriverVehicle
// Size: 0x08 (Inherited: 0x00)
struct FAbilityDriverVehicle {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityItemPreviewData
// Size: 0x38 (Inherited: 0x00)
struct FAbilityItemPreviewData {
public:

	struct UClass* ActorClass; // 0x00(0x08)
	struct FSoftObjectPath MeshPath; // 0x08(0x18)
	struct FVector Rotator; // 0x20(0x0c)
	float PreviewDistance; // 0x2c(0x04)
	float MaxDeltaHeight; // 0x30(0x04)
	bool bAttachToSurface; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.MeshMatUpdateCache
// Size: 0x20 (Inherited: 0x00)
struct FMeshMatUpdateCache {
public:

	struct FTimerHandle MatEffectTimerHandle; // 0x00(0x08)
	struct UMaterialInstanceDynamic* Mid; // 0x08(0x08)
	struct USkeletalMeshComponent* SkMesh; // 0x10(0x08)
	float MatEffectStartTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.MeshMatEffectConfig
// Size: 0x50 (Inherited: 0x00)
struct FMeshMatEffectConfig {
public:

	struct TMap<int32_t, struct FMatEffectConfig> MatIndexAndEffectConfigs; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.MatEffectConfig
// Size: 0x58 (Inherited: 0x00)
struct FMatEffectConfig {
public:

	bool bPreLoad; // 0x00(0x01)
	bool bForceAllMeshMat; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FFloatRange CurrEffectTimeRange; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FScreenPostProcesaScalarParameterConfig> ScalarParams; // 0x18(0x10)
	struct TArray<struct FScreenPostProcesaVectorParameterConfig> VectorParams; // 0x28(0x10)
	struct TArray<struct FScreenPostProcesaCurveFloatParameterConfig> CurveFloatParams; // 0x38(0x10)
	struct TArray<struct FMatCurveColorParameterConfig> CurveColorParams; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityPreviewData
// Size: 0xf0 (Inherited: 0x00)
struct FAbilityPreviewData {
public:

	/*struct TSoftClassPtr<UObject>*/char ActorClassSoftPath[0x28]; // 0x00(0x28)
	/*struct TSoftClassPtr<UObject>*/char LineActorClassSoftPath[0x28]; // 0x28(0x28)
	struct UClass* ActorClass; // 0x50(0x08)
	struct UClass* LineActorClass; // 0x58(0x08)
	float Speed; // 0x60(0x04)
	float IntersectionPointLenth; // 0x64(0x04)
	struct FVector LenthScale; // 0x68(0x0c)
	struct FVector StartOffset; // 0x74(0x0c)
	struct FVector TargetOffset; // 0x80(0x0c)
	float UpSpeed; // 0x8c(0x04)
	bool UseWeapnDirction; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float LineOffset; // 0x94(0x04)
	struct FName SocketName; // 0x98(0x08)
	float MaxSimTime; // 0xa0(0x04)
	bool ShowBouncePath; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float Bounciness; // 0xa8(0x04)
	float Friction; // 0xac(0x04)
	struct FName MeshName; // 0xb0(0x08)
	bool bUseWeaponMesh; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32_t WeaponMeshSlotID; // 0xbc(0x04)
	float NextDrawTime; // 0xc0(0x04)
	bool InitVisible; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float limitHeight; // 0xc8(0x04)
	float SweepRadius; // 0xcc(0x04)
	struct FVector ActorScale1; // 0xd0(0x0c)
	struct FVector ActorScale2; // 0xdc(0x0c)
	float ActorScale1Dis; // 0xe8(0x04)
	float ActorScale2Dis; // 0xec(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.SetCharAbilityMaskData
// Size: 0x10 (Inherited: 0x00)
struct FSetCharAbilityMaskData {
public:

	struct TArray<enum class ECharacterStateMask> StateMaskList; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AASpawnActorData
// Size: 0x70 (Inherited: 0x00)
struct FAASpawnActorData {
public:

	struct UClass* ActorClass; // 0x00(0x08)
	/*struct TSoftClassPtr<UObject>*/char ActorClassSoftPath[0x28]; // 0x08(0x28)
	struct FVector offset; // 0x30(0x0c)
	bool UsePreview; // 0x3c(0x01)
	bool Attach; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FName ActorName; // 0x40(0x08)
	struct FName Tag; // 0x48(0x08)
	struct FName TraceTarget; // 0x50(0x08)
	bool FastSpawn; // 0x58(0x01)
	bool UseItemPreview; // 0x59(0x01)
	bool ClearWhenRemove; // 0x5a(0x01)
	bool ClearWhenDie; // 0x5b(0x01)
	bool SpawnAtHitResult; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FVector SpawnAtHitResultOffset; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityCastSkillData
// Size: 0x14 (Inherited: 0x00)
struct FAbilityCastSkillData {
public:

	int32_t CastSkillid; // 0x00(0x04)
	struct TWeakObjectPtr<struct UDFMAbilityInstance> FromSkill; // 0x04(0x08)
	struct FName LogicName; // 0x0c(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityUseSupportPack
// Size: 0x10 (Inherited: 0x00)
struct FAbilityUseSupportPack {
public:

	struct FTimerHandle TimerHandle; // 0x00(0x08)
	float TimeoutCounter; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityWantCharacterSpeakData
// Size: 0x01 (Inherited: 0x00)
struct FAbilityWantCharacterSpeakData {
public:

	enum class ECharacterAudioType VoiceType; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityWeaponProjectileData
// Size: 0x80 (Inherited: 0x00)
struct FAbilityWeaponProjectileData {
public:

	/*struct TSoftClassPtr<UObject>*/char ProjectileActorClassSoftPath[0x28]; // 0x00(0x28)
	struct UClass* ProjectileActorClass; // 0x28(0x08)
	float Speed; // 0x30(0x04)
	struct FVector StartOffset; // 0x34(0x0c)
	bool Attach; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FName SocketName; // 0x44(0x08)
	struct FName MeshName; // 0x4c(0x08)
	struct FVector Rotator; // 0x54(0x0c)
	bool bWeaponDir; // 0x60(0x01)
	bool bUsePreview; // 0x61(0x01)
	bool bUseWeaponPreview; // 0x62(0x01)
	bool FastProjectile; // 0x63(0x01)
	bool SimulatePath; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float CrouchHeight; // 0x68(0x04)
	float PronehHeight; // 0x6c(0x04)
	float SlidinghHeight; // 0x70(0x04)
	bool UsePlayerViewPoint; // 0x74(0x01)
	bool RemoveWhenRedploy; // 0x75(0x01)
	bool RemoveWhenDie; // 0x76(0x01)
	char WeaponAttachPos; // 0x77(0x01)
	char WeaponManagerSlotIndex; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.ThrowBlockingAnimInstanceProxy
// Size: 0x760 (Inherited: 0x748)
struct FThrowBlockingAnimInstanceProxy : public FAnimInstanceProxy {
public:

	bool bIsFullyExpanded; // 0x748(0x01)
	bool bIsSpawnState; // 0x749(0x01)
	char pad_74A[0x6]; // 0x74a(0x06)
	struct ADFMAbilityThrowBlocking* ThrowBlocking; // 0x750(0x08)
	char pad_758[0x8]; // 0x758(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.ProxSensorArrowScanData
// Size: 0x24 (Inherited: 0x00)
struct FProxSensorArrowScanData {
public:

	enum class EDFMGamePlayMode GameMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MarkEnemyTime; // 0x04(0x04)
	float MarkVehicleTime; // 0x08(0x04)
	float DetectorLifeTime; // 0x0c(0x04)
	float MinScanRadius; // 0x10(0x04)
	float MaxScanRadius; // 0x14(0x04)
	float MaxScanRadiusHeight; // 0x18(0x04)
	bool bNeedBlockCheck; // 0x1c(0x01)
	bool bNeedMarkEnemyInMap; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	int32_t CheckBlockTime; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.GameModeSpawnSmokeUASConfig
// Size: 0x40 (Inherited: 0x00)
struct FGameModeSpawnSmokeUASConfig {
public:

	int32_t MapID; // 0x00(0x04)
	struct FName Desc; // 0x04(0x08)
	enum class EDFMGamePlayMode GamePlayMode; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct UClass* ActorClass; // 0x10(0x08)
	/*struct TSoftClassPtr<UObject>*/char ActorClassPtr[0x28]; // 0x18(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.ZoyaSwarmsItemAnimInstanceProxy
// Size: 0x750 (Inherited: 0x748)
struct FZoyaSwarmsItemAnimInstanceProxy : public FAnimInstanceProxy {
public:

	bool bIsBindToTarget; // 0x748(0x01)
	char pad_749[0x7]; // 0x749(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityDataBase
// Size: 0x10 (Inherited: 0x00)
struct FAbilityDataBase : public FAbilityFragment {
public:

	int32_t SkillEntityIndex; // 0x00(0x04)
	int32_t LogicID; // 0x04(0x04)
	struct TWeakObjectPtr<struct UQA_AbilityLogicTask> QA; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityMineDataFX
// Size: 0xc0 (Inherited: 0x00)
struct FAbilityMineDataFX {
public:

	char pad_0[0xb0]; // 0x00(0xb0)
	struct UFXResourceContainerComponent* FXComp; // 0xb0(0x08)
	int32_t ExplosionFXCompHandle; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityPlayMontageRowData
// Size: 0x78 (Inherited: 0x00)
struct FAbilityPlayMontageRowData {
public:

	struct FName AnimKey; // 0x00(0x08)
	float AnimRate; // 0x08(0x04)
	enum class EAnimationPlayType AnimationPlayType; // 0x0c(0x01)
	enum class EAnimationPlayType AnimationPlayType3P; // 0x0d(0x01)
	bool bUse3PPlayType; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	int32_t LoopCount; // 0x10(0x04)
	bool Loop; // 0x14(0x01)
	bool ThreeAction; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float ThreeActionTime; // 0x18(0x04)
	bool UseLeftHandAnim; // 0x1c(0x01)
	bool ForbiddenLeftHandAnim; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FName Notify; // 0x20(0x08)
	struct FName Notify2; // 0x28(0x08)
	struct FName Notify3; // 0x30(0x08)
	bool BindRotator; // 0x38(0x01)
	bool EndBindAttachMesh; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float blendIn; // 0x3c(0x04)
	float blendOut; // 0x40(0x04)
	bool bStopAllMontange; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32_t AnimationPlayIndex; // 0x48(0x04)
	bool WeaponEquipAnim; // 0x4c(0x01)
	enum class EInteractiveGetWeaponType GetWeaponType; // 0x4d(0x01)
	enum class EInteractivePutWeaponType PutWeaponType; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	float GetWeaponEquipBlendIn; // 0x50(0x04)
	float GetWeaponEquipBlendOut; // 0x54(0x04)
	float PutWeaponEquipBlendOut; // 0x58(0x04)
	int32_t QuietEquipSlot; // 0x5c(0x04)
	struct FName AnimMeshName; // 0x60(0x08)
	int32_t AnimMeshIndex; // 0x68(0x04)
	int32_t AnimMeshStopIndex; // 0x6c(0x04)
	struct FName EndSpawnActorNotifyEvent; // 0x70(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityDefaultData
// Size: 0x14 (Inherited: 0x10)
struct FAbilityDefaultData : public FAbilityDataBase {
public:

	bool ClientTrigger; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityFunctionData
// Size: 0x18 (Inherited: 0x10)
struct FAbilityFunctionData : public FAbilityDataBase {
public:

	struct FName Name; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityMontageSystemData
// Size: 0xc0 (Inherited: 0x10)
struct FAbilityMontageSystemData : public FAbilityDataBase {
public:

	struct TMap<uint32_t, struct UAnimMontage*> InMontageFPP; // 0x10(0x50)
	struct TMap<uint32_t, struct UAnimMontage*> InMontageTPP; // 0x60(0x50)
	struct FRotator Rotator; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityMontageTaskData
// Size: 0x70 (Inherited: 0x10)
struct FAbilityMontageTaskData : public FAbilityDataBase {
public:

	struct FTimerHandle UnEquipAnimTimer; // 0x10(0x08)
	struct FTimerHandle EquipAnimTimer; // 0x18(0x08)
	struct FTimerHandle AnimTimer; // 0x20(0x08)
	struct FTimerHandle NotifyTimer; // 0x28(0x08)
	struct FTimerHandle Notify2Timer; // 0x30(0x08)
	struct FTimerHandle Notify3Timer; // 0x38(0x08)
	struct TArray<struct FAbilityMontageLockNotifyData> LockTimer; // 0x40(0x10)
	struct TArray<struct FAbilityMontageVisibleNotifyData> VisibleTimer; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityPreviewActorData
// Size: 0x58 (Inherited: 0x10)
struct FAbilityPreviewActorData : public FAbilityDataBase {
public:

	struct AActor* Actor; // 0x10(0x08)
	struct FVector StartLocation; // 0x18(0x0c)
	struct FVector LaunchVelocity; // 0x24(0x0c)
	struct TArray<struct AActor*> LineCubePool; // 0x30(0x10)
	struct TArray<struct AActor*> LineCubePool2; // 0x40(0x10)
	float NextDrawTime; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityLeaveStateData
// Size: 0x1c (Inherited: 0x10)
struct FAbilityLeaveStateData : public FAbilityDataBase {
public:

	struct FName StateName; // 0x10(0x08)
	enum class EAbilityTriggerType Trigger; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityStateData
// Size: 0x18 (Inherited: 0x10)
struct FAbilityStateData : public FAbilityDataBase {
public:

	struct FName StateName; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityTimerHandle
// Size: 0x18 (Inherited: 0x10)
struct FAbilityTimerHandle : public FAbilityDataBase {
public:

	struct FTimerHandle TimerHandle; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityAttachMeshTaskData
// Size: 0x20 (Inherited: 0x10)
struct FAbilityAttachMeshTaskData : public FAbilityDataBase {
public:

	struct FTimerHandle TimerHandle; // 0x10(0x08)
	struct FTimerHandle NotifyTimer; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityMineExplosionEffectConfig
// Size: 0x128 (Inherited: 0x00)
struct FAbilityMineExplosionEffectConfig {
public:

	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char ExplosionAudio[0x28]; // 0x00(0x28)
	struct FName ExplosionEffectId; // 0x28(0x08)
	uint64_t ExplosionEffectFXId; // 0x30(0x08)
	struct FAbilityMineDataFX MineDataFX; // 0x38(0xc0)
	struct FVector ExplosionOffset; // 0xf8(0x0c)
	struct FRotator ExplosionRot; // 0x104(0x0c)
	struct FVector ExplosionScale; // 0x110(0x0c)
	struct FName HitDecalId; // 0x11c(0x08)
	char pad_124[0x4]; // 0x124(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityPlayMontageData
// Size: 0x138 (Inherited: 0xc0)
struct FAbilityPlayMontageData : public FCharacterPlayMontageData {
public:

	struct FAbilityPlayMontageRowData RowData; // 0xc0(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityPlayMontageDataP2
// Size: 0x138 (Inherited: 0x78)
struct FAbilityPlayMontageDataP2 : public FAbilityPlayMontageRowData {
public:

	struct FAbilityPlayMontageAnimUnitSet AnimUnitSet; // 0x78(0xc0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityPlayMontageDataP1
// Size: 0x78 (Inherited: 0x78)
struct FAbilityPlayMontageDataP1 : public FAbilityPlayMontageRowData {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityPlayMontageDataP4
// Size: 0x138 (Inherited: 0x138)
struct FAbilityPlayMontageDataP4 : public FAbilityPlayMontageDataP2 {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAbility.AbilityPlayMontageDataP3
// Size: 0x78 (Inherited: 0x78)
struct FAbilityPlayMontageDataP3 : public FAbilityPlayMontageDataP1 {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
