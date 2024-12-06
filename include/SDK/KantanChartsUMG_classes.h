
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class KantanChartsUMG.KantanChartLegend
// Size: 0x238 (Inherited: 0x168)
class UKantanChartLegend : public UWidget {
public:

	struct FMargin Margins; // 0x168(0x10)
	struct FMargin SeriesPadding; // 0x178(0x10)
	struct FSlateBrush Background; // 0x188(0x90)
	int32_t FontSize; // 0x218(0x04)
	struct TWeakObjectPtr<struct UKantanCartesianChartBase> Chart; // 0x21c(0x08)
	char pad_224[0x14]; // 0x224(0x14)

	void SetSeriesPadding(struct FMargin& InPadding); // Function KantanChartsUMG.KantanChartLegend.SetSeriesPadding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsUMG.KantanChart
// Size: 0x1b8 (Inherited: 0x168)
class UKantanChart : public UWidget {
public:

	struct FMargin Margins; // 0x168(0x10)
	struct FText ChartTitle; // 0x178(0x18)
	struct FMargin TitlePadding; // 0x190(0x10)
	float UpdateTickRate; // 0x1a0(0x04)
	char pad_1A4[0x14]; // 0x1a4(0x14)

	void SetUpdateTickRate(float InRate); // Function KantanChartsUMG.KantanChart.SetUpdateTickRate // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsUMG.KantanCategoryChart
// Size: 0x1d8 (Inherited: 0x1b8)
class UKantanCategoryChart : public UKantanChart {
public:

	bool bAutoPerCategoryStyles; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct UKantanCategoryStyleSet* CategoryStyleSet; // 0x1c0(0x08)
	struct TArray<struct FCategoryStyleManualMapping> ManualStyleMappings; // 0x1c8(0x10)

	void AddCategoryStyleOverride(struct FName CategoryId, struct FLinearColor Color); // Function KantanChartsUMG.KantanCategoryChart.AddCategoryStyleOverride // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsUMG.KantanCartesianChartBase
// Size: 0x3d0 (Inherited: 0x1b8)
class UKantanCartesianChartBase : public UKantanChart {
public:

	struct FKantanCartesianChartStyle WidgetStyle; // 0x1b8(0x130)
	struct FKantanCartesianPlotScale PlotScale; // 0x2e8(0x24)
	enum class EKantanDataPointSize DataPointSize; // 0x30c(0x01)
	char pad_30D[0x3]; // 0x30d(0x03)
	struct FCartesianAxisConfig XAxisCfg; // 0x310(0x48)
	struct FCartesianAxisConfig YAxisCfg; // 0x358(0x48)
	struct FMargin AxisTitlePadding; // 0x3a0(0x10)
	struct UKantanSeriesStyleSet* SeriesStyleSet; // 0x3b0(0x08)
	struct TArray<struct FSeriesStyleManualMapping> ManualStyleMappings; // 0x3b8(0x10)
	bool bAntiAlias; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)

	void SetYAxisConfig(struct FCartesianAxisConfig& InCfg); // Function KantanChartsUMG.KantanCartesianChartBase.SetYAxisConfig // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsUMG.KantanBarChartBase
// Size: 0x370 (Inherited: 0x1d8)
class UKantanBarChartBase : public UKantanCategoryChart {
public:

	struct FKantanBarChartStyle WidgetStyle; // 0x1d8(0x138)
	enum class EKantanBarChartOrientation Orientation; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	float MaxBarValue; // 0x314(0x04)
	enum class EKantanBarLabelPosition LabelPosition; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float BarToGapRatio; // 0x31c(0x04)
	enum class EKantanBarValueExtents ValueExtentsDisplay; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct FCartesianAxisConfig ValueAxisCfg; // 0x328(0x48)

	void SetValueAxisConfig(struct FCartesianAxisConfig& InCfg); // Function KantanChartsUMG.KantanBarChartBase.SetValueAxisConfig // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsUMG.KantanCartesianPlotBase
// Size: 0x3d0 (Inherited: 0x3d0)
class UKantanCartesianPlotBase : public UKantanCartesianChartBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsUMG.KantanTimeSeriesPlotBase
// Size: 0x400 (Inherited: 0x3d0)
class UKantanTimeSeriesPlotBase : public UKantanCartesianChartBase {
public:

	bool bUseFixedTimeRange; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	float DisplayTimeRange; // 0x3d4(0x04)
	struct FCartesianRangeBound LowerTimeBound; // 0x3d8(0x08)
	struct FCartesianRangeBound UpperTimeBound; // 0x3e0(0x08)
	struct FCartesianRangeBound LowerValueBound; // 0x3e8(0x08)
	struct FCartesianRangeBound UpperValueBound; // 0x3f0(0x08)
	bool bExtendValueRangeToZero; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)

	void SetUpperValueBound(struct FCartesianRangeBound InUpperBound); // Function KantanChartsUMG.KantanTimeSeriesPlotBase.SetUpperValueBound // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsUMG.BarChart
// Size: 0x378 (Inherited: 0x370)
class UBarChart : public UKantanBarChartBase {
public:

	struct UObject* DataSource; // 0x370(0x08)

	bool SetDatasource(struct UObject* InDatasource); // Function KantanChartsUMG.BarChart.SetDatasource // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsUMG.SimpleBarChart
// Size: 0x388 (Inherited: 0x370)
class USimpleBarChart : public UKantanBarChartBase {
public:

	char pad_370[0x18]; // 0x370(0x18)

	void BP_UpdateCategoryValue(struct FName ID, float Value, bool& bSuccess); // Function KantanChartsUMG.SimpleBarChart.BP_UpdateCategoryValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsUMG.CartesianPlot
// Size: 0x3d8 (Inherited: 0x3d0)
class UCartesianPlot : public UKantanCartesianPlotBase {
public:

	struct UObject* DataSource; // 0x3d0(0x08)

	bool SetDatasource(struct UObject* InDatasource); // Function KantanChartsUMG.CartesianPlot.SetDatasource // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsUMG.SimpleCartesianPlot
// Size: 0x3f0 (Inherited: 0x3d0)
class USimpleCartesianPlot : public UKantanCartesianPlotBase {
public:

	char pad_3D0[0x20]; // 0x3d0(0x20)

	void BP_RemoveSeries(struct FName ID, bool& bSuccess); // Function KantanChartsUMG.SimpleCartesianPlot.BP_RemoveSeries // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsUMG.SimpleTimeSeriesPlot
// Size: 0x420 (Inherited: 0x400)
class USimpleTimeSeriesPlot : public UKantanTimeSeriesPlotBase {
public:

	char pad_400[0x20]; // 0x400(0x20)

	void BP_RemoveSeries(struct FName ID, bool& bSuccess); // Function KantanChartsUMG.SimpleTimeSeriesPlot.BP_RemoveSeries // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsUMG.TimeSeriesPlot
// Size: 0x408 (Inherited: 0x400)
class UTimeSeriesPlot : public UKantanTimeSeriesPlotBase {
public:

	struct UObject* DataSource; // 0x400(0x08)

	bool SetDatasource(struct UObject* InDatasource); // Function KantanChartsUMG.TimeSeriesPlot.SetDatasource // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
