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
	 * 	Name: PredefinedFunction UM_SamuelAbbas_219_AniBp_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UM_SamuelAbbas_219_AniBp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x41\x6e\x69\x6d\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x4d\x5f\x53\x61\x6d\x75\x65\x6c\x41\x62\x62\x61\x73\x5f\x32\x31\x39\x5f\x41\x6e\x69\x42\x70\x2e\x4d\x5f\x53\x61\x6d\x75\x65\x6c\x41\x62\x62\x61\x73\x5f\x32\x31\x39\x5f\x41\x6e\x69\x42\x70\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000044
	 * 	Name: Function M_SamuelAbbas_219_AniBp.M_SamuelAbbas_219_AniBp_C.AnimGraph
	 * 	Flags: (HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UM_SamuelAbbas_219_AniBp_C::AnimGraph(struct FPoseLink& AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x5f\x53\x61\x6d\x75\x65\x6c\x41\x62\x62\x61\x73\x5f\x32\x31\x39\x5f\x41\x6e\x69\x42\x70\x2e\x4d\x5f\x53\x61\x6d\x75\x65\x6c\x41\x62\x62\x61\x73\x5f\x32\x31\x39\x5f\x41\x6e\x69\x42\x70\x5f\x43\x2e\x41\x6e\x69\x6d\x47\x72\x61\x70\x68");
		Function_M_SamuelAbbas_219_AniBp_M_SamuelAbbas_219_AniBp_C_AnimGraph_Param params { };
		params.AnimGraph = AnimGraph;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		AnimGraph = params.AnimGraph;
	}
}