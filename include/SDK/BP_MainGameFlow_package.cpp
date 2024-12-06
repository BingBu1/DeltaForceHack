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
	 * 	Name: PredefinedFunction UBP_MainGameFlow_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_MainGameFlow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x4d\x61\x69\x6e\x47\x61\x6d\x65\x46\x6c\x6f\x77\x2e\x42\x50\x5f\x4d\x61\x69\x6e\x47\x61\x6d\x65\x46\x6c\x6f\x77\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_MainGameFlow.BP_MainGameFlow_C.ReturnLoginOrExitClient
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainGameFlow_C::ReturnLoginOrExitClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x4d\x61\x69\x6e\x47\x61\x6d\x65\x46\x6c\x6f\x77\x2e\x42\x50\x5f\x4d\x61\x69\x6e\x47\x61\x6d\x65\x46\x6c\x6f\x77\x5f\x43\x2e\x52\x65\x74\x75\x72\x6e\x4c\x6f\x67\x69\x6e\x4f\x72\x45\x78\x69\x74\x43\x6c\x69\x65\x6e\x74");
		Function_BP_MainGameFlow_BP_MainGameFlow_C_ReturnLoginOrExitClient_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}