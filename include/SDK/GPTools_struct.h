
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPTools.EGPTFlowMessageLevel
enum class EGPTFlowMessageLevel : int {
	Log = 0,
	Warning = 1,
	Error = 2,
	EGPTFlowMessageLevel_MAX = 3
};

// Enum GPTools.EGPTConsoleCommandScope
enum class EGPTConsoleCommandScope : int {
	Client = 0,
	Server = 1,
	All = 2,
	EGPTConsoleCommandScope_MAX = 3
};

// ScriptStruct GPTools.GPToolInfo
// Size: 0x30 (Inherited: 0x00)
struct FGPToolInfo {
public:

	struct FString Name; // 0x00(0x10)
	struct UClass* ImplClass; // 0x10(0x08)
	int32_t Permission; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString ScriptPath; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
