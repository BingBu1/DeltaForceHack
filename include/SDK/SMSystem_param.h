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
	struct Function_SMSystem_SMInstanceInterface_GetContext_Param
	{
	public:

		struct UObject* ReturnValue; // 0x00(0x08)
	};

	struct Function_SMSystem_SMStateMachineInterface_Update_Param
	{
	public:

		float DeltaSeconds; // 0x00(0x04)
	};

	struct Function_SMSystem_SMStateMachineNetworkedInterface_ShouldReplicateStates_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_SMSystem_SMInstance_Update_Param
	{
	public:

		float DeltaSeconds; // 0x00(0x04)
	};

	struct Function_SMSystem_SMStateMachineComponent_Update_Param
	{
	public:

		float DeltaSeconds; // 0x00(0x04)
	};

	struct Function_SMSystem_SMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Param
	{
	public:

		struct UClass* StateMachineClass; // 0x00(0x08)
		struct UObject* Context; // 0x08(0x08)
		struct USMInstance* Template; // 0x10(0x08)
		struct USMInstance* Owner; // 0x18(0x08)
		struct UActorComponent* Component; // 0x20(0x08)
		struct USMInstance* ReturnValue; // 0x28(0x08)
	};

	struct Function_SMSystem_SMNodeInstance_IsInEndState_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_SMSystem_SMStateInstance_Base_SwitchToLinkedState_Param
	{
	public:

		struct USMStateInstance_Base* NextStateInstance; // 0x00(0x08)
		bool bRequireTransitionToPass; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_SMSystem_SMTransitionInstance_SetCanEvaluate_Param
	{
	public:

		bool bValue; // 0x00(0x01)
	};

	struct Function_SMSystem_SMConduitInstance_SetCanEvaluate_Param
	{
	public:

		bool bValue; // 0x00(0x01)
	};

	struct Function_SMSystem_SMStateMachineInstance_OnStateMachineCompleted_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
