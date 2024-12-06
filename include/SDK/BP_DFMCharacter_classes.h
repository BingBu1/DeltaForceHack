
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// BlueprintGeneratedClass BP_DFMCharacter.BP_DFMCharacter_C
// Size: 0x2c64 (Inherited: 0x2b30)
class ABP_DFMCharacter_C : public ASOLCharacter {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b30(0x08)
	struct UGPHandIKComponent* GPHandIK; // 0x2b38(0x08)
	struct UDFMScoreTipsComponent* DFMScoreTips; // 0x2b40(0x08)
	struct UCharacterSequenceAssemblyComponent* CharacterSequenceAssembly; // 0x2b48(0x08)
	struct UGameAkComponent* CharaterAk; // 0x2b50(0x08)
	struct UDFMListenerComponent* DFMListener; // 0x2b58(0x08)
	struct UDFMCharacterAudioComponent* DFMCharacterAudio; // 0x2b60(0x08)
	float Timeline_0_Intensity_36D365FE4758FF4CA594BCBB41FD3A7F; // 0x2b68(0x04)
	enum class ETimelineDirection Timeline_0__Direction_36D365FE4758FF4CA594BCBB41FD3A7F; // 0x2b6c(0x01)
	char pad_2B6D[0x3]; // 0x2b6d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2b70(0x08)
	bool bCurrentIsGod; // 0x2b78(0x01)
	enum class EDamageType TestDamageType; // 0x2b79(0x01)
	char pad_2B7A[0x6]; // 0x2b7a(0x06)
	struct FText ArmorName; // 0x2b80(0x18)
	struct FString ArmorHPChangedTips; // 0x2b98(0x10)
	struct FString IconName; // 0x2ba8(0x10)
	char pad_2BB8[0x8]; // 0x2bb8(0x08)
	struct FTransform RescuepointR_Trans; // 0x2bc0(0x30)
	struct FTransform RescuepointL_Trans; // 0x2bf0(0x30)
	int32_t TriggeredFireVolumeCount; // 0x2c20(0x04)
	int32_t AllUIVisible; // 0x2c24(0x04)
	struct UParticleSystemComponent* TargetCircle; // 0x2c28(0x08)
	float TimeThrow; // 0x2c30(0x04)
	struct FLinearColor First_Stage_Color; // 0x2c34(0x10)
	struct FLinearColor Second_Stage_Color; // 0x2c44(0x10)
	struct FLinearColor Third_Stage_Color; // 0x2c54(0x10)

	float GetThreat_AirHit(); // Function BP_DFMCharacter.BP_DFMCharacter_C.GetThreat_AirHit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x24bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
