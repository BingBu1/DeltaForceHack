
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_HallCharacter.BP_HallCharacter_C
// Size: 0x898 (Inherited: 0x890)
class ABP_HallCharacter_C : public AHallCharacter {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x890(0x08)

	void SyncFaceAnim(struct UAnimSequenceBase* BodyAnim, struct UAnimSequenceBase* FaceAnim, bool IsResetPlay, bool SetOrGet, struct UAnimSequenceBase*& GetBodyAnim, struct UAnimSequenceBase*& GetFaceAnim, bool& GetIsResetPlay); // Function BP_HallCharacter.BP_HallCharacter_C.SyncFaceAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
