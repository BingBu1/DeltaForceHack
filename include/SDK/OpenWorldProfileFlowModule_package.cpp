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
	 * 	Name: PredefinedFunction UProfileSettingsConfig.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UProfileSettingsConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x50\x72\x6f\x66\x69\x6c\x65\x46\x6c\x6f\x77\x4d\x6f\x64\x75\x6c\x65\x2e\x50\x72\x6f\x66\x69\x6c\x65\x53\x65\x74\x74\x69\x6e\x67\x73\x43\x6f\x6e\x66\x69\x67");
		return ptr;
	}

}