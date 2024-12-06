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
	 * 	Name: PredefinedFunction UMultiWorldManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMultiWorldManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x75\x6c\x74\x69\x57\x6f\x72\x6c\x64\x2e\x4d\x75\x6c\x74\x69\x57\x6f\x72\x6c\x64\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

}