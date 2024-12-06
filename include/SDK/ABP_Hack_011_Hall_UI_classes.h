
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass ABP_Hack_011_Hall_UI.ABP_Hack_011_Hall_UI_C
// Size: 0x1bca (Inherited: 0x280)
class UABP_Hack_011_Hall_UI_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_C6C8B0884379E22AACD970934C491D21; // 0x288(0x60)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_DEA1538147D38D83005C038391A28008; // 0x2e8(0x170)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_BC57FFF746EC76076E66498CF3189B19; // 0x458(0x50)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_73CAEFBC4C8C84FE6BC40AAF1B89E059; // 0x4a8(0x50)
	struct FAnimNode_Slot AnimGraphNode_Slot_528C131646EA30BBB43C98A4C9D00385; // 0x4f8(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_726CC37847FA6BEEC99772A7DF77B991; // 0x570(0xf8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_BA846ACC4CA664D5D8BB6FB7DAEFD2E4; // 0x668(0x100)
	char pad_768[0x8]; // 0x768(0x08)
	struct FAnimNode_Chain AnimGraphNode_Chain_9EB4E3934D70C9E8163096A5E973E728; // 0x770(0x7c0)
	struct FAnimNode_Chain AnimGraphNode_Chain_D7E84AE24E5243FFF7C742A6B2F97653; // 0xf30(0x7c0)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2C1DF9C14027F7E9BD6A76AC3135A9F4; // 0x16f0(0x148)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_67EB6B2B458A3F4CE63259BDAFB89246; // 0x1838(0x120)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_3B9025B64C1D9BB9E95E3681C7259408; // 0x1958(0x120)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_BF1E5AFD420E188CD81B7FBD7485DD1E; // 0x1a78(0x148)
	struct UAnimSequence* LoopAnim; // 0x1bc0(0x08)
	bool isDynamic; // 0x1bc8(0x01)
	bool ResetDynamicToggle; // 0x1bc9(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Hack_011_Hall_UI.ABP_Hack_011_Hall_UI_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
