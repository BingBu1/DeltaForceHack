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
	 * 	Name: PredefinedFunction AArchVisCharacter.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AArchVisCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x72\x63\x68\x56\x69\x73\x43\x68\x61\x72\x61\x63\x74\x65\x72\x2e\x41\x72\x63\x68\x56\x69\x73\x43\x68\x61\x72\x61\x63\x74\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UArchVisCharMovementComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UArchVisCharMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x72\x63\x68\x56\x69\x73\x43\x68\x61\x72\x61\x63\x74\x65\x72\x2e\x41\x72\x63\x68\x56\x69\x73\x43\x68\x61\x72\x4d\x6f\x76\x65\x6d\x65\x6e\x74\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

}