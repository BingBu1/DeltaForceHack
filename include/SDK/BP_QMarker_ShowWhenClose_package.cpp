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
	 * 	Name: PredefinedFunction ABP_QMarker_ShowWhenClose_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_QMarker_ShowWhenClose_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x51\x4d\x61\x72\x6b\x65\x72\x5f\x53\x68\x6f\x77\x57\x68\x65\x6e\x43\x6c\x6f\x73\x65\x2e\x42\x50\x5f\x51\x4d\x61\x72\x6b\x65\x72\x5f\x53\x68\x6f\x77\x57\x68\x65\x6e\x43\x6c\x6f\x73\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_QMarker_ShowWhenClose.BP_QMarker_ShowWhenClose_C.ReceiveBeginPlay
	 * 	Flags: (Event, Protected, BlueprintEvent)
	 */
	void ABP_QMarker_ShowWhenClose_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x51\x4d\x61\x72\x6b\x65\x72\x5f\x53\x68\x6f\x77\x57\x68\x65\x6e\x43\x6c\x6f\x73\x65\x2e\x42\x50\x5f\x51\x4d\x61\x72\x6b\x65\x72\x5f\x53\x68\x6f\x77\x57\x68\x65\x6e\x43\x6c\x6f\x73\x65\x5f\x43\x2e\x52\x65\x63\x65\x69\x76\x65\x42\x65\x67\x69\x6e\x50\x6c\x61\x79");
		Function_BP_QMarker_ShowWhenClose_BP_QMarker_ShowWhenClose_C_ReceiveBeginPlay_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}