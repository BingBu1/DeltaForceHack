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
	 * 	Name: PredefinedFunction AGunsmith_MS22_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AGunsmith_MS22_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x47\x75\x6e\x73\x6d\x69\x74\x68\x5f\x4d\x53\x32\x32\x2e\x47\x75\x6e\x73\x6d\x69\x74\x68\x5f\x4d\x53\x32\x32\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X8653A1A1
	 * 	Name: Function Gunsmith_MS22.Gunsmith_MS22_C.ReceiveBeginPlay
	 * 	Flags: (Event, Protected, BlueprintEvent)
	 */
	void AGunsmith_MS22_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x75\x6e\x73\x6d\x69\x74\x68\x5f\x4d\x53\x32\x32\x2e\x47\x75\x6e\x73\x6d\x69\x74\x68\x5f\x4d\x53\x32\x32\x5f\x43\x2e\x52\x65\x63\x65\x69\x76\x65\x42\x65\x67\x69\x6e\x50\x6c\x61\x79");
		Function_Gunsmith_MS22_Gunsmith_MS22_C_ReceiveBeginPlay_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}