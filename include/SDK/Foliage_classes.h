
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class Foliage.FoliageEd_ImportTypeRedirector
// Size: 0x40 (Inherited: 0x30)
class UFoliageEd_ImportTypeRedirector : public UObject {
public:

	struct TArray<struct FFoliageImportType> Types; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Foliage.FoliageEd_LogicTypeRedirector
// Size: 0x50 (Inherited: 0x30)
class UFoliageEd_LogicTypeRedirector : public UObject {
public:

	struct FString LogicType; // 0x30(0x10)
	struct TArray<struct UFoliageType*> FoliageTypes; // 0x40(0x10)

	void AddFoliageType(struct UFoliageType* InFoliageType); // Function Foliage.FoliageEd_LogicTypeRedirector.AddFoliageType // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0xad0 (Inherited: 0xaa8)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
public:

	/*struct FMulticastInlineDelegate*/char OnInstanceTakePointDamage[0x10]; // 0xaa8(0x10)
	/*struct FMulticastInlineDelegate*/char OnInstanceTakeRadialDamage[0x10]; // 0xab8(0x10)
	char pad_AC8[0x8]; // 0xac8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Foliage.FoliageStatistics
// Size: 0x30 (Inherited: 0x30)
class UFoliageStatistics : public UBlueprintFunctionLibrary {
public:


	int32_t STATIC_FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float radius); // Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Foliage.InstancedFoliageActor
// Size: 0x3c8 (Inherited: 0x378)
class AInstancedFoliageActor : public AActor {
public:

	char pad_378[0x50]; // 0x378(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x3e8 (Inherited: 0x388)
class AInteractiveFoliageActor : public AStaticMeshActor {
public:

	struct UCapsuleComponent* CapsuleComponent; // 0x388(0x08)
	struct FVector TouchingActorEntryPosition; // 0x390(0x0c)
	struct FVector FoliageVelocity; // 0x39c(0x0c)
	struct FVector FoliageForce; // 0x3a8(0x0c)
	struct FVector FoliagePosition; // 0x3b4(0x0c)
	float FoliageDamageImpulseScale; // 0x3c0(0x04)
	float FoliageTouchImpulseScale; // 0x3c4(0x04)
	float FoliageStiffness; // 0x3c8(0x04)
	float FoliageStiffnessQuadratic; // 0x3cc(0x04)
	float FoliageDamping; // 0x3d0(0x04)
	float MaxDamageImpulse; // 0x3d4(0x04)
	float MaxTouchImpulse; // 0x3d8(0x04)
	float MaxForce; // 0x3dc(0x04)
	float Mass; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)

	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0x800 (Inherited: 0x7f0)
class UInteractiveFoliageComponent : public UStaticMeshComponent {
public:

	char pad_7F0[0x10]; // 0x7f0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x3b8 (Inherited: 0x3b0)
class AProceduralFoliageBlockingVolume : public AVolume {
public:

	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x3b0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0x128 (Inherited: 0x100)
class UProceduralFoliageComponent : public UActorComponent {
public:

	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x100(0x08)
	float TileOverlap; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct AVolume* SpawningVolume; // 0x110(0x08)
	struct FGuid ProceduralGuid; // 0x118(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Foliage.ProceduralFoliageSpawner
// Size: 0x78 (Inherited: 0x30)
class UProceduralFoliageSpawner : public UObject {
public:

	int32_t RandomSeed; // 0x30(0x04)
	float TileSize; // 0x34(0x04)
	int32_t NumUniqueTiles; // 0x38(0x04)
	float MinimumQuadTreeSize; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x48(0x10)
	bool bNeedsSimulation; // 0x58(0x01)
	char pad_59[0x1f]; // 0x59(0x1f)

	void Simulate(int32_t NumSteps); // Function Foliage.ProceduralFoliageSpawner.Simulate // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Foliage.ProceduralFoliageTile
// Size: 0x160 (Inherited: 0x30)
class UProceduralFoliageTile : public UObject {
public:

	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x30(0x08)
	char pad_38[0xa0]; // 0x38(0xa0)
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; // 0xd8(0x10)
	char pad_E8[0x78]; // 0xe8(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x3b8 (Inherited: 0x3b0)
class AProceduralFoliageVolume : public AVolume {
public:

	struct UProceduralFoliageComponent* ProceduralComponent; // 0x3b0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Foliage.FoliageType
// Size: 0x3a0 (Inherited: 0x30)
class UFoliageType : public UObject {
public:

	enum class EFoliageTypeMode FoliageTypeMode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FGuid UpdateGuid; // 0x34(0x10)
	float Density; // 0x44(0x04)
	float DensityAdjustmentFactor; // 0x48(0x04)
	float radius; // 0x4c(0x04)
	bool bSingleInstanceModeOverrideRadius; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float SingleInstanceModeRadius; // 0x54(0x04)
	enum class EFoliageScaling Scaling; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FFloatInterval ScaleX; // 0x5c(0x08)
	struct FFloatInterval ScaleY; // 0x64(0x08)
	struct FFloatInterval ScaleZ; // 0x6c(0x08)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x74(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float VertexColorMaskThreshold; // 0xa8(0x04)
	char VertexColorMaskInvert : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct FFloatInterval ZOffset; // 0xb0(0x08)
	char AlignToNormal : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float AlignMaxAngle; // 0xbc(0x04)
	char RandomYaw : 1; // 0xc0(0x01)
	char pad_C0_1 : 7; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float RandomPitchAngle; // 0xc4(0x04)
	struct FFloatInterval GroundSlopeAngle; // 0xc8(0x08)
	struct FFloatInterval Height; // 0xd0(0x08)
	struct TArray<struct FName> LandscapeLayers; // 0xd8(0x10)
	float MinimumLayerWeight; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<struct FName> ExclusionLandscapeLayers; // 0xf0(0x10)
	float MinimumExclusionLayerWeight; // 0x100(0x04)
	struct FName LandscapeLayer; // 0x104(0x08)
	char CollisionWithWorld : 1; // 0x10c(0x01)
	char pad_10C_1 : 7; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct FVector CollisionScale; // 0x110(0x0c)
	struct FBoxSphereBounds MeshBounds; // 0x11c(0x1c)
	struct FVector LowBoundOriginRadius; // 0x138(0x0c)
	enum class EComponentMobility Mobility; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	struct FInt32Interval CullDistance; // 0x148(0x08)
	struct FInt32Interval CullDistance_HD; // 0x150(0x08)
	char bEnableStaticLighting : 1; // 0x158(0x01)
	char CastShadow : 1; // 0x158(0x01)
	char CastShadow_HD : 1; // 0x158(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x158(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x158(0x01)
	char bCastDynamicShadow : 1; // 0x158(0x01)
	char bCastStaticShadow : 1; // 0x158(0x01)
	char bCastShadowAsTwoSided : 1; // 0x158(0x01)
	char bCastDynamicShadow_HD : 1; // 0x159(0x01)
	char bCastStaticShadow_HD : 1; // 0x159(0x01)
	char bCastShadowAsTwoSided_HD : 1; // 0x159(0x01)
	char bReceivesDecals : 1; // 0x159(0x01)
	char bOverrideLightMapRes : 1; // 0x159(0x01)
	char pad_159_5 : 3; // 0x159(0x01)
	char pad_15A[0x2]; // 0x15a(0x02)
	int32_t OverriddenLightMapRes; // 0x15c(0x04)
	enum class ELightmapType LightmapType; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	char bUseAsOccluder : 1; // 0x164(0x01)
	char pad_164_1 : 7; // 0x164(0x01)
	char pad_165[0x3]; // 0x165(0x03)
	char bVisibleInRayTracing : 1; // 0x168(0x01)
	char pad_168_1 : 7; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct FBodyInstance BodyInstance; // 0x170(0x120)
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x290(0x01)
	struct FLightingChannels LightingChannels; // 0x291(0x01)
	char pad_292[0x2]; // 0x292(0x02)
	char bRenderCustomDepth : 1; // 0x294(0x01)
	char pad_294_1 : 7; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	int32_t CustomDepthStencilValue; // 0x298(0x04)
	int32_t TranslucencySortPriority; // 0x29c(0x04)
	float CollisionRadius; // 0x2a0(0x04)
	float ShadeRadius; // 0x2a4(0x04)
	int32_t NumSteps; // 0x2a8(0x04)
	float InitialSeedDensity; // 0x2ac(0x04)
	float AverageSpreadDistance; // 0x2b0(0x04)
	float SpreadVariance; // 0x2b4(0x04)
	int32_t SeedsPerStep; // 0x2b8(0x04)
	int32_t DistributionSeed; // 0x2bc(0x04)
	float MaxInitialSeedOffset; // 0x2c0(0x04)
	bool bCanGrowInShade; // 0x2c4(0x01)
	bool bSpawnsInShade; // 0x2c5(0x01)
	char pad_2C6[0x2]; // 0x2c6(0x02)
	float MaxInitialAge; // 0x2c8(0x04)
	float MaxAge; // 0x2cc(0x04)
	float OverlapPriority; // 0x2d0(0x04)
	struct FFloatInterval ProceduralScale; // 0x2d4(0x08)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FRuntimeFloatCurve ScaleCurve; // 0x2e0(0xa0)
	int32_t ChangeCount; // 0x380(0x04)
	char ReapplyDensity : 1; // 0x384(0x01)
	char ReapplyRadius : 1; // 0x384(0x01)
	char ReapplyAlignToNormal : 1; // 0x384(0x01)
	char ReapplyRandomYaw : 1; // 0x384(0x01)
	char ReapplyScaling : 1; // 0x384(0x01)
	char ReapplyScaleX : 1; // 0x384(0x01)
	char ReapplyScaleY : 1; // 0x384(0x01)
	char ReapplyScaleZ : 1; // 0x384(0x01)
	char ReapplyRandomPitchAngle : 1; // 0x385(0x01)
	char ReapplyGroundSlope : 1; // 0x385(0x01)
	char ReapplyHeight : 1; // 0x385(0x01)
	char ReapplyLandscapeLayers : 1; // 0x385(0x01)
	char ReapplyZOffset : 1; // 0x385(0x01)
	char ReapplyCollisionWithWorld : 1; // 0x385(0x01)
	char ReapplyVertexColorMask : 1; // 0x385(0x01)
	char bEnableDensityScaling : 1; // 0x385(0x01)
	char pad_386[0x2]; // 0x386(0x02)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x388(0x10)
	int32_t VirtualTextureCullMips; // 0x398(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)

	void SetCullDistanceHD(int32_t InMin, int32_t InMax); // Function Foliage.FoliageType.SetCullDistanceHD // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Foliage.FoliageType_Actor
// Size: 0x3b8 (Inherited: 0x3a0)
class UFoliageType_Actor : public UFoliageType {
public:

	struct UClass* ActorClass; // 0x3a0(0x08)
	struct UClass* ActorClassHD; // 0x3a8(0x08)
	bool bShouldAttachToBaseComponent; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x3d8 (Inherited: 0x3a0)
class UFoliageType_InstancedStaticMesh : public UFoliageType {
public:

	struct UStaticMesh* Mesh; // 0x3a0(0x08)
	struct UStaticMesh* HDMesh; // 0x3a8(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x3b0(0x10)
	struct TArray<struct UMaterialInterface*> OverrideMaterials_HD; // 0x3c0(0x10)
	struct UClass* ComponentClass; // 0x3d0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
