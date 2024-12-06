
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// AnimBlueprintGeneratedClass M_SamuelAbbas_219_AniBp.M_SamuelAbbas_219_AniBp_C
// Size: 0xcc0 (Inherited: 0x280)
class UM_SamuelAbbas_219_AniBp_C : public UAnimInstance {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_22FE84FE4D3893B626DB2A82EE03877E; // 0x288(0x50)
	char pad_2D8[0x8]; // 0x2d8(0x08)
	struct FAnimNode_Chain AnimGraphNode_Chain_F543B8454ED38E6967AD449F87196F97; // 0x2e0(0x7c0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8F911C664A52FD4E0A200EBD2A6F9D16; // 0xaa0(0x50)
	struct FAnimNode_Root AnimGraphNode_Root_1268656848A408623480EB9E44AD4D41; // 0xaf0(0x60)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh_E7DB79D04AC0BC934B6D1F871CFF1F09; // 0xb50(0x170)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function M_SamuelAbbas_219_AniBp.M_SamuelAbbas_219_AniBp_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
