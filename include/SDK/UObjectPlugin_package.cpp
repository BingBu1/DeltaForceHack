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
	 * 	Name: PredefinedFunction FMyPluginStruct.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMyPluginStruct::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x55\x4f\x62\x6a\x65\x63\x74\x50\x6c\x75\x67\x69\x6e\x2e\x4d\x79\x50\x6c\x75\x67\x69\x6e\x53\x74\x72\x75\x63\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMyPluginObject.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMyPluginObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x4f\x62\x6a\x65\x63\x74\x50\x6c\x75\x67\x69\x6e\x2e\x4d\x79\x50\x6c\x75\x67\x69\x6e\x4f\x62\x6a\x65\x63\x74");
		return ptr;
	}

}