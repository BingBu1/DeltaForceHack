
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum NZLuaRuntime.ELuaArgumentType
enum class ELuaArgumentType : int {
	None = 0,
	Boolean = 1,
	Int = 2,
	Float = 3,
	String = 4,
	Object = 5,
	ELuaArgumentType_MAX = 6
};

// ScriptStruct NZLuaRuntime.LuaFileTag
// Size: 0x10 (Inherited: 0x00)
struct FLuaFileTag {
public:

	struct FString LuaFilePath; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
