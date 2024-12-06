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
	 * 	Name: PredefinedFunction FFoliageData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FFoliageData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x46\x6f\x6c\x69\x61\x67\x65\x2e\x46\x6f\x6c\x69\x61\x67\x65\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FFoliageCollisionCategory.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FFoliageCollisionCategory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x44\x46\x4d\x46\x6f\x6c\x69\x61\x67\x65\x2e\x46\x6f\x6c\x69\x61\x67\x65\x43\x6f\x6c\x6c\x69\x73\x69\x6f\x6e\x43\x61\x74\x65\x67\x6f\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction AFoliageCollisionData.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* AFoliageCollisionData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x46\x6f\x6c\x69\x61\x67\x65\x2e\x46\x6f\x6c\x69\x61\x67\x65\x43\x6f\x6c\x6c\x69\x73\x69\x6f\x6e\x44\x61\x74\x61");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UFoliageCollision.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UFoliageCollision::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x44\x46\x4d\x46\x6f\x6c\x69\x61\x67\x65\x2e\x46\x6f\x6c\x69\x61\x67\x65\x43\x6f\x6c\x6c\x69\x73\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMFoliage.FoliageCollisionData.TestOverlapSVO
	 * 	Flags: (Final, Native, Public, HasDefaults, BlueprintCallable)
	 */
	bool AFoliageCollisionData::TestOverlapSVO(struct FVector Center, struct FVector HalfExtent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x46\x6f\x6c\x69\x61\x67\x65\x2e\x46\x6f\x6c\x69\x61\x67\x65\x43\x6f\x6c\x6c\x69\x73\x69\x6f\x6e\x44\x61\x74\x61\x2e\x54\x65\x73\x74\x4f\x76\x65\x72\x6c\x61\x70\x53\x56\x4f");
		Function_DFMFoliage_FoliageCollisionData_TestOverlapSVO_Param params { };
		params.Center = Center;
		params.HalfExtent = HalfExtent;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function DFMFoliage.FoliageCollision.TestOverlap
	 * 	Flags: (Final, Native, Public, HasDefaults, BlueprintCallable)
	 */
	bool UFoliageCollision::TestOverlap(enum class EFoliageCollisionName Name, struct FVector Center, struct FVector HalfExtent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x44\x46\x4d\x46\x6f\x6c\x69\x61\x67\x65\x2e\x46\x6f\x6c\x69\x61\x67\x65\x43\x6f\x6c\x6c\x69\x73\x69\x6f\x6e\x2e\x54\x65\x73\x74\x4f\x76\x65\x72\x6c\x61\x70");
		Function_DFMFoliage_FoliageCollision_TestOverlap_Param params { };
		params.Name = Name;
		params.Center = Center;
		params.HalfExtent = HalfExtent;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}