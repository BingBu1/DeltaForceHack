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
	 * 	Name: PredefinedFunction FKey.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FKey::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x49\x6e\x70\x75\x74\x43\x6f\x72\x65\x2e\x4b\x65\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UInputCoreTypes.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UInputCoreTypes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x49\x6e\x70\x75\x74\x43\x6f\x72\x65\x2e\x49\x6e\x70\x75\x74\x43\x6f\x72\x65\x54\x79\x70\x65\x73");
		return ptr;
	}

}