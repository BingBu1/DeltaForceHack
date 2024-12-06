
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_AnimNotify_FootStep.BP_AnimNotify_FootStep_C
// Size: 0x88 (Inherited: 0x48)
class UBP_AnimNotify_FootStep_C : public UAnimNotify_GPAudioBase {
public:

	struct FString AttachName; // 0x48(0x10)
	struct FString EventName; // 0x58(0x10)
	enum class EGPAudioFootSoundType AudioType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UPhysicalMaterial* BindPhysMat; // 0x70(0x08)
	float MaxDistance; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UPhysicalMaterialAudioDataAsset* BindConfig; // 0x80(0x08)

	struct FString GetNotifyName(); // Function BP_AnimNotify_FootStep.BP_AnimNotify_FootStep_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
