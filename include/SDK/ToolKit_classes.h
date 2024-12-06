
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ToolKit.ToolKitRuntimeSettings
// Size: 0x68 (Inherited: 0x30)
class UToolKitRuntimeSettings : public UObject {
public:

	struct FString GameId; // 0x30(0x10)
	struct FString GameKey; // 0x40(0x10)
	struct FString ProxyServerUrl; // 0x50(0x10)
	bool bAutoStart; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
