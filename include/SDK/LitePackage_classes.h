
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class LitePackage.LiteModuleInfo
// Size: 0x40 (Inherited: 0x30)
class ULiteModuleInfo : public UObject {
public:

	struct TArray<struct FModulePakInfo> ModuleInfo; // 0x30(0x10)

	void STATIC_WriteDefaultConfigValueToIni(); // Function LitePackage.LiteModuleInfo.WriteDefaultConfigValueToIni // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class LitePackage.LiteMultiModuleInfo
// Size: 0x40 (Inherited: 0x30)
class ULiteMultiModuleInfo : public UObject {
public:

	struct TArray<struct FMultiModuleInfo> MultiModule; // 0x30(0x10)

	void STATIC_WriteDefaultConfigValueToIni(); // Function LitePackage.LiteMultiModuleInfo.WriteDefaultConfigValueToIni // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
