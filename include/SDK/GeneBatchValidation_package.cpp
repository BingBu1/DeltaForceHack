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
	 * 	Name: PredefinedFunction UGeneBatchValidationComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGeneBatchValidationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x65\x6e\x65\x42\x61\x74\x63\x68\x56\x61\x6c\x69\x64\x61\x74\x69\x6f\x6e\x2e\x47\x65\x6e\x65\x42\x61\x74\x63\x68\x56\x61\x6c\x69\x64\x61\x74\x69\x6f\x6e\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

}