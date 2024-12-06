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
	 * 	Name: PredefinedFunction FGameplayResourceSet.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FGameplayResourceSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x2e\x47\x61\x6d\x65\x70\x6c\x61\x79\x52\x65\x73\x6f\x75\x72\x63\x65\x53\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameplayTasksComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameplayTasksComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x2e\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameplayTaskOwnerInterface.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameplayTaskOwnerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x2e\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x4f\x77\x6e\x65\x72\x49\x6e\x74\x65\x72\x66\x61\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameplayTaskResource.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameplayTaskResource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x2e\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x52\x65\x73\x6f\x75\x72\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameplayTask.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameplayTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x2e\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameplayTask_ClaimResource.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameplayTask_ClaimResource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x2e\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x5f\x43\x6c\x61\x69\x6d\x52\x65\x73\x6f\x75\x72\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameplayTask_SpawnActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameplayTask_SpawnActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x2e\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x5f\x53\x70\x61\x77\x6e\x41\x63\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameplayTask_TimeLimitedExecution.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameplayTask_TimeLimitedExecution::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x2e\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x5f\x54\x69\x6d\x65\x4c\x69\x6d\x69\x74\x65\x64\x45\x78\x65\x63\x75\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGameplayTask_WaitDelay.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGameplayTask_WaitDelay::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x2e\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x5f\x57\x61\x69\x74\x44\x65\x6c\x61\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	 * 	Flags: (Final, Native, Public)
	 */
	void UGameplayTasksComponent::OnRep_SimulatedTasks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x2e\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x4f\x6e\x52\x65\x70\x5f\x53\x69\x6d\x75\x6c\x61\x74\x65\x64\x54\x61\x73\x6b\x73");
		Function_GameplayTasks_GameplayTasksComponent_OnRep_SimulatedTasks_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GameplayTasks.GameplayTask.ReadyForActivation
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UGameplayTask::ReadyForActivation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x2e\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x2e\x52\x65\x61\x64\x79\x46\x6f\x72\x41\x63\x74\x69\x76\x61\x74\x69\x6f\x6e");
		Function_GameplayTasks_GameplayTask_ReadyForActivation_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::STATIC_ClaimResources(/*struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct TArray<struct UClass*> ResourceClasses, char Priority, struct FName TaskInstanceName*/)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x2e\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x5f\x43\x6c\x61\x69\x6d\x52\x65\x73\x6f\x75\x72\x63\x65\x2e\x43\x6c\x61\x69\x6d\x52\x65\x73\x6f\x75\x72\x63\x65\x73");
		Function_GameplayTasks_GameplayTask_ClaimResource_ClaimResources_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return { };  // BAD DECLARE FUNCTION!
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	 * 	Flags: (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 */
	struct UGameplayTask_SpawnActor* UGameplayTask_SpawnActor::STATIC_SpawnActor(/*struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct UClass* Class, bool bSpawnOnlyOnAuthority*/)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x2e\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x5f\x53\x70\x61\x77\x6e\x41\x63\x74\x6f\x72\x2e\x53\x70\x61\x77\x6e\x41\x63\x74\x6f\x72");
		Function_GameplayTasks_GameplayTask_SpawnActor_SpawnActor_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return { };  // BAD DECLARE FUNCTION!
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct UGameplayTask_WaitDelay* UGameplayTask_WaitDelay::STATIC_TaskWaitDelay(/*struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, char Priority*/)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x73\x2e\x47\x61\x6d\x65\x70\x6c\x61\x79\x54\x61\x73\x6b\x5f\x57\x61\x69\x74\x44\x65\x6c\x61\x79\x2e\x54\x61\x73\x6b\x57\x61\x69\x74\x44\x65\x6c\x61\x79");
		Function_GameplayTasks_GameplayTask_WaitDelay_TaskWaitDelay_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return { };  // BAD DECLARE FUNCTION!
	}
}