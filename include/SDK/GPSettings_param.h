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
	struct Function_GPSettings_GPScalabilityBlueprintTools_SetMaxFPS_Param
	{
	public:

		float InMaxFPS; // 0x00(0x04)
	};

	struct Function_GPSettings_HardwareParamHelper_Warning_Param
	{
	public:

		struct FString InMessage; // 0x00(0x10)
	};

	struct Function_GPSettings_VideoSettingHelper_WithACLine_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
