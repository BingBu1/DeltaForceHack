/**
 * Name: DeltaForceClient-Win64-Shipping
 * Version : default
 */ 
#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif


namespace Dumper
{
	struct Function_DFMAudio_AnimNotify_FootStepAudio_ReceivedNotifyFunc_Param
	{
	public:

		struct USkeletalMeshComponent* MeshComp; // 0x00(0x08)
		struct UAnimSequenceBase* Animation; // 0x08(0x08)
		struct UPhysicalMaterial* BindPhysMat; // 0x10(0x08)
		struct UPhysicalMaterialAudioDataAsset* BindConfig; // 0x18(0x08)
		enum class EGPAudioFootSoundType AudioType; // 0x20(0x01)
	};

	struct Function_DFMAudio_AnimNotify_GPAudioEvent_ReceivedGPAudioEventNotifyFunc_Param
	{
	public:

		struct USkeletalMeshComponent* MeshComp; // 0x00(0x08)
		struct UGPAudioEventAsset* AudioEvent; // 0x08(0x08)
		bool bFollow; // 0x10(0x01)
		enum class EGPAudioBlueprintType AudioType; // 0x11(0x01)
		char pad_12[0x2]; // 0x12(0x02)
		struct FName NotifyName; // 0x14(0x08)
		bool bOnlyFPP; // 0x1c(0x01)
		bool bOnlyTPP; // 0x1d(0x01)
		char pad_1E[0x2]; // 0x1e(0x02)
		struct FGPAudioEventAdditionalFunction AddFunc; // 0x20(0x10)
		struct FString AttachName; // 0x30(0x10)
	};

	struct Function_DFMAudio_AnimNotify_GPAudioEvent2D_ReceivedGPAudioEventNotifyFunc_Param
	{
	public:

		struct USkeletalMeshComponent* MeshComp; // 0x00(0x08)
		struct UGPAudioEventAsset* AudioEvent; // 0x08(0x08)
	};

	struct Function_DFMAudio_AnimNotifyState_DFMAudioEvent_GetAvatarStartAudioEvent_Param
	{
	public:

		struct USkeletalMeshComponent* MeshComp; // 0x00(0x08)
		struct UGPAudioEventAsset* AudioEvent; // 0x08(0x08)
		struct UGPAudioEventAsset* ReturnValue; // 0x10(0x08)
	};

	struct Function_DFMAudio_DFMAudioMastering_SetPCNightMode_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_DFMAudio_DFMCharacterAudioComponent_SetSameCamp_AI_Param
	{
	public:

	};

	struct Function_DFMAudio_DFMControllerAudioComponent_UpdateClientPVSActorInfo_Param
	{
	public:

		uint64_t CharacterUin; // 0x00(0x08)
		struct FPVSAudioActorInfo PVSAudioActorInfo; // 0x08(0x1c)
	};

	struct Function_DFMAudio_DFMUIAudioPlayer_StopUIEventByName_Param
	{
	public:

		struct FName EvtName; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_DFMAudio_DFMusicPlayer_StopAllMusicForce_Param
	{
	public:

		int32_t TransitionMS; // 0x00(0x04)
	};

	struct Function_DFMAudio_DFMusicPlayWrapper_UpdateLoadingId_Param
	{
	public:

		uint64_t InLoadingId; // 0x00(0x08)
	};

	struct Function_DFMAudio_SlowBulletAudioComponent_OnBulletUsed_Param
	{
	public:

	};

	struct Function_DFMAudio_WeaponFuncComponentAudio_UpdateMagazineDropConfig_Param
	{
	public:

	};

	struct Function_DFMAudio_ThrowableWeaponFuncComponentAudio_RefreshCacheByAddDataAsset_Param
	{
	public:

		int32_t InPriority; // 0x00(0x04)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
