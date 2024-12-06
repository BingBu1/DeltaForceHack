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
	 * 	Name: PredefinedFunction UAutoFitHeightComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAutoFitHeightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4c\x61\x6e\x64\x73\x63\x61\x70\x65\x44\x65\x63\x61\x6c\x2e\x41\x75\x74\x6f\x46\x69\x74\x48\x65\x69\x67\x68\x74\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ULandscapeDecalComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULandscapeDecalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4c\x61\x6e\x64\x73\x63\x61\x70\x65\x44\x65\x63\x61\x6c\x2e\x4c\x61\x6e\x64\x73\x63\x61\x70\x65\x44\x65\x63\x61\x6c\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ALandscapeDecalActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ALandscapeDecalActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4c\x61\x6e\x64\x73\x63\x61\x70\x65\x44\x65\x63\x61\x6c\x2e\x4c\x61\x6e\x64\x73\x63\x61\x70\x65\x44\x65\x63\x61\x6c\x41\x63\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction AStereoDecalActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AStereoDecalActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4c\x61\x6e\x64\x73\x63\x61\x70\x65\x44\x65\x63\x61\x6c\x2e\x53\x74\x65\x72\x65\x6f\x44\x65\x63\x61\x6c\x41\x63\x74\x6f\x72");
		return ptr;
	}

}