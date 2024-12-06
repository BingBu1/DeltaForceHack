
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DestructionLevelRuntime.DesTerrainAreaVolume
// Size: 0x3f0 (Inherited: 0x3b0)
class ADesTerrainAreaVolume : public AVolume {
public:

	struct FDesTerrainAreaBuildConfig BuildConfig; // 0x3b0(0x18)
	struct FDesTerrainAreaData BakeAreaData; // 0x3c8(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DestructionLevelRuntime.DesTerrainLevelArea
// Size: 0x60 (Inherited: 0x30)
class UDesTerrainLevelArea : public UObject {
public:

	struct FName SectorID; // 0x30(0x08)
	struct FDesTerrainAreaData AreaData; // 0x38(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DestructionLevelRuntime.DesBatchBuildConfig
// Size: 0x90 (Inherited: 0x30)
class UDesBatchBuildConfig : public UObject {
public:

	/*struct TArray<struct TSoftObjectPtr<UDataTable>>*/char ResTables[0x10]; // 0x30(0x10)
	bool bEnableHLOD; // 0x40(0x01)
	bool bBatchHLOD; // 0x41(0x01)
	bool bEnableISM; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
	struct TArray<struct FDesBatchHLODConfig> HLODLayersConfig; // 0x48(0x10)
	struct FDesBatchISMConfig ISMConfig; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct ULevel* RuntimeLevel; // 0x68(0x08)
	struct ULevel* InterActorLevel; // 0x70(0x08)
	struct UWorld* World; // 0x78(0x08)
	char pad_80[0x10]; // 0x80(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
