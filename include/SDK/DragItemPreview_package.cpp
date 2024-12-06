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
	 * 	Name: PredefinedFunction UDragItemPreview_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDragItemPreview_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x44\x72\x61\x67\x49\x74\x65\x6d\x50\x72\x65\x76\x69\x65\x77\x2e\x44\x72\x61\x67\x49\x74\x65\x6d\x50\x72\x65\x76\x69\x65\x77\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DragItemPreview.DragItemPreview_C.Tick
	 * 	Flags: (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDragItemPreview_C::Tick(struct FGeometry MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x72\x61\x67\x49\x74\x65\x6d\x50\x72\x65\x76\x69\x65\x77\x2e\x44\x72\x61\x67\x49\x74\x65\x6d\x50\x72\x65\x76\x69\x65\x77\x5f\x43\x2e\x54\x69\x63\x6b");
		Function_DragItemPreview_DragItemPreview_C_Tick_Param params { };
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}