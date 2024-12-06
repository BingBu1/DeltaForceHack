
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class WaterFallScrollBox.WaterfallScrollView
// Size: 0x650 (Inherited: 0x180)
class UWaterfallScrollView : public UPanelWidget {
public:

	struct FScrollBoxStyle WidgetStyle; // 0x180(0x248)
	struct USlateWidgetStyleAsset* Style; // 0x3c8(0x08)
	struct UClass* TemplateWidget; // 0x3d0(0x08)
	char pad_3D8[0x1]; // 0x3d8(0x01)
	enum class EOrientation Orientation; // 0x3d9(0x01)
	char pad_3DA[0x6]; // 0x3da(0x06)
	int32_t ColumnCount; // 0x3e0(0x04)
	int32_t EditorPreviewItemCount; // 0x3e4(0x04)
	enum class EItemWidthType ItemWidthType; // 0x3e8(0x01)
	char pad_3E9[0x3]; // 0x3e9(0x03)
	struct FVector2D ItemFixedSize; // 0x3ec(0x08)
	struct FVector2D ItemSpacing; // 0x3f4(0x08)
	char pad_3FC[0x10]; // 0x3fc(0x10)
	bool bUserCustomEveryItemSize; // 0x40c(0x01)
	char pad_40D[0x13]; // 0x40d(0x13)
	/*struct FMulticastInlineDelegate*/char OnReachTop[0x10]; // 0x420(0x10)
	/*struct FMulticastInlineDelegate*/char OnReachBottom[0x10]; // 0x430(0x10)
	/*struct FMulticastInlineDelegate*/char OnScrolling[0x10]; // 0x440(0x10)
	/*struct FMulticastInlineDelegate*/char OnScrollEnd[0x10]; // 0x450(0x10)
	/*struct FDelegate*/char OnGetItemCount[0x10]; // 0x460(0x10)
	/*struct FDelegate*/char OnProcessItemWidget[0x10]; // 0x470(0x10)
	/*struct FDelegate*/char OnProcessResetItemWidgetCallback[0x10]; // 0x480(0x10)
	char pad_490[0x10]; // 0x490(0x10)
	/*struct FDelegate*/char OnGetItemSize[0x10]; // 0x4a0(0x10)
	/*struct FMulticastInlineDelegate*/char OnRecycleItem[0x10]; // 0x4b0(0x10)
	/*struct FDelegate*/char OnProcessItemsUpdateFinished[0x10]; // 0x4c0(0x10)
	/*struct FDelegate*/char OnBeforeCreateItem[0x10]; // 0x4d0(0x10)
	/*struct FDelegate*/char OnAfterCreateItem[0x10]; // 0x4e0(0x10)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x4f0(0x01)
	bool bAnimateWheelScrolling; // 0x4f1(0x01)
	bool AllowOverscroll; // 0x4f2(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x4f3(0x01)
	char pad_4F4[0x1]; // 0x4f4(0x01)
	bool bEnableDelayAddItems; // 0x4f5(0x01)
	char pad_4F6[0x2]; // 0x4f6(0x02)
	int32_t AddItemsCountPerFrame; // 0x4f8(0x04)
	int32_t AddItemsTimePerFrame; // 0x4fc(0x04)
	float LoadMoreOffset; // 0x500(0x04)
	bool bItemAutoSizeToContent; // 0x504(0x01)
	bool bEnableTickRefresh; // 0x505(0x01)
	bool bAutoContainerSize; // 0x506(0x01)
	char pad_507[0x1]; // 0x507(0x01)
	float MaxContainerValue; // 0x508(0x04)
	enum class EDescendantScrollDestination NavigationDestination; // 0x50c(0x01)
	char pad_50D[0x3]; // 0x50d(0x03)
	float NavigationScrollPadding; // 0x510(0x04)
	float DesiredScrollOffset; // 0x514(0x04)
	char pad_518[0x10]; // 0x518(0x10)
	struct UCanvasPanel* ScrollContainer; // 0x528(0x08)
	char pad_530[0x120]; // 0x530(0x120)

	void SetScrollOffset(float NewScrollOffset); // Function WaterFallScrollBox.WaterfallScrollView.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
