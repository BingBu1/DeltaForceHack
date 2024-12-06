
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum OpenWorldStreaming.EInstanceAreaTyep
enum class EInstanceAreaTyep : int {
	AABB = 0,
	OBB = 1,
	CYLINDRICAL = 2,
	EInstanceAreaTyep_MAX = 3
};

// Enum OpenWorldStreaming.EOpenWorldProfilerSampleMethod
enum class EOpenWorldProfilerSampleMethod : int {
	NavMesh = 0,
	Collision = 1,
	EOpenWorldProfilerSampleMethod_MAX = 2
};

// Enum OpenWorldStreaming.EOpenWorldStreamingImportance
enum class EOpenWorldStreamingImportance : int {
	Necessary = 0,
	Major = 1,
	General = 2,
	Num = 3,
	All = 4,
	None = 5,
	EOpenWorldStreamingImportance_MAX = 6
};

// Enum OpenWorldStreaming.EOpenWorldFilterType
enum class EOpenWorldFilterType : int {
	Runtime = 0,
	Editor = 1,
	EOpenWorldFilterType_MAX = 2
};

// ScriptStruct OpenWorldStreaming.DSMapAreaSettings
// Size: 0x24 (Inherited: 0x00)
struct FDSMapAreaSettings {
public:

	struct FName MapName; // 0x00(0x08)
	struct FBox MapBound; // 0x08(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.EditorLevelInfo
// Size: 0x28 (Inherited: 0x00)
struct FEditorLevelInfo {
public:

	struct FString LevelPath; // 0x00(0x10)
	struct FString RealLevelPath; // 0x10(0x10)
	bool bLoadLevel; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.GamePlayAreaIndexInfo
// Size: 0x50 (Inherited: 0x00)
struct FGamePlayAreaIndexInfo {
public:

	struct TMap<struct FString, struct FMapGridKeyInfo> AreaMeshTypes; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.MapGridKeyInfo
// Size: 0x10 (Inherited: 0x00)
struct FMapGridKeyInfo {
public:

	struct TArray<struct FIntPoint> GridKeyInfos; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.GamePlayAreaInfo
// Size: 0x58 (Inherited: 0x00)
struct FGamePlayAreaInfo {
public:

	enum class EInstanceAreaTyep InstanceAreaType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<struct FIntPoint, struct FGridMeshInstances> GridMeshInstances; // 0x08(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.GridMeshInstances
// Size: 0x10 (Inherited: 0x00)
struct FGridMeshInstances {
public:

	struct TArray<struct FGamePlayMeshInstanceInfo> MeshInstances; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.GamePlayMeshInstanceInfo
// Size: 0x34 (Inherited: 0x00)
struct FGamePlayMeshInstanceInfo {
public:

	struct FVector InstanceCenter; // 0x00(0x0c)
	struct FRotator InstanceRotation; // 0x0c(0x0c)
	struct FVector InstanceScale; // 0x18(0x0c)
	float InstanceZOffset; // 0x24(0x04)
	struct FVector InstanceSize; // 0x28(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.GamePlayAreaBuildConfig
// Size: 0x20 (Inherited: 0x00)
struct FGamePlayAreaBuildConfig {
public:

	struct FString ConfigName; // 0x00(0x10)
	struct TArray<struct FGamePlayAreaTypeInfo> GamePlayAreaTypeInfos; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.GamePlayAreaTypeInfo
// Size: 0x1c (Inherited: 0x00)
struct FGamePlayAreaTypeInfo {
public:

	enum class EInstanceAreaTyep InstanceAreaType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector CenterOffset; // 0x04(0x0c)
	struct FVector DefineSize; // 0x10(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.CacheHISMGroupDataInfo
// Size: 0x18 (Inherited: 0x00)
struct FCacheHISMGroupDataInfo {
public:

	int32_t TargetHISMID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCacheHISMDataInfo> Infos; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.CacheHISMDataInfo
// Size: 0x0c (Inherited: 0x00)
struct FCacheHISMDataInfo {
public:

	char pad_0[0x4]; // 0x00(0x04)
	int32_t BeginInstanceID; // 0x04(0x04)
	int32_t EndInstanceID; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.LandscapeBlockSimpleCollision
// Size: 0x28 (Inherited: 0x00)
struct FLandscapeBlockSimpleCollision {
public:

	struct FIntPoint BlockIndex; // 0x00(0x08)
	struct FVector LandscapeCenter; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct ULandscapeSimpleCollisionComponent*> SimpleCollisionComponents; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.OnlySimpleCollisionParams
// Size: 0x28 (Inherited: 0x00)
struct FOnlySimpleCollisionParams {
public:

	int32_t CurrCollisionMipLevel; // 0x00(0x04)
	int32_t TotalCollisionMipNum; // 0x04(0x04)
	struct TArray<int32_t> SimpleCollisionMipSizeQuads; // 0x08(0x10)
	struct TArray<float> CollisionMipScale; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.CompositedCollisionParams
// Size: 0x0c (Inherited: 0x00)
struct FCompositedCollisionParams {
public:

	int32_t CollisionSizeQuads; // 0x00(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x04(0x04)
	float CollisionScale; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.LandscapeSimpleCollisionSection
// Size: 0x48 (Inherited: 0x00)
struct FLandscapeSimpleCollisionSection {
public:

	bool bIsClient; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t NumSubsections; // 0x04(0x04)
	int32_t SubsectionSizeQuads; // 0x08(0x04)
	int32_t ComponentSizeQuads; // 0x0c(0x04)
	float SectionSize; // 0x10(0x04)
	int32_t EditorVisiableDistance; // 0x14(0x04)
	struct FIntPoint SectionID; // 0x18(0x08)
	struct FVector LandscapeCenter; // 0x20(0x0c)
	struct FVector SectionLocation; // 0x2c(0x0c)
	struct TArray<struct ULandscapeSimpleCollisionData*> SectionData; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.CollisionDataAssetPaths
// Size: 0x18 (Inherited: 0x00)
struct FCollisionDataAssetPaths {
public:

	struct FIntPoint SectionID; // 0x00(0x08)
	/*struct TArray<struct TSoftObjectPtr<ULandscapeSimpleCollisionData>>*/char AssetPaths[0x10]; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.OpenWorldStreamingCollection
// Size: 0x3f0 (Inherited: 0x00)
struct FOpenWorldStreamingCollection {
public:

	enum class EOpenWorldStreamingImportance ShowingImportance; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FIntPoint AssetProgress; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	/*struct TSet<struct UOpenWorldStreamingLevel*>*/char MarkingLevels[0x50]; // 0x10(0x50)
	/*struct TSet<struct UOpenWorldStreamingLevel*>*/char MarkedLevels[0x50]; // 0x60(0x50)
	/*struct TSet<struct UOpenWorldStreamingLevel*>*/char ShownLevels[0x50]; // 0xb0(0x50)
	/*struct TSet<struct UOpenWorldStreamingLevel*>*/char HiddenLevels[0x50]; // 0x100(0x50)
	/*struct TSet<struct UOpenWorldStreamingLevel*>*/char ShowingLevels[0x50]; // 0x150(0x50)
	/*struct TSet<struct UOpenWorldStreamingLevel*>*/char HidingLevels[0x50]; // 0x1a0(0x50)
	/*struct TSet<struct UOpenWorldStreamingLevel*>*/char PendingLevels[0x50]; // 0x1f0(0x50)
	/*struct TSet<struct UOpenWorldStreamingLevel*>*/char ProgressLevels[0x50]; // 0x240(0x50)
	/*struct TSet<struct UOpenWorldStreamingLevel*>*/char LODLevels[0x50]; // 0x290(0x50)
	/*struct TSet<struct UOpenWorldStreamingLevel*>*/char PreloadedLevels[0x50]; // 0x2e0(0x50)
	struct TMap<struct FName, struct UOpenWorldStreamingLevel*> RegisteredLevels; // 0x330(0x50)
	float PendingStartSeconds; // 0x380(0x04)
	char pad_384[0x6c]; // 0x384(0x6c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.OpenWorldFoliageScalabilityRowBase
// Size: 0x120 (Inherited: 0x08)
struct FOpenWorldFoliageScalabilityRowBase : public FTableRowBase {
public:

	/*struct TSoftObjectPtr<UStaticMesh>*/char FoliageMesh[0x28]; // 0x08(0x28)
	/*struct TSoftObjectPtr<UStaticMesh>*/char Level1[0x28]; // 0x30(0x28)
	/*struct TSoftObjectPtr<UStaticMesh>*/char Level2[0x28]; // 0x58(0x28)
	/*struct TSoftObjectPtr<UStaticMesh>*/char Level3[0x28]; // 0x80(0x28)
	/*struct TSoftObjectPtr<UStaticMesh>*/char Level4[0x28]; // 0xa8(0x28)
	/*struct TSoftObjectPtr<UStaticMesh>*/char Level5[0x28]; // 0xd0(0x28)
	struct FString Help; // 0xf8(0x10)
	float Scale1; // 0x108(0x04)
	float Scale2; // 0x10c(0x04)
	float Scale3; // 0x110(0x04)
	float Scale4; // 0x114(0x04)
	float Scale5; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.LocalFallbackConfig
// Size: 0x20 (Inherited: 0x00)
struct FLocalFallbackConfig {
public:

	int32_t Key; // 0x00(0x04)
	float Scale; // 0x04(0x04)
	struct FSoftObjectPath Path; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.GameModeProfileMetricSettings
// Size: 0x60 (Inherited: 0x00)
struct FGameModeProfileMetricSettings {
public:

	struct TArray<struct FString> maps; // 0x00(0x10)
	/*struct TSoftObjectPtr<UDataTable>*/char GameModeProfileMetricSettingsDataTable[0x28]; // 0x10(0x28)
	/*struct TSoftObjectPtr<UDataTable>*/char GameModeProfileMetricSettingsHDDataTable[0x28]; // 0x38(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.GameModeProfileMetricRowBase
// Size: 0x40 (Inherited: 0x08)
struct FGameModeProfileMetricRowBase : public FTableRowBase {
public:

	struct FString MetricName; // 0x08(0x10)
	struct FString DesName; // 0x18(0x10)
	bool bNeedUpload; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float ReferenceValues_VeryHigh; // 0x2c(0x04)
	float ReferenceValues_High; // 0x30(0x04)
	float ReferenceValues_Medium; // 0x34(0x04)
	float ReferenceValues_Low; // 0x38(0x04)
	float ReferenceValues_VeryLow; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.OpenWorldProfileCustomSamplePos
// Size: 0x18 (Inherited: 0x00)
struct FOpenWorldProfileCustomSamplePos {
public:

	struct FVector Position; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.OpenWorldExecCmdInfo
// Size: 0x18 (Inherited: 0x00)
struct FOpenWorldExecCmdInfo {
public:

	int32_t QualityLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FString> CmdMsgs; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.OpenWorldProfileArea
// Size: 0x70 (Inherited: 0x00)
struct FOpenWorldProfileArea {
public:

	struct FString ProfileAreaName; // 0x00(0x10)
	struct FBox2D Bounds; // 0x10(0x14)
	int32_t ProfilePointNum; // 0x24(0x04)
	bool bOverAllArea; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FString> SubProfileAreaNames; // 0x30(0x10)
	struct TArray<struct FString> RequestLevels; // 0x40(0x10)
	struct TArray<struct FVector> ProfileLevelPositions; // 0x50(0x10)
	struct TArray<struct FTransform> DumpRenderDetailPositions; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.OpenWorldStreamingLODDistance
// Size: 0x0c (Inherited: 0x00)
struct FOpenWorldStreamingLODDistance {
public:

	int32_t LOD0; // 0x00(0x04)
	int32_t LOD1; // 0x04(0x04)
	int32_t Bias; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.BoundedAssetPath
// Size: 0x28 (Inherited: 0x00)
struct FBoundedAssetPath {
public:

	struct FBoxSphereBounds Bounds; // 0x00(0x1c)
	struct FIntVector ID; // 0x1c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.StreamingLayerDesc
// Size: 0x48 (Inherited: 0x00)
struct FStreamingLayerDesc {
public:

	struct FName GroupName; // 0x00(0x08)
	int32_t LayerPriority; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FLayerParamsGroup> LayerParameters; // 0x10(0x10)
	bool bClient; // 0x20(0x01)
	bool bClientDefaultLoad; // 0x21(0x01)
	bool bNotifyServer; // 0x22(0x01)
	bool bDynamicLoading; // 0x23(0x01)
	bool bServer; // 0x24(0x01)
	bool bServerDefaultLoad; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct UClass* LayerClass; // 0x28(0x08)
	char pad_30[0x18]; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.LayerParamsGroup
// Size: 0x18 (Inherited: 0x00)
struct FLayerParamsGroup {
public:

	int32_t LevelIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString LayerParameter; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.StreamingLayerSwitch
// Size: 0x18 (Inherited: 0x00)
struct FStreamingLayerSwitch {
public:

	struct FName Name; // 0x00(0x08)
	struct TArray<struct FString> Layers; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.StreamingConfigOverride
// Size: 0x10 (Inherited: 0x00)
struct FStreamingConfigOverride {
public:

	struct TArray<struct FStreamingConfigOverrideValues> LevelOfConfigs; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.StreamingConfigOverrideValues
// Size: 0x18 (Inherited: 0x00)
struct FStreamingConfigOverrideValues {
public:

	struct FString Parameter; // 0x00(0x10)
	int32_t StreamingPriority; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.StreamingLevelInfo
// Size: 0x20 (Inherited: 0x00)
struct FStreamingLevelInfo {
public:

	int32_t LevelIndex; // 0x00(0x04)
	int32_t LevelStreamingParallelNum; // 0x04(0x04)
	int32_t StreamingUpdateDistance; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FString> DisabledLayers; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.SpecialStreamingUpdateDistGroup
// Size: 0x0c (Inherited: 0x00)
struct FSpecialStreamingUpdateDistGroup {
public:

	struct FName GroupName; // 0x00(0x08)
	float StreamingUpdateDistance; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.MapBroadphaseSettings
// Size: 0x48 (Inherited: 0x00)
struct FMapBroadphaseSettings {
public:

	struct FName MapName; // 0x00(0x08)
	struct FBroadphaseSettings BroadphaseSettings; // 0x08(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.OpenWorldStreamingLayerDesc
// Size: 0x40 (Inherited: 0x00)
struct FOpenWorldStreamingLayerDesc {
public:

	/*struct TSoftClassPtr<UObject>*/char Class[0x28]; // 0x00(0x28)
	struct FName Name; // 0x28(0x08)
	struct TArray<struct FString> Properties; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.UnbuiltGroupsForScene
// Size: 0x18 (Inherited: 0x00)
struct FUnbuiltGroupsForScene {
public:

	struct FName MapName; // 0x00(0x08)
	struct TArray<struct FName> UnbuiltGroups; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.MapGameplayArea
// Size: 0x24 (Inherited: 0x00)
struct FMapGameplayArea {
public:

	struct FName MapName; // 0x00(0x08)
	struct FIntVector Center; // 0x08(0x0c)
	struct FIntVector Extent; // 0x14(0x0c)
	float Yaw; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.CookLayerExpand
// Size: 0x18 (Inherited: 0x00)
struct FCookLayerExpand {
public:

	struct FString LayerWildCard; // 0x00(0x10)
	int32_t Expand; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.MapRedirection
// Size: 0x18 (Inherited: 0x00)
struct FMapRedirection {
public:

	struct FName MapName; // 0x00(0x08)
	struct FString RelativePath; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.MapReference
// Size: 0x18 (Inherited: 0x00)
struct FMapReference {
public:

	struct FName MapName; // 0x00(0x08)
	struct TArray<struct FName> ReferenceMapNames; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.MapPreview
// Size: 0x40 (Inherited: 0x00)
struct FMapPreview {
public:

	struct FName MapName; // 0x00(0x08)
	/*struct TSoftObjectPtr<UTexture2D>*/char PreviewImage[0x28]; // 0x08(0x28)
	struct FVector2D PreviewImageSize; // 0x30(0x08)
	struct FVector2D PreviewImageCenter; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.WorldTileFilter
// Size: 0x30 (Inherited: 0x00)
struct FWorldTileFilter {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FWorldTileDirectory> Directories; // 0x08(0x10)
	char pad_18[0x18]; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.WorldTileDirectory
// Size: 0x30 (Inherited: 0x00)
struct FWorldTileDirectory {
public:

	struct FDirectoryPath Path; // 0x00(0x10)
	struct TArray<struct FName> Groups; // 0x10(0x10)
	struct TArray<struct FWorldTileFolder> Folders; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.WorldTileFolder
// Size: 0x18 (Inherited: 0x00)
struct FWorldTileFolder {
public:

	struct FName Group; // 0x00(0x08)
	struct FString Folder; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.WorldTileFolderExtra
// Size: 0x20 (Inherited: 0x00)
struct FWorldTileFolderExtra {
public:

	struct FName Folder; // 0x00(0x08)
	struct FName Layer; // 0x08(0x08)
	struct TArray<struct FString> ExclusionWildcards; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.EditorLevelLoadMethod
// Size: 0x18 (Inherited: 0x00)
struct FEditorLevelLoadMethod {
public:

	struct UClass* LayerClass; // 0x00(0x08)
	struct FString LayerParameter; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.OpenWorldStreamingZoom
// Size: 0x80 (Inherited: 0x00)
struct FOpenWorldStreamingZoom {
public:

	float FOV; // 0x00(0x04)
	float DelaySeconds; // 0x04(0x04)
	float ZoomRate; // 0x08(0x04)
	struct FRotator ViewRotation; // 0x0c(0x0c)
	struct FIntPoint Viewport; // 0x18(0x08)
	struct FMatrix ViewProjection; // 0x20(0x40)
	struct FBox2D FrustumBounds; // 0x60(0x14)
	char pad_74[0xc]; // 0x74(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.EditorLevelFolderInfo
// Size: 0x48 (Inherited: 0x00)
struct FEditorLevelFolderInfo {
public:

	struct FString FolderPath; // 0x00(0x10)
	bool bIsRootFolder; // 0x10(0x01)
	bool bLoadAllLevels; // 0x11(0x01)
	bool bClientDefaultLoad; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FEditorLevelLoadMethod LoadMethod; // 0x18(0x18)
	struct TArray<struct FEditorLevelInfo> ChildrenLevels; // 0x30(0x10)
	bool bIsExpand; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldStreaming.OpenWorldStreamingContext
// Size: 0xd0 (Inherited: 0x00)
struct FOpenWorldStreamingContext {
public:

	bool bFrozen; // 0x00(0x01)
	bool bDirty; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float HidingDelaySeconds; // 0x04(0x04)
	bool bShowingImportance; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Quality; // 0x0c(0x04)
	struct FString Switch; // 0x10(0x10)
	struct TArray<struct FVector> FocusPositions; // 0x20(0x10)
	struct FOpenWorldStreamingZoom Zoom; // 0x30(0x80)
	float LastUpdateSeconds; // 0xb0(0x04)
	struct FVector ViewLocation; // 0xb4(0x0c)
	struct TWeakObjectPtr<struct AActor> ViewTarget; // 0xc0(0x08)
	char pad_C8[0x8]; // 0xc8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
