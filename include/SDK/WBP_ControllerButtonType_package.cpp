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
	 * 	Name: PredefinedFunction UWBP_ControllerButtonType_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_ControllerButtonType_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72\x42\x75\x74\x74\x6f\x6e\x54\x79\x70\x65\x2e\x57\x42\x50\x5f\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72\x42\x75\x74\x74\x6f\x6e\x54\x79\x70\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC000005A
	 * 	Name: Function WBP_ControllerButtonType.WBP_ControllerButtonType_C.BP_Init
	 * 	Flags: (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_ControllerButtonType_C::BP_Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72\x42\x75\x74\x74\x6f\x6e\x54\x79\x70\x65\x2e\x57\x42\x50\x5f\x43\x6f\x6e\x74\x72\x6f\x6c\x6c\x65\x72\x42\x75\x74\x74\x6f\x6e\x54\x79\x70\x65\x5f\x43\x2e\x42\x50\x5f\x49\x6e\x69\x74");
		Function_WBP_ControllerButtonType_WBP_ControllerButtonType_C_BP_Init_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}