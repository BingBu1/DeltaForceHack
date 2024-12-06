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
	struct Function_GPQuest_GPQuestActionLib_Basic_QA_SetStageTitle_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct FText InStageTitle; // 0x08(0x18)
	};

	struct Function_GPQuest_GPQuestAudioSubsystem_StopAudio_Param
	{
	public:

		struct FName AudioDataTableKey; // 0x00(0x08)
		int32_t TransitionMS; // 0x08(0x04)
	};

	struct Function_GPQuest_GPQuestClientProxy_SetOptionalObjectiveInfo_Param
	{
	public:

		struct FGPQuestObjectiveHUDInfo InObjectiveInfo; // 0x00(0x50)
	};

	struct Function_GPQuest_GPQuestCountdownBase_Recountdown_Param
	{
	public:

		int32_t Duration; // 0x00(0x04)
	};

	struct Function_GPQuest_GPQuestTextUtils_GetFinalText_Param
	{
	public:

		struct FGPQuestText Text; // 0x00(0x28)
		struct FText ReturnValue; // 0x28(0x18)
	};

	struct Function_GPQuest_GPQuestInteractorInterface_OnStatusChanged_Broadcast_Param
	{
	public:

	};

	struct Function_GPQuest_GPQuestLevelResetComponent_TestReset_Param
	{
	public:

	};

	struct Function_GPQuest_GPQuestMarkerBase_ShowMarkCircelOnClient_Param
	{
	public:

	};

	struct Function_GPQuest_GPQuestSettings_Get_Param
	{
	public:

		struct UGPQuestSettings* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPQuest_GPQuestStageUtils_GetStageTitleKey_Param
	{
	public:

		struct AGPQuestStage* QStage; // 0x00(0x08)
		struct FString ReturnValue; // 0x08(0x10)
	};

	struct Function_GPQuest_GPQuestSystem_UnloadQuest_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		int32_t QuestID; // 0x08(0x04)
	};

	struct Function_GPQuest_GPQuestUtils_ToQuest_Param
	{
	public:

		struct AGPQuestActionContext* QAContext; // 0x00(0x08)
		struct AGPQuest* ReturnValue; // 0x08(0x08)
	};

	struct Function_GPQuest_GPQuestVolume_OnQuestAreaTriggerEndOverlapped_Param
	{
	public:

		struct UPrimitiveComponent* OverlappedComponent; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
		struct UPrimitiveComponent* OtherComp; // 0x10(0x08)
		int32_t OtherBodyIndex; // 0x18(0x04)
	};

	struct Function_GPQuest_GPTRPCQuestComponent_ServerReplayStage_Param
	{
	public:

		struct AGPQuest* Quest; // 0x00(0x08)
	};

	struct Function_GPQuest_GPQuestActionContext_StageGraphJumpObjective_Param
	{
	public:

		int32_t objectiveId; // 0x00(0x04)
	};

	struct Function_GPQuest_GPQuestObjectiveAsyncReturnActionBase_FireReturnAction_Param
	{
	public:

		enum class EGPQuestObjectiveAsyncReturnBranch Branch; // 0x00(0x01)
	};

	struct Function_GPQuest_GPQuestStageAsyncReturnActionBase_FireReturnAction_Param
	{
	public:

		enum class EGPQuestStageAsyncReturnBranch Branch; // 0x00(0x01)
	};

	struct Function_GPQuest_GPQuest_QuestGraphJumpStage_Param
	{
	public:

		struct FString StageName; // 0x00(0x10)
		enum class EGPQuestPlayReason reason; // 0x10(0x01)
	};

	struct Function_GPQuest_GPQuestStage_ResetStageBroadcast_Param
	{
	public:

		enum class EGPQuestPlayReason reason; // 0x00(0x01)
	};

	struct Function_GPQuest_GPQuestObjectiveAsyncReturnAction_Default_EndQuestObjectiveNew_Param
	{
	public:

		struct AGPQuest* Quest; // 0x00(0x08)
		enum class EGPQuestObjectiveAsyncReturnBranch Branch; // 0x08(0x01)
	};

	struct Function_GPQuest_GPQuestStageAsyncReturnAction_Default_ReplayQuestStage_Param
	{
	public:

		struct AGPQuest* Quest; // 0x00(0x08)
		enum class EGPQuestPlayReason reason; // 0x08(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
