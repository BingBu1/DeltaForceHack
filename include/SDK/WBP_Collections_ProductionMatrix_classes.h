
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Collections_ProductionMatrix.WBP_Collections_ProductionMatrix_C
// Size: 0x62c (Inherited: 0x550)
class UWBP_Collections_ProductionMatrix_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Collections_ProductionMatrix_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Collections_ProductionMatrix_in; // 0x560(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_205; // 0x568(0x08)
	struct UDFImage* DFImage; // 0x570(0x08)
	struct UDFImage* DFImage_115; // 0x578(0x08)
	struct UDFImage* DFImage_445; // 0x580(0x08)
	struct UDFTextBlock* DFTextBlock_116; // 0x588(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox; // 0x590(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x598(0x08)
	struct UImage* wtBgImg; // 0x5a0(0x08)
	struct UWBP_Common_ScaleBg_C* wtBgImgRoot; // 0x5a8(0x08)
	/*struct UWBP_DFCommonButtonV3S1_C**/char wtClearTargetListBtn[0x8]; // 0x5b0(0x08)
	/*struct UWBP_DFCommonDropDownBox_C**/char wtDropDown[0x8]; // 0x5b8(0x08)
	struct UDFButton* wtEmptyBtn; // 0x5c0(0x08)
	/*struct UWBP_DFCommonButtonV1S2_C**/char wtFillTargetListBtn[0x8]; // 0x5c8(0x08)
	/*struct UWBP_DFCommonButtonV3S1_C**/char wtFilterBtn[0x8]; // 0x5d0(0x08)
	struct UDFImage* wtQualityIcon; // 0x5d8(0x08)
	/*struct UWBP_DFCommonButtonV1S1_C**/char wtRecombineBtn[0x8]; // 0x5e0(0x08)
	struct UWVP_Common_DragSelectedBox_C* wtSourceDragSelectBox; // 0x5e8(0x08)
	/*struct UWBP_Common_NoAnything_C**/char wtSourceEmptyHint[0x8]; // 0x5f0(0x08)
	struct UDFScrollGridBox* wtSourceWeaponSkinGridBox; // 0x5f8(0x08)
	struct UWVP_Common_DragSelectedBox_C* wtTargetDragSelectBox; // 0x600(0x08)
	/*struct UWBP_Common_NoAnything_C**/char wtTargetEmptyHint[0x8]; // 0x608(0x08)
	struct UDFScrollGridBox* wtTargetWeaponSkinGridBox; // 0x610(0x08)
	struct UDFTipsAnchor* wtTipAnchor; // 0x618(0x08)
	/*struct UWBP_DFCommonCheckInstruction_C**/char wtTipCheckBtn[0x8]; // 0x620(0x08)
	int32_t Type; // 0x628(0x04)

	void SetType(int32_t Type); // Function WBP_Collections_ProductionMatrix.WBP_Collections_ProductionMatrix_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
