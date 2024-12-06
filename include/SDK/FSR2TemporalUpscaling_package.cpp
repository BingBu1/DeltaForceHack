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
	 * 	Name: PredefinedFunction UFSR2Settings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UFSR2Settings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x46\x53\x52\x32\x54\x65\x6d\x70\x6f\x72\x61\x6c\x55\x70\x73\x63\x61\x6c\x69\x6e\x67\x2e\x46\x53\x52\x32\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UFSR2TemporalUpscalingLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UFSR2TemporalUpscalingLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x46\x53\x52\x32\x54\x65\x6d\x70\x6f\x72\x61\x6c\x55\x70\x73\x63\x61\x6c\x69\x6e\x67\x2e\x46\x53\x52\x32\x54\x65\x6d\x70\x6f\x72\x61\x6c\x55\x70\x73\x63\x61\x6c\x69\x6e\x67\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function FSR2TemporalUpscaling.FSR2TemporalUpscalingLibrary.QueryFSR2Support
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	enum class UFSR2Support UFSR2TemporalUpscalingLibrary::STATIC_QueryFSR2Support()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x46\x53\x52\x32\x54\x65\x6d\x70\x6f\x72\x61\x6c\x55\x70\x73\x63\x61\x6c\x69\x6e\x67\x2e\x46\x53\x52\x32\x54\x65\x6d\x70\x6f\x72\x61\x6c\x55\x70\x73\x63\x61\x6c\x69\x6e\x67\x4c\x69\x62\x72\x61\x72\x79\x2e\x51\x75\x65\x72\x79\x46\x53\x52\x32\x53\x75\x70\x70\x6f\x72\x74");
		Function_FSR2TemporalUpscaling_FSR2TemporalUpscalingLibrary_QueryFSR2Support_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}