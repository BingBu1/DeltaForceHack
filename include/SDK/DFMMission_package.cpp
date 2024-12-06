/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#include "../SDK.h"

namespace Dumper
{
	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FWorldActorInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FWorldActorInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x57\x6f\x72\x6c\x64\x41\x63\x74\x6f\x72\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FWorldActorContent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FWorldActorContent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x57\x6f\x72\x6c\x64\x41\x63\x74\x6f\x72\x43\x6f\x6e\x74\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMissionStageTriggerInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMissionStageTriggerInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x53\x74\x61\x67\x65\x54\x72\x69\x67\x67\x65\x72\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMissionTriggerActionInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMissionTriggerActionInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x72\x69\x67\x67\x65\x72\x41\x63\x74\x69\x6f\x6e\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMissionTriggerInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMissionTriggerInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x72\x69\x67\x67\x65\x72\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FTaskGroupState.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FTaskGroupState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x54\x61\x73\x6b\x47\x72\x6f\x75\x70\x53\x74\x61\x74\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FWorldTargetState.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FWorldTargetState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x57\x6f\x72\x6c\x64\x54\x61\x72\x67\x65\x74\x53\x74\x61\x74\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMissionTargetRequest.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMissionTargetRequest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x61\x72\x67\x65\x74\x52\x65\x71\x75\x65\x73\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMissionMapMarkerData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMissionMapMarkerData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x4d\x61\x70\x4d\x61\x72\x6b\x65\x72\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FPlayerLevelState.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FPlayerLevelState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x50\x6c\x61\x79\x65\x72\x4c\x65\x76\x65\x6c\x53\x74\x61\x74\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FLevelStreamInstanceInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FLevelStreamInstanceInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4c\x65\x76\x65\x6c\x53\x74\x72\x65\x61\x6d\x49\x6e\x73\x74\x61\x6e\x63\x65\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UIrisPlayerMissionComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UIrisPlayerMissionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x49\x72\x69\x73\x50\x6c\x61\x79\x65\x72\x4d\x69\x73\x73\x69\x6f\x6e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionLevelRequest.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionLevelRequest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x4c\x65\x76\x65\x6c\x52\x65\x71\x75\x65\x73\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UWorldCruiseSpawnerInteraceface.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWorldCruiseSpawnerInteraceface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x57\x6f\x72\x6c\x64\x43\x72\x75\x69\x73\x65\x53\x70\x61\x77\x6e\x65\x72\x49\x6e\x74\x65\x72\x61\x63\x65\x66\x61\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFMMissionMgr.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMMissionMgr::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x4d\x67\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFMMissionSimpleAction.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMMissionSimpleAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x53\x69\x6d\x70\x6c\x65\x41\x63\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFMMissionSimpleQuestTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMMissionSimpleQuestTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x53\x69\x6d\x70\x6c\x65\x51\x75\x65\x73\x74\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionEventBusSubSystem.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionEventBusSubSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x45\x76\x65\x6e\x74\x42\x75\x73\x53\x75\x62\x53\x79\x73\x74\x65\x6d");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionSubsystem.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x53\x75\x62\x73\x79\x73\x74\x65\x6d");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ADFMMissionSubsystem.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ADFMMissionSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x53\x75\x62\x73\x79\x73\x74\x65\x6d");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameStateMissionComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameStateMissionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x47\x61\x6d\x65\x53\x74\x61\x74\x65\x4d\x69\x73\x73\x69\x6f\x6e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ASubLevelInstanceActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ASubLevelInstanceActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x53\x75\x62\x4c\x65\x76\x65\x6c\x49\x6e\x73\x74\x61\x6e\x63\x65\x41\x63\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMission.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMission::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionActorLayer.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionActorLayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x41\x63\x74\x6f\x72\x4c\x61\x79\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionState.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x53\x74\x61\x74\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionTurnInItemGameplayHelper.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionTurnInItemGameplayHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x75\x72\x6e\x49\x6e\x49\x74\x65\x6d\x47\x61\x6d\x65\x70\x6c\x61\x79\x48\x65\x6c\x70\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionLevel.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionLevel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x4c\x65\x76\x65\x6c");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USQAFunctionLib.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USQAFunctionLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x53\x51\x41\x46\x75\x6e\x63\x74\x69\x6f\x6e\x4c\x69\x62");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction USublevelComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USublevelComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x53\x75\x62\x6c\x65\x76\x65\x6c\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionBaseSimpleAction.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionBaseSimpleAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x42\x61\x73\x65\x53\x69\x6d\x70\x6c\x65\x41\x63\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionBaseTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionBaseTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x42\x61\x73\x65\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionBaseAction.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionBaseAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x42\x61\x73\x65\x41\x63\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionStartQuest.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionStartQuest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x53\x74\x61\x72\x74\x51\x75\x65\x73\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionGoto.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionGoto::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x47\x6f\x74\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionLoadSubLevels.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionLoadSubLevels::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x4c\x6f\x61\x64\x53\x75\x62\x4c\x65\x76\x65\x6c\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionMonsterSpawner.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionMonsterSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x4d\x6f\x6e\x73\x74\x65\x72\x53\x70\x61\x77\x6e\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionPlaySequence.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionPlaySequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x50\x6c\x61\x79\x53\x65\x71\x75\x65\x6e\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionAIFightMeTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionAIFightMeTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x41\x49\x46\x69\x67\x68\x74\x4d\x65\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionAreaTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionAreaTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x41\x72\x65\x61\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionCommitItemTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionCommitItemTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x43\x6f\x6d\x6d\x69\x74\x49\x74\x65\x6d\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionDamageTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionDamageTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x44\x61\x6d\x61\x67\x65\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionEnermyDieTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionEnermyDieTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x45\x6e\x65\x72\x6d\x79\x44\x69\x65\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionGameStateTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionGameStateTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x47\x61\x6d\x65\x53\x74\x61\x74\x65\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionGetItemTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionGetItemTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x47\x65\x74\x49\x74\x65\x6d\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionGPQuestTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionGPQuestTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x47\x50\x51\x75\x65\x73\x74\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionInteractItemTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionInteractItemTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x49\x6e\x74\x65\x72\x61\x63\x74\x49\x74\x65\x6d\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionInteractNPCTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionInteractNPCTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x49\x6e\x74\x65\x72\x61\x63\x74\x4e\x50\x43\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionKillEnermyTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionKillEnermyTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x4b\x69\x6c\x6c\x45\x6e\x65\x72\x6d\x79\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionTraceItemTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionTraceItemTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x72\x61\x63\x65\x49\x74\x65\x6d\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionTrainBreaksTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionTrainBreaksTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x72\x61\x69\x6e\x42\x72\x65\x61\x6b\x73\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionTriggerCheckGetOnOffVehicle.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionTriggerCheckGetOnOffVehicle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x72\x69\x67\x67\x65\x72\x43\x68\x65\x63\x6b\x47\x65\x74\x4f\x6e\x4f\x66\x66\x56\x65\x68\x69\x63\x6c\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionCombineTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionCombineTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x43\x6f\x6d\x62\x69\x6e\x65\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionEventTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionEventTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x45\x76\x65\x6e\x74\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionAttributeTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionAttributeTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x41\x74\x74\x72\x69\x62\x75\x74\x65\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionLevelLoadTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionLevelLoadTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x4c\x65\x76\x65\x6c\x4c\x6f\x61\x64\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionPlayerDie.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionPlayerDie::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x50\x6c\x61\x79\x65\x72\x44\x69\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionPlayerReborn.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionPlayerReborn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x50\x6c\x61\x79\x65\x72\x52\x65\x62\x6f\x72\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionTriggerLeaveArea.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionTriggerLeaveArea::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x72\x69\x67\x67\x65\x72\x4c\x65\x61\x76\x65\x41\x72\x65\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionTriggerSearchAreaAndGetOnOffVehicle.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionTriggerSearchAreaAndGetOnOffVehicle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x72\x69\x67\x67\x65\x72\x53\x65\x61\x72\x63\x68\x41\x72\x65\x61\x41\x6e\x64\x47\x65\x74\x4f\x6e\x4f\x66\x66\x56\x65\x68\x69\x63\x6c\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionTurnInItemTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionTurnInItemTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x75\x72\x6e\x49\x6e\x49\x74\x65\x6d\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionCombineAction.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionCombineAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x43\x6f\x6d\x62\x69\x6e\x65\x41\x63\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionActionLoadGPQuest.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionActionLoadGPQuest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x41\x63\x74\x69\x6f\x6e\x4c\x6f\x61\x64\x47\x50\x51\x75\x65\x73\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionConditionAreaTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionConditionAreaTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x43\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x41\x72\x65\x61\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionInteractNPCExt.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionInteractNPCExt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x49\x6e\x74\x65\x72\x61\x63\x74\x4e\x50\x43\x45\x78\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionConditionInteractNPCTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionConditionInteractNPCTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x43\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x49\x6e\x74\x65\x72\x61\x63\x74\x4e\x50\x43\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMissionServerAcceptCombineTrigger.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMissionServerAcceptCombineTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x53\x65\x72\x76\x65\x72\x41\x63\x63\x65\x70\x74\x43\x6f\x6d\x62\x69\x6e\x65\x54\x72\x69\x67\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.IrisPlayerMissionComponent.TryTraceMission
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UIrisPlayerMissionComponent::TryTraceMission(int64_t missionid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x49\x72\x69\x73\x50\x6c\x61\x79\x65\x72\x4d\x69\x73\x73\x69\x6f\x6e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x54\x72\x79\x54\x72\x61\x63\x65\x4d\x69\x73\x73\x69\x6f\x6e");
		Function_DFMMission_IrisPlayerMissionComponent_TryTraceMission_Param params { };
		params.missionid = missionid;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionComponent.ShowPanel
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UMissionComponent::ShowPanel(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x53\x68\x6f\x77\x50\x61\x6e\x65\x6c");
		Function_DFMMission_MissionComponent_ShowPanel_Param params { };
		params.Show = Show;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.DFMMissionSimpleQuestTrigger.UpdateObjective
	 * 	Flags: (Final, Native, Public)
	 */
	void UDFMMissionSimpleQuestTrigger::UpdateObjective(bool B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x53\x69\x6d\x70\x6c\x65\x51\x75\x65\x73\x74\x54\x72\x69\x67\x67\x65\x72\x2e\x55\x70\x64\x61\x74\x65\x4f\x62\x6a\x65\x63\x74\x69\x76\x65");
		Function_DFMMission_DFMMissionSimpleQuestTrigger_UpdateObjective_Param params { };
		params.B = B;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionEventBusSubSystem.Get
	 * 	Flags: (Final, Native, Static, Public)
	 */
	struct UMissionEventBusSubSystem* UMissionEventBusSubSystem::STATIC_Get(struct UWorld* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x45\x76\x65\x6e\x74\x42\x75\x73\x53\x75\x62\x53\x79\x73\x74\x65\x6d\x2e\x47\x65\x74");
		Function_DFMMission_MissionEventBusSubSystem_Get_Param params { };
		params.WorldContext = WorldContext;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionSubsystem.WorldActorBoxOpenFinished
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionSubsystem::WorldActorBoxOpenFinished(struct AGPPlayerController* cpc, struct AInventoryPickup_OpenBox* Box)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x53\x75\x62\x73\x79\x73\x74\x65\x6d\x2e\x57\x6f\x72\x6c\x64\x41\x63\x74\x6f\x72\x42\x6f\x78\x4f\x70\x65\x6e\x46\x69\x6e\x69\x73\x68\x65\x64");
		Function_DFMMission_MissionSubsystem_WorldActorBoxOpenFinished_Param params { };
		params.cpc = cpc;
		params.Box = Box;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.DFMMissionSubsystem.OnHUDHealthDamaged
	 * 	Flags: (Final, Native, Public, HasOutParms)
	 */
	void ADFMMissionSubsystem::OnHUDHealthDamaged(float Damage, struct FTakeHitInfo& TakeHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x53\x75\x62\x73\x79\x73\x74\x65\x6d\x2e\x4f\x6e\x48\x55\x44\x48\x65\x61\x6c\x74\x68\x44\x61\x6d\x61\x67\x65\x64");
		Function_DFMMission_DFMMissionSubsystem_OnHUDHealthDamaged_Param params { };
		params.Damage = Damage;
		params.TakeHitInfo = TakeHitInfo;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		TakeHitInfo = params.TakeHitInfo;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.GameStateMissionComponent.RemoveTickLevel
	 * 	Flags: (Final, Native, Public)
	 */
	void UGameStateMissionComponent::RemoveTickLevel(struct UMissionLevel* InArg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x47\x61\x6d\x65\x53\x74\x61\x74\x65\x4d\x69\x73\x73\x69\x6f\x6e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x52\x65\x6d\x6f\x76\x65\x54\x69\x63\x6b\x4c\x65\x76\x65\x6c");
		Function_DFMMission_GameStateMissionComponent_RemoveTickLevel_Param params { };
		params.InArg = InArg;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.SubLevelInstanceActor.OnSubLevelTick
	 * 	Flags: (Final, Native, Public)
	 */
	void ASubLevelInstanceActor::OnSubLevelTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x53\x75\x62\x4c\x65\x76\x65\x6c\x49\x6e\x73\x74\x61\x6e\x63\x65\x41\x63\x74\x6f\x72\x2e\x4f\x6e\x53\x75\x62\x4c\x65\x76\x65\x6c\x54\x69\x63\x6b");
		Function_DFMMission_SubLevelInstanceActor_OnSubLevelTick_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.Mission.OnRep_CurrentStateIndex
	 * 	Flags: (Final, Native, Public)
	 */
	void UMission::OnRep_CurrentStateIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4f\x6e\x52\x65\x70\x5f\x43\x75\x72\x72\x65\x6e\x74\x53\x74\x61\x74\x65\x49\x6e\x64\x65\x78");
		Function_DFMMission_Mission_OnRep_CurrentStateIndex_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionActorLayer.AddToLayer
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionActorLayer::AddToLayer(struct FString Tag, struct AActor* InArg2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x41\x63\x74\x6f\x72\x4c\x61\x79\x65\x72\x2e\x41\x64\x64\x54\x6f\x4c\x61\x79\x65\x72");
		Function_DFMMission_MissionActorLayer_AddToLayer_Param params { };
		params.Tag = Tag;
		params.InArg2 = InArg2;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionState.ToggleStage
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionState::ToggleStage(bool InArg1, bool InArg2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x53\x74\x61\x74\x65\x2e\x54\x6f\x67\x67\x6c\x65\x53\x74\x61\x67\x65");
		Function_DFMMission_MissionState_ToggleStage_Param params { };
		params.InArg1 = InArg1;
		params.InArg2 = InArg2;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionTurnInItemGameplayHelper.RemoveMissionTurnInItemInfo
	 * 	Flags: (Final, Native, Static, Public)
	 */
	void UMissionTurnInItemGameplayHelper::STATIC_RemoveMissionTurnInItemInfo(int32_t handl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x75\x72\x6e\x49\x6e\x49\x74\x65\x6d\x47\x61\x6d\x65\x70\x6c\x61\x79\x48\x65\x6c\x70\x65\x72\x2e\x52\x65\x6d\x6f\x76\x65\x4d\x69\x73\x73\x69\x6f\x6e\x54\x75\x72\x6e\x49\x6e\x49\x74\x65\x6d\x49\x6e\x66\x6f");
		Function_DFMMission_MissionTurnInItemGameplayHelper_RemoveMissionTurnInItemInfo_Param params { };
		params.handl = handl;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionLevel.UnLevels
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionLevel::UnLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x4c\x65\x76\x65\x6c\x2e\x55\x6e\x4c\x65\x76\x65\x6c\x73");
		Function_DFMMission_MissionLevel_UnLevels_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.SublevelComponent.OnRep_WorldType
	 * 	Flags: (Final, Native, Public)
	 */
	void USublevelComponent::OnRep_WorldType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x53\x75\x62\x6c\x65\x76\x65\x6c\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x4f\x6e\x52\x65\x70\x5f\x57\x6f\x72\x6c\x64\x54\x79\x70\x65");
		Function_DFMMission_SublevelComponent_OnRep_WorldType_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionBaseSimpleAction.InitArgs
	 * 	Flags: (Native, Public, HasOutParms)
	 */
	void UMissionBaseSimpleAction::InitArgs(struct FSimpleActionArgument& Args, struct FSimpleActionExtArgument& InArg2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x42\x61\x73\x65\x53\x69\x6d\x70\x6c\x65\x41\x63\x74\x69\x6f\x6e\x2e\x49\x6e\x69\x74\x41\x72\x67\x73");
		Function_DFMMission_MissionBaseSimpleAction_InitArgs_Param params { };
		params.Args = Args;
		params.InArg2 = InArg2;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Args = params.Args;
		InArg2 = params.InArg2;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionBaseTrigger.Toggle
	 * 	Flags: (Native, Public)
	 */
	void UMissionBaseTrigger::Toggle(bool InArg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x42\x61\x73\x65\x54\x72\x69\x67\x67\x65\x72\x2e\x54\x6f\x67\x67\x6c\x65");
		Function_DFMMission_MissionBaseTrigger_Toggle_Param params { };
		params.InArg = InArg;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionStartQuest.OnQuestEnd
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionStartQuest::OnQuestEnd(struct AGPQuest* InQuest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x53\x74\x61\x72\x74\x51\x75\x65\x73\x74\x2e\x4f\x6e\x51\x75\x65\x73\x74\x45\x6e\x64");
		Function_DFMMission_MissionStartQuest_OnQuestEnd_Param params { };
		params.InQuest = InQuest;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionGoto.OnGmGoto
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionGoto::OnGmGoto()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x47\x6f\x74\x6f\x2e\x4f\x6e\x47\x6d\x47\x6f\x74\x6f");
		Function_DFMMission_MissionGoto_OnGmGoto_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionLoadSubLevels.OnSubLevelLoadServer
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionLoadSubLevels::OnSubLevelLoadServer(struct FString Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x4c\x6f\x61\x64\x53\x75\x62\x4c\x65\x76\x65\x6c\x73\x2e\x4f\x6e\x53\x75\x62\x4c\x65\x76\x65\x6c\x4c\x6f\x61\x64\x53\x65\x72\x76\x65\x72");
		Function_DFMMission_MissionLoadSubLevels_OnSubLevelLoadServer_Param params { };
		params.Name = Name;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionMonsterSpawner.OnDramaAreaSpawnEnd
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionMonsterSpawner::OnDramaAreaSpawnEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x4d\x6f\x6e\x73\x74\x65\x72\x53\x70\x61\x77\x6e\x65\x72\x2e\x4f\x6e\x44\x72\x61\x6d\x61\x41\x72\x65\x61\x53\x70\x61\x77\x6e\x45\x6e\x64");
		Function_DFMMission_MissionMonsterSpawner_OnDramaAreaSpawnEnd_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionPlaySequence.OnEndSequenceInternal
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionPlaySequence::OnEndSequenceInternal(struct AGPSequenceActor* SequencePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x50\x6c\x61\x79\x53\x65\x71\x75\x65\x6e\x63\x65\x2e\x4f\x6e\x45\x6e\x64\x53\x65\x71\x75\x65\x6e\x63\x65\x49\x6e\x74\x65\x72\x6e\x61\x6c");
		Function_DFMMission_MissionPlaySequence_OnEndSequenceInternal_Param params { };
		params.SequencePlayer = SequencePlayer;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionAIFightMeTrigger.OnAIMesgReceive
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionAIFightMeTrigger::OnAIMesgReceive(struct ADFMCharacter* AI, enum class EAIMsgType MsgType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x41\x49\x46\x69\x67\x68\x74\x4d\x65\x54\x72\x69\x67\x67\x65\x72\x2e\x4f\x6e\x41\x49\x4d\x65\x73\x67\x52\x65\x63\x65\x69\x76\x65");
		Function_DFMMission_MissionAIFightMeTrigger_OnAIMesgReceive_Param params { };
		params.AI = AI;
		params.MsgType = MsgType;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionAreaTrigger.OnEndOverlap
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionAreaTrigger::OnEndOverlap(struct AActor* InTrigger, struct AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x41\x72\x65\x61\x54\x72\x69\x67\x67\x65\x72\x2e\x4f\x6e\x45\x6e\x64\x4f\x76\x65\x72\x6c\x61\x70");
		Function_DFMMission_MissionAreaTrigger_OnEndOverlap_Param params { };
		params.InTrigger = InTrigger;
		params.OtherActor = OtherActor;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionCommitItemTrigger.OnSpaceMarkedDirty
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionCommitItemTrigger::OnSpaceMarkedDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x43\x6f\x6d\x6d\x69\x74\x49\x74\x65\x6d\x54\x72\x69\x67\x67\x65\x72\x2e\x4f\x6e\x53\x70\x61\x63\x65\x4d\x61\x72\x6b\x65\x64\x44\x69\x72\x74\x79");
		Function_DFMMission_MissionCommitItemTrigger_OnSpaceMarkedDirty_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionDamageTrigger.OnDamage
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionDamageTrigger::OnDamage(int32_t Health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x44\x61\x6d\x61\x67\x65\x54\x72\x69\x67\x67\x65\x72\x2e\x4f\x6e\x44\x61\x6d\x61\x67\x65");
		Function_DFMMission_MissionDamageTrigger_OnDamage_Param params { };
		params.Health = Health;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionEnermyDieTrigger.OnMissionSpawnDelgateProxy
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionEnermyDieTrigger::OnMissionSpawnDelgateProxy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x45\x6e\x65\x72\x6d\x79\x44\x69\x65\x54\x72\x69\x67\x67\x65\x72\x2e\x4f\x6e\x4d\x69\x73\x73\x69\x6f\x6e\x53\x70\x61\x77\x6e\x44\x65\x6c\x67\x61\x74\x65\x50\x72\x6f\x78\x79");
		Function_DFMMission_MissionEnermyDieTrigger_OnMissionSpawnDelgateProxy_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionGameStateTrigger.OnGameStateChange
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionGameStateTrigger::OnGameStateChange(int32_t Key, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x47\x61\x6d\x65\x53\x74\x61\x74\x65\x54\x72\x69\x67\x67\x65\x72\x2e\x4f\x6e\x47\x61\x6d\x65\x53\x74\x61\x74\x65\x43\x68\x61\x6e\x67\x65");
		Function_DFMMission_MissionGameStateTrigger_OnGameStateChange_Param params { };
		params.Key = Key;
		params.Value = Value;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionGetItemTrigger.OnSpaceMarkedDirty
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionGetItemTrigger::OnSpaceMarkedDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x47\x65\x74\x49\x74\x65\x6d\x54\x72\x69\x67\x67\x65\x72\x2e\x4f\x6e\x53\x70\x61\x63\x65\x4d\x61\x72\x6b\x65\x64\x44\x69\x72\x74\x79");
		Function_DFMMission_MissionGetItemTrigger_OnSpaceMarkedDirty_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionGPQuestTrigger.OnQuestEnd
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionGPQuestTrigger::OnQuestEnd(struct AGPQuest* Quest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x47\x50\x51\x75\x65\x73\x74\x54\x72\x69\x67\x67\x65\x72\x2e\x4f\x6e\x51\x75\x65\x73\x74\x45\x6e\x64");
		Function_DFMMission_MissionGPQuestTrigger_OnQuestEnd_Param params { };
		params.Quest = Quest;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionInteractItemTrigger.OnInteract
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionInteractItemTrigger::OnInteract(uint64_t Uin, struct AActor* Actor, enum class EInteractorType InteractorType, struct FString Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x49\x6e\x74\x65\x72\x61\x63\x74\x49\x74\x65\x6d\x54\x72\x69\x67\x67\x65\x72\x2e\x4f\x6e\x49\x6e\x74\x65\x72\x61\x63\x74");
		Function_DFMMission_MissionInteractItemTrigger_OnInteract_Param params { };
		params.Uin = Uin;
		params.Actor = Actor;
		params.InteractorType = InteractorType;
		params.Params = Params;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionInteractNPCTrigger.OnInteractEnd
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionInteractNPCTrigger::OnInteractEnd(uint64_t Uin, int64_t GroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x49\x6e\x74\x65\x72\x61\x63\x74\x4e\x50\x43\x54\x72\x69\x67\x67\x65\x72\x2e\x4f\x6e\x49\x6e\x74\x65\x72\x61\x63\x74\x45\x6e\x64");
		Function_DFMMission_MissionInteractNPCTrigger_OnInteractEnd_Param params { };
		params.Uin = Uin;
		params.GroupID = GroupID;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionKillEnermyTrigger.OnMissionSpawnDelgateProxy
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionKillEnermyTrigger::OnMissionSpawnDelgateProxy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x4b\x69\x6c\x6c\x45\x6e\x65\x72\x6d\x79\x54\x72\x69\x67\x67\x65\x72\x2e\x4f\x6e\x4d\x69\x73\x73\x69\x6f\x6e\x53\x70\x61\x77\x6e\x44\x65\x6c\x67\x61\x74\x65\x50\x72\x6f\x78\x79");
		Function_DFMMission_MissionKillEnermyTrigger_OnMissionSpawnDelgateProxy_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionTrainBreaksTrigger.FireBreakStatusChange
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionTrainBreaksTrigger::FireBreakStatusChange(int32_t nDestruct, int32_t nTotal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x72\x61\x69\x6e\x42\x72\x65\x61\x6b\x73\x54\x72\x69\x67\x67\x65\x72\x2e\x46\x69\x72\x65\x42\x72\x65\x61\x6b\x53\x74\x61\x74\x75\x73\x43\x68\x61\x6e\x67\x65");
		Function_DFMMission_MissionTrainBreaksTrigger_FireBreakStatusChange_Param params { };
		params.nDestruct = nDestruct;
		params.nTotal = nTotal;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionTriggerCheckGetOnOffVehicle.OnVehiclePassengerOn
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionTriggerCheckGetOnOffVehicle::OnVehiclePassengerOn(struct AActor* inActor, struct FName SeatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x72\x69\x67\x67\x65\x72\x43\x68\x65\x63\x6b\x47\x65\x74\x4f\x6e\x4f\x66\x66\x56\x65\x68\x69\x63\x6c\x65\x2e\x4f\x6e\x56\x65\x68\x69\x63\x6c\x65\x50\x61\x73\x73\x65\x6e\x67\x65\x72\x4f\x6e");
		Function_DFMMission_MissionTriggerCheckGetOnOffVehicle_OnVehiclePassengerOn_Param params { };
		params.inActor = inActor;
		params.SeatName = SeatName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionCombineTrigger.AddTrigger
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionCombineTrigger::AddTrigger(struct UMissionBaseTrigger* InArg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x43\x6f\x6d\x62\x69\x6e\x65\x54\x72\x69\x67\x67\x65\x72\x2e\x41\x64\x64\x54\x72\x69\x67\x67\x65\x72");
		Function_DFMMission_MissionCombineTrigger_AddTrigger_Param params { };
		params.InArg = InArg;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionLevelLoadTrigger.OnLevelComplete
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionLevelLoadTrigger::OnLevelComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x4c\x65\x76\x65\x6c\x4c\x6f\x61\x64\x54\x72\x69\x67\x67\x65\x72\x2e\x4f\x6e\x4c\x65\x76\x65\x6c\x43\x6f\x6d\x70\x6c\x65\x74\x65");
		Function_DFMMission_MissionLevelLoadTrigger_OnLevelComplete_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionPlayerDie.OnSpawnedAIDied
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionPlayerDie::OnSpawnedAIDied(struct AGPCharacterBase* InCharacter, struct AController* Killer, struct UDamageType* DamageType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x50\x6c\x61\x79\x65\x72\x44\x69\x65\x2e\x4f\x6e\x53\x70\x61\x77\x6e\x65\x64\x41\x49\x44\x69\x65\x64");
		Function_DFMMission_MissionPlayerDie_OnSpawnedAIDied_Param params { };
		params.InCharacter = InCharacter;
		params.Killer = Killer;
		params.DamageType = DamageType;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionPlayerReborn.OnCharacterReborn
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionPlayerReborn::OnCharacterReborn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x50\x6c\x61\x79\x65\x72\x52\x65\x62\x6f\x72\x6e\x2e\x4f\x6e\x43\x68\x61\x72\x61\x63\x74\x65\x72\x52\x65\x62\x6f\x72\x6e");
		Function_DFMMission_MissionPlayerReborn_OnCharacterReborn_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionTriggerLeaveArea.OnEndOverlap
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionTriggerLeaveArea::OnEndOverlap(struct AActor* InTrigger, struct AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x72\x69\x67\x67\x65\x72\x4c\x65\x61\x76\x65\x41\x72\x65\x61\x2e\x4f\x6e\x45\x6e\x64\x4f\x76\x65\x72\x6c\x61\x70");
		Function_DFMMission_MissionTriggerLeaveArea_OnEndOverlap_Param params { };
		params.InTrigger = InTrigger;
		params.OtherActor = OtherActor;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionTriggerSearchAreaAndGetOnOffVehicle.OnVehiclePassengerOn
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionTriggerSearchAreaAndGetOnOffVehicle::OnVehiclePassengerOn(struct AActor* inActor, struct FName SeatName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x72\x69\x67\x67\x65\x72\x53\x65\x61\x72\x63\x68\x41\x72\x65\x61\x41\x6e\x64\x47\x65\x74\x4f\x6e\x4f\x66\x66\x56\x65\x68\x69\x63\x6c\x65\x2e\x4f\x6e\x56\x65\x68\x69\x63\x6c\x65\x50\x61\x73\x73\x65\x6e\x67\x65\x72\x4f\x6e");
		Function_DFMMission_MissionTriggerSearchAreaAndGetOnOffVehicle_OnVehiclePassengerOn_Param params { };
		params.inActor = inActor;
		params.SeatName = SeatName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionTurnInItemTrigger.OnTurnInItem
	 * 	Flags: (Final, Native, Public, HasOutParms)
	 */
	void UMissionTurnInItemTrigger::OnTurnInItem(struct FMissionTurnInItemInfo& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x54\x75\x72\x6e\x49\x6e\x49\x74\x65\x6d\x54\x72\x69\x67\x67\x65\x72\x2e\x4f\x6e\x54\x75\x72\x6e\x49\x6e\x49\x74\x65\x6d");
		Function_DFMMission_MissionTurnInItemTrigger_OnTurnInItem_Param params { };
		params.Item = Item;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Item = params.Item;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionActionLoadGPQuest.OnPreBegin
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionActionLoadGPQuest::OnPreBegin(struct AGPQuest* Quest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x41\x63\x74\x69\x6f\x6e\x4c\x6f\x61\x64\x47\x50\x51\x75\x65\x73\x74\x2e\x4f\x6e\x50\x72\x65\x42\x65\x67\x69\x6e");
		Function_DFMMission_MissionActionLoadGPQuest_OnPreBegin_Param params { };
		params.Quest = Quest;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMMission.MissionConditionInteractNPCTrigger.OnProcessDialogStart
	 * 	Flags: (Final, Native, Public)
	 */
	void UMissionConditionInteractNPCTrigger::OnProcessDialogStart(uint64_t GroupID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x4d\x69\x73\x73\x69\x6f\x6e\x2e\x4d\x69\x73\x73\x69\x6f\x6e\x43\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x49\x6e\x74\x65\x72\x61\x63\x74\x4e\x50\x43\x54\x72\x69\x67\x67\x65\x72\x2e\x4f\x6e\x50\x72\x6f\x63\x65\x73\x73\x44\x69\x61\x6c\x6f\x67\x53\x74\x61\x72\x74");
		Function_DFMMission_MissionConditionInteractNPCTrigger_OnProcessDialogStart_Param params { };
		params.GroupID = GroupID;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}