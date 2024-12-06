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
	 * 	Name: PredefinedFunction UWBP_TestVRam_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_TestVRam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x54\x65\x73\x74\x56\x52\x61\x6d\x2e\x57\x42\x50\x5f\x54\x65\x73\x74\x56\x52\x61\x6d\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X3F008100
	 * 	Name: Function WBP_TestVRam.WBP_TestVRam_C.BP_SetTarget
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_TestVRam_C::BP_SetTarget(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x54\x65\x73\x74\x56\x52\x61\x6d\x2e\x57\x42\x50\x5f\x54\x65\x73\x74\x56\x52\x61\x6d\x5f\x43\x2e\x42\x50\x5f\x53\x65\x74\x54\x61\x72\x67\x65\x74");
		Function_WBP_TestVRam_WBP_TestVRam_C_BP_SetTarget_Param params { };
		params.Progress = Progress;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}