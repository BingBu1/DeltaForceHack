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
	 * 	Name: PredefinedFunction ABP_InventoryPickup_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_InventoryPickup_C::StaticClass()
	{
		static UClass *ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x49\x6e\x76\x65\x6e\x74\x6f\x72\x79\x50\x69\x63\x6b\x75\x70\x2e\x42\x50\x5f\x49\x6e\x76\x65\x6e\x74\x6f\x72\x79\x50\x69\x63\x6b\x75\x70\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_InventoryPickup.BP_InventoryPickup_C.GetBoundsOriginOffset
	 * 	Flags: (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FVector ABP_InventoryPickup_C::GetBoundsOriginOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x49\x6e\x76\x65\x6e\x74\x6f\x72\x79\x50\x69\x63\x6b\x75\x70\x2e\x42\x50\x5f\x49\x6e\x76\x65\x6e\x74\x6f\x72\x79\x50\x69\x63\x6b\x75\x70\x5f\x43\x2e\x47\x65\x74\x42\x6f\x75\x6e\x64\x73\x4f\x72\x69\x67\x69\x6e\x4f\x66\x66\x73\x65\x74");
		Function_BP_InventoryPickup_BP_InventoryPickup_C_GetBoundsOriginOffset_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}