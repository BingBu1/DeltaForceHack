
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_WarehouseSafeBoxItem_Pc.WBP_WarehouseSafeBoxItem_Pc_C
// Size: 0x5c0 (Inherited: 0x550)
class UWBP_WarehouseSafeBoxItem_Pc_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_WarehouseSafeBoxItem_Pc_Hover; // 0x558(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x560(0x08)
	struct UDFImage* DFImage; // 0x568(0x08)
	struct UDFNamedSlot* DFNamedSlot_Mask; // 0x570(0x08)
	/*struct UWBP_CommonHoverBg_C**/char WBP_CommonHoverBg[0x8]; // 0x578(0x08)
	struct UDFRichTextBlock* wtBoxCapacity; // 0x580(0x08)
	struct UItemSlotView_C* wtBoxSubSlotView; // 0x588(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x590(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor_2; // 0x598(0x08)
	struct UWBP_WarehouseEquipSlotView_C* wtEquipSlotView; // 0x5a0(0x08)
	struct UDFCheckBox* wtFixedCheckBox; // 0x5a8(0x08)
	/*struct UWBP_DFCommonCheckInstruction_C**/char wtTipsCheckBox[0x8]; // 0x5b0(0x08)
	int32_t Type; // 0x5b8(0x04)
	int32_t Type_Equipment; // 0x5bc(0x04)

	void SetStyle(); // Function WBP_WarehouseSafeBoxItem_Pc.WBP_WarehouseSafeBoxItem_Pc_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffebfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
