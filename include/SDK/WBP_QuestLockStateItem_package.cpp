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
	 * 	Name: PredefinedFunction UWBP_QuestLockStateItem_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_QuestLockStateItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x51\x75\x65\x73\x74\x4c\x6f\x63\x6b\x53\x74\x61\x74\x65\x49\x74\x65\x6d\x2e\x57\x42\x50\x5f\x51\x75\x65\x73\x74\x4c\x6f\x63\x6b\x53\x74\x61\x74\x65\x49\x74\x65\x6d\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function WBP_QuestLockStateItem.WBP_QuestLockStateItem_C.SetPointVisible
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_QuestLockStateItem_C::SetPointVisible(bool Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x51\x75\x65\x73\x74\x4c\x6f\x63\x6b\x53\x74\x61\x74\x65\x49\x74\x65\x6d\x2e\x57\x42\x50\x5f\x51\x75\x65\x73\x74\x4c\x6f\x63\x6b\x53\x74\x61\x74\x65\x49\x74\x65\x6d\x5f\x43\x2e\x53\x65\x74\x50\x6f\x69\x6e\x74\x56\x69\x73\x69\x62\x6c\x65");
		Function_WBP_QuestLockStateItem_WBP_QuestLockStateItem_C_SetPointVisible_Param params { };
		params.Condition = Condition;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}