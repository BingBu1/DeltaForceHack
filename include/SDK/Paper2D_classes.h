
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class Paper2D.MaterialExpressionSpriteTextureSampler
// Size: 0x120 (Inherited: 0x100)
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D {
public:

	bool bSampleAdditionalTextures; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	int32_t AdditionalSlotIndex; // 0x104(0x04)
	struct FText SlotDisplayName; // 0x108(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperCharacter
// Size: 0x7a0 (Inherited: 0x798)
class APaperCharacter : public ACHARACTER {
public:

	struct UPaperFlipbookComponent* Sprite; // 0x798(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperFlipbook
// Size: 0x58 (Inherited: 0x30)
class UPaperFlipbook : public UObject {
public:

	float FramesPerSecond; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FPaperFlipbookKeyFrame> KeyFrames; // 0x38(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x48(0x08)
	enum class EFlipbookCollisionMode CollisionSource; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	bool IsValidKeyFrameIndex(int32_t Index); // Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperFlipbookActor
// Size: 0x380 (Inherited: 0x378)
class APaperFlipbookActor : public AActor {
public:

	struct UPaperFlipbookComponent* RenderComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperFlipbookComponent
// Size: 0x710 (Inherited: 0x6c8)
class UPaperFlipbookComponent : public UMeshComponent {
public:

	struct UPaperFlipbook* SourceFlipbook; // 0x6c8(0x08)
	struct UMaterialInterface* Material; // 0x6d0(0x08)
	float PlayRate; // 0x6d8(0x04)
	char bLooping : 1; // 0x6dc(0x01)
	char bReversePlayback : 1; // 0x6dc(0x01)
	char bPlaying : 1; // 0x6dc(0x01)
	char pad_6DC_3 : 5; // 0x6dc(0x01)
	char pad_6DD[0x3]; // 0x6dd(0x03)
	float AccumulatedTime; // 0x6e0(0x04)
	int32_t CachedFrameIndex; // 0x6e4(0x04)
	struct FLinearColor SpriteColor; // 0x6e8(0x10)
	struct UBodySetup* CachedBodySetup; // 0x6f8(0x08)
	/*struct FMulticastInlineDelegate*/char OnFinishedPlaying[0x10]; // 0x700(0x10)

	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x380 (Inherited: 0x378)
class APaperGroupedSpriteActor : public AActor {
public:

	struct UPaperGroupedSpriteComponent* RenderComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperGroupedSpriteComponent
// Size: 0x700 (Inherited: 0x6c8)
class UPaperGroupedSpriteComponent : public UMeshComponent {
public:

	struct TArray<struct UMaterialInterface*> InstanceMaterials; // 0x6c8(0x10)
	struct TArray<struct FSpriteInstanceData> PerInstanceSpriteData; // 0x6d8(0x10)
	char pad_6E8[0x18]; // 0x6e8(0x18)

	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperRuntimeSettings
// Size: 0x38 (Inherited: 0x30)
class UPaperRuntimeSettings : public UObject {
public:

	bool bEnableSpriteAtlasGroups; // 0x30(0x01)
	bool bEnableTerrainSplineEditing; // 0x31(0x01)
	bool bResizeSpriteDataToMatchTextures; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperSprite
// Size: 0xb8 (Inherited: 0x30)
class UPaperSprite : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)
	struct TArray<struct UTexture*> AdditionalSourceTextures; // 0x40(0x10)
	struct FVector2D BakedSourceUV; // 0x50(0x08)
	struct FVector2D BakedSourceDimension; // 0x58(0x08)
	struct UTexture2D* BakedSourceTexture; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x70(0x08)
	struct UMaterialInterface* AlternateMaterial; // 0x78(0x08)
	struct TArray<struct FPaperSpriteSocket> Sockets; // 0x80(0x10)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float PixelsPerUnrealUnit; // 0x94(0x04)
	struct UBodySetup* BodySetup; // 0x98(0x08)
	char bCanBeAddToCluster : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t AlternateMaterialSplitIndex; // 0xa4(0x04)
	struct TArray<struct FVector4> BakedRenderData; // 0xa8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperSpriteActor
// Size: 0x380 (Inherited: 0x378)
class APaperSpriteActor : public AActor {
public:

	struct UPaperSpriteComponent* RenderComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperSpriteAtlas
// Size: 0x30 (Inherited: 0x30)
class UPaperSpriteAtlas : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperSpriteBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	struct FSlateBrush STATIC_MakeBrushFromSprite(struct UPaperSprite* Sprite, int32_t Width, int32_t Height); // Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperSpriteComponent
// Size: 0x6f0 (Inherited: 0x6c8)
class UPaperSpriteComponent : public UMeshComponent {
public:

	struct UPaperSprite* SourceSprite; // 0x6c8(0x08)
	struct UMaterialInterface* MaterialOverride; // 0x6d0(0x08)
	struct FLinearColor SpriteColor; // 0x6d8(0x10)
	char pad_6E8[0x8]; // 0x6e8(0x08)

	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperSpriteComponent.SetSpriteColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperTerrainActor
// Size: 0x390 (Inherited: 0x378)
class APaperTerrainActor : public AActor {
public:

	struct USceneComponent* DummyRoot; // 0x378(0x08)
	struct UPaperTerrainSplineComponent* SplineComponent; // 0x380(0x08)
	struct UPaperTerrainComponent* RenderComponent; // 0x388(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperTerrainComponent
// Size: 0x5c0 (Inherited: 0x560)
class UPaperTerrainComponent : public UPrimitiveComponent {
public:

	struct UPaperTerrainMaterial* TerrainMaterial; // 0x560(0x08)
	bool bClosedSpline; // 0x568(0x01)
	bool bFilledSpline; // 0x569(0x01)
	char pad_56A[0x6]; // 0x56a(0x06)
	struct UPaperTerrainSplineComponent* AssociatedSpline; // 0x570(0x08)
	int32_t RandomSeed; // 0x578(0x04)
	float SegmentOverlapAmount; // 0x57c(0x04)
	struct FLinearColor TerrainColor; // 0x580(0x10)
	int32_t ReparamStepsPerSegment; // 0x590(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x594(0x01)
	char pad_595[0x3]; // 0x595(0x03)
	float CollisionThickness; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct UBodySetup* CachedBodySetup; // 0x5a0(0x08)
	char pad_5A8[0x18]; // 0x5a8(0x18)

	void SetTerrainColor(struct FLinearColor NewColor); // Function Paper2D.PaperTerrainComponent.SetTerrainColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperTerrainMaterial
// Size: 0x50 (Inherited: 0x38)
class UPaperTerrainMaterial : public UDataAsset {
public:

	struct TArray<struct FPaperTerrainMaterialRule> Rules; // 0x38(0x10)
	struct UPaperSprite* InteriorFill; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperTerrainSplineComponent
// Size: 0x660 (Inherited: 0x650)
class UPaperTerrainSplineComponent : public USplineComponent {
public:

	char pad_650[0x10]; // 0x650(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperTileLayer
// Size: 0xa0 (Inherited: 0x30)
class UPaperTileLayer : public UObject {
public:

	struct FText LayerName; // 0x30(0x18)
	int32_t LayerWidth; // 0x48(0x04)
	int32_t LayerHeight; // 0x4c(0x04)
	char bHiddenInGame : 1; // 0x50(0x01)
	char bLayerCollides : 1; // 0x50(0x01)
	char bOverrideCollisionThickness : 1; // 0x50(0x01)
	char bOverrideCollisionOffset : 1; // 0x50(0x01)
	char pad_50_4 : 4; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float CollisionThicknessOverride; // 0x54(0x04)
	float CollisionOffsetOverride; // 0x58(0x04)
	struct FLinearColor LayerColor; // 0x5c(0x10)
	int32_t AllocatedWidth; // 0x6c(0x04)
	int32_t AllocatedHeight; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FPaperTileInfo> AllocatedCells; // 0x78(0x10)
	struct UPaperTileSet* TileSet; // 0x88(0x08)
	struct TArray<int32_t> AllocatedGrid; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperTileMap
// Size: 0xb0 (Inherited: 0x30)
class UPaperTileMap : public UObject {
public:

	int32_t MapWidth; // 0x30(0x04)
	int32_t MapHeight; // 0x34(0x04)
	int32_t TileWidth; // 0x38(0x04)
	int32_t TileHeight; // 0x3c(0x04)
	float PixelsPerUnrealUnit; // 0x40(0x04)
	float SeparationPerTileX; // 0x44(0x04)
	float SeparationPerTileY; // 0x48(0x04)
	float SeparationPerLayer; // 0x4c(0x04)
	/*struct TSoftObjectPtr<UPaperTileSet>*/char SelectedTileSet[0x28]; // 0x50(0x28)
	struct UMaterialInterface* Material; // 0x78(0x08)
	struct TArray<struct UPaperTileLayer*> TileLayers; // 0x80(0x10)
	float CollisionThickness; // 0x90(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x94(0x01)
	enum class ETileMapProjectionMode ProjectionMode; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
	int32_t HexSideLength; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct UBodySetup* BodySetup; // 0xa0(0x08)
	int32_t LayerNameIndex; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperTileMapActor
// Size: 0x380 (Inherited: 0x378)
class APaperTileMapActor : public AActor {
public:

	struct UPaperTileMapComponent* RenderComponent; // 0x378(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperTileMapComponent
// Size: 0x720 (Inherited: 0x6c8)
class UPaperTileMapComponent : public UMeshComponent {
public:

	int32_t MapWidth; // 0x6c8(0x04)
	int32_t MapHeight; // 0x6cc(0x04)
	int32_t TileWidth; // 0x6d0(0x04)
	int32_t TileHeight; // 0x6d4(0x04)
	struct UPaperTileSet* DefaultLayerTileSet; // 0x6d8(0x08)
	struct UMaterialInterface* Material; // 0x6e0(0x08)
	struct TArray<struct UPaperTileLayer*> TileLayers; // 0x6e8(0x10)
	struct FLinearColor TileMapColor; // 0x6f8(0x10)
	int32_t UseSingleLayerIndex; // 0x708(0x04)
	bool bUseSingleLayer; // 0x70c(0x01)
	char pad_70D[0x3]; // 0x70d(0x03)
	struct UPaperTileMap* TileMap; // 0x710(0x08)
	char pad_718[0x8]; // 0x718(0x08)

	void SetTileMapColor(struct FLinearColor NewColor); // Function Paper2D.PaperTileMapComponent.SetTileMapColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.PaperTileSet
// Size: 0xb0 (Inherited: 0x30)
class UPaperTileSet : public UObject {
public:

	struct FIntPoint TileSize; // 0x30(0x08)
	struct UTexture2D* TileSheet; // 0x38(0x08)
	struct TArray<struct UTexture*> AdditionalSourceTextures; // 0x40(0x10)
	struct FIntMargin BorderMargin; // 0x50(0x10)
	struct FIntPoint PerTileSpacing; // 0x60(0x08)
	struct FIntPoint DrawingOffset; // 0x68(0x08)
	int32_t WidthInTiles; // 0x70(0x04)
	int32_t HeightInTiles; // 0x74(0x04)
	int32_t AllocatedWidth; // 0x78(0x04)
	int32_t AllocatedHeight; // 0x7c(0x04)
	struct TArray<struct FPaperTileMetadata> PerTileData; // 0x80(0x10)
	struct TArray<struct FPaperTileSetTerrain> Terrains; // 0x90(0x10)
	int32_t TileWidth; // 0xa0(0x04)
	int32_t TileHeight; // 0xa4(0x04)
	int32_t Margin; // 0xa8(0x04)
	int32_t Spacing; // 0xac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class Paper2D.TileMapBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary {
public:


	struct FPaperTileInfo STATIC_MakeTile(int32_t TileIndex, struct UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD); // Function Paper2D.TileMapBlueprintLibrary.MakeTile // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
