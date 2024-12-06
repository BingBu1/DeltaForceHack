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
	 * 	Name: PredefinedFunction ABP_DFMObserverPawn_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_DFMObserverPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x44\x46\x4d\x4f\x62\x73\x65\x72\x76\x65\x72\x50\x61\x77\x6e\x2e\x42\x50\x5f\x44\x46\x4d\x4f\x62\x73\x65\x72\x76\x65\x72\x50\x61\x77\x6e\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_DFMObserverPawn.BP_DFMObserverPawn_C.SetCameraTurningBoost
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DFMObserverPawn_C::SetCameraTurningBoost(float TurningBoost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x44\x46\x4d\x4f\x62\x73\x65\x72\x76\x65\x72\x50\x61\x77\x6e\x2e\x42\x50\x5f\x44\x46\x4d\x4f\x62\x73\x65\x72\x76\x65\x72\x50\x61\x77\x6e\x5f\x43\x2e\x53\x65\x74\x43\x61\x6d\x65\x72\x61\x54\x75\x72\x6e\x69\x6e\x67\x42\x6f\x6f\x73\x74");
		Function_BP_DFMObserverPawn_BP_DFMObserverPawn_C_SetCameraTurningBoost_Param params { };
		params.TurningBoost = TurningBoost;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}