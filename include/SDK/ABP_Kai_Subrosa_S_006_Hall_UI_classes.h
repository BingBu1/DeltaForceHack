
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass ABP_Kai_Subrosa_S_006_Hall_UI.ABP_Kai_Subrosa_S_006_Hall_UI_C
// Size: 0xa48 (Inherited: 0x280)
class UABP_Kai_Subrosa_S_006_Hall_UI_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_4E84E6F1442DE70211B7AC94A092BA3D; // 0x288(0x60)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_89193EB54C76709FCFA062A36725A74E; // 0x2e8(0x170)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_39AB818641D6BF2C7811F98740BFA486; // 0x458(0x148)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_7378F60D4A7E627ED1D40094BDE6F20A; // 0x5a0(0x120)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_862658C14D780AA7B0638198D151CFF0; // 0x6c0(0x120)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_27A8F7A5495274AA380E64966376F4A6; // 0x7e0(0x148)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_84DE33E84522C0C3AC741395901E9864; // 0x928(0x50)
	struct FAnimNode_Slot AnimGraphNode_Slot_5A8C3A3A47900D7F1B5337AA4265982F; // 0x978(0x78)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_47CA94814EDEF6425A0D698884746304; // 0x9f0(0x50)
	struct UAnimSequence* LoopAnim; // 0xa40(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Kai_Subrosa_S_006_Hall_UI.ABP_Kai_Subrosa_S_006_Hall_UI_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
