
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : int {
	NoImage = 0,
	FullColor = 1,
	Linear = 2,
	ESlateBrushImageType_MAX = 3
};

// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : int {
	NoMirror = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushMirrorType_MAX = 4
};

// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : int {
	NoTile = 0,
	Horizontal = 1,
	Vertical = 2,
	Both = 3,
	ESlateBrushTileType_MAX = 4
};

// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : int {
	NoDrawType = 0,
	Box = 1,
	Border = 2,
	Image = 3,
	ESlateBrushDrawType_MAX = 4
};

// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : int {
	UseColor_Specified = 0,
	UseColor_Specified_Link = 1,
	UseColor_Foreground = 2,
	UseColor_Foreground_Subdued = 3,
	UseColor_MAX = 4
};

// Enum SlateCore.EUINavigation
enum class EUINavigation : int {
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Next = 4,
	Previous = 5,
	Num = 6,
	Invalid = 7,
	EUINavigation_MAX = 8
};

// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : int {
	Unchecked = 0,
	Checked = 1,
	Undetermined = 2,
	ECheckBoxState_MAX = 3
};

// Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : int {
	Inherit = 0,
	ClipToBounds = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways = 3,
	OnDemand = 4,
	EWidgetClipping_MAX = 5
};

// Enum SlateCore.EMaterialStrategy
enum class EMaterialStrategy : int {
	None = 0,
	Inherite = 1,
	EMaterialStrategy_MAX = 2
};

// Enum SlateCore.EWidgetPixelSnapping
enum class EWidgetPixelSnapping : int {
	Inherit = 0,
	Disabled = 1,
	SnapToPixel = 2,
	EWidgetPixelSnapping_MAX = 3
};

// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : int {
	Escape = 0,
	Explicit = 1,
	Wrap = 2,
	Stop = 3,
	Custom = 4,
	CustomBoundary = 5,
	Invalid = 6,
	EUINavigationRule_MAX = 7
};

// Enum SlateCore.ESlateGeometryMaskType
enum class ESlateGeometryMaskType : int {
	None = 0,
	Rectangle = 1,
	Circle = 2,
	ESlateGeometryMaskType_MAX = 3
};

// Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : int {
	Inherit = 0,
	Culture = 1,
	LeftToRight = 2,
	RightToLeft = 3,
	EFlowDirectionPreference_MAX = 4
};

// Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : int {
	NormalVision = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
	EColorVisionDeficiency_MAX = 4
};

// Enum SlateCore.ESelectInfo
enum class ESelectInfo : int {
	OnKeyPress = 0,
	OnNavigation = 1,
	OnMouseClick = 2,
	Direct = 3,
	ESelectInfo_MAX = 4
};

// Enum SlateCore.ETextCommit
enum class ETextCommit : int {
	Default = 0,
	OnEnter = 1,
	OnUserMovedFocus = 2,
	OnCleared = 3,
	ETextCommit_MAX = 4
};

// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : int {
	Auto = 0,
	KerningOnly = 1,
	FullShaping = 2,
	ETextShapingMethod_MAX = 3
};

// Enum SlateCore.ETextOverflowPolicy
enum class ETextOverflowPolicy : int {
	Default = 0,
	Ellipsis = 1,
	MultilineEllipsis = 2,
	ETextOverflowPolicy_MAX = 3
};

// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : int {
	HAlign_Fill = 0,
	HAlign_Left = 1,
	HAlign_Center = 2,
	HAlign_Right = 3,
	HAlign_MAX = 4
};

// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : int {
	VAlign_Fill = 0,
	VAlign_Top = 1,
	VAlign_Center = 2,
	VAlign_Bottom = 3,
	VAlign_MAX = 4
};

// Enum SlateCore.ETextUpperPolicy
enum class ETextUpperPolicy : int {
	Default = 0,
	Upper = 1,
	ETextUpperPolicy_MAX = 2
};

// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : int {
	WhenScrollingPossible = 0,
	Always = 1,
	Never = 2,
	EConsumeMouseWheel_MAX = 3
};

// Enum SlateCore.EOrientation
enum class EOrientation : int {
	Orient_Horizontal = 0,
	Orient_Vertical = 1,
	Orient_MAX = 2
};

// Enum SlateCore.EFocusCause
enum class EFocusCause : int {
	Mouse = 0,
	Navigation = 1,
	SetDirectly = 2,
	Cleared = 3,
	OtherWidgetLostFocus = 4,
	WindowActivate = 5,
	EFocusCause_MAX = 6
};

// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : int {
	DownAndUp = 0,
	MouseDown = 1,
	MouseUp = 2,
	PreciseClick = 3,
	EButtonClickMethod_MAX = 4
};

// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : int {
	DownAndUp = 0,
	ButtonPress = 1,
	ButtonRelease = 2,
	EButtonPressMethod_MAX = 3
};

// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : int {
	DownAndUp = 0,
	Down = 1,
	PreciseTap = 2,
	EButtonTouchMethod_MAX = 3
};

// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : int {
	Metrics = 0,
	BoundingBox = 1,
	EFontLayoutMethod_MAX = 2
};

// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : int {
	LazyLoad = 0,
	Stream = 1,
	Inline = 2,
	EFontLoadingPolicy_MAX = 3
};

// Enum SlateCore.EFontHinting
enum class EFontHinting : int {
	Default = 0,
	Auto = 1,
	AutoLight = 2,
	Monochrome = 3,
	None = 4,
	EFontHinting_MAX = 5
};

// Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : int {
	FocusChanging = 0,
	FocusLost = 1,
	FocusReceived = 2,
	MAX = 3
};

// Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : int {
	Unknown = 0,
	Explicit = 1,
	CustomDelegateBound = 2,
	CustomDelegateUnbound = 3,
	NextOrPrevious = 4,
	HitTestGrid = 5,
	ESlateDebuggingNavigationMethod_MAX = 6
};

// Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : int {
	MouseCaptureGained = 0,
	MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2
};

// Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : int {
	MouseMove = 0,
	MouseEnter = 1,
	MouseLeave = 2,
	PreviewMouseButtonDown = 3,
	MouseButtonDown = 4,
	MouseButtonUp = 5,
	MouseButtonDoubleClick = 6,
	MouseWheel = 7,
	TouchStart = 8,
	TouchEnd = 9,
	TouchForceChanged = 10,
	TouchFirstMove = 11,
	TouchMoved = 12,
	DragDetected = 13,
	DragEnter = 14,
	DragLeave = 15,
	DragOver = 16,
	DragDrop = 17,
	DropMessage = 18,
	PreviewKeyDown = 19,
	KeyDown = 20,
	KeyUp = 21,
	KeyChar = 22,
	AnalogInput = 23,
	TouchGesture = 24,
	MotionDetected = 25,
	MAX = 26
};

// Enum SlateCore.EFake3DBlurType
enum class EFake3DBlurType : int {
	M_Fake3DHUDDistortion = 0,
	M_Simulate3DUI = 1,
	M_MAX = 2
};

// Enum SlateCore.EScrollDirection
enum class EScrollDirection : int {
	Scroll_Down = 0,
	Scroll_Up = 1,
	Scroll_MAX = 2
};

// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : int {
	MenuPlacement_BelowAnchor = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox = 3,
	MenuPlacement_ComboBoxRight = 4,
	MenuPlacement_MenuRight = 5,
	MenuPlacement_AboveAnchor = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft = 9,
	MenuPlacement_Center = 10,
	MenuPlacement_RightLeftCenter = 11,
	MenuPlacement_MatchBottomLeft = 12,
	MenuPlacement_MAX = 13
};

// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : int {
	Keyboard = 0,
	Controller = 1,
	User = 2,
	ENavigationGenesis_MAX = 3
};

// Enum SlateCore.ENavigationSource
enum class ENavigationSource : int {
	FocusedWidget = 0,
	WidgetUnderCursor = 1,
	ENavigationSource_MAX = 2
};

// Enum SlateCore.EUINavigationAction
enum class EUINavigationAction : int {
	Accept = 0,
	Back = 1,
	Num = 2,
	Invalid = 3,
	EUINavigationAction_MAX = 4
};

// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : int {
	CheckBox = 0,
	ToggleButton = 1,
	ESlateCheckBoxType_MAX = 2
};

// Enum SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : int {
	ActiveWindow = 0,
	MainWindow = 1,
	ESlateParentWindowSearchMethod_MAX = 2
};

// Enum SlateCore.ELineWidgetOrientation
enum class ELineWidgetOrientation : int {
	Horizontal = 0,
	Vertical = 1,
	ELineWidgetOrientation_MAX = 2
};

// Enum SlateCore.ERadialImageFillType
enum class ERadialImageFillType : int {
	Radial360 = 0,
	Horizontal = 1,
	Vertical = 2,
	ERadialImageFillType_MAX = 3
};

// ScriptStruct SlateCore.Geometry
// Size: 0x44 (Inherited: 0x00)
struct FGeometry {
public:

	char pad_0[0x44]; // 0x00(0x44)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.InvalidateWidgetReason
// Size: 0x01 (Inherited: 0x00)
struct FInvalidateWidgetReason {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.FocusEvent
// Size: 0x08 (Inherited: 0x00)
struct FFocusEvent {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.CaptureLostEvent
// Size: 0x08 (Inherited: 0x00)
struct FCaptureLostEvent {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.SlateColor
// Size: 0x28 (Inherited: 0x00)
struct FSlateColor {
public:

	struct FLinearColor SpecifiedColor; // 0x00(0x10)
	enum class ESlateColorStylingMode ColorUseRule; // 0x10(0x01)
	char pad_11[0x17]; // 0x11(0x17)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.Margin
// Size: 0x10 (Inherited: 0x00)
struct FMargin {
public:

	float Left; // 0x00(0x04)
	float Top; // 0x04(0x04)
	float Right; // 0x08(0x04)
	float Bottom; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.InputEvent
// Size: 0x18 (Inherited: 0x00)
struct FInputEvent {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.FontOutlineSettings
// Size: 0x20 (Inherited: 0x00)
struct FFontOutlineSettings {
public:

	int32_t OutlineSize; // 0x00(0x04)
	bool bSeparateFillAlpha; // 0x04(0x01)
	bool bApplyOutlineToDropShadows; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct UObject* OutlineMaterial; // 0x08(0x08)
	struct FLinearColor OutlineColor; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.SlateWidgetStyle
// Size: 0x08 (Inherited: 0x00)
struct FSlateWidgetStyle {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.SlateSound
// Size: 0x18 (Inherited: 0x00)
struct FSlateSound {
public:

	struct UObject* ResourceObject; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.Typeface
// Size: 0x10 (Inherited: 0x00)
struct FTypeface {
public:

	struct TArray<struct FTypefaceEntry> Fonts; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.FontData
// Size: 0x20 (Inherited: 0x00)
struct FFontData {
public:

	struct FString FontFilename; // 0x00(0x10)
	enum class EFontHinting Hinting; // 0x10(0x01)
	enum class EFontLoadingPolicy LoadingPolicy; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t SubFaceIndex; // 0x14(0x04)
	struct UObject* FontFaceAsset; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.ReplyBase
// Size: 0x18 (Inherited: 0x00)
struct FReplyBase {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.SlateBrush
// Size: 0x90 (Inherited: 0x00)
struct FSlateBrush {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FVector2D imageSize; // 0x08(0x08)
	struct FMargin Margin; // 0x10(0x10)
	struct FSlateColor TintColor; // 0x20(0x28)
	struct UObject* ResourceObject; // 0x48(0x08)
	struct FName ResourceName; // 0x50(0x08)
	struct FBox2D UVRegion; // 0x58(0x14)
	enum class ESlateBrushDrawType DrawAs; // 0x6c(0x01)
	enum class ESlateBrushTileType Tiling; // 0x6d(0x01)
	enum class ESlateBrushMirrorType Mirroring; // 0x6e(0x01)
	enum class ESlateBrushImageType ImageType; // 0x6f(0x01)
	char bAdaptiveTiling : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x17]; // 0x71(0x17)
	char bIsDynamicallyLoaded : 1; // 0x88(0x01)
	char bHasUObject : 1; // 0x88(0x01)
	char pad_88_2 : 6; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.PointerEvent
// Size: 0x70 (Inherited: 0x18)
struct FPointerEvent : public FInputEvent {
public:

	char pad_18[0x58]; // 0x18(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.CharacterEvent
// Size: 0x20 (Inherited: 0x18)
struct FCharacterEvent : public FInputEvent {
public:

	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.KeyEvent
// Size: 0x38 (Inherited: 0x18)
struct FKeyEvent : public FInputEvent {
public:

	char pad_18[0x20]; // 0x18(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.NavigationEvent
// Size: 0x20 (Inherited: 0x18)
struct FNavigationEvent : public FInputEvent {
public:

	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.MotionEvent
// Size: 0x48 (Inherited: 0x18)
struct FMotionEvent : public FInputEvent {
public:

	char pad_18[0x30]; // 0x18(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.SlateFontInfo
// Size: 0x58 (Inherited: 0x00)
struct FSlateFontInfo {
public:

	struct UObject* FontObject; // 0x00(0x08)
	struct UObject* FontMaterial; // 0x08(0x08)
	struct FFontOutlineSettings OutlineSettings; // 0x10(0x20)
	char pad_30[0x10]; // 0x30(0x10)
	struct FName TypefaceFontName; // 0x40(0x08)
	int32_t size; // 0x48(0x04)
	int32_t LetterSpacing; // 0x4c(0x04)
	char pad_50[0x8]; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.CompositeFallbackFont
// Size: 0x18 (Inherited: 0x00)
struct FCompositeFallbackFont {
public:

	struct FTypeface Typeface; // 0x00(0x10)
	float ScalingFactor; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.TypefaceEntry
// Size: 0x28 (Inherited: 0x00)
struct FTypefaceEntry {
public:

	struct FName Name; // 0x00(0x08)
	struct FFontData Font; // 0x08(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.Reply
// Size: 0xd0 (Inherited: 0x18)
struct FReply : public FReplyBase {
public:

	char pad_18[0xb8]; // 0x18(0xb8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.TableRowStyle
// Size: 0x838 (Inherited: 0x08)
struct FTableRowStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush SelectorFocusedBrush; // 0x08(0x90)
	struct FSlateBrush ActiveHoveredBrush; // 0x98(0x90)
	struct FSlateBrush ActiveBrush; // 0x128(0x90)
	struct FSlateBrush InactiveHoveredBrush; // 0x1b8(0x90)
	struct FSlateBrush InactiveBrush; // 0x248(0x90)
	struct FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2d8(0x90)
	struct FSlateBrush EvenRowBackgroundBrush; // 0x368(0x90)
	struct FSlateBrush OddRowBackgroundHoveredBrush; // 0x3f8(0x90)
	struct FSlateBrush OddRowBackgroundBrush; // 0x488(0x90)
	struct FSlateColor TextColor; // 0x518(0x28)
	struct FSlateColor SelectedTextColor; // 0x540(0x28)
	struct FSlateBrush DropIndicator_Above; // 0x568(0x90)
	struct FSlateBrush DropIndicator_Onto; // 0x5f8(0x90)
	struct FSlateBrush DropIndicator_Below; // 0x688(0x90)
	struct FSlateBrush ActiveHighlightedBrush; // 0x718(0x90)
	struct FSlateBrush InactiveHighlightedBrush; // 0x7a8(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.ButtonStyle
// Size: 0x298 (Inherited: 0x08)
struct FButtonStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush Normal; // 0x08(0x90)
	struct FSlateBrush Hovered; // 0x98(0x90)
	struct FSlateBrush Pressed; // 0x128(0x90)
	struct FSlateBrush Disabled; // 0x1b8(0x90)
	struct FMargin NormalPadding; // 0x248(0x10)
	struct FMargin PressedPadding; // 0x258(0x10)
	struct FSlateSound PressedSlateSound; // 0x268(0x18)
	struct FSlateSound HoveredSlateSound; // 0x280(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.ScrollBarStyle
// Size: 0x518 (Inherited: 0x08)
struct FScrollBarStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush HorizontalBackgroundImage; // 0x08(0x90)
	struct FSlateBrush VerticalBackgroundImage; // 0x98(0x90)
	struct FSlateBrush VerticalTopSlotImage; // 0x128(0x90)
	struct FSlateBrush HorizontalTopSlotImage; // 0x1b8(0x90)
	struct FSlateBrush VerticalBottomSlotImage; // 0x248(0x90)
	struct FSlateBrush HorizontalBottomSlotImage; // 0x2d8(0x90)
	struct FSlateBrush NormalThumbImage; // 0x368(0x90)
	struct FSlateBrush HoveredThumbImage; // 0x3f8(0x90)
	struct FSlateBrush DraggedThumbImage; // 0x488(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.SpinBoxStyle
// Size: 0x310 (Inherited: 0x08)
struct FSpinBoxStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush BackgroundBrush; // 0x08(0x90)
	struct FSlateBrush HoveredBackgroundBrush; // 0x98(0x90)
	struct FSlateBrush ActiveFillBrush; // 0x128(0x90)
	struct FSlateBrush InactiveFillBrush; // 0x1b8(0x90)
	struct FSlateBrush ArrowsImage; // 0x248(0x90)
	struct FSlateColor ForegroundColor; // 0x2d8(0x28)
	struct FMargin TextPadding; // 0x300(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.ScrollBoxStyle
// Size: 0x248 (Inherited: 0x08)
struct FScrollBoxStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)
	struct FSlateBrush LeftShadowBrush; // 0x128(0x90)
	struct FSlateBrush RightShadowBrush; // 0x1b8(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.ScrollBorderStyle
// Size: 0x128 (Inherited: 0x08)
struct FScrollBorderStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush TopShadowBrush; // 0x08(0x90)
	struct FSlateBrush BottomShadowBrush; // 0x98(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.SplitterStyle
// Size: 0x128 (Inherited: 0x08)
struct FSplitterStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush HandleNormalBrush; // 0x08(0x90)
	struct FSlateBrush HandleHighlightBrush; // 0x98(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// Size: 0x518 (Inherited: 0x08)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush SortPrimaryAscendingImage; // 0x08(0x90)
	struct FSlateBrush SortPrimaryDescendingImage; // 0x98(0x90)
	struct FSlateBrush SortSecondaryAscendingImage; // 0x128(0x90)
	struct FSlateBrush SortSecondaryDescendingImage; // 0x1b8(0x90)
	struct FSlateBrush NormalBrush; // 0x248(0x90)
	struct FSlateBrush HoveredBrush; // 0x2d8(0x90)
	struct FSlateBrush MenuDropdownImage; // 0x368(0x90)
	struct FSlateBrush MenuDropdownNormalBorderBrush; // 0x3f8(0x90)
	struct FSlateBrush MenuDropdownHoveredBorderBrush; // 0x488(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.InlineTextImageStyle
// Size: 0xa0 (Inherited: 0x08)
struct FInlineTextImageStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush Image; // 0x08(0x90)
	int16_t Baseline; // 0x98(0x02)
	char pad_9A[0x6]; // 0x9a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.SliderStyle
// Size: 0x370 (Inherited: 0x08)
struct FSliderStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush NormalBarImage; // 0x08(0x90)
	struct FSlateBrush HoveredBarImage; // 0x98(0x90)
	struct FSlateBrush DisabledBarImage; // 0x128(0x90)
	struct FSlateBrush NormalThumbImage; // 0x1b8(0x90)
	struct FSlateBrush HoveredThumbImage; // 0x248(0x90)
	struct FSlateBrush DisabledThumbImage; // 0x2d8(0x90)
	float BarThickness; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// Size: 0x130 (Inherited: 0x08)
struct FExpandableAreaStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush CollapsedImage; // 0x08(0x90)
	struct FSlateBrush ExpandedImage; // 0x98(0x90)
	float RolloutAnimationSeconds; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.ProgressBarStyle
// Size: 0x1b8 (Inherited: 0x08)
struct FProgressBarStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush BackgroundImage; // 0x08(0x90)
	struct FSlateBrush FillImage; // 0x98(0x90)
	struct FSlateBrush MarqueeImage; // 0x128(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.CheckBoxStyle
// Size: 0x5c8 (Inherited: 0x08)
struct FCheckBoxStyle : public FSlateWidgetStyle {
public:

	enum class ESlateCheckBoxType CheckBoxType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FSlateBrush UncheckedImage; // 0x10(0x90)
	struct FSlateBrush UncheckedHoveredImage; // 0xa0(0x90)
	struct FSlateBrush UncheckedPressedImage; // 0x130(0x90)
	struct FSlateBrush CheckedImage; // 0x1c0(0x90)
	struct FSlateBrush CheckedHoveredImage; // 0x250(0x90)
	struct FSlateBrush CheckedPressedImage; // 0x2e0(0x90)
	struct FSlateBrush UndeterminedImage; // 0x370(0x90)
	struct FSlateBrush UndeterminedHoveredImage; // 0x400(0x90)
	struct FSlateBrush UndeterminedPressedImage; // 0x490(0x90)
	struct FMargin Padding; // 0x520(0x10)
	struct FSlateColor ForegroundColor; // 0x530(0x28)
	struct FSlateColor BorderBackgroundColor; // 0x558(0x28)
	struct FSlateSound CheckedSlateSound; // 0x580(0x18)
	struct FSlateSound UncheckedSlateSound; // 0x598(0x18)
	struct FSlateSound HoveredSlateSound; // 0x5b0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.AnalogInputEvent
// Size: 0x40 (Inherited: 0x38)
struct FAnalogInputEvent : public FKeyEvent {
public:

	char pad_38[0x8]; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.EditableTextStyle
// Size: 0x238 (Inherited: 0x08)
struct FEditableTextStyle : public FSlateWidgetStyle {
public:

	struct FSlateFontInfo Font; // 0x08(0x58)
	struct FSlateColor ColorAndOpacity; // 0x60(0x28)
	struct FSlateBrush BackgroundImageSelected; // 0x88(0x90)
	struct FSlateBrush BackgroundImageComposing; // 0x118(0x90)
	struct FSlateBrush CaretImage; // 0x1a8(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.TextBlockStyle
// Size: 0x290 (Inherited: 0x08)
struct FTextBlockStyle : public FSlateWidgetStyle {
public:

	struct FSlateFontInfo Font; // 0x08(0x58)
	struct FSlateColor ColorAndOpacity; // 0x60(0x28)
	struct FVector2D ShadowOffset; // 0x88(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x90(0x10)
	struct FSlateColor SelectedBackgroundColor; // 0xa0(0x28)
	struct FLinearColor HighlightColor; // 0xc8(0x10)
	struct FSlateBrush HighlightShape; // 0xd8(0x90)
	struct FSlateBrush StrikeBrush; // 0x168(0x90)
	struct FSlateBrush UnderlineBrush; // 0x1f8(0x90)
	enum class ETextOverflowPolicy OverflowPolicy; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.CompositeFont
// Size: 0x38 (Inherited: 0x00)
struct FCompositeFont {
public:

	struct FTypeface DefaultTypeface; // 0x00(0x10)
	struct FCompositeFallbackFont FallbackTypeface; // 0x10(0x18)
	struct TArray<struct FCompositeSubFont> SubTypefaces; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.CompositeSubFont
// Size: 0x38 (Inherited: 0x18)
struct FCompositeSubFont : public FCompositeFallbackFont {
public:

	struct TArray<struct FInt32Range> CharacterRanges; // 0x18(0x10)
	struct FString Cultures; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.ComboButtonStyle
// Size: 0x3d0 (Inherited: 0x08)
struct FComboButtonStyle : public FSlateWidgetStyle {
public:

	struct FButtonStyle ButtonStyle; // 0x08(0x298)
	struct FSlateBrush DownArrowImage; // 0x2a0(0x90)
	struct FSlateBrush MenuBorderBrush; // 0x330(0x90)
	struct FMargin MenuBorderPadding; // 0x3c0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.DockTabStyle
// Size: 0x760 (Inherited: 0x08)
struct FDockTabStyle : public FSlateWidgetStyle {
public:

	struct FButtonStyle CloseButtonStyle; // 0x08(0x298)
	struct FSlateBrush NormalBrush; // 0x2a0(0x90)
	struct FSlateBrush ActiveBrush; // 0x330(0x90)
	struct FSlateBrush ColorOverlayTabBrush; // 0x3c0(0x90)
	struct FSlateBrush ColorOverlayIconBrush; // 0x450(0x90)
	struct FSlateBrush ForegroundBrush; // 0x4e0(0x90)
	struct FSlateBrush HoveredBrush; // 0x570(0x90)
	struct FSlateBrush ContentAreaBrush; // 0x600(0x90)
	struct FSlateBrush TabWellBrush; // 0x690(0x90)
	struct FMargin TabPadding; // 0x720(0x10)
	float OverlapWidth; // 0x730(0x04)
	char pad_734[0x4]; // 0x734(0x04)
	struct FSlateColor FlashColor; // 0x738(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// Size: 0x860 (Inherited: 0x08)
struct FEditableTextBoxStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush BackgroundImageNormal; // 0x08(0x90)
	struct FSlateBrush BackgroundImageHovered; // 0x98(0x90)
	struct FSlateBrush BackgroundImageFocused; // 0x128(0x90)
	struct FSlateBrush BackgroundImageReadOnly; // 0x1b8(0x90)
	struct FMargin Padding; // 0x248(0x10)
	struct FSlateFontInfo Font; // 0x258(0x58)
	struct FSlateColor ForegroundColor; // 0x2b0(0x28)
	struct FSlateColor BackgroundColor; // 0x2d8(0x28)
	struct FSlateColor ReadOnlyForegroundColor; // 0x300(0x28)
	struct FMargin HScrollBarPadding; // 0x328(0x10)
	struct FMargin VScrollBarPadding; // 0x338(0x10)
	struct FScrollBarStyle ScrollBarStyle; // 0x348(0x518)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.HeaderRowStyle
// Size: 0xc18 (Inherited: 0x08)
struct FHeaderRowStyle : public FSlateWidgetStyle {
public:

	struct FTableColumnHeaderStyle ColumnStyle; // 0x08(0x518)
	struct FTableColumnHeaderStyle LastColumnStyle; // 0x520(0x518)
	struct FSplitterStyle ColumnSplitterStyle; // 0xa38(0x128)
	struct FSlateBrush BackgroundBrush; // 0xb60(0x90)
	struct FSlateColor ForegroundColor; // 0xbf0(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.VolumeControlStyle
// Size: 0x648 (Inherited: 0x08)
struct FVolumeControlStyle : public FSlateWidgetStyle {
public:

	struct FSliderStyle SliderStyle; // 0x08(0x370)
	struct FSlateBrush HighVolumeImage; // 0x378(0x90)
	struct FSlateBrush MidVolumeImage; // 0x408(0x90)
	struct FSlateBrush LowVolumeImage; // 0x498(0x90)
	struct FSlateBrush NoVolumeImage; // 0x528(0x90)
	struct FSlateBrush MutedImage; // 0x5b8(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x540 (Inherited: 0x08)
struct FHyperlinkStyle : public FSlateWidgetStyle {
public:

	struct FButtonStyle UnderlineStyle; // 0x08(0x298)
	struct FTextBlockStyle TextStyle; // 0x2a0(0x290)
	struct FMargin Padding; // 0x530(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.WindowStyle
// Size: 0x1138 (Inherited: 0x08)
struct FWindowStyle : public FSlateWidgetStyle {
public:

	struct FButtonStyle MinimizeButtonStyle; // 0x08(0x298)
	struct FButtonStyle MaximizeButtonStyle; // 0x2a0(0x298)
	struct FButtonStyle RestoreButtonStyle; // 0x538(0x298)
	struct FButtonStyle CloseButtonStyle; // 0x7d0(0x298)
	struct FTextBlockStyle TitleTextStyle; // 0xa68(0x290)
	struct FSlateBrush ActiveTitleBrush; // 0xcf8(0x90)
	struct FSlateBrush InactiveTitleBrush; // 0xd88(0x90)
	struct FSlateBrush FlashTitleBrush; // 0xe18(0x90)
	struct FSlateColor BackgroundColor; // 0xea8(0x28)
	struct FSlateBrush OutlineBrush; // 0xed0(0x90)
	struct FSlateColor OutlineColor; // 0xf60(0x28)
	struct FSlateBrush BorderBrush; // 0xf88(0x90)
	struct FSlateBrush BackgroundBrush; // 0x1018(0x90)
	struct FSlateBrush ChildBackgroundBrush; // 0x10a8(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.ComboBoxStyle
// Size: 0x408 (Inherited: 0x08)
struct FComboBoxStyle : public FSlateWidgetStyle {
public:

	struct FComboButtonStyle ComboButtonStyle; // 0x08(0x3d0)
	struct FSlateSound PressedSlateSound; // 0x3d8(0x18)
	struct FSlateSound SelectionChangeSlateSound; // 0x3f0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0xaf8 (Inherited: 0x08)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle {
public:

	struct FEditableTextBoxStyle EditableTextBoxStyle; // 0x08(0x860)
	struct FTextBlockStyle TextStyle; // 0x868(0x290)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct SlateCore.SearchBoxStyle
// Size: 0xb18 (Inherited: 0x08)
struct FSearchBoxStyle : public FSlateWidgetStyle {
public:

	struct FEditableTextBoxStyle TextBoxStyle; // 0x08(0x860)
	struct FSlateFontInfo ActiveFontInfo; // 0x868(0x58)
	struct FSlateBrush UpArrowImage; // 0x8c0(0x90)
	struct FSlateBrush DownArrowImage; // 0x950(0x90)
	struct FSlateBrush GlassImage; // 0x9e0(0x90)
	struct FSlateBrush ClearImage; // 0xa70(0x90)
	struct FMargin ImagePadding; // 0xb00(0x10)
	bool bLeftAlignButtons; // 0xb10(0x01)
	char pad_B11[0x7]; // 0xb11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
