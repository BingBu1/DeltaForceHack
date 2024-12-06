
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass ABP_Dragon_Mythic_009_Hall_UI.ABP_Dragon_Mythic_009_Hall_UI_C
// Size: 0xc42 (Inherited: 0x280)
class UABP_Dragon_Mythic_009_Hall_UI_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_58108DF5466D22680B31CA80B3098627; // 0x288(0xf8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_E76F2C6B4EC50D13A3CCDBB96799174A; // 0x380(0x100)
	struct FAnimNode_Slot AnimGraphNode_Slot_CF00A96E4321467629930CAA5BAE56A7; // 0x480(0x78)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_D209697E4354F4DCC259049604355F1D; // 0x4f8(0x170)
	struct FAnimNode_Root AnimGraphNode_Root_960DA1A941D524C46D3E9B8B8BDC0D73; // 0x668(0x60)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_D3183A36462D85058C14148C72895044; // 0x6c8(0x148)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_9A209929457339253956A2B8384D27AF; // 0x810(0x120)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_85D3BE734FDBC308529CCDA99DA8CC58; // 0x930(0x120)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_6F36516A412F65E1742F4A91EDFEFC88; // 0xa50(0x148)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_0EF3B53C4DB81440703910B7E3070B90; // 0xb98(0x50)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_8AF4F7434162653DD8CC64AFBBB16939; // 0xbe8(0x50)
	struct UAnimSequence* LoopAnim; // 0xc38(0x08)
	bool isDynamic; // 0xc40(0x01)
	bool ResetDynamicToggle; // 0xc41(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Dragon_Mythic_009_Hall_UI.ABP_Dragon_Mythic_009_Hall_UI_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
