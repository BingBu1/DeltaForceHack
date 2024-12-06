
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ProceduralMeshComponent.ProceduralMeshComponent
// Size: 0x730 (Inherited: 0x6c8)
class UProceduralMeshComponent : public UMeshComponent {
public:

	char pad_6C8[0x8]; // 0x6c8(0x08)
	bool bUseComplexAsSimpleCollision; // 0x6d0(0x01)
	bool bUseAsyncCooking; // 0x6d1(0x01)
	char pad_6D2[0x6]; // 0x6d2(0x06)
	struct UBodySetup* ProcMeshBodySetup; // 0x6d8(0x08)
	struct TArray<struct FProcMeshSection> ProcMeshSections; // 0x6e0(0x10)
	struct TArray<struct FKConvexElem> CollisionConvexElems; // 0x6f0(0x10)
	struct FBoxSphereBounds LocalBounds; // 0x700(0x1c)
	char pad_71C[0x4]; // 0x71c(0x04)
	struct TArray<struct UBodySetup*> AsyncBodySetupQueue; // 0x720(0x10)

	void UpdateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents); // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// Size: 0x30 (Inherited: 0x30)
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_SliceProceduralMesh(struct UProceduralMeshComponent* InProcMesh, struct FVector PlanePosition, struct FVector PlaneNormal, bool bCreateOtherHalf, struct UProceduralMeshComponent*& OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, struct UMaterialInterface* CapMaterial); // Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
