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
	struct Function_PerfGear_FXProxyActor_Test_SetDSActivatePSC_True_Param
	{
	public:

	};

	struct Function_PerfGear_PerfGearPipeline_SetSwitchStatus_Param
	{
	public:

		struct FString InParamName; // 0x00(0x10)
		struct FString InMode; // 0x10(0x10)
		enum class ESwitchStatus InStatus; // 0x20(0x01)
	};

	struct Function_PerfGear_PerfGearFuncLib_MakeFPSClampSetting_Param
	{
	public:

		enum class EPerfGearQualityLevel InQualityLevel; // 0x00(0x01)
		enum class EPerfGearQualityLevel InOriFpsLevel; // 0x01(0x01)
		enum class EPerfGearQualityLevel InOverrideFpsLevel; // 0x02(0x01)
		struct FPSClampSetting ReturnValue; // 0x03(0x03)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
