
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_KeyContainerView_Pc.WBP_KeyContainerView_Pc_C
// Size: 0x598 (Inherited: 0x550)
class UWBP_KeyContainerView_Pc_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFBorder* DFBorder_1; // 0x558(0x08)
	struct UDFImage* DFImage; // 0x560(0x08)
	struct UDFNamedSlot* KeyContainerSlot; // 0x568(0x08)
	struct UDFTextBlock* TextBlock_3; // 0x570(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x578(0x08)
	struct UWBP_WarehouseEquipSlotView_C* wtEquipSlotView; // 0x580(0x08)
	/*struct UWBP_DFCommonCheckInstruction_C**/char wtHoverBtn[0x8]; // 0x588(0x08)
	struct UDFVerticalBox* wtKeyContainerRoot; // 0x590(0x08)

	void ArrowCheckStyle(bool Checked); // Function WBP_KeyContainerView_Pc.WBP_KeyContainerView_Pc_C.ArrowCheckStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0740065
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
