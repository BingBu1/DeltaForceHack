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
	 * 	Name: PredefinedFunction UBP_CheckEXCooling_C.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBP_CheckEXCooling_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x47\x65\x6e\x65\x72\x61\x74\x65\x64\x43\x6c\x61\x73\x73\x20\x42\x50\x5f\x43\x68\x65\x63\x6b\x45\x58\x43\x6f\x6f\x6c\x69\x6e\x67\x2e\x42\x50\x5f\x43\x68\x65\x63\x6b\x45\x58\x43\x6f\x6f\x6c\x69\x6e\x67\x5f\x43");
		return ptr;
	}

}