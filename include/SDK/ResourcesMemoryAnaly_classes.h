
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ResourcesMemoryAnaly.AnalyStatisticalConfig
// Size: 0x40 (Inherited: 0x30)
class UAnalyStatisticalConfig : public UObject {
public:

	struct TArray<struct FStatisticalInfo> StatisticalInfos; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ResourcesMemoryAnaly.ResourcesMemoryAnalyBPTools
// Size: 0x30 (Inherited: 0x30)
class UResourcesMemoryAnalyBPTools : public UBlueprintFunctionLibrary {
public:


	void STATIC_TickMemoryAnaly(); // Function ResourcesMemoryAnaly.ResourcesMemoryAnalyBPTools.TickMemoryAnaly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
