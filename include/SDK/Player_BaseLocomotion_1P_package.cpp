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
	 * 	Name: PredefinedFunction UPlayer_BaseLocomotion_1P_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UPlayer_BaseLocomotion_1P_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x41\x6e\x69\x6d\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x50\x6c\x61\x79\x65\x72\x5f\x42\x61\x73\x65\x4c\x6f\x63\x6f\x6d\x6f\x74\x69\x6f\x6e\x5f\x31\x50\x2e\x50\x6c\x61\x79\x65\x72\x5f\x42\x61\x73\x65\x4c\x6f\x63\x6f\x6d\x6f\x74\x69\x6f\x6e\x5f\x31\x50\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000070
	 * 	Name: Function Player_BaseLocomotion_1P.Player_BaseLocomotion_1P_C.AnimGraph
	 * 	Flags: (HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayer_BaseLocomotion_1P_C::AnimGraph(struct FPoseLink& AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x50\x6c\x61\x79\x65\x72\x5f\x42\x61\x73\x65\x4c\x6f\x63\x6f\x6d\x6f\x74\x69\x6f\x6e\x5f\x31\x50\x2e\x50\x6c\x61\x79\x65\x72\x5f\x42\x61\x73\x65\x4c\x6f\x63\x6f\x6d\x6f\x74\x69\x6f\x6e\x5f\x31\x50\x5f\x43\x2e\x41\x6e\x69\x6d\x47\x72\x61\x70\x68");
		Function_Player_BaseLocomotion_1P_Player_BaseLocomotion_1P_C_AnimGraph_Param params { };
		params.AnimGraph = AnimGraph;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		AnimGraph = params.AnimGraph;
	}
}