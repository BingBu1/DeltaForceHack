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
	 * 	Name: PredefinedFunction UDLSSLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDLSSLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x4c\x53\x53\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x2e\x44\x4c\x53\x53\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
	 * 	Flags: (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 */
	void UDLSSLibrary::STATIC_SetDLSSSharpness(float Sharpness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x4c\x53\x53\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x2e\x44\x4c\x53\x53\x4c\x69\x62\x72\x61\x72\x79\x2e\x53\x65\x74\x44\x4c\x53\x53\x53\x68\x61\x72\x70\x6e\x65\x73\x73");
		Function_DLSSBlueprint_DLSSLibrary_SetDLSSSharpness_Param params { };
		params.Sharpness = Sharpness;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}