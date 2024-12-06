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
	 * 	Name: PredefinedFunction UBP_EditorInitMainGameFlow_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_EditorInitMainGameFlow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x45\x64\x69\x74\x6f\x72\x49\x6e\x69\x74\x4d\x61\x69\x6e\x47\x61\x6d\x65\x46\x6c\x6f\x77\x2e\x42\x50\x5f\x45\x64\x69\x74\x6f\x72\x49\x6e\x69\x74\x4d\x61\x69\x6e\x47\x61\x6d\x65\x46\x6c\x6f\x77\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_EditorInitMainGameFlow.BP_EditorInitMainGameFlow_C.OnBeginFlow
	 * 	Flags: (Event, Public, BlueprintEvent)
	 */
	void UBP_EditorInitMainGameFlow_C::OnBeginFlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x45\x64\x69\x74\x6f\x72\x49\x6e\x69\x74\x4d\x61\x69\x6e\x47\x61\x6d\x65\x46\x6c\x6f\x77\x2e\x42\x50\x5f\x45\x64\x69\x74\x6f\x72\x49\x6e\x69\x74\x4d\x61\x69\x6e\x47\x61\x6d\x65\x46\x6c\x6f\x77\x5f\x43\x2e\x4f\x6e\x42\x65\x67\x69\x6e\x46\x6c\x6f\x77");
		Function_BP_EditorInitMainGameFlow_BP_EditorInitMainGameFlow_C_OnBeginFlow_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}