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
	 * 	Name: PredefinedFunction UToolKitRuntimeSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UToolKitRuntimeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x54\x6f\x6f\x6c\x4b\x69\x74\x2e\x54\x6f\x6f\x6c\x4b\x69\x74\x52\x75\x6e\x74\x69\x6d\x65\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

}