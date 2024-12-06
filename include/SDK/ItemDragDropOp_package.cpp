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
	 * 	Name: PredefinedFunction UItemDragDropOp_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UItemDragDropOp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x49\x74\x65\x6d\x44\x72\x61\x67\x44\x72\x6f\x70\x4f\x70\x2e\x49\x74\x65\x6d\x44\x72\x61\x67\x44\x72\x6f\x70\x4f\x70\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function ItemDragDropOp.ItemDragDropOp_C.ItemLuaCall
	 * 	Flags: (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UItemDragDropOp_C::ItemLuaCall(struct FString FuncName, struct FPointerEvent PointerEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x49\x74\x65\x6d\x44\x72\x61\x67\x44\x72\x6f\x70\x4f\x70\x2e\x49\x74\x65\x6d\x44\x72\x61\x67\x44\x72\x6f\x70\x4f\x70\x5f\x43\x2e\x49\x74\x65\x6d\x4c\x75\x61\x43\x61\x6c\x6c");
		Function_ItemDragDropOp_ItemDragDropOp_C_ItemLuaCall_Param params { };
		params.FuncName = FuncName;
		params.PointerEvent = PointerEvent;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}