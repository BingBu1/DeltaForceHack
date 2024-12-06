
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass ABP_Terry_King_A_031_Hall_UI.ABP_Terry_King_A_031_Hall_UI_C
// Size: 0x23ca (Inherited: 0x280)
class UABP_Terry_King_A_031_Hall_UI_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_CBC46D9945822AED36244A9755EE60F5; // 0x288(0x60)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_F165127649F65F5B2A1AB19AB1877D78; // 0x2e8(0x170)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6A996B474C514503A8BA5ABF804DE689; // 0x458(0x50)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_67DD162840F818F72BF2B09D4424DF2E; // 0x4a8(0x50)
	struct FAnimNode_Slot AnimGraphNode_Slot_5C7D13C043AC6A801B79D38885507FFC; // 0x4f8(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3161B5E9491EAE1AC810379136F65AC2; // 0x570(0xf8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9E69567E4752D04CC84705A79F42EFF7; // 0x668(0x100)
	char pad_768[0x8]; // 0x768(0x08)
	struct FAnimNode_Chain AnimGraphNode_Chain_12188AAB4BC8BDCF3013FFBDE5C884DE; // 0x770(0x7c0)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_41BA77F9433F9DD604F50F87945DDAF9; // 0xf30(0x148)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_61C26CAB49870DFCCF0D8DA0FA503D9D; // 0x1078(0x120)
	struct FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_1767D73E44D13C19935953B0822FF67B; // 0x1198(0x120)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_762E85C449E1B044E700D1BE3957F05A; // 0x12b8(0x148)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_D4F6884F49424CA4002682A5C7B20D6B; // 0x1400(0xa0)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_886417BD492D325A094B2F8FD85A74C2; // 0x14a0(0x120)
	struct FAnimNode_Chain AnimGraphNode_Chain_64CC18E04AEAAB49BB5A0587C73CCEC5; // 0x15c0(0x7c0)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_7ACD7C254409E959B4A0188994542052; // 0x1d80(0x148)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_AC19E68D4D8125168E988C99F2E3DEAD; // 0x1ec8(0x148)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_901480704CDFF427AD4C9DAE90C6012D; // 0x2010(0x148)
	struct FAnimNode_CopyBone AnimGraphNode_CopyBone_D0444913479925F901D633969C3A9C9F; // 0x2158(0x120)
	struct FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_670E8CD04E6A9DAE0F9A8ABFEABB4D3C; // 0x2278(0x148)
	struct UAnimSequence* LoopAnim; // 0x23c0(0x08)
	bool isDynamic; // 0x23c8(0x01)
	bool ResetDynamicToggle; // 0x23c9(0x01)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function ABP_Terry_King_A_031_Hall_UI.ABP_Terry_King_A_031_Hall_UI_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
