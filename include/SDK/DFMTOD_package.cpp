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
	 * 	Name: PredefinedFunction FBlueprintAndOffset.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FBlueprintAndOffset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x54\x4f\x44\x2e\x42\x6c\x75\x65\x70\x72\x69\x6e\x74\x41\x6e\x64\x4f\x66\x66\x73\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FMeshAndOffset.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FMeshAndOffset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x54\x4f\x44\x2e\x4d\x65\x73\x68\x41\x6e\x64\x4f\x66\x66\x73\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ULightingDebuggerComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ULightingDebuggerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x54\x4f\x44\x2e\x4c\x69\x67\x68\x74\x69\x6e\x67\x44\x65\x62\x75\x67\x67\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ALightingDebuggerActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ALightingDebuggerActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x54\x4f\x44\x2e\x4c\x69\x67\x68\x74\x69\x6e\x67\x44\x65\x62\x75\x67\x67\x65\x72\x41\x63\x74\x6f\x72");
		return ptr;
	}

}