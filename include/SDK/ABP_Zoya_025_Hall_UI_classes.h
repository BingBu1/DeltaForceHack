
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass ABP_Zoya_025_Hall_UI.ABP_Zoya_025_Hall_UI_C
// Size: 0x16ea (Inherited: 0x280)
class UABP_Zoya_025_Hall_UI_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_4314885B4112D4FF48440D8EACAF28F8; // 0x288(0x60)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_50FE560345DBE4E61FAFDD96413DAD8F; // 0x2e8(0x170)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_13641FDD4CEDC804CA78FAAA644014A0; // 0x458(0x50)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9A32AB62427009AC603441B083E2F7B2; // 0x4a8(0x50)
	struct FAnimNode_Slot AnimGraphNode_Slot_D6B2660B4DCB5B324CFE98A6D77605A9; // 0x4f8(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_827E3AF441EE57D97495C09BD55758DD; // 0x570(0xf8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7485463E4716F32AB5A86AB92258A513; // 0x668(0x100)
	char pad_768[0x8]; // 0x768(0x08)
	struct FAnimNode_Chain AnimGraphNode_Chain_779DB8F448211902F9B4E38F2FA0E7C1; // 0x770(0x7c0)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_B0AB36564484612B774961A03A1A0E8F; // 0xf30(0x148)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_3E9442C24EAEF82FB83D2EA161A2D813; // 0x1078(0x120)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_8D7D7F8045E58BE7018BB3BC7A71ABAD; // 0x1198(0x120)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2D6B5C134A533DBF981C138557C9F203; // 0x12b8(0x148)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_8355E83E4106A9E73DE320A47269BFF7; // 0x1400(0x120)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_2234B7B44AEB5B38FA0D54969C073F59; // 0x1520(0x120)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_C63710A146F7517177FF1A8047D38448; // 0x1640(0xa0)
	struct UAnimSequence* LoopAnim; // 0x16e0(0x08)
	bool isDynamic; // 0x16e8(0x01)
	bool ResetDynamicToggle; // 0x16e9(0x01)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Zoya_025_Hall_UI.ABP_Zoya_025_Hall_UI_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
