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
	 * 	Name: PredefinedFunction UWBP_InteractQuality_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_InteractQuality_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x49\x6e\x74\x65\x72\x61\x63\x74\x51\x75\x61\x6c\x69\x74\x79\x2e\x57\x42\x50\x5f\x49\x6e\x74\x65\x72\x61\x63\x74\x51\x75\x61\x6c\x69\x74\x79\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000044
	 * 	Name: Function WBP_InteractQuality.WBP_InteractQuality_C.RefreshGridLayout
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_InteractQuality_C::RefreshGridLayout(int32_t Length, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x49\x6e\x74\x65\x72\x61\x63\x74\x51\x75\x61\x6c\x69\x74\x79\x2e\x57\x42\x50\x5f\x49\x6e\x74\x65\x72\x61\x63\x74\x51\x75\x61\x6c\x69\x74\x79\x5f\x43\x2e\x52\x65\x66\x72\x65\x73\x68\x47\x72\x69\x64\x4c\x61\x79\x6f\x75\x74");
		Function_WBP_InteractQuality_WBP_InteractQuality_C_RefreshGridLayout_Param params { };
		params.Length = Length;
		params.Height = Height;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}