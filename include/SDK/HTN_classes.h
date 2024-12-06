
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class HTN.AITask_HTNMoveTo
// Size: 0x120 (Inherited: 0x118)
class UAITask_HTNMoveTo : public UAITask_MoveTo {
public:

	char pad_118[0x8]; // 0x118(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.AITask_MakeHTNPlan
// Size: 0x100 (Inherited: 0x78)
class UAITask_MakeHTNPlan : public UAITask {
public:

	struct UHTNComponent* OwnerComponent; // 0x78(0x08)
	struct UHTN* TopLevelHTN; // 0x80(0x08)
	struct UBlackboardComponent* BlackboardComponent; // 0x88(0x08)
	char pad_90[0x40]; // 0x90(0x40)
	struct UHTNTask* CurrentTask; // 0xd0(0x08)
	char pad_D8[0x20]; // 0xd8(0x20)
	char bIsWaitingForTaskToProducePlanSteps : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.EnvQueryContext_HTNBlueprintBase
// Size: 0x48 (Inherited: 0x30)
class UEnvQueryContext_HTNBlueprintBase : public UEnvQueryContext {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct AActor* TempQuerierActor; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)

	void ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation); // Function HTN.EnvQueryContext_HTNBlueprintBase.ProvideSingleLocation // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.EnvQueryContext_HTNQuerierLocation
// Size: 0x30 (Inherited: 0x30)
class UEnvQueryContext_HTNQuerierLocation : public UEnvQueryContext {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTN
// Size: 0x68 (Inherited: 0x30)
class UHTN : public UObject {
public:

	struct TArray<struct UHTNStandaloneNode*> StartNodes; // 0x30(0x10)
	struct TArray<struct UHTNDecorator*> RootDecorators; // 0x40(0x10)
	struct TArray<struct UHTNService*> RootServices; // 0x50(0x10)
	struct UBlackboardData* BlackboardAsset; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class UHTNBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	bool STATIC_RunHTN(struct AAIController* AIController, struct UHTN* HTNAsset); // Function HTN.HTNBlueprintLibrary.RunHTN // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNNodeLibrary
// Size: 0x30 (Inherited: 0x30)
class UHTNNodeLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_SetWorldStateValueAsVector(struct UHTNNode* Node, struct FBlackboardKeySelector& Key, struct FVector Value); // Function HTN.HTNNodeLibrary.SetWorldStateValueAsVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNComponent
// Size: 0x2a8 (Inherited: 0x160)
class UHTNComponent : public UBrainComponent {
public:

	char pad_160[0x10]; // 0x160(0x10)
	struct UHTN* CurrentHTNAsset; // 0x170(0x08)
	struct UAITask_MakeHTNPlan* CurrentPlanningTask; // 0x178(0x08)
	char pad_180[0x40]; // 0x180(0x40)
	struct TArray<struct UHTNNode*> InstancedNodes; // 0x1c0(0x10)
	struct TArray<char> PlanMemory; // 0x1d0(0x10)
	struct UWorldStateProxy* PlanningWorldStateProxy; // 0x1e0(0x08)
	struct UWorldStateProxy* BlackboardProxy; // 0x1e8(0x08)
	struct TMap<struct UObject*, float> CooldownOwnerToEndTimeMap; // 0x1f0(0x50)
	struct TMap<struct FGameplayTag, struct UHTN*> GameplayTagToDynamicHTNMap; // 0x240(0x50)
	char pad_290[0x18]; // 0x290(0x18)

	void StopHTN(bool bDisregardLatentAbort); // Function HTN.HTNComponent.StopHTN // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.WorldStateProxy
// Size: 0x50 (Inherited: 0x30)
class UWorldStateProxy : public UObject {
public:

	struct UBrainComponent* Owner; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
	bool bIsEditable; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	void SetValueAsVector(struct FName& KeyName, struct FVector Value); // Function HTN.WorldStateProxy.SetValueAsVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNNode
// Size: 0x68 (Inherited: 0x30)
class UHTNNode : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FString NodeName; // 0x38(0x10)
	struct UHTNNode* TemplateNode; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)
	struct UHTN* HTNAsset; // 0x58(0x08)
	struct UHTNComponent* OwnerComponent; // 0x60(0x08)

	struct UHTNComponent* GetOwnerComponent(); // Function HTN.HTNNode.GetOwnerComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNDecorator
// Size: 0x70 (Inherited: 0x68)
class UHTNDecorator : public UHTNNode {
public:

	char pad_68_0 : 6; // 0x68(0x01)
	char bInverseCondition : 1; // 0x68(0x01)
	char bCheckConditionOnPlanEnter : 1; // 0x68(0x01)
	char bCheckConditionOnPlanExit : 1; // 0x69(0x01)
	char bCheckConditionOnPlanRecheck : 1; // 0x69(0x01)
	char bCheckConditionOnTick : 1; // 0x69(0x01)
	char pad_69_3 : 5; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)

	bool IsInversed(); // Function HTN.HTNDecorator.IsInversed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNStandaloneNode
// Size: 0xa0 (Inherited: 0x68)
class UHTNStandaloneNode : public UHTNNode {
public:

	int32_t MaxRecursionLimit; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UHTNStandaloneNode*> NextNodes; // 0x70(0x10)
	struct TArray<struct UHTNDecorator*> Decorators; // 0x80(0x10)
	struct TArray<struct UHTNService*> Services; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNService
// Size: 0x78 (Inherited: 0x68)
class UHTNService : public UHTNNode {
public:

	float TickInterval; // 0x68(0x04)
	float TickIntervalRandomDeviation; // 0x6c(0x04)
	char pad_70[0x8]; // 0x70(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNDecorator_BlackboardBase
// Size: 0x98 (Inherited: 0x70)
class UHTNDecorator_BlackboardBase : public UHTNDecorator {
public:

	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNDecorator_BlueprintBase
// Size: 0x90 (Inherited: 0x70)
class UHTNDecorator_BlueprintBase : public UHTNDecorator {
public:

	char bShowPropertyDetails : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x1f]; // 0x71(0x1f)

	void ReceiveTick(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn, float DeltaTime); // Function HTN.HTNDecorator_BlueprintBase.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNDecorator_Cooldown
// Size: 0x78 (Inherited: 0x70)
class UHTNDecorator_Cooldown : public UHTNDecorator {
public:

	float CooldownDuration; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNDecorator_DistanceCheck
// Size: 0xc8 (Inherited: 0x70)
class UHTNDecorator_DistanceCheck : public UHTNDecorator {
public:

	struct FBlackboardKeySelector A; // 0x70(0x28)
	struct FBlackboardKeySelector B; // 0x98(0x28)
	float MinDistance; // 0xc0(0x04)
	float MaxDistance; // 0xc4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNDecorator_FocusScope
// Size: 0xa8 (Inherited: 0x70)
class UHTNDecorator_FocusScope : public UHTNDecorator {
public:

	char bSetNewFocus : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FBlackboardKeySelector FocusTarget; // 0x78(0x28)
	char FocusPriority; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNDecorator_ModifyCost
// Size: 0x78 (Inherited: 0x70)
class UHTNDecorator_ModifyCost : public UHTNDecorator {
public:

	float Scale; // 0x70(0x04)
	int32_t Bias; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNDecorator_TraceTest
// Size: 0x118 (Inherited: 0x70)
class UHTNDecorator_TraceTest : public UHTNDecorator {
public:

	struct FBlackboardKeySelector TraceFrom; // 0x70(0x28)
	float TraceFromZOffset; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FBlackboardKeySelector TraceTo; // 0xa0(0x28)
	float TraceToZOffset; // 0xc8(0x04)
	enum class ECollisionChannel CollisionChannel; // 0xcc(0x01)
	char bUseComplexCollision : 1; // 0xcd(0x01)
	char bIgnoreSelf : 1; // 0xcd(0x01)
	char pad_CD_2 : 6; // 0xcd(0x01)
	enum class EEnvTraceShape TraceShape; // 0xce(0x01)
	char pad_CF[0x1]; // 0xcf(0x01)
	float TraceExtentX; // 0xd0(0x04)
	float TraceExtentY; // 0xd4(0x04)
	float TraceExtentZ; // 0xd8(0x04)
	enum class EDrawDebugTrace DrawDebugType; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct FLinearColor DebugColor; // 0xe0(0x10)
	struct FLinearColor DebugHitColor; // 0xf0(0x10)
	float DebugDrawTime; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct TArray<struct AActor*> ActorsToIgnoreBuffer; // 0x108(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNNode_TwoBranches
// Size: 0xa8 (Inherited: 0xa0)
class UHTNNode_TwoBranches : public UHTNStandaloneNode {
public:

	int32_t NumPrimaryNodes; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNNode_Scope
// Size: 0xa0 (Inherited: 0xa0)
class UHTNNode_Scope : public UHTNStandaloneNode {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNNode_SubNetwork
// Size: 0xa8 (Inherited: 0xa0)
class UHTNNode_SubNetwork : public UHTNStandaloneNode {
public:

	struct UHTN* HTN; // 0xa0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNNode_SubNetworkDynamic
// Size: 0xb0 (Inherited: 0xa0)
class UHTNNode_SubNetworkDynamic : public UHTNStandaloneNode {
public:

	struct UHTN* DefaultHTN; // 0xa0(0x08)
	struct FGameplayTag InjectTag; // 0xa8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNTask
// Size: 0xa8 (Inherited: 0xa0)
class UHTNTask : public UHTNStandaloneNode {
public:

	char bShowTaskNameOnCurrentPlanVisualization : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNService_BlueprintBase
// Size: 0x98 (Inherited: 0x78)
class UHTNService_BlueprintBase : public UHTNService {
public:

	char bShowPropertyDetails : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x1f]; // 0x79(0x1f)

	void ReceiveTick(struct AActor* Owner, struct AAIController* OwnerAsController, struct APawn* ControlledPawn, float DeltaTime); // Function HTN.HTNService_BlueprintBase.ReceiveTick // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNService_ReplanIfLocationChanges
// Size: 0xb0 (Inherited: 0x78)
class UHTNService_ReplanIfLocationChanges : public UHTNService {
public:

	float Tolerance; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FBlackboardKeySelector BlackboardKey; // 0x80(0x28)
	bool bForceAbortPlan; // 0xa8(0x01)
	bool bForceRestartActivePlanning; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNDecorator_Blackboard
// Size: 0xc8 (Inherited: 0x98)
class UHTNDecorator_Blackboard : public UHTNDecorator_BlackboardBase {
public:

	int32_t IntValue; // 0x98(0x04)
	float FloatValue; // 0x9c(0x04)
	struct FString StringValue; // 0xa0(0x10)
	struct FString CachedDescription; // 0xb0(0x10)
	char OperationType; // 0xc0(0x01)
	char bCanAbortPlanInstantly : 1; // 0xc1(0x01)
	char pad_C1_1 : 7; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNDecorator_GuardValue
// Size: 0xe0 (Inherited: 0x98)
class UHTNDecorator_GuardValue : public UHTNDecorator_BlackboardBase {
public:

	struct FWorldstateSetValueContainer Value; // 0x98(0x40)
	char bSetValueOnEnterPlan : 1; // 0xd8(0x01)
	char bRestoreValueOnExitPlan : 1; // 0xd8(0x01)
	char bRestoreValueOnAbort : 1; // 0xd8(0x01)
	char pad_D8_3 : 5; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNNode_AnyOrder
// Size: 0xa8 (Inherited: 0xa8)
class UHTNNode_AnyOrder : public UHTNNode_TwoBranches {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNNode_If
// Size: 0xb0 (Inherited: 0xa8)
class UHTNNode_If : public UHTNNode_TwoBranches {
public:

	char bCanConditionsInterruptTrueBranch : 1; // 0xa8(0x01)
	char bCanConditionsInterruptFalseBranch : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNNode_Parallel
// Size: 0xb0 (Inherited: 0xa8)
class UHTNNode_Parallel : public UHTNNode_TwoBranches {
public:

	char bWaitForSecondaryBranchToComplete : 1; // 0xa8(0x01)
	char bLoopSecondaryBranchUntilPrimaryBranchCompletes : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNNode_Sequence
// Size: 0xa8 (Inherited: 0xa8)
class UHTNNode_Sequence : public UHTNNode_TwoBranches {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNTask_BlackboardBase
// Size: 0xd0 (Inherited: 0xa8)
class UHTNTask_BlackboardBase : public UHTNTask {
public:

	struct FBlackboardKeySelector BlackboardKey; // 0xa8(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNTask_BlueprintBase
// Size: 0x100 (Inherited: 0xa8)
class UHTNTask_BlueprintBase : public UHTNTask {
public:

	char pad_A8[0x28]; // 0xa8(0x28)
	struct UAITask_MakeHTNPlan* OutPlanningTask; // 0xd0(0x08)
	struct FIntervalCountdown TickInterval; // 0xd8(0x08)
	char bShowPropertyDetails : 1; // 0xe0(0x01)
	char pad_E0_1 : 7; // 0xe0(0x01)
	char pad_E1[0x1f]; // 0xe1(0x1f)

	void SubmitPlanStep(int32_t Cost); // Function HTN.HTNTask_BlueprintBase.SubmitPlanStep // (Final|Native|Protected|BlueprintCallable|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNTask_Success
// Size: 0xb0 (Inherited: 0xa8)
class UHTNTask_Success : public UHTNTask {
public:

	int32_t Cost; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNTask_Wait
// Size: 0xb0 (Inherited: 0xa8)
class UHTNTask_Wait : public UHTNTask {
public:

	float WaitTime; // 0xa8(0x04)
	float RandomDeviation; // 0xac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNTask_ClearValue
// Size: 0xd0 (Inherited: 0xd0)
class UHTNTask_ClearValue : public UHTNTask_BlackboardBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNTask_EQSQuery
// Size: 0x120 (Inherited: 0xd0)
class UHTNTask_EQSQuery : public UHTNTask_BlackboardBase {
public:

	struct FEQSParametrizedQueryExecutionRequestHTN EQSRequest; // 0xd0(0x48)
	int32_t MaxNumCandidatePlans; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNTask_MoveTo
// Size: 0xf0 (Inherited: 0xd0)
class UHTNTask_MoveTo : public UHTNTask_BlackboardBase {
public:

	float AcceptableRadius; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UClass* FilterClass; // 0xd8(0x08)
	float ObservedBlackboardValueTolerance; // 0xe0(0x04)
	char bObserveBlackboardValue : 1; // 0xe4(0x01)
	char bAllowStrafe : 1; // 0xe4(0x01)
	char bAllowPartialPath : 1; // 0xe4(0x01)
	char bTrackMovingGoal : 1; // 0xe4(0x01)
	char bProjectGoalLocation : 1; // 0xe4(0x01)
	char bReachTestIncludesAgentRadius : 1; // 0xe4(0x01)
	char bReachTestIncludesGoalRadius : 1; // 0xe4(0x01)
	char pad_E4_7 : 1; // 0xe4(0x01)
	char bTestPathDuringPlanning : 1; // 0xe5(0x01)
	char bUsePathCostInsteadOfLength : 1; // 0xe5(0x01)
	char bForcePlanTimeStringPulling : 1; // 0xe5(0x01)
	char pad_E5_3 : 5; // 0xe5(0x01)
	char pad_E6[0x2]; // 0xe6(0x02)
	float CostPerUnitPathLength; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class HTN.HTNTask_SetValue
// Size: 0x110 (Inherited: 0xd0)
class UHTNTask_SetValue : public UHTNTask_BlackboardBase {
public:

	struct FWorldstateSetValueContainer Value; // 0xd0(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
