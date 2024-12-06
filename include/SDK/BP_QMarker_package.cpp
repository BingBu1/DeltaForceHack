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
	 * 	Name: PredefinedFunction ABP_QMarker_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_QMarker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x51\x4d\x61\x72\x6b\x65\x72\x2e\x42\x50\x5f\x51\x4d\x61\x72\x6b\x65\x72\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_QMarker.BP_QMarker_C.GetTargetInteratorProgress
	 * 	Flags: (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_QMarker_C::GetTargetInteratorProgress(float& Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x51\x4d\x61\x72\x6b\x65\x72\x2e\x42\x50\x5f\x51\x4d\x61\x72\x6b\x65\x72\x5f\x43\x2e\x47\x65\x74\x54\x61\x72\x67\x65\x74\x49\x6e\x74\x65\x72\x61\x74\x6f\x72\x50\x72\x6f\x67\x72\x65\x73\x73");
		Function_BP_QMarker_BP_QMarker_C_GetTargetInteratorProgress_Param params { };
		params.Percent = Percent;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Percent = params.Percent;
	}
}