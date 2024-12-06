
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMGameLaunch.ELaunchStepResult
enum class ELaunchStepResult : int {
	ELSR_None = 0,
	ELSR_Success = 1,
	ELSR_Warning = 2,
	ELSR_Failed = 3,
	ELSR_Restart = 4,
	ELSR_MAX = 5
};

// Enum DFMGameLaunch.DFConnectBHDState
enum class DFConnectBHDState : int {
	None = 0,
	WaitBHDConnect = 1,
	BHDConnectSuccess = 2,
	BHDProcCreateFailed = 3,
	BHDHeartTick = 4,
	BHDLoseConnect = 5,
	BHDProcLost = 6,
	BHDKillProc = 7,
	DFConnectBHDState_MAX = 8
};

// ScriptStruct DFMGameLaunch.DFGameLaunchStepFlow
// Size: 0x28 (Inherited: 0x00)
struct FDFGameLaunchStepFlow {
public:

	struct FName FlowName; // 0x00(0x08)
	struct TArray<struct FDFGameLaunchStep> Steps; // 0x08(0x10)
	struct FString GPMCategory; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameLaunch.GPMReportSettings
// Size: 0x04 (Inherited: 0x00)
struct FGPMReportSettings {
public:

	int32_t StepId; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameLaunch.DFGameLaunchStep
// Size: 0x28 (Inherited: 0x00)
struct FDFGameLaunchStep {
public:

	struct FName StepName; // 0x00(0x08)
	struct UClass* Step; // 0x08(0x08)
	struct FString StepDesc; // 0x10(0x10)
	bool bIsStopFlow; // 0x20(0x01)
	bool bIsEnableMSDKReport; // 0x21(0x01)
	bool bIsEnableGPMReport; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	struct FGPMReportSettings GPMReportSettings; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
