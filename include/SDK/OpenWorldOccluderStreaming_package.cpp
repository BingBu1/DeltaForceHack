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
	 * 	Name: PredefinedFunction UOpenWorldLandscapeOccluderComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UOpenWorldLandscapeOccluderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x4f\x63\x63\x6c\x75\x64\x65\x72\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x2e\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x4c\x61\x6e\x64\x73\x63\x61\x70\x65\x4f\x63\x63\x6c\x75\x64\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UOpenWorldOccluderAsset.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UOpenWorldOccluderAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x4f\x63\x63\x6c\x75\x64\x65\x72\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x2e\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x4f\x63\x63\x6c\x75\x64\x65\x72\x41\x73\x73\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction AOccluderAssetsStreamer.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AOccluderAssetsStreamer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x4f\x63\x63\x6c\x75\x64\x65\x72\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x2e\x4f\x63\x63\x6c\x75\x64\x65\x72\x41\x73\x73\x65\x74\x73\x53\x74\x72\x65\x61\x6d\x65\x72");
		return ptr;
	}

}