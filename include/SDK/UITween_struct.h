
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum UITween.ETweenerPropType
enum class ETweenerPropType : int {
	Default = 0,
	RenderTranslation = 1,
	RenderScale = 2,
	RenderShear = 3,
	RenderTransformAngle = 4,
	RenderOpacity = 5,
	BrushMaterial = 6,
	ColorAndOpacity = 7,
	OverrideMaterial = 8,
	ETweenerPropType_MAX = 9
};

// Enum UITween.EUITweenEaseType
enum class EUITweenEaseType : int {
	Custom = 0,
	Linear = 1,
	EaseInQuad = 2,
	EaseOutQuad = 3,
	EaseInOutQuad = 4,
	EaseOutInQuad = 5,
	EaseInCubic = 6,
	EaseOutCubic = 7,
	EaseInOutCubic = 8,
	EaseOutInCubic = 9,
	EaseInQuart = 10,
	EaseOutQuart = 11,
	EaseInOutQuart = 12,
	EaseOutInQuart = 13,
	EaseInQuint = 14,
	EaseOutQuint = 15,
	EaseInOutQuint = 16,
	EaseOutInQuint = 17,
	EaseInSine = 18,
	EaseOutSine = 19,
	EaseInOutSine = 20,
	EaseOutInSine = 21,
	EaseInExpo = 22,
	EaseOutExpo = 23,
	EaseInOutExpo = 24,
	EaseOutInExpo = 25,
	EaseInCirc = 26,
	EaseOutCirc = 27,
	EaseInOutCirc = 28,
	EaseOutInCirc = 29,
	EaseInElastic = 30,
	EaseOutElastic = 31,
	EaseInOutElastic = 32,
	EaseOutInElastic = 33,
	EaseInBack = 34,
	EaseOutBack = 35,
	EaseInOutBack = 36,
	EaseOutInBack = 37,
	EaseInBounce = 38,
	EaseOutBounce = 39,
	EaseInOutBounce = 40,
	EaseOutInBounce = 41,
	EUITweenEaseType_MAX = 42
};

// ScriptStruct UITween.UIAnimation
// Size: 0x48 (Inherited: 0x00)
struct FUIAnimation {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FName AnimationName; // 0x08(0x08)
	bool IsLoop; // 0x10(0x01)
	bool IsAutoPlay; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct FUIAnimationTrack> AnimationTracks; // 0x18(0x10)
	char pad_28[0x20]; // 0x28(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UITween.UIAnimationTrack
// Size: 0x558 (Inherited: 0x00)
struct FUIAnimationTrack {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FName WidgetName; // 0x08(0x08)
	enum class ETweenerPropType AnimationType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName ParamKey; // 0x14(0x08)
	float Delay; // 0x1c(0x04)
	enum class EUITweenEaseType Ease; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<char> EaseTargetVal; // 0x28(0x10)
	struct FRuntimeFloatCurve FloatCurve; // 0x38(0xa0)
	struct FRuntimeVectorCurve VectorCurve; // 0xd8(0x1d0)
	struct FRuntimeCurveLinearColor ColorCurve; // 0x2a8(0x268)
	float Duration; // 0x510(0x04)
	bool IsFrom; // 0x514(0x01)
	char pad_515[0x43]; // 0x515(0x43)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UITween.UIAnimationController
// Size: 0x20 (Inherited: 0x00)
struct FUIAnimationController {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FUIAnimation> Animations; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
