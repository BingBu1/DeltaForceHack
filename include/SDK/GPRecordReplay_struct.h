
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct GPRecordReplay.ReplayDemoInfo
// Size: 0x48 (Inherited: 0x00)
struct FReplayDemoInfo {
public:

	struct FString StreamerType; // 0x00(0x10)
	struct FString ReplayName; // 0x10(0x10)
	struct FString FriendlyName; // 0x20(0x10)
	struct FDateTime Timestamp; // 0x30(0x08)
	int32_t SizeInKBytes; // 0x38(0x04)
	int32_t LengthInMS; // 0x3c(0x04)
	bool bIsValid; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
