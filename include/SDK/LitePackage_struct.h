
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct LitePackage.MultiModuleInfo
// Size: 0x28 (Inherited: 0x08)
struct FMultiModuleInfo : public FTableRowBase {
public:

	struct FString MultiModuleName; // 0x08(0x10)
	struct TArray<struct FString> ChildModules; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LitePackage.ModulePakInfo
// Size: 0x28 (Inherited: 0x08)
struct FModulePakInfo : public FTableRowBase {
public:

	struct FString ModuleName; // 0x08(0x10)
	struct TArray<struct FString> PakList; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
