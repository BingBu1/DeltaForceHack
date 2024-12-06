
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum AssetRegistry.ECrossPlatformType
enum class ECrossPlatformType : int {
	Mobile = 0,
	Desktop = 1,
	ECrossPlatformType_MAX = 2
};

// ScriptStruct AssetRegistry.ARFilter
// Size: 0xe8 (Inherited: 0x00)
struct FARFilter {
public:

	struct TArray<struct FName> PackageNames; // 0x00(0x10)
	struct TArray<struct FName> PackagePaths; // 0x10(0x10)
	struct TArray<struct FName> ObjectPaths; // 0x20(0x10)
	struct TArray<struct FName> ClassNames; // 0x30(0x10)
	char pad_40[0x50]; // 0x40(0x50)
	/*struct TSet<struct FName>*/char RecursiveClassesExclusionSet[0x50]; // 0x90(0x50)
	bool bRecursivePaths; // 0xe0(0x01)
	bool bRecursiveClasses; // 0xe1(0x01)
	bool bIncludeOnlyOnDiskAssets; // 0xe2(0x01)
	char pad_E3[0x5]; // 0xe3(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetRegistry.AssetBundleData
// Size: 0x10 (Inherited: 0x00)
struct FAssetBundleData {
public:

	struct TArray<struct FAssetBundleEntry> Bundles; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetRegistry.AssetBundleEntry
// Size: 0x28 (Inherited: 0x00)
struct FAssetBundleEntry {
public:

	struct FPrimaryAssetId BundleScope; // 0x00(0x10)
	struct FName BundleName; // 0x10(0x08)
	struct TArray<struct FSoftObjectPath> BundleAssets; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetRegistry.AssetData
// Size: 0x50 (Inherited: 0x00)
struct FAssetData {
public:

	struct FName ObjectPath; // 0x00(0x08)
	struct FName PackageName; // 0x08(0x08)
	struct FName PackagePath; // 0x10(0x08)
	struct FName AssetName; // 0x18(0x08)
	struct FName AssetClass; // 0x20(0x08)
	char pad_28[0x28]; // 0x28(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetRegistry.TagAndValue
// Size: 0x18 (Inherited: 0x00)
struct FTagAndValue {
public:

	struct FName Tag; // 0x00(0x08)
	struct FString Value; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
// Size: 0x06 (Inherited: 0x00)
struct FAssetRegistryDependencyOptions {
public:

	bool bIncludeSoftPackageReferences; // 0x00(0x01)
	bool bIncludeHardPackageReferences; // 0x01(0x01)
	bool bIncludeSearchableNames; // 0x02(0x01)
	bool bIncludeSoftManagementReferences; // 0x03(0x01)
	bool bIncludeHardManagementReferences; // 0x04(0x01)
	bool bIncludeSoftEditorOnlyPackageReferences; // 0x05(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
