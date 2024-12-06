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
	 * 	Name: PredefinedFunction FGeneEvoStatsIndividualTableRow.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FGeneEvoStatsIndividualTableRow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x65\x6e\x65\x45\x76\x6f\x2e\x47\x65\x6e\x65\x45\x76\x6f\x53\x74\x61\x74\x73\x49\x6e\x64\x69\x76\x69\x64\x75\x61\x6c\x54\x61\x62\x6c\x65\x52\x6f\x77");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FGeneEvoStatsTableRow.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FGeneEvoStatsTableRow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x65\x6e\x65\x45\x76\x6f\x2e\x47\x65\x6e\x65\x45\x76\x6f\x53\x74\x61\x74\x73\x54\x61\x62\x6c\x65\x52\x6f\x77");
		return ptr;
	}

}