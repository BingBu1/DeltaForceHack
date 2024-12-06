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
	 * 	Name: PredefinedFunction USequenceDirector_C_def2.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USequenceDirector_C_def2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x4d\x5f\x54\x65\x72\x72\x79\x5f\x30\x31\x38\x5f\x48\x61\x6c\x6c\x53\x65\x71\x5f\x48\x44\x2e\x53\x65\x71\x75\x65\x6e\x63\x65\x44\x69\x72\x65\x63\x74\x6f\x72\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000044
	 * 	Name: Function M_Terry_018_HallSeq_HD.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_3
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USequenceDirector_C_def2::SequenceEvent__ENTRYPOINTSequenceDirector_3(struct ABP_HallCharacter_C* BP_Hall_Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x5f\x54\x65\x72\x72\x79\x5f\x30\x31\x38\x5f\x48\x61\x6c\x6c\x53\x65\x71\x5f\x48\x44\x2e\x53\x65\x71\x75\x65\x6e\x63\x65\x44\x69\x72\x65\x63\x74\x6f\x72\x5f\x43\x2e\x53\x65\x71\x75\x65\x6e\x63\x65\x45\x76\x65\x6e\x74\x5f\x5f\x45\x4e\x54\x52\x59\x50\x4f\x49\x4e\x54\x53\x65\x71\x75\x65\x6e\x63\x65\x44\x69\x72\x65\x63\x74\x6f\x72\x5f\x33");
		Function_M_Terry_018_HallSeq_HD_SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_3_Param params { };
		params.BP_Hall_Character = BP_Hall_Character;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}