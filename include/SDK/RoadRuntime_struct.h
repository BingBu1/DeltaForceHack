
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct RoadRuntime.CrossMeshManager
// Size: 0x20 (Inherited: 0x00)
struct FCrossMeshManager {
public:

	struct UStaticMesh* Prototype; // 0x00(0x08)
	struct AActor* Owner; // 0x08(0x08)
	struct UStaticMeshComponent* SideMesh; // 0x10(0x08)
	int32_t SocketIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RoadRuntime.CrossActorManager
// Size: 0x18 (Inherited: 0x00)
struct FCrossActorManager {
public:

	struct UClass* Prototype; // 0x00(0x08)
	struct AActor* SideActor; // 0x08(0x08)
	int32_t SocketIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RoadRuntime.SideMeshManager
// Size: 0x20 (Inherited: 0x00)
struct FSideMeshManager {
public:

	struct UStaticMesh* Prototype; // 0x00(0x08)
	struct AActor* Owner; // 0x08(0x08)
	struct UHierarchicalInstancedStaticMeshComponent* SideMeshes; // 0x10(0x08)
	int32_t SocketIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RoadRuntime.CurbsManager
// Size: 0x38 (Inherited: 0x00)
struct FCurbsManager {
public:

	struct AActor* Owner; // 0x00(0x08)
	struct UStaticMesh* Prototype; // 0x08(0x08)
	struct TArray<struct USplineMeshComponent*> CurbsComp; // 0x10(0x10)
	struct USplineComponent* Spline; // 0x20(0x08)
	int32_t SplineIndex; // 0x28(0x04)
	int32_t SocketIndex; // 0x2c(0x04)
	int32_t Segmentation; // 0x30(0x04)
	int32_t StepGeneration; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RoadRuntime.SideActorManager
// Size: 0x20 (Inherited: 0x00)
struct FSideActorManager {
public:

	struct UClass* Prototype; // 0x00(0x08)
	struct TArray<struct AActor*> SideActors; // 0x08(0x10)
	int32_t SocketIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
