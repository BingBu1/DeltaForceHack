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
	 * 	Name: PredefinedFunction ADisplayCtrl_IrisWorld_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ADisplayCtrl_IrisWorld_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x44\x69\x73\x70\x6c\x61\x79\x43\x74\x72\x6c\x5f\x49\x72\x69\x73\x57\x6f\x72\x6c\x64\x5f\x33\x2e\x44\x69\x73\x70\x6c\x61\x79\x43\x74\x72\x6c\x5f\x49\x72\x69\x73\x57\x6f\x72\x6c\x64\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DisplayCtrl_IrisWorld_3.DisplayCtrl_IrisWorld_C.ReceiveBeginPlay
	 * 	Flags: (Event, Protected, BlueprintEvent)
	 */
	void ADisplayCtrl_IrisWorld_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x69\x73\x70\x6c\x61\x79\x43\x74\x72\x6c\x5f\x49\x72\x69\x73\x57\x6f\x72\x6c\x64\x5f\x33\x2e\x44\x69\x73\x70\x6c\x61\x79\x43\x74\x72\x6c\x5f\x49\x72\x69\x73\x57\x6f\x72\x6c\x64\x5f\x43\x2e\x52\x65\x63\x65\x69\x76\x65\x42\x65\x67\x69\x6e\x50\x6c\x61\x79");
		Function_DisplayCtrl_IrisWorld_3_DisplayCtrl_IrisWorld_C_ReceiveBeginPlay_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}