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
	 * 	Name: PredefinedFunction UWBP_SlotCompSoldOut_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_SlotCompSoldOut_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x53\x6c\x6f\x74\x43\x6f\x6d\x70\x53\x6f\x6c\x64\x4f\x75\x74\x2e\x57\x42\x50\x5f\x53\x6c\x6f\x74\x43\x6f\x6d\x70\x53\x6f\x6c\x64\x4f\x75\x74\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XBFFFFFFF
	 * 	Name: Function WBP_SlotCompSoldOut.WBP_SlotCompSoldOut_C.Set_Type
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_SlotCompSoldOut_C::Set_Type()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x53\x6c\x6f\x74\x43\x6f\x6d\x70\x53\x6f\x6c\x64\x4f\x75\x74\x2e\x57\x42\x50\x5f\x53\x6c\x6f\x74\x43\x6f\x6d\x70\x53\x6f\x6c\x64\x4f\x75\x74\x5f\x43\x2e\x53\x65\x74\x5f\x54\x79\x70\x65");
		Function_WBP_SlotCompSoldOut_WBP_SlotCompSoldOut_C_Set_Type_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}