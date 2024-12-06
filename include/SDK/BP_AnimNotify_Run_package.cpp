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
	 * 	Name: PredefinedFunction UBP_AnimNotify_Run_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_AnimNotify_Run_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x41\x6e\x69\x6d\x4e\x6f\x74\x69\x66\x79\x5f\x52\x75\x6e\x2e\x42\x50\x5f\x41\x6e\x69\x6d\x4e\x6f\x74\x69\x66\x79\x5f\x52\x75\x6e\x5f\x43");
		return ptr;
	}

}