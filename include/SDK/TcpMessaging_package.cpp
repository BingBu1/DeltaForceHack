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
	 * 	Name: PredefinedFunction UTcpMessagingSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UTcpMessagingSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x54\x63\x70\x4d\x65\x73\x73\x61\x67\x69\x6e\x67\x2e\x54\x63\x70\x4d\x65\x73\x73\x61\x67\x69\x6e\x67\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

}