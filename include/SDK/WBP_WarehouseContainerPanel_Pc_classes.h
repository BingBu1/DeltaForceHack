
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_WarehouseContainerPanel_Pc.WBP_WarehouseContainerPanel_Pc_C
// Size: 0x618 (Inherited: 0x550)
class UWBP_WarehouseContainerPanel_Pc_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_WarehouseSafeBoxItem_Pc_Hover; // 0x558(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x560(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_4; // 0x568(0x08)
	struct UDFCheckBox* DFCheckBox_300; // 0x570(0x08)
	struct UDFImage* DFImage; // 0x578(0x08)
	struct UDFNamedSlot* DFNamedSlot_Mask; // 0x580(0x08)
	struct UDFNamedSlot* DFNamedSlot_Search; // 0x588(0x08)
	struct UDFRichTextBlock* wtCapacityText; // 0x590(0x08)
	struct UDFTextBlock* wtColonText; // 0x598(0x08)
	struct UItemSlotView_C* wtContainerSlotView; // 0x5a0(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x5a8(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor_2; // 0x5b0(0x08)
	struct UWBP_WarehouseEquipSlotView_C* wtEquipSlotView; // 0x5b8(0x08)
	/*struct UWBP_DFCommonCheckInstruction_C**/char wtHoverBtn[0x8]; // 0x5c0(0x08)
	struct UDFTextBlock* wtTitleText; // 0x5c8(0x08)
	int32_t Type; // 0x5d0(0x04)
	char pad_5D4[0x4]; // 0x5d4(0x04)
	struct FText Title; // 0x5d8(0x18)
	struct UPaperSprite* EmptyIcon; // 0x5f0(0x08)
	int32_t Type_Equipment; // 0x5f8(0x04)
	bool Line; // 0x5fc(0x01)
	char pad_5FD[0x3]; // 0x5fd(0x03)
	int32_t SlotMaxPreviewSize; // 0x600(0x04)
	bool Location; // 0x604(0x01)
	char pad_605[0x3]; // 0x605(0x03)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image[0x10]; // 0x608(0x10)

	void SetLine(); // Function WBP_WarehouseContainerPanel_Pc.WBP_WarehouseContainerPanel_Pc_C.SetLine // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1985e672d
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
