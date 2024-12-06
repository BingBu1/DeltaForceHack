
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_WarehouseEquipSlotView.WBP_WarehouseEquipSlotView_C
// Size: 0x5dc (Inherited: 0x550)
class UWBP_WarehouseEquipSlotView_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFBlurSlotReContainer* DFBlurSlotReContainer_151; // 0x558(0x08)
	struct UDFImage* DFImage_Bg; // 0x560(0x08)
	struct UDFImage* wtBgImg; // 0x568(0x08)
	struct UImage* wtEmptyIcon; // 0x570(0x08)
	struct UScaleBox* wtEmptyIconRoot; // 0x578(0x08)
	struct UDFTextBlock* wtEmptyTxt_Pc; // 0x580(0x08)
	struct UWVP_Common_DragSelectedBox_C* wtHighlight; // 0x588(0x08)
	struct UWBP_WarehouseItemTemplate_C* wtMainItem; // 0x590(0x08)
	int32_t Bp_SlotType; // 0x598(0x04)
	int32_t BP_SlotGroup; // 0x59c(0x04)
	int32_t Type; // 0x5a0(0x04)
	char pad_5A4[0x4]; // 0x5a4(0x04)
	struct UPaperSprite* EmptyIcon; // 0x5a8(0x08)
	struct FText Title; // 0x5b0(0x18)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image[0x10]; // 0x5c8(0x10)
	int32_t size; // 0x5d8(0x04)

	void SetSize(int32_t size); // Function WBP_WarehouseEquipSlotView.WBP_WarehouseEquipSlotView_C.SetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c000003e
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
