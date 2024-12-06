
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GameplayTasks.GameplayTasksComponent
// Size: 0x170 (Inherited: 0x100)
class UGameplayTasksComponent : public UActorComponent {
public:

	char pad_100[0xc]; // 0x100(0x0c)
	char pad_10C_0 : 1; // 0x10c(0x01)
	char bIsNetDirty : 1; // 0x10c(0x01)
	char pad_10C_2 : 6; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct TArray<struct UGameplayTask*> SimulatedTasks; // 0x110(0x10)
	struct TArray<struct UGameplayTask*> TaskPriorityQueue; // 0x120(0x10)
	char pad_130[0x10]; // 0x130(0x10)
	struct TArray<struct UGameplayTask*> TickingTasks; // 0x140(0x10)
	struct TArray<struct UGameplayTask*> KnownTasks; // 0x150(0x10)
	/*struct FMulticastInlineDelegate*/char OnClaimedResourcesChange[0x10]; // 0x160(0x10)

	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTasks.GameplayTaskOwnerInterface
// Size: 0x30 (Inherited: 0x30)
class UGameplayTaskOwnerInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTasks.GameplayTaskResource
// Size: 0x40 (Inherited: 0x30)
class UGameplayTaskResource : public UObject {
public:

	int32_t ManualResourceID; // 0x30(0x04)
	int8_t AutoResourceID; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	char bManuallySetID : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTasks.GameplayTask
// Size: 0x70 (Inherited: 0x30)
class UGameplayTask : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct FName InstanceName; // 0x38(0x08)
	char pad_40[0x2]; // 0x40(0x02)
	enum class ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x42(0x01)
	char pad_43[0x25]; // 0x43(0x25)
	struct UGameplayTask* ChildTask; // 0x68(0x08)

	void ReadyForActivation(); // Function GameplayTasks.GameplayTask.ReadyForActivation // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size: 0x70 (Inherited: 0x70)
class UGameplayTask_ClaimResource : public UGameplayTask {
public:


	struct UGameplayTask_ClaimResource* STATIC_ClaimResources(/*struct TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner, struct TArray<struct UClass*> ResourceClasses, char Priority, struct FName TaskInstanceName*/); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size: 0xb0 (Inherited: 0x70)
class UGameplayTask_SpawnActor : public UGameplayTask {
public:

	/*struct FMulticastInlineDelegate*/char Success[0x10]; // 0x70(0x10)
	/*struct FMulticastInlineDelegate*/char DidNotSpawn[0x10]; // 0x80(0x10)
	char pad_90[0x18]; // 0x90(0x18)
	struct UClass* ClassToSpawn; // 0xa8(0x08)

	struct UGameplayTask_SpawnActor* STATIC_SpawnActor(/*struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct UClass* Class, bool bSpawnOnlyOnAuthority*/); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size: 0xa0 (Inherited: 0x70)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask {
public:

	/*struct FMulticastInlineDelegate*/char OnFinished[0x10]; // 0x70(0x10)
	/*struct FMulticastInlineDelegate*/char OnTimeExpired[0x10]; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size: 0x88 (Inherited: 0x70)
class UGameplayTask_WaitDelay : public UGameplayTask {
public:

	/*struct FMulticastInlineDelegate*/char OnFinish[0x10]; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)

	struct UGameplayTask_WaitDelay* STATIC_TaskWaitDelay(/*struct TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, char Priority*/); // Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
