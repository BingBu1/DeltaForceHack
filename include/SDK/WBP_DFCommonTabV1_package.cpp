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
	 * 	Name: PredefinedFunction UWBP_DFCommonTabV1_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_DFCommonTabV1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x54\x61\x62\x56\x31\x2e\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x54\x61\x62\x56\x31\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000044
	 * 	Name: Function WBP_DFCommonTabV1.WBP_DFCommonTabV1_C.BP_SetShowSpacerLine
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DFCommonTabV1_C::BP_SetShowSpacerLine(bool bShowSpacerLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x54\x61\x62\x56\x31\x2e\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x54\x61\x62\x56\x31\x5f\x43\x2e\x42\x50\x5f\x53\x65\x74\x53\x68\x6f\x77\x53\x70\x61\x63\x65\x72\x4c\x69\x6e\x65");
		Function_WBP_DFCommonTabV1_WBP_DFCommonTabV1_C_BP_SetShowSpacerLine_Param params { };
		params.bShowSpacerLine = bShowSpacerLine;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}