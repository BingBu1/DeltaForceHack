
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMPSO.DFMPSOAutomation
// Size: 0xb0 (Inherited: 0x30)
class UDFMPSOAutomation : public UObject {
public:

	char pad_30[0x20]; // 0x30(0x20)
	struct AActor* ViewTarget; // 0x50(0x08)
	bool bStartLoadProcess; // 0x58(0x01)
	bool bStartOpenWorld; // 0x59(0x01)
	enum class EDFMPSOStage CurMaskState; // 0x5a(0x01)
	char pad_5B[0x55]; // 0x5b(0x55)

	void OnOpenWorldProfileState(int32_t State); // Function DFMPSO.DFMPSOAutomation.OnOpenWorldProfileState // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMPSO.DFMPSOCacheSystem
// Size: 0x120 (Inherited: 0x38)
class UDFMPSOCacheSystem : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnPrecompileAllPSOFinish[0x10]; // 0x38(0x10)
	struct UDFMPSOAutomation* PSOAutomation; // 0x48(0x08)
	char pad_50[0xd0]; // 0x50(0xd0)

	void StopPrecompile(); // Function DFMPSO.DFMPSOCacheSystem.StopPrecompile // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
