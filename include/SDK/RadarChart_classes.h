
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class RadarChart.RadarChart
// Size: 0xb30 (Inherited: 0x168)
class URadarChart : public UWidget {
public:

	struct FRadarChartStyle ChartStyle; // 0x168(0x930)
	struct TArray<struct FRadarChartValueLayer> ValueLayers; // 0xa98(0x10)
	char bWrapWithInvalidationPanel : 1; // 0xaa8(0x01)
	char pad_AA8_1 : 7; // 0xaa8(0x01)
	char pad_AA9[0x7]; // 0xaa9(0x07)
	/*struct FMulticastInlineDelegate*/char OnClicked[0x10]; // 0xab0(0x10)
	/*struct FMulticastInlineDelegate*/char OnPressed[0x10]; // 0xac0(0x10)
	/*struct FMulticastInlineDelegate*/char OnReleased[0x10]; // 0xad0(0x10)
	/*struct FMulticastInlineDelegate*/char OnHovered[0x10]; // 0xae0(0x10)
	/*struct FMulticastInlineDelegate*/char OnUnhovered[0x10]; // 0xaf0(0x10)
	/*struct FMulticastInlineDelegate*/char OnValueSlide[0x10]; // 0xb00(0x10)
	char pad_B10[0x20]; // 0xb10(0x20)

	void SetValuesForLayer(char ValueLayerIndex, struct TArray<float>& InValues); // Function RadarChart.RadarChart.SetValuesForLayer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class RadarChart.RadarChartSetValuesAnimated
// Size: 0x88 (Inherited: 0x38)
class URadarChartSetValuesAnimated : public UBlueprintAsyncActionBase {
public:

	char pad_38[0x30]; // 0x38(0x30)
	/*struct FMulticastInlineDelegate*/char OnUpdate[0x10]; // 0x68(0x10)
	/*struct FMulticastInlineDelegate*/char OnFinished[0x10]; // 0x78(0x10)

	struct URadarChartSetValuesAnimated* STATIC_SetValuesAnimated(struct URadarChart* Target, char ValueLayer, struct TArray<float>& Values, float Duration, char FPS, enum class EEasingFunc Ease); // Function RadarChart.RadarChartSetValuesAnimated.SetValuesAnimated // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class RadarChart.RadarChartSetNormalizationScaleAnimated
// Size: 0x80 (Inherited: 0x38)
class URadarChartSetNormalizationScaleAnimated : public UBlueprintAsyncActionBase {
public:

	char pad_38[0x28]; // 0x38(0x28)
	/*struct FMulticastInlineDelegate*/char OnUpdate[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char OnFinished[0x10]; // 0x70(0x10)

	struct URadarChartSetNormalizationScaleAnimated* STATIC_SetNormalizationScaleAnimated(struct URadarChart* Target, float NewScale, float Duration, char FPS, enum class EEasingFunc Ease); // Function RadarChart.RadarChartSetNormalizationScaleAnimated.SetNormalizationScaleAnimated // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
