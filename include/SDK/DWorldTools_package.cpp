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
	 * 	Name: PredefinedFunction FMapEconomyReportData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMapEconomyReportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x57\x6f\x72\x6c\x64\x54\x6f\x6f\x6c\x73\x2e\x4d\x61\x70\x45\x63\x6f\x6e\x6f\x6d\x79\x52\x65\x70\x6f\x72\x74\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMapEconomyReportItem.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMapEconomyReportItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x57\x6f\x72\x6c\x64\x54\x6f\x6f\x6c\x73\x2e\x4d\x61\x70\x45\x63\x6f\x6e\x6f\x6d\x79\x52\x65\x70\x6f\x72\x74\x49\x74\x65\x6d");
		return ptr;
	}

}