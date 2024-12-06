
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class KantanChartsDatasource.KantanCartesianDatasourceInterface
// Size: 0x30 (Inherited: 0x30)
class UKantanCartesianDatasourceInterface : public UInterface {
public:


	struct FText GetSeriesName(int32_t SeriesIdx); // Function KantanChartsDatasource.KantanCartesianDatasourceInterface.GetSeriesName // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsDatasource.KantanCategoryDatasourceInterface
// Size: 0x30 (Inherited: 0x30)
class UKantanCategoryDatasourceInterface : public UInterface {
public:


	int32_t GetNumCategories(); // Function KantanChartsDatasource.KantanCategoryDatasourceInterface.GetNumCategories // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsDatasource.KantanSimpleCartesianDatasource
// Size: 0x50 (Inherited: 0x30)
class UKantanSimpleCartesianDatasource : public UObject {
public:

	char pad_30[0x20]; // 0x30(0x20)

	struct UKantanSimpleCartesianDatasource* STATIC_NewSimpleCartesianDatasource(int32_t MaxDatapoints); // Function KantanChartsDatasource.KantanSimpleCartesianDatasource.NewSimpleCartesianDatasource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsDatasource.KantanSimpleCategoryDatasource
// Size: 0x48 (Inherited: 0x30)
class UKantanSimpleCategoryDatasource : public UObject {
public:

	char pad_30[0x18]; // 0x30(0x18)

	struct UKantanSimpleCategoryDatasource* STATIC_NewSimpleCategoryDatasource(); // Function KantanChartsDatasource.KantanSimpleCategoryDatasource.NewSimpleCategoryDatasource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
