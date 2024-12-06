
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum AssetManagerEx.EAssetRegistryDependencyTypeEx
enum class EAssetRegistryDependencyTypeEx : int {
	None = 0,
	Soft = 1,
	Hard = 2,
	SearchableName = 3,
	SoftManage = 4,
	HardManage = 5,
	Packages = 6,
	Manage = 7,
	All = 8,
	EAssetRegistryDependencyTypeEx_MAX = 9
};

// ScriptStruct AssetManagerEx.AssetDetail
// Size: 0x30 (Inherited: 0x00)
struct FAssetDetail {
public:

	struct FString mPackagePath; // 0x00(0x10)
	struct FString mAssetType; // 0x10(0x10)
	struct FString mGuid; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetManagerEx.AssetDependenciesInfo
// Size: 0x50 (Inherited: 0x00)
struct FAssetDependenciesInfo {
public:

	struct TMap<struct FString, struct FAssetDependenciesDetail> AssetsDependenciesMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetManagerEx.AssetDependenciesDetail
// Size: 0x60 (Inherited: 0x00)
struct FAssetDependenciesDetail {
public:

	struct FString ModuleCategory; // 0x00(0x10)
	struct TMap<struct FString, struct FAssetDetail> AssetDependencyDetails; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct AssetManagerEx.HotPatcherPackageInfo
// Size: 0x20 (Inherited: 0x00)
struct FHotPatcherPackageInfo {
public:

	struct FString AssetName; // 0x00(0x10)
	struct FString AssetGuid; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
