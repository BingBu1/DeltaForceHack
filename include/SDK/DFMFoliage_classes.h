
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMFoliage.FoliageCollisionData
// Size: 0x740 (Inherited: 0x378)
class AFoliageCollisionData : public AActor {
public:

	enum class EFoliageCollisionName Name; // 0x378(0x01)
	enum class EFoliageCollisionType CollisionType; // 0x379(0x01)
	char pad_37A[0x2]; // 0x37a(0x02)
	float VoxelSize; // 0x37c(0x04)
	int32_t VoxelNum; // 0x380(0x04)
	bool bDrawDebug; // 0x384(0x01)
	bool bSneakOpt; // 0x385(0x01)
	char pad_386[0x2]; // 0x386(0x02)
	float DrawGrassRange; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct UCurveFloat* BlockRateDistanceCurve; // 0x390(0x08)
	struct TArray<struct FFoliageCollisionCategory> ImportFoliage; // 0x398(0x10)
	struct TArray<struct FFoliageData> Foliages; // 0x3a8(0x10)
	struct TArray<struct FFoliageData> SneakFoliages; // 0x3b8(0x10)
	char pad_3C8[0x378]; // 0x3c8(0x378)

	bool TestOverlapSVO(struct FVector Center, struct FVector HalfExtent); // Function DFMFoliage.FoliageCollisionData.TestOverlapSVO // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMFoliage.FoliageCollision
// Size: 0x50 (Inherited: 0x38)
class UFoliageCollision : public UWorldSubsystem {
public:

	struct TArray<struct AFoliageCollisionData*> FoliageDataTable; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)

	bool TestOverlap(enum class EFoliageCollisionName Name, struct FVector Center, struct FVector HalfExtent); // Function DFMFoliage.FoliageCollision.TestOverlap // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
