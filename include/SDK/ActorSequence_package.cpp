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
	 * 	Name: PredefinedFunction FActorSequenceObjectReferenceMap.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FActorSequenceObjectReferenceMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x41\x63\x74\x6f\x72\x53\x65\x71\x75\x65\x6e\x63\x65\x2e\x41\x63\x74\x6f\x72\x53\x65\x71\x75\x65\x6e\x63\x65\x4f\x62\x6a\x65\x63\x74\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x4d\x61\x70");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FActorSequenceObjectReferences.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FActorSequenceObjectReferences::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x41\x63\x74\x6f\x72\x53\x65\x71\x75\x65\x6e\x63\x65\x2e\x41\x63\x74\x6f\x72\x53\x65\x71\x75\x65\x6e\x63\x65\x4f\x62\x6a\x65\x63\x74\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FActorSequenceObjectReference.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FActorSequenceObjectReference::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x41\x63\x74\x6f\x72\x53\x65\x71\x75\x65\x6e\x63\x65\x2e\x41\x63\x74\x6f\x72\x53\x65\x71\x75\x65\x6e\x63\x65\x4f\x62\x6a\x65\x63\x74\x52\x65\x66\x65\x72\x65\x6e\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UActorSequence.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UActorSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x63\x74\x6f\x72\x53\x65\x71\x75\x65\x6e\x63\x65\x2e\x41\x63\x74\x6f\x72\x53\x65\x71\x75\x65\x6e\x63\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UActorSequenceComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UActorSequenceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x63\x74\x6f\x72\x53\x65\x71\x75\x65\x6e\x63\x65\x2e\x41\x63\x74\x6f\x72\x53\x65\x71\x75\x65\x6e\x63\x65\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UActorSequencePlayer.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UActorSequencePlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x63\x74\x6f\x72\x53\x65\x71\x75\x65\x6e\x63\x65\x2e\x41\x63\x74\x6f\x72\x53\x65\x71\x75\x65\x6e\x63\x65\x50\x6c\x61\x79\x65\x72");
		return ptr;
	}

}