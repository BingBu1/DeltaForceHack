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
	 * 	Name: PredefinedFunction UStaticMeshDescription.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UStaticMeshDescription::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x53\x74\x61\x74\x69\x63\x4d\x65\x73\x68\x44\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x2e\x53\x74\x61\x74\x69\x63\x4d\x65\x73\x68\x44\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
	 * 	Flags: (Final, Native, Public, HasDefaults, BlueprintCallable)
	 */
	void UStaticMeshDescription::SetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, struct FVector2D UV, int32_t UVIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x53\x74\x61\x74\x69\x63\x4d\x65\x73\x68\x44\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x2e\x53\x74\x61\x74\x69\x63\x4d\x65\x73\x68\x44\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x2e\x53\x65\x74\x56\x65\x72\x74\x65\x78\x49\x6e\x73\x74\x61\x6e\x63\x65\x55\x56");
		Function_StaticMeshDescription_StaticMeshDescription_SetVertexInstanceUV_Param params { };
		params.VertexInstanceID = VertexInstanceID;
		params.UV = UV;
		params.UVIndex = UVIndex;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
}