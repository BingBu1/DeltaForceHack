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
	 * 	Name: PredefinedFunction UWBP_Itemview_Collections_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_Itemview_Collections_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x49\x74\x65\x6d\x76\x69\x65\x77\x5f\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x57\x42\x50\x5f\x49\x74\x65\x6d\x76\x69\x65\x77\x5f\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC000005B
	 * 	Name: Function WBP_Itemview_Collections.WBP_Itemview_Collections_C.SequenceEvent__ENTRYPOINTWBP_Itemview_Collections_1
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_Itemview_Collections_C::SequenceEvent__ENTRYPOINTWBP_Itemview_Collections_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x49\x74\x65\x6d\x76\x69\x65\x77\x5f\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x57\x42\x50\x5f\x49\x74\x65\x6d\x76\x69\x65\x77\x5f\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x5f\x43\x2e\x53\x65\x71\x75\x65\x6e\x63\x65\x45\x76\x65\x6e\x74\x5f\x5f\x45\x4e\x54\x52\x59\x50\x4f\x49\x4e\x54\x57\x42\x50\x5f\x49\x74\x65\x6d\x76\x69\x65\x77\x5f\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x5f\x31");
		Function_WBP_Itemview_Collections_WBP_Itemview_Collections_C_SequenceEvent__ENTRYPOINTWBP_Itemview_Collections_1_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}