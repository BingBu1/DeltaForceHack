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
	 * 	Name: PredefinedFunction UMoviePlayerSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMoviePlayerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x6f\x76\x69\x65\x50\x6c\x61\x79\x65\x72\x2e\x4d\x6f\x76\x69\x65\x50\x6c\x61\x79\x65\x72\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

}