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
	 * 	Name: PredefinedFunction FOverlayItem.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FOverlayItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4f\x76\x65\x72\x6c\x61\x79\x2e\x4f\x76\x65\x72\x6c\x61\x79\x49\x74\x65\x6d");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UOverlays.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UOverlays::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x76\x65\x72\x6c\x61\x79\x2e\x4f\x76\x65\x72\x6c\x61\x79\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UBasicOverlays.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBasicOverlays::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x76\x65\x72\x6c\x61\x79\x2e\x42\x61\x73\x69\x63\x4f\x76\x65\x72\x6c\x61\x79\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ULocalizedOverlays.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULocalizedOverlays::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x76\x65\x72\x6c\x61\x79\x2e\x4c\x6f\x63\x61\x6c\x69\x7a\x65\x64\x4f\x76\x65\x72\x6c\x61\x79\x73");
		return ptr;
	}

}