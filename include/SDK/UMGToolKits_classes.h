
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class UMGToolKits.ComputeTextBlock
// Size: 0x410 (Inherited: 0x3a8)
class UComputeTextBlock : public UTextBlock {
public:

	float TimeStep; // 0x3a8(0x04)
	int32_t RandomCount; // 0x3ac(0x04)
	bool bPlayAnim; // 0x3b0(0x01)
	bool bAutoPlayAnimWhenSetText; // 0x3b1(0x01)
	char pad_3B2[0x6]; // 0x3b2(0x06)
	/*struct FMulticastInlineDelegate*/char OnComputeTextBlockAnimChangeEvent[0x10]; // 0x3b8(0x10)
	/*struct FMulticastInlineDelegate*/char OnComputeTextBlockAnimFinishEvent[0x10]; // 0x3c8(0x10)
	struct FText OriginalText; // 0x3d8(0x18)
	char pad_3F0[0x20]; // 0x3f0(0x20)

	void SetPlayAnim(bool bInPlayAnim); // Function UMGToolKits.ComputeTextBlock.SetPlayAnim // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMGToolKits.DynamicPanelSlotDeque
// Size: 0x50 (Inherited: 0x30)
class UDynamicPanelSlotDeque : public UObject {
public:

	int32_t Head; // 0x30(0x04)
	int32_t Tail; // 0x34(0x04)
	int32_t size; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct UDynamicPanelSlot*> Slots; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMGToolKits.DynamicPanelWidgetSlotInterface
// Size: 0x30 (Inherited: 0x30)
class UDynamicPanelWidgetSlotInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMGToolKits.ObjectInspector
// Size: 0x30 (Inherited: 0x30)
class UObjectInspector : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMGToolKits.PreviewUserWidget
// Size: 0x298 (Inherited: 0x298)
class UPreviewUserWidget : public UUserWidget {
public:


	void SynchronizePropertiesForGame(); // Function UMGToolKits.PreviewUserWidget.SynchronizePropertiesForGame // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMGToolKits.ScrapSlotRecycleBin
// Size: 0x90 (Inherited: 0x30)
class UScrapSlotRecycleBin : public UObject {
public:

	struct TArray<struct UDynamicPanelSlotDeque*> ScrapSlotDequeArray; // 0x30(0x10)
	struct TMap<int32_t, int32_t> WidgetTypeToDequeIndexMap; // 0x40(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMGToolKits.DynamicPanelSlot
// Size: 0x40 (Inherited: 0x30)
class UDynamicPanelSlot : public UVisual {
public:

	struct UDynamicPanelWidget* Parent; // 0x30(0x08)
	struct UWidget* Content; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMGToolKits.DynamicPanelWidget
// Size: 0x170 (Inherited: 0x168)
class UDynamicPanelWidget : public UWidget {
public:

	struct UDynamicPanelSlotDeque* Slots; // 0x168(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMGToolKits.ScrollGridBoxSlot
// Size: 0x48 (Inherited: 0x40)
class UScrollGridBoxSlot : public UDynamicPanelSlot {
public:

	char pad_40[0x8]; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UMGToolKits.ScrollGridBox
// Size: 0xa08 (Inherited: 0x170)
class UScrollGridBox : public UDynamicPanelWidget {
public:

	struct FScrollBoxStyle WidgetStyle; // 0x170(0x248)
	struct FScrollBarStyle WidgetBarStyle; // 0x3b8(0x518)
	enum class EOrientation Orientation; // 0x8d0(0x01)
	bool bInvertScrollBarDirection; // 0x8d1(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0x8d2(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x8d3(0x01)
	struct FVector2D ScrollbarThickness; // 0x8d4(0x08)
	struct FMargin ScrollbarPadding; // 0x8dc(0x10)
	bool AlwaysShowScrollbar; // 0x8ec(0x01)
	bool AllowOverscroll; // 0x8ed(0x01)
	bool bAllowRightClickDragScrolling; // 0x8ee(0x01)
	char pad_8EF[0x1]; // 0x8ef(0x01)
	float OverrideDragTriggerDistance; // 0x8f0(0x04)
	bool bResponseMouseMoveHandle; // 0x8f4(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0x8f5(0x01)
	bool bNotReleaseChildrenWhenReleaseSlateResources; // 0x8f6(0x01)
	char pad_8F7[0x1]; // 0x8f7(0x01)
	float NavigationScrollPadding; // 0x8f8(0x04)
	char pad_8FC[0x14]; // 0x8fc(0x14)
	struct FMargin Padding; // 0x910(0x10)
	bool bFixedSize; // 0x920(0x01)
	char pad_921[0x3]; // 0x921(0x03)
	struct FVector2D ItemFixedSize; // 0x924(0x08)
	int32_t Row; // 0x92c(0x04)
	int32_t Column; // 0x930(0x04)
	struct FVector2D ItemSpacing; // 0x934(0x08)
	enum class ESlateVisibility ItemVisibility; // 0x93c(0x01)
	char pad_93D[0x3]; // 0x93d(0x03)
	struct UClass* ItemWidgetTemplateClass; // 0x940(0x08)
	bool bCircleBox; // 0x948(0x01)
	char pad_949[0x3]; // 0x949(0x03)
	struct FVector2D Center; // 0x94c(0x08)
	float radius; // 0x954(0x04)
	bool bNeedCalculateItemSize; // 0x958(0x01)
	char pad_959[0x3]; // 0x959(0x03)
	int32_t ItemCount; // 0x95c(0x04)
	struct UDynamicPanelSlotDeque* ScrapSlots; // 0x960(0x08)
	/*struct FDelegate*/char OnGetItemCount[0x10]; // 0x968(0x10)
	/*struct FDelegate*/char OnProcessItemWidget[0x10]; // 0x978(0x10)
	/*struct FDelegate*/char OnProcessItemsUpdateFinished[0x10]; // 0x988(0x10)
	char pad_998[0x10]; // 0x998(0x10)
	/*struct FMulticastInlineDelegate*/char OnScrolling[0x10]; // 0x9a8(0x10)
	/*struct FMulticastInlineDelegate*/char OnScrollEnd[0x10]; // 0x9b8(0x10)
	bool bEnableContentHint; // 0x9c8(0x01)
	bool bEnableTickEvent; // 0x9c9(0x01)
	bool bEnableDelayAddItems; // 0x9ca(0x01)
	char pad_9CB[0x1]; // 0x9cb(0x01)
	int32_t AddItemsCountPerFrame; // 0x9cc(0x04)
	int32_t AddItemsTimePerFrame; // 0x9d0(0x04)
	char pad_9D4[0x4]; // 0x9d4(0x04)
	/*struct FMulticastInlineDelegate*/char OnContentHintStateChanged[0x10]; // 0x9d8(0x10)
	/*struct FMulticastInlineDelegate*/char OnTick[0x10]; // 0x9e8(0x10)
	/*struct FMulticastInlineDelegate*/char OnDataCountChanged[0x10]; // 0x9f8(0x10)

	void UpdateAllItemSize(); // Function UMGToolKits.ScrollGridBox.UpdateAllItemSize // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
