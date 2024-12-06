
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum ZZAnimationLib.ECacheBlendBoneState
enum class ECacheBlendBoneState : int {
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	ECacheBlendBoneState_MAX = 3
};

// Enum ZZAnimationLib.EFootIKStatus
enum class EFootIKStatus : int {
	On = 0,
	Closing = 1,
	EFootIKStatus_MAX = 2
};

// Enum ZZAnimationLib.EIKFootRootLocalAxis
enum class EIKFootRootLocalAxis : int {
	NONE = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Velocity = 4,
	EIKFootRootLocalAxis_MAX = 5
};

// Enum ZZAnimationLib.EFindTargetFrameResult
enum class EFindTargetFrameResult : int {
	NORMAL = 0,
	CANNOTFIND = 1,
	DIVIDEBYZERO = 2,
	Count = 3,
	EFindTargetFrameResult_MAX = 4
};

// Enum ZZAnimationLib.ECharacterLocalDirection
enum class ECharacterLocalDirection : int {
	NORTH = 0,
	EAST = 1,
	SOUTH = 2,
	WEST = 3,
	Count = 4,
	ECharacterLocalDirection_MAX = 5
};

// Enum ZZAnimationLib.CopySingleBoneMode
enum class CopySingleBoneMode : int {
	Accumulate = 0,
	Copy = 1,
	CopySingleBoneMode_MAX = 2
};

// ScriptStruct ZZAnimationLib.AnimNode_CacheBlend
// Size: 0x2e0 (Inherited: 0x40)
struct FAnimNode_CacheBlend : public FAnimNode_Base {
public:

	struct FPoseLink Source; // 0x40(0x10)
	float BlendTime; // 0x50(0x04)
	bool ToggleFlag; // 0x54(0x01)
	enum class EAlphaBlendOption BlendType; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct UCurveFloat* CustomBlendCurve; // 0x58(0x08)
	int32_t LODThreshold; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	bool bResetChildOnActivation; // 0x68(0x01)
	char pad_69[0x277]; // 0x69(0x277)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.CacheBlendPose
// Size: 0x20 (Inherited: 0x00)
struct FCacheBlendPose {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.ZZAnimConstraintedLegIKDefinition
// Size: 0x40 (Inherited: 0x00)
struct FZZAnimConstraintedLegIKDefinition {
public:

	struct FBoneReference IKFootBone; // 0x00(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x04)
	float MinRotationAngle; // 0x24(0x04)
	struct TArray<struct FZZBoneAngleConstraints> BoneConstraints; // 0x28(0x10)
	enum class EAxis FootBoneForwardAxis; // 0x38(0x01)
	enum class EAxis HingeRotationAxis; // 0x39(0x01)
	bool bEnableRotationLimit; // 0x3a(0x01)
	bool bEnableKneeTwistCorrection; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.ZZBoneAngleConstraints
// Size: 0x1c (Inherited: 0x00)
struct FZZBoneAngleConstraints {
public:

	struct FBoneReference BoneName; // 0x00(0x10)
	float MinRotationAngleRadians; // 0x10(0x04)
	float AngleRange; // 0x14(0x04)
	enum class EAxis ConstraintPlaneNormalAxis; // 0x18(0x01)
	bool FlipAxis; // 0x19(0x01)
	bool EnableLimit; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.ZZAnimConstraintedLegIKData
// Size: 0xa0 (Inherited: 0x00)
struct FZZAnimConstraintedLegIKData {
public:

	char pad_0[0xa0]; // 0x00(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.ZZConstraintedIKChain
// Size: 0x40 (Inherited: 0x00)
struct FZZConstraintedIKChain {
public:

	char pad_0[0x40]; // 0x00(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.ZZConstraintedIKChainLink
// Size: 0x3c (Inherited: 0x00)
struct FZZConstraintedIKChainLink {
public:

	char pad_0[0x3c]; // 0x00(0x3c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.FootIKBoneInfo
// Size: 0x240 (Inherited: 0x00)
struct FFootIKBoneInfo {
public:

	bool bIsLeft; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FBoneReference FootBone; // 0x04(0x10)
	struct FBoneReference FootIKBone; // 0x14(0x10)
	char pad_24[0x8]; // 0x24(0x08)
	struct FVector JointTargetOffset; // 0x2c(0x0c)
	char pad_38[0x208]; // 0x38(0x208)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_LayeredBoneBlendSlotOpt
// Size: 0x108 (Inherited: 0x78)
struct FAnimNode_LayeredBoneBlendSlotOpt : public FAnimNode_Slot {
public:

	struct FPoseLink BasePose; // 0x78(0x10)
	struct FInputBlendPose LayerSetup; // 0x88(0x10)
	float BlendWeight; // 0x98(0x04)
	bool bMeshSpaceRotationBlend; // 0x9c(0x01)
	bool bMeshSpaceScaleBlend; // 0x9d(0x01)
	enum class ECurveBlendOption CurveBlendOption; // 0x9e(0x01)
	bool bBlendRootMotionBasedOnRootBone; // 0x9f(0x01)
	char pad_A0[0x4]; // 0xa0(0x04)
	int32_t LODThreshold; // 0xa4(0x04)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0xa8(0x10)
	struct FGuid SkeletonGuid; // 0xb8(0x10)
	struct FGuid VirtualBoneGuid; // 0xc8(0x10)
	char pad_D8[0x30]; // 0xd8(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_ModifyBoneOffset
// Size: 0x140 (Inherited: 0xf8)
struct FAnimNode_ModifyBoneOffset : public FAnimNode_SkeletalControlBase {
public:

	struct FBoneReference BoneToModify; // 0xf8(0x10)
	struct FVector translation; // 0x108(0x0c)
	struct FRotator Rotation; // 0x114(0x0c)
	enum class EBoneModificationMode TranslationMode; // 0x120(0x01)
	enum class EBoneModificationMode RotationMode; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	struct FName RootBoneSpace; // 0x124(0x08)
	struct FBoneReference RootBoneReference; // 0x12c(0x10)
	char pad_13C[0x4]; // 0x13c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.BoneRef
// Size: 0x10 (Inherited: 0x00)
struct FBoneRef {
public:

	struct FBoneReference Bone; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_PartApplyAdditive
// Size: 0x188 (Inherited: 0x110)
struct FAnimNode_PartApplyAdditive : public FAnimNode_ApplyAdditive {
public:

	struct UAnimSequenceBase* Sequence; // 0x110(0x08)
	float SequencePlayTime; // 0x118(0x04)
	char pad_11C[0x6c]; // 0x11c(0x6c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_ResetPose
// Size: 0x68 (Inherited: 0x40)
struct FAnimNode_ResetPose : public FAnimNode_Base {
public:

	struct FPoseLink Source; // 0x40(0x10)
	bool ToggleFlag; // 0x50(0x01)
	bool bEnableRawPtr; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_SlopeWarping
// Size: 0x300 (Inherited: 0xf8)
struct FAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase {
public:

	char pad_F8[0x8]; // 0xf8(0x08)
	struct FBoneReference IKFootRootBone; // 0x100(0x10)
	struct FBoneReference PelvisBone; // 0x110(0x10)
	struct TArray<struct FSlopeWarpingFootDefinition> FeetDefinitions; // 0x120(0x10)
	struct TArray<struct FSlopeWarpingFootData> FeetData; // 0x130(0x10)
	struct FVectorRK4SpringInterpolator PelvisOffsetInterpolator; // 0x140(0x08)
	char pad_148[0x34]; // 0x148(0x34)
	struct FVector GravityDir; // 0x17c(0x0c)
	struct FVector CustomFloorOffset; // 0x188(0x0c)
	bool bIsAI; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float CachedDeltaTime; // 0x198(0x04)
	struct FVector TargetFloorNormalWorldSpace; // 0x19c(0x0c)
	struct FVectorRK4SpringInterpolator FloorNormalInterpolator; // 0x1a8(0x08)
	char pad_1B0[0x34]; // 0x1b0(0x34)
	struct FVector TargetFloorOffsetLocalSpace; // 0x1e4(0x0c)
	struct FVectorRK4SpringInterpolator FloorOffsetInterpolator; // 0x1f0(0x08)
	char pad_1F8[0x34]; // 0x1f8(0x34)
	float MaxStepHeight; // 0x22c(0x04)
	char bKeepMeshInsideOfCapsule : 1; // 0x230(0x01)
	char bPullPelvisDown : 1; // 0x230(0x01)
	char bUseCustomFloorOffset : 1; // 0x230(0x01)
	char bWasOnGround : 1; // 0x230(0x01)
	char bShowDebug : 1; // 0x230(0x01)
	char bFloorSmoothingInitialized : 1; // 0x230(0x01)
	char pad_230_6 : 2; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	struct FVector ActorLocation; // 0x234(0x0c)
	char bUseFloorInfoFromProxy : 1; // 0x240(0x01)
	char pad_240_1 : 7; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	char bBlockHitFromProxy : 1; // 0x244(0x01)
	char pad_244_1 : 7; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct FVector FloorNormalFromProxy; // 0x248(0x0c)
	struct FVector FloorOffsetFromProxy; // 0x254(0x0c)
	bool bInterpolatorPositionNotEqualToFloorNormal; // 0x260(0x01)
	char bForceResetInterpolator : 1; // 0x261(0x01)
	char pad_261_1 : 7; // 0x261(0x01)
	char pad_262[0x2]; // 0x262(0x02)
	char bOnlyEnableSlopeIKWhenStop : 1; // 0x264(0x01)
	char bPoseNeetToBeModifiedByIK : 1; // 0x264(0x01)
	char pad_264_2 : 6; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	float FootIKDeltaHeight[0x2]; // 0x268(0x08)
	float FootIKLerpDeltaTime; // 0x270(0x04)
	char bStop : 1; // 0x274(0x01)
	char pad_274_1 : 7; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct FVector StopLeftFootIKDeltaHeight; // 0x278(0x0c)
	struct FVector StopRightFootIKDeltaHeight; // 0x284(0x0c)
	struct FVector StopLeftFootIKNormal; // 0x290(0x0c)
	struct FVector StopRightFootIKNormal; // 0x29c(0x0c)
	char bEnableRawPtr : 1; // 0x2a8(0x01)
	char pad_2A8_1 : 7; // 0x2a8(0x01)
	char pad_2A9[0x33]; // 0x2a9(0x33)
	struct FVector GravityDirCompSpace; // 0x2dc(0x0c)
	struct USkeletalMeshComponent* MySkelMeshComponent; // 0x2e8(0x08)
	struct UCharacterMovementComponent* MyMovementComponent; // 0x2f0(0x08)
	char pad_2F8[0x8]; // 0x2f8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.SlopeWarpingFootData
// Size: 0x60 (Inherited: 0x00)
struct FSlopeWarpingFootData {
public:

	char pad_0[0x60]; // 0x00(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.SlopeWarpingFootDefinition
// Size: 0x28 (Inherited: 0x00)
struct FSlopeWarpingFootDefinition {
public:

	struct FBoneReference IKFootBone; // 0x00(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x04)
	float FootSize; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.IKBones
// Size: 0x20 (Inherited: 0x00)
struct FIKBones {
public:

	struct FBoneReference IKFootBone; // 0x00(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.IKFootLocation
// Size: 0x30 (Inherited: 0x00)
struct FIKFootLocation {
public:

	struct FVector LimbRootLocation; // 0x00(0x0c)
	struct FVector OriginLocation; // 0x0c(0x0c)
	struct FVector ActualLocation; // 0x18(0x0c)
	struct FVector NewLocation; // 0x24(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.MSAISkeletalMeshComponentAppendedTickFunction
// Size: 0x70 (Inherited: 0x60)
struct FMSAISkeletalMeshComponentAppendedTickFunction : public FTickFunction {
public:

	struct UMSAISkeletalMeshComponent* Target; // 0x60(0x08)
	struct UAnimInstance* RelatedAnimInstance; // 0x68(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.CustomizedOrientationWarpingAngleSetting
// Size: 0x20 (Inherited: 0x00)
struct FCustomizedOrientationWarpingAngleSetting {
public:

	struct TArray<struct FCustomizedOrientationWarpingAngleRange> RangeSetting; // 0x00(0x10)
	struct TArray<float> DirectionAngleSetting; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.CustomizedOrientationWarpingAngleRange
// Size: 0x0c (Inherited: 0x00)
struct FCustomizedOrientationWarpingAngleRange {
public:

	struct FVector2D AngleRange; // 0x00(0x08)
	int32_t DirectionIndex; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.JogStartAnimBPValues
// Size: 0x38 (Inherited: 0x00)
struct FJogStartAnimBPValues {
public:

	struct UAnimSequence* JogStartFirstStepAnimation1; // 0x00(0x08)
	struct UAnimSequence* JogStartFirstStepAnimation2; // 0x08(0x08)
	struct UAnimSequence* JogStartAnimation; // 0x10(0x08)
	float JogStartFirstStepAnimation1CurrentTime; // 0x18(0x04)
	float JogStartFirstStepAnimation2CurrentTime; // 0x1c(0x04)
	float JogStartAnimationCurrentTime; // 0x20(0x04)
	float JogStartFirstStepAlpha; // 0x24(0x04)
	float JogStartFirstStepAngleAlpha; // 0x28(0x04)
	float JogStartOrientationWarpingAngleAlpha; // 0x2c(0x04)
	bool JogStartNormalToJogging; // 0x30(0x01)
	bool JogStartEarlyOutToJogging; // 0x31(0x01)
	bool IdleNormalToJogStarting; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimMovementData
// Size: 0x60 (Inherited: 0x00)
struct FAnimMovementData {
public:

	struct FVector MovementInputVector; // 0x00(0x0c)
	struct FVector MovementLastInputVector; // 0x0c(0x0c)
	struct FVector Velocity; // 0x18(0x0c)
	struct FVector HorizontalVelocity; // 0x24(0x0c)
	struct FVector Acceleration; // 0x30(0x0c)
	struct FRotator VelocityRotation; // 0x3c(0x0c)
	struct FRotator AccelerationRotation; // 0x48(0x0c)
	float VelocitySize; // 0x54(0x04)
	float VelocityHorizontalSize; // 0x58(0x04)
	bool HasMovementInput; // 0x5c(0x01)
	bool HasAcceleration; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_CCDLookAt
// Size: 0x210 (Inherited: 0xf8)
struct FAnimNode_CCDLookAt : public FAnimNode_SkeletalControlBase {
public:

	struct TArray<struct FCCDLookAtBoneInfo> BonesToModify; // 0xf8(0x10)
	struct TArray<struct FCCDLookAtEyeBoneInfo> EyeBonesToModify; // 0x108(0x10)
	float EyeTriggerBodyRotateAngleThreshold; // 0x118(0x04)
	struct FAxis LookAt_Axis; // 0x11c(0x10)
	struct FAxis LookUp_Axis; // 0x12c(0x10)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FBoneSocketTarget LookAtTarget; // 0x140(0x60)
	struct FVector LookAtLocation; // 0x1a0(0x0c)
	float LookAtSpeedStrength; // 0x1ac(0x04)
	char pad_1B0[0x60]; // 0x1b0(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.CCDLookAtEyeBoneInfo
// Size: 0x34 (Inherited: 0x00)
struct FCCDLookAtEyeBoneInfo {
public:

	struct FBoneReference EyeBone; // 0x00(0x10)
	float RotateSpeed; // 0x10(0x04)
	struct FAxis LookAt_Axis; // 0x14(0x10)
	bool bClampBasedOnRefPose; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector ClampDegree; // 0x28(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.CCDLookAtBoneInfo
// Size: 0x20 (Inherited: 0x00)
struct FCCDLookAtBoneInfo {
public:

	struct FBoneReference Bone; // 0x00(0x10)
	float RotateSpeed; // 0x10(0x04)
	float ClampDegree; // 0x14(0x04)
	bool bClampBasedOnRefPose; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float UpAxisWeight; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.CCDEyeballBone
// Size: 0x50 (Inherited: 0x00)
struct FCCDEyeballBone {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.CCDLookAtBone
// Size: 0xe0 (Inherited: 0x00)
struct FCCDLookAtBone {
public:

	char pad_0[0xe0]; // 0x00(0xe0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.CCDLookAtFixBone
// Size: 0x40 (Inherited: 0x00)
struct FCCDLookAtFixBone {
public:

	char pad_0[0x40]; // 0x00(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_CSCopySingleBone
// Size: 0x130 (Inherited: 0xf8)
struct FAnimNode_CSCopySingleBone : public FAnimNode_SkeletalControlBase {
public:

	struct FComponentSpacePoseLink SourcePose; // 0xf8(0x10)
	struct FBoneReference CopyBone; // 0x108(0x10)
	bool bCopyTranslation; // 0x118(0x01)
	bool bCopyRotation; // 0x119(0x01)
	bool bCopyScale; // 0x11a(0x01)
	char pad_11B[0x1]; // 0x11b(0x01)
	float TranslationMultiplier; // 0x11c(0x04)
	float RotationMultiplier; // 0x120(0x04)
	float ScaleMultiplier; // 0x124(0x04)
	enum class CopySingleBoneMode CopyMode; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.ZZAnimNode_HoldGunIK
// Size: 0x280 (Inherited: 0xf8)
struct FZZAnimNode_HoldGunIK : public FAnimNode_SkeletalControlBase {
public:

	char pad_F8[0x8]; // 0xf8(0x08)
	struct FBoneSocketTarget HoldingPoint; // 0x100(0x60)
	struct FBoneReference IKBone; // 0x160(0x10)
	float StartStretchRatio; // 0x170(0x04)
	float MaxStretchScale; // 0x174(0x04)
	struct FVector EffectorLocation; // 0x178(0x0c)
	char pad_184[0xc]; // 0x184(0x0c)
	struct FBoneSocketTarget EffectorTarget; // 0x190(0x60)
	struct FVector JointTargetLocation; // 0x1f0(0x0c)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct FBoneSocketTarget JointTarget; // 0x200(0x60)
	struct FAxis TwistAxis; // 0x260(0x10)
	enum class EBoneControlSpace EffectorLocationSpace; // 0x270(0x01)
	enum class EBoneControlSpace JointTargetLocationSpace; // 0x271(0x01)
	char bAllowStretching : 1; // 0x272(0x01)
	char bTakeRotationFromEffectorSpace : 1; // 0x272(0x01)
	char bMaintainEffectorRelRot : 1; // 0x272(0x01)
	char bAllowTwist : 1; // 0x272(0x01)
	char pad_272_4 : 4; // 0x272(0x01)
	char pad_273[0xd]; // 0x273(0x0d)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_LayerBlend2
// Size: 0x108 (Inherited: 0x100)
struct FAnimNode_LayerBlend2 : public FAnimNode_LayeredBoneBlend {
public:

	float MeshSpaceRotBlendWeight; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.SingleBoneLayeredConfig
// Size: 0x14 (Inherited: 0x00)
struct FSingleBoneLayeredConfig {
public:

	struct FBoneReference Bone; // 0x00(0x10)
	float BoneBlendWeight; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_SpringArmSocket
// Size: 0x1d0 (Inherited: 0xf8)
struct FAnimNode_SpringArmSocket : public FAnimNode_SkeletalControlBase {
public:

	char pad_F8[0x8]; // 0xf8(0x08)
	struct FBoneSocketTarget SpringArmEndSocket; // 0x100(0x60)
	struct FBoneReference SpringArmRootBone; // 0x160(0x10)
	float SpringStiffness; // 0x170(0x04)
	float Damp; // 0x174(0x04)
	float subStepTime; // 0x178(0x04)
	float springArmOffsetThreshold; // 0x17c(0x04)
	bool flipSpringArm; // 0x180(0x01)
	bool simpleLagSpringArm; // 0x181(0x01)
	char pad_182[0x2]; // 0x182(0x02)
	float LagSpeed; // 0x184(0x04)
	float angleConstraint; // 0x188(0x04)
	int32_t MaxIterationCount; // 0x18c(0x04)
	char pad_190[0x40]; // 0x190(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_VirtualParent
// Size: 0x1a0 (Inherited: 0xf8)
struct FAnimNode_VirtualParent : public FAnimNode_SkeletalControlBase {
public:

	char pad_F8[0x8]; // 0xf8(0x08)
	struct FBoneSocketTarget VirtualParentSocket; // 0x100(0x60)
	struct TArray<struct FBoneReference> VirtualChildren; // 0x160(0x10)
	struct TArray<struct FBoneReference> VirtualChildrenFromParent; // 0x170(0x10)
	struct FVector AdditiveParentLocationOffset; // 0x180(0x0c)
	struct FRotator AddRotationInBoneSpace; // 0x18c(0x0c)
	bool NeedToApplyRotationToParentAsWell; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.ZZBlueprintableLegDefinition
// Size: 0x10 (Inherited: 0x00)
struct FZZBlueprintableLegDefinition {
public:

	struct TArray<struct FZZAnimConstraintedLegIKDefinition> Legs; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.FootIKTraceInfo
// Size: 0x10 (Inherited: 0x00)
struct FFootIKTraceInfo {
public:

	enum class ECollisionChannel CollisionChannel; // 0x00(0x01)
	bool TraceComplex; // 0x01(0x01)
	bool bUseSphereTrace; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float SphereTraceRadius; // 0x04(0x04)
	float RayCastUp; // 0x08(0x04)
	float RayCastDown; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.FootIKRootBoneInfo
// Size: 0x60 (Inherited: 0x00)
struct FFootIKRootBoneInfo {
public:

	struct FBoneReference RootBone; // 0x00(0x10)
	float IdleLerpHalfLifeTime; // 0x10(0x04)
	char pad_14[0x4c]; // 0x14(0x4c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.ModifyMultBoneStructForPin
// Size: 0x70 (Inherited: 0x00)
struct FModifyMultBoneStructForPin {
public:

	struct TArray<struct FBoneReference> BoneToModifys; // 0x00(0x10)
	struct TArray<struct FVector> Translations; // 0x10(0x10)
	struct TArray<enum class EBoneModificationMode> TranslationModes; // 0x20(0x10)
	struct TArray<enum class EBoneControlSpace> TranslationSpaces; // 0x30(0x10)
	struct TArray<struct FRotator> Rotations; // 0x40(0x10)
	struct TArray<enum class EBoneModificationMode> RotationModes; // 0x50(0x10)
	struct TArray<enum class EBoneControlSpace> RotationSpace; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AxisSettings
// Size: 0x08 (Inherited: 0x00)
struct FAxisSettings {
public:

	enum class EAxis YawRotationAxis; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BodyOrientationAlpha; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.PartAnimStructForPin
// Size: 0x10 (Inherited: 0x00)
struct FPartAnimStructForPin {
public:

	struct TArray<struct UAnimSequenceBase*> PartAnims; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.PelvisAdjustmentInterp
// Size: 0x08 (Inherited: 0x00)
struct FPelvisAdjustmentInterp {
public:

	float Stiffness; // 0x00(0x04)
	float Dampen; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimInstanceAttributeDict
// Size: 0x1e0 (Inherited: 0x00)
struct FAnimInstanceAttributeDict {
public:

	struct TMap<struct FName, bool> BoolAttrs; // 0x00(0x50)
	struct TMap<struct FName, float> FloatAttrs; // 0x50(0x50)
	struct TMap<struct FName, struct FVector> VectorAttrs; // 0xa0(0x50)
	struct TMap<struct FName, struct FRotator> RotatorAttrs; // 0xf0(0x50)
	struct TMap<struct FName, int32_t> IntegerAttrs; // 0x140(0x50)
	struct TMap<struct FName, struct UAnimSequence*> SequenceAttrs; // 0x190(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.FootLockLimbDataDefine
// Size: 0xa0 (Inherited: 0x00)
struct FFootLockLimbDataDefine {
public:

	struct FBoneReference FootBone; // 0x00(0x10)
	struct FBoneReference ToeBone; // 0x10(0x10)
	struct FBoneReference IkTarget; // 0x20(0x10)
	int32_t LimbBoneCount; // 0x30(0x04)
	char pad_34[0x6c]; // 0x34(0x6c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_ConstraintedLegIK
// Size: 0x128 (Inherited: 0xf8)
struct FAnimNode_ConstraintedLegIK : public FAnimNode_SkeletalControlBase {
public:

	float ReachPrecision; // 0xf8(0x04)
	int32_t MaxIterations; // 0xfc(0x04)
	struct FZZBlueprintableLegDefinition LegsDefinition; // 0x100(0x10)
	char pad_110[0x18]; // 0x110(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_FootIK
// Size: 0x230 (Inherited: 0xf8)
struct FAnimNode_FootIK : public FAnimNode_SkeletalControlBase {
public:

	bool bUseRaiseFootIK; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	struct FBoneReference IKGunBone; // 0xfc(0x10)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FFootIKRootBoneInfo HipsBone; // 0x110(0x60)
	struct TArray<struct FFootIKBoneInfo> Foot; // 0x170(0x10)
	float FootHeightFromGround; // 0x180(0x04)
	struct FFootIKTraceInfo TraceInfo; // 0x184(0x10)
	float MaxDeltaAngle; // 0x194(0x04)
	float MaxStretchLength; // 0x198(0x04)
	bool EnablePredictPath; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	struct FVector CharacterVelocity; // 0x1a0(0x0c)
	float NormalizedSpeed; // 0x1ac(0x04)
	float BSPlayingRate; // 0x1b0(0x04)
	float CharacterMaxStepHeight; // 0x1b4(0x04)
	float CharacterMaxStepHeightForWalk; // 0x1b8(0x04)
	float FootOnGroundThreshold; // 0x1bc(0x04)
	char pad_1C0[0x8]; // 0x1c0(0x08)
	struct UWorld* World; // 0x1c8(0x08)
	char pad_1D0[0x60]; // 0x1d0(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_ModifyMultBone
// Size: 0x188 (Inherited: 0xf8)
struct FAnimNode_ModifyMultBone : public FAnimNode_SkeletalControlBase {
public:

	struct FModifyMultBoneStructForPin ModifyMultBoneStruct; // 0xf8(0x70)
	struct TArray<struct FBoneReference> BoneToModifys; // 0x168(0x10)
	bool bDefendNan; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	int32_t LastBoneIndex; // 0x17c(0x04)
	bool bPrintLog; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimMode_OrientationWarping
// Size: 0x88 (Inherited: 0x40)
struct FAnimMode_OrientationWarping : public FAnimNode_Base {
public:

	struct FPoseLink BasePose; // 0x40(0x10)
	float LocomotionAngle; // 0x50(0x04)
	struct FAxisSettings Settings; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FBoneRef> SpineBones; // 0x60(0x10)
	struct FBoneReference IKFootRootBone; // 0x70(0x10)
	bool bEnableOrientationWarping; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_PartAnimPlayer
// Size: 0x1e0 (Inherited: 0x100)
struct FAnimNode_PartAnimPlayer : public FAnimNode_SequencePlayer {
public:

	struct FPartAnimStructForPin PartAnimStruct; // 0x100(0x10)
	bool ResetAccumulatedTimeToggle; // 0x110(0x01)
	bool EvaluatePartAnimByName; // 0x111(0x01)
	char pad_112[0xce]; // 0x112(0xce)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_SpeedWarping
// Size: 0x1b0 (Inherited: 0xf8)
struct FAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase {
public:

	struct FBoneReference IKFootRootBone; // 0xf8(0x10)
	struct TArray<struct FIKBones> FeetDefinitions; // 0x108(0x10)
	struct FBoneReference PelvisBone; // 0x118(0x10)
	enum class EIKFootRootLocalAxis SpeedWarpingAxisMode; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	float SpeedScaling; // 0x12c(0x04)
	float PelvisAdjustmentAlpha; // 0x130(0x04)
	float MaxIter; // 0x134(0x04)
	struct FPelvisAdjustmentInterp PelvisAdjustmentInterp; // 0x138(0x08)
	bool ClampIKUsingFKLeg; // 0x140(0x01)
	bool bClampResult; // 0x141(0x01)
	char pad_142[0x2]; // 0x142(0x02)
	float ClampMin; // 0x144(0x04)
	float ClampMax; // 0x148(0x04)
	bool bInterpResult; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	float InterpSpeedIncreasing; // 0x150(0x04)
	float InterpSpeedDecreasing; // 0x154(0x04)
	float VelocityModeMinThreshold; // 0x158(0x04)
	char pad_15C[0x54]; // 0x15c(0x54)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.DynamicAttrAnimInstanceProxy
// Size: 0x930 (Inherited: 0x748)
struct FDynamicAttrAnimInstanceProxy : public FAnimInstanceProxy {
public:

	struct AActor* OwningActor; // 0x748(0x08)
	struct FAnimInstanceAttributeDict AttrDicts; // 0x750(0x1e0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZZAnimationLib.AnimNode_FootModify
// Size: 0x350 (Inherited: 0xf8)
struct FAnimNode_FootModify : public FAnimNode_SkeletalControlBase {
public:

	char pad_F8[0x8]; // 0xf8(0x08)
	struct FFootLockLimbDataDefine LeftFootDefinition; // 0x100(0xa0)
	struct FFootLockLimbDataDefine RightFootDefinition; // 0x1a0(0xa0)
	struct FBoneReference RootBoneToModify; // 0x240(0x10)
	struct FBoneReference HipsToModify; // 0x250(0x10)
	struct FBoneReference LegEndToModify; // 0x260(0x10)
	struct FVector LeftFootTranslation; // 0x270(0x0c)
	struct FRotator LeftFootRotation; // 0x27c(0x0c)
	struct FVector RightFootTranslation; // 0x288(0x0c)
	struct FRotator RightFootRotation; // 0x294(0x0c)
	bool ModifyRoot; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	struct FName LeftFootCurveName; // 0x2a4(0x08)
	struct FName RightFootCurveName; // 0x2ac(0x08)
	struct FName LeftFootToeCurveName; // 0x2b4(0x08)
	struct FName RightFootToeCurveName; // 0x2bc(0x08)
	float VelocitySize; // 0x2c4(0x04)
	float BaseVelocitySize; // 0x2c8(0x04)
	struct FVector ActorVelocity; // 0x2cc(0x0c)
	float LockReleaseSmoothTime; // 0x2d8(0x04)
	char pad_2DC[0x74]; // 0x2dc(0x74)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
