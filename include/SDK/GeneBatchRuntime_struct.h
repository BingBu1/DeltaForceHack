
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct GeneBatchRuntime.GeneBatchSubVisibilityId
// Size: 0x18 (Inherited: 0x00)
struct FGeneBatchSubVisibilityId {
public:

	int32_t VisibilityId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> OriginalVisibilityIds; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatchRuntime.GeneBatchSubVisibilityIdRelevanceItem
// Size: 0x0c (Inherited: 0x00)
struct FGeneBatchSubVisibilityIdRelevanceItem {
public:

	int32_t LodIndex; // 0x00(0x04)
	int32_t SectionIndex; // 0x04(0x04)
	int32_t SubVisibilityIdIndex; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatchRuntime.GeneBatchSubBoundsVisibilitiesItem
// Size: 0x18 (Inherited: 0x00)
struct FGeneBatchSubBoundsVisibilitiesItem {
public:

	int32_t LodIndex; // 0x00(0x04)
	int32_t SectionIndex; // 0x04(0x04)
	struct TArray<int32_t> SubBoundsRelevance; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatchRuntime.GeneBatchMergeMeshTypeLOD
// Size: 0x18 (Inherited: 0x00)
struct FGeneBatchMergeMeshTypeLOD {
public:

	int32_t TargetLODIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> Sections; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatchRuntime.DrawSectionInfo
// Size: 0x10 (Inherited: 0x00)
struct FDrawSectionInfo {
public:

	struct UStaticMesh* StaticMesh; // 0x00(0x08)
	uint32_t LodIndex; // 0x08(0x04)
	uint32_t DrawSectionIndex; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatchRuntime.GeneBatchMeshProxyLOD
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchMeshProxyLOD {
public:

	struct TArray<uint32_t> Sections; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatchRuntime.GeneBatchRuntimePOIConfiguration
// Size: 0x80 (Inherited: 0x00)
struct FGeneBatchRuntimePOIConfiguration {
public:

	struct UGeneBatchRuntimeComponent* RuntimeComponent; // 0x00(0x08)
	struct UGeneBatchSettingsObject* SettingsObject; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
	struct UDataTable* GeneBatchMeshComponentDataTablePtr; // 0x18(0x08)
	char pad_20[0x10]; // 0x20(0x10)
	struct UDataTable* GeneBatchTextureAtlasDataTablePtr; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
	struct UDataTable* GeneBatchStaticMeshProxyInputDataTablePtr; // 0x48(0x08)
	char pad_50[0x10]; // 0x50(0x10)
	struct UDataTable* GeneBatchStaticMeshDataTablePtr; // 0x60(0x08)
	char pad_68[0x10]; // 0x68(0x10)
	struct UDataTable* GeneBatchPrimitiveHLODParentDataTablePtr; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
