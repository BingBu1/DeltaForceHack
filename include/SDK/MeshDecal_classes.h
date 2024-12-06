
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MeshDecal.MeshDecalActor
// Size: 0x380 (Inherited: 0x378)
class AMeshDecalActor : public AActor {
public:

	struct UMeshDecalComponent* MeshDecalComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MeshDecal.DecalUpdateCommandlet
// Size: 0x88 (Inherited: 0x88)
class UDecalUpdateCommandlet : public UCommandlet {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MeshDecal.MeshDecalComponent
// Size: 0x240 (Inherited: 0x240)
class UMeshDecalComponent : public USceneComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MeshDecal.MeshDecalSettings
// Size: 0x70 (Inherited: 0x40)
class UMeshDecalSettings : public UDeveloperSettings {
public:

	bool bBuildDeferredMeshDecalForPC; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char DeferredMeshDecalMaterialTemplate[0x28]; // 0x48(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
