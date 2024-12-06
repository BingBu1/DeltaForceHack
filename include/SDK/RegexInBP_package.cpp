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
	 * 	Name: PredefinedFunction FRegexExtendedResult.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FRegexExtendedResult::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x52\x65\x67\x65\x78\x49\x6e\x42\x50\x2e\x52\x65\x67\x65\x78\x45\x78\x74\x65\x6e\x64\x65\x64\x52\x65\x73\x75\x6c\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction URegexBPLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* URegexBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x52\x65\x67\x65\x78\x49\x6e\x42\x50\x2e\x52\x65\x67\x65\x78\x42\x50\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function RegexInBP.RegexBPLibrary.MatchExtended
	 * 	Flags: (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
	 */
	struct TArray<struct FRegexExtendedResult> URegexBPLibrary::STATIC_MatchExtended(struct FString pattern, struct FString Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x52\x65\x67\x65\x78\x49\x6e\x42\x50\x2e\x52\x65\x67\x65\x78\x42\x50\x4c\x69\x62\x72\x61\x72\x79\x2e\x4d\x61\x74\x63\x68\x45\x78\x74\x65\x6e\x64\x65\x64");
		Function_RegexInBP_RegexBPLibrary_MatchExtended_Param params { };
		params.pattern = pattern;
		params.Input = Input;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}