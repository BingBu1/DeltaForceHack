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
	struct Function_WBP_Chat_Input_WBP_Chat_Input_C_OnSetCandidateList_Param
	{
	public:

		struct TArray<struct FString> List; // 0x00(0x10)
		int32_t SelectionIndex; // 0x10(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
