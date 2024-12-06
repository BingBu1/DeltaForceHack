
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GeneBatchRuntime.AsyncStaticMeshComponentProxy
// Size: 0x820 (Inherited: 0x818)
class UAsyncStaticMeshComponentProxy : public UAsyncStaticMeshComponent {
public:

	char pad_818[0x8]; // 0x818(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatchRuntime.GeneBatchHLODInstancedStaticMeshComponent
// Size: 0x9b0 (Inherited: 0x9a8)
class UGeneBatchHLODInstancedStaticMeshComponent : public UInstancedStaticMeshComponent {
public:

	bool bBatched; // 0x9a8(0x01)
	char pad_9A9[0x7]; // 0x9a9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatchRuntime.GeneBatchMeshComponent
// Size: 0x860 (Inherited: 0x7f0)
class UGeneBatchMeshComponent : public UStaticMeshComponent {
public:

	int32_t GeneBatchMeshComponentDataIndex; // 0x7f0(0x04)
	char pad_7F4[0x4]; // 0x7f4(0x04)
	struct TArray<struct FBoxSphereBounds> SubBounds; // 0x7f8(0x10)
	struct TArray<float> CullingScreenSizes; // 0x808(0x10)
	char pad_818[0x38]; // 0x818(0x38)
	float SphereRadius; // 0x850(0x04)
	char pad_854[0xc]; // 0x854(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatchRuntime.GeneBatchMeshProxyComponent
// Size: 0x830 (Inherited: 0x7f0)
class UGeneBatchMeshProxyComponent : public UStaticMeshComponent {
public:

	int32_t GeneBatchMeshComponentDataIndex; // 0x7f0(0x04)
	char pad_7F4[0x4]; // 0x7f4(0x04)
	struct TArray<struct FGeneBatchMeshProxyLOD> LODs; // 0x7f8(0x10)
	struct FBoxSphereBounds RenderDataBounds; // 0x808(0x1c)
	char pad_824[0xc]; // 0x824(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatchRuntime.GeneBatchRuntimeComponent
// Size: 0x118 (Inherited: 0x100)
class UGeneBatchRuntimeComponent : public UActorComponent {
public:

	struct UGeneBatchSettingsObject* SettingsObjectHigh; // 0x100(0x08)
	struct UGeneBatchSettingsObject* SettingsObjectLow; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)

	void SetQuality(int32_t InQuality); // Function GeneBatchRuntime.GeneBatchRuntimeComponent.SetQuality // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatchRuntime.BatchStaticMesh
// Size: 0x40 (Inherited: 0x30)
class UBatchStaticMesh : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char BatchCompleted[0x10]; // 0x30(0x10)

	struct UBatchStaticMesh* STATIC_RequestBatch(struct UGeneBatchRuntimeSubsystem* GBRuntime, int32_t BatchType, int32_t MeshID); // Function GeneBatchRuntime.BatchStaticMesh.RequestBatch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatchRuntime.GeneBatchRuntimeSubsystem
// Size: 0x350 (Inherited: 0x38)
class UGeneBatchRuntimeSubsystem : public UWorldSubsystem {
public:

	char pad_38[0x20]; // 0x38(0x20)
	struct TArray<struct FGeneBatchRuntimePOIConfiguration> POIs; // 0x58(0x10)
	char pad_68[0x2e8]; // 0x68(0x2e8)

	struct TArray<struct UPrimitiveComponent*> FindLeafHLODChildrenCurrent(struct UPrimitiveComponent* PrimitiveComponent); // Function GeneBatchRuntime.GeneBatchRuntimeSubsystem.FindLeafHLODChildrenCurrent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatchRuntime.GeneBatchHLODStaticMeshComponent
// Size: 0x8c0 (Inherited: 0x7f0)
class UGeneBatchHLODStaticMeshComponent : public UStaticMeshComponent {
public:

	bool bBatched; // 0x7f0(0x01)
	char pad_7F1[0x7]; // 0x7f1(0x07)
	struct TArray<struct FBoxSphereBounds> SubBounds; // 0x7f8(0x10)
	struct TArray<float> CullingScreenSizes; // 0x808(0x10)
	struct TArray<struct FGeneBatchSubBoundsVisibilitiesItem> Visibilities; // 0x818(0x10)
	struct TArray<struct FGeneBatchSubVisibilityIdRelevanceItem> SubVisibilityIdRelevance; // 0x828(0x10)
	struct TArray<struct FMeshUVChannelInfo> OverrideUVChannelData; // 0x838(0x10)
	bool bUseOriginOC; // 0x848(0x01)
	char pad_849[0x17]; // 0x849(0x17)
	bool bUseOriginOCWithOriginComponentIndex; // 0x860(0x01)
	char pad_861[0x17]; // 0x861(0x17)
	struct TArray<struct FGeneBatchSubVisibilityId> SubVisibilityIds; // 0x878(0x10)
	char pad_888[0x38]; // 0x888(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatchRuntime.GeneBatchMergeMeshTypeComponent
// Size: 0x910 (Inherited: 0x8c0)
class UGeneBatchMergeMeshTypeComponent : public UGeneBatchHLODStaticMeshComponent {
public:

	struct TArray<struct FGeneBatchMergeMeshTypeLOD> LODs; // 0x8c0(0x10)
	struct TArray<float> LODScreenSizes; // 0x8d0(0x10)
	struct FBoxSphereBounds StaticMeshBounds; // 0x8e0(0x1c)
	char pad_8FC[0x14]; // 0x8fc(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
