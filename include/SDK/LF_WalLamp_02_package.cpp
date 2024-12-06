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
	 * 	Name: PredefinedFunction ALF_WalLamp_02_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ALF_WalLamp_02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x4c\x46\x5f\x57\x61\x6c\x4c\x61\x6d\x70\x5f\x30\x32\x2e\x4c\x46\x5f\x57\x61\x6c\x4c\x61\x6d\x70\x5f\x30\x32\x5f\x43");
		return ptr;
	}

}