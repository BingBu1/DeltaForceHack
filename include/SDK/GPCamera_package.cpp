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
	 * 	Name: PredefinedFunction FGPCameraPossessData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FGPCameraPossessData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x43\x61\x6d\x65\x72\x61\x2e\x47\x50\x43\x61\x6d\x65\x72\x61\x50\x6f\x73\x73\x65\x73\x73\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FGPCameraModifyData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FGPCameraModifyData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x43\x61\x6d\x65\x72\x61\x2e\x47\x50\x43\x61\x6d\x65\x72\x61\x4d\x6f\x64\x69\x66\x79\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction AGPCameraManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AGPCameraManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x43\x61\x6d\x65\x72\x61\x2e\x47\x50\x43\x61\x6d\x65\x72\x61\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

}