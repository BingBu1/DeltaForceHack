/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#include "../SDK.h"

namespace Dumper
{
	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFCommonTabNavigator.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFCommonTabNavigator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x47\x61\x6d\x65\x55\x73\x65\x72\x49\x6e\x74\x65\x72\x66\x61\x63\x65\x2e\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x54\x61\x62\x4e\x61\x76\x69\x67\x61\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMGameUserInterface.DFCommonTabNavigator.InitKeyIcons
	 * 	Flags: (Final, Native, Public)
	 */
	void UDFCommonTabNavigator::InitKeyIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x47\x61\x6d\x65\x55\x73\x65\x72\x49\x6e\x74\x65\x72\x66\x61\x63\x65\x2e\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x54\x61\x62\x4e\x61\x76\x69\x67\x61\x74\x6f\x72\x2e\x49\x6e\x69\x74\x4b\x65\x79\x49\x63\x6f\x6e\x73");
		Function_DFMGameUserInterface_DFCommonTabNavigator_InitKeyIcons_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}