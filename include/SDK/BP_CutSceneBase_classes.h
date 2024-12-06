
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_CutSceneBase.BP_CutSceneBase_C
// Size: 0x6cc (Inherited: 0x6c0)
class ABP_CutSceneBase_C : public AGPSequenceActor {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c0(0x08)
	bool bLocalPlayerHideOnEnterCutScene; // 0x6c8(0x01)
	bool bLocalPlayerHideOnLeaveCutScene; // 0x6c9(0x01)
	bool bKeepCinematicOnLeaveCutScene; // 0x6ca(0x01)
	bool bShouldSoundOff; // 0x6cb(0x01)

	void LeaveCutSceneHud(); // Function BP_CutSceneBase.BP_CutSceneBase_C.LeaveCutSceneHud // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000074
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
