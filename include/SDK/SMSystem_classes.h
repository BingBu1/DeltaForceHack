
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class SMSystem.SMInstanceInterface
// Size: 0x30 (Inherited: 0x30)
class USMInstanceInterface : public UInterface {
public:


	struct UObject* GetContext(); // Function SMSystem.SMInstanceInterface.GetContext // (Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMStateMachineInterface
// Size: 0x30 (Inherited: 0x30)
class USMStateMachineInterface : public UInterface {
public:


	void Update(float DeltaSeconds); // Function SMSystem.SMStateMachineInterface.Update // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMStateMachineNetworkedInterface
// Size: 0x30 (Inherited: 0x30)
class USMStateMachineNetworkedInterface : public UInterface {
public:


	bool ShouldReplicateStates(); // Function SMSystem.SMStateMachineNetworkedInterface.ShouldReplicateStates // (Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMBlueprint
// Size: 0xb0 (Inherited: 0xa8)
class USMBlueprint : public UBlueprint {
public:

	int32_t AssetVersion; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMNodeBlueprint
// Size: 0xa8 (Inherited: 0xa8)
class USMNodeBlueprint : public UBlueprint {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMBlueprintGeneratedClass
// Size: 0x380 (Inherited: 0x370)
class USMBlueprintGeneratedClass : public UBlueprintGeneratedClass {
public:

	struct FGuid RootGuid; // 0x370(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMNodeBlueprintGeneratedClass
// Size: 0x370 (Inherited: 0x370)
class USMNodeBlueprintGeneratedClass : public UBlueprintGeneratedClass {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMInstance
// Size: 0x608 (Inherited: 0x30)
class USMInstance : public UObject {
public:

	char pad_30[0x18]; // 0x30(0x18)
	struct FGuid RootStateMachineGuid; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateMachineInitializedEvent[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateMachineStartedEvent[0x10]; // 0x68(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateMachineUpdatedEvent[0x10]; // 0x78(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateMachineStoppedEvent[0x10]; // 0x88(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateMachineTransitionTakenEvent[0x10]; // 0x98(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateMachineStateChangedEvent[0x10]; // 0xa8(0x10)
	/*struct TScriptInterface<ISMStateMachineNetworkedInterface>*/char ServerStateMachine[0x10]; // 0xb8(0x10)
	char pad_C8[0x150]; // 0xc8(0x150)
	struct TArray<struct FSMNetworkedTransaction> ActiveTransactions; // 0x218(0x10)
	struct FSMStateMachine RootStateMachine; // 0x228(0x2f0)
	struct UObject* R_StateMachineContext; // 0x518(0x08)
	struct TArray<struct FGuid> R_ActiveStates; // 0x520(0x10)
	struct TArray<struct FGuid> RootStatePathGuidArray; // 0x530(0x10)
	struct FSMRepStateInfo RepActiveStateInfo; // 0x540(0x20)
	struct USMInstance* ReferenceOwner; // 0x560(0x08)
	struct UClass* StateMachineClass; // 0x568(0x08)
	bool bAutoManageTime; // 0x570(0x01)
	bool bStopOnEndState; // 0x571(0x01)
	bool bCanEverTick; // 0x572(0x01)
	bool bCanEverTickGeneralUpdate; // 0x573(0x01)
	bool bCanTickWhenPaused; // 0x574(0x01)
	char pad_575[0x3]; // 0x575(0x03)
	float TickInterval; // 0x578(0x04)
	bool bTickRegistered; // 0x57c(0x01)
	bool bTickBeforeInitialize; // 0x57d(0x01)
	bool bEnableBlueprintTick; // 0x57e(0x01)
	bool bEnable3pLazyInit; // 0x57f(0x01)
	bool bUseCachePathGuid; // 0x580(0x01)
	bool bUseFastStateRep; // 0x581(0x01)
	bool bEnableDelayRepForCharacter; // 0x582(0x01)
	char pad_583[0x1]; // 0x583(0x01)
	float MaxTimeToWaitForUpdate; // 0x584(0x04)
	float TimeSinceAllowedTick; // 0x588(0x04)
	float bIsProxy; // 0x58c(0x04)
	float WorldSeconds; // 0x590(0x04)
	float WorldTimeDelta; // 0x594(0x04)
	bool bCallTickOnManualUpdate; // 0x598(0x01)
	bool bIsTicking; // 0x599(0x01)
	bool bIsUpdating; // 0x59a(0x01)
	char pad_59B[0x1]; // 0x59b(0x01)
	char bCanEvaluateTransitionsLocally : 1; // 0x59c(0x01)
	char bCanTakeTransitionsLocally : 1; // 0x59c(0x01)
	char bCanExecuteStateLogic : 1; // 0x59c(0x01)
	char R_bHasStarted : 1; // 0x59c(0x01)
	char pad_59C_4 : 4; // 0x59c(0x01)
	char pad_59D[0x3]; // 0x59d(0x03)
	struct TMap<struct FGuid, struct FSMGuidMap> RootPathGuidCache; // 0x5a0(0x50)
	struct TArray<struct UObject*> ReferenceTemplates; // 0x5f0(0x10)
	float HasAuthority; // 0x600(0x04)
	char pad_604[0x4]; // 0x604(0x04)

	void Update(float DeltaSeconds); // Function SMSystem.SMInstance.Update // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMStateMachineComponent
// Size: 0x1d0 (Inherited: 0x100)
class USMStateMachineComponent : public UActorComponent {
public:

	char pad_100[0x10]; // 0x100(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateMachineInitializedEvent[0x10]; // 0x110(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateMachineStartedEvent[0x10]; // 0x120(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateMachineUpdatedEvent[0x10]; // 0x130(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateMachineStoppedEvent[0x10]; // 0x140(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateMachineTransitionTakenEvent[0x10]; // 0x150(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateMachineStateChangedEvent[0x10]; // 0x160(0x10)
	struct UClass* StateMachineClass; // 0x170(0x08)
	enum class ESMNetworkConfigurationType NetworkTickConfiguration; // 0x178(0x01)
	enum class ESMNetworkConfigurationType NetworkTransitionConfiguration; // 0x179(0x01)
	enum class ESMNetworkConfigurationType NetworkStateConfiguration; // 0x17a(0x01)
	bool bIncludeSimulatedProxies; // 0x17b(0x01)
	bool bTakeTransitionsFromServerOnly; // 0x17c(0x01)
	char pad_17D[0x3]; // 0x17d(0x03)
	float TransitionResetTimeSeconds; // 0x180(0x04)
	bool bReplicateStatesOnLoad; // 0x184(0x01)
	bool bDiscardTransitionsBeforeInitialize; // 0x185(0x01)
	char pad_186[0x2]; // 0x186(0x02)
	float MaxTimeToWaitForTransitionUpdate; // 0x188(0x04)
	bool bInitializeOnBeginPlay; // 0x18c(0x01)
	bool bStartOnBeginPlay; // 0x18d(0x01)
	bool bLetInstanceManageTick; // 0x18e(0x01)
	char pad_18F[0x1]; // 0x18f(0x01)
	struct TArray<struct FSMNetworkedTransaction> R_NetworkedTransactions; // 0x190(0x10)
	struct TArray<struct FSMNetworkedTransaction> PendingTransactions; // 0x1a0(0x10)
	struct USMInstance* R_Instance; // 0x1b0(0x08)
	struct USMInstance* InstanceTemplate; // 0x1b8(0x08)
	bool bOverrideTick; // 0x1c0(0x01)
	bool bCanEverTick; // 0x1c1(0x01)
	bool bOverrideTickInterval; // 0x1c2(0x01)
	char pad_1C3[0x1]; // 0x1c3(0x01)
	float TickInterval; // 0x1c4(0x04)
	bool R_bShuttingDown; // 0x1c8(0x01)
	bool bCanInstanceNetworkTick; // 0x1c9(0x01)
	char pad_1CA[0x6]; // 0x1ca(0x06)

	void Update(float DeltaSeconds); // Function SMSystem.SMStateMachineComponent.Update // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMBlueprintUtils
// Size: 0x30 (Inherited: 0x30)
class USMBlueprintUtils : public UBlueprintFunctionLibrary {
public:


	struct USMInstance* STATIC_CreateStateMachineInstanceFromTemplate(struct UClass* StateMachineClass, struct UObject* Context, struct USMInstance* Template, struct USMInstance* Owner, struct UActorComponent* Component); // Function SMSystem.SMBlueprintUtils.CreateStateMachineInstanceFromTemplate // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// SMBlueprintGeneratedClass SMSystem.Default__SMBlueprintGeneratedClass
// Size: 0x00 (Inherited: 0x00)
class Default__SMBlueprintGeneratedClass {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// SMNodeBlueprintGeneratedClass SMSystem.Default__SMNodeBlueprintGeneratedClass
// Size: 0x00 (Inherited: 0x00)
class Default__SMNodeBlueprintGeneratedClass {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMNodeInstance
// Size: 0x88 (Inherited: 0x30)
class USMNodeInstance : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	bool bAutoEvalExposedProperties; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FSMGraphProperty> ExposedPropertyOverrides; // 0x40(0x10)
	struct UTexture2D* NodeIcon; // 0x50(0x08)
	struct FVector2D NodeIconSize; // 0x58(0x08)
	struct FLinearColor NodeIconTintColor; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)
	struct FGuid TemplateGuid; // 0x78(0x10)

	bool IsInEndState(); // Function SMSystem.SMNodeInstance.IsInEndState // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMStateInstance_Base
// Size: 0xd0 (Inherited: 0x88)
class USMStateInstance_Base : public USMNodeInstance {
public:

	bool bEvalGraphsOnStart; // 0x88(0x01)
	bool bEvalGraphsOnUpdate; // 0x89(0x01)
	bool bEvalGraphsOnEnd; // 0x8a(0x01)
	bool bEvalGraphsOnInitialize; // 0x8b(0x01)
	bool bEvalGraphsOnRootStateMachineStart; // 0x8c(0x01)
	bool bEvalGraphsOnRootStateMachineStop; // 0x8d(0x01)
	bool bEnableStateBlueprintTick; // 0x8e(0x01)
	bool bIgnoreStateReplicate; // 0x8f(0x01)
	bool bIgnoreClientTickAdd; // 0x90(0x01)
	bool bIgnoreServerTickAdd; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	int32_t KeyStateAddNumServer; // 0x94(0x04)
	bool bAlwaysUpdate; // 0x98(0x01)
	bool bDisableTickTransitionEvaluation; // 0x99(0x01)
	bool bDefaultToParallel; // 0x9a(0x01)
	bool bAllowParallelReentry; // 0x9b(0x01)
	bool bStayActiveOnStateChange; // 0x9c(0x01)
	bool bEvalTransitionsOnStart; // 0x9d(0x01)
	bool bExcludeFromAnyState; // 0x9e(0x01)
	char pad_9F[0x1]; // 0x9f(0x01)
	/*struct FMulticastInlineDelegate*/char OnStateBeginEvent[0x10]; // 0xa0(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateUpdateEvent[0x10]; // 0xb0(0x10)
	/*struct FMulticastInlineDelegate*/char OnStateEndEvent[0x10]; // 0xc0(0x10)

	bool SwitchToLinkedState(struct USMStateInstance_Base* NextStateInstance, bool bRequireTransitionToPass); // Function SMSystem.SMStateInstance_Base.SwitchToLinkedState // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMActionInstance
// Size: 0x88 (Inherited: 0x88)
class USMActionInstance : public USMNodeInstance {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMTransitionInstance
// Size: 0xb0 (Inherited: 0x88)
class USMTransitionInstance : public USMNodeInstance {
public:

	int32_t PriorityOrder; // 0x88(0x04)
	bool bRunParallel; // 0x8c(0x01)
	bool bEvalIfNextStateActive; // 0x8d(0x01)
	bool bCanEvaluate; // 0x8e(0x01)
	bool bCanEvaluateFromEvent; // 0x8f(0x01)
	bool bCanEvalWithStartState; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	/*struct FMulticastInlineDelegate*/char OnTransitionEnteredEvent[0x10]; // 0x98(0x10)
	bool OnlyCheckTransitionOnServer; // 0xa8(0x01)
	bool DisableCheckTransitionOnSimulatedProxy; // 0xa9(0x01)
	bool UseNativeTransitionExecute; // 0xaa(0x01)
	char pad_AB[0x5]; // 0xab(0x05)

	void SetCanEvaluate(bool bValue); // Function SMSystem.SMTransitionInstance.SetCanEvaluate // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMConduitInstance
// Size: 0xd8 (Inherited: 0xd0)
class USMConduitInstance : public USMStateInstance_Base {
public:

	bool bEvalWithTransitions; // 0xd0(0x01)
	bool bCanEvaluate; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)

	void SetCanEvaluate(bool bValue); // Function SMSystem.SMConduitInstance.SetCanEvaluate // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMStateInstance
// Size: 0xd0 (Inherited: 0xd0)
class USMStateInstance : public USMStateInstance_Base {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class SMSystem.SMStateMachineInstance
// Size: 0xd8 (Inherited: 0xd0)
class USMStateMachineInstance : public USMStateInstance_Base {
public:

	bool bWaitForEndState; // 0xd0(0x01)
	bool bReuseCurrentState; // 0xd1(0x01)
	bool bReuseIfNotEndState; // 0xd2(0x01)
	char pad_D3[0x5]; // 0xd3(0x05)

	void OnStateMachineCompleted(); // Function SMSystem.SMStateMachineInstance.OnStateMachineCompleted // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
