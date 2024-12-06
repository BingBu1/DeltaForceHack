
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Shop_Main.WBP_Shop_Main_C
// Size: 0x62c (Inherited: 0x550)
class UWBP_Shop_Main_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Shop_Main_in; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Shop_Main_out; // 0x560(0x08)
	struct UWidgetAnimation* Anim_BG; // 0x568(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x570(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x578(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_179; // 0x580(0x08)
	struct UDFSizeBox* DFSizeBox_1; // 0x588(0x08)
	struct UDFNamedSlot* NamedSlot_ShopMask; // 0x590(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x598(0x08)
	struct UPlatformSizeBox* PlatformPaddingBox_PC4; // 0x5a0(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_Pc5; // 0x5a8(0x08)
	struct UWBP_Shop_DropDownBox_C* WBP_Shop_DropDownBox; // 0x5b0(0x08)
	struct UWBP_Shop_MerchantContent_C* WBP_Shop_MerchantContent; // 0x5b8(0x08)
	struct UWBP_Shop_MerchantDetail_C* WBP_Shop_MerchantDetail; // 0x5c0(0x08)
	struct UWBP_Shop_MerchantContent_C* WBP_Shop_MysteryContent; // 0x5c8(0x08)
	struct UDFImage* wtDFImage_EmptyBorder; // 0x5d0(0x08)
	bool Type_Color; // 0x5d8(0x01)
	char pad_5D9[0x3]; // 0x5d9(0x03)
	struct FLinearColor BP_Color_De_Center; // 0x5dc(0x10)
	struct FLinearColor BP_Color_De_Right; // 0x5ec(0x10)
	struct FMargin BP_spaceOffset; // 0x5fc(0x10)
	struct FMargin BP_spaceOffsetWithoutDropDownBox; // 0x60c(0x10)
	struct FMargin BP_spaceOffsetOfMystery; // 0x61c(0x10)

	void PC_Adaptation(); // Function WBP_Shop_Main.WBP_Shop_Main_C.PC_Adaptation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffcc0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
