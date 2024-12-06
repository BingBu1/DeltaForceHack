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
	 * 	Name: PredefinedFunction ULightPropagationVolumeBlendable.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULightPropagationVolumeBlendable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4c\x69\x67\x68\x74\x50\x72\x6f\x70\x61\x67\x61\x74\x69\x6f\x6e\x56\x6f\x6c\x75\x6d\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x4c\x69\x67\x68\x74\x50\x72\x6f\x70\x61\x67\x61\x74\x69\x6f\x6e\x56\x6f\x6c\x75\x6d\x65\x42\x6c\x65\x6e\x64\x61\x62\x6c\x65");
		return ptr;
	}

}