
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_QMarker.BP_QMarker_C
// Size: 0x444 (Inherited: 0x418)
class ABP_QMarker_C : public ADFMQuestMarker {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x420(0x08)
	struct UWBP_ScreenMarkerMission_Raid_C* TargetWidget; // 0x428(0x08)
	float Scale; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	/*struct ABP_MissionCircle_C**/char MarkerCircle[0x8]; // 0x438(0x08)
	int32_t CutNum; // 0x440(0x04)

	void GetTargetInteratorProgress(float& Percent); // Function BP_QMarker.BP_QMarker_C.GetTargetInteratorProgress // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
