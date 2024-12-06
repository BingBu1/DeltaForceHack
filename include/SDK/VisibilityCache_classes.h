
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class VisibilityCache.VisibilityCache
// Size: 0x1b0 (Inherited: 0x30)
class UVisibilityCache : public UObject {
public:

	float GridSize; // 0x30(0x04)
	float MinVisibilityRatio; // 0x34(0x04)
	bool bEnable; // 0x38(0x01)
	bool bUncachedInvisible; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TMap<struct FIntPoint, struct FGridVisibilityData> GridsVisibilityData; // 0x40(0x50)
	struct TMap<struct FName, uint16_t> NameIndexMap; // 0x90(0x50)
	int16_t ValidGridCount; // 0xe0(0x02)
	char pad_E2[0x2]; // 0xe2(0x02)
	struct FBox Range; // 0xe4(0x1c)
	int32_t GirdXYSize; // 0x100(0x04)
	int32_t GirdXSum; // 0x104(0x04)
	int32_t GirdYSum; // 0x108(0x04)
	char pad_10C[0xa4]; // 0x10c(0xa4)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class VisibilityCache.VcrCache
// Size: 0xa0 (Inherited: 0x30)
class UVcrCache : public UObject {
public:

	int16_t ValidGridCount; // 0x30(0x02)
	char pad_32[0x2]; // 0x32(0x02)
	struct FBox Range; // 0x34(0x1c)
	int32_t GirdXYSize; // 0x50(0x04)
	int32_t GirdXSum; // 0x54(0x04)
	int32_t GirdYSum; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FGridZList> GridZList; // 0x60(0x10)
	struct TArray<struct FGridID> GridID; // 0x70(0x10)
	struct TArray<struct FGridXYBitMask> GridXYBitMask; // 0x80(0x10)
	struct TArray<struct FGridXYResult> GridXYResult; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
