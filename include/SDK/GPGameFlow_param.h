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
	struct Function_GPGameFlow_GPGameFlowStringArg_ToString_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_GPGameFlow_GameFlowDelegates_UpdatePendingNextFlowStage_Param
	{
	public:

		enum class EGameFlowStageType InGameFlowStage; // 0x00(0x01)
	};

	struct Function_GPGameFlow_GameFlowGraph_OnLuaGameFlowEvent_Param
	{
	public:

		struct UGameInstance* GameInst; // 0x00(0x08)
		struct FString MdlName; // 0x08(0x10)
		struct FString EvtName; // 0x18(0x10)
		struct FString ArgStr; // 0x28(0x10)
	};

	struct Function_GPGameFlow_GPLuaGameFlowEventListener_ListenLuaModuleEvent_Param
	{
	public:

		struct UGameFlowStage* GFStage; // 0x00(0x08)
		struct FString ModuleEvent; // 0x08(0x10)
		struct UGPLuaGameFlowEventListener* ReturnValue; // 0x18(0x08)
	};

	struct Function_GPGameFlow_GameFlowStage_OnTick_Param
	{
	public:

		float DeltaTime; // 0x00(0x04)
	};

	struct Function_GPGameFlow_GPGameFlowGraphPlayer_Stop_Param
	{
	public:

	};

	struct Function_GPGameFlow_GPGameFlowStagePlayer_EnterGameFlowStage_Param
	{
	public:

		struct UGameFlowGraph* GFGraph; // 0x00(0x08)
		struct UClass* GFStageClass; // 0x08(0x08)
		struct UGPGameFlowStagePlayer* ReturnValue; // 0x10(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
