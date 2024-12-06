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
	struct Function_GPAIBase_AIAdvancedPerceptionComponent_SetAttracted_Param
	{
	public:

		bool bActtracted; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPAIBase_AIBPLib_SetBDVector_Param
	{
	public:

		struct UBlackboardComponent* BlackboardComp; // 0x00(0x08)
		struct FName Key; // 0x08(0x08)
		struct FVector Value; // 0x10(0x0c)
	};

	struct Function_GPAIBase_GPAIFunctionLibrary_TestCoverToLocationVisibility_Param
	{
	public:

		struct UNZCoverPoint* FromCover; // 0x00(0x08)
		struct FVector ToLocation; // 0x08(0x0c)
		bool bDrawDebug; // 0x14(0x01)
		bool ReturnValue; // 0x15(0x01)
	};

	struct Function_GPAIBase_AIJob_Update_Param
	{
	public:

	};

	struct Function_GPAIBase_JobFilterBase_GetJob_Implementation_Param
	{
	public:

		struct AAIController* AIController; // 0x00(0x08)
		struct TArray<struct UAIJob*> Jobs; // 0x08(0x10)
		struct UAIJob* ReturnValue; // 0x18(0x08)
	};

	struct Function_GPAIBase_AIJobManager_UpdateJobs_Param
	{
	public:

	};

	struct Function_GPAIBase_AILayoutConfigActor_LoadAILayoutCustom_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct TArray<struct FString> LevelList; // 0x08(0x10)
		struct FString MapName; // 0x18(0x10)
	};

	struct Function_GPAIBase_AIThreatWeightsComponent_SetThreatTypeWeight_Param
	{
	public:

		char ThreatType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Weight; // 0x04(0x04)
	};

	struct Function_GPAIBase_PointGrid_ThreatAreaClear_Param
	{
	public:

		int64_t AreaToken; // 0x00(0x08)
		struct UObject* WorldContext; // 0x08(0x08)
	};

	struct Function_GPAIBase_ThreatAreaInterface_GetThreatAreaType_Param
	{
	public:

		enum class EAIThreatAreaType ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAIBase_AIThreatAreaSystem_Tick_Param
	{
	public:

		float DeltaSeconds; // 0x00(0x04)
	};

	struct Function_GPAIBase_ThreatSourceInterface_GetThreat_Sight_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPAIBase_AIThreatRecordComponent_RecordPerceptionThreat_Param
	{
	public:

		struct AAIController* perceptionOwner; // 0x00(0x08)
		struct ACHARACTER* threatRelatedCharacter; // 0x08(0x08)
		struct FAIStimulus Stimulus; // 0x10(0x3c)
	};

	struct Function_GPAIBase_AISpecificBehaviorFlagsInterface_ShouldRecheckBTbySpecificBehaviorType_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAIBase_GPAIBehaviorTreeComponent_SetPathfindCommand_Param
	{
	public:

		struct FAIPathFindingResult Command; // 0x00(0x28)
	};

	struct Function_GPAIBase_GPAI_CoverPointAnimSetting_SetCharacterCoverPointCondition_Param
	{
	public:

		enum class ECoverPointCondition Condition; // 0x00(0x01)
	};

	struct Function_GPAIBase_GPAI_PlayMontageCallbackProxy_OnNotifyEndReceived_Param
	{
	public:

		struct FName NotifyName; // 0x00(0x08)
		struct FBranchingPointNotifyPayload BranchingPointNotifyPayload; // 0x08(0x20)
	};

	struct Function_GPAIBase_GPEnvQueryInstanceBPWrapper_GetResultsAsObjects_Param
	{
	public:

		struct TArray<struct UObject*> ReturnValue; // 0x00(0x10)
	};

	struct Function_GPAIBase_NZCoverGenerator_ReleaseCover_Param
	{
	public:

		struct UNZCoverPoint* NZCoverPoint; // 0x00(0x08)
	};

	struct Function_GPAIBase_CoverOccupierInterface_StopCoverPointMontage_Param
	{
	public:

		struct UAnimMontage* montageToStop; // 0x00(0x08)
	};

	struct Function_GPAIBase_NZCoverPoint_TryOccupyCover_Param
	{
	public:

		struct AController* Controller; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPAIBase_GPBTTaskBase_GetCurrentGameTime_Param
	{
	public:

		float ReturnValue; // 0x00(0x04)
	};

	struct Function_GPAIBase_GPEQSGenerator_RoundArea_ShouldAvoidPoint_Param
	{
	public:

		struct FVector avoidTargetPoint; // 0x00(0x0c)
		struct FVector testingPoint; // 0x0c(0x0c)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPAIBase_GPBTTask_Blueprint_SetFinishOnMessageWithId_Param
	{
	public:

		struct FName MessageName; // 0x00(0x08)
		int32_t requestId; // 0x08(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
