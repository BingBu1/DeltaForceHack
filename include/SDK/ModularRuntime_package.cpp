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
	 * 	Name: PredefinedFunction FModularGridSize.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FModularGridSize::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x6f\x64\x75\x6c\x61\x72\x52\x75\x6e\x74\x69\x6d\x65\x2e\x4d\x6f\x64\x75\x6c\x61\x72\x47\x72\x69\x64\x53\x69\x7a\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction AModularLevelActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AModularLevelActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x6f\x64\x75\x6c\x61\x72\x52\x75\x6e\x74\x69\x6d\x65\x2e\x4d\x6f\x64\x75\x6c\x61\x72\x4c\x65\x76\x65\x6c\x41\x63\x74\x6f\x72");
		return ptr;
	}

}