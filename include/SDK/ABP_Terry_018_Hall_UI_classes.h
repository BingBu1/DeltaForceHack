
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass ABP_Terry_018_Hall_UI.ABP_Terry_018_Hall_UI_C
// Size: 0x1c32 (Inherited: 0x280)
class UABP_Terry_018_Hall_UI_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_5F7FF67C46BD3A376A3AFDAE11808FF8; // 0x288(0x60)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_B8111E8B44D6C9E973BCBC8E9BB5DA12; // 0x2e8(0x170)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_DFCC944B4B9FBCF074F8E9BFE17FCC2B; // 0x458(0x50)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_655FD2CA41329F7B6335E9AEA27BA871; // 0x4a8(0x50)
	struct FAnimNode_Slot AnimGraphNode_Slot_6C1DC7D041772346BFD78AB4B896377C; // 0x4f8(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_82B95048410903999FB8E9914EA1A3A9; // 0x570(0xf8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_F9789E7945485E8D196978871F563FDF; // 0x668(0x100)
	char pad_768[0x8]; // 0x768(0x08)
	struct FAnimNode_Chain AnimGraphNode_Chain_B96E1C4F4D32AEA6230939B5720A9FCB; // 0x770(0x7c0)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_0C28568247B9B6DAA203EB80D4A7C6F7; // 0xf30(0x148)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_A517E4EF46CB67C25F3009A9B617DCA5; // 0x1078(0x148)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_CD399EAD4E38E38A390401B2ACD145E3; // 0x11c0(0x148)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_893EE27A4B270F3E8670FEAD7222437B; // 0x1308(0x120)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_D207ECFF4FFB6DB9DA13ACA5B7CE710B; // 0x1428(0x120)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_EBBD1D894217DDB10FDF41B9A4338E3D; // 0x1548(0x148)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_9F8C6A02425410349AD9EB9C24743544; // 0x1690(0xa0)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_A66CAAE94C39A72729C89495A144D9F4; // 0x1730(0x148)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_FB49F90646663102399746AA9D99E400; // 0x1878(0x120)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_C1D748274ABEBE03F68CF2BDEBE12B38; // 0x1998(0x148)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_9801957F49CA724903A2D7A156432DE6; // 0x1ae0(0x148)
	struct UAnimSequence* LoopAnim; // 0x1c28(0x08)
	bool isDynamic; // 0x1c30(0x01)
	bool ResetDynamicToggle; // 0x1c31(0x01)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Terry_018_Hall_UI.ABP_Terry_018_Hall_UI_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
