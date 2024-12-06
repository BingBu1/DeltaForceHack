
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_WarehouseExpansionManagerItem.WBP_WarehouseExpansionManagerItem_C
// Size: 0x614 (Inherited: 0x550)
class UWBP_WarehouseExpansionManagerItem_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_WarehouseExpansionManagerItemDrag_Out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_WarehouseExpansionManagerItemDrag_in; // 0x560(0x08)
	struct UWidgetAnimation* WBP_WarehouseExpansionManagerItem_out; // 0x568(0x08)
	struct UWidgetAnimation* WBP_WarehouseExpansionManagerItem_in; // 0x570(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x578(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_3; // 0x580(0x08)
	struct UDFImage* DFImage_71; // 0x588(0x08)
	struct UDFImage* DFImage_129; // 0x590(0x08)
	struct UDFMImage* DFMImage_58; // 0x598(0x08)
	struct UImage* Image; // 0x5a0(0x08)
	struct UImage* Image_31; // 0x5a8(0x08)
	struct UImage* Image_119; // 0x5b0(0x08)
	struct UImage* Image_144; // 0x5b8(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_2; // 0x5c0(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_3; // 0x5c8(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover[0x8]; // 0x5d0(0x08)
	struct UWBP_ReorderableListDragArea_C* wtDragArea; // 0x5d8(0x08)
	struct UWVP_Common_DragSelectedBox_C* wtHighlight; // 0x5e0(0x08)
	struct UWBP_ExpansionType_C* wtItemIconBP; // 0x5e8(0x08)
	/*struct UWBP_CommonOthersPoint_C**/char wtLvlUpIcon[0x8]; // 0x5f0(0x08)
	struct UDFButton* wtMainBtn; // 0x5f8(0x08)
	/*struct UWBP_SlotCompQuality_C**/char wtQualityBp[0x8]; // 0x600(0x08)
	struct UWBP_SlotCompDecBtn_C* wtUnEquipBtn; // 0x608(0x08)
	int32_t BpType; // 0x610(0x04)

	void BP_SetStyle(); // Function WBP_WarehouseExpansionManagerItem.WBP_WarehouseExpansionManagerItem_C.BP_SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xc0000001
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
