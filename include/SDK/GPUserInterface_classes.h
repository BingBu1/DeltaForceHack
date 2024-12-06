
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPUserInterface.GPWidgetTiltActor
// Size: 0x378 (Inherited: 0x378)
class AGPWidgetTiltActor : public AActor {
public:


	bool IsDestroy(); // Function GPUserInterface.GPWidgetTiltActor.IsDestroy // (Native|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFAspectRatioBoxSlot
// Size: 0x58 (Inherited: 0x40)
class UDFAspectRatioBoxSlot : public UPanelSlot {
public:

	enum class EHorizontalAlignment HorizontalAlignment; // 0x40(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x41(0x01)
	char pad_42[0x16]; // 0x42(0x16)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFAspectRatioBox
// Size: 0x1a8 (Inherited: 0x180)
class UDFAspectRatioBox : public UContentWidget {
public:

	struct FIntPoint MaxRatio; // 0x180(0x08)
	struct FIntPoint MinRatio; // 0x188(0x08)
	char bUseMaxRatio : 1; // 0x190(0x01)
	char bUseMinRatio : 1; // 0x190(0x01)
	char bViewportSpace : 1; // 0x190(0x01)
	char pad_190_3 : 5; // 0x190(0x01)
	char pad_191[0x17]; // 0x191(0x17)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFBackgroundBlur
// Size: 0x2f0 (Inherited: 0x2e8)
class UDFBackgroundBlur : public UBackgroundBlur {
public:

	int32_t LowQualityFallbackBrushIndex; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)

	void OnNextFrame(); // Function GPUserInterface.DFBackgroundBlur.OnNextFrame // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFBackgroundBoxSlot
// Size: 0x50 (Inherited: 0x40)
class UDFBackgroundBoxSlot : public UPanelSlot {
public:

	char pad_40[0x10]; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFBackgroundBox
// Size: 0x1a0 (Inherited: 0x180)
class UDFBackgroundBox : public UContentWidget {
public:

	struct FIntPoint OverrideContentSize; // 0x180(0x08)
	enum class EBackgroundStretchType StretchHD; // 0x188(0x01)
	enum class EBackgroundStretchType StretchMobile; // 0x189(0x01)
	char pad_18A[0x16]; // 0x18a(0x16)

	void SetStretch(enum class EBackgroundStretchType InStretch); // Function GPUserInterface.DFBackgroundBox.SetStretch // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFBorder
// Size: 0x2d8 (Inherited: 0x2d8)
class UDFBorder : public UBorder {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFButton
// Size: 0x500 (Inherited: 0x4b0)
class UDFButton : public UButton {
public:

	int64_t ButtonID; // 0x4b0(0x08)
	struct FName PressedSoundName; // 0x4b8(0x08)
	struct FName HoveredSoundName; // 0x4c0(0x08)
	enum class EGPUIFocusEffectType FocusEffectType; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	/*struct FMulticastInlineDelegate*/char OnFocusReceivedEvent[0x10]; // 0x4d0(0x10)
	/*struct FMulticastInlineDelegate*/char OnFocusLostEvent[0x10]; // 0x4e0(0x10)
	char pad_4F0[0x10]; // 0x4f0(0x10)

	void SetButtonID(int64_t NewButtonID); // Function GPUserInterface.DFButton.SetButtonID // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCanvasPanel
// Size: 0x198 (Inherited: 0x198)
class UDFCanvasPanel : public UCanvasPanel {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCDNImage
// Size: 0x388 (Inherited: 0x2e0)
class UDFCDNImage : public UImage {
public:

	struct FString BackgroundPath; // 0x2e0(0x10)
	struct FLinearColor PreloadColor; // 0x2f0(0x10)
	bool bNeedBackground; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct FString CDN_Url; // 0x308(0x10)
	struct FString CDN_Tag; // 0x318(0x10)
	bool bCompareVersion; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	/*struct FMulticastInlineDelegate*/char CNDSetImageFinishDelegate[0x10]; // 0x330(0x10)
	char pad_340[0x40]; // 0x340(0x40)
	struct UCDNIconDownManager* CDNIconManager; // 0x380(0x08)

	void SetLoadImage(struct FString Path); // Function GPUserInterface.DFCDNImage.SetLoadImage // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCheckBox
// Size: 0x950 (Inherited: 0x818)
class UDFCheckBox : public UCheckbox {
public:

	enum class EButtonClickMethod ClickMethod; // 0x818(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x819(0x01)
	enum class EButtonPressMethod PressMethod; // 0x81a(0x01)
	char pad_81B[0x1d]; // 0x81b(0x1d)
	int64_t ButtonID; // 0x838(0x08)
	/*struct FMulticastInlineDelegate*/char OnUncheckedClicked[0x10]; // 0x840(0x10)
	/*struct FMulticastInlineDelegate*/char OnUncheckedPressed[0x10]; // 0x850(0x10)
	/*struct FMulticastInlineDelegate*/char OnUncheckedReleased[0x10]; // 0x860(0x10)
	/*struct FMulticastInlineDelegate*/char OnUncheckedHovered[0x10]; // 0x870(0x10)
	/*struct FMulticastInlineDelegate*/char OnUncheckedUnhovered[0x10]; // 0x880(0x10)
	/*struct FMulticastInlineDelegate*/char OnCheckedClicked[0x10]; // 0x890(0x10)
	/*struct FMulticastInlineDelegate*/char OnCheckedPressed[0x10]; // 0x8a0(0x10)
	/*struct FMulticastInlineDelegate*/char OnCheckedReleased[0x10]; // 0x8b0(0x10)
	/*struct FMulticastInlineDelegate*/char OnCheckedHovered[0x10]; // 0x8c0(0x10)
	/*struct FMulticastInlineDelegate*/char OnCheckedUnhovered[0x10]; // 0x8d0(0x10)
	/*struct FMulticastInlineDelegate*/char OnCheckedReleasedNoClicked[0x10]; // 0x8e0(0x10)
	/*struct FMulticastInlineDelegate*/char OnUncheckedReleasedNoClicked[0x10]; // 0x8f0(0x10)
	struct FVector2D PressedScale; // 0x900(0x08)
	struct FName CheckedSoundName; // 0x908(0x08)
	struct FName UncheckedSoundName; // 0x910(0x08)
	struct FName HoveredSoundName; // 0x918(0x08)
	char pad_920[0x1]; // 0x920(0x01)
	enum class EGPUIFocusEffectType FocusEffectType; // 0x921(0x01)
	char pad_922[0x6]; // 0x922(0x06)
	/*struct FMulticastInlineDelegate*/char OnFocusReceivedEvent[0x10]; // 0x928(0x10)
	/*struct FMulticastInlineDelegate*/char OnFocusLostEvent[0x10]; // 0x938(0x10)
	char pad_948[0x8]; // 0x948(0x08)

	void SetButtonID(int64_t NewButtonID); // Function GPUserInterface.DFCheckBox.SetButtonID // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFClipCanvasPanel
// Size: 0x1b8 (Inherited: 0x198)
class UDFClipCanvasPanel : public UCanvasPanel {
public:

	struct UWidget* ClipChild; // 0x198(0x08)
	bool bAutoSize; // 0x1a0(0x01)
	char pad_1A1[0x17]; // 0x1a1(0x17)

	void SetClipChild(struct UWidget* InChild); // Function GPUserInterface.DFClipCanvasPanel.SetClipChild // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFColorWheel
// Size: 0x1a8 (Inherited: 0x168)
class UDFColorWheel : public UWidget {
public:

	struct FLinearColor SelectColor; // 0x168(0x10)
	/*struct FMulticastInlineDelegate*/char LinearColorChangeValue[0x10]; // 0x178(0x10)
	char pad_188[0x20]; // 0x188(0x20)

	void SetSelectColor(struct FLinearColor sColor); // Function GPUserInterface.DFColorWheel.SetSelectColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFComboBoxString
// Size: 0xee8 (Inherited: 0xee8)
class UDFComboBoxString : public UComboBoxString {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonDropDownItem
// Size: 0x598 (Inherited: 0x550)
class UDFCommonDropDownItem : public ULuaUIBaseView {
public:

	struct UDFCommonCheckButton* DFCommonCheckButton; // 0x550(0x08)
	struct UTextBlock* wtRightText; // 0x558(0x08)
	struct FText KeyText; // 0x560(0x18)
	struct FText RightText; // 0x578(0x18)
	int32_t Index; // 0x590(0x04)
	bool bIsShowRightText; // 0x594(0x01)
	char pad_595[0x3]; // 0x595(0x03)

	void InitDropDownItem(struct FDropDownItemData InItemData, int32_t InIndex); // Function GPUserInterface.DFCommonDropDownItem.InitDropDownItem // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonMediaView
// Size: 0x3a0 (Inherited: 0x298)
class UDFCommonMediaView : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct UImage* MediaImage; // 0x2a0(0x08)
	struct UImage* MediaImageBG; // 0x2a8(0x08)
	struct UTextBlock* SubtitleTxt; // 0x2b0(0x08)
	struct UDFCommonButton* SkipBtn; // 0x2b8(0x08)
	struct UBinkMediaPlayer* MediaPlayer; // 0x2c0(0x08)
	struct UMaterialInterface* Material; // 0x2c8(0x08)
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x2d0(0x08)
	bool bCreateMaterialInstanceDynamic; // 0x2d8(0x01)
	bool bAutoMatchMediaSize; // 0x2d9(0x01)
	bool bScreenFill; // 0x2da(0x01)
	char pad_2DB[0x5]; // 0x2db(0x05)
	/*struct FMulticastInlineDelegate*/char OnMediaOpened[0x10]; // 0x2e0(0x10)
	/*struct FMulticastInlineDelegate*/char OnMediaPlayBegin[0x10]; // 0x2f0(0x10)
	/*struct FMulticastInlineDelegate*/char OnMediaPlayEnd[0x10]; // 0x300(0x10)
	/*struct FMulticastInlineDelegate*/char OnMediaSkip[0x10]; // 0x310(0x10)
	char pad_320[0x80]; // 0x320(0x80)

	void StopMedia(bool bIsSkip); // Function GPUserInterface.DFCommonMediaView.StopMedia // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonRichTextBlock
// Size: 0x7b0 (Inherited: 0x798)
class UDFCommonRichTextBlock : public URichTextBlock {
public:

	struct UClass* ScrollStyle; // 0x798(0x08)
	char pad_7A0[0x10]; // 0x7a0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonRoundedRectMaskBase
// Size: 0x2f0 (Inherited: 0x298)
class UDFCommonRoundedRectMaskBase : public UUserWidget {
public:

	bool bEnableMask; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct UContentWidget* ContentPanel; // 0x2a0(0x08)
	struct UMaterialInterface* MaskMat; // 0x2a8(0x08)
	struct UMaterialInstanceDynamic* MaskMatIns; // 0x2b0(0x08)
	struct FIntPoint DefaultRatio; // 0x2b8(0x08)
	struct FIntPoint MaxRatio; // 0x2c0(0x08)
	struct FIntPoint MinRatio; // 0x2c8(0x08)
	struct FName MaskMatParamName; // 0x2d0(0x08)
	float MaxMaskMatEdge; // 0x2d8(0x04)
	float MaxUIEdge; // 0x2dc(0x04)
	char pad_2E0[0x1]; // 0x2e0(0x01)
	bool bCreateMaterialInstanceDynamicForBrush; // 0x2e1(0x01)
	char pad_2E2[0x2]; // 0x2e2(0x02)
	struct TWeakObjectPtr<struct UUserWidget> MostRootWidget; // 0x2e4(0x08)
	char pad_2EC[0x4]; // 0x2ec(0x04)

	void SetEffectVisible(bool bVisible); // Function GPUserInterface.DFCommonRoundedRectMaskBase.SetEffectVisible // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.WrapTabGroupClickDelegate
// Size: 0x40 (Inherited: 0x30)
class UWrapTabGroupClickDelegate : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)

	int32_t DispatchSubTabItemCount(); // Function GPUserInterface.WrapTabGroupClickDelegate.DispatchSubTabItemCount // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.WrapTabClickDelegate
// Size: 0x40 (Inherited: 0x30)
class UWrapTabClickDelegate : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)

	void DispatchUnhovered(); // Function GPUserInterface.WrapTabClickDelegate.DispatchUnhovered // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.CommonTextScrollStyle
// Size: 0x50 (Inherited: 0x30)
class UCommonTextScrollStyle : public UObject {
public:

	float Speed; // 0x30(0x04)
	float StartDelay; // 0x34(0x04)
	float EndDelay; // 0x38(0x04)
	float FadeInDelay; // 0x3c(0x04)
	float FadeOutDelay; // 0x40(0x04)
	float StartOffset; // 0x44(0x04)
	float stopOffset; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonTextBlock
// Size: 0x3d0 (Inherited: 0x3a8)
class UDFCommonTextBlock : public UTextBlock {
public:

	struct UClass* ScrollStyle; // 0x3a8(0x08)
	char pad_3B0[0x20]; // 0x3b0(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFDJWMainTab
// Size: 0x570 (Inherited: 0x550)
class UDFDJWMainTab : public ULuaUIBaseView {
public:

	struct UDFVerticalBox* TabVerticalBox; // 0x550(0x08)
	struct UDFImage* DFImage_Arrow; // 0x558(0x08)
	struct UDFCommonCheckButton* DFCommonCheckButton; // 0x560(0x08)
	struct UWidgetAnimation* UncheckedUpAni; // 0x568(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFEditableText
// Size: 0x4d8 (Inherited: 0x4d8)
class UDFEditableText : public UEditableText {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFEditableTextBox
// Size: 0xb00 (Inherited: 0xb00)
class UDFEditableTextBox : public UEditableTextBox {
public:


	void ScrollToPreviousPage(); // Function GPUserInterface.DFEditableTextBox.ScrollToPreviousPage // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFExpandableArea
// Size: 0x3b0 (Inherited: 0x3b0)
class UDFExpandableArea : public UExpandableArea {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFGridPanel
// Size: 0x1c8 (Inherited: 0x1b0)
class UDFGridPanel : public UGridPanel {
public:

	bool bFramingAvance; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	int32_t FramingNumber; // 0x1b4(0x04)
	char pad_1B8[0x10]; // 0x1b8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFHorizontalBox
// Size: 0x1a8 (Inherited: 0x1a8)
class UDFHorizontalBox : public UHorizontalBox {
public:


	void SetContentVerticalAlignment(enum class EVerticalAlignment InContentVerticalAlignment); // Function GPUserInterface.DFHorizontalBox.SetContentVerticalAlignment // (Final|Native|Private|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFInvalidationBox
// Size: 0x198 (Inherited: 0x198)
class UDFInvalidationBox : public UInvalidationBox {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFMultiLineEditableText
// Size: 0x558 (Inherited: 0x558)
class UDFMultiLineEditableText : public UMultiLineEditableText {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFMultiLineEditableTextBox
// Size: 0xde8 (Inherited: 0xde8)
class UDFMultiLineEditableTextBox : public UMultiLineEditableTextBox {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFOverlay
// Size: 0x190 (Inherited: 0x190)
class UDFOverlay : public UOverlay {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFProgressBar
// Size: 0x3a0 (Inherited: 0x3a0)
class UDFProgressBar : public UProgressBar {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFRadialImage
// Size: 0x278 (Inherited: 0x278)
class UDFRadialImage : public URadialImage {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFRetainerBox
// Size: 0x1b0 (Inherited: 0x1b0)
class UDFRetainerBox : public URetainerBox {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFSafeZone
// Size: 0x198 (Inherited: 0x198)
class UDFSafeZone : public USafeZone {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFScaleBox
// Size: 0x1a0 (Inherited: 0x1a0)
class UDFScaleBox : public UScaleBox {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFScrollBox
// Size: 0xa00 (Inherited: 0x9b0)
class UDFScrollBox : public UScrollBox {
public:

	enum class EDFDefaultScrollBarType DefaultScrollBarType; // 0x9b0(0x01)
	enum class EDFDefaultScrollBarType DefaultScrollBarTypeHD; // 0x9b1(0x01)
	enum class EDFDefaultScrollBoxType DefaultScrollBoxType; // 0x9b2(0x01)
	char pad_9B3[0x1]; // 0x9b3(0x01)
	float OverrideScrollAmount; // 0x9b4(0x04)
	bool bUseNativeNavigation; // 0x9b8(0x01)
	bool bHandleMouseDrag; // 0x9b9(0x01)
	char pad_9BA[0x6]; // 0x9ba(0x06)
	/*struct FMulticastInlineDelegate*/char PerScrollCallback[0x10]; // 0x9c0(0x10)
	bool bScrollWidgetIntoViewIfOnEdge; // 0x9d0(0x01)
	char pad_9D1[0x7]; // 0x9d1(0x07)
	struct UClass* ScrollWidgetTemplateClassIntoViewIfOnEdge; // 0x9d8(0x08)
	char pad_9E0[0x20]; // 0x9e0(0x20)

	void SetScrollWidgetIntoViewIfOnEdge(bool bInScrollWidgetIntoViewIfOnEdge); // Function GPUserInterface.DFScrollBox.SetScrollWidgetIntoViewIfOnEdge // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFScrollGridBox
// Size: 0xac0 (Inherited: 0xa08)
class UDFScrollGridBox : public UScrollGridBox {
public:

	enum class EDFDefaultScrollBarType DefaultScrollBarType; // 0xa08(0x01)
	enum class EDFDefaultScrollBarType DefaultScrollBarTypeHD; // 0xa09(0x01)
	enum class EDFDefaultScrollBoxType DefaultScrollBoxType; // 0xa0a(0x01)
	char pad_A0B[0x1]; // 0xa0b(0x01)
	float OverrideScrollAmount; // 0xa0c(0x04)
	bool bScrollWidgetIntoViewIfOnEdge; // 0xa10(0x01)
	bool bHandleMouseDrag; // 0xa11(0x01)
	char pad_A12[0x2e]; // 0xa12(0x2e)
	/*struct FMulticastInlineDelegate*/char OnSlotClickedChanged[0x10]; // 0xa40(0x10)
	char pad_A50[0x70]; // 0xa50(0x70)

	void SetScrollWidgetIntoViewIfOnEdge(bool bInScrollWidgetIntoViewIfOnEdge); // Function GPUserInterface.DFScrollGridBox.SetScrollWidgetIntoViewIfOnEdge // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.MainTabChangeObject
// Size: 0x48 (Inherited: 0x30)
class UMainTabChangeObject : public UObject {
public:

	char pad_30[0x18]; // 0x30(0x18)

	void Dispatch(bool bIsChecked); // Function GPUserInterface.MainTabChangeObject.Dispatch // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.SubTabChangeObject
// Size: 0x48 (Inherited: 0x30)
class USubTabChangeObject : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)
	struct UDFCommonCheckButton* CheckButton; // 0x40(0x08)

	void Dispatch(bool bIsChecked); // Function GPUserInterface.SubTabChangeObject.Dispatch // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFSimpleGradient
// Size: 0x228 (Inherited: 0x168)
class UDFSimpleGradient : public UWidget {
public:

	struct FSlateBrush Brush; // 0x168(0x90)
	struct FLinearColor SVColorSelect; // 0x1f8(0x10)
	/*struct FMulticastInlineDelegate*/char SVColorChangeValue[0x10]; // 0x208(0x10)
	char pad_218[0x10]; // 0x218(0x10)

	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function GPUserInterface.DFSimpleGradient.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFSizeBox
// Size: 0x1b8 (Inherited: 0x1b8)
class UDFSizeBox : public USizeBox {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFSlider
// Size: 0x598 (Inherited: 0x588)
class UDFSlider : public USlider {
public:

	struct FName MouseCaptureBeginSoundName; // 0x588(0x08)
	float BandMinValue; // 0x590(0x04)
	float IsBandMinValue; // 0x594(0x04)

	void SetBandMinValue(float InValue, bool bBandMinValue); // Function GPUserInterface.DFSlider.SetBandMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFSpacer
// Size: 0x180 (Inherited: 0x180)
class UDFSpacer : public USpacer {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFSpinBox
// Size: 0x598 (Inherited: 0x598)
class UDFSpinBox : public USpinBox {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFTextBlock
// Size: 0x3b8 (Inherited: 0x3a8)
class UDFTextBlock : public UTextBlock {
public:

	struct FName ColorName; // 0x3a8(0x08)
	struct UDataTable* TextColorData; // 0x3b0(0x08)

	void SetTextColor(struct FName InColorName); // Function GPUserInterface.DFTextBlock.SetTextColor // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFTileView
// Size: 0x3e8 (Inherited: 0x3e8)
class UDFTileView : public UTileView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFTipsTemplateBase
// Size: 0x38 (Inherited: 0x30)
class UDFTipsTemplateBase : public UObject {
public:

	struct FName TypeName; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFTipsAnchor
// Size: 0x258 (Inherited: 0x168)
class UDFTipsAnchor : public UWidget {
public:

	enum class ETipsAttachMode AttachModeHD; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
	struct FVector2D MouseSpacing; // 0x16c(0x08)
	enum class ETipsAnchorSpace AnchorSpace; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	struct FString AnchorSpaceWidgetPath; // 0x178(0x10)
	enum class ETipsDirection AnchorSurroundingDirection; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	float AnchorSurroundingPivot; // 0x18c(0x04)
	struct FVector2D AnchorOffset; // 0x190(0x08)
	struct FVector2D TipsOffset; // 0x198(0x08)
	struct FVector2D TipsPivot; // 0x1a0(0x08)
	enum class ETipsTriggerEventMode TriggerEventMode; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct FString TriggerEventWidgetPath; // 0x1b0(0x10)
	bool bAutoBindTriggerEvents; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	float HoverTriggerDelay; // 0x1c4(0x04)
	bool bHasHoverTriggerDelay; // 0x1c8(0x01)
	bool bResponseBlankSpaceClick; // 0x1c9(0x01)
	enum class ETipsConstrainMode ConstrainMode; // 0x1ca(0x01)
	char pad_1CB[0x5]; // 0x1cb(0x05)
	struct FString ConstrainWidgetPath; // 0x1d0(0x10)
	struct FMargin ConstrainPadding; // 0x1e0(0x10)
	/*struct FMulticastInlineDelegate*/char OnShowTipsEvent[0x10]; // 0x1f0(0x10)
	/*struct FMulticastInlineDelegate*/char OnHideTipsEvent[0x10]; // 0x200(0x10)
	struct UDFTipsTemplateBase* TipsTemplate; // 0x210(0x08)
	char pad_218[0x8]; // 0x218(0x08)
	struct UWidget* BoundWidget; // 0x220(0x08)
	char pad_228[0x30]; // 0x228(0x30)

	void UnbindTipsWidget(); // Function GPUserInterface.DFTipsAnchor.UnbindTipsWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFTreeView
// Size: 0x420 (Inherited: 0x420)
class UDFTreeView : public UTreeView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFTypeWriterTextBlock
// Size: 0x400 (Inherited: 0x3a8)
class UDFTypeWriterTextBlock : public UTextBlock {
public:

	struct FText FullText; // 0x3a8(0x18)
	float TextUpdateInterval; // 0x3c0(0x04)
	int32_t TextSpeed; // 0x3c4(0x04)
	bool bLoop; // 0x3c8(0x01)
	bool bOverrideSimpleTextMode; // 0x3c9(0x01)
	char pad_3CA[0x36]; // 0x3ca(0x36)

	void Update(float DeltaTime); // Function GPUserInterface.DFTypeWriterTextBlock.Update // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFUniformGridPanel
// Size: 0x1a8 (Inherited: 0x1a8)
class UDFUniformGridPanel : public UUniformGridPanel {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFVerticalBox
// Size: 0x1a8 (Inherited: 0x1a8)
class UDFVerticalBox : public UVerticalBox {
public:


	void SetContentVerticalAlignment(enum class EVerticalAlignment InContentVerticalAlignment); // Function GPUserInterface.DFVerticalBox.SetContentVerticalAlignment // (Final|Native|Private|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFWaterfallScrollView
// Size: 0xba0 (Inherited: 0x650)
class UDFWaterfallScrollView : public UWaterfallScrollView {
public:

	enum class EDFDefaultScrollBarType DefaultScrollBarType; // 0x650(0x01)
	enum class EDFDefaultScrollBarType DefaultScrollBarTypeHD; // 0x651(0x01)
	enum class EDFDefaultScrollBoxType DefaultScrollBoxType; // 0x652(0x01)
	char pad_653[0x5]; // 0x653(0x05)
	struct FScrollBarStyle WidgetBarStyle; // 0x658(0x518)
	struct FVector2D ScrollbarThickness; // 0xb70(0x08)
	struct FMargin ScrollbarPadding; // 0xb78(0x10)
	float OverrideScrollAmount; // 0xb88(0x04)
	bool bScrollWidgetIntoViewIfOnEdge; // 0xb8c(0x01)
	char pad_B8D[0x3]; // 0xb8d(0x03)
	struct UClass* ScrollWidgetTemplateClassIntoViewIfOnEdge; // 0xb90(0x08)
	bool bSelectItemInToView; // 0xb98(0x01)
	char pad_B99[0x7]; // 0xb99(0x07)

	void SetScrollWidgetIntoViewIfOnEdge(bool bInScrollWidgetIntoViewIfOnEdge); // Function GPUserInterface.DFWaterfallScrollView.SetScrollWidgetIntoViewIfOnEdge // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFScrollBarWidgetStyle
// Size: 0x720 (Inherited: 0x38)
class UDFScrollBarWidgetStyle : public USlateWidgetStyleContainerBase {
public:

	struct FDFScrollBarStyle ScrollBarStyle; // 0x38(0x6e8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFButtonStateWidgetStyle
// Size: 0x6c8 (Inherited: 0x38)
class UDFButtonStateWidgetStyle : public USlateWidgetStyleContainerBase {
public:

	struct FDFButtonStateStyle ButtonStateStyle; // 0x38(0x690)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFRichTextConfigWidgetStyle
// Size: 0x2e0 (Inherited: 0x38)
class UDFRichTextConfigWidgetStyle : public USlateWidgetStyleContainerBase {
public:

	struct FDFRichTextConfigStyle RichTextConfigStyle; // 0x38(0x2a8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFRichTextWidgetStyle
// Size: 0x308 (Inherited: 0x38)
class UDFRichTextWidgetStyle : public USlateWidgetStyleContainerBase {
public:

	struct FDFRichTextStyle RichTextStyle; // 0x38(0x2d0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFTextWidgetStyle
// Size: 0x2e8 (Inherited: 0x38)
class UDFTextWidgetStyle : public USlateWidgetStyleContainerBase {
public:

	struct FDFTextStyle TextStyle; // 0x38(0x2b0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFBrushButtonStateWidgetStyle
// Size: 0x550 (Inherited: 0x38)
class UDFBrushButtonStateWidgetStyle : public USlateWidgetStyleContainerBase {
public:

	struct FDFBrushButtonStateStyle BrushStateStyle; // 0x38(0x518)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFRichTextBlockStateWidgetStyle
// Size: 0x1990 (Inherited: 0x38)
class UDFRichTextBlockStateWidgetStyle : public USlateWidgetStyleContainerBase {
public:

	struct FDFRichTextBlockButtonStateStyle RichTextBlockStateStyle; // 0x38(0x1958)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFTextBlockStateWidgetStyle
// Size: 0x1310 (Inherited: 0x38)
class UDFTextBlockStateWidgetStyle : public USlateWidgetStyleContainerBase {
public:

	struct FDFTextBlockButtonStateStyle TextBlockStateStyle; // 0x38(0x12d8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.FDFBrushCheckStateWidgetStyle
// Size: 0x550 (Inherited: 0x38)
class UFDFBrushCheckStateWidgetStyle : public USlateWidgetStyleContainerBase {
public:

	struct FDFBrushCheckStateStyle BrushStateStyle; // 0x38(0x518)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFRichTextBlockCheckStateWidgetStyle
// Size: 0x1990 (Inherited: 0x38)
class UDFRichTextBlockCheckStateWidgetStyle : public USlateWidgetStyleContainerBase {
public:

	struct FDFRichTextBlockCheckStateStyle RichTextBlockStateStyle; // 0x38(0x1958)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFTextBlockCheckStateWidgetStyle
// Size: 0x1310 (Inherited: 0x38)
class UDFTextBlockCheckStateWidgetStyle : public USlateWidgetStyleContainerBase {
public:

	struct FDFTextBlockCheckStateStyle TextBlockStateStyle; // 0x38(0x12d8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.FDFCommonButtonWidgetStyle
// Size: 0x23d8 (Inherited: 0x38)
class UFDFCommonButtonWidgetStyle : public USlateWidgetStyleContainerBase {
public:

	struct FDFCommonButtonStyle CommonButtonStyle; // 0x38(0x23a0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.FDFCommonCheckButtonWidgetStyle
// Size: 0x23e0 (Inherited: 0x38)
class UFDFCommonCheckButtonWidgetStyle : public USlateWidgetStyleContainerBase {
public:

	struct FDFCommonCheckButtonStyle CommonCheckButtonStyle; // 0x38(0x23a8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFWidgetSwitcher
// Size: 0x198 (Inherited: 0x198)
class UDFWidgetSwitcher : public UWidgetSwitcher {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFWrapBox
// Size: 0x1a0 (Inherited: 0x1a0)
class UDFWrapBox : public UWrapBox {
public:


	void SetWrapWidth(float InWrapWidth); // Function GPUserInterface.DFWrapBox.SetWrapWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.GPColorManager
// Size: 0x110 (Inherited: 0x38)
class UGPColorManager : public UGameInstanceSubsystem {
public:

	struct TMap<struct FString, struct FLinearColor> CachedLinerColorMap; // 0x38(0x50)
	struct TMap<struct FString, struct FSlateColor> CachedSlateColorMap; // 0x88(0x50)
	char pad_D8[0x38]; // 0xd8(0x38)

	void Reset(); // Function GPUserInterface.GPColorManager.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.GPPersistentRootUIBase
// Size: 0x580 (Inherited: 0x550)
class UGPPersistentRootUIBase : public ULuaUIBaseView {
public:

	char pad_550[0x18]; // 0x550(0x18)
	struct UCanvasPanel* UIContent; // 0x568(0x08)
	char pad_570[0x10]; // 0x570(0x10)

	bool RemoveUI(struct UWidget* UIIns); // Function GPUserInterface.GPPersistentRootUIBase.RemoveUI // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.GPUIManager
// Size: 0xd8 (Inherited: 0x38)
class UGPUIManager : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnPersistentRootFinished[0x10]; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
	struct UGPPersistentRootUIBase* PersistentRootUIView; // 0x58(0x08)
	enum class EWorkingState CurWorkingState; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct FWaitingInfo> WaitingInfoQueue; // 0x68(0x10)
	struct UDataTable* UIBPAssetTable; // 0x78(0x08)
	struct TMap<struct FString, uint64_t> BPLoadingMap; // 0x80(0x50)
	char pad_D0[0x8]; // 0xd0(0x08)

	void Reset(); // Function GPUserInterface.GPUIManager.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.GPUserInterfaceDelegates
// Size: 0x30 (Inherited: 0x30)
class UGPUserInterfaceDelegates : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.GPUserInterfaceGlobalDelegates
// Size: 0x48 (Inherited: 0x38)
class UGPUserInterfaceGlobalDelegates : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnDFButtonClickedWithID[0x10]; // 0x38(0x10)

	struct UGPUserInterfaceGlobalDelegates* STATIC_Get(struct UObject* WorldContext); // Function GPUserInterface.GPUserInterfaceGlobalDelegates.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.GPUserInterfaceInputSystemManagerLite
// Size: 0x50 (Inherited: 0x38)
class UGPUserInterfaceInputSystemManagerLite : public UGPSubsystemBase {
public:

	char pad_38[0x10]; // 0x38(0x10)
	struct TWeakObjectPtr<struct UWorld> CurWorld; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.GPUserInterfaceUtil
// Size: 0x30 (Inherited: 0x30)
class UGPUserInterfaceUtil : public UObject {
public:


	void STATIC_WaitUntilWidgetVisible(struct UObject* WorldContextObject, struct UWidget* InWidget, struct FLatentActionInfo LatentInfo); // Function GPUserInterface.GPUserInterfaceUtil.WaitUntilWidgetVisible // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFUserWidgetBase
// Size: 0x2d8 (Inherited: 0x298)
class UDFUserWidgetBase : public UUserWidget {
public:

	enum class EFlowAnimType FlowAnimType; // 0x298(0x01)
	bool bMuteWhenDisableStyle; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)
	/*struct FMulticastInlineDelegate*/char OnEnableStyleChanged[0x10]; // 0x2a0(0x10)
	char pad_2B0[0x28]; // 0x2b0(0x28)

	void StopAutoAnimation(struct FString AnimationName); // Function GPUserInterface.DFUserWidgetBase.StopAutoAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFNamedSlot
// Size: 0x190 (Inherited: 0x190)
class UDFNamedSlot : public UNamedSlot {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFContainerBase
// Size: 0x190 (Inherited: 0x180)
class UDFContainerBase : public UContentWidget {
public:

	char pad_180[0x10]; // 0x180(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFListView
// Size: 0x3c8 (Inherited: 0x3c8)
class UDFListView : public UListView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFImage
// Size: 0x350 (Inherited: 0x2e0)
class UDFImage : public UImage {
public:

	bool bLazyLoadBrush; // 0x2e0(0x01)
	bool bAutoLazyLoadBrush; // 0x2e1(0x01)
	char pad_2E2[0x6]; // 0x2e2(0x06)
	/*struct TSoftObjectPtr<UObject>*/char ResourceSoftObject[0x28]; // 0x2e8(0x28)
	struct FSoftObjectPath CurrentLoadingBrush; // 0x310(0x18)
	bool bKeepColor; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	struct FLinearColor CachedColorAndOpacity; // 0x32c(0x10)
	char pad_33C[0x14]; // 0x33c(0x14)

	void SetImage(struct UObject* ImageAsset, bool bAutoResize); // Function GPUserInterface.DFImage.SetImage // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFRichTextBlock
// Size: 0x798 (Inherited: 0x798)
class UDFRichTextBlock : public URichTextBlock {
public:


	void SetLineHeightPercentage(float InLineHeightPercentage); // Function GPUserInterface.DFRichTextBlock.SetLineHeightPercentage // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFBidirectionalSlider
// Size: 0x328 (Inherited: 0x2d8)
class UDFBidirectionalSlider : public UDFUserWidgetBase {
public:

	struct UDFSlider* SliderLeft; // 0x2d8(0x08)
	struct UDFSlider* SliderRight; // 0x2e0(0x08)
	struct UDFProgressBar* ProgressBar; // 0x2e8(0x08)
	float SliderBarWidth; // 0x2f0(0x04)
	float LeftValue; // 0x2f4(0x04)
	float RightValue; // 0x2f8(0x04)
	float StepValue; // 0x2fc(0x04)
	float LastLeftValue; // 0x300(0x04)
	float LastRightValue; // 0x304(0x04)
	float MinValue; // 0x308(0x04)
	float MaxValue; // 0x30c(0x04)
	float StepValueDecimalPlaces; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	/*struct FMulticastInlineDelegate*/char OnValueUpdated[0x10]; // 0x318(0x10)

	void SetStepValue(float InStepValue); // Function GPUserInterface.DFBidirectionalSlider.SetStepValue // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonAddDecHolder
// Size: 0x340 (Inherited: 0x2d8)
class UDFCommonAddDecHolder : public UDFUserWidgetBase {
public:

	struct UDFButton* ButtonAdd; // 0x2d8(0x08)
	struct UDFButton* ButtonDec; // 0x2e0(0x08)
	struct UDFNamedSlot* SlotContainer; // 0x2e8(0x08)
	int32_t PreNum; // 0x2f0(0x04)
	int32_t CurNum; // 0x2f4(0x04)
	int32_t MinNum; // 0x2f8(0x04)
	int32_t MaxNum; // 0x2fc(0x04)
	int32_t StepNum; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	/*struct FMulticastInlineDelegate*/char OnAddDecCurNumChanged[0x10]; // 0x308(0x10)
	/*struct FDelegate*/char OnHandleCustomAddClicked[0x10]; // 0x318(0x10)
	/*struct FDelegate*/char OnHandleCustomDecClicked[0x10]; // 0x328(0x10)
	bool bShowDisableTips; // 0x338(0x01)
	bool bAutoSaved; // 0x339(0x01)
	char pad_33A[0x6]; // 0x33a(0x06)

	void ManelSaveCurNum(); // Function GPUserInterface.DFCommonAddDecHolder.ManelSaveCurNum // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonAddDecInputBox
// Size: 0x308 (Inherited: 0x2d8)
class UDFCommonAddDecInputBox : public UDFUserWidgetBase {
public:

	struct UDFCommonAddDecHolder* DFCommonAddDecHolder; // 0x2d8(0x08)
	struct UDFEditableTextBox* AddDecInputBox; // 0x2e0(0x08)
	/*struct FMulticastInlineDelegate*/char OnAddDecInputBoxCurNumChanged[0x10]; // 0x2e8(0x10)
	/*struct FMulticastInlineDelegate*/char OnAddDecInputBoxCurNumCommitted[0x10]; // 0x2f8(0x10)

	void InitNum(int32_t InCurNum, int32_t InStepNum, int32_t InMinNum, int32_t InMaxNum); // Function GPUserInterface.DFCommonAddDecInputBox.InitNum // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonAddDecSlider
// Size: 0x318 (Inherited: 0x2d8)
class UDFCommonAddDecSlider : public UDFUserWidgetBase {
public:

	struct UDFCommonAddDecHolder* DFCommonAddDecHolder; // 0x2d8(0x08)
	struct UDFSlider* AddDecSlider; // 0x2e0(0x08)
	struct UDFProgressBar* AddDecSliderBar; // 0x2e8(0x08)
	/*struct FMulticastInlineDelegate*/char OnAddDecSliderMouseCaptureEnd[0x10]; // 0x2f0(0x10)
	/*struct FMulticastInlineDelegate*/char OnAddDecSliderCurNumChanged[0x10]; // 0x300(0x10)
	char pad_310[0x8]; // 0x310(0x08)

	void SetBandMinValue(int32_t InBandMinValue, bool bInBandMinValue); // Function GPUserInterface.DFCommonAddDecSlider.SetBandMinValue // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonButton
// Size: 0x27d8 (Inherited: 0x2d8)
class UDFCommonButton : public UDFUserWidgetBase {
public:

	enum class EButtonState ButtonState; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	struct FMargin CustomExtendHitForButton; // 0x2dc(0x10)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UDFButton* ButtonInternal; // 0x2f0(0x08)
	struct UDFImage* ImageBackground; // 0x2f8(0x08)
	struct UDFImage* ImageIcon; // 0x300(0x08)
	struct UDFRichTextBlock* TextBlockMain; // 0x308(0x08)
	struct UDFImage* ImageHighLight; // 0x310(0x08)
	struct UDFCanvasPanel* ButtonPanel; // 0x318(0x08)
	bool bShowHighLight; // 0x320(0x01)
	bool bShowIcon; // 0x321(0x01)
	bool bShowMainTitle; // 0x322(0x01)
	bool bDesiredSize; // 0x323(0x01)
	float CustomSizeX; // 0x324(0x04)
	float CustomSizeY; // 0x328(0x04)
	enum class EDFButtonPresetStyleType PresetStyleType; // 0x32c(0x01)
	bool bCanEditStyle; // 0x32d(0x01)
	char pad_32E[0xa]; // 0x32e(0x0a)
	struct FDFBrushButtonStateStyle BackGroundStateStyle; // 0x338(0x518)
	struct FDFBrushButtonStateStyle ImageIconStateStyle; // 0x850(0x518)
	struct FDFRichTextBlockButtonStateStyle MainTitleStateStyle; // 0xd68(0x1958)
	struct FVector2D PressedScale; // 0x26c0(0x08)
	struct FName PressedSoundName; // 0x26c8(0x08)
	struct FName HoveredSoundName; // 0x26d0(0x08)
	int64_t ButtonID; // 0x26d8(0x08)
	enum class EGPUIFocusEffectType FocusEffectType; // 0x26e0(0x01)
	char pad_26E1[0x7]; // 0x26e1(0x07)
	/*struct FMulticastInlineDelegate*/char OnClicked[0x10]; // 0x26e8(0x10)
	/*struct FMulticastInlineDelegate*/char OnPressed[0x10]; // 0x26f8(0x10)
	/*struct FMulticastInlineDelegate*/char OnReleased[0x10]; // 0x2708(0x10)
	/*struct FMulticastInlineDelegate*/char OnHovered[0x10]; // 0x2718(0x10)
	/*struct FMulticastInlineDelegate*/char OnUnhovered[0x10]; // 0x2728(0x10)
	/*struct FMulticastInlineDelegate*/char OnFocusReceivedEvent[0x10]; // 0x2738(0x10)
	/*struct FMulticastInlineDelegate*/char OnFocusLostEvent[0x10]; // 0x2748(0x10)
	/*struct FMulticastInlineDelegate*/char OnDeClicked[0x10]; // 0x2758(0x10)
	/*struct FMulticastInlineDelegate*/char OnDePressed[0x10]; // 0x2768(0x10)
	/*struct FMulticastInlineDelegate*/char OnDeReleased[0x10]; // 0x2778(0x10)
	/*struct FMulticastInlineDelegate*/char OnDeHovered[0x10]; // 0x2788(0x10)
	/*struct FMulticastInlineDelegate*/char OnDeUnhovered[0x10]; // 0x2798(0x10)
	/*struct FMulticastInlineDelegate*/char OnReleasedNoClicked[0x10]; // 0x27a8(0x10)
	/*struct FMulticastInlineDelegate*/char OnButtonStateChanged[0x10]; // 0x27b8(0x10)
	char pad_27C8[0x2]; // 0x27c8(0x02)
	enum class EButtonHoverAnimType HoverAnimType; // 0x27ca(0x01)
	char pad_27CB[0xd]; // 0x27cb(0x0d)

	void SetPressedSoundName(struct FName InPressedSoundName); // Function GPUserInterface.DFCommonButton.SetPressedSoundName // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonCheckButton
// Size: 0x2818 (Inherited: 0x2d8)
class UDFCommonCheckButton : public UDFUserWidgetBase {
public:

	enum class ECheckButtonState CheckButtonState; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct UDFCheckBox* CheckBoxInternal; // 0x2e0(0x08)
	struct UDFImage* ImageBackground; // 0x2e8(0x08)
	struct UDFImage* ImageIcon; // 0x2f0(0x08)
	struct UDFRichTextBlock* TextBlockMain; // 0x2f8(0x08)
	struct UDFImage* ImageHighLight; // 0x300(0x08)
	struct UDFCanvasPanel* ButtonPanel; // 0x308(0x08)
	struct UDFNamedSlot* NamedSlot; // 0x310(0x08)
	bool bShowHighLight; // 0x318(0x01)
	bool bShowIcon; // 0x319(0x01)
	bool bShowMainTitle; // 0x31a(0x01)
	bool bBPLockState; // 0x31b(0x01)
	bool bDesiredSize; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	float CustomSizeX; // 0x320(0x04)
	float CustomSizeY; // 0x324(0x04)
	enum class EDFCheckButtonPresetStyleType PresetStyleType; // 0x328(0x01)
	bool bCanEditStyle; // 0x329(0x01)
	char pad_32A[0xe]; // 0x32a(0x0e)
	struct FDFBrushCheckStateStyle BackGroundStateStyle; // 0x338(0x518)
	struct FDFBrushCheckStateStyle ImageIconStateStyle; // 0x850(0x518)
	struct FDFRichTextBlockCheckStateStyle MainTitleStateStyle; // 0xd68(0x1958)
	struct FVector2D PressedScale; // 0x26c0(0x08)
	struct FName CheckedSoundName; // 0x26c8(0x08)
	struct FName UncheckedSoundName; // 0x26d0(0x08)
	struct FName HoveredSoundName; // 0x26d8(0x08)
	int64_t ButtonID; // 0x26e0(0x08)
	enum class EGPUIFocusEffectType FocusEffectType; // 0x26e8(0x01)
	char pad_26E9[0x7]; // 0x26e9(0x07)
	/*struct FMulticastInlineDelegate*/char OnCheckButtonStateChanged[0x10]; // 0x26f0(0x10)
	/*struct FMulticastInlineDelegate*/char OnUncheckedClicked[0x10]; // 0x2700(0x10)
	/*struct FMulticastInlineDelegate*/char OnUncheckedPressed[0x10]; // 0x2710(0x10)
	/*struct FMulticastInlineDelegate*/char OnUncheckedReleased[0x10]; // 0x2720(0x10)
	/*struct FMulticastInlineDelegate*/char OnUncheckedHovered[0x10]; // 0x2730(0x10)
	/*struct FMulticastInlineDelegate*/char OnUncheckedUnhovered[0x10]; // 0x2740(0x10)
	/*struct FMulticastInlineDelegate*/char OnUncheckedReleasedNoClicked[0x10]; // 0x2750(0x10)
	/*struct FMulticastInlineDelegate*/char OnCheckedClicked[0x10]; // 0x2760(0x10)
	/*struct FMulticastInlineDelegate*/char OnCheckedPressed[0x10]; // 0x2770(0x10)
	/*struct FMulticastInlineDelegate*/char OnCheckedReleased[0x10]; // 0x2780(0x10)
	/*struct FMulticastInlineDelegate*/char OnCheckedReleasedNoClicked[0x10]; // 0x2790(0x10)
	/*struct FMulticastInlineDelegate*/char OnCheckedHovered[0x10]; // 0x27a0(0x10)
	/*struct FMulticastInlineDelegate*/char OnCheckedUnhovered[0x10]; // 0x27b0(0x10)
	/*struct FMulticastInlineDelegate*/char OnCheckedBoxStateChangedNative[0x10]; // 0x27c0(0x10)
	/*struct FMulticastInlineDelegate*/char OnCheckFailed[0x10]; // 0x27d0(0x10)
	/*struct FDelegate*/char OnGetCanBeChecked[0x10]; // 0x27e0(0x10)
	char pad_27F0[0x1c]; // 0x27f0(0x1c)
	enum class ECheckButtonHoverAnimType HoverAnimType; // 0x280c(0x01)
	char pad_280D[0xb]; // 0x280d(0x0b)

	void SetNamedSlotVisibility(enum class ESlateVisibility InVisibility); // Function GPUserInterface.DFCommonCheckButton.SetNamedSlotVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonTabWidget
// Size: 0x3f8 (Inherited: 0x2d8)
class UDFCommonTabWidget : public UDFUserWidgetBase {
public:

	enum class ETabType TabType; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct UClass* ItemWidgetTemplateClass; // 0x2e0(0x08)
	int32_t EditorPreviewItemCount; // 0x2e8(0x04)
	int32_t EditorPreviewCheckIndex; // 0x2ec(0x04)
	bool bUseBlueprintConfig; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct TArray<struct FDFCommonTabContent> TabContents; // 0x2f8(0x10)
	enum class ESizeMode SizeMode; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	int32_t TabGid; // 0x30c(0x04)
	float TabWidth; // 0x310(0x04)
	float TabHeight; // 0x314(0x04)
	bool bAutoSize; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float OptionWidth; // 0x31c(0x04)
	float OptionHeight; // 0x320(0x04)
	struct FMargin TabPadding; // 0x324(0x10)
	int32_t Row; // 0x334(0x04)
	int32_t Column; // 0x338(0x04)
	struct FVector2D ItemSpacing; // 0x33c(0x08)
	enum class ESlateVisibility ItemVisibility; // 0x344(0x01)
	enum class EOrientation Orientation; // 0x345(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x346(0x01)
	char pad_347[0x1]; // 0x347(0x01)
	struct UDFScrollGridBox* ScrollGridBox; // 0x348(0x08)
	struct UPanelWidget* CustomTabContainer; // 0x350(0x08)
	struct UNamedSlot* EmptyBackground; // 0x358(0x08)
	struct UCanvasPanel* ScrollCanvas; // 0x360(0x08)
	struct TArray<struct UWidget*> CachedItems; // 0x368(0x10)
	/*struct FDelegate*/char OnUserProcessItemWidget[0x10]; // 0x378(0x10)
	/*struct FDelegate*/char OnUserGetItemCount[0x10]; // 0x388(0x10)
	/*struct FMulticastInlineDelegate*/char OnUserProcessItemsUpdateFinished[0x10]; // 0x398(0x10)
	/*struct FDelegate*/char OnTabIndexChanged[0x10]; // 0x3a8(0x10)
	/*struct FMulticastInlineDelegate*/char OnTabIndexChangedMulti[0x10]; // 0x3b8(0x10)
	/*struct FMulticastInlineDelegate*/char OnTabRefreshed[0x10]; // 0x3c8(0x10)
	bool bGroupHoverAnim; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct TArray<struct UWrapTabClickDelegate*> CacheDelegates; // 0x3e0(0x10)
	char pad_3F0[0x4]; // 0x3f0(0x04)
	bool bBPConfigItemWidgetTemplateClass; // 0x3f4(0x01)
	char pad_3F5[0x3]; // 0x3f5(0x03)

	struct UDFCommonCheckButton* TryGetCheckButton(struct UWidget* ItemWidget); // Function GPUserInterface.DFCommonTabWidget.TryGetCheckButton // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonFilterWidget
// Size: 0x330 (Inherited: 0x2d8)
class UDFCommonFilterWidget : public UDFUserWidgetBase {
public:

	enum class EFilterStateType WidgetFilterStateType; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FText MainText; // 0x2e0(0x18)
	struct UDFButton* DFButtonFilter; // 0x2f8(0x08)
	struct UDFImage* DFImageArrow; // 0x300(0x08)
	struct UDFTextBlock* TextBlockMain; // 0x308(0x08)
	/*struct FMulticastInlineDelegate*/char OnFilterStateTypeChanged[0x10]; // 0x310(0x10)
	/*struct FMulticastInlineDelegate*/char OnFilterButtonClicked[0x10]; // 0x320(0x10)

	void SetMainTitleText(struct FText LuaText); // Function GPUserInterface.DFCommonFilterWidget.SetMainTitleText // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonProgressBar
// Size: 0x338 (Inherited: 0x2d8)
class UDFCommonProgressBar : public UDFUserWidgetBase {
public:

	char pad_2D8[0x20]; // 0x2d8(0x20)
	struct UDFImage* DFImageBg; // 0x2f8(0x08)
	struct UDFProgressBar* DFProgressBarMain; // 0x300(0x08)
	struct UDFRadialImage* DFRadialImageMask; // 0x308(0x08)
	float CurrentPercent; // 0x310(0x04)
	float LerpTotalTime; // 0x314(0x04)
	bool bImageMaskHide; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct UCurveFloat* LerpCurve; // 0x320(0x08)
	/*struct FMulticastInlineDelegate*/char OnFloatPercentChanged[0x10]; // 0x328(0x10)

	void SetPercent(float InPercent); // Function GPUserInterface.DFCommonProgressBar.SetPercent // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonSlider
// Size: 0x328 (Inherited: 0x2d8)
class UDFCommonSlider : public UDFUserWidgetBase {
public:

	struct UDFSlider* Slider; // 0x2d8(0x08)
	struct UDFProgressBar* ProgressBar; // 0x2e0(0x08)
	struct UDFButton* ButtonLeft; // 0x2e8(0x08)
	struct UDFButton* ButtonRight; // 0x2f0(0x08)
	float Value; // 0x2f8(0x04)
	float LastValue; // 0x2fc(0x04)
	float StepValue; // 0x300(0x04)
	float LastStepValue; // 0x304(0x04)
	float MaxValue; // 0x308(0x04)
	float MinValue; // 0x30c(0x04)
	float StepValueDecimalPlaces; // 0x310(0x04)
	bool MouseUsesStep; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	/*struct FMulticastInlineDelegate*/char OnValueUpdated[0x10]; // 0x318(0x10)

	void SetStepValue(float InStepValue); // Function GPUserInterface.DFCommonSlider.SetStepValue // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonTabGroupWidget
// Size: 0x3d0 (Inherited: 0x2d8)
class UDFCommonTabGroupWidget : public UDFUserWidgetBase {
public:

	struct UClass* ItemWidgetTemplateClass; // 0x2d8(0x08)
	int32_t EditorPreviewTabGroupItemCount; // 0x2e0(0x04)
	int32_t EditorPreviewMainCheckIndex; // 0x2e4(0x04)
	enum class ESlateVisibility ScrollBarVisibility; // 0x2e8(0x01)
	bool bAutoSelectSubTab; // 0x2e9(0x01)
	bool bUseBlueprintConfig; // 0x2ea(0x01)
	char pad_2EB[0x5]; // 0x2eb(0x05)
	struct TArray<struct FDFCommonTabGroupContent> TabGroupContents; // 0x2f0(0x10)
	struct TArray<struct UDFCommonTabGroupItem*> TabGroupItemList; // 0x300(0x10)
	struct TArray<int32_t> TabGroupDataCounts; // 0x310(0x10)
	struct UDFScrollBox* ScrollBoxRoot; // 0x320(0x08)
	struct UNamedSlot* EmptyBackground; // 0x328(0x08)
	struct UCanvasPanel* ScrollCanvas; // 0x330(0x08)
	/*struct FDelegate*/char OnMainTabClicked[0x10]; // 0x338(0x10)
	/*struct FDelegate*/char OnSubTabClicked[0x10]; // 0x348(0x10)
	/*struct FDelegate*/char OnGetTabGroupDataCounts[0x10]; // 0x358(0x10)
	/*struct FMulticastInlineDelegate*/char OnTabGroupDataCountChanged[0x10]; // 0x368(0x10)
	/*struct FDelegate*/char OnUserCreateTabGroupItemWidget[0x10]; // 0x378(0x10)
	/*struct FDelegate*/char OnUserProcessTabSubItemWidget[0x10]; // 0x388(0x10)
	/*struct FDelegate*/char OnUserPreviewTabGroupItemWidget[0x10]; // 0x398(0x10)
	struct TArray<struct UWrapTabGroupClickDelegate*> CacheDelegates; // 0x3a8(0x10)
	char pad_3B8[0x18]; // 0x3b8(0x18)

	struct UDFCommonTabGroupItem* TryGetTabGroupItem(int32_t SlotIndex); // Function GPUserInterface.DFCommonTabGroupWidget.TryGetTabGroupItem // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonTabNavigatorBase
// Size: 0x2d8 (Inherited: 0x2d8)
class UDFCommonTabNavigatorBase : public UDFUserWidgetBase {
public:


	void UnbindActions(); // Function GPUserInterface.DFCommonTabNavigatorBase.UnbindActions // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonTabSelectionBar
// Size: 0x348 (Inherited: 0x2d8)
class UDFCommonTabSelectionBar : public UDFUserWidgetBase {
public:

	struct UCurveVector* LerpCurve; // 0x2d8(0x08)
	struct UDFCommonTabWidget* ParentTab; // 0x2e0(0x08)
	struct UWidget* BarWidget; // 0x2e8(0x08)
	struct UCanvasPanelSlot* CachedSlot; // 0x2f0(0x08)
	char pad_2F8[0x50]; // 0x2f8(0x50)

	void OnTabRefreshed(); // Function GPUserInterface.DFCommonTabSelectionBar.OnTabRefreshed // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFDJWSubTabList
// Size: 0x2f8 (Inherited: 0x2d8)
class UDFDJWSubTabList : public UDFUserWidgetBase {
public:

	struct UDFVerticalBox* SubTabList; // 0x2d8(0x08)
	struct UClass* TabCheckButton; // 0x2e0(0x08)
	/*struct FDelegate*/char OnProcessBtnItemWidget[0x10]; // 0x2e8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFSecondLevelCommonTab
// Size: 0x3a8 (Inherited: 0x2d8)
class UDFSecondLevelCommonTab : public UDFUserWidgetBase {
public:

	struct UCanvasPanel* ScrollCanvas; // 0x2d8(0x08)
	struct UDFWaterfallScrollView* MainTabList; // 0x2e0(0x08)
	struct UClass* SubTabWidget; // 0x2e8(0x08)
	struct UClass* TabCheckButton; // 0x2f0(0x08)
	int32_t CurIndex; // 0x2f8(0x04)
	int32_t SubIndex; // 0x2fc(0x04)
	bool isDrop; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	struct UDFDJWSubTabList* SubTabListWidget; // 0x308(0x08)
	struct TArray<struct UDFDJWMainTab*> MainTabBtnList; // 0x310(0x10)
	/*struct FDelegate*/char OnGetMainItemCount[0x10]; // 0x320(0x10)
	/*struct FDelegate*/char OnProcessMainItemWidgetEvent[0x10]; // 0x330(0x10)
	/*struct FDelegate*/char OnGetSubItemCount[0x10]; // 0x340(0x10)
	/*struct FDelegate*/char OnProcessSubItemWidgetEvent[0x10]; // 0x350(0x10)
	/*struct FDelegate*/char OnTabIndexChange[0x10]; // 0x360(0x10)
	/*struct FDelegate*/char OnProcessSubItemsUpdateFinished[0x10]; // 0x370(0x10)
	char pad_380[0x8]; // 0x380(0x08)
	struct TArray<struct UMainTabChangeObject*> CacheDelegates; // 0x388(0x10)
	struct TArray<struct USubTabChangeObject*> CacheSubDelegates; // 0x398(0x10)

	void RefreshTabItem(); // Function GPUserInterface.DFSecondLevelCommonTab.RefreshTabItem // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFSpineWidget
// Size: 0x318 (Inherited: 0x2d8)
class UDFSpineWidget : public UDFUserWidgetBase {
public:

	struct USpineAtlasAsset* AltasAsset; // 0x2d8(0x08)
	struct USpineSkeletonDataAsset* SkelDataAsset; // 0x2e0(0x08)
	struct FString IdleAnimName; // 0x2e8(0x10)
	struct FLinearColor SpineColor; // 0x2f8(0x10)
	struct USpineWidget* SpineWidget_P; // 0x308(0x08)
	char pad_310[0x8]; // 0x310(0x08)

	void SetTimeScale(float TimeScale); // Function GPUserInterface.DFSpineWidget.SetTimeScale // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFBlurSlotReContainer
// Size: 0x1b8 (Inherited: 0x190)
class UDFBlurSlotReContainer : public UDFNamedSlot {
public:

	struct FSoftObjectPath BlurWidgetPath; // 0x190(0x18)
	struct FString FullPath; // 0x1a8(0x10)

	void OnBlurWidgetLoaded(struct FSoftObjectPath SoftObject); // Function GPUserInterface.DFBlurSlotReContainer.OnBlurWidgetLoaded // (Final|Native|Protected|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCanvasPosReContainer
// Size: 0x1f0 (Inherited: 0x190)
class UDFCanvasPosReContainer : public UDFContainerBase {
public:

	struct FAnchorData AnchorDataHD; // 0x190(0x28)
	struct FAnchorData AnchorDataMobile; // 0x1b8(0x28)
	char pad_1E0[0x10]; // 0x1e0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFColorReContainer
// Size: 0x1d0 (Inherited: 0x190)
class UDFColorReContainer : public UDFContainerBase {
public:

	struct FLinearColor ColorAndOpacity; // 0x190(0x10)
	struct FLinearColor LinearColorHD; // 0x1a0(0x10)
	struct FLinearColor LinearColorMobile; // 0x1b0(0x10)
	char pad_1C0[0x10]; // 0x1c0(0x10)

	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function GPUserInterface.DFColorReContainer.SetColorAndOpacity // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFVisibilityReContainer
// Size: 0x1a8 (Inherited: 0x190)
class UDFVisibilityReContainer : public UDFContainerBase {
public:

	enum class ESlateVisibility SlateVisibilityHD; // 0x190(0x01)
	enum class ESlateVisibility SlateVisibilityMobile; // 0x191(0x01)
	char pad_192[0x16]; // 0x192(0x16)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCustomListView
// Size: 0x3d0 (Inherited: 0x3c8)
class UDFCustomListView : public UDFListView {
public:

	char bScrollBarVisible : 1; // 0x3c8(0x01)
	char pad_3C8_1 : 7; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFHttpImage
// Size: 0x388 (Inherited: 0x350)
class UDFHttpImage : public UDFImage {
public:

	struct FString Http_Url; // 0x350(0x10)
	/*struct FMulticastInlineDelegate*/char DFHttpImageSetImageFinishDelegate[0x10]; // 0x360(0x10)
	struct URuntimeFilesDownloaderProxy* DownloaderProxy; // 0x370(0x08)
	char pad_378[0x10]; // 0x378(0x10)

	void SetHttpImage(struct FString URL); // Function GPUserInterface.DFHttpImage.SetHttpImage // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFLEDRichTextBlock
// Size: 0x7d0 (Inherited: 0x798)
class UDFLEDRichTextBlock : public UDFRichTextBlock {
public:

	char pad_798[0x18]; // 0x798(0x18)
	enum class ETextChecked CheckedStyle; // 0x7b0(0x01)
	char pad_7B1[0x3]; // 0x7b1(0x03)
	float LEDSpeed; // 0x7b4(0x04)
	float StartLEDX; // 0x7b8(0x04)
	float EndLEDX; // 0x7bc(0x04)
	char pad_7C0[0x10]; // 0x7c0(0x10)

	void SetInCheckedStyle(enum class ETextChecked InCheckedStyle); // Function GPUserInterface.DFLEDRichTextBlock.SetInCheckedStyle // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonDropDownBox
// Size: 0xed0 (Inherited: 0x3f8)
class UDFCommonDropDownBox : public UDFCommonTabWidget {
public:

	struct UClass* DropDownItemWidgetTemplateClass; // 0x3f8(0x08)
	bool bDirectionIsDown; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FDFBrushCheckStateStyle DirectionUpArrowStyle; // 0x408(0x518)
	struct FDFBrushCheckStateStyle DirectionDownArrowStyle; // 0x920(0x518)
	bool bShowItemRightText; // 0xe38(0x01)
	char pad_E39[0x7]; // 0xe39(0x07)
	struct TArray<int32_t> DisabledItems; // 0xe40(0x10)
	bool bClickOptionCloseDropDownMenu; // 0xe50(0x01)
	bool bDropDownMenuHideWhenUnfocus; // 0xe51(0x01)
	bool bDropDownMenuHideWhenMove; // 0xe52(0x01)
	char pad_E53[0x1]; // 0xe53(0x01)
	/*struct FDelegate*/char OnDropDownBoxProcessItemWidget[0x10]; // 0xe54(0x10)
	/*struct FDelegate*/char OnDropDownBoxIndexChanged[0x10]; // 0xe64(0x10)
	char pad_E74[0x4]; // 0xe74(0x04)
	struct UDFCommonCheckButton* DFCommonCheckButton; // 0xe78(0x08)
	struct UMenuAnchor* MenuAnchor; // 0xe80(0x08)
	struct UCanvasPanel* DFCanvasPanel_Collapsed; // 0xe88(0x08)
	struct USizeBox* DFSizeBox_InMenuAnchor; // 0xe90(0x08)
	bool bMenuInShow; // 0xe98(0x01)
	char pad_E99[0x3]; // 0xe99(0x03)
	int32_t CheckBtnState; // 0xe9c(0x04)
	bool bJustCloseMenuDueToUnfocus; // 0xea0(0x01)
	bool bCurDirectionIsDown; // 0xea1(0x01)
	bool bCurMenuAnchorDirectionIsDown; // 0xea2(0x01)
	char pad_EA3[0x5]; // 0xea3(0x05)
	struct TArray<struct FDropDownItemData> ItemsData; // 0xea8(0x10)
	struct FTimerHandle TickWhenMenuOpenTimerHandle; // 0xeb8(0x08)
	struct FVector2D OriginLocation; // 0xec0(0x08)
	struct FVector2D LastMenuPosition; // 0xec8(0x08)

	void TickWhenMenuOpen(); // Function GPUserInterface.DFCommonDropDownBox.TickWhenMenuOpen // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPUserInterface.DFCommonTabGroupItem
// Size: 0x458 (Inherited: 0x3f8)
class UDFCommonTabGroupItem : public UDFCommonTabWidget {
public:

	struct UDFCommonCheckButton* DFCommonCheckButton; // 0x3f8(0x08)
	bool bDropDown; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FDFCommonTabContent MainTabContent; // 0x408(0x40)
	/*struct FMulticastInlineDelegate*/char OnTabGroupDropDownChanged[0x10]; // 0x448(0x10)

	void SetMainTabIndex(int32_t MainTabIndex); // Function GPUserInterface.DFCommonTabGroupItem.SetMainTabIndex // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
