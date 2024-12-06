
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum KantanChartsSlate.EChartAxisPosition
enum class EChartAxisPosition : int {
	LeftBottom = 0,
	RightTop = 1,
	Floating = 2,
	EChartAxisPosition_MAX = 3
};

// Enum KantanChartsSlate.EKantanDataPointSize
enum class EKantanDataPointSize : int {
	Small = 0,
	Medium = 1,
	Large = 2,
	EKantanDataPointSize_MAX = 3
};

// Enum KantanChartsSlate.ECartesianRangeBoundType
enum class ECartesianRangeBoundType : int {
	FixedValue = 0,
	FitToData = 1,
	FitToDataRounded = 2,
	ECartesianRangeBoundType_MAX = 3
};

// Enum KantanChartsSlate.ECartesianScalingType
enum class ECartesianScalingType : int {
	FixedScale = 0,
	FixedRange = 1,
	ECartesianScalingType_MAX = 2
};

// Enum KantanChartsSlate.EKantanBarValueExtents
enum class EKantanBarValueExtents : int {
	NoValueLines = 0,
	ZeroLineOnly = 1,
	ZeroAndMaxLines = 2,
	EKantanBarValueExtents_MAX = 3
};

// Enum KantanChartsSlate.EKantanBarLabelPosition
enum class EKantanBarLabelPosition : int {
	NoLabels = 0,
	Standard = 1,
	Overlaid = 2,
	EKantanBarLabelPosition_MAX = 3
};

// Enum KantanChartsSlate.EKantanBarChartOrientation
enum class EKantanBarChartOrientation : int {
	Vertical = 0,
	Horizontal = 1,
	EKantanBarChartOrientation_MAX = 2
};

// ScriptStruct KantanChartsSlate.CartesianRangeBound
// Size: 0x08 (Inherited: 0x00)
struct FCartesianRangeBound {
public:

	enum class ECartesianRangeBoundType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FixedBoundValue; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct KantanChartsSlate.KantanCategoryStyle
// Size: 0x18 (Inherited: 0x00)
struct FKantanCategoryStyle {
public:

	struct FName CategoryStyleId; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct KantanChartsSlate.KantanSeriesStyle
// Size: 0x20 (Inherited: 0x00)
struct FKantanSeriesStyle {
public:

	struct FName StyleId; // 0x00(0x08)
	struct UKantanPointStyle* PointStyle; // 0x08(0x08)
	struct FLinearColor Color; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct KantanChartsSlate.CartesianAxisInstanceConfig
// Size: 0x04 (Inherited: 0x00)
struct FCartesianAxisInstanceConfig {
public:

	bool bEnabled; // 0x00(0x01)
	bool bShowTitle; // 0x01(0x01)
	bool bShowMarkers; // 0x02(0x01)
	bool bShowLabels; // 0x03(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct KantanChartsSlate.KantanChartStyle
// Size: 0x128 (Inherited: 0x08)
struct FKantanChartStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush Background; // 0x08(0x90)
	struct FLinearColor ChartLineColor; // 0x98(0x10)
	float ChartLineThickness; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FSlateFontInfo BaseFont; // 0xb0(0x58)
	int32_t TitleFontSize; // 0x108(0x04)
	int32_t AxisDescriptionFontSize; // 0x10c(0x04)
	int32_t AxisValueFontSize; // 0x110(0x04)
	struct FLinearColor FontColor; // 0x114(0x10)
	char pad_124[0x4]; // 0x124(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct KantanChartsSlate.CartesianAxisRange
// Size: 0x08 (Inherited: 0x00)
struct FCartesianAxisRange {
public:

	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct KantanChartsSlate.CartesianAxisConfig
// Size: 0x48 (Inherited: 0x00)
struct FCartesianAxisConfig {
public:

	struct FText Title; // 0x00(0x18)
	struct FText Unit; // 0x18(0x18)
	float MarkerSpacing; // 0x30(0x04)
	int32_t MaxValueDigits; // 0x34(0x04)
	struct FCartesianAxisInstanceConfig LeftBottomAxis; // 0x38(0x04)
	struct FCartesianAxisInstanceConfig RightTopAxis; // 0x3c(0x04)
	struct FCartesianAxisInstanceConfig FloatingAxis; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct KantanChartsSlate.KantanBarChartStyle
// Size: 0x138 (Inherited: 0x128)
struct FKantanBarChartStyle : public FKantanChartStyle {
public:

	float BarOpacity; // 0x128(0x04)
	float BarOutlineOpacity; // 0x12c(0x04)
	float BarOutlineThickness; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct KantanChartsSlate.KantanCartesianChartStyle
// Size: 0x130 (Inherited: 0x128)
struct FKantanCartesianChartStyle : public FKantanChartStyle {
public:

	float DataOpacity; // 0x128(0x04)
	float DataLineThickness; // 0x12c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct KantanChartsSlate.KantanCartesianPlotScale
// Size: 0x24 (Inherited: 0x00)
struct FKantanCartesianPlotScale {
public:

	enum class ECartesianScalingType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D Scale; // 0x04(0x08)
	struct FVector2D FocalCoordinates; // 0x0c(0x08)
	struct FCartesianAxisRange RangeX; // 0x14(0x08)
	struct FCartesianAxisRange RangeY; // 0x1c(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
