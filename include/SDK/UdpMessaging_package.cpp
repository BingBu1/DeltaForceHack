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
	 * 	Name: PredefinedFunction FUdpMockMessage.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FUdpMockMessage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x55\x64\x70\x4d\x65\x73\x73\x61\x67\x69\x6e\x67\x2e\x55\x64\x70\x4d\x6f\x63\x6b\x4d\x65\x73\x73\x61\x67\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UUdpMessagingSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UUdpMessagingSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x55\x64\x70\x4d\x65\x73\x73\x61\x67\x69\x6e\x67\x2e\x55\x64\x70\x4d\x65\x73\x73\x61\x67\x69\x6e\x67\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

}