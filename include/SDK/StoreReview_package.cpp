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
	 * 	Name: PredefinedFunction UIStoreReview.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UIStoreReview::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x74\x6f\x72\x65\x52\x65\x76\x69\x65\x77\x2e\x49\x53\x74\x6f\x72\x65\x52\x65\x76\x69\x65\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UIOSStoreReview.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UIOSStoreReview::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x74\x6f\x72\x65\x52\x65\x76\x69\x65\x77\x2e\x49\x4f\x53\x53\x74\x6f\x72\x65\x52\x65\x76\x69\x65\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function StoreReview.IStoreReview.ShowStoreReview
	 * 	Flags: (Native, Public, BlueprintCallable)
	 */
	void UIStoreReview::ShowStoreReview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x74\x6f\x72\x65\x52\x65\x76\x69\x65\x77\x2e\x49\x53\x74\x6f\x72\x65\x52\x65\x76\x69\x65\x77\x2e\x53\x68\x6f\x77\x53\x74\x6f\x72\x65\x52\x65\x76\x69\x65\x77");
		Function_StoreReview_IStoreReview_ShowStoreReview_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}