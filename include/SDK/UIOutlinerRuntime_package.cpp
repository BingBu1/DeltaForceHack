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
	 * 	Name: PredefinedFunction UUIOutlinerRuntimeDetails.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUIOutlinerRuntimeDetails::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x49\x4f\x75\x74\x6c\x69\x6e\x65\x72\x52\x75\x6e\x74\x69\x6d\x65\x2e\x55\x49\x4f\x75\x74\x6c\x69\x6e\x65\x72\x52\x75\x6e\x74\x69\x6d\x65\x44\x65\x74\x61\x69\x6c\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UUIOutlinerRuntimeView.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUIOutlinerRuntimeView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x49\x4f\x75\x74\x6c\x69\x6e\x65\x72\x52\x75\x6e\x74\x69\x6d\x65\x2e\x55\x49\x4f\x75\x74\x6c\x69\x6e\x65\x72\x52\x75\x6e\x74\x69\x6d\x65\x56\x69\x65\x77");
		return ptr;
	}

}