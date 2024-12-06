
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPUserInterface.EButtonState
enum class EButtonState : int {
	Activated = 0,
	FocusReceived = 1,
	Hovered = 2,
	Pressed = 3,
	Deactivated = 4,
	DeFocusReceived = 5,
	DeHovered = 6,
	DePressed = 7,
	Disabled = 8,
	EButtonState_MAX = 9
};

// Enum GPUserInterface.ECheckButtonState
enum class ECheckButtonState : int {
	Checked = 0,
	CheckedFocusReceived = 1,
	CheckedHovered = 2,
	CheckedPressed = 3,
	Unchecked = 4,
	UncheckedFocusReceived = 5,
	UncheckedHovered = 6,
	UncheckedPressed = 7,
	Disabled = 8,
	ECheckButtonState_MAX = 9
};

// Enum GPUserInterface.EFilterStateType
enum class EFilterStateType : int {
	NoOrder = 0,
	InOrder = 1,
	DeOrder = 2,
	EFilterStateType_MAX = 3
};

// Enum GPUserInterface.ETipsTriggerReason
enum class ETipsTriggerReason : int {
	Hover = 0,
	Click = 1,
	ClickBlankSpace = 2,
	Manually = 3,
	OnClose = 4,
	ETipsTriggerReason_MAX = 5
};

// Enum GPUserInterface.ETipsConstrainMode
enum class ETipsConstrainMode : int {
	Free = 0,
	ConstrainInViewport = 1,
	ConstrainInTipsRoot = 2,
	ConstrainInWidgetByPath = 3,
	ETipsConstrainMode_MAX = 4
};

// Enum GPUserInterface.ETipsTriggerEventMode
enum class ETipsTriggerEventMode : int {
	BindNearestParent = 0,
	BindWidgetByPath = 1,
	Custom = 2,
	ETipsTriggerEventMode_MAX = 3
};

// Enum GPUserInterface.ETipsDirection
enum class ETipsDirection : int {
	Left = 0,
	Top = 1,
	Right = 2,
	Bottom = 3,
	ETipsDirection_MAX = 4
};

// Enum GPUserInterface.ETipsAnchorSpace
enum class ETipsAnchorSpace : int {
	Relative = 0,
	SurroundingParent = 1,
	SurroundingByPath = 2,
	ETipsAnchorSpace_MAX = 3
};

// Enum GPUserInterface.ETipsAttachMode
enum class ETipsAttachMode : int {
	Static = 0,
	Mouse = 1,
	ETipsAttachMode_MAX = 2
};

// Enum GPUserInterface.EDFButtonPresetStyleType
enum class EDFButtonPresetStyleType : int {
	Custom = 0,
	V1S1 = 1,
	V1S2 = 2,
	EDFButtonPresetStyleType_MAX = 3
};

// Enum GPUserInterface.EButtonHoverAnimType
enum class EButtonHoverAnimType : int {
	Parallel = 0,
	Sequential = 1,
	EButtonHoverAnimType_MAX = 2
};

// Enum GPUserInterface.EDFCheckButtonPresetStyleType
enum class EDFCheckButtonPresetStyleType : int {
	Custom = 0,
	V1S1 = 1,
	V1S2 = 2,
	EDFCheckButtonPresetStyleType_MAX = 3
};

// Enum GPUserInterface.ECheckButtonHoverAnimType
enum class ECheckButtonHoverAnimType : int {
	Parallel = 0,
	Sequential = 1,
	ECheckButtonHoverAnimType_MAX = 2
};

// Enum GPUserInterface.ETextChecked
enum class ETextChecked : int {
	Unchecked = 0,
	Checked = 1,
	ETextChecked_MAX = 2
};

// Enum GPUserInterface.EDFDefaultScrollBoxType
enum class EDFDefaultScrollBoxType : int {
	None = 0,
	Shared = 1,
	EDFDefaultScrollBoxType_MAX = 2
};

// Enum GPUserInterface.EDFDefaultScrollBarType
enum class EDFDefaultScrollBarType : int {
	None = 0,
	Shared = 1,
	Shared2 = 2,
	Shared3 = 3,
	Shared4 = 4,
	EDFDefaultScrollBarType_MAX = 5
};

// Enum GPUserInterface.EDropDownSelection
enum class EDropDownSelection : int {
	Single = 0,
	Multiple = 1,
	EDropDownSelection_MAX = 2
};

// Enum GPUserInterface.ETabType
enum class ETabType : int {
	HorizontalTab = 0,
	VerticalTab = 1,
	Other = 2,
	ETabType_MAX = 3
};

// Enum GPUserInterface.ESizeSetting
enum class ESizeSetting : int {
	TabWidth = 0,
	TabHeight = 1,
	OptionWidth = 2,
	OptionHeight = 3,
	Other = 4,
	ESizeSetting_MAX = 5
};

// Enum GPUserInterface.ESizeMode
enum class ESizeMode : int {
	TabSize = 0,
	OptionSize = 1,
	ESizeMode_MAX = 2
};

// Enum GPUserInterface.ETabLevel
enum class ETabLevel : int {
	PrimaryTab = 0,
	SecondaryTab = 1,
	ETabLevel_MAX = 2
};

// Enum GPUserInterface.EFlowAnimType
enum class EFlowAnimType : int {
	Normal = 0,
	Weak = 1,
	Custom = 2,
	EFlowAnimType_MAX = 3
};

// Enum GPUserInterface.EWorkingState
enum class EWorkingState : int {
	Terminal = 0,
	Initing = 1,
	Idle = 2,
	Working = 3,
	EWorkingState_MAX = 4
};

// Enum GPUserInterface.EBackgroundStretchType
enum class EBackgroundStretchType : int {
	None = 0,
	ScaleToFill = 1,
	ScaleToFit = 2,
	EBackgroundStretchType_MAX = 3
};

// ScriptStruct GPUserInterface.DropDownItemData
// Size: 0x38 (Inherited: 0x00)
struct FDropDownItemData {
public:

	struct FText KeyText; // 0x00(0x18)
	struct FText RightText; // 0x18(0x18)
	bool bShowRightText; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.DFRichTextConfigStyle
// Size: 0x2a8 (Inherited: 0x08)
struct FDFRichTextConfigStyle : public FSlateWidgetStyle {
public:

	struct UDataTable* TextStyleSet; // 0x08(0x08)
	bool bOverrideDefaultStyle; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FTextBlockStyle TextRawStyle; // 0x18(0x290)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.DFButtonStateStyle
// Size: 0x690 (Inherited: 0x08)
struct FDFButtonStateStyle : public FSlateWidgetStyle {
public:

	char pad_8[0x298]; // 0x08(0x298)
	struct FSlateBrush Activated; // 0x2a0(0x90)
	struct FSlateBrush Hovered; // 0x330(0x90)
	struct FSlateBrush Pressed; // 0x3c0(0x90)
	struct FSlateBrush Deactivated; // 0x450(0x90)
	struct FSlateBrush DeHovered; // 0x4e0(0x90)
	struct FSlateBrush DePressed; // 0x570(0x90)
	struct FSlateBrush Disabled; // 0x600(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.DFScrollBarStyle
// Size: 0x6e8 (Inherited: 0x08)
struct FDFScrollBarStyle : public FSlateWidgetStyle {
public:

	struct FScrollBarStyle RawStyle; // 0x08(0x518)
	struct FVector2D ScrollbarThickness; // 0x520(0x08)
	struct FMargin ScrollbarPadding; // 0x528(0x10)
	struct FSlateBrush NormalBackgroundImage; // 0x538(0x90)
	struct FSlateBrush HoveredBackgroundImage; // 0x5c8(0x90)
	struct FSlateBrush DraggedBackgroundImage; // 0x658(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.WaitingInfo
// Size: 0x18 (Inherited: 0x00)
struct FWaitingInfo {
public:

	struct UWidget* WaitingWidget; // 0x00(0x08)
	bool bIsInSafeZone; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t InZOrder; // 0x0c(0x04)
	enum class ELuaUILayer LayerType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.GPUIImageConfigRow
// Size: 0x30 (Inherited: 0x10)
struct FGPUIImageConfigRow : public FDescRowBase {
public:

	struct FSoftObjectPath Path; // 0x10(0x18)
	struct FName LoadGroup; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.GPUICommomConfigRow
// Size: 0xa0 (Inherited: 0x10)
struct FGPUICommomConfigRow : public FDescRowBase {
public:

	struct FSlateBrush LowQualityFallbackBrush; // 0x10(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.TextColorDefineRow
// Size: 0x20 (Inherited: 0x10)
struct FTextColorDefineRow : public FDescRowBase {
public:

	struct FLinearColor LinearColor; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.DFCommonTabContent
// Size: 0x40 (Inherited: 0x00)
struct FDFCommonTabContent {
public:

	struct FText TextContent; // 0x00(0x18)
	struct UPaperSprite* ImageContent; // 0x18(0x08)
	struct FSoftObjectPath ImageContentSoftPath; // 0x20(0x18)
	bool bShowMainTitleText; // 0x38(0x01)
	bool bShowIcon; // 0x39(0x01)
	bool bLockState; // 0x3a(0x01)
	enum class ESlateVisibility NamedSlotVisibility; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.DFRichTextStyle
// Size: 0x2d0 (Inherited: 0x08)
struct FDFRichTextStyle : public FSlateWidgetStyle {
public:

	struct FText ShowText; // 0x08(0x18)
	float RichTextScale; // 0x20(0x04)
	bool bCustomizeStyle; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FName TableRowID; // 0x28(0x08)
	struct FName FontStyleID; // 0x30(0x08)
	bool bOverrideDefaultStyle; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FTextBlockStyle TextRawStyle; // 0x40(0x290)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.DFBrushCheckStateStyle
// Size: 0x518 (Inherited: 0x08)
struct FDFBrushCheckStateStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush Checked; // 0x08(0x90)
	struct FSlateBrush CheckedFocusReceived; // 0x98(0x90)
	struct FSlateBrush CheckedHovered; // 0x128(0x90)
	struct FSlateBrush CheckedPressed; // 0x1b8(0x90)
	struct FSlateBrush Unchecked; // 0x248(0x90)
	struct FSlateBrush UncheckedFocusReceived; // 0x2d8(0x90)
	struct FSlateBrush UncheckedHovered; // 0x368(0x90)
	struct FSlateBrush UncheckedPressed; // 0x3f8(0x90)
	struct FSlateBrush Disabled; // 0x488(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.DFBrushButtonStateStyle
// Size: 0x518 (Inherited: 0x08)
struct FDFBrushButtonStateStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush Activated; // 0x08(0x90)
	struct FSlateBrush Hovered; // 0x98(0x90)
	struct FSlateBrush FocusReceived; // 0x128(0x90)
	struct FSlateBrush Pressed; // 0x1b8(0x90)
	struct FSlateBrush Deactivated; // 0x248(0x90)
	struct FSlateBrush DeHovered; // 0x2d8(0x90)
	struct FSlateBrush DeFocusReceived; // 0x368(0x90)
	struct FSlateBrush DePressed; // 0x3f8(0x90)
	struct FSlateBrush Disabled; // 0x488(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.DFTextStyle
// Size: 0x2b0 (Inherited: 0x08)
struct FDFTextStyle : public FSlateWidgetStyle {
public:

	struct FText ShowText; // 0x08(0x18)
	struct FTextBlockStyle TextRawStyle; // 0x20(0x290)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.DFCommonTabGroupContent
// Size: 0x50 (Inherited: 0x00)
struct FDFCommonTabGroupContent {
public:

	struct FDFCommonTabContent MainTabContent; // 0x00(0x40)
	struct TArray<struct FDFCommonTabContent> SubTabContents; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.DFRichTextBlockCheckStateStyle
// Size: 0x1958 (Inherited: 0x08)
struct FDFRichTextBlockCheckStateStyle : public FSlateWidgetStyle {
public:

	struct FDFRichTextStyle Checked; // 0x08(0x2d0)
	struct FDFRichTextStyle CheckedFocusReceived; // 0x2d8(0x2d0)
	struct FDFRichTextStyle CheckedPressed; // 0x5a8(0x2d0)
	struct FDFRichTextStyle CheckedHovered; // 0x878(0x2d0)
	struct FDFRichTextStyle Unchecked; // 0xb48(0x2d0)
	struct FDFRichTextStyle UncheckedFocusReceived; // 0xe18(0x2d0)
	struct FDFRichTextStyle UncheckedPressed; // 0x10e8(0x2d0)
	struct FDFRichTextStyle UncheckedHovered; // 0x13b8(0x2d0)
	struct FDFRichTextStyle Disabled; // 0x1688(0x2d0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.DFRichTextBlockButtonStateStyle
// Size: 0x1958 (Inherited: 0x08)
struct FDFRichTextBlockButtonStateStyle : public FSlateWidgetStyle {
public:

	struct FDFRichTextStyle Activated; // 0x08(0x2d0)
	struct FDFRichTextStyle FocusReceived; // 0x2d8(0x2d0)
	struct FDFRichTextStyle Pressed; // 0x5a8(0x2d0)
	struct FDFRichTextStyle Hovered; // 0x878(0x2d0)
	struct FDFRichTextStyle Deactivated; // 0xb48(0x2d0)
	struct FDFRichTextStyle DeFocusReceived; // 0xe18(0x2d0)
	struct FDFRichTextStyle DePressed; // 0x10e8(0x2d0)
	struct FDFRichTextStyle DeHovered; // 0x13b8(0x2d0)
	struct FDFRichTextStyle Disabled; // 0x1688(0x2d0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.DFTextBlockCheckStateStyle
// Size: 0x12d8 (Inherited: 0x08)
struct FDFTextBlockCheckStateStyle : public FSlateWidgetStyle {
public:

	struct FDFTextStyle Checked; // 0x08(0x2b0)
	struct FDFTextStyle CheckedPressed; // 0x2b8(0x2b0)
	struct FDFTextStyle CheckedHovered; // 0x568(0x2b0)
	struct FDFTextStyle Unchecked; // 0x818(0x2b0)
	struct FDFTextStyle UncheckedPressed; // 0xac8(0x2b0)
	struct FDFTextStyle UncheckedHovered; // 0xd78(0x2b0)
	struct FDFTextStyle Disabled; // 0x1028(0x2b0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.DFTextBlockButtonStateStyle
// Size: 0x12d8 (Inherited: 0x08)
struct FDFTextBlockButtonStateStyle : public FSlateWidgetStyle {
public:

	struct FDFTextStyle Activated; // 0x08(0x2b0)
	struct FDFTextStyle Pressed; // 0x2b8(0x2b0)
	struct FDFTextStyle Hovered; // 0x568(0x2b0)
	struct FDFTextStyle Deactivated; // 0x818(0x2b0)
	struct FDFTextStyle DePressed; // 0xac8(0x2b0)
	struct FDFTextStyle DeHovered; // 0xd78(0x2b0)
	struct FDFTextStyle Disabled; // 0x1028(0x2b0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.DFCommonCheckButtonStyle
// Size: 0x23a8 (Inherited: 0x08)
struct FDFCommonCheckButtonStyle : public FSlateWidgetStyle {
public:

	struct FDFBrushCheckStateStyle BackGroundStateStyle; // 0x08(0x518)
	struct FDFBrushCheckStateStyle ImageIconStateStyle; // 0x520(0x518)
	struct FDFRichTextBlockCheckStateStyle MainTitleStateStyle; // 0xa38(0x1958)
	struct FName CheckedSoundName; // 0x2390(0x08)
	struct FName UncheckedSoundName; // 0x2398(0x08)
	struct FName HoveredSoundName; // 0x23a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPUserInterface.DFCommonButtonStyle
// Size: 0x23a0 (Inherited: 0x08)
struct FDFCommonButtonStyle : public FSlateWidgetStyle {
public:

	struct FDFBrushButtonStateStyle BackGroundStateStyle; // 0x08(0x518)
	struct FDFBrushButtonStateStyle ImageIconStateStyle; // 0x520(0x518)
	struct FDFRichTextBlockButtonStateStyle MainTitleStateStyle; // 0xa38(0x1958)
	struct FName PressedSoundName; // 0x2390(0x08)
	struct FName HoveredSoundName; // 0x2398(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
