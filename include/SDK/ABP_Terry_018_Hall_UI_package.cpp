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
	 * 	Name: PredefinedFunction UABP_Terry_018_Hall_UI_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UABP_Terry_018_Hall_UI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x41\x6e\x69\x6d\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x41\x42\x50\x5f\x54\x65\x72\x72\x79\x5f\x30\x31\x38\x5f\x48\x61\x6c\x6c\x5f\x55\x49\x2e\x41\x42\x50\x5f\x54\x65\x72\x72\x79\x5f\x30\x31\x38\x5f\x48\x61\x6c\x6c\x5f\x55\x49\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000044
	 * 	Name: Function ABP_Terry_018_Hall_UI.ABP_Terry_018_Hall_UI_C.AnimGraph
	 * 	Flags: (HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UABP_Terry_018_Hall_UI_C::AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x41\x42\x50\x5f\x54\x65\x72\x72\x79\x5f\x30\x31\x38\x5f\x48\x61\x6c\x6c\x5f\x55\x49\x2e\x41\x42\x50\x5f\x54\x65\x72\x72\x79\x5f\x30\x31\x38\x5f\x48\x61\x6c\x6c\x5f\x55\x49\x5f\x43\x2e\x41\x6e\x69\x6d\x47\x72\x61\x70\x68");
		Function_ABP_Terry_018_Hall_UI_ABP_Terry_018_Hall_UI_C_AnimGraph_Param params { };
		params.InPose = InPose;
		params.AnimGraph = AnimGraph;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		AnimGraph = params.AnimGraph;
	}
}