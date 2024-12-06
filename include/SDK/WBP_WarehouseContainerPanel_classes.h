
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_WarehouseContainerPanel.WBP_WarehouseContainerPanel_C
// Size: 0x610 (Inherited: 0x550)
class UWBP_WarehouseContainerPanel_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x558(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_2; // 0x560(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_1; // 0x568(0x08)
	struct UDFImage* DFImage_Line; // 0x570(0x08)
	struct UDFImage* DFImage_Line_5; // 0x578(0x08)
	struct UDFImage* DFImage_LineRental; // 0x580(0x08)
	struct UDFNamedSlot* DFNamedSlot_Search; // 0x588(0x08)
	struct UHorizontalBox* HorizontalBox_5; // 0x590(0x08)
	struct UDFRichTextBlock* wtCapacityText; // 0x598(0x08)
	struct UDFTextBlock* wtColonText; // 0x5a0(0x08)
	struct UItemSlotView_C* wtContainerSlotView; // 0x5a8(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x5b0(0x08)
	struct UWBP_WarehouseEquipSlotView_C* wtEquipSlotView; // 0x5b8(0x08)
	/*struct UWBP_DFCommonCheckInstruction_C**/char wtHoverBtn[0x8]; // 0x5c0(0x08)
	struct UDFTextBlock* wtTitleText; // 0x5c8(0x08)
	struct FText Title; // 0x5d0(0x18)
	struct UPaperSprite* EmptyIcon; // 0x5e8(0x08)
	int32_t Type_Equipment; // 0x5f0(0x04)
	int32_t SlotMaxPreviewSize; // 0x5f4(0x04)
	bool Tag; // 0x5f8(0x01)
	char pad_5F9[0x7]; // 0x5f9(0x07)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image[0x10]; // 0x600(0x10)

	void SetTag(bool Tag); // Function WBP_WarehouseContainerPanel.WBP_WarehouseContainerPanel_C.SetTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xdbe4a36cf202012a
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
