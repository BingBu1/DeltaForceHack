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
	 * 	Name: PredefinedFunction USignificanceManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USignificanceManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x69\x67\x6e\x69\x66\x69\x63\x61\x6e\x63\x65\x4d\x61\x6e\x61\x67\x65\x72\x2e\x53\x69\x67\x6e\x69\x66\x69\x63\x61\x6e\x63\x65\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

}