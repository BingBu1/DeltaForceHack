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
	 * 	Name: PredefinedFunction AP_HeroScene_Show_Terry_BP_EFX_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AP_HeroScene_Show_Terry_BP_EFX_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x50\x5f\x48\x65\x72\x6f\x53\x63\x65\x6e\x65\x5f\x53\x68\x6f\x77\x5f\x54\x65\x72\x72\x79\x5f\x42\x50\x5f\x45\x46\x58\x2e\x50\x5f\x48\x65\x72\x6f\x53\x63\x65\x6e\x65\x5f\x53\x68\x6f\x77\x5f\x54\x65\x72\x72\x79\x5f\x42\x50\x5f\x45\x46\x58\x5f\x43");
		return ptr;
	}

}