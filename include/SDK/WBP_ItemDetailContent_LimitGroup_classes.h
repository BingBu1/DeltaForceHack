
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ItemDetailContent_LimitGroup.WBP_ItemDetailContent_LimitGroup_C
// Size: 0xcfa (Inherited: 0x550)
class UWBP_ItemDetailContent_LimitGroup_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_ItemDetailContent_LimitGroup_loop_White; // 0x558(0x08)
	struct UWidgetAnimation* WBP_ItemDetailContent_LimitGroup_loop_Green; // 0x560(0x08)
	struct UWidgetAnimation* WBP_ItemDetailContent_LimitGroup_loop_Red; // 0x568(0x08)
	struct UDFImage* DFImage_185; // 0x570(0x08)
	struct UDFImage* DFImage_294; // 0x578(0x08)
	struct UDFSlider* DFSlider_60; // 0x580(0x08)
	struct UDFTipsAnchor* DFTipsAnchor_116; // 0x588(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x590(0x08)
	struct UImage* Image_149_Fx_2; // 0x598(0x08)
	struct ULine* Line_21; // 0x5a0(0x08)
	struct UImage* wDiffImage; // 0x5a8(0x08)
	struct UTextBlock* wtDesc; // 0x5b0(0x08)
	struct UTextBlock* wtDesc_2; // 0x5b8(0x08)
	struct UImage* wtProgress; // 0x5c0(0x08)
	struct UTextBlock* wtTextTitle; // 0x5c8(0x08)
	struct FText Text; // 0x5d0(0x18)
	/*struct TSoftObjectPtr<UPaperSprite>*/char RefImage[0x28]; // 0x5e8(0x28)
	bool IsSelect; // 0x610(0x01)
	char pad_611[0x7]; // 0x611(0x07)
	struct FSliderStyle SliderStyle0; // 0x618(0x370)
	struct FSliderStyle SliderStyle1; // 0x988(0x370)
	bool HiddenLine; // 0xcf8(0x01)
	bool IsFW; // 0xcf9(0x01)

	void SetSelect(bool IsSelect); // Function WBP_ItemDetailContent_LimitGroup.WBP_ItemDetailContent_LimitGroup_C.SetSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
