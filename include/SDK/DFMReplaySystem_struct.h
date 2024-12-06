
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMReplaySystem.EReplayType
enum class EReplayType : int {
	EReplayType_None = 0,
	EReplayType_Killcam = 1,
	EReplayType_OB = 2,
	EReplayType_MAX = 3
};

// Enum DFMReplaySystem.ENetworkReplayStreamerType
enum class ENetworkReplayStreamerType : int {
	StreamerType_Memery = 0,
	StreamerType_File = 1,
	StreamerType_HTTP = 2,
	StreamerType_File_ARS = 3,
	StreamerType_File_JSON = 4,
	StreamerType_MAX = 5
};

// ScriptStruct DFMReplaySystem.ReplayDataChunk
// Size: 0x20 (Inherited: 0x00)
struct FReplayDataChunk {
public:

	int16_t TotalChunkNums; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t StartIndex; // 0x04(0x04)
	uint32_t TimeInMS; // 0x08(0x04)
	int16_t ChunkIndex; // 0x0c(0x02)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<char> Data; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMReplaySystem.ReplayCheckpointChunk
// Size: 0x20 (Inherited: 0x00)
struct FReplayCheckpointChunk {
public:

	int16_t TotalChunkNums; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	uint32_t TimeInMS; // 0x04(0x04)
	uint32_t StreamByteOffset; // 0x08(0x04)
	int16_t ChunkIndex; // 0x0c(0x02)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<char> Data; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMReplaySystem.ReplayHeaderChunk
// Size: 0x38 (Inherited: 0x00)
struct FReplayHeaderChunk {
public:

	struct FString RelayName; // 0x00(0x10)
	uint32_t LengthInMS; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t SizeInBytes; // 0x18(0x08)
	int16_t TotalChunkNums; // 0x20(0x02)
	int16_t ChunkIndex; // 0x22(0x02)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<char> Data; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
