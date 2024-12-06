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
	 * 	Name: PredefinedFunction USourceCodeAccessSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USourceCodeAccessSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x6f\x75\x72\x63\x65\x43\x6f\x64\x65\x41\x63\x63\x65\x73\x73\x2e\x53\x6f\x75\x72\x63\x65\x43\x6f\x64\x65\x41\x63\x63\x65\x73\x73\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

}