
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_AssemblyEquipSlotView.WBP_AssemblyEquipSlotView_C
// Size: 0x688 (Inherited: 0x550)
class UWBP_AssemblyEquipSlotView_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UImage* BoxLine; // 0x558(0x08)
	struct UDFCanvasPosReContainer* DFCanvasPosReContainer_1; // 0x560(0x08)
	struct UDFImage* DFImage; // 0x568(0x08)
	struct UDFImage* DFImage_2; // 0x570(0x08)
	struct UDFImage* DFImage_61; // 0x578(0x08)
	struct UDFSizeBox* DFSizeBox_89; // 0x580(0x08)
	struct UDFTextBlock* DFTextBlock_194; // 0x588(0x08)
	struct UDFTextBlock* DFTextBlock_233; // 0x590(0x08)
	struct UDFTextBlock* DFTextBlock_428; // 0x598(0x08)
	struct UDFVerticalBox* DFVerticalBox_1; // 0x5a0(0x08)
	struct UImage* Image_FX_01; // 0x5a8(0x08)
	struct UImage* Line_Mobile; // 0x5b0(0x08)
	struct UImage* Line_Pc; // 0x5b8(0x08)
	struct UImage* LockImahe; // 0x5c0(0x08)
	struct UDFImage* Reminder_Icon; // 0x5c8(0x08)
	/*struct UWBP_CommonHoverBg_C**/char WBP_CommonHoverBg_C_1[0x8]; // 0x5d0(0x08)
	struct UWBP_SlotCompShoppingCart_C* WBP_SlotCompShoppingCart; // 0x5d8(0x08)
	struct UImage* wtBgImg; // 0x5e0(0x08)
	/*struct UWBP_SlotCompIconLabel_C**/char wtBottomRightIconText[0x8]; // 0x5e8(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x5f0(0x08)
	struct UImage* wtEmptyIcon; // 0x5f8(0x08)
	struct UWVP_Common_DragSelectedBox_C* wtHighlight; // 0x600(0x08)
	/*struct UWBP_SlotCompQuality_C**/char wtItemQuality[0x8]; // 0x608(0x08)
	/*struct UWBP_SlotCompIconImage_C**/char wtMainIcon[0x8]; // 0x610(0x08)
	int32_t Bp_SlotType; // 0x618(0x04)
	int32_t BP_SlotGroup; // 0x61c(0x04)
	struct UPaperSprite* EmptyIcon; // 0x620(0x08)
	struct FText Text; // 0x628(0x18)
	int32_t Bp_AbnormalType; // 0x640(0x04)
	enum class ETipsDirection TipsDir; // 0x644(0x01)
	char pad_645[0x3]; // 0x645(0x03)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x648(0x10)
	int32_t Bp_Type; // 0x658(0x04)
	bool Lock; // 0x65c(0x01)
	char pad_65D[0x3]; // 0x65d(0x03)
	float IconScale; // 0x660(0x04)
	float ShadowScale; // 0x664(0x04)
	float Test; // 0x668(0x04)
	char pad_66C[0x4]; // 0x66c(0x04)
	struct FText TextDe; // 0x670(0x18)

	void PCAdaptation(); // Function WBP_AssemblyEquipSlotView.WBP_AssemblyEquipSlotView_C.PCAdaptation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
