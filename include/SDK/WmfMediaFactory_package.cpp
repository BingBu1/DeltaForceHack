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
	 * 	Name: PredefinedFunction UWmfMediaSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWmfMediaSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x57\x6d\x66\x4d\x65\x64\x69\x61\x46\x61\x63\x74\x6f\x72\x79\x2e\x57\x6d\x66\x4d\x65\x64\x69\x61\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

}