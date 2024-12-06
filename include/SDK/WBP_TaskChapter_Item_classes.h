
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_TaskChapter_Item.WBP_TaskChapter_Item_C
// Size: 0x6f0 (Inherited: 0x550)
class UWBP_TaskChapter_Item_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* HoverAni; // 0x558(0x08)
	struct UWidgetAnimation* WBP_TaskChapter_Item_guiwei; // 0x560(0x08)
	struct UWidgetAnimation* WBP_TaskChapter_Item_bigger; // 0x568(0x08)
	struct UWidgetAnimation* xuanzhongout; // 0x570(0x08)
	struct UWidgetAnimation* WBP_TaskChapter_Item_out; // 0x578(0x08)
	struct UWidgetAnimation* WBP_TaskChapter_Item_in; // 0x580(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x588(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_3; // 0x590(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_5; // 0x598(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_SeaonPanel; // 0x5a0(0x08)
	struct UDFImage* DFImage; // 0x5a8(0x08)
	struct UDFImage* DFImage_2; // 0x5b0(0x08)
	struct UDFImage* DFImage_3; // 0x5b8(0x08)
	struct UDFImage* DFImage_4; // 0x5c0(0x08)
	struct UDFImage* DFImage_5; // 0x5c8(0x08)
	struct UDFImage* DFImage_123; // 0x5d0(0x08)
	struct UDFImage* DFImage_193; // 0x5d8(0x08)
	struct UDFImage* DFImage_393; // 0x5e0(0x08)
	struct UDFImage* DFImage_De4; // 0x5e8(0x08)
	struct UDFImage* DFImage_PrestigeBg; // 0x5f0(0x08)
	struct UDFTextBlock* DFTextBlock_CountDownTime; // 0x5f8(0x08)
	struct UDFTextBlock* DFTextBlock_Season; // 0x600(0x08)
	struct UDFVerticalBox* DFVerticalBox_2; // 0x608(0x08)
	struct UImage* Image; // 0x610(0x08)
	struct UImage* Image_2; // 0x618(0x08)
	struct UImage* Image_3208; // 0x620(0x08)
	struct UImage* Image_3281; // 0x628(0x08)
	struct UImage* Image_kuangfx; // 0x630(0x08)
	struct UImage* Image_kuangfx_2; // 0x638(0x08)
	struct UImage* Image_kuangfx_3; // 0x640(0x08)
	struct UDFImage* Img_Press01; // 0x648(0x08)
	struct UDFImage* Img_Press02; // 0x650(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover[0x8]; // 0x658(0x08)
	/*struct UWBP_CommonHoverBg_C**/char WBP_CommonHoverBg[0x8]; // 0x660(0x08)
	struct UDFTextBlock* WBP_Title_01; // 0x668(0x08)
	struct UComputeTextBlock* wChapterNameTxt; // 0x670(0x08)
	struct UCanvasPanel* wLockCanvas; // 0x678(0x08)
	struct UDFButton* wLockTipsButton; // 0x680(0x08)
	struct UImage* wMerchantImage; // 0x688(0x08)
	struct UDFButton* wPrestigeButton; // 0x690(0x08)
	struct UImage* wPrestigeIcon; // 0x698(0x08)
	struct UDFButton* wQuestChapButton; // 0x6a0(0x08)
	struct UDFCanvasPanel* wredDotTipsWidget; // 0x6a8(0x08)
	struct UComputeTextBlock* wTraderCenterPrestige; // 0x6b0(0x08)
	struct UComputeTextBlock* wTraderCenterType; // 0x6b8(0x08)
	struct UVerticalBox* wUnlockVertical; // 0x6c0(0x08)
	/*struct TArray<struct TSoftObjectPtr<UObject>>*/char BgImage[0x10]; // 0x6c8(0x10)
	/*struct TArray<struct TSoftObjectPtr<UObject>>*/char PrestigeImage[0x10]; // 0x6d8(0x10)
	bool IsReward; // 0x6e8(0x01)
	char pad_6E9[0x3]; // 0x6e9(0x03)
	int32_t _111; // 0x6ec(0x04)

	void SetDownBtnType(int32_t Type); // Function WBP_TaskChapter_Item.WBP_TaskChapter_Item_C.SetDownBtnType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
