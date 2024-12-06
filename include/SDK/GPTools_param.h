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
	struct Function_GPTools_GPTFlowLogger_ResetBuffer_Param
	{
	public:

	};

	struct Function_GPTools_GPToolGUI_VSliderIntEx_Param
	{
	public:

		struct FString Label; // 0x00(0x10)
		struct FVector2D size; // 0x10(0x08)
		int32_t V; // 0x18(0x04)
		int32_t v_min; // 0x1c(0x04)
		int32_t v_max; // 0x20(0x04)
		char pad_24[0x4]; // 0x24(0x04)
		struct FString Format; // 0x28(0x10)
		bool ReturnValue; // 0x38(0x01)
	};

	struct Function_GPTools_GPToolManager_Show_Param
	{
	public:

	};

	struct Function_GPTools_GPTRPCComponent_ServerExecConsoleCommand_Param
	{
	public:

		struct FString Cmd; // 0x00(0x10)
	};

	struct Function_GPTools_GPToolBPBase_OnImGUI_Param
	{
	public:

	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
