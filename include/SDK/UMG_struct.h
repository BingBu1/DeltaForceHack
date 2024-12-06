
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : int {
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5
};

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : int {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	HitTestSelfOnly = 4,
	SelfHitTestInvisible = 5,
	ESlateVisibility_MAX = 6
};

// Enum UMG.EWidgetEnablePlatformFlags
enum class EWidgetEnablePlatformFlags : int {
	None = 0,
	Mobile = 1,
	Window = 2,
	XBox = 3,
	PS = 4,
	Consoles = 5,
	ConsolesAndPC = 6,
	All = 7,
	EWidgetEnablePlatformFlags_MAX = 8
};

// Enum UMG.EWidgetEnableQualityFlags
enum class EWidgetEnableQualityFlags : int {
	None = 0,
	High = 1,
	Mid = 2,
	Low = 3,
	VeryLow = 4,
	EWidgetEnableQualityFlags_MAX = 5
};

// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : int {
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	EVirtualKeyboardType_MAX = 6
};

// Enum UMG.EDynamicAdaptType
enum class EDynamicAdaptType : int {
	Close = 0,
	AutoResizeHorizontal = 1,
	AutoResizeAndWrap = 2,
	EDynamicAdaptType_MAX = 3
};

// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : int {
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2
};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : int {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3
};

// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : int {
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2
};

// Enum UMG.EDragPivot
enum class EDragPivot : int {
	MouseDown = 0,
	TopLeft = 1,
	TopCenter = 2,
	TopRight = 3,
	CenterLeft = 4,
	CenterCenter = 5,
	CenterRight = 6,
	BottomLeft = 7,
	BottomCenter = 8,
	BottomRight = 9,
	EDragPivot_MAX = 10
};

// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : int {
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	Overlay = 3,
	EDynamicBoxType_MAX = 4
};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : int {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2
};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : int {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 3,
	EWidgetDesignFlags_MAX = 4
};

// Enum UMG.EBindingKind
enum class EBindingKind : int {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2
};

// Enum UMG.EWindowVisibility
enum class EWindowVisibility : int {
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2
};

// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : int {
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2
};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : int {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3
};

// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : int {
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2
};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : int {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2
};

// Enum UMG.EWidgetType3DUI
enum class EWidgetType3DUI : int {
	TypeBRHud = 0,
	TypeBRNonHud = 1,
	TypeFrontend = 2,
	EWidgetType3DUI_MAX = 3
};

// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : int {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4
};

// ScriptStruct UMG.EventReply
// Size: 0xd0 (Inherited: 0x00)
struct FEventReply {
public:

	char pad_0[0xd0]; // 0x00(0xd0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.WidgetTransform
// Size: 0x1c (Inherited: 0x00)
struct FWidgetTransform {
public:

	struct FVector2D translation; // 0x00(0x08)
	struct FVector2D Scale; // 0x08(0x08)
	struct FVector2D Shear; // 0x10(0x08)
	float Angle; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.PaintContext
// Size: 0x30 (Inherited: 0x00)
struct FPaintContext {
public:

	char pad_0[0x30]; // 0x00(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.ShapedTextOptions
// Size: 0x03 (Inherited: 0x00)
struct FShapedTextOptions {
public:

	char bOverride_TextShapingMethod : 1; // 0x00(0x01)
	char bOverride_TextFlowDirection : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	enum class ETextShapingMethod TextShapingMethod; // 0x01(0x01)
	enum class ETextFlowDirection TextFlowDirection; // 0x02(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.AnimationEventBinding
// Size: 0x28 (Inherited: 0x00)
struct FAnimationEventBinding {
public:

	struct UWidgetAnimation* Animation; // 0x00(0x08)
	/*struct FDelegate*/char Delegate[0x10]; // 0x08(0x10)
	enum class EWidgetAnimationEvent AnimationEvent; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName UserTag; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.NamedSlotBinding
// Size: 0x10 (Inherited: 0x00)
struct FNamedSlotBinding {
public:

	struct FName Name; // 0x00(0x08)
	struct UWidget* Content; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.AnchorData
// Size: 0x28 (Inherited: 0x00)
struct FAnchorData {
public:

	struct FMargin Offsets; // 0x00(0x10)
	struct FAnchors Anchors; // 0x10(0x10)
	struct FVector2D Alignment; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// Size: 0x2f0 (Inherited: 0x48)
struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate {
public:

	struct FMovieSceneFloatChannel TopCurve; // 0x48(0xa8)
	struct FMovieSceneFloatChannel LeftCurve; // 0xf0(0xa8)
	struct FMovieSceneFloatChannel RightCurve; // 0x198(0xa8)
	struct FMovieSceneFloatChannel BottomCurve; // 0x240(0xa8)
	enum class EMovieSceneBlendType BlendType; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.MovieSceneWidgetAnimationInstanceData
// Size: 0x38 (Inherited: 0x08)
struct FMovieSceneWidgetAnimationInstanceData : public FMovieSceneSequenceInstanceData {
public:

	/*struct TSoftObjectPtr<UWidget>*/char WidgetTemplate[0x28]; // 0x08(0x28)
	struct FMovieSceneSequenceID ParentSequenceID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// Size: 0x70 (Inherited: 0x60)
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate {
public:

	struct TArray<struct FName> BrushPropertyNamePath; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.MovieSceneWidgetOverrideMaterialSectionWithInsTemplate
// Size: 0x100 (Inherited: 0x60)
struct FMovieSceneWidgetOverrideMaterialSectionWithInsTemplate : public FMovieSceneParameterSectionTemplate {
public:

	struct FMaterialParameterNameAndIns MaterialNameAndIns; // 0x60(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.MovieSceneWidgetOverrideMaterialSectionTemplate
// Size: 0x100 (Inherited: 0x60)
struct FMovieSceneWidgetOverrideMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate {
public:

	struct FMaterialParameterNameAndIns MaterialNameAndIns; // 0x60(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.RichTextStyleRow
// Size: 0x298 (Inherited: 0x08)
struct FRichTextStyleRow : public FTableRowBase {
public:

	struct FTextBlockStyle TextStyle; // 0x08(0x290)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.RichImageRow
// Size: 0x98 (Inherited: 0x08)
struct FRichImageRow : public FTableRowBase {
public:

	struct FSlateBrush Brush; // 0x08(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.SlateMeshVertex
// Size: 0x3c (Inherited: 0x00)
struct FSlateMeshVertex {
public:

	struct FVector2D Position; // 0x00(0x08)
	struct FColor Color; // 0x08(0x04)
	struct FVector2D UV0; // 0x0c(0x08)
	struct FVector2D UV1; // 0x14(0x08)
	struct FVector2D UV2; // 0x1c(0x08)
	struct FVector2D UV3; // 0x24(0x08)
	struct FVector2D UV4; // 0x2c(0x08)
	struct FVector2D UV5; // 0x34(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.SlateChildSize
// Size: 0x08 (Inherited: 0x00)
struct FSlateChildSize {
public:

	float Value; // 0x00(0x04)
	enum class ESlateSizeRule SizeRule; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.UserWidgetPool
// Size: 0x80 (Inherited: 0x00)
struct FUserWidgetPool {
public:

	struct TArray<struct UUserWidget*> ActiveWidgets; // 0x00(0x10)
	struct TArray<struct UUserWidget*> InactiveWidgets; // 0x10(0x10)
	char pad_20[0x60]; // 0x20(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.WidgetAnimationBinding
// Size: 0x24 (Inherited: 0x00)
struct FWidgetAnimationBinding {
public:

	struct FName WidgetName; // 0x00(0x08)
	struct FName SlotWidgetName; // 0x08(0x08)
	struct FGuid AnimationGuid; // 0x10(0x10)
	bool bIsRootWidget; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// Size: 0x1c (Inherited: 0x00)
struct FBlueprintWidgetAnimationDelegateBinding {
public:

	enum class EWidgetAnimationEvent Action; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName AnimationToBind; // 0x04(0x08)
	struct FName FunctionNameToBind; // 0x0c(0x08)
	struct FName UserTag; // 0x14(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.WidgetComponentInstanceData
// Size: 0xb8 (Inherited: 0xa8)
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData {
public:

	char pad_A8[0x10]; // 0xa8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.RTScaleDistanceFactorPair
// Size: 0x08 (Inherited: 0x00)
struct FRTScaleDistanceFactorPair {
public:

	float Distance; // 0x00(0x04)
	float ScaleFactor; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.WidgetNavigationData
// Size: 0x24 (Inherited: 0x00)
struct FWidgetNavigationData {
public:

	enum class EUINavigationRule Rule; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName WidgetToFocus; // 0x04(0x08)
	struct TWeakObjectPtr<struct UWidget> Widget; // 0x0c(0x08)
	/*struct FDelegate*/char CustomDelegate[0x10]; // 0x14(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.DynamicPropertyPath
// Size: 0x28 (Inherited: 0x28)
struct FDynamicPropertyPath : public FCachedPropertyPath {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.MovieScene2DTransformMask
// Size: 0x04 (Inherited: 0x00)
struct FMovieScene2DTransformMask {
public:

	uint32_t Mask; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.DelegateRuntimeBinding
// Size: 0x50 (Inherited: 0x00)
struct FDelegateRuntimeBinding {
public:

	struct FString ObjectName; // 0x00(0x10)
	struct FName PropertyName; // 0x10(0x08)
	struct FName FunctionName; // 0x18(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x20(0x28)
	enum class EBindingKind Kind; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// Size: 0x4e8 (Inherited: 0x48)
struct FMovieScene2DTransformSectionTemplate : public FMovieScenePropertySectionTemplate {
public:

	struct FMovieSceneFloatChannel translation[0x2]; // 0x48(0x150)
	struct FMovieSceneFloatChannel Rotation; // 0x198(0xa8)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x240(0x150)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x390(0x150)
	enum class EMovieSceneBlendType BlendType; // 0x4e0(0x01)
	char pad_4E1[0x3]; // 0x4e1(0x03)
	struct FMovieScene2DTransformMask Mask; // 0x4e4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
