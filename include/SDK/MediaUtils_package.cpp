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
	 * 	Name: PredefinedFunction FMediaPlayerTrackOptions.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMediaPlayerTrackOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x64\x69\x61\x55\x74\x69\x6c\x73\x2e\x4d\x65\x64\x69\x61\x50\x6c\x61\x79\x65\x72\x54\x72\x61\x63\x6b\x4f\x70\x74\x69\x6f\x6e\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMediaPlayerOptions.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMediaPlayerOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x64\x69\x61\x55\x74\x69\x6c\x73\x2e\x4d\x65\x64\x69\x61\x50\x6c\x61\x79\x65\x72\x4f\x70\x74\x69\x6f\x6e\x73");
		return ptr;
	}

}