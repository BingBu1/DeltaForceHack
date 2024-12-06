
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum HotPatcherRuntime.ETargetPlatform
enum class ETargetPlatform : int {
	None = 0,
	AllPlatforms = 1,
	AllDesktop = 2,
	MacClient = 3,
	MacNoEditor = 4,
	MacServer = 5,
	Mac = 6,
	WindowsClient = 7,
	WindowsNoEditor = 8,
	WindowsServer = 9,
	Windows = 10,
	Android = 11,
	Android_ASTC = 12,
	Android_ATC = 13,
	Android_DXT = 14,
	Android_ETC1 = 15,
	Android_ETC1a = 16,
	Android_ETC2 = 17,
	Android_PVRTC = 18,
	AndroidClient = 19,
	Android_ASTCClient = 20,
	Android_ATCClient = 21,
	Android_DXTClient = 22,
	Android_ETC1Client = 23,
	Android_ETC1aClient = 24,
	Android_ETC2Client = 25,
	Android_PVRTCClient = 26,
	Android_Multi = 27,
	Android_MultiClient = 28,
	HTML5 = 29,
	IOSClient = 30,
	IOS = 31,
	TVOSClient = 32,
	TVOS = 33,
	LinuxClient = 34,
	LinuxNoEditor = 35,
	LinuxServer = 36,
	Linux = 37,
	Lumin = 38,
	LuminClient = 39,
	ETargetPlatform_MAX = 40
};

// Enum HotPatcherRuntime.EMatchOperator
enum class EMatchOperator : int {
	None = 0,
	GREAT_THAN = 1,
	LESS_THAN = 2,
	EQUAL = 3,
	EMatchOperator_MAX = 4
};

// Enum HotPatcherRuntime.EMatchRule
enum class EMatchRule : int {
	MATCH = 0,
	IGNORE_1 = 1,
	EMatchRule_MAX = 2
};

// Enum HotPatcherRuntime.EMonolithicPathMode
enum class EMonolithicPathMode : int {
	MountPath = 0,
	PackagePath = 1,
	EMonolithicPathMode_MAX = 2
};

// Enum HotPatcherRuntime.EPSOSaveMode
enum class EPSOSaveMode : int {
	Incremental = 0,
	BoundPSOsOnly = 1,
	SortedBoundPSOs = 2,
	EPSOSaveMode_MAX = 3
};

// Enum HotPatcherRuntime.ESearchCaseMode
enum class ESearchCaseMode : int {
	CaseSensitive = 0,
	IgnoreCase = 1,
	ESearchCaseMode_MAX = 2
};

// ScriptStruct HotPatcherRuntime.PakMountInfo
// Size: 0x18 (Inherited: 0x00)
struct FPakMountInfo {
public:

	struct FString Pak; // 0x00(0x10)
	int32_t PakOrder; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PatchMatchRule
// Size: 0x18 (Inherited: 0x00)
struct FPatchMatchRule {
public:

	enum class EMatchRule Rule; // 0x00(0x01)
	enum class EMatchOperator Operator; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float size; // 0x04(0x04)
	struct TArray<struct FString> Formaters; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PlatformBasePak
// Size: 0x18 (Inherited: 0x00)
struct FPlatformBasePak {
public:

	enum class ETargetPlatform platform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FFilePath> Paks; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PakCommandItem
// Size: 0x20 (Inherited: 0x00)
struct FPakCommandItem {
public:

	struct FString AssetAbsPath; // 0x00(0x10)
	struct FString AssetMountPath; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.ChunkAssetDescribe
// Size: 0x148 (Inherited: 0x00)
struct FChunkAssetDescribe {
public:

	char pad_0[0x148]; // 0x00(0x148)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.ChunkPakCommand
// Size: 0x40 (Inherited: 0x00)
struct FChunkPakCommand {
public:

	char pad_0[0x40]; // 0x00(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PlatformExternAssets
// Size: 0x28 (Inherited: 0x00)
struct FPlatformExternAssets {
public:

	enum class ETargetPlatform TargetPlatform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FExternFileInfo> AddExternFileToPak; // 0x08(0x10)
	struct TArray<struct FExternDirectoryInfo> AddExternDirectoryToPak; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.ExternDirectoryInfo
// Size: 0x20 (Inherited: 0x00)
struct FExternDirectoryInfo {
public:

	struct FDirectoryPath DirectoryPath; // 0x00(0x10)
	struct FString MountPoint; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.ExternFileInfo
// Size: 0x38 (Inherited: 0x00)
struct FExternFileInfo {
public:

	struct FFilePath FilePath; // 0x00(0x10)
	struct FString MountPath; // 0x10(0x10)
	struct FString FileHash; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PatcherSpecifyAsset
// Size: 0x30 (Inherited: 0x00)
struct FPatcherSpecifyAsset {
public:

	struct FSoftObjectPath Asset; // 0x00(0x18)
	bool bAnalysisAssetDependencies; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PakFileProxy
// Size: 0x48 (Inherited: 0x00)
struct FPakFileProxy {
public:

	struct FString ChunkStoreName; // 0x00(0x10)
	enum class ETargetPlatform platform; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString StorageDirectory; // 0x18(0x10)
	struct TArray<struct FPakCommand> PakCommands; // 0x28(0x10)
	struct TArray<struct FString> IoStoreCommands; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PakCommand
// Size: 0x58 (Inherited: 0x00)
struct FPakCommand {
public:

	struct FString ChunkName; // 0x00(0x10)
	struct FString MountPath; // 0x10(0x10)
	struct FString AssetPackage; // 0x20(0x10)
	struct TArray<struct FString> PakCommands; // 0x30(0x10)
	struct TArray<struct FString> IoStoreCommands; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.CookerConfig
// Size: 0x88 (Inherited: 0x00)
struct FCookerConfig {
public:

	struct FString EngineBin; // 0x00(0x10)
	struct FString ProjectPath; // 0x10(0x10)
	struct FString EngineParams; // 0x20(0x10)
	struct TArray<struct FString> CookPlatforms; // 0x30(0x10)
	bool bCookAllMap; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FString> CookMaps; // 0x48(0x10)
	struct TArray<struct FString> CookFilter; // 0x58(0x10)
	struct TArray<struct FString> CookSettings; // 0x68(0x10)
	struct FString Options; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.ReplaceText
// Size: 0x28 (Inherited: 0x00)
struct FReplaceText {
public:

	struct FString From; // 0x00(0x10)
	struct FString To; // 0x10(0x10)
	enum class ESearchCaseMode SearchCase; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.IoStorePlatformContainers
// Size: 0x38 (Inherited: 0x00)
struct FIoStorePlatformContainers {
public:

	struct FDirectoryPath BasePackageStagedRootDir; // 0x00(0x10)
	bool bGenerateDiffPatch; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FFilePath GlobalContainersOverride; // 0x18(0x10)
	struct FFilePath PatchSourceOverride; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PlatformPakListFiles
// Size: 0x38 (Inherited: 0x00)
struct FPlatformPakListFiles {
public:

	enum class ETargetPlatform TargetPlatform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FFilePath> PakResponseFiles; // 0x08(0x10)
	struct TArray<struct FFilePath> PakFiles; // 0x18(0x10)
	struct FString AESKey; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PlatformPakAssets
// Size: 0x28 (Inherited: 0x00)
struct FPlatformPakAssets {
public:

	enum class ETargetPlatform platform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FPatcherSpecifyAsset> Assets; // 0x08(0x10)
	struct TArray<struct FExternFileInfo> ExternFiles; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.HotPatcherAssetDependency
// Size: 0x50 (Inherited: 0x00)
struct FHotPatcherAssetDependency {
public:

	struct FAssetDetail Asset; // 0x00(0x30)
	struct TArray<struct FAssetDetail> AssetReference; // 0x30(0x10)
	struct TArray<struct FAssetDetail> AssetDependency; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PakFileInfo
// Size: 0x28 (Inherited: 0x00)
struct FPakFileInfo {
public:

	struct FString Filename; // 0x00(0x10)
	struct FString Hash; // 0x10(0x10)
	int32_t FileSize; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PakVersion
// Size: 0x40 (Inherited: 0x00)
struct FPakVersion {
public:

	struct FString VersionId; // 0x00(0x10)
	struct FString BaseVersionId; // 0x10(0x10)
	struct FString Date; // 0x20(0x10)
	struct FString CheckCode; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PatchVersionExternDiff
// Size: 0x38 (Inherited: 0x00)
struct FPatchVersionExternDiff {
public:

	enum class ETargetPlatform platform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FExternFileInfo> AddExternalFiles; // 0x08(0x10)
	struct TArray<struct FExternFileInfo> ModifyExternalFiles; // 0x18(0x10)
	struct TArray<struct FExternFileInfo> DeleteExternalFiles; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PlatformExternFiles
// Size: 0x18 (Inherited: 0x00)
struct FPlatformExternFiles {
public:

	enum class ETargetPlatform platform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FExternFileInfo> ExternFiles; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.BinariesPatchConfig
// Size: 0x48 (Inherited: 0x00)
struct FBinariesPatchConfig {
public:

	enum class EBinariesPatchFeature BinariesPatchType; // 0x00(0x01)
	char pad_1[0x17]; // 0x01(0x17)
	struct FFilePath ExtractCryptoJson; // 0x18(0x10)
	struct TArray<struct FPlatformBasePak> BaseVersionPaks; // 0x28(0x10)
	struct TArray<struct FPatchMatchRule> MatchRules; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PakInternalInfo
// Size: 0x06 (Inherited: 0x00)
struct FPakInternalInfo {
public:

	bool bIncludeAssetRegistry; // 0x00(0x01)
	bool bIncludeGlobalShaderCache; // 0x01(0x01)
	bool bIncludeShaderBytecode; // 0x02(0x01)
	bool bIncludeEngineIni; // 0x03(0x01)
	bool bIncludePluginIni; // 0x04(0x01)
	bool bIncludeProjectIni; // 0x05(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.HotPatcherSettingBase
// Size: 0x90 (Inherited: 0x00)
struct FHotPatcherSettingBase {
public:

	char pad_0[0x8]; // 0x00(0x08)
	bool bBackupMetadata; // 0x08(0x01)
	bool bStorageConfig; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FDirectoryPath SavePath; // 0x10(0x10)
	bool bStandaloneMode; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FString> AdditionalCommandletArgs; // 0x28(0x10)
	char pad_38[0x58]; // 0x38(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PakEncryptSettings
// Size: 0x18 (Inherited: 0x00)
struct FPakEncryptSettings {
public:

	bool bEncrypt; // 0x00(0x01)
	bool bEncryptIndex; // 0x01(0x01)
	bool bUseDefaultCryptoIni; // 0x02(0x01)
	bool bSign; // 0x03(0x01)
	char pad_4[0x4]; // 0x04(0x04)
	struct FFilePath CryptoKeys; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.UnrealPakSettings
// Size: 0x28 (Inherited: 0x00)
struct FUnrealPakSettings {
public:

	struct TArray<struct FString> UnrealPakListOptions; // 0x00(0x10)
	struct TArray<struct FString> UnrealCommandletOptions; // 0x10(0x10)
	bool bStoragePakList; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.IoStoreSettings
// Size: 0x80 (Inherited: 0x00)
struct FIoStoreSettings {
public:

	bool bIoStore; // 0x00(0x01)
	bool bAllowBulkDataInIoStore; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FString> IoStorePakListOptions; // 0x08(0x10)
	struct TArray<struct FString> IoStoreCommandletOptions; // 0x18(0x10)
	struct TMap<enum class ETargetPlatform, struct FIoStorePlatformContainers> PlatformContainers; // 0x28(0x50)
	bool bStoragePakList; // 0x78(0x01)
	bool bStorageBulkDataInfo; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.HotPatcherVersion
// Size: 0x118 (Inherited: 0x00)
struct FHotPatcherVersion {
public:

	struct FString VersionId; // 0x00(0x10)
	struct FString BaseVersionId; // 0x10(0x10)
	struct FString Date; // 0x20(0x10)
	char pad_30[0x48]; // 0x30(0x48)
	struct FAssetDependenciesInfo AssetInfo; // 0x78(0x50)
	struct TMap<enum class ETargetPlatform, struct FPlatformExternAssets> PlatformAssets; // 0xc8(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PatchVersionAssetDiff
// Size: 0xf0 (Inherited: 0x00)
struct FPatchVersionAssetDiff {
public:

	struct FAssetDependenciesInfo AddAssetDependInfo; // 0x00(0x50)
	struct FAssetDependenciesInfo ModifyAssetDependInfo; // 0x50(0x50)
	struct FAssetDependenciesInfo DeleteAssetDependInfo; // 0xa0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.HotPatcherContext
// Size: 0x58 (Inherited: 0x00)
struct FHotPatcherContext {
public:

	char pad_0[0x40]; // 0x00(0x40)
	struct UScopedSlowTaskContext* UnrealPakSlowTask; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.ChunkInfo
// Size: 0x88 (Inherited: 0x00)
struct FChunkInfo {
public:

	struct FString ChunkName; // 0x00(0x10)
	char pad_10[0x2]; // 0x10(0x02)
	bool bStorageUnrealPakList; // 0x12(0x01)
	bool bStorageIoStorePakList; // 0x13(0x01)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FDirectoryPath> AssetIncludeFilters; // 0x18(0x10)
	struct TArray<struct FDirectoryPath> AssetIgnoreFilters; // 0x28(0x10)
	bool bAnalysisFilterDependencies; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0x40(0x10)
	struct TArray<struct FPatcherSpecifyAsset> IncludeSpecifyAssets; // 0x50(0x10)
	struct TArray<struct FPlatformExternAssets> AddExternAssetsToPlatform; // 0x60(0x10)
	struct FPakInternalInfo InternalFiles; // 0x70(0x06)
	char pad_76[0x12]; // 0x76(0x12)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.ExportReleaseSettings
// Size: 0x150 (Inherited: 0x90)
struct FExportReleaseSettings : public FHotPatcherSettingBase {
public:

	struct FString VersionId; // 0x90(0x10)
	bool ByPakList; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TArray<struct FPlatformPakListFiles> PlatformsPakListFiles; // 0xa8(0x10)
	struct TArray<struct FDirectoryPath> AssetIncludeFilters; // 0xb8(0x10)
	struct TArray<struct FDirectoryPath> AssetIgnoreFilters; // 0xc8(0x10)
	bool bAnalysisFilterDependencies; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0xe0(0x10)
	bool bIncludeHasRefAssetsOnly; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct TArray<struct FPatcherSpecifyAsset> IncludeSpecifyAssets; // 0xf8(0x10)
	char pad_108[0x20]; // 0x108(0x20)
	struct TArray<struct FPlatformExternAssets> AddExternAssetsToPlatform; // 0x128(0x10)
	bool bStorageAssetDependencies; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct TArray<enum class ETargetPlatform> BackupMetadataPlatforms; // 0x140(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.ExportPatchSettings
// Size: 0x368 (Inherited: 0x90)
struct FExportPatchSettings : public FHotPatcherSettingBase {
public:

	bool bByBaseVersion; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FFilePath BaseVersion; // 0x98(0x10)
	struct FString VersionId; // 0xa8(0x10)
	bool bBinariesPatch; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FBinariesPatchConfig BinariesPatchConfig; // 0xc0(0x48)
	struct TArray<struct FDirectoryPath> AssetIncludeFilters; // 0x108(0x10)
	struct TArray<struct FDirectoryPath> AssetIgnoreFilters; // 0x118(0x10)
	bool bForceSkipContent; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct TArray<struct FDirectoryPath> ForceSkipContentRules; // 0x130(0x10)
	struct TArray<struct FSoftObjectPath> ForceSkipAssets; // 0x140(0x10)
	bool bIncludeHasRefAssetsOnly; // 0x150(0x01)
	bool bAnalysisFilterDependencies; // 0x151(0x01)
	bool bAnalysisDiffAssetDependenciesOnly; // 0x152(0x01)
	bool bRecursiveWidgetTree; // 0x153(0x01)
	char pad_154[0x4]; // 0x154(0x04)
	struct TArray<enum class EAssetRegistryDependencyTypeEx> AssetRegistryDependencyTypes; // 0x158(0x10)
	struct TArray<struct FPatcherSpecifyAsset> IncludeSpecifyAssets; // 0x168(0x10)
	bool bIncludeAssetRegistry; // 0x178(0x01)
	bool bIncludeGlobalShaderCache; // 0x179(0x01)
	bool bIncludeShaderBytecode; // 0x17a(0x01)
	char pad_17B[0x1]; // 0x17b(0x01)
	bool bIncludeEngineIni; // 0x17c(0x01)
	bool bIncludePluginIni; // 0x17d(0x01)
	bool bIncludeProjectIni; // 0x17e(0x01)
	bool bEnableExternFilesDiff; // 0x17f(0x01)
	struct TArray<struct FString> IgnoreDeletionModulesAsset; // 0x180(0x10)
	char pad_190[0x20]; // 0x190(0x20)
	struct TArray<struct FPlatformExternAssets> AddExternAssetsToPlatform; // 0x1b0(0x10)
	bool bIncludePakVersionFile; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct FString PakVersionFileMountPoint; // 0x1c8(0x10)
	bool bEnableChunk; // 0x1d8(0x01)
	bool bCreateDefaultChunk; // 0x1d9(0x01)
	char pad_1DA[0x6]; // 0x1da(0x06)
	struct TArray<struct FChunkInfo> ChunkInfos; // 0x1e0(0x10)
	bool bCookPatchAssets; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	struct FIoStoreSettings IoStoreSettings; // 0x1f8(0x80)
	struct FUnrealPakSettings UnrealPakSettings; // 0x278(0x28)
	struct TArray<struct FString> DefaultPakListOptions; // 0x2a0(0x10)
	struct TArray<struct FString> DefaultCommandletOptions; // 0x2b0(0x10)
	struct FPakEncryptSettings EncryptSettings; // 0x2c0(0x18)
	struct TArray<struct FReplaceText> ReplacePakListTexts; // 0x2d8(0x10)
	struct TArray<enum class ETargetPlatform> PakTargetPlatforms; // 0x2e8(0x10)
	bool bCustomPakNameRegular; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FString PakNameRegular; // 0x300(0x10)
	bool bStorageNewRelease; // 0x310(0x01)
	bool bStoragePakFileInfo; // 0x311(0x01)
	bool bIgnoreDeleatedAssetsInfo; // 0x312(0x01)
	bool bStorageDeletedAssetsToNewReleaseJson; // 0x313(0x01)
	bool bStorageDiffAnalysisResults; // 0x314(0x01)
	bool bStorageAssetDependencies; // 0x315(0x01)
	char pad_316[0x52]; // 0x316(0x52)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.PatchVersionDiff
// Size: 0x140 (Inherited: 0x00)
struct FPatchVersionDiff {
public:

	struct FPatchVersionAssetDiff AssetDiffInfo; // 0x00(0xf0)
	struct TMap<enum class ETargetPlatform, struct FPatchVersionExternDiff> PlatformExternDiffInfo; // 0xf0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.HotPatcherReleaseContext
// Size: 0x170 (Inherited: 0x58)
struct FHotPatcherReleaseContext : public FHotPatcherContext {
public:

	struct FHotPatcherVersion NewReleaseVersion; // 0x58(0x118)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct HotPatcherRuntime.HotPatcherPatchContext
// Size: 0x5e0 (Inherited: 0x58)
struct FHotPatcherPatchContext : public FHotPatcherContext {
public:

	char pad_58[0x8]; // 0x58(0x08)
	struct FHotPatcherVersion BaseVersion; // 0x60(0x118)
	struct FHotPatcherVersion CurrentVersion; // 0x178(0x118)
	struct FPatchVersionDiff VersionDiff; // 0x290(0x140)
	struct FHotPatcherVersion NewReleaseVersion; // 0x3d0(0x118)
	struct FChunkInfo NewVersionChunk; // 0x4e8(0x88)
	struct TArray<struct FChunkInfo> PakChunks; // 0x570(0x10)
	struct TArray<struct FPakCommand> AdditionalFileToPak; // 0x580(0x10)
	char pad_590[0x50]; // 0x590(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
