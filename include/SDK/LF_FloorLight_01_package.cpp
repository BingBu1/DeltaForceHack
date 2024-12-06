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
	 * 	Name: PredefinedFunction ALF_FloorLight_01_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ALF_FloorLight_01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x4c\x46\x5f\x46\x6c\x6f\x6f\x72\x4c\x69\x67\x68\x74\x5f\x30\x31\x2e\x4c\x46\x5f\x46\x6c\x6f\x6f\x72\x4c\x69\x67\x68\x74\x5f\x30\x31\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000044
	 * 	Name: Function LF_FloorLight_01.LF_FloorLight_01_C.UserConstructionScript
	 * 	Flags: (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALF_FloorLight_01_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4c\x46\x5f\x46\x6c\x6f\x6f\x72\x4c\x69\x67\x68\x74\x5f\x30\x31\x2e\x4c\x46\x5f\x46\x6c\x6f\x6f\x72\x4c\x69\x67\x68\x74\x5f\x30\x31\x5f\x43\x2e\x55\x73\x65\x72\x43\x6f\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x53\x63\x72\x69\x70\x74");
		Function_LF_FloorLight_01_LF_FloorLight_01_C_UserConstructionScript_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}