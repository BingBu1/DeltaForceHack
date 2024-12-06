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
	 * 	Name: PredefinedFunction ABP_OldcityS3_ArmoredCar_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_OldcityS3_ArmoredCar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x4f\x6c\x64\x63\x69\x74\x79\x53\x33\x5f\x41\x72\x6d\x6f\x72\x65\x64\x43\x61\x72\x2e\x42\x50\x5f\x4f\x6c\x64\x63\x69\x74\x79\x53\x33\x5f\x41\x72\x6d\x6f\x72\x65\x64\x43\x61\x72\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0740000
	 * 	Name: Function BP_OldcityS3_ArmoredCar.BP_OldcityS3_ArmoredCar_C.IsPawnTeammate
	 * 	Flags: (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABP_OldcityS3_ArmoredCar_C::IsPawnTeammate(struct APawn* CHARACTER)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x4f\x6c\x64\x63\x69\x74\x79\x53\x33\x5f\x41\x72\x6d\x6f\x72\x65\x64\x43\x61\x72\x2e\x42\x50\x5f\x4f\x6c\x64\x63\x69\x74\x79\x53\x33\x5f\x41\x72\x6d\x6f\x72\x65\x64\x43\x61\x72\x5f\x43\x2e\x49\x73\x50\x61\x77\x6e\x54\x65\x61\x6d\x6d\x61\x74\x65");
		Function_BP_OldcityS3_ArmoredCar_BP_OldcityS3_ArmoredCar_C_IsPawnTeammate_Param params { };
		params.CHARACTER = CHARACTER;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}