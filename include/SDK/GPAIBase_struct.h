
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPAIBase.EAIJobState
enum class EAIJobState : int {
	EAIJobState_Idle = 0,
	EAIJobState_Finish = 1,
	EAIJobState_InProgress = 2,
	EAIJobState_MAX = 3
};

// Enum GPAIBase.EAIJobType
enum class EAIJobType : int {
	EAIJob_None = 0,
	EAIJob_NormalAttack = 1,
	EAIJob_FindIdlePlayer = 2,
	EAIJob_Search = 3,
	EAIJob_Patrol = 4,
	EAIJob_Guard = 5,
	EAIJob_Dash = 6,
	EAIJob_Investigate = 7,
	EAIJob_GroupPatrol = 8,
	EAIJob_GroupRomytheus = 9,
	EAIJob_MAX = 10
};

// Enum GPAIBase.EAIThreatAreaWeightPainter
enum class EAIThreatAreaWeightPainter : int {
	EAIPAINTER_CONST = 0,
	EAIPAINTER_LINEAR_DISTANCE = 1,
	EAIPAINTER_MAX = 2
};

// Enum GPAIBase.EAIThreatAreaType
enum class EAIThreatAreaType : int {
	EThreatArea_Static = 0,
	EThreatArea_Dynamic = 1,
	EThreatArea_MAX = 2
};

// Enum GPAIBase.EAIThreatType
enum class EAIThreatType : int {
	EThreatType_Default = 0,
	EThreatType_EyeSight = 1,
	EThreatType_Hurt = 2,
	EThreatType_HearSound = 3,
	EThreatType_AirHit = 4,
	EThreatType_MAX = 5
};

// Enum GPAIBase.EGPSpecificBehaviorType
enum class EGPSpecificBehaviorType : int {
	ENormal = 0,
	EDefensive = 1,
	EDistanceApart = 2,
	EAgressive = 3,
	ECarefully = 4,
	ETestType1 = 5,
	ETestType2 = 6,
	EMAX_Valid = 7,
	EGPSpecificBehaviorType_MAX = 8
};

// Enum GPAIBase.ECoverPointCondition
enum class ECoverPointCondition : int {
	ECover_None = 0,
	ECover_Enter_Approaching = 1,
	ECover_Enter_PlayingEnterCoverMontage = 2,
	ECover_Enter_InterruptedEnterCoverMontage = 3,
	ECover_Enter_Complete = 4,
	ECover_MAX = 5
};

// Enum GPAIBase.EAIDensityDistanceType
enum class EAIDensityDistanceType : int {
	ECheckDistType_2D = 0,
	ECheckDistType_3D = 1,
	ECheckDistType_2DSquare = 2,
	ECheckDistType_3DSquare = 3,
	ECheckDistType_MAX = 4
};

// Enum GPAIBase.EAIDensityRatingType
enum class EAIDensityRatingType : int {
	EDensityType_Intensity = 0,
	EDensityType_Sparsity = 1,
	EDensityType_MAX = 2
};

// Enum GPAIBase.EAIDistanceType
enum class EAIDistanceType : int {
	ECheckDistType_3D = 0,
	ECheckDistType_2D = 1,
	ECheckDistType_Z = 2,
	ECheckDistType_AbsoluteZ = 3,
	ECheckDistType_MAX = 4
};

// Enum GPAIBase.EGPEnvTestPathTest
enum class EGPEnvTestPathTest : int {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	PathMinDistFromTheTarget = 3,
	EGPEnvTestPathTest_MAX = 4
};

// Enum GPAIBase.EGPThreatRatingType
enum class EGPThreatRatingType : int {
	EThreatRateType_Safe = 0,
	EThreatRateType_Danger = 1,
	EThreatRateType_MAX = 2
};

// Enum GPAIBase.EAIVisibilityRatingType
enum class EAIVisibilityRatingType : int {
	EVisRateType_Visible = 0,
	EVisRateType_Invisible = 1,
	EVisRateType_MAX = 2
};

// Enum GPAIBase.EAIVisibilityCheckType
enum class EAIVisibilityCheckType : int {
	EVisCheckType_FromTestToContext = 0,
	EVisCheckType_FromContextToTest = 1,
	EVisCheckType_MAX = 2
};

// Enum GPAIBase.EGeneratorIncludeType
enum class EGeneratorIncludeType : int {
	EPointInclude_RoundDiscreteOnly = 0,
	EPointInclude_CoverOnly = 1,
	EPointInclude_Both = 2,
	EPointInclude_MAX = 3
};

// Enum GPAIBase.ECoverOccupyState
enum class ECoverOccupyState : int {
	ECoverOccupyState_None = 0,
	ECoverOccupyState_PreOccupy = 1,
	ECoverOccupyState_Occupied = 2,
	ECoverOccupyState_PostOccupy = 3,
	ECoverOccupyState_MAX = 4
};

// Enum GPAIBase.ECoverType
enum class ECoverType : int {
	ECT_None = 0,
	ECT_Standing = 1,
	ECT_StandingAndCrounching = 2,
	ECT_Crounching = 3,
	ECST_MAX = 4,
	ECoverType_MAX = 5
};

// Enum GPAIBase.ECoverShootType
enum class ECoverShootType : int {
	ECST_None = 0,
	ECST_StandingLeft = 1,
	ECST_StandingRight = 2,
	ECST_CrouchingRight = 3,
	ECST_CrouchingLeft = 4,
	ECST_CrouchingFront = 5,
	ECST_MAX = 6
};

// ScriptStruct GPAIBase.AttractionPerceptionFactor
// Size: 0x08 (Inherited: 0x00)
struct FAttractionPerceptionFactor {
public:

	float RadiusScaler; // 0x00(0x04)
	float AngleScaler; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.AIJobList
// Size: 0x10 (Inherited: 0x00)
struct FAIJobList {
public:

	struct TArray<struct UAIJob*> Jobs; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.AIJobSetting
// Size: 0x38 (Inherited: 0x00)
struct FAIJobSetting {
public:

	enum class EAIJobType JobType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MaxJobCount; // 0x04(0x04)
	int32_t MaxActivedJobCount; // 0x08(0x04)
	int32_t MaxAINum; // 0x0c(0x04)
	float JobWaitTime; // 0x10(0x04)
	float JobOverTime; // 0x14(0x04)
	bool bAutoProduce; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ProduceInterval; // 0x1c(0x04)
	float ProduceIntervalDeviation; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UClass* AcquireJobFilterClass; // 0x28(0x08)
	float NextProduceTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.ExclusionTag
// Size: 0x18 (Inherited: 0x00)
struct FExclusionTag {
public:

	int32_t TagId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FExclusionDesc> ExclusionDetail; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.ExclusionDesc
// Size: 0x20 (Inherited: 0x00)
struct FExclusionDesc {
public:

	struct FString MustLoadLevel; // 0x00(0x10)
	struct TArray<struct FString> Exclusionlevel; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.AIPathFindingResult
// Size: 0x28 (Inherited: 0x00)
struct FAIPathFindingResult {
public:

	bool PathSuccess; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector EndPosition; // 0x04(0x0c)
	float FinalScore; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FVector> PathNode; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.AISightExEvent
// Size: 0x18 (Inherited: 0x00)
struct FAISightExEvent {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* SeenActor; // 0x08(0x08)
	struct AActor* Observer; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.VisionConeConfig
// Size: 0x38 (Inherited: 0x00)
struct FVisionConeConfig {
public:

	char pad_0[0x8]; // 0x00(0x08)
	float VisionConeRadius; // 0x08(0x04)
	float VisionConeHalfAngle; // 0x0c(0x04)
	float VisionConeHeight; // 0x10(0x04)
	float DelayDetectTime; // 0x14(0x04)
	float VisibleRate; // 0x18(0x04)
	struct FColor DebugConeColor; // 0x1c(0x04)
	char pad_20[0x18]; // 0x20(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.AIThreatArea
// Size: 0x2c (Inherited: 0x00)
struct FAIThreatArea {
public:

	enum class EAIThreatAreaType ThreatAreaType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector AreaCenter; // 0x04(0x0c)
	float AreaRadiusSq; // 0x10(0x04)
	float AreaHeight; // 0x14(0x04)
	float Duration; // 0x18(0x04)
	float StartTime; // 0x1c(0x04)
	float ThreatScore; // 0x20(0x04)
	struct TWeakObjectPtr<struct AActor> RelatedActor; // 0x24(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.CharacterThreatRecord
// Size: 0x60 (Inherited: 0x00)
struct FCharacterThreatRecord {
public:

	struct TWeakObjectPtr<struct ACHARACTER> RelatedCharacter; // 0x00(0x08)
	struct TArray<struct FAIThreatEvent> ScalableThreatEvents; // 0x08(0x10)
	struct TArray<struct FAIThreatEvent> ThreatEvents; // 0x18(0x10)
	float CurrentThreatValue; // 0x28(0x04)
	float CurrentSightThreatValue; // 0x2c(0x04)
	float CurrentHurtThreatValue; // 0x30(0x04)
	float CurrentHearingThreatValue; // 0x34(0x04)
	struct FVector LastHeardLocation; // 0x38(0x0c)
	char pad_44[0x1c]; // 0x44(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.AIThreatEvent
// Size: 0x20 (Inherited: 0x00)
struct FAIThreatEvent {
public:

	enum class EAIThreatType ThreatType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ThreatBeginTime; // 0x04(0x04)
	float CurrentThreatValue; // 0x08(0x04)
	float ThreatValue_Base; // 0x0c(0x04)
	float ThreatValue_DynamicDistPart; // 0x10(0x04)
	float ThreatValue_DynamicDirectionPart; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.BlackboardDataFrame
// Size: 0x40 (Inherited: 0x00)
struct FBlackboardDataFrame {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x08(0x08)
	char pad_10[0x20]; // 0x10(0x20)
	struct TArray<struct UBlackboardKeyType*> KeyInstances; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.GPBehaviorFactor
// Size: 0x08 (Inherited: 0x00)
struct FGPBehaviorFactor {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.GPAICoverAnimMontageTable
// Size: 0x78 (Inherited: 0x08)
struct FGPAICoverAnimMontageTable : public FTableRowBase {
public:

	struct TArray<struct FCoverPointAnimInfo> Fwd_EnterCoverAnimList; // 0x08(0x10)
	struct TArray<struct FCoverPointAnimInfo> FL_EnterCoverAnimList; // 0x18(0x10)
	struct TArray<struct FCoverPointAnimInfo> FR_EnterCoverAnimList; // 0x28(0x10)
	struct TArray<struct FCoverPointAnimInfo> LT_EnterCoverAnimList; // 0x38(0x10)
	struct TArray<struct FCoverPointAnimInfo> RT_EnterCoverAnimList; // 0x48(0x10)
	struct TArray<struct FCoverPointAnimInfo> BL_EnterCoverAnimList; // 0x58(0x10)
	struct TArray<struct FCoverPointAnimInfo> BR_EnterCoverAnimList; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.CoverPointAnimInfo
// Size: 0x10 (Inherited: 0x00)
struct FCoverPointAnimInfo {
public:

	struct UAnimMontage* EnterMontage; // 0x00(0x08)
	int32_t DistanceQuared; // 0x08(0x04)
	int32_t DistanceTolerance; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.GPAIMontageMapping
// Size: 0x20 (Inherited: 0x00)
struct FGPAIMontageMapping {
public:

	struct FSoftObjectPath Montage; // 0x00(0x18)
	int32_t SpecKey; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.AINodeMomeryAdress
// Size: 0x08 (Inherited: 0x00)
struct FAINodeMomeryAdress {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.GPSpecificBehaviorTreeSetting
// Size: 0x10 (Inherited: 0x00)
struct FGPSpecificBehaviorTreeSetting {
public:

	enum class EGPSpecificBehaviorType TypeSetting; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UBehaviorTree* BehaviorAsset; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.AICommonNavPointInfo
// Size: 0x18 (Inherited: 0x00)
struct FAICommonNavPointInfo {
public:

	struct UNZCoverPoint* TargetCover; // 0x00(0x08)
	struct FVector TargetLocation; // 0x08(0x0c)
	bool bPointValid; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.NZCoverPointInfo
// Size: 0x60 (Inherited: 0x00)
struct FNZCoverPointInfo {
public:

	struct FVector Location; // 0x00(0x0c)
	struct FVector _DirectionToWall; // 0x0c(0x0c)
	struct FRotator RotatorXToWall; // 0x18(0x0c)
	bool bLeftCoverStanding; // 0x24(0x01)
	bool bRightCoverStanding; // 0x25(0x01)
	bool bLeftCoverCrouched; // 0x26(0x01)
	bool bRightCoverCrouched; // 0x27(0x01)
	bool bFrontCoverCrouched; // 0x28(0x01)
	enum class ECoverType CoverType; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	/*struct TSoftObjectPtr<AActor>*/char CoverActor[0x28]; // 0x30(0x28)
	char pad_58[0x8]; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.AIThreatConfig
// Size: 0x40 (Inherited: 0x08)
struct FAIThreatConfig : public FTableRowBase {
public:

	enum class EGPSpecificBehaviorType BehaviorType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ThreatDecreaseDistance; // 0x0c(0x04)
	float ThreatDecrease_Default; // 0x10(0x04)
	float ThreatDecrease_EyeSight; // 0x14(0x04)
	float ThreatDecrease_Hurt; // 0x18(0x04)
	float ThreatDecrease_HearSound; // 0x1c(0x04)
	float ThreatDecrease_AirHit; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UCurveFloat* EyeSightDistCurve; // 0x28(0x08)
	struct UCurveFloat* EyeSightDirectionCurve; // 0x30(0x08)
	struct UCurveFloat* HearingDistCurve; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.CoverShootAnimInfo
// Size: 0x18 (Inherited: 0x00)
struct FCoverShootAnimInfo {
public:

	struct UAnimMontage* StartCoverShootMontage; // 0x00(0x08)
	float StartCoverShootDelay; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAnimMontage* EndCoverShootMontage; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPAIBase.GPAICoverShootAnimTable
// Size: 0x98 (Inherited: 0x08)
struct FGPAICoverShootAnimTable : public FTableRowBase {
public:

	struct FCoverShootAnimInfo CrouchRight_ToFire; // 0x08(0x18)
	struct FCoverShootAnimInfo CrouchLeft_ToFire; // 0x20(0x18)
	struct FCoverShootAnimInfo CrouchRight_ToUpFire; // 0x38(0x18)
	struct FCoverShootAnimInfo CrouchLeft_ToUpFire; // 0x50(0x18)
	struct FCoverShootAnimInfo StandRight_ToFire; // 0x68(0x18)
	struct FCoverShootAnimInfo StandLeft_ToFire; // 0x80(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
