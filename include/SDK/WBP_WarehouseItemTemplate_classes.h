
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_WarehouseItemTemplate.WBP_WarehouseItemTemplate_C
// Size: 0x5a8 (Inherited: 0x550)
class UWBP_WarehouseItemTemplate_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* MainRoot_out; // 0x558(0x08)
	struct UDFImage* DFImage_Corners; // 0x560(0x08)
	/*struct UWBP_CommonHoverBg_C**/char WBP_CommonHoverBg[0x8]; // 0x568(0x08)
	/*struct UWBP_SlotCompIconLabel_C**/char wtBottomLeftIconText[0x8]; // 0x570(0x08)
	/*struct UWBP_SlotCompIconLabel_C**/char wtBottomRightIconText[0x8]; // 0x578(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x580(0x08)
	/*struct UWBP_SlotCompBg_C**/char wtItemBg[0x8]; // 0x588(0x08)
	/*struct UWBP_SlotCompIconImage_C**/char wtItemIcon[0x8]; // 0x590(0x08)
	/*struct UWBP_SlotCompQuality_C**/char wtItemQuality[0x8]; // 0x598(0x08)
	struct UClass* HoverBPClass; // 0x5a0(0x08)

	void PreConstruct(bool IsDesignTime); // Function WBP_WarehouseItemTemplate.WBP_WarehouseItemTemplate_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
