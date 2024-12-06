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
	 * 	Name: PredefinedFunction FProcMeshSection.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FProcMeshSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x50\x72\x6f\x63\x65\x64\x75\x72\x61\x6c\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x50\x72\x6f\x63\x4d\x65\x73\x68\x53\x65\x63\x74\x69\x6f\x6e");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FProcMeshTangent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FProcMeshTangent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x50\x72\x6f\x63\x65\x64\x75\x72\x61\x6c\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x50\x72\x6f\x63\x4d\x65\x73\x68\x54\x61\x6e\x67\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction FProcMeshVertex.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* FProcMeshVertex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x53\x63\x72\x69\x70\x74\x53\x74\x72\x75\x63\x74\x20\x50\x72\x6f\x63\x65\x64\x75\x72\x61\x6c\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x50\x72\x6f\x63\x4d\x65\x73\x68\x56\x65\x72\x74\x65\x78");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UProceduralMeshComponent.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UProceduralMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x50\x72\x6f\x63\x65\x64\x75\x72\x61\x6c\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x50\x72\x6f\x63\x65\x64\x75\x72\x61\x6c\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0X000000
	 * 	Name: PredefinedFunction UKismetProceduralMeshLibrary.StaticClass
	 * 	Flags: (Predefined, Static)
	 */
	UClass* UKismetProceduralMeshLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("\x43\x6c\x61\x73\x73\x20\x50\x72\x6f\x63\x65\x64\x75\x72\x61\x6c\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x4b\x69\x73\x6d\x65\x74\x50\x72\x6f\x63\x65\x64\x75\x72\x61\x6c\x4d\x65\x73\x68\x4c\x69\x62\x72\x61\x72\x79");
		return ptr;
	}

	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
	 * 	Flags: (Final, Native, Public, HasOutParms, BlueprintCallable)
	 */
	void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x50\x72\x6f\x63\x65\x64\x75\x72\x61\x6c\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x50\x72\x6f\x63\x65\x64\x75\x72\x61\x6c\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x55\x70\x64\x61\x74\x65\x4d\x65\x73\x68\x53\x65\x63\x74\x69\x6f\x6e\x5f\x4c\x69\x6e\x65\x61\x72\x43\x6f\x6c\x6f\x72");
		Function_ProceduralMeshComponent_ProceduralMeshComponent_UpdateMeshSection_LinearColor_Param params { };
		params.SectionIndex = SectionIndex;
		params.Vertices = Vertices;
		params.Normals = Normals;
		params.UV0 = UV0;
		params.UV1 = UV1;
		params.UV2 = UV2;
		params.UV3 = UV3;
		params.VertexColors = VertexColors;
		params.Tangents = Tangents;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		Vertices = params.Vertices;
		Normals = params.Normals;
		UV0 = params.UV0;
		UV1 = params.UV1;
		UV2 = params.UV2;
		UV3 = params.UV3;
		VertexColors = params.VertexColors;
		Tangents = params.Tangents;
	}
	/**
	 * Function: 
	 * 	RVA: 0XC0000000
	 * 	Name: Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
	 * 	Flags: (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 */
	void UKismetProceduralMeshLibrary::STATIC_SliceProceduralMesh(struct UProceduralMeshComponent* InProcMesh, struct FVector PlanePosition, struct FVector PlaneNormal, bool bCreateOtherHalf, struct UProceduralMeshComponent*& OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, struct UMaterialInterface* CapMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("\x46\x75\x6e\x63\x74\x69\x6f\x6e\x20\x50\x72\x6f\x63\x65\x64\x75\x72\x61\x6c\x4d\x65\x73\x68\x43\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2e\x4b\x69\x73\x6d\x65\x74\x50\x72\x6f\x63\x65\x64\x75\x72\x61\x6c\x4d\x65\x73\x68\x4c\x69\x62\x72\x61\x72\x79\x2e\x53\x6c\x69\x63\x65\x50\x72\x6f\x63\x65\x64\x75\x72\x61\x6c\x4d\x65\x73\x68");
		Function_ProceduralMeshComponent_KismetProceduralMeshLibrary_SliceProceduralMesh_Param params { };
		params.InProcMesh = InProcMesh;
		params.PlanePosition = PlanePosition;
		params.PlaneNormal = PlaneNormal;
		params.bCreateOtherHalf = bCreateOtherHalf;
		params.OutOtherHalfProcMesh = OutOtherHalfProcMesh;
		params.CapOption = CapOption;
		params.CapMaterial = CapMaterial;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		OutOtherHalfProcMesh = params.OutOtherHalfProcMesh;
	}
}