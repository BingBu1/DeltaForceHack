
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class NavigationSystem.CrowdManagerBase
// Size: 0x30 (Inherited: 0x30)
class UCrowdManagerBase : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavCollision
// Size: 0xe0 (Inherited: 0x78)
class UNavCollision : public UNavCollisionBase {
public:

	char pad_78[0x10]; // 0x78(0x10)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x88(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x98(0x10)
	struct UClass* AreaClass; // 0xa8(0x08)
	char bGatherConvexGeometry : 1; // 0xb0(0x01)
	char bCreateOnClient : 1; // 0xb0(0x01)
	char pad_B0_2 : 6; // 0xb0(0x01)
	char pad_B1[0x2f]; // 0xb1(0x2f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavigationGraphNode
// Size: 0x378 (Inherited: 0x378)
class ANavigationGraphNode : public AActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x270 (Inherited: 0x240)
class UNavigationGraphNodeComponent : public USceneComponent {
public:

	struct FNavGraphNode Node; // 0x240(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent; // 0x258(0x08)
	struct UNavigationGraphNodeComponent* PrevNodeComponent; // 0x260(0x08)
	char pad_268[0x8]; // 0x268(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavigationInvokerComponent
// Size: 0x108 (Inherited: 0x100)
class UNavigationInvokerComponent : public UActorComponent {
public:

	float TileGenerationRadius; // 0x100(0x04)
	float TileRemovalRadius; // 0x104(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavigationPath
// Size: 0x90 (Inherited: 0x30)
class UNavigationPath : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char PathUpdatedNotifier[0x10]; // 0x30(0x10)
	struct TArray<struct FVector> PathPoints; // 0x40(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x50(0x01)
	char pad_51[0x3f]; // 0x51(0x3f)

	bool IsValid(); // Function NavigationSystem.NavigationPath.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavigationPathGenerator
// Size: 0x30 (Inherited: 0x30)
class UNavigationPathGenerator : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavigationSystemV1
// Size: 0x5a0 (Inherited: 0x30)
class UNavigationSystemV1 : public UNavigationSystemBase {
public:

	struct ANavigationData* MainNavData; // 0x30(0x08)
	struct ANavigationData* AbstractNavData; // 0x38(0x08)
	struct FName DefaultAgentName; // 0x40(0x08)
	/*struct TSoftClassPtr<UObject>*/char CrowdManagerClass[0x28]; // 0x48(0x28)
	char bAutoCreateNavigationData : 1; // 0x70(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x70(0x01)
	char bAllowClientSideNavigation : 1; // 0x70(0x01)
	char bShouldDiscardSubLevelNavData : 1; // 0x70(0x01)
	char bTickWhilePaused : 1; // 0x70(0x01)
	char bSupportRebuilding : 1; // 0x70(0x01)
	char bInitialBuildingLocked : 1; // 0x70(0x01)
	char pad_70_7 : 1; // 0x70(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x71(0x01)
	char bNavmeshPolyRegion : 1; // 0x71(0x01)
	char bCrowdNavWalking : 1; // 0x71(0x01)
	char pad_71_3 : 5; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float ActiveTilesUpdateInterval; // 0x7c(0x04)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x80(0x10)
	struct FNavAgentSelector SupportedAgentsMask; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<struct ANavigationData*> NavDataSet; // 0x98(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; // 0xa8(0x10)
	char pad_B8[0x10]; // 0xb8(0x10)
	/*struct FMulticastInlineDelegate*/char OnNavDataRegisteredEvent[0x10]; // 0xc8(0x10)
	/*struct FMulticastInlineDelegate*/char OnMainNavDataRegisteredEvent[0x10]; // 0xd8(0x10)
	/*struct FMulticastInlineDelegate*/char OnNavigationGenerationFinishedDelegate[0x10]; // 0xe8(0x10)
	char pad_F8[0xdc]; // 0xf8(0xdc)
	enum class FNavigationSystemRunMode OperationMode; // 0x1d4(0x01)
	char pad_1D5[0x3a7]; // 0x1d5(0x3a7)
	float DirtyAreasUpdateFreq; // 0x57c(0x04)
	char pad_580[0x20]; // 0x580(0x20)

	void UnregisterNavigationInvoker(struct AActor* Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x60 (Inherited: 0x58)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig {
public:

	char bStrictlyStatic : 1; // 0x58(0x01)
	char bCreateOnClient : 1; // 0x58(0x01)
	char bAutoSpawnMissingNavData : 1; // 0x58(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x58(0x01)
	char pad_58_4 : 4; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavigationTestingActor
// Size: 0x460 (Inherited: 0x378)
class ANavigationTestingActor : public AActor {
public:

	char pad_378[0x10]; // 0x378(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x388(0x08)
	struct UNavigationInvokerComponent* InvokerComponent; // 0x390(0x08)
	char bActAsNavigationInvoker : 1; // 0x398(0x01)
	char pad_398_1 : 7; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct FNavAgentProperties NavAgentProps; // 0x3a0(0x30)
	struct FVector QueryingExtent; // 0x3d0(0x0c)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct ANavigationData* MyNavData; // 0x3e0(0x08)
	struct FVector ProjectedLocation; // 0x3e8(0x0c)
	char bProjectedLocationValid : 1; // 0x3f4(0x01)
	char bSearchStart : 1; // 0x3f4(0x01)
	char bBacktracking : 1; // 0x3f4(0x01)
	char bUseHierarchicalPathfinding : 1; // 0x3f4(0x01)
	char bGatherDetailedInfo : 1; // 0x3f4(0x01)
	char bDrawDistanceToWall : 1; // 0x3f4(0x01)
	char bShowNodePool : 1; // 0x3f4(0x01)
	char bShowBestPath : 1; // 0x3f4(0x01)
	char bShowDiffWithPreviousStep : 1; // 0x3f5(0x01)
	char bShouldBeVisibleInGame : 1; // 0x3f5(0x01)
	char pad_3F5_2 : 6; // 0x3f5(0x01)
	char pad_3F6[0x2]; // 0x3f6(0x02)
	enum class ENavCostDisplay CostDisplayMode; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	struct FVector2D TextCanvasOffset; // 0x3fc(0x08)
	char bPathExist : 1; // 0x404(0x01)
	char bPathIsPartial : 1; // 0x404(0x01)
	char bPathSearchOutOfNodes : 1; // 0x404(0x01)
	char pad_404_3 : 5; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	float PathfindingTime; // 0x408(0x04)
	float PathCost; // 0x40c(0x04)
	int32_t PathfindingSteps; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x418(0x08)
	struct UClass* FilterClass; // 0x420(0x08)
	int32_t ShowStepIndex; // 0x428(0x04)
	float OffsetFromCornersDistance; // 0x42c(0x04)
	char pad_430[0x30]; // 0x430(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavLinkComponent
// Size: 0x580 (Inherited: 0x560)
class UNavLinkComponent : public UPrimitiveComponent {
public:

	char pad_560[0x8]; // 0x560(0x08)
	struct TArray<struct FNavigationLink> Links; // 0x568(0x10)
	char pad_578[0x8]; // 0x578(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavLinkCustomInterface
// Size: 0x30 (Inherited: 0x30)
class UNavLinkCustomInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavLinkHostInterface
// Size: 0x30 (Inherited: 0x30)
class UNavLinkHostInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x560 (Inherited: 0x560)
class UNavLinkRenderingComponent : public UPrimitiveComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavLinkTrivial
// Size: 0x58 (Inherited: 0x58)
class UNavLinkTrivial : public UNavLinkDefinition {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x3b8 (Inherited: 0x3b0)
class ANavMeshBoundsVolume : public AVolume {
public:

	struct FNavAgentSelector SupportedAgents; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x570 (Inherited: 0x560)
class UNavMeshRenderingComponent : public UPrimitiveComponent {
public:

	char pad_560[0x10]; // 0x560(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavModifierVolume
// Size: 0x3c0 (Inherited: 0x3b0)
class ANavModifierVolume : public AVolume {
public:

	char pad_3B0[0x8]; // 0x3b0(0x08)
	struct UClass* AreaClass; // 0x3b8(0x08)

	void SetAreaClass(struct UClass* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavNodeInterface
// Size: 0x30 (Inherited: 0x30)
class UNavNodeInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavSystemConfigOverride
// Size: 0x388 (Inherited: 0x378)
class ANavSystemConfigOverride : public AActor {
public:

	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x378(0x08)
	enum class ENavSystemOverridePolicy OverridePolicy; // 0x380(0x01)
	char bLoadOnClient : 1; // 0x381(0x01)
	char pad_381_1 : 7; // 0x381(0x01)
	char pad_382[0x6]; // 0x382(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavTestRenderingComponent
// Size: 0x560 (Inherited: 0x560)
class UNavTestRenderingComponent : public UPrimitiveComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x50 (Inherited: 0x38)
class URecastNavMeshDataChunk : public UNavigationDataChunk {
public:

	char pad_38[0x18]; // 0x38(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavArea
// Size: 0x50 (Inherited: 0x38)
class UNavArea : public UNavAreaBase {
public:

	float DefaultCost; // 0x38(0x04)
	float FixedAreaEnteringCost; // 0x3c(0x04)
	struct FColor DrawColor; // 0x40(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x44(0x04)
	char bSupportsAgent0 : 1; // 0x48(0x01)
	char bSupportsAgent1 : 1; // 0x48(0x01)
	char bSupportsAgent2 : 1; // 0x48(0x01)
	char bSupportsAgent3 : 1; // 0x48(0x01)
	char bSupportsAgent4 : 1; // 0x48(0x01)
	char bSupportsAgent5 : 1; // 0x48(0x01)
	char bSupportsAgent6 : 1; // 0x48(0x01)
	char bSupportsAgent7 : 1; // 0x48(0x01)
	char bSupportsAgent8 : 1; // 0x49(0x01)
	char bSupportsAgent9 : 1; // 0x49(0x01)
	char bSupportsAgent10 : 1; // 0x49(0x01)
	char bSupportsAgent11 : 1; // 0x49(0x01)
	char bSupportsAgent12 : 1; // 0x49(0x01)
	char bSupportsAgent13 : 1; // 0x49(0x01)
	char bSupportsAgent14 : 1; // 0x49(0x01)
	char bSupportsAgent15 : 1; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavigationQueryFilter
// Size: 0x50 (Inherited: 0x30)
class UNavigationQueryFilter : public UObject {
public:

	struct TArray<struct FNavigationFilterArea> Areas; // 0x30(0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x40(0x04)
	struct FNavigationFilterFlags ExcludeFlags; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavigationData
// Size: 0x560 (Inherited: 0x378)
class ANavigationData : public AActor {
public:

	char pad_378[0x8]; // 0x378(0x08)
	struct UPrimitiveComponent* RenderingComp; // 0x380(0x08)
	struct FNavDataConfig NavDataConfig; // 0x388(0x78)
	char bEnableDrawing : 1; // 0x400(0x01)
	char bForceRebuildOnLoad : 1; // 0x400(0x01)
	char bAutoDestroyWhenNoNavigation : 1; // 0x400(0x01)
	char bCanBeMainNavData : 1; // 0x400(0x01)
	char bCanSpawnOnRebuild : 1; // 0x400(0x01)
	char bRebuildAtRuntime : 1; // 0x400(0x01)
	char pad_400_6 : 2; // 0x400(0x01)
	char pad_401[0x3]; // 0x401(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	float ObservedPathsTickInterval; // 0x408(0x04)
	uint32_t DataVersion; // 0x40c(0x04)
	char pad_410[0xe8]; // 0x410(0xe8)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x4f8(0x10)
	char pad_508[0x58]; // 0x508(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavRelevantComponent
// Size: 0x130 (Inherited: 0x100)
class UNavRelevantComponent : public UActorComponent {
public:

	char pad_100[0x24]; // 0x100(0x24)
	char bAttachToOwnersRoot : 1; // 0x124(0x01)
	char pad_124_1 : 7; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	struct UObject* CachedNavParent; // 0x128(0x08)

	void SetNavigationRelevancy(bool bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavArea_Bumpy
// Size: 0x50 (Inherited: 0x50)
class UNavArea_Bumpy : public UNavArea {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavArea_Default
// Size: 0x50 (Inherited: 0x50)
class UNavArea_Default : public UNavArea {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavArea_LowHeight
// Size: 0x50 (Inherited: 0x50)
class UNavArea_LowHeight : public UNavArea {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavArea_Null
// Size: 0x50 (Inherited: 0x50)
class UNavArea_Null : public UNavArea {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavArea_Obstacle
// Size: 0x50 (Inherited: 0x50)
class UNavArea_Obstacle : public UNavArea {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavAreaMeta
// Size: 0x50 (Inherited: 0x50)
class UNavAreaMeta : public UNavArea {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.RecastFilter_Bumpy
// Size: 0x50 (Inherited: 0x50)
class URecastFilter_Bumpy : public UNavigationQueryFilter {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x50 (Inherited: 0x50)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.AbstractNavData
// Size: 0x560 (Inherited: 0x560)
class AAbstractNavData : public ANavigationData {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavigationGraph
// Size: 0x560 (Inherited: 0x560)
class ANavigationGraph : public ANavigationData {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.RecastNavMesh
// Size: 0x7e0 (Inherited: 0x560)
class ARecastNavMesh : public ANavigationData {
public:

	char bDrawTriangleEdges : 1; // 0x560(0x01)
	char bDrawPolyEdges : 1; // 0x560(0x01)
	char bDrawFilledPolys : 1; // 0x560(0x01)
	char bDrawFilledRegions : 1; // 0x560(0x01)
	char bDrawPilotVoxelBlock : 1; // 0x560(0x01)
	char bDrawTileCont : 1; // 0x560(0x01)
	char bDrawNavMeshEdges : 1; // 0x560(0x01)
	char bDrawTileBounds : 1; // 0x560(0x01)
	char bDrawPathCollidingGeometry : 1; // 0x561(0x01)
	char bDrawTileLabels : 1; // 0x561(0x01)
	char bDrawPolygonLabels : 1; // 0x561(0x01)
	char bDrawDefaultPolygonCost : 1; // 0x561(0x01)
	char bDrawLabelsOnPathNodes : 1; // 0x561(0x01)
	char bDrawNavLinks : 1; // 0x561(0x01)
	char bDrawFailedNavLinks : 1; // 0x561(0x01)
	char bDrawClusters : 1; // 0x561(0x01)
	char bDrawOctree : 1; // 0x562(0x01)
	char bDrawOctreeDetails : 1; // 0x562(0x01)
	char bDrawMarkedForbiddenPolys : 1; // 0x562(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x562(0x01)
	char bDrawNavMesh : 1; // 0x562(0x01)
	char pad_562_5 : 3; // 0x562(0x01)
	char pad_563[0x1]; // 0x563(0x01)
	float DrawOffset; // 0x564(0x04)
	char bFixedTilePoolSize : 1; // 0x568(0x01)
	char pad_568_1 : 7; // 0x568(0x01)
	char pad_569[0x3]; // 0x569(0x03)
	int32_t TilePoolSize; // 0x56c(0x04)
	float TileSizeUU; // 0x570(0x04)
	float CellSize; // 0x574(0x04)
	float CellHeight; // 0x578(0x04)
	float AgentRadius; // 0x57c(0x04)
	float AgentHeight; // 0x580(0x04)
	float AgentMaxHeight; // 0x584(0x04)
	float AgentMaxSlope; // 0x588(0x04)
	float AgentMaxStepHeight; // 0x58c(0x04)
	float MinRegionArea; // 0x590(0x04)
	float MergeRegionSize; // 0x594(0x04)
	float MaxSimplificationError; // 0x598(0x04)
	float AvgLayersPerTile; // 0x59c(0x04)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x5a0(0x04)
	int32_t TileNumberHardLimit; // 0x5a4(0x04)
	int32_t PolyRefTileBits; // 0x5a8(0x04)
	int32_t PolyRefNavPolyBits; // 0x5ac(0x04)
	int32_t PolyRefSaltBits; // 0x5b0(0x04)
	struct FVector NavMeshOriginOffset; // 0x5b4(0x0c)
	char bOptimizePolyLand : 1; // 0x5c0(0x01)
	char bOptimizeDetailMesh : 1; // 0x5c0(0x01)
	char bOptimizeBVTree : 1; // 0x5c0(0x01)
	char bOptimizeTileCache : 1; // 0x5c0(0x01)
	char bDetourPilot : 1; // 0x5c0(0x01)
	char bRunMapVoxel : 1; // 0x5c0(0x01)
	char bDebugLandNavMesh : 1; // 0x5c0(0x01)
	char pad_5C0_7 : 1; // 0x5c0(0x01)
	char pad_5C1[0x3]; // 0x5c1(0x03)
	float DetourPilotSize; // 0x5c4(0x04)
	float AvoidRadius; // 0x5c8(0x04)
	float DefaultDrawDistance; // 0x5cc(0x04)
	float DefaultMaxSearchNodes; // 0x5d0(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x5d4(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x5d8(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x5d9(0x01)
	char pad_5DA[0x2]; // 0x5da(0x02)
	int32_t RegionChunkSplits; // 0x5dc(0x04)
	int32_t LayerChunkSplits; // 0x5e0(0x04)
	char bSortNavigationAreasByCost : 1; // 0x5e4(0x01)
	char bPerformVoxelFiltering : 1; // 0x5e4(0x01)
	char bMarkLowHeightAreas : 1; // 0x5e4(0x01)
	char bFilterLowSpanSequences : 1; // 0x5e4(0x01)
	char bFilterLowSpanFromTileCache : 1; // 0x5e4(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x5e4(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x5e4(0x01)
	char bStoreEmptyTileLayers : 1; // 0x5e4(0x01)
	char bUseVirtualFilters : 1; // 0x5e5(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x5e5(0x01)
	char bAllowCookNavData : 1; // 0x5e5(0x01)
	char pad_5E5_3 : 5; // 0x5e5(0x01)
	char pad_5E6[0x2]; // 0x5e6(0x02)
	float DetailEdgeSampleDist; // 0x5e8(0x04)
	float DetailEdgeSampleError; // 0x5ec(0x04)
	float DetailAreaSampleDist; // 0x5f0(0x04)
	float DetailAreaSampleError; // 0x5f4(0x04)
	float FloodFillExtent; // 0x5f8(0x04)
	float DetailAreaCheckBumpyDist; // 0x5fc(0x04)
	float DetailAreaCheckBumpyHeight; // 0x600(0x04)
	char bUseVoxelCache : 1; // 0x604(0x01)
	char pad_604_1 : 7; // 0x604(0x01)
	char pad_605[0x3]; // 0x605(0x03)
	float TileSetUpdateInterval; // 0x608(0x04)
	float HeuristicScale; // 0x60c(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x610(0x04)
	char pad_614[0x1cc]; // 0x614(0x1cc)

	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UClass* OldArea, struct UClass* NewArea, bool ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavLinkCustomComponent
// Size: 0x1e8 (Inherited: 0x130)
class UNavLinkCustomComponent : public UNavRelevantComponent {
public:

	char pad_130[0x8]; // 0x130(0x08)
	float SnapRadius; // 0x138(0x04)
	uint32_t NavLinkUserId; // 0x13c(0x04)
	uint32_t ExtData; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct UClass* EnabledAreaClass; // 0x148(0x08)
	struct UClass* DisabledAreaClass; // 0x150(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x158(0x04)
	struct FVector LinkRelativeStart; // 0x15c(0x0c)
	struct FVector LinkRelativeEnd; // 0x168(0x0c)
	enum class ENavLinkDirection LinkDirection; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	char bLinkEnabled : 1; // 0x178(0x01)
	char bNotifyWhenEnabled : 1; // 0x178(0x01)
	char bNotifyWhenDisabled : 1; // 0x178(0x01)
	char bCreateBoxObstacle : 1; // 0x178(0x01)
	char pad_178_4 : 4; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	struct FVector ObstacleOffset; // 0x17c(0x0c)
	struct FVector ObstacleExtent; // 0x188(0x0c)
	char pad_194[0x4]; // 0x194(0x04)
	struct UClass* ObstacleAreaClass; // 0x198(0x08)
	float BroadcastRadius; // 0x1a0(0x04)
	float BroadcastInterval; // 0x1a4(0x04)
	enum class ECollisionChannel BroadcastChannel; // 0x1a8(0x01)
	char pad_1A9[0x3f]; // 0x1a9(0x3f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavModifierComponent
// Size: 0x190 (Inherited: 0x130)
class UNavModifierComponent : public UNavRelevantComponent {
public:

	struct UClass* AreaClass; // 0x130(0x08)
	struct FVector FailsafeExtent; // 0x138(0x0c)
	char bIncludeAgentHeight : 1; // 0x144(0x01)
	char pad_144_1 : 7; // 0x144(0x01)
	char pad_145[0x4b]; // 0x145(0x4b)

	void SetAreaClass(struct UClass* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0xd0 (Inherited: 0x50)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta {
public:

	struct UClass* Agent0Area; // 0x50(0x08)
	struct UClass* Agent1Area; // 0x58(0x08)
	struct UClass* Agent2Area; // 0x60(0x08)
	struct UClass* Agent3Area; // 0x68(0x08)
	struct UClass* Agent4Area; // 0x70(0x08)
	struct UClass* Agent5Area; // 0x78(0x08)
	struct UClass* Agent6Area; // 0x80(0x08)
	struct UClass* Agent7Area; // 0x88(0x08)
	struct UClass* Agent8Area; // 0x90(0x08)
	struct UClass* Agent9Area; // 0x98(0x08)
	struct UClass* Agent10Area; // 0xa0(0x08)
	struct UClass* Agent11Area; // 0xa8(0x08)
	struct UClass* Agent12Area; // 0xb0(0x08)
	struct UClass* Agent13Area; // 0xb8(0x08)
	struct UClass* Agent14Area; // 0xc0(0x08)
	struct UClass* Agent15Area; // 0xc8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
