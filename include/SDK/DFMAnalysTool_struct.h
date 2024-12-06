
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMAnalysTool.EParamType
enum class EParamType : int {
	Invalid = 0,
	P_BOOL = 1,
	P_INT = 2,
	P_FLOAT = 3,
	P_DOUBLE = 4,
	P_FSTRING = 5,
	P_JSON_DATA = 6,
	EParamType_MAX = 7
};

// Enum DFMAnalysTool.EJsonDataType
enum class EJsonDataType : int {
	Empty = 0,
	ENTRY = 1,
	array = 2,
	Section = 3,
	EJsonDataType_MAX = 4
};

// Enum DFMAnalysTool.EUICostType
enum class EUICostType : int {
	None = 0,
	TotalTime = 1,
	Open = 2,
	Close = 3,
	CreateSub = 4,
	ProtoReceive = 5,
	GameFlow = 6,
	Other = 7,
	EUICostType_MAX = 8
};

// ScriptStruct DFMAnalysTool.DataOfTimer
// Size: 0x28 (Inherited: 0x00)
struct FDataOfTimer {
public:

	char pad_0[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMAnalysTool.UICostData
// Size: 0x98 (Inherited: 0x00)
struct FUICostData {
public:

	char pad_0[0x98]; // 0x00(0x98)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
