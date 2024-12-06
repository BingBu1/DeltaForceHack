
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class EditableMesh.EditableMesh
// Size: 0x710 (Inherited: 0x30)
class UEditableMesh : public UObject {
public:

	char pad_30[0x390]; // 0x30(0x390)
	struct TArray<struct UEditableMeshAdapter*> Adapters; // 0x3c0(0x10)
	char pad_3D0[0x8]; // 0x3d0(0x08)
	int32_t TextureCoordinateCount; // 0x3d8(0x04)
	char pad_3DC[0x148]; // 0x3dc(0x148)
	int32_t PendingCompactCounter; // 0x524(0x04)
	int32_t SubdivisionCount; // 0x528(0x04)
	char pad_52C[0x1e4]; // 0x52c(0x1e4)

	void WeldVertices(struct TArray<struct FVertexID>& VertexIDs, struct FVertexID& OutNewVertexID); // Function EditableMesh.EditableMesh.WeldVertices // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class EditableMesh.EditableMeshFactory
// Size: 0x30 (Inherited: 0x30)
class UEditableMeshFactory : public UObject {
public:


	struct UEditableMesh* STATIC_MakeEditableMesh(struct UPrimitiveComponent* PrimitiveComponent, int32_t LodIndex); // Function EditableMesh.EditableMeshFactory.MakeEditableMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class EditableMesh.EditableMeshAdapter
// Size: 0x30 (Inherited: 0x30)
class UEditableMeshAdapter : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class EditableMesh.EditableGeometryCollectionAdapter
// Size: 0xe0 (Inherited: 0x30)
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter {
public:

	struct UGeometryCollection* GeometryCollection; // 0x30(0x08)
	struct UGeometryCollection* OriginalGeometryCollection; // 0x38(0x08)
	int32_t GeometryCollectionLODIndex; // 0x40(0x04)
	char pad_44[0x9c]; // 0x44(0x9c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class EditableMesh.EditableStaticMeshAdapter
// Size: 0xe8 (Inherited: 0x30)
class UEditableStaticMeshAdapter : public UEditableMeshAdapter {
public:

	struct UStaticMesh* StaticMesh; // 0x30(0x08)
	struct UStaticMesh* OriginalStaticMesh; // 0x38(0x08)
	int32_t StaticMeshLODIndex; // 0x40(0x04)
	char pad_44[0xa4]; // 0x44(0xa4)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
