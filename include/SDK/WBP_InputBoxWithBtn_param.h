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
	struct Function_WBP_InputBoxWithBtn_WBP_InputBoxWithBtn_C_Set_Type_Param
	{
	public:

		bool IsVis; // 0x00(0x01)
		char pad_1[0x7]; // 0x01(0x07)
		struct FText HintText; // 0x08(0x18)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
