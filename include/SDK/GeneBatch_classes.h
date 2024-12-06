
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GeneBatch.GeneBatchLibrary
// Size: 0x30 (Inherited: 0x30)
class UGeneBatchLibrary : public UBlueprintFunctionLibrary {
public:


	bool STATIC_RegexSearchCapture(struct FString inString, struct FString InRegexPattern, struct TArray<int32_t>& InCaptureIndex, struct TArray<struct FString>& OutCaptureGroup, int32_t BeginIndex, int32_t EndIndex); // Function GeneBatch.GeneBatchLibrary.RegexSearchCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchPOIVolume
// Size: 0x3e8 (Inherited: 0x3b0)
class AGeneBatchPOIVolume : public AVolume {
public:

	struct UGeneBatchPOISettingsObject* POISettingsObject; // 0x3b0(0x08)
	struct FName POIName; // 0x3b8(0x08)
	int32_t AreaIndex; // 0x3c0(0x04)
	struct FName GameplayAreaName; // 0x3c4(0x08)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UDecalComponent* DecalComponent; // 0x3d0(0x08)
	struct UMaterialInstanceDynamic* DecalMaterialInstance; // 0x3d8(0x08)
	char pad_3E0[0x8]; // 0x3e0(0x08)

	void UpdatePOISettingsObject(struct UGeneBatchPOISettingsObject* NewPOISettingsObject); // Function GeneBatch.GeneBatchPOIVolume.UpdatePOISettingsObject // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchPOISettingsObject
// Size: 0x50 (Inherited: 0x30)
class UGeneBatchPOISettingsObject : public UObject {
public:

	struct TArray<struct FGeneBatchPOI> POIs; // 0x30(0x10)
	struct TArray<struct FGeneBatchTheme> Themes; // 0x40(0x10)

	struct TArray<struct UGeneBatchSettingsObject*> GetPOIGeneBatchSettings(); // Function GeneBatch.GeneBatchPOISettingsObject.GetPOIGeneBatchSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchSettingsFunctionalConfiguration
// Size: 0x30 (Inherited: 0x30)
class UGeneBatchSettingsFunctionalConfiguration : public UObject {
public:


	enum class EGeneBatchBakeMethod MeshBakeMethod(struct FGeneBatchTableRowResultHLODData& HLODData, int32_t TotalNumVertices, struct TArray<int32_t>& MeshInstanceCounts); // Function GeneBatch.GeneBatchSettingsFunctionalConfiguration.MeshBakeMethod // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchWhyNotBatch
// Size: 0x40 (Inherited: 0x30)
class UGeneBatchWhyNotBatch : public UObject {
public:

	struct TArray<struct FGeneBatchTableRowWhyNotBatchStats> GeneBatchTableRowWhyNotBatchStats; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchSettingsObject
// Size: 0x360 (Inherited: 0x30)
class UGeneBatchSettingsObject : public UObject {
public:

	struct FString ProjectSettingName; // 0x30(0x10)
	struct FString AnalyzeBasePath; // 0x40(0x10)
	struct UGeneBatchPOISettingsObject* POISettings; // 0x50(0x08)
	int32_t POIIndex; // 0x58(0x04)
	int32_t ThemeIndex; // 0x5c(0x04)
	int32_t GenerationNum; // 0x60(0x04)
	int32_t IndividualNum; // 0x64(0x04)
	int32_t CanMergeMeshCheapestLODVertexMaxNum; // 0x68(0x04)
	int32_t CanMergeGridAllInstancesVertexMaxNum; // 0x6c(0x04)
	struct FGeneBatchAnalyzeHLODSettings LODSettings; // 0x70(0xd8)
	bool bEnableStatsObjective; // 0x148(0x01)
	bool bEnableStatsIndividual; // 0x149(0x01)
	bool bEnableMultithread; // 0x14a(0x01)
	bool bExportResult; // 0x14b(0x01)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct UGeneBatchSettingsFunctionalConfiguration* FunctionalConfiguration; // 0x150(0x08)
	/*struct TSoftObjectPtr<UDataTable>*/char AllowAnalyzeDataTablePtr[0x28]; // 0x158(0x28)
	char pad_180[0x50]; // 0x180(0x50)
	struct TArray<struct FString> StaticMeshTagGroupRegex; // 0x1d0(0x10)
	bool bSeparateLocalLightGroupBakeBlueprintComponents; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct FString BakedMaterialBasePath; // 0x1e8(0x10)
	struct FString BakedAtlasBasePath; // 0x1f8(0x10)
	struct FString BakedMeshBasePath; // 0x208(0x10)
	/*struct TSoftObjectPtr<UDataTable>*/char GeneBatchStaticMeshDataTablePtr[0x28]; // 0x218(0x28)
	/*struct TSoftObjectPtr<UDataTable>*/char GeneBatchStaticMeshProxyInputDataTablePtr[0x28]; // 0x240(0x28)
	/*struct TSoftObjectPtr<UDataTable>*/char GeneBatchMeshComponentDataTablePtr[0x28]; // 0x268(0x28)
	/*struct TSoftObjectPtr<UDataTable>*/char GeneBatchTextureAtlasDataTablePtr[0x28]; // 0x290(0x28)
	/*struct TSoftObjectPtr<UDataTable>*/char GeneBatchPrimitiveHLODParentDataTablePtr[0x28]; // 0x2b8(0x28)
	char pad_2E0[0x80]; // 0x2e0(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchDefaultSettings
// Size: 0x150 (Inherited: 0x40)
class UGeneBatchDefaultSettings : public UDeveloperSettings {
public:

	/*struct TSoftObjectPtr<UGeneBatchSettingsObject>*/char GeneBatchSettingsObject[0x28]; // 0x40(0x28)
	struct FString EditorBlueprintsPath; // 0x68(0x10)
	struct TArray<struct FString> EnablePlatforms; // 0x78(0x10)
	struct TArray<struct FString> AnalysisPlatforms; // 0x88(0x10)
	bool bForceSlowCheck; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct TArray<enum class TextureGroup> AnisotropicTextureGroups; // 0xa0(0x10)
	struct TArray<struct FName> StreamingLayers; // 0xb0(0x10)
	struct TMap<struct FName, float> GridStreamingLayerSizes; // 0xc0(0x50)
	bool bEnableFuzzyMatchingInGeneBatchSettings; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	/*struct TArray<struct TSoftObjectPtr<UGeneBatchPOISettingsObject>>*/char AllPOISettingsObjects[0x10]; // 0x118(0x10)
	/*struct TSoftClassPtr<UObject>*/char AutoCreationMethod[0x28]; // 0x128(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchInfo
// Size: 0x40 (Inherited: 0x30)
class UGeneBatchInfo : public UObject {
public:

	struct UStaticMesh* StaticMesh; // 0x30(0x08)
	int32_t LodIndex; // 0x38(0x04)
	int32_t SectionIndex; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchTableRowResultMeshReuseProperties
// Size: 0x68 (Inherited: 0x30)
class UGeneBatchTableRowResultMeshReuseProperties : public UObject {
public:

	struct FGeneBatchTableRowResultMeshReuseKey ReuseKey; // 0x30(0x18)
	/*struct TArray<struct TSoftObjectPtr<UMaterialInterface>>*/char OverrideMaterials[0x10]; // 0x48(0x10)
	struct TArray<struct FGeneBatchTableRowResultMesReuseLOD> LODs; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.DeveloperSettingsWithSubsettings
// Size: 0x90 (Inherited: 0x40)
class UDeveloperSettingsWithSubsettings : public UDeveloperSettings {
public:

	char pad_40[0x50]; // 0x40(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchSettings
// Size: 0x1e0 (Inherited: 0x90)
class UGeneBatchSettings : public UDeveloperSettingsWithSubsettings {
public:

	struct TArray<struct FString> Wildcard; // 0x90(0x10)
	struct TArray<struct FString> BlacklistWildcard; // 0xa0(0x10)
	int32_t GenerationNum; // 0xb0(0x04)
	int32_t IndividualNum; // 0xb4(0x04)
	int32_t CanMergeMeshCheapestLODVertexMaxNum; // 0xb8(0x04)
	int32_t CanMergeGridAllInstancesVertexMaxNum; // 0xbc(0x04)
	struct FGeneBatchAnalyzeHLODSettings LODSettings; // 0xc0(0xd8)
	bool bEnableStatsObjective; // 0x198(0x01)
	bool bEnableStatsIndividual; // 0x199(0x01)
	bool bEnableMultithread; // 0x19a(0x01)
	bool bExportResult; // 0x19b(0x01)
	char pad_19C[0x4]; // 0x19c(0x04)
	/*struct TSoftObjectPtr<UDataTable>*/char AllowAnalyzeDataTablePtr[0x28]; // 0x1a0(0x28)
	struct TArray<struct FString> StaticMeshTagGroupRegex; // 0x1c8(0x10)
	bool bSeparateLocalLightGroupBakeBlueprintComponents; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchSettings_Iris
// Size: 0x1e0 (Inherited: 0x1e0)
class UGeneBatchSettings_Iris : public UGeneBatchSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchSettings_Theme-SOL
// Size: 0x1e0 (Inherited: 0x1e0)
class UGeneBatchSettings_Theme_SOL : public UGeneBatchSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchSettings_Theme-MP
// Size: 0x1e0 (Inherited: 0x1e0)
class UGeneBatchSettings_Theme_MP : public UGeneBatchSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchSettings_LQ-SOL
// Size: 0x1e0 (Inherited: 0x1e0)
class UGeneBatchSettings_LQ_SOL : public UGeneBatchSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchSettings_LQ-MP
// Size: 0x1e0 (Inherited: 0x1e0)
class UGeneBatchSettings_LQ_MP : public UGeneBatchSettings {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchSettings_Iris_POI
// Size: 0x1e0 (Inherited: 0x1e0)
class UGeneBatchSettings_Iris_POI : public UGeneBatchSettings_Iris {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchSettings_Iris_Theme
// Size: 0x1e0 (Inherited: 0x1e0)
class UGeneBatchSettings_Iris_Theme : public UGeneBatchSettings_Iris {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchSettings_Iris_POI_SafeHouse
// Size: 0x1e0 (Inherited: 0x1e0)
class UGeneBatchSettings_Iris_POI_SafeHouse : public UGeneBatchSettings_Iris_POI {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchSettings_Iris_Theme_CommonTextures
// Size: 0x1e0 (Inherited: 0x1e0)
class UGeneBatchSettings_Iris_Theme_CommonTextures : public UGeneBatchSettings_Iris_Theme {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GeneBatch.GeneBatchSettings_Iris_Theme_POI-CoreOffice-Deco
// Size: 0x1e0 (Inherited: 0x1e0)
class UGeneBatchSettings_Iris_Theme_POI_CoreOffice_Deco : public UGeneBatchSettings_Iris_Theme {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
