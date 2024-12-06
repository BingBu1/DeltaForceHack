
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_WarehouseEquipPanel.WBP_WarehouseEquipPanel_C
// Size: 0x630 (Inherited: 0x550)
class UWBP_WarehouseEquipPanel_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* OpenExpansionManager_in; // 0x558(0x08)
	struct UWidgetAnimation* OpenExpansionManager_out; // 0x560(0x08)
	struct UWidgetAnimation* WBP_WarehouseEquipPanel_out; // 0x568(0x08)
	struct UWidgetAnimation* WBP_WarehouseEquipPanel_in; // 0x570(0x08)
	struct UDFImage* DFImage_103; // 0x578(0x08)
	struct UTextBlock* TextBlock_165; // 0x580(0x08)
	/*struct UWBP_EquipmentOnLoan_C**/char WBP_EquipmentOnLoan[0x8]; // 0x588(0x08)
	struct UWBP_WarehouseEquipItemLoad_C* WBP_WarehouseEquipItemLoad; // 0x590(0x08)
	struct UWBP_WarehouseEquipSlotView_C* WBP_WarehouseEquipSlotView; // 0x598(0x08)
	struct UWBP_WarehouseEquipSlotView_C* WBP_WarehouseEquipSlotView_2; // 0x5a0(0x08)
	struct UWBP_WarehouseEquipSlotView_C* WBP_WarehouseEquipSlotView_3; // 0x5a8(0x08)
	struct UWBP_WarehouseEquipSlotView_C* WBP_WarehouseEquipSlotView_5; // 0x5b0(0x08)
	struct UWBP_WarehouseEquipSlotView_C* WBP_WarehouseEquipSlotView_9; // 0x5b8(0x08)
	struct UWBP_WarehouseEquipSlotView_C* WBP_WarehouseEquipSlotView_10; // 0x5c0(0x08)
	struct UWBP_WarehouseContainerPanel_C* wtBagContainerView; // 0x5c8(0x08)
	struct UWBP_WarehouseContainerPanel_C* wtCHContainerView; // 0x5d0(0x08)
	struct UWBP_DFSpecialTabV1GroupBoxList_C* wtDFSpecialTabV1GroupBoxList; // 0x5d8(0x08)
	struct UWBP_WarehouseScroll_C* wtDownMask; // 0x5e0(0x08)
	struct UDFRichTextBlock* wtEquipValueTxt; // 0x5e8(0x08)
	struct UDFHorizontalBox* wtEquipValueWidget; // 0x5f0(0x08)
	struct UWBP_KeyContainerView_C* wtKeyContainerView; // 0x5f8(0x08)
	struct UDFScrollBox* wtMainScrollBox; // 0x600(0x08)
	struct UWBP_WarehouseContainerPanel_C* wtPocketContainerView; // 0x608(0x08)
	struct UWBP_WarehouseSafeBoxItem_C* wtSafeBox; // 0x610(0x08)
	struct UWBP_WarehouseScroll_C* wtUpMask; // 0x618(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image[0x10]; // 0x620(0x10)

	void SetStyle(); // Function WBP_WarehouseEquipPanel.WBP_WarehouseEquipPanel_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffebfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
