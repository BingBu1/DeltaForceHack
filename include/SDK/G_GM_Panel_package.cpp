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
	 * 	Name: PredefinedFunction UG_GM_Panel_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UG_GM_Panel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x47\x5f\x47\x4d\x5f\x50\x61\x6e\x65\x6c\x2e\x47\x5f\x47\x4d\x5f\x50\x61\x6e\x65\x6c\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0780065
	 * 	Name: Function G_GM_Panel.G_GM_Panel_C.Construct
	 * 	Flags: (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UG_GM_Panel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x5f\x47\x4d\x5f\x50\x61\x6e\x65\x6c\x2e\x47\x5f\x47\x4d\x5f\x50\x61\x6e\x65\x6c\x5f\x43\x2e\x43\x6f\x6e\x73\x74\x72\x75\x63\x74");
		Function_G_GM_Panel_G_GM_Panel_C_Construct_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}