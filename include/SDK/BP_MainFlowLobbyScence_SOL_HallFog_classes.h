
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_MainFlowLobbyScence_SOL_HallFog.BP_MainFlowLobbyScence_SOL_HallFog_C
// Size: 0x3a8 (Inherited: 0x390)
class ABP_MainFlowLobbyScence_SOL_HallFog_C : public ADFHeightFogActor {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UExponentialHeightFogComponent* ExponentialHeightFog; // 0x398(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3a0(0x08)

	void ReceiveBeginPlay(); // Function BP_MainFlowLobbyScence_SOL_HallFog.BP_MainFlowLobbyScence_SOL_HallFog_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
