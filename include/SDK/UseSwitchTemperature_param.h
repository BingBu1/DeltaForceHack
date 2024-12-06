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
	struct Function_UseSwitchTemperature_UseSwitchTemperature_C_SwitchTemperature_Param
	{
	public:

		char ChoseTemperature; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct UObject* __WorldContext; // 0x08(0x08)
		float Temperature; // 0x10(0x04)
		struct FLinearColor LightColor; // 0x14(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
