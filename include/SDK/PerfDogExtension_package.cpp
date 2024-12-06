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
	 * 	Name: PredefinedFunction UPerfDogSession.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UPerfDogSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x50\x65\x72\x66\x44\x6f\x67\x45\x78\x74\x65\x6e\x73\x69\x6f\x6e\x2e\x50\x65\x72\x66\x44\x6f\x67\x53\x65\x73\x73\x69\x6f\x6e");
		return ptr;
	}

}