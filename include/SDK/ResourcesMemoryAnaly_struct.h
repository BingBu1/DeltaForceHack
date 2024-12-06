
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct ResourcesMemoryAnaly.MemoryStatistInfo
// Size: 0x20 (Inherited: 0x00)
struct FMemoryStatistInfo {
public:

	struct FString Name; // 0x00(0x10)
	struct TArray<struct FName> StatNames; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ResourcesMemoryAnaly.StatisticalInfo
// Size: 0x40 (Inherited: 0x00)
struct FStatisticalInfo {
public:

	struct FString Name; // 0x00(0x10)
	struct TArray<struct FString> FunctionFilterName; // 0x10(0x10)
	struct TArray<struct FString> ResPathFilterName; // 0x20(0x10)
	struct TArray<struct FString> ResTypeFilter; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
