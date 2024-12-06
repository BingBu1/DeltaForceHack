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
	 * 	Name: PredefinedFunction ABP_StreamingTriggerBase_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ABP_StreamingTriggerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x54\x72\x69\x67\x67\x65\x72\x42\x61\x73\x65\x2e\x42\x50\x5f\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x54\x72\x69\x67\x67\x65\x72\x42\x61\x73\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BP_StreamingTriggerBase.BP_StreamingTriggerBase_C.加载完成回调
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_StreamingTriggerBase_C::加载完成回调()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x54\x72\x69\x67\x67\x65\x72\x42\x61\x73\x65\x2e\x42\x50\x5f\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x54\x72\x69\x67\x67\x65\x72\x42\x61\x73\x65\x5f\x43\x2e\xe5\x8a\xa0\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe5\x9b\x9e\xe8\xb0\x83");
		Function_BP_StreamingTriggerBase_BP_StreamingTriggerBase_C_加载完成回调_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}