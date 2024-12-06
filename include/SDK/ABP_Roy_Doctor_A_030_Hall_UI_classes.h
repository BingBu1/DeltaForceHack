
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass ABP_Roy_Doctor_A_030_Hall_UI.ABP_Roy_Doctor_A_030_Hall_UI_C
// Size: 0x152a (Inherited: 0x280)
class UABP_Roy_Doctor_A_030_Hall_UI_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_D5A673EC48971B62063C3497C6270DBE; // 0x288(0x60)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_F231DF6F4190D2C7BADDDC9B5FE84593; // 0x2e8(0x170)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_FE95053244095EF9934BB888128CD6A5; // 0x458(0x50)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_90ADC51749EC196E10FD89B95E5DCEC9; // 0x4a8(0x50)
	struct FAnimNode_Slot AnimGraphNode_Slot_7F16501343DC245331E719809850AFBD; // 0x4f8(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_86C2E9DE4148D084E3F081AED95D0692; // 0x570(0xf8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3D81A9CA48FB029B2D9C659E5EC99201; // 0x668(0x100)
	char pad_768[0x8]; // 0x768(0x08)
	struct FAnimNode_Chain AnimGraphNode_Chain_D11D9F7F4B1BB4456C7FC5AF0426E4AB; // 0x770(0x7c0)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_63F9B739484A0111B1639B8BE987F52F; // 0xf30(0x148)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_917196E446BADC119F144FA6AA0D8C72; // 0x1078(0x120)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_B605B85E4FCA21DC4B2CACB1E4298205; // 0x1198(0x120)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_CE470530427E94630EFDFCB1CDE1992F; // 0x12b8(0x148)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_9AF9007840B1465EFE479395F9FB4549; // 0x1400(0x120)
	struct UAnimSequence* LoopAnim; // 0x1520(0x08)
	bool isDynamic; // 0x1528(0x01)
	bool ResetDynamicToggle; // 0x1529(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Roy_Doctor_A_030_Hall_UI.ABP_Roy_Doctor_A_030_Hall_UI_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1692552ae39978fb
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
