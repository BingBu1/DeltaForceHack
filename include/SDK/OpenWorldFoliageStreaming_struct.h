
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct OpenWorldFoliageStreaming.FoliagePhysicsData
// Size: 0x40 (Inherited: 0x00)
struct FFoliagePhysicsData {
public:

	struct TArray<struct FPhysXSerialActor> SerialActors; // 0x00(0x10)
	struct TArray<struct FPhysXSerialBodyInstance> SerialBodyInstances; // 0x10(0x10)
	struct FVector Position; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FDateTime Timestamp; // 0x30(0x08)
	float DamageInterestRadius; // 0x38(0x04)
	char bDestructible : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldFoliageStreaming.OpenWorldFoliageRawData
// Size: 0x60 (Inherited: 0x00)
struct FOpenWorldFoliageRawData {
public:

	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct FSoftObjectPath MeshType; // 0x10(0x18)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x28(0x10)
	char pad_38[0x15]; // 0x38(0x15)
	bool bCastShadow; // 0x4d(0x01)
	bool bCastDynamicShadow; // 0x4e(0x01)
	bool bCastStaticShadow; // 0x4f(0x01)
	bool bCastShadowAsTwoSided; // 0x50(0x01)
	bool bAffectDynamicIndirectLighting; // 0x51(0x01)
	bool bAffectDistanceFieldLighting; // 0x52(0x01)
	enum class EComponentMobility Mobility; // 0x53(0x01)
	bool bSupportDestruction; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32_t Hash; // 0x58(0x04)
	int32_t bEnableDensityScaling; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
