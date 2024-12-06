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
	 * 	Name: PredefinedFunction UWBP_TopBarHDSlotPanelV3_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_TopBarHDSlotPanelV3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x54\x6f\x70\x42\x61\x72\x48\x44\x53\x6c\x6f\x74\x50\x61\x6e\x65\x6c\x56\x33\x2e\x57\x42\x50\x5f\x54\x6f\x70\x42\x61\x72\x48\x44\x53\x6c\x6f\x74\x50\x61\x6e\x65\x6c\x56\x33\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function WBP_TopBarHDSlotPanelV3.WBP_TopBarHDSlotPanelV3_C.BP_ArrangeSummaryItemV2
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_TopBarHDSlotPanelV3_C::BP_ArrangeSummaryItemV2(bool bSOL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x54\x6f\x70\x42\x61\x72\x48\x44\x53\x6c\x6f\x74\x50\x61\x6e\x65\x6c\x56\x33\x2e\x57\x42\x50\x5f\x54\x6f\x70\x42\x61\x72\x48\x44\x53\x6c\x6f\x74\x50\x61\x6e\x65\x6c\x56\x33\x5f\x43\x2e\x42\x50\x5f\x41\x72\x72\x61\x6e\x67\x65\x53\x75\x6d\x6d\x61\x72\x79\x49\x74\x65\x6d\x56\x32");
		Function_WBP_TopBarHDSlotPanelV3_WBP_TopBarHDSlotPanelV3_C_BP_ArrangeSummaryItemV2_Param params { };
		params.bSOL = bSOL;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}