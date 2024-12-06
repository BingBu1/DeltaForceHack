
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GeneBatch.EGeneAtlasObjectiveType
enum class EGeneAtlasObjectiveType : int {
	TotalAtlasNum = 0,
	TotalAtlasNetResolution = 1,
	AllObjectiveNum = 2,
	TotalAtlasResolution = 3,
	TotalDrawSectionNum = 4,
	EGeneAtlasObjectiveType_MAX = 5
};

// Enum GeneBatch.EGeneBatchObjectiveType
enum class EGeneBatchObjectiveType : int {
	TotalMeshVertexCount = 0,
	TotalDrawCallNum = 1,
	TotalDrawInstancingNum = 2,
	TotalBoundingBoxVolume = 3,
	AllObjectiveNum = 4,
	TotalAtlasResolution = 5,
	EGeneBatchObjectiveType_MAX = 6
};

// Enum GeneBatch.EGeneBatchWhyNotBatchDetailType
enum class EGeneBatchWhyNotBatchDetailType : int {
	Batchable = 0,
	NumericDataCount = 1,
	AtlasResolution = 2,
	RegionGroupCount = 3,
	SourceMaterialCount = 4,
	AtlasMaterial = 5,
	MergeMaterialKey = 6,
	ISMCluster = 7,
	ComponentMergeKey = 8,
	MeshMergeKey = 9,
	ComponentKey = 10,
	VertexOrBounds = 11,
	Root = 12,
	POI = 13,
	NotBatchable = 14,
	EGeneBatchWhyNotBatchDetailType_MAX = 15
};

// Enum GeneBatch.EGeneBatchWhyNotBatchReason
enum class EGeneBatchWhyNotBatchReason : int {
	Unknown = 0,
	Config = 1,
	LevelKey = 2,
	ActorResource = 3,
	MeshBuildData = 4,
	StaticMeshTag = 5,
	CastShadow = 6,
	Grid = 7,
	AtlasMap = 8,
	AtlasChannelUsage = 9,
	PreferNot = 10,
	BaseMaterial = 11,
	MaterialParameter = 12,
	ChannelUsage = 13,
	MaterialInstanceCount = 14,
	NumericParameterCount = 15,
	Bound = 16,
	VertexCount = 17,
	CanMerge = 18,
	NUM_REASONS = 19,
	EGeneBatchWhyNotBatchReason_MAX = 20
};

// Enum GeneBatch.EMaterialParameterClusterSaveMode
enum class EMaterialParameterClusterSaveMode : int {
	Median = 0,
	ResetToDefault = 1,
	EMaterialParameterClusterSaveMode_MAX = 2
};

// Enum GeneBatch.EMaterialParameterClusterMode
enum class EMaterialParameterClusterMode : int {
	None = 0,
	Cluster = 1,
	ResetToDefault = 2,
	EMaterialParameterClusterMode_MAX = 3
};

// Enum GeneBatch.EMaterialParameterDataType
enum class EMaterialParameterDataType : int {
	Unknown = 0,
	Scalar = 1,
	Vector = 2,
	Texture = 3,
	StaticSwitch = 4,
	BasePropertyOverrides = 5,
	Font = 6,
	StaticComponentMask = 7,
	MaterialLayers = 8,
	EMaterialParameterDataType_MAX = 9
};

// Enum GeneBatch.EGeneBatchBakeMethod
enum class EGeneBatchBakeMethod : int {
	Unknown = 0,
	RuntimeBake = 1,
	EditorBake = 2,
	EGeneBatchBakeMethod_MAX = 3
};

// Enum GeneBatch.EGeneJointBatchObjectiveType
enum class EGeneJointBatchObjectiveType : int {
	TotalMeshVertexCount = 0,
	TotalDrawCallCount = 1,
	TotalDrawInstancingCount = 2,
	TotalBoundingBoxVolume = 3,
	TotalAtlasMapCount = 4,
	AllObjectiveNum = 5,
	EGeneJointBatchObjectiveType_MAX = 6
};

// Enum GeneBatch.EGeneUnionBatchObjectiveType
enum class EGeneUnionBatchObjectiveType : int {
	TotalMeshVertexCount = 0,
	TotalDrawCallCount = 1,
	TotalDrawInstancingCount = 2,
	TotalBoundingBoxVolume = 3,
	TotalAtlasMapCount = 4,
	AllObjectiveNum = 5,
	EGeneUnionBatchObjectiveType_MAX = 6
};

// ScriptStruct GeneBatch.GeneBatchSMCInputData
// Size: 0x28 (Inherited: 0x00)
struct FGeneBatchSMCInputData {
public:

	struct UStaticMeshComponent* SMC; // 0x00(0x08)
	struct FString OverrideLevelKey; // 0x08(0x10)
	struct FString AdditionalLevelKey; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMaterialInputData
// Size: 0x28 (Inherited: 0x00)
struct FGeneBatchMaterialInputData {
public:

	/*struct TSoftObjectPtr<UMaterialInterface>*/char Material[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTheme
// Size: 0x40 (Inherited: 0x00)
struct FGeneBatchTheme {
public:

	struct FName Name; // 0x00(0x08)
	struct TArray<struct FName> Collections; // 0x08(0x10)
	struct TArray<struct FName> BlacklistCollections; // 0x18(0x10)
	struct TArray<struct FName> ReferencedThemes; // 0x28(0x10)
	bool bAcceptTextureCollection; // 0x38(0x01)
	bool bAcceptDecorationOnlyTextures; // 0x39(0x01)
	bool bRootInPARENT; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchParameterOptimizationConfig
// Size: 0x40 (Inherited: 0x00)
struct FGeneBatchParameterOptimizationConfig {
public:

	struct TArray<int32_t> BaseSizes; // 0x00(0x10)
	struct TArray<struct FGeneBatchParameterOptimizationConfigIntArray> Sizes; // 0x10(0x10)
	struct TArray<struct FGeneBatchParameterOptimizationConfigIntArray> LoadPatterns; // 0x20(0x10)
	struct TArray<struct FGeneBatchParameterOptimizationConfigIntArray> ISMNums; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchParameterOptimizationConfigIntArray
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchParameterOptimizationConfigIntArray {
public:

	struct TArray<int32_t> Arr; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultHLODDataLODData
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchTableRowResultHLODDataLODData {
public:

	struct TArray<struct FGeneBatchTableRowResultHLODDataMergeDrawSection> MergeDrawSections; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultHLODDataMergeDrawSection
// Size: 0x20 (Inherited: 0x00)
struct FGeneBatchTableRowResultHLODDataMergeDrawSection {
public:

	struct TArray<struct FGeneBatchResultDrawSectionIndex> SourceDrawSections; // 0x00(0x10)
	struct FGuid MergeDrawSectionGuid; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchResultDrawSectionIndex
// Size: 0x40 (Inherited: 0x00)
struct FGeneBatchResultDrawSectionIndex {
public:

	struct FName Primitive; // 0x00(0x08)
	/*struct TSoftObjectPtr<UStaticMesh>*/char Mesh[0x28]; // 0x08(0x28)
	int32_t LodIndex; // 0x30(0x04)
	int32_t DrawSectionIndex; // 0x34(0x04)
	bool bOverrideMaterial; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchDrawableLODInfo
// Size: 0x28 (Inherited: 0x00)
struct FGeneBatchDrawableLODInfo {
public:

	int32_t TargetLODIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> SectionIndices; // 0x08(0x10)
	/*struct TArray<struct TSoftObjectPtr<UMaterialInterface>>*/char Materials[0x10]; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMergeResultInfo
// Size: 0x38 (Inherited: 0x00)
struct FGeneBatchMergeResultInfo {
public:

	/*struct TSoftObjectPtr<UStaticMesh>*/char ResultMesh[0x28]; // 0x00(0x28)
	struct TArray<struct FGeneBatchMergeResultLODInfo> LODs; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMergeResultLODInfo
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchMergeResultLODInfo {
public:

	struct TArray<struct FGeneBatchMergeResultSectionInfo> MergedSections; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMergeResultSectionInfo
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchMergeResultSectionInfo {
public:

	struct TArray<struct FGeneBatchMergeResultSourceSectionInfo> SourceSections; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMergeResultSourceSectionInfo
// Size: 0x30 (Inherited: 0x00)
struct FGeneBatchMergeResultSourceSectionInfo {
public:

	/*struct TSoftObjectPtr<UStaticMesh>*/char SourceMesh[0x28]; // 0x00(0x28)
	int32_t LodIndex; // 0x28(0x04)
	int32_t SectionIndex; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMergeResultComponentInfo
// Size: 0x70 (Inherited: 0x00)
struct FGeneBatchMergeResultComponentInfo {
public:

	struct TArray<struct UStaticMeshComponent*> SourceComponents; // 0x00(0x10)
	/*struct TSoftObjectPtr<UStaticMesh>*/char ResultMesh[0x28]; // 0x10(0x28)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform ResultTransform; // 0x40(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMergeInputInfo
// Size: 0x20 (Inherited: 0x00)
struct FGeneBatchMergeInputInfo {
public:

	struct FString LevelName; // 0x00(0x10)
	struct TArray<struct UStaticMeshComponent*> Components; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.MaterialParameterValue
// Size: 0x24 (Inherited: 0x00)
struct FMaterialParameterValue {
public:

	float ScalarValue; // 0x00(0x04)
	struct FLinearColor VectorValue; // 0x04(0x10)
	struct FName ObjectValue; // 0x14(0x08)
	uint32_t UIntValue; // 0x1c(0x04)
	enum class EMaterialParameterDataType ParameterType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneAtlasMapsArray
// Size: 0x10 (Inherited: 0x00)
struct FGeneAtlasMapsArray {
public:

	struct TArray<struct FGeneAtlasParamVsAtlasMap> AtlasMapsArray; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchAtlasMapIndex
// Size: 0x14 (Inherited: 0x00)
struct FGeneBatchAtlasMapIndex {
public:

	struct FGuid AtlasGroupGuid; // 0x00(0x10)
	int32_t AtlasMapIndex; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTextureSet
// Size: 0x50 (Inherited: 0x00)
struct FGeneBatchTextureSet {
public:

	/*struct TSet<struct TSoftObjectPtr<UTexture>>*/char TextureSet[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchResultUsageHashedAtlasMaps
// Size: 0x50 (Inherited: 0x00)
struct FGeneBatchResultUsageHashedAtlasMaps {
public:

	struct TMap<struct FGeneBatchMaterialTextureParameter, struct FGeneBatchTableRowResultAtlasMapIndex> AtlasMaps; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultAtlasMapIndex
// Size: 0x14 (Inherited: 0x00)
struct FGeneBatchTableRowResultAtlasMapIndex {
public:

	struct FGuid AtlasGuid; // 0x00(0x10)
	int32_t AtlasMapIndex; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultMeshReuseKeyLOD
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchTableRowResultMeshReuseKeyLOD {
public:

	struct TArray<struct FGeneBatchTableRowResultMeshReuseKeyMergeDrawSection> MergeDrawSections; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultMeshReuseKeyMergeDrawSection
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchTableRowResultMeshReuseKeyMergeDrawSection {
public:

	struct TArray<struct FGeneBatchTableRowResultMeshReuseKeySourceDrawSection> SourceDrawSections; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultMeshReuseKeySourceDrawSection
// Size: 0x20 (Inherited: 0x00)
struct FGeneBatchTableRowResultMeshReuseKeySourceDrawSection {
public:

	struct FName MeshName; // 0x00(0x08)
	int32_t LodIndex; // 0x08(0x04)
	int32_t DrawSectionIndex; // 0x0c(0x04)
	struct FLinearColor UVScaleOffset; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultMeshLOD
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchTableRowResultMeshLOD {
public:

	struct TArray<struct FGuid> MergeDrawSectionGuids; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchPOI
// Size: 0x40 (Inherited: 0x00)
struct FGeneBatchPOI {
public:

	struct FName Name; // 0x00(0x08)
	struct TArray<struct FTransform> Areas; // 0x08(0x10)
	struct TArray<struct FString> LevelNamePatterns; // 0x18(0x10)
	struct FName GameplayAreaName; // 0x28(0x08)
	struct TArray<struct FName> ReferencedThemes; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchAnalyzeHLODSettings
// Size: 0xd8 (Inherited: 0x00)
struct FGeneBatchAnalyzeHLODSettings {
public:

	struct TArray<struct FGeneBatchAnalyzeHLODSetting> HLODs; // 0x00(0x10)
	bool bHLOD0UseOriginalSMC; // 0x10(0x01)
	bool bKeepDrawSectionOrder; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct FGeneBatchAnalyzeAtlasGroupSetting> AtlasGroupSettings; // 0x18(0x10)
	struct TArray<struct FGeneBatchStrictAlignUsages> StrictAlignUsages; // 0x28(0x10)
	struct TArray<struct FName> BakeAtlasUsages; // 0x38(0x10)
	struct TArray<struct FName> StreamingLayers; // 0x48(0x10)
	struct TMap<struct FName, float> StreamingLayerGridSizes; // 0x58(0x50)
	struct TArray<struct FGeneBatchLODScreenSizeConfig> LODScreenSizeConfigs; // 0xa8(0x10)
	struct TArray<struct FGeneBatchLODScreenSizeConfig> SubBoundsLODScreenSizeConfigs; // 0xb8(0x10)
	struct TArray<int32_t> CheapLODVertexNumThresholds; // 0xc8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchLODScreenSizeConfig
// Size: 0x30 (Inherited: 0x00)
struct FGeneBatchLODScreenSizeConfig {
public:

	struct TArray<struct FName> StreamingLayers; // 0x00(0x10)
	struct TArray<int32_t> HLODLevels; // 0x10(0x10)
	struct TArray<float> MinLODScreenSizes; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchStrictAlignUsages
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchStrictAlignUsages {
public:

	struct TArray<struct FName> ChannelUsages; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchAnalyzeAtlasGroupSetting
// Size: 0x30 (Inherited: 0x00)
struct FGeneBatchAnalyzeAtlasGroupSetting {
public:

	int32_t DesiredAtlasResolution; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> ExtraAtlasResolutions; // 0x08(0x10)
	bool bAllowDuplicatedTextures; // 0x18(0x01)
	bool bAtlasCrossMergeMaterial; // 0x19(0x01)
	bool bIgnoreAnisotropic; // 0x1a(0x01)
	enum class EPixelFormat ForcePixelFormat; // 0x1b(0x01)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString DisplayName; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchReductionCondition
// Size: 0x30 (Inherited: 0x00)
struct FGeneBatchReductionCondition {
public:

	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t AllowLODOffsetFromFirst; // 0x04(0x04)
	int32_t AllowLODOffsetFromLast; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> TagBlacklist; // 0x10(0x10)
	int32_t VertexNum; // 0x20(0x04)
	float VertexSurfaceDensity; // 0x24(0x04)
	int32_t BoundHeight; // 0x28(0x04)
	float ReductionPercentage; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchFloatArray
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchFloatArray {
public:

	struct TArray<float> array; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchIntArray
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchIntArray {
public:

	struct TArray<int32_t> array; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchCustomMaterialParameterClusterLevelIndex
// Size: 0x30 (Inherited: 0x00)
struct FGeneBatchCustomMaterialParameterClusterLevelIndex {
public:

	/*struct TSoftObjectPtr<UMaterial>*/char Material[0x28]; // 0x00(0x28)
	int32_t MaterialParameterClusterLevelIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchAtlasCountDetails
// Size: 0x20 (Inherited: 0x00)
struct FGeneBatchAtlasCountDetails {
public:

	int32_t CountIn2K; // 0x00(0x04)
	int32_t CountIn4K; // 0x04(0x04)
	int32_t CountIn2K_Set; // 0x08(0x04)
	int32_t CountIn2K_Set_Tight; // 0x0c(0x04)
	struct TArray<struct FGeneBatchAtlasCountDetailsItem> Items; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneOpenWorldGridData
// Size: 0x40 (Inherited: 0x00)
struct FGeneOpenWorldGridData {
public:

	struct FIntPoint GridKey; // 0x00(0x08)
	struct FBox GridBox; // 0x08(0x1c)
	struct FName GridLayerName; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString POIName; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchStaticMeshProxyInputTableRow
// Size: 0x18 (Inherited: 0x08)
struct FGeneBatchStaticMeshProxyInputTableRow : public FTableRowBase {
public:

	struct TArray<struct FGeneBatchStaticMeshProxyInputElement> InputElements; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchStaticMeshProxyInputElement
// Size: 0x08 (Inherited: 0x00)
struct FGeneBatchStaticMeshProxyInputElement {
public:

	int32_t IndexInStaticMeshTable; // 0x00(0x04)
	int32_t LodIndex; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowConvertedPrimitive
// Size: 0x40 (Inherited: 0x08)
struct FGeneBatchTableRowConvertedPrimitive : public FTableRowBase {
public:

	/*struct TArray<struct TSoftObjectPtr<UPrimitiveComponent>>*/char SourcePrimitives[0x10]; // 0x08(0x10)
	/*struct TSoftObjectPtr<UPrimitiveComponent>*/char TargetPrimitive[0x28]; // 0x18(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchPrimitiveHLODParentDataRow
// Size: 0x40 (Inherited: 0x08)
struct FGeneBatchPrimitiveHLODParentDataRow : public FTableRowBase {
public:

	/*LazyObjectProperty*/char Primitive[0x1c]; // 0x08(0x1c)
	/*LazyObjectProperty*/char Parent[0x1c]; // 0x24(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMeshComponentDataRow
// Size: 0x40 (Inherited: 0x08)
struct FGeneBatchMeshComponentDataRow : public FTableRowBase {
public:

	bool bStandalone; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FGeneBatchRuntimeMergingMeshInputLOD> LODs; // 0x10(0x10)
	struct FGuid MeshGuid; // 0x20(0x10)
	struct TArray<struct FGeneBatchMaterial> GeneBatchMaterials; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMaterial
// Size: 0x38 (Inherited: 0x00)
struct FGeneBatchMaterial {
public:

	/*struct TSoftObjectPtr<UMaterialInterface>*/char MaterialInstance[0x28]; // 0x00(0x28)
	struct TArray<struct FGeneBatchMaterialTextureParam> TextureParamAndTextureGuid; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMaterialTextureParam
// Size: 0x18 (Inherited: 0x00)
struct FGeneBatchMaterialTextureParam {
public:

	struct FName TextureParamName; // 0x00(0x08)
	struct FGuid TextureGuid; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchRuntimeMergingMeshInputLOD
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchRuntimeMergingMeshInputLOD {
public:

	struct TArray<struct FGeneBatchRuntimeMergingMeshInputMergeDrawSection> MergeDrawSections; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchRuntimeMergingMeshInputMergeDrawSection
// Size: 0x18 (Inherited: 0x00)
struct FGeneBatchRuntimeMergingMeshInputMergeDrawSection {
public:

	struct TArray<struct FGeneBatchRuntimeMergingMeshInputElement> Elements; // 0x00(0x10)
	int32_t MaterialIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchRuntimeMergingMeshInputElement
// Size: 0x60 (Inherited: 0x00)
struct FGeneBatchRuntimeMergingMeshInputElement {
public:

	int32_t IndexInStaticMeshTable; // 0x00(0x04)
	int32_t LodIndex; // 0x04(0x04)
	int32_t DrawSectionIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform StaticMeshTransform; // 0x10(0x30)
	int32_t LocalMaterialIndex; // 0x40(0x04)
	bool bHasLightMap; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FVector2D CoordinateBias; // 0x48(0x08)
	struct FVector2D CoordinateScale; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchStaticMeshTableRow
// Size: 0x30 (Inherited: 0x08)
struct FGeneBatchStaticMeshTableRow : public FTableRowBase {
public:

	/*struct TSoftObjectPtr<UStaticMesh>*/char StaticMesh[0x28]; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBakeTableRowResultPrimitives
// Size: 0x68 (Inherited: 0x08)
struct FGeneBakeTableRowResultPrimitives : public FTableRowBase {
public:

	/*struct TSoftObjectPtr<AActor>*/char ActorResource[0x28]; // 0x08(0x28)
	/*struct TSoftObjectPtr<UMaterial>*/char BaseMaterial[0x28]; // 0x30(0x28)
	struct TArray<struct FGeneBakeTableRowResultPrimitive> Primitives; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBakeTableRowResultPrimitive
// Size: 0x78 (Inherited: 0x08)
struct FGeneBakeTableRowResultPrimitive : public FTableRowBase {
public:

	/*struct TSoftObjectPtr<UStaticMesh>*/char Mesh[0x28]; // 0x08(0x28)
	struct FVector Location; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FGeneBakeTableRowResultPrimitveTexture> UseTextures; // 0x40(0x10)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char MaterialInstance[0x28]; // 0x50(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResourceConfig
// Size: 0x38 (Inherited: 0x08)
struct FGeneBatchTableRowResourceConfig : public FTableRowBase {
public:

	/*struct TSoftObjectPtr<UObject>*/char Object[0x28]; // 0x08(0x28)
	int32_t TextureSize; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchResultAtlasMaterial
// Size: 0x188 (Inherited: 0x00)
struct FGeneBatchResultAtlasMaterial {
public:

	/*struct TSoftObjectPtr<UMaterialInstance>*/char AtlasMaterial[0x28]; // 0x00(0x28)
	/*struct TSet<struct TSoftObjectPtr<UMaterialInterface>>*/char LocalUniqueSourceMaterialsSet[0x50]; // 0x28(0x50)
	struct TMap<struct FName, struct FGeneBatchIntArray> ResolvedAtlasBatchIndexerLayers; // 0x78(0x50)
	struct TArray<struct FGeneAtlasResultRegionGroup> AtlasRegionGroupLayers; // 0xc8(0x10)
	struct TMap<struct FName, int32_t> ResolvedAtlasBatchIndirectIndex; // 0xd8(0x50)
	struct TArray<struct FGeneBatchIntArray> AtlasBatchIndexerLayers; // 0x128(0x10)
	struct TArray<struct FGeneAtlasResultMapArray> ParameterAtlasMapGroupLayers; // 0x138(0x10)
	struct TArray<struct FLinearColor> AtlasBatchNumericData; // 0x148(0x10)
	struct FString AtlasMaterialObjectName; // 0x158(0x10)
	struct FString AtlasMaterialPackageName; // 0x168(0x10)
	struct FGuid DataHash; // 0x178(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneAtlasResultMapArray
// Size: 0x10 (Inherited: 0x00)
struct FGeneAtlasResultMapArray {
public:

	struct TArray<struct FGeneAtlasResultMap> AtlasMaps; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneAtlasResultRegionGroup
// Size: 0x10 (Inherited: 0x00)
struct FGeneAtlasResultRegionGroup {
public:

	struct TArray<struct FGeneAtlasResultRegion> Regions; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneAtlasTableRowResultAtlasMaterialGroup
// Size: 0x80 (Inherited: 0x08)
struct FGeneAtlasTableRowResultAtlasMaterialGroup : public FTableRowBase {
public:

	struct FGuid Guid; // 0x08(0x10)
	struct TMap<struct FGeneBatchTextureChannelUsage, struct FGeneAtlasResultAtlas> ChannelUsageAtlases; // 0x18(0x50)
	int32_t AtlasGroupKey; // 0x68(0x04)
	bool bIgnoreAnisotropic; // 0x6c(0x01)
	enum class EPixelFormat ForcePixelFormat; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
	struct TArray<struct FGeneAtlasStrictAlignGroup> StrictAlignGroups; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneAtlasStrictAlignGroup
// Size: 0x20 (Inherited: 0x00)
struct FGeneAtlasStrictAlignGroup {
public:

	struct TArray<struct FGeneBatchTextureChannelUsage> ChannelUsages; // 0x00(0x10)
	struct TArray<int32_t> MapIndices; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowParameterOptimization
// Size: 0x88 (Inherited: 0x08)
struct FGeneBatchTableRowParameterOptimization : public FTableRowBase {
public:

	struct TArray<int32_t> Sizes; // 0x08(0x10)
	struct TArray<int32_t> LoadPattern; // 0x18(0x10)
	struct TArray<int32_t> ISMNums; // 0x28(0x10)
	int32_t EstimateMemoryOff; // 0x38(0x04)
	int32_t EstimateMemoryOn; // 0x3c(0x04)
	int32_t EstimateMemoryDiff; // 0x40(0x04)
	int32_t EstimateDrawCallAvgOff; // 0x44(0x04)
	int32_t EstimateDrawCallAvgOn; // 0x48(0x04)
	int32_t EstimateDrawCallAvgDiff; // 0x4c(0x04)
	int32_t EstimateDrawCallAvgOff150; // 0x50(0x04)
	int32_t EstimateDrawCallAvgOn150; // 0x54(0x04)
	int32_t EstimateDrawCallAvgDiff150; // 0x58(0x04)
	int32_t EstimateDrawCallMaxOff; // 0x5c(0x04)
	int32_t EstimateDrawCallMaxOn; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<int32_t> NumComponentsEachHLOD; // 0x68(0x10)
	struct TArray<int32_t> NumISMsEachHLOD; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowWhyNotBatchStats
// Size: 0x30 (Inherited: 0x08)
struct FGeneBatchTableRowWhyNotBatchStats : public FTableRowBase {
public:

	int32_t HLODLevel; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FGeneBatchBatchableGroup> Groups; // 0x10(0x10)
	struct TArray<struct FGeneBatchWhyNotBatchPair> GroupPairs; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchWhyNotBatchPair
// Size: 0x20 (Inherited: 0x00)
struct FGeneBatchWhyNotBatchPair {
public:

	int32_t Group1; // 0x00(0x04)
	int32_t Group2; // 0x04(0x04)
	enum class EGeneBatchWhyNotBatchReason reason; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FGeneBatchWhyNotBatchPairInDrawSection> DrawSectionPairs; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchWhyNotBatchPairInDrawSection
// Size: 0x18 (Inherited: 0x00)
struct FGeneBatchWhyNotBatchPairInDrawSection {
public:

	int32_t PrimitiveIndex1; // 0x00(0x04)
	int32_t PrimitiveIndex2; // 0x04(0x04)
	struct TArray<enum class EGeneBatchWhyNotBatchReason> Reasons; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchWhyNotBatchPairInDrawSectionItem
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchWhyNotBatchPairInDrawSectionItem {
public:

	struct FName Primitive; // 0x00(0x08)
	int32_t LodIndex; // 0x08(0x04)
	int32_t SectionIndex; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowMergeFailureData
// Size: 0x30 (Inherited: 0x08)
struct FGeneBatchTableRowMergeFailureData : public FTableRowBase {
public:

	struct FString MergeFailureReason; // 0x08(0x10)
	int32_t HLODLayer; // 0x18(0x04)
	int32_t PairNum; // 0x1c(0x04)
	struct TArray<struct FString> PrimitivePairs; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.MergeFailureDetail
// Size: 0x18 (Inherited: 0x00)
struct FMergeFailureDetail {
public:

	int32_t PairNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FString> PrimitivePairs; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultDrawSection
// Size: 0xa8 (Inherited: 0x08)
struct FGeneBatchTableRowResultDrawSection : public FTableRowBase {
public:

	struct FName ActorResource; // 0x08(0x08)
	struct FName Primitive; // 0x10(0x08)
	/*struct TSoftObjectPtr<UStaticMesh>*/char Mesh[0x28]; // 0x18(0x28)
	/*struct TSoftObjectPtr<UMaterial>*/char BaseMaterial[0x28]; // 0x40(0x28)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char Material[0x28]; // 0x68(0x28)
	struct FGuid InstancingGuid; // 0x90(0x10)
	int32_t InstancingNum; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchPrimitiveInstanceCustomData
// Size: 0x18 (Inherited: 0x00)
struct FGeneBatchPrimitiveInstanceCustomData {
public:

	int32_t LodIndex; // 0x00(0x04)
	int32_t SectionIndex; // 0x04(0x04)
	struct TArray<float> Data; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultMesReuseLOD
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchTableRowResultMesReuseLOD {
public:

	struct TArray<struct FColor> VertexColors; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowInputMaterial
// Size: 0x170 (Inherited: 0x08)
struct FGeneBatchTableRowInputMaterial : public FTableRowBase {
public:

	struct FName MaterialName; // 0x08(0x08)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char MaterialInterface[0x28]; // 0x10(0x28)
	struct FName BaseMaterial; // 0x38(0x08)
	struct TMap<int32_t, struct FGeneBatchMaterialParameterValuePack> ClusteredParameters; // 0x40(0x50)
	struct FLinearColor UVScaleOffset; // 0x90(0x10)
	struct TArray<int32_t> UsedUVs; // 0xa0(0x10)
	bool bIsOverrideMaterial; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char SourceMaterialInterface[0x28]; // 0xb8(0x28)
	struct FName OverrideMaterialName; // 0xe0(0x08)
	struct TMap<int32_t, struct FGeneBatchInputMaterialChannelUsages> ClusteredChannelUsages_Flattened; // 0xe8(0x50)
	struct TArray<struct FName> Textures_Flattened; // 0x138(0x10)
	struct TArray<struct FLinearColor> NumericData_Flattened; // 0x148(0x10)
	int32_t Layer0NumericDataSize; // 0x158(0x04)
	struct FGuid DataHash; // 0x15c(0x10)
	char pad_16C[0x4]; // 0x16c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchInputMaterialChannelUsages
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchInputMaterialChannelUsages {
public:

	struct TArray<struct FGeneBatchTextureChannelUsage> ChannelUsages_Flattened; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowInputComponentSection
// Size: 0x2c (Inherited: 0x00)
struct FGeneBatchTableRowInputComponentSection {
public:

	struct FName Primitive; // 0x00(0x08)
	int32_t LodIndex; // 0x08(0x04)
	int32_t SectionIndex; // 0x0c(0x04)
	struct FName Mesh; // 0x10(0x08)
	struct FName Material; // 0x18(0x08)
	int32_t NumVertices; // 0x20(0x04)
	int32_t NumInstances; // 0x24(0x04)
	bool bCastShadow; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowInputMesh
// Size: 0xc0 (Inherited: 0x08)
struct FGeneBatchTableRowInputMesh : public FTableRowBase {
public:

	struct FName MeshName; // 0x08(0x08)
	/*struct TSoftObjectPtr<UStaticMesh>*/char Mesh[0x28]; // 0x10(0x28)
	int32_t LightMapCoordinateIndex; // 0x38(0x04)
	int32_t NumUsedUVs; // 0x3c(0x04)
	int32_t TotalNumVertices; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<int32_t> NumSectionsEachLOD; // 0x48(0x10)
	struct TArray<int32_t> NumVerticesEachLOD; // 0x58(0x10)
	struct TArray<float> LODScreenSizes; // 0x68(0x10)
	struct TArray<float> LODDrawDistances; // 0x78(0x10)
	struct FBoxSphereBounds Bounds; // 0x88(0x1c)
	struct FName OcclusionMesh; // 0xa4(0x08)
	bool bSelfAsOccluder; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct FGuid DataHash; // 0xb0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowInputLevel
// Size: 0x58 (Inherited: 0x08)
struct FGeneBatchTableRowInputLevel : public FTableRowBase {
public:

	struct FName LevelName; // 0x08(0x08)
	/*struct TSoftObjectPtr<UWorld>*/char Level[0x28]; // 0x10(0x28)
	struct FString LevelPath; // 0x38(0x10)
	struct FGuid DataHash; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchAllowMaterialLayer
// Size: 0x60 (Inherited: 0x00)
struct FGeneBatchAllowMaterialLayer {
public:

	/*struct TSet<struct FGeneBatchAllowMaterialTextureParameter>*/char TextureParameters[0x50]; // 0x00(0x50)
	struct TArray<struct FGeneBatchAllowMaterialNumericParameter> NumericParameters; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchAllowMaterialNumericParameter
// Size: 0x18 (Inherited: 0x00)
struct FGeneBatchAllowMaterialNumericParameter {
public:

	struct FString Name; // 0x00(0x10)
	int32_t offset; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMaterialParameterClusterConfigLevel
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchMaterialParameterClusterConfigLevel {
public:

	struct TArray<struct FGeneBatchMaterialParameterClusterConfig> ParameterClusterConfigs; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMaterialParameterClusterConfig
// Size: 0x50 (Inherited: 0x00)
struct FGeneBatchMaterialParameterClusterConfig {
public:

	struct FString ParameterNameRegex; // 0x00(0x10)
	enum class EMaterialParameterDataType ParameterType; // 0x10(0x01)
	enum class EMaterialParameterClusterMode ClusterMode; // 0x11(0x01)
	enum class EMaterialParameterClusterSaveMode ClusterSaveMode; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct TArray<struct FGeneBatchMaterialParameterNumericClusterMapping> NumericClusterMap; // 0x18(0x10)
	float NumericClusterStep; // 0x28(0x04)
	float DefaultScalarValue; // 0x2c(0x04)
	struct FLinearColor DefaultVectorValue; // 0x30(0x10)
	struct FName DefaultObjectValue; // 0x40(0x08)
	int32_t DefaultUIntValue; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMaterialParameterNumericClusterMapping
// Size: 0x14 (Inherited: 0x00)
struct FGeneBatchMaterialParameterNumericClusterMapping {
public:

	struct FFloatRange ClusterRange; // 0x00(0x10)
	float ClusterTarget; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchPrimitiveInstanceData
// Size: 0x80 (Inherited: 0x00)
struct FGeneBatchPrimitiveInstanceData {
public:

	struct FTransform Transform; // 0x00(0x30)
	struct FBoxSphereBounds Bounds; // 0x30(0x1c)
	struct FName StaticMesh; // 0x4c(0x08)
	struct FName LocalLightGroupBake; // 0x54(0x08)
	char CastShadow : 1; // 0x5c(0x01)
	char pad_5C_1 : 7; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<struct FGeneBatchPrimitiveInstanceLODData> LODData; // 0x60(0x10)
	struct FGuid PrimitiveInstancingGuid; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchPrimitiveInstanceLODData
// Size: 0x20 (Inherited: 0x00)
struct FGeneBatchPrimitiveInstanceLODData {
public:

	struct FGuid MapBuildDataGuid; // 0x00(0x10)
	struct FVector2D LightMapCoordinateScale; // 0x10(0x08)
	struct FVector2D LightMapCoordinateBias; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMaterialParameterValuePack
// Size: 0x50 (Inherited: 0x00)
struct FGeneBatchMaterialParameterValuePack {
public:

	struct TMap<struct FName, struct FMaterialParameterValue> Values; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneAtlasMapsArrayLayers
// Size: 0x10 (Inherited: 0x00)
struct FGeneAtlasMapsArrayLayers {
public:

	struct TArray<struct FGeneAtlasMapsArray> LayerdAtlasMapsArray; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTextureBaseChannelUsage
// Size: 0x0c (Inherited: 0x00)
struct FGeneBatchTextureBaseChannelUsage {
public:

	struct FName ChannelUsageName; // 0x00(0x08)
	enum class EMaterialAtlasUsage MaterialAtlasUsage; // 0x08(0x01)
	bool bUseAlpha; // 0x09(0x01)
	bool bForceLinearColor; // 0x0a(0x01)
	bool bAnisotropic; // 0x0b(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultMeshReuseKey
// Size: 0x18 (Inherited: 0x00)
struct FGeneBatchTableRowResultMeshReuseKey {
public:

	struct TArray<struct FGeneBatchTableRowResultMeshReuseKeyLOD> LODs; // 0x00(0x10)
	int32_t HLODLevel; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchLightMapUVSettings
// Size: 0x14 (Inherited: 0x00)
struct FGeneBatchLightMapUVSettings {
public:

	float LightMapUVRangeLimit; // 0x00(0x04)
	float ISMLightMapUVRangeLimit; // 0x04(0x04)
	float ISMLightMapUVErrorLimit; // 0x08(0x04)
	bool bForceFullPrecisionUV; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float FullPrecisionUVErrorPercentageThreshold; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchManualGroupSetting
// Size: 0x03 (Inherited: 0x00)
struct FGeneBatchManualGroupSetting {
public:

	bool bEnable; // 0x00(0x01)
	bool bCrossGrid; // 0x01(0x01)
	bool bCrossLayer; // 0x02(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchReductionSettings
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchReductionSettings {
public:

	struct TArray<struct FGeneBatchReductionCondition> Conditions; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchAnalyzePrimitiveFilter
// Size: 0x68 (Inherited: 0x00)
struct FGeneBatchAnalyzePrimitiveFilter {
public:

	struct TArray<struct FString> TagBlacklist; // 0x00(0x10)
	float MinScreenSize; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FString> StaticMeshAssetPathWhitelist; // 0x18(0x10)
	struct TArray<struct FString> StreamingLayerWhitelist; // 0x28(0x10)
	struct TArray<struct FName> MeshGroupBlacklist; // 0x38(0x10)
	struct TArray<struct FName> MeshGroupWhitelist; // 0x48(0x10)
	struct TArray<struct FString> LevelPathBlacklistWildcards; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchAnalyzeSettings
// Size: 0x78 (Inherited: 0x00)
struct FGeneBatchAnalyzeSettings {
public:

	int32_t ExpectedVertexCount; // 0x00(0x04)
	float ExpectedBoundSize; // 0x04(0x04)
	struct TMap<struct FName, float> StreamingLayerExpectedBoundSizes; // 0x08(0x50)
	float HeightGroupUnit; // 0x58(0x04)
	bool bAggressive; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	int32_t MinISMNum; // 0x60(0x04)
	int32_t MinISMTotalVertexCount; // 0x64(0x04)
	float MinForceISMGridDensity; // 0x68(0x04)
	int32_t MaxVertexCount; // 0x6c(0x04)
	int32_t CanMergeMeshLODVertexMaxNum; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchReflectionCaptureKey
// Size: 0x1c (Inherited: 0x00)
struct FGeneBatchReflectionCaptureKey {
public:

	bool bOnlySkylight; // 0x00(0x01)
	bool bForceSkylightReflection; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName LocalReflectionGroupBake; // 0x04(0x08)
	struct FGuid LocalReflectionGroupBakeBuildID; // 0x0c(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMeshMapBuildDataKey
// Size: 0x20 (Inherited: 0x00)
struct FGeneBatchMeshMapBuildDataKey {
public:

	bool bValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName LocalLightGroupBake; // 0x04(0x08)
	bool bLODsShareStaticLighting; // 0x0c(0x01)
	bool bEnableAOLightmap; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct FName> Textures; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.InstancedStaticMeshComponentProperties
// Size: 0x98 (Inherited: 0x00)
struct FInstancedStaticMeshComponentProperties {
public:

	/*struct TSoftObjectPtr<UStaticMesh>*/char StaticMesh[0x28]; // 0x00(0x28)
	bool bCustomizedPhysicsCreating; // 0x28(0x01)
	bool bOnlySkylight; // 0x29(0x01)
	bool bForceSkylight; // 0x2a(0x01)
	bool bEnableAOLightmap; // 0x2b(0x01)
	bool bReverseCulling; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FName CollisionProfile; // 0x30(0x08)
	/*struct TSoftObjectPtr<AReflectionCapture>*/char ManuallySpecifyReflectionCapture[0x28]; // 0x38(0x28)
	/*struct TArray<struct TSoftObjectPtr<UMaterialInterface>>*/char OverrideMaterials[0x10]; // 0x60(0x10)
	/*struct TArray<struct TSoftObjectPtr<URuntimeVirtualTexture>>*/char RuntimeVirtualTextures[0x10]; // 0x70(0x10)
	int8_t VirtualTextureLodBias; // 0x80(0x01)
	int8_t VirtualTextureCullMips; // 0x81(0x01)
	int8_t VirtualTextureMinCoverage; // 0x82(0x01)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x83(0x01)
	enum class ERuntimeVirtualTextureLayerType VirtualTextureRenderLayerType; // 0x84(0x01)
	bool bHiddenInGame; // 0x85(0x01)
	bool bOverrideCullScreenSize; // 0x86(0x01)
	bool bCastShadow; // 0x87(0x01)
	bool bCastDynamicShadow; // 0x88(0x01)
	bool bCastStaticShadow; // 0x89(0x01)
	bool bReceiveShadow; // 0x8a(0x01)
	bool bUseAsOccluder; // 0x8b(0x01)
	bool bNotAsSocOccluder; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float CullingScreenSize; // 0x90(0x04)
	float CullingDistance; // 0x94(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneAtlasResultMap
// Size: 0x68 (Inherited: 0x00)
struct FGeneAtlasResultMap {
public:

	struct FIntPoint POTBoundingResolution; // 0x00(0x08)
	struct FIntPoint BoundingResolution; // 0x08(0x08)
	struct FIntPoint NetResolution; // 0x10(0x08)
	struct TArray<struct FGeneAtlasResultRegion> Regions; // 0x18(0x10)
	/*struct TSoftObjectPtr<UTexture>*/char EditorBakedMapTexture[0x28]; // 0x28(0x28)
	enum class EMaterialAtlasUsage MaterialAtlasUsage; // 0x50(0x01)
	enum class EGeneBatchBakeMethod BakeMethod; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	struct FGuid DataHash; // 0x54(0x10)
	char pad_64[0x4]; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneAtlasResultRegion
// Size: 0x50 (Inherited: 0x00)
struct FGeneAtlasResultRegion {
public:

	struct FIntPoint Location; // 0x00(0x08)
	struct FIntPoint Resolution; // 0x08(0x08)
	/*struct TSoftObjectPtr<UTexture>*/char SourceTexture[0x28]; // 0x10(0x28)
	int32_t SourceMipIndex; // 0x38(0x04)
	enum class EMaterialAtlasUsage MaterialAtlasUsage; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FGuid InputTextureDataHash; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMeshInfo
// Size: 0x18 (Inherited: 0x00)
struct FGeneBatchMeshInfo {
public:

	struct FGuid MeshGuid; // 0x00(0x10)
	int32_t LodIndex; // 0x10(0x04)
	int32_t SectionIndex; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchVertexColorData
// Size: 0x30 (Inherited: 0x00)
struct FGeneBatchVertexColorData {
public:

	struct FGuid Guid; // 0x00(0x10)
	struct FName SourceComponent; // 0x10(0x08)
	int32_t LodIndex; // 0x18(0x04)
	int32_t NumVertices; // 0x1c(0x04)
	char pad_20[0x10]; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchAllowMaterialPermutation
// Size: 0x60 (Inherited: 0x00)
struct FGeneBatchAllowMaterialPermutation {
public:

	struct TMap<struct FName, bool> StaticSwitchArguments; // 0x00(0x50)
	struct TArray<struct FGeneBatchAllowMaterialLayer> BatchParameterLayers; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultHLODData
// Size: 0x260 (Inherited: 0x08)
struct FGeneBatchTableRowResultHLODData : public FTableRowBase {
public:

	struct FGuid Guid; // 0x08(0x10)
	int32_t HLODLevel; // 0x18(0x04)
	struct FGuid ParentGuid; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString LevelKey; // 0x30(0x10)
	bool bStandalone; // 0x40(0x01)
	bool bUseStaticMeshProxy; // 0x41(0x01)
	bool bUseOriginalSMC; // 0x42(0x01)
	enum class EGeneBatchBakeMethod BakeMethod; // 0x43(0x01)
	bool bUseISM; // 0x44(0x01)
	bool bUseMergeMeshTypeComponent; // 0x45(0x01)
	bool bIgnoreTransform; // 0x46(0x01)
	bool bUseOriginalStaticMeshTags; // 0x47(0x01)
	/*struct TSoftObjectPtr<UStaticMesh>*/char OverrideOccluderMesh[0x28]; // 0x48(0x28)
	struct TArray<struct FGeneBatchDrawableLODInfo> DrawableLODInfo; // 0x70(0x10)
	struct FGuid MergedMeshGuid; // 0x80(0x10)
	struct FGuid MergeDrawSectionGroupGuid; // 0x90(0x10)
	struct FName ISMName; // 0xa0(0x08)
	struct TArray<struct FGeneBatchTableRowResultHLODDataLODData> LODs; // 0xa8(0x10)
	struct FVector PivotLocation; // 0xb8(0x0c)
	float DrawDistance; // 0xc4(0x04)
	struct FBoxSphereBounds StaticMeshBounds; // 0xc8(0x1c)
	float CullScreenSize; // 0xe4(0x04)
	float CullDistance; // 0xe8(0x04)
	bool bDisableLightmap; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	int32_t NumVertices; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct TArray<int32_t> UsedUVs; // 0xf8(0x10)
	int32_t LightMapUVIndex; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TArray<float> LODScreenSizes; // 0x110(0x10)
	/*struct TSoftObjectPtr<UStaticMesh>*/char MergedMeshPtr[0x28]; // 0x120(0x28)
	/*struct TSoftObjectPtr<UGeneBatchTableRowResultMeshReuseProperties>*/char ReuseProperties[0x28]; // 0x148(0x28)
	struct FGeneBatchPrimitiveInstanceData PrimitiveInstanceData; // 0x170(0x80)
	float UVDensityScale; // 0x1f0(0x04)
	bool bCastShadow; // 0x1f4(0x01)
	bool bIgnoreIBL; // 0x1f5(0x01)
	char pad_1F6[0x2]; // 0x1f6(0x02)
	/*struct TSet<struct FName>*/char SourceComponentTags[0x50]; // 0x1f8(0x50)
	struct FName StreamingLayer; // 0x248(0x08)
	struct FIntPoint GridKey; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultPrimitiveInstanceData
// Size: 0x90 (Inherited: 0x08)
struct FGeneBatchTableRowResultPrimitiveInstanceData : public FTableRowBase {
public:

	struct FName Primitive; // 0x08(0x08)
	struct FGeneBatchPrimitiveInstanceData PrimitiveInstanceData; // 0x10(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowWhyNotBatchMaterialDetail
// Size: 0xe0 (Inherited: 0x08)
struct FGeneBatchTableRowWhyNotBatchMaterialDetail : public FTableRowBase {
public:

	struct FGuid Guid; // 0x08(0x10)
	enum class EGeneBatchWhyNotBatchDetailType Type; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FGuid ParentGuid; // 0x1c(0x10)
	struct FName BaseMaterial; // 0x2c(0x08)
	int32_t MaterialParameterClusterLevelIndex; // 0x34(0x04)
	struct FGeneBatchMaterialParameterValuePack MaterialParameters; // 0x38(0x50)
	struct TArray<struct FGeneBatchTextureChannelUsage> ChannelUsages_Flatten; // 0x88(0x10)
	int32_t AtlasGroupKey; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<enum class EGeneBatchWhyNotBatchDetailType> UnitAtlasMaterialReasons; // 0xa0(0x10)
	struct TArray<int32_t> UnitAtlasMaterialReasonStartIndices; // 0xb0(0x10)
	struct TArray<int32_t> UnitAtlasMaterialReasonEndIndices; // 0xc0(0x10)
	struct TArray<struct FName> Units; // 0xd0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultMergeDrawSection
// Size: 0x408 (Inherited: 0x08)
struct FGeneBatchTableRowResultMergeDrawSection : public FTableRowBase {
public:

	struct FString LevelKey; // 0x08(0x10)
	/*struct TSoftObjectPtr<AActor>*/char ActorResource[0x28]; // 0x18(0x28)
	int32_t HLODLevel; // 0x40(0x04)
	bool bOverrideMaterial; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	/*struct TSoftObjectPtr<UMaterial>*/char BaseMaterial[0x28]; // 0x48(0x28)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char MaterialInstance[0x28]; // 0x70(0x28)
	struct TArray<struct FGeneBatchResultUsageHashedAtlasMaps> AtlasMapsLayers; // 0x98(0x10)
	struct TArray<int32_t> AtlasBatchIndirectIndices; // 0xa8(0x10)
	int32_t DrawSectionNum; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<struct FGeneBatchResultDrawSectionIndex> DrawSections; // 0xc0(0x10)
	/*struct TSet<struct TSoftObjectPtr<UMaterialInterface>>*/char SourceMaterialInstances[0x50]; // 0xd0(0x50)
	/*struct TSet<struct FLinearColor>*/char NumericParameters[0x50]; // 0x120(0x50)
	int32_t MeshNum; // 0x170(0x04)
	struct FGuid ResultMeshGuid; // 0x174(0x10)
	char pad_184[0x4]; // 0x184(0x04)
	/*struct TSet<struct FGuid>*/char ResultTextureGuid[0x50]; // 0x188(0x50)
	struct TMap<struct FGeneBatchTextureChannelUsage, struct FGeneBatchTextureSet> ResultTextures; // 0x1d8(0x50)
	/*struct TSet<struct TSoftObjectPtr<UStaticMesh>>*/char MeshPtrs[0x50]; // 0x228(0x50)
	/*struct TSoftObjectPtr<UStaticMesh>*/char OcclusionMesh[0x28]; // 0x278(0x28)
	struct FGuid InstancingGuid; // 0x2a0(0x10)
	int32_t InstancingNum; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct TArray<float> CustomPrimitiveData; // 0x2b8(0x10)
	bool bSectionCastShadow; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct TMap<struct FName, int32_t> TextureMipIndices; // 0x2d0(0x50)
	struct TArray<struct FGeneBatchAtlasMapIndex> AtlasMapIndices; // 0x320(0x10)
	bool bMergeMaterial; // 0x330(0x01)
	bool bIgnoreTransform; // 0x331(0x01)
	char pad_332[0x2]; // 0x332(0x02)
	struct FVector PivotLocation; // 0x334(0x0c)
	int32_t NumUsedUVs; // 0x340(0x04)
	int32_t MaterialParameterClusterLevelIndex; // 0x344(0x04)
	struct FGeneBatchPrimitiveInstanceLODData PivotLODData; // 0x348(0x20)
	struct TArray<struct FGeneBatchPrimitiveInstanceLODData> UsedLODData; // 0x368(0x10)
	struct FGuid MergeDrawSectionGroupGuid; // 0x378(0x10)
	struct FGeneAtlasMapsArrayLayers AtlasMapsArrayLayers; // 0x388(0x10)
	struct FGeneBatchMaterialParameterValuePack MaterialParameters; // 0x398(0x50)
	struct TArray<struct FGuid> InputMeshDataHashes; // 0x3e8(0x10)
	struct TArray<struct FGuid> InputMaterialDataHashes; // 0x3f8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultMaterial
// Size: 0x180 (Inherited: 0x08)
struct FGeneBatchTableRowResultMaterial : public FTableRowBase {
public:

	struct TArray<struct FGeneBatchResultAtlasMaterial> AtlasMaterials; // 0x08(0x10)
	/*struct TSoftObjectPtr<UMaterial>*/char BaseMaterial[0x28]; // 0x18(0x28)
	struct FGeneAtlasMapsArrayLayers AtlasMapsArrayLayers; // 0x40(0x10)
	struct FGeneBatchMaterialParameterValuePack Parameters; // 0x50(0x50)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char ParentAtlasMaterial[0x28]; // 0xa0(0x28)
	struct FGeneBatchMaterialParameterValuePack StaticParameters; // 0xc8(0x50)
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0x118(0x28)
	struct FStaticParameterSet StaticParameterSet; // 0x140(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTextureChannelUsage
// Size: 0x60 (Inherited: 0x0c)
struct FGeneBatchTextureChannelUsage : public FGeneBatchTextureBaseChannelUsage {
public:

	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FName, enum class EPixelFormat> PlatformPixelFormats; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchAllowMaterialTextureParameter
// Size: 0x30 (Inherited: 0x00)
struct FGeneBatchAllowMaterialTextureParameter {
public:

	struct FGeneBatchTextureBaseChannelUsage ChannelUsage; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString SourceMaterialTextureParamRegex; // 0x10(0x10)
	struct FName AtlasMaterialTextureParam; // 0x20(0x08)
	enum class EMaterialAtlasUsage SamplingMaterialAtlasUsage; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultMesh
// Size: 0x158 (Inherited: 0x08)
struct FGeneBatchTableRowResultMesh : public FTableRowBase {
public:

	struct FGuid Guid; // 0x08(0x10)
	int32_t AssetNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	/*struct TArray<struct TSoftObjectPtr<UStaticMesh>>*/char MergeAssets[0x10]; // 0x20(0x10)
	/*struct TArray<struct TSoftObjectPtr<UMaterialInterface>>*/char MergeMaterialInstances[0x10]; // 0x30(0x10)
	struct TArray<struct FGeneBatchTableRowResultMeshLOD> LODs; // 0x40(0x10)
	/*struct TSoftObjectPtr<UStaticMesh>*/char MergedMeshPtr[0x28]; // 0x50(0x28)
	/*struct TSoftObjectPtr<UStaticMesh>*/char OcclusionMeshPtr[0x28]; // 0x78(0x28)
	bool bUseOriginalMesh; // 0xa0(0x01)
	bool bMergeMaterialOnly; // 0xa1(0x01)
	enum class EGeneBatchBakeMethod BakeMethod; // 0xa2(0x01)
	bool bDisableLightmap; // 0xa3(0x01)
	int32_t LightMapUVIndex; // 0xa4(0x04)
	bool bMergeAssetTags; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FGuid> ShouldBakeOcclusionMeshMergeDrawSectionGroups; // 0xb0(0x10)
	bool bBakeOcclusionMesh; // 0xc0(0x01)
	bool bSelfAsOccluder; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
	struct TArray<int32_t> NumVertices; // 0xc8(0x10)
	struct TArray<float> ReductionLODPercentVertices; // 0xd8(0x10)
	bool bCastShadow; // 0xe8(0x01)
	bool bMergeCollision; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	int32_t HLODLevel; // 0xec(0x04)
	bool bUseFullPrecisionUVs; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FGeneBatchTableRowResultMeshReuseKey ReuseKey; // 0xf8(0x18)
	/*struct TSoftObjectPtr<UGeneBatchTableRowResultMeshReuseProperties>*/char ReuseProperties[0x28]; // 0x110(0x28)
	struct TArray<float> LODScreenSizes; // 0x138(0x10)
	struct FGuid DataHash; // 0x148(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchAnalyzeHLODSetting
// Size: 0x3b8 (Inherited: 0x00)
struct FGeneBatchAnalyzeHLODSetting {
public:

	struct FString Name; // 0x00(0x10)
	int32_t HLODIndex; // 0x10(0x04)
	int32_t ParentHLODIndex; // 0x14(0x04)
	struct FString Label; // 0x18(0x10)
	struct FGeneBatchAnalyzeSettings AnalyzeSettings; // 0x28(0x78)
	struct TArray<float> DrawDistances; // 0xa0(0x10)
	struct TArray<int32_t> MinLODIndex; // 0xb0(0x10)
	int32_t MipIndex; // 0xc0(0x04)
	int32_t AtlasGroupKey; // 0xc4(0x04)
	struct FGeneBatchAnalyzePrimitiveFilter PrimitiveFilter; // 0xc8(0x68)
	int32_t MaterialParameterClusterLevelIndex; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct TArray<struct FGeneBatchCustomMaterialParameterClusterLevelIndex> CustomMaterialParameterClusterLevelIndices; // 0x138(0x10)
	bool bOverrideCastShadow; // 0x148(0x01)
	bool bOverrideBaseMaterial; // 0x149(0x01)
	bool bIgnoreLightmap; // 0x14a(0x01)
	bool bIgnoreAOLightmap; // 0x14b(0x01)
	bool bIgnoreIBL; // 0x14c(0x01)
	bool bClusterISM; // 0x14d(0x01)
	bool bMergeMeshInstance; // 0x14e(0x01)
	bool bMergeMaterial; // 0x14f(0x01)
	bool bMergeMeshType; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	int32_t MergeMaterialMinLOD; // 0x154(0x04)
	bool bCrossGrid; // 0x158(0x01)
	bool bCrossLayer; // 0x159(0x01)
	bool bBakeMeshes; // 0x15a(0x01)
	bool bBakeMaterials; // 0x15b(0x01)
	bool bMergeCollision; // 0x15c(0x01)
	bool bUseOriginalPivotLocation; // 0x15d(0x01)
	bool bUseOriginalMesh; // 0x15e(0x01)
	char pad_15F[0x1]; // 0x15f(0x01)
	struct TMap<struct FName, bool> UseOriginalMesh_MeshGroupOverride; // 0x160(0x50)
	struct TMap<struct FName, bool> MergeMeshInstance_StreamingLayerOverride; // 0x1b0(0x50)
	struct TMap<struct FName, struct FGeneBatchIntArray> MinLODIndex_StreamingLayerOverride; // 0x200(0x50)
	struct TMap<struct FName, struct FGeneBatchFloatArray> DrawDistances_StreamingLayerOverride; // 0x250(0x50)
	struct TMap<struct FName, int32_t> AtlasGroupKey_StreamingLayerOverride; // 0x2a0(0x50)
	struct TMap<struct FName, int32_t> MaterialParameterClusterLevelIndex_StreamingLayerOverride; // 0x2f0(0x50)
	struct TMap<struct FName, bool> OverrideBaseMaterial_StreamingLayerOverride; // 0x340(0x50)
	struct FGeneBatchReductionSettings ReductionSettings; // 0x390(0x10)
	struct FGeneBatchManualGroupSetting ManualGroupSetting; // 0x3a0(0x03)
	char pad_3A3[0x1]; // 0x3a3(0x01)
	struct FGeneBatchLightMapUVSettings LightMapUVSettings; // 0x3a4(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchSMCProperties
// Size: 0x40 (Inherited: 0x00)
struct FGeneBatchSMCProperties {
public:

	struct FGeneBatchMeshMapBuildDataKey MeshMapBuildDataKey; // 0x00(0x20)
	struct FGeneBatchReflectionCaptureKey ReflectionCaptureKey; // 0x20(0x1c)
	bool bHiddenInGame; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTextureAtlasTableRow
// Size: 0x80 (Inherited: 0x08)
struct FGeneBatchTextureAtlasTableRow : public FTableRowBase {
public:

	struct FGuid Guid; // 0x08(0x10)
	struct FGeneAtlasResultMap GeneAtlasResultMap; // 0x18(0x68)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchBatchableGroup
// Size: 0x48 (Inherited: 0x00)
struct FGeneBatchBatchableGroup {
public:

	struct TArray<struct FName> Primitives; // 0x00(0x10)
	struct TArray<int32_t> LODIndices; // 0x10(0x10)
	struct TArray<int32_t> SectionIndices; // 0x20(0x10)
	struct FGeneBatchMeshInfo MeshInfo; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowInputComponentLOD
// Size: 0x40 (Inherited: 0x00)
struct FGeneBatchTableRowInputComponentLOD {
public:

	struct TArray<struct FGeneBatchTableRowInputComponentSection> DrawSections; // 0x00(0x10)
	struct FGeneBatchVertexColorData VertexColorData; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowAllowMaterial
// Size: 0xd8 (Inherited: 0x08)
struct FGeneBatchTableRowAllowMaterial : public FTableRowBase {
public:

	/*struct TSoftObjectPtr<UMaterial>*/char Material[0x28]; // 0x08(0x28)
	struct TArray<struct FGeneBatchAllowMaterialPermutation> BatchParameterPermutations; // 0x30(0x10)
	struct TArray<struct FGeneBatchMaterialParameterClusterConfigLevel> ParameterClusterLevels; // 0x40(0x10)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char OverrideMaterial[0x28]; // 0x50(0x28)
	struct FGeneBatchAllowMaterialPermutation OverrideMaterialParameterPermutations; // 0x78(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneAtlasParamVsAtlasMap
// Size: 0x78 (Inherited: 0x00)
struct FGeneAtlasParamVsAtlasMap {
public:

	struct FGeneBatchTextureChannelUsage ChannelUsage; // 0x00(0x60)
	struct FGuid AtlasGuid; // 0x60(0x10)
	int32_t AtlasMapIndex; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchMaterialTextureParameter
// Size: 0x78 (Inherited: 0x00)
struct FGeneBatchMaterialTextureParameter {
public:

	struct FGeneBatchTextureChannelUsage ChannelUsage; // 0x00(0x60)
	struct FString SourceMaterialTextureParamRegex; // 0x60(0x10)
	struct FName AtlasMaterialTextureParam; // 0x70(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchAtlasCountDetailsItem
// Size: 0xb0 (Inherited: 0x00)
struct FGeneBatchAtlasCountDetailsItem {
public:

	/*struct TSoftObjectPtr<UTexture>*/char Texture[0x28]; // 0x00(0x28)
	struct FIntPoint Resolution; // 0x28(0x08)
	int32_t NumUsedPixels; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FGeneBatchTextureChannelUsage ChannelUsage; // 0x38(0x60)
	int32_t AtlasGroupKey; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	/*struct TArray<struct TSoftObjectPtr<UTexture>>*/char SourceTextures[0x10]; // 0xa0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneAtlasResultAtlas
// Size: 0xa8 (Inherited: 0x00)
struct FGeneAtlasResultAtlas {
public:

	struct FGuid OwnerGroupGuid; // 0x00(0x10)
	int32_t AssetNum; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FGeneBatchTextureChannelUsage ChannelUsage; // 0x18(0x60)
	struct TArray<struct FGeneAtlasResultMap> maps; // 0x78(0x10)
	enum class EGeneBatchBakeMethod BakeMethod; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct FGuid> TextureAtlasGuids; // 0x90(0x10)
	int32_t StrictAlignGroupIndex; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowResultParameterTexture
// Size: 0x120 (Inherited: 0x08)
struct FGeneBatchTableRowResultParameterTexture : public FTableRowBase {
public:

	struct FGuid Guid; // 0x08(0x10)
	/*struct TSet<struct FGuid>*/char OwnerGuid[0x50]; // 0x18(0x50)
	int32_t AssetNum; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FGeneBatchTextureChannelUsage ChannelUsage; // 0x70(0x60)
	/*struct TSet<struct TSoftObjectPtr<UTexture>>*/char MergeAssets[0x50]; // 0xd0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowInputTexture
// Size: 0xb8 (Inherited: 0x08)
struct FGeneBatchTableRowInputTexture : public FTableRowBase {
public:

	struct FName TextureName; // 0x08(0x08)
	/*struct TSoftObjectPtr<UTexture>*/char Texture[0x28]; // 0x10(0x28)
	struct FGeneBatchTextureChannelUsage ChannelUsage; // 0x38(0x60)
	struct FIntPoint Resolution; // 0x98(0x08)
	struct FIntPoint OriginalResolution; // 0xa0(0x08)
	struct FGuid DataHash; // 0xa8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowWhyNotBatchComponentDetail
// Size: 0x138 (Inherited: 0x08)
struct FGeneBatchTableRowWhyNotBatchComponentDetail : public FTableRowBase {
public:

	struct FGuid Guid; // 0x08(0x10)
	enum class EGeneBatchWhyNotBatchDetailType Type; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FGuid ParentGuid; // 0x1c(0x10)
	int32_t HLODIndex; // 0x2c(0x04)
	struct TArray<struct FName> StaticMeshTags; // 0x30(0x10)
	struct TArray<struct FName> ComponentTags; // 0x40(0x10)
	struct FName MeshName; // 0x50(0x08)
	struct FIntPoint GridLevel; // 0x58(0x08)
	struct FGeneBatchSMCProperties SMCProperties; // 0x60(0x40)
	struct FName POI; // 0xa0(0x08)
	struct FString LevelKey; // 0xa8(0x10)
	int32_t VertexCount; // 0xb8(0x04)
	struct FVector BoundSize; // 0xbc(0x0c)
	struct FBox2D LightMapUVRange; // 0xc8(0x14)
	int32_t HLODLevel; // 0xdc(0x04)
	int32_t OriginalMeshKey; // 0xe0(0x04)
	bool bUseOriginalMesh; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	int32_t MaterialGroupKey; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<struct FName> OverrideMaterials; // 0xf0(0x10)
	struct TArray<int32_t> VertexColorIndices; // 0x100(0x10)
	int32_t MergeMeshTypeKey; // 0x110(0x04)
	int32_t ISMKey; // 0x114(0x04)
	int32_t OriginalISMKey; // 0x118(0x04)
	bool bIgnoreTransform; // 0x11c(0x01)
	bool bCastShadow; // 0x11d(0x01)
	bool bCastDynamicShadow; // 0x11e(0x01)
	bool bCastStaticShadow; // 0x11f(0x01)
	bool bReuseMesh; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct TArray<struct FName> Units; // 0x128(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchISMProperties
// Size: 0xd8 (Inherited: 0x00)
struct FGeneBatchISMProperties {
public:

	struct FInstancedStaticMeshComponentProperties Properties; // 0x00(0x98)
	struct FGeneBatchSMCProperties SMCProperties; // 0x98(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBakeTableRowResultPrimitveTexture
// Size: 0x108 (Inherited: 0x08)
struct FGeneBakeTableRowResultPrimitveTexture : public FTableRowBase {
public:

	struct FGeneAtlasResultAtlas Atlas; // 0x08(0xa8)
	int32_t MapIndex; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FGeneAtlasResultRegion Region; // 0xb8(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatch.GeneBatchTableRowInputComponent
// Size: 0x270 (Inherited: 0x08)
struct FGeneBatchTableRowInputComponent : public FTableRowBase {
public:

	struct FName PrimitiveName; // 0x08(0x08)
	struct FName Level; // 0x10(0x08)
	struct TArray<struct FGeneBatchTableRowInputComponentLOD> LODs; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform Transform; // 0x30(0x30)
	struct FBoxSphereBounds Bounds; // 0x60(0x1c)
	float BoundsScale; // 0x7c(0x04)
	float CullScreenSize; // 0x80(0x04)
	float CullDistance; // 0x84(0x04)
	struct FName StreamingLayer; // 0x88(0x08)
	struct FIntPoint StreamingLayerGrid; // 0x90(0x08)
	struct FName Mesh; // 0x98(0x08)
	struct TArray<struct FName> Materials; // 0xa0(0x10)
	struct FGeneBatchSMCProperties SMCProperties; // 0xb0(0x40)
	struct FGeneBatchISMProperties ISMProperties; // 0xf0(0xd8)
	bool bCanClusterISM; // 0x1c8(0x01)
	bool bCastShadow; // 0x1c9(0x01)
	bool bCastDynamicShadow; // 0x1ca(0x01)
	bool bCastStaticShadow; // 0x1cb(0x01)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	/*struct TSoftObjectPtr<ULocalLightGroupBake>*/char LocalLightGroupBake[0x28]; // 0x1d0(0x28)
	struct TArray<struct FGeneBatchPrimitiveInstanceLODData> PrimitiveInstanceLODData; // 0x1f8(0x10)
	struct TArray<struct FGeneBatchPrimitiveInstanceLODData> PerInstancePrimitiveInstanceLODData; // 0x208(0x10)
	struct TArray<struct FName> StaticMeshTags; // 0x218(0x10)
	struct TArray<struct FName> ComponentTags; // 0x228(0x10)
	struct FName MeshGroup; // 0x238(0x08)
	int32_t ISMInstanceNum; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct TArray<struct FBoxSphereBounds> ISMSubBounds; // 0x248(0x10)
	struct FString LevelKey; // 0x258(0x10)
	struct FName POI; // 0x268(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
