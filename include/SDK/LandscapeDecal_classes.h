
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class LandscapeDecal.AutoFitHeightComponent
// Size: 0x110 (Inherited: 0x100)
class UAutoFitHeightComponent : public UActorComponent {
public:

	struct UStaticMeshComponent* PlanarMeshComponent; // 0x100(0x08)
	struct UStaticMeshComponent* StereoMeshComponent; // 0x108(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LandscapeDecal.LandscapeDecalComponent
// Size: 0x7f0 (Inherited: 0x7f0)
class ULandscapeDecalComponent : public UStaticMeshComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LandscapeDecal.LandscapeDecalActor
// Size: 0x380 (Inherited: 0x378)
class ALandscapeDecalActor : public AActor {
public:

	struct UStaticMeshComponent* PlanarMeshComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LandscapeDecal.StereoDecalActor
// Size: 0x388 (Inherited: 0x380)
class AStereoDecalActor : public ALandscapeDecalActor {
public:

	struct UStaticMeshComponent* SteroMeshComponent; // 0x380(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
