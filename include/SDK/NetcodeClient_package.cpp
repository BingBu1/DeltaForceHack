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
	 * 	Name: PredefinedFunction UClientCommandlet.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UClientCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4e\x65\x74\x63\x6f\x64\x65\x43\x6c\x69\x65\x6e\x74\x2e\x43\x6c\x69\x65\x6e\x74\x43\x6f\x6d\x6d\x61\x6e\x64\x6c\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UNetcodeActorChannel.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UNetcodeActorChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4e\x65\x74\x63\x6f\x64\x65\x43\x6c\x69\x65\x6e\x74\x2e\x4e\x65\x74\x63\x6f\x64\x65\x41\x63\x74\x6f\x72\x43\x68\x61\x6e\x6e\x65\x6c");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UNetcodeConnection.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UNetcodeConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4e\x65\x74\x63\x6f\x64\x65\x43\x6c\x69\x65\x6e\x74\x2e\x4e\x65\x74\x63\x6f\x64\x65\x43\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UNetcodeControlChannel.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UNetcodeControlChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4e\x65\x74\x63\x6f\x64\x65\x43\x6c\x69\x65\x6e\x74\x2e\x4e\x65\x74\x63\x6f\x64\x65\x43\x6f\x6e\x74\x72\x6f\x6c\x43\x68\x61\x6e\x6e\x65\x6c");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UNetcodeMinimalClient.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UNetcodeMinimalClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4e\x65\x74\x63\x6f\x64\x65\x43\x6c\x69\x65\x6e\x74\x2e\x4e\x65\x74\x63\x6f\x64\x65\x4d\x69\x6e\x69\x6d\x61\x6c\x43\x6c\x69\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UNetcodePackageMapClient.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UNetcodePackageMapClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4e\x65\x74\x63\x6f\x64\x65\x43\x6c\x69\x65\x6e\x74\x2e\x4e\x65\x74\x63\x6f\x64\x65\x50\x61\x63\x6b\x61\x67\x65\x4d\x61\x70\x43\x6c\x69\x65\x6e\x74");
		return ptr;
	}

}