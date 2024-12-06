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
	 * 	Name: PredefinedFunction FSessionServiceLogUnsubscribe.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSessionServiceLogUnsubscribe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x65\x73\x73\x69\x6f\x6e\x4d\x65\x73\x73\x61\x67\x65\x73\x2e\x53\x65\x73\x73\x69\x6f\x6e\x53\x65\x72\x76\x69\x63\x65\x4c\x6f\x67\x55\x6e\x73\x75\x62\x73\x63\x72\x69\x62\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSessionServiceLogSubscribe.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSessionServiceLogSubscribe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x65\x73\x73\x69\x6f\x6e\x4d\x65\x73\x73\x61\x67\x65\x73\x2e\x53\x65\x73\x73\x69\x6f\x6e\x53\x65\x72\x76\x69\x63\x65\x4c\x6f\x67\x53\x75\x62\x73\x63\x72\x69\x62\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSessionServiceLog.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSessionServiceLog::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x65\x73\x73\x69\x6f\x6e\x4d\x65\x73\x73\x61\x67\x65\x73\x2e\x53\x65\x73\x73\x69\x6f\x6e\x53\x65\x72\x76\x69\x63\x65\x4c\x6f\x67");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSessionServicePong.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSessionServicePong::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x65\x73\x73\x69\x6f\x6e\x4d\x65\x73\x73\x61\x67\x65\x73\x2e\x53\x65\x73\x73\x69\x6f\x6e\x53\x65\x72\x76\x69\x63\x65\x50\x6f\x6e\x67");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSessionServicePing.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSessionServicePing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x65\x73\x73\x69\x6f\x6e\x4d\x65\x73\x73\x61\x67\x65\x73\x2e\x53\x65\x73\x73\x69\x6f\x6e\x53\x65\x72\x76\x69\x63\x65\x50\x69\x6e\x67");
		return ptr;
	}

}