
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : int {
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2
};

// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : int {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4
};

// Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : int {
	Clear_Weightmap = 0,
	Clear_Heightmap = 1,
	Clear_All = 2,
	Clear_MAX = 3
};

// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : int {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3
};

// Enum Landscape.EGrassScaling
enum class EGrassScaling : int {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3
};

// Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : int {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4
};

// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : int {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2
};

// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : int {
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3
};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : int {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4
};

// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : int {
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2
};

// Enum Landscape.LandscapeSplineMeshOrientation
enum class LandscapeSplineMeshOrientation : int {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2
};

// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : int {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3
};

// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : int {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5
};

// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : int {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4
};

// ScriptStruct Landscape.CDLODMaterial
// Size: 0x28 (Inherited: 0x00)
struct FCDLODMaterial {
public:

	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UMaterialInstanceConstant* MaterialInterface; // 0x08(0x08)
	struct UMaterialInstanceConstant* MaterialInterfaceNoVT; // 0x10(0x08)
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x18(0x08)
	float StartDistance; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeLayerParameter
// Size: 0x20 (Inherited: 0x00)
struct FLandscapeLayerParameter {
public:

	struct FVector4 TextureHeightScaleOffsetParameters; // 0x00(0x10)
	float TillingParameter; // 0x10(0x04)
	uint32_t TextureArrayIndexAndTillingStarEnd; // 0x14(0x04)
	float FarTillingScale; // 0x18(0x04)
	float SpecularParameter; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.DTAPatchTextureIndices
// Size: 0x18 (Inherited: 0x00)
struct FDTAPatchTextureIndices {
public:

	struct TArray<int32_t> TextureIndices; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeLayer
// Size: 0x88 (Inherited: 0x00)
struct FLandscapeLayer {
public:

	struct FGuid Guid; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	bool bVisible; // 0x18(0x01)
	bool bIsAdditiveLayer; // 0x19(0x01)
	bool bStoreInPatch; // 0x1a(0x01)
	bool bLocked; // 0x1b(0x01)
	float HeightmapAlpha; // 0x1c(0x04)
	float WeightmapAlpha; // 0x20(0x04)
	enum class ELandscapeBlendMode BlendMode; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct TArray<struct FLandscapeLayerBrush> Brushes; // 0x28(0x10)
	struct TMap<struct ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend; // 0x38(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeLayerBrush
// Size: 0x01 (Inherited: 0x00)
struct FLandscapeLayerBrush {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// Size: 0x10 (Inherited: 0x00)
struct FWeightmapLayerAllocationInfo {
public:

	struct ULandscapeLayerInfoObject* LayerInfo; // 0x00(0x08)
	char WeightmapTextureIndex; // 0x08(0x01)
	char WeightmapTextureChannel; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeComponentMaterialOverride
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeComponentMaterialOverride {
public:

	struct FPerPlatformInt LodIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInterface* Material; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeEditToolRenderData
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeEditToolRenderData {
public:

	struct UMaterialInterface* ToolMaterial; // 0x00(0x08)
	struct UMaterialInterface* GizmoMaterial; // 0x08(0x08)
	int32_t SelectedType; // 0x10(0x04)
	int32_t DebugChannelR; // 0x14(0x04)
	int32_t DebugChannelG; // 0x18(0x04)
	int32_t DebugChannelB; // 0x1c(0x04)
	struct UTexture2D* DataTexture; // 0x20(0x08)
	struct UTexture2D* LayerContributionTexture; // 0x28(0x08)
	struct UTexture2D* DirtyTexture; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.GizmoSelectData
// Size: 0x50 (Inherited: 0x00)
struct FGizmoSelectData {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.GrassVariety
// Size: 0x48 (Inherited: 0x00)
struct FGrassVariety {
public:

	struct UStaticMesh* GrassMesh; // 0x00(0x08)
	struct FPerPlatformFloat GrassDensity; // 0x08(0x04)
	bool bUseGrid; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float PlacementJitter; // 0x10(0x04)
	struct FPerPlatformInt StartCullDistance; // 0x14(0x04)
	struct FPerPlatformInt EndCullDistance; // 0x18(0x04)
	int32_t MinLOD; // 0x1c(0x04)
	enum class EGrassScaling Scaling; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FFloatInterval ScaleX; // 0x24(0x08)
	struct FFloatInterval ScaleY; // 0x2c(0x08)
	struct FFloatInterval ScaleZ; // 0x34(0x08)
	bool RandomRotation; // 0x3c(0x01)
	bool AlignToSurface; // 0x3d(0x01)
	bool bUseLandscapeLightmap; // 0x3e(0x01)
	struct FLightingChannels LightingChannels; // 0x3f(0x01)
	bool bReceivesDecals; // 0x40(0x01)
	bool bCastDynamicShadow; // 0x41(0x01)
	bool bKeepInstanceBufferCPUCopy; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeInfoLayerSettings {
public:

	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x00(0x08)
	struct FName LayerName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeProxyMaterialOverride
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeProxyMaterialOverride {
public:

	struct FPerPlatformInt LodIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInterface* Material; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// Size: 0x01 (Inherited: 0x00)
struct FLandscapeImportLayerInfo {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeLayerStruct
// Size: 0x08 (Inherited: 0x00)
struct FLandscapeLayerStruct {
public:

	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeCustomMaskDataLayerSettings
// Size: 0x01 (Inherited: 0x00)
struct FLandscapeCustomMaskDataLayerSettings {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// Size: 0x01 (Inherited: 0x00)
struct FLandscapeEditorLayerSettings {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.EditorLayerInfo
// Size: 0x20 (Inherited: 0x00)
struct FEditorLayerInfo {
public:

	struct FString Name; // 0x00(0x10)
	struct FGuid Guid; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeSplineConnection
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeSplineConnection {
public:

	struct ULandscapeSplineSegment* Segment; // 0x00(0x08)
	char End : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.ForeignWorldSplineData
// Size: 0x01 (Inherited: 0x00)
struct FForeignWorldSplineData {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.ForeignSplineSegmentData
// Size: 0x01 (Inherited: 0x00)
struct FForeignSplineSegmentData {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.ForeignControlPointData
// Size: 0x01 (Inherited: 0x00)
struct FForeignControlPointData {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeSplineMeshEntry {
public:

	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x08(0x10)
	char bCenterH : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector2D CenterAdjust; // 0x1c(0x08)
	char bScaleToWidth : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector Scale; // 0x28(0x0c)
	enum class LandscapeSplineMeshOrientation Orientation; // 0x34(0x01)
	enum class ESplineMeshAxis ForwardAxis; // 0x35(0x01)
	enum class ESplineMeshAxis UpAxis; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// Size: 0x18 (Inherited: 0x00)
struct FLandscapeSplineSegmentConnection {
public:

	struct ULandscapeSplineControlPoint* ControlPoint; // 0x00(0x08)
	float TangentLen; // 0x08(0x04)
	struct FName SocketName; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// Size: 0x70 (Inherited: 0x00)
struct FLandscapeSplineInterpPoint {
public:

	struct FVector Center; // 0x00(0x0c)
	struct FVector Left; // 0x0c(0x0c)
	struct FVector Right; // 0x18(0x0c)
	struct FVector FalloffLeft; // 0x24(0x0c)
	struct FVector FalloffRight; // 0x30(0x0c)
	struct FVector LayerLeft; // 0x3c(0x0c)
	struct FVector LayerRight; // 0x48(0x0c)
	struct FVector LayerFalloffLeft; // 0x54(0x0c)
	struct FVector LayerFalloffRight; // 0x60(0x0c)
	float StartEndFalloff; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.GrassInput
// Size: 0x28 (Inherited: 0x00)
struct FGrassInput {
public:

	struct FName Name; // 0x00(0x08)
	struct ULandscapeGrassType* GrassType; // 0x08(0x08)
	struct FExpressionInput Input; // 0x10(0x0c)
	char pad_1C[0xc]; // 0x1c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LayerBlendInput
// Size: 0x48 (Inherited: 0x00)
struct FLayerBlendInput {
public:

	struct FName LayerName; // 0x00(0x08)
	enum class ELandscapeLayerBlendType BlendType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FExpressionInput LayerInput; // 0x0c(0x0c)
	char pad_18[0x8]; // 0x18(0x08)
	struct FExpressionInput HeightInput; // 0x20(0x0c)
	char pad_2C[0x8]; // 0x2c(0x08)
	float PreviewWeight; // 0x34(0x04)
	struct FVector ConstLayerInput; // 0x38(0x0c)
	float ConstHeightInput; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeCustomMaskDataProperties
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeCustomMaskDataProperties {
public:

	struct FLinearColor HighlightColor; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.WeightmapData
// Size: 0x30 (Inherited: 0x00)
struct FWeightmapData {
public:

	struct TArray<struct UTexture2D*> Textures; // 0x00(0x10)
	struct TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10(0x10)
	struct TArray<struct ULandscapeWeightmapUsage*> TextureUsages; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.HeightmapData
// Size: 0x08 (Inherited: 0x00)
struct FHeightmapData {
public:

	struct UTexture2D* Texture; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeCustomMaskData
// Size: 0x30 (Inherited: 0x00)
struct FLandscapeCustomMaskData {
public:

	struct FGuid Guid; // 0x00(0x10)
	struct UTexture2D* DataTexture; // 0x10(0x08)
	bool bVisible; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FLandscapeCustomMaskDataProperties Properties; // 0x1c(0x10)
	bool bUnused; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeCustomMaskDataLayer
// Size: 0x44 (Inherited: 0x00)
struct FLandscapeCustomMaskDataLayer {
public:

	struct FGuid Guid; // 0x00(0x10)
	struct FName Name; // 0x10(0x08)
	int32_t MaterialID; // 0x18(0x04)
	struct FGuid ParentGuid; // 0x1c(0x10)
	struct FLandscapeCustomMaskDataProperties Properties; // 0x2c(0x10)
	bool bLocked; // 0x3c(0x01)
	bool bEnableGroupMask; // 0x3d(0x01)
	bool bMutualExclusive; // 0x3e(0x01)
	bool bEnableErase; // 0x3f(0x01)
	bool bDisableFalloff; // 0x40(0x01)
	bool bVisible; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Landscape.LandscapeLayerComponentData
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeLayerComponentData {
public:

	struct FHeightmapData HeightmapData; // 0x00(0x08)
	struct FWeightmapData WeightmapData; // 0x08(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
