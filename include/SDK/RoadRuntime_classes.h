
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class RoadRuntime.CrossActor
// Size: 0x3b8 (Inherited: 0x388)
class ACrossActor : public AStaticMeshActor {
public:

	struct FString UniqueKey; // 0x388(0x10)
	struct TArray<struct FCrossActorManager> SideActors; // 0x398(0x10)
	struct TArray<struct FCrossMeshManager> SideMeshes; // 0x3a8(0x10)

	void UpdateSideMesh(struct UStaticMesh* InPrototype, struct FVector MeshRelativeLocation, struct FRotator MeshRelativeRotation, int32_t SocketIndex, bool IsEnable, bool IsNormalized); // Function RoadRuntime.CrossActor.UpdateSideMesh // (Final|Native|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class RoadRuntime.RoadActor
// Size: 0x3f0 (Inherited: 0x378)
class ARoadActor : public AActor {
public:

	enum class ESplineMeshAxis SplineMeshAxis; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	struct FVector LocalOffset; // 0x37c(0x0c)
	struct ARoadActor* Father; // 0x388(0x08)
	struct FString UniqueKey; // 0x390(0x10)
	struct USplineComponent* Spline; // 0x3a0(0x08)
	int32_t Index; // 0x3a8(0x04)
	int32_t Segmentation; // 0x3ac(0x04)
	int32_t StepGeneration; // 0x3b0(0x04)
	float size; // 0x3b4(0x04)
	struct UStaticMesh* RoadMesh; // 0x3b8(0x08)
	struct TArray<struct USplineMeshComponent*> RoadMeshesComp; // 0x3c0(0x10)
	struct TArray<struct FSideActorManager> SideActors; // 0x3d0(0x10)
	struct TArray<struct FSideMeshManager> SideMeshes; // 0x3e0(0x10)

	void UpdateSplineMesh(int32_t MeshIndex); // Function RoadRuntime.RoadActor.UpdateSplineMesh // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
