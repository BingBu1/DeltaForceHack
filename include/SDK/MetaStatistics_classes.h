
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MetaStatistics.MTStatisticsMonitor
// Size: 0x3c0 (Inherited: 0x30)
class UMTStatisticsMonitor : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnCollectOneCallTrace[0x10]; // 0x30(0x10)
	bool bShowAlertMonitorMessage; // 0x40(0x01)
	bool bShowAlertTriggerMessage; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct TArray<struct FMTAlertRecord> FrameDurationAlertRecords; // 0x48(0x10)
	struct TArray<struct FMTAlertRecord> MTCallDurationAlertRecords; // 0x58(0x10)
	struct TArray<struct FMTAlertRecord> DorianDurationAlertRecords; // 0x68(0x10)
	struct TArray<struct FMTAlertRecord> MTCallAvgDurationAlertRecords; // 0x78(0x10)
	struct TArray<struct FMTAlertRecord> DorianAvgDurationAlertRecords; // 0x88(0x10)
	int32_t Int1; // 0x98(0x04)
	int32_t Int2; // 0x9c(0x04)
	int32_t Int3; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	double Double1; // 0xa8(0x08)
	double Double2; // 0xb0(0x08)
	struct FString String1; // 0xb8(0x10)
	struct FString String2; // 0xc8(0x10)
	struct TMap<struct FString, int32_t> DataMap1; // 0xd8(0x50)
	struct TMap<struct FString, int32_t> DataMap2; // 0x128(0x50)
	struct TMap<struct FString, int32_t> DataMap3; // 0x178(0x50)
	struct TMap<struct FString, struct FString> DataMap4; // 0x1c8(0x50)
	struct TMap<struct FString, struct FString> DataMap5; // 0x218(0x50)
	struct TMap<struct FString, double> DataMap6; // 0x268(0x50)
	struct TMap<struct FString, double> DataMap7; // 0x2b8(0x50)
	struct TArray<int32_t> DataArray1; // 0x308(0x10)
	struct TArray<int32_t> DataArray2; // 0x318(0x10)
	struct TArray<int32_t> DataArray3; // 0x328(0x10)
	struct TArray<struct FString> DataArray4; // 0x338(0x10)
	struct TArray<struct FString> DataArray5; // 0x348(0x10)
	struct TArray<double> DataArray6; // 0x358(0x10)
	struct TArray<double> DataArray7; // 0x368(0x10)
	double CurrentFrameDorianCallDuration; // 0x378(0x08)
	double CurrentFrameMTCallDuration; // 0x380(0x08)
	uint64_t CurrentFrameNumber; // 0x388(0x08)
	uint64_t CurrentFrameDorianCallCount; // 0x390(0x08)
	uint64_t CurrentFrameMTCallCount; // 0x398(0x08)
	uint64_t TotalDorianCallCount; // 0x3a0(0x08)
	uint64_t TotalMTCallCount; // 0x3a8(0x08)
	double TotalDorianCallDuration; // 0x3b0(0x08)
	double TotalMTCallDuration; // 0x3b8(0x08)

	void STATIC_ResetData(); // Function MetaStatistics.MTStatisticsMonitor.ResetData // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MetaStatistics.MTStatisticsHelper
// Size: 0x30 (Inherited: 0x30)
class UMTStatisticsHelper : public UBlueprintFunctionLibrary {
public:


	bool STATIC_SetInTimeMonitorEnabled(bool bEnable); // Function MetaStatistics.MTStatisticsHelper.SetInTimeMonitorEnabled // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
