
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_WarehouseSafeBoxItem.WBP_WarehouseSafeBoxItem_C
// Size: 0x5ac (Inherited: 0x550)
class UWBP_WarehouseSafeBoxItem_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_4; // 0x558(0x08)
	struct UDFImage* DFImage_Line; // 0x560(0x08)
	struct UDFImage* DFImage_Line_3; // 0x568(0x08)
	struct UDFNamedSlot* Slot_Warehouse_WarehouseMask; // 0x570(0x08)
	struct UDFRichTextBlock* wtBoxCapacity; // 0x578(0x08)
	struct UItemSlotView_C* wtBoxSubSlotView; // 0x580(0x08)
	struct UDFTextBlock* wtBoxTitle; // 0x588(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x590(0x08)
	struct UWBP_WarehouseEquipSlotView_C* wtEquipSlotView; // 0x598(0x08)
	/*struct UWBP_DFCommonCheckInstruction_C**/char wtTipsCheckBox[0x8]; // 0x5a0(0x08)
	int32_t Type_Equipment; // 0x5a8(0x04)

	void SetType(); // Function WBP_WarehouseSafeBoxItem.WBP_WarehouseSafeBoxItem_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
