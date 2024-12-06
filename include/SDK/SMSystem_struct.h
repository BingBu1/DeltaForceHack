
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum SMSystem.ESMNetworkConfigurationType
enum class ESMNetworkConfigurationType : int {
	SM_Client = 0,
	SM_Server = 1,
	SM_ClientAndServer = 2,
	SM_MAX = 3
};

// Enum SMSystem.ESMTransactionType
enum class ESMTransactionType : int {
	SM_Transition = 0,
	SM_State = 1,
	SM_MAX = 2
};

// Enum SMSystem.ESMConditionalEvaluationType
enum class ESMConditionalEvaluationType : int {
	SM_Graph = 0,
	SM_NodeInstance = 1,
	SM_AlwaysFalse = 2,
	SM_AlwaysTrue = 3,
	SM_MAX = 4
};

// ScriptStruct SMSystem.SMRepStateInfo
// Size: 0x20 (Inherited: 0x00)
struct FSMRepStateInfo {
public:

	uint64_t StatesA; // 0x00(0x08)
	uint64_t StatesB; // 0x08(0x08)
	uint64_t StatesC; // 0x10(0x08)
	uint64_t StatesD; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMGuidMap
// Size: 0x50 (Inherited: 0x00)
struct FSMGuidMap {
public:

	struct TMap<struct FGuid, struct FGuid> NodeToPathGuids; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMDebugStateMachine
// Size: 0x01 (Inherited: 0x00)
struct FSMDebugStateMachine {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMNetworkedTransaction
// Size: 0x40 (Inherited: 0x00)
struct FSMNetworkedTransaction {
public:

	struct FGuid StateMachineGuid; // 0x00(0x10)
	struct FGuid BaseGuid; // 0x10(0x10)
	struct FGuid TransactionGuid; // 0x20(0x10)
	struct FDateTime Timestamp; // 0x30(0x08)
	char TransactionType : 1; // 0x38(0x01)
	char bIsActive : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMNodeDescription
// Size: 0x38 (Inherited: 0x00)
struct FSMNodeDescription {
public:

	struct FName Name; // 0x00(0x08)
	struct FText Category; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMInfo_Base
// Size: 0x60 (Inherited: 0x00)
struct FSMInfo_Base {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FString NodeName; // 0x08(0x10)
	struct FGuid Guid; // 0x18(0x10)
	struct FGuid OwnerGuid; // 0x28(0x10)
	struct FGuid NodeGuid; // 0x38(0x10)
	struct FGuid OwnerNodeGuid; // 0x48(0x10)
	struct USMNodeInstance* NodeInstance; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMExposedFunctionHandler
// Size: 0x20 (Inherited: 0x00)
struct FSMExposedFunctionHandler {
public:

	struct FName BoundFunction; // 0x00(0x08)
	struct UFunction* Function; // 0x08(0x08)
	struct UObject* OwnerObject; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMConnectionValidator
// Size: 0x00 (Inherited: 0x00)
struct FSMConnectionValidator {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMNodeClassRule
// Size: 0x10 (Inherited: 0x00)
struct FSMNodeClassRule {
public:

	char pad_0[0x8]; // 0x00(0x08)
	bool bIncludeChildren; // 0x08(0x01)
	bool bNOT; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMNodeWidgetInfo
// Size: 0x01 (Inherited: 0x00)
struct FSMNodeWidgetInfo {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMTransitionInfo
// Size: 0x90 (Inherited: 0x60)
struct FSMTransitionInfo : public FSMInfo_Base {
public:

	struct FGuid FromStateGuid; // 0x60(0x10)
	struct FGuid ToStateGuid; // 0x70(0x10)
	int32_t Priority; // 0x80(0x04)
	char pad_84[0xc]; // 0x84(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMStateInfo
// Size: 0x80 (Inherited: 0x60)
struct FSMStateInfo : public FSMInfo_Base {
public:

	struct TArray<struct FSMTransitionInfo> OutgoingTransitions; // 0x60(0x10)
	bool bIsEndState; // 0x70(0x01)
	char pad_71[0xf]; // 0x71(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMNode_Base
// Size: 0x108 (Inherited: 0x00)
struct FSMNode_Base {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FSMExposedFunctionHandler GraphEvaluator; // 0x08(0x20)
	float TimeInState; // 0x28(0x04)
	bool bIsInEndState; // 0x2c(0x01)
	bool bHasUpdated; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	struct TArray<struct FSMExposedFunctionHandler> TransitionInitializedGraphEvaluators; // 0x30(0x10)
	struct TArray<struct FSMExposedFunctionHandler> TransitionShutdownGraphEvaluators; // 0x40(0x10)
	int32_t DuplicateId; // 0x50(0x04)
	struct FGuid Guid; // 0x54(0x10)
	struct FGuid OwnerGuid; // 0x64(0x10)
	struct FGuid PathGuid; // 0x74(0x10)
	char pad_84[0xc]; // 0x84(0x0c)
	struct FString NodeName; // 0x90(0x10)
	struct FName TemplateName; // 0xa0(0x08)
	struct TArray<struct FName> StackTemplateNames; // 0xa8(0x10)
	struct TArray<struct USMNodeInstance*> StackNodeInstances; // 0xb8(0x10)
	struct USMInstance* OwningInstance; // 0xc8(0x08)
	struct USMNodeInstance* NodeInstance; // 0xd0(0x08)
	char pad_D8[0x10]; // 0xd8(0x10)
	struct TArray<struct FSMGraphProperty_Base> VariableGraphProperties; // 0xe8(0x10)
	struct UClass* NodeInstanceClass; // 0xf8(0x08)
	char pad_100[0x8]; // 0x100(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMGraphProperty_Base
// Size: 0x110 (Inherited: 0x00)
struct FSMGraphProperty_Base {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FSMExposedFunctionHandler GraphEvaluator; // 0x08(0x20)
	char pad_28[0x8]; // 0x28(0x08)
	struct FName VariableName; // 0x30(0x08)
	struct FEdGraphPinType VariableType; // 0x38(0x58)
	struct FMemberReference MemberReference; // 0x90(0x38)
	bool bIsInArray; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FGuid Guid; // 0xcc(0x10)
	struct FGuid GuidUnmodified; // 0xdc(0x10)
	struct FGuid OwnerGuid; // 0xec(0x10)
	struct FGuid TemplateGuid; // 0xfc(0x10)
	int32_t GuidIndex; // 0x10c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMStateMachineNodePlacementValidator
// Size: 0x18 (Inherited: 0x00)
struct FSMStateMachineNodePlacementValidator : public FSMConnectionValidator {
public:

	struct TArray<struct FSMStateClassRule> AllowedStates; // 0x00(0x10)
	bool bAllowReferences; // 0x10(0x01)
	bool bAllowParents; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMStateConnectionValidator
// Size: 0x30 (Inherited: 0x00)
struct FSMStateConnectionValidator : public FSMConnectionValidator {
public:

	struct TArray<struct FSMStateClassRule> AllowedInboundStates; // 0x00(0x10)
	struct TArray<struct FSMStateClassRule> AllowedOutboundStates; // 0x10(0x10)
	struct TArray<struct FSMStateMachineClassRule> AllowedInStateMachines; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMTransitionConnectionValidator
// Size: 0x10 (Inherited: 0x00)
struct FSMTransitionConnectionValidator : public FSMConnectionValidator {
public:

	struct TArray<struct FSMNodeConnectionRule> AllowedConnections; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMStateClassRule
// Size: 0x38 (Inherited: 0x10)
struct FSMStateClassRule : public FSMNodeClassRule {
public:

	/*struct TSoftClassPtr<UObject>*/char StateClass[0x28]; // 0x10(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMStateMachineClassRule
// Size: 0x38 (Inherited: 0x10)
struct FSMStateMachineClassRule : public FSMNodeClassRule {
public:

	/*struct TSoftClassPtr<UObject>*/char StateMachineClass[0x28]; // 0x10(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMTextDisplayWidgetInfo
// Size: 0x00 (Inherited: 0x01)
struct FSMTextDisplayWidgetInfo : public FSMNodeWidgetInfo {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMState_Base
// Size: 0x158 (Inherited: 0x108)
struct FSMState_Base : public FSMNode_Base {
public:

	bool bIsRootNode; // 0x108(0x01)
	bool bIgnoreStateReplicate; // 0x109(0x01)
	bool bIgnoreClientTickAdd; // 0x10a(0x01)
	bool bIgnoreServerTickAdd; // 0x10b(0x01)
	int32_t KeyStateAddNumServer; // 0x10c(0x04)
	bool bAlwaysUpdate; // 0x110(0x01)
	bool bEvalTransitionsOnStart; // 0x111(0x01)
	bool bDisableTickTransitionEvaluation; // 0x112(0x01)
	bool bStayActiveOnStateChange; // 0x113(0x01)
	bool bAllowParallelReentry; // 0x114(0x01)
	char pad_115[0x43]; // 0x115(0x43)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMTransition
// Size: 0x150 (Inherited: 0x108)
struct FSMTransition : public FSMNode_Base {
public:

	int32_t Priority; // 0x108(0x04)
	bool bCanEnterTransition; // 0x10c(0x01)
	bool bCanEnterTransitionFromEvent; // 0x10d(0x01)
	bool bIsEvaluating; // 0x10e(0x01)
	bool bCanEvaluate; // 0x10f(0x01)
	bool bCanEvaluateFromEvent; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FGuid FromGuid; // 0x114(0x10)
	struct FGuid ToGuid; // 0x124(0x10)
	bool bRunParallel; // 0x134(0x01)
	bool bEvalIfNextStateActive; // 0x135(0x01)
	bool bCanEvalWithStartState; // 0x136(0x01)
	bool bAlwaysFalse; // 0x137(0x01)
	enum class ESMConditionalEvaluationType ConditionalEvaluationType; // 0x138(0x01)
	char pad_139[0x17]; // 0x139(0x17)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMGraphProperty
// Size: 0x110 (Inherited: 0x110)
struct FSMGraphProperty : public FSMGraphProperty_Base {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMNodeConnectionRule
// Size: 0xa8 (Inherited: 0x00)
struct FSMNodeConnectionRule {
public:

	struct FSMStateClassRule FromState; // 0x00(0x38)
	struct FSMStateClassRule ToState; // 0x38(0x38)
	struct FSMStateMachineClassRule InStateMachine; // 0x70(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMConduit
// Size: 0x160 (Inherited: 0x158)
struct FSMConduit : public FSMState_Base {
public:

	bool bCanEnterTransition; // 0x158(0x01)
	bool bCanEvaluate; // 0x159(0x01)
	bool bEvalWithTransitions; // 0x15a(0x01)
	char pad_15B[0x5]; // 0x15b(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMState
// Size: 0x178 (Inherited: 0x158)
struct FSMState : public FSMState_Base {
public:

	struct FSMExposedFunctionHandler EndStateGraphEvaluator; // 0x158(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SMSystem.SMStateMachine
// Size: 0x2f0 (Inherited: 0x158)
struct FSMStateMachine : public FSMState_Base {
public:

	bool bHasAdditionalLogic; // 0x158(0x01)
	bool bReuseCurrentState; // 0x159(0x01)
	bool bOnlyReuseIfNotEndState; // 0x15a(0x01)
	bool bAllowIndependentTick; // 0x15b(0x01)
	bool bCallReferenceTickOnManualUpdate; // 0x15c(0x01)
	bool bReuseReference; // 0x15d(0x01)
	bool bWaitForEndState; // 0x15e(0x01)
	char pad_15F[0x1]; // 0x15f(0x01)
	struct FSMExposedFunctionHandler EndStateGraphEvaluator; // 0x160(0x20)
	char pad_180[0x28]; // 0x180(0x28)
	struct TMap<struct FGuid, struct FSMNetworkedTransaction> PreviousTransactions; // 0x1a8(0x50)
	char pad_1F8[0xc0]; // 0x1f8(0xc0)
	struct UClass* ReferencedStateMachineClass; // 0x2b8(0x08)
	struct FName ReferencedTemplateName; // 0x2c0(0x08)
	struct USMInstance* ReferencedStateMachine; // 0x2c8(0x08)
	struct USMInstance* IsReferencedByInstance; // 0x2d0(0x08)
	char pad_2D8[0x18]; // 0x2d8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
