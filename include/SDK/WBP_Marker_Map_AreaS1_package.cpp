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
	 * 	Name: PredefinedFunction UWBP_Marker_Map_AreaS1_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UWBP_Marker_Map_AreaS1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x57\x69\x64\x67\x65\x74\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x57\x42\x50\x5f\x4d\x61\x72\x6b\x65\x72\x5f\x4d\x61\x70\x5f\x41\x72\x65\x61\x53\x31\x2e\x57\x42\x50\x5f\x4d\x61\x72\x6b\x65\x72\x5f\x4d\x61\x70\x5f\x41\x72\x65\x61\x53\x31\x5f\x43");
		return ptr;
	}

}