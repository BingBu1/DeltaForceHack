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
	 * 	Name: PredefinedFunction UWBP_CommonMessageTipsKeyPc_V2_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_CommonMessageTipsKeyPc_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x43\x6f\x6d\x6d\x6f\x6e\x4d\x65\x73\x73\x61\x67\x65\x54\x69\x70\x73\x4b\x65\x79\x50\x63\x5f\x56\x32\x2e\x57\x42\x50\x5f\x43\x6f\x6d\x6d\x6f\x6e\x4d\x65\x73\x73\x61\x67\x65\x54\x69\x70\x73\x4b\x65\x79\x50\x63\x5f\x56\x32\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function WBP_CommonMessageTipsKeyPc_V2.WBP_CommonMessageTipsKeyPc_V2_C.BP_ArrangeItems
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_CommonMessageTipsKeyPc_V2_C::BP_ArrangeItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x43\x6f\x6d\x6d\x6f\x6e\x4d\x65\x73\x73\x61\x67\x65\x54\x69\x70\x73\x4b\x65\x79\x50\x63\x5f\x56\x32\x2e\x57\x42\x50\x5f\x43\x6f\x6d\x6d\x6f\x6e\x4d\x65\x73\x73\x61\x67\x65\x54\x69\x70\x73\x4b\x65\x79\x50\x63\x5f\x56\x32\x5f\x43\x2e\x42\x50\x5f\x41\x72\x72\x61\x6e\x67\x65\x49\x74\x65\x6d\x73");
		Function_WBP_CommonMessageTipsKeyPc_V2_WBP_CommonMessageTipsKeyPc_V2_C_BP_ArrangeItems_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}