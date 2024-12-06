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
	struct Function_BPIniConfigHelper_BPIniConfigFunctions_SetStringConfigValue_Param
	{
	public:

		struct FString ConfigKey; // 0x00(0x10)
		struct FString SectionName; // 0x10(0x10)
		struct FString ConfigValue; // 0x20(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
