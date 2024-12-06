
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class OpenWorldInstancedStaticMeshProxy.InstancedStaticMeshProxyCollector
// Size: 0x468 (Inherited: 0x378)
class AInstancedStaticMeshProxyCollector : public AActor {
public:

	char pad_378[0xf0]; // 0x378(0xf0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldInstancedStaticMeshProxy.InstancedStaticMeshProxyComponent
// Size: 0x2a0 (Inherited: 0x240)
class UInstancedStaticMeshProxyComponent : public USceneComponent {
public:

	struct FInstancedStaticMeshProxy Proxy; // 0x240(0x50)
	char pad_290[0x10]; // 0x290(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldInstancedStaticMeshProxy.MergedStaticMeshProxyComponent
// Size: 0x2b0 (Inherited: 0x240)
class UMergedStaticMeshProxyComponent : public USceneComponent {
public:

	struct FComponentProperties CompProperties; // 0x240(0x28)
	struct TArray<struct FTransform> InstancesData; // 0x268(0x10)
	struct TArray<bool> InstancesUseAsOccluder; // 0x278(0x10)
	struct FName DebugLayerName; // 0x288(0x08)
	char pad_290[0x8]; // 0x290(0x08)
	struct TArray<struct AActor*> StaticMeshActors; // 0x298(0x10)
	char pad_2A8[0x8]; // 0x2a8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldInstancedStaticMeshProxy.MergedStaticMeshStreamer
// Size: 0x478 (Inherited: 0x378)
class AMergedStaticMeshStreamer : public AActor {
public:

	struct TMap<struct FComponentProperties, struct UOpenWorldHierarchicalInstancedMeshComponent*> Components; // 0x378(0x50)
	/*struct TSet<struct UOpenWorldHierarchicalInstancedMeshComponent*>*/char ComponentsNeedRebuildTree[0x50]; // 0x3c8(0x50)
	char pad_418[0x60]; // 0x418(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
