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
	 * 	Name: PredefinedFunction UBP_GetOnHelicopterAction_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_GetOnHelicopterAction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x47\x65\x74\x4f\x6e\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x41\x63\x74\x69\x6f\x6e\x2e\x42\x50\x5f\x47\x65\x74\x4f\x6e\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x41\x63\x74\x69\x6f\x6e\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0640065
	 * 	Name: Function BP_GetOnHelicopterAction.BP_GetOnHelicopterAction_C.ConstructionScript
	 * 	Flags: (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GetOnHelicopterAction_C::ConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x47\x65\x74\x4f\x6e\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x41\x63\x74\x69\x6f\x6e\x2e\x42\x50\x5f\x47\x65\x74\x4f\x6e\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x41\x63\x74\x69\x6f\x6e\x5f\x43\x2e\x43\x6f\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x53\x63\x72\x69\x70\x74");
		Function_BP_GetOnHelicopterAction_BP_GetOnHelicopterAction_C_ConstructionScript_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}