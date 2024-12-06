/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif


namespace Dumper
{
	struct Function_AIModule_AIPerceptionComponent_SetSenseEnabled_Param
	{
	public:

		struct UClass* SenseClass; // 0x00(0x08)
		bool bEnable; // 0x08(0x01)
	};

	struct Function_AIModule_BlackboardComponent_SetValueAsVector_Param
	{
	public:

		struct FName KeyName; // 0x00(0x08)
		struct FVector VectorValue; // 0x08(0x0c)
	};

	struct Function_AIModule_EnvQueryInstanceBlueprintWrapper_SetNamedParam_Param
	{
	public:

		struct FName ParamName; // 0x00(0x08)
		float Value; // 0x08(0x04)
	};

	struct Function_AIModule_NavLinkProxy_SetSmartLinkEnabled_Param
	{
	public:

		bool bEnabled; // 0x00(0x01)
	};

	struct Function_AIModule_AIAsyncTaskBlueprintProxy_OnMoveCompleted_Param
	{
	public:

		struct FAIRequestID requestId; // 0x00(0x04)
		enum class EPathFollowingResult MovementResult; // 0x04(0x01)
	};

	struct Function_AIModule_AIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Param
	{
	public:

		struct UAnimInstance* AnimInstance; // 0x00(0x08)
		bool bUnlockMovement; // 0x08(0x01)
		bool UnlockAILogic; // 0x09(0x01)
	};

	struct Function_AIModule_AIPerceptionStimuliSourceComponent_UnregisterFromSense_Param
	{
	public:

		struct UClass* SenseClass; // 0x00(0x08)
	};

	struct Function_AIModule_AISystem_AILoggingVerbose_Param
	{
	public:

	};

	struct Function_AIModule_BTFunctionLibrary_StopUsingExternalEvent_Param
	{
	public:

		struct UBTNode* NodeOwner; // 0x00(0x08)
	};

	struct Function_AIModule_NavLocalGridManager_SetLocalNavigationGridDensity_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		float CellSize; // 0x08(0x04)
		bool ReturnValue; // 0x0c(0x01)
	};

	struct Function_AIModule_PawnActionsComponent_K2_PushAction_Param
	{
	public:

		struct UPawnAction* NewAction; // 0x00(0x08)
		enum class EAIRequestPriority Priority; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UObject* Instigator; // 0x10(0x08)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_AIModule_PawnSensingComponent_SetSensingUpdatesEnabled_Param
	{
	public:

		bool bEnabled; // 0x00(0x01)
	};

	struct Function_AIModule_BrainComponent_StopLogic_Param
	{
	public:

		struct FString reason; // 0x00(0x10)
	};

	struct Function_AIModule_AIController_UseBlackboard_Param
	{
	public:

		struct UBlackboardData* BlackboardAsset; // 0x00(0x08)
		struct UBlackboardComponent* BlackboardComponent; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_AIModule_PathFollowingComponent_OnNavDataRegistered_Param
	{
	public:

		struct ANavigationData* NavData; // 0x00(0x08)
	};

	struct Function_AIModule_PawnAction_GetActionPriority_Param
	{
	public:

		enum class EAIRequestPriority ReturnValue; // 0x00(0x01)
	};

	struct Function_AIModule_AISense_Hearing_ReportNoiseEvent_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct FVector NoiseLocation; // 0x08(0x0c)
		float Loudness; // 0x14(0x04)
		struct AActor* Instigator; // 0x18(0x08)
		float MaxRange; // 0x20(0x04)
		struct FName Tag; // 0x24(0x08)
	};

	struct Function_AIModule_AISense_Blueprint_OnUpdate_Param
	{
	public:

		struct TArray<struct UAISenseEvent*> EventsToProcess; // 0x00(0x10)
		float ReturnValue; // 0x10(0x04)
	};

	struct Function_AIModule_AISense_Damage_ReportDamageEvent_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct AActor* DamagedActor; // 0x08(0x08)
		struct AActor* Instigator; // 0x10(0x08)
		float DamageAmount; // 0x18(0x04)
		struct FVector EventLocation; // 0x1c(0x0c)
		struct FVector HitLocation; // 0x28(0x0c)
	};

	struct Function_AIModule_AISense_Prediction_RequestPawnPredictionEvent_Param
	{
	public:

		struct APawn* Requestor; // 0x00(0x08)
		struct AActor* PredictedActor; // 0x08(0x08)
		float PredictionTime; // 0x10(0x04)
	};

	struct Function_AIModule_BehaviorTreeComponent_SetDynamicSubtree_Param
	{
	public:

		struct FGameplayTag InjectTag; // 0x00(0x08)
		struct UBehaviorTree* BehaviorAsset; // 0x08(0x08)
	};

	struct Function_AIModule_AITask_MoveTo_AIMoveTo_Param
	{
	public:

		struct AAIController* Controller; // 0x00(0x08)
		struct FVector GoalLocation; // 0x08(0x0c)
		char pad_14[0x4]; // 0x14(0x04)
		struct AActor* GoalActor; // 0x18(0x08)
		float AcceptanceRadius; // 0x20(0x04)
		enum class EAIOptionFlag StopOnOverlap; // 0x24(0x01)
		enum class EAIOptionFlag AcceptPartialPath; // 0x25(0x01)
		bool bUsePathfinding; // 0x26(0x01)
		bool bLockAILogic; // 0x27(0x01)
		bool bUseContinuosGoalTracking; // 0x28(0x01)
		enum class EAIOptionFlag ProjectGoalOnNavigation; // 0x29(0x01)
		char pad_2A[0x6]; // 0x2a(0x06)
		struct UAITask_MoveTo* ReturnValue; // 0x30(0x08)
	};

	struct Function_AIModule_AITask_RunEQS_RunEQS_Param
	{
	public:

		struct AAIController* Controller; // 0x00(0x08)
		struct UEnvQuery* QueryTemplate; // 0x08(0x08)
		struct UAITask_RunEQS* ReturnValue; // 0x10(0x08)
	};

	struct Function_AIModule_EnvQueryContext_BlueprintBase_ProvideSingleLocation_Param
	{
	public:

		struct UObject* QuerierObject; // 0x00(0x08)
		struct AActor* QuerierActor; // 0x08(0x08)
		struct FVector ResultingLocation; // 0x10(0x0c)
	};

	struct Function_AIModule_CrowdFollowingComponent_SuspendCrowdSteering_Param
	{
	public:

		bool bSuspend; // 0x00(0x01)
	};

	struct Function_AIModule_AIPerceptionSystem_ReportPerceptionEvent_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct UAISenseEvent* PerceptionEvent; // 0x08(0x08)
	};

	struct Function_AIModule_EnvQueryManager_RunEQSQuery_Param
	{
	public:

	};

	struct Function_AIModule_PawnAction_BlueprintBase_ActionTick_Param
	{
	public:

		struct APawn* ControlledPawn; // 0x00(0x08)
		float DeltaSeconds; // 0x08(0x04)
	};

	struct Function_AIModule_BTTask_BlueprintBase_SetFinishOnMessageWithId_Param
	{
	public:

		struct FName MessageName; // 0x00(0x08)
		int32_t requestId; // 0x08(0x04)
	};

	struct Function_AIModule_EnvQueryGenerator_BlueprintBase_GetQuerier_Param
	{
	public:

		struct UObject* ReturnValue; // 0x00(0x08)
	};

	struct Function_AIModule_BTDecorator_BlueprintBase_ReceiveTickAI_Param
	{
	public:

		struct AAIController* OwnerController; // 0x00(0x08)
		struct APawn* ControlledPawn; // 0x08(0x08)
		float DeltaSeconds; // 0x10(0x04)
	};

	struct Function_AIModule_BTService_BlueprintBase_ReceiveTickAI_Param
	{
	public:

		struct AAIController* OwnerController; // 0x00(0x08)
		struct APawn* ControlledPawn; // 0x08(0x08)
		float DeltaSeconds; // 0x10(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
