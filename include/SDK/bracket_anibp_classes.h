
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass bracket_anibp.bracket_anibp_C
// Size: 0x9f8 (Inherited: 0x280)
class Ubracket_anibp_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_0F08DC9846E16A04CC016C9A154D025B; // 0x288(0x60)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_411F8C6D406A7D6549201E89B4FA5CA0; // 0x2e8(0x50)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_DA78BF52424F4235367B7FA6889B0ACF; // 0x338(0x50)
	struct FAnimNode_Slot AnimGraphNode_Slot_595BF9204F3888EC1841DBAED71705FF; // 0x388(0x78)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_553EE4AF4A193893E387DE9533C38CB7; // 0x400(0x50)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_09B59D804F77315B7C83B98E94C7459A; // 0x450(0x50)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_F58E710C420BB8A9F80B1086D483C3C8; // 0x4a0(0x150)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6248262E4A4DFBE64E012E81FA077F6C; // 0x5f0(0x100)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_466464964BA02F727B8218A446CEA3A8; // 0x6f0(0x60)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_D924C0014042EEEC50D2E8B8C82CD12B; // 0x750(0x158)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1F74C9044DDFAB260AB49DBC8DD971CC; // 0x8a8(0xf0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4509856047E33195FF66799F060D3C2E; // 0x998(0x58)
	bool Shake; // 0x9f0(0x01)
	bool bCustomRotate; // 0x9f1(0x01)
	char pad_9F2[0x2]; // 0x9f2(0x02)
	float CustomYaw; // 0x9f4(0x04)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function bracket_anibp.bracket_anibp_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x5554555315545559
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
