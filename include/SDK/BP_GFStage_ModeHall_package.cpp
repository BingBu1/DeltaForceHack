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
	 * 	Name: PredefinedFunction UBP_GFStage_ModeHall_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_GFStage_ModeHall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x47\x46\x53\x74\x61\x67\x65\x5f\x4d\x6f\x64\x65\x48\x61\x6c\x6c\x2e\x42\x50\x5f\x47\x46\x53\x74\x61\x67\x65\x5f\x4d\x6f\x64\x65\x48\x61\x6c\x6c\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_GFStage_ModeHall.BP_GFStage_ModeHall_C.OnLuaGameFlowEvent_9ADB33C24BAA9C2FE105F8AEDFE4D245
	 * 	Flags: (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GFStage_ModeHall_C::OnLuaGameFlowEvent_9ADB33C24BAA9C2FE105F8AEDFE4D245(struct FString ArgStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x47\x46\x53\x74\x61\x67\x65\x5f\x4d\x6f\x64\x65\x48\x61\x6c\x6c\x2e\x42\x50\x5f\x47\x46\x53\x74\x61\x67\x65\x5f\x4d\x6f\x64\x65\x48\x61\x6c\x6c\x5f\x43\x2e\x4f\x6e\x4c\x75\x61\x47\x61\x6d\x65\x46\x6c\x6f\x77\x45\x76\x65\x6e\x74\x5f\x39\x41\x44\x42\x33\x33\x43\x32\x34\x42\x41\x41\x39\x43\x32\x46\x45\x31\x30\x35\x46\x38\x41\x45\x44\x46\x45\x34\x44\x32\x34\x35");
		Function_BP_GFStage_ModeHall_BP_GFStage_ModeHall_C_OnLuaGameFlowEvent_9ADB33C24BAA9C2FE105F8AEDFE4D245_Param params { };
		params.ArgStr = ArgStr;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}