
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum PBDPhysics.EChainSAPGridNumMode
enum class EChainSAPGridNumMode : int {
	None = 0,
	Grid8 = 1,
	Grid12 = 2,
	Grid16 = 3,
	EChainSAPGridNumMode_MAX = 4
};

// Enum PBDPhysics.EChainCollisionMode
enum class EChainCollisionMode : int {
	None = 0,
	Discrete = 1,
	CCD = 2,
	EChainCollisionMode_MAX = 3
};

// Enum PBDPhysics.ELengthConstraintMode
enum class ELengthConstraintMode : int {
	SimpleClamp = 0,
	LengthConstraint = 1,
	Custom = 2,
	ELengthConstraintMode_MAX = 3
};

// Enum PBDPhysics.EWindType
enum class EWindType : int {
	Wind_TriangleWave = 0,
	Wind_SinWave = 1,
	Wind_Custom = 2,
	Wind_MAX = 3
};

// ScriptStruct PBDPhysics.GlobalConstraintPhyAttrOverride
// Size: 0x10 (Inherited: 0x00)
struct FGlobalConstraintPhyAttrOverride {
public:

	struct FName ChildParticleRelatedBoneName; // 0x00(0x08)
	bool OverrideStiffnessValue; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Stiffness; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.LocalConstraintPhyAttrOverride
// Size: 0x1c (Inherited: 0x00)
struct FLocalConstraintPhyAttrOverride {
public:

	struct FName ParentParticleRelatedBoneName; // 0x00(0x08)
	struct FName ChildParticleRelatedBoneName; // 0x08(0x08)
	bool OverrideStiffnessValue; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Stiffness; // 0x14(0x04)
	bool ParentDominate; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.LengthConstraintPhyAttrOverride
// Size: 0x1c (Inherited: 0x00)
struct FLengthConstraintPhyAttrOverride {
public:

	struct FName ParentParticleRelatedBoneName; // 0x00(0x08)
	struct FName ChildParticleRelatedBoneName; // 0x08(0x08)
	bool OverrideStiffnessValue; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Stiffness; // 0x14(0x04)
	bool ParentDominate; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.ParticlePhyAttrOverride
// Size: 0x18 (Inherited: 0x00)
struct FParticlePhyAttrOverride {
public:

	struct FName ParticleRelatedBoneName; // 0x00(0x08)
	bool OverrideDampingValue; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float DampingValue; // 0x0c(0x04)
	bool OverrideParticleRadiusValue; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ParticleRadiusValue; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.BonePair
// Size: 0x20 (Inherited: 0x00)
struct FBonePair {
public:

	struct FBoneReference FirstBone; // 0x00(0x10)
	struct FBoneReference SecondBone; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.ExternalFixedLocation
// Size: 0x14 (Inherited: 0x00)
struct FExternalFixedLocation {
public:

	struct FName BoneName; // 0x00(0x08)
	struct FVector FixedLocation; // 0x08(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.ChainVirtualParticleConnectInfo
// Size: 0x20 (Inherited: 0x00)
struct FChainVirtualParticleConnectInfo {
public:

	int32_t ChainBoneRootIndex1; // 0x00(0x04)
	int32_t ChainBoneRootIndex2; // 0x04(0x04)
	int32_t VirtualParticleBetweenBone; // 0x08(0x04)
	float RadiusScale; // 0x0c(0x04)
	struct TArray<int32_t> ExcludeConnectIndex; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.ChainVirtualParticleData
// Size: 0x10 (Inherited: 0x00)
struct FChainVirtualParticleData {
public:

	struct FVector Axis; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.ChainWindTurbulenceData
// Size: 0x1c (Inherited: 0x00)
struct FChainWindTurbulenceData {
public:

	float Intensity1; // 0x00(0x04)
	float Intensity2; // 0x04(0x04)
	float Frequency1; // 0x08(0x04)
	float Frequency2; // 0x0c(0x04)
	struct FVector TBDir; // 0x10(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.CapsuleCollisionPreCache
// Size: 0x90 (Inherited: 0x00)
struct FCapsuleCollisionPreCache {
public:

	char pad_0[0x90]; // 0x00(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.PredictCollisionContact
// Size: 0x10 (Inherited: 0x00)
struct FPredictCollisionContact {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.OuterCapsuleCollisionInfos
// Size: 0x18 (Inherited: 0x00)
struct FOuterCapsuleCollisionInfos {
public:

	bool bTriggerChange; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FOuterCapsuleCollisionInfo> OuterCapsuleCollisionInfos; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.CollisionInfoBase
// Size: 0x10 (Inherited: 0x00)
struct FCollisionInfoBase {
public:

	struct FVector TranslationOffset; // 0x00(0x0c)
	int32_t LODThreshold; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.CapsuleCollisionBonePair
// Size: 0x20 (Inherited: 0x00)
struct FCapsuleCollisionBonePair {
public:

	struct FBoneReference FirstBone; // 0x00(0x10)
	struct FBoneReference SecondBone; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.ParticleExternalRadialForceInfo
// Size: 0x30 (Inherited: 0x00)
struct FParticleExternalRadialForceInfo {
public:

	struct TArray<struct FVector> ForceCentersWS; // 0x00(0x10)
	struct TArray<float> ForceStrength; // 0x10(0x10)
	struct TArray<float> ForceRadius; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.ConstraintInfoBase
// Size: 0x10 (Inherited: 0x00)
struct FConstraintInfoBase {
public:

	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Stiffness; // 0x04(0x04)
	struct UCurveFloat* StrengthCurve; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.ChainVirtualParticleInfo
// Size: 0x18 (Inherited: 0x00)
struct FChainVirtualParticleInfo {
public:

	int32_t VirtualParticleBetweenBone; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FChainVirtualParticleData> VirtualParticleAttach; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.CollisionBase
// Size: 0xf0 (Inherited: 0x00)
struct FCollisionBase {
public:

	char pad_0[0xf0]; // 0x00(0xf0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.CapsuleCollisionInfoBase
// Size: 0x30 (Inherited: 0x10)
struct FCapsuleCollisionInfoBase : public FCollisionInfoBase {
public:

	float radius; // 0x10(0x04)
	bool bEnableDiffRadius; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float Radius1; // 0x18(0x04)
	float HalfHeight; // 0x1c(0x04)
	struct FAxis LocalAxis; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.PlaneCollisionInfoBase
// Size: 0x20 (Inherited: 0x10)
struct FPlaneCollisionInfoBase : public FCollisionInfoBase {
public:

	struct FAxis LocalNormal; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.SphereCollisionInfoBase
// Size: 0x14 (Inherited: 0x10)
struct FSphereCollisionInfoBase : public FCollisionInfoBase {
public:

	float radius; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.ShearConstraintInfo
// Size: 0x28 (Inherited: 0x10)
struct FShearConstraintInfo : public FConstraintInfoBase {
public:

	bool bShearLoopConstraint; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FBonePair> ShearBonePairs; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.EulerAngleConstraintInfo
// Size: 0x20 (Inherited: 0x10)
struct FEulerAngleConstraintInfo : public FConstraintInfoBase {
public:

	struct FRotator EulerAngleLimit; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.AngleConstraintInfo
// Size: 0x20 (Inherited: 0x10)
struct FAngleConstraintInfo : public FConstraintInfoBase {
public:

	float AngleLimit; // 0x10(0x04)
	float ConstraintAxisWeight; // 0x14(0x04)
	enum class EAxis ConstraintAxis; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.PoseSphereConstraintInfo
// Size: 0x18 (Inherited: 0x10)
struct FPoseSphereConstraintInfo : public FConstraintInfoBase {
public:

	float radius; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.ChainBones
// Size: 0x68 (Inherited: 0x00)
struct FChainBones {
public:

	struct FBoneReference ChainHeadBone; // 0x00(0x10)
	struct TArray<struct FBoneReference> ChainEndBones; // 0x10(0x10)
	struct TArray<struct FBoneReference> CustomChainBones; // 0x20(0x10)
	float DampScale; // 0x30(0x04)
	float RadiusScale; // 0x34(0x04)
	float WindScale; // 0x38(0x04)
	struct FVector DummyBoneLocation; // 0x3c(0x0c)
	struct FChainVirtualParticleInfo VirtualParticleInfo; // 0x48(0x18)
	int32_t LODThreshold; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.PlaneCollision
// Size: 0x100 (Inherited: 0xf0)
struct FPlaneCollision : public FCollisionBase {
public:

	char pad_F0[0x10]; // 0xf0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.CapsuleCollision
// Size: 0x240 (Inherited: 0xf0)
struct FCapsuleCollision : public FCollisionBase {
public:

	char pad_F0[0x150]; // 0xf0(0x150)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.SphereCollision
// Size: 0x100 (Inherited: 0xf0)
struct FSphereCollision : public FCollisionBase {
public:

	char pad_F0[0x10]; // 0xf0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.OuterCapsuleCollisionInfo
// Size: 0x60 (Inherited: 0x30)
struct FOuterCapsuleCollisionInfo : public FCapsuleCollisionInfoBase {
public:

	struct FName Key; // 0x30(0x08)
	struct FVector LocationWS; // 0x38(0x0c)
	char pad_44[0xc]; // 0x44(0x0c)
	struct FQuat RotationWS; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.CapsuleCollisionInfo
// Size: 0x70 (Inherited: 0x30)
struct FCapsuleCollisionInfo : public FCapsuleCollisionInfoBase {
public:

	struct FCapsuleCollisionBonePair PairBone; // 0x30(0x20)
	struct FBoneReference AttachedBone; // 0x50(0x10)
	struct TArray<struct FBoneReference> IgnoredBones; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.OutsideCapsuleCollisionInfo
// Size: 0x50 (Inherited: 0x30)
struct FOutsideCapsuleCollisionInfo : public FCapsuleCollisionInfoBase {
public:

	struct FName AttachedBoneName; // 0x30(0x08)
	struct FName AttachedPairBoneFirstName; // 0x38(0x08)
	struct FName AttachedPairBoneSecondName; // 0x40(0x08)
	struct FName AttachedSkeletalMeshName; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.PlaneCollisionInfo
// Size: 0x40 (Inherited: 0x20)
struct FPlaneCollisionInfo : public FPlaneCollisionInfoBase {
public:

	struct FBoneReference AttachedBone; // 0x20(0x10)
	struct TArray<struct FBoneReference> IgnoredBones; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.OutsidePlaneCollisionInfo
// Size: 0x30 (Inherited: 0x20)
struct FOutsidePlaneCollisionInfo : public FPlaneCollisionInfoBase {
public:

	struct FName AttachedBoneName; // 0x20(0x08)
	struct FName AttachedSkeletalMeshName; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.SphereCollisionInfo
// Size: 0x38 (Inherited: 0x14)
struct FSphereCollisionInfo : public FSphereCollisionInfoBase {
public:

	struct FBoneReference AttachedBone; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FBoneReference> IgnoredBones; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.OutSideSphereCollisionInfo
// Size: 0x24 (Inherited: 0x14)
struct FOutSideSphereCollisionInfo : public FSphereCollisionInfoBase {
public:

	struct FName AttachedBoneName; // 0x14(0x08)
	struct FName AttachedSkeletalMeshName; // 0x1c(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PBDPhysics.AnimNode_Chain
// Size: 0x7c0 (Inherited: 0xf8)
struct FAnimNode_Chain : public FAnimNode_SkeletalControlBase {
public:

	bool bToggleReset; // 0xf8(0x01)
	bool bShouldRootFixed; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
	struct TArray<struct FChainBones> ChainBones; // 0x100(0x10)
	struct TArray<struct FBoneReference> ChainFixedBones; // 0x110(0x10)
	struct TArray<struct FChainVirtualParticleConnectInfo> VirtualParticleConnectInfo; // 0x120(0x10)
	struct TArray<struct FExternalFixedLocation> ExternalFixedBoneLocations; // 0x130(0x10)
	bool bUpdatePhysicsSettingsRuntime; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	int32_t TargetFrameRate; // 0x144(0x04)
	struct FVector GravityAcceleration; // 0x148(0x0c)
	float DampFrameRateScaleWhenLargeThanTargetFrame; // 0x154(0x04)
	float EliminatePhantomVelocityScale; // 0x158(0x04)
	float Damp; // 0x15c(0x04)
	float RadiusSize; // 0x160(0x04)
	float MaxIntegrateVelocity; // 0x164(0x04)
	struct UCurveFloat* ParticleDampingCoefficientCurve; // 0x168(0x08)
	struct UCurveFloat* ParticleRadiusCurve; // 0x170(0x08)
	float ComponentFrameRateScaleWhenLargeThanTargetFrame; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FTransform OffsetTransform; // 0x180(0x30)
	bool bUseCustomComponentTransform; // 0x1b0(0x01)
	char pad_1B1[0xf]; // 0x1b1(0x0f)
	struct FTransform CustomComponentTransform; // 0x1c0(0x30)
	bool bEnableComponentZOffset; // 0x1f0(0x01)
	char pad_1F1[0x3]; // 0x1f1(0x03)
	float ComponentMaxMoveValue; // 0x1f4(0x04)
	struct FVector ComponentMoveInfluence; // 0x1f8(0x0c)
	float ComponentRotateInfluence; // 0x204(0x04)
	bool bUseOriginRotation; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	float SphapeConstraintFrameRateScaleWhenLargeThanTargetFrame; // 0x20c(0x04)
	struct FPoseSphereConstraintInfo PoseSphereConstraintInfo; // 0x210(0x18)
	struct FAngleConstraintInfo PoseAngleConstraintInfo; // 0x228(0x20)
	struct FEulerAngleConstraintInfo PoseEulerAngleConstraintInfo; // 0x248(0x20)
	struct FConstraintInfoBase LocalShapeConstraintInfo; // 0x268(0x10)
	struct FConstraintInfoBase GlobalShapeConstraintInfo; // 0x278(0x10)
	enum class ELengthConstraintMode LengthConstraintMode; // 0x288(0x01)
	bool ChainLengthNeverChange; // 0x289(0x01)
	char pad_28A[0x2]; // 0x28a(0x02)
	int32_t LengthConstraintIteration; // 0x28c(0x04)
	struct FConstraintInfoBase StretchInfo; // 0x290(0x10)
	struct FConstraintInfoBase BendInfo; // 0x2a0(0x10)
	struct FShearConstraintInfo ShearInfo; // 0x2b0(0x28)
	struct FConstraintInfoBase LRAInfo; // 0x2d8(0x10)
	bool bEvaluateWindFromWindDirectionSource; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float WindFromWindDirectionSourceScale; // 0x2ec(0x04)
	struct FVector2D WindFromWindDirectionSourceScaleRandRange; // 0x2f0(0x08)
	float WindScale; // 0x2f8(0x04)
	int32_t WindDataIndex; // 0x2fc(0x04)
	float WindDataIndexChangeSpeed; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct UPBDChainWindConfig* WindDataConfig; // 0x308(0x08)
	struct FParticleExternalRadialForceInfo ExternalRadialForce; // 0x310(0x30)
	enum class EChainCollisionMode CollisionType; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	float CollisionFriction; // 0x344(0x04)
	float CollisionStrength; // 0x348(0x04)
	enum class EChainSAPGridNumMode CollisionSAPGrid; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	int32_t CollisionSAPBoundsUpdateInterval; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct TArray<struct FSphereCollisionInfo> Spheres; // 0x358(0x10)
	struct TArray<struct FCapsuleCollisionInfo> Capsules; // 0x368(0x10)
	struct TArray<struct FPlaneCollisionInfo> Planes; // 0x378(0x10)
	struct FOuterCapsuleCollisionInfos OuterCapsuleCollisionInfos; // 0x388(0x18)
	struct UPBDChainCollisionData* ConfigCollisionData; // 0x3a0(0x08)
	bool bEnableDebugRuntimeDraw; // 0x3a8(0x01)
	char pad_3A9[0x3]; // 0x3a9(0x03)
	float DebugLengthConstraintDrawSize; // 0x3ac(0x04)
	float DebugLocalShapeConstraintDrawSize; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct TArray<struct FParticlePhyAttrOverride> OverrideParticlePhysInfo; // 0x3b8(0x10)
	struct TArray<struct FLengthConstraintPhyAttrOverride> OverrideLengthConstraintPhysInfo; // 0x3c8(0x10)
	struct TArray<struct FLocalConstraintPhyAttrOverride> OverrideLocalConstraintPhysInfo; // 0x3d8(0x10)
	struct TArray<struct FGlobalConstraintPhyAttrOverride> OverrideGlobalConstraintPhysInfo; // 0x3e8(0x10)
	bool NeedUpdateWhenMeshNotVisible; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	struct FName ChildSkeletonMeshContainName; // 0x3fc(0x08)
	int32_t MaxSubsteps; // 0x404(0x04)
	float MaxPhysicsDeltaTime; // 0x408(0x04)
	int32_t MaxSimulateFrameRate; // 0x40c(0x04)
	float ExponentialScaleWhenLessThanOne; // 0x410(0x04)
	int32_t ForceLODLevel; // 0x414(0x04)
	struct TArray<enum class EChainCollisionMode> CollisionModeByLOD; // 0x418(0x10)
	char pad_428[0x398]; // 0x428(0x398)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
