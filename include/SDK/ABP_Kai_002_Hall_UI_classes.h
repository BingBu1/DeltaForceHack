
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass ABP_Kai_002_Hall_UI.ABP_Kai_002_Hall_UI_C
// Size: 0xc40 (Inherited: 0x280)
class UABP_Kai_002_Hall_UI_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_9FC40C3541B1DA73F6C8B2813BFDD7C8; // 0x288(0x60)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_4389FF3C4A1322FDF9B83996FFFDCCD8; // 0x2e8(0x170)
	struct FAnimNode_Slot AnimGraphNode_Slot_85DFF0BB42EC9E7A4CA715BFDDE94F1D; // 0x458(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_DD42BB3C4729ACB7A0A2E69E39C4C6A2; // 0x4d0(0xf8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_66C74A8F44E5B829EE3A9FAB068995F2; // 0x5c8(0x100)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_EBA217A044D2EC7505C6DEA8C6C9666A; // 0x6c8(0x148)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_718B31F1479D6616AFED2FAFFD4FDB9F; // 0x810(0x120)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_CA9925CE4B9BDD5843DC519216CADD66; // 0x930(0x120)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_E132307941BEC43BE1EE818DE83D4E09; // 0xa50(0x148)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_44FA8899459492F178FEA9852DC0E0D1; // 0xb98(0x50)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_BDCF71A74CB28776724C65930D78BC19; // 0xbe8(0x50)
	struct UAnimSequence* LoopAnim; // 0xc38(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Kai_002_Hall_UI.ABP_Kai_002_Hall_UI_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
