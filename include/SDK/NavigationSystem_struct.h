
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : int {
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4
};

// Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : int {
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3
};

// Enum NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : int {
	Override = 0,
	Append = 1,
	Skip = 2,
	ENavSystemOverridePolicy_MAX = 3
};

// Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : int {
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3
};

// ScriptStruct NavigationSystem.NavCollisionBox
// Size: 0x18 (Inherited: 0x00)
struct FNavCollisionBox {
public:

	struct FVector offset; // 0x00(0x0c)
	struct FVector Extent; // 0x0c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct NavigationSystem.NavCollisionCylinder
// Size: 0x14 (Inherited: 0x00)
struct FNavCollisionCylinder {
public:

	struct FVector offset; // 0x00(0x0c)
	float radius; // 0x0c(0x04)
	float Height; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct NavigationSystem.SupportedAreaData
// Size: 0x20 (Inherited: 0x00)
struct FSupportedAreaData {
public:

	struct FString AreaClassName; // 0x00(0x10)
	int32_t AreaID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UClass* AreaClass; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct NavigationSystem.NavGraphNode
// Size: 0x18 (Inherited: 0x00)
struct FNavGraphNode {
public:

	struct UObject* Owner; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct NavigationSystem.NavGraphEdge
// Size: 0x18 (Inherited: 0x00)
struct FNavGraphEdge {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct NavigationSystem.NavigationFilterFlags
// Size: 0x04 (Inherited: 0x00)
struct FNavigationFilterFlags {
public:

	char bNavFlag0 : 1; // 0x00(0x01)
	char bNavFlag1 : 1; // 0x00(0x01)
	char bNavFlag2 : 1; // 0x00(0x01)
	char bNavFlag3 : 1; // 0x00(0x01)
	char bNavFlag4 : 1; // 0x00(0x01)
	char bNavFlag5 : 1; // 0x00(0x01)
	char bNavFlag6 : 1; // 0x00(0x01)
	char bNavFlag7 : 1; // 0x00(0x01)
	char bNavFlag8 : 1; // 0x01(0x01)
	char bNavFlag9 : 1; // 0x01(0x01)
	char bNavFlag10 : 1; // 0x01(0x01)
	char bNavFlag11 : 1; // 0x01(0x01)
	char bNavFlag12 : 1; // 0x01(0x01)
	char bNavFlag13 : 1; // 0x01(0x01)
	char bNavFlag14 : 1; // 0x01(0x01)
	char bNavFlag15 : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct NavigationSystem.NavigationFilterArea
// Size: 0x18 (Inherited: 0x00)
struct FNavigationFilterArea {
public:

	struct UClass* AreaClass; // 0x00(0x08)
	float TravelCostOverride; // 0x08(0x04)
	float EnteringCostOverride; // 0x0c(0x04)
	char bIsExcluded : 1; // 0x10(0x01)
	char bOverrideTravelCost : 1; // 0x10(0x01)
	char bOverrideEnteringCost : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// Size: 0x60 (Inherited: 0x58)
struct FNavLinkCustomInstanceData : public FActorComponentInstanceData {
public:

	uint32_t NavLinkUserId; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
// Size: 0x40 (Inherited: 0x00)
struct FRecastNavMeshGenerationProperties {
public:

	int32_t TilePoolSize; // 0x00(0x04)
	float TileSizeUU; // 0x04(0x04)
	float CellSize; // 0x08(0x04)
	float CellHeight; // 0x0c(0x04)
	float AgentRadius; // 0x10(0x04)
	float AgentHeight; // 0x14(0x04)
	float AgentMaxSlope; // 0x18(0x04)
	float AgentMaxStepHeight; // 0x1c(0x04)
	float MinRegionArea; // 0x20(0x04)
	float MergeRegionSize; // 0x24(0x04)
	float MaxSimplificationError; // 0x28(0x04)
	int32_t TileNumberHardLimit; // 0x2c(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x30(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t RegionChunkSplits; // 0x34(0x04)
	int32_t LayerChunkSplits; // 0x38(0x04)
	char bSortNavigationAreasByCost : 1; // 0x3c(0x01)
	char bPerformVoxelFiltering : 1; // 0x3c(0x01)
	char bMarkLowHeightAreas : 1; // 0x3c(0x01)
	char bFilterLowSpanSequences : 1; // 0x3c(0x01)
	char bFilterLowSpanFromTileCache : 1; // 0x3c(0x01)
	char bFixedTilePoolSize : 1; // 0x3c(0x01)
	char pad_3C_6 : 2; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
