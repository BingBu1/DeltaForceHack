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
	 * 	Name: PredefinedFunction UWBP_FixedWeapon_Tips_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_FixedWeapon_Tips_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x46\x69\x78\x65\x64\x57\x65\x61\x70\x6f\x6e\x5f\x54\x69\x70\x73\x2e\x57\x42\x50\x5f\x46\x69\x78\x65\x64\x57\x65\x61\x70\x6f\x6e\x5f\x54\x69\x70\x73\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function WBP_FixedWeapon_Tips.WBP_FixedWeapon_Tips_C.PCAdaptation
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_FixedWeapon_Tips_C::PCAdaptation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x46\x69\x78\x65\x64\x57\x65\x61\x70\x6f\x6e\x5f\x54\x69\x70\x73\x2e\x57\x42\x50\x5f\x46\x69\x78\x65\x64\x57\x65\x61\x70\x6f\x6e\x5f\x54\x69\x70\x73\x5f\x43\x2e\x50\x43\x41\x64\x61\x70\x74\x61\x74\x69\x6f\x6e");
		Function_WBP_FixedWeapon_Tips_WBP_FixedWeapon_Tips_C_PCAdaptation_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}