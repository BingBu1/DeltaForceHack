
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct DWorldTools.MapEconomyReportData
// Size: 0x30 (Inherited: 0x00)
struct FMapEconomyReportData {
public:

	struct FString platform; // 0x00(0x10)
	struct FString Version; // 0x10(0x10)
	struct TArray<struct FMapEconomyReportItem> resource; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DWorldTools.MapEconomyReportItem
// Size: 0x40 (Inherited: 0x00)
struct FMapEconomyReportItem {
public:

	int32_t map_id; // 0x00(0x04)
	int32_t battle_level; // 0x04(0x04)
	int32_t loc_id; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString loc_xyz; // 0x10(0x10)
	struct FString item_name; // 0x20(0x10)
	uint64_t item_id; // 0x30(0x08)
	uint32_t item_num; // 0x38(0x04)
	uint32_t item_value; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
