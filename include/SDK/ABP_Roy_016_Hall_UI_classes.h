
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass ABP_Roy_016_Hall_UI.ABP_Roy_016_Hall_UI_C
// Size: 0x140a (Inherited: 0x280)
class UABP_Roy_016_Hall_UI_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_E0EC489C48155EACC90773990F6D3F74; // 0x288(0x60)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_639A129A4A4269E87B8BF9938D9C9DFA; // 0x2e8(0x170)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_675ED50B43E67806DDC0CB8C927C1E56; // 0x458(0x50)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9E3CF0D0440AD9BB8A3234A08D2C1D65; // 0x4a8(0x50)
	struct FAnimNode_Slot AnimGraphNode_Slot_58807A104475E7C872630AB277A1B870; // 0x4f8(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_EC2DD9EF4DA2F9D11E77F8A7076C1502; // 0x570(0xf8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4DBF7B80401E161E8DBE84B99FBEC2BC; // 0x668(0x100)
	char pad_768[0x8]; // 0x768(0x08)
	struct FAnimNode_Chain AnimGraphNode_Chain_C351EE6F4DD1D764E7F7E4A6E79DEC69; // 0x770(0x7c0)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_FFC0684946EA0E9A85A5F193EBB751C8; // 0xf30(0x148)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_83A7E7364E1E6419CAFF86A1E2CAD928; // 0x1078(0x120)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_E589AB72454CF84ACB70D388DF5E00DD; // 0x1198(0x120)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_6DD3E25747A9F65B36E729A5AB61F0ED; // 0x12b8(0x148)
	struct UAnimSequence* LoopAnim; // 0x1400(0x08)
	bool isDynamic; // 0x1408(0x01)
	bool ResetDynamicToggle; // 0x1409(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Roy_016_Hall_UI.ABP_Roy_016_Hall_UI_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
