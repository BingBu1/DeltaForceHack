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
	 * 	Name: PredefinedFunction UBP_GLS_DeviceCheck_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_GLS_DeviceCheck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x47\x4c\x53\x5f\x44\x65\x76\x69\x63\x65\x43\x68\x65\x63\x6b\x2e\x42\x50\x5f\x47\x4c\x53\x5f\x44\x65\x76\x69\x63\x65\x43\x68\x65\x63\x6b\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_GLS_DeviceCheck.BP_GLS_DeviceCheck_C.BP_OnStepBegin
	 * 	Flags: (Event, Public, BlueprintEvent)
	 */
	void UBP_GLS_DeviceCheck_C::BP_OnStepBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x47\x4c\x53\x5f\x44\x65\x76\x69\x63\x65\x43\x68\x65\x63\x6b\x2e\x42\x50\x5f\x47\x4c\x53\x5f\x44\x65\x76\x69\x63\x65\x43\x68\x65\x63\x6b\x5f\x43\x2e\x42\x50\x5f\x4f\x6e\x53\x74\x65\x70\x42\x65\x67\x69\x6e");
		Function_BP_GLS_DeviceCheck_BP_GLS_DeviceCheck_C_BP_OnStepBegin_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}