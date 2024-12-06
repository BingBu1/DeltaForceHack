
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class OpenWorldWaterDataStreaming.OpenWorldWaterDataAsset
// Size: 0xd0 (Inherited: 0x30)
class UOpenWorldWaterDataAsset : public UObject {
public:

	char pad_30[0x30]; // 0x30(0x30)
	int16_t MinX; // 0x60(0x02)
	int16_t MaxX; // 0x62(0x02)
	int16_t Spacing; // 0x64(0x02)
	char pad_66[0xa]; // 0x66(0x0a)
	struct FTransform Transform; // 0x70(0x30)
	struct FBoxSphereBounds Bounds; // 0xa0(0x1c)
	char pad_BC[0x14]; // 0xbc(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldWaterDataStreaming.OpenWorldWaterDataComponent
// Size: 0x570 (Inherited: 0x560)
class UOpenWorldWaterDataComponent : public UPrimitiveComponent {
public:

	struct UOpenWorldWaterDataAsset* WaterDataAsset; // 0x560(0x08)
	char pad_568[0x8]; // 0x568(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldWaterDataStreaming.WaterDataAssetsStreamer
// Size: 0x6b0 (Inherited: 0x5d0)
class AWaterDataAssetsStreamer : public AAssetsStreamer {
public:

	struct TMap<struct FString, struct UOpenWorldWaterDataAsset*> AssetDataMap; // 0x5d0(0x50)
	char pad_620[0x80]; // 0x620(0x80)
	int32_t Spacing; // 0x6a0(0x04)
	char pad_6A4[0xc]; // 0x6a4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldWaterDataStreaming.OpenWorldWaterSubsystem
// Size: 0x48 (Inherited: 0x38)
class UOpenWorldWaterSubsystem : public UWorldSubsystem {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldWaterDataStreaming.OpenWorldWaterWaveGenerator
// Size: 0x428 (Inherited: 0x378)
class AOpenWorldWaterWaveGenerator : public AActor {
public:

	struct UMaterialParameterCollection* MaterialParameterCollection; // 0x378(0x08)
	bool bIsGeneratingWaterData; // 0x380(0x01)
	char pad_381[0x3]; // 0x381(0x03)
	float GerstnerAmplitudeMin; // 0x384(0x04)
	float GerstnerAmplitudeMax; // 0x388(0x04)
	float GerstnerLengthMin; // 0x38c(0x04)
	float GerstnerLengthMax; // 0x390(0x04)
	float GerstnerSteepnessMin; // 0x394(0x04)
	float GerstnerSteepnessMax; // 0x398(0x04)
	float GerstnerDistribution; // 0x39c(0x04)
	int32_t GerstnerWaves; // 0x3a0(0x04)
	int32_t GerstnerSeed; // 0x3a4(0x04)
	float GerstnerWindYaw; // 0x3a8(0x04)
	float GerstnerTileSoftness; // 0x3ac(0x04)
	float GerstnerSpread; // 0x3b0(0x04)
	bool SwizzleRanges; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	struct FVector Wind; // 0x3b8(0x0c)
	float Speed; // 0x3c4(0x04)
	struct UBillboardComponent* BillboardComp; // 0x3c8(0x08)
	struct UArrowComponent* ArrowComp; // 0x3d0(0x08)
	struct UTextRenderComponent* TextRenderComp; // 0x3d8(0x08)
	char pad_3E0[0x48]; // 0x3e0(0x48)

	void ForBlueprintDebugging(); // Function OpenWorldWaterDataStreaming.OpenWorldWaterWaveGenerator.ForBlueprintDebugging // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
