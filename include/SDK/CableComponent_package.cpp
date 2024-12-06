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
	 * 	Name: PredefinedFunction ACableActor.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* ACableActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x43\x61\x62\x6c\x65\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x43\x61\x62\x6c\x65\x41\x63\x74\x6f\x72");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UCableComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UCableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x43\x61\x62\x6c\x65\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x43\x61\x62\x6c\x65\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function CableComponent.CableComponent.SetAttachEndToComponent
	 * 	Flags: (Final, Native, Public, BlueprintCallable)
	 */
	void UCableComponent::SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x43\x61\x62\x6c\x65\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x43\x61\x62\x6c\x65\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x53\x65\x74\x41\x74\x74\x61\x63\x68\x45\x6e\x64\x54\x6f\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		Function_CableComponent_CableComponent_SetAttachEndToComponent_Param params { };
		params.Component = Component;
		params.SocketName = SocketName;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}