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
	 * 	Name: PredefinedFunction ABP_CutSceneBase_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_CutSceneBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x43\x75\x74\x53\x63\x65\x6e\x65\x42\x61\x73\x65\x2e\x42\x50\x5f\x43\x75\x74\x53\x63\x65\x6e\x65\x42\x61\x73\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000074
	 * 	Name: Function BP_CutSceneBase.BP_CutSceneBase_C.LeaveCutSceneHud
	 * 	Flags: (Event, Public, BlueprintEvent)
	 */
	void ABP_CutSceneBase_C::LeaveCutSceneHud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x43\x75\x74\x53\x63\x65\x6e\x65\x42\x61\x73\x65\x2e\x42\x50\x5f\x43\x75\x74\x53\x63\x65\x6e\x65\x42\x61\x73\x65\x5f\x43\x2e\x4c\x65\x61\x76\x65\x43\x75\x74\x53\x63\x65\x6e\x65\x48\x75\x64");
		Function_BP_CutSceneBase_BP_CutSceneBase_C_LeaveCutSceneHud_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}