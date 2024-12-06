
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GameCore.EAppUpdateType
enum class EAppUpdateType : int {
	Dolphin = 0,
	Puffer = 1,
	EAppUpdateType_MAX = 2
};

// Enum GameCore.EPreloadType
enum class EPreloadType : int {
	NoBlock = 0,
	Block = 1,
	EPreloadType_MAX = 2
};

// Enum GameCore.EDataTableLoadingStep
enum class EDataTableLoadingStep : int {
	None = 0,
	Loading = 1,
	Success = 2,
	Fail = 3,
	EDataTableLoadingStep_MAX = 4
};

// Enum GameCore.EDataTableUseClientType
enum class EDataTableUseClientType : int {
	All = 0,
	DS = 1,
	Editor = 2,
	Android = 3,
	IOS = 4,
	PC = 5,
	EDataTableUseClientType_MAX = 6
};

// Enum GameCore.EDataTableUseScene
enum class EDataTableUseScene : int {
	None = 0,
	Common = 1,
	FrontEnd = 2,
	InGameSOL = 3,
	InGameBattleField = 4,
	Login = 5,
	Disable = 6,
	EDataTableUseScene_MAX = 7
};

// Enum GameCore.EDatatableAssetinfoOPCode
enum class EDatatableAssetinfoOPCode : int {
	Default = 0,
	Add = 1,
	Remove = 2,
	AddLoaded = 3,
	EDatatableAssetinfoOPCode_MAX = 4
};

// Enum GameCore.EDeviceLevel
enum class EDeviceLevel : int {
	VeryLow = 0,
	Low = 1,
	Middle = 2,
	Standard = 3,
	High = 4,
	VeryHigh = 5,
	Unknown = 6,
	EDeviceLevel_MAX = 7
};

// Enum GameCore.EBackgroundType
enum class EBackgroundType : int {
	None = 0,
	Image = 1,
	Media = 2,
	CustomBP = 3,
	EBackgroundType_MAX = 4
};

// Enum GameCore.EBackgroundScaleType
enum class EBackgroundScaleType : int {
	Scale = 0,
	UnScale = 1,
	EBackgroundScaleType_MAX = 2
};

// Enum GameCore.EGameVersionCompareResult
enum class EGameVersionCompareResult : int {
	VERSION_COMPARE_EQUAL = 0,
	VERSION_COMPARE_LOWER = 1,
	VERSION_COMPARE_HIGHER = 2,
	VERSION_COMPARE_ERROR = 3,
	VERSION_COMPARE_MAX = 4
};

// Enum GameCore.EGameChannel
enum class EGameChannel : int {
	Unknown = 0,
	Official = 1,
	WeGame = 2,
	Steam = 3,
	Epic = 4,
	EGameChannel_MAX = 5
};

// Enum GameCore.ELauncherChannel
enum class ELauncherChannel : int {
	Unknown = 0,
	ELauncherChannel_MAX = 1
};

// Enum GameCore.EGameBuildRegion
enum class EGameBuildRegion : int {
	Default = 0,
	CN = 1,
	CN_Exper = 2,
	Global = 3,
	Global_Exper = 4,
	GA = 5,
	GA_Exper = 6,
	EGameBuildRegion_MAX = 7
};

// Enum GameCore.EGameBuildConfiguration
enum class EGameBuildConfiguration : int {
	Default = 0,
	Daily = 1,
	Test = 2,
	Match = 3,
	Shipping = 4,
	ShippingTest = 5,
	Release = 6,
	EGameBuildConfiguration_MAX = 7
};

// Enum GameCore.ETODType
enum class ETODType : int {
	Day = 0,
	Dusk = 1,
	Random = 2,
	DONOTUSE = 3,
	ETODType_MAX = 4
};

// ScriptStruct GameCore.DataTableUseSceneValue
// Size: 0x08 (Inherited: 0x00)
struct FDataTableUseSceneValue {
public:

	uint64_t Value; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.AppSettingForMapleChannel
// Size: 0x14 (Inherited: 0x00)
struct FAppSettingForMapleChannel {
public:

	enum class EGameBuildConfiguration BuildType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t AndroidTreeID; // 0x04(0x04)
	int32_t IOSTreeID; // 0x08(0x04)
	int32_t PCTreeID; // 0x0c(0x04)
	int32_t WinSETreeID; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.AppSettingForUpdateChannel
// Size: 0x50 (Inherited: 0x00)
struct FAppSettingForUpdateChannel {
public:

	char pad_0[0x8]; // 0x00(0x08)
	enum class EGameBuildConfiguration BuildType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString AndroidProductId; // 0x10(0x10)
	struct FString IOSProductId; // 0x20(0x10)
	struct FString PCProductId; // 0x30(0x10)
	struct FString WinSEProductId; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.AsyncReqGroup
// Size: 0x48 (Inherited: 0x00)
struct FAsyncReqGroup {
public:

	char pad_0[0x48]; // 0x00(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.AsyncReqStruct
// Size: 0x38 (Inherited: 0x00)
struct FAsyncReqStruct {
public:

	uint64_t AsyncID; // 0x00(0x08)
	struct TArray<struct FSoftObjectPath> InPaths; // 0x08(0x10)
	char pad_18[0x20]; // 0x18(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.AssetRetargetInfoRow
// Size: 0x10 (Inherited: 0x08)
struct FAssetRetargetInfoRow : public FTableRowBase {
public:

	struct FName RetargetPackageName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.AssetStoreItemRow
// Size: 0x80 (Inherited: 0x08)
struct FAssetStoreItemRow : public FTableRowBase {
public:

	struct FSoftObjectPath AssetPath; // 0x08(0x18)
	struct FSoftObjectPath SrcTablePath; // 0x20(0x18)
	struct FName Category; // 0x38(0x08)
	struct FName Tag; // 0x40(0x08)
	struct FSoftObjectPath MidAssetPath; // 0x48(0x18)
	struct FSoftObjectPath LowAssetPath; // 0x60(0x18)
	bool BuildToMobile; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.GameTypeConfig
// Size: 0x18 (Inherited: 0x00)
struct FGameTypeConfig {
public:

	int32_t GameMapId; // 0x00(0x04)
	int32_t MainGameModeType; // 0x04(0x04)
	int32_t SubGameModeType; // 0x08(0x04)
	int32_t RoomType; // 0x0c(0x04)
	int32_t TeamType; // 0x10(0x04)
	bool bInited; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.DataTableAssetInfo
// Size: 0xb8 (Inherited: 0x70)
struct FDataTableAssetInfo : public FAssetPakerPakPolicyRow {
public:

	char SyncLoad : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t UseScene; // 0x74(0x04)
	int32_t UseClientType; // 0x78(0x04)
	char HasSubTableInDir : 1; // 0x7c(0x01)
	char bCombineWithOtherTables : 1; // 0x7c(0x01)
	char pad_7C_2 : 6; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct TArray<struct FSoftObjectPath> CombineWithThoseTables; // 0x80(0x10)
	char bCanMMapWithSubTable : 1; // 0x90(0x01)
	char bMaskToUseMMap : 1; // 0x90(0x01)
	char pad_90_2 : 6; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FName CSVName; // 0x94(0x08)
	char bCleanWhenForceBatchLoad : 1; // 0x9c(0x01)
	char pad_9C_1 : 7; // 0x9c(0x01)
	char pad_9D[0x1b]; // 0x9d(0x1b)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.DataTableLiteContent
// Size: 0x218 (Inherited: 0x00)
struct FDataTableLiteContent {
public:

	char pad_0[0x28]; // 0x00(0x28)
	struct TArray<struct UDataTable*> DataTables; // 0x28(0x10)
	char pad_38[0x1c0]; // 0x38(0x1c0)
	struct UDataTable* CombineTable; // 0x1f8(0x08)
	char pad_200[0x18]; // 0x200(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.EnvVariables
// Size: 0x02 (Inherited: 0x00)
struct FEnvVariables {
public:

	bool bAIDev; // 0x00(0x01)
	bool bAIPerf; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.LuaAssetRow
// Size: 0xb0 (Inherited: 0x70)
struct FLuaAssetRow : public FAssetPakerPakPolicyRow {
public:

	struct FName AssetCatagory; // 0x70(0x08)
	struct FName BPPath; // 0x78(0x08)
	struct FName FullPath; // 0x80(0x08)
	struct FName BPClassName; // 0x88(0x08)
	struct FSoftObjectPath AssetPath; // 0x90(0x18)
	int32_t LuaBPConfigSplit; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.LuaAssetRowPCSplit
// Size: 0xa0 (Inherited: 0x70)
struct FLuaAssetRowPCSplit : public FAssetPakerPakPolicyRow {
public:

	struct FName BPPath; // 0x70(0x08)
	struct FName FullPath; // 0x78(0x08)
	struct FName BPClassName; // 0x80(0x08)
	struct FSoftObjectPath AssetPathPcSplit; // 0x88(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.OneStringRow
// Size: 0x10 (Inherited: 0x08)
struct FOneStringRow : public FTableRowBase {
public:

	struct FName StringRow; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.DescRowBase
// Size: 0x10 (Inherited: 0x08)
struct FDescRowBase : public FTableRowBase {
public:

	struct FName RowDescription; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.LoginSettingRow
// Size: 0x40 (Inherited: 0x00)
struct FLoginSettingRow {
public:

	struct FString EditorLoginList; // 0x00(0x10)
	struct FString WindowsLoginList; // 0x10(0x10)
	struct FString AndroidLoginList; // 0x20(0x10)
	struct FString IOSLoginList; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.MapleSettingRow
// Size: 0x70 (Inherited: 0x00)
struct FMapleSettingRow {
public:

	struct FString MaplePreDomain; // 0x00(0x10)
	struct FString MapleDomain; // 0x10(0x10)
	struct FString DefaultCDNUrl; // 0x20(0x10)
	struct FString CDNUrl_PC; // 0x30(0x10)
	struct TArray<struct FString> CDNFallbackDomains; // 0x40(0x10)
	struct TArray<struct FString> CDNFallbackDomains_PC; // 0x50(0x10)
	struct TArray<struct FAppSettingForMapleChannel> MapleChannels; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.AppSettingForUpdate
// Size: 0x68 (Inherited: 0x00)
struct FAppSettingForUpdate {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FString DolphinPreDomain; // 0x08(0x10)
	struct FString DolphinDomain; // 0x18(0x10)
	struct TArray<struct FAppSettingForUpdateChannel> DolphinProductIdList; // 0x28(0x10)
	struct FString PufferPreDomain; // 0x38(0x10)
	struct FString PufferDomain; // 0x48(0x10)
	struct TArray<struct FAppSettingForUpdateChannel> PufferProductIdList; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.PackageDescRow
// Size: 0x28 (Inherited: 0x10)
struct FPackageDescRow : public FDescRowBase {
public:

	struct FName Catagory; // 0x10(0x08)
	enum class EPrimaryAssetPakRule PakLevel; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName FallbackRowName; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.AssetDescRowBase
// Size: 0x30 (Inherited: 0x10)
struct FAssetDescRowBase : public FDescRowBase {
public:

	struct FSoftObjectPath AssetPath; // 0x10(0x18)
	enum class EPreloadType PreloadType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.CSV2Datatable
// Size: 0x48 (Inherited: 0x10)
struct FCSV2Datatable : public FDescRowBase {
public:

	struct FSoftObjectPath DataTablePath; // 0x10(0x18)
	struct FName CSVName; // 0x28(0x08)
	struct TArray<struct FName> AssetInfoKeys; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.FrameStackBgAssetRow
// Size: 0x90 (Inherited: 0x10)
struct FFrameStackBgAssetRow : public FDescRowBase {
public:

	struct FSoftObjectPath AssetPath; // 0x10(0x18)
	enum class EBackgroundScaleType BackgroundScaleType; // 0x28(0x01)
	enum class EBackgroundType BackgroundType; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FSoftObjectPath DisplayAssetPath; // 0x30(0x18)
	struct FName MediaName; // 0x48(0x08)
	bool IsMaskVisible; // 0x50(0x01)
	bool IsBlurVisible; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float BlurStrength; // 0x54(0x04)
	bool IsCustomPadding; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FVector4 CustomPadding; // 0x60(0x10)
	bool IsAutoAudio; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FName AudioEventName; // 0x74(0x08)
	bool IsForceRenderingWorld; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct FName CustomUIName; // 0x80(0x08)
	char pad_88[0x8]; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.FrameStackTransitionRow
// Size: 0x38 (Inherited: 0x10)
struct FFrameStackTransitionRow : public FDescRowBase {
public:

	struct FSoftObjectPath AssetPath; // 0x10(0x18)
	bool IsForceTransition; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float MinTime; // 0x2c(0x04)
	float AniSpeedScale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.TODSubLevelSequenceRow
// Size: 0x78 (Inherited: 0x10)
struct FTODSubLevelSequenceRow : public FDescRowBase {
public:

	int64_t WeatherID; // 0x10(0x08)
	struct TArray<struct FString> SequenceCombinationArr; // 0x18(0x10)
	struct TArray<struct FString> SequenceCombinationArr_PC; // 0x28(0x10)
	struct TArray<struct FString> EnableVolumeKeyArr; // 0x38(0x10)
	struct TArray<struct FString> EnableVolumeKeyArr_PC; // 0x48(0x10)
	float StartTime; // 0x58(0x04)
	struct FName AmbientLightGroup; // 0x5c(0x08)
	struct FName AmbientLightGroupHD; // 0x64(0x08)
	float OutSideHdrAdjustment; // 0x6c(0x04)
	float InsideHdrAdjustment; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.AppSettingRow
// Size: 0x568 (Inherited: 0x00)
struct FAppSettingRow {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FString BundleDisplayName; // 0x08(0x10)
	struct FText ProjectDisplayedTitle; // 0x18(0x18)
	struct FString BundleName; // 0x30(0x10)
	struct FString BundleId; // 0x40(0x10)
	struct FString AppLinks; // 0x50(0x10)
	char IosMinimumiOSVersion; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString IosMobileProvision; // 0x68(0x10)
	struct FString IosSiningCertificate; // 0x78(0x10)
	bool IosSupportItunesFileSharing; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	int32_t AndroidMinSDKVersion; // 0x8c(0x04)
	int32_t AndroidTargetSDKVersion; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FString AndroidKeyStore; // 0x98(0x10)
	struct FString AndroidKeyStorePassword; // 0xa8(0x10)
	struct FString AndroidKeyAlias; // 0xb8(0x10)
	struct FString AndroidKeyAliasPassword; // 0xc8(0x10)
	struct FName DefaultCulture; // 0xd8(0x08)
	struct FName DefaultAudioCulture; // 0xe0(0x08)
	struct TArray<struct FString> SupportCultures; // 0xe8(0x10)
	struct FString GCloudId; // 0xf8(0x10)
	struct FString GCloudKey; // 0x108(0x10)
	struct FString GVoiceId; // 0x118(0x10)
	struct FString GVoiceKey; // 0x128(0x10)
	struct FString ApolloId; // 0x138(0x10)
	struct FString ApolloKey; // 0x148(0x10)
	struct FString ApolloDH; // 0x158(0x10)
	struct FString ApolloKeyRelease; // 0x168(0x10)
	struct FString ApolloDHRelease; // 0x178(0x10)
	struct FString SdkGameId; // 0x188(0x10)
	struct FString WeGameId; // 0x198(0x10)
	struct FString SteamAppId; // 0x1a8(0x10)
	int32_t AuthType; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct FString GVoiceServerUrl; // 0x1c0(0x10)
	struct FString TSSGameId; // 0x1d0(0x10)
	struct FString QQAppId; // 0x1e0(0x10)
	struct FString WeixinAppId; // 0x1f0(0x10)
	struct FString CrashSightAndroidAppId; // 0x200(0x10)
	struct FString CrashSightAndroidAppId_Shipping; // 0x210(0x10)
	struct FString CrashSightAndroidUrl; // 0x220(0x10)
	struct FString CrashSightIosAppId; // 0x230(0x10)
	struct FString CrashSightIosAppId_Shipping; // 0x240(0x10)
	struct FString CrashSightWinAppKey; // 0x250(0x10)
	struct FString CrashSightWinAppKey_Shipping; // 0x260(0x10)
	struct FString CrashSightIosUrl; // 0x270(0x10)
	struct FString TDMSrcId; // 0x280(0x10)
	struct FString TDMServerChineseRouteAddress; // 0x290(0x10)
	struct FString TDMServerAbroadRouteAddress; // 0x2a0(0x10)
	struct FString TDMServerRouteAddressTest; // 0x2b0(0x10)
	struct FString ApmIOSConfigPath; // 0x2c0(0x10)
	struct FString MidasBusinessId; // 0x2d0(0x10)
	struct FString MidasOfferId; // 0x2e0(0x10)
	struct FString CentauriBusinessId; // 0x2f0(0x10)
	struct FString CentauriOfferId; // 0x300(0x10)
	struct FString DolphinBuildAccessName; // 0x310(0x10)
	struct FString DolphinBuildArea; // 0x320(0x10)
	int32_t DolphinConnectType; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct FAppSettingForUpdate UpdateInfo; // 0x338(0x68)
	struct FMapleSettingRow MapleInfo; // 0x3a0(0x70)
	struct FString CDNRoot; // 0x410(0x10)
	struct FLoginSettingRow LoginSetting; // 0x420(0x40)
	/*struct TSoftClassPtr<UObject>*/char LoadingBackground[0x28]; // 0x460(0x28)
	/*struct TSoftClassPtr<UObject>*/char WindowsLoadingBackground[0x28]; // 0x488(0x28)
	/*struct TSoftClassPtr<UObject>*/char HealthTipView[0x28]; // 0x4b0(0x28)
	/*struct TSoftClassPtr<UObject>*/char LoadingView[0x28]; // 0x4d8(0x28)
	float HealthTipShowTime; // 0x500(0x04)
	char pad_504[0x4]; // 0x504(0x04)
	struct FString AnnounceDefaultRegion; // 0x508(0x10)
	bool bOverrideDefaultConfig; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
	struct TArray<struct FString> StartupMovies; // 0x520(0x10)
	bool bOverrideDefaultConfig_HD; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct TArray<struct FString> StartupMovies_HD; // 0x538(0x10)
	struct TArray<struct FString> ConsoleVariables; // 0x548(0x10)
	struct TArray<struct FString> ConsoleVariables_HD; // 0x558(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.PreloadAssetDescRowBase
// Size: 0x40 (Inherited: 0x30)
struct FPreloadAssetDescRowBase : public FAssetDescRowBase {
public:

	struct UClass* Archetype; // 0x30(0x08)
	int32_t PreloadNum; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.DirIconRow
// Size: 0x90 (Inherited: 0x30)
struct FDirIconRow : public FAssetDescRowBase {
public:

	struct FName DirName; // 0x30(0x08)
	struct FSoftObjectPath RegionTexturePath; // 0x38(0x18)
	struct FSoftObjectPath VersionTexturePath; // 0x50(0x18)
	float RegionScale; // 0x68(0x04)
	float VersionScale; // 0x6c(0x04)
	struct TArray<int32_t> RegionTexturePos; // 0x70(0x10)
	struct TArray<int32_t> VersionTexturePos; // 0x80(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GameCore.DirTextRow
// Size: 0x70 (Inherited: 0x30)
struct FDirTextRow : public FAssetDescRowBase {
public:

	struct FName DirName; // 0x30(0x08)
	struct FName Text; // 0x38(0x08)
	struct TArray<int32_t> TextOffset; // 0x40(0x10)
	struct FName TextFont; // 0x50(0x08)
	int32_t FontSize; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<float> TColorAndOpacity; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
