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
	 * 	Name: PredefinedFunction UDFCommonCheckButton_TabV1_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFCommonCheckButton_TabV1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x43\x68\x65\x63\x6b\x42\x75\x74\x74\x6f\x6e\x5f\x54\x61\x62\x56\x31\x2e\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x43\x68\x65\x63\x6b\x42\x75\x74\x74\x6f\x6e\x5f\x54\x61\x62\x56\x31\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFCommonCheckButton_TabV1.DFCommonCheckButton_TabV1_C.BP_SetIsLocked
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDFCommonCheckButton_TabV1_C::BP_SetIsLocked(bool bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x43\x68\x65\x63\x6b\x42\x75\x74\x74\x6f\x6e\x5f\x54\x61\x62\x56\x31\x2e\x44\x46\x43\x6f\x6d\x6d\x6f\x6e\x43\x68\x65\x63\x6b\x42\x75\x74\x74\x6f\x6e\x5f\x54\x61\x62\x56\x31\x5f\x43\x2e\x42\x50\x5f\x53\x65\x74\x49\x73\x4c\x6f\x63\x6b\x65\x64");
		Function_DFCommonCheckButton_TabV1_DFCommonCheckButton_TabV1_C_BP_SetIsLocked_Param params { };
		params.bLocked = bLocked;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}