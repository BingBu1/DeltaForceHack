
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class OpenWorldSpatialPrecomputedVisibility.SpatialPrecomputedVisibilityController
// Size: 0x390 (Inherited: 0x378)
class ASpatialPrecomputedVisibilityController : public AActor {
public:

	struct UOpenWorldSpatialPrecomputedVisibilityBuildInfo* BuildInfo; // 0x378(0x08)
	char pad_380[0x10]; // 0x380(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldSpatialPrecomputedVisibility.SpatialPrecomputedVisibilityAssetsStreamer
// Size: 0x630 (Inherited: 0x5d0)
class ASpatialPrecomputedVisibilityAssetsStreamer : public AAssetsStreamer {
public:

	char pad_5D0[0x8]; // 0x5d0(0x08)
	/*struct TSet<struct UObject*>*/char PreloadedAssets[0x50]; // 0x5d8(0x50)
	char pad_628[0x8]; // 0x628(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldSpatialPrecomputedVisibility.SpatialPrecomputedVisibilityLocationMappingStreamer
// Size: 0x5e0 (Inherited: 0x5d0)
class ASpatialPrecomputedVisibilityLocationMappingStreamer : public AAssetsStreamer {
public:

	char pad_5D0[0x10]; // 0x5d0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldSpatialPrecomputedVisibility.OpenWorldSpatialPrecomputedVisibilityBuildInfo
// Size: 0x40 (Inherited: 0x30)
class UOpenWorldSpatialPrecomputedVisibilityBuildInfo : public UObject {
public:

	int32_t LocationMappingBlockSize; // 0x30(0x04)
	int32_t VisibilityBlockSize; // 0x34(0x04)
	int32_t CellSizeXY; // 0x38(0x04)
	int32_t CellSizeZ; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldSpatialPrecomputedVisibility.OpenWorldSpatialPrecomputedVisibilityBlockAsset
// Size: 0xa8 (Inherited: 0x30)
class UOpenWorldSpatialPrecomputedVisibilityBlockAsset : public UObject {
public:

	char pad_30[0x78]; // 0x30(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldSpatialPrecomputedVisibility.OpenWorldSpatialPrecomputedVisibilityLocationMappingBlockAsset
// Size: 0x80 (Inherited: 0x30)
class UOpenWorldSpatialPrecomputedVisibilityLocationMappingBlockAsset : public UObject {
public:

	char pad_30[0x50]; // 0x30(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
