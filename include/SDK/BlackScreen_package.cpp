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
	 * 	Name: PredefinedFunction UBlackScreen_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBlackScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x6c\x61\x63\x6b\x53\x63\x72\x65\x65\x6e\x2e\x42\x6c\x61\x63\x6b\x53\x63\x72\x65\x65\x6e\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X9DCB8669
	 * 	Name: Function BlackScreen.BlackScreen_C.Finished_E5DA7A8141C1FBA8799AF2A4B755579B
	 * 	Flags: (BlueprintCallable, BlueprintEvent)
	 */
	void UBlackScreen_C::Finished_E5DA7A8141C1FBA8799AF2A4B755579B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x6c\x61\x63\x6b\x53\x63\x72\x65\x65\x6e\x2e\x42\x6c\x61\x63\x6b\x53\x63\x72\x65\x65\x6e\x5f\x43\x2e\x46\x69\x6e\x69\x73\x68\x65\x64\x5f\x45\x35\x44\x41\x37\x41\x38\x31\x34\x31\x43\x31\x46\x42\x41\x38\x37\x39\x39\x41\x46\x32\x41\x34\x42\x37\x35\x35\x35\x37\x39\x42");
		Function_BlackScreen_BlackScreen_C_Finished_E5DA7A8141C1FBA8799AF2A4B755579B_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}