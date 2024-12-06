
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class XeSSPlugin.XeSSSettings
// Size: 0x58 (Inherited: 0x40)
class UXeSSSettings : public UDeveloperSettings {
public:

	bool bEnableXeSSInEditorViewports; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString DebugDataDumpPath; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
