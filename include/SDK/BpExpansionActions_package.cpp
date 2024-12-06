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
	 * 	Name: PredefinedFunction UBpExpansionActions.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UBpExpansionActions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x42\x70\x45\x78\x70\x61\x6e\x73\x69\x6f\x6e\x41\x63\x74\x69\x6f\x6e\x73\x2e\x42\x70\x45\x78\x70\x61\x6e\x73\x69\x6f\x6e\x41\x63\x74\x69\x6f\x6e\x73");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function BpExpansionActions.BpExpansionActions.SetStaticMeshCullingScreenSize
	 * 	Flags: (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UBpExpansionActions::STATIC_SetStaticMeshCullingScreenSize(struct UStaticMeshComponent* InStaticMeshComponent, float CullingScreenSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x42\x70\x45\x78\x70\x61\x6e\x73\x69\x6f\x6e\x41\x63\x74\x69\x6f\x6e\x73\x2e\x42\x70\x45\x78\x70\x61\x6e\x73\x69\x6f\x6e\x41\x63\x74\x69\x6f\x6e\x73\x2e\x53\x65\x74\x53\x74\x61\x74\x69\x63\x4d\x65\x73\x68\x43\x75\x6c\x6c\x69\x6e\x67\x53\x63\x72\x65\x65\x6e\x53\x69\x7a\x65");
		Function_BpExpansionActions_BpExpansionActions_SetStaticMeshCullingScreenSize_Param params { };
		params.InStaticMeshComponent = InStaticMeshComponent;
		params.CullingScreenSize = CullingScreenSize;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}
}