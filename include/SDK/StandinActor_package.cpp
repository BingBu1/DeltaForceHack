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
	 * 	Name: PredefinedFunction FStandinProxyEntry.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FStandinProxyEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x53\x74\x61\x6e\x64\x69\x6e\x41\x63\x74\x6f\x72\x2e\x53\x74\x61\x6e\x64\x69\x6e\x50\x72\x6f\x78\x79\x45\x6e\x74\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction AStandInMeshActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AStandInMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x74\x61\x6e\x64\x69\x6e\x41\x63\x74\x6f\x72\x2e\x53\x74\x61\x6e\x64\x49\x6e\x4d\x65\x73\x68\x41\x63\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UStandinProxyContainer.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UStandinProxyContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x74\x61\x6e\x64\x69\x6e\x41\x63\x74\x6f\x72\x2e\x53\x74\x61\x6e\x64\x69\x6e\x50\x72\x6f\x78\x79\x43\x6f\x6e\x74\x61\x69\x6e\x65\x72");
		return ptr;
	}

}