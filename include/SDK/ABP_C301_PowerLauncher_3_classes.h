
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass ABP_C301_PowerLauncher_3.ABP_C301_PowerLauncher_2_C
// Size: 0x85c (Inherited: 0x2a0)
class UABP_C301_PowerLauncher_2_C : public UGPAbilityAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_77D03631480E0F0BF8E368AC6E8DF78B; // 0x2a8(0x170)
	struct FAnimNode_Root AnimGraphNode_Root_B7C3800244C4E4A520F63CA90A73CB3A; // 0x418(0x60)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_68241B8A48B476A20AC31A9A380A2BFB; // 0x478(0x170)
	struct FAnimNode_Slot AnimGraphNode_Slot_A50A41F848D351C338753A8CF9128A16; // 0x5e8(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1B9F9FEB4834C42DBA895BADD544CAC2; // 0x660(0xf8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_EB5E4B854A43DDFE154EFFA65F98D296; // 0x758(0x100)
	int32_t AnimIndex; // 0x858(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_C301_PowerLauncher_3.ABP_C301_PowerLauncher_2_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x87656601c000006c
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
