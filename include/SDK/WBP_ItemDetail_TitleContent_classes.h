
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ItemDetail_TitleContent.WBP_ItemDetail_TitleContent_C
// Size: 0x638 (Inherited: 0x550)
class UWBP_ItemDetail_TitleContent_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_ItemDetail_TitleContent_out_4; // 0x558(0x08)
	struct UWidgetAnimation* WBP_ItemDetail_TitleContent_in_4; // 0x560(0x08)
	struct UWidgetAnimation* WBP_ItemDetail_TitleContent_out_3; // 0x568(0x08)
	struct UWidgetAnimation* WBP_ItemDetail_TitleContent_in_3; // 0x570(0x08)
	struct UWidgetAnimation* WBP_ItemDetail_TitleContent_out; // 0x578(0x08)
	struct UWidgetAnimation* WBP_ItemDetail_TitleContent_in; // 0x580(0x08)
	struct UDFCheckBox* DFCheckBox_108; // 0x588(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_77; // 0x590(0x08)
	struct UDFImage* DFImage_169; // 0x598(0x08)
	struct UDFSizeBox* DFSizeBox_1; // 0x5a0(0x08)
	/*struct UWBP_DFCommonIconButton_C**/char WBP_CommonIconButton[0x8]; // 0x5a8(0x08)
	struct UWBP_ItemDetailDFCommonButtonV3S1_C* WBP_ItemDetailDFCommonButtonV3S1; // 0x5b0(0x08)
	struct UWBP_ItemDetailDFCommonButtonV3S1_C* WBP_ItemDetailDFCommonButtonV3S1_2; // 0x5b8(0x08)
	struct UButton* wCloseBtn; // 0x5c0(0x08)
	struct UDFRichTextBlock* wCurrencyText; // 0x5c8(0x08)
	struct UTextBlock* wItemId; // 0x5d0(0x08)
	struct UDFCommonRichTextBlock* wNameLabel; // 0x5d8(0x08)
	struct UImage* wTitleBgImage; // 0x5e0(0x08)
	struct UImage* wTitleBgImage_FX; // 0x5e8(0x08)
	struct UImage* wtQualityIcon; // 0x5f0(0x08)
	int32_t Type; // 0x5f8(0x04)
	char pad_5FC[0x4]; // 0x5fc(0x04)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char BpQualityIcon[0x10]; // 0x600(0x10)
	struct TArray<struct FName> TextSize; // 0x610(0x10)
	bool IsFW; // 0x620(0x01)
	char pad_621[0x3]; // 0x621(0x03)
	int32_t IsFold; // 0x624(0x04)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char BG[0x10]; // 0x628(0x10)

	void SetPosition(); // Function WBP_ItemDetail_TitleContent.WBP_ItemDetail_TitleContent_C.SetPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
