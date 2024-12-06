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
	 * 	Name: PredefinedFunction FChunkPartData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FChunkPartData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x42\x75\x69\x6c\x64\x50\x61\x74\x63\x68\x53\x65\x72\x76\x69\x63\x65\x73\x2e\x43\x68\x75\x6e\x6b\x50\x61\x72\x74\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FCustomFieldData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FCustomFieldData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x42\x75\x69\x6c\x64\x50\x61\x74\x63\x68\x53\x65\x72\x76\x69\x63\x65\x73\x2e\x43\x75\x73\x74\x6f\x6d\x46\x69\x65\x6c\x64\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FSHAHashData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FSHAHashData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x42\x75\x69\x6c\x64\x50\x61\x74\x63\x68\x53\x65\x72\x76\x69\x63\x65\x73\x2e\x53\x48\x41\x48\x61\x73\x68\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FFileManifestData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FFileManifestData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x42\x75\x69\x6c\x64\x50\x61\x74\x63\x68\x53\x65\x72\x76\x69\x63\x65\x73\x2e\x46\x69\x6c\x65\x4d\x61\x6e\x69\x66\x65\x73\x74\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FChunkInfoData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FChunkInfoData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x42\x75\x69\x6c\x64\x50\x61\x74\x63\x68\x53\x65\x72\x76\x69\x63\x65\x73\x2e\x43\x68\x75\x6e\x6b\x49\x6e\x66\x6f\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UBuildPatchManifest.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBuildPatchManifest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x42\x75\x69\x6c\x64\x50\x61\x74\x63\x68\x53\x65\x72\x76\x69\x63\x65\x73\x2e\x42\x75\x69\x6c\x64\x50\x61\x74\x63\x68\x4d\x61\x6e\x69\x66\x65\x73\x74");
		return ptr;
	}

}