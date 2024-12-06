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
	 * 	Name: PredefinedFunction ABP_SafeHouseHelicopter_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_SafeHouseHelicopter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x2e\x42\x50\x5f\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XBFFFFFFF
	 * 	Name: Function BP_SafeHouseHelicopter.BP_SafeHouseHelicopter_C.DeactiveSmokeFX
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_SafeHouseHelicopter_C::DeactiveSmokeFX(bool Dense)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x2e\x42\x50\x5f\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x5f\x43\x2e\x44\x65\x61\x63\x74\x69\x76\x65\x53\x6d\x6f\x6b\x65\x46\x58");
		Function_BP_SafeHouseHelicopter_BP_SafeHouseHelicopter_C_DeactiveSmokeFX_Param params { };
		params.Dense = Dense;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}