
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMVehicle.EAIHelicopterMoveState
enum class EAIHelicopterMoveState : int {
	Default = 0,
	Moving = 1,
	Arrived = 2,
	CrashMoving = 3,
	CrashFinished = 4,
	EAIHelicopterMoveState_MAX = 5
};

// Enum DFMVehicle.EAIHelicopterFightState
enum class EAIHelicopterFightState : int {
	Leisure = 0,
	Alert = 1,
	Fighting = 2,
	EAIHelicopterFightState_MAX = 3
};

// Enum DFMVehicle.EAITransportHeliMoveState
enum class EAITransportHeliMoveState : int {
	Default = 0,
	PreLand = 1,
	Land = 2,
	Hover = 3,
	PreTakeOff = 4,
	TakeOff = 5,
	AfterTakeOff = 6,
	EAITransportHeliMoveState_MAX = 7
};

// Enum DFMVehicle.EAnimVehicleDoorState
enum class EAnimVehicleDoorState : int {
	Idle = 0,
	Opened = 1,
	Closed = 2,
	OpenedWithNoAnim = 3,
	ClosedWithNoAnim = 4,
	EAnimVehicleDoorState_MAX = 5
};

// Enum DFMVehicle.EDFMTrainState
enum class EDFMTrainState : int {
	Invalid = 0,
	Move = 1,
	Stop = 2,
	Destruct = 3,
	EDFMTrainState_MAX = 4
};

// Enum DFMVehicle.EAITankPhase
enum class EAITankPhase : int {
	ENone = 0,
	EFirstPhase = 1,
	ESecondPhase = 2,
	EThirdPhase = 3,
	EDead = 4,
	EAITankPhase_MAX = 5
};

// Enum DFMVehicle.EAIHelicopterStepEvent
enum class EAIHelicopterStepEvent : int {
	Default = 0,
	Step1 = 1,
	Step2 = 2,
	Step3 = 3,
	Step4 = 4,
	Step5 = 5,
	EAIHelicopterStepEvent_MAX = 6
};

// Enum DFMVehicle.EAIHelicopterDriveState
enum class EAIHelicopterDriveState : int {
	Default = 0,
	On = 1,
	Off = 2,
	EAIHelicopterDriveState_MAX = 3
};

// Enum DFMVehicle.EAIHelicopterCrashType
enum class EAIHelicopterCrashType : int {
	Default = 0,
	Body_Crash = 1,
	PilotDied_Crash = 2,
	EAIHelicopterCrashType_MAX = 3
};

// Enum DFMVehicle.EAIHelicopterSpaceType
enum class EAIHelicopterSpaceType : int {
	Default = 0,
	High = 1,
	Low = 2,
	EAIHelicopterSpaceType_MAX = 3
};

// Enum DFMVehicle.EDFMHelicopterSmokeState
enum class EDFMHelicopterSmokeState : int {
	None = 0,
	GroundSmoke = 1,
	WaterSmoke = 2,
	EDFMHelicopterSmokeState_MAX = 3
};

// Enum DFMVehicle.EMotorCycleState
enum class EMotorCycleState : int {
	ES_NORMAL = 0,
	ES_LIE_DOWN = 1,
	ES_STANDING_UP = 2,
	ES_MAX = 3
};

// Enum DFMVehicle.EDFMVehicleEmissionType
enum class EDFMVehicleEmissionType : int {
	Sustainmen = 0,
	VehicleStart = 1,
	VehicleStop = 2,
	StartBraking = 3,
	StopBraking = 4,
	EDFMVehicleEmissionType_MAX = 5
};

// Enum DFMVehicle.EVehicleFXCreateFlags
enum class EVehicleFXCreateFlags : int {
	RelativeOffset = 0,
	AutoDestroy = 1,
	AutoPooling = 2,
	ForceRecreate = 3,
	EVehicleFXCreateFlags_MAX = 4
};

// Enum DFMVehicle.EVehicleWheelState
enum class EVehicleWheelState : int {
	NORMAL = 0,
	BROKEN = 1,
	DESTRUCTED = 2,
	EVehicleWheelState_MAX = 3
};

// Enum DFMVehicle.EDFMVehiclePathFollowStatus
enum class EDFMVehiclePathFollowStatus : int {
	Idle = 0,
	Paused = 1,
	Moving = 2,
	EDFMVehiclePathFollowStatus_MAX = 3
};

// Enum DFMVehicle.EDFMVehicleSkillStatus
enum class EDFMVehicleSkillStatus : int {
	Invalid = 0,
	Init = 1,
	Active = 2,
	Execute = 3,
	End = 4,
	EDFMVehicleSkillStatus_MAX = 5
};

// Enum DFMVehicle.EDFMTrainDoorIndex
enum class EDFMTrainDoorIndex : int {
	Door1 = 0,
	Door2 = 1,
	Door3 = 2,
	Door4 = 3,
	Door5 = 4,
	Door6 = 5,
	Door7 = 6,
	Door8 = 7,
	EDFMTrainDoorIndex_MAX = 8
};

// Enum DFMVehicle.EDFMTrainDoorState
enum class EDFMTrainDoorState : int {
	Normal = 0,
	AlwaysOpen = 1,
	AlwaysClose = 2,
	EDFMTrainDoorState_MAX = 3
};

// Enum DFMVehicle.EDFMVehicleSkillType
enum class EDFMVehicleSkillType : int {
	VehicleType_Repair = 0,
	VehicleType_Smoke = 1,
	VehicleType_Heat = 2,
	VehicleType_ADS = 3,
	VehicleType_Mark = 4,
	VehicleType_Scan = 5,
	VehicleType_RebornBeacon = 6,
	VehicleType_ThermalSmoke = 7,
	VehicleType_ThermalImaging = 8,
	VehicleType_LaunchProjectile = 9,
	VehicleType_Max = 10
};

// Enum DFMVehicle.EDFMVehicleArmorType
enum class EDFMVehicleArmorType : int {
	None = 0,
	Light = 1,
	Middle = 2,
	Heavy = 3,
	Num = 4,
	EDFMVehicleArmorType_MAX = 5
};

// Enum DFMVehicle.ESeatStateType
enum class ESeatStateType : int {
	SeatStateType_RideEmpty = 0,
	SeatStateType_SelfRide = 1,
	SeatStateType_TeammateRide = 2,
	SeatStateType_SameCampRide = 3,
	SeatStateType_Destroy = 4,
	SeatStateType_MAX = 5
};

// Enum DFMVehicle.EDFMVehicleType
enum class EDFMVehicleType : int {
	VehicleType_Common = 0,
	VehicleType_Ground = 1,
	VehicleType_Tank = 2,
	VehicleType_Water = 3,
	VehicleType_Sky = 4,
	VehicleType_MAX = 5
};

// Enum DFMVehicle.EUVehicleFrontendBuildNodeState
enum class EUVehicleFrontendBuildNodeState : int {
	EState_Default = 0,
	EState_Dirty = 1,
	EState_Loading = 2,
	EState_LoadFailed = 3,
	EState_LoadSuccess = 4,
	EState_MAX = 5
};

// Enum DFMVehicle.EVehicleFrontendLoadResultCode
enum class EVehicleFrontendLoadResultCode : int {
	EState_Default = 0,
	EState_ConfigError = 1,
	EState_ResourcesError = 2,
	EState_MAX = 3
};

// Enum DFMVehicle.EVehicleSpawnerDirtyReason
enum class EVehicleSpawnerDirtyReason : int {
	EReason_None = 0,
	EReason_SpawnedAlive = 1,
	EReason_CDProgress = 2,
	EReason_MAX = 3
};

// ScriptStruct DFMVehicle.TrainHitCharacterTimeInfo
// Size: 0x18 (Inherited: 0x00)
struct FTrainHitCharacterTimeInfo {
public:

	struct ACHARACTER* HitCharacter; // 0x00(0x08)
	struct FVector CharacterRealDiedLoc; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMTrainUpdateMoveData
// Size: 0x14 (Inherited: 0x00)
struct FDFMTrainUpdateMoveData {
public:

	float fStart; // 0x00(0x04)
	float fEnd; // 0x04(0x04)
	float fCurSpeed; // 0x08(0x04)
	float fAcc; // 0x0c(0x04)
	float fMaxSpeed; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMTrainRailData
// Size: 0x10 (Inherited: 0x00)
struct FDFMTrainRailData {
public:

	struct USplineComponent* RailSpline; // 0x00(0x08)
	bool bLoopRail; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.AnimNode_DFMVehicleSyncHandler
// Size: 0x110 (Inherited: 0xf8)
struct FAnimNode_DFMVehicleSyncHandler : public FAnimNode_SkeletalControlBase {
public:

	char pad_F8[0x18]; // 0xf8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.AnimNode_DFMWheelHandler
// Size: 0x120 (Inherited: 0xf8)
struct FAnimNode_DFMWheelHandler : public FAnimNode_SkeletalControlBase {
public:

	char pad_F8[0x28]; // 0xf8(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.PatrolConfig_Helicopter
// Size: 0x10 (Inherited: 0x00)
struct FPatrolConfig_Helicopter {
public:

	struct UClass* PatrolConfigClass; // 0x00(0x08)
	int32_t Wight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.AITransportHelicopterStateParam
// Size: 0x80 (Inherited: 0x00)
struct FAITransportHelicopterStateParam {
public:

	enum class EAITransportHeliMoveState MoveState; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FTransform TargetTF; // 0x10(0x30)
	float PlayingTime; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
	struct FTransform CurrentTF; // 0x50(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.AIHelicopterStateParam
// Size: 0x06 (Inherited: 0x00)
struct FAIHelicopterStateParam {
public:

	enum class EAIHelicopterMoveState MoveState; // 0x00(0x01)
	enum class EAIHelicopterCrashType CrashType; // 0x01(0x01)
	enum class EAIHelicopterSpaceType SpaceType; // 0x02(0x01)
	enum class EAIHelicopterFightState FightState; // 0x03(0x01)
	enum class EAIHelicopterFightState LastFightState; // 0x04(0x01)
	enum class EAIHelicopterDriveState DriveState; // 0x05(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.HelicopterFX
// Size: 0x10 (Inherited: 0x00)
struct FHelicopterFX {
public:

	struct UFXResourceContainerComponent* FX; // 0x00(0x08)
	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.AIHelicopterAlertPath
// Size: 0x10 (Inherited: 0x00)
struct FAIHelicopterAlertPath {
public:

	struct TArray<struct FVector> AlertWayPoints; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.AIHelicopterSpaceData
// Size: 0x120 (Inherited: 0x00)
struct FAIHelicopterSpaceData {
public:

	enum class EAIHelicopterSpaceType SpaceType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SectionID; // 0x04(0x04)
	struct FVector CenterLoc; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FAIHelicopterSectionPoolItem> SectionIDPool; // 0x18(0x10)
	struct TArray<struct FCrashPointData> CrashPoints; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
	struct FCrashPointData CurrentCrashPoint; // 0x40(0xc0)
	struct TArray<struct FVector> CurrentCrashPath; // 0x100(0x10)
	uint32_t Timestamp; // 0x110(0x04)
	bool bDirty; // 0x114(0x01)
	char pad_115[0xb]; // 0x115(0x0b)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.AIHelicopterSectionPoolItem
// Size: 0x20 (Inherited: 0x00)
struct FAIHelicopterSectionPoolItem {
public:

	int32_t SectionID; // 0x00(0x04)
	int32_t Weight; // 0x04(0x04)
	struct TArray<struct FVector> Path; // 0x08(0x10)
	bool HasPlayer; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t PlayerNum; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.AIHelicopterTimeKey
// Size: 0x08 (Inherited: 0x00)
struct FAIHelicopterTimeKey {
public:

	uint32_t TimeMinute; // 0x00(0x04)
	uint32_t TimeSecond; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.TankMeshData
// Size: 0x28 (Inherited: 0x00)
struct FTankMeshData {
public:

	enum class EAITankPhase AITankPhase; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> SkeletalMeshComponentTags; // 0x08(0x10)
	struct TArray<struct USkeletalMesh*> SkeletalMeshs; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.BoatSteeringSetting
// Size: 0x48 (Inherited: 0x00)
struct FBoatSteeringSetting {
public:

	float MaxSteeringRpm; // 0x00(0x04)
	float SteeringRpmAcceleratedSpeed; // 0x04(0x04)
	float SteeringRpmDeceleratedSpeed; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* SteeringTorqueCurve; // 0x10(0x08)
	struct FVector PitchAccelerationLocalOffset; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UCurveFloat* PitchAccelerationCurve; // 0x28(0x08)
	struct FVector YawAccelerationLocalOffset; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UCurveFloat* YawAccelerationCurve; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.BoatEngineSetting
// Size: 0x18 (Inherited: 0x00)
struct FBoatEngineSetting {
public:

	float RpmChangeSpeed; // 0x00(0x04)
	struct FVector2D AccelerationRpmRange; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* AccelerationCurve; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.BoatDampingSetting
// Size: 0x3a8 (Inherited: 0x00)
struct FBoatDampingSetting {
public:

	struct FRuntimeVectorCurve LinearDampingCurve; // 0x00(0x1d0)
	struct FRuntimeVectorCurve AngularDampingCurve; // 0x1d0(0x1d0)
	float MaxBalancedPitchAngle; // 0x3a0(0x04)
	float MaxBalancedRollAngle; // 0x3a4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.BoatBuoyancySetting
// Size: 0x20 (Inherited: 0x00)
struct FBoatBuoyancySetting {
public:

	float BuoyancyScale; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FBoatBuoyancySphere> BuoyancySpheres; // 0x08(0x10)
	int32_t MinInWaterSphereThreshold; // 0x18(0x04)
	int32_t MinStrandedSphereThreshold; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.BoatBuoyancySphere
// Size: 0x40 (Inherited: 0x00)
struct FBoatBuoyancySphere {
public:

	struct FVector LocalOffset; // 0x00(0x0c)
	float radius; // 0x0c(0x04)
	char pad_10[0x30]; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.BrokenVehicleOwnerVelocityState
// Size: 0x18 (Inherited: 0x00)
struct FBrokenVehicleOwnerVelocityState {
public:

	struct FVector InitVehicleVelocity; // 0x00(0x0c)
	struct FVector InitVehicleAngularVelocity; // 0x0c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMBrokenVehicleDirectionInfo
// Size: 0x10 (Inherited: 0x00)
struct FDFMBrokenVehicleDirectionInfo {
public:

	struct FVector Direction; // 0x00(0x0c)
	float Ratio; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMBrokenVehiclePhysicsRepInfo
// Size: 0x30 (Inherited: 0x00)
struct FDFMBrokenVehiclePhysicsRepInfo {
public:

	struct FVector LinearVelocity; // 0x00(0x0c)
	struct FVector AngularVelocity; // 0x0c(0x0c)
	struct FVector Position; // 0x18(0x0c)
	struct FRotator Rotation; // 0x24(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.MotorCycleDamping
// Size: 0x08 (Inherited: 0x00)
struct FMotorCycleDamping {
public:

	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.SphereDataInfo
// Size: 0x40 (Inherited: 0x00)
struct FSphereDataInfo {
public:

	float SphereRadius; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform LocalBodyTransform; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.CapsuleDataInfo
// Size: 0x40 (Inherited: 0x00)
struct FCapsuleDataInfo {
public:

	float CapsuleHalfHeight; // 0x00(0x04)
	float CapsuleRadius; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform LocalBodyTransform; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.BoxDataInfo
// Size: 0x40 (Inherited: 0x00)
struct FBoxDataInfo {
public:

	struct FVector BoxExtent; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform LocalBodyTransform; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.TankControllInfo
// Size: 0x40 (Inherited: 0x00)
struct FTankControllInfo {
public:

	struct UCurveFloat* GearCurve; // 0x00(0x08)
	bool IsAutoGear; // 0x08(0x01)
	bool IsDriveModeSpecial; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UCurveFloat* MaxLeftWheelSpeedCurve; // 0x10(0x08)
	struct UCurveFloat* MaxRightWheelSpeedCurve; // 0x18(0x08)
	struct UCurveFloat* LeftThrustRatio; // 0x20(0x08)
	struct UCurveFloat* LeftBrakeCurve; // 0x28(0x08)
	struct UCurveFloat* RightBrakeCurve; // 0x30(0x08)
	struct UCurveFloat* ThrustRatioCurve; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMTrainAnimInstanceProxy
// Size: 0x10 (Inherited: 0x00)
struct FDFMTrainAnimInstanceProxy {
public:

	struct TArray<float> DoorStateAlpha; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.WheelAsyncTraceData
// Size: 0x60 (Inherited: 0x00)
struct FWheelAsyncTraceData {
public:

	struct USceneComponent* Component; // 0x00(0x08)
	char pad_8[0x58]; // 0x08(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.PathFollowStickToGroundConfig
// Size: 0x04 (Inherited: 0x00)
struct FPathFollowStickToGroundConfig {
public:

	float radius; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.PIDData
// Size: 0x1c (Inherited: 0x00)
struct FPIDData {
public:

	float P; // 0x00(0x04)
	float I; // 0x04(0x04)
	float D; // 0x08(0x04)
	float UpperLimit; // 0x0c(0x04)
	float LowerLimit; // 0x10(0x04)
	char pad_14[0x8]; // 0x14(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMWheelAnimInstanceProxy
// Size: 0x770 (Inherited: 0x760)
struct FDFMWheelAnimInstanceProxy : public FVehicleAnimInstanceProxy {
public:

	char pad_760[0x10]; // 0x760(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.BrokenEffectInfo
// Size: 0x10 (Inherited: 0x00)
struct FBrokenEffectInfo {
public:

	struct TWeakObjectPtr<struct UFXResourceContainerComponent> EffectComp; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleEmissionConfig
// Size: 0x20 (Inherited: 0x00)
struct FDFMVehicleEmissionConfig {
public:

	struct FName ParamterName; // 0x00(0x08)
	int32_t MaterialIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FDFMVehicleEmissionInfo> EmissionInfos; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleEmissionInfo
// Size: 0x08 (Inherited: 0x00)
struct FDFMVehicleEmissionInfo {
public:

	enum class EDFMVehicleEmissionType EmissionType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Value; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleWeaponAudioInfo
// Size: 0x408 (Inherited: 0x00)
struct FVehicleWeaponAudioInfo {
public:

	char pad_0[0x408]; // 0x00(0x408)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleReplicationItem
// Size: 0x58 (Inherited: 0x20)
struct FDFMVehicleReplicationItem : public FPropertyReplicationItem {
public:

	struct FRepMovement ReplicatedMovement; // 0x20(0x34)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleOutLineEffectData
// Size: 0x08 (Inherited: 0x00)
struct FVehicleOutLineEffectData {
public:

	int32_t OutLineEffectBitArry; // 0x00(0x04)
	int32_t ProxSensorMarkKey; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleLockedAttribute
// Size: 0x08 (Inherited: 0x00)
struct FVehicleLockedAttribute {
public:

	float LockDistanceOffset; // 0x00(0x04)
	float LockDurationOffset; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleLockStateInfo
// Size: 0x20 (Inherited: 0x00)
struct FVehicleLockStateInfo {
public:

	enum class EStingerMissileLockingState LockState; // 0x00(0x01)
	enum class EStingerMissileLockingState BulletLockState; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct AGPCharacter* LockedWeaponOwner; // 0x08(0x08)
	uint64_t WeaponID; // 0x10(0x08)
	float LockingTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.PostPhysicsTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FPostPhysicsTickFunction : public FTickFunction {
public:

	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleCollisionInfo
// Size: 0x18 (Inherited: 0x00)
struct FDFMVehicleCollisionInfo {
public:

	struct AGPCharacterBase* HitCharacter; // 0x00(0x08)
	struct FVector HitOffset; // 0x08(0x0c)
	bool bStopCollision; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DirectionControllInfo
// Size: 0x10 (Inherited: 0x00)
struct FDirectionControllInfo {
public:

	struct TArray<struct FVector> Positions; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.EffectArray
// Size: 0x20 (Inherited: 0x00)
struct FEffectArray {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleParticleSystemHolder
// Size: 0x08 (Inherited: 0x00)
struct FVehicleParticleSystemHolder {
public:

	struct UParticleSystemComponent* Proxy; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleParticleHolder
// Size: 0x08 (Inherited: 0x00)
struct FVehicleParticleHolder {
public:

	struct UParticleSystem* Proxy; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleBodyPart
// Size: 0x08 (Inherited: 0x00)
struct FVehicleBodyPart {
public:

	enum class EVehiclePartType FunctionFlag; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float PartHP; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehiclePartRecvDamage
// Size: 0x08 (Inherited: 0x00)
struct FVehiclePartRecvDamage {
public:

	enum class EVehiclePartType FunctionFlag; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RecvDamage; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleBlockGunSwayInfo
// Size: 0x14 (Inherited: 0x00)
struct FVehicleBlockGunSwayInfo {
public:

	float AngleThreshold; // 0x00(0x04)
	float VelocityThreshold; // 0x04(0x04)
	float NormalImpluseThreshold; // 0x08(0x04)
	float BlockGunSwayCDTime; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleBeHitCameraShakeInfo
// Size: 0x58 (Inherited: 0x00)
struct FVehicleBeHitCameraShakeInfo {
public:

	float DamageRatio; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	/*struct TSoftClassPtr<UObject>*/char TPPBeHitCameraShake[0x28]; // 0x08(0x28)
	/*struct TSoftClassPtr<UObject>*/char FPPBeHitCameraShake[0x28]; // 0x30(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleLaunchSkillProjectileInfo
// Size: 0x20 (Inherited: 0x00)
struct FVehicleLaunchSkillProjectileInfo {
public:

	uint64_t ProjectileGuid; // 0x00(0x08)
	struct FVector LaunchedLocation; // 0x08(0x0c)
	struct FRotator LaunchedRotation; // 0x14(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DrivenWheelNWData
// Size: 0x08 (Inherited: 0x00)
struct FDrivenWheelNWData {
public:

	int32_t WheelIndex; // 0x00(0x04)
	bool IsDrivenWheel; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.CutsensePrepareData
// Size: 0x48 (Inherited: 0x00)
struct FCutsensePrepareData {
public:

	struct FVector StartLoc; // 0x00(0x0c)
	struct FVector StartVel; // 0x0c(0x0c)
	struct FRotator StartRot; // 0x18(0x0c)
	struct FVector EndLoc; // 0x24(0x0c)
	struct FVector EndVel; // 0x30(0x0c)
	struct FRotator EndRot; // 0x3c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleWheelStateData
// Size: 0x08 (Inherited: 0x00)
struct FVehicleWheelStateData {
public:

	enum class EVehicleWheelState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t FuncFlag; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVhiclePathFollowMoveRequestParam
// Size: 0x10 (Inherited: 0x00)
struct FDFMVhiclePathFollowMoveRequestParam {
public:

	struct ADFMVehiclePathFollowPath* SplinePath; // 0x00(0x08)
	bool bPlaceVehicleToStartPoint; // 0x08(0x01)
	bool bMoveInLoop; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehiclePathFollowWayPointData
// Size: 0x2c (Inherited: 0x00)
struct FDFMVehiclePathFollowWayPointData {
public:

	float DistanceAtPath; // 0x00(0x04)
	bool bWhetherToPause; // 0x04(0x01)
	bool bAutoResumeWhenPause; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float WaitingDurationToResume; // 0x08(0x04)
	bool bWhetherToLimitSpeed; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MaxSpeed; // 0x10(0x04)
	float ArrivalDetectionRadius; // 0x14(0x04)
	char pad_18[0x14]; // 0x18(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleMovePoint
// Size: 0x1c (Inherited: 0x00)
struct FVehicleMovePoint {
public:

	struct FVector Location; // 0x00(0x0c)
	float Velocity; // 0x0c(0x04)
	float AngleVelLerpOverride; // 0x10(0x04)
	float LinearVelLerpOverride; // 0x14(0x04)
	bool ReverseThrottle; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleAutonomousFrameData
// Size: 0x70 (Inherited: 0x00)
struct FDFMVehicleAutonomousFrameData {
public:

	int32_t FrameID; // 0x00(0x04)
	float SampledDeltaSeconds; // 0x04(0x04)
	struct TArray<char> InputState; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
	struct FRigidBodyState RigidBodyState; // 0x20(0x40)
	float DeltaSystemTimeStamp; // 0x60(0x04)
	char pad_64[0xc]; // 0x64(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehiclePhysicsAdjustedTarget
// Size: 0x70 (Inherited: 0x00)
struct FDFMVehiclePhysicsAdjustedTarget {
public:

	float ArrivedTimeSeconds; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FRigidBodyState RigidBodyState; // 0x10(0x40)
	char pad_50[0x20]; // 0x50(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehiclePlacementPreviewActorInitParameter
// Size: 0x48 (Inherited: 0x00)
struct FVehiclePlacementPreviewActorInitParameter {
public:

	struct ADFMVehicleBase* OwnerVehicle; // 0x00(0x08)
	struct AGPCharacter* UserCharacter; // 0x08(0x08)
	char pad_10[0x38]; // 0x10(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleRebornBeaconParameter
// Size: 0x20 (Inherited: 0x00)
struct FVehicleRebornBeaconParameter {
public:

	struct FVector PreviewLocation; // 0x00(0x0c)
	struct FRotator PreviewRotator; // 0x0c(0x0c)
	bool bIsInValidPosition; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	uint32_t PlaceTargetGUID; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleResourceDelegateInfo
// Size: 0x28 (Inherited: 0x00)
struct FDFMVehicleResourceDelegateInfo {
public:

	struct FSoftObjectPath ResourcePath; // 0x00(0x18)
	char pad_18[0x10]; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleLoadedResourceInfo
// Size: 0x30 (Inherited: 0x00)
struct FDFMVehicleLoadedResourceInfo {
public:

	struct FSoftObjectPath ResourcePath; // 0x00(0x18)
	struct UObject* ResourceObject; // 0x18(0x08)
	int32_t ReferenceCount; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleBoneSyncInfo
// Size: 0x18 (Inherited: 0x00)
struct FVehicleBoneSyncInfo {
public:

	struct FName ComponentName; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleSkillProjectileMovementParam
// Size: 0x0c (Inherited: 0x00)
struct FDFMVehicleSkillProjectileMovementParam {
public:

	float MaxMovingDistance; // 0x00(0x04)
	float InitSpeed; // 0x04(0x04)
	float Gravity; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleSupplyInfo
// Size: 0x0c (Inherited: 0x00)
struct FVehicleSupplyInfo {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleWeaponResourceHandle
// Size: 0x20 (Inherited: 0x00)
struct FVehicleWeaponResourceHandle {
public:

	uint64_t Handle; // 0x00(0x08)
	struct FSoftObjectPath AssetPath; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleTypeMap
// Size: 0x30 (Inherited: 0x10)
struct FVehicleTypeMap : public FDescRowBase {
public:

	struct UClass* VehicleTemplateBP; // 0x10(0x08)
	struct FName VehicleName; // 0x18(0x08)
	struct FString VehicleDescription; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.RaidVehicleDramaInfo
// Size: 0x70 (Inherited: 0x00)
struct FRaidVehicleDramaInfo {
public:

	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float VehicleMaxHealth; // 0x04(0x04)
	float OverrideExplodeDamage; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FName, struct FName> OverridePassengerMap; // 0x10(0x50)
	struct TArray<struct FRaidVehiclePathWeight> VehiclePaths; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.RaidVehiclePathWeight
// Size: 0x10 (Inherited: 0x00)
struct FRaidVehiclePathWeight {
public:

	struct AAIPatrolPath* Path; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleLockInfo
// Size: 0x34 (Inherited: 0x00)
struct FVehicleLockInfo {
public:

	int32_t CampId; // 0x00(0x04)
	int32_t ArrayIndex; // 0x04(0x04)
	enum class EStingerMissileLockingState LaserPointerLockingState; // 0x08(0x01)
	char LaserPointerLockingStateInt; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float LockValueIncreaseSpeed; // 0x0c(0x04)
	float LockValueDecreaseSpeed; // 0x10(0x04)
	float LockValuePersistentTime; // 0x14(0x04)
	float PersistentTimeCounter; // 0x18(0x04)
	float LockingValue; // 0x1c(0x04)
	struct TWeakObjectPtr<struct AActor> LastLocker; // 0x20(0x08)
	char pad_28[0xc]; // 0x28(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehiclePointerInfo
// Size: 0x10 (Inherited: 0x00)
struct FVehiclePointerInfo {
public:

	float IncreaseSpeed; // 0x00(0x04)
	float DecreaseSpeed; // 0x04(0x04)
	float PersistentTime; // 0x08(0x04)
	float DisconnectTimeCounter; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMTrainDoorConfig
// Size: 0x08 (Inherited: 0x00)
struct FDFMTrainDoorConfig {
public:

	enum class EDFMTrainDoorIndex DoorIndex; // 0x00(0x01)
	enum class EDFMTrainDoorState DoorState; // 0x01(0x01)
	bool UpdateWhenArrive; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float DoorLocAlpha; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleyDramaDifficultInfo
// Size: 0x70 (Inherited: 0x00)
struct FVehicleyDramaDifficultInfo {
public:

	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float VehicleMaxHealth; // 0x04(0x04)
	float OverrideExplodeDamage; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FName, struct FName> OverridePassengerMap; // 0x10(0x50)
	struct TArray<struct FVehiclePathInfo> VehiclePaths; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehiclePathInfo
// Size: 0x10 (Inherited: 0x00)
struct FVehiclePathInfo {
public:

	struct AGPSplinePath* Path; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleAsyncResourceInfo
// Size: 0x48 (Inherited: 0x00)
struct FVehicleAsyncResourceInfo {
public:

	struct FName SocketName; // 0x00(0x08)
	struct FSoftObjectPath AssetPath; // 0x08(0x18)
	/*struct TSoftClassPtr<UObject>*/char AssetClassPath[0x28]; // 0x20(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehiclePhysicsReplicationDataTableRow
// Size: 0x20 (Inherited: 0x10)
struct FDFMVehiclePhysicsReplicationDataTableRow : public FDescRowBase {
public:

	int32_t VehicleId; // 0x10(0x04)
	float MaxProjectedVelocitySize; // 0x14(0x04)
	bool bCanFly; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleInteractorDataTableRow
// Size: 0x18 (Inherited: 0x10)
struct FDFMVehicleInteractorDataTableRow : public FDescRowBase {
public:

	int32_t VehicleId; // 0x10(0x04)
	bool bKickAllPassengersAfterEnteringWater; // 0x14(0x01)
	bool bDisableInteractorAfterEnteringWater; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleWaterInteractionDataTableRow
// Size: 0xc0 (Inherited: 0x10)
struct FDFMVehicleWaterInteractionDataTableRow : public FDescRowBase {
public:

	int32_t VehicleId; // 0x10(0x04)
	struct FName RippleEffectId; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FTransform RippleRelativeTransform; // 0x20(0x30)
	/*struct TSoftClassPtr<UObject>*/char MaskClass[0x28]; // 0x50(0x28)
	char pad_78[0x8]; // 0x78(0x08)
	struct FTransform MaskRelativeTransform; // 0x80(0x30)
	struct FVector RippleLocalPosition; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleSpringArmParamCurve
// Size: 0xb0 (Inherited: 0x00)
struct FVehicleSpringArmParamCurve {
public:

	struct FRuntimeFloatCurve ParamValueCurve; // 0x00(0xa0)
	float InterpolateSpeed; // 0xa0(0x04)
	bool IsPreArmOriginOffset; // 0xa4(0x01)
	char pad_A5[0xb]; // 0xa5(0x0b)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleKeyTipsDataTableRow
// Size: 0xc8 (Inherited: 0x10)
struct FVehicleKeyTipsDataTableRow : public FDescRowBase {
public:

	int32_t VehicleId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FVehicleKeyTipsInfo> CommonKeyTipsInfos; // 0x18(0x10)
	struct TMap<struct FName, struct FVehicleSeatKeyTipsInfo> SeatKeyTips; // 0x28(0x50)
	struct TMap<struct FName, struct FVehicleSeatTipsInfo> SeatTips; // 0x78(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleSeatTipsInfo
// Size: 0x20 (Inherited: 0x00)
struct FVehicleSeatTipsInfo {
public:

	struct FText SeatText; // 0x00(0x18)
	int32_t SeatType; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleSeatKeyTipsInfo
// Size: 0x10 (Inherited: 0x00)
struct FVehicleSeatKeyTipsInfo {
public:

	struct TArray<struct FVehicleKeyTipsInfo> KeyTipsInfos; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleKeyTipsInfo
// Size: 0x20 (Inherited: 0x00)
struct FVehicleKeyTipsInfo {
public:

	struct FText KeyText; // 0x00(0x18)
	struct FName KeyName; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehiclePhysicsDataTableRow
// Size: 0x60 (Inherited: 0x10)
struct FVehiclePhysicsDataTableRow : public FDescRowBase {
public:

	int32_t VehicleId; // 0x10(0x04)
	bool bEnableModifyCollisionContact; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MinContactModificationVelocity; // 0x18(0x04)
	float MaxContactModificationVelocityScale; // 0x1c(0x04)
	float MinContactModificationVelocityScale; // 0x20(0x04)
	float ContactNormalModifyScale; // 0x24(0x04)
	float ContactModificationCoolingTime; // 0x28(0x04)
	bool bEnableAutoBalance; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float BalanceStrengthRoll; // 0x30(0x04)
	float BalanceStrengthPitch; // 0x34(0x04)
	float BalanceAngluarDamping; // 0x38(0x04)
	bool bEnableAutoBalanceWhenFalling; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MinFallingLinearVelocity; // 0x40(0x04)
	bool bEnableAutoBalanceWhenStationary; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float MaxStationaryLinearVelocity; // 0x48(0x04)
	float MaxStationaryAngularVelocity; // 0x4c(0x04)
	bool bEnableStickToGround; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float StickToGroundRiseStrength; // 0x54(0x04)
	float StickToGroundFallStrength; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleInputRedirectionDataTableRow
// Size: 0x158 (Inherited: 0x10)
struct FVehicleInputRedirectionDataTableRow : public FDescRowBase {
public:

	int32_t VehicleId; // 0x10(0x04)
	float MaxJoystickBackwardAngle; // 0x14(0x04)
	struct FRuntimeFloatCurve ThrottleCurve; // 0x18(0xa0)
	struct FRuntimeFloatCurve SteeringCurve; // 0xb8(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleSkillConfigDataTableRow
// Size: 0x68 (Inherited: 0x10)
struct FVehicleSkillConfigDataTableRow : public FDescRowBase {
public:

	int32_t VehicleId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<struct FName, struct FVehicleSeatSkillConfig> SeatSkillConfigs; // 0x18(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleSeatSkillConfig
// Size: 0x50 (Inherited: 0x00)
struct FVehicleSeatSkillConfig {
public:

	struct TMap<int32_t, int32_t> SkillConfigs; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleHitDamageInfo
// Size: 0x0c (Inherited: 0x00)
struct FDFMVehicleHitDamageInfo {
public:

	float MinVelocitySize; // 0x00(0x04)
	float MaxVelocitySize; // 0x04(0x04)
	float DamageValue; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleAnimationDataTableRow
// Size: 0x90 (Inherited: 0x10)
struct FDFMVehicleAnimationDataTableRow : public FDescRowBase {
public:

	int32_t VehicleId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TSoftObjectPtr<UAimOffsetBlendSpace>*/char SteeringWheelAnimation[0x28]; // 0x18(0x28)
	struct TMap<struct FName, struct FDFMVehicleSeatAnimationConfig> SeatAnimationConfigs; // 0x40(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleWeaponDataTableRow
// Size: 0x320 (Inherited: 0x10)
struct FDFMVehicleWeaponDataTableRow : public FDescRowBase {
public:

	uint64_t WeaponID; // 0x10(0x08)
	struct FText WeaponDisplayName; // 0x18(0x18)
	bool IsWeaponUseVehicleMesh; // 0x30(0x01)
	bool IsFixed; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float FixedRotationLerpValue; // 0x34(0x04)
	float MaxDistance; // 0x38(0x04)
	struct FVector FixedFireStartPos; // 0x3c(0x0c)
	int32_t RotAudioId; // 0x48(0x04)
	float RotLerpValue; // 0x4c(0x04)
	float RotLerpThreshold; // 0x50(0x04)
	float WeaponRotYawSpeed; // 0x54(0x04)
	float WeaponRotPitchSpeed; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FName> WeaponRoots; // 0x60(0x10)
	struct TArray<struct FName> WeaponGuns; // 0x70(0x10)
	struct FRuntimeFloatCurve WeaponMaxPitch; // 0x80(0xa0)
	struct FRuntimeFloatCurve WeaponMinPitch; // 0x120(0xa0)
	struct FVector WeaponPitchRange; // 0x1c0(0x0c)
	bool IsNeedFireEffect; // 0x1cc(0x01)
	char pad_1CD[0x3]; // 0x1cd(0x03)
	struct FVector FireForcePos; // 0x1d0(0x0c)
	float FireVelocityValue; // 0x1dc(0x04)
	float FireAngularVelocityValue; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct FSoftObjectPath FPPUpAdditiveAnim; // 0x1e8(0x18)
	struct FSoftObjectPath FPPDownAdditiveAnim; // 0x200(0x18)
	struct TArray<struct FName> HideSockets; // 0x218(0x10)
	struct FName CrossHairName; // 0x228(0x08)
	struct FSoftObjectPath WeaponUIIcon; // 0x230(0x18)
	struct FSoftObjectPath WeaponTypeIcon; // 0x248(0x18)
	struct FSoftObjectPath WeaponGunMesh; // 0x260(0x18)
	char pad_278[0x8]; // 0x278(0x08)
	struct FTransform WeaponGunLocalTransform; // 0x280(0x30)
	struct FSoftObjectPath AnotherWeaponGunMesh; // 0x2b0(0x18)
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct FTransform AnotherWeaponGunLocalTransform; // 0x2d0(0x30)
	struct FSoftObjectPath WeaponRootMesh; // 0x300(0x18)
	char pad_318[0x8]; // 0x318(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleAudio1P3PConfig
// Size: 0x50 (Inherited: 0x00)
struct FDFMVehicleAudio1P3PConfig {
public:

	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char Event1P[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char Event3P[0x28]; // 0x28(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleHUDDataTableRow
// Size: 0xa8 (Inherited: 0x10)
struct FDFMVehicleHUDDataTableRow : public FDescRowBase {
public:

	int32_t VehicleId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TSoftObjectPtr<UPaperSprite>*/char VehicleIcon[0x28]; // 0x18(0x28)
	struct TArray<struct FName> CommonHUDNames; // 0x40(0x10)
	int32_t SeatLayoutType; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TMap<struct FName, struct FDFMVehicleSeatHUDConfig> SeatHUDConfigs; // 0x58(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleSeatHUDConfig
// Size: 0x10 (Inherited: 0x00)
struct FDFMVehicleSeatHUDConfig {
public:

	struct TArray<struct FName> SeatHUDNames; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleFrontendBuildNode
// Size: 0x28 (Inherited: 0x00)
struct FVehicleFrontendBuildNode {
public:

	bool bIdle; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t ItemID; // 0x08(0x08)
	uint64_t ItemGUID; // 0x10(0x08)
	uint64_t SocketGUID; // 0x18(0x08)
	struct USkeletalMeshComponent* MeshComponent; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleFrontendBuildTree
// Size: 0x18 (Inherited: 0x00)
struct FVehicleFrontendBuildTree {
public:

	struct USceneComponent* RootComponent; // 0x00(0x08)
	struct TArray<struct FVehicleFrontendBuildNode> Nodes; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleFrontendCacher
// Size: 0x01 (Inherited: 0x00)
struct FVehicleFrontendCacher {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleFrontendContextNode
// Size: 0x18 (Inherited: 0x00)
struct FVehicleFrontendContextNode {
public:

	uint64_t ItemID; // 0x00(0x08)
	uint64_t ItemGUID; // 0x08(0x08)
	uint64_t SocketGUID; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleFrontendRuleTemplate
// Size: 0x50 (Inherited: 0x00)
struct FVehicleFrontendRuleTemplate {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleFrontendContextUpdateResult
// Size: 0x01 (Inherited: 0x00)
struct FVehicleFrontendContextUpdateResult {
public:

	bool Success; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleFrontendResourcesPaker
// Size: 0x01 (Inherited: 0x00)
struct FVehicleFrontendResourcesPaker {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleFrontendResourcesPak
// Size: 0x18 (Inherited: 0x00)
struct FVehicleFrontendResourcesPak {
public:

	struct TArray<struct FSoftObjectPath> Paths; // 0x00(0x10)
	int64_t MaterialIndex; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.HelicopterInputStatePC
// Size: 0x10 (Inherited: 0x00)
struct FHelicopterInputStatePC {
public:

	float SteeringInput; // 0x00(0x04)
	float ThrottleInput; // 0x04(0x04)
	float PitchInput; // 0x08(0x04)
	float RollInput; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.HelicopterInputState
// Size: 0x14 (Inherited: 0x00)
struct FHelicopterInputState {
public:

	float SteeringInput; // 0x00(0x04)
	float ThrottleInput; // 0x04(0x04)
	float UpInput; // 0x08(0x04)
	float YawInput; // 0x0c(0x04)
	float PitchInput; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.TankInputState
// Size: 0x28 (Inherited: 0x00)
struct FTankInputState {
public:

	float SteeringInput; // 0x00(0x04)
	float ThrottleInput; // 0x04(0x04)
	float BrakeInput; // 0x08(0x04)
	float HandbrakeInput; // 0x0c(0x04)
	int32_t CurrentGear; // 0x10(0x04)
	float MaxLeftWheelSpeed; // 0x14(0x04)
	float MaxRightWheelSpeed; // 0x18(0x04)
	int32_t ControllIndex; // 0x1c(0x04)
	float LeftThrustRatio; // 0x20(0x04)
	float RightThrustRatio; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.ReplicatedVehicleNWState
// Size: 0x20 (Inherited: 0x00)
struct FReplicatedVehicleNWState {
public:

	float SteeringInput; // 0x00(0x04)
	float ThrottleInput; // 0x04(0x04)
	float BrakeInput; // 0x08(0x04)
	float HandbrakeInput; // 0x0c(0x04)
	int32_t CurrentGear; // 0x10(0x04)
	bool bIsNeedSpecialSteer; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MaxLeftWheelSpeed; // 0x18(0x04)
	float MaxRightWheelSpeed; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.BoatInputState
// Size: 0x08 (Inherited: 0x00)
struct FBoatInputState {
public:

	float SteeringInput; // 0x00(0x04)
	float ThrottleInput; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleInputInterpRate
// Size: 0x08 (Inherited: 0x00)
struct FVehicleInputInterpRate {
public:

	float RiseRate; // 0x00(0x04)
	float FallRate; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleSpawnerConfig
// Size: 0x18 (Inherited: 0x00)
struct FVehicleSpawnerConfig {
public:

	struct TArray<struct FName> Tags; // 0x00(0x10)
	struct UClass* VehicleTemplate; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.BreakthroughVehicleSpawnerInfoRow
// Size: 0x20 (Inherited: 0x10)
struct FBreakthroughVehicleSpawnerInfoRow : public FDescRowBase {
public:

	struct FName SpawnerID; // 0x10(0x08)
	float VehicleRefreshCD; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleSpawnerInfo
// Size: 0x1c (Inherited: 0x00)
struct FVehicleSpawnerInfo {
public:

	struct FName SpawnerID; // 0x00(0x08)
	float ConfigVehicleSpawnCD; // 0x08(0x04)
	float CDProgress; // 0x0c(0x04)
	bool IsSpawnedAlive; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	uint32_t DirtyReason; // 0x14(0x04)
	bool bLocked; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleSpawnedWeakList
// Size: 0x10 (Inherited: 0x00)
struct FVehicleSpawnedWeakList {
public:

	struct TArray<struct TWeakObjectPtr<struct ADFMVehicleBase>> List; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleSpawnerWeakList
// Size: 0x10 (Inherited: 0x00)
struct FVehicleSpawnerWeakList {
public:

	struct TArray<struct TWeakObjectPtr<struct AVehicleSpawner>> List; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleFrontendLoadResult
// Size: 0x01 (Inherited: 0x00)
struct FVehicleFrontendLoadResult {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMValkyrieVehicleAnimInstanceProxyExtendedParams
// Size: 0x18 (Inherited: 0x00)
struct FDFMValkyrieVehicleAnimInstanceProxyExtendedParams {
public:

	struct FRotator CurrentFrontWindowRotator; // 0x00(0x0c)
	struct FRotator CurrentBackWindowRotator; // 0x0c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleDifferentialNWData
// Size: 0x10 (Inherited: 0x00)
struct FVehicleDifferentialNWData {
public:

	struct TArray<struct FDrivenWheelNWData> DrivenWheelData; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.WheeledVehicleDataTableRow
// Size: 0xb8 (Inherited: 0x10)
struct FWheeledVehicleDataTableRow : public FDescRowBase {
public:

	int32_t VehicleId; // 0x10(0x04)
	char bReverseAsBrake : 1; // 0x14(0x01)
	char bUseRVOAvoidance : 1; // 0x14(0x01)
	char pad_14_2 : 6; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float Mass; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FWheelSetup> WheelSetups; // 0x20(0x10)
	float DragCoefficient; // 0x30(0x04)
	float ChassisWidth; // 0x34(0x04)
	float ChassisHeight; // 0x38(0x04)
	struct FVector InertiaTensorScale; // 0x3c(0x0c)
	float MinNormalizedTireLoad; // 0x48(0x04)
	float MinNormalizedTireLoadFiltered; // 0x4c(0x04)
	float MaxNormalizedTireLoad; // 0x50(0x04)
	float MaxNormalizedTireLoadFiltered; // 0x54(0x04)
	float ThresholdLongitudinalSpeed; // 0x58(0x04)
	int32_t LowForwardSpeedSubStepCount; // 0x5c(0x04)
	int32_t HighForwardSpeedSubStepCount; // 0x60(0x04)
	float RVOAvoidanceRadius; // 0x64(0x04)
	float RVOAvoidanceHeight; // 0x68(0x04)
	float AvoidanceConsiderationRadius; // 0x6c(0x04)
	float RVOSteeringStep; // 0x70(0x04)
	float RVOThrottleStep; // 0x74(0x04)
	int32_t AvoidanceUID; // 0x78(0x04)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x7c(0x04)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x80(0x04)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x84(0x04)
	float AvoidanceWeight; // 0x88(0x04)
	float IdleBrakeInput; // 0x8c(0x04)
	float StopThreshold; // 0x90(0x04)
	float WrongDirectionThreshold; // 0x94(0x04)
	struct FVehicleInputRate ThrottleInputRate; // 0x98(0x08)
	struct FVehicleInputRate BrakeInputRate; // 0xa0(0x08)
	struct FVehicleInputRate HandbrakeInputRate; // 0xa8(0x08)
	struct FVehicleInputRate SteeringInputRate; // 0xb0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleSpringArmParamVectorCurve
// Size: 0x288 (Inherited: 0x00)
struct FVehicleSpringArmParamVectorCurve {
public:

	struct FRuntimeVectorCurve RuntimeVectorCurve; // 0x00(0x1d0)
	float InterpolateSpeed; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct FRuntimeFloatCurve InterpolateSpeedCurve; // 0x1d8(0xa0)
	bool IsUseAcceleration; // 0x278(0x01)
	bool IsPreArmOriginOffset; // 0x279(0x01)
	char pad_27A[0xe]; // 0x27a(0x0e)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleLaunchProjectileConfig
// Size: 0x30 (Inherited: 0x00)
struct FDFMVehicleLaunchProjectileConfig {
public:

	/*struct TSoftClassPtr<UObject>*/char ProjectileClass[0x28]; // 0x00(0x28)
	struct FName LaunchedEffectId; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleThermalImagingConfig
// Size: 0x08 (Inherited: 0x00)
struct FDFMVehicleThermalImagingConfig {
public:

	float LockDistanceOffset; // 0x00(0x04)
	float LockDurationOffset; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleHeatConfig
// Size: 0x30 (Inherited: 0x00)
struct FDFMVehicleHeatConfig {
public:

	struct TArray<struct FName> EffectIds; // 0x00(0x10)
	struct TArray<struct FTransform> EffectTransforms; // 0x10(0x10)
	struct TArray<float> EffectTimes; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleThermalSmokeConfig
// Size: 0x30 (Inherited: 0x00)
struct FDFMVehicleThermalSmokeConfig {
public:

	/*struct TSoftClassPtr<UObject>*/char ActorClass[0x28]; // 0x00(0x28)
	float ShieldRadius; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehiclePreviewPlacementConfig
// Size: 0x38 (Inherited: 0x00)
struct FDFMVehiclePreviewPlacementConfig {
public:

	/*struct TSoftClassPtr<UObject>*/char PreviewActorClass[0x28]; // 0x00(0x28)
	float SweepHeightOffset; // 0x28(0x04)
	float LongestDistanceToVehicle; // 0x2c(0x04)
	float ShortestDistanceToVehicle; // 0x30(0x04)
	float MaxDeltaHeight; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleMarkDetectionConfig
// Size: 0x30 (Inherited: 0x00)
struct FDFMVehicleMarkDetectionConfig {
public:

	float DetectionLength; // 0x00(0x04)
	float DetectionScopeInScreen; // 0x04(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char MarkAudio[0x28]; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleScanDetectionConfig
// Size: 0x80 (Inherited: 0x00)
struct FDFMVehicleScanDetectionConfig {
public:

	float DetectionLength; // 0x00(0x04)
	float DetectionInterval; // 0x04(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char ScanStartAudio[0x28]; // 0x08(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char ScanAudio[0x28]; // 0x30(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char ScanEndAudio[0x28]; // 0x58(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleADSConfig
// Size: 0x60 (Inherited: 0x00)
struct FDFMVehicleADSConfig {
public:

	/*struct TSoftClassPtr<UObject>*/char ActorClass[0x28]; // 0x00(0x28)
	float InterceptRadius; // 0x28(0x04)
	struct FVector InterceptFirePosition; // 0x2c(0x0c)
	struct FName CoolDownEffect; // 0x38(0x08)
	struct FName PersistenceEffect; // 0x40(0x08)
	struct FVector EffectPosition; // 0x48(0x0c)
	struct FName EffectSocket; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleRepairConfig
// Size: 0x18 (Inherited: 0x00)
struct FDFMVehicleRepairConfig {
public:

	float AddHPOnceTime; // 0x00(0x04)
	float AddHPCDTime; // 0x04(0x04)
	struct TArray<enum class EVehiclePartType> RepairPartSequence; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleSmokeConfig
// Size: 0x1c (Inherited: 0x00)
struct FDFMVehicleSmokeConfig {
public:

	struct FBox SmokeBox; // 0x00(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleBrokenPartActor
// Size: 0x20 (Inherited: 0x00)
struct FVehicleBrokenPartActor {
public:

	/*struct TArray<struct TSoftClassPtr<UObject>>*/char BrokenPartClasses[0x10]; // 0x00(0x10)
	struct TArray<struct FTransform> BrokenPartTransforms; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleHealthRecoverInfo
// Size: 0x120 (Inherited: 0x00)
struct FVehicleHealthRecoverInfo {
public:

	bool IsNeedRecover; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StartRecoverTime; // 0x04(0x04)
	float RecoverHPValue; // 0x08(0x04)
	float RecoverLowHPThrehold; // 0x0c(0x04)
	float RecoverLowHPValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<struct FName, struct FRuntimeFloatCurve> RecoverHPValueWithSupplyMap; // 0x18(0x50)
	struct FRuntimeFloatCurve RecoverHPValueWithSupply; // 0x68(0xa0)
	struct TArray<enum class EVehiclePartType> RecoverPartSequence; // 0x108(0x10)
	char pad_118[0x8]; // 0x118(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.EffectInfo
// Size: 0x50 (Inherited: 0x00)
struct FEffectInfo {
public:

	struct FName EffectId; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform EffectTransform; // 0x10(0x30)
	struct FName SocketName; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleHitDamageConfig
// Size: 0x10 (Inherited: 0x00)
struct FDFMVehicleHitDamageConfig {
public:

	struct TArray<struct FDFMVehicleHitDamageInfo> Infos; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleCharacterAnimationConfig
// Size: 0x190 (Inherited: 0x00)
struct FDFMVehicleCharacterAnimationConfig {
public:

	/*struct TSoftObjectPtr<UAnimationAsset>*/char CharacterGetOnAnimation[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char CharacterGetOffAnimation[0x28]; // 0x28(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char CharacterIdleAnimation[0x28]; // 0x50(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char CharacterTurnAnimation[0x28]; // 0x78(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char CharacterSoaringAnimation[0x28]; // 0xa0(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char CharacterLeanAnimation[0x28]; // 0xc8(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char CharacterHitAnimation[0x28]; // 0xf0(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char CharacterHurtAnimation[0x28]; // 0x118(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char CharacterLandingAnimation[0x28]; // 0x140(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char CharacterCutSceneIdleAnimation[0x28]; // 0x168(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMSkyVehicleAudioConfig
// Size: 0x10 (Inherited: 0x00)
struct FDFMSkyVehicleAudioConfig {
public:

	struct FString LiftStateRTPC; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMWaterVehicleAudioConfig
// Size: 0x50 (Inherited: 0x00)
struct FDFMWaterVehicleAudioConfig {
public:

	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char WaterAudioStartEvent[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char WaterAudioStopEvent[0x28]; // 0x28(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMTankVehicleAudioConfig
// Size: 0xa0 (Inherited: 0x00)
struct FDFMTankVehicleAudioConfig {
public:

	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char NormalTrackStartEvent[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char NormalTrackStopEvent[0x28]; // 0x28(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char BrokenTrackStartEvent[0x28]; // 0x50(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char BrokenTrackStopEvent[0x28]; // 0x78(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMGroundVehicleAudioConfig
// Size: 0x1a8 (Inherited: 0x00)
struct FDFMGroundVehicleAudioConfig {
public:

	float MaxRPM; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	/*struct TSoftObjectPtr<UPhysicalMaterialTireNoiseAsset>*/char PhysicalMaterialTireNoiseAsset[0x28]; // 0x08(0x28)
	float TireNoiseStopDelay; // 0x30(0x04)
	bool bAllowPlayingGearAudio; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char LateralSlipStartEvent[0x28]; // 0x38(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char LateralSlipStopEvent[0x28]; // 0x60(0x28)
	float LateralSlipStartValue; // 0x88(0x04)
	float LateralSlipStopValue; // 0x8c(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char LongSlipStartEvent[0x28]; // 0x90(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char LongSlipStopEvent[0x28]; // 0xb8(0x28)
	float LongSlipStartValue; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char BrakeStartEvent[0x28]; // 0xe8(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char BrakeStopEvent[0x28]; // 0x110(0x28)
	float BrakeCoolDown; // 0x138(0x04)
	float BrakeLimit; // 0x13c(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char SuspensionAudio[0x28]; // 0x140(0x28)
	float SuspensionCoolDown; // 0x168(0x04)
	float SuspensionTick; // 0x16c(0x04)
	float SuspensionLimit; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char LandingAudio[0x28]; // 0x178(0x28)
	float MinNormalizedLandingVelocity; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleFrontendLoadContext
// Size: 0x30 (Inherited: 0x00)
struct FVehicleFrontendLoadContext {
public:

	uint64_t TaskID; // 0x00(0x08)
	struct AActor* Owner; // 0x08(0x08)
	struct UVehicleFrontendContext* Context; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
	struct FVehicleFrontendLoadResult Result; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleAnimInstanceProxy
// Size: 0xa8 (Inherited: 0x00)
struct FDFMVehicleAnimInstanceProxy {
public:

	int32_t SeatStateFL; // 0x00(0x04)
	int32_t SeatStateFR; // 0x04(0x04)
	int32_t SeatStateBL; // 0x08(0x04)
	int32_t SeatStateBR; // 0x0c(0x04)
	float DriveTurnX; // 0x10(0x04)
	float DriveTurnY; // 0x14(0x04)
	struct FRotator SteeringWheelRot; // 0x18(0x0c)
	bool bVehicleShake; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float FPPDriveTurnAnimTime; // 0x28(0x04)
	bool bFPPDrive; // 0x2c(0x01)
	bool bCloseWindow; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct FRotator CarBarRot; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TMap<struct FName, struct FRotator> CurrentBoneRelRotatorMap; // 0x40(0x50)
	struct FDFMValkyrieVehicleAnimInstanceProxyExtendedParams ValkyrieExtendedParams; // 0x90(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.WheeledTankDataTableRow
// Size: 0x1b8 (Inherited: 0xb8)
struct FWheeledTankDataTableRow : public FWheeledVehicleDataTableRow {
public:

	struct FVehicleEngineData EngineSetup; // 0xb8(0xb8)
	struct FVehicleTransmissionData TransmissionSetup; // 0x170(0x38)
	struct TArray<struct FTankControllInfo> ControllInfos; // 0x1a8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.WheeledVehicleNWDataTableRow
// Size: 0x258 (Inherited: 0xb8)
struct FWheeledVehicleNWDataTableRow : public FWheeledVehicleDataTableRow {
public:

	struct FVehicleEngineData EngineSetup; // 0xb8(0xb8)
	struct FVehicleDifferentialNWData DifferentialSetup; // 0x170(0x10)
	struct FVehicleTransmissionData TransmissionSetup; // 0x180(0x38)
	struct FRuntimeFloatCurve SteeringCurve; // 0x1b8(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.WheeledVehicle4WDataTableRow
// Size: 0x268 (Inherited: 0xb8)
struct FWheeledVehicle4WDataTableRow : public FWheeledVehicleDataTableRow {
public:

	struct FVehicleEngineData EngineSetup; // 0xb8(0xb8)
	struct FVehicleDifferential4WData DifferentialSetup; // 0x170(0x1c)
	float AckermannAccuracy; // 0x18c(0x04)
	struct FVehicleTransmissionData TransmissionSetup; // 0x190(0x38)
	struct FRuntimeFloatCurve SteeringCurve; // 0x1c8(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleCameraDataTableRow
// Size: 0x12f0 (Inherited: 0x10)
struct FVehicleCameraDataTableRow : public FDescRowBase {
public:

	int32_t VehicleId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> ForwardTargetOffsetCurves; // 0x18(0x10)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> RightTargetOffsetCurves; // 0x28(0x10)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> RightTargetOffsetCurveWithAngularVelocities; // 0x38(0x10)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> UpTargetOffsetCurves; // 0x48(0x10)
	struct FVehicleSpringArmParamVectorCurve FPPUpTargetOffset; // 0x58(0x288)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> FPPUpTargetRotatorOffset; // 0x2e0(0x10)
	struct FVehicleSpringArmParamVectorCurve FPPRightTargetOffsetWithAngularVelocity; // 0x2f0(0x288)
	struct FVehicleSpringArmParamVectorCurve FPPRightTargetOffsetWithAngularAcceleration; // 0x578(0x288)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> FPPRightTargetRotationOffsetWithAngularVelocity; // 0x800(0x10)
	struct FVehicleSpringArmParamVectorCurve FPPPitchTargetOffset; // 0x810(0x288)
	struct FVehicleSpringArmParamVectorCurve FPPPitchTargetRotationOffset; // 0xa98(0x288)
	struct FVehicleSpringArmParamVectorCurve FPPPitchTargetOffsetWithAngularAcceleration; // 0xd20(0x288)
	struct TArray<struct FVehicleSpringArmParamVectorCurve> FPPPitchVelocityTargetRotationOffset; // 0xfa8(0x10)
	struct FVehicleSpringArmParamVectorCurve UpAngleTargetOffset; // 0xfb8(0x288)
	struct FRuntimeFloatCurve ExtraSpringArmLengthCurve; // 0x1240(0xa0)
	bool bUseBumpOptimization; // 0x12e0(0x01)
	char pad_12E1[0x3]; // 0x12e1(0x03)
	float BumpOptimizationInterpolateSpeed; // 0x12e4(0x04)
	float BumpOptimizationScale; // 0x12e8(0x04)
	bool bEnableToLockCamera; // 0x12ec(0x01)
	char pad_12ED[0x3]; // 0x12ed(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleRebornBeaconConfig
// Size: 0x60 (Inherited: 0x00)
struct FDFMVehicleRebornBeaconConfig {
public:

	struct FDFMVehiclePreviewPlacementConfig PreviewPlacementConfig; // 0x00(0x38)
	/*struct TSoftClassPtr<UObject>*/char RebornBeaconClass[0x28]; // 0x38(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleHealthDataTableRow
// Size: 0x160 (Inherited: 0x10)
struct FVehicleHealthDataTableRow : public FDescRowBase {
public:

	int32_t VehicleId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVehicleHealthRecoverInfo RecoverInfo; // 0x18(0x120)
	float OverrideExplodeDamage; // 0x138(0x04)
	float ExplodeDamageRate; // 0x13c(0x04)
	struct FVehicleBrokenPartActor VehicleBrokenPartInfo; // 0x140(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.BoatEffectInfo
// Size: 0xf0 (Inherited: 0x00)
struct FBoatEffectInfo {
public:

	struct FEffectInfo LeftWaterEffect; // 0x00(0x50)
	struct FEffectInfo RightWaterEffect; // 0x50(0x50)
	struct FEffectInfo BackWaterEffect; // 0xa0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.BrokenEffect
// Size: 0x70 (Inherited: 0x00)
struct FBrokenEffect {
public:

	float MaxHP; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FEffectInfo EffectInfo; // 0x10(0x50)
	float FadeInTime; // 0x60(0x04)
	float FadeOutTime; // 0x64(0x04)
	float DealyTimeToStop; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleDataConfigDataTableRow
// Size: 0x70 (Inherited: 0x10)
struct FDFMVehicleDataConfigDataTableRow : public FDescRowBase {
public:

	int32_t VehicleId; // 0x10(0x04)
	int32_t MaxHP; // 0x14(0x04)
	enum class EGPVehicleArmorType ArmorType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t MaxLevelToIgnoreCollisionOfDestructible; // 0x1c(0x04)
	int64_t ExplodeAttackerValueId; // 0x20(0x08)
	float PointDamageTakenRate; // 0x28(0x04)
	float ExplosionDamageTakenRate; // 0x2c(0x04)
	int32_t VehicleArmorDamageId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	int64_t HitAttackerValueId; // 0x38(0x08)
	struct FDFMVehicleHitDamageConfig HitCharacterDamageConfig; // 0x40(0x10)
	struct FDFMVehicleHitDamageConfig HitWallDamageConfig; // 0x50(0x10)
	struct FDFMVehicleHitDamageConfig HitVehicleDamageConfig; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleSeatAnimationConfig
// Size: 0x370 (Inherited: 0x00)
struct FDFMVehicleSeatAnimationConfig {
public:

	/*struct TSoftObjectPtr<UAnimSequence>*/char VehicleGetOnAnimation[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char VehicleGetOffAnimation[0x28]; // 0x28(0x28)
	struct FDFMVehicleCharacterAnimationConfig FPPAnimationConfig; // 0x50(0x190)
	struct FDFMVehicleCharacterAnimationConfig TPPAnimationConfig; // 0x1e0(0x190)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.DFMVehicleAudioDataTableRow
// Size: 0x720 (Inherited: 0x10)
struct FDFMVehicleAudioDataTableRow : public FDescRowBase {
public:

	struct FName AudioKey; // 0x10(0x08)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char EngineAudioStartEvent[0x28]; // 0x18(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char EngineStartEvent[0x28]; // 0x40(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char EngineAudioStopEvent[0x28]; // 0x68(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char EngineStopEvent[0x28]; // 0x90(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char WindNoiseStartEvent[0x28]; // 0xb8(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char WindNoiseStopEvent[0x28]; // 0xe0(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char PassByStartEvent[0x28]; // 0x108(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char PassByStopEvent[0x28]; // 0x130(0x28)
	float PassByMaxDistance; // 0x158(0x04)
	float PassByMinVelocity; // 0x15c(0x04)
	bool IsNeedPlayHorn; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char HornStartEvent[0x28]; // 0x168(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char HornStopEvent[0x28]; // 0x190(0x28)
	struct TArray<float> AlarmEventHPRatios; // 0x1b8(0x10)
	struct FString AlarmRTPC; // 0x1c8(0x10)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AlarmStartEvent[0x28]; // 0x1d8(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AlarmStopEvent[0x28]; // 0x200(0x28)
	/*struct TSoftObjectPtr<UGPAudioVehicleCollisionDataAsset>*/char VehicleCollisionAsset[0x28]; // 0x228(0x28)
	struct FString PerspectiveRTPC; // 0x250(0x10)
	struct FString IsInAirRTPC; // 0x260(0x10)
	struct FString IsDriverRTPC; // 0x270(0x10)
	struct FString IsLocalPassengerRTPC; // 0x280(0x10)
	struct FString RotatingSpeedRTPC; // 0x290(0x10)
	struct FString EngineRotationWithVelocityRTPC; // 0x2a0(0x10)
	struct FRuntimeFloatCurve RPMNoiseCurve; // 0x2b0(0xa0)
	struct FString ThrottleRTPC; // 0x350(0x10)
	struct FString VelocityRTPC; // 0x360(0x10)
	struct TArray<int32_t> AdjustRpmGears; // 0x370(0x10)
	struct FRuntimeFloatCurve AdjustRpmByGearCurve; // 0x380(0xa0)
	struct FString GearRTPC; // 0x420(0x10)
	struct FString SuspensionRTPC; // 0x430(0x10)
	struct FString LandingDestructedWheelNumRTPC; // 0x440(0x10)
	struct FString LongSlipRTPC; // 0x450(0x10)
	struct FString LateralSlipRTPC; // 0x460(0x10)
	enum class EDFMVehicleType AudioType; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct FDFMGroundVehicleAudioConfig GroundVehicleAudioConfig; // 0x478(0x1a8)
	struct FDFMTankVehicleAudioConfig TankVehicleAudioConfig; // 0x620(0xa0)
	struct FDFMWaterVehicleAudioConfig WaterVehicleAudioConfig; // 0x6c0(0x50)
	struct FDFMSkyVehicleAudioConfig SkyVehicleAudioConfig; // 0x710(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleSkillDataTableRow
// Size: 0x390 (Inherited: 0x10)
struct FVehicleSkillDataTableRow : public FDescRowBase {
public:

	int32_t SkillId; // 0x10(0x04)
	enum class EDFMVehicleSkillType SkillType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	/*struct TSoftClassPtr<UObject>*/char SkillExecutorClass[0x28]; // 0x18(0x28)
	struct FText SkillName; // 0x40(0x18)
	/*struct TSoftObjectPtr<UPaperSprite>*/char SkillIcon[0x28]; // 0x58(0x28)
	/*struct TSoftObjectPtr<UPaperSprite>*/char MobileSkillIcon[0x28]; // 0x80(0x28)
	struct FName SkillHUD; // 0xa8(0x08)
	bool bIsPassiveSkill; // 0xb0(0x01)
	bool bLongPressToExecute; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char ExecuteAudio[0x28]; // 0xb8(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char EndAudio[0x28]; // 0xe0(0x28)
	struct FName EffectId; // 0x108(0x08)
	struct FTransform EffectTransform; // 0x110(0x30)
	bool IsEffectAttached; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	float CdTime; // 0x144(0x04)
	float SkillLengthTime; // 0x148(0x04)
	int32_t SkillNum; // 0x14c(0x04)
	struct FDFMVehicleSmokeConfig SmokeInfoConfig; // 0x150(0x1c)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FDFMVehicleRepairConfig RepairInfoConfig; // 0x170(0x18)
	struct FDFMVehicleADSConfig ADSConfig; // 0x188(0x60)
	struct FDFMVehicleScanDetectionConfig ScanConfig; // 0x1e8(0x80)
	struct FDFMVehicleMarkDetectionConfig MarkConfig; // 0x268(0x30)
	struct FDFMVehicleRebornBeaconConfig RebornBeaconConfig; // 0x298(0x60)
	struct FDFMVehicleThermalSmokeConfig ThermalSmokeConfig; // 0x2f8(0x30)
	struct FDFMVehicleHeatConfig HeatConfig; // 0x328(0x30)
	struct FDFMVehicleThermalImagingConfig ThermalImagingConfig; // 0x358(0x08)
	struct FDFMVehicleLaunchProjectileConfig LaunchProjectileConfig; // 0x360(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMVehicle.VehicleEffectDataTableRow
// Size: 0x300 (Inherited: 0x10)
struct FVehicleEffectDataTableRow : public FDescRowBase {
public:

	int32_t EffectId; // 0x10(0x04)
	float EffectMinVelocity; // 0x14(0x04)
	float EffectMaxVelocity; // 0x18(0x04)
	float WaterdropMinVelocity; // 0x1c(0x04)
	struct TArray<struct FEffectInfo> MovingEffects; // 0x20(0x10)
	struct TArray<struct FEffectInfo> DriverGetOnEffects; // 0x30(0x10)
	struct TMap<struct FName, struct FEffectInfo> BeginFireEffects; // 0x40(0x50)
	struct TArray<struct FBrokenEffect> BrokenEffects; // 0x90(0x10)
	struct FEffectInfo BrokenFireEffectInfo; // 0xa0(0x50)
	struct FEffectInfo ExplosionEffectInfo; // 0xf0(0x50)
	enum class EExplosionType ExplosionType; // 0x140(0x01)
	char pad_141[0xf]; // 0x141(0x0f)
	struct FEffectInfo DestroyEffectInfo; // 0x150(0x50)
	enum class EDFMVehicleType EffectType; // 0x1a0(0x01)
	char pad_1A1[0xf]; // 0x1a1(0x0f)
	struct FBoatEffectInfo BoatEffectInfo; // 0x1b0(0xf0)
	struct FName HelicopterGroundSmokeEffectId; // 0x2a0(0x08)
	struct FName HelicopterWaterSmokeEffectId; // 0x2a8(0x08)
	struct FEffectInfo HelicopterPropellerEffectInfo; // 0x2b0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
