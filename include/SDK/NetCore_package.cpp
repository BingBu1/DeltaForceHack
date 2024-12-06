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
	 * 	Name: PredefinedFunction FNetAnalyticsDataConfig.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FNetAnalyticsDataConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4e\x65\x74\x43\x6f\x72\x65\x2e\x4e\x65\x74\x41\x6e\x61\x6c\x79\x74\x69\x63\x73\x44\x61\x74\x61\x43\x6f\x6e\x66\x69\x67");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UNetAnalyticsAggregatorConfig.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UNetAnalyticsAggregatorConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4e\x65\x74\x43\x6f\x72\x65\x2e\x4e\x65\x74\x41\x6e\x61\x6c\x79\x74\x69\x63\x73\x41\x67\x67\x72\x65\x67\x61\x74\x6f\x72\x43\x6f\x6e\x66\x69\x67");
		return ptr;
	}

}