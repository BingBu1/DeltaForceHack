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
	 * 	Name: PredefinedFunction UHandlerComponentFactory.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UHandlerComponentFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x50\x61\x63\x6b\x65\x74\x48\x61\x6e\x64\x6c\x65\x72\x2e\x48\x61\x6e\x64\x6c\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x46\x61\x63\x74\x6f\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UPacketHandlerProfileConfig.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UPacketHandlerProfileConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x50\x61\x63\x6b\x65\x74\x48\x61\x6e\x64\x6c\x65\x72\x2e\x50\x61\x63\x6b\x65\x74\x48\x61\x6e\x64\x6c\x65\x72\x50\x72\x6f\x66\x69\x6c\x65\x43\x6f\x6e\x66\x69\x67");
		return ptr;
	}

}