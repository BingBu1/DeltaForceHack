
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_WarehouseWithTab_Pc.WBP_WarehouseWithTab_Pc_C
// Size: 0x608 (Inherited: 0x550)
class UWBP_WarehouseWithTab_Pc_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* OpenExpansionManager_in; // 0x558(0x08)
	struct UWidgetAnimation* WBP_WarehouseWithTab_out; // 0x560(0x08)
	struct UWidgetAnimation* WBP_WarehouseWithTab_in; // 0x568(0x08)
	struct UWidgetAnimation* OpenExpansionManager_out; // 0x570(0x08)
	struct UWidgetAnimation* In_Anim; // 0x578(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_1; // 0x580(0x08)
	struct UDFImage* DFImage_307; // 0x588(0x08)
	struct UDFImage* DFImage_480; // 0x590(0x08)
	struct UDFImage* DFImage_Line; // 0x598(0x08)
	struct UNamedSlot* NamedSlot_84; // 0x5a0(0x08)
	struct UDFNamedSlot* Slot_Warehouse_ExtArrange; // 0x5a8(0x08)
	struct UDFNamedSlot* Slot_Warehouse_SellSub; // 0x5b0(0x08)
	struct UWBP_HUCommonBlur_V4_C* WBP_HUCommonBlur_V4; // 0x5b8(0x08)
	struct UDFScrollBox* wtDepositTabScrollBox; // 0x5c0(0x08)
	struct UWBP_WarehouseWithTabButton_C* wtExtArrangeBtn; // 0x5c8(0x08)
	struct UWBP_WarehouseWithTabButton_C* wtExtManageBtn; // 0x5d0(0x08)
	struct UCanvasPanel* wtExtPanel; // 0x5d8(0x08)
	struct UImage* wtMaskImg1; // 0x5e0(0x08)
	struct UWBP_WarehouseWithTabButton_C* wtSellBtn; // 0x5e8(0x08)
	struct UWBP_Warehouse_C* wtWarehouse; // 0x5f0(0x08)
	struct UCanvasPanel* wtWarehouseTab; // 0x5f8(0x08)
	struct UWBP_WarehouseWithTabButton_C* wtWishListBtn; // 0x600(0x08)

	void PlayInAnim(); // Function WBP_WarehouseWithTab_Pc.WBP_WarehouseWithTab_Pc_C.PlayInAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3cc71c70c0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
