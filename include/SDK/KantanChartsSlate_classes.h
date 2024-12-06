
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class KantanChartsSlate.KantanBarChartWidgetStyle
// Size: 0x170 (Inherited: 0x38)
class UKantanBarChartWidgetStyle : public USlateWidgetStyleContainerBase {
public:

	struct FKantanBarChartStyle ChartStyle; // 0x38(0x138)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsSlate.KantanCartesianChartWidgetStyle
// Size: 0x168 (Inherited: 0x38)
class UKantanCartesianChartWidgetStyle : public USlateWidgetStyleContainerBase {
public:

	struct FKantanCartesianChartStyle ChartStyle; // 0x38(0x130)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsSlate.KantanCategoryStyleSet
// Size: 0x48 (Inherited: 0x38)
class UKantanCategoryStyleSet : public UDataAsset {
public:

	struct TArray<struct FKantanCategoryStyle> Styles; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsSlate.KantanPointStyle
// Size: 0x58 (Inherited: 0x38)
class UKantanPointStyle : public UDataAsset {
public:

	struct UTexture2D* DataPointTexture; // 0x38(0x08)
	struct FIntPoint PointSizeTextureOffsets[0x3]; // 0x40(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class KantanChartsSlate.KantanSeriesStyleSet
// Size: 0x48 (Inherited: 0x38)
class UKantanSeriesStyleSet : public UDataAsset {
public:

	struct TArray<struct FKantanSeriesStyle> Styles; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
