
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct DestructionLevelRuntime.DesBatchHLODConfig
// Size: 0x10 (Inherited: 0x00)
struct FDesBatchHLODConfig {
public:

	int32_t HLODLevel; // 0x00(0x04)
	float MinDrawDistance; // 0x04(0x04)
	float GridSize; // 0x08(0x04)
	bool bForceUseMaxLOD; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DestructionLevelRuntime.DesBatchISMConfig
// Size: 0x0c (Inherited: 0x00)
struct FDesBatchISMConfig {
public:

	int32_t MinISMInsNum; // 0x00(0x04)
	float ExpectGridBound; // 0x04(0x04)
	float ExpectISMClusterBound; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DestructionLevelRuntime.DesTerrainGridData
// Size: 0x18 (Inherited: 0x00)
struct FDesTerrainGridData {
public:

	struct FVector FitPlaneNormal; // 0x00(0x0c)
	struct FVector RelativeLocation; // 0x0c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DestructionLevelRuntime.DesTerrainPointData
// Size: 0x18 (Inherited: 0x00)
struct FDesTerrainPointData {
public:

	struct FIntPoint GridPoint; // 0x00(0x08)
	struct FVector Normal; // 0x08(0x0c)
	float Height; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DestructionLevelRuntime.DesTerrainAreaBuildConfig
// Size: 0x18 (Inherited: 0x00)
struct FDesTerrainAreaBuildConfig {
public:

	int32_t GridSize; // 0x00(0x04)
	int32_t SampleInterval; // 0x04(0x04)
	float MaxAllowHeightDiff; // 0x08(0x04)
	float MaxAllowNormalAngleDiff; // 0x0c(0x04)
	float MaxMeshPercent; // 0x10(0x04)
	bool bOnlySupportLandscape; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DestructionLevelRuntime.DesTerrainAreaRuntimeConfig
// Size: 0x14 (Inherited: 0x00)
struct FDesTerrainAreaRuntimeConfig {
public:

	int32_t GridSize; // 0x00(0x04)
	int32_t GridXNum; // 0x04(0x04)
	int32_t GridYNum; // 0x08(0x04)
	float MaxAllowHeightDiff; // 0x0c(0x04)
	float MaxAllowNormalAngleDiff; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DestructionLevelRuntime.DesTerrainAreaData
// Size: 0x28 (Inherited: 0x00)
struct FDesTerrainAreaData {
public:

	struct FDesTerrainAreaRuntimeConfig Config; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FDesTerrainGridData> Grids; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
