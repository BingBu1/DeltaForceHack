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
	 * 	Name: PredefinedFunction FAreaContainer.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FAreaContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x55\x73\x65\x72\x44\x65\x66\x69\x6e\x65\x64\x53\x74\x72\x75\x63\x74\x20\x41\x72\x65\x61\x43\x6f\x6e\x74\x61\x69\x6e\x65\x72\x2e\x41\x72\x65\x61\x43\x6f\x6e\x74\x61\x69\x6e\x65\x72");
		return ptr;
	}

}