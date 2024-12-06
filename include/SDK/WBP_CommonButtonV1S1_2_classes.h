
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_CommonButtonV1S1.WBP_CommonButtonV1S1_C
// Size: 0x10a8 (Inherited: 0x550)
class UWBP_CommonButtonV1S1_C_def2 : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* RecoverHoverAni; // 0x558(0x08)
	struct UWidgetAnimation* UnHover_2; // 0x560(0x08)
	struct UWidgetAnimation* HoverAni_1; // 0x568(0x08)
	struct UWidgetAnimation* UnHover; // 0x570(0x08)
	struct UWidgetAnimation* HoverAni; // 0x578(0x08)
	struct UWidgetAnimation* WBP_CommonButtonV1S1_loop; // 0x580(0x08)
	struct UWidgetAnimation* WBP_CommonButtonV1S1_out; // 0x588(0x08)
	struct UWidgetAnimation* WBP_CommonButtonV1S1_in; // 0x590(0x08)
	struct UDFImage* btn_hoverAnim_bg_fx; // 0x598(0x08)
	struct UDFImage* btn_line_D_1_fx; // 0x5a0(0x08)
	struct UDFImage* btn_line_D_2_fx; // 0x5a8(0x08)
	struct UDFImage* btn_line_L_fx; // 0x5b0(0x08)
	struct UDFImage* btn_line_R_fx; // 0x5b8(0x08)
	struct UDFImage* btn_line_U_1_fx; // 0x5c0(0x08)
	struct UDFImage* btn_line_U_2_fx; // 0x5c8(0x08)
	struct UDFButton* Button_Common; // 0x5d0(0x08)
	struct UDFImage* DFImage_112; // 0x5d8(0x08)
	struct UDFMImage* DFMImage_27; // 0x5e0(0x08)
	struct UDFRichTextBlock* RichTextBlock_Common; // 0x5e8(0x08)
	struct UImage* wImg_CheckedNormalAniCircle_FadeInAni_fx05; // 0x5f0(0x08)
	struct UImage* wImg_CheckedNormalAniCircle_HoverAni_fx01; // 0x5f8(0x08)
	struct UImage* wImg_CheckedNormalAniCircle_HoverAni_fx01_2; // 0x600(0x08)
	struct UImage* wImg_CheckedNormalAniCircle_HoverAni_fx02; // 0x608(0x08)
	struct FText Name; // 0x610(0x18)
	bool IsNameSetByCode; // 0x628(0x01)
	char pad_629[0x7]; // 0x629(0x07)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x630(0x10)
	bool bPlayLifeAnimBP; // 0x640(0x01)
	bool Is_Disabled; // 0x641(0x01)
	char pad_642[0x6]; // 0x642(0x06)
	struct FButtonStyle BP_NormalButtonStyle; // 0x648(0x298)
	struct FButtonStyle BP_DisabledButtonStyle; // 0x8e0(0x298)
	struct FButtonStyle MobileStyle; // 0xb78(0x298)
	struct FButtonStyle PCStyle; // 0xe10(0x298)

	void GetDisabledStyle(struct FButtonStyle& disabledStyle); // Function WBP_CommonButtonV1S1.WBP_CommonButtonV1S1_C.GetDisabledStyle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
