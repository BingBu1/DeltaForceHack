
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum SkeletalMeshMergeRuntime.EMeshMergeResultType
enum class EMeshMergeResultType : int {
	None = 0,
	Success = 1,
	MergeMeshEmpty = 2,
	MergeSkeletonEmpty = 3,
	RequestTimeOut = 4,
	SourceMeshListEmpty = 5,
	FailToFindBoneOnSkeleton = 6,
	MissSourceSkeleton = 7,
	MergeableAnalysisFailed = 8,
	LodNumNotEqual = 9,
	BoneNumsMismatch = 10,
	VertexNumsMismatch = 11,
	IndexBufferInvalid = 12,
	EMeshMergeResultType_MAX = 13
};

// ScriptStruct SkeletalMeshMergeRuntime.MergeSkeletalMeshDescriptor
// Size: 0xc8 (Inherited: 0x00)
struct FMergeSkeletalMeshDescriptor {
public:

	char pad_0[0xc8]; // 0x00(0xc8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SkeletalMeshMergeRuntime.MergeSkeletalMesh_MaterialOverride
// Size: 0x30 (Inherited: 0x00)
struct FMergeSkeletalMesh_MaterialOverride {
public:

	int32_t MeshIndex; // 0x00(0x04)
	int32_t LOD; // 0x04(0x04)
	int32_t SectionIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSoftObjectPath OverrideMaterialPath; // 0x10(0x18)
	struct UMaterialInterface* OverrideMaterial; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SkeletalMeshMergeRuntime.MergeSkeletalMesh_MaterialOverrideKey
// Size: 0x10 (Inherited: 0x00)
struct FMergeSkeletalMesh_MaterialOverrideKey {
public:

	uint64_t ItemID; // 0x00(0x08)
	int32_t SectionIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SkeletalMeshMergeRuntime.TextureMergeStructInfo
// Size: 0x20 (Inherited: 0x00)
struct FTextureMergeStructInfo {
public:

	struct TArray<struct FTextureMergingInfo> TextureMergingInfos; // 0x00(0x10)
	struct TArray<struct UTexture2D*> MergedTextureInfo; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SkeletalMeshMergeRuntime.SkeletalMeshes
// Size: 0x10 (Inherited: 0x00)
struct FSkeletalMeshes {
public:

	struct TArray<struct USkeletalMesh*> SkeletalMeshes; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
