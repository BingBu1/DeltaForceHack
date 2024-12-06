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
	 * 	Name: PredefinedFunction UBP_GFStage_SafeHouse_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_GFStage_SafeHouse_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x47\x46\x53\x74\x61\x67\x65\x5f\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x42\x50\x5f\x47\x46\x53\x74\x61\x67\x65\x5f\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_GFStage_SafeHouse.BP_GFStage_SafeHouse_C.OnLuaGameFlowEvent_7BFCDFD945106BB5C4915481BE2723FF
	 * 	Flags: (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_GFStage_SafeHouse_C::OnLuaGameFlowEvent_7BFCDFD945106BB5C4915481BE2723FF(struct FString ArgStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x47\x46\x53\x74\x61\x67\x65\x5f\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x2e\x42\x50\x5f\x47\x46\x53\x74\x61\x67\x65\x5f\x53\x61\x66\x65\x48\x6f\x75\x73\x65\x5f\x43\x2e\x4f\x6e\x4c\x75\x61\x47\x61\x6d\x65\x46\x6c\x6f\x77\x45\x76\x65\x6e\x74\x5f\x37\x42\x46\x43\x44\x46\x44\x39\x34\x35\x31\x30\x36\x42\x42\x35\x43\x34\x39\x31\x35\x34\x38\x31\x42\x45\x32\x37\x32\x33\x46\x46");
		Function_BP_GFStage_SafeHouse_BP_GFStage_SafeHouse_C_OnLuaGameFlowEvent_7BFCDFD945106BB5C4915481BE2723FF_Param params { };
		params.ArgStr = ArgStr;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}