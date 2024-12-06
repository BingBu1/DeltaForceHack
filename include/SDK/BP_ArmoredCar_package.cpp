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
	 * 	Name: PredefinedFunction ABP_ArmoredCar_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_ArmoredCar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x41\x72\x6d\x6f\x72\x65\x64\x43\x61\x72\x2e\x42\x50\x5f\x41\x72\x6d\x6f\x72\x65\x64\x43\x61\x72\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000074
	 * 	Name: Function BP_ArmoredCar.BP_ArmoredCar_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_3
	 * 	Flags: (BlueprintEvent)
	 */
	void ABP_ArmoredCar_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_3(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x41\x72\x6d\x6f\x72\x65\x64\x43\x61\x72\x2e\x42\x50\x5f\x41\x72\x6d\x6f\x72\x65\x64\x43\x61\x72\x5f\x43\x2e\x49\x6e\x70\x41\x78\x69\x73\x45\x76\x74\x5f\x4c\x6f\x6f\x6b\x55\x70\x5f\x4b\x32\x4e\x6f\x64\x65\x5f\x49\x6e\x70\x75\x74\x41\x78\x69\x73\x45\x76\x65\x6e\x74\x5f\x33");
		Function_BP_ArmoredCar_BP_ArmoredCar_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_3_Param params { };
		params.AxisValue = AxisValue;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}