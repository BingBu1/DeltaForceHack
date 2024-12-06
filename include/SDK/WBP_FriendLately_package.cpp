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
	 * 	Name: PredefinedFunction UWBP_FriendLately_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_FriendLately_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x46\x72\x69\x65\x6e\x64\x4c\x61\x74\x65\x6c\x79\x2e\x57\x42\x50\x5f\x46\x72\x69\x65\x6e\x64\x4c\x61\x74\x65\x6c\x79\x5f\x43");
		return ptr;
	}

}