
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPSettings.EMainFlowState
enum class EMainFlowState : int {
	Default = 0,
	Lobby = 1,
	Loading = 2,
	SafeHouse = 3,
	InGame = 4,
	LobbyBHD = 5,
	EMainFlowState_MAX = 6
};

// Enum GPSettings.EGPDriverCompatibilityHandleMethod
enum class EGPDriverCompatibilityHandleMethod : int {
	Warning = 0,
	Block = 1,
	EGPDriverCompatibilityHandleMethod_MAX = 2
};

// Enum GPSettings.EGPDriverCompatibilityVendorTypeHD
enum class EGPDriverCompatibilityVendorTypeHD : int {
	None = 0,
	Nvidia = 1,
	AMD = 2,
	Intel = 3,
	EGPDriverCompatibilityVendorTypeHD_MAX = 4
};

// Enum GPSettings.EGPDriverCompatibilityConditionTypeHD
enum class EGPDriverCompatibilityConditionTypeHD : int {
	None = 0,
	Whitelist = 1,
	Blacklist = 2,
	EGPDriverCompatibilityConditionTypeHD_MAX = 3
};

// Enum GPSettings.EGPDriverCompatibilityConditionOpHD
enum class EGPDriverCompatibilityConditionOpHD : int {
	None = 0,
	G = 1,
	GE = 2,
	L = 3,
	LE = 4,
	E = 5,
	EGPDriverCompatibilityConditionOpHD_MAX = 6
};

// Enum GPSettings.EGPUDriverSectionTypeHD
enum class EGPUDriverSectionTypeHD : int {
	None = 0,
	WDDMVersion = 1,
	DXVersion = 2,
	BaseAndBuild = 3,
	FullVersion = 4,
	FullVersionV2 = 5,
	EGPUDriverSectionTypeHD_MAX = 6
};

// Enum GPSettings.EHardwareTypeHD
enum class EHardwareTypeHD : int {
	None = 0,
	CPU = 1,
	GPU = 2,
	MEM = 3,
	EHardwareTypeHD_MAX = 4
};

// Enum GPSettings.EGraphicsQualityLevelHD
enum class EGraphicsQualityLevelHD : int {
	None = 0,
	INVALIDMEM = 1,
	INVALIDCPU = 2,
	INVALIDGPU = 3,
	BELOW = 4,
	LOW = 5,
	MID = 6,
	HIGH = 7,
	EPIC = 8,
	WILD = 9,
	EGraphicsQualityLevelHD_MAX = 10
};

// Enum GPSettings.EGPUVendorHD
enum class EGPUVendorHD : int {
	Other = 0,
	Nvidia = 1,
	AMD = 2,
	Intel = 3,
	EGPUVendorHD_MAX = 4
};

// ScriptStruct GPSettings.MemoryDeviceInfo
// Size: 0x30 (Inherited: 0x00)
struct FMemoryDeviceInfo {
public:

	char pad_0[0x30]; // 0x00(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPSettings.ResizableBarInfo
// Size: 0x02 (Inherited: 0x00)
struct FResizableBarInfo {
public:

	bool bSupported; // 0x00(0x01)
	bool bEnabled; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPSettings.DeviceTempInfo
// Size: 0x10 (Inherited: 0x00)
struct FDeviceTempInfo {
public:

	float CPUTemp; // 0x00(0x04)
	float MaxCPUTemp; // 0x04(0x04)
	float GPUTemp; // 0x08(0x04)
	float MaxGPUTemp; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPSettings.MonitorInfoHD
// Size: 0x78 (Inherited: 0x00)
struct FMonitorInfoHD {
public:

	struct FString MonitorID; // 0x00(0x10)
	struct FString MonitorName; // 0x10(0x10)
	bool bIsCurrent; // 0x20(0x01)
	char pad_21[0x57]; // 0x21(0x57)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPSettings.DisplayModeHD
// Size: 0x20 (Inherited: 0x00)
struct FDisplayModeHD {
public:

	int32_t Width; // 0x00(0x04)
	int32_t Height; // 0x04(0x04)
	int32_t RefreshRate; // 0x08(0x04)
	int32_t AdapterID; // 0x0c(0x04)
	struct FString MonitorID; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPSettings.GraphicsQualityMappingRowHD
// Size: 0x30 (Inherited: 0x10)
struct FGraphicsQualityMappingRowHD : public FDescRowBase {
public:

	struct FName SettingID; // 0x10(0x08)
	int32_t Below; // 0x18(0x04)
	int32_t Low; // 0x1c(0x04)
	int32_t Mid; // 0x20(0x04)
	int32_t High; // 0x24(0x04)
	int32_t Epic; // 0x28(0x04)
	int32_t Wild; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPSettings.GPUBenchmarkRowHD
// Size: 0x58 (Inherited: 0x10)
struct FGPUBenchmarkRowHD : public FDescRowBase {
public:

	struct FString Brand; // 0x10(0x10)
	struct FString Model; // 0x20(0x10)
	struct FString OfficialModel; // 0x30(0x10)
	enum class EGraphicsQualityLevelHD RankValue; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t BenchmarkValue; // 0x44(0x04)
	int32_t VRam; // 0x48(0x04)
	int32_t platform; // 0x4c(0x04)
	bool bSupported; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPSettings.CPUBenchmarkRowHD
// Size: 0x48 (Inherited: 0x10)
struct FCPUBenchmarkRowHD : public FDescRowBase {
public:

	struct FString Brand; // 0x10(0x10)
	struct FString Model; // 0x20(0x10)
	enum class EGraphicsQualityLevelHD RankValue; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t BenchmarkValue; // 0x34(0x04)
	int32_t SingleCoreScore; // 0x38(0x04)
	int32_t platform; // 0x3c(0x04)
	int32_t Cores; // 0x40(0x04)
	int32_t Threads; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPSettings.HardwareBenchmarkRowHD
// Size: 0x48 (Inherited: 0x10)
struct FHardwareBenchmarkRowHD : public FDescRowBase {
public:

	enum class EHardwareTypeHD Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Brand; // 0x18(0x10)
	struct FString Model; // 0x28(0x10)
	enum class EGraphicsQualityLevelHD RankValue; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t BenchmarkValue; // 0x3c(0x04)
	int32_t platform; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPSettings.SystemInfoHD
// Size: 0x90 (Inherited: 0x00)
struct FSystemInfoHD {
public:

	struct FString OperatingSystemName; // 0x00(0x10)
	int32_t platform; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString CPUBrand; // 0x18(0x10)
	float CPUClockSpeed; // 0x28(0x04)
	int32_t CPUCores; // 0x2c(0x04)
	int32_t CPUThreads; // 0x30(0x04)
	int32_t Ram; // 0x34(0x04)
	int32_t CurrentGPU; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString GPUBrand; // 0x40(0x10)
	struct FString GPUDeviceID; // 0x50(0x10)
	struct FString GPUSubSysID; // 0x60(0x10)
	struct FString GPURevision; // 0x70(0x10)
	enum class EGPUVendorHD GPUVendor; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t VRam; // 0x84(0x04)
	bool bWithBattery; // 0x88(0x01)
	bool bIntegratedGPU; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPSettings.GPUDriverVersionHD
// Size: 0x10 (Inherited: 0x00)
struct FGPUDriverVersionHD {
public:

	int32_t WDDM; // 0x00(0x04)
	int32_t DX; // 0x04(0x04)
	int32_t Base; // 0x08(0x04)
	int32_t Build; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPSettings.MemoryBenchmarkRowHD
// Size: 0x18 (Inherited: 0x10)
struct FMemoryBenchmarkRowHD : public FDescRowBase {
public:

	int32_t GB; // 0x10(0x04)
	enum class EGraphicsQualityLevelHD Level; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPSettings.GPUDriverCompatibilityRowHD
// Size: 0x40 (Inherited: 0x10)
struct FGPUDriverCompatibilityRowHD : public FDescRowBase {
public:

	enum class EGPDriverCompatibilityConditionTypeHD ConditoinType; // 0x10(0x01)
	enum class EGPUDriverSectionTypeHD SectionType; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FGPUDriverVersionHD VersionValue; // 0x14(0x10)
	enum class EGPDriverCompatibilityConditionOpHD ConditionOperator; // 0x24(0x01)
	char VendorType; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct TArray<struct FString> AdapterList; // 0x28(0x10)
	enum class EGPDriverCompatibilityHandleMethod HandleMethod; // 0x38(0x01)
	bool bOnlyPrimaryGPU; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPSettings.VRamBenchmarkRowHD
// Size: 0x18 (Inherited: 0x18)
struct FVRamBenchmarkRowHD : public FMemoryBenchmarkRowHD {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPSettings.RamBenchmarkRowHD
// Size: 0x18 (Inherited: 0x18)
struct FRamBenchmarkRowHD : public FMemoryBenchmarkRowHD {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
