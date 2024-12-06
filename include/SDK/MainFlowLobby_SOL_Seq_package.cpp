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
	 * 	Name: PredefinedFunction USequenceDirector_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USequenceDirector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x4d\x61\x69\x6e\x46\x6c\x6f\x77\x4c\x6f\x62\x62\x79\x5f\x53\x4f\x4c\x5f\x53\x65\x71\x2e\x53\x65\x71\x75\x65\x6e\x63\x65\x44\x69\x72\x65\x63\x74\x6f\x72\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000044
	 * 	Name: Function MainFlowLobby_SOL_Seq.SequenceDirector_C.Pause
	 * 	Flags: (BlueprintCallable, BlueprintEvent)
	 */
	void USequenceDirector_C::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x61\x69\x6e\x46\x6c\x6f\x77\x4c\x6f\x62\x62\x79\x5f\x53\x4f\x4c\x5f\x53\x65\x71\x2e\x53\x65\x71\x75\x65\x6e\x63\x65\x44\x69\x72\x65\x63\x74\x6f\x72\x5f\x43\x2e\x50\x61\x75\x73\x65");
		Function_MainFlowLobby_SOL_Seq_SequenceDirector_C_Pause_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}