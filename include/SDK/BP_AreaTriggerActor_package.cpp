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
	 * 	Name: PredefinedFunction ABP_AreaTriggerActor_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_AreaTriggerActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x41\x72\x65\x61\x54\x72\x69\x67\x67\x65\x72\x41\x63\x74\x6f\x72\x2e\x42\x50\x5f\x41\x72\x65\x61\x54\x72\x69\x67\x67\x65\x72\x41\x63\x74\x6f\x72\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_AreaTriggerActor.BP_AreaTriggerActor_C.ReceiveBeginPlay
	 * 	Flags: (Event, Protected, BlueprintEvent)
	 */
	void ABP_AreaTriggerActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x41\x72\x65\x61\x54\x72\x69\x67\x67\x65\x72\x41\x63\x74\x6f\x72\x2e\x42\x50\x5f\x41\x72\x65\x61\x54\x72\x69\x67\x67\x65\x72\x41\x63\x74\x6f\x72\x5f\x43\x2e\x52\x65\x63\x65\x69\x76\x65\x42\x65\x67\x69\x6e\x50\x6c\x61\x79");
		Function_BP_AreaTriggerActor_BP_AreaTriggerActor_C_ReceiveBeginPlay_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}