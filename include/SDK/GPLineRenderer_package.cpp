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
	 * 	Name: PredefinedFunction FLineSection.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FLineSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x4c\x69\x6e\x65\x52\x65\x6e\x64\x65\x72\x65\x72\x2e\x4c\x69\x6e\x65\x53\x65\x63\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FGPBatchedLine.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FGPBatchedLine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x47\x50\x4c\x69\x6e\x65\x52\x65\x6e\x64\x65\x72\x65\x72\x2e\x47\x50\x42\x61\x74\x63\x68\x65\x64\x4c\x69\x6e\x65");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UGPLineRendererComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UGPLineRendererComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x47\x50\x4c\x69\x6e\x65\x52\x65\x6e\x64\x65\x72\x65\x72\x2e\x47\x50\x4c\x69\x6e\x65\x52\x65\x6e\x64\x65\x72\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function GPLineRenderer.GPLineRendererComponent.UpdateLine
	 * 	Flags: (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	void UGPLineRendererComponent::UpdateLine(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x47\x50\x4c\x69\x6e\x65\x52\x65\x6e\x64\x65\x72\x65\x72\x2e\x47\x50\x4c\x69\x6e\x65\x52\x65\x6e\x64\x65\x72\x65\x72\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x55\x70\x64\x61\x74\x65\x4c\x69\x6e\x65");
		Function_GPLineRenderer_GPLineRendererComponent_UpdateLine_Param params { };
		params.SectionIndex = SectionIndex;
		params.Vertices = Vertices;
		params.Normals = Normals;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Vertices = params.Vertices;
		Normals = params.Normals;
	}
}