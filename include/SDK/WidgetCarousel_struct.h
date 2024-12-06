
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
// Size: 0x860 (Inherited: 0x08)
struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush HighlightBrush; // 0x08(0x90)
	struct FButtonStyle LeftButtonStyle; // 0x98(0x298)
	struct FButtonStyle CenterButtonStyle; // 0x330(0x298)
	struct FButtonStyle RightButtonStyle; // 0x5c8(0x298)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
// Size: 0x3c0 (Inherited: 0x08)
struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle {
public:

	struct FButtonStyle InnerButtonStyle; // 0x08(0x298)
	struct FSlateBrush NavigationButtonLeftImage; // 0x2a0(0x90)
	struct FSlateBrush NavigationButtonRightImage; // 0x330(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
