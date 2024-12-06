
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMIrisSeamless.DFMFSM_IrisEnterGetOffHelicopterAction
// Size: 0x1e0 (Inherited: 0x110)
class UDFMFSM_IrisEnterGetOffHelicopterAction : public UDFMFSMAction {
public:

	struct UAnimSequence* RopeDownFPP; // 0x110(0x08)
	float RopeDownSpeedRate; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct UAnimSequence* RopeGetLocomotion; // 0x120(0x08)
	struct UAnimSequence* RopeGetFPP; // 0x128(0x08)
	struct UAnimSequence* RopeGetTPP; // 0x130(0x08)
	float StartGetOnRopeSpeedRate; // 0x138(0x04)
	float GetDownRopeSpeedRate; // 0x13c(0x04)
	struct UAnimSequence* RopeLoopFPP; // 0x140(0x08)
	struct UAnimSequence* RopeLoopTPP; // 0x148(0x08)
	struct UAnimSequence* RopeGetOffFPP; // 0x150(0x08)
	struct UAnimSequence* RopeGetOffTPP; // 0x158(0x08)
	struct FVector GetDownLoopOffset; // 0x160(0x0c)
	bool bUseRootmotionAnimation; // 0x16c(0x01)
	bool bUseRootmotionFullProcess; // 0x16d(0x01)
	char pad_16E[0x2]; // 0x16e(0x02)
	struct FTransform GetDownLoopOffsetForRootmotionAnimation; // 0x170(0x30)
	bool DelayOneFromeToRopeDown; // 0x1a0(0x01)
	char pad_1A1[0x3f]; // 0x1a1(0x3f)

	void StartGetOnRope(); // Function DFMIrisSeamless.DFMFSM_IrisEnterGetOffHelicopterAction.StartGetOnRope // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMFSM_IrisEnterGetOnHelicopterAction
// Size: 0x118 (Inherited: 0x110)
class UDFMFSM_IrisEnterGetOnHelicopterAction : public UDFMFSMAction {
public:

	bool TestBool; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)

	void OnStateUpdate(float DeltaSeconds); // Function DFMIrisSeamless.DFMFSM_IrisEnterGetOnHelicopterAction.OnStateUpdate // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMFSM_IrisEnterInHelicopterAction
// Size: 0x138 (Inherited: 0x110)
class UDFMFSM_IrisEnterInHelicopterAction : public UDFMFSMAction {
public:

	float LevelCompletePercentage; // 0x110(0x04)
	bool bEnableCameraLimit; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct FVector2D InHelicopterPitchLimit; // 0x118(0x08)
	struct FVector2D InHelicopterYawLimit; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)
	struct UDFMIrisEnterSubsystem* IrisEnterSubsystem; // 0x130(0x08)

	void TransportHelicopterToFlyPoint(struct AActor* Helicopter, struct FVector Location); // Function DFMIrisSeamless.DFMFSM_IrisEnterInHelicopterAction.TransportHelicopterToFlyPoint // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper
// Size: 0x30 (Inherited: 0x30)
class UDFMIrisEnterSeamlessGameplayHelper : public UBlueprintFunctionLibrary {
public:


	bool STATIC_SwitchClientPlayer(struct UObject* WorldContextObject); // Function DFMIrisSeamless.DFMIrisEnterSeamlessGameplayHelper.SwitchClientPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.IntroEventStartPoint
// Size: 0x378 (Inherited: 0x378)
class AIntroEventStartPoint : public AActor {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMIrisEnterSubsystem
// Size: 0x5a8 (Inherited: 0xc0)
class UDFMIrisEnterSubsystem : public UGPSeamlessEnterSubsystem {
public:

	char pad_C0[0x90]; // 0xc0(0x90)
	struct UStartSpotAllocator* StartSpotAllocator; // 0x150(0x08)
	struct UDFMIrisEnterStageBase* LastEnterStage; // 0x158(0x08)
	struct UDFMIrisEnterStageBase* CurrentEnterStage; // 0x160(0x08)
	struct AGPCharacter* TargetCharacter; // 0x168(0x08)
	struct ASafeHouseHelicopter* TargetHelicopter; // 0x170(0x08)
	struct UDFMIrisEnterComponent* IrisEnterComponent; // 0x178(0x08)
	struct AEnterMovePath* DefaultMovePath; // 0x180(0x08)
	struct AEnterMovePath* StartPointMovePath; // 0x188(0x08)
	struct AIntroEventStartPoint* IntroEventStartPoint; // 0x190(0x08)
	struct AActor* EntryMovieRoot; // 0x198(0x08)
	struct APlayerStart* SafeHousePS; // 0x1a0(0x08)
	bool SkipSeamlessProcess; // 0x1a8(0x01)
	bool NeedIntroEvent; // 0x1a9(0x01)
	bool bNeedMandelBrickEvent; // 0x1aa(0x01)
	bool bDSReady; // 0x1ab(0x01)
	bool bClientReady; // 0x1ac(0x01)
	bool bHUDViewReady; // 0x1ad(0x01)
	bool bEverythingReadyNotify; // 0x1ae(0x01)
	bool EnableMoveFollowPath; // 0x1af(0x01)
	enum class ESeamlessDSConnectState DSConnectState; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct AGPPlayerController* NewGPPC; // 0x1b8(0x08)
	bool bWaitingIntroVideo; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct AGPSequenceActor* CS_RaiseWatch; // 0x1c8(0x08)
	struct AGPSequenceActor* CS_LoopExpandWatch; // 0x1d0(0x08)
	struct AGPSequenceActor* CS_LowerWatchAndAbseil; // 0x1d8(0x08)
	struct AGPSequenceActor* CS_LowerWatchAndAbseilForGuide; // 0x1e0(0x08)
	struct AGPSequenceActor* CS_IntroEvent; // 0x1e8(0x08)
	struct AGPSequenceActor* CS_Ornament; // 0x1f0(0x08)
	enum class EIrisEnterStageType LastEnterStageType; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	/*struct FMulticastInlineDelegate*/char OnSeamlessGetOnHelicopter[0x10]; // 0x200(0x10)
	/*struct FMulticastInlineDelegate*/char OnTransportStreamingComplete[0x10]; // 0x210(0x10)
	/*struct FMulticastInlineDelegate*/char OnIrisEnterStartConnectDS[0x10]; // 0x220(0x10)
	/*struct FMulticastInlineDelegate*/char OnIrisEnterPostConnectDS[0x10]; // 0x230(0x10)
	struct UClass* GameModeClass; // 0x240(0x08)
	char pad_248[0x60]; // 0x248(0x60)
	struct AEnterMovePath* RealMovePath; // 0x2a8(0x08)
	bool bEnableHelicopterTiding; // 0x2b0(0x01)
	char pad_2B1[0xf]; // 0x2b1(0x0f)
	/*struct FMulticastInlineDelegate*/char OnGameplayConfigLoadCompleteEvent[0x10]; // 0x2c0(0x10)
	/*struct FMulticastInlineDelegate*/char OnSeamlessCoverShow[0x10]; // 0x2d0(0x10)
	int32_t SOLIntroEventID; // 0x2e0(0x04)
	int32_t SOLMandelBrickEventID; // 0x2e4(0x04)
	struct TArray<int32_t> AllSOLEventIDsThisGame; // 0x2e8(0x10)
	struct ATeamStart* CurrentTeamStart; // 0x2f8(0x08)
	struct APlayerStart* CurrentPlayerStart; // 0x300(0x08)
	struct ASOLEventIndicator* CurrentSOLEventIndicator; // 0x308(0x08)
	int32_t CurrentPlayedMatchNum; // 0x310(0x04)
	bool bGameplayConfigLoadComplete; // 0x314(0x01)
	bool IsTutorial; // 0x315(0x01)
	bool IsAbseilBlack; // 0x316(0x01)
	char pad_317[0x11]; // 0x317(0x11)
	int32_t CurrentMapType; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct UUIClipMapTexture* MapBaseAsset; // 0x330(0x08)
	struct UTexture2D* EdgeMaskMapTexture; // 0x338(0x08)
	struct TArray<struct UObject*> CacheIcons; // 0x340(0x10)
	struct FSeamlessEntryProgress SeamlessEntryProgress; // 0x350(0x14)
	char pad_364[0x1c]; // 0x364(0x1c)
	struct FDFMMapSignMapExtraSync TeamMateMapSignInfos; // 0x380(0x50)
	struct TMap<uint64_t, struct AGPPlayerState*> TeamMateFakePlayerStates; // 0x3d0(0x50)
	struct FDFMMapSignInfo LocalMapSignInfo; // 0x420(0x38)
	struct FMandelBrickSeamlessMapStruct MandelBrickSeamlessMapStruct; // 0x458(0x70)
	int32_t SelectedGeneratorId; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct TArray<struct FSOLQuest> SOLQuestArray; // 0x4d0(0x10)
	struct TArray<struct FSOLQuest> SOLActivityQuestArray; // 0x4e0(0x10)
	struct TArray<struct FName> SOLItemIDArray; // 0x4f0(0x10)
	char pad_500[0x10]; // 0x500(0x10)
	struct FName DefaultAvatarID; // 0x510(0x08)
	struct AHallCharacterBase* SelfHallCharacter; // 0x518(0x08)
	struct TArray<struct AHallCharacterBase*> TeammateHallCharacters; // 0x520(0x10)
	struct FName SelfHallCharacterSuitID; // 0x530(0x08)
	struct TArray<struct FName> TeammateHallCharacterSuitIDs; // 0x538(0x10)
	struct TMap<int64_t, struct FSeamlessEntryCharacterAppearanceData> CharacterAppearanceData; // 0x548(0x50)
	char pad_598[0x10]; // 0x598(0x10)

	void WarmUpLoopSequence(); // Function DFMIrisSeamless.DFMIrisEnterSubsystem.WarmUpLoopSequence // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMIrisEnterUtils
// Size: 0x30 (Inherited: 0x30)
class UDFMIrisEnterUtils : public UBlueprintFunctionLibrary {
public:


	void STATIC_ReloadMap(struct UObject* WorldContext); // Function DFMIrisSeamless.DFMIrisEnterUtils.ReloadMap // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener
// Size: 0xb8 (Inherited: 0x38)
class UQA_ClientSeamlessTravelStatusListener : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char OnClientSeamlessTravelStatusChangeDelegate[0x10]; // 0x38(0x10)
	struct AGPQuestActionContext* QAContext; // 0x48(0x08)
	char pad_50[0x68]; // 0x50(0x68)

	void UnListenClientSeamlessTravelStatus(); // Function DFMIrisSeamless.QA_ClientSeamlessTravelStatusListener.UnListenClientSeamlessTravelStatus // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.SafeHouseHelicopter
// Size: 0x4f8 (Inherited: 0x3d8)
class ASafeHouseHelicopter : public APawn {
public:

	char pad_3D8[0x8]; // 0x3d8(0x08)
	/*struct TSoftObjectPtr<UAnimSequence>*/char HelicopterIdleAnimPath[0x28]; // 0x3e0(0x28)
	/*struct TSoftObjectPtr<USkeletalMesh>*/char HelicopterMeshPath[0x28]; // 0x408(0x28)
	struct UAnimSequence* LoadedHelicopterIdleAnim; // 0x430(0x08)
	struct TArray<struct UAnimSequence*> LoadedAnims; // 0x438(0x10)
	bool bStopAnimation; // 0x448(0x01)
	char pad_449[0xf]; // 0x449(0x0f)
	struct USkeletalMesh* LoadedHelicopterMesh; // 0x458(0x08)
	struct USkeletalMesh* LoadedRopeMesh; // 0x460(0x08)
	bool bCurrentLeftDoorisOpen; // 0x468(0x01)
	bool bCurrentRightDoorisOpen; // 0x469(0x01)
	char pad_46A[0x2]; // 0x46a(0x02)
	struct FVector RightDoorCloseRelativeLocation; // 0x46c(0x0c)
	struct FVector LeftDoorCloseRelativeLocation; // 0x478(0x0c)
	struct FVector RightDoorOpenRelativeLocation; // 0x484(0x0c)
	struct FVector LeftDoorOpenRelativeLocation; // 0x490(0x0c)
	struct FVector VFXPlayOffsetToRoot; // 0x49c(0x0c)
	struct FVector VFXPlayOffsetToRoot2; // 0x4a8(0x0c)
	bool bEnableTickToSyncVFXLocation; // 0x4b4(0x01)
	char pad_4B5[0x3]; // 0x4b5(0x03)
	struct USceneComponent* CloundVFX1; // 0x4b8(0x08)
	struct USceneComponent* CloundVFX2; // 0x4c0(0x08)
	struct UCurveFloat* TidingCurve; // 0x4c8(0x08)
	float InitialPitch; // 0x4d0(0x04)
	float InitialRoll; // 0x4d4(0x04)
	float TidingPeriod; // 0x4d8(0x04)
	float MaxPitch; // 0x4dc(0x04)
	float PitchSpeedFactor; // 0x4e0(0x04)
	float PitchAccelerationFactor; // 0x4e4(0x04)
	float RollYawFactor; // 0x4e8(0x04)
	float RotatorInterpSpeed; // 0x4ec(0x04)
	float RestoreAttitudeTime; // 0x4f0(0x04)
	char pad_4F4[0x4]; // 0x4f4(0x04)

	void ToggleCastShadow(bool bEnable); // Function DFMIrisSeamless.SafeHouseHelicopter.ToggleCastShadow // (Final|Native|Protected|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.SafeHouseHelicopterAnimInstance
// Size: 0xa10 (Inherited: 0x280)
class USafeHouseHelicopterAnimInstance : public UAnimInstance {
public:

	struct FSafeHouseHelicopterAnimInstanceProxy LocalProxy; // 0x280(0x780)
	struct ASafeHouseHelicopter* SafeHouseHelicopter; // 0xa00(0x08)
	char pad_A08[0x8]; // 0xa08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMIrisEnterStageBase
// Size: 0x48 (Inherited: 0x30)
class UDFMIrisEnterStageBase : public UObject {
public:

	enum class EIrisEnterStageType IrisEnterStage; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct UDFMIrisEnterSubsystem* IrisEnterSubsystem; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)

	bool TrySwitchNextStage(); // Function DFMIrisSeamless.DFMIrisEnterStageBase.TrySwitchNextStage // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMIrisEnterStage_Init
// Size: 0x48 (Inherited: 0x48)
class UDFMIrisEnterStage_Init : public UDFMIrisEnterStageBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMIrisEnterStage_Match
// Size: 0x48 (Inherited: 0x48)
class UDFMIrisEnterStage_Match : public UDFMIrisEnterStageBase {
public:


	void ProcessReferencePackage(); // Function DFMIrisSeamless.DFMIrisEnterStage_Match.ProcessReferencePackage // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMIrisEnterStage_SelectShow
// Size: 0x48 (Inherited: 0x48)
class UDFMIrisEnterStage_SelectShow : public UDFMIrisEnterStageBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMIrisEnterStage_GetOn
// Size: 0x48 (Inherited: 0x48)
class UDFMIrisEnterStage_GetOn : public UDFMIrisEnterStageBase {
public:


	void ProcessMovePath(); // Function DFMIrisSeamless.DFMIrisEnterStage_GetOn.ProcessMovePath // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMIrisEnterStage_EventShow
// Size: 0x48 (Inherited: 0x48)
class UDFMIrisEnterStage_EventShow : public UDFMIrisEnterStageBase {
public:


	bool WarmUpSequence(); // Function DFMIrisSeamless.DFMIrisEnterStage_EventShow.WarmUpSequence // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMIrisEnterStage_PadShow
// Size: 0x58 (Inherited: 0x48)
class UDFMIrisEnterStage_PadShow : public UDFMIrisEnterStageBase {
public:

	char pad_48[0x10]; // 0x48(0x10)

	bool WarmUpSequence(); // Function DFMIrisSeamless.DFMIrisEnterStage_PadShow.WarmUpSequence // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMIrisEnterStage_InfoInteract
// Size: 0xc0 (Inherited: 0x48)
class UDFMIrisEnterStage_InfoInteract : public UDFMIrisEnterStageBase {
public:

	char pad_48[0x58]; // 0x48(0x58)
	struct AGameState_PVPVE* GameState_PVPVE; // 0xa0(0x08)
	char pad_A8[0x18]; // 0xa8(0x18)

	bool WarmUpSequence(); // Function DFMIrisSeamless.DFMIrisEnterStage_InfoInteract.WarmUpSequence // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMIrisEnterStage_Abseil
// Size: 0x58 (Inherited: 0x48)
class UDFMIrisEnterStage_Abseil : public UDFMIrisEnterStageBase {
public:

	char pad_48[0x10]; // 0x48(0x10)

	void SetAbseilCompletet(); // Function DFMIrisSeamless.DFMIrisEnterStage_Abseil.SetAbseilCompletet // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMIrisEnterStage_Finish
// Size: 0x48 (Inherited: 0x48)
class UDFMIrisEnterStage_Finish : public UDFMIrisEnterStageBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMIrisSeamless.DFMIrisEnterStage_Fail
// Size: 0x48 (Inherited: 0x48)
class UDFMIrisEnterStage_Fail : public UDFMIrisEnterStageBase {
public:


	void TeleportBackSafeHouse(); // Function DFMIrisSeamless.DFMIrisEnterStage_Fail.TeleportBackSafeHouse // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
