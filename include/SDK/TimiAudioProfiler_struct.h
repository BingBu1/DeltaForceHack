
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum TimiAudioProfiler.ETAProfilerObjectType
enum class ETAProfilerObjectType : int {
	Event = 0,
	Switch = 1,
	State = 2,
	RTPC = 3,
	SoundBank = 4,
	Listener = 5,
	ETAProfilerObjectType_MAX = 6
};

// Enum TimiAudioProfiler.ETAProfilerType
enum class ETAProfilerType : int {
	Message = 0,
	Warning = 1,
	Error = 2,
	ETAProfilerType_MAX = 3
};

// ScriptStruct TimiAudioProfiler.TAProfilerMessage
// Size: 0x48 (Inherited: 0x00)
struct FTAProfilerMessage {
public:

	char pad_0[0x48]; // 0x00(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
