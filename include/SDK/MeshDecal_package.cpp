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
	 * 	Name: PredefinedFunction FInnerRect.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FInnerRect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4d\x65\x73\x68\x44\x65\x63\x61\x6c\x2e\x49\x6e\x6e\x65\x72\x52\x65\x63\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction AMeshDecalActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AMeshDecalActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x73\x68\x44\x65\x63\x61\x6c\x2e\x4d\x65\x73\x68\x44\x65\x63\x61\x6c\x41\x63\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UDecalUpdateCommandlet.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UDecalUpdateCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x73\x68\x44\x65\x63\x61\x6c\x2e\x44\x65\x63\x61\x6c\x55\x70\x64\x61\x74\x65\x43\x6f\x6d\x6d\x61\x6e\x64\x6c\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMeshDecalComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMeshDecalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x73\x68\x44\x65\x63\x61\x6c\x2e\x4d\x65\x73\x68\x44\x65\x63\x61\x6c\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMeshDecalSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMeshDecalSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x73\x68\x44\x65\x63\x61\x6c\x2e\x4d\x65\x73\x68\x44\x65\x63\x61\x6c\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

}