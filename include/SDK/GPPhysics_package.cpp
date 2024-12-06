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
	 * 	Name: PredefinedFunction UGPPhysicsSimulatableComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGPPhysicsSimulatableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x50\x68\x79\x73\x69\x63\x73\x2e\x47\x50\x50\x68\x79\x73\x69\x63\x73\x53\x69\x6d\x75\x6c\x61\x74\x61\x62\x6c\x65\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGPPhysics.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGPPhysics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x50\x68\x79\x73\x69\x63\x73\x2e\x47\x50\x50\x68\x79\x73\x69\x63\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGPPhysicsContactModifiable.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGPPhysicsContactModifiable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x50\x68\x79\x73\x69\x63\x73\x2e\x47\x50\x50\x68\x79\x73\x69\x63\x73\x43\x6f\x6e\x74\x61\x63\x74\x4d\x6f\x64\x69\x66\x69\x61\x62\x6c\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GPPhysics.GPPhysics.WeaponTraceSingle
	 * 	Flags: (Final, Native, Static, Public, HasOutParms, HasDefaults)
	 */
	bool UGPPhysics::STATIC_WeaponTraceSingle(struct UWorld* World, struct TArray<struct AActor*>& IgnoreActors, struct FVector& Start, struct FVector& End, bool IgnoreHidden, struct FHitResult& OutHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x50\x50\x68\x79\x73\x69\x63\x73\x2e\x47\x50\x50\x68\x79\x73\x69\x63\x73\x2e\x57\x65\x61\x70\x6f\x6e\x54\x72\x61\x63\x65\x53\x69\x6e\x67\x6c\x65");
		Function_GPPhysics_GPPhysics_WeaponTraceSingle_Param params { };
		params.World = World;
		params.IgnoreActors = IgnoreActors;
		params.Start = Start;
		params.End = End;
		params.IgnoreHidden = IgnoreHidden;
		params.OutHitResult = OutHitResult;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		IgnoreActors = params.IgnoreActors;
		Start = params.Start;
		End = params.End;
		OutHitResult = params.OutHitResult;
		return params.ReturnValue;
	}
}