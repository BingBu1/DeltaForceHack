
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Shop_SingleMerchantView.WBP_Shop_SingleMerchantView_C
// Size: 0x6e8 (Inherited: 0x550)
class UWBP_Shop_SingleMerchantView_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* HoverAni; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Shop_SingleMerchantView_Unlock; // 0x560(0x08)
	struct UWidgetAnimation* WBP_Shop_SingleMerchantView_guiwei; // 0x568(0x08)
	struct UWidgetAnimation* WBP_Shop_SingleMerchantView_Bigger; // 0x570(0x08)
	struct UWidgetAnimation* WBP_Shop_SingleMerchantView_out_xuanzhong; // 0x578(0x08)
	struct UWidgetAnimation* WBP_Shop_SingleMerchantView_out; // 0x580(0x08)
	struct UWidgetAnimation* WBP_Shop_SingleMerchantView_in; // 0x588(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x590(0x08)
	struct UDFCanvasPanel* DFCanvas_Red; // 0x598(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x5a0(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_2; // 0x5a8(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_4; // 0x5b0(0x08)
	struct UDFImage* DFImage; // 0x5b8(0x08)
	struct UDFImage* DFImage_182; // 0x5c0(0x08)
	struct UDFImage* DFImage_313; // 0x5c8(0x08)
	struct UDFImage* DFImage_584; // 0x5d0(0x08)
	struct UDFImage* DFImage_739; // 0x5d8(0x08)
	struct UDFImage* DFImage_777; // 0x5e0(0x08)
	struct UDFImage* DFImage_1167; // 0x5e8(0x08)
	struct UDFImage* DFImage_Icon; // 0x5f0(0x08)
	struct UDFImage* DFImage_title_leftline_down; // 0x5f8(0x08)
	struct UDFImage* DFImage_title_leftline_up; // 0x600(0x08)
	struct UDFImage* DFImage_title_line_down; // 0x608(0x08)
	struct UDFImage* DFImage_title_line_up; // 0x610(0x08)
	struct UDFImage* DFImage_title_rightline_down; // 0x618(0x08)
	struct UDFImage* DFImage_title_rightline_up; // 0x620(0x08)
	struct UDFRetainerBox* DFRetainerBox_1; // 0x628(0x08)
	struct UImage* Image_kuangfx; // 0x630(0x08)
	struct UImage* Image_kuangfx_2; // 0x638(0x08)
	struct UImage* Image_kuangfx_3; // 0x640(0x08)
	struct UDFImage* Img_Press; // 0x648(0x08)
	struct ULine* Line_1; // 0x650(0x08)
	struct UDFImage* MI_UI_Shop_Mask_001; // 0x658(0x08)
	struct UDFCanvasPanel* Panel_Lock; // 0x660(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover[0x8]; // 0x668(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover_213[0x8]; // 0x670(0x08)
	struct UWBP_Shop_SingleMerchantView_Item_C* WBP_Shop_SingleMerchantView_Item_C_4; // 0x678(0x08)
	struct UDFTextBlock* WBP_Title_01; // 0x680(0x08)
	struct UButton* wtBtn_prestige; // 0x688(0x08)
	struct UDFButton* wtButton_Merchant; // 0x690(0x08)
	struct UDFVerticalBox* wtHB_typeList; // 0x698(0x08)
	struct UDFImage* wtImage_merchant; // 0x6a0(0x08)
	struct UImage* wtImage_prestige; // 0x6a8(0x08)
	struct UTextBlock* wtTextBlock_name; // 0x6b0(0x08)
	struct UDFTextBlock* wtTextPrestigeLv; // 0x6b8(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x6c0(0x10)
	int32_t Type; // 0x6d0(0x04)
	bool Lock; // 0x6d4(0x01)
	char pad_6D5[0x3]; // 0x6d5(0x03)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Image_Icon[0x10]; // 0x6d8(0x10)

	void SetIsLock(bool Lock); // Function WBP_Shop_SingleMerchantView.WBP_Shop_SingleMerchantView_C.SetIsLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
