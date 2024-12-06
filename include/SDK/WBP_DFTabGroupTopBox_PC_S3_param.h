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
	struct Function_WBP_DFTabGroupTopBox_PC_S3_WBP_DFTabGroupTopBox_PC_S3_C_OnUserProcessTabSlot_Param
	{
	public:

		int32_t Position; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UWidget* ItemWidget; // 0x08(0x08)
		struct UPanelSlot* ItemSlot; // 0x10(0x08)
		int32_t TotalCount; // 0x18(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
