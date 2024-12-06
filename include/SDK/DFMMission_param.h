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
	struct Function_DFMMission_IrisPlayerMissionComponent_TryTraceMission_Param
	{
	public:

		int64_t missionid; // 0x00(0x08)
	};

	struct Function_DFMMission_MissionComponent_ShowPanel_Param
	{
	public:

		bool Show; // 0x00(0x01)
	};

	struct Function_DFMMission_DFMMissionSimpleQuestTrigger_UpdateObjective_Param
	{
	public:

		bool B; // 0x00(0x01)
	};

	struct Function_DFMMission_MissionEventBusSubSystem_Get_Param
	{
	public:

		struct UWorld* WorldContext; // 0x00(0x08)
		struct UMissionEventBusSubSystem* ReturnValue; // 0x08(0x08)
	};

	struct Function_DFMMission_MissionSubsystem_WorldActorBoxOpenFinished_Param
	{
	public:

		struct AGPPlayerController* cpc; // 0x00(0x08)
		struct AInventoryPickup_OpenBox* Box; // 0x08(0x08)
	};

	struct Function_DFMMission_DFMMissionSubsystem_OnHUDHealthDamaged_Param
	{
	public:

		float Damage; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FTakeHitInfo TakeHitInfo; // 0x08(0xd0)
	};

	struct Function_DFMMission_GameStateMissionComponent_RemoveTickLevel_Param
	{
	public:

		struct UMissionLevel* InArg; // 0x00(0x08)
	};

	struct Function_DFMMission_SubLevelInstanceActor_OnSubLevelTick_Param
	{
	public:

	};

	struct Function_DFMMission_Mission_OnRep_CurrentStateIndex_Param
	{
	public:

	};

	struct Function_DFMMission_MissionActorLayer_AddToLayer_Param
	{
	public:

		struct FString Tag; // 0x00(0x10)
		struct AActor* InArg2; // 0x10(0x08)
	};

	struct Function_DFMMission_MissionState_ToggleStage_Param
	{
	public:

		bool InArg1; // 0x00(0x01)
		bool InArg2; // 0x01(0x01)
	};

	struct Function_DFMMission_MissionTurnInItemGameplayHelper_RemoveMissionTurnInItemInfo_Param
	{
	public:

		int32_t handl; // 0x00(0x04)
	};

	struct Function_DFMMission_MissionLevel_UnLevels_Param
	{
	public:

	};

	struct Function_DFMMission_SublevelComponent_OnRep_WorldType_Param
	{
	public:

	};

	struct Function_DFMMission_MissionBaseSimpleAction_InitArgs_Param
	{
	public:

		struct FSimpleActionArgument Args; // 0x00(0x14)
		char pad_14[0x4]; // 0x14(0x04)
		struct FSimpleActionExtArgument InArg2; // 0x18(0x90)
	};

	struct Function_DFMMission_MissionBaseTrigger_Toggle_Param
	{
	public:

		bool InArg; // 0x00(0x01)
	};

	struct Function_DFMMission_MissionStartQuest_OnQuestEnd_Param
	{
	public:

		struct AGPQuest* InQuest; // 0x00(0x08)
	};

	struct Function_DFMMission_MissionGoto_OnGmGoto_Param
	{
	public:

	};

	struct Function_DFMMission_MissionLoadSubLevels_OnSubLevelLoadServer_Param
	{
	public:

		struct FString Name; // 0x00(0x10)
	};

	struct Function_DFMMission_MissionMonsterSpawner_OnDramaAreaSpawnEnd_Param
	{
	public:

	};

	struct Function_DFMMission_MissionPlaySequence_OnEndSequenceInternal_Param
	{
	public:

		struct AGPSequenceActor* SequencePlayer; // 0x00(0x08)
	};

	struct Function_DFMMission_MissionAIFightMeTrigger_OnAIMesgReceive_Param
	{
	public:

		struct ADFMCharacter* AI; // 0x00(0x08)
		enum class EAIMsgType MsgType; // 0x08(0x01)
	};

	struct Function_DFMMission_MissionAreaTrigger_OnEndOverlap_Param
	{
	public:

		struct AActor* InTrigger; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
	};

	struct Function_DFMMission_MissionCommitItemTrigger_OnSpaceMarkedDirty_Param
	{
	public:

	};

	struct Function_DFMMission_MissionDamageTrigger_OnDamage_Param
	{
	public:

		int32_t Health; // 0x00(0x04)
	};

	struct Function_DFMMission_MissionEnermyDieTrigger_OnMissionSpawnDelgateProxy_Param
	{
	public:

	};

	struct Function_DFMMission_MissionGameStateTrigger_OnGameStateChange_Param
	{
	public:

		int32_t Key; // 0x00(0x04)
		int32_t Value; // 0x04(0x04)
	};

	struct Function_DFMMission_MissionGetItemTrigger_OnSpaceMarkedDirty_Param
	{
	public:

	};

	struct Function_DFMMission_MissionGPQuestTrigger_OnQuestEnd_Param
	{
	public:

		struct AGPQuest* Quest; // 0x00(0x08)
	};

	struct Function_DFMMission_MissionInteractItemTrigger_OnInteract_Param
	{
	public:

		uint64_t Uin; // 0x00(0x08)
		struct AActor* Actor; // 0x08(0x08)
		enum class EInteractorType InteractorType; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct FString Params; // 0x18(0x10)
	};

	struct Function_DFMMission_MissionInteractNPCTrigger_OnInteractEnd_Param
	{
	public:

		uint64_t Uin; // 0x00(0x08)
		int64_t GroupID; // 0x08(0x08)
	};

	struct Function_DFMMission_MissionKillEnermyTrigger_OnMissionSpawnDelgateProxy_Param
	{
	public:

	};

	struct Function_DFMMission_MissionTrainBreaksTrigger_FireBreakStatusChange_Param
	{
	public:

		int32_t nDestruct; // 0x00(0x04)
		int32_t nTotal; // 0x04(0x04)
	};

	struct Function_DFMMission_MissionTriggerCheckGetOnOffVehicle_OnVehiclePassengerOn_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		struct FName SeatName; // 0x08(0x08)
	};

	struct Function_DFMMission_MissionCombineTrigger_AddTrigger_Param
	{
	public:

		struct UMissionBaseTrigger* InArg; // 0x00(0x08)
	};

	struct Function_DFMMission_MissionLevelLoadTrigger_OnLevelComplete_Param
	{
	public:

	};

	struct Function_DFMMission_MissionPlayerDie_OnSpawnedAIDied_Param
	{
	public:

		struct AGPCharacterBase* InCharacter; // 0x00(0x08)
		struct AController* Killer; // 0x08(0x08)
		struct UDamageType* DamageType; // 0x10(0x08)
	};

	struct Function_DFMMission_MissionPlayerReborn_OnCharacterReborn_Param
	{
	public:

	};

	struct Function_DFMMission_MissionTriggerLeaveArea_OnEndOverlap_Param
	{
	public:

		struct AActor* InTrigger; // 0x00(0x08)
		struct AActor* OtherActor; // 0x08(0x08)
	};

	struct Function_DFMMission_MissionTriggerSearchAreaAndGetOnOffVehicle_OnVehiclePassengerOn_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		struct FName SeatName; // 0x08(0x08)
	};

	struct Function_DFMMission_MissionTurnInItemTrigger_OnTurnInItem_Param
	{
	public:

		struct FMissionTurnInItemInfo Item; // 0x00(0x28)
	};

	struct Function_DFMMission_MissionActionLoadGPQuest_OnPreBegin_Param
	{
	public:

		struct AGPQuest* Quest; // 0x00(0x08)
	};

	struct Function_DFMMission_MissionConditionInteractNPCTrigger_OnProcessDialogStart_Param
	{
	public:

		uint64_t GroupID; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
