
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass ABP_Hero_Face_UI.ABP_Hero_Face_UI_C
// Size: 0xad0 (Inherited: 0x280)
class UABP_Hero_Face_UI_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6F02573541ECC579CE3289AEEED131B7; // 0x288(0x100)
	struct FAnimNode_Slot AnimGraphNode_Slot_A45F6F9941AE22065870AF87A3CAF201; // 0x388(0x78)
	struct FAnimNode_CacheBlend ZZAnimGraphNode_CacheBlend_2273E558453C0D550EE751B3E40BA74E; // 0x400(0x2e0)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_8B169ABF4BF262146D305FAAAD960597; // 0x6e0(0x170)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_DC5E999B4C2AB76D210FAFA294385128; // 0x850(0x100)
	struct FAnimNode_Root AnimGraphNode_Root_6E0E354242EF02028AFFBAA48DB2490B; // 0x950(0x60)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_17EB7B48466E6DF0A6022182DD94B3BB; // 0x9b0(0x50)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_86E1BE35433EA22FC1479AA979018BD5; // 0xa00(0x50)
	struct UAnimSequenceBase* FaceLoopAnim; // 0xa50(0x08)
	struct FVector Look_At_Target; // 0xa58(0x0c)
	float Look_At_Weigth; // 0xa64(0x04)
	float Look_At_Speed_Strength; // 0xa68(0x04)
	char pad_A6C[0x4]; // 0xa6c(0x04)
	struct UAnimSequenceBase* DefaultFaceAnim; // 0xa70(0x08)
	bool FaceAnimToggle; // 0xa78(0x01)
	char pad_A79[0x7]; // 0xa79(0x07)
	struct TMap<struct UAnimSequenceBase*, struct UAnimSequenceBase*> BodyFaceAnimMapping; // 0xa80(0x50)

	void SyncFaceAnim(struct UAnimSequenceBase* BodyAnim, struct UAnimSequenceBase* FaceAnim, bool IsResetPlay, bool SetOrGet, struct UAnimSequenceBase*& GetBodyAnim, struct UAnimSequenceBase*& GetFaceAnim, bool& GetIsResetPlay); // Function ABP_Hero_Face_UI.ABP_Hero_Face_UI_C.SyncFaceAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
