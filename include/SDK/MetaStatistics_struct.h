
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct MetaStatistics.MTDorianTrace
// Size: 0x30 (Inherited: 0x00)
struct FMTDorianTrace {
public:

	struct FString DorianFuncName; // 0x00(0x10)
	struct TArray<struct FMTDorianTraceRecord> Records; // 0x10(0x10)
	uint64_t CallNum; // 0x20(0x08)
	double AvgDurationMS; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MetaStatistics.MTDorianTraceRecord
// Size: 0x18 (Inherited: 0x00)
struct FMTDorianTraceRecord {
public:

	uint64_t ID; // 0x00(0x08)
	struct FString CallName; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MetaStatistics.MTCallTrace
// Size: 0x30 (Inherited: 0x00)
struct FMTCallTrace {
public:

	struct FString CallName; // 0x00(0x10)
	uint64_t CallNum; // 0x10(0x08)
	double AvgDurationMS; // 0x18(0x08)
	struct TArray<struct FMTCallRecord> Records; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MetaStatistics.MTAlertRecord
// Size: 0x80 (Inherited: 0x00)
struct FMTAlertRecord {
public:

	double Baseline; // 0x00(0x08)
	struct FString Annotation; // 0x08(0x10)
	struct TMap<struct FString, uint32_t> Records; // 0x18(0x50)
	struct TArray<uint32_t> WarningLines; // 0x68(0x10)
	uint32_t LastTriggeredFramenumber; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MetaStatistics.MTCallRecord
// Size: 0x50 (Inherited: 0x00)
struct FMTCallRecord {
public:

	double BeginSeconds; // 0x00(0x08)
	double Duration; // 0x08(0x08)
	struct FDateTime BeginTime; // 0x10(0x08)
	uint32_t FrameNumber; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString DorianFunc; // 0x20(0x10)
	struct FName CallName; // 0x30(0x08)
	struct FString DebugStr; // 0x38(0x10)
	uint64_t ID; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct MetaStatistics.MTCallCollector
// Size: 0x60 (Inherited: 0x00)
struct FMTCallCollector {
public:

	struct FString CallName; // 0x00(0x10)
	struct FMTCallRecord Record; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
