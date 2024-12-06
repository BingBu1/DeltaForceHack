
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum PhysXVehicles.EVehicleSuspensionQuery
enum class EVehicleSuspensionQuery : int {
	Raycast = 0,
	BlockingSweep = 1,
	EVehicleSuspensionQuery_MAX = 2
};

// Enum PhysXVehicles.EWheelSweepType
enum class EWheelSweepType : int {
	SimpleAndComplex = 0,
	Simple = 1,
	Complex = 2,
	EWheelSweepType_MAX = 3
};

// Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : int {
	LimitedSlip_4W = 0,
	LimitedSlip_FrontDrive = 1,
	LimitedSlip_RearDrive = 2,
	Open_4W = 3,
	Open_FrontDrive = 4,
	Open_RearDrive = 5,
	EVehicleDifferential4W_MAX = 6
};

// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// Size: 0x110 (Inherited: 0xf8)
struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase {
public:

	char pad_F8[0x18]; // 0xf8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// Size: 0x10 (Inherited: 0x00)
struct FTireConfigMaterialFriction {
public:

	struct UPhysicalMaterial* PhysicalMaterial; // 0x00(0x08)
	float FrictionScale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// Size: 0x760 (Inherited: 0x748)
struct FVehicleAnimInstanceProxy : public FAnimInstanceProxy {
public:

	char pad_748[0x18]; // 0x748(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PhysXVehicles.VehicleInputRate
// Size: 0x08 (Inherited: 0x00)
struct FVehicleInputRate {
public:

	float RiseRate; // 0x00(0x04)
	float FallRate; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PhysXVehicles.ReplicatedVehicleState
// Size: 0x1c (Inherited: 0x00)
struct FReplicatedVehicleState {
public:

	float SteeringInput; // 0x00(0x04)
	float ThrottleInput; // 0x04(0x04)
	float BrakeInput; // 0x08(0x04)
	float HandbrakeInput; // 0x0c(0x04)
	int32_t CurrentGear; // 0x10(0x04)
	float MaxLeftWheelSpeed; // 0x14(0x04)
	float MaxRightWheelSpeed; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PhysXVehicles.WheelSetup
// Size: 0x20 (Inherited: 0x00)
struct FWheelSetup {
public:

	struct UClass* WheelClass; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	struct FVector AdditionalOffset; // 0x10(0x0c)
	bool bDisableSteering; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// Size: 0x38 (Inherited: 0x00)
struct FVehicleTransmissionData {
public:

	bool bUseGearAutoBox; // 0x00(0x01)
	bool bIsSwitchByVelocity; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float MaxVelocity; // 0x04(0x04)
	float GearSwitchTime; // 0x08(0x04)
	float GearAutoBoxLatency; // 0x0c(0x04)
	float FinalRatio; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FVehicleGearData> ForwardGears; // 0x18(0x10)
	float ReverseGearRatio; // 0x28(0x04)
	float NeutralGearUpRatio; // 0x2c(0x04)
	float ClutchStrength; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PhysXVehicles.VehicleGearData
// Size: 0x0c (Inherited: 0x00)
struct FVehicleGearData {
public:

	float Ratio; // 0x00(0x04)
	float DownRatio; // 0x04(0x04)
	float UpRatio; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PhysXVehicles.VehicleEngineData
// Size: 0xb8 (Inherited: 0x00)
struct FVehicleEngineData {
public:

	struct FRuntimeFloatCurve TorqueCurve; // 0x00(0xa0)
	float MaxRPM; // 0xa0(0x04)
	float MOI; // 0xa4(0x04)
	float DampingRateFullThrottle; // 0xa8(0x04)
	float DampingRateZeroThrottleClutchEngaged; // 0xac(0x04)
	float DampingRateZeroThrottleClutchDisengaged; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PhysXVehicles.VehicleDifferential4WData
// Size: 0x1c (Inherited: 0x00)
struct FVehicleDifferential4WData {
public:

	enum class EVehicleDifferential4W DifferentialType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FrontRearSplit; // 0x04(0x04)
	float FrontLeftRightSplit; // 0x08(0x04)
	float RearLeftRightSplit; // 0x0c(0x04)
	float CentreBias; // 0x10(0x04)
	float FrontBias; // 0x14(0x04)
	float RearBias; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
