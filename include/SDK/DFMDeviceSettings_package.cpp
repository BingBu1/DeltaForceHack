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
	 * 	Name: PredefinedFunction UDFMDeviceFrameDataAsset.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMDeviceFrameDataAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x44\x65\x76\x69\x63\x65\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x44\x46\x4d\x44\x65\x76\x69\x63\x65\x46\x72\x61\x6d\x65\x44\x61\x74\x61\x41\x73\x73\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDFMDeviceFrameSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDFMDeviceFrameSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x44\x65\x76\x69\x63\x65\x53\x65\x74\x74\x69\x6e\x67\x73\x2e\x44\x46\x4d\x44\x65\x76\x69\x63\x65\x46\x72\x61\x6d\x65\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

}