
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class PhysXVehicles.TireConfig
// Size: 0x58 (Inherited: 0x38)
class UTireConfig : public UDataAsset {
public:

	float FrictionScale; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FTireConfigMaterialFriction> TireFrictionScales; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PhysXVehicles.VehicleAnimInstance
// Size: 0x9f8 (Inherited: 0x280)
class UVehicleAnimInstance : public UAnimInstance {
public:

	char pad_280[0x770]; // 0x280(0x770)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0x9f0(0x08)

	struct AWheeledVehicle* GetVehicle(); // Function PhysXVehicles.VehicleAnimInstance.GetVehicle // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PhysXVehicles.VehicleSettings
// Size: 0x70 (Inherited: 0x40)
class UVehicleSettings : public UDeveloperSettings {
public:

	enum class EVehicleSuspensionQuery SuspensionQueryType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t NonBlockingSweepHitNum; // 0x44(0x04)
	float NormalSmoothRatio; // 0x48(0x04)
	float NormalSmoothAngle; // 0x4c(0x04)
	float PointRejectAngle; // 0x50(0x04)
	float NormalRejectAngle; // 0x54(0x04)
	float HitPosDotForAdjust; // 0x58(0x04)
	float NormalDotForAdjust; // 0x5c(0x04)
	float VehicleTickFrequence; // 0x60(0x04)
	float VehicleTickFrequenceHD; // 0x64(0x04)
	bool IsUseOverlapCache; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float SuspLimitErrorRatio; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PhysXVehicles.VehicleWheel
// Size: 0x570 (Inherited: 0x30)
class UVehicleWheel : public UObject {
public:

	struct UStaticMesh* CollisionMesh; // 0x30(0x08)
	bool bDontCreateShape; // 0x38(0x01)
	bool bAutoAdjustCollisionSize; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FVector offset; // 0x3c(0x0c)
	float ShapeRadius; // 0x48(0x04)
	float ShapeWidth; // 0x4c(0x04)
	float Mass; // 0x50(0x04)
	float DampingRate; // 0x54(0x04)
	float SteerAngle; // 0x58(0x04)
	bool bAffectedByHandbrake; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct UTireType* TireType; // 0x60(0x08)
	struct UTireConfig* TireConfig; // 0x68(0x08)
	float LatStiffMaxLoad; // 0x70(0x04)
	float LatStiffValue; // 0x74(0x04)
	float LongStiffValue; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FRuntimeFloatCurve FrictionVsSlipGraph; // 0x80(0xa0)
	float SuspensionForceOffset; // 0x120(0x04)
	float SuspensionMaxRaise; // 0x124(0x04)
	float SuspensionMaxDrop; // 0x128(0x04)
	float SuspensionNaturalFrequency; // 0x12c(0x04)
	float SuspensionDampingRatio; // 0x130(0x04)
	float SuspensionNaturalFrequencyLerpValue; // 0x134(0x04)
	float SuspensionDampingRatioLerpValue; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FRuntimeFloatCurve SuspensionLengthNaturalFrequencyCurve; // 0x140(0xa0)
	struct FRuntimeFloatCurve SuspensionLengthDampingRatioCurve; // 0x1e0(0xa0)
	struct FRuntimeFloatCurve SuspensionVelocityNaturalFrequencyCurve; // 0x280(0xa0)
	struct FRuntimeFloatCurve SuspensionVelocityDampingRatioCurve; // 0x320(0xa0)
	float SuspensionSteerthreshold; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct FRuntimeFloatCurve SuspensionSteerNaturalFrequencyCurve; // 0x3c8(0xa0)
	struct FRuntimeFloatCurve SuspensionSteerDampingRatioCurve; // 0x468(0xa0)
	enum class EWheelSweepType SweepType; // 0x508(0x01)
	char pad_509[0x3]; // 0x509(0x03)
	float MaxBrakeTorque; // 0x50c(0x04)
	float MaxHandBrakeTorque; // 0x510(0x04)
	char pad_514[0x4]; // 0x514(0x04)
	struct UWheeledVehicleMovementComponent* VehicleSim; // 0x518(0x08)
	int32_t WheelIndex; // 0x520(0x04)
	float DebugLongSlip; // 0x524(0x04)
	float DebugLatSlip; // 0x528(0x04)
	float DebugNormalizedTireLoad; // 0x52c(0x04)
	char pad_530[0x4]; // 0x530(0x04)
	float DebugWheelTorque; // 0x534(0x04)
	float DebugLongForce; // 0x538(0x04)
	float DebugLatForce; // 0x53c(0x04)
	struct FVector Location; // 0x540(0x0c)
	struct FVector OldLocation; // 0x54c(0x0c)
	struct FVector Velocity; // 0x558(0x0c)
	char pad_564[0xc]; // 0x564(0x0c)

	bool IsInAir(); // Function PhysXVehicles.VehicleWheel.IsInAir // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PhysXVehicles.WheeledVehicle
// Size: 0x3e8 (Inherited: 0x3d8)
class AWheeledVehicle : public APawn {
public:

	struct USkeletalMeshComponent* Mesh; // 0x3d8(0x08)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x3e0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PhysXVehicles.VehicleMovementParams
// Size: 0x1f8 (Inherited: 0x30)
class UVehicleMovementParams : public UObject {
public:

	bool bModifyEngineSetup; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FVehicleEngineData EngineSetup; // 0x38(0xb8)
	bool bModifyDifferentialSetup; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FVehicleDifferential4WData DifferentialSetup; // 0xf4(0x1c)
	bool bModifyTransmissionSetup; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FVehicleTransmissionData TransmissionSetup; // 0x118(0x38)
	bool bModifySteeringCurve; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct FRuntimeFloatCurve SteeringCurve; // 0x158(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x2e8 (Inherited: 0x188)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent {
public:

	char pad_188[0x8]; // 0x188(0x08)
	char bDeprecatedSpringOffsetMode : 1; // 0x190(0x01)
	char bReverseAsBrake : 1; // 0x190(0x01)
	char bUseRVOAvoidance : 1; // 0x190(0x01)
	char bRawHandbrakeInput : 1; // 0x190(0x01)
	char bRawGearUpInput : 1; // 0x190(0x01)
	char bRawGearDownInput : 1; // 0x190(0x01)
	char pad_190_6 : 2; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	char bWasAvoidanceUpdated : 1; // 0x194(0x01)
	char pad_194_1 : 7; // 0x194(0x01)
	char pad_195[0x7]; // 0x195(0x07)
	float Mass; // 0x19c(0x04)
	struct TArray<struct FWheelSetup> WheelSetups; // 0x1a0(0x10)
	float DragCoefficient; // 0x1b0(0x04)
	float ChassisWidth; // 0x1b4(0x04)
	float ChassisHeight; // 0x1b8(0x04)
	float DragArea; // 0x1bc(0x04)
	float EstimatedMaxEngineSpeed; // 0x1c0(0x04)
	float MaxEngineRPM; // 0x1c4(0x04)
	float DebugDragMagnitude; // 0x1c8(0x04)
	struct FVector InertiaTensorScale; // 0x1cc(0x0c)
	float MinNormalizedTireLoad; // 0x1d8(0x04)
	float MinNormalizedTireLoadFiltered; // 0x1dc(0x04)
	float MaxNormalizedTireLoad; // 0x1e0(0x04)
	float MaxNormalizedTireLoadFiltered; // 0x1e4(0x04)
	float ThresholdLongitudinalSpeed; // 0x1e8(0x04)
	int32_t LowForwardSpeedSubStepCount; // 0x1ec(0x04)
	int32_t HighForwardSpeedSubStepCount; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct TArray<struct UVehicleWheel*> Wheels; // 0x1f8(0x10)
	char pad_208[0x18]; // 0x208(0x18)
	float RVOAvoidanceRadius; // 0x220(0x04)
	float RVOAvoidanceHeight; // 0x224(0x04)
	float AvoidanceConsiderationRadius; // 0x228(0x04)
	float RVOSteeringStep; // 0x22c(0x04)
	float RVOThrottleStep; // 0x230(0x04)
	int32_t AvoidanceUID; // 0x234(0x04)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x238(0x04)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x23c(0x04)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x240(0x04)
	float AvoidanceWeight; // 0x244(0x04)
	struct FVector PendingLaunchVelocity; // 0x248(0x0c)
	struct FReplicatedVehicleState ReplicatedState; // 0x254(0x1c)
	char pad_270[0x4]; // 0x270(0x04)
	float RawSteeringInput; // 0x274(0x04)
	float RawThrottleInput; // 0x278(0x04)
	float RawBrakeInput; // 0x27c(0x04)
	float SteeringInput; // 0x280(0x04)
	float ThrottleInput; // 0x284(0x04)
	float BrakeInput; // 0x288(0x04)
	float HandbrakeInput; // 0x28c(0x04)
	float IdleBrakeInput; // 0x290(0x04)
	float StopThreshold; // 0x294(0x04)
	float WrongDirectionThreshold; // 0x298(0x04)
	struct FVehicleInputRate ThrottleInputRate; // 0x29c(0x08)
	struct FVehicleInputRate BrakeInputRate; // 0x2a4(0x08)
	struct FVehicleInputRate HandbrakeInputRate; // 0x2ac(0x08)
	struct FVehicleInputRate SteeringInputRate; // 0x2b4(0x08)
	char pad_2BC[0x24]; // 0x2bc(0x24)
	struct AController* OverrideController; // 0x2e0(0x08)

	void SetUseAutoGears(bool bUseAuto); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PhysXVehicles.HoverVehicleMovementComponent
// Size: 0x300 (Inherited: 0x2e8)
class UHoverVehicleMovementComponent : public UWheeledVehicleMovementComponent {
public:

	float ForwardForce; // 0x2e8(0x04)
	float RightTorque; // 0x2ec(0x04)
	float SpeedUpScale; // 0x2f0(0x04)
	char pad_2F4[0xc]; // 0x2f4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x2e8 (Inherited: 0x2e8)
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent {
public:


	void SetSteerAngle(float SteerAngle, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x498 (Inherited: 0x2e8)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent {
public:

	struct FVehicleEngineData EngineSetup; // 0x2e8(0xb8)
	struct FVehicleDifferential4WData DifferentialSetup; // 0x3a0(0x1c)
	float AckermannAccuracy; // 0x3bc(0x04)
	struct FVehicleTransmissionData TransmissionSetup; // 0x3c0(0x38)
	struct FRuntimeFloatCurve SteeringCurve; // 0x3f8(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
