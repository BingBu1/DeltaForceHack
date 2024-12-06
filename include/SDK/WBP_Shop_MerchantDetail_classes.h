
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Shop_MerchantDetail.WBP_Shop_MerchantDetail_C
// Size: 0x6e0 (Inherited: 0x550)
class UWBP_Shop_MerchantDetail_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* Anim_Out; // 0x558(0x08)
	struct UWidgetAnimation* Anim_In; // 0x560(0x08)
	struct UWidgetAnimation* AniGiftReceiveOut; // 0x568(0x08)
	struct UWidgetAnimation* Anim_ReturnGift; // 0x570(0x08)
	struct UDFButton* Button_Prestige; // 0x578(0x08)
	struct UCanvasPanel* CanvasPanel_receive; // 0x580(0x08)
	struct UDFImage* DFImage_174; // 0x588(0x08)
	struct UDFImage* DFImage_326; // 0x590(0x08)
	struct UDFImage* DFImage_392; // 0x598(0x08)
	struct UDFImage* DFImage_Prestige; // 0x5a0(0x08)
	struct UDFMImage* DFMImage_fxkcx; // 0x5a8(0x08)
	struct UDFMImage* DFMImage_fxkcx_3; // 0x5b0(0x08)
	struct UImage* Image_136; // 0x5b8(0x08)
	struct UImage* Image_highlight_fx; // 0x5c0(0x08)
	struct UImage* Image_highlight_fx_2; // 0x5c8(0x08)
	struct UImage* Image_kuangfx_3; // 0x5d0(0x08)
	struct UImage* Image_prestige; // 0x5d8(0x08)
	struct UImage* Image_stroke_FX3; // 0x5e0(0x08)
	struct UImage* Image_stroke_FX4; // 0x5e8(0x08)
	struct UImage* Image_triangleFX; // 0x5f0(0x08)
	struct UImage* Image_triangleFX2; // 0x5f8(0x08)
	struct UNamedSlot* NamedSlot_itemView; // 0x600(0x08)
	struct UTextBlock* TextBlock_des; // 0x608(0x08)
	struct UTextBlock* TextBlock_name; // 0x610(0x08)
	struct UTextBlock* TextBlock_prestigeLv; // 0x618(0x08)
	struct UWBP_CommonButtonV2S2_C* WBP_CommonButtonV2S2; // 0x620(0x08)
	struct UWBP_SubtitleContent_C* WBP_DialogueContent; // 0x628(0x08)
	bool Type_Text; // 0x630(0x01)
	bool Type_Color; // 0x631(0x01)
	char pad_632[0x6]; // 0x632(0x06)
	struct FSlateColor BP_Color_Name_Center; // 0x638(0x28)
	struct FSlateColor BP_Color_Name_Right; // 0x660(0x28)
	struct FSlateColor BP_Color_Des_Center; // 0x688(0x28)
	struct FSlateColor BP_Color_Des_Right; // 0x6b0(0x28)
	int64_t ButtonID; // 0x6d8(0x08)

	void PC_Adaptation(); // Function WBP_Shop_MerchantDetail.WBP_Shop_MerchantDetail_C.PC_Adaptation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x3cc71c70c0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
