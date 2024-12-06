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
	 * 	Name: PredefinedFunction FWebJSCallbackBase.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FWebJSCallbackBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x57\x65\x62\x42\x72\x6f\x77\x73\x65\x72\x2e\x57\x65\x62\x4a\x53\x43\x61\x6c\x6c\x62\x61\x63\x6b\x42\x61\x73\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FWebJSResponse.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FWebJSResponse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x57\x65\x62\x42\x72\x6f\x77\x73\x65\x72\x2e\x57\x65\x62\x4a\x53\x52\x65\x73\x70\x6f\x6e\x73\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FWebJSFunction.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FWebJSFunction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x57\x65\x62\x42\x72\x6f\x77\x73\x65\x72\x2e\x57\x65\x62\x4a\x53\x46\x75\x6e\x63\x74\x69\x6f\x6e");
		return ptr;
	}

}