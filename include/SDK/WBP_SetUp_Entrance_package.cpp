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
	 * 	Name: PredefinedFunction UWBP_SetUp_Entrance_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_SetUp_Entrance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x53\x65\x74\x55\x70\x5f\x45\x6e\x74\x72\x61\x6e\x63\x65\x2e\x57\x42\x50\x5f\x53\x65\x74\x55\x70\x5f\x45\x6e\x74\x72\x61\x6e\x63\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0740000
	 * 	Name: Function WBP_SetUp_Entrance.WBP_SetUp_Entrance_C.BP_AddLineToLastVisibleButton
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_SetUp_Entrance_C::BP_AddLineToLastVisibleButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x53\x65\x74\x55\x70\x5f\x45\x6e\x74\x72\x61\x6e\x63\x65\x2e\x57\x42\x50\x5f\x53\x65\x74\x55\x70\x5f\x45\x6e\x74\x72\x61\x6e\x63\x65\x5f\x43\x2e\x42\x50\x5f\x41\x64\x64\x4c\x69\x6e\x65\x54\x6f\x4c\x61\x73\x74\x56\x69\x73\x69\x62\x6c\x65\x42\x75\x74\x74\x6f\x6e");
		Function_WBP_SetUp_Entrance_WBP_SetUp_Entrance_C_BP_AddLineToLastVisibleButton_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}