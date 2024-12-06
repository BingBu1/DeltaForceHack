
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : int {
	ThreeTriangles = 0,
	FourTriangles = 1,
	ETriangleTessellationMode_MAX = 2
};

// Enum EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : int {
	All = 0,
	CenterPolygonOnly = 1,
	SidePolygonsOnly = 2,
	EInsetPolygonsMode_MAX = 3
};

// Enum EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : int {
	NewEdgesSoft = 0,
	NewEdgesHard = 1,
	AllEdgesSoft = 2,
	AllEdgesHard = 3,
	EPolygonEdgeHardness_MAX = 4
};

// Enum EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : int {
	None = 0,
	FVector4 = 1,
	FVector = 2,
	FVector2D = 3,
	Float = 4,
	Int = 5,
	Bool = 6,
	FName = 7,
	EMeshElementAttributeType_MAX = 8
};

// Enum EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : int {
	NoTopologyChange = 0,
	TopologyChange = 1,
	EMeshTopologyChange_MAX = 2
};

// Enum EditableMesh.EMeshModificationType
enum class EMeshModificationType : int {
	FirstInterim = 0,
	Interim = 1,
	Final = 2,
	EMeshModificationType_MAX = 3
};

// ScriptStruct EditableMesh.AdaptorPolygon2Group
// Size: 0x48 (Inherited: 0x00)
struct FAdaptorPolygon2Group {
public:

	uint32_t RenderingSectionIndex; // 0x00(0x04)
	int32_t MaterialIndex; // 0x04(0x04)
	int32_t MaxTriangles; // 0x08(0x04)
	char pad_C[0x3c]; // 0x0c(0x3c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.AdaptorPolygon
// Size: 0x18 (Inherited: 0x00)
struct FAdaptorPolygon {
public:

	struct FPolygonGroupID PolygonGroupID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.AdaptorTriangleID
// Size: 0x04 (Inherited: 0x04)
struct FAdaptorTriangleID : public FElementID {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.PolygonGroupForPolygon
// Size: 0x08 (Inherited: 0x00)
struct FPolygonGroupForPolygon {
public:

	struct FPolygonID PolygonID; // 0x00(0x04)
	struct FPolygonGroupID PolygonGroupID; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.VertexToMove
// Size: 0x10 (Inherited: 0x00)
struct FVertexToMove {
public:

	struct FVertexID VertexID; // 0x00(0x04)
	struct FVector NewVertexPosition; // 0x04(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
// Size: 0x28 (Inherited: 0x00)
struct FChangeVertexInstancesForPolygon {
public:

	struct FPolygonID PolygonID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x08(0x10)
	struct TArray<struct FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.VertexInstancesForPolygonHole
// Size: 0x10 (Inherited: 0x00)
struct FVertexInstancesForPolygonHole {
public:

	struct TArray<struct FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.VertexIndexAndInstanceID
// Size: 0x08 (Inherited: 0x00)
struct FVertexIndexAndInstanceID {
public:

	int32_t ContourIndex; // 0x00(0x04)
	struct FVertexInstanceID VertexInstanceID; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.VertexAttributesForPolygon
// Size: 0x28 (Inherited: 0x00)
struct FVertexAttributesForPolygon {
public:

	struct FPolygonID PolygonID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x08(0x10)
	struct TArray<struct FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.VertexAttributesForPolygonHole
// Size: 0x10 (Inherited: 0x00)
struct FVertexAttributesForPolygonHole {
public:

	struct TArray<struct FMeshElementAttributeList> VertexAttributeList; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.PolygonToSplit
// Size: 0x18 (Inherited: 0x00)
struct FPolygonToSplit {
public:

	struct FPolygonID PolygonID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVertexPair> VertexPairsToSplitAt; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.VertexPair
// Size: 0x08 (Inherited: 0x00)
struct FVertexPair {
public:

	struct FVertexID VertexID0; // 0x00(0x04)
	struct FVertexID VertexID1; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.PolygonToCreate
// Size: 0x20 (Inherited: 0x00)
struct FPolygonToCreate {
public:

	struct FPolygonGroupID PolygonGroupID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVertexAndAttributes> PerimeterVertices; // 0x08(0x10)
	struct FPolygonID OriginalPolygonID; // 0x18(0x04)
	enum class EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.SubdivisionLimitData
// Size: 0x30 (Inherited: 0x00)
struct FSubdivisionLimitData {
public:

	struct TArray<struct FVector> VertexPositions; // 0x00(0x10)
	struct TArray<struct FSubdivisionLimitSection> Sections; // 0x10(0x10)
	struct TArray<struct FSubdividedWireEdge> SubdividedWireEdges; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.SubdividedWireEdge
// Size: 0x0c (Inherited: 0x00)
struct FSubdividedWireEdge {
public:

	int32_t EdgeVertex0PositionIndex; // 0x00(0x04)
	int32_t EdgeVertex1PositionIndex; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.SubdivisionLimitSection
// Size: 0x10 (Inherited: 0x00)
struct FSubdivisionLimitSection {
public:

	struct TArray<struct FSubdividedQuad> SubdividedQuads; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.RenderingPolygonGroup
// Size: 0x48 (Inherited: 0x00)
struct FRenderingPolygonGroup {
public:

	uint32_t RenderingSectionIndex; // 0x00(0x04)
	int32_t MaterialIndex; // 0x04(0x04)
	int32_t MaxTriangles; // 0x08(0x04)
	char pad_C[0x3c]; // 0x0c(0x3c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.RenderingPolygon
// Size: 0x18 (Inherited: 0x00)
struct FRenderingPolygon {
public:

	struct FPolygonGroupID PolygonGroupID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FTriangleID> TriangulatedPolygonTriangleIndices; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.MeshElementAttributeList
// Size: 0x10 (Inherited: 0x00)
struct FMeshElementAttributeList {
public:

	struct TArray<struct FMeshElementAttributeData> Attributes; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.MeshElementAttributeValue
// Size: 0x50 (Inherited: 0x00)
struct FMeshElementAttributeValue {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.SubdividedQuadVertex
// Size: 0x34 (Inherited: 0x00)
struct FSubdividedQuadVertex {
public:

	int32_t VertexPositionIndex; // 0x00(0x04)
	struct FVector2D TextureCoordinate0; // 0x04(0x08)
	struct FVector2D TextureCoordinate1; // 0x0c(0x08)
	struct FColor VertexColor; // 0x14(0x04)
	struct FVector VertexNormal; // 0x18(0x0c)
	struct FVector VertexTangent; // 0x24(0x0c)
	float VertexBinormalSign; // 0x30(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.PolygonGroupToCreate
// Size: 0x18 (Inherited: 0x00)
struct FPolygonGroupToCreate {
public:

	struct FMeshElementAttributeList PolygonGroupAttributes; // 0x00(0x10)
	struct FPolygonGroupID OriginalPolygonGroupID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.AttributesForEdge
// Size: 0x18 (Inherited: 0x00)
struct FAttributesForEdge {
public:

	struct FEdgeID EdgeID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FMeshElementAttributeList EdgeAttributes; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.AttributesForVertexInstance
// Size: 0x18 (Inherited: 0x00)
struct FAttributesForVertexInstance {
public:

	struct FVertexInstanceID VertexInstanceID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FMeshElementAttributeList VertexInstanceAttributes; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.AttributesForVertex
// Size: 0x18 (Inherited: 0x00)
struct FAttributesForVertex {
public:

	struct FVertexID VertexID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FMeshElementAttributeList VertexAttributes; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.VertexAndAttributes
// Size: 0x18 (Inherited: 0x00)
struct FVertexAndAttributes {
public:

	struct FVertexInstanceID VertexInstanceID; // 0x00(0x04)
	struct FVertexID VertexID; // 0x04(0x04)
	struct FMeshElementAttributeList PolygonVertexAttributes; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.EdgeToCreate
// Size: 0x20 (Inherited: 0x00)
struct FEdgeToCreate {
public:

	struct FVertexID VertexID0; // 0x00(0x04)
	struct FVertexID VertexID1; // 0x04(0x04)
	struct FMeshElementAttributeList EdgeAttributes; // 0x08(0x10)
	struct FEdgeID OriginalEdgeID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.VertexInstanceToCreate
// Size: 0x20 (Inherited: 0x00)
struct FVertexInstanceToCreate {
public:

	struct FVertexID VertexID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FMeshElementAttributeList VertexInstanceAttributes; // 0x08(0x10)
	struct FVertexInstanceID OriginalVertexInstanceID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.VertexToCreate
// Size: 0x18 (Inherited: 0x00)
struct FVertexToCreate {
public:

	struct FMeshElementAttributeList VertexAttributes; // 0x00(0x10)
	struct FVertexID OriginalVertexID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.MeshElementAttributeData
// Size: 0x60 (Inherited: 0x00)
struct FMeshElementAttributeData {
public:

	struct FName AttributeName; // 0x00(0x08)
	int32_t AttributeIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMeshElementAttributeValue AttributeValue; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct EditableMesh.SubdividedQuad
// Size: 0xd0 (Inherited: 0x00)
struct FSubdividedQuad {
public:

	struct FSubdividedQuadVertex QuadVertex0; // 0x00(0x34)
	struct FSubdividedQuadVertex QuadVertex1; // 0x34(0x34)
	struct FSubdividedQuadVertex QuadVertex2; // 0x68(0x34)
	struct FSubdividedQuadVertex QuadVertex3; // 0x9c(0x34)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
