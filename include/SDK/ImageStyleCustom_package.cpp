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
	 * 	Name: PredefinedFunction FImageStyle.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FImageStyle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x49\x6d\x61\x67\x65\x53\x74\x79\x6c\x65\x43\x75\x73\x74\x6f\x6d\x2e\x49\x6d\x61\x67\x65\x53\x74\x79\x6c\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UImageStyleConfig.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UImageStyleConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x49\x6d\x61\x67\x65\x53\x74\x79\x6c\x65\x43\x75\x73\x74\x6f\x6d\x2e\x49\x6d\x61\x67\x65\x53\x74\x79\x6c\x65\x43\x6f\x6e\x66\x69\x67");
		return ptr;
	}

}