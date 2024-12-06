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
	 * 	Name: PredefinedFunction UBP_StreamingComponent_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_StreamingComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x42\x50\x5f\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC000003E
	 * 	Name: Function BP_StreamingComponent.BP_StreamingComponent_C.@作者
	 * 	Flags: (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_StreamingComponent_C::@作者()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x5f\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x42\x50\x5f\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x5f\x43\x2e\x40\xe4\xbd\x9c\xe8\x80\x85");
		Function_BP_StreamingComponent_BP_StreamingComponent_C_@作者_Param params { };

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}