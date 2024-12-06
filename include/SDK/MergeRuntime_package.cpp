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
	 * 	Name: PredefinedFunction UCompositeSkeletalMeshComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UCompositeSkeletalMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x72\x67\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x43\x6f\x6d\x70\x6f\x73\x69\x74\x65\x53\x6b\x65\x6c\x65\x74\x61\x6c\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UMergeLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UMergeLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x4d\x65\x72\x67\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x4d\x65\x72\x67\x65\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function MergeRuntime.CompositeSkeletalMeshComponent.Merge
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UCompositeSkeletalMeshComponent::Merge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x65\x72\x67\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x43\x6f\x6d\x70\x6f\x73\x69\x74\x65\x53\x6b\x65\x6c\x65\x74\x61\x6c\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x4d\x65\x72\x67\x65");
		Function_MergeRuntime_CompositeSkeletalMeshComponent_Merge_Param params { };

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function MergeRuntime.MergeLibrary.MergeSkeletalMeshs
	 * 	Flags: (Final, Native, Static, Public)
	 */
	struct USkeletalMesh* UMergeLibrary::STATIC_MergeSkeletalMeshs(struct TArray<struct USkeletalMesh*> SrcMeshList, struct UCompositeSkeletalMeshComponent* Outer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x4d\x65\x72\x67\x65\x52\x75\x6e\x74\x69\x6d\x65\x2e\x4d\x65\x72\x67\x65\x4c\x69\x62\x72\x61\x72\x79\x2e\x4d\x65\x72\x67\x65\x53\x6b\x65\x6c\x65\x74\x61\x6c\x4d\x65\x73\x68\x73");
		Function_MergeRuntime_MergeLibrary_MergeSkeletalMeshs_Param params { };
		params.SrcMeshList = SrcMeshList;
		params.Outer = Outer;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}