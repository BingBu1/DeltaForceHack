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
	 * 	Name: PredefinedFunction UWBP_AssemblyDefaultMain_PC_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_AssemblyDefaultMain_PC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x41\x73\x73\x65\x6d\x62\x6c\x79\x44\x65\x66\x61\x75\x6c\x74\x4d\x61\x69\x6e\x5f\x50\x43\x2e\x57\x42\x50\x5f\x41\x73\x73\x65\x6d\x62\x6c\x79\x44\x65\x66\x61\x75\x6c\x74\x4d\x61\x69\x6e\x5f\x50\x43\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000064
	 * 	Name: Function WBP_AssemblyDefaultMain_PC.WBP_AssemblyDefaultMain_PC_C.Bp_SetPosition
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_AssemblyDefaultMain_PC_C::Bp_SetPosition(int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x57\x42\x50\x5f\x41\x73\x73\x65\x6d\x62\x6c\x79\x44\x65\x66\x61\x75\x6c\x74\x4d\x61\x69\x6e\x5f\x50\x43\x2e\x57\x42\x50\x5f\x41\x73\x73\x65\x6d\x62\x6c\x79\x44\x65\x66\x61\x75\x6c\x74\x4d\x61\x69\x6e\x5f\x50\x43\x5f\x43\x2e\x42\x70\x5f\x53\x65\x74\x50\x6f\x73\x69\x74\x69\x6f\x6e");
		Function_WBP_AssemblyDefaultMain_PC_WBP_AssemblyDefaultMain_PC_C_Bp_SetPosition_Param params { };
		params.Num = Num;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}