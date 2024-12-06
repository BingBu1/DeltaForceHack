
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : int {
	None = 0,
	Normals = 1,
	Tangents = 2,
	WeightedNTBs = 3,
	EComputeNTBsOptions_MAX = 4
};

// ScriptStruct MeshDescription.ElementID
// Size: 0x04 (Inherited: 0x00)
struct FElementID {
public:

	int32_t IDValue; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MeshDescription.PolygonGroupID
// Size: 0x04 (Inherited: 0x04)
struct FPolygonGroupID : public FElementID {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MeshDescription.PolygonID
// Size: 0x04 (Inherited: 0x04)
struct FPolygonID : public FElementID {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MeshDescription.VertexID
// Size: 0x04 (Inherited: 0x04)
struct FVertexID : public FElementID {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MeshDescription.VertexInstanceID
// Size: 0x04 (Inherited: 0x04)
struct FVertexInstanceID : public FElementID {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MeshDescription.EdgeID
// Size: 0x04 (Inherited: 0x04)
struct FEdgeID : public FElementID {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MeshDescription.TriangleID
// Size: 0x04 (Inherited: 0x04)
struct FTriangleID : public FElementID {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
