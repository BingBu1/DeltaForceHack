
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum ExCommonUI.EExCommonNumericType
enum class EExCommonNumericType : int {
	Number = 0,
	Percentage = 1,
	Seconds = 2,
	Distance = 3,
	EExCommonNumericType_MAX = 4
};

// Enum ExCommonUI.EWidgetCarouselCurve
enum class EWidgetCarouselCurve : int {
	Const = 0,
	Linear = 1,
	Quad = 2,
	EaseInOutQuad = 3,
	Cubic = 4,
	EWidgetCarouselCurve_MAX = 5
};

// Enum ExCommonUI.ERichTextInlineIconDisplayMode
enum class ERichTextInlineIconDisplayMode : int {
	IconOnly = 0,
	TextOnly = 1,
	IconAndText = 2,
	MAX = 3
};

// Enum ExCommonUI.ETransitionCurve
enum class ETransitionCurve : int {
	Linear = 0,
	QuadIn = 1,
	QuadOut = 2,
	QuadInOut = 3,
	CubicIn = 4,
	CubicOut = 5,
	CubicInOut = 6,
	ETransitionCurve_MAX = 7
};

// Enum ExCommonUI.EExCommonSwitcherTransition
enum class EExCommonSwitcherTransition : int {
	FadeOnly = 0,
	Horizontal = 1,
	Vertical = 2,
	Zoom = 3,
	EExCommonSwitcherTransition_MAX = 4
};

// Enum ExCommonUI.EWidgetCarouselMode
enum class EWidgetCarouselMode : int {
	Normal = 0,
	ScrollBox = 1,
	EWidgetCarouselMode_MAX = 2
};

// ScriptStruct ExCommonUI.ExCommonNumberFormattingOptions
// Size: 0x14 (Inherited: 0x00)
struct FExCommonNumberFormattingOptions {
public:

	enum class ERoundingMode RoundingMode; // 0x00(0x01)
	bool UseGrouping; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t MinimumIntegralDigits; // 0x04(0x04)
	int32_t MaximumIntegralDigits; // 0x08(0x04)
	int32_t MinimumFractionalDigits; // 0x0c(0x04)
	int32_t MaximumFractionalDigits; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ExCommonUI.ExRichTextIconData
// Size: 0x50 (Inherited: 0x08)
struct FExRichTextIconData : public FTableRowBase {
public:

	struct FText DisplayName; // 0x08(0x18)
	/*struct TSoftObjectPtr<UObject>*/char ResourceObject[0x28]; // 0x20(0x28)
	struct FVector2D imageSize; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
