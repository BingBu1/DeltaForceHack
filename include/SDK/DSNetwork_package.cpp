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
	 * 	Name: PredefinedFunction UDSLogicBase.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDSLogicBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x53\x4e\x65\x74\x77\x6f\x72\x6b\x2e\x44\x53\x4c\x6f\x67\x69\x63\x42\x61\x73\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDualChannelIpNetConnection.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDualChannelIpNetConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x53\x4e\x65\x74\x77\x6f\x72\x6b\x2e\x44\x75\x61\x6c\x43\x68\x61\x6e\x6e\x65\x6c\x49\x70\x4e\x65\x74\x43\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDualChannelChildConnection.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDualChannelChildConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x53\x4e\x65\x74\x77\x6f\x72\x6b\x2e\x44\x75\x61\x6c\x43\x68\x61\x6e\x6e\x65\x6c\x43\x68\x69\x6c\x64\x43\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDualChannelIpNetDriver.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDualChannelIpNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x53\x4e\x65\x74\x77\x6f\x72\x6b\x2e\x44\x75\x61\x6c\x43\x68\x61\x6e\x6e\x65\x6c\x49\x70\x4e\x65\x74\x44\x72\x69\x76\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMultiIpNetConnection.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMultiIpNetConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x53\x4e\x65\x74\x77\x6f\x72\x6b\x2e\x4d\x75\x6c\x74\x69\x49\x70\x4e\x65\x74\x43\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMultiIpNetDriver.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMultiIpNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x53\x4e\x65\x74\x77\x6f\x72\x6b\x2e\x4d\x75\x6c\x74\x69\x49\x70\x4e\x65\x74\x44\x72\x69\x76\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UProtocolJsonExporter.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UProtocolJsonExporter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x53\x4e\x65\x74\x77\x6f\x72\x6b\x2e\x50\x72\x6f\x74\x6f\x63\x6f\x6c\x4a\x73\x6f\x6e\x45\x78\x70\x6f\x72\x74\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UParseNetProtocolCommandlet.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UParseNetProtocolCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x53\x4e\x65\x74\x77\x6f\x72\x6b\x2e\x50\x61\x72\x73\x65\x4e\x65\x74\x50\x72\x6f\x74\x6f\x63\x6f\x6c\x43\x6f\x6d\x6d\x61\x6e\x64\x6c\x65\x74");
		return ptr;
	}

}