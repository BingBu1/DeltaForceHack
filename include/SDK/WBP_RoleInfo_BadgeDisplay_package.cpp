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
	 * 	Name: PredefinedFunction UWBP_RoleInfo_BadgeDisplay_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_RoleInfo_BadgeDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x52\x6f\x6c\x65\x49\x6e\x66\x6f\x5f\x42\x61\x64\x67\x65\x44\x69\x73\x70\x6c\x61\x79\x2e\x57\x42\x50\x5f\x52\x6f\x6c\x65\x49\x6e\x66\x6f\x5f\x42\x61\x64\x67\x65\x44\x69\x73\x70\x6c\x61\x79\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000044
	 * 	Name: Function WBP_RoleInfo_BadgeDisplay.WBP_RoleInfo_BadgeDisplay_C.PreConstruct
	 * 	Flags: (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWBP_RoleInfo_BadgeDisplay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x52\x6f\x6c\x65\x49\x6e\x66\x6f\x5f\x42\x61\x64\x67\x65\x44\x69\x73\x70\x6c\x61\x79\x2e\x57\x42\x50\x5f\x52\x6f\x6c\x65\x49\x6e\x66\x6f\x5f\x42\x61\x64\x67\x65\x44\x69\x73\x70\x6c\x61\x79\x5f\x43\x2e\x50\x72\x65\x43\x6f\x6e\x73\x74\x72\x75\x63\x74");
		Function_WBP_RoleInfo_BadgeDisplay_WBP_RoleInfo_BadgeDisplay_C_PreConstruct_Param params { };
		params.IsDesignTime = IsDesignTime;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}