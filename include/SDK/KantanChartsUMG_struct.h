
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct KantanChartsUMG.SeriesStyleManualMapping
// Size: 0x28 (Inherited: 0x00)
struct FSeriesStyleManualMapping {
public:

	struct FName SeriesId; // 0x00(0x08)
	struct FKantanSeriesStyle Style; // 0x08(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct KantanChartsUMG.CategoryStyleManualMapping
// Size: 0x20 (Inherited: 0x00)
struct FCategoryStyleManualMapping {
public:

	struct FName CategoryId; // 0x00(0x08)
	struct FKantanCategoryStyle Style; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
