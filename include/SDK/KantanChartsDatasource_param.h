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
	struct Function_KantanChartsDatasource_KantanCartesianDatasourceInterface_GetSeriesName_Param
	{
	public:

		int32_t SeriesIdx; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct FText ReturnValue; // 0x08(0x18)
	};

	struct Function_KantanChartsDatasource_KantanCategoryDatasourceInterface_GetNumCategories_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_KantanChartsDatasource_KantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Param
	{
	public:

		int32_t MaxDatapoints; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UKantanSimpleCartesianDatasource* ReturnValue; // 0x08(0x08)
	};

	struct Function_KantanChartsDatasource_KantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Param
	{
	public:

		struct UKantanSimpleCategoryDatasource* ReturnValue; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
