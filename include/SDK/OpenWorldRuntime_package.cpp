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
	 * 	Name: PredefinedFunction UOpenWorldRuntimeUtils.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UOpenWorldRuntimeUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x52\x75\x6e\x74\x69\x6d\x65\x55\x74\x69\x6c\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UOpenWorldSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UOpenWorldSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x52\x75\x6e\x74\x69\x6d\x65\x2e\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

}