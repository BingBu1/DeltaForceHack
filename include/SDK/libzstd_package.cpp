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
	 * 	Name: PredefinedFunction UZstdAssetInterface.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UZstdAssetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x6c\x69\x62\x7a\x73\x74\x64\x2e\x5a\x73\x74\x64\x41\x73\x73\x65\x74\x49\x6e\x74\x65\x72\x66\x61\x63\x65");
		return ptr;
	}

}