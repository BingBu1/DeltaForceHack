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
	struct Function_HTN_EnvQueryContext_HTNBlueprintBase_ProvideSingleLocation_Param
	{
	public:

		struct UObject* QuerierObject; // 0x00(0x08)
		struct AActor* QuerierActor; // 0x08(0x08)
		struct FVector ResultingLocation; // 0x10(0x0c)
	};

	struct Function_HTN_HTNBlueprintLibrary_RunHTN_Param
	{
	public:

		struct AAIController* AIController; // 0x00(0x08)
		struct UHTN* HTNAsset; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_HTN_HTNNodeLibrary_SetWorldStateValueAsVector_Param
	{
	public:

		struct UHTNNode* Node; // 0x00(0x08)
		struct FBlackboardKeySelector Key; // 0x08(0x28)
		struct FVector Value; // 0x30(0x0c)
	};

	struct Function_HTN_HTNComponent_StopHTN_Param
	{
	public:

		bool bDisregardLatentAbort; // 0x00(0x01)
	};

	struct Function_HTN_WorldStateProxy_SetValueAsVector_Param
	{
	public:

		struct FName KeyName; // 0x00(0x08)
		struct FVector Value; // 0x08(0x0c)
	};

	struct Function_HTN_HTNNode_GetOwnerComponent_Param
	{
	public:

		struct UHTNComponent* ReturnValue; // 0x00(0x08)
	};

	struct Function_HTN_HTNDecorator_IsInversed_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_HTN_HTNDecorator_BlueprintBase_ReceiveTick_Param
	{
	public:

		struct AActor* Owner; // 0x00(0x08)
		struct AAIController* OwnerAsController; // 0x08(0x08)
		struct APawn* ControlledPawn; // 0x10(0x08)
		float DeltaTime; // 0x18(0x04)
	};

	struct Function_HTN_HTNService_BlueprintBase_ReceiveTick_Param
	{
	public:

		struct AActor* Owner; // 0x00(0x08)
		struct AAIController* OwnerAsController; // 0x08(0x08)
		struct APawn* ControlledPawn; // 0x10(0x08)
		float DeltaTime; // 0x18(0x04)
	};

	struct Function_HTN_HTNTask_BlueprintBase_SubmitPlanStep_Param
	{
	public:

		int32_t Cost; // 0x00(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
