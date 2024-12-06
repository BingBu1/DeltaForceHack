
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass ABP_Luna_014_Hall_UI.ABP_Luna_014_Hall_UI_C
// Size: 0x1bca (Inherited: 0x280)
class UABP_Luna_014_Hall_UI_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_620CAFCD4282AD676BAC09AA70A9B135; // 0x288(0x60)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_3DDC11E04019235E6A59DBA27C64D5CB; // 0x2e8(0x170)
	char pad_458[0x8]; // 0x458(0x08)
	struct FAnimNode_Chain AnimGraphNode_Chain_21B1F03C489D0B105D498C8B3244E417; // 0x460(0x7c0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_47A8560445C45BD355465BBA9F1F3BC5; // 0xc20(0x50)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_AA8D726B414DF597B2F24998D1791BDE; // 0xc70(0x50)
	struct FAnimNode_Chain AnimGraphNode_Chain_A3A7D1FB43EB1EBEB1D5D3823F87AB66; // 0xcc0(0x7c0)
	struct FAnimNode_Slot AnimGraphNode_Slot_86C1A5434759F1A79EAA3A9CCF79E060; // 0x1480(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_BBFC01D94018F60C62AAE0BBCF693DBD; // 0x14f8(0xf8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_D74ABABC4260343C4E365E8FEC8EE387; // 0x15f0(0x100)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_A9BB57144592B9D2712803B3AA752E4D; // 0x16f0(0x148)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_EDBF5F7945AA24F80D89529F07F5AB21; // 0x1838(0x120)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_90FD09244A7B267AEC61418B77B7A0BE; // 0x1958(0x120)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_03F07F3546DC7DB08BBE4ABA64C99ACD; // 0x1a78(0x148)
	struct UAnimSequence* LoopAnim; // 0x1bc0(0x08)
	bool isDynamic; // 0x1bc8(0x01)
	bool ResetDynamicToggle; // 0x1bc9(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Luna_014_Hall_UI.ABP_Luna_014_Hall_UI_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
