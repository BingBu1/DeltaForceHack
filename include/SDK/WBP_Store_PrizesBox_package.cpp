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
	 * 	Name: PredefinedFunction UWBP_Store_PrizesBox_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_Store_PrizesBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x53\x74\x6f\x72\x65\x5f\x50\x72\x69\x7a\x65\x73\x42\x6f\x78\x2e\x57\x42\x50\x5f\x53\x74\x6f\x72\x65\x5f\x50\x72\x69\x7a\x65\x73\x42\x6f\x78\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0650073
	 * 	Name: Function WBP_Store_PrizesBox.WBP_Store_PrizesBox_C.ExecuteUbergraph_WBP_Store_PrizesBox
	 * 	Flags: (Final, UbergraphFunction)
	 */
	void UWBP_Store_PrizesBox_C::ExecuteUbergraph_WBP_Store_PrizesBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x53\x74\x6f\x72\x65\x5f\x50\x72\x69\x7a\x65\x73\x42\x6f\x78\x2e\x57\x42\x50\x5f\x53\x74\x6f\x72\x65\x5f\x50\x72\x69\x7a\x65\x73\x42\x6f\x78\x5f\x43\x2e\x45\x78\x65\x63\x75\x74\x65\x55\x62\x65\x72\x67\x72\x61\x70\x68\x5f\x57\x42\x50\x5f\x53\x74\x6f\x72\x65\x5f\x50\x72\x69\x7a\x65\x73\x42\x6f\x78");
		Function_WBP_Store_PrizesBox_WBP_Store_PrizesBox_C_ExecuteUbergraph_WBP_Store_PrizesBox_Param params { };
		params.EntryPoint = EntryPoint;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}