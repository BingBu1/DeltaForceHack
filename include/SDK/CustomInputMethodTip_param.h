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
	struct Function_CustomInputMethodTip_CustomInputMethodTipBPLib_IsCanddateListVisible_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_CustomInputMethodTip_InputMethodCandidateList_SetReadingString_Param
	{
	public:

		struct FString Text; // 0x00(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
