
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class Landscape.CDLODComponent
// Size: 0x780 (Inherited: 0x560)
class UCDLODComponent : public UPrimitiveComponent {
public:

	int32_t CDLODPatchSize; // 0x560(0x04)
	int32_t HeightmapAssetCoarseLod; // 0x564(0x04)
	int32_t HeightmapAssetPatchSize; // 0x568(0x04)
	int32_t ValidPatchSize; // 0x56c(0x04)
	struct FIntPoint PhysicalTextureSize; // 0x570(0x08)
	struct UTexture2D* PhysicalTexture; // 0x578(0x08)
	struct TArray<struct FCDLODMaterial> CDLODMaterials; // 0x580(0x10)
	struct UMaterialInstanceDynamic* CDLODVTMaterial_DTA; // 0x590(0x08)
	struct UMaterialInstanceDynamic* CDLODVTMaterial_LowRes; // 0x598(0x08)
	struct UTexture2D* LandscapeShadowmask; // 0x5a0(0x08)
	char pad_5A8[0x8]; // 0x5a8(0x08)
	struct FVector4 LandscapePositionAndSize; // 0x5b0(0x10)
	struct FBoxSphereBounds CachedLocalBounds; // 0x5c0(0x1c)
	struct FGuid MapBuildDataId; // 0x5dc(0x10)
	char pad_5EC[0x4]; // 0x5ec(0x04)
	struct UBinaryAsset* HeaderAsset; // 0x5f0(0x08)
	struct UBinaryAsset* CoarseHeightmapAsset; // 0x5f8(0x08)
	struct FIntPoint HeightmapAssetMaxIndex; // 0x600(0x08)
	uint32_t WeightmapClipmapPatchCount; // 0x608(0x04)
	uint32_t WeightmapClipmapPatchSize; // 0x60c(0x04)
	struct AClipmapActor* WeightmapClipmapActor; // 0x610(0x08)
	struct TArray<struct FString> TexArrayParamName; // 0x618(0x10)
	uint32_t DTASlotCount; // 0x628(0x04)
	uint32_t LODBias; // 0x62c(0x04)
	struct UDTAComponent* DTAComponent; // 0x630(0x08)
	/*struct TMap<struct FString, struct TSoftObjectPtr<UTexture2D>>*/char LowQualityTexture[0x50]; // 0x638(0x50)
	char pad_688[0x28]; // 0x688(0x28)
	struct TMap<struct FIntPoint, struct UBinaryAsset*> HeightmapAssets; // 0x6b0(0x50)
	struct TArray<struct FBoxSphereBounds> LocalClipRectBounds; // 0x700(0x10)
	char pad_710[0x70]; // 0x710(0x70)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.ControlPointMeshActor
// Size: 0x380 (Inherited: 0x378)
class AControlPointMeshActor : public AActor {
public:

	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.ControlPointMeshComponent
// Size: 0x800 (Inherited: 0x7f0)
class UControlPointMeshComponent : public UStaticMeshComponent {
public:

	float VirtualTextureMainPassMaxDrawDistance; // 0x7f0(0x04)
	char pad_7F4[0xc]; // 0x7f4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.DTAComponent
// Size: 0x3a0 (Inherited: 0x100)
class UDTAComponent : public UActorComponent {
public:

	struct TArray<struct FString> TexArrayParamName; // 0x100(0x10)
	struct TArray<struct UDynamicTexture2DArray*> DynamicTextureArrays; // 0x110(0x10)
	struct TArray<struct UTexture2DArray*> LowResTextureArrays; // 0x120(0x10)
	struct TArray<struct FLandscapeLayerParameter> LayerParameters; // 0x130(0x10)
	struct TArray<struct UDynamicTexture2DArray*> ResizeDynamicTextureArrays; // 0x140(0x10)
	struct AClipmapActor* WeightmapClipmapActor; // 0x150(0x08)
	struct TWeakObjectPtr<struct UCDLODComponent> CDLODComponent; // 0x158(0x08)
	uint32_t DTASlotCount; // 0x160(0x04)
	uint32_t LODBias; // 0x164(0x04)
	char pad_168[0x1d0]; // 0x168(0x1d0)
	struct TMap<struct FIntPoint, struct FDTAPatchTextureIndices> DTAPatchTextureIndices; // 0x338(0x50)
	char pad_388[0x18]; // 0x388(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x378 (Inherited: 0x378)
class ALandscapeBlueprintBrushBase : public AActor {
public:


	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeComponent
// Size: 0x7a0 (Inherited: 0x560)
class ULandscapeComponent : public UPrimitiveComponent {
public:

	int32_t SectionBaseX; // 0x560(0x04)
	int32_t SectionBaseY; // 0x564(0x04)
	int32_t ComponentSizeQuads; // 0x568(0x04)
	int32_t SubsectionSizeQuads; // 0x56c(0x04)
	int32_t NumSubsections; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x578(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x580(0x08)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x588(0x10)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x598(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x5a8(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x5b8(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x5c8(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x5d8(0x08)
	struct FVector4 WeightmapScaleBias; // 0x5e0(0x10)
	float WeightmapSubsectionOffset; // 0x5f0(0x04)
	char pad_5F4[0xc]; // 0x5f4(0x0c)
	struct FVector4 HeightmapScaleBias; // 0x600(0x10)
	struct FBox CachedLocalBox; // 0x610(0x1c)
	/*LazyObjectProperty*/char CollisionComponent[0x1c]; // 0x62c(0x1c)
	struct TMap<struct FGuid, struct FLandscapeLayerComponentData> LayersData; // 0x648(0x50)
	struct UTexture2D* HeightmapTexture; // 0x698(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x6a0(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x6b0(0x10)
	struct FGuid MapBuildDataId; // 0x6c0(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x6d0(0x10)
	int32_t CollisionMipLevel; // 0x6e0(0x04)
	int32_t SimpleCollisionMipLevel; // 0x6e4(0x04)
	float NegativeZBoundsExtension; // 0x6e8(0x04)
	float PositiveZBoundsExtension; // 0x6ec(0x04)
	float StaticLightingResolution; // 0x6f0(0x04)
	int32_t ForcedLOD; // 0x6f4(0x04)
	int32_t LODBias; // 0x6f8(0x04)
	struct FGuid StateId; // 0x6fc(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x70c(0x10)
	char pad_71C[0x4]; // 0x71c(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x720(0x08)
	char MobileBlendableLayerMask; // 0x728(0x01)
	char pad_729[0x7]; // 0x729(0x07)
	struct UMaterialInterface* MobileMaterialInterface; // 0x730(0x08)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x738(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x748(0x10)
	char pad_758[0x48]; // 0x758(0x48)

	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeComponentPatch
// Size: 0xd0 (Inherited: 0x30)
class ULandscapeComponentPatch : public UObject {
public:

	struct TMap<struct FGuid, struct FLandscapeLayerComponentData> EditorLayersData; // 0x30(0x50)
	struct UTexture2D* HeightmapTexture; // 0x80(0x08)
	char pad_88[0x10]; // 0x88(0x10)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x98(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0xa8(0x10)
	struct FIntPoint ComponentXYPos; // 0xb8(0x08)
	struct TArray<struct FLandscapeCustomMaskData> CustomMaskData; // 0xc0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x560 (Inherited: 0x560)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeGrassType
// Size: 0x68 (Inherited: 0x30)
class ULandscapeGrassType : public UObject {
public:

	struct TArray<struct FGrassVariety> GrassVarieties; // 0x30(0x10)
	char bEnableDensityScaling : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UStaticMesh* GrassMesh; // 0x48(0x08)
	float GrassDensity; // 0x50(0x04)
	float PlacementJitter; // 0x54(0x04)
	int32_t StartCullDistance; // 0x58(0x04)
	int32_t EndCullDistance; // 0x5c(0x04)
	bool RandomRotation; // 0x60(0x01)
	bool AlignToSurface; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeInfo
// Size: 0x218 (Inherited: 0x30)
class ULandscapeInfo : public UObject {
public:

	/*LazyObjectProperty*/char LandscapeActor[0x1c]; // 0x30(0x1c)
	struct FGuid LandscapeGuid; // 0x4c(0x10)
	int32_t ComponentSizeQuads; // 0x5c(0x04)
	int32_t SubsectionSizeQuads; // 0x60(0x04)
	int32_t ComponentNumSubsections; // 0x64(0x04)
	struct FVector DrawScale; // 0x68(0x0c)
	char pad_74[0xa4]; // 0x74(0xa4)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x118(0x10)
	char pad_128[0xf0]; // 0x128(0xf0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeInfoMap
// Size: 0x88 (Inherited: 0x30)
class ULandscapeInfoMap : public UObject {
public:

	char pad_30[0x58]; // 0x30(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x90 (Inherited: 0x30)
class ULandscapeLayerInfoObject : public UObject {
public:

	struct FName LayerName; // 0x30(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x38(0x08)
	float Hardness; // 0x40(0x04)
	float LayerTilling; // 0x44(0x04)
	float LayerSpecular; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FVector4 LayerHeightScaleOffset; // 0x50(0x10)
	uint32_t TextureArrayIndex; // 0x60(0x04)
	float FarTillingScale; // 0x64(0x04)
	char bOverride_FarTillingStart : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	uint32_t FarTillingStart; // 0x6c(0x04)
	char bOverride_NearTillingEnd : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	uint32_t NearTillingEnd; // 0x74(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x78(0x10)
	char pad_88[0x8]; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x2d0 (Inherited: 0x2c8)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant {
public:

	char bIsLayerThumbnail : 1; // 0x2c8(0x01)
	char bDisableTessellation : 1; // 0x2c8(0x01)
	char bMobile : 1; // 0x2c8(0x01)
	char bEditorToolUsage : 1; // 0x2c8(0x01)
	char bIsUsedWithCDLOD : 1; // 0x2c8(0x01)
	char pad_2C8_5 : 3; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x380 (Inherited: 0x378)
class ALandscapeMeshProxyActor : public AActor {
public:

	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x820 (Inherited: 0x7f0)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent {
public:

	struct FGuid LandscapeGuid; // 0x7f0(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x800(0x10)
	int8_t ProxyLOD; // 0x810(0x01)
	char pad_811[0xf]; // 0x811(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeCustomMaskDataLayersObject
// Size: 0x30 (Inherited: 0x30)
class ULandscapeCustomMaskDataLayersObject : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeProxyPatch
// Size: 0x120 (Inherited: 0x30)
class ULandscapeProxyPatch : public UObject {
public:

	struct TArray<struct ULandscapeComponentPatch*> LandscapeComponentPatchs; // 0x30(0x10)
	struct TMap<struct FString, struct FGuid> PatchLayerGuid; // 0x40(0x50)
	struct FGuid PatchGuid; // 0x90(0x10)
	struct FName LandscapeName; // 0xa0(0x08)
	/*struct TSoftObjectPtr<ALandscape>*/char LandscapePtr[0x28]; // 0xa8(0x28)
	char pad_D0[0x50]; // 0xd0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeSettings
// Size: 0x58 (Inherited: 0x40)
class ULandscapeSettings : public UDeveloperSettings {
public:

	int32_t MaxNumberOfLayers; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FString> MapsToLockToolModePaint; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x590 (Inherited: 0x560)
class ULandscapeSplinesComponent : public UPrimitiveComponent {
public:

	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x560(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x570(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x580(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xb0 (Inherited: 0x30)
class ULandscapeSplineControlPoint : public UObject {
public:

	struct FVector Location; // 0x30(0x0c)
	struct FRotator Rotation; // 0x3c(0x0c)
	float Width; // 0x48(0x04)
	float LayerWidthRatio; // 0x4c(0x04)
	float SideFalloff; // 0x50(0x04)
	float LeftSideFalloffFactor; // 0x54(0x04)
	float RightSideFalloffFactor; // 0x58(0x04)
	float LeftSideLayerFalloffFactor; // 0x5c(0x04)
	float RightSideLayerFalloffFactor; // 0x60(0x04)
	float EndFalloff; // 0x64(0x04)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x68(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x78(0x10)
	struct FBox Bounds; // 0x88(0x1c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xa8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb8 (Inherited: 0x30)
class ULandscapeSplineSegment : public UObject {
public:

	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x30(0x30)
	struct FInterpCurveVector SplineInfo; // 0x60(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x78(0x10)
	struct FBox Bounds; // 0x88(0x1c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x60 (Inherited: 0x30)
class ULandscapeWeightmapUsage : public UObject {
public:

	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x30(0x20)
	struct FGuid LayerGuid; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x58 (Inherited: 0x48)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput {
public:

	struct TArray<struct FGrassInput> GrassTypes; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x68 (Inherited: 0x48)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression {
public:

	struct TArray<struct FLayerBlendInput> Layers; // 0x48(0x10)
	struct FGuid ExpressionGUID; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x60 (Inherited: 0x48)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression {
public:

	enum class ETerrainCoordMappingType MappingType; // 0x48(0x01)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float MappingScale; // 0x4c(0x04)
	float MappingRotation; // 0x50(0x04)
	float MappingPanU; // 0x54(0x04)
	float MappingPanV; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x68 (Inherited: 0x48)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression {
public:

	struct FName ParameterName; // 0x48(0x08)
	float PreviewWeight; // 0x50(0x04)
	struct FGuid ExpressionGUID; // 0x54(0x10)
	char pad_64[0x4]; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x90 (Inherited: 0x48)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression {
public:

	struct FExpressionInput LayerUsed; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput LayerNotUsed; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	struct FName ParameterName; // 0x70(0x08)
	char PreviewUsed : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FGuid ExpressionGUID; // 0x7c(0x10)
	char pad_8C[0x4]; // 0x8c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0xa0 (Inherited: 0x48)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression {
public:

	struct FExpressionInput Base; // 0x48(0x0c)
	char pad_54[0x8]; // 0x54(0x08)
	struct FExpressionInput Layer; // 0x5c(0x0c)
	char pad_68[0x8]; // 0x68(0x08)
	int32_t SampleBlockOffsetIndex; // 0x70(0x04)
	int32_t SampleTextureSize; // 0x74(0x04)
	struct FName ParameterName; // 0x78(0x08)
	float PreviewWeight; // 0x80(0x04)
	struct FVector ConstBase; // 0x84(0x0c)
	struct FGuid ExpressionGUID; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x58 (Inherited: 0x48)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression {
public:

	struct FGuid ExpressionGUID; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeProxy
// Size: 0x6b8 (Inherited: 0x378)
class ALandscapeProxy : public AActor {
public:

	struct ULandscapeSplinesComponent* SplineComponent; // 0x378(0x08)
	struct FGuid LandscapeGuid; // 0x380(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x390(0x08)
	int32_t MaxLODLevel; // 0x398(0x04)
	float LODDistanceFactor; // 0x39c(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	float ComponentScreenSizeToUseSubSections; // 0x3a4(0x04)
	float LOD0ScreenSize; // 0x3a8(0x04)
	float LOD0DistributionSetting; // 0x3ac(0x04)
	float LODDistributionSetting; // 0x3b0(0x04)
	float TessellationComponentScreenSize; // 0x3b4(0x04)
	bool UseTessellationComponentScreenSizeFalloff; // 0x3b8(0x01)
	char pad_3B9[0x3]; // 0x3b9(0x03)
	float TessellationComponentScreenSizeFalloff; // 0x3bc(0x04)
	int32_t OccluderGeometryLOD; // 0x3c0(0x04)
	int32_t StaticLightingLOD; // 0x3c4(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x3c8(0x08)
	float StreamingDistanceMultiplier; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x3d8(0x08)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x3e0(0x08)
	struct UTexture2D* LandscapeShadowmask; // 0x3e8(0x08)
	struct FVector4 LandscapePositionAndSize; // 0x3f0(0x10)
	struct FVector4 LandscapeHeightInfo; // 0x400(0x10)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x410(0x10)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x420(0x10)
	int32_t VirtualTextureNumLods; // 0x430(0x04)
	int32_t VirtualTextureLodBias; // 0x434(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x438(0x01)
	enum class ERuntimeVirtualTextureLayerType VirtualTextureRenderLayerType; // 0x439(0x01)
	char VirtualTextureRenderPriority; // 0x43a(0x01)
	char pad_43B[0x1]; // 0x43b(0x01)
	float NegativeZBoundsExtension; // 0x43c(0x04)
	float PositiveZBoundsExtension; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x448(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x458(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x468(0x10)
	char pad_478[0x64]; // 0x478(0x64)
	bool bHasLandscapeGrass; // 0x4dc(0x01)
	char pad_4DD[0x3]; // 0x4dd(0x03)
	float StaticLightingResolution; // 0x4e0(0x04)
	char bCastStaticShadow : 1; // 0x4e4(0x01)
	char bCastShadowAsTwoSided : 1; // 0x4e4(0x01)
	char bCastFarShadow : 1; // 0x4e4(0x01)
	char pad_4E4_3 : 5; // 0x4e4(0x01)
	char pad_4E5[0x3]; // 0x4e5(0x03)
	char bAffectDistanceFieldLighting : 1; // 0x4e8(0x01)
	char pad_4E8_1 : 7; // 0x4e8(0x01)
	struct FLightingChannels LightingChannels; // 0x4e9(0x01)
	char pad_4EA[0x2]; // 0x4ea(0x02)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x4ec(0x01)
	char bRenderCustomDepth : 1; // 0x4ec(0x01)
	char pad_4EC_2 : 6; // 0x4ec(0x01)
	char pad_4ED[0x3]; // 0x4ed(0x03)
	int32_t CustomDepthStencilValue; // 0x4f0(0x04)
	float LDMaxDrawDistance; // 0x4f4(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x4f8(0x20)
	int32_t CollisionMipLevel; // 0x518(0x04)
	int32_t SimpleCollisionMipLevel; // 0x51c(0x04)
	float CollisionThickness; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)
	struct FBodyInstance BodyInstance; // 0x528(0x120)
	char bGenerateOverlapEvents : 1; // 0x648(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x648(0x01)
	char pad_648_2 : 6; // 0x648(0x01)
	char pad_649[0x3]; // 0x649(0x03)
	int32_t ComponentSizeQuads; // 0x64c(0x04)
	int32_t SubsectionSizeQuads; // 0x650(0x04)
	int32_t NumSubsections; // 0x654(0x04)
	char bUsedForNavigation : 1; // 0x658(0x01)
	char pad_658_1 : 7; // 0x658(0x01)
	char pad_659[0x3]; // 0x659(0x03)
	bool bUseDynamicMaterialInstance; // 0x65c(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x65d(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x65e(0x01)
	bool bHasLayersContent; // 0x65f(0x01)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x660(0x50)
	int32_t ExtraDetailForRender; // 0x6b0(0x04)
	char pad_6B4[0x4]; // 0x6b4(0x04)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x378 (Inherited: 0x378)
class ALandscapeGizmoActor : public AActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x640 (Inherited: 0x560)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent {
public:

	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x560(0x10)
	int32_t SectionBaseX; // 0x570(0x04)
	int32_t SectionBaseY; // 0x574(0x04)
	int32_t CollisionSizeQuads; // 0x578(0x04)
	float CollisionScale; // 0x57c(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	struct TArray<char> CollisionQuadFlags; // 0x588(0x10)
	struct FGuid HeightfieldGuid; // 0x598(0x10)
	struct FBox CachedLocalBox; // 0x5a8(0x1c)
	/*LazyObjectProperty*/char RenderComponent[0x1c]; // 0x5c4(0x1c)
	char pad_5E0[0x10]; // 0x5e0(0x10)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x5f0(0x10)
	char pad_600[0x40]; // 0x600(0x40)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.Landscape
// Size: 0x6d0 (Inherited: 0x6b8)
class ALandscape : public ALandscapeProxy {
public:

	bool bEditingLayerPatchEnabled; // 0x6b8(0x01)
	bool bSyncPatchCustomMaskData; // 0x6b9(0x01)
	bool bTriggerMerge; // 0x6ba(0x01)
	bool bTriggerSplit; // 0x6bb(0x01)
	char pad_6BC[0x4]; // 0x6bc(0x04)
	struct UTexture2D* LocalHeightmap; // 0x6c0(0x08)
	char pad_6C8[0x8]; // 0x6c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x6e0 (Inherited: 0x6b8)
class ALandscapeStreamingProxy : public ALandscapeProxy {
public:

	/*LazyObjectProperty*/char LandscapeActor[0x1c]; // 0x6b8(0x1c)
	bool IsGenerateOccluder; // 0x6d4(0x01)
	char pad_6D5[0xb]; // 0x6d5(0x0b)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x3c8 (Inherited: 0x378)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor {
public:

	char pad_378[0x50]; // 0x378(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x660 (Inherited: 0x640)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent {
public:

	struct FGuid MeshGuid; // 0x640(0x10)
	char pad_650[0x10]; // 0x650(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
