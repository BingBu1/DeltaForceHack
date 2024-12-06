
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass Player_IK_3P.Player_IK_3P_C
// Size: 0x128c (Inherited: 0x9e0)
class UPlayer_IK_3P_C : public UGPAnimInstance_PlayerIK {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9e0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_7A773AC34459AEC6B783B59275A0444F; // 0x9e8(0x60)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2BFD2F3A409B9E212AC6B7BD9B4A3088; // 0xa48(0x150)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_E4F942824AC630B370269B929CA6D188; // 0xb98(0x150)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_D801E69442D153FCB5DEB38E98832B42; // 0xce8(0x50)
	char pad_D38[0x8]; // 0xd38(0x08)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_DD94BD4E47723AACE5C6D3BE75DE62CC; // 0xd40(0x210)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_1FE9ADF74FFBE3353C174F9DD349D473; // 0xf50(0x210)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_FE40BF3448E2E51328F077A7F47656D7; // 0x1160(0x50)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_87B59CA1444C2A2385D9A0A23C8574F6; // 0x11b0(0xa0)
	struct FVector Right_Foot_IK_Location; // 0x1250(0x0c)
	struct FRotator Right_Foot_IK_Rotation; // 0x125c(0x0c)
	float Right_Foot_IK_Modify_Alpha; // 0x1268(0x04)
	struct FRotator Left_Foot_IK_Rotation; // 0x126c(0x0c)
	struct FVector Left_Foot_IK_Location; // 0x1278(0x0c)
	float Left_Foot_IK_Modify_Alpha; // 0x1284(0x04)
	int32_t FirstUpdate; // 0x1288(0x04)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function Player_IK_3P.Player_IK_3P_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x72c0650073
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
