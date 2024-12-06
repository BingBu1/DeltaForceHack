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
	 * 	Name: PredefinedFunction UBP_InHelicopterAction_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_InHelicopterAction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x4d\x4e\x6f\x64\x65\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x49\x6e\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x41\x63\x74\x69\x6f\x6e\x2e\x42\x50\x5f\x49\x6e\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x41\x63\x74\x69\x6f\x6e\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XE4D2B312
	 * 	Name: Function BP_InHelicopterAction.BP_InHelicopterAction_C.AttachHelicopterLighting
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_InHelicopterAction_C::AttachHelicopterLighting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x49\x6e\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x41\x63\x74\x69\x6f\x6e\x2e\x42\x50\x5f\x49\x6e\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x41\x63\x74\x69\x6f\x6e\x5f\x43\x2e\x41\x74\x74\x61\x63\x68\x48\x65\x6c\x69\x63\x6f\x70\x74\x65\x72\x4c\x69\x67\x68\x74\x69\x6e\x67");
		Function_BP_InHelicopterAction_BP_InHelicopterAction_C_AttachHelicopterLighting_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}