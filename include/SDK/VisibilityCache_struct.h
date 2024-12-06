
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct VisibilityCache.GridXYResult
// Size: 0x10 (Inherited: 0x00)
struct FGridXYResult {
public:

	struct TArray<uint64_t> GridXYResult; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VisibilityCache.GridXYBitMask
// Size: 0x10 (Inherited: 0x00)
struct FGridXYBitMask {
public:

	struct TArray<char> GridXYBitMask; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VisibilityCache.GridID
// Size: 0x10 (Inherited: 0x00)
struct FGridID {
public:

	struct TArray<int16_t> GridID; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VisibilityCache.GridZList
// Size: 0x10 (Inherited: 0x00)
struct FGridZList {
public:

	struct TArray<int32_t> GridZList; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct VisibilityCache.GridVisibilityData
// Size: 0x50 (Inherited: 0x00)
struct FGridVisibilityData {
public:

	struct TMap<uint16_t, uint16_t> Data; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
