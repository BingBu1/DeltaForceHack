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
	 * 	Name: PredefinedFunction ABP_TestPlayerCameraManager_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_TestPlayerCameraManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x54\x65\x73\x74\x50\x6c\x61\x79\x65\x72\x43\x61\x6d\x65\x72\x61\x4d\x61\x6e\x61\x67\x65\x72\x2e\x42\x50\x5f\x54\x65\x73\x74\x50\x6c\x61\x79\x65\x72\x43\x61\x6d\x65\x72\x61\x4d\x61\x6e\x61\x67\x65\x72\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_TestPlayerCameraManager.BP_TestPlayerCameraManager_C.BP_GetCameraOffset
	 * 	Flags: (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FVector ABP_TestPlayerCameraManager_C::BP_GetCameraOffset(float ScopeHeight, float ScopeRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x54\x65\x73\x74\x50\x6c\x61\x79\x65\x72\x43\x61\x6d\x65\x72\x61\x4d\x61\x6e\x61\x67\x65\x72\x2e\x42\x50\x5f\x54\x65\x73\x74\x50\x6c\x61\x79\x65\x72\x43\x61\x6d\x65\x72\x61\x4d\x61\x6e\x61\x67\x65\x72\x5f\x43\x2e\x42\x50\x5f\x47\x65\x74\x43\x61\x6d\x65\x72\x61\x4f\x66\x66\x73\x65\x74");
		Function_BP_TestPlayerCameraManager_BP_TestPlayerCameraManager_C_BP_GetCameraOffset_Param params { };
		params.ScopeHeight = ScopeHeight;
		params.ScopeRadius = ScopeRadius;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}