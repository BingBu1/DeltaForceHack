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
	 * 	Name: PredefinedFunction USequenceDirector_C_def10.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USequenceDirector_C_def10::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x46\x5f\x4c\x75\x6e\x61\x5f\x30\x31\x34\x5f\x48\x61\x6c\x6c\x53\x65\x71\x5f\x54\x65\x61\x6d\x5f\x48\x44\x2e\x53\x65\x71\x75\x65\x6e\x63\x65\x44\x69\x72\x65\x63\x74\x6f\x72\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000044
	 * 	Name: Function F_Luna_014_HallSeq_Team_HD.SequenceDirector_C.SetDisplayCharacterLookAtEnable_Event_1
	 * 	Flags: (BlueprintCallable, BlueprintEvent)
	 */
	void USequenceDirector_C_def10::SetDisplayCharacterLookAtEnable_Event_1(/*struct UABP_HallCharacterShow_C* ABP_HallCharacterShow_C_1, bool bIsEnable*/)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x46\x5f\x4c\x75\x6e\x61\x5f\x30\x31\x34\x5f\x48\x61\x6c\x6c\x53\x65\x71\x5f\x54\x65\x61\x6d\x5f\x48\x44\x2e\x53\x65\x71\x75\x65\x6e\x63\x65\x44\x69\x72\x65\x63\x74\x6f\x72\x5f\x43\x2e\x53\x65\x74\x44\x69\x73\x70\x6c\x61\x79\x43\x68\x61\x72\x61\x63\x74\x65\x72\x4c\x6f\x6f\x6b\x41\x74\x45\x6e\x61\x62\x6c\x65\x5f\x45\x76\x65\x6e\x74\x5f\x31");
		Function_F_Luna_014_HallSeq_Team_HD_SequenceDirector_C_SetDisplayCharacterLookAtEnable_Event_1_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}