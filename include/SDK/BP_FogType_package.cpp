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
	 * 	Name: PredefinedFunction ABP_FogType_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_FogType_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x46\x6f\x67\x54\x79\x70\x65\x2e\x42\x50\x5f\x46\x6f\x67\x54\x79\x70\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC00CD785
	 * 	Name: Function BP_FogType.BP_FogType_C.UserConstructionScript
	 * 	Flags: (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FogType_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x46\x6f\x67\x54\x79\x70\x65\x2e\x42\x50\x5f\x46\x6f\x67\x54\x79\x70\x65\x5f\x43\x2e\x55\x73\x65\x72\x43\x6f\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x53\x63\x72\x69\x70\x74");
		Function_BP_FogType_BP_FogType_C_UserConstructionScript_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}