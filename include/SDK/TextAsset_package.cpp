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
	 * 	Name: PredefinedFunction UTextAsset.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UTextAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x54\x65\x78\x74\x41\x73\x73\x65\x74\x2e\x54\x65\x78\x74\x41\x73\x73\x65\x74");
		return ptr;
	}

}