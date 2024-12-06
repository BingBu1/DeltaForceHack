
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_DFMGameInstance.BP_DFMGameInstance_C
// Size: 0x441 (Inherited: 0x3e8)
class UBP_DFMGameInstance_C : public UDFMGameInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	/*struct TSet<struct FString>*/char CustomGFWhiteList[0x50]; // 0x3f0(0x50)
	bool NewGameFlowLifeTime; // 0x440(0x01)

	void Show_Network_Error(enum class ENetworkFailure Type, bool IsServer); // Function BP_DFMGameInstance.BP_DFMGameInstance_C.Show Network Error // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
