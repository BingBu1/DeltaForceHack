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
	 * 	Name: PredefinedFunction UTickHelper.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UTickHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x43\x72\x6f\x73\x73\x50\x6c\x61\x74\x66\x6f\x72\x6d\x41\x75\x74\x6f\x54\x65\x73\x74\x2e\x54\x69\x63\x6b\x48\x65\x6c\x70\x65\x72");
		return ptr;
	}

}