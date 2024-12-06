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
	 * 	Name: PredefinedFunction FVelocityBlend.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FVelocityBlend::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x55\x73\x65\x72\x44\x65\x66\x69\x6e\x65\x64\x53\x74\x72\x75\x63\x74\x20\x56\x65\x6c\x6f\x63\x69\x74\x79\x42\x6c\x65\x6e\x64\x2e\x56\x65\x6c\x6f\x63\x69\x74\x79\x42\x6c\x65\x6e\x64");
		return ptr;
	}

}