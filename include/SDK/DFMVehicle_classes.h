
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMVehicle.AIHelicopterWeaponInterface
// Size: 0x30 (Inherited: 0x30)
class UAIHelicopterWeaponInterface : public UInterface {
public:


	void UpdateDir(struct FVector dir, struct AActor* LockTarget); // Function DFMVehicle.AIHelicopterWeaponInterface.UpdateDir // (Native|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.AITankAimTargetComponent
// Size: 0x138 (Inherited: 0x100)
class UAITankAimTargetComponent : public UActorComponent {
public:

	struct ADFMCharacter* CurrentGunAimTarget; // 0x100(0x08)
	struct ADFMCharacter* CurrentCanonAimTarget; // 0x108(0x08)
	bool EnableFindAimTarget; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float CanonMinHitDistance; // 0x114(0x04)
	float ChangeAimTargetStep; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct ADFMAITank* DFMAITank; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)
	struct ADFMAIController* DFMAIController; // 0x130(0x08)

	void ResetCannonDesireRotation(); // Function DFMVehicle.AITankAimTargetComponent.ResetCannonDesireRotation // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.AITankPhaseComponent
// Size: 0x160 (Inherited: 0x100)
class UAITankPhaseComponent : public UActorComponent {
public:

	enum class EAITankPhase AITankPhase; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct TMap<enum class EAITankPhase, float> AITankPhaseTotalTakeHitCountMap; // 0x108(0x50)
	float AITankTotalHP; // 0x158(0x04)
	float HPPercent; // 0x15c(0x04)

	void OnTakeDamage(struct FDamageResultInfo& DamageResult); // Function DFMVehicle.AITankPhaseComponent.OnTakeDamage // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.BTTask_FollowSpline
// Size: 0xb0 (Inherited: 0x80)
class UBTTask_FollowSpline : public UGPBTTaskBase {
public:

	struct FBlackboardKeySelector SplineBBKey; // 0x80(0x28)
	float CustomAcceptableRadius; // 0xa8(0x04)
	bool EndlessLoopingPath; // 0xac(0x01)
	bool NoComebackInOpenedSpline; // 0xad(0x01)
	bool FoundNearestWaypoint; // 0xae(0x01)
	bool AutoReverse; // 0xaf(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.BTTask_MoveStraight
// Size: 0xb0 (Inherited: 0x80)
class UBTTask_MoveStraight : public UGPBTTaskBase {
public:

	struct FBlackboardKeySelector GoalKey; // 0x80(0x28)
	float CustomAcceptableRadius; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.BTTask_VehicleMoveTo
// Size: 0xf0 (Inherited: 0x80)
class UBTTask_VehicleMoveTo : public UGPBTTaskBase {
public:

	struct FBlackboardKeySelector DramaAreaBBKey; // 0x80(0x28)
	struct FBlackboardKeySelector TeamIDBBKey; // 0xa8(0x28)
	float AverageSpeed; // 0xd0(0x04)
	float SpeedMinScale; // 0xd4(0x04)
	float SpeedMaxScale; // 0xd8(0x04)
	float CustomAcceptableRadius; // 0xdc(0x04)
	float EnemyInterruptRadius; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFInteractableComponent_Vehicle
// Size: 0x5e0 (Inherited: 0x5e0)
class UDFInteractableComponent_Vehicle : public UDFInteractableComponentBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFInteractableCompProxy_Vehicle
// Size: 0x158 (Inherited: 0x128)
class UDFInteractableCompProxy_Vehicle : public UDFInteractableCompProxy {
public:

	struct FGameplayTag DriveTag; // 0x128(0x08)
	struct FGameplayTag SitInTag; // 0x130(0x08)
	struct FGameplayTag RepairTag; // 0x138(0x08)
	struct FName CachedRepairProcessCompName; // 0x140(0x08)
	struct UInteractorOperatorProcessComponent* CachedRepairProcessComp; // 0x148(0x08)
	uint64_t RepairWeaponID; // 0x150(0x08)

	bool IsLocalPlayerOnVehicle(struct ADFMVehicleBase* InVehicle); // Function DFMVehicle.DFInteractableCompProxy_Vehicle.IsLocalPlayerOnVehicle // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.BOSS04AIHelicopterConfig
// Size: 0x1d0 (Inherited: 0x30)
class UBOSS04AIHelicopterConfig : public UObject {
public:

	float DeterrenceRange; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TMap<struct FAIHelicopterTimeKey, struct FAIHelicopterSpaceData> PatrolTimeConfig; // 0x38(0x50)
	char pad_88[0x8]; // 0x88(0x08)
	struct FAIHelicopterSpaceData DefaultSpaceData; // 0x90(0x120)
	char pad_1B0[0x10]; // 0x1b0(0x10)
	struct TArray<struct FAIHelicopterAlertPath> AlertPathConfig; // 0x1c0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMAIHelicopterPilotComponent
// Size: 0x330 (Inherited: 0x100)
class UDFMAIHelicopterPilotComponent : public UActorComponent {
public:

	char pad_100[0x68]; // 0x100(0x68)
	struct ADFMAIHelicopter* VehicleOwner; // 0x168(0x08)
	struct FAIHelicopterStateParam AIHelicopterStateParam; // 0x170(0x06)
	char pad_176[0xa]; // 0x176(0x0a)
	struct FAITransportHelicopterStateParam AITransportHelicopterStateParam; // 0x180(0x80)
	char pad_200[0x80]; // 0x200(0x80)
	struct TArray<struct AActor*> Pilots; // 0x280(0x10)
	struct TMap<enum class EAITransportHeliMoveState, struct UAnimMontage*> AnimMap; // 0x290(0x50)
	struct TMap<enum class EAITransportHeliMoveState, float> AnimRootMotionScale; // 0x2e0(0x50)

	void On_RepAITransportHelicopterStateParam(); // Function DFMVehicle.DFMAIHelicopterPilotComponent.On_RepAITransportHelicopterStateParam // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.AnimNotifyState_AIHelicopterMotionWarping
// Size: 0x38 (Inherited: 0x38)
class UAnimNotifyState_AIHelicopterMotionWarping : public UAnimNotifyState {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.AnimNotify_AIHelicopterStepMarker
// Size: 0x48 (Inherited: 0x40)
class UAnimNotify_AIHelicopterStepMarker : public UAnimNotify {
public:

	enum class EAIHelicopterStepEvent Step; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMAITask_HelicopterShoot
// Size: 0x118 (Inherited: 0x78)
class UDFMAITask_HelicopterShoot : public UBTTaskNode {
public:

	float ShootingTime; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FBlackboardKeySelector MainTargetKey; // 0x80(0x28)
	struct FBlackboardKeySelector AttackerKey; // 0xa8(0x28)
	float OffsetAngle; // 0xd0(0x04)
	bool FireLockTarget; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	float VelocityPreTime; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct UCurveFloat* ZCurve; // 0xe0(0x08)
	float SafeHeight; // 0xe8(0x04)
	float InXYDis; // 0xec(0x04)
	float InZDis; // 0xf0(0x04)
	float OutXYDis; // 0xf4(0x04)
	float OutZDis; // 0xf8(0x04)
	bool bFinishBeforeStop; // 0xfc(0x01)
	bool bSelectLongestTracePath; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)
	float TraceStep; // 0x100(0x04)
	bool bAvoidObstacle; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float AvoidTraceStep; // 0x108(0x04)
	float AvoidTracePostDist; // 0x10c(0x04)
	float AvoidSuccessZDist; // 0x110(0x04)
	bool bDebug; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMBoatMovementComponent
// Size: 0x670 (Inherited: 0x188)
class UDFMBoatMovementComponent : public UPawnMovementComponent {
public:

	char pad_188[0x50]; // 0x188(0x50)
	struct FBoatBuoyancySetting BuoyancySetting; // 0x1d8(0x20)
	struct FBoatEngineSetting EngineSetting; // 0x1f8(0x18)
	struct FBoatSteeringSetting SteeringSetting; // 0x210(0x48)
	struct FBoatDampingSetting DampingSetting; // 0x258(0x3a8)
	struct FVehicleInputInterpRate ThrottleInputRate; // 0x600(0x08)
	struct FVehicleInputInterpRate SteeringInputRate; // 0x608(0x08)
	struct FVehicleInputInterpRate BrakeInputRate; // 0x610(0x08)
	float WrongDirectionThreshold; // 0x618(0x04)
	char pad_61C[0x4]; // 0x61c(0x04)
	struct AController* OverrideController; // 0x620(0x08)
	struct FBoatInputState ReplicatedState; // 0x628(0x08)
	struct FBoatInputState LocalState; // 0x630(0x08)
	uint32_t ServerReplicationPacketNo; // 0x638(0x04)
	char pad_63C[0x4]; // 0x63c(0x04)
	float RawSteeringInput; // 0x640(0x04)
	float RawThrottleInput; // 0x644(0x04)
	char pad_648[0x28]; // 0x648(0x28)

	void SetThrottleInput(float Throttle); // Function DFMVehicle.DFMBoatMovementComponent.SetThrottleInput // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMBrokenVehiclePhysicsComponent
// Size: 0x188 (Inherited: 0x100)
class UDFMBrokenVehiclePhysicsComponent : public UActorComponent {
public:

	struct FDFMBrokenVehiclePhysicsRepInfo CurrentPhysicsRepInfo; // 0x100(0x30)
	float MaxForceSyncVelocity; // 0x130(0x04)
	float MaxForceSyncDistWithVelocity; // 0x134(0x04)
	float MinForceSyncDist; // 0x138(0x04)
	float StaticPosLerpValue; // 0x13c(0x04)
	float StaticRotLerpValue; // 0x140(0x04)
	float VelocityCloseToZero; // 0x144(0x04)
	float AngularVelocityCloseToZero; // 0x148(0x04)
	float LowVelocityThreshold; // 0x14c(0x04)
	float LowVelocitySpeedLerpValue; // 0x150(0x04)
	float LowVelocityAngularSpeedLerpValue; // 0x154(0x04)
	float LowVelocityPositionCorrectLerpValue; // 0x158(0x04)
	float LowVelocityRotationCorrectLerpValue; // 0x15c(0x04)
	float HighVelocitySpeedLerpValue; // 0x160(0x04)
	float HighVelocityAngularSpeedLerpValue; // 0x164(0x04)
	float HighVelocityPositionCorrectLerpValue; // 0x168(0x04)
	float HighVelocityRotationCorrectLerpValue; // 0x16c(0x04)
	float PredictPosStrength; // 0x170(0x04)
	float PredictAngleStrength; // 0x174(0x04)
	char pad_178[0x10]; // 0x178(0x10)

	void OnRep_OnPhysicsStateChange(); // Function DFMVehicle.DFMBrokenVehiclePhysicsComponent.OnRep_OnPhysicsStateChange // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMFSM_AutoDriveVehicleAction
// Size: 0x118 (Inherited: 0x110)
class UDFMFSM_AutoDriveVehicleAction : public UDFMFSMAction {
public:

	char pad_110[0x8]; // 0x110(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMFSM_AutoDriveVehicleCheckAction
// Size: 0x120 (Inherited: 0x110)
class UDFMFSM_AutoDriveVehicleCheckAction : public UDFMFSMAction {
public:

	bool CheckBegin; // 0x110(0x01)
	bool CheckCancel; // 0x111(0x01)
	char pad_112[0xe]; // 0x112(0x0e)

	void OnTryStartAutoDraiveVehicleEvent(enum class ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject); // Function DFMVehicle.DFMFSM_AutoDriveVehicleCheckAction.OnTryStartAutoDraiveVehicleEvent // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMFSM_CharacterVehicleControlAction
// Size: 0x198 (Inherited: 0x110)
class UDFMFSM_CharacterVehicleControlAction : public UDFMFSMAction {
public:

	struct FGameplayTag EventTag; // 0x110(0x08)
	struct FName SeatName; // 0x118(0x08)
	struct FGPGameModeLogicConfig GameModeLogicConfig; // 0x120(0x30)
	float ProbeAimCooldownTime; // 0x150(0x04)
	char pad_154[0x34]; // 0x154(0x34)
	struct UClass* InitTPPAnimClass; // 0x188(0x08)
	struct UClass* InitFPPAnimClass; // 0x190(0x08)

	void SwithCameraModeBtnClicked(); // Function DFMVehicle.DFMFSM_CharacterVehicleControlAction.SwithCameraModeBtnClicked // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMFSM_CharacterVehicleInputControlAction
// Size: 0x120 (Inherited: 0x110)
class UDFMFSM_CharacterVehicleInputControlAction : public UDFMFSMAction {
public:

	struct FGameplayTag EventTag; // 0x110(0x08)
	bool bCarryBodyCheck; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)

	void TryTexiOffCar(enum class ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject); // Function DFMVehicle.DFMFSM_CharacterVehicleInputControlAction.TryTexiOffCar // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMFSM_VehicleCheckAction
// Size: 0x118 (Inherited: 0x110)
class UDFMFSM_VehicleCheckAction : public UDFMFSMAction {
public:

	struct FGameplayTag EventTag; // 0x110(0x08)

	void TryTexiCar(enum class ECharacterFSMEventDefine FSMEvent, float Value, struct UObject* EventObject); // Function DFMVehicle.DFMFSM_VehicleCheckAction.TryTexiCar // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction
// Size: 0x110 (Inherited: 0x110)
class UDFMFSM_VehicleDriveMoveAndRotateAction : public UDFMFSMAction {
public:


	void WheelieUp(enum class ECharacterFSMEventDefine FSMEvent, float Val, struct UObject* EventObject); // Function DFMVehicle.DFMFSM_VehicleDriveMoveAndRotateAction.WheelieUp // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMHelicopterMovementComponent
// Size: 0xe20 (Inherited: 0x188)
class UDFMHelicopterMovementComponent : public UPawnMovementComponent {
public:

	char pad_188[0x10]; // 0x188(0x10)
	struct AController* OverrideController; // 0x198(0x08)
	struct FHelicopterInputState ReplicatedInputState; // 0x1a0(0x14)
	struct FHelicopterInputStatePC ReplicatedInputStatePC; // 0x1b4(0x10)
	float ReplicatedLiftRpm; // 0x1c4(0x04)
	struct FHelicopterInputState LocalInputState; // 0x1c8(0x14)
	struct FHelicopterInputStatePC LocalInputStatePC; // 0x1dc(0x10)
	uint32_t ServerReplicationPacketNo; // 0x1ec(0x04)
	float RawSteeringInput; // 0x1f0(0x04)
	float RawThrottleInput; // 0x1f4(0x04)
	float RawRollInput; // 0x1f8(0x04)
	float RawUpInput; // 0x1fc(0x04)
	struct FVehicleInputInterpRate ThrottleInputRate; // 0x200(0x08)
	struct FVehicleInputInterpRate SteeringInputRate; // 0x208(0x08)
	struct FVehicleInputInterpRate RollInputRate; // 0x210(0x08)
	struct FVehicleInputInterpRate UpInputRate; // 0x218(0x08)
	char pad_220[0xc]; // 0x220(0x0c)
	float IgnoreLockHeight; // 0x22c(0x04)
	float HitDamageCDTime; // 0x230(0x04)
	float HitDamagePercent; // 0x234(0x04)
	float LinearDampWithoutDriver; // 0x238(0x04)
	float AngularDampWithoutDriver; // 0x23c(0x04)
	float LinearDampMobile; // 0x240(0x04)
	float AngularDampMobile; // 0x244(0x04)
	float HitBackAcceleration; // 0x248(0x04)
	float MinFlyHeight; // 0x24c(0x04)
	float MaxLiftRpm; // 0x250(0x04)
	float MinLiftRpm; // 0x254(0x04)
	float MaxLiftAcceleration; // 0x258(0x04)
	float MaxForwardAcceleration; // 0x25c(0x04)
	float MinForwardAccelerationWithThrottle; // 0x260(0x04)
	float MinForwardAcceleration; // 0x264(0x04)
	float MaxRightAcceleration; // 0x268(0x04)
	float FallRatio; // 0x26c(0x04)
	float MinDecreaseForceHeight; // 0x270(0x04)
	float MaxLiftHeight; // 0x274(0x04)
	float LiftChangeSpeed; // 0x278(0x04)
	float LiftChangeSpeedWithoutDriver; // 0x27c(0x04)
	float MaxRollVelocity; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UCurveFloat* RollForceCurve; // 0x288(0x08)
	struct UCurveFloat* DampingRollForceCurve; // 0x290(0x08)
	float MaxPitchVelocity; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UCurveFloat* PitchForceCurve; // 0x2a0(0x08)
	struct UCurveFloat* DampingPitchForceCurve; // 0x2a8(0x08)
	float MaxYawVelocity; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct UCurveFloat* YawForceCurve; // 0x2b8(0x08)
	struct UCurveFloat* DampingYawForceCurve; // 0x2c0(0x08)
	float StopStrength; // 0x2c8(0x04)
	struct FVector2D AimPitchRange; // 0x2cc(0x08)
	struct FVector2D FPPMoveInputRatio; // 0x2d4(0x08)
	float LinearDampPC; // 0x2dc(0x04)
	float AngularDampPC; // 0x2e0(0x04)
	float UpLiftChangeSpeedPC; // 0x2e4(0x04)
	float DownLiftChangeSpeedPC; // 0x2e8(0x04)
	float MinFlyHeightPC; // 0x2ec(0x04)
	float MaxLiftRpmPC; // 0x2f0(0x04)
	float MinLiftRpmPC; // 0x2f4(0x04)
	float MaxLiftHeightPC; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct UCurveFloat* ForwardAccelerationRatioCurvePC; // 0x300(0x08)
	struct UCurveFloat* RightAccelerationRatioCurvePC; // 0x308(0x08)
	struct UCurveFloat* UpAccelerationRatioCurvePC; // 0x310(0x08)
	struct UCurveFloat* LiftAccelerationCurvePC; // 0x318(0x08)
	float MinDecreaseForceHeightPC; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct FRuntimeFloatCurve LinearVelocityWithInputCurvePCW; // 0x328(0xa0)
	struct FRuntimeFloatCurve LinearVelocityRatioWithInputCurvePCW; // 0x3c8(0xa0)
	struct FRuntimeFloatCurve LinearVelocityWithInputCurvePCS; // 0x468(0xa0)
	struct FRuntimeFloatCurve LinearVelocityAccelerationDebuffCurvePC; // 0x508(0xa0)
	struct FRuntimeFloatCurve NormalLinearVelocityDampingCurveXPC; // 0x5a8(0xa0)
	struct FRuntimeFloatCurve NormalLinearVelocityDampingCurveYPC; // 0x648(0xa0)
	struct FRuntimeFloatCurve NormalLinearVelocityDampingCurveZPC; // 0x6e8(0xa0)
	struct FVector PitchAccelerationPosOffsetPC; // 0x788(0x0c)
	char pad_794[0x4]; // 0x794(0x04)
	struct FRuntimeFloatCurve PitchAccelerationCurvePC; // 0x798(0xa0)
	struct UCurveFloat* NormalPitchVelocityDampingCurvePC; // 0x838(0x08)
	struct FVector RollAccelerationPosOffsetPC; // 0x840(0x0c)
	char pad_84C[0x4]; // 0x84c(0x04)
	struct FRuntimeFloatCurve RollAccelerationCurvePC; // 0x850(0xa0)
	struct UCurveFloat* NormalRollVelocityDampingCurvePC; // 0x8f0(0x08)
	struct FVector YawAccelerationPosOffsetPC; // 0x8f8(0x0c)
	char pad_904[0x4]; // 0x904(0x04)
	struct FRuntimeFloatCurve YawAccelerationCurvePC; // 0x908(0xa0)
	struct UCurveFloat* NormalYawVelocityDampingCurvePC; // 0x9a8(0x08)
	struct FRuntimeFloatCurve FPPMouseInputPitchRatioPC; // 0x9b0(0xa0)
	struct FRuntimeFloatCurve FPPMouseInputRollRatioPC; // 0xa50(0xa0)
	struct FRuntimeFloatCurve FPPMouseInputYawRatioPC; // 0xaf0(0xa0)
	struct FRuntimeFloatCurve TPPMouseInputPitchRatioPC; // 0xb90(0xa0)
	struct FRuntimeFloatCurve TPPMouseInputRollRatioPC; // 0xc30(0xa0)
	struct FRuntimeFloatCurve TPPMouseInputYawRatioPC; // 0xcd0(0xa0)
	struct UCurveFloat* InverseLiftAccelerationCurvePC; // 0xd70(0x08)
	char pad_D78[0xa8]; // 0xd78(0xa8)

	void SetUpInput(float Steering); // Function DFMVehicle.DFMHelicopterMovementComponent.SetUpInput // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMMotorCycleBalancer
// Size: 0x60 (Inherited: 0x30)
class UDFMMotorCycleBalancer : public UObject {
public:

	float RollP; // 0x30(0x04)
	float RollD; // 0x34(0x04)
	float PitchP; // 0x38(0x04)
	float MaxPitchAngle; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
	struct UDFMMotorCycleMovementComponent* MovementComponet; // 0x48(0x08)
	struct UVehicleWheel* FrontWheel; // 0x50(0x08)
	struct ADFMWheeledVehicle* Vehicle; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMPhysxMultiBaseShapeComponent
// Size: 0x5b0 (Inherited: 0x578)
class UDFMPhysxMultiBaseShapeComponent : public UShapeComponent {
public:

	struct TArray<struct FBoxDataInfo> BoxDataInfos; // 0x578(0x10)
	struct TArray<struct FCapsuleDataInfo> CapsuleDataInfos; // 0x588(0x10)
	struct TArray<struct FSphereDataInfo> SphereDataInfos; // 0x598(0x10)
	float LineThickness; // 0x5a8(0x04)
	bool bAutoDynamicObstacle; // 0x5ac(0x01)
	bool bBuildContour; // 0x5ad(0x01)
	char pad_5AE[0x2]; // 0x5ae(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMRailwayActor
// Size: 0x380 (Inherited: 0x378)
class ADFMRailwayActor : public AActor {
public:

	struct USplineComponent* GameSplineRef; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMTankMovementComponent
// Size: 0x4f0 (Inherited: 0x2e8)
class UDFMTankMovementComponent : public UWheeledVehicleMovementComponent {
public:

	char pad_2E8[0x10]; // 0x2e8(0x10)
	struct UDFMWheeledVehicleMovementImplement* MovementImpl; // 0x2f8(0x08)
	struct FVehicleEngineData EngineSetup; // 0x300(0xb8)
	struct FVehicleTransmissionData TransmissionSetup; // 0x3b8(0x38)
	struct FVector2D ForwardControlRange; // 0x3f0(0x08)
	struct FVector2D ForwardFollowRange; // 0x3f8(0x08)
	struct FVector2D BackwardFollowRange; // 0x400(0x08)
	struct TArray<float> GearSwitchTimes; // 0x408(0x10)
	float BrakeWithoutInput; // 0x418(0x04)
	float ForwardWheelDampingRatio; // 0x41c(0x04)
	float SteerWheelDampingRatio; // 0x420(0x04)
	float LongStiffRotationThreshold; // 0x424(0x04)
	float MinLongStiffValue; // 0x428(0x04)
	char pad_42C[0x4]; // 0x42c(0x04)
	struct TArray<struct FTankControllInfo> ControllInfos; // 0x430(0x10)
	char pad_440[0x38]; // 0x440(0x38)
	uint32_t ServerReplicationPacketNo; // 0x478(0x04)
	char pad_47C[0x18]; // 0x47c(0x18)
	int32_t ReplicatedCurrentControllIndex; // 0x494(0x04)
	char pad_498[0x58]; // 0x498(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMTrain
// Size: 0x7c0 (Inherited: 0x3d8)
class ADFMTrain : public APawn {
public:

	char pad_3D8[0x58]; // 0x3d8(0x58)
	struct TArray<struct UPrimitiveComponent*> PhysicsWaitList; // 0x430(0x10)
	struct TMap<struct UPrimitiveComponent*, struct FName> BeforeHitCollisionInfoMap; // 0x440(0x50)
	bool bIsLocomotive; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct UDFMTrainStateComponent* TrainStateComponent; // 0x498(0x08)
	struct USceneComponent* SceneRoot; // 0x4a0(0x08)
	struct USceneComponent* BogieFrontRoot; // 0x4a8(0x08)
	struct USceneComponent* BogieBackRoot; // 0x4b0(0x08)
	struct TArray<struct ABreakablePawn*> BreakablePawns; // 0x4b8(0x10)
	struct UGPTeamComponent* TeamComp; // 0x4c8(0x08)
	char pad_4D0[0x8]; // 0x4d0(0x08)
	float EnableCollisionAfterBeginTime; // 0x4d8(0x04)
	struct FName AppearanceComponentTag; // 0x4dc(0x08)
	struct FName BlockWallComponentTag; // 0x4e4(0x08)
	struct FName OnMoveCollisionComponentTag; // 0x4ec(0x08)
	struct FName OnStopCollisionComponentTag; // 0x4f4(0x08)
	bool bUpdateSkeletonMeshCollision; // 0x4fc(0x01)
	bool bTrainOnStop; // 0x4fd(0x01)
	char pad_4FE[0x2]; // 0x4fe(0x02)
	struct FTransform ServerStopTransform; // 0x500(0x30)
	bool bTrainOnMove; // 0x530(0x01)
	bool bIsShowingHighValueBoxProxy; // 0x531(0x01)
	char pad_532[0x56]; // 0x532(0x56)
	/*struct FMulticastInlineDelegate*/char OnJointDestructDelegate[0x10]; // 0x588(0x10)
	/*struct FMulticastInlineDelegate*/char OnBreakDestructDelegate[0x10]; // 0x598(0x10)
	/*struct FMulticastInlineDelegate*/char OnEndPointStopDelegate[0x10]; // 0x5a8(0x10)
	/*struct FMulticastInlineDelegate*/char OnBoardDownDelegate[0x10]; // 0x5b8(0x10)
	/*struct FMulticastInlineDelegate*/char OnStopDelegate[0x10]; // 0x5c8(0x10)
	/*struct FMulticastInlineDelegate*/char OnTrainBreakingDelegate[0x10]; // 0x5d8(0x10)
	/*struct FMulticastInlineDelegate*/char OnClientTrainStateChangeDelegate[0x10]; // 0x5e8(0x10)
	/*struct FMulticastInlineDelegate*/char OnServerTrainStateChangeDelegate[0x10]; // 0x5f8(0x10)
	struct FVector RepLocation; // 0x608(0x0c)
	struct FRotator RepRotation; // 0x614(0x0c)
	float fStopAtDistance; // 0x620(0x04)
	float fDistanceAlongRail; // 0x624(0x04)
	char pad_628[0x20]; // 0x628(0x20)
	struct ADFMTrain* DockedBack; // 0x648(0x08)
	struct ADFMTrain* DockedFront; // 0x650(0x08)
	float TrainLength; // 0x658(0x04)
	float MaxSpeed; // 0x65c(0x04)
	float Acc; // 0x660(0x04)
	float BreakAcc; // 0x664(0x04)
	float DestructAcc; // 0x668(0x04)
	float RotationScale; // 0x66c(0x04)
	float BackDistance; // 0x670(0x04)
	float ZOffset; // 0x674(0x04)
	float BogieDistance; // 0x678(0x04)
	char pad_67C[0x4]; // 0x67c(0x04)
	struct FDFMTrainRailData TrainRailData; // 0x680(0x10)
	struct FDFMTrainUpdateMoveData TrainUpdateMoveData; // 0x690(0x14)
	float CurrentSpeed; // 0x6a4(0x04)
	float CurrentAcc; // 0x6a8(0x04)
	float fMoveDuring; // 0x6ac(0x04)
	char pad_6B0[0x4]; // 0x6b0(0x04)
	bool bToTargetAndStop; // 0x6b4(0x01)
	char pad_6B5[0x3]; // 0x6b5(0x03)
	float fRepInterval; // 0x6b8(0x04)
	float fCorrection; // 0x6bc(0x04)
	char pad_6C0[0x8]; // 0x6c0(0x08)
	struct TMap<struct TWeakObjectPtr<struct AActor>, float> HitDamageCooldown; // 0x6c8(0x50)
	float TrainHitRailwayOffset; // 0x718(0x04)
	float CharacterHitDiedOffset; // 0x71c(0x04)
	float CollisionCooldown; // 0x720(0x04)
	char pad_724[0x4]; // 0x724(0x04)
	int64_t HitAttackerValueId; // 0x728(0x08)
	float TriggerDamageAfterHitTime; // 0x730(0x04)
	float CollisionImpulseXYAngle; // 0x734(0x04)
	float CollisionImpulseZAngle; // 0x738(0x04)
	float CollisionImpulseParam; // 0x73c(0x04)
	float SetCollisionWhenAfterHitTime; // 0x740(0x04)
	char pad_744[0x4]; // 0x744(0x04)
	struct TArray<struct UClass*> DamageEffectHit; // 0x748(0x10)
	float MaxContactImpulse; // 0x758(0x04)
	float MaxRotationSpeed; // 0x75c(0x04)
	float MaxDepenetrationSpeed; // 0x760(0x04)
	char pad_764[0x4]; // 0x764(0x04)
	struct TMap<float, struct FTrainHitCharacterTimeInfo> HitCharacterTimeInfoMap; // 0x768(0x50)
	struct UInventoryMovementComponent* InventoryMovementComponent; // 0x7b8(0x08)

	void UpdateSkeletalMeshCompTickStatus(bool bIsCanTick); // Function DFMVehicle.DFMTrain.UpdateSkeletalMeshCompTickStatus // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMTrainAudioProxy
// Size: 0x380 (Inherited: 0x378)
class ADFMTrainAudioProxy : public AActor {
public:

	struct UTravelerGameAk* TravelerGameAk; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMTrainSpawner
// Size: 0x390 (Inherited: 0x378)
class ADFMTrainSpawner : public AActor {
public:

	struct UClass* BPTrainSpawnerClass; // 0x378(0x08)
	struct UClass* BPRailClass; // 0x380(0x08)
	float SpawnerPositionAlongSpline; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMTrainAnimInstance
// Size: 0x290 (Inherited: 0x280)
class UDFMTrainAnimInstance : public UAnimInstance {
public:

	struct FDFMTrainAnimInstanceProxy LocalProxy; // 0x280(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMTrainDoorComponent
// Size: 0x800 (Inherited: 0x7f0)
class UDFMTrainDoorComponent : public UStaticMeshComponent {
public:

	struct FVector2D CloseOpenLoc; // 0x7f0(0x08)
	bool AxisX; // 0x7f8(0x01)
	bool UpdateWhenArrive; // 0x7f9(0x01)
	char pad_7FA[0x6]; // 0x7fa(0x06)

	void UpdateDoorLoc(bool Open, float InterpValue); // Function DFMVehicle.DFMTrainDoorComponent.UpdateDoorLoc // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMTrainStateComponent
// Size: 0x170 (Inherited: 0x100)
class UDFMTrainStateComponent : public UActorComponent {
public:

	struct UDFMTrainStateBase* CurrentState; // 0x100(0x08)
	enum class EDFMTrainState CurrentStateEnum; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TMap<enum class EDFMTrainState, struct UDFMTrainStateBase*> StateMap; // 0x110(0x50)
	char pad_160[0x8]; // 0x160(0x08)
	struct ADFMTrain* Train; // 0x168(0x08)

	void OnRep_CurrentStateEnum(); // Function DFMVehicle.DFMTrainStateComponent.OnRep_CurrentStateEnum // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleActingComponent
// Size: 0x230 (Inherited: 0x100)
class UDFMVehicleActingComponent : public UGPPathActingCompoentBase {
public:

	bool bPlayDustEffect; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FName DustEffectId; // 0x104(0x08)
	float MaxHeightToPlayDustEffect; // 0x10c(0x04)
	bool bUsingActingSound; // 0x110(0x01)
	bool bUsingActingSpeed; // 0x111(0x01)
	char pad_112[0x2]; // 0x112(0x02)
	float ActingSpeed; // 0x114(0x04)
	int32_t ActingSpeedDirection; // 0x118(0x04)
	bool bUsingActingWheelAnim; // 0x11c(0x01)
	bool bAnimateComponent; // 0x11d(0x01)
	char pad_11E[0x2]; // 0x11e(0x02)
	struct TArray<struct FName> WheelComponentNames; // 0x120(0x10)
	struct TMap<struct FName, struct FPathFollowStickToGroundConfig> WheelComponentConfigs; // 0x130(0x50)
	char pad_180[0x10]; // 0x180(0x10)
	float ActingWheelRaduis; // 0x190(0x04)
	float ActingVehicleLength; // 0x194(0x04)
	float ActingVehicleWidth; // 0x198(0x04)
	float DeltaDegreeScale; // 0x19c(0x04)
	bool bUsingActingWheelRotation; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	float ActingWheelRotationAngleLeft; // 0x1a4(0x04)
	float ActingWheelRotationAngleRight; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct ADFMVehicleBase* OwnerVehicle; // 0x1b0(0x08)
	struct TArray<struct FWheelAsyncTraceData> WheelAsyncTraceData; // 0x1b8(0x10)
	char pad_1C8[0x58]; // 0x1c8(0x58)
	struct UFXResourceContainerComponent* DustEffect; // 0x220(0x08)
	char pad_228[0x8]; // 0x228(0x08)

	void TickDustEffect(); // Function DFMVehicle.DFMVehicleActingComponent.TickDustEffect // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleADS
// Size: 0x3d8 (Inherited: 0x378)
class ADFMVehicleADS : public AActor {
public:

	char pad_378[0x8]; // 0x378(0x08)
	float InterceptRadius; // 0x380(0x04)
	struct FVector InterceptFirePos; // 0x384(0x0c)
	struct FName InterceptEffectId; // 0x390(0x08)
	struct FName FireEffectID; // 0x398(0x08)
	struct USphereComponent* Trigger; // 0x3a0(0x08)
	bool bIsDisable; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char BeIntercepted2DAudio[0x28]; // 0x3b0(0x28)

	void SetInterceptDataInternal(float NewInterceptRadius, struct FVector NewInterceptFirePos); // Function DFMVehicle.DFMVehicleADS.SetInterceptDataInternal // (Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAIController
// Size: 0x4b8 (Inherited: 0x480)
class ADFMVehicleAIController : public AAIController {
public:

	char pad_480[0x8]; // 0x480(0x08)
	struct UGPAIBehaviorTreeComponent* GPAIBehaviorTreeComponent; // 0x488(0x08)
	struct ADramaArea* RelatedDramaArea; // 0x490(0x08)
	struct UBehaviorTree* StandaloneDramaBTAsset; // 0x498(0x08)
	bool bDramaBehaviorNeedRestart; // 0x4a0(0x01)
	char pad_4A1[0x17]; // 0x4a1(0x17)

	void UnBindDrama(); // Function DFMVehicle.DFMVehicleAIController.UnBindDrama // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAnimInstance
// Size: 0x12d0 (Inherited: 0x9f8)
class UDFMVehicleAnimInstance : public UVehicleAnimInstance {
public:

	struct FDFMVehicleAnimInstanceProxy LocalProxy; // 0x9f8(0xa8)
	struct TMap<struct FName, struct UAnimSequence*> GetOnSeatAnimationMap; // 0xaa0(0x50)
	struct TMap<struct FName, struct UAnimSequence*> GetOffSeatAnimationMap; // 0xaf0(0x50)
	struct UAimOffsetBlendSpace* SteeringWheelAnimation; // 0xb40(0x08)
	float SteeringWheelRotLerpSpeed; // 0xb48(0x04)
	bool AnimLodBigger0; // 0xb4c(0x01)
	bool AnimLodBigger1; // 0xb4d(0x01)
	char pad_B4E[0x2]; // 0xb4e(0x02)
	struct UDFMVehicleAnimInteractorComponent* VehicleAnimInteractorComp; // 0xb50(0x08)
	char pad_B58[0x778]; // 0xb58(0x778)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAnimInteractorComponent
// Size: 0x2c0 (Inherited: 0x140)
class UDFMVehicleAnimInteractorComponent : public UGPVehicleAnimDataComponent {
public:

	enum class EAnimVehicleDoorState VehicleDoor_FLState; // 0x140(0x01)
	enum class EAnimVehicleDoorState VehicleDoor_FRState; // 0x141(0x01)
	bool VehicleWindowClosed; // 0x142(0x01)
	enum class EAnimVehicleDoorState VehicleDoor_BLState; // 0x143(0x01)
	enum class EAnimVehicleDoorState VehicleDoor_BRState; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	/*struct FMulticastInlineDelegate*/char OnFLWindow_OnRollDown[0x10]; // 0x148(0x10)
	/*struct FMulticastInlineDelegate*/char OnFRWindow_OnRollDown[0x10]; // 0x158(0x10)
	bool DisableGetOnAnimation; // 0x168(0x01)
	char pad_169[0xa7]; // 0x169(0xa7)
	struct TMap<struct FName, struct UAnimSequence*> GetOnSeatAnimationMap; // 0x210(0x50)
	struct TMap<struct FName, struct UAnimSequence*> GetOffSeatAnimationMap; // 0x260(0x50)
	char pad_2B0[0x10]; // 0x2b0(0x10)

	void OnRep_DoorStateChange(); // Function DFMVehicle.DFMVehicleAnimInteractorComponent.OnRep_DoorStateChange // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAssembledBoxPartComponent
// Size: 0x610 (Inherited: 0x590)
class UDFMVehicleAssembledBoxPartComponent : public UBoxComponent {
public:

	char pad_590[0x20]; // 0x590(0x20)
	struct FVehiclePartInfo PartInfo; // 0x5b0(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleHitPartInfo
// Size: 0x100 (Inherited: 0x30)
class UDFMVehicleHitPartInfo : public UObject {
public:

	char pad_30[0x20]; // 0x30(0x20)
	struct FName PartName; // 0x50(0x08)
	struct FVehiclePartInfo PartInfo; // 0x58(0x60)
	struct FVector BoxExtent; // 0xb8(0x0c)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FTransform BoxRelativeTransform; // 0xd0(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAssembledComponent
// Size: 0x700 (Inherited: 0x590)
class UDFMVehicleAssembledComponent : public UBoxComponent {
public:

	/*struct TMap<struct FName, struct TScriptInterface<IDFMVehicleAssembledPartInterface>>*/char DynamicVehiclePart[0x50]; // 0x590(0x50)
	struct TMap<struct FName, struct FVehiclePartInfo> VehiclePartInfos; // 0x5e0(0x50)
	struct TArray<struct UDFMVehicleHitPartInfo*> VehicleHitPartInfos; // 0x630(0x10)
	struct FTransform BoxLocalTransform; // 0x640(0x30)
	bool IsUsingCustomBound; // 0x670(0x01)
	char pad_671[0xf]; // 0x671(0x0f)
	struct FTransform RenderBoundTransform; // 0x680(0x30)
	struct FBox CustomBoundBox; // 0x6b0(0x1c)
	char pad_6CC[0x4]; // 0x6cc(0x04)
	struct ADFMWheeledVehicle* OwnerVehicle; // 0x6d0(0x08)
	char pad_6D8[0x8]; // 0x6d8(0x08)
	struct FTimerHandle AutoGetOffVehicleTimer; // 0x6e0(0x08)
	struct FTimerHandle CheckServerDeployStateTimer; // 0x6e8(0x08)
	float CheckServerDeployStateInterval; // 0x6f0(0x04)
	char pad_6F4[0xc]; // 0x6f4(0x0c)

	void OnCheckServerDeployStateTimer(); // Function DFMVehicle.DFMVehicleAssembledComponent.OnCheckServerDeployStateTimer // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAssembledPartInterface
// Size: 0x30 (Inherited: 0x30)
class UDFMVehicleAssembledPartInterface : public UInterface {
public:


	void ClearBrokenEffects(); // Function DFMVehicle.DFMVehicleAssembledPartInterface.ClearBrokenEffects // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAssembledScenePartComponent
// Size: 0x2e0 (Inherited: 0x240)
class UDFMVehicleAssembledScenePartComponent : public USceneComponent {
public:

	char pad_240[0x20]; // 0x240(0x20)
	struct FVehiclePartInfo PartInfo; // 0x260(0x60)
	struct FVector BoxExtent; // 0x2c0(0x0c)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct ADFMVehicleBase* OwnerVehicle; // 0x2d0(0x08)
	char pad_2D8[0x8]; // 0x2d8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleCollisionComponent
// Size: 0x730 (Inherited: 0x590)
class UDFMVehicleCollisionComponent : public UBoxComponent {
public:

	bool bStopCheckingWhenDisableSimulatingPhysics; // 0x590(0x01)
	char pad_591[0x3]; // 0x591(0x03)
	float CollisionDecelerateDelay; // 0x594(0x04)
	float CollisionParam; // 0x598(0x04)
	float CollisionAngle; // 0x59c(0x04)
	float CollisionCooldownMesh; // 0x5a0(0x04)
	float CollisionBreakableVelocity; // 0x5a4(0x04)
	float CollisionCooldownVehicle; // 0x5a8(0x04)
	float CollisionHurtRatio; // 0x5ac(0x04)
	float HitCharacterCoolDownTime; // 0x5b0(0x04)
	float MinVelocityToHitCharacter; // 0x5b4(0x04)
	float HitCharacterImpulseAngle; // 0x5b8(0x04)
	float HitCharacterImpulseFactor; // 0x5bc(0x04)
	struct ADFMVehicleBase* OwnerVehicle; // 0x5c0(0x08)
	struct TMap<struct AActor*, float> HitDamageCooldown; // 0x5c8(0x50)
	struct TArray<struct AGPCharacterBase*> LockedCharacters; // 0x618(0x10)
	char pad_628[0x40]; // 0x628(0x40)
	struct TMap<struct ADFMCharacter*, float> HitCharacterMap; // 0x668(0x50)
	char pad_6B8[0x78]; // 0x6b8(0x78)

	void ServerMakeDamageToActor(struct AActor* TargetActor, struct UPrimitiveComponent* TargetComp, int32_t TargetBodyIndex, struct FVector HitPoint, float VelocitySize); // Function DFMVehicle.DFMVehicleCollisionComponent.ServerMakeDamageToActor // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleDataCollectionSubsystem
// Size: 0x38 (Inherited: 0x38)
class UDFMVehicleDataCollectionSubsystem : public UWorldSubsystem {
public:


	void OnPostMakeDamageNtf(struct FDamageResultInfo& DamageResult); // Function DFMVehicle.DFMVehicleDataCollectionSubsystem.OnPostMakeDamageNtf // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleDestroyDestructibleComponent
// Size: 0x590 (Inherited: 0x590)
class UDFMVehicleDestroyDestructibleComponent : public UBoxComponent {
public:


	void OnComponentBeginOverlapTriggered(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function DFMVehicle.DFMVehicleDestroyDestructibleComponent.OnComponentBeginOverlapTriggered // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleDirectionSplineComponent
// Size: 0x6a0 (Inherited: 0x650)
class UDFMVehicleDirectionSplineComponent : public USplineComponent {
public:

	int32_t DebugDriveIndex; // 0x650(0x04)
	struct FName InstancedMeshName; // 0x654(0x08)
	struct FName SkeletalMeshName; // 0x65c(0x08)
	bool IsLeftDirection; // 0x664(0x01)
	char pad_665[0x3]; // 0x665(0x03)
	int32_t MeshNum; // 0x668(0x04)
	struct FVector MeshScale; // 0x66c(0x0c)
	struct TArray<struct FDirectionControllInfo> ControllInfos; // 0x678(0x10)
	char pad_688[0x18]; // 0x688(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleGlobalUtils
// Size: 0x30 (Inherited: 0x30)
class UDFMVehicleGlobalUtils : public UObject {
public:


	struct TMap<struct FString, struct FName> STATIC_GetSkillWidgetConfig(struct ADFMVehicleBase* Vehicle, struct AActor* CHARACTER); // Function DFMVehicle.DFMVehicleGlobalUtils.GetSkillWidgetConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleHitEffectComponent
// Size: 0x770 (Inherited: 0x730)
class UDFMVehicleHitEffectComponent : public UDFMHitEffectComponent {
public:

	struct TArray<struct FVehicleBeHitCameraShakeInfo> CameraShakeInfos; // 0x730(0x10)
	float HeavyDamageRatio; // 0x740(0x04)
	struct FVehicleBlockGunSwayInfo BlockGunSwayInfo; // 0x744(0x14)
	/*struct FMulticastInlineDelegate*/char OnVehicleHeavyDamage[0x10]; // 0x758(0x10)
	char pad_768[0x8]; // 0x768(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleMovementComponentNW
// Size: 0x540 (Inherited: 0x2e8)
class UDFMVehicleMovementComponentNW : public UWheeledVehicleMovementComponent {
public:

	char pad_2E8[0x10]; // 0x2e8(0x10)
	struct UDFMWheeledVehicleMovementImplement* MovementImpl; // 0x2f8(0x08)
	bool IsSpecialSteerMode; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	float SpecialSteerModeSwitchTime; // 0x304(0x04)
	bool IsSpecialSteerMannualGear; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	int32_t SpecialSteerGearNum; // 0x30c(0x04)
	struct TArray<int32_t> ReverseSteerWheels; // 0x310(0x10)
	struct FVehicleEngineData EngineSetup; // 0x320(0xb8)
	struct FVehicleDifferentialNWData DifferentialSetup; // 0x3d8(0x10)
	struct FVehicleTransmissionData TransmissionSetup; // 0x3e8(0x38)
	struct FRuntimeFloatCurve SteeringCurve; // 0x420(0xa0)
	struct TArray<float> GearSwitchTimes; // 0x4c0(0x10)
	float LongStiffRotationThreshold; // 0x4d0(0x04)
	float MinLongStiffValue; // 0x4d4(0x04)
	char pad_4D8[0x18]; // 0x4d8(0x18)
	struct FReplicatedVehicleNWState ReplicatedNWState; // 0x4f0(0x20)
	char pad_510[0x30]; // 0x510(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleMovementInterface
// Size: 0x30 (Inherited: 0x30)
class UDFMVehicleMovementInterface : public UInterface {
public:


	bool IsRollover(); // Function DFMVehicle.DFMVehicleMovementInterface.IsRollover // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleMultiInteractor
// Size: 0x7c0 (Inherited: 0x770)
class ADFMVehicleMultiInteractor : public AMultiInteractorBase {
public:

	char pad_770[0x50]; // 0x770(0x50)

	void RefreshInteractPanel(); // Function DFMVehicle.DFMVehicleMultiInteractor.RefreshInteractPanel // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehiclePathFollowComponent
// Size: 0x1f8 (Inherited: 0x100)
class UDFMVehiclePathFollowComponent : public UActorComponent {
public:

	/*struct FMulticastInlineDelegate*/char OnMoveFollow[0x10]; // 0x100(0x10)
	/*struct FMulticastInlineDelegate*/char OnStopFollow[0x10]; // 0x110(0x10)
	/*struct FMulticastInlineDelegate*/char OnPauseFollow[0x10]; // 0x120(0x10)
	/*struct FMulticastInlineDelegate*/char OnResumeFollow[0x10]; // 0x130(0x10)
	/*struct FMulticastInlineDelegate*/char OnBlockedFollow[0x10]; // 0x140(0x10)
	bool bAutoMoveWhenBegin; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	struct FName DefaultSplineTag; // 0x154(0x08)
	bool bMoveLoopAlongDefaultSpline; // 0x15c(0x01)
	bool bAutoResetWhenBlocked; // 0x15d(0x01)
	char pad_15E[0x2]; // 0x15e(0x02)
	float BlockedDetectionDuration; // 0x160(0x04)
	float HeightToPlaceVehicle; // 0x164(0x04)
	float SteeringInputInterpSpeed; // 0x168(0x04)
	float ThrottleInputInterpSpeed; // 0x16c(0x04)
	bool bLimitMaxSpeedWhenMoving; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	float MaxSpeedWhenMoving; // 0x174(0x04)
	bool bInterpolateMovingSpeed; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	float InterpolatedSpeedOfMovingSpeed; // 0x17c(0x04)
	bool bLimitMaxSpeedWhenTurning; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	float MaxSpeedWhenTurning; // 0x184(0x04)
	float MinSpeedWhenTurning; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct ADFMVehicleBase* OwnerVehicle; // 0x190(0x08)
	struct FDFMVhiclePathFollowMoveRequestParam CurrentMoveParam; // 0x198(0x10)
	struct TArray<struct FDFMVehiclePathFollowWayPointData> CollectedWayPointDataArray; // 0x1a8(0x10)
	char pad_1B8[0x40]; // 0x1b8(0x40)

	bool RequestToStop(); // Function DFMVehicle.DFMVehiclePathFollowComponent.RequestToStop // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehiclePathFollowingComponent
// Size: 0x330 (Inherited: 0x2a8)
class UDFMVehiclePathFollowingComponent : public UPathFollowingComponent {
public:

	struct FPIDData VelocityController; // 0x2a8(0x1c)
	struct FPIDData HeadingController; // 0x2c4(0x1c)
	float MaxAISpeed; // 0x2e0(0x04)
	float MaxTurningRadius; // 0x2e4(0x04)
	float TurningAroundLimit; // 0x2e8(0x04)
	bool DebugOutputPID; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	float LinearVelocityLerp; // 0x2f0(0x04)
	float AngleVelocityLerp; // 0x2f4(0x04)
	char pad_2F8[0x38]; // 0x2f8(0x38)

	void SetPathFollowingVelocity(float Velocity); // Function DFMVehicle.DFMVehiclePathFollowingComponent.SetPathFollowingVelocity // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleNavmeshBlockerComponent
// Size: 0x5c0 (Inherited: 0x590)
class UVehicleNavmeshBlockerComponent : public UBoxComponent {
public:

	char pad_590[0x30]; // 0x590(0x30)

	void SetCanAffectNavigation(bool Value); // Function DFMVehicle.VehicleNavmeshBlockerComponent.SetCanAffectNavigation // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehiclePathFollowPath
// Size: 0x3b0 (Inherited: 0x378)
class ADFMVehiclePathFollowPath : public AActor {
public:

	struct USplineComponent* Spline; // 0x378(0x08)
	struct UTextRenderComponent* PathText; // 0x380(0x08)
	struct TArray<struct ADFMVehiclePathFollowWayPoint*> WayPoints; // 0x388(0x10)
	struct FInterpCurveFloat GroundHeightTable; // 0x398(0x18)

	struct ADFMVehiclePathFollowWayPoint* GetWayPointActor(int32_t Index); // Function DFMVehicle.DFMVehiclePathFollowPath.GetWayPointActor // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehiclePathFollowWayPoint
// Size: 0x3a8 (Inherited: 0x378)
class ADFMVehiclePathFollowWayPoint : public AActor {
public:

	struct FDFMVehiclePathFollowWayPointData WayPointData; // 0x378(0x2c)
	char pad_3A4[0x4]; // 0x3a4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehiclePreviewPlacementActor
// Size: 0x4a0 (Inherited: 0x378)
class ADFMVehiclePreviewPlacementActor : public AActor {
public:

	struct FLinearColor ValidColor; // 0x378(0x10)
	struct FLinearColor InValidColor; // 0x388(0x10)
	struct UMaterial* PreviewMaterial; // 0x398(0x08)
	struct TArray<struct UClass*> ClassesForbidToPlace; // 0x3a0(0x10)
	struct UPrimitiveComponent* PrimitiveComp; // 0x3b0(0x08)
	char pad_3B8[0x20]; // 0x3b8(0x20)
	struct FVehiclePlacementPreviewActorInitParameter InitParameter; // 0x3d8(0x48)
	char pad_420[0x78]; // 0x420(0x78)
	struct AActor* PlaceTarget; // 0x498(0x08)

	bool IsInValidPosition(); // Function DFMVehicle.DFMVehiclePreviewPlacementActor.IsInValidPosition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleResourceManager
// Size: 0x108 (Inherited: 0x38)
class UDFMVehicleResourceManager : public UWorldSubsystem {
public:

	struct TMap<struct FSoftObjectPath, struct FDFMVehicleLoadedResourceInfo> LoadedResourceMap; // 0x38(0x50)
	struct TMap<struct FSoftObjectPath, struct FDFMVehicleResourceDelegateInfo> ResourceDelegateMap; // 0x88(0x50)
	struct TArray<uint64_t> LoadHandlerArray; // 0xd8(0x10)
	char pad_E8[0x20]; // 0xe8(0x20)

	void OnResourceLoadComplete(struct FSoftObjectPath& ResourcePath); // Function DFMVehicle.DFMVehicleResourceManager.OnResourceLoadComplete // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSequenceBindingComponent
// Size: 0x1b0 (Inherited: 0x188)
class UDFMVehicleSequenceBindingComponent : public UGPSequenceBindingComponent {
public:

	struct UDFMVehicleActingComponent* ActingComponent; // 0x188(0x08)
	char pad_190[0x20]; // 0x190(0x20)

	void StartAutoDrive(float ExpectVelocity, float ExpectDuration); // Function DFMVehicle.DFMVehicleSequenceBindingComponent.StartAutoDrive // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSkeletalMeshComponent
// Size: 0xff0 (Inherited: 0xf28)
class UDFMVehicleSkeletalMeshComponent : public USkeletalMeshComponent {
public:

	char pad_F28[0x20]; // 0xf28(0x20)
	struct TArray<struct FVehicleBoneSyncInfo> BoneSyncInfos; // 0xf48(0x10)
	struct TArray<struct UDFMVehicleAssembleExtensionBase*> AssembleExtensionArray; // 0xf58(0x10)
	struct FVehiclePartInfo PartInfo; // 0xf68(0x60)
	bool bSkipOverlapChecksInClient; // 0xfc8(0x01)
	bool bUseSimpleBoxOverlap; // 0xfc9(0x01)
	char pad_FCA[0x26]; // 0xfca(0x26)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSkillComponent
// Size: 0x1c8 (Inherited: 0x100)
class UDFMVehicleSkillComponent : public UActorComponent {
public:

	char pad_100[0x68]; // 0x100(0x68)
	struct TArray<struct UDFMVehicleSkillInstance*> SKillInstances; // 0x168(0x10)
	struct TMap<struct FString, struct UDFMVehicleSkillInstance*> LocalSkillInstance; // 0x178(0x50)

	void ServerInterruptVehicleSkills(struct TArray<struct FString> KeyArray); // Function DFMVehicle.DFMVehicleSkillComponent.ServerInterruptVehicleSkills // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSkillInstance
// Size: 0x70 (Inherited: 0x30)
class UDFMVehicleSkillInstance : public UObject {
public:

	int32_t SkillId; // 0x30(0x04)
	bool bIsPassiveSkill; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FName SeatName; // 0x38(0x08)
	enum class EDFMVehicleSkillStatus SKillStatus; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float RemainSkillDuration; // 0x44(0x04)
	float RemainCoolDownTime; // 0x48(0x04)
	int32_t RemainSkillNum; // 0x4c(0x04)
	bool bIsDisable; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UDFMVehicleSkillExecutor* SkillExecutor; // 0x58(0x08)
	struct ADFMVehicleBase* OwnVehicle; // 0x60(0x08)
	struct AGPCharacter* LastSkillUser; // 0x68(0x08)

	void OnRep_SkillStatus(enum class EDFMVehicleSkillStatus OldSkillStatus); // Function DFMVehicle.DFMVehicleSkillInstance.OnRep_SkillStatus // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSkillProjectileView
// Size: 0x260 (Inherited: 0x240)
class UDFMVehicleSkillProjectileView : public USceneComponent {
public:

	struct FName TrailEffectId; // 0x240(0x08)
	float TrailSmokeProbability; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct UFXResourceContainerComponent* TrailEffect; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSkinImplement
// Size: 0xa8 (Inherited: 0x30)
class UDFMVehicleSkinImplement : public UObject {
public:

	char pad_30[0x78]; // 0x30(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleStateControllComponent
// Size: 0x170 (Inherited: 0x100)
class UDFMVehicleStateControllComponent : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)
	struct TArray<struct UPrimitiveComponent*> AllCollisions; // 0x108(0x10)
	char pad_118[0x10]; // 0x118(0x10)
	struct TArray<struct UMeshComponent*> AllMeshes; // 0x128(0x10)
	struct TArray<struct UActorComponent*> AllComponents; // 0x138(0x10)
	char pad_148[0x28]; // 0x148(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSupplyStation
// Size: 0x430 (Inherited: 0x3d8)
class ADFMVehicleSupplyStation : public APawn {
public:

	char pad_3D8[0x20]; // 0x3d8(0x20)
	float CdTime; // 0x3f8(0x04)
	float MaxSupplyTime; // 0x3fc(0x04)
	char pad_400[0x20]; // 0x400(0x20)
	struct UStaticMeshComponent* MeshRoot; // 0x420(0x08)
	enum class ETacticalEquipmentMarkerType ChildMarkerType; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)

	void OnEndOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function DFMVehicle.DFMVehicleSupplyStation.OnEndOverlap // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleHUDDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleHUDDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAudioDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleAudioDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAnimationDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleAnimationDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleDataConfigDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleDataConfigDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleEffectDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleEffectDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSkillConfigDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleSkillConfigDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSkillDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleSkillDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleInputRedirectionDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleInputRedirectionDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehiclePhysicsDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehiclePhysicsDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleKeyTipsDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleKeyTipsDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleCameraDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleCameraDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleWeaponDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleWeaponDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMWheeledVehicle4WDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMWheeledVehicle4WDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMWheeledVehicleNWDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMWheeledVehicleNWDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMTankDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMTankDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleWaterInteractionDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleWaterInteractionDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleInteractorDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleInteractorDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehiclePhysicsReplicationDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehiclePhysicsReplicationDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSkinDataConfigTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleSkinDataConfigTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSkinAppearanceDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleSkinAppearanceDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleExpDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleExpDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleHealthDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UDFMVehicleHealthDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleThermalSmoke
// Size: 0x3a8 (Inherited: 0x378)
class ADFMVehicleThermalSmoke : public AActor {
public:

	float ShieldRadius; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct USphereComponent* Trigger; // 0x380(0x08)
	float CurrentShieldRadius; // 0x388(0x04)
	char pad_38C[0x14]; // 0x38c(0x14)
	struct AGPCharacter* OwnerCharacter; // 0x3a0(0x08)

	void OnTriggerEndOverlapped(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function DFMVehicle.DFMVehicleThermalSmoke.OnTriggerEndOverlapped // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleTrackSplineComponent
// Size: 0x700 (Inherited: 0x650)
class UDFMVehicleTrackSplineComponent : public USplineComponent {
public:

	bool bIsUsedForPathFollow; // 0x650(0x01)
	char pad_651[0x3]; // 0x651(0x03)
	struct FName InstancedMeshName; // 0x654(0x08)
	struct FName PreSplineTrackName; // 0x65c(0x08)
	int32_t StartSyncIndex; // 0x664(0x04)
	float WheelRadius; // 0x668(0x04)
	char pad_66C[0x4]; // 0x66c(0x04)
	struct TArray<struct FName> SocketNames; // 0x670(0x10)
	struct TArray<int32_t> SocketIndexs; // 0x680(0x10)
	float TrackSize; // 0x690(0x04)
	char pad_694[0x4]; // 0x694(0x04)
	struct TArray<struct FVector> TrackOffsetVectors; // 0x698(0x10)
	bool IsLastTrackSpline; // 0x6a8(0x01)
	bool IsFollowBone; // 0x6a9(0x01)
	char pad_6AA[0x2]; // 0x6aa(0x02)
	struct FName SkeletalMeshName; // 0x6ac(0x08)
	char pad_6B4[0x4c]; // 0x6b4(0x4c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleWaterMaskComponent
// Size: 0x5a0 (Inherited: 0x560)
class UDFMVehicleWaterMaskComponent : public UPrimitiveComponent {
public:

	struct FVector MaskExtent; // 0x560(0x0c)
	char pad_56C[0x1c]; // 0x56c(0x1c)
	struct ADFMVehicleBase* OwnerVehicle; // 0x588(0x08)
	char pad_590[0x10]; // 0x590(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleWeaponImplement
// Size: 0x98 (Inherited: 0x38)
class UDFMVehicleWeaponImplement : public UGPVehicleWeaponImplement {
public:

	char pad_38[0x60]; // 0x38(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMWheeledInstancedStaticMeshComponent
// Size: 0xa00 (Inherited: 0x9a8)
class UDFMWheeledInstancedStaticMeshComponent : public UInstancedStaticMeshComponent {
public:

	char pad_9A8[0x28]; // 0x9a8(0x28)
	bool IsNeedTickWithoutPhysics; // 0x9d0(0x01)
	char pad_9D1[0x7]; // 0x9d1(0x07)
	struct TArray<struct FTransform> InitWheelTransforms; // 0x9d8(0x10)
	char pad_9E8[0x18]; // 0x9e8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DramaAreaVehicle
// Size: 0x4e8 (Inherited: 0x4d8)
class ADramaAreaVehicle : public ADramaArea {
public:

	struct TArray<struct FRaidVehicleDramaInfo> VehicleDifficulties; // 0x4d8(0x10)

	void SpawnVehicleAI(); // Function DFMVehicle.DramaAreaVehicle.SpawnVehicleAI // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.InteractorVehicleExecutor
// Size: 0xe0 (Inherited: 0xd0)
class UInteractorVehicleExecutor : public UInteractExecutor {
public:

	struct FGameplayTag DriveCarTag; // 0xd0(0x08)
	struct FGameplayTag SitInCarTag; // 0xd8(0x08)

	bool IsSeatFull(struct AActor* Interactor, int32_t Index); // Function DFMVehicle.InteractorVehicleExecutor.IsSeatFull // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.LaserPointerLogic
// Size: 0x190 (Inherited: 0x100)
class ULaserPointerLogic : public UActorComponent {
public:

	enum class EStingerMissileLockingState LaserPointerPerformState; // 0x100(0x01)
	enum class EStingerMissileLockingState ClientLaserPointerLockingState; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)
	struct TArray<uint64_t> LaserPointerLockers; // 0x108(0x10)
	struct TArray<struct TWeakObjectPtr<struct AGPCharacter>> LaserPointerLockerActors; // 0x118(0x10)
	struct TWeakObjectPtr<struct ADFMVehicleBase> VehicleOwner; // 0x128(0x08)
	struct TArray<struct FVehicleLockInfo> LockInfos; // 0x130(0x10)
	struct TMap<struct UObject*, struct FVehiclePointerInfo> PointerDatas; // 0x140(0x50)

	void RefreshLockingState(); // Function DFMVehicle.LaserPointerLogic.RefreshLockingState // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.RaidBoatCollisionComponent
// Size: 0x640 (Inherited: 0x590)
class URaidBoatCollisionComponent : public UBoxComponent {
public:

	float HitCharacterCoolDownTime; // 0x590(0x04)
	float MinVelocityToHitCharacter; // 0x594(0x04)
	float VehicleVelocity; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct TArray<struct AGPCharacterBase*> LockedCharacters; // 0x5a0(0x10)
	char pad_5B0[0x38]; // 0x5b0(0x38)
	struct TMap<struct ADFMCharacter*, float> HitCharacterMap; // 0x5e8(0x50)
	char pad_638[0x8]; // 0x638(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.SOLTrainComponent
// Size: 0x1c8 (Inherited: 0x100)
class USOLTrainComponent : public UActorComponent {
public:

	enum class EDFMMapIconType TrainIconType; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float IconRangeSize; // 0x104(0x04)
	float CheckBroadcastStopTickMaxTime; // 0x108(0x04)
	float CheckStopBroadcastFrequencyTime; // 0x10c(0x04)
	struct ADFMTrain* DFMTrain; // 0x110(0x08)
	bool bAlreadyBeginPlay; // 0x118(0x01)
	bool bNeedBroadcastStopStateWhenBeginPlay; // 0x119(0x01)
	char pad_11A[0x2]; // 0x11a(0x02)
	float StartCheckBroadcastTime; // 0x11c(0x04)
	struct USOLEventMapIconViewController* IconController; // 0x120(0x08)
	struct USkeletalMeshComponent* TrainCarriage; // 0x128(0x08)
	struct UDFMTrainAnimInstance* TrainAnimInstance; // 0x130(0x08)
	struct TArray<struct FDFMTrainDoorConfig> TrainDoorConfigs; // 0x138(0x10)
	struct TMap<struct FString, struct UBoxComponent*> DoorCollisions; // 0x148(0x50)
	float DoorMoveTime; // 0x198(0x04)
	bool DoorOpen; // 0x19c(0x01)
	char pad_19D[0x7]; // 0x19d(0x07)
	float ApproachTime; // 0x1a4(0x04)
	struct UGPAudioEventAsset* ApproachAudio; // 0x1a8(0x08)
	bool bEnableRunningAudioFollow; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct ADFMTrainAudioProxy* RunningAudioProxy; // 0x1b8(0x08)
	char pad_1C0[0x8]; // 0x1c0(0x08)

	void ToggleLocomotiveSound(bool bToggle); // Function DFMVehicle.SOLTrainComponent.ToggleLocomotiveSound // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.TrailsMeshActor
// Size: 0x380 (Inherited: 0x378)
class ATrailsMeshActor : public AActor {
public:

	struct UTrailsMeshComponent* TrailsMeshComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.TrailsMeshComponent
// Size: 0x2b0 (Inherited: 0x240)
class UTrailsMeshComponent : public USceneComponent {
public:

	struct UMaterialInterface* TrailMaterial; // 0x240(0x08)
	char pad_248[0x68]; // 0x248(0x68)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleAreaDrama
// Size: 0x4e8 (Inherited: 0x4d8)
class AVehicleAreaDrama : public ADramaArea {
public:

	struct TArray<struct FVehicleyDramaDifficultInfo> DifficultyInfos; // 0x4d8(0x10)

	void SpawnVehicleAI(); // Function DFMVehicle.VehicleAreaDrama.SpawnVehicleAI // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleFrontendActor
// Size: 0x3b8 (Inherited: 0x378)
class AVehicleFrontendActor : public AActor {
public:

	char pad_378[0x8]; // 0x378(0x08)
	struct UVehicleFrontendContext* Context; // 0x380(0x08)
	struct UVehicleFrontendLoadServices* LoadServices; // 0x388(0x08)
	struct FVehicleFrontendBuildTree BuildTree; // 0x390(0x18)
	/*struct FDelegate*/char callback[0x10]; // 0x3a8(0x10)

	void Setup(/*uint64_t InID, struct FDelegate InCallback*/); // Function DFMVehicle.VehicleFrontendActor.Setup // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleFrontendContext
// Size: 0x50 (Inherited: 0x30)
class UVehicleFrontendContext : public UObject {
public:

	uint64_t SkinId; // 0x30(0x08)
	uint64_t SkinAppearanceId; // 0x38(0x08)
	struct TArray<struct FVehicleFrontendContextNode> Nodes; // 0x40(0x10)

	void SetSkin(uint64_t InSkinId); // Function DFMVehicle.VehicleFrontendContext.SetSkin // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleFrontendContextHelper
// Size: 0x30 (Inherited: 0x30)
class UVehicleFrontendContextHelper : public UObject {
public:


	struct FVehicleFrontendContextUpdateResult STATIC_Remove(struct UVehicleFrontendContext* InContext, uint64_t SocketGUID); // Function DFMVehicle.VehicleFrontendContextHelper.Remove // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleFrontendLoadServices
// Size: 0x58 (Inherited: 0x30)
class UVehicleFrontendLoadServices : public UObject {
public:

	uint64_t TaskID; // 0x30(0x08)
	struct TArray<struct UVehicleFrontendLoadProcessor*> Processors; // 0x38(0x10)
	/*struct FDelegate*/char FinishCallback[0x10]; // 0x48(0x10)

	void Setup(); // Function DFMVehicle.VehicleFrontendLoadServices.Setup // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleFrontendSubsystem
// Size: 0xa8 (Inherited: 0x38)
class UVehicleFrontendSubsystem : public UGameInstanceSubsystem {
public:

	char pad_38[0x8]; // 0x38(0x08)
	struct TMap<uint64_t, struct AVehicleFrontendActor*> ID2ActorsMap; // 0x40(0x50)
	/*struct FMulticastInlineDelegate*/char OnLoadVehicleCallback[0x10]; // 0x90(0x10)
	char pad_A0[0x8]; // 0xa0(0x08)

	bool ProcessPrepare(); // Function DFMVehicle.VehicleFrontendSubsystem.ProcessPrepare // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleSpawnerDataTableManager
// Size: 0xb0 (Inherited: 0x38)
class UVehicleSpawnerDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x78]; // 0x38(0x78)

	void GetBattleFieldSpawnerDataRow(int32_t InMapID, struct FBattleFieldSpawnerDataRow& OutBattleFieldSpawnerDataRow); // Function DFMVehicle.VehicleSpawnerDataTableManager.GetBattleFieldSpawnerDataRow // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleSpawnManager
// Size: 0x148 (Inherited: 0x38)
class UVehicleSpawnManager : public UWorldSubsystem {
public:

	struct TMap<struct FName, struct FVehicleSpawnerInfo> VehicleSpawnerInfoMap; // 0x38(0x50)
	struct TMap<struct FName, struct FVehicleSpawnerWeakList> SpawnerList; // 0x88(0x50)
	struct TMap<struct FName, struct FVehicleSpawnedWeakList> SpawnedVehicleList; // 0xd8(0x50)
	struct FVehicleSpawnerWeakList UniqueSpawnerList; // 0x128(0x10)
	struct FVehicleSpawnedWeakList UniqueSpawnedList; // 0x138(0x10)

	void ResetSpawned(); // Function DFMVehicle.VehicleSpawnManager.ResetSpawned // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleSpawner
// Size: 0x3c0 (Inherited: 0x378)
class AVehicleSpawner : public AGPSpawnerBase {
public:

	enum class EAnimVehicleType VehicleType; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	int32_t VehicleId; // 0x37c(0x04)
	struct UClass* VehicleTemplateBP; // 0x380(0x08)
	int32_t OwnerCamp; // 0x388(0x04)
	bool SpawnWhenBeginPlay; // 0x38c(0x01)
	char pad_38D[0x23]; // 0x38d(0x23)
	struct AGPCharacter* OwnerCharacter; // 0x3b0(0x08)
	char pad_3B8[0x8]; // 0x3b8(0x08)

	struct ADFMVehicleBase* SpawnAndRegister(struct FTransform& Transform); // Function DFMVehicle.VehicleSpawner.SpawnAndRegister // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleAutoSpawner
// Size: 0x3b8 (Inherited: 0x378)
class AVehicleAutoSpawner : public AGPSpawnerBase {
public:

	struct UClass* VehicleTemplate; // 0x378(0x08)
	enum class EAnimVehicleType VehicleType; // 0x380(0x01)
	char pad_381[0x3]; // 0x381(0x03)
	int32_t VehicleId; // 0x384(0x04)
	char pad_388[0x18]; // 0x388(0x18)
	int32_t DefaultCamp; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct ADFMVehicleBase* DefualtVehicle; // 0x3a8(0x08)
	float RefreshCD; // 0x3b0(0x04)
	bool IsActive; // 0x3b4(0x01)
	bool bPassActorTagToVehicle; // 0x3b5(0x01)
	char pad_3B6[0x2]; // 0x3b6(0x02)

	struct ADFMVehicleBase* SpawnAndRegister(struct FTransform& Transform); // Function DFMVehicle.VehicleAutoSpawner.SpawnAndRegister // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.WeaponBulletDynamicallyTrackingTarget
// Size: 0x830 (Inherited: 0x808)
class AWeaponBulletDynamicallyTrackingTarget : public AWeaponBulletStingerMissile {
public:

	float MaxCheckedDistance; // 0x808(0x04)
	float Checkedinterval; // 0x80c(0x04)
	struct FVector TrackingTargetLocation; // 0x810(0x0c)
	char pad_81C[0x14]; // 0x81c(0x14)

	void SetTrackingTargetLocation(struct FVector InTrackingTargetLocation, struct AActor* HitTargetActor); // Function DFMVehicle.WeaponBulletDynamicallyTrackingTarget.SetTrackingTargetLocation // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.WeaponBulletIntelligentStingerMissile
// Size: 0x830 (Inherited: 0x808)
class AWeaponBulletIntelligentStingerMissile : public AWeaponBulletStingerMissile {
public:

	struct TArray<struct UClass*> LockedVehicleClassArray; // 0x808(0x10)
	float DelayToLockTarget; // 0x818(0x04)
	float MaxLockDistance; // 0x81c(0x04)
	float MaxLockAngle; // 0x820(0x04)
	char pad_824[0xc]; // 0x824(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.WeaponBulletStrikeVehicle
// Size: 0x750 (Inherited: 0x728)
class AWeaponBulletStrikeVehicle : public AWeaponBulletExplosion {
public:

	struct TArray<struct UClass*> StrikedVehicleClassArray; // 0x728(0x10)
	float StrikedDistance; // 0x738(0x04)
	float MaxDistance; // 0x73c(0x04)
	char pad_740[0x10]; // 0x740(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.WheelTrailsComponent
// Size: 0x300 (Inherited: 0x240)
class UWheelTrailsComponent : public USceneComponent {
public:

	char bEnableTrails : 1; // 0x240(0x01)
	char pad_240_1 : 7; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	/*struct TSoftClassPtr<UObject>*/char TrailClass[0x28]; // 0x248(0x28)
	float TrailWidth; // 0x270(0x04)
	float InertiaTime; // 0x274(0x04)
	float LinearAccelSize; // 0x278(0x04)
	float TurningAccelSize; // 0x27c(0x04)
	float TurningAngularAccelSize; // 0x280(0x04)
	float SampleDist; // 0x284(0x04)
	char pad_288[0x60]; // 0x288(0x60)
	struct TArray<struct USceneComponent*> ChildComponents; // 0x2e8(0x10)
	char pad_2F8[0x8]; // 0x2f8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleBase
// Size: 0x1130 (Inherited: 0xd00)
class ADFMVehicleBase : public AGPVehicleBase {
public:

	char pad_D00[0x70]; // 0xd00(0x70)
	struct UDFMVehicleHealthComponent* HealthComp; // 0xd70(0x08)
	struct UDFMVehicleCollisionComponent* CollisionComp; // 0xd78(0x08)
	struct UDFMVehicleAssembledComponent* AssembledComp; // 0xd80(0x08)
	struct UDFMVehicleAnimInteractorComponent* AnimInteractorComp; // 0xd88(0x08)
	struct UDFMVehicleEffectComponent* EffectComp; // 0xd90(0x08)
	struct UDFMVehicleActingComponent* ActingComponent; // 0xd98(0x08)
	struct UGPPathFollowComponent* PathFollowComponent; // 0xda0(0x08)
	struct UDFMVehicleSequenceBindingComponent* SequenceBinding; // 0xda8(0x08)
	struct UVehicleSignificanceComponent* VehicleSignificance; // 0xdb0(0x08)
	struct UDFMVehicleAudioComponent* AudioComp; // 0xdb8(0x08)
	struct UDFMVehicleStateControllComponent* StateComp; // 0xdc0(0x08)
	struct UDFMVehiclePhysicsReplicationComponent* PhysicsReplicationComp; // 0xdc8(0x08)
	struct UDFMVehicleWaterMaskComponent* WaterMaskComp; // 0xdd0(0x08)
	struct UGPSharedRepairComponent* SharedRepairComponent; // 0xdd8(0x08)
	struct UDFMVehicleHitEffectComponent* VehicleHitEffectComponent; // 0xde0(0x08)
	struct UGPOutLineEffectComponent* OutLineEffectComponent; // 0xde8(0x08)
	char pad_DF0[0x20]; // 0xdf0(0x20)
	struct UDFMVehicleSkinImplement* SkinImpl; // 0xe10(0x08)
	char pad_E18[0x10]; // 0xe18(0x10)
	struct TArray<struct FWeaponSeatInfo> WeaponSeatInfos; // 0xe28(0x10)
	struct FVehicleLockedAttribute LockedAttribute; // 0xe38(0x08)
	bool AutoKickWhenRollover; // 0xe40(0x01)
	char pad_E41[0x7]; // 0xe41(0x07)
	struct UStaticMesh* WheelStaticMesh; // 0xe48(0x08)
	struct UStaticMesh* BrokenWheelStaticMesh; // 0xe50(0x08)
	struct TArray<struct FVehicleAsyncResourceInfo> BeginVehicleAsyncResourceInfos; // 0xe58(0x10)
	struct TArray<struct FVehicleAsyncResourceInfo> GetOnVehicleAsyncResourceInfos; // 0xe68(0x10)
	struct TArray<struct FVehicleAsyncResourceInfo> LocalPlayerGetOnVehicleAsyncResourceInfos; // 0xe78(0x10)
	struct TArray<struct FVehicleAsyncResourceInfo> DamageAsyncResourceInfos; // 0xe88(0x10)
	struct TArray<struct FName> DamageAsyncEffectIds; // 0xe98(0x10)
	int32_t DefaultCamp; // 0xea8(0x04)
	float LowHealthPrecent; // 0xeac(0x04)
	struct TArray<struct FName> CloseSkeletalMeshWithLowCPUNames; // 0xeb0(0x10)
	char pad_EC0[0x3a]; // 0xec0(0x3a)
	bool bEditorTick; // 0xefa(0x01)
	char pad_EFB[0xd]; // 0xefb(0x0d)
	float PassengerNoiseMakingInterval; // 0xf08(0x04)
	float PassengerNoiseRadius; // 0xf0c(0x04)
	float AutoDriveDuration; // 0xf10(0x04)
	char pad_F14[0x1]; // 0xf14(0x01)
	bool isLocalFocus; // 0xf15(0x01)
	bool bIsHornTooting; // 0xf16(0x01)
	bool bIsAutoDriving; // 0xf17(0x01)
	char pad_F18[0x68]; // 0xf18(0x68)
	/*struct FMulticastInlineDelegate*/char OnVehicleTakeDamageExternalSignature[0x10]; // 0xf80(0x10)
	struct AActor* DriverOnVehicle; // 0xf90(0x08)
	struct FVector DetectRelativeLocation; // 0xf98(0x0c)
	struct FVector MarkerRelativeLocation; // 0xfa4(0x0c)
	bool bUnderCloaking; // 0xfb0(0x01)
	char pad_FB1[0x7]; // 0xfb1(0x07)
	struct TArray<struct FVehicleLockStateInfo> LockedStateInfos; // 0xfb8(0x10)
	/*struct FMulticastInlineDelegate*/char OnLockStateChanged[0x10]; // 0xfc8(0x10)
	enum class EMarkingItemType MarkingItemType; // 0xfd8(0x01)
	bool bCanBeMarkedByPlayerSOL; // 0xfd9(0x01)
	bool bCanBeMarkedByPlayerMP; // 0xfda(0x01)
	enum class EVehicleMarkerType PlayerMarkingType; // 0xfdb(0x01)
	float OutLineEffectEndTime; // 0xfdc(0x04)
	struct FTimerHandle OutLineEffectTimeHandle; // 0xfe0(0x08)
	struct FVehicleOutLineEffectData VehicleOutLineEffectData; // 0xfe8(0x08)
	char pad_FF0[0xa8]; // 0xff0(0xa8)
	bool CanBeDrive; // 0x1098(0x01)
	char pad_1099[0x7]; // 0x1099(0x07)
	struct TArray<struct FVector> GetOffLocationArray; // 0x10a0(0x10)
	bool IsSupplying; // 0x10b0(0x01)
	char pad_10B1[0x3]; // 0x10b1(0x03)
	float SupplyMaxTime; // 0x10b4(0x04)
	float CurrentSupplyTime; // 0x10b8(0x04)
	bool bCanBeLockByStingerMissile; // 0x10bc(0x01)
	char pad_10BD[0x3]; // 0x10bd(0x03)
	struct FTimerHandle FireLockingTimer; // 0x10c0(0x08)
	float StingMissleFireLockingTime; // 0x10c8(0x04)
	char pad_10CC[0x4]; // 0x10cc(0x04)
	struct FPropertyReplicationHandler PropertyReplicationHandler; // 0x10d0(0x10)
	char pad_10E0[0x8]; // 0x10e0(0x08)
	struct ULaserPointerLogic* LaserPointerLogicComp; // 0x10e8(0x08)
	int32_t ThreatValue; // 0x10f0(0x04)
	char pad_10F4[0x4]; // 0x10f4(0x04)
	struct FDateTime SpawnDateTime; // 0x10f8(0x08)
	struct TArray<struct FDateTime> BecomeHighThreatVehicleTimeArray; // 0x1100(0x10)
	struct TArray<struct FDateTime> HighThreatValueClearTimeArray; // 0x1110(0x10)
	char pad_1120[0x10]; // 0x1120(0x10)

	void VehicleReset(enum class EVehicleResetType Flag); // Function DFMVehicle.DFMVehicleBase.VehicleReset // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAudioComponent
// Size: 0x9e8 (Inherited: 0x100)
class UDFMVehicleAudioComponent : public UActorComponent {
public:

	char pad_100[0x4]; // 0x100(0x04)
	struct FName VehicleAudioName; // 0x104(0x08)
	struct FName OverrideAudioTypeName; // 0x10c(0x08)
	char pad_114[0x4]; // 0x114(0x04)
	struct ADFMVehicleBase* OwnerVehicle; // 0x118(0x08)
	struct AGPCharacter* LocalCharacter; // 0x120(0x08)
	char pad_128[0x740]; // 0x128(0x740)
	struct UGPAudioVehicleCollisionDataAsset* CollisionAudioAsset; // 0x868(0x08)
	struct FRuntimeFloatCurve FakeEngineRotationSpeedWithVelocity; // 0x870(0xa0)
	char pad_910[0xd8]; // 0x910(0xd8)

	void OnVehicleHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function DFMVehicle.DFMVehicleAudioComponent.OnVehicleHitCallback // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleHealthComponent
// Size: 0x4b0 (Inherited: 0x100)
class UDFMVehicleHealthComponent : public UActorComponent {
public:

	/*struct FMulticastInlineDelegate*/char OnDead[0x10]; // 0x100(0x10)
	/*struct FMulticastInlineDelegate*/char OnDamaged[0x10]; // 0x110(0x10)
	/*struct FMulticastInlineDelegate*/char OnBroken[0x10]; // 0x120(0x10)
	/*struct FMulticastInlineDelegate*/char OnRecover[0x10]; // 0x130(0x10)
	/*struct FMulticastInlineDelegate*/char OnDeathPerform[0x10]; // 0x140(0x10)
	/*struct FMulticastInlineDelegate*/char OnTakeDamage[0x10]; // 0x150(0x10)
	/*struct FMulticastInlineDelegate*/char OnGetDamage[0x10]; // 0x160(0x10)
	char pad_170[0x28]; // 0x170(0x28)
	float MaxHealthPoint; // 0x198(0x04)
	float CurrentLostHealthPoint; // 0x19c(0x04)
	bool DrivingStatus; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct TArray<struct FName> BrokenParties; // 0x1a8(0x10)
	struct TArray<struct FName> DestructedParties; // 0x1b8(0x10)
	char pad_1C8[0x20]; // 0x1c8(0x20)
	struct TMap<struct AActor*, float> HitDamageCooldown; // 0x1e8(0x50)
	struct FVehicleHealthRecoverInfo RecoverInfo; // 0x238(0x120)
	float UILowHPRatio; // 0x358(0x04)
	bool EnableTeammateDamage; // 0x35c(0x01)
	bool EnableTeammateDamageExplode; // 0x35d(0x01)
	bool HPLockMode; // 0x35e(0x01)
	char pad_35F[0x1]; // 0x35f(0x01)
	float OverrideExplodeDamage; // 0x360(0x04)
	float ExplodeDamageRate; // 0x364(0x04)
	int64_t ExplodeAttackerValueId; // 0x368(0x08)
	struct FVehicleBrokenPartActor VehicleBrokenPartInfo; // 0x370(0x20)
	char pad_390[0x5]; // 0x390(0x05)
	bool EnableDamageDebugOutput; // 0x395(0x01)
	char pad_396[0x2]; // 0x396(0x02)
	struct TMap<enum class EWeaponItemType, float> DamageScaling; // 0x398(0x50)
	struct TMap<enum class EWeaponItemType, float> WheelDamageScaling; // 0x3e8(0x50)
	struct TMap<enum class EVehiclePartType, struct FVehicleBodyPart> VehicleBodyPart; // 0x438(0x50)
	struct TArray<struct FVehiclePartRecvDamage> VehicleBodyPartRecvDamages; // 0x488(0x10)
	float AlarmVoiceRatio; // 0x498(0x04)
	float AlarmVoiceCDTime; // 0x49c(0x04)
	char pad_4A0[0x8]; // 0x4a0(0x08)
	float VehicleGlassBrokenHP; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)

	void SetVehicleCamp(int32_t Camp); // Function DFMVehicle.DFMVehicleHealthComponent.SetVehicleCamp // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAssembleExtensionBase
// Size: 0x58 (Inherited: 0x30)
class UDFMVehicleAssembleExtensionBase : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct UPrimitiveComponent* OwnerComponent; // 0x38(0x08)
	struct ADFMVehicleBase* OwnerVehicle; // 0x40(0x08)
	struct AGPCharacter* LocalCharacter; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehiclePhysicsReplicationComponent
// Size: 0x430 (Inherited: 0x190)
class UDFMVehiclePhysicsReplicationComponent : public UGPVehiclePhysicsReplicationComponent {
public:

	int32_t CurrentFrameIdAccpetedInServer; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	int32_t CorrectedId; // 0x198(0x04)
	char pad_19C[0x74]; // 0x19c(0x74)
	struct ADFMVehicleBase* OwnerVehicle; // 0x210(0x08)
	struct UPrimitiveComponent* UpdatedPrimitive; // 0x218(0x08)
	char pad_220[0x210]; // 0x220(0x210)

	void SendAutonomousFrameDataToServer(int32_t ClientCorrectId, struct TArray<struct FDFMVehicleAutonomousFrameData> FrameDatas); // Function DFMVehicle.DFMVehiclePhysicsReplicationComponent.SendAutonomousFrameDataToServer // (Net|Native|Event|Protected|NetServer) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleEffectComponent
// Size: 0x5c0 (Inherited: 0x100)
class UDFMVehicleEffectComponent : public UActorComponent {
public:

	struct TMap<struct FName, struct FVehicleParticleSystemHolder> DynamicBrokenEffect; // 0x100(0x50)
	struct TMap<struct FName, struct FEffectArray> BrokenEffectContainers; // 0x150(0x50)
	struct TMap<struct FName, struct FEffectArray> DriverGetOnEffectContainers; // 0x1a0(0x50)
	struct TMap<struct FName, struct FEffectArray> AllEffectContainers; // 0x1f0(0x50)
	struct TArray<struct UFXResourceContainerComponent*> MovingEffectArray; // 0x240(0x10)
	char pad_250[0x370]; // 0x250(0x370)

	void TickMovingEffect(); // Function DFMVehicle.DFMVehicleEffectComponent.TickMovingEffect // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMBrokenVehiclePart
// Size: 0x790 (Inherited: 0x3d8)
class ADFMBrokenVehiclePart : public APawn {
public:

	bool bExplodeWhenHitVehicle; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	int32_t VehicleId; // 0x3dc(0x04)
	float MaxSpeed; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct TArray<struct FDFMBrokenVehicleDirectionInfo> DirectionInfos; // 0x3e8(0x10)
	struct FVector SpeedRatio; // 0x3f8(0x0c)
	float MaxAngleSpeed; // 0x404(0x04)
	struct TArray<struct FDFMBrokenVehicleDirectionInfo> AngleDirInfos; // 0x408(0x10)
	struct FVector AngleRatio; // 0x418(0x0c)
	bool IsNeedPlayBrokenEffect; // 0x424(0x01)
	bool IsNeedPlayExplosionEffect; // 0x425(0x01)
	bool IsNeedPlayDestroyEffect; // 0x426(0x01)
	char pad_427[0x1]; // 0x427(0x01)
	float DelayDestroyTime; // 0x428(0x04)
	float DelayDestroyFxTime; // 0x42c(0x04)
	struct FBrokenVehicleOwnerVelocityState VehicleOwnerVelocityState; // 0x430(0x18)
	struct UDFMBrokenVehiclePhysicsComponent* PhysicsStateComp; // 0x448(0x08)
	char pad_450[0x30]; // 0x450(0x30)
	struct ADFMVehicleBase* VehicleOwner; // 0x480(0x08)
	char pad_488[0x308]; // 0x488(0x308)

	void OnRep_OnVehicleOwnerPhysicsStateChange(); // Function DFMVehicle.DFMBrokenVehiclePart.OnRep_OnVehicleOwnerPhysicsStateChange // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSocketAniComponent
// Size: 0x138 (Inherited: 0x100)
class UDFMVehicleSocketAniComponent : public UActorComponent {
public:

	struct UWheeledVehicleMovementComponent* WheeledVehicleMovement; // 0x100(0x08)
	struct TArray<struct USceneComponent*> WheelSockets; // 0x108(0x10)
	char pad_118[0x20]; // 0x118(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSprintComponent
// Size: 0x1728 (Inherited: 0x2d0)
class UDFMVehicleSprintComponent : public USpringArmComponent {
public:

	struct FVector DefaultSocketOffset; // 0x2d0(0x0c)
	struct FVector DefaultTargetOffset; // 0x2dc(0x0c)
	bool IsLocalRotationOffset; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	struct FRotator DefaultRotationOffset; // 0x2ec(0x0c)
	bool IsLocalPostRotationOffset; // 0x2f8(0x01)
	char pad_2F9[0x3]; // 0x2f9(0x03)
	struct FRotator PostRotationOffset; // 0x2fc(0x0c)
	float DefaultSpringArmLength; // 0x308(0x04)
	struct FVector2D DefineCameraLagVelocityRange; // 0x30c(0x08)
	bool NeedDriverFollowVehicleRotation; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	struct FVector2D ResetVehicleRotation_InRangeYaw; // 0x318(0x08)
	struct FVector2D ResetVehicleRotation_InRangePitch; // 0x320(0x08)
	bool IsCloseFPPOffset; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	float FollowVehicleLerpSpeed_TPP; // 0x32c(0x04)
	float FollowVehicleLerpSpeed_FPP; // 0x330(0x04)
	float ResetFollowVehicleLerpSpeed; // 0x334(0x04)
	char bEnableCameraLagSmoothLoc : 1; // 0x338(0x01)
	char pad_338_1 : 7; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	struct FVector2D CameraLagSmoothVelocityRange; // 0x33c(0x08)
	char pad_344[0x4]; // 0x344(0x04)
	struct ADFMVehicleBase* CurrentVehicle; // 0x348(0x08)
	char pad_350[0x13d8]; // 0x350(0x13d8)

	void OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName); // Function DFMVehicle.DFMVehicleSprintComponent.OnCharacterSwitchSeat // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleMoveComp
// Size: 0x650 (Inherited: 0x498)
class UDFMVehicleMoveComp : public UWheeledVehicleMovementComponent4W {
public:

	char pad_498[0x18]; // 0x498(0x18)
	struct UDFMWheeledVehicleMovementImplement* MovementImpl; // 0x4b0(0x08)
	enum class EVehicleWheelState LeftFrontWheelState; // 0x4b8(0x01)
	enum class EVehicleWheelState RightFrontWheelState; // 0x4b9(0x01)
	enum class EVehicleWheelState LeftRealWheelState; // 0x4ba(0x01)
	enum class EVehicleWheelState RightRealWheelState; // 0x4bb(0x01)
	float FrontWheelDestructionSpeed; // 0x4bc(0x04)
	float FrontWheelBrokenSpeed; // 0x4c0(0x04)
	float RealWheelDestructionSpeed; // 0x4c4(0x04)
	float RealWheelBrokenSpeed; // 0x4c8(0x04)
	float FrontWheelDestructionScale; // 0x4cc(0x04)
	float FrontWheelBrokenScale; // 0x4d0(0x04)
	float RealWheelDestructionScale; // 0x4d4(0x04)
	float RealWheelBrokenScale; // 0x4d8(0x04)
	float WheelDestructVelocity; // 0x4dc(0x04)
	float WheelBrokenVelocityScale; // 0x4e0(0x04)
	float WheelDestructVelocityScale; // 0x4e4(0x04)
	float WheelBrokenImpulse; // 0x4e8(0x04)
	float WheelDestructImpulse; // 0x4ec(0x04)
	float WheelBrokenRadius; // 0x4f0(0x04)
	float WheelDestructRadius; // 0x4f4(0x04)
	bool EnableDynamicCCD; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	float MaxRotationSpeed; // 0x4fc(0x04)
	float MaxDepenetrationSpeed; // 0x500(0x04)
	float MaxContactImpulse; // 0x504(0x04)
	struct TArray<float> GearSwitchTimes; // 0x508(0x10)
	float LongStiffRotationThreshold; // 0x518(0x04)
	float MinLongStiffValue; // 0x51c(0x04)
	char pad_520[0xe0]; // 0x520(0xe0)
	struct FCutsensePrepareData CutsenseData; // 0x600(0x48)
	uint32_t ServerReplicationPacketNo; // 0x648(0x04)
	char pad_64C[0x4]; // 0x64c(0x04)

	void SetWheelActingSpeed(float Speed); // Function DFMVehicle.DFMVehicleMoveComp.SetWheelActingSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMTrainStateBase
// Size: 0x30 (Inherited: 0x30)
class UDFMTrainStateBase : public UObject {
public:


	void OnUpdate(struct ADFMTrain* Train, float DeltaTime); // Function DFMVehicle.DFMTrainStateBase.OnUpdate // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSkillExecutor
// Size: 0x48 (Inherited: 0x30)
class UDFMVehicleSkillExecutor : public UObject {
public:

	struct UDFMVehicleSkillInstance* OwnSkillInstance; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAssembledPartComponent
// Size: 0x980 (Inherited: 0x7f0)
class UDFMVehicleAssembledPartComponent : public UStaticMeshComponent {
public:

	char pad_7F0[0x20]; // 0x7f0(0x20)
	struct FName BoneName; // 0x810(0x08)
	struct FVehiclePartInfo PartInfo; // 0x818(0x60)
	/*struct TSoftObjectPtr<UStaticMesh>*/char BrokenMesh[0x28]; // 0x878(0x28)
	/*struct TSoftObjectPtr<UStaticMesh>*/char DestructedMesh[0x28]; // 0x8a0(0x28)
	char pad_8C8[0x8]; // 0x8c8(0x08)
	struct FTransform OffsetTransform; // 0x8d0(0x30)
	struct TArray<struct UDFMVehicleAssembleExtensionBase*> AssembleExtensionArray; // 0x900(0x10)
	char pad_910[0x30]; // 0x910(0x30)
	struct UStaticMesh* NormalMeshAsset; // 0x940(0x08)
	struct UStaticMesh* BrokenMeshAsset; // 0x948(0x08)
	struct UStaticMesh* DestructedAsset; // 0x950(0x08)
	struct TArray<uint64_t> LoadHandlerArray; // 0x958(0x10)
	char pad_968[0x8]; // 0x968(0x08)
	struct ADFMVehicleBase* OwnerVehicle; // 0x970(0x08)
	char pad_978[0x8]; // 0x978(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleMovementImplement
// Size: 0x30 (Inherited: 0x30)
class UDFMVehicleMovementImplement : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleWaypoint
// Size: 0x3b0 (Inherited: 0x378)
class AVehicleWaypoint : public AActor {
public:

	char pad_378[0x10]; // 0x378(0x10)
	float ExpectVelocity; // 0x388(0x04)
	bool ReverseThrottle; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	float AngleVelLerpOverride; // 0x390(0x04)
	float LinearVelLerpOverride; // 0x394(0x04)
	float DistanceAtPath; // 0x398(0x04)
	float SplineInputKey; // 0x39c(0x04)
	bool bMuteRayTrace; // 0x3a0(0x01)
	bool bActivated; // 0x3a1(0x01)
	bool bPause; // 0x3a2(0x01)
	bool bShouldDispatchEvent; // 0x3a3(0x01)
	struct FName EventName; // 0x3a4(0x08)
	char pad_3AC[0x4]; // 0x3ac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSkillProjectile
// Size: 0x678 (Inherited: 0x630)
class ADFMVehicleSkillProjectile : public AGPWeaponBulletProjectile {
public:

	char pad_630[0x18]; // 0x630(0x18)
	struct FDFMVehicleSkillProjectileMovementParam MovementParam; // 0x648(0x0c)
	char pad_654[0x4]; // 0x654(0x04)
	struct TArray<struct AActor*> IgnoredActors; // 0x658(0x10)
	struct TArray<struct UPrimitiveComponent*> IgnoredComponents; // 0x668(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleFrontendLoadProcessor
// Size: 0x48 (Inherited: 0x30)
class UVehicleFrontendLoadProcessor : public UObject {
public:

	uint64_t ID; // 0x30(0x08)
	/*struct FMulticastInlineDelegate*/char callback[0x10]; // 0x38(0x10)

	void Setup(uint64_t InID); // Function DFMVehicle.VehicleFrontendLoadProcessor.Setup // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMHelicopter
// Size: 0x1140 (Inherited: 0x1130)
class ADFMHelicopter : public ADFMVehicleBase {
public:

	struct UDFMHelicopterMovementComponent* MovementComp; // 0x1130(0x08)
	struct UDFMHelicopterSocketAniComponent* HelicopterSocketAniComponent; // 0x1138(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMWheeledVehicle
// Size: 0x1190 (Inherited: 0x1130)
class ADFMWheeledVehicle : public ADFMVehicleBase {
public:

	struct USkeletalMeshComponent* Mesh; // 0x1130(0x08)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x1138(0x08)
	/*struct TSoftObjectPtr<UStaticMesh>*/char WeldedWheeledMesh[0x28]; // 0x1140(0x28)
	struct UStaticMeshComponent* WeldedWheeledMeshComponent; // 0x1168(0x08)
	struct UDFMWheeledInstancedStaticMeshComponent* WheeledInstancedStaticMeshComponent; // 0x1170(0x08)
	struct TArray<struct UStaticMeshComponent*> WheelMeshComponents; // 0x1178(0x10)
	char pad_1188[0x8]; // 0x1188(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMBoatVehicle
// Size: 0x1190 (Inherited: 0x1130)
class ADFMBoatVehicle : public ADFMVehicleBase {
public:

	bool bAutoDestroy; // 0x1130(0x01)
	char pad_1131[0x3]; // 0x1131(0x03)
	float CheckedDuration; // 0x1134(0x04)
	float AutoDestroyDuration; // 0x1138(0x04)
	float AutoDestroyDurationWhenStranded; // 0x113c(0x04)
	bool bDisableInteractorWhenStranded; // 0x1140(0x01)
	bool bForbidToGetOffWhenInWater; // 0x1141(0x01)
	char pad_1142[0x6]; // 0x1142(0x06)
	/*struct TSoftObjectPtr<UBlueprint>*/char StrandedBoat[0x28]; // 0x1148(0x28)
	struct UDFMBoatMovementComponent* MovementComp; // 0x1170(0x08)
	char pad_1178[0x18]; // 0x1178(0x18)

	void TryDestroy(); // Function DFMVehicle.DFMBoatVehicle.TryDestroy // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMHelicopterAudioComponent
// Size: 0x9f0 (Inherited: 0x9e8)
class UDFMHelicopterAudioComponent : public UDFMVehicleAudioComponent {
public:

	char pad_9E8[0x8]; // 0x9e8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMBoatVehicleAudioComponent
// Size: 0x9f0 (Inherited: 0x9e8)
class UDFMBoatVehicleAudioComponent : public UDFMVehicleAudioComponent {
public:

	char pad_9E8[0x8]; // 0x9e8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMWheeledVehicleAudioComponent
// Size: 0xa58 (Inherited: 0x9e8)
class UDFMWheeledVehicleAudioComponent : public UDFMVehicleAudioComponent {
public:

	float TireNoiseCheckInterval; // 0x9e8(0x04)
	float MaxLongSlip; // 0x9ec(0x04)
	float MaxLateralSlip; // 0x9f0(0x04)
	float FakeRpmVelocityRatio; // 0x9f4(0x04)
	struct ADFMWheeledVehicle* OwnerWheeledVehicle; // 0x9f8(0x08)
	struct UPhysicalMaterialTireNoiseAsset* TireNoiseAsset; // 0xa00(0x08)
	char pad_A08[0x30]; // 0xa08(0x30)
	struct UPhysicalMaterial* LastContactSurfaceMat; // 0xa38(0x08)
	char pad_A40[0x18]; // 0xa40(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMAIHelicopterHealthComponent
// Size: 0x4b8 (Inherited: 0x4b0)
class UDFMAIHelicopterHealthComponent : public UDFMVehicleHealthComponent {
public:

	bool bIsGod; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)

	void Crash(); // Function DFMVehicle.DFMAIHelicopterHealthComponent.Crash // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMBoatRadarExtension
// Size: 0x68 (Inherited: 0x58)
class UDFMBoatRadarExtension : public UDFMVehicleAssembleExtensionBase {
public:

	float RotateSpeed; // 0x58(0x04)
	struct FVector RotateAxis; // 0x5c(0x0c)

	void OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName); // Function DFMVehicle.DFMBoatRadarExtension.OnCharacterSwitchSeat // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleDashBoardExtension
// Size: 0x78 (Inherited: 0x58)
class UDFMVehicleDashBoardExtension : public UDFMVehicleAssembleExtensionBase {
public:

	int32_t VelocityMaterialIndex; // 0x58(0x04)
	struct FName VelocityParamterName; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	struct UMaterialInstanceDynamic* VelocityMaterial; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)

	void OnXPPChange(bool bIsFPP); // Function DFMVehicle.DFMVehicleDashBoardExtension.OnXPPChange // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAssembleSteeringWheelExtension
// Size: 0xb0 (Inherited: 0x58)
class UDFMVehicleAssembleSteeringWheelExtension : public UDFMVehicleAssembleExtensionBase {
public:

	struct FName LeftHandIK; // 0x58(0x08)
	struct FName RightHandIK; // 0x60(0x08)
	float CullingDistance; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct UGPAnimProxyComponent* AnimProxyComponent; // 0x70(0x08)
	char pad_78[0x38]; // 0x78(0x38)

	void OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName); // Function DFMVehicle.DFMVehicleAssembleSteeringWheelExtension.OnCharacterSwitchSeat // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAssembleEmissionExtension
// Size: 0x70 (Inherited: 0x58)
class UDFMVehicleAssembleEmissionExtension : public UDFMVehicleAssembleExtensionBase {
public:

	struct TArray<struct FDFMVehicleEmissionConfig> EmissionConfigs; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)

	void OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName); // Function DFMVehicle.DFMVehicleAssembleEmissionExtension.OnCharacterSwitchSeat // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAssembleDoorExtension
// Size: 0x88 (Inherited: 0x58)
class UDFMVehicleAssembleDoorExtension : public UDFMVehicleAssembleExtensionBase {
public:

	struct FName AssociatedSeatName; // 0x58(0x08)
	struct FRotator TargetRotatr; // 0x60(0x0c)
	float RotateSpeed; // 0x6c(0x04)
	char pad_70[0x18]; // 0x70(0x18)

	void OnCharacterSwitchSeat(struct AActor* CHARACTER, struct FName OldSeatName, struct FName NewSeatName); // Function DFMVehicle.DFMVehicleAssembleDoorExtension.OnCharacterSwitchSeat // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleTireTrackExtension
// Size: 0x88 (Inherited: 0x58)
class UDFMVehicleTireTrackExtension : public UDFMVehicleAssembleExtensionBase {
public:

	int32_t WheelIndex; // 0x58(0x04)
	float frequency; // 0x5c(0x04)
	float WheelWidth; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UTexture2D* BrushTexture; // 0x68(0x08)
	float BrushScale; // 0x70(0x04)
	char pad_74[0x14]; // 0x74(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMHelicopterGlassExtension
// Size: 0x90 (Inherited: 0x58)
class UDFMHelicopterGlassExtension : public UDFMVehicleAssembleExtensionBase {
public:

	int32_t MaxDegreeOfCrush; // 0x58(0x04)
	int32_t NeedAmmoNum_HD; // 0x5c(0x04)
	int32_t NeedAmmoNum_Mobile; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UMaterialInstanceDynamic* DynamicMaterialInstance; // 0x68(0x08)
	struct FName BrokenAuidio; // 0x70(0x08)
	struct FName ImpactAuidio; // 0x78(0x08)
	char pad_80[0x10]; // 0x80(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMBoatPhysicsReplicationComponent
// Size: 0x430 (Inherited: 0x430)
class UDFMBoatPhysicsReplicationComponent : public UDFMVehiclePhysicsReplicationComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMBoatVehicleEffectComponent
// Size: 0x600 (Inherited: 0x5c0)
class UDFMBoatVehicleEffectComponent : public UDFMVehicleEffectComponent {
public:

	float MinVelocity; // 0x5c0(0x04)
	float MaxVelocity; // 0x5c4(0x04)
	float MaxRotateVelocity; // 0x5c8(0x04)
	float RotateVelocityWeight; // 0x5cc(0x04)
	struct UFXResourceContainerComponent* LeftWaterEffectComp; // 0x5d0(0x08)
	struct UFXResourceContainerComponent* RightWaterEffectComp; // 0x5d8(0x08)
	struct UFXResourceContainerComponent* BackWaterEffectComp; // 0x5e0(0x08)
	char pad_5E8[0x18]; // 0x5e8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMBrokenAIHelicopterPart
// Size: 0x7a0 (Inherited: 0x790)
class ADFMBrokenAIHelicopterPart : public ADFMBrokenVehiclePart {
public:

	char pad_790[0x10]; // 0x790(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMBrokenHelicopterPart
// Size: 0x790 (Inherited: 0x790)
class ADFMBrokenHelicopterPart : public ADFMBrokenVehiclePart {
public:


	void OnHitCallback(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function DFMVehicle.DFMBrokenHelicopterPart.OnHitCallback // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMHelicopterSocketAniComponent
// Size: 0x198 (Inherited: 0x138)
class UDFMHelicopterSocketAniComponent : public UDFMVehicleSocketAniComponent {
public:

	struct FName FrontPropellerRootSocketName; // 0x138(0x08)
	struct FName FrontPropellerSocketName; // 0x140(0x08)
	struct FName FrontPropellerEffectName; // 0x148(0x08)
	struct FName BackPropellerSocketName; // 0x150(0x08)
	float FrontPropellerRotSpeed; // 0x158(0x04)
	float BackPropellerRotSpeed; // 0x15c(0x04)
	bool bAlwayRotate; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct UDFMHelicopterMovementComponent* HelicopterMovement; // 0x168(0x08)
	char pad_170[0x28]; // 0x170(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMHelicopterSpringComponent
// Size: 0x1730 (Inherited: 0x1728)
class UDFMHelicopterSpringComponent : public UDFMVehicleSprintComponent {
public:

	float FollowHelicopterLerpSpeedYaw_TPP; // 0x1728(0x04)
	float FollowHelicopterLerpSpeedPitch_TPP; // 0x172c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMTankSpringComponent
// Size: 0x1730 (Inherited: 0x1728)
class UDFMTankSpringComponent : public UDFMVehicleSprintComponent {
public:

	char pad_1728[0x8]; // 0x1728(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMMotorCycleMovementComponent
// Size: 0x760 (Inherited: 0x650)
class UDFMMotorCycleMovementComponent : public UDFMVehicleMoveComp {
public:

	float WheelieMaxAngle; // 0x650(0x04)
	float StoppieMaxAngle; // 0x654(0x04)
	struct FMotorCycleDamping SteerDamping; // 0x658(0x08)
	struct FMotorCycleDamping WheelieDamping; // 0x660(0x08)
	struct FVector CenterOfMass; // 0x668(0x0c)
	struct FVector WheelieCenterOfMass; // 0x674(0x0c)
	struct FRuntimeFloatCurve WheeliePeakTorqueRatio; // 0x680(0xa0)
	struct FVector StoppieCenterOfMass; // 0x720(0x0c)
	float MinWheelieSpeed; // 0x72c(0x04)
	float MinStoppieSpeed; // 0x730(0x04)
	float InAirSteerRotateSpeed; // 0x734(0x04)
	float InAirWheelieRotateSpeed; // 0x738(0x04)
	struct FVector LieDownCenterOfMass; // 0x73c(0x0c)
	float StandUpSpeed; // 0x748(0x04)
	bool bWheelie; // 0x74c(0x01)
	bool bStoppie; // 0x74d(0x01)
	enum class EMotorCycleState State; // 0x74e(0x01)
	char pad_74F[0x11]; // 0x74f(0x11)

	void StartWheelie(); // Function DFMVehicle.DFMMotorCycleMovementComponent.StartWheelie // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMTrainState_Move
// Size: 0x30 (Inherited: 0x30)
class UDFMTrainState_Move : public UDFMTrainStateBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMTrainState_Stop
// Size: 0x38 (Inherited: 0x30)
class UDFMTrainState_Stop : public UDFMTrainStateBase {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMTrainState_Destruct
// Size: 0x30 (Inherited: 0x30)
class UDFMTrainState_Destruct : public UDFMTrainStateBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleADSSkillExecutor
// Size: 0xd8 (Inherited: 0x48)
class UDFMVehicleADSSkillExecutor : public UDFMVehicleSkillExecutor {
public:

	char pad_48[0x60]; // 0x48(0x60)
	struct ADFMVehicleADS* CreatedActor; // 0xa8(0x08)
	struct UFXResourceContainerComponent* PersistenceEffect; // 0xb0(0x08)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct UFXResourceContainerComponent* CoolDownEffect; // 0xc0(0x08)
	char pad_C8[0x10]; // 0xc8(0x10)

	void OnCooldown(); // Function DFMVehicle.DFMVehicleADSSkillExecutor.OnCooldown // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleLaunchProjectileSkillExecutor
// Size: 0x88 (Inherited: 0x48)
class UDFMVehicleLaunchProjectileSkillExecutor : public UDFMVehicleSkillExecutor {
public:

	struct FDFMVehicleLaunchProjectileConfig LaunchProjectileConfig; // 0x48(0x30)
	struct TArray<struct FVehicleLaunchSkillProjectileInfo> ProjectileInfos; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleMarkSkillExecutor
// Size: 0x78 (Inherited: 0x48)
class UDFMVehicleMarkSkillExecutor : public UDFMVehicleSkillExecutor {
public:

	char pad_48[0x30]; // 0x48(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehiclePassiveSkillExecutor
// Size: 0x48 (Inherited: 0x48)
class UDFMVehiclePassiveSkillExecutor : public UDFMVehicleSkillExecutor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleRebornBeaconSkillExecutor
// Size: 0xb0 (Inherited: 0x48)
class UDFMVehicleRebornBeaconSkillExecutor : public UDFMVehicleSkillExecutor {
public:

	char pad_48[0x60]; // 0x48(0x60)
	struct ADFMVehiclePreviewPlacementActor* PreviewPlacementActor; // 0xa8(0x08)

	void OnPreviewPlacementLoaded(struct FSoftObjectPath& ResourcePath, struct UObject* ResourceObject); // Function DFMVehicle.DFMVehicleRebornBeaconSkillExecutor.OnPreviewPlacementLoaded // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleScanSkillExecutor
// Size: 0xd0 (Inherited: 0x48)
class UDFMVehicleScanSkillExecutor : public UDFMVehicleSkillExecutor {
public:

	char pad_48[0x88]; // 0x48(0x88)

	void OnScan(); // Function DFMVehicle.DFMVehicleScanSkillExecutor.OnScan // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSmokeSkillExecutor
// Size: 0x78 (Inherited: 0x48)
class UDFMVehicleSmokeSkillExecutor : public UDFMVehicleSkillExecutor {
public:

	char pad_48[0x30]; // 0x48(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleRepairSkillExecutor
// Size: 0x68 (Inherited: 0x48)
class UDFMVehicleRepairSkillExecutor : public UDFMVehicleSkillExecutor {
public:

	char pad_48[0x20]; // 0x48(0x20)

	void OnVehicleTakeDamage(struct FDamageResultInfo& DamageResultInfo); // Function DFMVehicle.DFMVehicleRepairSkillExecutor.OnVehicleTakeDamage // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleHeatLightSkillExecutor
// Size: 0xa0 (Inherited: 0x48)
class UDFMVehicleHeatLightSkillExecutor : public UDFMVehicleSkillExecutor {
public:

	char pad_48[0x58]; // 0x48(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleThermalSmokeSkillExecutor
// Size: 0x88 (Inherited: 0x48)
class UDFMVehicleThermalSmokeSkillExecutor : public UDFMVehicleSkillExecutor {
public:

	char pad_48[0x38]; // 0x48(0x38)
	struct ADFMVehicleThermalSmoke* ThermalSmoke; // 0x80(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleAssembledPartComponent_NetExtend
// Size: 0x990 (Inherited: 0x980)
class UDFMVehicleAssembledPartComponent_NetExtend : public UDFMVehicleAssembledPartComponent {
public:

	float GlassCrackStep; // 0x980(0x04)
	bool bIsBroken; // 0x984(0x01)
	char pad_985[0xb]; // 0x985(0x0b)

	void OnRep_GlassCrackStep(); // Function DFMVehicle.DFMVehicleAssembledPartComponent_NetExtend.OnRep_GlassCrackStep // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMWheeledVehicleMovementImplement
// Size: 0x40 (Inherited: 0x30)
class UDFMWheeledVehicleMovementImplement : public UDFMVehicleMovementImplement {
public:

	char pad_30[0x10]; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.AITankWaypoint
// Size: 0x3d0 (Inherited: 0x3b0)
class AAITankWaypoint : public AVehicleWaypoint {
public:

	int32_t WayPointIndex; // 0x3b0(0x04)
	float StayTime; // 0x3b4(0x04)
	struct TArray<enum class EAITankPhase> NeedStayPhaseArray; // 0x3b8(0x10)
	struct UBoxComponent* BoxCollision; // 0x3c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSkillProjectileShrapnelGrenade
// Size: 0x688 (Inherited: 0x678)
class ADFMVehicleSkillProjectileShrapnelGrenade : public ADFMVehicleSkillProjectile {
public:

	struct FName ExplosionEffectId; // 0x678(0x08)
	int64_t ExplodeAttackerValueId; // 0x680(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleSkillProjectileSmokeGrenade
// Size: 0x680 (Inherited: 0x678)
class ADFMVehicleSkillProjectileSmokeGrenade : public ADFMVehicleSkillProjectile {
public:

	struct FName SmokeEffectID; // 0x678(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleFrontendLoadMaterialProcessor
// Size: 0x48 (Inherited: 0x48)
class UVehicleFrontendLoadMaterialProcessor : public UVehicleFrontendLoadProcessor {
public:


	void STATIC_SetMaterialBaseParam(struct UMaterialInterface* OriginMaterial, struct UMaterialInstanceDynamic* DynamicMaterial); // Function DFMVehicle.VehicleFrontendLoadMaterialProcessor.SetMaterialBaseParam // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleFrontendLoadMeshProcessor
// Size: 0x48 (Inherited: 0x48)
class UVehicleFrontendLoadMeshProcessor : public UVehicleFrontendLoadProcessor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.VehicleFrontendLoadResourcesProcessor
// Size: 0x58 (Inherited: 0x48)
class UVehicleFrontendLoadResourcesProcessor : public UVehicleFrontendLoadProcessor {
public:

	char pad_48[0x10]; // 0x48(0x10)

	void OnLoadCallback(struct FVehicleFrontendLoadContext Context, struct FVehicleFrontendResourcesPak Pak); // Function DFMVehicle.VehicleFrontendLoadResourcesProcessor.OnLoadCallback // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMAIHelicopter
// Size: 0x1620 (Inherited: 0x1140)
class ADFMAIHelicopter : public ADFMHelicopter {
public:

	struct UDFMAIHelicopterPilotComponent* HelicopterPilotComp; // 0x1140(0x08)
	struct UAIHelicopterSteeringComponent* AIHelicopterSteeringComponent; // 0x1148(0x08)
	struct TArray<struct FPatrolConfig_Helicopter> PatrolConfig_Helicopter; // 0x1150(0x10)
	struct UClass* PickupBoxClass; // 0x1160(0x08)
	float CrashMoveHPThreshold; // 0x1168(0x04)
	float LiftSpeedAcceleration; // 0x116c(0x04)
	float FrontLiftSpeed; // 0x1170(0x04)
	float BackLiftSpeed; // 0x1174(0x04)
	float SmokeGroundHeight; // 0x1178(0x04)
	float SmokeScaleHeight; // 0x117c(0x04)
	struct FName CrashMoveFXExplode; // 0x1180(0x08)
	struct FName CrashMoveFXSmoke; // 0x1188(0x08)
	struct FName CrashMoveFXFlame; // 0x1190(0x08)
	struct TMap<struct FName, struct FHelicopterFX> FXMap; // 0x1198(0x50)
	struct FName BodyMeshCompName; // 0x11e8(0x08)
	struct FName DefaultMainSeat; // 0x11f0(0x08)
	struct USceneComponent* BodyMesh; // 0x11f8(0x08)
	struct FName Boss04_Helicopter_State_Battle; // 0x1200(0x08)
	struct FName Boss04_Helicopter_State_Battle_Alert; // 0x1208(0x08)
	struct FName Boss04_Helicopter_State_Patrol; // 0x1210(0x08)
	struct FName Boss04_Helicopter_State_Patrol_Alert; // 0x1218(0x08)
	struct FName Boss04_Helicopter_Fall_Rotate_Start; // 0x1220(0x08)
	struct FName Boss04_Helicopter_Fall_Vertical_Start; // 0x1228(0x08)
	struct FName Vehicle_Boss04_Helicopter_GlassBroken; // 0x1230(0x08)
	struct FName Vehicle_Boss04_Helicopter_MachineGun; // 0x1238(0x08)
	struct FName Vehicle_Boss04_Helicopter_ImpactGlass; // 0x1240(0x08)
	struct TMap<int32_t, float> DynamicDifficultyHPMap; // 0x1248(0x50)
	bool bIsTransportHelicopter; // 0x1298(0x01)
	char pad_1299[0x7]; // 0x1299(0x07)
	struct FAITransportHelicopterStateParam AITransportHelicopterState; // 0x12a0(0x80)
	float SpawnTimeStamp; // 0x1320(0x04)
	bool bRaidHelicopter; // 0x1324(0x01)
	char pad_1325[0x3]; // 0x1325(0x03)
	struct USkeletalMeshComponent* VehicleSKMesh; // 0x1328(0x08)
	struct UBOSS04AIHelicopterConfig* PatrolConfig; // 0x1330(0x08)
	char pad_1338[0x8]; // 0x1338(0x08)
	struct FAIHelicopterSpaceData CurrentHelicopterSpaceData; // 0x1340(0x120)
	/*struct TScriptInterface<IAIHelicopterWeaponInterface>*/char WeaponInterface[0x10]; // 0x1460(0x10)
	char pad_1470[0x5a]; // 0x1470(0x5a)
	bool bCrash; // 0x14ca(0x01)
	char pad_14CB[0x5]; // 0x14cb(0x05)
	/*struct FMulticastInlineDelegate*/char AIHelicopterMoveEvent[0x10]; // 0x14d0(0x10)
	/*struct FMulticastInlineDelegate*/char AITransportHeliMoveStateEvent[0x10]; // 0x14e0(0x10)
	/*struct FMulticastInlineDelegate*/char AIHelicopterFightStateEvent[0x10]; // 0x14f0(0x10)
	enum class EAIHelicopterMoveState CurrentMoveState; // 0x1500(0x01)
	struct FAIHelicopterStateParam CurrentAIHelicopterStateParam; // 0x1501(0x06)
	char pad_1507[0xf9]; // 0x1507(0xf9)
	struct ADramaArea* LinkedDrama; // 0x1600(0x08)
	char pad_1608[0x18]; // 0x1608(0x18)

	void UpdateHelicopterFightState(enum class EAIHelicopterFightState State); // Function DFMVehicle.DFMAIHelicopter.UpdateHelicopterFightState // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMTank
// Size: 0x1290 (Inherited: 0x1190)
class ADFMTank : public ADFMWheeledVehicle {
public:

	struct FQuat CannonDesiredOrientation; // 0x1190(0x10)
	struct FQuat GunDesiredOrientation; // 0x11a0(0x10)
	float TowerTurnSpeed; // 0x11b0(0x04)
	float CannonTurnSpeed; // 0x11b4(0x04)
	float GunTurnSpeed; // 0x11b8(0x04)
	bool bShowWheelsInViewPort; // 0x11bc(0x01)
	char pad_11BD[0x3]; // 0x11bd(0x03)
	struct TArray<struct UStaticMeshComponent*> ShowWheels; // 0x11c0(0x10)
	struct UInstancedStaticMeshComponent* TrackMesh; // 0x11d0(0x08)
	struct UDFMVehicleTrackSplineComponent* RightTrackSpline; // 0x11d8(0x08)
	struct UDFMVehicleTrackSplineComponent* LeftTrackSpline; // 0x11e0(0x08)
	struct UDFMVehicleDirectionSplineComponent* LeftDirectionSpline; // 0x11e8(0x08)
	struct UDFMVehicleDirectionSplineComponent* RightDirectionSpline; // 0x11f0(0x08)
	struct TMap<struct FName, struct FRotator> CurrentBoneRelRotatorMap; // 0x11f8(0x50)
	struct FVector CannonForcePos; // 0x1248(0x0c)
	float CannonVelocityValue; // 0x1254(0x04)
	float CannonAngularVelocityValue; // 0x1258(0x04)
	char pad_125C[0x4]; // 0x125c(0x04)
	struct TArray<struct UActorComponent*> MeshComponents; // 0x1260(0x10)
	char pad_1270[0x20]; // 0x1270(0x20)

	void SetBoneRelRotatorMap(struct FName BoneName, struct FRotator BoneRotator); // Function DFMVehicle.DFMTank.SetBoneRelRotatorMap // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMMotorCycle
// Size: 0x1190 (Inherited: 0x1190)
class ADFMMotorCycle : public ADFMWheeledVehicle {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMWheeledVehicleNW
// Size: 0x1190 (Inherited: 0x1190)
class ADFMWheeledVehicleNW : public ADFMWheeledVehicle {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMAIHelicopterAudioComponent
// Size: 0x9f0 (Inherited: 0x9f0)
class UDFMAIHelicopterAudioComponent : public UDFMHelicopterAudioComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMTankAudioComponent
// Size: 0xa68 (Inherited: 0xa58)
class UDFMTankAudioComponent : public UDFMWheeledVehicleAudioComponent {
public:

	struct ADFMTank* OwnerTank; // 0xa58(0x08)
	char pad_A60[0x8]; // 0xa60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMHelicopterDashBoardExtension
// Size: 0x90 (Inherited: 0x78)
class UDFMHelicopterDashBoardExtension : public UDFMVehicleDashBoardExtension {
public:

	struct UMaterialInstanceDynamic* HeightMaterial; // 0x78(0x08)
	int32_t HeightMaterialIndex; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FName HeightParamterName; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMVehicleThermalImagingPassiveSkillExecutor
// Size: 0x50 (Inherited: 0x48)
class UDFMVehicleThermalImagingPassiveSkillExecutor : public UDFMVehiclePassiveSkillExecutor {
public:

	char pad_48[0x8]; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMVehicle.DFMAITank
// Size: 0x1350 (Inherited: 0x1290)
class ADFMAITank : public ADFMTank {
public:

	bool bIsFiring; // 0x1290(0x01)
	bool KeepPosition; // 0x1291(0x01)
	bool KeepAimRotation; // 0x1292(0x01)
	bool IsTankGod; // 0x1293(0x01)
	bool PlayTurnLeft; // 0x1294(0x01)
	bool PlayTurnRight; // 0x1295(0x01)
	bool bIsUnderAttack; // 0x1296(0x01)
	bool bIsProjectileAttack; // 0x1297(0x01)
	struct AGPCharacter* VirtualAICharacter; // 0x1298(0x08)
	struct UAITankPhaseComponent* AITankPhaseComponent; // 0x12a0(0x08)
	struct UParticleSystemComponent* TankAccelerateEffectComponent; // 0x12a8(0x08)
	/*struct FMulticastInlineDelegate*/char TriggerAITankWayPointSignature[0x10]; // 0x12b0(0x10)
	struct TArray<struct FTankMeshData> TankMeshArray; // 0x12c0(0x10)
	struct TMap<enum class EAITankPhase, float> WayPointPauseTimeMap; // 0x12d0(0x50)
	struct UCurveFloat* PitchCurve; // 0x1320(0x08)
	struct AWeaponBase* MachineGun; // 0x1328(0x08)
	struct UFXResourceContainerComponent* CreatedMachineGunFireWarningPSC; // 0x1330(0x08)
	struct UParticleSystemComponent* TankBodyEffectComponent; // 0x1338(0x08)
	struct UParticleSystemComponent* TankEngineEffectComponent; // 0x1340(0x08)
	char pad_1348[0x8]; // 0x1348(0x08)

	void SetTankPhaseHP(struct TMap<enum class EAITankPhase, float> AITankPhaseHPMap); // Function DFMVehicle.DFMAITank.SetTankPhaseHP // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
