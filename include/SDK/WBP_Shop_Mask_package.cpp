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
	 * 	Name: PredefinedFunction UWBP_Shop_Mask_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_Shop_Mask_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x53\x68\x6f\x70\x5f\x4d\x61\x73\x6b\x2e\x57\x42\x50\x5f\x53\x68\x6f\x70\x5f\x4d\x61\x73\x6b\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function WBP_Shop_Mask.WBP_Shop_Mask_C.PCAdaptation
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_Shop_Mask_C::PCAdaptation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x53\x68\x6f\x70\x5f\x4d\x61\x73\x6b\x2e\x57\x42\x50\x5f\x53\x68\x6f\x70\x5f\x4d\x61\x73\x6b\x5f\x43\x2e\x50\x43\x41\x64\x61\x70\x74\x61\x74\x69\x6f\x6e");
		Function_WBP_Shop_Mask_WBP_Shop_Mask_C_PCAdaptation_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}