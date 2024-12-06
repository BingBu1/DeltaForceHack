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
	 * 	Name: PredefinedFunction UGPNetNoticeInterface.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGPNetNoticeInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x4e\x65\x74\x4e\x6f\x74\x69\x63\x65\x2e\x47\x50\x4e\x65\x74\x4e\x6f\x74\x69\x63\x65\x49\x6e\x74\x65\x72\x66\x61\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGPNetNoticeWorld.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGPNetNoticeWorld::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x4e\x65\x74\x4e\x6f\x74\x69\x63\x65\x2e\x47\x50\x4e\x65\x74\x4e\x6f\x74\x69\x63\x65\x57\x6f\x72\x6c\x64");
		return ptr;
	}

}