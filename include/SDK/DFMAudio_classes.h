
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMAudio.AnimNotify_CharacterVoice
// Size: 0x58 (Inherited: 0x40)
class UAnimNotify_CharacterVoice : public UAnimNotify {
public:

	struct FString CharacterVoiceTypeString; // 0x40(0x10)
	bool bIsLoopStopEvent; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.AnimNotify_FootStepAudio
// Size: 0x48 (Inherited: 0x48)
class UAnimNotify_FootStepAudio : public UAnimNotify_GPAudioBase {
public:


	void STATIC_ReceivedNotifyFunc(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct UPhysicalMaterial* BindPhysMat, struct UPhysicalMaterialAudioDataAsset* BindConfig, enum class EGPAudioFootSoundType AudioType); // Function DFMAudio.AnimNotify_FootStepAudio.ReceivedNotifyFunc // (Final|Native|Static|Public|BlueprintCallable|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.AnimNotify_FPPFootStepAudio
// Size: 0x48 (Inherited: 0x40)
class UAnimNotify_FPPFootStepAudio : public UAnimNotify {
public:

	bool bIsLeftFootstep; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.AnimNotify_GPAudioEvent
// Size: 0xa8 (Inherited: 0x48)
class UAnimNotify_GPAudioEvent : public UAnimNotify_GPAudioBase {
public:

	bool bTriggerSoundVisualization; // 0x48(0x01)
	enum class ESoundVisualizationType SoundVisualizationType; // 0x49(0x01)
	bool bLogicPlayAudio; // 0x4a(0x01)
	char pad_4B[0x5]; // 0x4b(0x05)
	struct TMap<struct FName, struct UGPAudioEventAsset*> AvatarEvents; // 0x50(0x50)
	bool bProcessNoOwnerNotify; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	void ReceivedGPAudioEventNotifyFunc(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEvent, bool bFollow, enum class EGPAudioBlueprintType AudioType, struct FName NotifyName, bool bOnlyFPP, bool bOnlyTPP, struct FGPAudioEventAdditionalFunction AddFunc, struct FString AttachName); // Function DFMAudio.AnimNotify_GPAudioEvent.ReceivedGPAudioEventNotifyFunc // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.AnimNotify_GPAudioEvent2D
// Size: 0x90 (Inherited: 0x40)
class UAnimNotify_GPAudioEvent2D : public UAnimNotify {
public:

	struct TMap<struct FName, struct UGPAudioEventAsset*> AvatarEvents; // 0x40(0x50)

	void ReceivedGPAudioEventNotifyFunc(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEvent); // Function DFMAudio.AnimNotify_GPAudioEvent2D.ReceivedGPAudioEventNotifyFunc // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.AnimNotifyState_DFMAudioEvent
// Size: 0xc8 (Inherited: 0x40)
class UAnimNotifyState_DFMAudioEvent : public UAnimNotifyState_AudioEventBase {
public:

	struct TMap<struct FName, struct FDFMAudioEventData> AvatarEvents; // 0x40(0x50)
	struct UGPAudioEventAsset* BeginAudioEvent; // 0x90(0x08)
	enum class EGPAudioBlueprintType BeginAudioType; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct UGPAudioEventAsset* EndAudioEvent; // 0xa0(0x08)
	enum class EGPAudioBlueprintType EndAudioType; // 0xa8(0x01)
	bool bOnlyFPP; // 0xa9(0x01)
	bool bOnlyTPP; // 0xaa(0x01)
	char pad_AB[0x5]; // 0xab(0x05)
	struct FString AttachSocketName; // 0xb0(0x10)
	bool bNeedFollow; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)

	struct UGPAudioEventAsset* GetAvatarStartAudioEvent(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEvent); // Function DFMAudio.AnimNotifyState_DFMAudioEvent.GetAvatarStartAudioEvent // (Final|Native|Public|BlueprintCallable|Const) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.AnimNotifyState_SlideAudio
// Size: 0x38 (Inherited: 0x38)
class UAnimNotifyState_SlideAudio : public UAnimNotifyState {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.BulletSoundActor
// Size: 0x400 (Inherited: 0x378)
class ABulletSoundActor : public AActor {
public:

	char pad_378[0x10]; // 0x378(0x10)
	struct UGPAudioEventAsset* InFlybyAudioEvent; // 0x388(0x08)
	struct UGPAudioEventAsset* OutFlybyAudioEvent; // 0x390(0x08)
	float PlayInEventSeconds; // 0x398(0x04)
	float PlayOutEventSeconds; // 0x39c(0x04)
	float KillSeconds; // 0x3a0(0x04)
	struct FVector SpeedPerSecond; // 0x3a4(0x0c)
	struct UTravelerGameAk* TravelerAk; // 0x3b0(0x08)
	char pad_3B8[0x48]; // 0x3b8(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.DFAudioTrackHelper
// Size: 0x40 (Inherited: 0x38)
class UDFAudioTrackHelper : public UEngineSubsystem {
public:

	struct UDataTable* UIAudioDataAsset; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.DFMAudioComponent
// Size: 0x100 (Inherited: 0x100)
class UDFMAudioComponent : public UActorComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.DFMAudioComponentBase
// Size: 0x100 (Inherited: 0x100)
class UDFMAudioComponentBase : public UActorComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.AudioFootStepAnimProxyDataTableManager
// Size: 0x48 (Inherited: 0x38)
class UAudioFootStepAnimProxyDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.DFMAudioGMStatic
// Size: 0x30 (Inherited: 0x30)
class UDFMAudioGMStatic : public UBlueprintFunctionLibrary {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.DFMAudioLevelSettingDataTableManager
// Size: 0x40 (Inherited: 0x38)
class UDFMAudioLevelSettingDataTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x8]; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.DFMSceneAudioLevelSettingManager
// Size: 0x40 (Inherited: 0x38)
class UDFMSceneAudioLevelSettingManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x8]; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.DFMAudioMastering
// Size: 0x30 (Inherited: 0x30)
class UDFMAudioMastering : public UBlueprintFunctionLibrary {
public:


	bool STATIC_SetPCNightMode(); // Function DFMAudio.DFMAudioMastering.SetPCNightMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.DFMBuffPlayUIAudio
// Size: 0xf0 (Inherited: 0xe8)
class UDFMBuffPlayUIAudio : public UGPEffectCueHandler {
public:

	struct FName EnterAudioName; // 0xe8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.DFMCharacterAudioComponent
// Size: 0x260 (Inherited: 0x100)
class UDFMCharacterAudioComponent : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)
	/*struct TSoftObjectPtr<UObject>*/char PlayTypeRTPC[0x28]; // 0x108(0x28)
	/*struct TSoftObjectPtr<UObject>*/char CameraModeRTPC[0x28]; // 0x130(0x28)
	/*struct TSoftObjectPtr<UObject>*/char ADSRTPC[0x28]; // 0x158(0x28)
	struct UGPAudioEventAsset* BornAudioEvent; // 0x180(0x08)
	float FoliageOverlapCD; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct TArray<struct UGPAudioEventAsset*> PreLoadEvents; // 0x190(0x10)
	char pad_1A0[0x50]; // 0x1a0(0x50)
	struct TArray<struct UGPAudioEventAsset*> FootstepAudioAssetCache; // 0x1f0(0x10)
	char pad_200[0x10]; // 0x200(0x10)
	/*struct TScriptInterface<IGPWeaponInterface>*/char LastFireWeapon[0x10]; // 0x210(0x10)
	char pad_220[0x40]; // 0x220(0x40)

	void SetSameCamp_AI(); // Function DFMAudio.DFMCharacterAudioComponent.SetSameCamp_AI // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.DFMControllerAudioComponent
// Size: 0x2d8 (Inherited: 0x200)
class UDFMControllerAudioComponent : public UGPControllerAudioComponent {
public:

	char pad_200[0x38]; // 0x200(0x38)
	struct TMap<struct AIntCharacter*, struct FPVSAudioActorInfo> ServerPVSActorInfo; // 0x238(0x50)
	struct TMap<uint64_t, struct FPVSAudioActorInfo> ClientPVSActorInfo; // 0x288(0x50)

	void UpdateClientPVSActorInfo(uint64_t CharacterUin, struct FPVSAudioActorInfo PVSAudioActorInfo); // Function DFMAudio.DFMControllerAudioComponent.UpdateClientPVSActorInfo // (Net|Native|Event|Protected|NetClient) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.DFMFSM_SpecialStateAudioControlAction
// Size: 0x118 (Inherited: 0x110)
class UDFMFSM_SpecialStateAudioControlAction : public UDFMFSMAction {
public:

	bool isDeath; // 0x110(0x01)
	bool IsImpendingDeath; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.DFMListenerComponent
// Size: 0x1d0 (Inherited: 0x100)
class UDFMListenerComponent : public UActorComponent {
public:

	struct TArray<struct FWeaponFireAudioEventRecord> LeftNearAudioWeapon; // 0x100(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> LeftMedAudioWeapon; // 0x110(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> LeftFarAudioWeapon; // 0x120(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> LeftSuperFarAudioWeapon; // 0x130(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> RightNearAudioWeapon; // 0x140(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> RightMedAudioWeapon; // 0x150(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> RightFarAudioWeapon; // 0x160(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> RightSuperFarAudioWeapon; // 0x170(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> MiddleNearAudioWeapon; // 0x180(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> MiddleMedAudioWeapon; // 0x190(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> MiddleFarAudioWeapon; // 0x1a0(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> MiddleSuperFarAudioWeapon; // 0x1b0(0x10)
	struct ACHARACTER* OwnerCharacter; // 0x1c0(0x08)
	struct FTimerHandle ClearDirtyDataTimerHandle; // 0x1c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.DFMUIAudioPlayer
// Size: 0x230 (Inherited: 0x38)
class UDFMUIAudioPlayer : public UEngineSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnUIAudioPlayEnd[0x10]; // 0x38(0x10)
	/*struct FDelegate*/char OnGPAudioFinished[0x10]; // 0x48(0x10)
	char pad_58[0xa0]; // 0x58(0xa0)
	struct TMap<struct FName, struct FSeekAudioContext> SeekAudioMap; // 0xf8(0x50)
	bool bIsPreloading; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	uint64_t PreloadHandle; // 0x150(0x08)
	/*struct FMulticastInlineDelegate*/char OnUIAudioPreloadFinished[0x10]; // 0x158(0x10)
	struct TMap<struct FString, struct UGPAudioEventAsset*> AudioAssetCache; // 0x168(0x50)
	struct UDataTable* UIAudioDataAsset; // 0x1b8(0x08)
	struct TMap<struct FString, uint64_t> AudioLoadingMap; // 0x1c0(0x50)
	char pad_210[0x20]; // 0x210(0x20)

	bool StopUIEventByName(struct FName& EvtName); // Function DFMAudio.DFMUIAudioPlayer.StopUIEventByName // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.DFMusicPlayer
// Size: 0x130 (Inherited: 0x38)
class UDFMusicPlayer : public UGameInstanceSubsystem {
public:

	struct UDataTable* MusicAudioTable; // 0x38(0x08)
	struct TMap<struct FSoftObjectPath, struct UDFMusicPlayWrapper*> LoadingMusicAsset; // 0x40(0x50)
	struct TMap<struct FSoftObjectPath, struct FGPAudioFuturePlayingID> DependenciesMusicPlayingMap; // 0x90(0x50)
	struct TMap<struct FSoftObjectPath, struct FGPAudioFuturePlayingID> PlayingMusic; // 0xe0(0x50)

	void StopAllMusicForce(int32_t TransitionMS); // Function DFMAudio.DFMusicPlayer.StopAllMusicForce // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.DFMusicPlayWrapper
// Size: 0x88 (Inherited: 0x30)
class UDFMusicPlayWrapper : public UObject {
public:

	char pad_30[0x58]; // 0x30(0x58)

	void UpdateLoadingId(uint64_t InLoadingId); // Function DFMAudio.DFMusicPlayWrapper.UpdateLoadingId // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.SlowBulletAudioComponent
// Size: 0x130 (Inherited: 0x100)
class USlowBulletAudioComponent : public UActorComponent {
public:

	struct UGPAudioEventAsset* InFlybyAudioEvent; // 0x100(0x08)
	struct ADFMCharacter* LocalPlayerCharacter; // 0x108(0x08)
	struct AWeaponBulletRPGSimulate* BulletOwner; // 0x110(0x08)
	char pad_118[0x10]; // 0x118(0x10)
	struct UTravelerGameAk* TravelerAk; // 0x128(0x08)

	void OnBulletUsed(); // Function DFMAudio.SlowBulletAudioComponent.OnBulletUsed // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.UIAudioDataAsset
// Size: 0x48 (Inherited: 0x38)
class UUIAudioDataAsset : public UDataAsset {
public:

	struct TArray<struct FUIAudioEvent> UIAudioEvents; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.UIAudioResourceManager
// Size: 0x40 (Inherited: 0x38)
class UUIAudioResourceManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x8]; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.MusicAudioTableManager
// Size: 0x40 (Inherited: 0x38)
class UMusicAudioTableManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x8]; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.WeaponAudioDataAsset
// Size: 0x2a0 (Inherited: 0x38)
class UWeaponAudioDataAsset : public UDataAsset {
public:

	struct FGPAudioMIDIEvent MIDIFireEvent; // 0x38(0x88)
	struct FWeaponAudioConfig WeaponAudio; // 0xc0(0x10)
	struct UGPAudioEventAsset* CloseAudioEvent; // 0xd0(0x08)
	struct UGPAudioEventAsset* MedAudioEvent; // 0xd8(0x08)
	struct UGPAudioEventAsset* FarAudioEvent; // 0xe0(0x08)
	struct UGPAudioEventAsset* DistAudioEvent; // 0xe8(0x08)
	struct TArray<struct FWeaponLoopEventConfig> LoopAudioEvent; // 0xf0(0x10)
	struct TMap<struct UPhysicalMaterial*, struct FGPAudioLoopEvent> LoopBulletDropMap; // 0x100(0x50)
	struct UGPAudioEventAsset* DefaultBulletDropEvent; // 0x150(0x08)
	struct TMap<struct UPhysicalMaterial*, struct UGPAudioEventAsset*> OneShotBulletDropMap; // 0x158(0x50)
	struct FVector ShellDropDeltaPos; // 0x1a8(0x0c)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct UGPAudioEventAsset* BulletWooshEvent; // 0x1b8(0x08)
	struct UGPAudioEventAsset* DryfireAudioEvent; // 0x1c0(0x08)
	struct UGPAudioEventAsset* LastFireOfClipAudioEvent; // 0x1c8(0x08)
	bool bForceAISingleFire; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	float fAILoopTailTime; // 0x1d4(0x04)
	bool bUseAIStableFire; // 0x1d8(0x01)
	char pad_1D9[0x3]; // 0x1d9(0x03)
	float fAIStableFireTailTime; // 0x1dc(0x04)
	float CustomAIFireInterval; // 0x1e0(0x04)
	int32_t CustomContinuousFireNum; // 0x1e4(0x04)
	struct UGPAudioEventAsset* UnEquipEvent; // 0x1e8(0x08)
	float UnEquipDelay; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct UGPAudioEventAsset* EquipEvent; // 0x1f8(0x08)
	float EquipDelay; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
	struct UGPAudioEventAsset* SwitchFireModeEvent; // 0x208(0x08)
	float SwitchFireModeDelay; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	struct UGPAudioEventAsset* SwitchScopeEvent; // 0x218(0x08)
	float SwitchScopeDelay; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	struct UGPAudioEventAsset* ZoomInEvent; // 0x228(0x08)
	float ZoomInDelay; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct UGPAudioEventAsset* ZoomOutEvent; // 0x238(0x08)
	float ZoomOutDelay; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct TMap<struct FName, struct UGPAudioEventAsset*> AnimationAudios; // 0x248(0x50)
	struct UWeaponTypeAudioDataAsset* BulletAudioDataAsset; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.ShellDropAudioDataAsset
// Size: 0xf8 (Inherited: 0x38)
class UShellDropAudioDataAsset : public UDataAsset {
public:

	struct TMap<enum class EChracterPoseType, float> DropShellAudioDelay; // 0x38(0x50)
	float DropAudioDisSqr; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UGPAudioEventAsset* DefaultBulletDropEvent; // 0x90(0x08)
	struct TMap<struct UPhysicalMaterial*, struct UGPAudioEventAsset*> OneShotBulletDropMap; // 0x98(0x50)
	struct FVector ShellDropDeltaPos; // 0xe8(0x0c)
	char pad_F4[0x4]; // 0xf4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.WeaponMainAudioManager
// Size: 0x48 (Inherited: 0x38)
class UWeaponMainAudioManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.WeaponMeleeMainAudioManager
// Size: 0x48 (Inherited: 0x38)
class UWeaponMeleeMainAudioManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.WeaponCompositeAudioManager
// Size: 0x48 (Inherited: 0x38)
class UWeaponCompositeAudioManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.WeaponGameModeAudioEventManager
// Size: 0x48 (Inherited: 0x38)
class UWeaponGameModeAudioEventManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.WeaponControlAudioManager
// Size: 0x48 (Inherited: 0x38)
class UWeaponControlAudioManager : public UDataTableSystemManagerBase {
public:

	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.GPAudioPriorityMethod_Fire
// Size: 0x120 (Inherited: 0xa8)
class UGPAudioPriorityMethod_Fire : public UGPAudioPriorityMethod {
public:

	int32_t LimitTypes; // 0xa8(0x04)
	enum class EAudioArea LimitArea; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float CircleRadius; // 0xb0(0x04)
	int32_t MaxAudioCnt; // 0xb4(0x04)
	float MaxDPS; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char TargetShootDirCurve[0x28]; // 0xc0(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char ListenerViewDirCurve[0x28]; // 0xe8(0x28)
	struct UCurveFloat* TargetShootDirCurveCache; // 0x110(0x08)
	struct UCurveFloat* ListenerViewDirCurveCache; // 0x118(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.WeaponTypeAudioDataAsset
// Size: 0x140 (Inherited: 0x38)
class UWeaponTypeAudioDataAsset : public UDataAsset {
public:

	float BulletCrackMaxTriggerDistance; // 0x38(0x04)
	float BulletCrackMuteDistance; // 0x3c(0x04)
	float BulletCrackNearDistance; // 0x40(0x04)
	float BulletCrackMedDistance; // 0x44(0x04)
	float CrackOutsideCircleRadius; // 0x48(0x04)
	float CrackInsideCircleRadius; // 0x4c(0x04)
	struct UGPAudioEventAsset* BulletCrackNear; // 0x50(0x08)
	struct UGPAudioEventAsset* BulletCrackMed; // 0x58(0x08)
	struct UGPAudioEventAsset* BulletCrackFar; // 0x60(0x08)
	float BulletFlyByMaxTriggerDistance; // 0x68(0x04)
	float BulletFlyByMuteDistance; // 0x6c(0x04)
	float BulletFlyByNearDistance; // 0x70(0x04)
	float BulletFlyByMedDistance; // 0x74(0x04)
	float BulletFlyByNearRadius; // 0x78(0x04)
	float BulletFlyByMedRadius; // 0x7c(0x04)
	float BulletFlyByFarRadius; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct UGPAudioEventAsset* BulletFlyByFarFarIn; // 0x88(0x08)
	struct UGPAudioEventAsset* BulletFlyByMedFarIn; // 0x90(0x08)
	struct UGPAudioEventAsset* BulletFlyByNearFarIn; // 0x98(0x08)
	struct UGPAudioEventAsset* BulletFlyByFarMedIn; // 0xa0(0x08)
	struct UGPAudioEventAsset* BulletFlyByMedMedIn; // 0xa8(0x08)
	struct UGPAudioEventAsset* BulletFlyByNearMedIn; // 0xb0(0x08)
	struct UGPAudioEventAsset* BulletFlyByFarNearIn; // 0xb8(0x08)
	struct UGPAudioEventAsset* BulletFlyByMedNearIn; // 0xc0(0x08)
	struct UGPAudioEventAsset* BulletFlyByNearNearIn; // 0xc8(0x08)
	struct UGPAudioEventAsset* BulletFlyByFarFarOut; // 0xd0(0x08)
	struct UGPAudioEventAsset* BulletFlyByMedFarOut; // 0xd8(0x08)
	struct UGPAudioEventAsset* BulletFlyByNearFarOut; // 0xe0(0x08)
	struct UGPAudioEventAsset* BulletFlyByFarMedOut; // 0xe8(0x08)
	struct UGPAudioEventAsset* BulletFlyByMedMedOut; // 0xf0(0x08)
	struct UGPAudioEventAsset* BulletFlyByNearMedOut; // 0xf8(0x08)
	struct UGPAudioEventAsset* BulletFlyByFarNearOut; // 0x100(0x08)
	struct UGPAudioEventAsset* BulletFlyByMedNearOut; // 0x108(0x08)
	struct UGPAudioEventAsset* BulletFlyByNearNearOut; // 0x110(0x08)
	float BulletSpeedPerSecond; // 0x118(0x04)
	float SlowBulletFlyByRadius; // 0x11c(0x04)
	struct UGPAudioEventAsset* SlowBulletFlyByIn; // 0x120(0x08)
	struct UGPAudioEventAsset* SlowBulletFlyByOut; // 0x128(0x08)
	struct TArray<enum class EDFMGamePlayMode> AllowCrackGameModeArray; // 0x130(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.WeaponFuncComponentAudio
// Size: 0x14d0 (Inherited: 0x158)
class UWeaponFuncComponentAudio : public UGPWeaponViewComponentBase {
public:

	char pad_158[0x10]; // 0x158(0x10)
	float BulletFlyDistance; // 0x168(0x04)
	char pad_16C[0x14]; // 0x16c(0x14)
	struct FWeaponControlAudioRow WeaponControlAudioData; // 0x180(0x3e0)
	char pad_560[0x8]; // 0x560(0x08)
	struct FWeaponMainAudioDataRow AudioData; // 0x568(0x878)
	char pad_DE0[0xb0]; // 0xde0(0xb0)
	/*struct TScriptInterface<IGPWeaponInterface>*/char LastFireWeapon[0x10]; // 0xe90(0x10)
	char pad_EA0[0x20]; // 0xea0(0x20)
	struct FTimerHandle WeaponFireTimerHandle; // 0xec0(0x08)
	struct FTimerHandle Start3PWeaponLoopFireTimerHandle; // 0xec8(0x08)
	struct FTimerHandle End3PWeaponLoopFireTimerHandle; // 0xed0(0x08)
	struct FTimerHandle Check3PWeaponLoopFireTimerHandle; // 0xed8(0x08)
	struct FTimerHandle LoopFireCheckTimerHandle; // 0xee0(0x08)
	struct FTimerHandle LoopFireCountTimerHandle; // 0xee8(0x08)
	struct FGPAudioMIDIEventAsset MIDIFireEvent; // 0xef0(0x38)
	struct UGPAudioEventAsset* CandidateFireAudio; // 0xf28(0x08)
	struct FGPAudioMIDIEventAsset FinalMIDIFireEvent3P; // 0xf30(0x38)
	char pad_F68[0x8]; // 0xf68(0x08)
	struct TArray<struct UGPAudioEventAsset*> Fire3PLoopWaitToEndArray; // 0xf70(0x10)
	struct UGPAudioEventAsset* CommonFire3PLoopEndEvent; // 0xf80(0x08)
	struct TArray<struct FWeaponLoopEventConfigAsset> LoopAudioEvent; // 0xf88(0x10)
	struct TArray<struct FWeaponLoopEventConfigAsset> PostedLoopEvents; // 0xf98(0x10)
	struct TMap<struct FSoftObjectPath, struct FWeaponAudioPriority> LoadedAudioEventData; // 0xfa8(0x50)
	struct TArray<struct UObject*> WeaponControlAudioCache; // 0xff8(0x10)
	struct TMap<enum class EGPWeaponInnerEvent, struct FWeaponLoopEventConfigAsset> WeaponLoopEventConfig; // 0x1008(0x50)
	struct FWeaponAudioConfigAsset WeaponAudio; // 0x1058(0x10)
	struct TWeakObjectPtr<struct UDFMCharacterAudioComponent> CharacterAudioComponent; // 0x1068(0x08)
	struct FGPAudioCompositeParam CompositeParam; // 0x1070(0x58)
	struct TWeakObjectPtr<struct UGPAudioAnimationNotifyPlayer> AnimationNotifyPlayer; // 0x10c8(0x08)
	struct UWeaponTypeAudioDataAsset* BulletAudioData; // 0x10d0(0x08)
	struct FGPAudioMIDIEventAsset CloseMIDIFireEvent; // 0x10d8(0x38)
	struct FGPAudioMIDIEventAsset MedMIDIFireEvent; // 0x1110(0x38)
	struct FGPAudioMIDIEventAsset FarMIDIFireEvent; // 0x1148(0x38)
	struct FGPAudioMIDIEventAsset DistMIDIFireEvent; // 0x1180(0x38)
	char pad_11B8[0x8]; // 0x11b8(0x08)
	struct TMap<struct FSoftObjectPath, struct FWeaponTypeAudioPriority> LoadedBulletAudioData; // 0x11c0(0x50)
	struct UShellDropAudioDataAsset* ShellBounceAudioData; // 0x1210(0x08)
	struct TMap<struct FName, struct UGPAudioEventAsset*> AnimationAudios; // 0x1218(0x50)
	struct TMap<struct FSoftObjectPath, struct FShellDropAudioPriority> LoadedShellBounceAudioData; // 0x1268(0x50)
	struct FTimerHandle AIStableFireEndTimerHandle; // 0x12b8(0x08)
	struct FTimerHandle AIStableFireTimerHandle; // 0x12c0(0x08)
	struct FTimerHandle ThirdPlayerStableFireTimerHandle; // 0x12c8(0x08)
	struct FTimerHandle CheckLoopAudioNotStopTimerHandle; // 0x12d0(0x08)
	struct FTimerHandle OutFlybyAudioTimerHandle; // 0x12d8(0x08)
	float fCheckLoopAudioNotStopTickTime; // 0x12e0(0x04)
	char pad_12E4[0x18]; // 0x12e4(0x18)
	bool bEnableMagazineDropAudio; // 0x12fc(0x01)
	char pad_12FD[0x3]; // 0x12fd(0x03)
	struct UGPAudioEventAsset* DefaultMagazineDropEvent; // 0x1300(0x08)
	struct TMap<struct UPhysicalMaterial*, struct UGPAudioEventAsset*> MagazineDropMap; // 0x1308(0x50)
	struct FVector MagazineDropDeltaPos; // 0x1358(0x0c)
	char pad_1364[0x4]; // 0x1364(0x04)
	struct TMap<enum class EChracterPoseType, float> DropMagazineAudioDelay; // 0x1368(0x50)
	float MagazineDropAudioDisSqr; // 0x13b8(0x04)
	char pad_13BC[0xc]; // 0x13bc(0x0c)
	struct TMap<struct AGPCharacter*, struct FCharacterAudioComponents> CharacterAudioComponents; // 0x13c8(0x50)
	bool IsSoundSuppressorTriggerBulletCrack; // 0x1418(0x01)
	char pad_1419[0x37]; // 0x1419(0x37)
	struct TArray<struct UObject*> Cached3PAudioNear; // 0x1450(0x10)
	struct TArray<struct UObject*> Cached3PAudioMed; // 0x1460(0x10)
	struct TArray<struct UObject*> Cached3PAudioFar; // 0x1470(0x10)
	struct TArray<struct UObject*> Cached3PAudioDist; // 0x1480(0x10)
	struct FWeapon1PFireCache FireAudio1pCache; // 0x1490(0x20)
	char pad_14B0[0x8]; // 0x14b0(0x08)
	float FireIcon3PCDTime; // 0x14b8(0x04)
	char pad_14BC[0x14]; // 0x14bc(0x14)

	void UpdateMagazineDropConfig(); // Function DFMAudio.WeaponFuncComponentAudio.UpdateMagazineDropConfig // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.FixedWeaponFuncComponentAudio
// Size: 0x14f0 (Inherited: 0x14d0)
class UFixedWeaponFuncComponentAudio : public UWeaponFuncComponentAudio {
public:

	char pad_14D0[0x10]; // 0x14d0(0x10)
	float InitSpeed; // 0x14e0(0x04)
	char pad_14E4[0xc]; // 0x14e4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMAudio.ThrowableWeaponFuncComponentAudio
// Size: 0x1500 (Inherited: 0x14d0)
class UThrowableWeaponFuncComponentAudio : public UWeaponFuncComponentAudio {
public:

	struct UGPAudioEventAsset* PrefireStartEvent; // 0x14d0(0x08)
	struct UGPAudioEventAsset* PrefireEndEvent; // 0x14d8(0x08)
	struct UGPAudioEventAsset* HoldIdleStartEvent; // 0x14e0(0x08)
	struct UGPAudioEventAsset* HoldIdleEndEvent; // 0x14e8(0x08)
	bool bIsPlayIdleAudio; // 0x14f0(0x01)
	bool bIsPlayPrefireAudio; // 0x14f1(0x01)
	char pad_14F2[0xe]; // 0x14f2(0x0e)

	void RefreshCacheByAddDataAsset(int32_t InPriority); // Function DFMAudio.ThrowableWeaponFuncComponentAudio.RefreshCacheByAddDataAsset // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
