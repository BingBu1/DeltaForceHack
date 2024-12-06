
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MRMesh.MeshReconstructorBase
// Size: 0x30 (Inherited: 0x30)
class UMeshReconstructorBase : public UObject {
public:


	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x2b0 (Inherited: 0x240)
class UMockDataMeshTrackerComponent : public USceneComponent {
public:

	/*struct FMulticastInlineDelegate*/char OnMeshTrackerUpdated[0x10]; // 0x240(0x10)
	bool ScanWorld; // 0x250(0x01)
	bool RequestNormals; // 0x251(0x01)
	bool RequestVertexConfidence; // 0x252(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x253(0x01)
	char pad_254[0x4]; // 0x254(0x04)
	struct TArray<struct FColor> BlockVertexColors; // 0x258(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x268(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x278(0x10)
	float UpdateInterval; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct UMRMeshComponent* MRMesh; // 0x290(0x08)
	char pad_298[0x18]; // 0x298(0x18)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MRMesh.MRMeshComponent
// Size: 0x5e0 (Inherited: 0x560)
class UMRMeshComponent : public UPrimitiveComponent {
public:

	char pad_560[0x8]; // 0x560(0x08)
	struct UMaterialInterface* Material; // 0x568(0x08)
	bool bCreateMeshProxySections; // 0x570(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x571(0x01)
	bool bNeverCreateCollisionMesh; // 0x572(0x01)
	char pad_573[0x5]; // 0x573(0x05)
	struct UBodySetup* CachedBodySetup; // 0x578(0x08)
	struct TArray<struct UBodySetup*> BodySetups; // 0x580(0x10)
	struct UMaterialInterface* WireframeMaterial; // 0x590(0x08)
	char pad_598[0x48]; // 0x598(0x48)

	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
