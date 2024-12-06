
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum SimplygonUObjects.EShaderCodeInputMode
enum class EShaderCodeInputMode : int {
	Source = 0,
	Binary = 1,
	EShaderCodeInputMode_MAX = 2
};

// Enum SimplygonUObjects.EOutputColorSpace
enum class EOutputColorSpace : int {
	Undefined = 0,
	Linear = 1,
	sRGB = 2,
	EOutputColorSpace_MAX = 3
};

// Enum SimplygonUObjects.EGeometryDataFieldType
enum class EGeometryDataFieldType : int {
	Coords = 0,
	TexCoords = 1,
	Normals = 2,
	Tangents = 3,
	Bitangents = 4,
	Colors = 5,
	TriangleIds = 6,
	MaterialIds = 7,
	VertexIds = 8,
	UserVertexField = 9,
	UserCornerField = 10,
	UserTriangleField = 11,
	CustomField = 12,
	EGeometryDataFieldType_MAX = 13
};

// Enum SimplygonUObjects.EFlipBackfacingMode
enum class EFlipBackfacingMode : int {
	PixelNormal = 0,
	FaceNormal = 1,
	EFlipBackfacingMode_MAX = 2
};

// Enum SimplygonUObjects.EOutputOpacityType
enum class EOutputOpacityType : int {
	Opacity = 0,
	Transparency = 1,
	EOutputOpacityType_MAX = 2
};

// Enum SimplygonUObjects.EOutputDDSCompressionType
enum class EOutputDDSCompressionType : int {
	NoCompression = 0,
	BC1 = 1,
	BC2 = 2,
	BC3 = 3,
	BC4 = 4,
	BC5 = 5,
	EOutputDDSCompressionType_MAX = 6
};

// Enum SimplygonUObjects.EOutputImageFileFormat
enum class EOutputImageFileFormat : int {
	BMP = 0,
	DDS = 1,
	JPEG = 2,
	PNG = 3,
	TGA = 4,
	TIFF = 5,
	EXR = 6,
	EOutputImageFileFormat_MAX = 7
};

// Enum SimplygonUObjects.EOutputPixelFormat
enum class EOutputPixelFormat : int {
	R8G8B8A8 = 0,
	R8G8B8 = 1,
	R8 = 2,
	R16G16B16A16 = 3,
	R16G16B16 = 4,
	R16 = 5,
	R32G32B32A32F = 6,
	EOutputPixelFormat_MAX = 7
};

// Enum SimplygonUObjects.EFillMode
enum class EFillMode : int {
	Interpolate = 0,
	NearestNeighbor = 1,
	NoFill = 2,
	EFillMode_MAX = 3
};

// Enum SimplygonUObjects.EDitherType
enum class EDitherType : int {
	NoDither = 0,
	FloydSteinberg = 1,
	JarvisJudiceNinke = 2,
	Sierra = 3,
	EDitherType_MAX = 4
};

// Enum SimplygonUObjects.EOpacityChannelComponent
enum class EOpacityChannelComponent : int {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EOpacityChannelComponent_MAX = 4
};

// Enum SimplygonUObjects.EStopCondition
enum class EStopCondition : int {
	Any = 0,
	All = 1,
	EStopCondition_MAX = 2
};

// Enum SimplygonUObjects.EBillboardMode
enum class EBillboardMode : int {
	OuterShell = 0,
	Foliage = 1,
	EBillboardMode_MAX = 2
};

// Enum SimplygonUObjects.ESurfaceTransferMode
enum class ESurfaceTransferMode : int {
	Fast = 0,
	Accurate = 1,
	ESurfaceTransferMode_MAX = 2
};

// Enum SimplygonUObjects.ERemeshingMode
enum class ERemeshingMode : int {
	Outside = 0,
	Inside = 1,
	Manual = 2,
	ERemeshingMode_MAX = 3
};

// Enum SimplygonUObjects.EHoleFilling
enum class EHoleFilling : int {
	Disabled = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EHoleFilling_MAX = 4
};

// Enum SimplygonUObjects.ESurfaceAreaScale
enum class ESurfaceAreaScale : int {
	LargestInstance = 0,
	SmallestInstance = 1,
	Average = 2,
	ESurfaceAreaScale_MAX = 3
};

// Enum SimplygonUObjects.EChartAggregatorMode
enum class EChartAggregatorMode : int {
	TextureSizeProportions = 0,
	SurfaceArea = 1,
	OriginalPixelDensity = 2,
	UVSizeProportions = 3,
	EChartAggregatorMode_MAX = 4
};

// Enum SimplygonUObjects.ETexCoordGeneratorType
enum class ETexCoordGeneratorType : int {
	Parameterizer = 0,
	ChartAggregator = 1,
	ETexCoordGeneratorType_MAX = 2
};

// Enum SimplygonUObjects.ETransformationSpace
enum class ETransformationSpace : int {
	Global = 0,
	Local = 1,
	Tangent = 2,
	View = 3,
	ETransformationSpace_MAX = 4
};

// Enum SimplygonUObjects.EAttributeTessellationDensityMode
enum class EAttributeTessellationDensityMode : int {
	RelativeArea = 0,
	AbsoluteArea = 1,
	RelativeLength = 2,
	AbsoluteLength = 3,
	UserDefined = 4,
	OnScreenSize = 5,
	EAttributeTessellationDensityMode_MAX = 6
};

// Enum SimplygonUObjects.EWeightsFromColorMode
enum class EWeightsFromColorMode : int {
	Standard = 0,
	High = 1,
	Low = 2,
	EWeightsFromColorMode_MAX = 3
};

// Enum SimplygonUObjects.EWeightsFromColorComponent
enum class EWeightsFromColorComponent : int {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EWeightsFromColorComponent_MAX = 4
};

// Enum SimplygonUObjects.EBoneReductionTargetStopCondition
enum class EBoneReductionTargetStopCondition : int {
	Any = 0,
	All = 1,
	EBoneReductionTargetStopCondition_MAX = 2
};

// Enum SimplygonUObjects.EComputeVisibilityMode
enum class EComputeVisibilityMode : int {
	DirectX = 0,
	Software = 1,
	EComputeVisibilityMode_MAX = 2
};

// Enum SimplygonUObjects.EDataCreationPreferences
enum class EDataCreationPreferences : int {
	OnlyUseOriginalData = 0,
	PreferOriginalData = 1,
	PreferOptimizedResult = 2,
	EDataCreationPreferences_MAX = 3
};

// Enum SimplygonUObjects.ESymmetryAxis
enum class ESymmetryAxis : int {
	X = 0,
	Y = 1,
	Z = 2,
	ESymmetryAxis_MAX = 3
};

// Enum SimplygonUObjects.EReductionHeuristics
enum class EReductionHeuristics : int {
	Fast = 0,
	Consistent = 1,
	EReductionHeuristics_MAX = 2
};

// Enum SimplygonUObjects.EReductionTargetStopCondition
enum class EReductionTargetStopCondition : int {
	Any = 0,
	All = 1,
	EReductionTargetStopCondition_MAX = 2
};

// Enum SimplygonUObjects.EReductionPerformanceMode
enum class EReductionPerformanceMode : int {
	AllFeatures = 0,
	HighPerformance = 1,
	EReductionPerformanceMode_MAX = 2
};

// ScriptStruct SimplygonUObjects.OutputMaterialSettings
// Size: 0x10 (Inherited: 0x00)
struct FOutputMaterialSettings {
public:

	int32_t TextureWidth; // 0x00(0x04)
	int32_t TextureHeight; // 0x04(0x04)
	int32_t MultisamplingLevel; // 0x08(0x04)
	int32_t GutterSpace; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.InputMaterialSettings
// Size: 0x04 (Inherited: 0x00)
struct FInputMaterialSettings {
public:

	int32_t MaterialMapping; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.ComputeCasterSettings
// Size: 0x38 (Inherited: 0x00)
struct FComputeCasterSettings {
public:

	struct FString MaterialChannel; // 0x00(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x01)
	enum class EDitherType DitherType; // 0x21(0x01)
	enum class EFillMode FillMode; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	int32_t Dilation; // 0x24(0x04)
	char UseMultisampling : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x29(0x01)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x2a(0x01)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x2b(0x01)
	enum class EOutputColorSpace OutputColorSpace; // 0x2c(0x01)
	char CastLayersFrontToBack : 1; // 0x2d(0x01)
	char pad_2D_1 : 7; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	int32_t MaxCastLayers; // 0x30(0x04)
	enum class EShaderCodeInputMode ShaderCodeInputMode; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.VertexColorCasterSettings
// Size: 0x48 (Inherited: 0x00)
struct FVertexColorCasterSettings {
public:

	struct FString MaterialChannel; // 0x00(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x01)
	enum class EDitherType DitherType; // 0x21(0x01)
	enum class EFillMode FillMode; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	int32_t Dilation; // 0x24(0x04)
	char UseMultisampling : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x29(0x01)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x2a(0x01)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x2b(0x01)
	int32_t OutputColorLevel; // 0x2c(0x04)
	struct FString OutputColorName; // 0x30(0x10)
	float ColorSpaceEdgeThreshold; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.GeometryDataCasterSettings
// Size: 0x60 (Inherited: 0x00)
struct FGeometryDataCasterSettings {
public:

	struct FString MaterialChannel; // 0x00(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x01)
	enum class EDitherType DitherType; // 0x21(0x01)
	enum class EFillMode FillMode; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	int32_t Dilation; // 0x24(0x04)
	char UseMultisampling : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x29(0x01)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x2a(0x01)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x2b(0x01)
	enum class EGeometryDataFieldType GeometryDataFieldType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t GeometryDataFieldIndex; // 0x30(0x04)
	int32_t MappingLayerIndex; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
	struct FVector4 MappingInf; // 0x40(0x10)
	struct FVector4 MappingSup; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.AmbientOcclusionCasterSettings
// Size: 0x40 (Inherited: 0x00)
struct FAmbientOcclusionCasterSettings {
public:

	struct FString MaterialChannel; // 0x00(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x01)
	enum class EDitherType DitherType; // 0x21(0x01)
	enum class EFillMode FillMode; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	int32_t Dilation; // 0x24(0x04)
	char UseMultisampling : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x29(0x01)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x2a(0x01)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x2b(0x01)
	int32_t RaysPerPixel; // 0x2c(0x04)
	float OcclusionFalloff; // 0x30(0x04)
	float OcclusionMultiplier; // 0x34(0x04)
	char UseSimpleOcclusionMode : 1; // 0x38(0x01)
	char FlipBackfacingNormals : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.DisplacementCasterSettings
// Size: 0x38 (Inherited: 0x00)
struct FDisplacementCasterSettings {
public:

	struct FString MaterialChannel; // 0x00(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x01)
	enum class EDitherType DitherType; // 0x21(0x01)
	enum class EFillMode FillMode; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	int32_t Dilation; // 0x24(0x04)
	char UseMultisampling : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x29(0x01)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x2a(0x01)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x2b(0x01)
	float DistanceScaling; // 0x2c(0x04)
	char GenerateScalarDisplacement : 1; // 0x30(0x01)
	char OutputToTessellatedAttributes : 1; // 0x30(0x01)
	char GenerateTangentSpaceDisplacement : 1; // 0x30(0x01)
	char pad_30_3 : 5; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t NormalMapTexCoordLevel; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.OpacityCasterSettings
// Size: 0x30 (Inherited: 0x00)
struct FOpacityCasterSettings {
public:

	struct FString MaterialChannel; // 0x00(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x01)
	enum class EDitherType DitherType; // 0x21(0x01)
	enum class EFillMode FillMode; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	int32_t Dilation; // 0x24(0x04)
	char UseMultisampling : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x29(0x01)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x2a(0x01)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x2b(0x01)
	char OutputSRGB : 1; // 0x2c(0x01)
	char OutputToTessellatedAttributes : 1; // 0x2c(0x01)
	char pad_2C_2 : 6; // 0x2c(0x01)
	enum class EOutputOpacityType OutputOpacityType; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.SimplygonPipelineSettings
// Size: 0x08 (Inherited: 0x00)
struct FSimplygonPipelineSettings {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.HighDensityMeshReductionSettings
// Size: 0x28 (Inherited: 0x00)
struct FHighDensityMeshReductionSettings {
public:

	char OnScreenSizeEnabled : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t OnScreenSize; // 0x04(0x04)
	char MaxDeviationEnabled : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MaxDeviation; // 0x0c(0x04)
	enum class EStopCondition StopCondition; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString ProcessSelectionSetName; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.ParameterizerSettings
// Size: 0x08 (Inherited: 0x00)
struct FParameterizerSettings {
public:

	float MaxStretch; // 0x00(0x04)
	float LargeChartsImportance; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.ChartAggregatorSettings
// Size: 0x38 (Inherited: 0x00)
struct FChartAggregatorSettings {
public:

	enum class EChartAggregatorMode ChartAggregatorMode; // 0x00(0x01)
	enum class ESurfaceAreaScale SurfaceAreaScale; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t OriginalTexCoordLevel; // 0x04(0x04)
	struct FString OriginalTexCoordName; // 0x08(0x10)
	char SeparateOverlappingCharts : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString OriginalChartProportionsChannel; // 0x20(0x10)
	char LockUVRotation : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.AttributeTessellationSettings
// Size: 0x20 (Inherited: 0x00)
struct FAttributeTessellationSettings {
public:

	char EnableAttributeTessellation : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	enum class EAttributeTessellationDensityMode AttributeTessellationDensityMode; // 0x01(0x01)
	enum class ETransformationSpace TransformationSpace; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float MaxAreaOfTessellatedValue; // 0x04(0x04)
	float MaxLengthOfTessellatedValue; // 0x08(0x04)
	int32_t OnScreenSize; // 0x0c(0x04)
	char OnlyAllowOneLevelOfDifference : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t MinTessellationLevel; // 0x14(0x04)
	int32_t MaxTessellationLevel; // 0x18(0x04)
	int32_t MaxTotalValuesCount; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.ImpostorFromSingleViewSettings
// Size: 0x1c (Inherited: 0x00)
struct FImpostorFromSingleViewSettings {
public:

	char UseTightFitting : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TightFittingDepthOffset; // 0x04(0x04)
	char TwoSided : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector ViewDirection; // 0x0c(0x0c)
	float TexCoordPadding; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.FlipbookSettings
// Size: 0x30 (Inherited: 0x00)
struct FFlipbookSettings {
public:

	int32_t NumberOfViews; // 0x00(0x04)
	struct FVector ViewDirection; // 0x04(0x0c)
	struct FVector UpVector; // 0x10(0x0c)
	int32_t NumberOfColumns; // 0x1c(0x04)
	int32_t NumberOfRows; // 0x20(0x04)
	char FlipRowColumnOrder : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32_t OverrideFlipbookTextureWidth; // 0x28(0x04)
	char PivotAroundOrigin : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.FoliageSettings
// Size: 0x18 (Inherited: 0x00)
struct FFoliageSettings {
public:

	char SeparateTrunkAndFoliage : 1; // 0x00(0x01)
	char MaintainLeafConnections : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float SeparateFoliageTriangleRatio; // 0x04(0x04)
	int32_t SeparateFoliageTriangleThreshold; // 0x08(0x04)
	float SeparateFoliageAreaThreshold; // 0x0c(0x04)
	float SeparateFoliageSizeThreshold; // 0x10(0x04)
	float TrunkReductionRatio; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.GenerateLightmapTexCoordSettings
// Size: 0x28 (Inherited: 0x00)
struct FGenerateLightmapTexCoordSettings {
public:

	char GenerateLightmapTexCoord : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LightmapTexCoordLevel; // 0x04(0x04)
	struct FString LightmapTexCoordName; // 0x08(0x10)
	enum class EChartAggregatorMode ChartAggregatorMode; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t TextureWidth; // 0x1c(0x04)
	int32_t TextureHeight; // 0x20(0x04)
	int32_t GutterSpace; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.VertexWeightSettings
// Size: 0x28 (Inherited: 0x00)
struct FVertexWeightSettings {
public:

	char UseVertexWeightsInReducer : 1; // 0x00(0x01)
	char UseVertexWeightsInTexcoordGenerator : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t WeightsFromColorLevel; // 0x04(0x04)
	struct FString WeightsFromColorName; // 0x08(0x10)
	enum class EWeightsFromColorComponent WeightsFromColorComponent; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float WeightsFromColorMultiplier; // 0x1c(0x04)
	enum class EWeightsFromColorMode WeightsFromColorMode; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.GeometryCullingSettings
// Size: 0x30 (Inherited: 0x00)
struct FGeometryCullingSettings {
public:

	char UseClippingPlanes : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ClippingPlaneSelectionSetID; // 0x04(0x04)
	struct FString ClippingPlaneSelectionSetName; // 0x08(0x10)
	char UseClippingGeometry : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t ClippingGeometrySelectionSetID; // 0x1c(0x04)
	struct FString ClippingGeometrySelectionSetName; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.VisibilitySettings
// Size: 0x40 (Inherited: 0x00)
struct FVisibilitySettings {
public:

	char UseVisibilityWeightsInReducer : 1; // 0x00(0x01)
	char UseVisibilityWeightsInTexcoordGenerator : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float VisibilityWeightsPower; // 0x04(0x04)
	char CullOccludedGeometry : 1; // 0x08(0x01)
	char ForceVisibilityCalculation : 1; // 0x08(0x01)
	char UseBackfaceCulling : 1; // 0x08(0x01)
	char pad_8_3 : 5; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t CameraSelectionSetID; // 0x0c(0x04)
	struct FString CameraSelectionSetName; // 0x10(0x10)
	int32_t OccluderSelectionSetID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString OccluderSelectionSetName; // 0x28(0x10)
	float FillNonVisibleAreaThreshold; // 0x38(0x04)
	char RemoveTrianglesNotOccludingOtherTriangles : 1; // 0x3c(0x01)
	char ConservativeMode : 1; // 0x3c(0x01)
	char pad_3C_2 : 6; // 0x3c(0x01)
	enum class EComputeVisibilityMode ComputeVisibilityMode; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.AggregationSettings
// Size: 0x30 (Inherited: 0x00)
struct FAggregationSettings {
public:

	char MergeGeometries : 1; // 0x00(0x01)
	char EnableGeometryCulling : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float GeometryCullingPrecision; // 0x04(0x04)
	char SubdivideGeometryBasedOnUVTiles : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t SubdivisionTileSize; // 0x0c(0x04)
	int32_t ProcessSelectionSetID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ProcessSelectionSetName; // 0x18(0x10)
	char KeepUnprocessedSceneMeshes : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.BoneSettings
// Size: 0x58 (Inherited: 0x00)
struct FBoneSettings {
public:

	char UseBoneReducer : 1; // 0x00(0x01)
	char RemoveUnusedBones : 1; // 0x00(0x01)
	char LimitBonesPerVertex : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MaxBonePerVertex; // 0x04(0x04)
	char BoneReductionTargetBoneRatioEnabled : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float BoneReductionTargetBoneRatio; // 0x0c(0x04)
	char BoneReductionTargetBoneCountEnabled : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t BoneReductionTargetBoneCount; // 0x14(0x04)
	char BoneReductionTargetMaxDeviationEnabled : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float BoneReductionTargetMaxDeviation; // 0x1c(0x04)
	char BoneReductionTargetOnScreenSizeEnabled : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t BoneReductionTargetOnScreenSize; // 0x24(0x04)
	enum class EBoneReductionTargetStopCondition BoneReductionTargetStopCondition; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t LockBoneSelectionSetID; // 0x2c(0x04)
	struct FString LockBoneSelectionSetName; // 0x30(0x10)
	int32_t RemoveBoneSelectionSetID; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString RemoveBoneSelectionSetName; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.RemeshingSettings
// Size: 0x40 (Inherited: 0x00)
struct FRemeshingSettings {
public:

	int32_t OnScreenSize; // 0x00(0x04)
	enum class EHoleFilling HoleFilling; // 0x04(0x01)
	enum class ERemeshingMode RemeshingMode; // 0x05(0x01)
	enum class ESurfaceTransferMode SurfaceTransferMode; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float HardEdgeAngle; // 0x08(0x04)
	char TransferNormals : 1; // 0x0c(0x01)
	char TransferColors : 1; // 0x0c(0x01)
	char PopulateAttributeTessellationDisplacement : 1; // 0x0c(0x01)
	char pad_C_3 : 5; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float GeometricalAccuracy; // 0x10(0x04)
	float TopologicalAccuracy; // 0x14(0x04)
	float RemeshingModeManualPositionX; // 0x18(0x04)
	float RemeshingModeManualPositionY; // 0x1c(0x04)
	float RemeshingModeManualPositionZ; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString ProcessSelectionSetName; // 0x28(0x10)
	int32_t ProcessSelectionSetID; // 0x38(0x04)
	char KeepUnprocessedSceneMeshes : 1; // 0x3c(0x01)
	char ForceSoftEdgesWithinTextureCharts : 1; // 0x3c(0x01)
	char pad_3C_2 : 6; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.NormalCasterSettings
// Size: 0x30 (Inherited: 0x00)
struct FNormalCasterSettings {
public:

	struct FString MaterialChannel; // 0x00(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x01)
	enum class EDitherType DitherType; // 0x21(0x01)
	enum class EFillMode FillMode; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	int32_t Dilation; // 0x24(0x04)
	char UseMultisampling : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x29(0x01)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x2a(0x01)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x2b(0x01)
	char FlipBackfacingNormals : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	enum class EFlipBackfacingMode FlipBackfacingMode; // 0x2d(0x01)
	char GenerateTangentSpaceNormals : 1; // 0x2e(0x01)
	char FlipGreen : 1; // 0x2e(0x01)
	char CalculateBitangentPerFragment : 1; // 0x2e(0x01)
	char NormalizeInterpolatedTangentSpace : 1; // 0x2e(0x01)
	char pad_2E_4 : 4; // 0x2e(0x01)
	char pad_2F[0x1]; // 0x2f(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.ColorCasterSettings
// Size: 0x30 (Inherited: 0x00)
struct FColorCasterSettings {
public:

	struct FString MaterialChannel; // 0x00(0x10)
	struct FString OpacityChannel; // 0x10(0x10)
	enum class EOpacityChannelComponent OpacityChannelComponent; // 0x20(0x01)
	enum class EDitherType DitherType; // 0x21(0x01)
	enum class EFillMode FillMode; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	int32_t Dilation; // 0x24(0x04)
	char UseMultisampling : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	enum class EOutputPixelFormat OutputPixelFormat; // 0x29(0x01)
	enum class EOutputImageFileFormat OutputImageFileFormat; // 0x2a(0x01)
	enum class EOutputDDSCompressionType OutputDDSCompressionType; // 0x2b(0x01)
	char OutputSRGB : 1; // 0x2c(0x01)
	char BakeOpacityInAlpha : 1; // 0x2c(0x01)
	char SkipCastingIfNoInputChannel : 1; // 0x2c(0x01)
	char pad_2C_3 : 5; // 0x2c(0x01)
	enum class EOutputOpacityType OutputOpacityType; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.NormalCalculationSettings
// Size: 0x0c (Inherited: 0x00)
struct FNormalCalculationSettings {
public:

	char ReplaceNormals : 1; // 0x00(0x01)
	char RepairInvalidNormals : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float HardEdgeAngle; // 0x04(0x04)
	char ReplaceTangents : 1; // 0x08(0x01)
	char ReorthogonalizeTangentSpace : 1; // 0x08(0x01)
	char ScaleByArea : 1; // 0x08(0x01)
	char ScaleByAngle : 1; // 0x08(0x01)
	char SnapNormalsToFlatSurfaces : 1; // 0x08(0x01)
	char pad_8_5 : 3; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.RepairSettings
// Size: 0x14 (Inherited: 0x00)
struct FRepairSettings {
public:

	char UseTJunctionRemover : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TJuncDist; // 0x04(0x04)
	char UseWelding : 1; // 0x08(0x01)
	char WeldOnlyBorderVertices : 1; // 0x08(0x01)
	char WeldOnlyWithinMaterial : 1; // 0x08(0x01)
	char WeldOnlyWithinSceneNode : 1; // 0x08(0x01)
	char WeldOnlyBetweenSceneNodes : 1; // 0x08(0x01)
	char pad_8_5 : 3; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float WeldDist; // 0x0c(0x04)
	int32_t ProgressivePasses; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.ReductionSettings
// Size: 0x80 (Inherited: 0x00)
struct FReductionSettings {
public:

	char ReductionTargetTriangleRatioEnabled : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ReductionTargetTriangleRatio; // 0x04(0x04)
	char ReductionTargetTriangleCountEnabled : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ReductionTargetTriangleCount; // 0x0c(0x04)
	char ReductionTargetMaxDeviationEnabled : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ReductionTargetMaxDeviation; // 0x14(0x04)
	char ReductionTargetOnScreenSizeEnabled : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t ReductionTargetOnScreenSize; // 0x1c(0x04)
	enum class EReductionPerformanceMode ReductionPerformanceMode; // 0x20(0x01)
	enum class EReductionTargetStopCondition ReductionTargetStopCondition; // 0x21(0x01)
	enum class EReductionHeuristics ReductionHeuristics; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	float GeometryImportance; // 0x24(0x04)
	float MaterialImportance; // 0x28(0x04)
	float TextureImportance; // 0x2c(0x04)
	float ShadingImportance; // 0x30(0x04)
	float GroupImportance; // 0x34(0x04)
	float VertexColorImportance; // 0x38(0x04)
	float EdgeSetImportance; // 0x3c(0x04)
	float SkinningImportance; // 0x40(0x04)
	float OutwardMoveMultiplier; // 0x44(0x04)
	float InwardMoveMultiplier; // 0x48(0x04)
	float MaxEdgeLength; // 0x4c(0x04)
	char KeepSymmetry : 1; // 0x50(0x01)
	char UseSymmetryQuadRetriangulator : 1; // 0x50(0x01)
	char UseAutomaticSymmetryDetection : 1; // 0x50(0x01)
	char pad_50_3 : 5; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float SymmetryDetectionTolerance; // 0x54(0x04)
	enum class ESymmetryAxis SymmetryAxis; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float SymmetryOffset; // 0x5c(0x04)
	char CreateGeomorphGeometry : 1; // 0x60(0x01)
	char GenerateGeomorphData : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	enum class EDataCreationPreferences DataCreationPreferences; // 0x61(0x01)
	char UseHighQualityNormalCalculation : 1; // 0x62(0x01)
	char LockGeometricBorder : 1; // 0x62(0x01)
	char MergeGeometries : 1; // 0x62(0x01)
	char AllowDegenerateTexCoords : 1; // 0x62(0x01)
	char pad_62_4 : 4; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	int32_t ProcessSelectionSetID; // 0x64(0x04)
	struct FString ProcessSelectionSetName; // 0x68(0x10)
	char KeepUnprocessedSceneMeshes : 1; // 0x78(0x01)
	char PreserveQuadFlags : 1; // 0x78(0x01)
	char pad_78_2 : 6; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.HighDensityMeshReductionPipelineSettings
// Size: 0x30 (Inherited: 0x08)
struct FHighDensityMeshReductionPipelineSettings : public FSimplygonPipelineSettings {
public:

	struct FHighDensityMeshReductionSettings HighDensityMeshReductionSettings; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.MappingImageSettings
// Size: 0x98 (Inherited: 0x00)
struct FMappingImageSettings {
public:

	char GenerateMappingImage : 1; // 0x00(0x01)
	char GenerateTexCoords : 1; // 0x00(0x01)
	char GenerateTangents : 1; // 0x00(0x01)
	char ReplaceMappingImages : 1; // 0x00(0x01)
	char UseFullRetexturing : 1; // 0x00(0x01)
	char ApplyNewMaterialIds : 1; // 0x00(0x01)
	char UseAutomaticTextureSize : 1; // 0x00(0x01)
	char pad_0_7 : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AutomaticTextureSizeMultiplier; // 0x04(0x04)
	char ForcePower2Texture : 1; // 0x08(0x01)
	char OnlyParameterizeInvalidUVs : 1; // 0x08(0x01)
	char AllowTransparencyMapping : 1; // 0x08(0x01)
	char pad_8_3 : 5; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t MaximumLayers; // 0x0c(0x04)
	int32_t TexCoordLevel; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString TexCoordName; // 0x18(0x10)
	enum class ETexCoordGeneratorType TexCoordGeneratorType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t OutputMaterialCount; // 0x2c(0x04)
	int32_t InputMaterialCount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FChartAggregatorSettings ChartAggregatorSettings; // 0x38(0x38)
	struct FParameterizerSettings ParameterizerSettings; // 0x70(0x08)
	struct TArray<struct FInputMaterialSettings> InputMaterialSettings; // 0x78(0x10)
	struct TArray<struct FOutputMaterialSettings> OutputMaterialSettings; // 0x88(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.RawMappingImageSettings
// Size: 0x98 (Inherited: 0x00)
struct FRawMappingImageSettings {
public:

	char GenerateMappingImage : 1; // 0x00(0x01)
	char GenerateTexCoords : 1; // 0x00(0x01)
	char GenerateTangents : 1; // 0x00(0x01)
	char ReplaceMappingImages : 1; // 0x00(0x01)
	char UseFullRetexturing : 1; // 0x00(0x01)
	char ApplyNewMaterialIds : 1; // 0x00(0x01)
	char UseAutomaticTextureSize : 1; // 0x00(0x01)
	char pad_0_7 : 1; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AutomaticTextureSizeMultiplier; // 0x04(0x04)
	char ForcePower2Texture : 1; // 0x08(0x01)
	char OnlyParameterizeInvalidUVs : 1; // 0x08(0x01)
	char AllowTransparencyMapping : 1; // 0x08(0x01)
	char pad_8_3 : 5; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t MaximumLayers; // 0x0c(0x04)
	int32_t TexCoordLevel; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString TexCoordName; // 0x18(0x10)
	enum class ETexCoordGeneratorType TexCoordGeneratorType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t OutputMaterialCount; // 0x2c(0x04)
	int32_t InputMaterialCount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FChartAggregatorSettings ChartAggregatorSettings; // 0x38(0x38)
	struct FParameterizerSettings ParameterizerSettings; // 0x70(0x08)
	struct TArray<struct FInputMaterialSettings> InputMaterialSettings; // 0x78(0x10)
	struct TArray<struct FOutputMaterialSettings> OutputMaterialSettings; // 0x88(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.BillboardCloudSettings
// Size: 0x34 (Inherited: 0x00)
struct FBillboardCloudSettings {
public:

	enum class EBillboardMode BillboardMode; // 0x00(0x01)
	char FavorVerticalPlanes : 1; // 0x01(0x01)
	char TwoSided : 1; // 0x01(0x01)
	char UseVisibilityWeights : 1; // 0x01(0x01)
	char pad_1_3 : 5; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float BillboardDensity; // 0x04(0x04)
	int32_t MaxPlaneCount; // 0x08(0x04)
	float GeometricComplexity; // 0x0c(0x04)
	struct FVector UpVector; // 0x10(0x0c)
	struct FFoliageSettings FoliageSettings; // 0x1c(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.NormalCasterSettingsWrapper
// Size: 0x30 (Inherited: 0x00)
struct FNormalCasterSettingsWrapper {
public:

	struct FNormalCasterSettings NormalCasterSettings; // 0x00(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.BaseColorCasterSettingsWrapper
// Size: 0x30 (Inherited: 0x00)
struct FBaseColorCasterSettingsWrapper {
public:

	struct FColorCasterSettings BaseColorCasterSettings; // 0x00(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.ImpostorFromSingleViewPipelineSettings
// Size: 0xf0 (Inherited: 0x08)
struct FImpostorFromSingleViewPipelineSettings : public FSimplygonPipelineSettings {
public:

	struct FImpostorFromSingleViewSettings ImpostorFromSingleViewSettings; // 0x08(0x1c)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0x24(0x20)
	char pad_44[0x4]; // 0x44(0x04)
	struct FMappingImageSettings MappingImageSettings; // 0x48(0x98)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0xe0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.FlipbookPipelineSettings
// Size: 0x100 (Inherited: 0x08)
struct FFlipbookPipelineSettings : public FSimplygonPipelineSettings {
public:

	struct FFlipbookSettings FlipbookSettings; // 0x08(0x30)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0x38(0x20)
	struct FMappingImageSettings MappingImageSettings; // 0x58(0x98)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0xf0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.AggregationPipelineSettings
// Size: 0x1c0 (Inherited: 0x08)
struct FAggregationPipelineSettings : public FSimplygonPipelineSettings {
public:

	struct FAggregationSettings AggregationSettings; // 0x08(0x30)
	struct FVisibilitySettings VisibilitySettings; // 0x38(0x40)
	struct FGeometryCullingSettings GeometryCullingSettings; // 0x78(0x30)
	struct FVertexWeightSettings VertexWeightSettings; // 0xa8(0x28)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0xd0(0x20)
	struct FMappingImageSettings MappingImageSettings; // 0xf0(0x98)
	struct FGenerateLightmapTexCoordSettings GenerateLightmapTexCoordSettings; // 0x188(0x28)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0x1b0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.RemeshingPipelineSettings
// Size: 0x1d8 (Inherited: 0x08)
struct FRemeshingPipelineSettings : public FSimplygonPipelineSettings {
public:

	struct FRemeshingSettings RemeshingSettings; // 0x08(0x40)
	struct FBoneSettings BoneSettings; // 0x48(0x58)
	struct FGeometryCullingSettings GeometryCullingSettings; // 0xa0(0x30)
	struct FVisibilitySettings VisibilitySettings; // 0xd0(0x40)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0x110(0x20)
	struct FMappingImageSettings MappingImageSettings; // 0x130(0x98)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0x1c8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.ReductionPipelineSettings
// Size: 0x230 (Inherited: 0x08)
struct FReductionPipelineSettings : public FSimplygonPipelineSettings {
public:

	struct FReductionSettings ReductionSettings; // 0x08(0x80)
	struct FRepairSettings RepairSettings; // 0x88(0x14)
	struct FNormalCalculationSettings NormalCalculationSettings; // 0x9c(0x0c)
	struct FVisibilitySettings VisibilitySettings; // 0xa8(0x40)
	struct FBoneSettings BoneSettings; // 0xe8(0x58)
	struct FVertexWeightSettings VertexWeightSettings; // 0x140(0x28)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0x168(0x20)
	struct FMappingImageSettings MappingImageSettings; // 0x188(0x98)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0x220(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.BillboardCloudVegetationPipelineSettings
// Size: 0x108 (Inherited: 0x08)
struct FBillboardCloudVegetationPipelineSettings : public FSimplygonPipelineSettings {
public:

	struct FBillboardCloudSettings BillboardCloudSettings; // 0x08(0x34)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0x3c(0x20)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FMappingImageSettings MappingImageSettings; // 0x60(0x98)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0xf8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.BillboardCloudPipelineSettings
// Size: 0x108 (Inherited: 0x08)
struct FBillboardCloudPipelineSettings : public FSimplygonPipelineSettings {
public:

	struct FBillboardCloudSettings BillboardCloudSettings; // 0x08(0x34)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0x3c(0x20)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FMappingImageSettings MappingImageSettings; // 0x60(0x98)
	struct TArray<struct USimplygonMaterialCaster*> MaterialPropertyCasters; // 0xf8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SimplygonUObjects.RawRemeshingPipelineSettings
// Size: 0x220 (Inherited: 0x00)
struct FRawRemeshingPipelineSettings {
public:

	struct FRemeshingSettings RemeshingSettings; // 0x00(0x40)
	struct FBoneSettings BoneSettings; // 0x40(0x58)
	struct FGeometryCullingSettings GeometryCullingSettings; // 0x98(0x30)
	struct FVisibilitySettings VisibilitySettings; // 0xc8(0x40)
	struct FAttributeTessellationSettings AttributeTessellationSettings; // 0x108(0x20)
	struct FRawMappingImageSettings MappingImageSettings; // 0x128(0x98)
	struct FBaseColorCasterSettingsWrapper BaseColorCasterSettings; // 0x1c0(0x30)
	struct FNormalCasterSettingsWrapper NormalCasterSettings; // 0x1f0(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
