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
	 * 	Name: PredefinedFunction UWBP_Moss_Main_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_Moss_Main_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x4d\x6f\x73\x73\x5f\x4d\x61\x69\x6e\x2e\x57\x42\x50\x5f\x4d\x6f\x73\x73\x5f\x4d\x61\x69\x6e\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0700078
	 * 	Name: Function WBP_Moss_Main.WBP_Moss_Main_C.IsPC
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_Moss_Main_C::IsPC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x4d\x6f\x73\x73\x5f\x4d\x61\x69\x6e\x2e\x57\x42\x50\x5f\x4d\x6f\x73\x73\x5f\x4d\x61\x69\x6e\x5f\x43\x2e\x49\x73\x50\x43");
		Function_WBP_Moss_Main_WBP_Moss_Main_C_IsPC_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}