/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif


namespace Dumper
{
	struct Function_KantanChartsUMG_KantanChartLegend_SetSeriesPadding_Param
	{
	public:

		struct FMargin InPadding; // 0x00(0x10)
	};

	struct Function_KantanChartsUMG_KantanChart_SetUpdateTickRate_Param
	{
	public:

		float InRate; // 0x00(0x04)
	};

	struct Function_KantanChartsUMG_KantanCategoryChart_AddCategoryStyleOverride_Param
	{
	public:

		struct FName CategoryId; // 0x00(0x08)
		struct FLinearColor Color; // 0x08(0x10)
	};

	struct Function_KantanChartsUMG_KantanCartesianChartBase_SetYAxisConfig_Param
	{
	public:

		struct FCartesianAxisConfig InCfg; // 0x00(0x48)
	};

	struct Function_KantanChartsUMG_KantanBarChartBase_SetValueAxisConfig_Param
	{
	public:

		struct FCartesianAxisConfig InCfg; // 0x00(0x48)
	};

	struct Function_KantanChartsUMG_KantanTimeSeriesPlotBase_SetUpperValueBound_Param
	{
	public:

		struct FCartesianRangeBound InUpperBound; // 0x00(0x08)
	};

	struct Function_KantanChartsUMG_BarChart_SetDatasource_Param
	{
	public:

		struct UObject* InDatasource; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_KantanChartsUMG_SimpleBarChart_BP_UpdateCategoryValue_Param
	{
	public:

		struct FName ID; // 0x00(0x08)
		float Value; // 0x08(0x04)
		bool bSuccess; // 0x0c(0x01)
	};

	struct Function_KantanChartsUMG_CartesianPlot_SetDatasource_Param
	{
	public:

		struct UObject* InDatasource; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_KantanChartsUMG_SimpleCartesianPlot_BP_RemoveSeries_Param
	{
	public:

		struct FName ID; // 0x00(0x08)
		bool bSuccess; // 0x08(0x01)
	};

	struct Function_KantanChartsUMG_SimpleTimeSeriesPlot_BP_RemoveSeries_Param
	{
	public:

		struct FName ID; // 0x00(0x08)
		bool bSuccess; // 0x08(0x01)
	};

	struct Function_KantanChartsUMG_TimeSeriesPlot_SetDatasource_Param
	{
	public:

		struct UObject* InDatasource; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
