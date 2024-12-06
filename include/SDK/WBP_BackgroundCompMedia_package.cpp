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
	 * 	Name: PredefinedFunction UWBP_BackgroundCompMedia_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_BackgroundCompMedia_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x42\x61\x63\x6b\x67\x72\x6f\x75\x6e\x64\x43\x6f\x6d\x70\x4d\x65\x64\x69\x61\x2e\x57\x42\x50\x5f\x42\x61\x63\x6b\x67\x72\x6f\x75\x6e\x64\x43\x6f\x6d\x70\x4d\x65\x64\x69\x61\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC000004A
	 * 	Name: Function WBP_BackgroundCompMedia.WBP_BackgroundCompMedia_C.BP_SetFadeEffectEnabled
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_BackgroundCompMedia_C::BP_SetFadeEffectEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x42\x61\x63\x6b\x67\x72\x6f\x75\x6e\x64\x43\x6f\x6d\x70\x4d\x65\x64\x69\x61\x2e\x57\x42\x50\x5f\x42\x61\x63\x6b\x67\x72\x6f\x75\x6e\x64\x43\x6f\x6d\x70\x4d\x65\x64\x69\x61\x5f\x43\x2e\x42\x50\x5f\x53\x65\x74\x46\x61\x64\x65\x45\x66\x66\x65\x63\x74\x45\x6e\x61\x62\x6c\x65\x64");
		Function_WBP_BackgroundCompMedia_WBP_BackgroundCompMedia_C_BP_SetFadeEffectEnabled_Param params { };
		params.bEnable = bEnable;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}