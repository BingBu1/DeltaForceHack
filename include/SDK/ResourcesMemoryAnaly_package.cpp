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
	 * 	Name: PredefinedFunction FMemoryStatistInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMemoryStatistInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x52\x65\x73\x6f\x75\x72\x63\x65\x73\x4d\x65\x6d\x6f\x72\x79\x41\x6e\x61\x6c\x79\x2e\x4d\x65\x6d\x6f\x72\x79\x53\x74\x61\x74\x69\x73\x74\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FStatisticalInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FStatisticalInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x52\x65\x73\x6f\x75\x72\x63\x65\x73\x4d\x65\x6d\x6f\x72\x79\x41\x6e\x61\x6c\x79\x2e\x53\x74\x61\x74\x69\x73\x74\x69\x63\x61\x6c\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UAnalyStatisticalConfig.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAnalyStatisticalConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x52\x65\x73\x6f\x75\x72\x63\x65\x73\x4d\x65\x6d\x6f\x72\x79\x41\x6e\x61\x6c\x79\x2e\x41\x6e\x61\x6c\x79\x53\x74\x61\x74\x69\x73\x74\x69\x63\x61\x6c\x43\x6f\x6e\x66\x69\x67");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UResourcesMemoryAnalyBPTools.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UResourcesMemoryAnalyBPTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x52\x65\x73\x6f\x75\x72\x63\x65\x73\x4d\x65\x6d\x6f\x72\x79\x41\x6e\x61\x6c\x79\x2e\x52\x65\x73\x6f\x75\x72\x63\x65\x73\x4d\x65\x6d\x6f\x72\x79\x41\x6e\x61\x6c\x79\x42\x50\x54\x6f\x6f\x6c\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function ResourcesMemoryAnaly.ResourcesMemoryAnalyBPTools.TickMemoryAnaly
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UResourcesMemoryAnalyBPTools::STATIC_TickMemoryAnaly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x52\x65\x73\x6f\x75\x72\x63\x65\x73\x4d\x65\x6d\x6f\x72\x79\x41\x6e\x61\x6c\x79\x2e\x52\x65\x73\x6f\x75\x72\x63\x65\x73\x4d\x65\x6d\x6f\x72\x79\x41\x6e\x61\x6c\x79\x42\x50\x54\x6f\x6f\x6c\x73\x2e\x54\x69\x63\x6b\x4d\x65\x6d\x6f\x72\x79\x41\x6e\x61\x6c\x79");
		Function_ResourcesMemoryAnaly_ResourcesMemoryAnalyBPTools_TickMemoryAnaly_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}