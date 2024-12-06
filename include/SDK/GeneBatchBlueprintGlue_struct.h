
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GeneBatchBlueprintGlue.EVertexColorChannel
enum class EVertexColorChannel : int {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EVertexColorChannel_MAX = 4
};

// ScriptStruct GeneBatchBlueprintGlue.GeneBatchStaticMeshMergeInfo
// Size: 0x50 (Inherited: 0x00)
struct FGeneBatchStaticMeshMergeInfo {
public:

	struct FString LevelKey; // 0x00(0x10)
	struct TArray<struct UStaticMeshComponent*> InputStaticMeshes; // 0x10(0x10)
	struct UStaticMeshComponent* MergedStaticMesh; // 0x20(0x08)
	struct AActor* BindToActor; // 0x28(0x08)
	struct FString AdditionalLevelKey; // 0x30(0x10)
	struct FVector ReferenceLocation; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatchBlueprintGlue.GeneBatchCustomLevelFilterContext
// Size: 0x80 (Inherited: 0x00)
struct FGeneBatchCustomLevelFilterContext {
public:

	bool bIsInitialized; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	/*struct TSoftObjectPtr<UGeneBatchPOISettingsObject>*/char POISettings[0x28]; // 0x08(0x28)
	struct TArray<struct FName> ShouldBuildThemes; // 0x30(0x10)
	struct TArray<struct FName> ShouldBuildPOIs; // 0x40(0x10)
	struct TArray<struct FName> ShouldLoadPOIs; // 0x50(0x10)
	struct TArray<struct FName> ShouldLoadGameplayAreas; // 0x60(0x10)
	struct TArray<struct FString> CleanLevels; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatchBlueprintGlue.GeneBatchPOIInputData
// Size: 0x50 (Inherited: 0x00)
struct FGeneBatchPOIInputData {
public:

	struct TArray<struct FGeneBatchSMCInputData> SMCInputData; // 0x00(0x10)
	struct FGeneBatchPOI POI; // 0x10(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatchBlueprintGlue.GeneBatchStaticMeshComponentArray
// Size: 0x10 (Inherited: 0x00)
struct FGeneBatchStaticMeshComponentArray {
public:

	struct TArray<struct UStaticMeshComponent*> Items; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatchBlueprintGlue.MaterialFilterInfo
// Size: 0x20 (Inherited: 0x00)
struct FMaterialFilterInfo {
public:

	struct TArray<struct UStaticMeshComponent*> StaticMeshCompoents; // 0x00(0x10)
	struct FString MaterialNames; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatchBlueprintGlue.LocalLightGroupBakeFilterInfo
// Size: 0x18 (Inherited: 0x00)
struct FLocalLightGroupBakeFilterInfo {
public:

	struct TArray<struct UStaticMeshComponent*> StaticMeshCompoents; // 0x00(0x10)
	struct ULocalLightGroupBake* LocalLightGroupBake; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatchBlueprintGlue.BatchConfig
// Size: 0x20 (Inherited: 0x00)
struct FBatchConfig {
public:

	int32_t GridX; // 0x00(0x04)
	int32_t GridY; // 0x04(0x04)
	int32_t RefMaxCount; // 0x08(0x04)
	float MaxVolume; // 0x0c(0x04)
	struct FString PackageName; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatchBlueprintGlue.StaticMeshMergeInfo
// Size: 0x20 (Inherited: 0x00)
struct FStaticMeshMergeInfo {
public:

	struct TArray<struct UStaticMeshComponent*> InputStaticMeshs; // 0x00(0x10)
	struct UStaticMeshComponent* MergeStaticMesh; // 0x10(0x08)
	struct AActor* BindToActor; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GeneBatchBlueprintGlue.SwapVertexColorObject
// Size: 0x28 (Inherited: 0x08)
struct FSwapVertexColorObject : public FTableRowBase {
public:

	struct FSoftObjectPath SoftObjectPath; // 0x08(0x18)
	int32_t SwapCount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
