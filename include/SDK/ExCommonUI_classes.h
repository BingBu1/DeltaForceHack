
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ExCommonUI.ExCommonAnimatedSwitcher
// Size: 0x1f0 (Inherited: 0x198)
class UExCommonAnimatedSwitcher : public UWidgetSwitcher {
public:

	char pad_198[0x18]; // 0x198(0x18)
	enum class EExCommonSwitcherTransition TransitionType; // 0x1b0(0x01)
	enum class ETransitionCurve TransitionCurveType; // 0x1b1(0x01)
	char pad_1B2[0x2]; // 0x1b2(0x02)
	float TransitionDuration; // 0x1b4(0x04)
	char pad_1B8[0x38]; // 0x1b8(0x38)

	void SetDisableTransitionAnimation(bool bDisableAnimation); // Function ExCommonUI.ExCommonAnimatedSwitcher.SetDisableTransitionAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonBorderStyle
// Size: 0xc0 (Inherited: 0x30)
class UExCommonBorderStyle : public UObject {
public:

	struct FSlateBrush Background; // 0x30(0x90)

	void GetBackgroundBrush(struct FSlateBrush& Brush); // Function ExCommonUI.ExCommonBorderStyle.GetBackgroundBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonBorder
// Size: 0x2f8 (Inherited: 0x2d8)
class UExCommonBorder : public UBorder {
public:

	struct UClass* Style; // 0x2d8(0x08)
	bool bReducePaddingBySafezone; // 0x2e0(0x01)
	char pad_2E1[0x3]; // 0x2e1(0x03)
	struct FMargin MinimumPadding; // 0x2e4(0x10)
	char pad_2F4[0x4]; // 0x2f4(0x04)

	void SetStyle(struct UClass* InStyle); // Function ExCommonUI.ExCommonBorder.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonCarouselNavBarPro
// Size: 0x1b0 (Inherited: 0x168)
class UExCommonCarouselNavBarPro : public UWidget {
public:

	struct UClass* ButtonWidgetType; // 0x168(0x08)
	struct FMargin ButtonPadding; // 0x170(0x10)
	/*struct FMulticastInlineDelegate*/char OnNavBtnInitPro[0x10]; // 0x180(0x10)
	char pad_190[0x10]; // 0x190(0x10)
	struct UExCommonWidgetCarouselProBase* LinkedCarousel; // 0x1a0(0x08)
	struct UExCommonCarouselNavButtonGroup* ButtonGroup; // 0x1a8(0x08)

	void SetLinkedCarousel(struct UExCommonWidgetCarouselProBase* CommonCarousel); // Function ExCommonUI.ExCommonCarouselNavBarPro.SetLinkedCarousel // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonCarouselNavButton
// Size: 0x2c0 (Inherited: 0x298)
class UExCommonCarouselNavButton : public UUserWidget {
public:

	/*struct FMulticastInlineDelegate*/char OnSelectedChanged[0x10]; // 0x298(0x10)
	struct UButton* NavButton; // 0x2a8(0x08)
	float HoverOpacity; // 0x2b0(0x04)
	float UnHoverOpacity; // 0x2b4(0x04)
	bool bIsBindHover; // 0x2b8(0x01)
	bool bIsBindClick; // 0x2b9(0x01)
	char pad_2BA[0x6]; // 0x2ba(0x06)

	void OnSelectHandle(); // Function ExCommonUI.ExCommonCarouselNavButton.OnSelectHandle // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonCustomNavigation
// Size: 0x2e8 (Inherited: 0x2d8)
class UExCommonCustomNavigation : public UBorder {
public:

	/*struct FDelegate*/char OnNavigationEvent[0x10]; // 0x2d8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonHierarchicalScrollBox
// Size: 0x9b0 (Inherited: 0x9b0)
class UExCommonHierarchicalScrollBox : public UScrollBox {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonLazyImage
// Size: 0x3b0 (Inherited: 0x2e0)
class UExCommonLazyImage : public UImage {
public:

	struct FSlateBrush LoadingBackgroundBrush; // 0x2e0(0x90)
	struct FName MaterialTextureParamName; // 0x370(0x08)
	/*struct FMulticastInlineDelegate*/char BP_OnLoadingStateChanged[0x10]; // 0x378(0x10)
	char pad_388[0x28]; // 0x388(0x28)

	void SetMaterialTextureParamName(struct FName TextureParamName); // Function ExCommonUI.ExCommonLazyImage.SetMaterialTextureParamName // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonLazyWidget
// Size: 0x278 (Inherited: 0x168)
class UExCommonLazyWidget : public UWidget {
public:

	struct FSlateBrush LoadingBackgroundBrush; // 0x168(0x90)
	struct UUserWidget* Content; // 0x1f8(0x08)
	char pad_200[0x28]; // 0x200(0x28)
	/*struct FMulticastInlineDelegate*/char BP_OnLoadingStateChanged[0x10]; // 0x228(0x10)
	char pad_238[0x40]; // 0x238(0x40)

	void SetLazyContent(/*struct TSoftClassPtr<UObject> SoftWidget*/); // Function ExCommonUI.ExCommonLazyWidget.SetLazyContent // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.LoadGuardSlot
// Size: 0x68 (Inherited: 0x40)
class ULoadGuardSlot : public UPanelSlot {
public:

	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function ExCommonUI.LoadGuardSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonLoadGuard
// Size: 0x298 (Inherited: 0x180)
class UExCommonLoadGuard : public UContentWidget {
public:

	struct FSlateBrush LoadingBackgroundBrush; // 0x180(0x90)
	enum class EHorizontalAlignment ThrobberAlignment; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	struct FMargin ThrobberPadding; // 0x214(0x10)
	char pad_224[0x4]; // 0x224(0x04)
	struct FText LoadingText; // 0x228(0x18)
	struct UClass* TextStyle; // 0x240(0x08)
	/*struct FMulticastInlineDelegate*/char BP_OnLoadingStateChanged[0x10]; // 0x248(0x10)
	struct FSoftObjectPath SpinnerMaterialPath; // 0x258(0x18)
	char pad_270[0x28]; // 0x270(0x28)

	void SetLoadingText(struct FText& InLoadingText); // Function ExCommonUI.ExCommonLoadGuard.SetLoadingText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonPoolableWidgetInterface
// Size: 0x30 (Inherited: 0x30)
class UExCommonPoolableWidgetInterface : public UInterface {
public:


	void OnReleaseToPool(); // Function ExCommonUI.ExCommonPoolableWidgetInterface.OnReleaseToPool // (Native|Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonRichTextBlock
// Size: 0x7d0 (Inherited: 0x798)
class UExCommonRichTextBlock : public URichTextBlock {
public:

	enum class ERichTextInlineIconDisplayMode InlineIconDisplayMode; // 0x798(0x01)
	bool bTintInlineIcon; // 0x799(0x01)
	char pad_79A[0x6]; // 0x79a(0x06)
	struct UClass* DefaultTextStyleOverrideClass; // 0x7a0(0x08)
	float MobileTextBlockScale; // 0x7a8(0x04)
	char pad_7AC[0x4]; // 0x7ac(0x04)
	struct UClass* ScrollStyle; // 0x7b0(0x08)
	bool bDisplayAllCaps; // 0x7b8(0x01)
	char pad_7B9[0x17]; // 0x7b9(0x17)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonTextStyle
// Size: 0x160 (Inherited: 0x30)
class UExCommonTextStyle : public UObject {
public:

	struct FSlateFontInfo Font; // 0x30(0x58)
	struct FLinearColor Color; // 0x88(0x10)
	bool bUsesDropShadow; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FVector2D ShadowOffset; // 0x9c(0x08)
	struct FLinearColor ShadowColor; // 0xa4(0x10)
	struct FMargin Margin; // 0xb4(0x10)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FSlateBrush StrikeBrush; // 0xc8(0x90)
	float LineHeightPercentage; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)

	void GetStrikeBrush(struct FSlateBrush& OutStrikeBrush); // Function ExCommonUI.ExCommonTextStyle.GetStrikeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonTextScrollStyle
// Size: 0x48 (Inherited: 0x30)
class UExCommonTextScrollStyle : public UObject {
public:

	float Speed; // 0x30(0x04)
	float StartDelay; // 0x34(0x04)
	float EndDelay; // 0x38(0x04)
	float FadeInDelay; // 0x3c(0x04)
	float FadeOutDelay; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonUIEditorSettings
// Size: 0x88 (Inherited: 0x30)
class UExCommonUIEditorSettings : public UObject {
public:

	/*struct TSoftClassPtr<UObject>*/char TemplateTextStyle[0x28]; // 0x30(0x28)
	/*struct TSoftClassPtr<UObject>*/char TemplateBorderStyle[0x28]; // 0x58(0x28)
	char pad_80[0x8]; // 0x80(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonUIRichTextData
// Size: 0x38 (Inherited: 0x30)
class UExCommonUIRichTextData : public UObject {
public:

	struct UDataTable* InlineIconSet; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonUISettings
// Size: 0x160 (Inherited: 0x30)
class UExCommonUISettings : public UObject {
public:

	bool bAutoLoadData; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	/*struct TSoftObjectPtr<UObject>*/char DefaultImageResourceObject[0x28]; // 0x38(0x28)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char DefaultThrobberMaterial[0x28]; // 0x60(0x28)
	/*struct TSoftClassPtr<UObject>*/char DefaultRichTextDataClass[0x28]; // 0x88(0x28)
	char pad_B0[0x8]; // 0xb0(0x08)
	struct UObject* DefaultImageResourceObjectInstance; // 0xb8(0x08)
	struct UMaterialInterface* DefaultThrobberMaterialInstance; // 0xc0(0x08)
	struct FSlateBrush DefaultThrobberBrush; // 0xc8(0x90)
	struct UExCommonUIRichTextData* RichTextDataInstance; // 0x158(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonVideoPlayer
// Size: 0x280 (Inherited: 0x168)
class UExCommonVideoPlayer : public UWidget {
public:

	struct UMediaSource* Video; // 0x168(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x170(0x08)
	struct UMediaTexture* MediaTexture; // 0x178(0x08)
	struct UMaterial* VideoMaterial; // 0x180(0x08)
	struct UMediaSoundComponent* SoundComponent; // 0x188(0x08)
	struct FSlateBrush VideoBrush; // 0x190(0x90)
	char pad_220[0x60]; // 0x220(0x60)

	void SetVideo(struct UMediaSource* NewVideo); // Function ExCommonUI.ExCommonVideoPlayer.SetVideo // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonVisualAttachment
// Size: 0x1d0 (Inherited: 0x1b8)
class UExCommonVisualAttachment : public USizeBox {
public:

	struct FVector2D ContentAnchor; // 0x1b8(0x08)
	char pad_1C0[0x10]; // 0x1c0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonWidgetCarousel
// Size: 0x1c0 (Inherited: 0x180)
class UExCommonWidgetCarousel : public UPanelWidget {
public:

	int32_t ActiveWidgetIndex; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	/*struct FMulticastInlineDelegate*/char OnCurrentPageIndexChanged[0x10]; // 0x188(0x10)
	char pad_198[0x28]; // 0x198(0x28)

	void SetActiveWidgetIndex(int32_t Index); // Function ExCommonUI.ExCommonWidgetCarousel.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonWidgetGroupBase
// Size: 0x30 (Inherited: 0x30)
class UExCommonWidgetGroupBase : public UObject {
public:


	void RemoveWidget(struct UWidget* InWidget); // Function ExCommonUI.ExCommonWidgetGroupBase.RemoveWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonTextBlock
// Size: 0x3d0 (Inherited: 0x3a8)
class UExCommonTextBlock : public UTextBlock {
public:

	struct UClass* Style; // 0x3a8(0x08)
	struct UClass* ScrollStyle; // 0x3b0(0x08)
	bool bDisplayAllCaps; // 0x3b8(0x01)
	bool bAutoCollapseWithEmptyText; // 0x3b9(0x01)
	char pad_3BA[0x2]; // 0x3ba(0x02)
	float MobileFontSizeMultiplier; // 0x3bc(0x04)
	char pad_3C0[0x10]; // 0x3c0(0x10)

	void SetWrapTextWidth(int32_t InWrapTextAt); // Function ExCommonUI.ExCommonTextBlock.SetWrapTextWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonWidgetCarouselProBase
// Size: 0x2d8 (Inherited: 0x180)
class UExCommonWidgetCarouselProBase : public UPanelWidget {
public:

	struct UClass* WidgetType; // 0x180(0x08)
	bool bIsAutoScroll; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	float ScrollInterval; // 0x18c(0x04)
	char pad_190[0x1]; // 0x190(0x01)
	bool bIsVertical; // 0x191(0x01)
	enum class EWidgetCarouselCurve CarouselCurve; // 0x192(0x01)
	char pad_193[0x1]; // 0x193(0x01)
	int32_t StartPageIndex; // 0x194(0x04)
	float MoveSpeed; // 0x198(0x04)
	float MinMoveSpeed; // 0x19c(0x04)
	int32_t MaxPageOnce; // 0x1a0(0x04)
	int32_t WheelMaxPageOnce; // 0x1a4(0x04)
	int32_t MaxDragCount; // 0x1a8(0x04)
	int32_t PageSize; // 0x1ac(0x04)
	int32_t RenderSize; // 0x1b0(0x04)
	float WidgetInterval; // 0x1b4(0x04)
	float WidgetFadeOpacity; // 0x1b8(0x04)
	float WidgetMinOpacity; // 0x1bc(0x04)
	float WidgetFadeScale; // 0x1c0(0x04)
	float WidgetMinScale; // 0x1c4(0x04)
	float DragDistanceThreshold; // 0x1c8(0x04)
	float DragSpeedThreshold; // 0x1cc(0x04)
	float DragSensitivity; // 0x1d0(0x04)
	bool bIsSupportClick; // 0x1d4(0x01)
	bool bIsSupportDrag; // 0x1d5(0x01)
	char pad_1D6[0x2]; // 0x1d6(0x02)
	int32_t CacheSize; // 0x1d8(0x04)
	int32_t CacheUpdateStep; // 0x1dc(0x04)
	int32_t RenderUpdateStep; // 0x1e0(0x04)
	int32_t InterceptTimes; // 0x1e4(0x04)
	int32_t CanClickedPageCount; // 0x1e8(0x04)
	char pad_1EC[0x4]; // 0x1ec(0x04)
	/*struct FMulticastInlineDelegate*/char OnLoadOuterData[0x10]; // 0x1f0(0x10)
	/*struct FMulticastInlineDelegate*/char OnPageChanged[0x10]; // 0x200(0x10)
	/*struct FMulticastInlineDelegate*/char OnPageClicked[0x10]; // 0x210(0x10)
	/*struct FMulticastInlineDelegate*/char OnDragging[0x10]; // 0x220(0x10)
	char pad_230[0xa8]; // 0x230(0xa8)

	void SimpleInit(int32_t OverridePageSize, int32_t OverrideCacheSize); // Function ExCommonUI.ExCommonWidgetCarouselProBase.SimpleInit // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonCarouselNavButtonGroup
// Size: 0x78 (Inherited: 0x30)
class UExCommonCarouselNavButtonGroup : public UExCommonWidgetGroupBase {
public:

	/*struct FMulticastInlineDelegate*/char OnSelectedButtonChanged[0x10]; // 0x30(0x10)
	char pad_40[0x38]; // 0x40(0x38)

	void SelectPreviousButton(bool bAllowWrap); // Function ExCommonUI.ExCommonCarouselNavButtonGroup.SelectPreviousButton // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonDateTimeTextBlock
// Size: 0x410 (Inherited: 0x3d0)
class UExCommonDateTimeTextBlock : public UExCommonTextBlock {
public:

	char pad_3D0[0x40]; // 0x3d0(0x40)

	void SetTimespanValue(struct FTimespan InTimespan); // Function ExCommonUI.ExCommonDateTimeTextBlock.SetTimespanValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonNumericTextBlock
// Size: 0x470 (Inherited: 0x3d0)
class UExCommonNumericTextBlock : public UExCommonTextBlock {
public:

	/*struct FMulticastInlineDelegate*/char OnInterpolationStartedEvent[0x10]; // 0x3d0(0x10)
	/*struct FMulticastInlineDelegate*/char OnInterpolationUpdatedEvent[0x10]; // 0x3e0(0x10)
	/*struct FMulticastInlineDelegate*/char OnOutroEvent[0x10]; // 0x3f0(0x10)
	/*struct FMulticastInlineDelegate*/char OnInterpolationEndedEvent[0x10]; // 0x400(0x10)
	float CurrentNumericValue; // 0x410(0x04)
	enum class EExCommonNumericType NumericType; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	struct FExCommonNumberFormattingOptions FormattingSpecification; // 0x418(0x14)
	float EaseOutInterpolationExponent; // 0x42c(0x04)
	float InterpolationUpdateInterval; // 0x430(0x04)
	float PostInterpolationShrinkDuration; // 0x434(0x04)
	bool PerformSizeInterpolation; // 0x438(0x01)
	bool IsPercentage; // 0x439(0x01)
	char pad_43A[0x36]; // 0x43a(0x36)

	void SetNumericType(enum class EExCommonNumericType InNumericType); // Function ExCommonUI.ExCommonNumericTextBlock.SetNumericType // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonInfiniteScrollBoxPro
// Size: 0x2d8 (Inherited: 0x2d8)
class UExCommonInfiniteScrollBoxPro : public UExCommonWidgetCarouselProBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ExCommonUI.ExCommonWidgetCarouselPro
// Size: 0x2d8 (Inherited: 0x2d8)
class UExCommonWidgetCarouselPro : public UExCommonWidgetCarouselProBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
