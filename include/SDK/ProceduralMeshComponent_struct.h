
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : int {
	NoCap = 0,
	CreateNewSectionForCap = 1,
	UseLastSectionForCap = 2,
	EProcMeshSliceCapOption_MAX = 3
};

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// Size: 0x40 (Inherited: 0x00)
struct FProcMeshSection {
public:

	struct TArray<struct FProcMeshVertex> ProcVertexBuffer; // 0x00(0x10)
	struct TArray<uint32_t> ProcIndexBuffer; // 0x10(0x10)
	struct FBox SectionLocalBox; // 0x20(0x1c)
	bool bEnableCollision; // 0x3c(0x01)
	bool bSectionVisible; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// Size: 0x10 (Inherited: 0x00)
struct FProcMeshTangent {
public:

	struct FVector TangentX; // 0x00(0x0c)
	bool bFlipTangentY; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// Size: 0x4c (Inherited: 0x00)
struct FProcMeshVertex {
public:

	struct FVector Position; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
	struct FProcMeshTangent Tangent; // 0x18(0x10)
	struct FColor Color; // 0x28(0x04)
	struct FVector2D UV0; // 0x2c(0x08)
	struct FVector2D UV1; // 0x34(0x08)
	struct FVector2D UV2; // 0x3c(0x08)
	struct FVector2D UV3; // 0x44(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
