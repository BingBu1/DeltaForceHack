
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum RadarChart.ERadarChartEventSource
enum class ERadarChartEventSource : int {
	BaseLabel = 0,
	BasePin = 1,
	ValueLabel = 2,
	ValuePin = 3,
	ERadarChartEventSource_MAX = 4
};

// Enum RadarChart.ERadarChartBlendMode
enum class ERadarChartBlendMode : int {
	Opaque = 0,
	Translucent = 1,
	Additive = 2,
	ERadarChartBlendMode_MAX = 3
};

// Enum RadarChart.ERadarChartColorOverride
enum class ERadarChartColorOverride : int {
	None = 0,
	Multiply = 1,
	Override = 2,
	OverrideAlphaOnly = 3,
	OverrideHue = 4,
	OverrideHueAndAlpha = 5,
	Desaturate = 6,
	DesaturateAndAlpha = 7,
	ERadarChartColorOverride_MAX = 8
};

// Enum RadarChart.ERadarChartValueDisplay
enum class ERadarChartValueDisplay : int {
	Disabled = 0,
	Normal = 1,
	Snap = 2,
	ERadarChartValueDisplay_MAX = 3
};

// ScriptStruct RadarChart.RadarChartEvent
// Size: 0x0c (Inherited: 0x00)
struct FRadarChartEvent {
public:

	enum class ERadarChartEventSource Source; // 0x00(0x01)
	char ValueLayerIndex; // 0x01(0x01)
	char ValueIndex; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FVector2D ScreenSpacePosition; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RadarChart.RadarChartSegmentLayout
// Size: 0x18 (Inherited: 0x00)
struct FRadarChartSegmentLayout {
public:

	struct FIntPoint IconColumnRow; // 0x00(0x08)
	struct FIntPoint NameLabelColumnRow; // 0x08(0x08)
	struct FIntPoint ValueLabelColumnRow; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RadarChart.RadarChartColorOverride
// Size: 0x14 (Inherited: 0x00)
struct FRadarChartColorOverride {
public:

	enum class ERadarChartColorOverride Method; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RadarChart.RadarChartButtonInteraction
// Size: 0x04 (Inherited: 0x00)
struct FRadarChartButtonInteraction {
public:

	char bHoverable : 1; // 0x00(0x01)
	char bPressable : 1; // 0x00(0x01)
	char bClickable : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	enum class EButtonClickMethod ClickMethod; // 0x01(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x02(0x01)
	enum class EButtonPressMethod PressMethod; // 0x03(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RadarChart.RadarChartSegment
// Size: 0xe8 (Inherited: 0x00)
struct FRadarChartSegment {
public:

	struct FLinearColor SegmentColor; // 0x00(0x10)
	struct UObject* Icon; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	struct FVector2D offset; // 0x30(0x08)
	char pad_38_0 : 1; // 0x38(0x01)
	char bUseCustomLayout : 1; // 0x38(0x01)
	char pad_38_2 : 6; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FRadarChartSegmentLayout CustomLayout; // 0x3c(0x18)
	char pad_54[0x94]; // 0x54(0x94)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RadarChart.RadarChartButtonStyle
// Size: 0x2c0 (Inherited: 0x298)
struct FRadarChartButtonStyle : public FButtonStyle {
public:

	struct FRadarChartColorOverride Color; // 0x298(0x14)
	float Distance; // 0x2ac(0x04)
	float Angle; // 0x2b0(0x04)
	char bAlign : 1; // 0x2b4(0x01)
	char pad_2B4_1 : 7; // 0x2b4(0x01)
	struct FRadarChartButtonInteraction Interaction; // 0x2b5(0x04)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	int32_t ZOrderOffset; // 0x2bc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RadarChart.RadarChartAppearance
// Size: 0x3c0 (Inherited: 0x00)
struct FRadarChartAppearance {
public:

	char pad_0[0xb8]; // 0x00(0xb8)
	char bShowShape : 1; // 0xb8(0x01)
	char bConcentricUVs : 1; // 0xb8(0x01)
	char bShowOutline : 1; // 0xb8(0x01)
	char bShowPins : 1; // 0xb8(0x01)
	char bMultiplyTextureAlpha : 1; // 0xb8(0x01)
	char pad_B8_5 : 3; // 0xb8(0x01)
	enum class ERadarChartBlendMode BlendMode; // 0xb9(0x01)
	char pad_BA[0x2]; // 0xba(0x02)
	struct FRadarChartColorOverride ShapeColor; // 0xbc(0x14)
	struct UTexture* ShapeTexture; // 0xd0(0x08)
	struct FVector2D TextureScale; // 0xd8(0x08)
	float Angle; // 0xe0(0x04)
	struct FVector2D Panner; // 0xe4(0x08)
	struct FLinearColor OutlineColor; // 0xec(0x10)
	float OutlineThickness; // 0xfc(0x04)
	struct FRadarChartButtonStyle Pin; // 0x100(0x2c0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RadarChart.RadarChartValueText
// Size: 0x2e8 (Inherited: 0x00)
struct FRadarChartValueText {
public:

	enum class ERadarChartValueDisplay DisplayMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FRadarChartColorOverride Color; // 0x04(0x14)
	struct FVector2D offset; // 0x18(0x08)
	struct FRadarChartButtonStyle Button; // 0x20(0x2c0)
	char bAlwaysUprightValue : 1; // 0x2e0(0x01)
	char bFlipTextWhenAligned : 1; // 0x2e0(0x01)
	char pad_2E0_2 : 6; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RadarChart.RadarChartStyle
// Size: 0x930 (Inherited: 0x00)
struct FRadarChartStyle {
public:

	float NormalizationScale; // 0x00(0x04)
	char bShowIcons : 1; // 0x04(0x01)
	char bShowNameLabel : 1; // 0x04(0x01)
	char bShowCuts : 1; // 0x04(0x01)
	char bPositionUnitsBetweenCuts : 1; // 0x04(0x01)
	char bHideZeroUnit : 1; // 0x04(0x01)
	char bHideLastUnit : 1; // 0x04(0x01)
	char bAlwaysUprightIcon : 1; // 0x04(0x01)
	char bAlwaysUprightName : 1; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float ChartRadius; // 0x08(0x04)
	float StartAngle; // 0x0c(0x04)
	struct FRadarChartAppearance Appearance; // 0x10(0x3c0)
	struct TArray<struct FRadarChartSegment> Segments; // 0x3d0(0x10)
	struct FLinearColor CutsColor; // 0x3e0(0x10)
	float CutsThickness; // 0x3f0(0x04)
	int32_t CutsZOrderOffset; // 0x3f4(0x04)
	char DividersCount; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	struct FLinearColor DividersColor; // 0x3fc(0x10)
	float DividersThickness; // 0x40c(0x04)
	int32_t DividerZOrderOffset; // 0x410(0x04)
	char Units; // 0x414(0x01)
	char ShowEveryNUnit; // 0x415(0x01)
	char UnitsSourceSegment; // 0x416(0x01)
	char pad_417[0x1]; // 0x417(0x01)
	struct FSlateFontInfo UnitsFont; // 0x418(0x58)
	struct FLinearColor UnitsColor; // 0x470(0x10)
	char UnitsDecimalPlaces; // 0x480(0x01)
	enum class EHorizontalAlignment UnitsAlignment; // 0x481(0x01)
	char pad_482[0x2]; // 0x482(0x02)
	struct FVector2D UnitsOffset; // 0x484(0x08)
	int32_t UnitsZOrderOffset; // 0x48c(0x04)
	struct FRadarChartButtonStyle LabelButton; // 0x490(0x2c0)
	struct FRadarChartColorOverride IconColor; // 0x750(0x14)
	struct FVector2D IconSize; // 0x764(0x08)
	struct FRadarChartColorOverride NameColor; // 0x76c(0x14)
	struct FSlateFontInfo NameFont; // 0x780(0x58)
	struct FSlateFontInfo ValuesFont; // 0x7d8(0x58)
	struct FSlateBrush ValueSeparator; // 0x830(0x90)
	enum class EOrientation ValueLabelOrientation; // 0x8c0(0x01)
	char pad_8C1[0x3]; // 0x8c1(0x03)
	struct FRadarChartSegmentLayout DefaultLayout; // 0x8c4(0x18)
	struct FMargin IconPadding; // 0x8dc(0x10)
	struct FMargin NamePadding; // 0x8ec(0x10)
	struct FMargin ValueLabelContainerPadding; // 0x8fc(0x10)
	struct FMargin SeparatorPadding; // 0x90c(0x10)
	float AutoFlipAligned; // 0x91c(0x04)
	float MinNameWidth; // 0x920(0x04)
	float MinValuesWidth; // 0x924(0x04)
	char ValueLabelDecimalPlaces; // 0x928(0x01)
	char bUseSimpleTextMode : 1; // 0x929(0x01)
	char bNestedLabelHoverFix : 1; // 0x929(0x01)
	char pad_929_2 : 6; // 0x929(0x01)
	char pad_92A[0x6]; // 0x92a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RadarChart.RadarChartValueLayer
// Size: 0x738 (Inherited: 0x00)
struct FRadarChartValueLayer {
public:

	char pad_0[0x68]; // 0x00(0x68)
	struct TArray<float> RawValues; // 0x68(0x10)
	struct TArray<float> NormalizedValues; // 0x78(0x10)
	struct FRadarChartAppearance Appearance; // 0x88(0x3c0)
	struct FRadarChartValueText TextSettings; // 0x448(0x2e8)
	char bEnablePinSliding : 1; // 0x730(0x01)
	char pad_730_1 : 7; // 0x730(0x01)
	char pad_731[0x3]; // 0x731(0x03)
	float PinSlidingSteps; // 0x734(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
