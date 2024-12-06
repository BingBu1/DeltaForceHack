
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : int {
	Success = 0,
	Blocked = 1,
	OffPath = 2,
	Aborted = 3,
	Skipped_DEPRECATED = 4,
	Invalid = 5,
	EPathFollowingResult_MAX = 6
};

// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : int {
	Processing = 0,
	Success = 1,
	Failed = 2,
	Aborted = 3,
	OwnerLost = 4,
	MissingParam = 5,
	EEnvQueryStatus_MAX = 6
};

// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : int {
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2
};

// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : int {
	Lowest = 0,
	Low = 1,
	AutonomousAI = 2,
	High = 3,
	Ultimate = 4,
	EAITaskPriority_MAX = 5
};

// Enum AIModule.EGenericAICheck
enum class EGenericAICheck : int {
	Less = 0,
	LessOrEqual = 1,
	Equal = 2,
	NotEqual = 3,
	GreaterOrEqual = 4,
	Greater = 5,
	IsTrue = 6,
	MAX = 7
};

// Enum AIModule.EAILockSource
enum class EAILockSource : int {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4
};

// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : int {
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5
};

// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : int {
	Invalid = 0,
	FailedToStart = 1,
	InstantAbort = 2,
	FinishedAborting = 3,
	FinishedExecution = 4,
	Push = 5,
	EPawnActionEventType_MAX = 6
};

// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : int {
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	EPawnActionResult_MAX = 5
};

// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : int {
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5
};

// Enum AIModule.FAIDistanceType
enum class FAIDistanceType : int {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	MAX = 3
};

// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : int {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : int {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4
};

// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : int {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4
};

// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : int {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4
};

// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : int {
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5,
	EArithmeticKeyOperation_MAX = 6
};

// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : int {
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2
};

// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : int {
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2
};

// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : int {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5
};

// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : int {
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2
};

// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : int {
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2
};

// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : int {
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2
};

// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : int {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3
};

// Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : int {
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod_MAX = 2
};

// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : int {
	Absolute = 0,
	RelativeToScores = 1,
	EEQSNormalizationType_MAX = 2
};

// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : int {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	EEnvTestDistance_MAX = 4
};

// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : int {
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2
};

// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : int {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3
};

// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : int {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3
};

// Enum AIModule.EEnvDirection
enum class EEnvDirection : int {
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2
};

// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : int {
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	EEnvOverlapShape_MAX = 3
};

// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : int {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4
};

// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : int {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3,
	EEnvQueryTrace_MAX = 4
};

// Enum AIModule.EAIParamType
enum class EAIParamType : int {
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3
};

// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : int {
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3
};

// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : int {
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	EEnvQueryRunMode_MAX = 4
};

// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : int {
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	Multiply = 3,
	EEnvTestScoreOperator_MAX = 4
};

// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : int {
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2
};

// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : int {
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3
};

// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : int {
	None = 0,
	Square = 1,
	Inverse = 2,
	Unused = 3,
	Constant = 4,
	Skip = 5,
	EEnvTestWeight_MAX = 6
};

// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : int {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	EEnvTestScoreEquation_MAX = 5
};

// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : int {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4
};

// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : int {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3
};

// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : int {
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3
};

// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : int {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3
};

// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : int {
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3
};

// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : int {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5
};

// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : int {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4
};

// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : int {
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2
};

// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : int {
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2
};

// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : int {
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2
};

// ScriptStruct AIModule.AIRequestID
// Size: 0x04 (Inherited: 0x00)
struct FAIRequestID {
public:

	uint32_t requestId; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AIStimulus
// Size: 0x3c (Inherited: 0x00)
struct FAIStimulus {
public:

	float Age; // 0x00(0x04)
	float ExpirationAge; // 0x04(0x04)
	float Strength; // 0x08(0x04)
	struct FVector StimulusLocation; // 0x0c(0x0c)
	struct FVector ReceiverLocation; // 0x18(0x0c)
	struct FName Tag; // 0x24(0x08)
	char pad_2C[0xc]; // 0x2c(0x0c)
	char pad_38_0 : 1; // 0x38(0x01)
	char bSuccessfullySensed : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.BTCompositeChild
// Size: 0x30 (Inherited: 0x00)
struct FBTCompositeChild {
public:

	struct UBTCompositeNode* ChildComposite; // 0x00(0x08)
	struct UBTTaskNode* ChildTask; // 0x08(0x08)
	struct TArray<struct UBTDecorator*> Decorators; // 0x10(0x10)
	struct TArray<struct FBTDecoratorLogic> DecoratorOps; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.BTDecoratorLogic
// Size: 0x04 (Inherited: 0x00)
struct FBTDecoratorLogic {
public:

	enum class EBTDecoratorLogic Operation; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t Number; // 0x02(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// Size: 0x20 (Inherited: 0x00)
struct FActorPerceptionBlueprintInfo {
public:

	struct AActor* Target; // 0x00(0x08)
	struct TArray<struct FAIStimulus> LastSensedStimuli; // 0x08(0x10)
	char bIsHostile : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.SenseIDToClassMapping
// Size: 0x30 (Inherited: 0x00)
struct FSenseIDToClassMapping {
public:

	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct UClass*> RegisteredSenseTypes; // 0x10(0x10)
	struct TArray<struct UAISense*> Senses; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AISenseAffiliationFilter
// Size: 0x04 (Inherited: 0x00)
struct FAISenseAffiliationFilter {
public:

	char bDetectEnemies : 1; // 0x00(0x01)
	char bDetectNeutrals : 1; // 0x00(0x01)
	char bDetectFriendlies : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AIDamageEvent
// Size: 0x30 (Inherited: 0x00)
struct FAIDamageEvent {
public:

	float Amount; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector HitLocation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AActor* DamagedActor; // 0x20(0x08)
	struct AActor* Instigator; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AINoiseEvent
// Size: 0x30 (Inherited: 0x00)
struct FAINoiseEvent {
public:

	char pad_0[0x4]; // 0x00(0x04)
	struct FVector NoiseLocation; // 0x04(0x0c)
	float Loudness; // 0x10(0x04)
	float MaxRange; // 0x14(0x04)
	struct AActor* Instigator; // 0x18(0x08)
	struct FName Tag; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AIPredictionEvent
// Size: 0x18 (Inherited: 0x00)
struct FAIPredictionEvent {
public:

	struct AActor* Requestor; // 0x00(0x08)
	struct AActor* PredictedActor; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AISightEvent
// Size: 0x18 (Inherited: 0x00)
struct FAISightEvent {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* SeenActor; // 0x08(0x08)
	struct AActor* Observer; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AITeamStimulusEvent
// Size: 0x38 (Inherited: 0x00)
struct FAITeamStimulusEvent {
public:

	char pad_0[0x28]; // 0x00(0x28)
	struct AActor* Broadcaster; // 0x28(0x08)
	struct AActor* Enemy; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AITouchEvent
// Size: 0x20 (Inherited: 0x00)
struct FAITouchEvent {
public:

	char pad_0[0x10]; // 0x00(0x10)
	struct AActor* TouchReceiver; // 0x10(0x08)
	struct AActor* OtherActor; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.IntervalCountdown
// Size: 0x08 (Inherited: 0x00)
struct FIntervalCountdown {
public:

	float Interval; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AIMoveRequest
// Size: 0x40 (Inherited: 0x00)
struct FAIMoveRequest {
public:

	struct AActor* GoalActor; // 0x00(0x08)
	char pad_8[0x38]; // 0x08(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// Size: 0x18 (Inherited: 0x00)
struct FBehaviorTreeTemplateInfo {
public:

	struct UBehaviorTree* Asset; // 0x00(0x08)
	struct UBTCompositeNode* Template; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.BlackboardEntry
// Size: 0x18 (Inherited: 0x00)
struct FBlackboardEntry {
public:

	struct FName EntryName; // 0x00(0x08)
	struct UBlackboardKeyType* KeyType; // 0x08(0x08)
	char bInstanceSynced : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// Size: 0x20 (Inherited: 0x00)
struct FCrowdAvoidanceSamplingPattern {
public:

	struct TArray<float> Angles; // 0x00(0x10)
	struct TArray<float> Radii; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.CrowdAvoidanceConfig
// Size: 0x1c (Inherited: 0x00)
struct FCrowdAvoidanceConfig {
public:

	float VelocityBias; // 0x00(0x04)
	float DesiredVelocityWeight; // 0x04(0x04)
	float CurrentVelocityWeight; // 0x08(0x04)
	float SideBiasWeight; // 0x0c(0x04)
	float ImpactTimeWeight; // 0x10(0x04)
	float ImpactTimeRange; // 0x14(0x04)
	char CustomPatternIdx; // 0x18(0x01)
	char AdaptiveDivisions; // 0x19(0x01)
	char AdaptiveRings; // 0x1a(0x01)
	char AdaptiveDepth; // 0x1b(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.EnvQueryInstanceCache
// Size: 0x178 (Inherited: 0x00)
struct FEnvQueryInstanceCache {
public:

	struct UEnvQuery* Template; // 0x00(0x08)
	char pad_8[0x170]; // 0x08(0x170)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.EnvQueryRequest
// Size: 0x68 (Inherited: 0x00)
struct FEnvQueryRequest {
public:

	struct UEnvQuery* QueryTemplate; // 0x00(0x08)
	struct UObject* Owner; // 0x08(0x08)
	struct UWorld* World; // 0x10(0x08)
	char pad_18[0x50]; // 0x18(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.EnvQueryResult
// Size: 0x40 (Inherited: 0x00)
struct FEnvQueryResult {
public:

	char pad_0[0x10]; // 0x00(0x10)
	struct UClass* ItemType; // 0x10(0x08)
	char pad_18[0x14]; // 0x18(0x14)
	int32_t OptionIndex; // 0x2c(0x04)
	int32_t QueryID; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.EnvOverlapData
// Size: 0x20 (Inherited: 0x00)
struct FEnvOverlapData {
public:

	float ExtentX; // 0x00(0x04)
	float ExtentY; // 0x04(0x04)
	float ExtentZ; // 0x08(0x04)
	struct FVector ShapeOffset; // 0x0c(0x0c)
	enum class ECollisionChannel OverlapChannel; // 0x18(0x01)
	enum class EEnvOverlapShape OverlapShape; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	char bOnlyBlockingHits : 1; // 0x1c(0x01)
	char bOverlapComplex : 1; // 0x1c(0x01)
	char bSkipOverlapQuerier : 1; // 0x1c(0x01)
	char pad_1C_3 : 5; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.EnvTraceData
// Size: 0x30 (Inherited: 0x00)
struct FEnvTraceData {
public:

	int32_t VersionNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* NavigationFilter; // 0x08(0x08)
	float ProjectDown; // 0x10(0x04)
	float ProjectUp; // 0x14(0x04)
	float ExtentX; // 0x18(0x04)
	float ExtentY; // 0x1c(0x04)
	float ExtentZ; // 0x20(0x04)
	float PostProjectionVerticalOffset; // 0x24(0x04)
	enum class ETraceTypeQuery TraceChannel; // 0x28(0x01)
	enum class ECollisionChannel SerializedChannel; // 0x29(0x01)
	enum class EEnvTraceShape TraceShape; // 0x2a(0x01)
	enum class EEnvQueryTrace TraceMode; // 0x2b(0x01)
	char bTraceComplex : 1; // 0x2c(0x01)
	char bOnlyBlockingHits : 1; // 0x2c(0x01)
	char bCanTraceOnNavMesh : 1; // 0x2c(0x01)
	char bCanTraceOnGeometry : 1; // 0x2c(0x01)
	char bCanDisableTrace : 1; // 0x2c(0x01)
	char bCanProjectDown : 1; // 0x2c(0x01)
	char pad_2C_6 : 2; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.EnvDirection
// Size: 0x20 (Inherited: 0x00)
struct FEnvDirection {
public:

	struct UClass* LineFrom; // 0x00(0x08)
	struct UClass* LineTo; // 0x08(0x08)
	struct UClass* Rotation; // 0x10(0x08)
	enum class EEnvDirection DirMode; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.EnvNamedValue
// Size: 0x10 (Inherited: 0x00)
struct FEnvNamedValue {
public:

	struct FName ParamName; // 0x00(0x08)
	enum class EAIParamType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Value; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.GenericTeamId
// Size: 0x01 (Inherited: 0x00)
struct FGenericTeamId {
public:

	char TeamId; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.PawnActionStack
// Size: 0x08 (Inherited: 0x00)
struct FPawnActionStack {
public:

	struct UPawnAction* TopAction; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.PawnActionEvent
// Size: 0x18 (Inherited: 0x00)
struct FPawnActionEvent {
public:

	struct UPawnAction* Action; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// AISenseBlueprintListener AIModule.Default__AISenseBlueprintListener
// Size: 0x00 (Inherited: 0x00)
struct FDefault__AISenseBlueprintListener {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.BlackboardKeySelector
// Size: 0x28 (Inherited: 0x00)
struct FBlackboardKeySelector {
public:

	struct TArray<struct UBlackboardKeyType*> AllowedTypes; // 0x00(0x10)
	struct FName SelectedKeyName; // 0x10(0x08)
	struct UClass* SelectedKeyType; // 0x18(0x08)
	char SelectedKeyID; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	char bNoneIsAllowedValue : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AIDataProviderValue
// Size: 0x20 (Inherited: 0x00)
struct FAIDataProviderValue {
public:

	char pad_0[0x10]; // 0x00(0x10)
	struct UAIDataProvider* DataBinding; // 0x10(0x08)
	struct FName DataField; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
// Size: 0x48 (Inherited: 0x00)
struct FEQSParametrizedQueryExecutionRequest {
public:

	struct UEnvQuery* QueryTemplate; // 0x00(0x08)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x08(0x10)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18(0x28)
	enum class EEnvQueryRunMode RunMode; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	char bUseBBKeyForQueryTemplate : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AIDynamicParam
// Size: 0x38 (Inherited: 0x00)
struct FAIDynamicParam {
public:

	struct FName ParamName; // 0x00(0x08)
	enum class EAIParamType ParamType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Value; // 0x0c(0x04)
	struct FBlackboardKeySelector BBKey; // 0x10(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AIDataProviderTypedValue
// Size: 0x30 (Inherited: 0x20)
struct FAIDataProviderTypedValue : public FAIDataProviderValue {
public:

	struct UClass* PropertyType; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AIDataProviderStructValue
// Size: 0x30 (Inherited: 0x20)
struct FAIDataProviderStructValue : public FAIDataProviderValue {
public:

	char pad_20[0x10]; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AIDataProviderBoolValue
// Size: 0x38 (Inherited: 0x30)
struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue {
public:

	bool DefaultValue; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// Size: 0x38 (Inherited: 0x30)
struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue {
public:

	float DefaultValue; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AIModule.AIDataProviderIntValue
// Size: 0x38 (Inherited: 0x30)
struct FAIDataProviderIntValue : public FAIDataProviderTypedValue {
public:

	int32_t DefaultValue; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
