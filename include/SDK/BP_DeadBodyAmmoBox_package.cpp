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
	 * 	Name: PredefinedFunction ABP_DeadBodyAmmoBox_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_DeadBodyAmmoBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x44\x65\x61\x64\x42\x6f\x64\x79\x41\x6d\x6d\x6f\x42\x6f\x78\x2e\x42\x50\x5f\x44\x65\x61\x64\x42\x6f\x64\x79\x41\x6d\x6d\x6f\x42\x6f\x78\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X6476947F
	 * 	Name: Function BP_DeadBodyAmmoBox.BP_DeadBodyAmmoBox_C.EnableHighlight
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_DeadBodyAmmoBox_C::EnableHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x44\x65\x61\x64\x42\x6f\x64\x79\x41\x6d\x6d\x6f\x42\x6f\x78\x2e\x42\x50\x5f\x44\x65\x61\x64\x42\x6f\x64\x79\x41\x6d\x6d\x6f\x42\x6f\x78\x5f\x43\x2e\x45\x6e\x61\x62\x6c\x65\x48\x69\x67\x68\x6c\x69\x67\x68\x74");
		Function_BP_DeadBodyAmmoBox_BP_DeadBodyAmmoBox_C_EnableHighlight_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}