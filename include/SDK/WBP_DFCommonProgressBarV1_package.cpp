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
	 * 	Name: PredefinedFunction UWBP_DFCommonProgressBarV1_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_DFCommonProgressBarV1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x50\x72\x6f\x67\x72\x65\x73\x73\x42\x61\x72\x56\x31\x2e\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x50\x72\x6f\x67\x72\x65\x73\x73\x42\x61\x72\x56\x31\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function WBP_DFCommonProgressBarV1.WBP_DFCommonProgressBarV1_C.SetProgressMask
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DFCommonProgressBarV1_C::SetProgressMask(bool bHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x50\x72\x6f\x67\x72\x65\x73\x73\x42\x61\x72\x56\x31\x2e\x57\x42\x50\x5f\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x50\x72\x6f\x67\x72\x65\x73\x73\x42\x61\x72\x56\x31\x5f\x43\x2e\x53\x65\x74\x50\x72\x6f\x67\x72\x65\x73\x73\x4d\x61\x73\x6b");
		Function_WBP_DFCommonProgressBarV1_WBP_DFCommonProgressBarV1_C_SetProgressMask_Param params { };
		params.bHide = bHide;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}