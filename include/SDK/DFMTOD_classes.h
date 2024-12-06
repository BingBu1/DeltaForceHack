
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMTOD.LightingDebuggerComponent
// Size: 0x270 (Inherited: 0x240)
class ULightingDebuggerComponent : public USceneComponent {
public:

	struct TArray<struct FBlueprintAndOffset> BlueprintAndOffset; // 0x240(0x10)
	struct TArray<struct FMeshAndOffset> MeshAndOffset; // 0x250(0x10)
	bool bEnableTick; // 0x260(0x01)
	bool bNeedRebuild; // 0x261(0x01)
	char pad_262[0xe]; // 0x262(0x0e)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMTOD.LightingDebuggerActor
// Size: 0x380 (Inherited: 0x378)
class ALightingDebuggerActor : public AActor {
public:

	struct ULightingDebuggerComponent* Component; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
