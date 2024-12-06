
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class AIModule.AIPerceptionComponent
// Size: 0x1d0 (Inherited: 0x100)
class UAIPerceptionComponent : public UActorComponent {
public:

	struct TArray<struct UAISenseConfig*> SensesConfig; // 0x100(0x10)
	struct UClass* DominantSense; // 0x110(0x08)
	char pad_118[0x10]; // 0x118(0x10)
	struct AAIController* AIOwner; // 0x128(0x08)
	char pad_130[0x80]; // 0x130(0x80)
	/*struct FMulticastInlineDelegate*/char OnPerceptionUpdated[0x10]; // 0x1b0(0x10)
	/*struct FMulticastInlineDelegate*/char OnTargetPerceptionUpdated[0x10]; // 0x1c0(0x10)

	void SetSenseEnabled(struct UClass* SenseClass, bool bEnable); // Function AIModule.AIPerceptionComponent.SetSenseEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BlackboardComponent
// Size: 0x1f8 (Inherited: 0x100)
class UBlackboardComponent : public UActorComponent {
public:

	struct UBrainComponent* BrainComp; // 0x100(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x108(0x08)
	char pad_110[0x20]; // 0x110(0x20)
	struct TArray<struct UBlackboardKeyType*> KeyInstances; // 0x130(0x10)
	char pad_140[0xb8]; // 0x140(0xb8)

	void SetValueAsVector(struct FName& KeyName, struct FVector VectorValue); // Function AIModule.BlackboardComponent.SetValueAsVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
// Size: 0x80 (Inherited: 0x30)
class UEnvQueryInstanceBlueprintWrapper : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	int32_t QueryID; // 0x38(0x04)
	char pad_3C[0x24]; // 0x3c(0x24)
	struct UClass* ItemType; // 0x60(0x08)
	int32_t OptionIndex; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	/*struct FMulticastInlineDelegate*/char OnQueryFinishedEvent[0x10]; // 0x70(0x10)

	void SetNamedParam(struct FName ParamName, float Value); // Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.NavLinkProxy
// Size: 0x3c8 (Inherited: 0x378)
class ANavLinkProxy : public AActor {
public:

	char pad_378[0x10]; // 0x378(0x10)
	struct TArray<struct FNavigationLink> PointLinks; // 0x388(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x398(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp; // 0x3a8(0x08)
	bool bSmartLinkIsRelevant; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	/*struct FMulticastInlineDelegate*/char OnSmartLinkReached[0x10]; // 0x3b8(0x10)

	void SetSmartLinkEnabled(bool bEnabled); // Function AIModule.NavLinkProxy.SetSmartLinkEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EQSTestingPawn
// Size: 0x830 (Inherited: 0x798)
class AEQSTestingPawn : public ACHARACTER {
public:

	char pad_798[0x8]; // 0x798(0x08)
	struct UEnvQuery* QueryTemplate; // 0x7a0(0x08)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0x7a8(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x7b8(0x10)
	float TimeLimitPerStep; // 0x7c8(0x04)
	int32_t StepToDebugDraw; // 0x7cc(0x04)
	enum class EEnvQueryHightlightMode HighlightMode; // 0x7d0(0x01)
	char pad_7D1[0x3]; // 0x7d1(0x03)
	char bDrawLabels : 1; // 0x7d4(0x01)
	char bDrawFailedItems : 1; // 0x7d4(0x01)
	char bReRunQueryOnlyOnFinishedMove : 1; // 0x7d4(0x01)
	char bShouldBeVisibleInGame : 1; // 0x7d4(0x01)
	char bTickDuringGame : 1; // 0x7d4(0x01)
	char pad_7D4_5 : 3; // 0x7d4(0x01)
	char pad_7D5[0x3]; // 0x7d5(0x03)
	enum class EEnvQueryRunMode QueryingMode; // 0x7d8(0x01)
	char pad_7D9[0x7]; // 0x7d9(0x07)
	struct FNavAgentProperties NavAgentProperties; // 0x7e0(0x30)
	char pad_810[0x20]; // 0x810(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AIAsyncTaskBlueprintProxy
// Size: 0x70 (Inherited: 0x30)
class UAIAsyncTaskBlueprintProxy : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFail[0x10]; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	void OnMoveCompleted(struct FAIRequestID requestId, enum class EPathFollowingResult MovementResult); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AIBlueprintHelperLibrary
// Size: 0x30 (Inherited: 0x30)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic); // Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AIHotSpotManager
// Size: 0x30 (Inherited: 0x30)
class UAIHotSpotManager : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AIPerceptionListenerInterface
// Size: 0x30 (Inherited: 0x30)
class UAIPerceptionListenerInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size: 0x118 (Inherited: 0x100)
class UAIPerceptionStimuliSourceComponent : public UActorComponent {
public:

	char bAutoRegisterAsSource : 1; // 0x100(0x01)
	char pad_100_1 : 7; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct TArray<struct UClass*> RegisterAsSourceForSenses; // 0x108(0x10)

	void UnregisterFromSense(struct UClass* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AIResourceInterface
// Size: 0x30 (Inherited: 0x30)
class UAIResourceInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AIResource_Movement
// Size: 0x40 (Inherited: 0x40)
class UAIResource_Movement : public UGameplayTaskResource {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AIResource_Logic
// Size: 0x40 (Inherited: 0x40)
class UAIResource_Logic : public UGameplayTaskResource {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISenseBlueprintListener
// Size: 0x118 (Inherited: 0x118)
class UAISenseBlueprintListener : public UUserDefinedStruct {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISightTargetInterface
// Size: 0x30 (Inherited: 0x30)
class UAISightTargetInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISystem
// Size: 0x138 (Inherited: 0x60)
class UAISystem : public UAISystemBase {
public:

	struct FSoftClassPath PerceptionSystemClassName; // 0x60(0x18)
	struct FSoftClassPath HotSpotManagerClassName; // 0x78(0x18)
	float AcceptanceRadius; // 0x90(0x04)
	float PathfollowingRegularPathPointAcceptanceRadius; // 0x94(0x04)
	float PathfollowingNavLinkAcceptanceRadius; // 0x98(0x04)
	bool bFinishMoveOnGoalOverlap; // 0x9c(0x01)
	bool bAcceptPartialPaths; // 0x9d(0x01)
	bool bAllowStrafing; // 0x9e(0x01)
	bool bEnableBTAITasks; // 0x9f(0x01)
	bool bAllowControllersAsEQSQuerier; // 0xa0(0x01)
	bool bEnableDebuggerPlugin; // 0xa1(0x01)
	enum class ECollisionChannel DefaultSightCollisionChannel; // 0xa2(0x01)
	char pad_A3[0x5]; // 0xa3(0x05)
	struct UBehaviorTreeManager* BehaviorTreeManager; // 0xa8(0x08)
	struct UEnvQueryManager* EnvironmentQueryManager; // 0xb0(0x08)
	struct UAIPerceptionSystem* PerceptionSystem; // 0xb8(0x08)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xc0(0x10)
	struct UAIHotSpotManager* HotSpotManager; // 0xd0(0x08)
	struct UNavLocalGridManager* NavLocalGrids; // 0xd8(0x08)
	char pad_E0[0x58]; // 0xe0(0x58)

	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose // (Exec|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BehaviorTree
// Size: 0x68 (Inherited: 0x30)
class UBehaviorTree : public UObject {
public:

	struct UBTCompositeNode* RootNode; // 0x30(0x08)
	struct UBlackboardData* BlackboardAsset; // 0x38(0x08)
	struct TArray<struct UBTDecorator*> RootDecorators; // 0x40(0x10)
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps; // 0x50(0x10)
	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BehaviorTreeManager
// Size: 0x58 (Inherited: 0x30)
class UBehaviorTreeManager : public UObject {
public:

	int32_t MaxDebuggerSteps; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x38(0x10)
	struct TArray<struct UBehaviorTreeComponent*> ActiveComponents; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BehaviorTreeTypes
// Size: 0x30 (Inherited: 0x30)
class UBehaviorTreeTypes : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BlackboardData
// Size: 0x58 (Inherited: 0x38)
class UBlackboardData : public UDataAsset {
public:

	struct UBlackboardData* Parent; // 0x38(0x08)
	struct TArray<struct FBlackboardEntry> Keys; // 0x40(0x10)
	char bHasSynchronizedKeys : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_StopUsingExternalEvent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.StopUsingExternalEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.CrowdAgentInterface
// Size: 0x30 (Inherited: 0x30)
class UCrowdAgentInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.CrowdManager
// Size: 0xf8 (Inherited: 0x30)
class UCrowdManager : public UCrowdManagerBase {
public:

	struct ANavigationData* MyNavData; // 0x30(0x08)
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig; // 0x38(0x10)
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x48(0x10)
	int32_t MaxAgents; // 0x58(0x04)
	float MaxAgentRadius; // 0x5c(0x04)
	int32_t MaxAvoidedAgents; // 0x60(0x04)
	int32_t MaxAvoidedWalls; // 0x64(0x04)
	float NavmeshCheckInterval; // 0x68(0x04)
	float PathOptimizationInterval; // 0x6c(0x04)
	float SeparationDirClamp; // 0x70(0x04)
	float PathOffsetRadiusMultiplier; // 0x74(0x04)
	char pad_78_0 : 4; // 0x78(0x01)
	char bResolveCollisions : 1; // 0x78(0x01)
	char pad_78_5 : 3; // 0x78(0x01)
	char pad_79[0x7f]; // 0x79(0x7f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQuery
// Size: 0x50 (Inherited: 0x38)
class UEnvQuery : public UDataAsset {
public:

	struct FName QueryName; // 0x38(0x08)
	struct TArray<struct UEnvQueryOption*> Options; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryDebugHelpers
// Size: 0x30 (Inherited: 0x30)
class UEnvQueryDebugHelpers : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryOption
// Size: 0x48 (Inherited: 0x30)
class UEnvQueryOption : public UObject {
public:

	struct UEnvQueryGenerator* Generator; // 0x30(0x08)
	struct TArray<struct UEnvQueryTest*> Tests; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryTypes
// Size: 0x30 (Inherited: 0x30)
class UEnvQueryTypes : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EQSQueryResultSourceInterface
// Size: 0x30 (Inherited: 0x30)
class UEQSQueryResultSourceInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EQSRenderingComponent
// Size: 0x5a0 (Inherited: 0x560)
class UEQSRenderingComponent : public UPrimitiveComponent {
public:

	char pad_560[0x40]; // 0x560(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.GenericTeamAgentInterface
// Size: 0x30 (Inherited: 0x30)
class UGenericTeamAgentInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.NavFilter_AIControllerDefault
// Size: 0x50 (Inherited: 0x50)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.NavLocalGridManager
// Size: 0x60 (Inherited: 0x30)
class UNavLocalGridManager : public UObject {
public:

	char pad_30[0x30]; // 0x30(0x30)

	bool STATIC_SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize); // Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.PathFollowingManager
// Size: 0x30 (Inherited: 0x30)
class UPathFollowingManager : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.PawnActionsComponent
// Size: 0x138 (Inherited: 0x100)
class UPawnActionsComponent : public UActorComponent {
public:

	struct APawn* ControlledPawn; // 0x100(0x08)
	struct TArray<struct FPawnActionStack> ActionStacks; // 0x108(0x10)
	struct TArray<struct FPawnActionEvent> ActionEvents; // 0x118(0x10)
	struct UPawnAction* CurrentAction; // 0x128(0x08)
	char pad_130[0x8]; // 0x130(0x08)

	bool K2_PushAction(struct UPawnAction* NewAction, enum class EAIRequestPriority Priority, struct UObject* Instigator); // Function AIModule.PawnActionsComponent.K2_PushAction // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.PawnSensingComponent
// Size: 0x148 (Inherited: 0x100)
class UPawnSensingComponent : public UActorComponent {
public:

	float HearingThreshold; // 0x100(0x04)
	float LOSHearingThreshold; // 0x104(0x04)
	float SightRadius; // 0x108(0x04)
	float SensingInterval; // 0x10c(0x04)
	float HearingMaxSoundAge; // 0x110(0x04)
	char bEnableSensingUpdates : 1; // 0x114(0x01)
	char bOnlySensePlayers : 1; // 0x114(0x01)
	char bSeePawns : 1; // 0x114(0x01)
	char bHearNoises : 1; // 0x114(0x01)
	char pad_114_4 : 4; // 0x114(0x01)
	char pad_115[0xb]; // 0x115(0x0b)
	/*struct FMulticastInlineDelegate*/char OnSeePawn[0x10]; // 0x120(0x10)
	/*struct FMulticastInlineDelegate*/char OnHearNoise[0x10]; // 0x130(0x10)
	float PeripheralVisionAngle; // 0x140(0x04)
	float PeripheralVisionCosine; // 0x144(0x04)

	void SetSensingUpdatesEnabled(bool bEnabled); // Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.VisualLoggerExtension
// Size: 0x30 (Inherited: 0x30)
class UVisualLoggerExtension : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISense
// Size: 0x88 (Inherited: 0x30)
class UAISense : public UObject {
public:

	float DefaultExpirationAge; // 0x30(0x04)
	enum class EAISenseNotifyType NotifyType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char bWantsNewPawnNotification : 1; // 0x38(0x01)
	char bAutoRegisterAllPawnsAsSources : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UAIPerceptionSystem* PerceptionSystemInstance; // 0x40(0x08)
	char pad_48[0x40]; // 0x48(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISenseConfig
// Size: 0x50 (Inherited: 0x30)
class UAISenseConfig : public UObject {
public:

	struct FColor DebugColor; // 0x30(0x04)
	float MaxAge; // 0x34(0x04)
	char bStartsEnabled : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x17]; // 0x39(0x17)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTNode
// Size: 0x60 (Inherited: 0x30)
class UBTNode : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FString NodeName; // 0x38(0x10)
	struct UBehaviorTree* TreeAsset; // 0x48(0x08)
	struct UBTCompositeNode* ParentNode; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BrainComponent
// Size: 0x160 (Inherited: 0x100)
class UBrainComponent : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)
	struct UBlackboardComponent* BlackboardComp; // 0x108(0x08)
	struct AAIController* AIOwner; // 0x110(0x08)
	char pad_118[0x48]; // 0x118(0x48)

	void StopLogic(struct FString reason); // Function AIModule.BrainComponent.StopLogic // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryItemType
// Size: 0x38 (Inherited: 0x30)
class UEnvQueryItemType : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryNode
// Size: 0x38 (Inherited: 0x30)
class UEnvQueryNode : public UObject {
public:

	int32_t VerNum; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AITask
// Size: 0x78 (Inherited: 0x70)
class UAITask : public UGameplayTask {
public:

	struct AAIController* OwnerController; // 0x70(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryContext
// Size: 0x30 (Inherited: 0x30)
class UEnvQueryContext : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AIController
// Size: 0x480 (Inherited: 0x3f0)
class AAIController : public AController {
public:

	char pad_3F0[0x38]; // 0x3f0(0x38)
	char bStopAILogicOnUnposses : 1; // 0x428(0x01)
	char bLOSflag : 1; // 0x428(0x01)
	char bSkipExtraLOSChecks : 1; // 0x428(0x01)
	char bAllowStrafe : 1; // 0x428(0x01)
	char bWantsPlayerState : 1; // 0x428(0x01)
	char bSetControlRotationFromPawnOrientation : 1; // 0x428(0x01)
	char pad_428_6 : 2; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x430(0x08)
	struct UBrainComponent* BrainComponent; // 0x438(0x08)
	struct UAIPerceptionComponent* PerceptionComponent; // 0x440(0x08)
	struct UPawnActionsComponent* ActionsComp; // 0x448(0x08)
	struct UBlackboardComponent* BlackBoard; // 0x450(0x08)
	struct UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x458(0x08)
	struct UClass* DefaultNavigationFilterClass; // 0x460(0x08)
	/*struct FMulticastInlineDelegate*/char ReceiveMoveCompleted[0x10]; // 0x468(0x10)
	char pad_478[0x8]; // 0x478(0x08)

	bool UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent*& BlackboardComponent); // Function AIModule.AIController.UseBlackboard // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.PathFollowingComponent
// Size: 0x2a8 (Inherited: 0x100)
class UPathFollowingComponent : public UActorComponent {
public:

	char pad_100[0x38]; // 0x100(0x38)
	struct UNavMovementComponent* MovementComp; // 0x138(0x08)
	char pad_140[0x8]; // 0x140(0x08)
	struct ANavigationData* MyNavData; // 0x148(0x08)
	char pad_150[0x158]; // 0x150(0x158)

	void OnNavDataRegistered(struct ANavigationData* NavData); // Function AIModule.PathFollowingComponent.OnNavDataRegistered // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AIDataProvider
// Size: 0x30 (Inherited: 0x30)
class UAIDataProvider : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISubsystem
// Size: 0x40 (Inherited: 0x30)
class UAISubsystem : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct UAISystem* AISystem; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISenseEvent
// Size: 0x30 (Inherited: 0x30)
class UAISenseEvent : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BlackboardKeyType
// Size: 0x38 (Inherited: 0x30)
class UBlackboardKeyType : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.PawnAction
// Size: 0xa0 (Inherited: 0x30)
class UPawnAction : public UObject {
public:

	struct UPawnAction* ChildAction; // 0x30(0x08)
	struct UPawnAction* ParentAction; // 0x38(0x08)
	struct UPawnActionsComponent* OwnerComponent; // 0x40(0x08)
	struct UObject* Instigator; // 0x48(0x08)
	struct UBrainComponent* BrainComp; // 0x50(0x08)
	char pad_58[0x30]; // 0x58(0x30)
	char bAllowNewSameClassInstance : 1; // 0x88(0x01)
	char bReplaceActiveSameClassInstance : 1; // 0x88(0x01)
	char bShouldPauseMovement : 1; // 0x88(0x01)
	char bAlwaysNotifyOnFinished : 1; // 0x88(0x01)
	char pad_88_4 : 4; // 0x88(0x01)
	char pad_89[0x17]; // 0x89(0x17)

	enum class EAIRequestPriority GetActionPriority(); // Function AIModule.PawnAction.GetActionPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISense_Hearing
// Size: 0xf0 (Inherited: 0x88)
class UAISense_Hearing : public UAISense {
public:

	struct TArray<struct FAINoiseEvent> NoiseEvents; // 0x88(0x10)
	float SpeedOfSoundSq; // 0x98(0x04)
	char pad_9C[0x54]; // 0x9c(0x54)

	void STATIC_ReportNoiseEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag); // Function AIModule.AISense_Hearing.ReportNoiseEvent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISense_Blueprint
// Size: 0xb0 (Inherited: 0x88)
class UAISense_Blueprint : public UAISense {
public:

	struct UClass* ListenerDataType; // 0x88(0x08)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; // 0x90(0x10)
	struct TArray<struct UAISenseEvent*> UnprocessedEvents; // 0xa0(0x10)

	float OnUpdate(struct TArray<struct UAISenseEvent*>& EventsToProcess); // Function AIModule.AISense_Blueprint.OnUpdate // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISense_Damage
// Size: 0x98 (Inherited: 0x88)
class UAISense_Damage : public UAISense {
public:

	struct TArray<struct FAIDamageEvent> RegisteredEvents; // 0x88(0x10)

	void STATIC_ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation); // Function AIModule.AISense_Damage.ReportDamageEvent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISense_Prediction
// Size: 0x98 (Inherited: 0x88)
class UAISense_Prediction : public UAISense {
public:

	struct TArray<struct FAIPredictionEvent> RegisteredEvents; // 0x88(0x10)

	void STATIC_RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestPawnPredictionEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISense_Sight
// Size: 0x160 (Inherited: 0x88)
class UAISense_Sight : public UAISense {
public:

	char pad_88[0xb0]; // 0x88(0xb0)
	int32_t MaxTracesPerTick; // 0x138(0x04)
	int32_t MinQueriesPerTimeSliceCheck; // 0x13c(0x04)
	double MaxTimeSlicePerTick; // 0x140(0x08)
	float HighImportanceQueryDistanceThreshold; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	float MaxQueryImportance; // 0x150(0x04)
	float SightLimitQueryImportance; // 0x154(0x04)
	char pad_158[0x8]; // 0x158(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISense_Team
// Size: 0x98 (Inherited: 0x88)
class UAISense_Team : public UAISense {
public:

	struct TArray<struct FAITeamStimulusEvent> RegisteredEvents; // 0x88(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISense_Touch
// Size: 0x98 (Inherited: 0x88)
class UAISense_Touch : public UAISense {
public:

	struct TArray<struct FAITouchEvent> RegisteredEvents; // 0x88(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISenseConfig_Blueprint
// Size: 0x58 (Inherited: 0x50)
class UAISenseConfig_Blueprint : public UAISenseConfig {
public:

	struct UClass* Implementation; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISenseConfig_Damage
// Size: 0x58 (Inherited: 0x50)
class UAISenseConfig_Damage : public UAISenseConfig {
public:

	struct UClass* Implementation; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISenseConfig_Hearing
// Size: 0x68 (Inherited: 0x50)
class UAISenseConfig_Hearing : public UAISenseConfig {
public:

	struct UClass* Implementation; // 0x50(0x08)
	float HearingRange; // 0x58(0x04)
	float LoSHearingRange; // 0x5c(0x04)
	char bUseLoSHearing : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISenseConfig_Prediction
// Size: 0x50 (Inherited: 0x50)
class UAISenseConfig_Prediction : public UAISenseConfig {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISenseConfig_Sight
// Size: 0x70 (Inherited: 0x50)
class UAISenseConfig_Sight : public UAISenseConfig {
public:

	struct UClass* Implementation; // 0x50(0x08)
	float SightRadius; // 0x58(0x04)
	float LoseSightRadius; // 0x5c(0x04)
	float PeripheralVisionAngleDegrees; // 0x60(0x04)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x64(0x04)
	float AutoSuccessRangeFromLastSeenLocation; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISenseConfig_Team
// Size: 0x50 (Inherited: 0x50)
class UAISenseConfig_Team : public UAISenseConfig {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISenseConfig_Touch
// Size: 0x50 (Inherited: 0x50)
class UAISenseConfig_Touch : public UAISenseConfig {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTCompositeNode
// Size: 0x98 (Inherited: 0x60)
class UBTCompositeNode : public UBTNode {
public:

	struct TArray<struct FBTCompositeChild> Children; // 0x60(0x10)
	struct TArray<struct UBTService*> Services; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
	char bApplyDecoratorScope : 1; // 0x90(0x01)
	char pad_90_1 : 7; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTaskNode
// Size: 0x78 (Inherited: 0x60)
class UBTTaskNode : public UBTNode {
public:

	struct TArray<struct UBTService*> Services; // 0x60(0x10)
	char bIgnoreRestartSelf : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTAuxiliaryNode
// Size: 0x68 (Inherited: 0x60)
class UBTAuxiliaryNode : public UBTNode {
public:

	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BehaviorTreeComponent
// Size: 0x2b0 (Inherited: 0x160)
class UBehaviorTreeComponent : public UBrainComponent {
public:

	char pad_160[0x20]; // 0x160(0x20)
	struct TArray<struct UBTNode*> NodeInstances; // 0x180(0x10)
	char pad_190[0x120]; // 0x190(0x120)

	void SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset); // Function AIModule.BehaviorTreeComponent.SetDynamicSubtree // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryItemType_VectorBase
// Size: 0x38 (Inherited: 0x38)
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryTest
// Size: 0x200 (Inherited: 0x38)
class UEnvQueryTest : public UEnvQueryNode {
public:

	int32_t TestOrder; // 0x38(0x04)
	enum class EEnvTestPurpose TestPurpose; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FString TestComment; // 0x40(0x10)
	enum class EEnvTestFilterOperator MultipleContextFilterOp; // 0x50(0x01)
	enum class EEnvTestScoreOperator MultipleContextScoreOp; // 0x51(0x01)
	enum class EEnvTestFilterType FilterType; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct FAIDataProviderBoolValue BoolValue; // 0x58(0x38)
	struct FAIDataProviderFloatValue FloatValueMin; // 0x90(0x38)
	struct FAIDataProviderFloatValue FloatValueMax; // 0xc8(0x38)
	char pad_100[0x1]; // 0x100(0x01)
	enum class EEnvTestScoreEquation ScoringEquation; // 0x101(0x01)
	enum class EEnvQueryTestClamping ClampMinType; // 0x102(0x01)
	enum class EEnvQueryTestClamping ClampMaxType; // 0x103(0x01)
	enum class EEQSNormalizationType NormalizationType; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct FAIDataProviderFloatValue ScoreClampMin; // 0x108(0x38)
	struct FAIDataProviderFloatValue ScoreClampMax; // 0x140(0x38)
	struct FAIDataProviderFloatValue ScoringFactor; // 0x178(0x38)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x1b0(0x38)
	bool bDefineReferenceValue; // 0x1e8(0x01)
	char pad_1E9[0xf]; // 0x1e9(0x0f)
	char bWorkOnFloatValues : 1; // 0x1f8(0x01)
	char pad_1F8_1 : 7; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryGenerator
// Size: 0x58 (Inherited: 0x38)
class UEnvQueryGenerator : public UEnvQueryNode {
public:

	struct FString OptionName; // 0x38(0x10)
	struct UClass* ItemType; // 0x48(0x08)
	char bAutoSortTests : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AITask_MoveTo
// Size: 0x118 (Inherited: 0x78)
class UAITask_MoveTo : public UAITask {
public:

	/*struct FMulticastInlineDelegate*/char OnRequestFailed[0x10]; // 0x78(0x10)
	/*struct FMulticastInlineDelegate*/char OnMoveFinished[0x10]; // 0x88(0x10)
	struct FAIMoveRequest MoveRequest; // 0x98(0x40)
	char pad_D8[0x40]; // 0xd8(0x40)

	struct UAITask_MoveTo* STATIC_AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation); // Function AIModule.AITask_MoveTo.AIMoveTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AITask_LockLogic
// Size: 0x78 (Inherited: 0x78)
class UAITask_LockLogic : public UAITask {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AITask_RunEQS
// Size: 0xf0 (Inherited: 0x78)
class UAITask_RunEQS : public UAITask {
public:

	char pad_78[0x78]; // 0x78(0x78)

	struct UAITask_RunEQS* STATIC_RunEQS(struct AAIController* Controller, struct UEnvQuery* QueryTemplate); // Function AIModule.AITask_RunEQS.RunEQS // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryContext_BlueprintBase
// Size: 0x38 (Inherited: 0x30)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext {
public:

	char pad_30[0x8]; // 0x30(0x08)

	void ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector& ResultingLocation); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryContext_Item
// Size: 0x30 (Inherited: 0x30)
class UEnvQueryContext_Item : public UEnvQueryContext {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryContext_Querier
// Size: 0x30 (Inherited: 0x30)
class UEnvQueryContext_Querier : public UEnvQueryContext {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.DetourCrowdAIController
// Size: 0x480 (Inherited: 0x480)
class ADetourCrowdAIController : public AAIController {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.GridPathAIController
// Size: 0x480 (Inherited: 0x480)
class AGridPathAIController : public AAIController {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.CrowdFollowingComponent
// Size: 0x2e8 (Inherited: 0x2a8)
class UCrowdFollowingComponent : public UPathFollowingComponent {
public:

	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct UCharacterMovementComponent* CharacterMovement; // 0x2b0(0x08)
	struct FVector CrowdAgentMoveDirection; // 0x2b8(0x0c)
	char pad_2C4[0x24]; // 0x2c4(0x24)

	void SuspendCrowdSteering(bool bSuspend); // Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.GridPathFollowingComponent
// Size: 0x2d8 (Inherited: 0x2a8)
class UGridPathFollowingComponent : public UPathFollowingComponent {
public:

	struct UNavLocalGridManager* GridManager; // 0x2a8(0x08)
	char pad_2B0[0x28]; // 0x2b0(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AIDataProvider_QueryParams
// Size: 0x48 (Inherited: 0x30)
class UAIDataProvider_QueryParams : public UAIDataProvider {
public:

	struct FName ParamName; // 0x30(0x08)
	float FloatValue; // 0x38(0x04)
	int32_t IntValue; // 0x3c(0x04)
	bool BoolValue; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AIPerceptionSystem
// Size: 0x140 (Inherited: 0x40)
class UAIPerceptionSystem : public UAISubsystem {
public:

	char pad_40[0x50]; // 0x40(0x50)
	float PerceptionAgingRate; // 0x90(0x04)
	char pad_94[0x8c]; // 0x94(0x8c)
	struct TArray<struct FSenseIDToClassMapping> SensesMapping; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)

	void STATIC_ReportPerceptionEvent(struct UObject* WorldContextObject, struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportPerceptionEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryManager
// Size: 0x148 (Inherited: 0x40)
class UEnvQueryManager : public UAISubsystem {
public:

	char pad_40[0x70]; // 0x40(0x70)
	struct TArray<struct FEnvQueryInstanceCache> InstanceCache; // 0xb0(0x10)
	struct TArray<struct UEnvQueryContext*> LocalContexts; // 0xc0(0x10)
	/*struct TArray<ObjectPtrProperty>*/char GCShieldedWrappers[0x10]; // 0xd0(0x10)
	char pad_E0[0x54]; // 0xe0(0x54)
	float MaxAllowedTestingTime; // 0x134(0x04)
	bool bTestQueriesUsingBreadth; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	int32_t QueryCountWarningThreshold; // 0x13c(0x04)
	double QueryCountWarningInterval; // 0x140(0x08)

	void STATIC_RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, enum class EEnvQueryRunMode RunMode, struct UClass* WrapperClass); // Function AIModule.EnvQueryManager.RunEQSQuery // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISenseEvent_Damage
// Size: 0x60 (Inherited: 0x30)
class UAISenseEvent_Damage : public UAISenseEvent {
public:

	struct FAIDamageEvent Event; // 0x30(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AISenseEvent_Hearing
// Size: 0x60 (Inherited: 0x30)
class UAISenseEvent_Hearing : public UAISenseEvent {
public:

	struct FAINoiseEvent Event; // 0x30(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BlackboardKeyType_Bool
// Size: 0x38 (Inherited: 0x38)
class UBlackboardKeyType_Bool : public UBlackboardKeyType {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BlackboardKeyType_Class
// Size: 0x40 (Inherited: 0x38)
class UBlackboardKeyType_Class : public UBlackboardKeyType {
public:

	struct UClass* BaseClass; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BlackboardKeyType_Enum
// Size: 0x58 (Inherited: 0x38)
class UBlackboardKeyType_Enum : public UBlackboardKeyType {
public:

	struct UEnum* EnumType; // 0x38(0x08)
	struct FString EnumName; // 0x40(0x10)
	char bIsEnumNameValid : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BlackboardKeyType_Float
// Size: 0x38 (Inherited: 0x38)
class UBlackboardKeyType_Float : public UBlackboardKeyType {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BlackboardKeyType_Int
// Size: 0x38 (Inherited: 0x38)
class UBlackboardKeyType_Int : public UBlackboardKeyType {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BlackboardKeyType_Name
// Size: 0x38 (Inherited: 0x38)
class UBlackboardKeyType_Name : public UBlackboardKeyType {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BlackboardKeyType_NativeEnum
// Size: 0x50 (Inherited: 0x38)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType {
public:

	struct FString EnumName; // 0x38(0x10)
	struct UEnum* EnumType; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BlackboardKeyType_Object
// Size: 0x40 (Inherited: 0x38)
class UBlackboardKeyType_Object : public UBlackboardKeyType {
public:

	struct UClass* BaseClass; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BlackboardKeyType_Rotator
// Size: 0x38 (Inherited: 0x38)
class UBlackboardKeyType_Rotator : public UBlackboardKeyType {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BlackboardKeyType_String
// Size: 0x48 (Inherited: 0x38)
class UBlackboardKeyType_String : public UBlackboardKeyType {
public:

	struct FString StringValue; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BlackboardKeyType_Vector
// Size: 0x38 (Inherited: 0x38)
class UBlackboardKeyType_Vector : public UBlackboardKeyType {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.PawnAction_BlueprintBase
// Size: 0xa0 (Inherited: 0xa0)
class UPawnAction_BlueprintBase : public UPawnAction {
public:


	void ActionTick(struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.PawnAction_BlueprintBase.ActionTick // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.PawnAction_Move
// Size: 0xf0 (Inherited: 0xa0)
class UPawnAction_Move : public UPawnAction {
public:

	struct AActor* GoalActor; // 0xa0(0x08)
	struct FVector GoalLocation; // 0xa8(0x0c)
	float AcceptableRadius; // 0xb4(0x04)
	struct UClass* FilterClass; // 0xb8(0x08)
	char bAllowStrafe : 1; // 0xc0(0x01)
	char bFinishOnOverlap : 1; // 0xc0(0x01)
	char bUsePathfinding : 1; // 0xc0(0x01)
	char bAllowPartialPath : 1; // 0xc0(0x01)
	char bProjectGoalToNavigation : 1; // 0xc0(0x01)
	char bUpdatePathToGoal : 1; // 0xc0(0x01)
	char bAbortChildActionOnPathChange : 1; // 0xc0(0x01)
	char pad_C0_7 : 1; // 0xc0(0x01)
	char pad_C1[0x2f]; // 0xc1(0x2f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.PawnAction_Repeat
// Size: 0xc0 (Inherited: 0xa0)
class UPawnAction_Repeat : public UPawnAction {
public:

	struct UPawnAction* ActionToRepeat; // 0xa0(0x08)
	struct UPawnAction* RecentActionCopy; // 0xa8(0x08)
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // 0xb0(0x01)
	char pad_B1[0xf]; // 0xb1(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.PawnAction_Sequence
// Size: 0xc8 (Inherited: 0xa0)
class UPawnAction_Sequence : public UPawnAction {
public:

	struct TArray<struct UPawnAction*> ActionSequence; // 0xa0(0x10)
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct UPawnAction* RecentActionCopy; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.PawnAction_Wait
// Size: 0xb0 (Inherited: 0xa0)
class UPawnAction_Wait : public UPawnAction {
public:

	float TimeToWait; // 0xa0(0x04)
	char pad_A4[0xc]; // 0xa4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTComposite_Selector
// Size: 0x98 (Inherited: 0x98)
class UBTComposite_Selector : public UBTCompositeNode {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTComposite_Sequence
// Size: 0x98 (Inherited: 0x98)
class UBTComposite_Sequence : public UBTCompositeNode {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTComposite_SimpleParallel
// Size: 0xa0 (Inherited: 0x98)
class UBTComposite_SimpleParallel : public UBTCompositeNode {
public:

	enum class EBTParallelMode FinishMode; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_BlackboardBase
// Size: 0xa0 (Inherited: 0x78)
class UBTTask_BlackboardBase : public UBTTaskNode {
public:

	struct FBlackboardKeySelector BlackboardKey; // 0x78(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_RunBehaviorDynamic
// Size: 0x90 (Inherited: 0x78)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode {
public:

	struct FGameplayTag InjectionTag; // 0x78(0x08)
	struct UBehaviorTree* DefaultBehaviorAsset; // 0x80(0x08)
	struct UBehaviorTree* BehaviorAsset; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_Wait
// Size: 0x80 (Inherited: 0x78)
class UBTTask_Wait : public UBTTaskNode {
public:

	float WaitTime; // 0x78(0x04)
	float RandomDeviation; // 0x7c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_BlueprintBase
// Size: 0xb0 (Inherited: 0x78)
class UBTTask_BlueprintBase : public UBTTaskNode {
public:

	struct AAIController* AIOwner; // 0x78(0x08)
	struct AActor* ActorOwner; // 0x80(0x08)
	struct FIntervalCountdown TickInterval; // 0x88(0x08)
	char pad_90[0x18]; // 0x90(0x18)
	char bShowPropertyDetails : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	void SetFinishOnMessageWithId(struct FName MessageName, int32_t requestId); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_FinishWithResult
// Size: 0x80 (Inherited: 0x78)
class UBTTask_FinishWithResult : public UBTTaskNode {
public:

	enum class EBTNodeResult Result; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_GameplayTaskBase
// Size: 0x80 (Inherited: 0x78)
class UBTTask_GameplayTaskBase : public UBTTaskNode {
public:

	char bWaitForGameplayTask : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_MakeNoise
// Size: 0x80 (Inherited: 0x78)
class UBTTask_MakeNoise : public UBTTaskNode {
public:

	float Loudnes; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_PawnActionBase
// Size: 0x78 (Inherited: 0x78)
class UBTTask_PawnActionBase : public UBTTaskNode {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_PlayAnimation
// Size: 0xb8 (Inherited: 0x78)
class UBTTask_PlayAnimation : public UBTTaskNode {
public:

	struct UAnimationAsset* AnimationToPlay; // 0x78(0x08)
	char bLooping : 1; // 0x80(0x01)
	char bNonBlocking : 1; // 0x80(0x01)
	char pad_80_2 : 6; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct UBehaviorTreeComponent* MyOwnerComp; // 0x88(0x08)
	struct USkeletalMeshComponent* CachedSkelMesh; // 0x90(0x08)
	char pad_98[0x20]; // 0x98(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_PlaySound
// Size: 0x80 (Inherited: 0x78)
class UBTTask_PlaySound : public UBTTaskNode {
public:

	struct USoundCue* SoundToPlay; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_RunBehavior
// Size: 0x80 (Inherited: 0x78)
class UBTTask_RunBehavior : public UBTTaskNode {
public:

	struct UBehaviorTree* BehaviorAsset; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_SetTagCooldown
// Size: 0x88 (Inherited: 0x78)
class UBTTask_SetTagCooldown : public UBTTaskNode {
public:

	struct FGameplayTag CooldownTag; // 0x78(0x08)
	bool bAddToExistingDuration; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float CooldownDuration; // 0x84(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator
// Size: 0x70 (Inherited: 0x68)
class UBTDecorator : public UBTAuxiliaryNode {
public:

	char pad_68_0 : 7; // 0x68(0x01)
	char bInverseCondition : 1; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	enum class EBTFlowAbortMode FlowAbortMode; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTService
// Size: 0x78 (Inherited: 0x68)
class UBTService : public UBTAuxiliaryNode {
public:

	float Interval; // 0x68(0x04)
	float RandomDeviation; // 0x6c(0x04)
	char bCallTickOnSearchStart : 1; // 0x70(0x01)
	char bRestartTimerOnEachActivation : 1; // 0x70(0x01)
	char pad_70_2 : 6; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryItemType_ActorBase
// Size: 0x38 (Inherited: 0x38)
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryItemType_Direction
// Size: 0x38 (Inherited: 0x38)
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryItemType_Point
// Size: 0x38 (Inherited: 0x38)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryTest_Distance
// Size: 0x210 (Inherited: 0x200)
class UEnvQueryTest_Distance : public UEnvQueryTest {
public:

	enum class EEnvTestDistance TestMode; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct UClass* DistanceTo; // 0x208(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryTest_Dot
// Size: 0x248 (Inherited: 0x200)
class UEnvQueryTest_Dot : public UEnvQueryTest {
public:

	struct FEnvDirection LineA; // 0x200(0x20)
	struct FEnvDirection LineB; // 0x220(0x20)
	enum class EEnvTestDot TestMode; // 0x240(0x01)
	bool bAbsoluteValue; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryTest_GameplayTags
// Size: 0x270 (Inherited: 0x200)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest {
public:

	struct FGameplayTagQuery TagQueryToMatch; // 0x200(0x48)
	bool bUpdatedToUseQuery; // 0x248(0x01)
	enum class EGameplayContainerMatchType TagsToMatch; // 0x249(0x01)
	char pad_24A[0x6]; // 0x24a(0x06)
	struct FGameplayTagContainer GameplayTags; // 0x250(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryTest_Overlap
// Size: 0x220 (Inherited: 0x200)
class UEnvQueryTest_Overlap : public UEnvQueryTest {
public:

	struct FEnvOverlapData OverlapData; // 0x200(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryTest_Pathfinding
// Size: 0x288 (Inherited: 0x200)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest {
public:

	enum class EEnvTestPathfinding TestMode; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct UClass* Context; // 0x208(0x08)
	struct FAIDataProviderBoolValue PathFromContext; // 0x210(0x38)
	struct FAIDataProviderBoolValue SkipUnreachable; // 0x248(0x38)
	struct UClass* FilterClass; // 0x280(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryTest_Project
// Size: 0x230 (Inherited: 0x200)
class UEnvQueryTest_Project : public UEnvQueryTest {
public:

	struct FEnvTraceData ProjectionData; // 0x200(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryTest_Random
// Size: 0x200 (Inherited: 0x200)
class UEnvQueryTest_Random : public UEnvQueryTest {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryTest_Trace
// Size: 0x2e0 (Inherited: 0x200)
class UEnvQueryTest_Trace : public UEnvQueryTest {
public:

	struct FEnvTraceData TraceData; // 0x200(0x30)
	struct FAIDataProviderBoolValue TraceFromContext; // 0x230(0x38)
	struct FAIDataProviderFloatValue ItemHeightOffset; // 0x268(0x38)
	struct FAIDataProviderFloatValue ContextHeightOffset; // 0x2a0(0x38)
	struct UClass* Context; // 0x2d8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryTest_Volume
// Size: 0x218 (Inherited: 0x200)
class UEnvQueryTest_Volume : public UEnvQueryTest {
public:

	struct UClass* VolumeContext; // 0x200(0x08)
	struct UClass* VolumeClass; // 0x208(0x08)
	char bDoComplexVolumeTest : 1; // 0x210(0x01)
	char pad_210_1 : 7; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size: 0x88 (Inherited: 0x58)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator {
public:

	struct FEnvTraceData ProjectionData; // 0x58(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
// Size: 0xd8 (Inherited: 0x58)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator {
public:

	struct UClass* SearchedActorClass; // 0x58(0x08)
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x60(0x38)
	struct FAIDataProviderFloatValue SearchRadius; // 0x98(0x38)
	struct UClass* SearchCenter; // 0xd0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryGenerator_BlueprintBase
// Size: 0x88 (Inherited: 0x58)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator {
public:

	struct FText GeneratorsActionDescription; // 0x58(0x18)
	struct UClass* Context; // 0x70(0x08)
	struct UClass* GeneratedItemType; // 0x78(0x08)
	char pad_80[0x8]; // 0x80(0x08)

	struct UObject* GetQuerier(); // Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryGenerator_Composite
// Size: 0x78 (Inherited: 0x58)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator {
public:

	struct TArray<struct UEnvQueryGenerator*> Generators; // 0x58(0x10)
	char bAllowDifferentItemTypes : 1; // 0x68(0x01)
	char bHasMatchingItemType : 1; // 0x68(0x01)
	char pad_68_2 : 6; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UClass* ForcedItemType; // 0x70(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryGenerator_CurrentLocation
// Size: 0x60 (Inherited: 0x58)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator {
public:

	struct UClass* QueryContext; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.AIDataProvider_Random
// Size: 0x58 (Inherited: 0x48)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams {
public:

	float Min; // 0x48(0x04)
	float Max; // 0x4c(0x04)
	char bInteger : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_MoveTo
// Size: 0xb8 (Inherited: 0xa0)
class UBTTask_MoveTo : public UBTTask_BlackboardBase {
public:

	float AcceptableRadius; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UClass* FilterClass; // 0xa8(0x08)
	float ObservedBlackboardValueTolerance; // 0xb0(0x04)
	char bObserveBlackboardValue : 1; // 0xb4(0x01)
	char bAllowStrafe : 1; // 0xb4(0x01)
	char bAllowPartialPath : 1; // 0xb4(0x01)
	char bTrackMovingGoal : 1; // 0xb4(0x01)
	char bProjectGoalLocation : 1; // 0xb4(0x01)
	char bReachTestIncludesAgentRadius : 1; // 0xb4(0x01)
	char bReachTestIncludesGoalRadius : 1; // 0xb4(0x01)
	char bStopOnOverlap : 1; // 0xb4(0x01)
	char bStopOnOverlapNeedsUpdate : 1; // 0xb5(0x01)
	char pad_B5_1 : 7; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_RotateToFaceBBEntry
// Size: 0xa8 (Inherited: 0xa0)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase {
public:

	float Precision; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_RunEQSQuery
// Size: 0x158 (Inherited: 0xa0)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase {
public:

	struct UEnvQuery* QueryTemplate; // 0xa0(0x08)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0xa8(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0xb8(0x10)
	enum class EEnvQueryRunMode RunMode; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0xd0(0x28)
	bool bUseBBKey; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x100(0x48)
	char pad_148[0x10]; // 0x148(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_WaitBlackboardTime
// Size: 0xa8 (Inherited: 0x80)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait {
public:

	struct FBlackboardKeySelector BlackboardKey; // 0x80(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_PushPawnAction
// Size: 0x80 (Inherited: 0x78)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase {
public:

	struct UPawnAction* Action; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_BlackboardBase
// Size: 0x98 (Inherited: 0x70)
class UBTDecorator_BlackboardBase : public UBTDecorator {
public:

	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_BlueprintBase
// Size: 0xa8 (Inherited: 0x70)
class UBTDecorator_BlueprintBase : public UBTDecorator {
public:

	struct AAIController* AIOwner; // 0x70(0x08)
	struct AActor* ActorOwner; // 0x78(0x08)
	struct TArray<struct FName> ObservedKeyNames; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
	char bShowPropertyDetails : 1; // 0xa0(0x01)
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0xa0(0x01)
	char bIsObservingBB : 1; // 0xa0(0x01)
	char pad_A0_3 : 5; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// Size: 0xd0 (Inherited: 0x70)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator {
public:

	struct FBlackboardKeySelector ActorToCheck; // 0x70(0x28)
	enum class EGameplayContainerMatchType TagsToMatch; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FGameplayTagContainer GameplayTags; // 0xa0(0x20)
	struct FString CachedDescription; // 0xc0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_CompareBBEntries
// Size: 0xc8 (Inherited: 0x70)
class UBTDecorator_CompareBBEntries : public UBTDecorator {
public:

	enum class EBlackBoardEntryComparison Operator; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FBlackboardKeySelector BlackboardKeyA; // 0x78(0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0xa0(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_ConeCheck
// Size: 0xf8 (Inherited: 0x70)
class UBTDecorator_ConeCheck : public UBTDecorator {
public:

	float ConeHalfAngle; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FBlackboardKeySelector ConeOrigin; // 0x78(0x28)
	struct FBlackboardKeySelector ConeDirection; // 0xa0(0x28)
	struct FBlackboardKeySelector Observed; // 0xc8(0x28)
	char pad_F0[0x8]; // 0xf0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_Cooldown
// Size: 0x78 (Inherited: 0x70)
class UBTDecorator_Cooldown : public UBTDecorator {
public:

	float CoolDownTime; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_DoesPathExist
// Size: 0xd0 (Inherited: 0x70)
class UBTDecorator_DoesPathExist : public UBTDecorator {
public:

	struct FBlackboardKeySelector BlackboardKeyA; // 0x70(0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x98(0x28)
	char bUseSelf : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	enum class EPathExistanceQueryType PathQueryType; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct UClass* FilterClass; // 0xc8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_ForceSuccess
// Size: 0x70 (Inherited: 0x70)
class UBTDecorator_ForceSuccess : public UBTDecorator {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_KeepInCone
// Size: 0xd0 (Inherited: 0x70)
class UBTDecorator_KeepInCone : public UBTDecorator {
public:

	float ConeHalfAngle; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FBlackboardKeySelector ConeOrigin; // 0x78(0x28)
	struct FBlackboardKeySelector Observed; // 0xa0(0x28)
	char bUseSelfAsOrigin : 1; // 0xc8(0x01)
	char bUseSelfAsObserved : 1; // 0xc8(0x01)
	char pad_C8_2 : 6; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_Loop
// Size: 0x80 (Inherited: 0x70)
class UBTDecorator_Loop : public UBTDecorator {
public:

	int32_t NumLoops; // 0x70(0x04)
	bool bInfiniteLoop; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float InfiniteLoopTimeoutTime; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_ReachedMoveGoal
// Size: 0x70 (Inherited: 0x70)
class UBTDecorator_ReachedMoveGoal : public UBTDecorator {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_SetTagCooldown
// Size: 0x80 (Inherited: 0x70)
class UBTDecorator_SetTagCooldown : public UBTDecorator {
public:

	struct FGameplayTag CooldownTag; // 0x70(0x08)
	float CooldownDuration; // 0x78(0x04)
	bool bAddToExistingDuration; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_TagCooldown
// Size: 0x80 (Inherited: 0x70)
class UBTDecorator_TagCooldown : public UBTDecorator {
public:

	struct FGameplayTag CooldownTag; // 0x70(0x08)
	float CooldownDuration; // 0x78(0x04)
	bool bAddToExistingDuration; // 0x7c(0x01)
	bool bActivatesCooldown; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_TimeLimit
// Size: 0x78 (Inherited: 0x70)
class UBTDecorator_TimeLimit : public UBTDecorator {
public:

	float TimeLimit; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTService_BlackboardBase
// Size: 0xa0 (Inherited: 0x78)
class UBTService_BlackboardBase : public UBTService {
public:

	struct FBlackboardKeySelector BlackboardKey; // 0x78(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTService_BlueprintBase
// Size: 0xa0 (Inherited: 0x78)
class UBTService_BlueprintBase : public UBTService {
public:

	struct AAIController* AIOwner; // 0x78(0x08)
	struct AActor* ActorOwner; // 0x80(0x08)
	char pad_88[0x10]; // 0x88(0x10)
	char bShowPropertyDetails : 1; // 0x98(0x01)
	char bShowEventDetails : 1; // 0x98(0x01)
	char pad_98_2 : 6; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryItemType_Actor
// Size: 0x38 (Inherited: 0x38)
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryTest_PathfindingBatch
// Size: 0x2c0 (Inherited: 0x288)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding {
public:

	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x288(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryGenerator_Cone
// Size: 0x178 (Inherited: 0x88)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints {
public:

	struct FAIDataProviderFloatValue AlignedPointsDistance; // 0x88(0x38)
	struct FAIDataProviderFloatValue ConeDegrees; // 0xc0(0x38)
	struct FAIDataProviderFloatValue AngleStep; // 0xf8(0x38)
	struct FAIDataProviderFloatValue Range; // 0x130(0x38)
	struct UClass* CenterActor; // 0x168(0x08)
	char bIncludeContextLocation : 1; // 0x170(0x01)
	char pad_170_1 : 7; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryGenerator_Donut
// Size: 0x1d8 (Inherited: 0x88)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints {
public:

	struct FAIDataProviderFloatValue InnerRadius; // 0x88(0x38)
	struct FAIDataProviderFloatValue OuterRadius; // 0xc0(0x38)
	struct FAIDataProviderIntValue NumberOfRings; // 0xf8(0x38)
	struct FAIDataProviderIntValue PointsPerRing; // 0x130(0x38)
	struct FEnvDirection ArcDirection; // 0x168(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x188(0x38)
	bool bUseSpiralPattern; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct UClass* Center; // 0x1c8(0x08)
	char bDefineArc : 1; // 0x1d0(0x01)
	char pad_1D0_1 : 7; // 0x1d0(0x01)
	char pad_1D1[0x7]; // 0x1d1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryGenerator_OnCircle
// Size: 0x218 (Inherited: 0x88)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints {
public:

	struct FAIDataProviderFloatValue CircleRadius; // 0x88(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xc0(0x38)
	struct FAIDataProviderIntValue NumberOfPoints; // 0xf8(0x38)
	enum class EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FEnvDirection ArcDirection; // 0x138(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x158(0x38)
	float AngleRadians; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct UClass* CircleCenter; // 0x198(0x08)
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct FAIDataProviderFloatValue CircleCenterZOffset; // 0x1a8(0x38)
	struct FEnvTraceData TraceData; // 0x1e0(0x30)
	char bDefineArc : 1; // 0x210(0x01)
	char pad_210_1 : 7; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size: 0x100 (Inherited: 0x88)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints {
public:

	struct FAIDataProviderFloatValue GridSize; // 0x88(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xc0(0x38)
	struct UClass* GenerateAround; // 0xf8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTTask_MoveDirectlyToward
// Size: 0xc0 (Inherited: 0xb8)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo {
public:

	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xb8(0x01)
	char bProjectVectorGoalToNavigation : 1; // 0xb8(0x01)
	char bUpdatedDeprecatedProperties : 1; // 0xb8(0x01)
	char pad_B8_3 : 5; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_Blackboard
// Size: 0xc8 (Inherited: 0x98)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase {
public:

	int32_t IntValue; // 0x98(0x04)
	float FloatValue; // 0x9c(0x04)
	struct FString StringValue; // 0xa0(0x10)
	struct FString CachedDescription; // 0xb0(0x10)
	char OperationType; // 0xc0(0x01)
	enum class EBTBlackboardRestart NotifyObserver; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_IsAtLocation
// Size: 0xe0 (Inherited: 0x98)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase {
public:

	float AcceptableRadius; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0xa0(0x38)
	enum class FAIDistanceType GeometricDistanceType; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	char bUseParametrizedRadius : 1; // 0xdc(0x01)
	char bUseNavAgentGoalLocation : 1; // 0xdc(0x01)
	char bPathFindingBasedTest : 1; // 0xdc(0x01)
	char pad_DC_3 : 5; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_IsBBEntryOfClass
// Size: 0xa0 (Inherited: 0x98)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase {
public:

	struct UClass* TestClass; // 0x98(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTService_DefaultFocus
// Size: 0xa8 (Inherited: 0xa0)
class UBTService_DefaultFocus : public UBTService_BlackboardBase {
public:

	char FocusPriority; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTService_RunEQS
// Size: 0xf8 (Inherited: 0xa0)
class UBTService_RunEQS : public UBTService_BlackboardBase {
public:

	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xa0(0x48)
	char pad_E8[0x10]; // 0xe8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.EnvQueryGenerator_PathingGrid
// Size: 0x178 (Inherited: 0x100)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid {
public:

	struct FAIDataProviderBoolValue PathToItem; // 0x100(0x38)
	struct UClass* NavigationFilter; // 0x138(0x08)
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x140(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AIModule.BTDecorator_ConditionalLoop
// Size: 0xc8 (Inherited: 0xc8)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
