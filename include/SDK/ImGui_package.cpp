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
	 * 	Name: PredefinedFunction FImGuiDPIScaleInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FImGuiDPIScaleInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x49\x6d\x47\x75\x69\x2e\x49\x6d\x47\x75\x69\x44\x50\x49\x53\x63\x61\x6c\x65\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FImGuiCanvasSizeInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FImGuiCanvasSizeInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x49\x6d\x47\x75\x69\x2e\x49\x6d\x47\x75\x69\x43\x61\x6e\x76\x61\x73\x53\x69\x7a\x65\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FImGuiKeyInfo.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FImGuiKeyInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x49\x6d\x47\x75\x69\x2e\x49\x6d\x47\x75\x69\x4b\x65\x79\x49\x6e\x66\x6f");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UImGuiInputHandler.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UImGuiInputHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x49\x6d\x47\x75\x69\x2e\x49\x6d\x47\x75\x69\x49\x6e\x70\x75\x74\x48\x61\x6e\x64\x6c\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UImGuiSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UImGuiSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x49\x6d\x47\x75\x69\x2e\x49\x6d\x47\x75\x69\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

}