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
	 * 	Name: PredefinedFunction FEngineServiceNotification.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FEngineServiceNotification::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x45\x6e\x67\x69\x6e\x65\x4d\x65\x73\x73\x61\x67\x65\x73\x2e\x45\x6e\x67\x69\x6e\x65\x53\x65\x72\x76\x69\x63\x65\x4e\x6f\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FEngineServiceTerminate.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FEngineServiceTerminate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x45\x6e\x67\x69\x6e\x65\x4d\x65\x73\x73\x61\x67\x65\x73\x2e\x45\x6e\x67\x69\x6e\x65\x53\x65\x72\x76\x69\x63\x65\x54\x65\x72\x6d\x69\x6e\x61\x74\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FEngineServiceExecuteCommand.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FEngineServiceExecuteCommand::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x45\x6e\x67\x69\x6e\x65\x4d\x65\x73\x73\x61\x67\x65\x73\x2e\x45\x6e\x67\x69\x6e\x65\x53\x65\x72\x76\x69\x63\x65\x45\x78\x65\x63\x75\x74\x65\x43\x6f\x6d\x6d\x61\x6e\x64");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FEngineServiceAuthGrant.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FEngineServiceAuthGrant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x45\x6e\x67\x69\x6e\x65\x4d\x65\x73\x73\x61\x67\x65\x73\x2e\x45\x6e\x67\x69\x6e\x65\x53\x65\x72\x76\x69\x63\x65\x41\x75\x74\x68\x47\x72\x61\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FEngineServiceAuthDeny.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FEngineServiceAuthDeny::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x45\x6e\x67\x69\x6e\x65\x4d\x65\x73\x73\x61\x67\x65\x73\x2e\x45\x6e\x67\x69\x6e\x65\x53\x65\x72\x76\x69\x63\x65\x41\x75\x74\x68\x44\x65\x6e\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FEngineServicePong.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FEngineServicePong::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x45\x6e\x67\x69\x6e\x65\x4d\x65\x73\x73\x61\x67\x65\x73\x2e\x45\x6e\x67\x69\x6e\x65\x53\x65\x72\x76\x69\x63\x65\x50\x6f\x6e\x67");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FEngineServicePing.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FEngineServicePing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x45\x6e\x67\x69\x6e\x65\x4d\x65\x73\x73\x61\x67\x65\x73\x2e\x45\x6e\x67\x69\x6e\x65\x53\x65\x72\x76\x69\x63\x65\x50\x69\x6e\x67");
		return ptr;
	}

}