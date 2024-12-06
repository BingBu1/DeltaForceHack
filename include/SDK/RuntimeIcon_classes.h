
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class RuntimeIcon.AtalsMergeReq
// Size: 0x40 (Inherited: 0x30)
class UAtalsMergeReq : public UObject {
public:

	struct URuntimeTile* Tile; // 0x30(0x08)
	struct UTexture* Source; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class RuntimeIcon.RuntimeTile
// Size: 0x88 (Inherited: 0x30)
class URuntimeTile : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	uint64_t TileKey; // 0x38(0x08)
	struct UTexture* Source; // 0x40(0x08)
	struct FVector2D StartUV; // 0x48(0x08)
	struct FVector2D SizeUV; // 0x50(0x08)
	struct URuntimeAtlas* RuntimeAtlas; // 0x58(0x08)
	struct FVector2D RawStart; // 0x60(0x08)
	struct FVector2D RawSize; // 0x68(0x08)
	struct TArray<struct TWeakObjectPtr<struct UObject>> RefWeakObjects; // 0x70(0x10)
	bool bHigh; // 0x80(0x01)
	bool bTransToLinear; // 0x81(0x01)
	bool bIsMergeTile; // 0x82(0x01)
	bool bIsStaticIconDownsampled; // 0x83(0x01)
	bool bIsStaticIcon; // 0x84(0x01)
	bool bIsFixBlackLine; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class RuntimeIcon.RuntimeAtlas
// Size: 0xe0 (Inherited: 0x30)
class URuntimeAtlas : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct UTextureRenderTarget2D* AtlasRenderTarget2D; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
	struct TArray<struct UAtalsMergeReq*> PendingMergeTexs; // 0x48(0x10)
	char pad_58[0x38]; // 0x58(0x38)
	struct TMap<uint64_t, struct URuntimeTile*> AllTilesMap; // 0x90(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class RuntimeIcon.RuntimeIconManager
// Size: 0x108 (Inherited: 0x30)
class URuntimeIconManager : public UObject {
public:

	struct FRTIConfigParam RTIConfigParam; // 0x30(0x14)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct URuntimeAtlas*> AllRuntimeAtlasList_Merge; // 0x48(0x10)
	struct TArray<struct TWeakObjectPtr<struct URuntimeTile>> AllWeakTileList_Merge; // 0x58(0x10)
	struct TMap<uint64_t, struct TWeakObjectPtr<struct URuntimeTile>> AllWeakTileMap_DontMerge; // 0x68(0x50)
	char pad_B8[0x50]; // 0xb8(0x50)

	bool IsInGame(); // Function RuntimeIcon.RuntimeIconManager.IsInGame // (Final|Native|Public|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
