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
	 * 	Name: PredefinedFunction FAssetPackerDataUtils.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FAssetPackerDataUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x41\x73\x73\x65\x74\x50\x61\x63\x6b\x65\x72\x52\x75\x6e\x74\x69\x6d\x65\x2e\x41\x73\x73\x65\x74\x50\x61\x63\x6b\x65\x72\x44\x61\x74\x61\x55\x74\x69\x6c\x73");
		return ptr;
	}

}