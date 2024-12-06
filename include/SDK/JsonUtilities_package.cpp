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
	 * 	Name: PredefinedFunction FJsonObjectWrapper.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FJsonObjectWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4a\x73\x6f\x6e\x55\x74\x69\x6c\x69\x74\x69\x65\x73\x2e\x4a\x73\x6f\x6e\x4f\x62\x6a\x65\x63\x74\x57\x72\x61\x70\x70\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UJsonUtilitiesDummyObject.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UJsonUtilitiesDummyObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4a\x73\x6f\x6e\x55\x74\x69\x6c\x69\x74\x69\x65\x73\x2e\x4a\x73\x6f\x6e\x55\x74\x69\x6c\x69\x74\x69\x65\x73\x44\x75\x6d\x6d\x79\x4f\x62\x6a\x65\x63\x74");
		return ptr;
	}

}