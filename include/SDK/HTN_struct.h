
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum HTN.EHTNDecoratorTestResult
enum class EHTNDecoratorTestResult : int {
	Failed = 0,
	Passed = 1,
	NotTested = 2,
	EHTNDecoratorTestResult_MAX = 3
};

// Enum HTN.EHTNDecoratorConditionCheckType
enum class EHTNDecoratorConditionCheckType : int {
	PlanEnter = 0,
	PlanExit = 1,
	PlanRecheck = 2,
	Execution = 3,
	EHTNDecoratorConditionCheckType_MAX = 4
};

// Enum HTN.EHTNTaskFunction
enum class EHTNTaskFunction : int {
	None = 0,
	CreatePlanSteps = 1,
	RecheckPlan = 2,
	Execute = 3,
	Abort = 4,
	EHTNTaskFunction_MAX = 5
};

// Enum HTN.EHTNTaskStatus
enum class EHTNTaskStatus : int {
	Active = 0,
	Aborting = 1,
	Inactive = 2,
	EHTNTaskStatus_MAX = 3
};

// Enum HTN.EHTNNodeResult
enum class EHTNNodeResult : int {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EHTNNodeResult_MAX = 4
};

// ScriptStruct HTN.EQSParametrizedQueryExecutionRequestHTN
// Size: 0x48 (Inherited: 0x48)
struct FEQSParametrizedQueryExecutionRequestHTN : public FEQSParametrizedQueryExecutionRequest {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HTN.WorldstateSetValueContainer
// Size: 0x40 (Inherited: 0x00)
struct FWorldstateSetValueContainer {
public:

	int32_t IntValue; // 0x00(0x04)
	float FloatValue; // 0x04(0x04)
	struct FVector VectorValue; // 0x08(0x0c)
	struct FRotator RotatorValue; // 0x14(0x0c)
	struct FString StringValue; // 0x20(0x10)
	struct FName NameValue; // 0x30(0x08)
	struct UObject* ObjectValue; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
