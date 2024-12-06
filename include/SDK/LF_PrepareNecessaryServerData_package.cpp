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
	 * 	Name: PredefinedFunction ULF_PrepareNecessaryServerData_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULF_PrepareNecessaryServerData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x4c\x46\x5f\x50\x72\x65\x70\x61\x72\x65\x4e\x65\x63\x65\x73\x73\x61\x72\x79\x53\x65\x72\x76\x65\x72\x44\x61\x74\x61\x2e\x4c\x46\x5f\x50\x72\x65\x70\x61\x72\x65\x4e\x65\x63\x65\x73\x73\x61\x72\x79\x53\x65\x72\x76\x65\x72\x44\x61\x74\x61\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function LF_PrepareNecessaryServerData.LF_PrepareNecessaryServerData_C.BP_Init
	 * 	Flags: (Event, Public, BlueprintEvent)
	 */
	void ULF_PrepareNecessaryServerData_C::BP_Init(struct UDFMFlowManager* inFlowManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4c\x46\x5f\x50\x72\x65\x70\x61\x72\x65\x4e\x65\x63\x65\x73\x73\x61\x72\x79\x53\x65\x72\x76\x65\x72\x44\x61\x74\x61\x2e\x4c\x46\x5f\x50\x72\x65\x70\x61\x72\x65\x4e\x65\x63\x65\x73\x73\x61\x72\x79\x53\x65\x72\x76\x65\x72\x44\x61\x74\x61\x5f\x43\x2e\x42\x50\x5f\x49\x6e\x69\x74");
		Function_LF_PrepareNecessaryServerData_LF_PrepareNecessaryServerData_C_BP_Init_Param params { };
		params.inFlowManager = inFlowManager;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}