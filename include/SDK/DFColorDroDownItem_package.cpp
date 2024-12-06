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
	 * 	Name: PredefinedFunction UDFColorDroDownItem_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFColorDroDownItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x44\x46\x43\x6f\x6c\x6f\x72\x44\x72\x6f\x44\x6f\x77\x6e\x49\x74\x65\x6d\x2e\x44\x46\x43\x6f\x6c\x6f\x72\x44\x72\x6f\x44\x6f\x77\x6e\x49\x74\x65\x6d\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0740065
	 * 	Name: Function DFColorDroDownItem.DFColorDroDownItem_C.InitColorMap
	 * 	Flags: (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UDFColorDroDownItem_C::InitColorMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x43\x6f\x6c\x6f\x72\x44\x72\x6f\x44\x6f\x77\x6e\x49\x74\x65\x6d\x2e\x44\x46\x43\x6f\x6c\x6f\x72\x44\x72\x6f\x44\x6f\x77\x6e\x49\x74\x65\x6d\x5f\x43\x2e\x49\x6e\x69\x74\x43\x6f\x6c\x6f\x72\x4d\x61\x70");
		Function_DFColorDroDownItem_DFColorDroDownItem_C_InitColorMap_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}