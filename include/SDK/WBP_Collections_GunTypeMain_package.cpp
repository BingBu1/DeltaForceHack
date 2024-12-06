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
	 * 	Name: PredefinedFunction UWBP_Collections_GunTypeMain_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_Collections_GunTypeMain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x5f\x47\x75\x6e\x54\x79\x70\x65\x4d\x61\x69\x6e\x2e\x57\x42\x50\x5f\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x5f\x47\x75\x6e\x54\x79\x70\x65\x4d\x61\x69\x6e\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function WBP_Collections_GunTypeMain.WBP_Collections_GunTypeMain_C.HideUI
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_Collections_GunTypeMain_C::HideUI(bool Hiding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x5f\x47\x75\x6e\x54\x79\x70\x65\x4d\x61\x69\x6e\x2e\x57\x42\x50\x5f\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x5f\x47\x75\x6e\x54\x79\x70\x65\x4d\x61\x69\x6e\x5f\x43\x2e\x48\x69\x64\x65\x55\x49");
		Function_WBP_Collections_GunTypeMain_WBP_Collections_GunTypeMain_C_HideUI_Param params { };
		params.Hiding = Hiding;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}