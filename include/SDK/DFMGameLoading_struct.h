
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMGameLoading.EFlowResult
enum class EFlowResult : int {
	EFR_None = 0,
	EFR_Success = 1,
	EFR_Failed = 2,
	ERF_TimeOut = 3,
	EFlowResult_MAX = 4
};

// Enum DFMGameLoading.ELoadingTypeInner
enum class ELoadingTypeInner : int {
	LT_None = 0,
	LT_LoadingMapPreLoading = 1,
	LT_LoadingMapPostLoading = 2,
	LT_TargetMapPostLoading = 3,
	LT_MAX = 4
};

// Enum DFMGameLoading.EMapLoadStage
enum class EMapLoadStage : int {
	MLS_None = 0,
	MLS_LoadingMapPreLoad = 1,
	MLS_LoadingMapPostLoad = 2,
	MLS_TargetMapPreLoad = 3,
	MLS_TargetMapPostLoad = 4,
	MLS_MAX = 5
};

// Enum DFMGameLoading.EFlowStatus
enum class EFlowStatus : int {
	EFS_None = 0,
	EFS_Running = 1,
	EFS_Finish = 2,
	EFS_MAX = 3
};

// Enum DFMGameLoading.ELoadingType
enum class ELoadingType : int {
	LT_None = 0,
	LT_LoadingMapLoading = 1,
	LT_TargetMapLoading = 2,
	LT_MAX = 3
};

// ScriptStruct DFMGameLoading.LoadingNetFailureRow
// Size: 0x48 (Inherited: 0x10)
struct FLoadingNetFailureRow : public FDescRowBase {
public:

	enum class ENetworkFailure NetWorkFailureType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString TypeName; // 0x18(0x10)
	struct FText DisplayErrorText; // 0x28(0x18)
	uint32_t ErrorCode; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameLoading.LoadingTravelFailureRow
// Size: 0x48 (Inherited: 0x10)
struct FLoadingTravelFailureRow : public FDescRowBase {
public:

	enum class ETravelFailure TravelFailureType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString TypeName; // 0x18(0x10)
	struct FText DisplayErrorText; // 0x28(0x18)
	uint32_t ErrorCode; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameLoading.LoadingContext
// Size: 0x10 (Inherited: 0x00)
struct FLoadingContext {
public:

	int32_t LevelMapID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	uint64_t DSRoomId; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameLoading.OpenLevelParameters
// Size: 0x20 (Inherited: 0x00)
struct FOpenLevelParameters {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameLoading.LoadingFlowContext
// Size: 0x02 (Inherited: 0x00)
struct FLoadingFlowContext {
public:

	char pad_0[0x2]; // 0x00(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameLoading.RunningFlowContext
// Size: 0x40 (Inherited: 0x00)
struct FRunningFlowContext {
public:

	struct UDFMFlowBase* RunningMainFlow; // 0x00(0x08)
	struct TArray<struct UDFMSubFlowBase*> RunningSubFlows; // 0x08(0x10)
	char pad_18[0x4]; // 0x18(0x04)
	enum class ELoadingTypeInner LoadingType; // 0x1c(0x01)
	enum class EFlowResult MainFlowResult; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	float ProgressStart; // 0x20(0x04)
	float ProgressEnd; // 0x24(0x04)
	char pad_28[0x8]; // 0x28(0x08)
	/*struct FMulticastInlineDelegate*/char OnLoadingMainFlowFinished[0x10]; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameLoading.LoadingGameFlowStageConfig
// Size: 0x20 (Inherited: 0x08)
struct FLoadingGameFlowStageConfig : public FTableRowBase {
public:

	enum class EGameFlowStageType CurFlowType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FLoadingGameFlowPreLoadData> PreloadData; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameLoading.LoadingGameFlowPreLoadData
// Size: 0x20 (Inherited: 0x00)
struct FLoadingGameFlowPreLoadData {
public:

	enum class EGameFlowStageType TargetGameFlow; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FSoftObjectPath> PendingLoadRes; // 0x08(0x10)
	enum class ELoadingDestination TargetDestination; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameLoading.InnerLoadingFlowStep
// Size: 0x20 (Inherited: 0x00)
struct FInnerLoadingFlowStep {
public:

	enum class ELoadingTypeInner LoadingType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FLoadingFlowTypeConfig> LoadingFlowTypeConfigs; // 0x08(0x10)
	float FlowStepProgressRangeEnd; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameLoading.LoadingFlowTypeConfig
// Size: 0x38 (Inherited: 0x00)
struct FLoadingFlowTypeConfig {
public:

	struct UClass* DFMFlowType; // 0x00(0x08)
	float FlowWeight; // 0x08(0x04)
	float MaxTimeLimits; // 0x0c(0x04)
	struct FString FlowParam; // 0x10(0x10)
	bool bIsAsyncCheckableSubFlow; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FLoadingSubFlowTypeConfig> SubFlows; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameLoading.LoadingSubFlowTypeConfig
// Size: 0x20 (Inherited: 0x00)
struct FLoadingSubFlowTypeConfig {
public:

	struct UClass* DFMFlowType; // 0x00(0x08)
	float FlowWeight; // 0x08(0x04)
	float MaxTimeLimits; // 0x0c(0x04)
	struct FString FlowParam; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameLoading.LoadingFlowStep
// Size: 0x18 (Inherited: 0x00)
struct FLoadingFlowStep {
public:

	struct TArray<struct FLoadingFlowTypeConfig> LoadingFlowTypeConfigs; // 0x00(0x10)
	float FlowStepProgressRangeEnd; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameLoading.LoadingFlowSteps
// Size: 0x48 (Inherited: 0x00)
struct FLoadingFlowSteps {
public:

	struct FLoadingFlowStep LoadingLevelFlowSteps; // 0x00(0x18)
	struct FLoadingFlowStep OpenTargetLevelFlowSteps; // 0x18(0x18)
	struct FLoadingFlowStep TargetLevelFlowSteps; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
