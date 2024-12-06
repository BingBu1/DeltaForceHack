
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass ABP_David_027_Hall_UI.ABP_David_027_Hall_UI_C
// Size: 0x188a (Inherited: 0x280)
class UABP_David_027_Hall_UI_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_D03BAD4D4F352FBB69D5F79EE203818D; // 0x288(0x60)
	char pad_2E8[0x8]; // 0x2e8(0x08)
	struct FAnimNode_Chain AnimGraphNode_Chain_349F85FC4BF31FCC0EBE51886A1F8623; // 0x2f0(0x7c0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_240CA20A4AC2683E5B0851949B16F629; // 0xab0(0x50)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_0F88F27C40628E0D10F92784A2248BC3; // 0xb00(0x50)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_8EC191934B2EB7E93842F183720BFE91; // 0xb50(0x120)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_94291F2046DD3B4F9A12A499422714F9; // 0xc70(0x120)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_E88FCF3D46E8DC9741D4EB8697CC89EC; // 0xd90(0x120)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_9C1E6EF349B3EF05983A1BBAEE01C731; // 0xeb0(0x120)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_4A2277E84FEF397324B5CA8E4F6A2BAD; // 0xfd0(0x170)
	struct FAnimNode_Slot AnimGraphNode_Slot_B6123FC24E455644ACC99B8402224317; // 0x1140(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_77A53DE44A6E02FF294FEF91E60E8753; // 0x11b8(0xf8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_C9114FBB4B74BB610AF3CC9C6BEF3CDB; // 0x12b0(0x100)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_923791CD49FEA82271EDD6843830A73E; // 0x13b0(0x148)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_9885BE4B42F0A856827DB89ED006B78D; // 0x14f8(0x120)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_BBD216CC4DA5B48A900B0EB1A1414F5D; // 0x1618(0x120)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_AFE424574FF496AA88ED27A8D13C70F7; // 0x1738(0x148)
	struct UAnimSequence* LoopAnim; // 0x1880(0x08)
	bool isDynamic; // 0x1888(0x01)
	bool ResetDynamicToggle; // 0x1889(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_David_027_Hall_UI.ABP_David_027_Hall_UI_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
