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
	 * 	Name: PredefinedFunction UDetailsRuntimeView.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDetailsRuntimeView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x50\x72\x6f\x70\x65\x72\x74\x79\x52\x75\x6e\x74\x69\x6d\x65\x2e\x44\x65\x74\x61\x69\x6c\x73\x52\x75\x6e\x74\x69\x6d\x65\x56\x69\x65\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function PropertyRuntime.DetailsRuntimeView.SetObject
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UDetailsRuntimeView::SetObject(struct UObject* NewObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x50\x72\x6f\x70\x65\x72\x74\x79\x52\x75\x6e\x74\x69\x6d\x65\x2e\x44\x65\x74\x61\x69\x6c\x73\x52\x75\x6e\x74\x69\x6d\x65\x56\x69\x65\x77\x2e\x53\x65\x74\x4f\x62\x6a\x65\x63\x74");
		Function_PropertyRuntime_DetailsRuntimeView_SetObject_Param params { };
		params.NewObject = NewObject;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}