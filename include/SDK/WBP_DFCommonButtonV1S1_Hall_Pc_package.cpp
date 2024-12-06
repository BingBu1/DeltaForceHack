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
	 * 	Name: PredefinedFunction UWBP_DFCommonButtonV1S1_Hall_Pc_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_DFCommonButtonV1S1_Hall_Pc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x42\x75\x74\x74\x6f\x6e\x56\x31\x53\x31\x5f\x48\x61\x6c\x6c\x5f\x50\x63\x2e\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x42\x75\x74\x74\x6f\x6e\x56\x31\x53\x31\x5f\x48\x61\x6c\x6c\x5f\x50\x63\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000044
	 * 	Name: Function WBP_DFCommonButtonV1S1_Hall_Pc.WBP_DFCommonButtonV1S1_Hall_Pc_C.GetDisabledStyle
	 * 	Flags: (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DFCommonButtonV1S1_Hall_Pc_C::GetDisabledStyle(struct FButtonStyle& disabledStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x42\x75\x74\x74\x6f\x6e\x56\x31\x53\x31\x5f\x48\x61\x6c\x6c\x5f\x50\x63\x2e\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x42\x75\x74\x74\x6f\x6e\x56\x31\x53\x31\x5f\x48\x61\x6c\x6c\x5f\x50\x63\x5f\x43\x2e\x47\x65\x74\x44\x69\x73\x61\x62\x6c\x65\x64\x53\x74\x79\x6c\x65");
		Function_WBP_DFCommonButtonV1S1_Hall_Pc_WBP_DFCommonButtonV1S1_Hall_Pc_C_GetDisabledStyle_Param params { };
		params.disabledStyle = disabledStyle;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		disabledStyle = params.disabledStyle;
	}
}