
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass BP_ArmoredCarAnim.BP_ArmoredCarAnim_C
// Size: 0x2032 (Inherited: 0x12d0)
class UBP_ArmoredCarAnim_C : public UDFMVehicleAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x12d0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_3596B86C4E2EFDC3FD1C5092C816ECE5; // 0x12d8(0x60)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_645FE87947B8D87BCB38BF8B1C6902AC; // 0x1338(0x40)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3D9A18E54E0C89B0BB827987B78169EE; // 0x1378(0x50)
	char pad_13C8[0x8]; // 0x13c8(0x08)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_24D942AC42D76101B3D52BAFB1BA1208; // 0x13d0(0x1e0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_47494337493166BC8D0F47AF92631B78; // 0x15b0(0x1e0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_5B23B5854BD5A7BABAE73B95B12F437C; // 0x1790(0x1e0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_C3E6ABAB445B56F1C1F4B9BBCABEB972; // 0x1970(0x1e0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_7A39981742F8A7AE3B218EA64EBAE8EB; // 0x1b50(0x1e0)
	struct FAnimNode_LookAt AnimGraphNode_LookAt_C3E1BF2C450B6DDB52D533886C7567ED; // 0x1d30(0x1e0)
	struct FAnimNode_DFMWheelHandler AnimGraphNode_DFMWheelHandler_77B6F6B842F4ED9508A082A9D5E3C217; // 0x1f10(0x120)
	bool PlayStartAnim; // 0x2030(0x01)
	bool PlayEndAnim; // 0x2031(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function BP_ArmoredCarAnim.BP_ArmoredCarAnim_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffdc000002d
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
