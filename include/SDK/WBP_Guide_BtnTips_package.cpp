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
	 * 	Name: PredefinedFunction UWBP_Guide_BtnTips_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_Guide_BtnTips_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x47\x75\x69\x64\x65\x5f\x42\x74\x6e\x54\x69\x70\x73\x2e\x57\x42\x50\x5f\x47\x75\x69\x64\x65\x5f\x42\x74\x6e\x54\x69\x70\x73\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC000003E
	 * 	Name: Function WBP_Guide_BtnTips.WBP_Guide_BtnTips_C.Set_Multiple
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_Guide_BtnTips_C::Set_Multiple()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x47\x75\x69\x64\x65\x5f\x42\x74\x6e\x54\x69\x70\x73\x2e\x57\x42\x50\x5f\x47\x75\x69\x64\x65\x5f\x42\x74\x6e\x54\x69\x70\x73\x5f\x43\x2e\x53\x65\x74\x5f\x4d\x75\x6c\x74\x69\x70\x6c\x65");
		Function_WBP_Guide_BtnTips_WBP_Guide_BtnTips_C_Set_Multiple_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}