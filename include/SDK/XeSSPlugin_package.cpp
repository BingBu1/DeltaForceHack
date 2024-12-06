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
	 * 	Name: PredefinedFunction UXeSSSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UXeSSSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x58\x65\x53\x53\x50\x6c\x75\x67\x69\x6e\x2e\x58\x65\x53\x53\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

}