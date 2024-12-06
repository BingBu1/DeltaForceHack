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
	 * 	Name: PredefinedFunction UAudioCurveSourceComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAudioCurveSourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x46\x61\x63\x69\x61\x6c\x41\x6e\x69\x6d\x61\x74\x69\x6f\x6e\x2e\x41\x75\x64\x69\x6f\x43\x75\x72\x76\x65\x53\x6f\x75\x72\x63\x65\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

}