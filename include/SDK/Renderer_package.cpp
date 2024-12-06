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
	 * 	Name: PredefinedFunction FLightPropagationVolumeSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FLightPropagationVolumeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x52\x65\x6e\x64\x65\x72\x65\x72\x2e\x4c\x69\x67\x68\x74\x50\x72\x6f\x70\x61\x67\x61\x74\x69\x6f\x6e\x56\x6f\x6c\x75\x6d\x65\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FPRTBufferAllocationBucketSetting.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FPRTBufferAllocationBucketSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x52\x65\x6e\x64\x65\x72\x65\x72\x2e\x50\x52\x54\x42\x75\x66\x66\x65\x72\x41\x6c\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x42\x75\x63\x6b\x65\x74\x53\x65\x74\x74\x69\x6e\x67");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UPRTBufferAllocationSettings.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UPRTBufferAllocationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x52\x65\x6e\x64\x65\x72\x65\x72\x2e\x50\x52\x54\x42\x75\x66\x66\x65\x72\x41\x6c\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x53\x65\x74\x74\x69\x6e\x67\x73");
		return ptr;
	}

}