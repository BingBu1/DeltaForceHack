/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif


namespace Dumper
{
	struct Function_Paper2D_PaperFlipbook_IsValidKeyFrameIndex_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_Paper2D_PaperFlipbookComponent_Stop_Param
	{
	public:

	};

	struct Function_Paper2D_PaperGroupedSpriteComponent_UpdateInstanceTransform_Param
	{
	public:

		int32_t InstanceIndex; // 0x00(0x04)
		char pad_4[0xc]; // 0x04(0x0c)
		struct FTransform NewInstanceTransform; // 0x10(0x30)
		bool bWorldSpace; // 0x40(0x01)
		bool bMarkRenderStateDirty; // 0x41(0x01)
		bool bTeleport; // 0x42(0x01)
		bool ReturnValue; // 0x43(0x01)
	};

	struct Function_Paper2D_PaperSpriteBlueprintLibrary_MakeBrushFromSprite_Param
	{
	public:

		struct UPaperSprite* Sprite; // 0x00(0x08)
		int32_t Width; // 0x08(0x04)
		int32_t Height; // 0x0c(0x04)
		struct FSlateBrush ReturnValue; // 0x10(0x90)
	};

	struct Function_Paper2D_PaperSpriteComponent_SetSpriteColor_Param
	{
	public:

		struct FLinearColor NewColor; // 0x00(0x10)
	};

	struct Function_Paper2D_PaperTerrainComponent_SetTerrainColor_Param
	{
	public:

		struct FLinearColor NewColor; // 0x00(0x10)
	};

	struct Function_Paper2D_PaperTileMapComponent_SetTileMapColor_Param
	{
	public:

		struct FLinearColor NewColor; // 0x00(0x10)
	};

	struct Function_Paper2D_TileMapBlueprintLibrary_MakeTile_Param
	{
	public:

		int32_t TileIndex; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UPaperTileSet* TileSet; // 0x08(0x08)
		bool bFlipH; // 0x10(0x01)
		bool bFlipV; // 0x11(0x01)
		bool bFlipD; // 0x12(0x01)
		char pad_13[0x5]; // 0x13(0x05)
		struct FPaperTileInfo ReturnValue; // 0x18(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
