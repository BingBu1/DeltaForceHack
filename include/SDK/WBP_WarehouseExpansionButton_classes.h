
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_WarehouseExpansionButton.WBP_WarehouseExpansionButton_C
// Size: 0x6d9 (Inherited: 0x550)
class UWBP_WarehouseExpansionButton_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_WarehouseExpansionButton_Expansion; // 0x558(0x08)
	struct UWidgetAnimation* WBP_WarehouseExpansionButton_left_out; // 0x560(0x08)
	struct UWidgetAnimation* WBP_WarehouseExpansionButton_left_in; // 0x568(0x08)
	struct UWidgetAnimation* Anima_Decrease_Out; // 0x570(0x08)
	struct UWidgetAnimation* Anima_Increase_Out; // 0x578(0x08)
	struct UWidgetAnimation* Anima_Decrease_In; // 0x580(0x08)
	struct UWidgetAnimation* Anima_Increase_In; // 0x588(0x08)
	struct UCanvasPanel* CanvasPanel_20; // 0x590(0x08)
	struct UCanvasPanel* CanvasPanel_152; // 0x598(0x08)
	struct UCanvasPanel* CanvasPanel_Icon; // 0x5a0(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_Quality; // 0x5a8(0x08)
	struct UDFImage* DFImage; // 0x5b0(0x08)
	struct UDFImage* DFImage_87; // 0x5b8(0x08)
	struct UDFImage* DFImage_Expansion; // 0x5c0(0x08)
	struct UDFImage* DFImage_Lock; // 0x5c8(0x08)
	struct UDFImage* DFImage_Num; // 0x5d0(0x08)
	struct UDFImage* DFImage_Num_Shadow; // 0x5d8(0x08)
	struct UDFSizeBox* DFSizeBox_1; // 0x5e0(0x08)
	struct UDFTipsAnchor* DFTipsAnchor; // 0x5e8(0x08)
	struct UImage* Image_2; // 0x5f0(0x08)
	struct UImage* Image_50; // 0x5f8(0x08)
	struct UImage* Image_01; // 0x600(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox; // 0x608(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x610(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_2; // 0x618(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_3; // 0x620(0x08)
	struct UPlatformSizeBox* PlatformSizeBox_2; // 0x628(0x08)
	/*struct UWBP_CommonHoverBg_C**/char WBP_CommonHoverBg[0x8]; // 0x630(0x08)
	struct UWBP_SlotCompGreyMask_C* WBP_SlotCompGreyMask; // 0x638(0x08)
	/*struct UWBP_SlotCompQuality_C**/char wtBgImg[0x8]; // 0x640(0x08)
	struct UImage* wtBottomLine; // 0x648(0x08)
	struct UImage* wtCapacityChangeIcon; // 0x650(0x08)
	struct UTextBlock* wtCapacityChangeNum; // 0x658(0x08)
	struct UWBP_ReorderableListDragArea_C* wtDragArea; // 0x660(0x08)
	struct UDFTextBlock* wtExtName; // 0x668(0x08)
	struct UWVP_Common_DragSelectedBox_C* wtHighlight; // 0x670(0x08)
	struct UImage* wtIconImg; // 0x678(0x08)
	struct UWBP_SlotCompDecBtn_C* wtRemoveBtn; // 0x680(0x08)
	struct UWBP_SlotCompMultiSelected_C* wtSelectCheckBox; // 0x688(0x08)
	int32_t Type; // 0x690(0x04)
	int32_t NumType; // 0x694(0x04)
	bool Seleted; // 0x698(0x01)
	char pad_699[0x7]; // 0x699(0x07)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char BpRefImage[0x10]; // 0x6a0(0x10)
	bool Replacement; // 0x6b0(0x01)
	char pad_6B1[0x7]; // 0x6b1(0x07)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char NumImage[0x10]; // 0x6b8(0x10)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image[0x10]; // 0x6c8(0x10)
	bool Bright; // 0x6d8(0x01)

	void BPSetType(int32_t NumType); // Function WBP_WarehouseExpansionButton.WBP_WarehouseExpansionButton_C.BPSetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
