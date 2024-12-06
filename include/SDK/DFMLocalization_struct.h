
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMLocalization.ECommonTextType
enum class ECommonTextType : int {
	InGame = 0,
	OutGame = 1,
	ECommonTextType_MAX = 2
};

// Enum DFMLocalization.ETimeType
enum class ETimeType : int {
	Default = 0,
	Short = 1,
	Medium = 2,
	Long = 3,
	Full = 4,
	ETimeType_MAX = 5
};

// ScriptStruct DFMLocalization.AreaCultureSearchingData
// Size: 0x10 (Inherited: 0x00)
struct FAreaCultureSearchingData {
public:

	struct TArray<struct FString> SearchingChain; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMLocalization.ServerHotPatchData
// Size: 0x50 (Inherited: 0x00)
struct FServerHotPatchData {
public:

	struct FString Namespace; // 0x00(0x10)
	struct FString Key; // 0x10(0x10)
	struct FString SourceString; // 0x20(0x10)
	struct FString CultureSign; // 0x30(0x10)
	struct FString Trans; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMLocalization.HotPatchVersionEntry
// Size: 0x18 (Inherited: 0x00)
struct FHotPatchVersionEntry {
public:

	struct FString CultureSign; // 0x00(0x10)
	int32_t Version; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMLocalization.R13NRegionCodeConfigRow
// Size: 0x20 (Inherited: 0x08)
struct FR13NRegionCodeConfigRow : public FTableRowBase {
public:

	int32_t RegionCode; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString RegionDesc; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMLocalization.ComputeTextConfigRow
// Size: 0x28 (Inherited: 0x08)
struct FComputeTextConfigRow : public FTableRowBase {
public:

	struct FText RandTextConfig; // 0x08(0x18)
	int32_t RandSeedConfig; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMLocalization.LocalizeCultureRow
// Size: 0x48 (Inherited: 0x08)
struct FLocalizeCultureRow : public FTableRowBase {
public:

	struct FName CultureSign; // 0x08(0x08)
	struct FString RowDescription; // 0x10(0x10)
	struct FName CultureDisplayName; // 0x20(0x08)
	struct FName CultureWwise; // 0x28(0x08)
	struct FText CultureWwiseDisplayName; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMLocalization.LocalizeCommonTextConfigRow
// Size: 0x40 (Inherited: 0x08)
struct FLocalizeCommonTextConfigRow : public FTableRowBase {
public:

	struct FString TextKey; // 0x08(0x10)
	struct FString Desc; // 0x18(0x10)
	struct FText Text; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMLocalization.LocalizeNumberConfigRow
// Size: 0x38 (Inherited: 0x08)
struct FLocalizeNumberConfigRow : public FTableRowBase {
public:

	struct FString Desc; // 0x08(0x10)
	struct FString FormatStr; // 0x18(0x10)
	struct TArray<struct FString> UsingCultureList; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMLocalization.LocalizeTimeConfigRow
// Size: 0x78 (Inherited: 0x08)
struct FLocalizeTimeConfigRow : public FTableRowBase {
public:

	struct FString Name; // 0x08(0x10)
	struct FString Desc; // 0x18(0x10)
	struct TMap<struct FString, struct FString> TimeFormatConfig; // 0x28(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
