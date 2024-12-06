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
	 * 	Name: PredefinedFunction UWaterfallScrollView.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWaterfallScrollView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x57\x61\x74\x65\x72\x46\x61\x6c\x6c\x53\x63\x72\x6f\x6c\x6c\x42\x6f\x78\x2e\x57\x61\x74\x65\x72\x66\x61\x6c\x6c\x53\x63\x72\x6f\x6c\x6c\x56\x69\x65\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function WaterFallScrollBox.WaterfallScrollView.SetScrollOffset
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UWaterfallScrollView::SetScrollOffset(float NewScrollOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x61\x74\x65\x72\x46\x61\x6c\x6c\x53\x63\x72\x6f\x6c\x6c\x42\x6f\x78\x2e\x57\x61\x74\x65\x72\x66\x61\x6c\x6c\x53\x63\x72\x6f\x6c\x6c\x56\x69\x65\x77\x2e\x53\x65\x74\x53\x63\x72\x6f\x6c\x6c\x4f\x66\x66\x73\x65\x74");
		Function_WaterFallScrollBox_WaterfallScrollView_SetScrollOffset_Param params { };
		params.NewScrollOffset = NewScrollOffset;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}