
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : int {
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2
};

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimPhysSimSpaceType : int {
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5
};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimPhysLinearConstraintType : int {
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2
};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimPhysAngularConstraintType : int {
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2
};

// Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : int {
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2
};

// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : int {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3
};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : int {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3
};

// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : int {
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2
};

// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class CopyBoneDeltaMode : int {
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2
};

// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : int {
	Linear = 0,
	Cubic = 1,
	Sinusoidal = 2,
	EaseInOutExponent2 = 3,
	EaseInOutExponent3 = 4,
	EaseInOutExponent4 = 5,
	EaseInOutExponent5 = 6,
	MAX = 7
};

// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : int {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3
};

// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : int {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5
};

// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : int {
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2
};

// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : int {
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2
};

// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : int {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3
};

// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : int {
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2
};

// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : int {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2
};

// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : int {
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3
};

// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : int {
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3
};

// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : int {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3
};

// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : int {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4
};

// Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : int {
	EulerX = 0,
	EulerY = 1,
	EulerZ = 2,
	QuaternionAngle = 3,
	SwingAngle = 4,
	TwistAngle = 5,
	ERotationComponent_MAX = 6
};

// Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : int {
	Linear = 0,
	Sinusoidal = 1,
	Cubic = 2,
	QuadraticInOut = 3,
	CubicInOut = 4,
	HermiteCubic = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	CustomCurve = 14,
	EEasingFuncType_MAX = 15
};

// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : int {
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	ERBFNormalizeMethod_MAX = 3
};

// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : int {
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	DefaultMethod = 3,
	ERBFDistanceMethod_MAX = 4
};

// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : int {
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	DefaultFunction = 5,
	ERBFFunctionType_MAX = 6
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// Size: 0x78 (Inherited: 0x40)
struct FAnimNode_Slot : public FAnimNode_Base {
public:

	struct FPoseLink Source; // 0x40(0x10)
	struct FName SlotName; // 0x50(0x08)
	bool bAlwaysUpdateSourcePose; // 0x58(0x01)
	char pad_59[0x1f]; // 0x59(0x1f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// Size: 0x110 (Inherited: 0x40)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base {
public:

	struct FPoseLink Base; // 0x40(0x10)
	struct FPoseLink Additive; // 0x50(0x10)
	float Alpha; // 0x60(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x64(0x08)
	int32_t LODThreshold; // 0x6c(0x04)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x70(0x48)
	struct FName AlphaCurveName; // 0xb8(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xc0(0x30)
	char pad_F0[0x4]; // 0xf0(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0xf4(0x01)
	bool bAlphaBoolEnabled; // 0xf5(0x01)
	char pad_F6[0x13]; // 0xf6(0x13)
	bool bEnableRawPtr; // 0x109(0x01)
	char pad_10A[0x6]; // 0x10a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Size: 0x100 (Inherited: 0x40)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base {
public:

	struct FPoseLink BasePose; // 0x40(0x10)
	struct TArray<struct FPoseLink> BlendPoses; // 0x50(0x10)
	struct TArray<struct FInputBlendPose> LayerSetup; // 0x60(0x10)
	struct TArray<float> BlendWeights; // 0x70(0x10)
	bool bMeshSpaceRotationBlend; // 0x80(0x01)
	bool bMeshSpaceScaleBlend; // 0x81(0x01)
	enum class ECurveBlendOption CurveBlendOption; // 0x82(0x01)
	bool bBlendRootMotionBasedOnRootBone; // 0x83(0x01)
	char pad_84[0x4]; // 0x84(0x04)
	int32_t LODThreshold; // 0x88(0x04)
	bool bEnableBlendWeightsCache; // 0x8c(0x01)
	bool bEnableSameCachedPoseLinkSkip; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x90(0x10)
	struct FGuid SkeletonGuid; // 0xa0(0x10)
	struct FGuid VirtualBoneGuid; // 0xb0(0x10)
	char pad_C0[0x40]; // 0xc0(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// Size: 0x40 (Inherited: 0x00)
struct FAnimPhysPlanarLimit {
public:

	struct FBoneReference DrivingBone; // 0x00(0x10)
	struct FTransform PlaneTransform; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// Size: 0x24 (Inherited: 0x00)
struct FAnimPhysSphericalLimit {
public:

	struct FBoneReference DrivingBone; // 0x00(0x10)
	struct FVector SphereLocalOffset; // 0x10(0x0c)
	float LimitRadius; // 0x1c(0x04)
	enum class ESphericalLimitType LimitType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// Size: 0x28 (Inherited: 0x00)
struct FAngularRangeLimit {
public:

	struct FVector LimitMin; // 0x00(0x0c)
	struct FVector LimitMax; // 0x0c(0x0c)
	struct FBoneReference Bone; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// Size: 0x98 (Inherited: 0x40)
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base {
public:

	struct FPoseLink A; // 0x40(0x10)
	struct FPoseLink B; // 0x50(0x10)
	struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)
	float Alpha; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x88(0x08)
	enum class EBoneControlSpace TransformsSpace; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// Size: 0x24 (Inherited: 0x00)
struct FBlendBoneByChannelEntry {
public:

	struct FBoneReference SourceBone; // 0x00(0x10)
	struct FBoneReference TargetBone; // 0x10(0x10)
	bool bBlendTranslation; // 0x20(0x01)
	bool bBlendRotation; // 0x21(0x01)
	bool bBlendScale; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.LookAtEyeBoneInfo
// Size: 0x30 (Inherited: 0x00)
struct FLookAtEyeBoneInfo {
public:

	struct FBoneReference EyeBone; // 0x00(0x10)
	float RotateSpeed; // 0x10(0x04)
	struct FAxis LookAt_Axis; // 0x14(0x10)
	struct FVector ClampDegree; // 0x24(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.LookAtBoneInfo
// Size: 0x18 (Inherited: 0x00)
struct FLookAtBoneInfo {
public:

	struct FBoneReference Bone; // 0x00(0x10)
	float RotateSpeed; // 0x10(0x04)
	float ClampDegree; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.LookAtLink
// Size: 0x80 (Inherited: 0x00)
struct FLookAtLink {
public:

	char pad_0[0x80]; // 0x00(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.Constraint
// Size: 0x1c (Inherited: 0x00)
struct FConstraint {
public:

	struct FBoneReference TargetBone; // 0x00(0x10)
	enum class EConstraintOffsetOption OffsetOption; // 0x10(0x01)
	enum class ETransformConstraintType TransformType; // 0x11(0x01)
	struct FFilterOptionPerAxis PerAxis; // 0x12(0x03)
	char pad_15[0x7]; // 0x15(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size: 0x170 (Inherited: 0x40)
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base {
public:

	struct TWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // 0x40(0x08)
	bool bUseAttachedParent; // 0x48(0x01)
	bool bCopyCurves; // 0x49(0x01)
	char pad_4A[0x126]; // 0x4a(0x126)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// Size: 0x70 (Inherited: 0x40)
struct FAnimNode_CurveSource : public FAnimNode_Base {
public:

	struct FPoseLink SourcePose; // 0x40(0x10)
	struct FName SourceBinding; // 0x50(0x08)
	float Alpha; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	/*struct TScriptInterface<ICurveSourceInterface>*/char CurveSource[0x10]; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// Size: 0x2c (Inherited: 0x00)
struct FAnimLegIKDefinition {
public:

	struct FBoneReference IKFootBone; // 0x00(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x04)
	float MinRotationAngle; // 0x24(0x04)
	enum class EAxis FootBoneForwardAxis; // 0x28(0x01)
	enum class EAxis HingeRotationAxis; // 0x29(0x01)
	bool bEnableRotationLimit; // 0x2a(0x01)
	bool bEnableKneeTwistCorrection; // 0x2b(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// Size: 0xa0 (Inherited: 0x00)
struct FAnimLegIKData {
public:

	char pad_0[0xa0]; // 0x00(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.IKChain
// Size: 0x38 (Inherited: 0x00)
struct FIKChain {
public:

	char pad_0[0x38]; // 0x00(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.IKChainLink
// Size: 0x3c (Inherited: 0x00)
struct FIKChainLink {
public:

	char pad_0[0x3c]; // 0x00(0x3c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Size: 0x68 (Inherited: 0x40)
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base {
public:

	struct FPoseLink Base; // 0x40(0x10)
	struct FPoseLink Additive; // 0x50(0x10)
	bool bMeshSpaceAdditive; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// Size: 0x88 (Inherited: 0x40)
struct FAnimNode_ModifyCurve : public FAnimNode_Base {
public:

	struct FPoseLink SourcePose; // 0x40(0x10)
	struct TArray<float> CurveValues; // 0x50(0x10)
	struct TArray<struct FName> CurveNames; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)
	float Alpha; // 0x80(0x04)
	enum class EModifyCurveApplyMode ApplyMode; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// Size: 0x80 (Inherited: 0x40)
struct FAnimNode_MultiWayBlend : public FAnimNode_Base {
public:

	struct TArray<struct FPoseLink> Poses; // 0x40(0x10)
	struct TArray<float> DesiredAlphas; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
	struct FInputScaleBias AlphaScaleBias; // 0x70(0x08)
	bool bAdditiveNode; // 0x78(0x01)
	bool bNormalizeAlpha; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// Size: 0xd8 (Inherited: 0x00)
struct FPoseDriverTarget {
public:

	struct TArray<struct FPoseDriverTransform> BoneTransforms; // 0x00(0x10)
	struct FRotator TargetRotation; // 0x10(0x0c)
	float TargetScale; // 0x1c(0x04)
	enum class ERBFDistanceMethod DistanceMethod; // 0x20(0x01)
	enum class ERBFFunctionType FunctionType; // 0x21(0x01)
	bool bApplyCustomCurve; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
	struct FRichCurve CustomCurve; // 0x28(0x98)
	struct FName DrivenName; // 0xc0(0x08)
	char pad_C8[0x8]; // 0xc8(0x08)
	bool bIsHidden; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// Size: 0x18 (Inherited: 0x00)
struct FPoseDriverTransform {
public:

	struct FVector TargetTranslation; // 0x00(0x0c)
	struct FRotator TargetRotation; // 0x0c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// Size: 0xc0 (Inherited: 0x40)
struct FAnimNode_PoseSnapshot : public FAnimNode_Base {
public:

	struct FName SnapshotName; // 0x40(0x08)
	struct FPoseSnapshot Snapshot; // 0x48(0x38)
	enum class ESnapshotSourceMode Mode; // 0x80(0x01)
	char pad_81[0x3f]; // 0x81(0x3f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// Size: 0x98 (Inherited: 0x40)
struct FAnimNode_RandomPlayer : public FAnimNode_Base {
public:

	struct TArray<struct FRandomPlayerSequenceEntry> Entries; // 0x40(0x10)
	char pad_50[0x44]; // 0x50(0x44)
	bool bShuffleMode; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// Size: 0x50 (Inherited: 0x00)
struct FRandomPlayerSequenceEntry {
public:

	struct UAnimSequence* Sequence; // 0x00(0x08)
	float ChanceToPlay; // 0x08(0x04)
	int32_t MinLoopCount; // 0x0c(0x04)
	int32_t MaxLoopCount; // 0x10(0x04)
	float MinPlayRate; // 0x14(0x04)
	float MaxPlayRate; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FAlphaBlend blendIn; // 0x20(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// Size: 0x40 (Inherited: 0x40)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// Size: 0x48 (Inherited: 0x40)
struct FAnimNode_RefPose : public FAnimNode_Base {
public:

	enum class ERefPoseType RefPoseType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// Size: 0xd0 (Inherited: 0x40)
struct FAnimNode_RotateRootBone : public FAnimNode_Base {
public:

	struct FPoseLink BasePose; // 0x40(0x10)
	float Pitch; // 0x50(0x04)
	float Yaw; // 0x54(0x04)
	struct FInputScaleBiasClamp PitchScaleBiasClamp; // 0x58(0x30)
	struct FInputScaleBiasClamp YawScaleBiasClamp; // 0x88(0x30)
	struct FRotator MeshToComponent; // 0xb8(0x0c)
	char pad_C4[0xc]; // 0xc4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// Size: 0xa8 (Inherited: 0x40)
struct FAnimNode_ScaleChainLength : public FAnimNode_Base {
public:

	struct FPoseLink InputPose; // 0x40(0x10)
	float DefaultChainLength; // 0x50(0x04)
	struct FBoneReference ChainStartBone; // 0x54(0x10)
	struct FBoneReference ChainEndBone; // 0x64(0x10)
	struct FVector TargetLocation; // 0x74(0x0c)
	float Alpha; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x88(0x08)
	enum class EScaleChainInitialLength ChainInitialLength; // 0x90(0x01)
	char pad_91[0x17]; // 0x91(0x17)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// Size: 0xd8 (Inherited: 0x60)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase {
public:

	struct UAnimSequenceBase* Sequence; // 0x60(0x08)
	float ExplicitTime; // 0x68(0x04)
	bool bShouldLoop; // 0x6c(0x01)
	bool bUseCachePose; // 0x6d(0x01)
	bool bSequenceChangedResetTime; // 0x6e(0x01)
	bool bTeleportToExplicitTime; // 0x6f(0x01)
	enum class ESequenceEvalReinit ReinitializationBehavior; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float StartPosition; // 0x74(0x04)
	char pad_78[0x10]; // 0x78(0x10)
	bool bEnableRawPtr; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct UAnimSequenceBase* PreviousSequence; // 0x90(0x08)
	char pad_98[0x40]; // 0x98(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// Size: 0x14 (Inherited: 0x00)
struct FSplineIKCachedBoneData {
public:

	struct FBoneReference Bone; // 0x00(0x10)
	int32_t RefSkeletonIndex; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// Size: 0x60 (Inherited: 0x60)
struct FAnimNode_StateResult : public FAnimNode_Root {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.RotationLimit
// Size: 0x18 (Inherited: 0x00)
struct FRotationLimit {
public:

	struct FVector LimitMin; // 0x00(0x0c)
	struct FVector LimitMax; // 0x0c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// Size: 0x108 (Inherited: 0x40)
struct FAnimNode_TwoWayBlend : public FAnimNode_Base {
public:

	struct FPoseLink A; // 0x40(0x10)
	struct FPoseLink B; // 0x50(0x10)
	enum class EAnimAlphaInputType AlphaInputType; // 0x60(0x01)
	char bAlphaBoolEnabled : 1; // 0x61(0x01)
	char pad_61_1 : 2; // 0x61(0x01)
	char bResetChildOnActivation : 1; // 0x61(0x01)
	char pad_61_4 : 4; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float Alpha; // 0x64(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x68(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x70(0x48)
	struct FName AlphaCurveName; // 0xb8(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xc0(0x30)
	char pad_F0[0x11]; // 0xf0(0x11)
	bool bEnableRawPtr; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// Size: 0xa70 (Inherited: 0x748)
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy {
public:

	char pad_748[0x328]; // 0x748(0x328)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.PositionHistory
// Size: 0x30 (Inherited: 0x00)
struct FPositionHistory {
public:

	struct TArray<struct FVector> Positions; // 0x00(0x10)
	float Range; // 0x10(0x04)
	char pad_14[0x1c]; // 0x14(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size: 0xf8 (Inherited: 0x40)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base {
public:

	struct FComponentSpacePoseLink ComponentPose; // 0x40(0x10)
	int32_t LODThreshold; // 0x50(0x04)
	float ActualAlpha; // 0x54(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x58(0x01)
	bool bAlphaBoolEnabled; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float Alpha; // 0x5c(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x60(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x68(0x48)
	struct FName AlphaCurveName; // 0xb0(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xb8(0x30)
	char pad_E8[0x10]; // 0xe8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.SocketReference
// Size: 0x40 (Inherited: 0x00)
struct FSocketReference {
public:

	char pad_0[0x30]; // 0x00(0x30)
	struct FName SocketName; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size: 0x2f8 (Inherited: 0x60)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase {
public:

	float X; // 0x60(0x04)
	float Y; // 0x64(0x04)
	float Z; // 0x68(0x04)
	float PlayRate; // 0x6c(0x04)
	bool bLoop; // 0x70(0x01)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x71(0x01)
	bool bUseCachePose; // 0x72(0x01)
	char pad_73[0x1]; // 0x73(0x01)
	float StartPosition; // 0x74(0x04)
	struct UBlendSpaceBase* BlendSpace; // 0x78(0x08)
	char pad_80[0x88]; // 0x80(0x88)
	struct UBlendSpaceBase* PreviousBlendSpace; // 0x108(0x08)
	char pad_110[0x1e8]; // 0x110(0x1e8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// Size: 0x150 (Inherited: 0x00)
struct FRotationRetargetingInfo {
public:

	bool bEnabled; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FTransform Source; // 0x10(0x30)
	struct FTransform Target; // 0x40(0x30)
	enum class ERotationComponent RotationComponent; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FVector TwistAxis; // 0x74(0x0c)
	bool bUseAbsoluteAngle; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float SourceMinimum; // 0x84(0x04)
	float SourceMaximum; // 0x88(0x04)
	float TargetMinimum; // 0x8c(0x04)
	float TargetMaximum; // 0x90(0x04)
	enum class EEasingFuncType EasingType; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct FRuntimeFloatCurve CustomCurve; // 0x98(0xa0)
	bool bFlipEasing; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	float EasingWeight; // 0x13c(0x04)
	bool bClamp; // 0x140(0x01)
	char pad_141[0xf]; // 0x141(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// Size: 0x48 (Inherited: 0x00)
struct FAnimPhysConstraintSetup {
public:

	enum class AnimPhysLinearConstraintType LinearXLimitType; // 0x00(0x01)
	enum class AnimPhysLinearConstraintType LinearYLimitType; // 0x01(0x01)
	enum class AnimPhysLinearConstraintType LinearZLimitType; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FVector LinearAxesMin; // 0x04(0x0c)
	struct FVector LinearAxesMax; // 0x10(0x0c)
	enum class AnimPhysAngularConstraintType AngularConstraintType; // 0x1c(0x01)
	enum class AnimPhysTwistAxis TwistAxis; // 0x1d(0x01)
	enum class AnimPhysTwistAxis AngularTargetAxis; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	float ConeAngle; // 0x20(0x04)
	struct FVector AngularLimitsMin; // 0x24(0x0c)
	struct FVector AngularLimitsMax; // 0x30(0x0c)
	struct FVector AngularTarget; // 0x3c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size: 0xe0 (Inherited: 0x40)
struct FAnimNode_BlendListBase : public FAnimNode_Base {
public:

	struct TArray<struct FPoseLink> BlendPose; // 0x40(0x10)
	bool bAllPosesUseSameBlendTime; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float AllPosesSameBlendTime; // 0x54(0x04)
	struct TArray<float> BlendTime; // 0x58(0x10)
	enum class EBlendListTransitionType TransitionType; // 0x68(0x01)
	enum class EAlphaBlendOption BlendType; // 0x69(0x01)
	bool bResetChildOnActivation; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
	struct UCurveFloat* CustomBlendCurve; // 0x70(0x08)
	struct UBlendProfile* BlendProfile; // 0x78(0x08)
	int32_t BlendProfileLODThreshold; // 0x80(0x04)
	char pad_84[0x5c]; // 0x84(0x5c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size: 0xa8 (Inherited: 0x60)
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase {
public:

	struct UPoseAsset* PoseAsset; // 0x60(0x08)
	char pad_68[0x40]; // 0x68(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.RBFParams
// Size: 0x28 (Inherited: 0x00)
struct FRBFParams {
public:

	int32_t TargetDimensions; // 0x00(0x04)
	float radius; // 0x04(0x04)
	enum class ERBFFunctionType Function; // 0x08(0x01)
	enum class ERBFDistanceMethod DistanceMethod; // 0x09(0x01)
	enum class EBoneAxis TwistAxis; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float WeightThreshold; // 0x0c(0x04)
	enum class ERBFNormalizeMethod NormalizeMethod; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector MedianReference; // 0x14(0x0c)
	float MedianMin; // 0x20(0x04)
	float MedianMax; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// Size: 0x20 (Inherited: 0x00)
struct FReferenceBoneFrame {
public:

	struct FBoneReference Bone; // 0x00(0x10)
	struct FAxis Axis; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.RBFEntry
// Size: 0x10 (Inherited: 0x00)
struct FRBFEntry {
public:

	struct TArray<float> Values; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Size: 0x150 (Inherited: 0xf8)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase {
public:

	struct FBoneReference BoneToModify; // 0xf8(0x10)
	struct FVector translation; // 0x108(0x0c)
	struct FRotator Rotation; // 0x114(0x0c)
	struct FVector Scale; // 0x120(0x0c)
	enum class EBoneModificationMode TranslationMode; // 0x12c(0x01)
	enum class EBoneModificationMode RotationMode; // 0x12d(0x01)
	enum class EBoneModificationMode ScaleMode; // 0x12e(0x01)
	enum class EBoneControlSpace TranslationSpace; // 0x12f(0x01)
	enum class EBoneControlSpace RotationSpace; // 0x130(0x01)
	enum class EBoneControlSpace ScaleSpace; // 0x131(0x01)
	bool bDefendNan; // 0x132(0x01)
	bool bEnableRawPtr; // 0x133(0x01)
	char pad_134[0x1c]; // 0x134(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// Size: 0x118 (Inherited: 0xf8)
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase {
public:

	struct TArray<struct FAngularRangeLimit> AngularRangeLimits; // 0xf8(0x10)
	struct TArray<struct FVector> AngularOffsets; // 0x108(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Size: 0x148 (Inherited: 0xf8)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase {
public:

	struct FBoneReference SourceBone; // 0xf8(0x10)
	struct UCurveFloat* DrivingCurve; // 0x108(0x08)
	float Multiplier; // 0x110(0x04)
	float RangeMin; // 0x114(0x04)
	float RangeMax; // 0x118(0x04)
	float RemappedMin; // 0x11c(0x04)
	float RemappedMax; // 0x120(0x04)
	struct FName ParameterName; // 0x124(0x08)
	struct FBoneReference TargetBone; // 0x12c(0x10)
	enum class EDrivenDestinationMode DestinationMode; // 0x13c(0x01)
	enum class EDrivenBoneModificationMode ModificationMode; // 0x13d(0x01)
	enum class EComponentType SourceComponent; // 0x13e(0x01)
	char bUseRange : 1; // 0x13f(0x01)
	char bAffectTargetTranslationX : 1; // 0x13f(0x01)
	char bAffectTargetTranslationY : 1; // 0x13f(0x01)
	char bAffectTargetTranslationZ : 1; // 0x13f(0x01)
	char bAffectTargetRotationX : 1; // 0x13f(0x01)
	char bAffectTargetRotationY : 1; // 0x13f(0x01)
	char bAffectTargetRotationZ : 1; // 0x13f(0x01)
	char bAffectTargetScaleX : 1; // 0x13f(0x01)
	char bAffectTargetScaleY : 1; // 0x140(0x01)
	char bAffectTargetScaleZ : 1; // 0x140(0x01)
	char pad_140_2 : 6; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// Size: 0x138 (Inherited: 0xf8)
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase {
public:

	struct FBoneReference BoneToModify; // 0xf8(0x10)
	struct TArray<struct FConstraint> ConstraintSetup; // 0x108(0x10)
	struct TArray<float> ConstraintWeights; // 0x118(0x10)
	char pad_128[0x10]; // 0x128(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// Size: 0x120 (Inherited: 0xf8)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase {
public:

	struct FBoneReference SourceBone; // 0xf8(0x10)
	struct FBoneReference TargetBone; // 0x108(0x10)
	bool bCopyTranslation; // 0x118(0x01)
	bool bCopyRotation; // 0x119(0x01)
	bool bCopyScale; // 0x11a(0x01)
	enum class EBoneControlSpace ControlSpace; // 0x11b(0x01)
	char pad_11C[0x4]; // 0x11c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// Size: 0x128 (Inherited: 0xf8)
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase {
public:

	struct FBoneReference SourceBone; // 0xf8(0x10)
	struct FBoneReference TargetBone; // 0x108(0x10)
	bool bCopyTranslation; // 0x118(0x01)
	bool bCopyRotation; // 0x119(0x01)
	bool bCopyScale; // 0x11a(0x01)
	enum class CopyBoneDeltaMode CopyMode; // 0x11b(0x01)
	float TranslationMultiplier; // 0x11c(0x04)
	float RotationMultiplier; // 0x120(0x04)
	float ScaleMultiplier; // 0x124(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size: 0x150 (Inherited: 0xf8)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase {
public:

	struct FBoneReference RightHandFK; // 0xf8(0x10)
	struct FBoneReference LeftHandFK; // 0x108(0x10)
	struct FBoneReference RightHandIK; // 0x118(0x10)
	struct FBoneReference LeftHandIK; // 0x128(0x10)
	struct TArray<struct FBoneReference> IKBonesToMove; // 0x138(0x10)
	float HandFKWeight; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// Size: 0x128 (Inherited: 0xf8)
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase {
public:

	float ReachPrecision; // 0xf8(0x04)
	int32_t MaxIterations; // 0xfc(0x04)
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition; // 0x100(0x10)
	char pad_110[0x18]; // 0x110(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Size: 0x130 (Inherited: 0xf8)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase {
public:

	struct FBoneReference BoneToObserve; // 0xf8(0x10)
	enum class EBoneControlSpace DisplaySpace; // 0x108(0x01)
	bool bRelativeToRefPose; // 0x109(0x01)
	char pad_10A[0x2]; // 0x10a(0x02)
	struct FVector translation; // 0x10c(0x0c)
	struct FRotator Rotation; // 0x118(0x0c)
	struct FVector Scale; // 0x124(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// Size: 0x108 (Inherited: 0xf8)
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase {
public:

	char pad_F8[0x10]; // 0xf8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// Size: 0x5a0 (Inherited: 0xf8)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase {
public:

	struct UPhysicsAsset* OverridePhysicsAsset; // 0xf8(0x08)
	char pad_100[0x98]; // 0x100(0x98)
	struct FVector OverrideWorldGravity; // 0x198(0x0c)
	struct FVector RadialForceOrigin; // 0x1a4(0x0c)
	float RadialForceStrength; // 0x1b0(0x04)
	float RadialForceRadius; // 0x1b4(0x04)
	struct FVector ExternalForce; // 0x1b8(0x0c)
	struct FVector ComponentLinearAccScale; // 0x1c4(0x0c)
	struct FVector ComponentLinearVelScale; // 0x1d0(0x0c)
	struct FVector ComponentAppliedLinearAccClamp; // 0x1dc(0x0c)
	float CachedBoundsScale; // 0x1e8(0x04)
	struct FBoneReference BaseBoneRef; // 0x1ec(0x10)
	enum class ECollisionChannel OverlapChannel; // 0x1fc(0x01)
	enum class ESimulationSpace SimulationSpace; // 0x1fd(0x01)
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1fe(0x01)
	char pad_1FF[0x1]; // 0x1ff(0x01)
	char bEnableWorldGeometry : 1; // 0x200(0x01)
	char bOverrideWorldGravity : 1; // 0x200(0x01)
	char bTransferBoneVelocities : 1; // 0x200(0x01)
	char bFreezeIncomingPoseOnStart : 1; // 0x200(0x01)
	char bClampLinearTranslationLimitToRefPose : 1; // 0x200(0x01)
	char pad_200_5 : 3; // 0x200(0x01)
	char pad_201[0x39f]; // 0x201(0x39f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody_Chaos
// Size: 0x590 (Inherited: 0xf8)
struct FAnimNode_RigidBody_Chaos : public FAnimNode_SkeletalControlBase {
public:

	struct UPhysicsAsset* OverridePhysicsAsset; // 0xf8(0x08)
	struct FVector OverrideWorldGravity; // 0x100(0x0c)
	struct FVector ExternalForce; // 0x10c(0x0c)
	struct FVector ComponentLinearAccScale; // 0x118(0x0c)
	struct FVector ComponentLinearVelScale; // 0x124(0x0c)
	struct FVector ComponentAppliedLinearAccClamp; // 0x130(0x0c)
	float CachedBoundsScale; // 0x13c(0x04)
	struct FBoneReference BaseBoneRef; // 0x140(0x10)
	enum class ECollisionChannel OverlapChannel; // 0x150(0x01)
	enum class ESimulationSpace SimulationSpace; // 0x151(0x01)
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x152(0x01)
	char bEnableWorldGeometry : 1; // 0x153(0x01)
	char bOverrideWorldGravity : 1; // 0x153(0x01)
	char bTransferBoneVelocities : 1; // 0x153(0x01)
	char bFreezeIncomingPoseOnStart : 1; // 0x153(0x01)
	char bClampLinearTranslationLimitToRefPose : 1; // 0x153(0x01)
	char pad_153_5 : 3; // 0x153(0x01)
	char pad_154[0x43c]; // 0x154(0x43c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Size: 0x120 (Inherited: 0xf8)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase {
public:

	struct FBoneReference TargetBone; // 0xf8(0x10)
	struct FBoneReference SourceBone; // 0x108(0x10)
	float Multiplier; // 0x118(0x04)
	enum class EBoneAxis RotationAxisToRefer; // 0x11c(0x01)
	bool bIsAdditive; // 0x11d(0x01)
	char pad_11E[0x2]; // 0x11e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// Size: 0x298 (Inherited: 0xf8)
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase {
public:

	struct FBoneReference StartBone; // 0xf8(0x10)
	struct FBoneReference EndBone; // 0x108(0x10)
	enum class ESplineBoneAxis BoneAxis; // 0x118(0x01)
	bool bAutoCalculateSpline; // 0x119(0x01)
	char pad_11A[0x2]; // 0x11a(0x02)
	int32_t PointCount; // 0x11c(0x04)
	struct TArray<struct FTransform> ControlPoints; // 0x120(0x10)
	float Roll; // 0x130(0x04)
	float TwistStart; // 0x134(0x04)
	float TwistEnd; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FAlphaBlend TwistBlend; // 0x140(0x30)
	float Stretch; // 0x170(0x04)
	float offset; // 0x174(0x04)
	enum class EInterpCurveMode PositionInterpMode; // 0x178(0x01)
	enum class EInterpCurveMode RotationInterpMode; // 0x179(0x01)
	enum class EInterpCurveMode ScaleInterpMode; // 0x17a(0x01)
	char pad_17B[0x11d]; // 0x17b(0x11d)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Size: 0x158 (Inherited: 0xf8)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase {
public:

	struct FBoneReference SpringBone; // 0xf8(0x10)
	float MaxDisplacement; // 0x108(0x04)
	float SpringStiffness; // 0x10c(0x04)
	float SpringDamping; // 0x110(0x04)
	float ErrorResetThresh; // 0x114(0x04)
	char pad_118[0x3c]; // 0x118(0x3c)
	char bLimitDisplacement : 1; // 0x154(0x01)
	char bTranslateX : 1; // 0x154(0x01)
	char bTranslateY : 1; // 0x154(0x01)
	char bTranslateZ : 1; // 0x154(0x01)
	char bRotateX : 1; // 0x154(0x01)
	char bRotateY : 1; // 0x154(0x01)
	char bRotateZ : 1; // 0x154(0x01)
	char pad_154_7 : 1; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Size: 0x2b0 (Inherited: 0xf8)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase {
public:

	char pad_F8[0x38]; // 0xf8(0x38)
	struct FBoneReference TrailBone; // 0x130(0x10)
	int32_t ChainLength; // 0x140(0x04)
	enum class EAxis ChainBoneAxis; // 0x144(0x01)
	char bInvertChainBoneAxis : 1; // 0x145(0x01)
	char bLimitStretch : 1; // 0x145(0x01)
	char bLimitRotation : 1; // 0x145(0x01)
	char bUsePlanarLimit : 1; // 0x145(0x01)
	char bActorSpaceFakeVel : 1; // 0x145(0x01)
	char bReorientParentToChild : 1; // 0x145(0x01)
	char pad_145_6 : 2; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	float MaxDeltaTime; // 0x148(0x04)
	float RelaxationSpeedScale; // 0x14c(0x04)
	struct FRuntimeFloatCurve TrailRelaxationSpeed; // 0x150(0xa0)
	struct FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1f0(0x30)
	struct TArray<struct FRotationLimit> RotationLimits; // 0x220(0x10)
	struct TArray<struct FVector> RotationOffsets; // 0x230(0x10)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x240(0x10)
	float StretchLimit; // 0x250(0x04)
	struct FVector FakeVelocity; // 0x254(0x0c)
	struct FBoneReference BaseJoint; // 0x260(0x10)
	float LastBoneRotationAnimAlphaBlend; // 0x270(0x04)
	char pad_274[0x3c]; // 0x274(0x3c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// Size: 0x60 (Inherited: 0x00)
struct FBoneSocketTarget {
public:

	bool bUseSocket; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FBoneReference BoneReference; // 0x04(0x10)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FSocketReference SocketReference; // 0x20(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Size: 0x3d0 (Inherited: 0x2f8)
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer {
public:

	char pad_2F8[0x68]; // 0x2f8(0x68)
	struct FPoseLink BasePose; // 0x360(0x10)
	int32_t LODThreshold; // 0x370(0x04)
	struct FName SourceSocketName; // 0x374(0x08)
	struct FName PivotSocketName; // 0x37c(0x08)
	struct FVector LookAtLocation; // 0x384(0x0c)
	struct FVector SocketAxis; // 0x390(0x0c)
	float Alpha; // 0x39c(0x04)
	char pad_3A0[0x30]; // 0x3a0(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Size: 0x300 (Inherited: 0x2f8)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer {
public:

	float NormalizedTime; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Size: 0x3a0 (Inherited: 0x2f8)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer {
public:

	struct FPoseLink BasePose; // 0x2f8(0x10)
	int32_t LODThreshold; // 0x308(0x04)
	float Alpha; // 0x30c(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x310(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x318(0x48)
	struct FName AlphaCurveName; // 0x360(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x368(0x30)
	char pad_398[0x4]; // 0x398(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x39c(0x01)
	bool bAlphaBoolEnabled; // 0x39d(0x01)
	char pad_39E[0x2]; // 0x39e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// Size: 0x490 (Inherited: 0xf8)
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase {
public:

	float LinearDampingOverride; // 0xf8(0x04)
	float AngularDampingOverride; // 0xfc(0x04)
	char pad_100[0x60]; // 0x100(0x60)
	struct FBoneReference RelativeSpaceBone; // 0x160(0x10)
	struct FBoneReference BoundBone; // 0x170(0x10)
	struct FBoneReference ChainEnd; // 0x180(0x10)
	struct FVector BoxExtents; // 0x190(0x0c)
	struct FVector LocalJointOffset; // 0x19c(0x0c)
	float GravityScale; // 0x1a8(0x04)
	struct FVector GravityOverride; // 0x1ac(0x0c)
	float LinearSpringConstant; // 0x1b8(0x04)
	float AngularSpringConstant; // 0x1bc(0x04)
	float WindScale; // 0x1c0(0x04)
	struct FVector ComponentLinearAccScale; // 0x1c4(0x0c)
	struct FVector ComponentLinearVelScale; // 0x1d0(0x0c)
	struct FVector ComponentAppliedLinearAccClamp; // 0x1dc(0x0c)
	float AngularBiasOverride; // 0x1e8(0x04)
	int32_t NumSolverIterationsPreUpdate; // 0x1ec(0x04)
	int32_t NumSolverIterationsPostUpdate; // 0x1f0(0x04)
	struct FAnimPhysConstraintSetup ConstraintSetup; // 0x1f4(0x48)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; // 0x240(0x10)
	float SphereCollisionRadius; // 0x250(0x04)
	struct FVector ExternalForce; // 0x254(0x0c)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x260(0x10)
	enum class AnimPhysCollisionType CollisionType; // 0x270(0x01)
	enum class AnimPhysSimSpaceType SimulationSpace; // 0x271(0x01)
	char pad_272[0x2]; // 0x272(0x02)
	char bUseSphericalLimits : 1; // 0x274(0x01)
	char bUsePlanarLimit : 1; // 0x274(0x01)
	char bDoUpdate : 1; // 0x274(0x01)
	char bDoEval : 1; // 0x274(0x01)
	char bOverrideLinearDamping : 1; // 0x274(0x01)
	char bOverrideAngularBias : 1; // 0x274(0x01)
	char bOverrideAngularDamping : 1; // 0x274(0x01)
	char bEnableWind : 1; // 0x274(0x01)
	char pad_275_0 : 1; // 0x275(0x01)
	char bUseGravityOverride : 1; // 0x275(0x01)
	char bLinearSpring : 1; // 0x275(0x01)
	char bAngularSpring : 1; // 0x275(0x01)
	char bChain : 1; // 0x275(0x01)
	char pad_275_5 : 3; // 0x275(0x01)
	char pad_276[0xa]; // 0x276(0x0a)
	struct FRotationRetargetingInfo RetargetingSettings; // 0x280(0x150)
	char pad_3D0[0xc0]; // 0x3d0(0xc0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// Size: 0xf8 (Inherited: 0xe0)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase {
public:

	bool bActiveValue; // 0xe0(0x01)
	bool bEnableRawPtr; // 0xe1(0x01)
	char pad_E2[0x16]; // 0xe2(0x16)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// Size: 0xf8 (Inherited: 0xe0)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase {
public:

	struct TArray<int32_t> EnumToPoseIndex; // 0xe0(0x10)
	char ActiveEnumValue; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// Size: 0xe8 (Inherited: 0xe0)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase {
public:

	int32_t ActiveChildIndex; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// Size: 0xc8 (Inherited: 0xa8)
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler {
public:

	struct FPoseLink SourcePose; // 0xa8(0x10)
	enum class EAlphaBlendOption BlendOption; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct UCurveFloat* CustomCurve; // 0xc0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// Size: 0xc0 (Inherited: 0xa8)
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler {
public:

	struct FName PoseName; // 0xa8(0x08)
	float PoseWeight; // 0xb0(0x04)
	char pad_B4[0xc]; // 0xb4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// Size: 0x158 (Inherited: 0xa8)
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler {
public:

	struct FPoseLink SourcePose; // 0xa8(0x10)
	struct TArray<struct FBoneReference> SourceBones; // 0xb8(0x10)
	struct TArray<struct FBoneReference> OnlyDriveBones; // 0xc8(0x10)
	struct TArray<struct FPoseDriverTarget> PoseTargets; // 0xd8(0x10)
	char pad_E8[0x30]; // 0xe8(0x30)
	struct FBoneReference EvalSpaceBone; // 0x118(0x10)
	struct FRBFParams RBFParams; // 0x128(0x28)
	enum class EPoseDriverSource DriveSource; // 0x150(0x01)
	enum class EPoseDriverOutput DriveOutput; // 0x151(0x01)
	char bOnlyDriveSelectedBones : 1; // 0x152(0x01)
	char pad_152_1 : 7; // 0x152(0x01)
	char pad_153[0x5]; // 0x153(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Size: 0x168 (Inherited: 0xf8)
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase {
public:

	struct FReferenceBoneFrame BaseFrame; // 0xf8(0x20)
	struct FReferenceBoneFrame TwistFrame; // 0x118(0x20)
	struct FAxis TwistPlaneNormalAxis; // 0x138(0x10)
	float RangeMax; // 0x148(0x04)
	float RemappedMin; // 0x14c(0x04)
	float RemappedMax; // 0x150(0x04)
	struct FAnimCurveParam Curve; // 0x154(0x0c)
	char pad_160[0x8]; // 0x160(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.RBFTarget
// Size: 0xb8 (Inherited: 0x10)
struct FRBFTarget : public FRBFEntry {
public:

	float ScaleFactor; // 0x10(0x04)
	bool bApplyCustomCurve; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FRichCurve CustomCurve; // 0x18(0x98)
	enum class ERBFDistanceMethod DistanceMethod; // 0xb0(0x01)
	enum class ERBFFunctionType FunctionType; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// Size: 0x1b0 (Inherited: 0xf8)
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase {
public:

	struct FVector EffectorLocation; // 0xf8(0x0c)
	enum class EBoneControlSpace EffectorLocationSpace; // 0x104(0x01)
	char pad_105[0xb]; // 0x105(0x0b)
	struct FBoneSocketTarget EffectorTarget; // 0x110(0x60)
	struct FBoneReference TipBone; // 0x170(0x10)
	struct FBoneReference RootBone; // 0x180(0x10)
	float Precision; // 0x190(0x04)
	int32_t MaxIterations; // 0x194(0x04)
	bool bStartFromTail; // 0x198(0x01)
	bool bEnableRotationLimit; // 0x199(0x01)
	char pad_19A[0x6]; // 0x19a(0x06)
	struct TArray<float> RotationLimitPerJoints; // 0x1a0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_ChainLookAt
// Size: 0x1e0 (Inherited: 0xf8)
struct FAnimNode_ChainLookAt : public FAnimNode_SkeletalControlBase {
public:

	struct FAxis LookAt_Axis; // 0xf8(0x10)
	bool bUseLookUpAxis; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	struct FAxis LookUp_Axis; // 0x10c(0x10)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct FLookAtBoneInfo> BonesToModify; // 0x120(0x10)
	struct TArray<struct FLookAtEyeBoneInfo> EyeBonesToModify; // 0x130(0x10)
	struct FBoneSocketTarget LookAtTarget; // 0x140(0x60)
	struct FVector LookAtLocation; // 0x1a0(0x0c)
	float LookAtSpeedStrength; // 0x1ac(0x04)
	char pad_1B0[0x30]; // 0x1b0(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Size: 0x1c0 (Inherited: 0xf8)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase {
public:

	char pad_F8[0x8]; // 0xf8(0x08)
	struct FTransform EffectorTransform; // 0x100(0x30)
	struct FBoneSocketTarget EffectorTarget; // 0x130(0x60)
	struct FBoneReference TipBone; // 0x190(0x10)
	struct FBoneReference RootBone; // 0x1a0(0x10)
	float Precision; // 0x1b0(0x04)
	int32_t MaxIterations; // 0x1b4(0x04)
	enum class EBoneControlSpace EffectorTransformSpace; // 0x1b8(0x01)
	enum class EBoneRotationSource EffectorRotationSource; // 0x1b9(0x01)
	char pad_1BA[0x6]; // 0x1ba(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// Size: 0x1e0 (Inherited: 0xf8)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase {
public:

	struct FBoneReference BoneToModify; // 0xf8(0x10)
	char pad_108[0x8]; // 0x108(0x08)
	struct FBoneSocketTarget LookAtTarget; // 0x110(0x60)
	struct FVector LookAtLocation; // 0x170(0x0c)
	struct FAxis LookAt_Axis; // 0x17c(0x10)
	bool bUseLookUpAxis; // 0x18c(0x01)
	enum class EInterpolationBlend InterpolationType; // 0x18d(0x01)
	char pad_18E[0x2]; // 0x18e(0x02)
	struct FAxis LookUp_Axis; // 0x190(0x10)
	float LookAtClamp; // 0x1a0(0x04)
	float InterpolationTime; // 0x1a4(0x04)
	float InterpolationTriggerThreashold; // 0x1a8(0x04)
	char pad_1AC[0x34]; // 0x1ac(0x34)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Size: 0x210 (Inherited: 0xf8)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase {
public:

	struct FBoneReference IKBone; // 0xf8(0x10)
	float StartStretchRatio; // 0x108(0x04)
	float MaxStretchScale; // 0x10c(0x04)
	struct FVector EffectorLocation; // 0x110(0x0c)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FBoneSocketTarget EffectorTarget; // 0x120(0x60)
	struct FVector JointTargetLocation; // 0x180(0x0c)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FBoneSocketTarget JointTarget; // 0x190(0x60)
	struct FAxis TwistAxis; // 0x1f0(0x10)
	enum class EBoneControlSpace EffectorLocationSpace; // 0x200(0x01)
	enum class EBoneControlSpace JointTargetLocationSpace; // 0x201(0x01)
	char bAllowStretching : 1; // 0x202(0x01)
	char bTakeRotationFromEffectorSpace : 1; // 0x202(0x01)
	char bMaintainEffectorRelRot : 1; // 0x202(0x01)
	char bAllowTwist : 1; // 0x202(0x01)
	char pad_202_4 : 4; // 0x202(0x01)
	char pad_203[0xd]; // 0x203(0x0d)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
