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
	 * 	Name: PredefinedFunction ABP_HallMainDisplayCtrl_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_HallMainDisplayCtrl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x48\x61\x6c\x6c\x4d\x61\x69\x6e\x44\x69\x73\x70\x6c\x61\x79\x43\x74\x72\x6c\x2e\x42\x50\x5f\x48\x61\x6c\x6c\x4d\x61\x69\x6e\x44\x69\x73\x70\x6c\x61\x79\x43\x74\x72\x6c\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0740065
	 * 	Name: Function BP_HallMainDisplayCtrl.BP_HallMainDisplayCtrl_C.InitDisplayType
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HallMainDisplayCtrl_C::InitDisplayType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x48\x61\x6c\x6c\x4d\x61\x69\x6e\x44\x69\x73\x70\x6c\x61\x79\x43\x74\x72\x6c\x2e\x42\x50\x5f\x48\x61\x6c\x6c\x4d\x61\x69\x6e\x44\x69\x73\x70\x6c\x61\x79\x43\x74\x72\x6c\x5f\x43\x2e\x49\x6e\x69\x74\x44\x69\x73\x70\x6c\x61\x79\x54\x79\x70\x65");
		Function_BP_HallMainDisplayCtrl_BP_HallMainDisplayCtrl_C_InitDisplayType_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}