
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ItemDetailView.WBP_ItemDetailView_C
// Size: 0x780 (Inherited: 0x550)
class UWBP_ItemDetailView_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_ItemDetailView_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_ItemDetailView_in; // 0x560(0x08)
	struct UWidgetAnimation* Anima_AutoIn; // 0x568(0x08)
	struct UWidgetAnimation* FlowOut; // 0x570(0x08)
	struct UWidgetAnimation* FlowIn; // 0x578(0x08)
	struct UNamedSlot* _wBottomBtnSlot; // 0x580(0x08)
	struct UDFTipsAnchor* _wtTipsAnchor_Bind; // 0x588(0x08)
	struct UDFTipsAnchor* _wtTipsAnchor_ReadyBreakBind; // 0x590(0x08)
	struct UDFTipsAnchor* _wtTipsAnchor_TeamBind; // 0x598(0x08)
	struct UCanvasPanel* CanvasPanel_Icon; // 0x5a0(0x08)
	struct UDFImage* DFImage_104; // 0x5a8(0x08)
	struct UDFImage* DFImage_239; // 0x5b0(0x08)
	struct UDFImage* DFImage_403; // 0x5b8(0x08)
	struct UDFMCommonImage* DFImage_fx2; // 0x5c0(0x08)
	struct UDFMCommonImage* DFImage_fx2_2; // 0x5c8(0x08)
	struct UDFNamedSlot* DFNamedSlot_95; // 0x5d0(0x08)
	struct UDFMCommonImage* Image; // 0x5d8(0x08)
	struct UDFMCommonImage* Image_2; // 0x5e0(0x08)
	struct UDFMCommonImage* Image_3; // 0x5e8(0x08)
	struct UDFMCommonImage* Image_4; // 0x5f0(0x08)
	struct UDFMCommonImage* Image_5; // 0x5f8(0x08)
	struct UDFMCommonImage* Image_6; // 0x600(0x08)
	struct UDFMCommonImage* Image_7; // 0x608(0x08)
	struct UDFMCommonImage* Image_8; // 0x610(0x08)
	struct UDFMCommonImage* Image_9; // 0x618(0x08)
	struct UDFMCommonImage* Image_11; // 0x620(0x08)
	struct UDFMCommonImage* Image_12; // 0x628(0x08)
	struct UDFMCommonImage* Image_13; // 0x630(0x08)
	struct UDFMCommonImage* Image_14; // 0x638(0x08)
	struct UDFMCommonImage* Image_15; // 0x640(0x08)
	struct UDFMCommonImage* Image_16; // 0x648(0x08)
	struct UDFMCommonImage* Image_17; // 0x650(0x08)
	struct UDFMCommonImage* Image_18; // 0x658(0x08)
	struct UDFMCommonImage* Image_19; // 0x660(0x08)
	struct UDFMCommonImage* Image_20; // 0x668(0x08)
	struct UDFMCommonImage* Image_21; // 0x670(0x08)
	struct UDFMCommonImage* Image_22; // 0x678(0x08)
	struct UDFMCommonImage* Image_23; // 0x680(0x08)
	struct UDFMCommonImage* Image_24; // 0x688(0x08)
	struct UDFMCommonImage* Image_25; // 0x690(0x08)
	struct UDFMCommonImage* Image_26; // 0x698(0x08)
	struct UDFMCommonImage* Image_27; // 0x6a0(0x08)
	struct UDFMCommonImage* Image_28; // 0x6a8(0x08)
	struct UDFMCommonImage* Image_29; // 0x6b0(0x08)
	struct UDFImage* Image_1222; // 0x6b8(0x08)
	struct UDFMCommonImage* ItemDetailImageBg; // 0x6c0(0x08)
	/*struct UWBP_DFCommonIconButton_C**/char Magnifier[0x8]; // 0x6c8(0x08)
	struct UDFMCommonImage* wBindTipsAlignWidget; // 0x6d0(0x08)
	struct UWBP_SlotCompBlueprintLabel_C* wBluePrintItem; // 0x6d8(0x08)
	struct UWBP_ItemDetailCheckBox_V1_C* WBP_ItemDetailCheckBox_V1; // 0x6e0(0x08)
	struct UWBP_Itemview_Collections_C* WBP_Itemview_Collections; // 0x6e8(0x08)
	struct UDFRichTextBlock* wCurrencyText; // 0x6f0(0x08)
	struct UWBP_ItemDetailCheckBox_C* wItemCheckbox; // 0x6f8(0x08)
	struct UWBP_ItemDetailCheckBox_C* wItemCheckbox_2; // 0x700(0x08)
	struct UWBP_ItemDetailCheckBox_C* wItemCheckbox_3; // 0x708(0x08)
	struct UWBP_ItemDetailContent_C* wItemDetailContent; // 0x710(0x08)
	struct UWBP_ItemDetail_TitleContent_C* wItemDetailTitle; // 0x718(0x08)
	struct UWBP_ItemDetailCheckBox_C* wItemPoorWeaponCheckBox; // 0x720(0x08)
	/*struct UWBP_Itemview_Image_C**/char wItemviewImage[0x8]; // 0x728(0x08)
	struct USizeBox* wItemViewSizeBox; // 0x730(0x08)
	struct UWBP_DFCommonCheckcollection_C* wLabelMarkBtn; // 0x738(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x740(0x08)
	struct UWBP_WarehouseScroll_C* wtDownMask; // 0x748(0x08)
	struct UWBP_ItemDetailContent_TimeLimit_C* wTimeLimitItem; // 0x750(0x08)
	struct UWBP_WarehouseScroll_C* wtUpMask; // 0x758(0x08)
	struct UCanvasPanel* wUnderContentSlot; // 0x760(0x08)
	struct UNamedSlot* wUpContentSlot; // 0x768(0x08)
	bool bpShowIcon; // 0x770(0x01)
	bool showViewBg; // 0x771(0x01)
	char pad_772[0x2]; // 0x772(0x02)
	float OperationParameters; // 0x774(0x04)
	int32_t TipPosition; // 0x778(0x04)
	int32_t Type; // 0x77c(0x04)

	void BP_SetType(int32_t Selection); // Function WBP_ItemDetailView.WBP_ItemDetailView_C.BP_SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
