
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_SafeHousePlayerController.BP_SafeHousePlayerController_C
// Size: 0xc79 (Inherited: 0xc18)
class ABP_SafeHousePlayerController_C : public ASafeHousePlayerController {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc18(0x08)
	struct UDFMControllerAudioComponent* DFMControllerAudio; // 0xc20(0x08)
	struct UDFMQuestGamingAreaPlayerComponent* DFMQuestGamingAreaPlayer; // 0xc28(0x08)
	struct USimulationLODPerceptionComponent* SimulationLODPerception; // 0xc30(0x08)
	char pad_C38[0x8]; // 0xc38(0x08)
	struct FTransform MiniManTransform; // 0xc40(0x30)
	struct UObject* MiniManActor; // 0xc70(0x08)
	bool bOpenAIDebug; // 0xc78(0x01)

	void SpawnTestAIAtLocation(); // Function BP_SafeHousePlayerController.BP_SafeHousePlayerController_C.SpawnTestAIAtLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
