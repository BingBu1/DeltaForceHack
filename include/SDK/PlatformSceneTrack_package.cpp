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
	 * 	Name: PredefinedFunction UPlatformSceneTrack.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UPlatformSceneTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x50\x6c\x61\x74\x66\x6f\x72\x6d\x53\x63\x65\x6e\x65\x54\x72\x61\x63\x6b\x2e\x50\x6c\x61\x74\x66\x6f\x72\x6d\x53\x63\x65\x6e\x65\x54\x72\x61\x63\x6b");
		return ptr;
	}

}