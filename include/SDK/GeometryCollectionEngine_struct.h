
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : int {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosBreakingSortMethod_MAX = 5
};

// Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : int {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByHighestImpulse = 3,
	SortByNearestFirst = 4,
	Count = 5,
	EChaosCollisionSortMethod_MAX = 6
};

// Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : int {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosTrailingSortMethod_MAX = 5
};

// Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : int {
	HideNone = 0,
	HideWithCollision = 1,
	HideSelected = 2,
	HideWholeCollection = 3,
	HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
};

// Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : int {
	Chaos_Traansform = 0,
	Chaos_Max = 1
};

// Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : int {
	Chaos_Active = 0,
	Chaos_DynamicState = 1,
	Chaos_CollisionGroup = 2,
	Chaos_Max = 3
};

// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
// Size: 0x50 (Inherited: 0x00)
struct FGeomComponentCacheParameters {
public:

	enum class EGeometryCollectionCacheType CacheMode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UGeometryCollectionCache* TargetCache; // 0x08(0x08)
	float ReverseCacheBeginTime; // 0x10(0x04)
	bool SaveCollisionData; // 0x14(0x01)
	bool DoGenerateCollisionData; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	int32_t CollisionDataSizeMax; // 0x18(0x04)
	bool DoCollisionDataSpatialHash; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float CollisionDataSpatialHashRadius; // 0x20(0x04)
	int32_t MaxCollisionPerCell; // 0x24(0x04)
	bool SaveBreakingData; // 0x28(0x01)
	bool DoGenerateBreakingData; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t BreakingDataSizeMax; // 0x2c(0x04)
	bool DoBreakingDataSpatialHash; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float BreakingDataSpatialHashRadius; // 0x34(0x04)
	int32_t MaxBreakingPerCell; // 0x38(0x04)
	bool SaveTrailingData; // 0x3c(0x01)
	bool DoGenerateTrailingData; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	int32_t TrailingDataSizeMax; // 0x40(0x04)
	float TrailingMinSpeedThreshold; // 0x44(0x04)
	float TrailingMinVolumeThreshold; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
// Size: 0x58 (Inherited: 0x00)
struct FChaosCollisionEventData {
public:

	struct FVector Location; // 0x00(0x0c)
	struct FVector Normal; // 0x0c(0x0c)
	struct FVector Velocity1; // 0x18(0x0c)
	struct FVector Velocity2; // 0x24(0x0c)
	float Mass1; // 0x30(0x04)
	float Mass2; // 0x34(0x04)
	struct FVector Impulse; // 0x38(0x0c)
	char pad_44[0x14]; // 0x44(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
// Size: 0x20 (Inherited: 0x00)
struct FChaosBreakingEventData {
public:

	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	float Mass; // 0x18(0x04)
	int32_t ParticleIndex; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
// Size: 0x2c (Inherited: 0x00)
struct FChaosTrailingEventData {
public:

	struct FVector Location; // 0x00(0x0c)
	struct FVector Velocity; // 0x0c(0x0c)
	struct FVector AngularVelocity; // 0x18(0x0c)
	float Mass; // 0x24(0x04)
	int32_t ParticleIndex; // 0x28(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
// Size: 0x18 (Inherited: 0x00)
struct FChaosBreakingEventRequestSettings {
public:

	int32_t MaxNumberOfResults; // 0x00(0x04)
	float MinRadius; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinMass; // 0x0c(0x04)
	float MaxDistance; // 0x10(0x04)
	enum class EChaosBreakingSortMethod SortMethod; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
// Size: 0x18 (Inherited: 0x00)
struct FChaosCollisionEventRequestSettings {
public:

	int32_t MaxNumberResults; // 0x00(0x04)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinImpulse; // 0x0c(0x04)
	float MaxDistance; // 0x10(0x04)
	enum class EChaosCollisionSortMethod SortMethod; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
// Size: 0x18 (Inherited: 0x00)
struct FChaosTrailingEventRequestSettings {
public:

	int32_t MaxNumberOfResults; // 0x00(0x04)
	float MinMass; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float MinAngularSpeed; // 0x0c(0x04)
	float MaxDistance; // 0x10(0x04)
	enum class EChaosTrailingSortMethod SortMethod; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
// Size: 0x18 (Inherited: 0x00)
struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
public:

	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct AChaosSolverActor* Solver; // 0x08(0x08)
	struct AGeometryCollectionActor* GeometryCollection; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
// Size: 0x01 (Inherited: 0x00)
struct FGeometryCollectionDebugDrawWarningMessage {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
// Size: 0x24 (Inherited: 0x00)
struct FGeometryCollectionSizeSpecificData {
public:

	float MaxSize; // 0x00(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0x04(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32_t MinLevelSetResolution; // 0x08(0x04)
	int32_t MaxLevelSetResolution; // 0x0c(0x04)
	int32_t MinClusterLevelSetResolution; // 0x10(0x04)
	int32_t MaxClusterLevelSetResolution; // 0x14(0x04)
	int32_t CollisionObjectReductionPercentage; // 0x18(0x04)
	float CollisionParticlesFraction; // 0x1c(0x04)
	int32_t MaximumCollisionParticles; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
