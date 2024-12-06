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
	 * 	Name: PredefinedFunction UWBP_Itemview_TipsText_C_def2.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_Itemview_TipsText_C_def2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x49\x74\x65\x6d\x76\x69\x65\x77\x5f\x54\x69\x70\x73\x54\x65\x78\x74\x2e\x57\x42\x50\x5f\x49\x74\x65\x6d\x76\x69\x65\x77\x5f\x54\x69\x70\x73\x54\x65\x78\x74\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000044
	 * 	Name: Function WBP_Itemview_TipsText.WBP_Itemview_TipsText_C.PlayInAnimation
	 * 	Flags: (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_Itemview_TipsText_C_def2::PlayInAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x49\x74\x65\x6d\x76\x69\x65\x77\x5f\x54\x69\x70\x73\x54\x65\x78\x74\x2e\x57\x42\x50\x5f\x49\x74\x65\x6d\x76\x69\x65\x77\x5f\x54\x69\x70\x73\x54\x65\x78\x74\x5f\x43\x2e\x50\x6c\x61\x79\x49\x6e\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e");
		Function_WBP_Itemview_TipsText_WBP_Itemview_TipsText_C_PlayInAnimation_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}