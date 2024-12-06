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
	 * 	Name: PredefinedFunction ULogTrackBlueprint.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULogTrackBlueprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4c\x6f\x67\x54\x72\x61\x63\x6b\x2e\x4c\x6f\x67\x54\x72\x61\x63\x6b\x42\x6c\x75\x65\x70\x72\x69\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function LogTrack.LogTrackBlueprint.SetOutputDir
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void ULogTrackBlueprint::STATIC_SetOutputDir(struct FString Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4c\x6f\x67\x54\x72\x61\x63\x6b\x2e\x4c\x6f\x67\x54\x72\x61\x63\x6b\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x2e\x53\x65\x74\x4f\x75\x74\x70\x75\x74\x44\x69\x72");
		Function_LogTrack_LogTrackBlueprint_SetOutputDir_Param params { };
		params.Value = Value;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}