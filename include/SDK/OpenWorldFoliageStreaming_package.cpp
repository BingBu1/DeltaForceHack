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
	 * 	Name: PredefinedFunction FFoliagePhysicsData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FFoliagePhysicsData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x46\x6f\x6c\x69\x61\x67\x65\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x2e\x46\x6f\x6c\x69\x61\x67\x65\x50\x68\x79\x73\x69\x63\x73\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FOpenWorldFoliageRawData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FOpenWorldFoliageRawData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x46\x6f\x6c\x69\x61\x67\x65\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x2e\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x46\x6f\x6c\x69\x61\x67\x65\x52\x61\x77\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UOpenWorldFoliageAsset.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UOpenWorldFoliageAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x46\x6f\x6c\x69\x61\x67\x65\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x2e\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x46\x6f\x6c\x69\x61\x67\x65\x41\x73\x73\x65\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UOpenWorldFoliageStatics.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UOpenWorldFoliageStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x46\x6f\x6c\x69\x61\x67\x65\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x2e\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x46\x6f\x6c\x69\x61\x67\x65\x53\x74\x61\x74\x69\x63\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction ACrackedInfoManager.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ACrackedInfoManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x46\x6f\x6c\x69\x61\x67\x65\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x2e\x43\x72\x61\x63\x6b\x65\x64\x49\x6e\x66\x6f\x4d\x61\x6e\x61\x67\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction AFoliageAssetsStreamer.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AFoliageAssetsStreamer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x46\x6f\x6c\x69\x61\x67\x65\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x2e\x46\x6f\x6c\x69\x61\x67\x65\x41\x73\x73\x65\x74\x73\x53\x74\x72\x65\x61\x6d\x65\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function OpenWorldFoliageStreaming.OpenWorldFoliageStatics.QueryCoverType
	 * 	Flags: (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 */
	struct FName UOpenWorldFoliageStatics::STATIC_QueryCoverType(struct FVector WorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x46\x6f\x6c\x69\x61\x67\x65\x53\x74\x72\x65\x61\x6d\x69\x6e\x67\x2e\x4f\x70\x65\x6e\x57\x6f\x72\x6c\x64\x46\x6f\x6c\x69\x61\x67\x65\x53\x74\x61\x74\x69\x63\x73\x2e\x51\x75\x65\x72\x79\x43\x6f\x76\x65\x72\x54\x79\x70\x65");
		Function_OpenWorldFoliageStreaming_OpenWorldFoliageStatics_QueryCoverType_Param params { };
		params.WorldPosition = WorldPosition;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}