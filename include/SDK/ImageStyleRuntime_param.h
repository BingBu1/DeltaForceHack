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
	struct Function_ImageStyleRuntime_ImageStyleBlueprintFuncLib_SetImageStyle_Param
	{
	public:

		struct UImage* InImage; // 0x00(0x08)
		struct FName InStyleName; // 0x08(0x08)
	};

	struct Function_ImageStyleRuntime_ImageStyleRuntimeManager_GetImageStyleCfgData_Param
	{
	public:

		struct FName InName; // 0x00(0x08)
		struct FImageStyle OutCustomImageStyle; // 0x08(0x28)
		bool ReturnValue; // 0x30(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
