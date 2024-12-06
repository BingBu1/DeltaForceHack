
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ShopItemTemplate.WBP_ShopItemTemplate_C
// Size: 0x5f8 (Inherited: 0x550)
class UWBP_ShopItemTemplate_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* Hightlight; // 0x558(0x08)
	struct UWidgetAnimation* WBP_ShopItemTemplate_in; // 0x560(0x08)
	struct UCanvasPanel* CanvasPanel_mask; // 0x568(0x08)
	struct UDFBackgroundBlur* DFBackgroundBlur_70; // 0x570(0x08)
	struct UDFImage* DFImage_PressedBg; // 0x578(0x08)
	struct UDFMImage* DFMImage_107; // 0x580(0x08)
	struct UDFScaleBox* DFScaleBox_1; // 0x588(0x08)
	struct UDFNamedSlot* LightEffectSlot; // 0x590(0x08)
	struct USizeBox* SizeBox_1; // 0x598(0x08)
	/*struct UWBP_CommonHoverBg_C**/char WBP_CommonHoverBg[0x8]; // 0x5a0(0x08)
	/*struct UWBP_SlotCompIconLabel_C**/char wtBottomLeftIconText[0x8]; // 0x5a8(0x08)
	/*struct UWBP_SlotCompIconLabel_C**/char wtBottomRightIconText[0x8]; // 0x5b0(0x08)
	struct UDFButton* wtButton_Item; // 0x5b8(0x08)
	struct UWVP_Common_DragSelectedBox_C* wtHighlight; // 0x5c0(0x08)
	/*struct UWBP_SlotCompIconImage_C**/char wtItemIcon[0x8]; // 0x5c8(0x08)
	/*struct UWBP_SlotCompQuality_C**/char wtItemQuality[0x8]; // 0x5d0(0x08)
	struct UDFTipsAnchor* wtTipAnchor; // 0x5d8(0x08)
	/*struct UWBP_SlotCompIconLabel_C**/char wtTopLeftIconText[0x8]; // 0x5e0(0x08)
	float BP_FreshInDelta; // 0x5e8(0x04)
	float BP_unlockNewDelta; // 0x5ec(0x04)
	struct UClass* HoverBPClass; // 0x5f0(0x08)

	void SetType(); // Function WBP_ShopItemTemplate.WBP_ShopItemTemplate_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
