
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass F_Head_Heads_Hair_DUMA_Luna_196_UI_AniBp.F_Head_Heads_Hair_DUMA_Luna_196_UI_AniBp_C
// Size: 0x1480 (Inherited: 0x280)
class UF_Head_Heads_Hair_DUMA_Luna_196_UI_AniBp_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	char pad_288[0x8]; // 0x288(0x08)
	struct FAnimNode_Chain AnimGraphNode_Chain_F36A84C64DD11B205A3618A130DD2CC8; // 0x290(0x7c0)
	struct FAnimNode_Root AnimGraphNode_Root_0CEA927147E5B131C96F61884AE06606; // 0xa50(0x60)
	struct FAnimNode_Chain AnimGraphNode_Chain_14A69AB545C5ED8828FC15BA13707801; // 0xab0(0x7c0)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_B927E635451A0A24511912B6E8AA361F; // 0x1270(0x170)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6495D4704026CAA16065AD8DFF8F32E8; // 0x13e0(0x50)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_DAE69156402424CD3A83DDA8729FA139; // 0x1430(0x50)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function F_Head_Heads_Hair_DUMA_Luna_196_UI_AniBp.F_Head_Heads_Hair_DUMA_Luna_196_UI_AniBp_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
