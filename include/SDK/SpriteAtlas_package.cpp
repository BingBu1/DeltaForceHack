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
	 * 	Name: PredefinedFunction USpriteAtlasSheet.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* USpriteAtlasSheet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x70\x72\x69\x74\x65\x41\x74\x6c\x61\x73\x2e\x53\x70\x72\x69\x74\x65\x41\x74\x6c\x61\x73\x53\x68\x65\x65\x74");
		return ptr;
	}

}