
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMAnalysTool.AnalyseSettings
// Size: 0x40 (Inherited: 0x30)
class UAnalyseSettings : public UObject {
public:

	struct FString DefaultJsonFileName; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAnalysTool.DFMAnalyseManager
// Size: 0xf0 (Inherited: 0x38)
class UDFMAnalyseManager : public UGameInstanceSubsystem {
public:

	char pad_38[0xb8]; // 0x38(0xb8)

	void SaveData(struct FString InDataPath); // Function DFMAnalysTool.DFMAnalyseManager.SaveData // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAnalysTool.DFUICostMonitor
// Size: 0xf0 (Inherited: 0x38)
class UDFUICostMonitor : public UGameInstanceSubsystem {
public:

	char pad_38[0x8]; // 0x38(0x08)
	bool bEnabled; // 0x40(0x01)
	bool bMonitorMoreFramesCost; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32_t MonitorMoreFramesNum; // 0x44(0x04)
	float UIEmitThreshold; // 0x48(0x04)
	float ProtoEmitThreshold; // 0x4c(0x04)
	char pad_50[0xa0]; // 0x50(0xa0)

	void SaveData(struct FString InFilePath); // Function DFMAnalysTool.DFUICostMonitor.SaveData // (Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
