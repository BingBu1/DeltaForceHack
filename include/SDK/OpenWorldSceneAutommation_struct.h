
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct OpenWorldSceneAutommation.OpenWorldSceneAutomationPosition
// Size: 0x18 (Inherited: 0x00)
struct FOpenWorldSceneAutomationPosition {
public:

	struct FVector StartLocation; // 0x00(0x0c)
	struct FRotator StartRotator; // 0x0c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldSceneAutommation.AutomationFlowPath
// Size: 0x20 (Inherited: 0x00)
struct FAutomationFlowPath {
public:

	struct TArray<struct FVector> AutomationPositions; // 0x00(0x10)
	int32_t PositionCount; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct OpenWorldSceneAutommation.OpenWorldSceneAutomationFlowRuntimeSection
// Size: 0x68 (Inherited: 0x00)
struct FOpenWorldSceneAutomationFlowRuntimeSection {
public:

	struct FString FromRecordFilePath; // 0x00(0x10)
	struct UOpenWorldSceneAutommationMethod* SectionMethod; // 0x10(0x08)
	struct FString TargetSplineComponentName; // 0x18(0x10)
	struct TArray<struct FString> ExcuteCommands; // 0x28(0x10)
	bool WiatForStraming; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FAutomationFlowPath FlowPath; // 0x40(0x20)
	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
