
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum PerfGear.EPerfGearQualityLevel
enum class EPerfGearQualityLevel : int {
	EQuality_VeryLow = 0,
	EQuality_Low = 1,
	EQuality_Medium = 2,
	EQuality_High = 3,
	EQuality_VeryHigh = 4,
	EQuality_TotalNum = 5,
	EQuality_Custom90 = 6,
	EQuality_Custom120 = 7,
	EQuality_Custom144 = 8,
	EQuality_CustomQuality1 = 9,
	EQuality_CustomTotal = 10,
	EQuality_MAX = 11
};

// Enum PerfGear.ELowFpsOP
enum class ELowFpsOP : int {
	EHighToLow = 0,
	ELowToHigh = 1,
	ELowFpsOP_MAX = 2
};

// Enum PerfGear.EFXQualityLevel
enum class EFXQualityLevel : int {
	None = 0,
	Low = 1,
	Middle = 2,
	High = 3,
	Num = 4,
	EFXQualityLevel_MAX = 5
};

// Enum PerfGear.EPerfGearInternalLevel
enum class EPerfGearInternalLevel : int {
	ELevel1 = 0,
	ELevel2 = 1,
	ELevel3 = 2,
	ELevel4 = 3,
	ELevel5 = 4,
	ELevel6 = 5,
	ELevel_TotalNum = 6,
	ELevelCustom90 = 7,
	ELevelCustom120 = 8,
	ELevelCustom144 = 9,
	ELevel_CustomTotal = 10,
	EPerfGearInternalLevel_MAX = 11
};

// Enum PerfGear.ESwitchStatus
enum class ESwitchStatus : int {
	ESwitchStatus_OFF = 0,
	ESwitchStatus_ON = 1,
	ESwitchStatus_MAX = 2
};

// Enum PerfGear.EModeSwitchType
enum class EModeSwitchType : int {
	ESwitchOffCustom = 0,
	ESwitchOverride = 1,
	EModeSwitchType_MAX = 2
};

// Enum PerfGear.ERHIType
enum class ERHIType : int {
	Unknown = 0,
	D3D11 = 1,
	D3D12 = 2,
	Metal = 3,
	Vulkan = 4,
	OpenGLES = 5,
	ERHIType_MAX = 6
};

// Enum PerfGear.ELowFpsType
enum class ELowFpsType : int {
	EUI = 0,
	ECUTSCENE = 1,
	EIMPENDINGDEATH = 2,
	EDEATH = 3,
	ELowFpsType_MAX = 4
};

// Enum PerfGear.EBlackVarType
enum class EBlackVarType : int {
	EBV_ALLLEVEL = 0,
	EBV_SUBLEVEL = 1,
	EBV_MAX = 2
};

// Enum PerfGear.EBlackVarPriority
enum class EBlackVarPriority : int {
	EBLACK_HIGHEST = 0,
	EBLACK_UNDER_SWITCH = 1,
	EBLACK_MAX = 2
};

// Enum PerfGear.EAndroidPadSizeType
enum class EAndroidPadSizeType : int {
	PADSIZE_SMALL = 0,
	PADSIZE_MID = 1,
	PADSIZE_BIG = 2,
	PADSIZE_MAX = 3
};

// Enum PerfGear.EDeviceMemoryType
enum class EDeviceMemoryType : int {
	MEMORY_NORMAL = 0,
	MEMORY_LOW = 1,
	MEMORY_VERYLOW = 2,
	MEMORY_UNKNOWN = 3,
	MEMORY_MAX = 4
};

// Enum PerfGear.EQaulityFpsStatus
enum class EQaulityFpsStatus : int {
	ENABLE = 0,
	DISABLE = 1,
	UNSUPPORT = 2,
	EQaulityFpsStatus_MAX = 3
};

// ScriptStruct PerfGear.PerfGearExternalStructure
// Size: 0x70 (Inherited: 0x08)
struct FPerfGearExternalStructure : public FTableRowBase {
public:

	int32_t ExternalLevel; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FString, struct FString> ExternalMaps; // 0x10(0x50)
	struct FString Help; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.FakeQualityLevelSetting
// Size: 0x14 (Inherited: 0x00)
struct FFakeQualityLevelSetting {
public:

	int32_t FakeQualityUlturalLow; // 0x00(0x04)
	int32_t FakeQualityVeryLow; // 0x04(0x04)
	int32_t FakeQualityMedium; // 0x08(0x04)
	int32_t FakeQualityHigh; // 0x0c(0x04)
	int32_t FakeQualityVeryHigh; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.PerfGearStructure
// Size: 0xf8 (Inherited: 0x08)
struct FPerfGearStructure : public FTableRowBase {
public:

	struct FString ParamGroup; // 0x08(0x10)
	struct FString ConsoleName; // 0x18(0x10)
	struct FString Level1; // 0x28(0x10)
	struct FString Level2; // 0x38(0x10)
	struct FString Level3; // 0x48(0x10)
	struct FString Level4; // 0x58(0x10)
	struct FString Level5; // 0x68(0x10)
	struct FString Level6; // 0x78(0x10)
	bool bEditOnly; // 0x88(0x01)
	bool bPIEOnly; // 0x89(0x01)
	bool bRuntimeOnly; // 0x8a(0x01)
	char pad_8B[0x1]; // 0x8b(0x01)
	int32_t Priority; // 0x8c(0x04)
	enum class EPerfGearQualityLevel MinLevel; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TMap<struct FString, struct FModeSwitchItem> SwitchMap; // 0x98(0x50)
	struct FString Help; // 0xe8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.ModeSwitchItem
// Size: 0x30 (Inherited: 0x00)
struct FModeSwitchItem {
public:

	enum class EModeSwitchType SwitchType; // 0x00(0x01)
	enum class ESwitchStatus DefaultSwitchStatus; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString DefaultOffSwitchValue; // 0x08(0x10)
	struct TArray<struct FString> CustomValue; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.PSClampSetting
// Size: 0x03 (Inherited: 0x00)
struct FPSClampSetting {
public:

	enum class EPerfGearQualityLevel QualityLevel; // 0x00(0x01)
	enum class EPerfGearQualityLevel OriFPSLevel; // 0x01(0x01)
	enum class EPerfGearQualityLevel OverrideFPSLevel; // 0x02(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.PerfGearMemoryFeatureRow
// Size: 0x20 (Inherited: 0x08)
struct FPerfGearMemoryFeatureRow : public FTableRowBase {
public:

	enum class EDeviceMemoryType MemoryType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t MaxQualityLevel; // 0x0c(0x04)
	struct TArray<struct FDeviceFeatureItem> MemoryFeatureItems; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.PGPlatformInfoMsg
// Size: 0x68 (Inherited: 0x00)
struct FPGPlatformInfoMsg {
public:

	struct FString EngineVer; // 0x00(0x10)
	struct FString GameVer; // 0x10(0x10)
	struct FString OsMajorVer; // 0x20(0x10)
	struct FString OsSubVer; // 0x30(0x10)
	struct FString CPUBrand; // 0x40(0x10)
	struct FString GPUBrand; // 0x50(0x10)
	uint32_t MemoryTotal; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.FXInstanceParams
// Size: 0x20 (Inherited: 0x00)
struct FFXInstanceParams {
public:

	struct TArray<struct FParticleSysParam> ParticleParams; // 0x00(0x10)
	enum class EPSCPoolMethod PoolingMethod; // 0x10(0x01)
	bool bOverrideLod; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t TranslucencySortPriority; // 0x14(0x04)
	enum class ParticleSystemLODMethod LODMethod; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.PerfGearFeatureData
// Size: 0xc0 (Inherited: 0x00)
struct FPerfGearFeatureData {
public:

	int32_t DefaultQualityLevel; // 0x00(0x04)
	int32_t DefaultFPSLevel; // 0x04(0x04)
	int32_t MaxQualityLevel; // 0x08(0x04)
	int32_t SuperQualityFPS; // 0x0c(0x04)
	int32_t QualityVeryHighFPS; // 0x10(0x04)
	int32_t QualityHighFPS; // 0x14(0x04)
	int32_t QualityMediumFPS; // 0x18(0x04)
	int32_t QualityLowFPS; // 0x1c(0x04)
	int32_t QualityVeryLowFPS; // 0x20(0x04)
	int32_t MSAACount; // 0x24(0x04)
	int32_t BackBufferResoution; // 0x28(0x04)
	int32_t QualitySuperResolution; // 0x2c(0x04)
	int32_t QualityVeryHighResolution; // 0x30(0x04)
	int32_t QualityHighResolution; // 0x34(0x04)
	int32_t QualityMediumResolution; // 0x38(0x04)
	int32_t QualityLowResolution; // 0x3c(0x04)
	int32_t QualityVeryLowResolution; // 0x40(0x04)
	int32_t QualitySuperFSR; // 0x44(0x04)
	int32_t QualityVeryHighFSR; // 0x48(0x04)
	int32_t QualityHighFSR; // 0x4c(0x04)
	int32_t QualityMediumpFSR; // 0x50(0x04)
	int32_t QualityLowFSR; // 0x54(0x04)
	int32_t QualityVeryLowFSR; // 0x58(0x04)
	int32_t VRSDrawcall; // 0x5c(0x04)
	int32_t VRSMask; // 0x60(0x04)
	int32_t VRRM; // 0x64(0x04)
	int32_t LowMemoryDeviceType; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TMap<struct FString, struct FString> DeviceConsoleList; // 0x70(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.DeviceFeatureItem
// Size: 0x70 (Inherited: 0x00)
struct FDeviceFeatureItem {
public:

	struct FString ConsoleName; // 0x00(0x10)
	struct FString UltraLowValue; // 0x10(0x10)
	struct FString LowValue; // 0x20(0x10)
	struct FString MediumValue; // 0x30(0x10)
	struct FString HighValue; // 0x40(0x10)
	struct FString VeryHighValue; // 0x50(0x10)
	struct FString SuperValue; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.FpsConfig
// Size: 0x08 (Inherited: 0x00)
struct FFpsConfig {
public:

	enum class EQaulityFpsStatus VeryLow; // 0x00(0x01)
	enum class EQaulityFpsStatus Low; // 0x01(0x01)
	enum class EQaulityFpsStatus Mid; // 0x02(0x01)
	enum class EQaulityFpsStatus High; // 0x03(0x01)
	enum class EQaulityFpsStatus VeryHigh; // 0x04(0x01)
	enum class EQaulityFpsStatus Status90; // 0x05(0x01)
	enum class EQaulityFpsStatus Status120; // 0x06(0x01)
	enum class EQaulityFpsStatus Status144; // 0x07(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.AndroidPadResolutionConfig
// Size: 0x08 (Inherited: 0x00)
struct FAndroidPadResolutionConfig {
public:

	int32_t BackBuffer; // 0x00(0x04)
	int32_t Resolution; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.FXInstance
// Size: 0x48 (Inherited: 0x00)
struct FFXInstance {
public:

	/*struct TSoftObjectPtr<UParticleSystem>*/char Template[0x28]; // 0x00(0x28)
	struct FFXInstanceParams InstanceParams; // 0x28(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.PerfGearIOSDeviceFeatureStructure
// Size: 0xe8 (Inherited: 0x08)
struct FPerfGearIOSDeviceFeatureStructure : public FTableRowBase {
public:

	struct FString DeviceName; // 0x08(0x10)
	struct FString IOSVersion; // 0x18(0x10)
	struct FPerfGearFeatureData FeatureData; // 0x28(0xc0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.AndroidGPUFeatureStructure
// Size: 0x108 (Inherited: 0x08)
struct FAndroidGPUFeatureStructure : public FTableRowBase {
public:

	struct FString GPUName; // 0x08(0x10)
	struct FString VendorName; // 0x18(0x10)
	struct FString DeviceName; // 0x28(0x10)
	struct FString AndroidVersionName; // 0x38(0x10)
	struct FPerfGearFeatureData FeatureData; // 0x48(0xc0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.PerfGearAndroidDeviceFeatureStructure
// Size: 0xf8 (Inherited: 0x08)
struct FPerfGearAndroidDeviceFeatureStructure : public FTableRowBase {
public:

	struct FString DeviceName; // 0x08(0x10)
	struct FString VendorName; // 0x18(0x10)
	struct FString AndroidVersion; // 0x28(0x10)
	struct FPerfGearFeatureData FeatureData; // 0x38(0xc0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.DeviceLevelFeatureStruct
// Size: 0x88 (Inherited: 0x00)
struct FDeviceLevelFeatureStruct {
public:

	int32_t BackBufferResolution; // 0x00(0x04)
	int32_t MinLobbyQualityLevel; // 0x04(0x04)
	struct FDeviceFeatureItem SceneColorResolutionItem; // 0x08(0x70)
	struct TArray<struct FDeviceFeatureItem> FeatureItems; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.QualityFpsSetting
// Size: 0x2c (Inherited: 0x00)
struct FQualityFpsSetting {
public:

	struct FFpsConfig QualityVeryLow; // 0x00(0x08)
	struct FFpsConfig QualityLow; // 0x08(0x08)
	struct FFpsConfig QualityMid; // 0x10(0x08)
	struct FFpsConfig QualityHigh; // 0x18(0x08)
	struct FFpsConfig QualityVeryHigh; // 0x20(0x08)
	enum class EPerfGearQualityLevel DefaultQualityLevel; // 0x28(0x01)
	enum class EPerfGearQualityLevel DefaultFPSLevel; // 0x29(0x01)
	enum class EPerfGearQualityLevel InnerTestQualityLevel; // 0x2a(0x01)
	enum class EPerfGearQualityLevel InnerTestFPSLevel; // 0x2b(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.GPMAndroidPadSizeConfig
// Size: 0x28 (Inherited: 0x00)
struct FGPMAndroidPadSizeConfig {
public:

	struct FAndroidPadResolutionConfig Level1Config; // 0x00(0x08)
	struct FAndroidPadResolutionConfig Level2Config; // 0x08(0x08)
	struct FAndroidPadResolutionConfig Level3Config; // 0x10(0x08)
	struct FAndroidPadResolutionConfig Level4Config; // 0x18(0x08)
	struct FAndroidPadResolutionConfig Level5Config; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct PerfGear.PerfGearDeviceLevelFeature
// Size: 0x98 (Inherited: 0x08)
struct FPerfGearDeviceLevelFeature : public FTableRowBase {
public:

	int32_t DeviceLevel; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FDeviceLevelFeatureStruct DeviceLevelFeature; // 0x10(0x88)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
