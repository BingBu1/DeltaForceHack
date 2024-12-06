
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class OpenWorldOccluderStreaming.OpenWorldLandscapeOccluderComponent
// Size: 0x570 (Inherited: 0x560)
class UOpenWorldLandscapeOccluderComponent : public UPrimitiveComponent {
public:

	struct UOpenWorldOccluderAsset* OccluderAsset; // 0x560(0x08)
	char pad_568[0x8]; // 0x568(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldOccluderStreaming.OpenWorldOccluderAsset
// Size: 0xc0 (Inherited: 0x30)
class UOpenWorldOccluderAsset : public UObject {
public:

	char pad_30[0x30]; // 0x30(0x30)
	int32_t NumSubsections; // 0x60(0x04)
	int32_t SubsectionsSizeQuads; // 0x64(0x04)
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform Transform; // 0x70(0x30)
	struct FBoxSphereBounds Bounds; // 0xa0(0x1c)
	char pad_BC[0x4]; // 0xbc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class OpenWorldOccluderStreaming.OccluderAssetsStreamer
// Size: 0x620 (Inherited: 0x5d0)
class AOccluderAssetsStreamer : public AAssetsStreamer {
public:

	struct TMap<struct FString, struct UOpenWorldLandscapeOccluderComponent*> AssetToComponentMap; // 0x5d0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
