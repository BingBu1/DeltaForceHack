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
	 * 	Name: PredefinedFunction UBPIniConfigFunctions.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBPIniConfigFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x42\x50\x49\x6e\x69\x43\x6f\x6e\x66\x69\x67\x48\x65\x6c\x70\x65\x72\x2e\x42\x50\x49\x6e\x69\x43\x6f\x6e\x66\x69\x67\x46\x75\x6e\x63\x74\x69\x6f\x6e\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BPIniConfigHelper.BPIniConfigFunctions.SetStringConfigValue
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UBPIniConfigFunctions::STATIC_SetStringConfigValue(struct FString ConfigKey, struct FString SectionName, struct FString ConfigValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x50\x49\x6e\x69\x43\x6f\x6e\x66\x69\x67\x48\x65\x6c\x70\x65\x72\x2e\x42\x50\x49\x6e\x69\x43\x6f\x6e\x66\x69\x67\x46\x75\x6e\x63\x74\x69\x6f\x6e\x73\x2e\x53\x65\x74\x53\x74\x72\x69\x6e\x67\x43\x6f\x6e\x66\x69\x67\x56\x61\x6c\x75\x65");
		Function_BPIniConfigHelper_BPIniConfigFunctions_SetStringConfigValue_Param params { };
		params.ConfigKey = ConfigKey;
		params.SectionName = SectionName;
		params.ConfigValue = ConfigValue;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}