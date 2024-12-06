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
	 * 	Name: PredefinedFunction FCachedPropertyPath.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FCachedPropertyPath::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x50\x72\x6f\x70\x65\x72\x74\x79\x50\x61\x74\x68\x2e\x43\x61\x63\x68\x65\x64\x50\x72\x6f\x70\x65\x72\x74\x79\x50\x61\x74\x68");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FPropertyPathSegment.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FPropertyPathSegment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x50\x72\x6f\x70\x65\x72\x74\x79\x50\x61\x74\x68\x2e\x50\x72\x6f\x70\x65\x72\x74\x79\x50\x61\x74\x68\x53\x65\x67\x6d\x65\x6e\x74");
		return ptr;
	}

}