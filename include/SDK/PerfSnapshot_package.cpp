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
	 * 	Name: PredefinedFunction UPerfSnapshotBlueprintFunctionLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UPerfSnapshotBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x50\x65\x72\x66\x53\x6e\x61\x70\x73\x68\x6f\x74\x2e\x50\x65\x72\x66\x53\x6e\x61\x70\x73\x68\x6f\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x46\x75\x6e\x63\x74\x69\x6f\x6e\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function PerfSnapshot.PerfSnapshotBlueprintFunctionLibrary.StopPerfSnapshot
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UPerfSnapshotBlueprintFunctionLibrary::STATIC_StopPerfSnapshot(struct UObject* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x50\x65\x72\x66\x53\x6e\x61\x70\x73\x68\x6f\x74\x2e\x50\x65\x72\x66\x53\x6e\x61\x70\x73\x68\x6f\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x46\x75\x6e\x63\x74\x69\x6f\x6e\x4c\x69\x62\x72\x61\x72\x79\x2e\x53\x74\x6f\x70\x50\x65\x72\x66\x53\x6e\x61\x70\x73\x68\x6f\x74");
		Function_PerfSnapshot_PerfSnapshotBlueprintFunctionLibrary_StopPerfSnapshot_Param params { };
		params.WorldContext = WorldContext;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}