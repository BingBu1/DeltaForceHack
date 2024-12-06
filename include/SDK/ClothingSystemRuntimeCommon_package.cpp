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
	 * 	Name: PredefinedFunction UClothingAssetCustomData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UClothingAssetCustomData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x43\x6c\x6f\x74\x68\x69\x6e\x67\x53\x79\x73\x74\x65\x6d\x52\x75\x6e\x74\x69\x6d\x65\x43\x6f\x6d\x6d\x6f\x6e\x2e\x43\x6c\x6f\x74\x68\x69\x6e\x67\x41\x73\x73\x65\x74\x43\x75\x73\x74\x6f\x6d\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UClothingAssetCommon.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UClothingAssetCommon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x43\x6c\x6f\x74\x68\x69\x6e\x67\x53\x79\x73\x74\x65\x6d\x52\x75\x6e\x74\x69\x6d\x65\x43\x6f\x6d\x6d\x6f\x6e\x2e\x43\x6c\x6f\x74\x68\x69\x6e\x67\x41\x73\x73\x65\x74\x43\x6f\x6d\x6d\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UClothLODDataBase.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UClothLODDataBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x43\x6c\x6f\x74\x68\x69\x6e\x67\x53\x79\x73\x74\x65\x6d\x52\x75\x6e\x74\x69\x6d\x65\x43\x6f\x6d\x6d\x6f\x6e\x2e\x43\x6c\x6f\x74\x68\x4c\x4f\x44\x44\x61\x74\x61\x42\x61\x73\x65");
		return ptr;
	}

}