
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_KeyContainerView.WBP_KeyContainerView_C
// Size: 0x5b8 (Inherited: 0x550)
class UWBP_KeyContainerView_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCheckBox* CheckBoxInternal; // 0x558(0x08)
	struct UDFImage* DFImage_Arrow; // 0x560(0x08)
	struct UDFImage* DFImage_Line; // 0x568(0x08)
	struct UDFImage* DFImage_Line_5; // 0x570(0x08)
	struct UDFVerticalBox* DFVerticalBox_1; // 0x578(0x08)
	struct UDFNamedSlot* KeyContainerSlot; // 0x580(0x08)
	struct UWBP_WarehouseEquipSlotView_C* keyEquipSlotView; // 0x588(0x08)
	struct UDFTextBlock* TextBlock_3; // 0x590(0x08)
	/*struct UWBP_DFCommonCheckInstruction_C**/char wtCommonCheckInstruction[0x8]; // 0x598(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x5a0(0x08)
	struct UDFRichTextBlock* wtKeysNum; // 0x5a8(0x08)
	struct UDFVerticalBox* wtSubViewRoot; // 0x5b0(0x08)

	void ArrowCheckStyle(bool Checked); // Function WBP_KeyContainerView.WBP_KeyContainerView_C.ArrowCheckStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
