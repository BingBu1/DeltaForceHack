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
	 * 	Name: PredefinedFunction USetPlatformStyle_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USetPlatformStyle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x53\x65\x74\x50\x6c\x61\x74\x66\x6f\x72\x6d\x53\x74\x79\x6c\x65\x2e\x53\x65\x74\x50\x6c\x61\x74\x66\x6f\x72\x6d\x53\x74\x79\x6c\x65\x5f\x43");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function SetPlatformStyle.SetPlatformStyle_C.SetCommonPressed
	 * 	Flags: (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USetPlatformStyle_C::STATIC_SetCommonPressed(struct UImage* Image, struct UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x65\x74\x50\x6c\x61\x74\x66\x6f\x72\x6d\x53\x74\x79\x6c\x65\x2e\x53\x65\x74\x50\x6c\x61\x74\x66\x6f\x72\x6d\x53\x74\x79\x6c\x65\x5f\x43\x2e\x53\x65\x74\x43\x6f\x6d\x6d\x6f\x6e\x50\x72\x65\x73\x73\x65\x64");
		Function_SetPlatformStyle_SetPlatformStyle_C_SetCommonPressed_Param params { };
		params.Image = Image;
		params.__WorldContext = __WorldContext;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}