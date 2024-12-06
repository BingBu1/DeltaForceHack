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
	 * 	Name: PredefinedFunction UBP_1PFootstepNotify_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_1PFootstepNotify_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x31\x50\x46\x6f\x6f\x74\x73\x74\x65\x70\x4e\x6f\x74\x69\x66\x79\x2e\x42\x50\x5f\x31\x50\x46\x6f\x6f\x74\x73\x74\x65\x70\x4e\x6f\x74\x69\x66\x79\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_1PFootstepNotify.BP_1PFootstepNotify_C.GetNotifyName
	 * 	Flags: (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FString UBP_1PFootstepNotify_C::GetNotifyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x31\x50\x46\x6f\x6f\x74\x73\x74\x65\x70\x4e\x6f\x74\x69\x66\x79\x2e\x42\x50\x5f\x31\x50\x46\x6f\x6f\x74\x73\x74\x65\x70\x4e\x6f\x74\x69\x66\x79\x5f\x43\x2e\x47\x65\x74\x4e\x6f\x74\x69\x66\x79\x4e\x61\x6d\x65");
		Function_BP_1PFootstepNotify_BP_1PFootstepNotify_C_GetNotifyName_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}