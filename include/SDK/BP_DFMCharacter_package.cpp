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
	 * 	Name: PredefinedFunction ABP_DFMCharacter_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_DFMCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x44\x46\x4d\x43\x68\x61\x72\x61\x63\x74\x65\x72\x2e\x42\x50\x5f\x44\x46\x4d\x43\x68\x61\x72\x61\x63\x74\x65\x72\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XBFFFFFFF
	 * 	Name: Function BP_DFMCharacter.BP_DFMCharacter_C.GetThreat_AirHit
	 * 	Flags: (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ABP_DFMCharacter_C::GetThreat_AirHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x44\x46\x4d\x43\x68\x61\x72\x61\x63\x74\x65\x72\x2e\x42\x50\x5f\x44\x46\x4d\x43\x68\x61\x72\x61\x63\x74\x65\x72\x5f\x43\x2e\x47\x65\x74\x54\x68\x72\x65\x61\x74\x5f\x41\x69\x72\x48\x69\x74");
		Function_BP_DFMCharacter_BP_DFMCharacter_C_GetThreat_AirHit_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}