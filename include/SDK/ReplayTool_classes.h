
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ReplayTool.ReplayReportCommandlet
// Size: 0x90 (Inherited: 0x88)
class UReplayReportCommandlet : public UCommandlet {
public:

	struct UCustomizedReplayReport* OutputReport; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplayTool.CustomizedReplayReport
// Size: 0xe0 (Inherited: 0x30)
class UCustomizedReplayReport : public UObject {
public:

	struct TArray<struct FPerformanceInfo> PerformanceRecords; // 0x30(0x10)
	struct TArray<struct FMemoryReport> MemoryRecords; // 0x40(0x10)
	struct TMap<struct FString, struct FHistoryInfo> HistoryStatistic; // 0x50(0x50)
	char pad_A0[0x40]; // 0xa0(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplayTool.ReplayDemoNetDriver
// Size: 0x1190 (Inherited: 0x1118)
class UReplayDemoNetDriver : public UDemoNetDriver {
public:

	bool bOutputMemoryLog; // 0x1118(0x01)
	char pad_1119[0x47]; // 0x1119(0x47)
	struct APlayerController* LocalPC; // 0x1160(0x08)
	char pad_1168[0x18]; // 0x1168(0x18)
	struct AActor* LocalCharActor; // 0x1180(0x08)
	struct UCustomizedReplayReport* ReplayReport; // 0x1188(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplayTool.ReplaySpectatorPlayerController
// Size: 0x718 (Inherited: 0x6d0)
class AReplaySpectatorPlayerController : public APlayerController {
public:

	char pad_6D0[0x8]; // 0x6d0(0x08)
	struct TArray<struct FS_ReplayInfo> RecordAllReplays; // 0x6d8(0x10)
	char pad_6E8[0x30]; // 0x6e8(0x30)

	void SetCurrentReplayTimeToSeconds(int32_t Seconds); // Function ReplayTool.ReplaySpectatorPlayerController.SetCurrentReplayTimeToSeconds // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ReplayTool.ReplayCharacterInterface
// Size: 0x30 (Inherited: 0x30)
class UReplayCharacterInterface : public UInterface {
public:


	void SwitchToReplayFPPCamera(); // Function ReplayTool.ReplayCharacterInterface.SwitchToReplayFPPCamera // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
