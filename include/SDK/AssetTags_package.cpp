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
	 * 	Name: PredefinedFunction UAssetTagsSubsystem.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UAssetTagsSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x41\x73\x73\x65\x74\x54\x61\x67\x73\x2e\x41\x73\x73\x65\x74\x54\x61\x67\x73\x53\x75\x62\x73\x79\x73\x74\x65\x6d");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	struct TArray<struct FName> UAssetTagsSubsystem::GetCollectionsContainingAssetPtr(struct UObject* AssetPtr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x41\x73\x73\x65\x74\x54\x61\x67\x73\x2e\x41\x73\x73\x65\x74\x54\x61\x67\x73\x53\x75\x62\x73\x79\x73\x74\x65\x6d\x2e\x47\x65\x74\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x43\x6f\x6e\x74\x61\x69\x6e\x69\x6e\x67\x41\x73\x73\x65\x74\x50\x74\x72");
		Function_AssetTags_AssetTagsSubsystem_GetCollectionsContainingAssetPtr_Param params { };
		params.AssetPtr = AssetPtr;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}