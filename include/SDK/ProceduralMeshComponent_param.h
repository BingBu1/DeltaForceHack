/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif


namespace Dumper
{
	struct Function_ProceduralMeshComponent_ProceduralMeshComponent_UpdateMeshSection_LinearColor_Param
	{
	public:

		int32_t SectionIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct TArray<struct FVector> Vertices; // 0x08(0x10)
		struct TArray<struct FVector> Normals; // 0x18(0x10)
		struct TArray<struct FVector2D> UV0; // 0x28(0x10)
		struct TArray<struct FVector2D> UV1; // 0x38(0x10)
		struct TArray<struct FVector2D> UV2; // 0x48(0x10)
		struct TArray<struct FVector2D> UV3; // 0x58(0x10)
		struct TArray<struct FLinearColor> VertexColors; // 0x68(0x10)
		struct TArray<struct FProcMeshTangent> Tangents; // 0x78(0x10)
	};

	struct Function_ProceduralMeshComponent_KismetProceduralMeshLibrary_SliceProceduralMesh_Param
	{
	public:

		struct UProceduralMeshComponent* InProcMesh; // 0x00(0x08)
		struct FVector PlanePosition; // 0x08(0x0c)
		struct FVector PlaneNormal; // 0x14(0x0c)
		bool bCreateOtherHalf; // 0x20(0x01)
		char pad_21[0x7]; // 0x21(0x07)
		struct UProceduralMeshComponent* OutOtherHalfProcMesh; // 0x28(0x08)
		enum class EProcMeshSliceCapOption CapOption; // 0x30(0x01)
		char pad_31[0x7]; // 0x31(0x07)
		struct UMaterialInterface* CapMaterial; // 0x38(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
