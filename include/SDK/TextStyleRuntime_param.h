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
	struct Function_TextStyleRuntime_FontStyleRuntimeManager_WarmupText_Param
	{
	public:

		struct FName InStyleName; // 0x00(0x08)
		struct FString InContent; // 0x08(0x10)
	};

	struct Function_TextStyleRuntime_TextStyleBlueprintLib_Blueprint_SetTextStyle_Param
	{
	public:

		struct UTextLayoutWidget* InTextWidget; // 0x00(0x08)
		struct FName InTextStyleIdx; // 0x08(0x08)
	};

	struct Function_TextStyleRuntime_TextStyleRuntimeManager_GetTextStyleCfgData_Param
	{
	public:

		struct FName InName; // 0x00(0x08)
		struct FCustomTextStyle OutCustomTextStyle; // 0x08(0x88)
		bool ReturnValue; // 0x90(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
