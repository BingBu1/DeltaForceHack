
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass BP_Anim_HallSettlement_Succeed.BP_Anim_HallSettlement_Succeed_C
// Size: 0x5c0 (Inherited: 0x2a0)
class UBP_Anim_HallSettlement_Succeed_C : public UHallSettlementAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_0044DA74404CD2AAEBA17DAFA821E9DC; // 0x2a8(0x60)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_39456B8E4BADE3AC57DA298198B5386E; // 0x308(0x100)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_A91C8CCC474AF3A3E44AE4B92EBB2E89; // 0x408(0x60)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_61973D7445474D5F38559ABA2D09A5F7; // 0x468(0x158)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function BP_Anim_HallSettlement_Succeed.BP_Anim_HallSettlement_Succeed_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffebfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
