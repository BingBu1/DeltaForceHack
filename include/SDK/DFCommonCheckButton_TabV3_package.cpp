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
	 * 	Name: PredefinedFunction UDFCommonCheckButton_TabV3_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFCommonCheckButton_TabV3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x43\x68\x65\x63\x6b\x42\x75\x74\x74\x6f\x6e\x5f\x54\x61\x62\x56\x33\x2e\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x43\x68\x65\x63\x6b\x42\x75\x74\x74\x6f\x6e\x5f\x54\x61\x62\x56\x33\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFCommonCheckButton_TabV3.DFCommonCheckButton_TabV3_C.BP_SetShowSpacerLine
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDFCommonCheckButton_TabV3_C::BP_SetShowSpacerLine(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x43\x68\x65\x63\x6b\x42\x75\x74\x74\x6f\x6e\x5f\x54\x61\x62\x56\x33\x2e\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x43\x68\x65\x63\x6b\x42\x75\x74\x74\x6f\x6e\x5f\x54\x61\x62\x56\x33\x5f\x43\x2e\x42\x50\x5f\x53\x65\x74\x53\x68\x6f\x77\x53\x70\x61\x63\x65\x72\x4c\x69\x6e\x65");
		Function_DFCommonCheckButton_TabV3_DFCommonCheckButton_TabV3_C_BP_SetShowSpacerLine_Param params { };
		params.bShow = bShow;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}