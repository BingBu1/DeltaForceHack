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
	 * 	Name: PredefinedFunction UWBP_BattlePass_Branch_PC_S_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_BattlePass_Branch_PC_S_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x42\x61\x74\x74\x6c\x65\x50\x61\x73\x73\x5f\x42\x72\x61\x6e\x63\x68\x5f\x50\x43\x5f\x53\x2e\x57\x42\x50\x5f\x42\x61\x74\x74\x6c\x65\x50\x61\x73\x73\x5f\x42\x72\x61\x6e\x63\x68\x5f\x50\x43\x5f\x53\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000044
	 * 	Name: Function WBP_BattlePass_Branch_PC_S.WBP_BattlePass_Branch_PC_S_C.SetLock
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_BattlePass_Branch_PC_S_C::SetLock(bool Lock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x42\x61\x74\x74\x6c\x65\x50\x61\x73\x73\x5f\x42\x72\x61\x6e\x63\x68\x5f\x50\x43\x5f\x53\x2e\x57\x42\x50\x5f\x42\x61\x74\x74\x6c\x65\x50\x61\x73\x73\x5f\x42\x72\x61\x6e\x63\x68\x5f\x50\x43\x5f\x53\x5f\x43\x2e\x53\x65\x74\x4c\x6f\x63\x6b");
		Function_WBP_BattlePass_Branch_PC_S_WBP_BattlePass_Branch_PC_S_C_SetLock_Param params { };
		params.Lock = Lock;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}