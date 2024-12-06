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
	 * 	Name: PredefinedFunction FUEActorRepListType.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FUEActorRepListType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x42\x6f\x6f\x73\x74\x42\x72\x69\x64\x67\x65\x2e\x55\x45\x41\x63\x74\x6f\x72\x52\x65\x70\x4c\x69\x73\x74\x54\x79\x70\x65");
		return ptr;
	}

}