
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class OpenWorldStreaming.EditorRuntimeConfig
// Size: 0xf0 (Inherited: 0x30)
class UEditorRuntimeConfig : public UObject {
public:

	bool bPlayFromHere; // 0x30(0x01)
	char pad_31[0x57]; // 0x31(0x57)
	struct TMap<struct FString, struct FEditorLevelFolderInfo> AllFolders; // 0x88(0x50)
	char pad_D8[0x18]; // 0xd8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.FoliageHISMActor
// Size: 0x398 (Inherited: 0x378)
class AFoliageHISMActor : public AActor {
public:

	struct USceneComponent* HISMRootComponent; // 0x378(0x08)
	struct FName GroupName; // 0x380(0x08)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> ChildHISMComps; // 0x388(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.FoliageMaskActor
// Size: 0x388 (Inherited: 0x378)
class AFoliageMaskActor : public AActor {
public:

	struct UBoxComponent* BoxComponent; // 0x378(0x08)
	bool bMaskGrass; // 0x380(0x01)
	bool bMaskTree; // 0x381(0x01)
	char pad_382[0x6]; // 0x382(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.FreezeRebasingVolume
// Size: 0x3b0 (Inherited: 0x3b0)
class AFreezeRebasingVolume : public AVolume {
public:


	void EndOverlap(struct AActor* ThisActor, struct AActor* OtherActor); // Function OpenWorldStreaming.FreezeRebasingVolume.EndOverlap // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.FreezeRebasingManager
// Size: 0x58 (Inherited: 0x38)
class UFreezeRebasingManager : public UWorldSubsystem {
public:

	char pad_38[0x20]; // 0x38(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.GamePlayAreaBuildConfigGroup
// Size: 0x40 (Inherited: 0x30)
class UGamePlayAreaBuildConfigGroup : public UObject {
public:

	struct TArray<struct FGamePlayAreaBuildConfig> GamePlayAreaTypeConfigs; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.GamePlayAreaRuntimeConfig
// Size: 0x40 (Inherited: 0x30)
class UGamePlayAreaRuntimeConfig : public UObject {
public:

	struct TArray<struct FGamePlayAreaInfo> GamePlayAreaInfos; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.GamePlayValidAreaActor
// Size: 0x380 (Inherited: 0x378)
class AGamePlayValidAreaActor : public AActor {
public:

	struct UBoxComponent* BoxComponent; // 0x378(0x08)

	void SaveAllToConfig(); // Function OpenWorldStreaming.GamePlayValidAreaActor.SaveAllToConfig // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldProfileAreaActor
// Size: 0x3d0 (Inherited: 0x378)
class AOpenWorldProfileAreaActor : public AActor {
public:

	struct FString ProfileAreaName; // 0x378(0x10)
	struct TArray<struct FString> RequestLevels; // 0x388(0x10)
	bool bOverAllArea; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	float Space; // 0x39c(0x04)
	enum class EOpenWorldProfilerSampleMethod SampleMethod; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct UBoxComponent* BoxComponent; // 0x3a8(0x08)
	struct TArray<struct FString> SubProfileAreaNames; // 0x3b0(0x10)
	struct TArray<struct FBox> SubProfileAreaBounds; // 0x3c0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldProfileMaskAreaActor
// Size: 0x380 (Inherited: 0x378)
class AOpenWorldProfileMaskAreaActor : public AActor {
public:

	struct UBoxComponent* BoxComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldPSOProfileAreaActor
// Size: 0x3a0 (Inherited: 0x378)
class AOpenWorldPSOProfileAreaActor : public AActor {
public:

	float Space; // 0x378(0x04)
	float GroupSpace; // 0x37c(0x04)
	struct FString ProfileAreaName; // 0x380(0x10)
	enum class EOpenWorldProfilerSampleMethod SampleMethod; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct UBoxComponent* BoxComponent; // 0x398(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldSceneProfileSplineChildComponent
// Size: 0x250 (Inherited: 0x240)
class UOpenWorldSceneProfileSplineChildComponent : public USceneComponent {
public:

	float StepRatio; // 0x240(0x04)
	char pad_244[0xc]; // 0x244(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.GeneralLevelVolume
// Size: 0x3e0 (Inherited: 0x3b0)
class AGeneralLevelVolume : public AVolume {
public:

	struct TArray<struct AGeneralLevelVolume*> OutVolumes; // 0x3b0(0x10)
	struct TArray<struct AGeneralLevelVolume*> InVolumes; // 0x3c0(0x10)
	struct FString PackageName; // 0x3d0(0x10)

	void ReCreateDebugLine(); // Function OpenWorldStreaming.GeneralLevelVolume.ReCreateDebugLine // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.GrassMapActor
// Size: 0x3b0 (Inherited: 0x378)
class AGrassMapActor : public AActor {
public:

	char pad_378[0x38]; // 0x378(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.HISMMergeActor
// Size: 0x4c8 (Inherited: 0x378)
class AHISMMergeActor : public AActor {
public:

	struct USceneComponent* HISMMergeRootComponent; // 0x378(0x08)
	int32_t CurrentHISMID; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct TMap<uint32_t, struct TWeakObjectPtr<struct UHierarchicalInstancedStaticMeshComponent>> ChildHISMComps; // 0x388(0x50)
	struct TMap<int32_t, struct FCacheHISMGroupDataInfo> MapCacheDatas; // 0x3d8(0x50)
	struct TMap<struct FName, int32_t> InstanceStartCullDistances; // 0x428(0x50)
	struct TMap<struct FName, int32_t> InstanceEndCullDistances; // 0x478(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.LandscapeCollisionAsset
// Size: 0x58 (Inherited: 0x30)
class ULandscapeCollisionAsset : public UObject {
public:

	struct TArray<struct FPhysXSerialBodyInstance> SerialBodyInstances; // 0x30(0x10)
	struct FVector Position; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FDateTime Timestamp; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.LandscapeFoliageHierarchicalInstancedComponent
// Size: 0xab0 (Inherited: 0xaa8)
class ULandscapeFoliageHierarchicalInstancedComponent : public UHierarchicalInstancedStaticMeshComponent {
public:

	bool CookQuadTree; // 0xaa8(0x01)
	bool CookLossyInstanceData; // 0xaa9(0x01)
	char pad_AAA[0x6]; // 0xaaa(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.LandscapeSimpleCollisionActor
// Size: 0x528 (Inherited: 0x378)
class ALandscapeSimpleCollisionActor : public AActor {
public:

	struct USceneComponent* SimplePhysicsRootComponent; // 0x378(0x08)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x380(0x08)
	struct FBodyInstance BodyInstance; // 0x388(0x120)
	int32_t CollisionMipLevel; // 0x4a8(0x04)
	int32_t SimpleCollisionMipLevel; // 0x4ac(0x04)
	int32_t SimpleCollisionMipNum; // 0x4b0(0x04)
	int32_t CollisionMeregCount; // 0x4b4(0x04)
	int32_t CurrCollisionLOD; // 0x4b8(0x04)
	struct FIntPoint ActorID; // 0x4bc(0x08)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct FLandscapeBlockSimpleCollision BlockSimpleCollision; // 0x4c8(0x28)
	struct FBox LandscapesBounds; // 0x4f0(0x1c)
	bool bUseSimpleCollision; // 0x50c(0x01)
	char pad_50D[0x3]; // 0x50d(0x03)
	int32_t EditorVisiableDistance; // 0x510(0x04)
	int32_t NumSubsections; // 0x514(0x04)
	int32_t SubsectionSizeQuads; // 0x518(0x04)
	int32_t ComponentSizeQuads; // 0x51c(0x04)
	float SectionSize; // 0x520(0x04)
	char pad_524[0x4]; // 0x524(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.LandscapeSimpleCollisionComponent
// Size: 0x610 (Inherited: 0x560)
class ULandscapeSimpleCollisionComponent : public UPrimitiveComponent {
public:

	bool UseSimpleCollisionOnComposited; // 0x560(0x01)
	bool UseOnlySimpleCollisionWithLOD; // 0x561(0x01)
	char pad_562[0x6]; // 0x562(0x06)
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x568(0x10)
	int32_t SectionBaseX; // 0x578(0x04)
	int32_t SectionBaseY; // 0x57c(0x04)
	int32_t ComponentSizeQuads; // 0x580(0x04)
	struct FGuid HeightfieldGuid; // 0x584(0x10)
	char pad_594[0x4]; // 0x594(0x04)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x598(0x10)
	struct FCompositedCollisionParams CompositedParams; // 0x5a8(0x0c)
	char pad_5B4[0x4]; // 0x5b4(0x04)
	struct FOnlySimpleCollisionParams OnlySimpleParams; // 0x5b8(0x28)
	bool NotYetSerialized; // 0x5e0(0x01)
	char pad_5E1[0x2f]; // 0x5e1(0x2f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.LandscapeSimpleCollisionData
// Size: 0x260 (Inherited: 0x30)
class ULandscapeSimpleCollisionData : public UObject {
public:

	bool bIsClient; // 0x30(0x01)
	bool NotYetSerialized; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t SectionBaseX; // 0x34(0x04)
	int32_t SectionBaseY; // 0x38(0x04)
	int32_t NumSubsections; // 0x3c(0x04)
	int32_t SubsectionSizeQuads; // 0x40(0x04)
	int32_t ComponentSizeQuads; // 0x44(0x04)
	float SectionSize; // 0x48(0x04)
	struct FIntPoint SectionID; // 0x4c(0x08)
	struct FVector SectionLocation; // 0x54(0x0c)
	struct FVector LandscapeScale; // 0x60(0x0c)
	struct FVector LandscapeCenter; // 0x6c(0x0c)
	char pad_78[0x8]; // 0x78(0x08)
	struct FTransform LandscapeTransform; // 0x80(0x30)
	int32_t CurrLandscapeLOD; // 0xb0(0x04)
	int32_t CurrCollisionLOD; // 0xb4(0x04)
	int32_t NumCollisionLOD; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<int32_t> MipSizeQuads; // 0xc0(0x10)
	struct TArray<float> MipScale; // 0xd0(0x10)
	struct FGuid HeightfieldGuid; // 0xe0(0x10)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0xf0(0x08)
	struct FBodyInstance BodyInstance; // 0xf8(0x120)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x218(0x10)
	char pad_228[0x20]; // 0x228(0x20)
	struct UPrimitiveComponent* OwnerComponent; // 0x248(0x08)
	char pad_250[0x10]; // 0x250(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.LandscapeSimpleCollisionAsset
// Size: 0xa0 (Inherited: 0x30)
class ULandscapeSimpleCollisionAsset : public UObject {
public:

	struct FBoxSphereBounds Bounds; // 0x30(0x1c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct ULandscapeSimpleCollisionData* CollisionData; // 0x50(0x08)
	float SectionSize; // 0x58(0x04)
	bool bIsHDWeightmap; // 0x5c(0x01)
	char pad_5D[0x43]; // 0x5d(0x43)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.LandscapeSimpleCollisionRootComponent
// Size: 0x570 (Inherited: 0x560)
class ULandscapeSimpleCollisionRootComponent : public UPrimitiveComponent {
public:

	int32_t EditorVisiableDistance; // 0x560(0x04)
	char pad_564[0xc]; // 0x564(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.LandscapeSimplePhysicsActor
// Size: 0x4e8 (Inherited: 0x378)
class ALandscapeSimplePhysicsActor : public AActor {
public:

	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x378(0x08)
	struct FBodyInstance BodyInstance; // 0x380(0x120)
	struct USceneComponent* SimplePhysicsRootComponent; // 0x4a0(0x08)
	struct TArray<struct UStaticMeshComponent*> StaticMeshComps; // 0x4a8(0x10)
	struct TArray<struct FIntPoint> StaticMeshCompIDs; // 0x4b8(0x10)
	struct FBox LandscapesBounds; // 0x4c8(0x1c)
	char pad_4E4[0x4]; // 0x4e4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldBuiltActor
// Size: 0x378 (Inherited: 0x378)
class AOpenWorldBuiltActor : public AActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldTreeMeshComponent
// Size: 0xab0 (Inherited: 0xaa8)
class UOpenWorldTreeMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
public:

	char pad_AA8[0x8]; // 0xaa8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldBushMeshComponent
// Size: 0xab0 (Inherited: 0xaa8)
class UOpenWorldBushMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
public:

	char pad_AA8[0x8]; // 0xaa8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldGrassMeshComponent
// Size: 0xab0 (Inherited: 0xaa8)
class UOpenWorldGrassMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
public:

	char pad_AA8[0x8]; // 0xaa8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldSmallStoneMeshComponent
// Size: 0xab0 (Inherited: 0xaa8)
class UOpenWorldSmallStoneMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
public:

	char pad_AA8[0x8]; // 0xaa8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldMiddleStoneMeshComponent
// Size: 0xab0 (Inherited: 0xaa8)
class UOpenWorldMiddleStoneMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
public:

	char pad_AA8[0x8]; // 0xaa8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldDecorationMeshComponent
// Size: 0xab0 (Inherited: 0xaa8)
class UOpenWorldDecorationMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
public:

	char pad_AA8[0x8]; // 0xaa8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldProfilerCustomSampleConfig
// Size: 0x50 (Inherited: 0x30)
class UOpenWorldProfilerCustomSampleConfig : public UObject {
public:

	struct FString Name; // 0x30(0x10)
	struct TArray<struct FOpenWorldProfileCustomSamplePos> CustomSamplePositions; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldProfilerConfig
// Size: 0xf8 (Inherited: 0x30)
class UOpenWorldProfilerConfig : public UObject {
public:

	struct TArray<struct FString> IgnoreLayerConfigs; // 0x30(0x10)
	struct TArray<struct FString> ProfileIgnoreLevelPaths; // 0x40(0x10)
	struct TArray<float> CameraPitchSamples; // 0x50(0x10)
	struct TArray<float> CameraYawSamples; // 0x60(0x10)
	struct TArray<struct FOpenWorldProfileArea> ProfileArea; // 0x70(0x10)
	struct TArray<struct FOpenWorldProfileArea> PSOProfileArea; // 0x80(0x10)
	struct TArray<struct FOpenWorldExecCmdInfo> ExecCmdInfos; // 0x90(0x10)
	struct TArray<struct FString> ExecCmdWhenLooadingMsgs; // 0xa0(0x10)
	struct TArray<struct FString> ForceUnloadLevels; // 0xb0(0x10)
	int32_t SOCWiatFrameCount; // 0xc0(0x04)
	int32_t GpuTimeWaitFrameCount; // 0xc4(0x04)
	int32_t NearFoliageDistance; // 0xc8(0x04)
	int32_t ProfileFOV; // 0xcc(0x04)
	/*struct TSoftObjectPtr<UOpenWorldProfilerCustomSampleConfig>*/char CustomSampleConfig[0x28]; // 0xd0(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldProfileMetricsSettings
// Size: 0xf0 (Inherited: 0x40)
class UOpenWorldProfileMetricsSettings : public UDeveloperSettings {
public:

	struct TMap<struct FVector2D, struct FColor> HintColors; // 0x40(0x50)
	struct TMap<struct FVector2D, struct FColor> HintColors_HD; // 0x90(0x50)
	struct TArray<struct FGameModeProfileMetricSettings> GameModeProfileMetricSettings; // 0xe0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingBlueprintTools
// Size: 0x30 (Inherited: 0x30)
class UOpenWorldStreamingBlueprintTools : public UBlueprintFunctionLibrary {
public:


	void STATIC_UploadMemReportFull(struct FString InGameVersion); // Function OpenWorldStreaming.OpenWorldStreamingBlueprintTools.UploadMemReportFull // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.LandscapeMeshFuncLib
// Size: 0x30 (Inherited: 0x30)
class ULandscapeMeshFuncLib : public UBlueprintFunctionLibrary {
public:


	void STATIC_LandscapeVTFlush(); // Function OpenWorldStreaming.LandscapeMeshFuncLib.LandscapeVTFlush // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingLevel
// Size: 0x200 (Inherited: 0x150)
class UOpenWorldStreamingLevel : public ULevelStreamingDynamic {
public:

	bool bImmediate; // 0x150(0x01)
	bool bDisabled; // 0x151(0x01)
	char pad_152[0x2]; // 0x152(0x02)
	float CommitTimeSeconds; // 0x154(0x04)
	struct UOpenWorldStreamingLayer* StreamingLayer; // 0x158(0x08)
	struct FBox2D AbsoluteBounds; // 0x160(0x14)
	char pad_174[0x4]; // 0x174(0x04)
	struct ULevel* PreloadedLevel; // 0x178(0x08)
	struct FIntPoint AssetProgress; // 0x180(0x08)
	char pad_188[0x78]; // 0x188(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.SimpleProfilerBlueprintTools
// Size: 0x30 (Inherited: 0x30)
class USimpleProfilerBlueprintTools : public UBlueprintFunctionLibrary {
public:


	void STATIC_EndSimpleProfiler(struct UObject* WorldContext, struct FString MapName, bool bReport, bool bSave); // Function OpenWorldStreaming.SimpleProfilerBlueprintTools.EndSimpleProfiler // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.SVTRenderAreaActor
// Size: 0x380 (Inherited: 0x378)
class ASVTRenderAreaActor : public AActor {
public:

	struct UBoxComponent* BoxComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldPIESettings
// Size: 0x90 (Inherited: 0x90)
class UOpenWorldPIESettings : public UOpenWorldSettings {
public:


	void STATIC_Save(); // Function OpenWorldStreaming.OpenWorldPIESettings.Save // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.AssetsStreamer
// Size: 0x5d0 (Inherited: 0x378)
class AAssetsStreamer : public AActor {
public:

	struct TArray<struct FBoundedAssetPath> Assets; // 0x378(0x10)
	struct FString AssetPathTemplate; // 0x388(0x10)
	char pad_398[0x10]; // 0x398(0x10)
	/*struct TSet<struct UObject*>*/char LoadedAssets[0x50]; // 0x3a8(0x50)
	char pad_3F8[0x1d8]; // 0x3f8(0x1d8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldComposition
// Size: 0x6c0 (Inherited: 0x70)
class UOpenWorldComposition : public UWorldComposition {
public:

	struct FName MainWorld; // 0x70(0x08)
	/*struct TSet<struct FName>*/char SecondaryWorlds[0x50]; // 0x78(0x50)
	struct TMap<struct FName, struct FString> DisabledLayers; // 0xc8(0x50)
	/*struct TSet<struct FString>*/char DisabledLevelWildcards[0x50]; // 0x118(0x50)
	char pad_168[0x8]; // 0x168(0x08)
	struct FOpenWorldStreamingContext Context; // 0x170(0xd0)
	struct FOpenWorldStreamingCollection Collection; // 0x240(0x3f0)
	struct TMap<struct FName, struct UOpenWorldStreamingLayer*> Layers; // 0x630(0x50)
	char pad_680[0x40]; // 0x680(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig
// Size: 0x130 (Inherited: 0x90)
class UOpenWorldFoliageScalabilityConfig : public UOpenWorldSettings {
public:

	struct TMap<struct FName, int32_t> FoliageCutDownConfig; // 0x90(0x50)
	struct TMap<struct FName, struct FLocalFallbackConfig> FoliageFallbackConfig; // 0xe0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingLayer
// Size: 0xa8 (Inherited: 0x30)
class UOpenWorldStreamingLayer : public UObject {
public:

	enum class EOpenWorldStreamingImportance Importance; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t Priority; // 0x34(0x04)
	bool bClient; // 0x38(0x01)
	bool bClientDefaultLoad; // 0x39(0x01)
	bool bServer; // 0x3a(0x01)
	bool bServerDefaultLoad; // 0x3b(0x01)
	bool bIsolate; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32_t DistanceOverride; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<int32_t> LoadDistances; // 0x48(0x10)
	/*struct TSet<struct UOpenWorldStreamingLevel*>*/char Levels[0x50]; // 0x58(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.RoomVolume
// Size: 0x480 (Inherited: 0x3b0)
class ARoomVolume : public AVolume {
public:

	struct FString BuiltLevelPackage; // 0x3b0(0x10)
	struct TArray<struct FString> DetailSuffixes; // 0x3c0(0x10)
	struct TArray<struct FString> BatchPrefixes; // 0x3d0(0x10)
	char pad_3E0[0xa0]; // 0x3e0(0xa0)

	void EndOverlap(struct AActor* ThisActor, struct AActor* OtherActor); // Function OpenWorldStreaming.RoomVolume.EndOverlap // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.StreamingLayer
// Size: 0x30 (Inherited: 0x30)
class UStreamingLayer : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingSettings
// Size: 0x198 (Inherited: 0x90)
class UOpenWorldStreamingSettings : public UOpenWorldSettings {
public:

	int32_t DefaultStreamingLevel; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<struct FStreamingLevelInfo> LevelIndexInfo; // 0x98(0x10)
	int32_t NecessaryPriority; // 0xa8(0x04)
	int32_t MajorPriority; // 0xac(0x04)
	struct FString StreamingSwitches; // 0xb0(0x10)
	struct TArray<struct FStreamingLayerSwitch> StreamingLayerSwitches; // 0xc0(0x10)
	struct TArray<struct FStreamingLayerDesc> DefaultStreamingGroups; // 0xd0(0x10)
	struct TArray<struct FStreamingLayerDesc> OverrideStreamingGroups; // 0xe0(0x10)
	struct TArray<struct FName> PhysicsGroups; // 0xf0(0x10)
	struct TArray<struct FMapBroadphaseSettings> MapBroadphaseSettings; // 0x100(0x10)
	bool bEnableBroadphaseMBPClient; // 0x110(0x01)
	bool bEnableBroadphaseMBPServer; // 0x111(0x01)
	char pad_112[0x2]; // 0x112(0x02)
	float MBPOuterMultipler; // 0x114(0x04)
	int32_t MBPGridSize; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct FSpecialStreamingUpdateDistGroup> SpecialStreamingUpdateDistGroups; // 0x120(0x10)
	bool bIgnoreZoomFrustum; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct TArray<float> VisibleZoomRate; // 0x138(0x10)
	float HLODInvisibleFarthestDistance; // 0x148(0x04)
	float LODClampDistance; // 0x14c(0x04)
	struct TArray<struct FOpenWorldStreamingLayerDesc> DefaultStreamingLayers; // 0x150(0x10)
	struct TArray<struct FOpenWorldStreamingLayerDesc> OverrideStreamingLayers; // 0x160(0x10)
	struct TArray<struct FName> SecondaryWorlds; // 0x170(0x10)
	bool bCanDisableSimulation; // 0x180(0x01)
	bool bUsesGameplayAreaOrigin; // 0x181(0x01)
	char pad_182[0x16]; // 0x182(0x16)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings
// Size: 0x98 (Inherited: 0x90)
class UCookedTileSettings : public UOpenWorldSettings {
public:

	int32_t NumTiles; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldTileSettings
// Size: 0x1b8 (Inherited: 0x90)
class UOpenWorldTileSettings : public UOpenWorldSettings {
public:

	struct TArray<struct FWorldTileFolder> Folders; // 0x90(0x10)
	struct TArray<struct FWorldTileFolderExtra> FolderExtras; // 0xa0(0x10)
	struct TArray<struct FName> DefaultEditorFilterGroups; // 0xb0(0x10)
	struct TArray<struct FName> DefaultRuntimeUnbuiltFilterGroups; // 0xc0(0x10)
	struct TArray<struct FName> DefaultRuntimeBuiltFilterGroups; // 0xd0(0x10)
	struct TArray<struct FName> DefaultRuntimeUnbuiltUniqueFilterGroups; // 0xe0(0x10)
	struct TArray<struct FName> DefaultRuntimeBuiltUniqueFilterGroups; // 0xf0(0x10)
	struct TArray<struct FName> DefaultDynamicFilterGroups; // 0x100(0x10)
	struct TArray<struct FUnbuiltGroupsForScene> UnbuiltGroupsForScenes; // 0x110(0x10)
	struct TArray<struct FMapReference> MapReferencers; // 0x120(0x10)
	struct TArray<struct FMapReference> MapDependencies; // 0x130(0x10)
	struct TArray<struct FMapRedirection> MapRedirections; // 0x140(0x10)
	struct TArray<struct FMapGameplayArea> MapGameplayAreas; // 0x150(0x10)
	struct TArray<struct FString> MappingWildcards; // 0x160(0x10)
	struct TArray<struct FString> DisabledWildcards_Mobile; // 0x170(0x10)
	struct TArray<struct FString> DisabledWildcards_PC; // 0x180(0x10)
	bool bSkipDisabledWildcards; // 0x190(0x01)
	bool bConsiderPOISelection; // 0x191(0x01)
	bool bEnableBackupMaps; // 0x192(0x01)
	bool bEnableBuildBackupMaps; // 0x193(0x01)
	char pad_194[0x4]; // 0x194(0x04)
	struct TArray<struct FString> BackupEnabledMaps; // 0x198(0x10)
	struct TArray<struct FString> BackupEnabledDirs; // 0x1a8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFilterSettings
// Size: 0xf8 (Inherited: 0x90)
class UOpenWorldFilterSettings : public UOpenWorldSettings {
public:

	bool bEnableMapping; // 0x90(0x01)
	bool bDisableDefaultFilter; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
	struct TArray<struct FName> DisabledParentFilterMaps; // 0x98(0x10)
	struct TArray<struct FWorldTileFilter> EditorTileFilters; // 0xa8(0x10)
	struct TArray<struct FWorldTileFilter> RuntimeTileFilters; // 0xb8(0x10)
	struct TArray<struct FWorldTileFilter> DynamicTileFilters; // 0xc8(0x10)
	struct TArray<struct FString> ExclusionWildcards; // 0xd8(0x10)
	struct TArray<struct FString> LayersDistanceAdjustedScale; // 0xe8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.LandscapeCollisionAssetsStreamer
// Size: 0x620 (Inherited: 0x5d0)
class ALandscapeCollisionAssetsStreamer : public AAssetsStreamer {
public:

	struct TMap<struct FName, struct UPhysXSerialComponent*> CollisionComponents; // 0x5d0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.LandscapeSimpleCollisionManager
// Size: 0x8e0 (Inherited: 0x5d0)
class ALandscapeSimpleCollisionManager : public AAssetsStreamer {
public:

	bool bEnable; // 0x5d0(0x01)
	bool bIsClient; // 0x5d1(0x01)
	bool bAutoSelectLOD; // 0x5d2(0x01)
	bool bLoadAll; // 0x5d3(0x01)
	bool bDebugDraw; // 0x5d4(0x01)
	char pad_5D5[0x3]; // 0x5d5(0x03)
	struct ULandscapeSimpleCollisionRootComponent* SimplePhysicsRootComponent; // 0x5d8(0x08)
	struct FBodyInstance BodyInstance; // 0x5e0(0x120)
	struct TMap<int32_t, struct UPhysicalMaterial*> MatIDToPhysicalMaterial; // 0x700(0x50)
	char pad_750[0x190]; // 0x750(0x190)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CustomWorldComposition
// Size: 0x7d0 (Inherited: 0x6c0)
class UCustomWorldComposition : public UOpenWorldComposition {
public:

	char pad_6C0[0x10]; // 0x6c0(0x10)
	bool bPhysicsLoadingCompleted; // 0x6d0(0x01)
	char pad_6D1[0x3]; // 0x6d1(0x03)
	struct FIntVector PercentageProgresses; // 0x6d4(0x0c)
	/*struct TSoftObjectPtr<UOpenWorldProfilerConfig>*/char ProfilerConfig[0x28]; // 0x6e0(0x28)
	bool bSkipCookSubLevel; // 0x708(0x01)
	char pad_709[0x7]; // 0x709(0x07)
	struct TArray<struct FName> LinuxClientWhiteList; // 0x710(0x10)
	struct TArray<struct FDSMapAreaSettings> DSMapAreaSettings; // 0x720(0x10)
	char pad_730[0xa0]; // 0x730(0xa0)

	bool UseStreamingSettings(struct FName MapName, struct TArray<struct FName>& InExtraScanningMaps); // Function OpenWorldStreaming.CustomWorldComposition.UseStreamingSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig_SpaceCenter
// Size: 0x130 (Inherited: 0x130)
class UOpenWorldFoliageScalabilityConfig_SpaceCenter : public UOpenWorldFoliageScalabilityConfig {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig_Iceland
// Size: 0x130 (Inherited: 0x130)
class UOpenWorldFoliageScalabilityConfig_Iceland : public UOpenWorldFoliageScalabilityConfig {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig_Iceland_Breakthrough
// Size: 0x130 (Inherited: 0x130)
class UOpenWorldFoliageScalabilityConfig_Iceland_Breakthrough : public UOpenWorldFoliageScalabilityConfig {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig_Iceland_SceneProfile
// Size: 0x130 (Inherited: 0x130)
class UOpenWorldFoliageScalabilityConfig_Iceland_SceneProfile : public UOpenWorldFoliageScalabilityConfig {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig_Cracked_SceneProfile
// Size: 0x130 (Inherited: 0x130)
class UOpenWorldFoliageScalabilityConfig_Cracked_SceneProfile : public UOpenWorldFoliageScalabilityConfig {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig_Cracked_Breakthrough
// Size: 0x130 (Inherited: 0x130)
class UOpenWorldFoliageScalabilityConfig_Cracked_Breakthrough : public UOpenWorldFoliageScalabilityConfig {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig_Retrowar_Breakthrough
// Size: 0x130 (Inherited: 0x130)
class UOpenWorldFoliageScalabilityConfig_Retrowar_Breakthrough : public UOpenWorldFoliageScalabilityConfig {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig_Retrowar_Conquest
// Size: 0x130 (Inherited: 0x130)
class UOpenWorldFoliageScalabilityConfig_Retrowar_Conquest : public UOpenWorldFoliageScalabilityConfig {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFoliageScalabilityConfig_Retrowar_SceneProfile
// Size: 0x130 (Inherited: 0x130)
class UOpenWorldFoliageScalabilityConfig_Retrowar_SceneProfile : public UOpenWorldFoliageScalabilityConfig {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingLayerDistance
// Size: 0x108 (Inherited: 0xa8)
class UOpenWorldStreamingLayerDistance : public UOpenWorldStreamingLayer {
public:

	struct TArray<int32_t> PreloadDistances; // 0xa8(0x10)
	struct TArray<int32_t> ZoomDistances; // 0xb8(0x10)
	struct TArray<struct FOpenWorldStreamingLODDistance> LODDistances; // 0xc8(0x10)
	struct FString LOD0Layer; // 0xd8(0x10)
	struct FString LOD1Layer; // 0xe8(0x10)
	bool bTriggerVisible; // 0xf8(0x01)
	char pad_F9[0xf]; // 0xf9(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingLayerAsset
// Size: 0xd0 (Inherited: 0xa8)
class UOpenWorldStreamingLayerAsset : public UOpenWorldStreamingLayer {
public:

	int32_t AssetPriority; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<struct FString> Parameters; // 0xb0(0x10)
	char pad_C0[0x10]; // 0xc0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.RoomInsideVolume
// Size: 0x480 (Inherited: 0x480)
class ARoomInsideVolume : public ARoomVolume {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.RoomOutsideVolume
// Size: 0x480 (Inherited: 0x480)
class ARoomOutsideVolume : public ARoomVolume {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.RoomPortalVolume
// Size: 0x480 (Inherited: 0x480)
class ARoomPortalVolume : public ARoomVolume {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.StreamingLayerAssets
// Size: 0x30 (Inherited: 0x30)
class UStreamingLayerAssets : public UStreamingLayer {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.StreamingLayerDistance
// Size: 0x30 (Inherited: 0x30)
class UStreamingLayerDistance : public UStreamingLayer {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.StreamingLayerHLOD
// Size: 0x30 (Inherited: 0x30)
class UStreamingLayerHLOD : public UStreamingLayer {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.StreamingLayerVolume
// Size: 0x30 (Inherited: 0x30)
class UStreamingLayerVolume : public UStreamingLayer {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingSettings_Cracked
// Size: 0x198 (Inherited: 0x198)
class UOpenWorldStreamingSettings_Cracked : public UOpenWorldStreamingSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingSettings_DevilDogs
// Size: 0x198 (Inherited: 0x198)
class UOpenWorldStreamingSettings_DevilDogs : public UOpenWorldStreamingSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingSettings_Intro
// Size: 0x198 (Inherited: 0x198)
class UOpenWorldStreamingSettings_Intro : public UOpenWorldStreamingSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingSettings_Iris_Entry
// Size: 0x198 (Inherited: 0x198)
class UOpenWorldStreamingSettings_Iris_Entry : public UOpenWorldStreamingSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingSettings_Iceland_Breakthrough
// Size: 0x198 (Inherited: 0x198)
class UOpenWorldStreamingSettings_Iceland_Breakthrough : public UOpenWorldStreamingSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingSettings_Iris_Automation
// Size: 0x198 (Inherited: 0x198)
class UOpenWorldStreamingSettings_Iris_Automation : public UOpenWorldStreamingSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingSettings_Iceland
// Size: 0x198 (Inherited: 0x198)
class UOpenWorldStreamingSettings_Iceland : public UOpenWorldStreamingSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingSettings_SpaceCenter
// Size: 0x198 (Inherited: 0x198)
class UOpenWorldStreamingSettings_SpaceCenter : public UOpenWorldStreamingSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingSettings_Dam_Iris
// Size: 0x198 (Inherited: 0x198)
class UOpenWorldStreamingSettings_Dam_Iris : public UOpenWorldStreamingSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingSettings_Forrest
// Size: 0x198 (Inherited: 0x198)
class UOpenWorldStreamingSettings_Forrest : public UOpenWorldStreamingSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingSettings_Brakkesh
// Size: 0x198 (Inherited: 0x198)
class UOpenWorldStreamingSettings_Brakkesh : public UOpenWorldStreamingSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingSettings_Gibraltar
// Size: 0x198 (Inherited: 0x198)
class UOpenWorldStreamingSettings_Gibraltar : public UOpenWorldStreamingSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingSettings_Shafted
// Size: 0x198 (Inherited: 0x198)
class UOpenWorldStreamingSettings_Shafted : public UOpenWorldStreamingSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldStreamingSettings_Retrowar
// Size: 0x198 (Inherited: 0x198)
class UOpenWorldStreamingSettings_Retrowar : public UOpenWorldStreamingSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Retrowar_TacticalConquest
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Retrowar_TacticalConquest : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Retrowar_Siege
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Retrowar_Siege : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Retrowar_Conquest
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Retrowar_Conquest : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Retrowar_Breakthrough
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Retrowar_Breakthrough : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Gibraltar_Siege
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Gibraltar_Siege : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Gibraltar_Breakthrough
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Gibraltar_Breakthrough : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Gibraltar_Conquest
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Gibraltar_Conquest : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Gibraltar_TacticalConquest
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Gibraltar_TacticalConquest : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Shafted_TacticalConquest
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Shafted_TacticalConquest : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Shafted_Conquest
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Shafted_Conquest : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Shafted_Breakthrough
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Shafted_Breakthrough : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Brakkesh_Level2
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Brakkesh_Level2 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Brakkesh_Level1
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Brakkesh_Level1 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Brakkesh
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Brakkesh : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_OldCity_Level3
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_OldCity_Level3 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_OldCity_Level2
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_OldCity_Level2 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_OldCity_Level1
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_OldCity_Level1 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_OldCity
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_OldCity : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Iceland_Siege
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Iceland_Siege : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Iceland_Conquest
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Iceland_Conquest : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Iceland_TacticalConquest
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Iceland_TacticalConquest : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Iceland_Gym
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Iceland_Gym : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Iceland
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Iceland : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Iceland_Breakthrough
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Iceland_Breakthrough : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_SpaceCenter_Level2
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_SpaceCenter_Level2 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_SpaceCenter_Level1
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_SpaceCenter_Level1 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_SpaceCenter
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_SpaceCenter : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Forrest_WithoutAirCrash
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Forrest_WithoutAirCrash : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Forrest_WithAirCrash
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Forrest_WithAirCrash : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Forrest_Level12
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Forrest_Level12 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Forrest_Level11
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Forrest_Level11 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Forrest_Level2
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Forrest_Level2 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Forrest_Level1
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Forrest_Level1 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Forrest
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Forrest : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_SafeHouse
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_SafeHouse : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Cracked_Warehouse
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Cracked_Warehouse : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Cracked_Siege
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Cracked_Siege : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Cracked_TacticalConquest
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Cracked_TacticalConquest : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Cracked_Conquest
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Cracked_Conquest : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Cracked_Breakthrough
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Cracked_Breakthrough : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Dam_Iris_Level12
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Dam_Iris_Level12 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Dam_Iris_Level11
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Dam_Iris_Level11 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Dam_Iris_Level2
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Dam_Iris_Level2 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Dam_Iris_Level1
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Dam_Iris_Level1 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Dam_Iris
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Dam_Iris : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Forrest_Tutorial
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Forrest_Tutorial : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Iris_Entry
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Iris_Entry : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Crest_Conquest
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Crest_Conquest : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Crest_Breakthrough
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Crest_Breakthrough : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Gibraltar_Automation
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Gibraltar_Automation : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Derail_Conquest
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Derail_Conquest : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Derail_Breakthrough
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Derail_Breakthrough : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_IceLand_Automation
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_IceLand_Automation : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Intro
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Intro : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Forrest_Level999
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Forrest_Level999 : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Cracked_Automation
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Cracked_Automation : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.CookedTileSettings_Iris_Automation
// Size: 0x98 (Inherited: 0x98)
class UCookedTileSettings_Iris_Automation : public UCookedTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldTileSettings_SpaceCenter
// Size: 0x1b8 (Inherited: 0x1b8)
class UOpenWorldTileSettings_SpaceCenter : public UOpenWorldTileSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFilterSettings_Forrest
// Size: 0xf8 (Inherited: 0xf8)
class UOpenWorldFilterSettings_Forrest : public UOpenWorldFilterSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFilterSettings_TOD_StandardScene
// Size: 0xf8 (Inherited: 0xf8)
class UOpenWorldFilterSettings_TOD_StandardScene : public UOpenWorldFilterSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFilterSettings_Iris_Entry
// Size: 0xf8 (Inherited: 0xf8)
class UOpenWorldFilterSettings_Iris_Entry : public UOpenWorldFilterSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFilterSettings_SafeHouse
// Size: 0xf8 (Inherited: 0xf8)
class UOpenWorldFilterSettings_SafeHouse : public UOpenWorldFilterSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFilterSettings_Intro
// Size: 0xf8 (Inherited: 0xf8)
class UOpenWorldFilterSettings_Intro : public UOpenWorldFilterSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFilterSettings_BiomeLookdev
// Size: 0xf8 (Inherited: 0xf8)
class UOpenWorldFilterSettings_BiomeLookdev : public UOpenWorldFilterSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFilterSettings_Dam_Iris
// Size: 0xf8 (Inherited: 0xf8)
class UOpenWorldFilterSettings_Dam_Iris : public UOpenWorldFilterSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFilterSettings_SpaceCenter
// Size: 0xf8 (Inherited: 0xf8)
class UOpenWorldFilterSettings_SpaceCenter : public UOpenWorldFilterSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFilterSettings_Iris_UIMaps
// Size: 0xf8 (Inherited: 0xf8)
class UOpenWorldFilterSettings_Iris_UIMaps : public UOpenWorldFilterSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFilterSettings_Shafted_UIMaps
// Size: 0xf8 (Inherited: 0xf8)
class UOpenWorldFilterSettings_Shafted_UIMaps : public UOpenWorldFilterSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFilterSettings_Gibraltar_UIMaps
// Size: 0xf8 (Inherited: 0xf8)
class UOpenWorldFilterSettings_Gibraltar_UIMaps : public UOpenWorldFilterSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldStreaming.OpenWorldFilterSettings_Retrowar_UIMaps
// Size: 0xf8 (Inherited: 0xf8)
class UOpenWorldFilterSettings_Retrowar_UIMaps : public UOpenWorldFilterSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
