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
	 * 	Name: PredefinedFunction ADeformableSmoke_BP_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ADeformableSmoke_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x44\x65\x66\x6f\x72\x6d\x61\x62\x6c\x65\x53\x6d\x6f\x6b\x65\x5f\x42\x50\x2e\x44\x65\x66\x6f\x72\x6d\x61\x62\x6c\x65\x53\x6d\x6f\x6b\x65\x5f\x42\x50\x5f\x43");
		return ptr;
	}

}