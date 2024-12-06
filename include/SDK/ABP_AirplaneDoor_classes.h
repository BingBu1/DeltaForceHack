
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass ABP_AirplaneDoor.ABP_AirplaneDoor_C
// Size: 0xb61 (Inherited: 0x280)
class UABP_AirplaneDoor_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_7BDA830D413F8AB7C18AF086B77B164D; // 0x288(0x60)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_DC36354844681847D0B708A2C1B5C87A; // 0x2e8(0x68)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_086ACCF349A27952AD0C23A1619D82F7; // 0x350(0x68)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_DEB7F480445AD3CF602BAFA65DC6EFA4; // 0x3b8(0x68)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9216F28044A58638032FCA95052E8A34; // 0x420(0x68)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_ACC71A8D44D920B3F9D7DAA4D5E5D7C1; // 0x488(0x100)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9F1397F2470281B49909A28CADA74FFD; // 0x588(0x60)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_0B050F3946C95D5B5E9EDFBE43500F94; // 0x5e8(0x100)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_FFB3DF0D4AB85152846D02B6C7F19DC6; // 0x6e8(0x60)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28CE119041288A69E17D91B3FEF34733; // 0x748(0x100)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_B32AF44146D239313F2A4589F7401D27; // 0x848(0x60)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28E782D24A1E510A9F3514913900806D; // 0x8a8(0x100)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_B36BE8334C58EAF70D12FCAC216D67D1; // 0x9a8(0x60)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_F0EF88CA43853616282BE1B57090BA88; // 0xa08(0x158)
	bool Open_; // 0xb60(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_AirplaneDoor.ABP_AirplaneDoor_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x34c0310038
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
