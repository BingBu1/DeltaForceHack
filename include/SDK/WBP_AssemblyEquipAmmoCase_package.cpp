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
	 * 	Name: PredefinedFunction UWBP_AssemblyEquipAmmoCase_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_AssemblyEquipAmmoCase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x41\x73\x73\x65\x6d\x62\x6c\x79\x45\x71\x75\x69\x70\x41\x6d\x6d\x6f\x43\x61\x73\x65\x2e\x57\x42\x50\x5f\x41\x73\x73\x65\x6d\x62\x6c\x79\x45\x71\x75\x69\x70\x41\x6d\x6d\x6f\x43\x61\x73\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XFDC7211B
	 * 	Name: Function WBP_AssemblyEquipAmmoCase.WBP_AssemblyEquipAmmoCase_C.Bp_SetLock
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_AssemblyEquipAmmoCase_C::Bp_SetLock(bool Lock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x41\x73\x73\x65\x6d\x62\x6c\x79\x45\x71\x75\x69\x70\x41\x6d\x6d\x6f\x43\x61\x73\x65\x2e\x57\x42\x50\x5f\x41\x73\x73\x65\x6d\x62\x6c\x79\x45\x71\x75\x69\x70\x41\x6d\x6d\x6f\x43\x61\x73\x65\x5f\x43\x2e\x42\x70\x5f\x53\x65\x74\x4c\x6f\x63\x6b");
		Function_WBP_AssemblyEquipAmmoCase_WBP_AssemblyEquipAmmoCase_C_Bp_SetLock_Param params { };
		params.Lock = Lock;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}