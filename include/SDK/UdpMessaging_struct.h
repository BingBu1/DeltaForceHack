
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : int {
	None = 0,
	Json = 1,
	TaggedProperty = 2,
	CborPlatformEndianness = 3,
	CborStandardEndianness = 4,
	EUdpMessageFormat_MAX = 5
};

// ScriptStruct UdpMessaging.UdpMockMessage
// Size: 0x10 (Inherited: 0x00)
struct FUdpMockMessage {
public:

	struct TArray<char> Data; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
