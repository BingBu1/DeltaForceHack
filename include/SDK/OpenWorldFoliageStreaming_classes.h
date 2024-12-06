
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class OpenWorldFoliageStreaming.OpenWorldFoliageAsset
// Size: 0xb0 (Inherited: 0x30)
class UOpenWorldFoliageAsset : public UObject {
public:

	struct TArray<struct FOpenWorldFoliageRawData> FoliageData; // 0x30(0x10)
	struct TArray<int8_t> CoverTypeMask; // 0x40(0x10)
	struct FFoliagePhysicsData PhysicsData; // 0x50(0x40)
	struct FBox Bounds; // 0x90(0x1c)
	char pad_AC[0x4]; // 0xac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldFoliageStreaming.OpenWorldFoliageStatics
// Size: 0x30 (Inherited: 0x30)
class UOpenWorldFoliageStatics : public UBlueprintFunctionLibrary {
public:


	struct FName STATIC_QueryCoverType(struct FVector WorldPosition); // Function OpenWorldFoliageStreaming.OpenWorldFoliageStatics.QueryCoverType // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldFoliageStreaming.CrackedInfoManager
// Size: 0x420 (Inherited: 0x378)
class ACrackedInfoManager : public AActor {
public:

	char pad_378[0xa8]; // 0x378(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldFoliageStreaming.FoliageAssetsStreamer
// Size: 0xad0 (Inherited: 0x5d0)
class AFoliageAssetsStreamer : public AAssetsStreamer {
public:

	bool bEnableShadow; // 0x5d0(0x01)
	bool bEnableCollision; // 0x5d1(0x01)
	char pad_5D2[0x1e]; // 0x5d2(0x1e)
	struct UClass* ComponentClass; // 0x5f0(0x08)
	struct FName FoliageCategory; // 0x5f8(0x08)
	bool bUseCustomizedHISMC; // 0x600(0x01)
	char pad_601[0x3]; // 0x601(0x03)
	int32_t TickInterval; // 0x604(0x04)
	char pad_608[0x258]; // 0x608(0x258)
	struct TWeakObjectPtr<struct UOpenWorldBillboardBatchComponent> BillboardBatcher; // 0x860(0x08)
	char pad_868[0x268]; // 0x868(0x268)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
