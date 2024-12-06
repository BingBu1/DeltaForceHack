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
	struct Function_GPAudioRuntime_GameAudioPolygonEmitter_Play3DAudio_Param
	{
	public:

		struct UGPAudioEventAsset* Event; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPAudioRuntime_GameAudioRiverEmitter_Play3DAudio_Param
	{
	public:

		struct UGPAudioEventAsset* Event; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPAudioRuntime_GameAudioRiverEmitter_CopySplineCurvePoints_Param
	{
	public:

		struct USplineComponent* CopyFrom; // 0x00(0x08)
	};

	struct Function_GPAudioRuntime_GameAudioRiverEmitter_CopySplineCurve_Param
	{
	public:

		struct USplineComponent* CopyTo; // 0x00(0x08)
		struct USplineComponent* CopyFrom; // 0x08(0x08)
	};

	struct Function_GPAudioRuntime_GPAMultiEmitterComponent_StopEmitterAudio_Param
	{
	public:

		struct FGPAAttachEmitterInfo EmitterInfo; // 0x00(0x28)
	};

	struct Function_GPAudioRuntime_GPAMultiEmitterComponent_StopAudioByIndex_Param
	{
	public:

		int32_t Index; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct UGPAudioEventAsset* PlayEvent; // 0x08(0x08)
	};

	struct Function_GPAudioRuntime_GPAMultiEmitterComponent_StopAudioByActor_Param
	{
	public:

		struct AActor* EmitterOwner; // 0x00(0x08)
	};

	struct Function_GPAudioRuntime_GPAMultiEmitterComponent_StopAllEmittersAudio_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAMultiEmitterComponent_SetWorldLocationByIndex_Param
	{
	public:

		struct FVector Location; // 0x00(0x0c)
		int32_t Index; // 0x0c(0x04)
	};

	struct Function_GPAudioRuntime_GPAMultiEmitterComponent_PlayEmitterAudio_Param
	{
	public:

		struct FGPAAttachEmitterInfo EmitterInfo; // 0x00(0x28)
		struct FGPAudioFuturePlayingID ReturnValue; // 0x28(0x08)
	};

	struct Function_GPAudioRuntime_GPAMultiEmitterComponent_PlayAudioByIndex_Param
	{
	public:

		struct UGPAudioEventAsset* PlayEvent; // 0x00(0x08)
		int32_t Index; // 0x08(0x04)
		enum class EGPAudioBlueprintType PlayType; // 0x0c(0x01)
		char pad_D[0x3]; // 0x0d(0x03)
		struct FGPAudioFuturePlayingID ReturnValue; // 0x10(0x08)
	};

	struct Function_GPAudioRuntime_GPAMultiEmitterComponent_PlayActorEmitterAudio_Param
	{
	public:

		struct AActor* EmitterOwner; // 0x00(0x08)
		struct UGPAudioEventAsset* PlayEvent; // 0x08(0x08)
		enum class EGPAudioBlueprintType PlayType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		struct FGPAudioFuturePlayingID ReturnValue; // 0x14(0x08)
	};

	struct Function_GPAudioRuntime_GPAMultiEmitterComponent_InitNultiAttachComEmitters_Param
	{
	public:

		struct TArray<struct FGPAAttachEmitterInfo> AttachEmitterInfos; // 0x00(0x10)
		bool bPlayEvent; // 0x10(0x01)
	};

	struct Function_GPAudioRuntime_GPAMultiEmitterComponent_InitEmittersByActors_Param
	{
	public:

		struct TArray<struct AActor*> AttachActors; // 0x00(0x10)
	};

	struct Function_GPAudioRuntime_GPAMultiEmitterComponent_InitEmitters_Param
	{
	public:

		struct USkeletalMeshComponent* SkeletalMC; // 0x00(0x08)
		struct TArray<struct FName> AttachNodeNames; // 0x08(0x10)
	};

	struct Function_GPAudioRuntime_GPAMultiEmitterComponent_CreateEmitters_Param
	{
	public:

		int32_t EmitterNum; // 0x00(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioDataAssetManager_OnAsyncLoadSpatialAudioConfigsFinished_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> ObjectPaths; // 0x00(0x10)
	};

	struct Function_GPAudioRuntime_GPAudioDataAssetManager_OnAsyncLoadScatteredAudioEventsFinished_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> ObjectPaths; // 0x00(0x10)
	};

	struct Function_GPAudioRuntime_GPAudioDataAssetManager_OnAsyncLoadAssetsWhenStartModuleFinished_Param
	{
	public:

		struct TArray<struct FSoftObjectPath> ObjectPaths; // 0x00(0x10)
	};

	struct Function_GPAudioRuntime_GPAudioDataAssetManager_GetTransmissionDistanceSubtractionCurve_Param
	{
	public:

		struct UCurveFloat* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioDataAssetManager_GetDiffractionPortalAttenFactorCurve_Param
	{
	public:

		struct UCurveFloat* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioDataAssetManager_GetDiffractionDistanceFactorCurve_Param
	{
	public:

		struct UCurveFloat* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioDataAssetManager_GetDiffractionAngleFactorCurve_Param
	{
	public:

		struct UCurveFloat* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioProxyInterface_GetCharacterStateParamsFromAudioProxy_Param
	{
	public:

		struct ACHARACTER* InCharacter; // 0x00(0x08)
		uint16_t ReturnValue; // 0x08(0x02)
	};

	struct Function_GPAudioRuntime_GPAudioProxyInterface_GetCharacterLocationFromAudioProxy_Param
	{
	public:

		struct ACHARACTER* InCharacter; // 0x00(0x08)
		struct FVector ReturnValue; // 0x08(0x0c)
	};

	struct Function_GPAudioRuntime_GPAudioProxyInterface_GetCharacterAudioProxyInfo_Param
	{
	public:

		struct ACHARACTER* InCharacter; // 0x00(0x08)
		struct FPVSAudioActorInfo OutInfo; // 0x08(0x1c)
		bool ReturnValue; // 0x24(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioRadio_TurnUP_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioRadio_TurnON_Param
	{
	public:

		bool bResetFm; // 0x00(0x01)
		bool ReturnValue; // 0x01(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioRadio_TurnOFF_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioRadio_TurnFm_Param
	{
	public:

		float Delta; // 0x00(0x04)
		float ReturnValue; // 0x04(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioRadio_TurnDown_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioRadio_TurnChannel_Param
	{
	public:

		struct FName InChannelID; // 0x00(0x08)
		bool bNeedNoise; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioRadio_RadioStart_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioRadio_InitRCConfigs_Param
	{
	public:

		struct TArray<struct FGPAudioRadioChannelRow> ConfigRows; // 0x00(0x10)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_UpdateSlapbackActivated_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_UpdateAudioPortalStatus_Param
	{
	public:

		struct FString PortalIDString; // 0x00(0x10)
		bool bOpen; // 0x10(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_UnregisterVolumeWithListener_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_UnregisterAttenuationForListener_Param
	{
	public:

		enum class EGPAttenuationScaleReason InReason; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_UnloadAllNonPlayingAudioEvents_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_StopSlapback_Param
	{
	public:

		struct UGameAkComponent* Emitter; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_StopPlayingByPlayingId_Param
	{
	public:

		int32_t PlayingId; // 0x00(0x04)
		int32_t TransitionMS; // 0x04(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_StopPlaying_Param
	{
	public:

		struct FGPAudioFuturePlayingID PlayingId; // 0x00(0x08)
		int32_t TransitionMS; // 0x08(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_StopMonitorRecord_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_StopLastPlayingEvent_Param
	{
	public:

		struct UGPAudioEventAsset* InEvent; // 0x00(0x08)
		struct AActor* InPlayer; // 0x08(0x08)
		int32_t StopNum; // 0x10(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_StopGlobalWeaponMIDI_Param
	{
	public:

		struct FGPAudioMIDIEventAsset GPAudioMIDIEvent; // 0x00(0x38)
		int32_t FireCount; // 0x38(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_StopAttachAudioByEvent_Param
	{
	public:

		struct UGPAudioEventAsset* InEvent; // 0x00(0x08)
		struct AActor* InPlayer; // 0x08(0x08)
		bool bStopAllFlag; // 0x10(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_StopAllSounds_Param
	{
	public:

		enum class EStopAllSoundType StopType; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_StopActorSound_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_Stop2DLoopEvent_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_StartSlapback_Param
	{
	public:

		struct UGameAkComponent* Emitter; // 0x00(0x08)
		struct UGPAudioEventAsset* Event; // 0x08(0x08)
		int32_t ReturnValue; // 0x10(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_StartMonitorRecord_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetWindowOpen_Param
	{
	public:

		struct FVector WinPostion; // 0x00(0x0c)
		int32_t OpenScal_0_101; // 0x0c(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetSwitch_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		struct UAkSwitchValue* SwitchValue; // 0x08(0x08)
		struct FString SwitchGroup; // 0x10(0x10)
		struct FString SwitchState; // 0x20(0x10)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetSlapbackIsActivated_Param
	{
	public:

		bool bIsActivated; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetRTPCByStr_Param
	{
	public:

		struct FString RTPCName; // 0x00(0x10)
		float RTPCValue; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct AActor* Actor; // 0x18(0x08)
		int32_t InterpolationTimeMs; // 0x20(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetRTPCByName_Param
	{
	public:

		struct FName RTPCName; // 0x00(0x08)
		float RTPCValue; // 0x08(0x04)
		char pad_C[0x4]; // 0x0c(0x04)
		struct AActor* Actor; // 0x10(0x08)
		int32_t InterpolationTimeMs; // 0x18(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetRTPC_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetObserveredGameAk_Param
	{
	public:

		struct UGameAkComponent* InGameAk; // 0x00(0x08)
		bool bObserverd; // 0x08(0x01)
		enum class EObserveredAudioState InObserveredAudioState; // 0x09(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetObserveredActor_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		bool bObserverd; // 0x08(0x01)
		enum class EObserveredAudioState InObserveredAudioState; // 0x09(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetLocallyListenRangeFactor_Param
	{
	public:

		float InRangefator; // 0x00(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetHRTFs_Param
	{
	public:

		int32_t HRTFIndex; // 0x00(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetHRTFPluginEnable_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetHeadSetArg_Param
	{
	public:

		struct FGPAudioHeadSetRow HeadSetRowConfig; // 0x00(0x28)
		bool PutOn; // 0x28(0x01)
		bool ReturnValue; // 0x29(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetGPAudioWeaponCompositeArgs_Param
	{
	public:

		struct FGPAudioCompositeParam CompositeParam; // 0x00(0x58)
		struct AActor* InPlayer; // 0x58(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetGlobalRTPCByStr_Param
	{
	public:

		struct FString RTPCName; // 0x00(0x10)
		float RTPCValue; // 0x10(0x04)
		int32_t InterpolationTimeMs; // 0x14(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetGlobalRTPCByName_Param
	{
	public:

		struct FName RTPCName; // 0x00(0x08)
		float RTPCValue; // 0x08(0x04)
		int32_t InterpolationTimeMs; // 0x0c(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetGlobalRTPC_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetGameAkViewStateAndGroup_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
		enum class EAudioCharacterViewState InViewState; // 0x08(0x01)
		enum class EAudioCharacterGroup InCharacterGroup; // 0x09(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetGameAkMute_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
		bool in_Mute; // 0x08(0x01)
		bool ReturnValue; // 0x09(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetEnableImmersePersonalized_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetEnableGPAudioDebugger_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetDolbyPluginEnable_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetDolbyNotDownMix_Param
	{
	public:

		bool bEnable; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetCurrentAudioCulture_Param
	{
	public:

		struct FString AudioCulture; // 0x00(0x10)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetCharacterListenRangeFactor_Param
	{
	public:

		struct ACHARACTER* TargetCacharacter; // 0x00(0x08)
		float AttenuationFactor; // 0x08(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetCharacterDieStatus_Param
	{
	public:

		struct ACHARACTER* InCharacter; // 0x00(0x08)
		bool bDie; // 0x08(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetBusEffect_Param
	{
	public:

		struct FString BusName; // 0x00(0x10)
		int32_t uFXIndex; // 0x10(0x04)
		char pad_14[0x4]; // 0x14(0x04)
		struct FString ShareSetName; // 0x18(0x10)
		bool ReturnValue; // 0x28(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetAutoSlapbackActive_Param
	{
	public:

		bool bAutoUpdate; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetAKStateValue_Param
	{
	public:

		struct UAkStateValue* in_stateValue; // 0x00(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetAKStateByName_Param
	{
	public:

		struct FString StateGroup; // 0x00(0x10)
		struct FString State; // 0x10(0x10)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetActorOutputBusVolume_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
		float BusVolume; // 0x08(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SetActorAttenuationScalingFactor_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
		float Value; // 0x08(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_SeekOnGlobalEvent_Param
	{
	public:

		struct UGPAudioEventAsset* InEvent; // 0x00(0x08)
		float Percent; // 0x08(0x04)
		struct FGPAudioFuturePlayingID PlayingId; // 0x0c(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_ResetMeteringPeakArray_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_ResetBusMeteringPeakArray_Param
	{
	public:

		struct FString BusName; // 0x00(0x10)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_RegisterHighFreqUpdatePos_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		enum class EGameAkHighFreqUpdatePosReason InReason; // 0x08(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_RegisterAttenuationForListener_Param
	{
	public:

		enum class EGPAttenuationScaleReason InReason; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		float Scalar; // 0x04(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_ReceiveAnimationNotifyWithEnumType_Param
	{
	public:

		struct FName Notify; // 0x00(0x08)
		enum class EGPAudioBlueprintType EType; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct AActor* PlayActor; // 0x10(0x08)
		struct FGPAudioEventAdditionalFunction AddFunc; // 0x18(0x10)
		bool isLogicTrigger; // 0x28(0x01)
		bool ReturnValue; // 0x29(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_PreGetRangeAndDuration_Param
	{
	public:

		struct UGPAudioEventAsset* InAudioAsset; // 0x00(0x08)
		struct AActor* InPlayer; // 0x08(0x08)
		float Range; // 0x10(0x04)
		float Duration; // 0x14(0x04)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_PostponeLongAudioExpireCheckTime_Param
	{
	public:

		uint32_t InPlayingID; // 0x00(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_PlayStopGPAudioEventAtLocationOpt_Param
	{
	public:

		struct UGPAudioEventAsset* InEvent; // 0x00(0x08)
		struct FGPAudioFuturePlayingID PlayingId; // 0x08(0x08)
		struct UObject* WorldContext; // 0x10(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_PlayPhysicalFootStep_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		enum class EGPAudioFootSoundType AudioType; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UPhysicalMaterialAudioDataAsset* PhyFSConfig; // 0x10(0x08)
		bool bIsLeft; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		float Scale; // 0x1c(0x04)
		struct UGPAudioEventAsset* ReturnValue; // 0x20(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_PlayGPAudioEventAtLocationOpt_Param
	{
	public:

		struct UGPAudioEventAsset* InEvent; // 0x00(0x08)
		struct FVector Location; // 0x08(0x0c)
		struct FRotator Rotator; // 0x14(0x0c)
		struct FName AudioTypeName; // 0x20(0x08)
		struct UObject* WorldContext; // 0x28(0x08)
		bool bActiveStopRequired; // 0x30(0x01)
		enum class EGameAkType InGameAkType; // 0x31(0x01)
		bool bPreCutted; // 0x32(0x01)
		char pad_33[0x1]; // 0x33(0x01)
		float AttenuationScalar; // 0x34(0x04)
		bool bCalcSimplifiedTranDiff; // 0x38(0x01)
		char pad_39[0x3]; // 0x39(0x03)
		struct FVector LocationOffset; // 0x3c(0x0c)
		bool bCalcCompletedTranDiff; // 0x48(0x01)
		char pad_49[0x3]; // 0x49(0x03)
		struct FGPAudioFuturePlayingID ReturnValue; // 0x4c(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_PlayGPAudioEventAtLocationEnumTypeOpt_Param
	{
	public:

		struct UGPAudioEventAsset* InEvent; // 0x00(0x08)
		struct FVector Location; // 0x08(0x0c)
		struct FRotator Rotator; // 0x14(0x0c)
		enum class EGPAudioBlueprintType EType; // 0x20(0x01)
		char pad_21[0x7]; // 0x21(0x07)
		struct UObject* WorldContext; // 0x28(0x08)
		bool bActiveStopRequired; // 0x30(0x01)
		enum class EGameAkType InGameAkType; // 0x31(0x01)
		bool bPreCutted; // 0x32(0x01)
		char pad_33[0x1]; // 0x33(0x01)
		float AttenuationScalar; // 0x34(0x04)
		bool bCalcSimplifiedTranDiff; // 0x38(0x01)
		char pad_39[0x3]; // 0x39(0x03)
		struct FVector LocationOffset; // 0x3c(0x0c)
		bool bCalcCompletedTranDiff; // 0x48(0x01)
		char pad_49[0x3]; // 0x49(0x03)
		struct FGPAudioFuturePlayingID ReturnValue; // 0x4c(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_PlayGPAudioEventAtLocationEnumType_Param
	{
	public:

		struct UGPAudioEventAsset* InEvent; // 0x00(0x08)
		struct FVector Location; // 0x08(0x0c)
		struct FRotator Rotator; // 0x14(0x0c)
		enum class EGPAudioBlueprintType EType; // 0x20(0x01)
		char pad_21[0x7]; // 0x21(0x07)
		struct AActor* SourceActor; // 0x28(0x08)
		bool bAutoUnRegisterGameObjID; // 0x30(0x01)
		enum class EAttenuationScaleType AttenuationType; // 0x31(0x01)
		bool bPreCutted; // 0x32(0x01)
		char pad_33[0x1]; // 0x33(0x01)
		struct FGPAudioFuturePlayingID ReturnValue; // 0x34(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_PlayGPAudioAttachWithEnumType_Param
	{
	public:

		struct UGPAudioEventAsset* InEvent; // 0x00(0x08)
		struct AActor* InPlayer; // 0x08(0x08)
		enum class EGPAudioBlueprintType EType; // 0x10(0x01)
		char pad_11[0x3]; // 0x11(0x03)
		float Duration; // 0x14(0x04)
		bool bNeedMakeNoise; // 0x18(0x01)
		bool bPreCutted; // 0x19(0x01)
		char pad_1A[0x2]; // 0x1a(0x02)
		float AttenuationScalar; // 0x1c(0x04)
		struct FGPAudioFuturePlayingID ReturnValue; // 0x20(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_PlayGPAudioAttachWithEndCallback_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_PlayGPAudioAttachStaticComponentWithEndCallback_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_PlayGPAudioAttachStaticComponent_Param
	{
	public:

		struct UGPAudioEventAsset* InEvent; // 0x00(0x08)
		struct UGameStaticAkComponent* GameAk; // 0x08(0x08)
		enum class EGPAudioBlueprintType EType; // 0x10(0x01)
		bool bNeedMakeNoise; // 0x11(0x01)
		bool bPreCutted; // 0x12(0x01)
		char pad_13[0x1]; // 0x13(0x01)
		struct FGPAudioFuturePlayingID ReturnValue; // 0x14(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_PlayGlobalWeaponMIDIAk_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		float FirstCoolDownMs; // 0x08(0x04)
		float NoteDuration; // 0x0c(0x04)
		bool IsStopByNoteOff; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UGPAudioEventAsset* FireAudioEvent; // 0x18(0x08)
		struct UGPAudioEventAsset* StartEvent; // 0x20(0x08)
		struct UGPAudioEventAsset* EndEvent; // 0x28(0x08)
		bool ReturnValue; // 0x30(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_PlayFootStepByAnimName_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		struct FString AnimName; // 0x08(0x10)
		struct UGPAudioEventAsset* OutEventAsset; // 0x18(0x08)
		bool ReturnValue; // 0x20(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_PlayBindPhysicalFootStep_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		struct UPhysicalMaterial* PhysMat; // 0x08(0x08)
		enum class EGPAudioFootSoundType AudioType; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UPhysicalMaterialAudioDataAsset* BindCofig; // 0x18(0x08)
		struct UGPAudioEventAsset* ReturnValue; // 0x20(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_Play3PGlobalWeaponMIDIAk_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		float FirstCoolDownMs; // 0x08(0x04)
		float NoteDuration; // 0x0c(0x04)
		bool IsStopByNoteOff; // 0x10(0x01)
		char pad_11[0x7]; // 0x11(0x07)
		struct UGPAudioEventAsset* FireAudioEvent; // 0x18(0x08)
		struct UGPAudioEventAsset* StartEvent; // 0x20(0x08)
		struct UGPAudioEventAsset* EndEvent; // 0x28(0x08)
		bool ReturnValue; // 0x30(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_Play2DGlobalAudioWithEndCallback_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_Play2DGlobalAudioWithBeginEndCallback_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_Play2DGlobalAudioWithBeginCallback_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_Play2DGlobalAudio_Param
	{
	public:

		struct UGPAudioEventAsset* InAudioAsset; // 0x00(0x08)
		struct FGPAudioFuturePlayingID ReturnValue; // 0x08(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_MuteIngameSound_Param
	{
	public:

		struct FString reason; // 0x00(0x10)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_MakeNoise_Param
	{
	public:

		struct UGPAudioEventAsset* InEvent; // 0x00(0x08)
		struct UGameAkComponent* GameAk; // 0x08(0x08)
		struct FName AudioType; // 0x10(0x08)
		float MakeNoiseRatio; // 0x18(0x04)
		float ReturnValue; // 0x1c(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_LogSplitLine_Param
	{
	public:

		struct FString HeadStr; // 0x00(0x10)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_LogPerformanceReport_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_LogAudioError_Param
	{
	public:

		struct FString LogStr; // 0x00(0x10)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_LogAudio_Param
	{
	public:

		struct FString LogStr; // 0x00(0x10)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_LoadPhysicalMaterialConfig_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
		struct FSoftObjectPath SoPath; // 0x08(0x18)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_IsPlayingByPlayingID_Param
	{
	public:

		int32_t InPlayingID; // 0x00(0x04)
		bool ReturnValue; // 0x04(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_IsPlaying_Param
	{
	public:

		struct FGPAudioFuturePlayingID PlayingId; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_IsLocalPlayerControlledPawn_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_IsInMpAudioLowMemoryMode_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_IsInAudioLowMemoryMode_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_IsGlobalWeaponMIDIPlaying_Param
	{
	public:

		struct AActor* SourceActor; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_IsDolbyAtmosSupported_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_IsAnimPreviewActor_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetWeaponFireShadowAkName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetScatteredAudioEventPathByName_Param
	{
	public:

		struct FString InEventIDString; // 0x00(0x10)
		struct FSoftObjectPath ReturnValue; // 0x10(0x18)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetPlayingCount_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
		int32_t ReturnValue; // 0x08(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetMeteringPeakArray_Param
	{
	public:

		struct TArray<float> OutMeteringPeakArray; // 0x00(0x10)
		int32_t OutSamples; // 0x10(0x04)
		int32_t StartIndex; // 0x14(0x04)
		bool MultiChannel; // 0x18(0x01)
		char pad_19[0x3]; // 0x19(0x03)
		int32_t ReturnValue; // 0x1c(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetHRTFPluginEnable_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetGameAkInfo_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
		struct FGameAkInfo OutGameAkInfo; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetGameAkComponent_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
		bool bCreateIfNotExist; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct UGameAkComponent* ReturnValue; // 0x10(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetGameAKAttenuationForListener_Param
	{
	public:

		struct FName ShadowGameAKName; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetEnableGPAudioDolby_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetDolbyNotDownMix_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetCurrentAudioCulture_Param
	{
	public:

		struct FString ReturnValue; // 0x00(0x10)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetCrouchFootstepShadowAkName_Param
	{
	public:

		struct FName ReturnValue; // 0x00(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetBusMeteringPeakArray_Param
	{
	public:

		struct FString BusName; // 0x00(0x10)
		struct TArray<float> OutMeteringPeakArray; // 0x10(0x10)
		int32_t OutSamples; // 0x20(0x04)
		int32_t StartIndex; // 0x24(0x04)
		bool MultiChannel; // 0x28(0x01)
		char pad_29[0x3]; // 0x29(0x03)
		int32_t ReturnValue; // 0x2c(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetAsyncTraceResults_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		struct FHitResult Out_HitResult; // 0x08(0x88)
		bool ReturnValue; // 0x90(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetAllPlayingCount_Param
	{
	public:

		int32_t ReturnValue; // 0x00(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetActorPlayingRangeAndDurationByTypeName_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
		struct FName AudioTypeName; // 0x08(0x08)
		float Range; // 0x10(0x04)
		float Duration; // 0x14(0x04)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetActorPlayingRangeAndDuration_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
		struct FGPAudioFuturePlayingID PlayingId; // 0x08(0x08)
		float Range; // 0x10(0x04)
		float Duration; // 0x14(0x04)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetActorPlayingItemByTypeName_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
		struct FName AudioTypeName; // 0x08(0x08)
		struct FGameAkPlayingItem OutItem; // 0x10(0x40)
		bool ReturnValue; // 0x50(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetActorPlayingItem_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
		struct FGPAudioFuturePlayingID PlayingId; // 0x08(0x08)
		struct FGameAkPlayingItem OutItem; // 0x10(0x40)
		bool ReturnValue; // 0x50(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetActorMaxMakeNoiseRange_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_GetActorMaxLocalListenRange_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
		float ReturnValue; // 0x08(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_ForceStopGlobalWeaponMIDI_Param
	{
	public:

		int32_t FireCount; // 0x00(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_EnableSingleAudio_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_EnableLogAudio_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_EnableGPAudioDebugger_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_EnableBusMetering_Param
	{
	public:

		struct FString BusName; // 0x00(0x10)
		bool bEnable; // 0x10(0x01)
		bool ReturnValue; // 0x11(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_DeregisterHighFreqUpdatePos_Param
	{
	public:

		struct AActor* inActor; // 0x00(0x08)
		enum class EGameAkHighFreqUpdatePosReason InReason; // 0x08(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_CreateGameAkComponent_Param
	{
	public:

		struct AActor* InPlayer; // 0x00(0x08)
		struct UGameAkComponent* OutGameAk; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_CollectLoop2DEvent_Param
	{
	public:

		bool bCollect; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_CloseGVoiceInit_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_ClearWindowOpen_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioStatics_ClearCutsceneAudio_Param
	{
	public:

		bool bDelayStop; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_CheckAnimationNotifyKeys_Param
	{
	public:

		struct FName AniNotifyKey; // 0x00(0x08)
		struct AActor* EditorActor; // 0x08(0x08)
		bool ReturnValue; // 0x10(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_bGVoiceInit_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_AsyncTraceToGround_Param
	{
	public:

		struct AActor* Actor; // 0x00(0x08)
		bool ReturnValue; // 0x08(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioStatics_AddOutput_Param
	{
	public:

		struct FString DeviceShareSetName; // 0x00(0x10)
		int32_t IdDevice; // 0x10(0x04)
		bool ReturnValue; // 0x14(0x01)
	};

	struct Function_GPAudioRuntime_GameAkComponent_StopGameAk_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GameAkComponent_StopDoppler_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GameAkComponent_StartDoppler_Param
	{
	public:

		float ScalingFactor; // 0x00(0x04)
		float TimeStep; // 0x04(0x04)
	};

	struct Function_GPAudioRuntime_GameAkComponent_PostGPAudio_Param
	{
	public:

		struct UGPAudioEventAsset* AudioAsset; // 0x00(0x08)
		bool bMakeNoise; // 0x08(0x01)
		enum class EGPAudioBlueprintType AudioType; // 0x09(0x01)
		bool bPreCutted; // 0x0a(0x01)
		char pad_B[0x1]; // 0x0b(0x01)
		struct FGPAudioFuturePlayingID ReturnValue; // 0x0c(0x08)
	};

	struct Function_GPAudioRuntime_GameAkComponent_PlayFoliageOverlapStirAudio_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GameAkComponent_PlayFoliageOverlapAudio_Param
	{
	public:

		struct UGPAudioEventAsset* AudioEvent; // 0x00(0x08)
	};

	struct Function_GPAudioRuntime_GameAkComponent_OnAudioFinishCallback_Param
	{
	public:

		enum class EGPEventCallbackType CallbackType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t PlayingId; // 0x04(0x04)
	};

	struct Function_GPAudioRuntime_GameAkComponent_OnAttenuationScaleUpdated_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioPriorityMethod_ShouldEventPlayUnderLimit_Param
	{
	public:

		struct UGameAkComponent* Listener; // 0x00(0x08)
		struct FGPAudioPriorityParam InParam; // 0x08(0x98)
		float OutPriority; // 0xa0(0x04)
		bool ReturnValue; // 0xa4(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioPriorityMethod_CheckEventUnderLimit_Param
	{
	public:

		struct UGameAkComponent* Listener; // 0x00(0x08)
		struct FGPAudioPriorityParam InParam; // 0x08(0x98)
		bool ReturnValue; // 0xa0(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioPointEmitter_StopAudio_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioPointEmitter_PlayAudio_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GPAudioPointEmitter_GetRoomBakeData_Param
	{
	public:

		struct UGPAudioRoomBakeDataAsset* ReturnValue; // 0x00(0x08)
	};

	struct Function_GPAudioRuntime_GPAudioPointEmitter_DebugDrawCurrentRoomBakeValues_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioPointEmitter_DebugDrawCurrentRoomBakeNeighbors_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_AnimNotifyState_GPAudioEvent_ReceivedNotifyEnd_Param
	{
	public:

		struct USkeletalMeshComponent* MeshComp; // 0x00(0x08)
		struct UAnimSequenceBase* Animation; // 0x08(0x08)
		float TotalDuration; // 0x10(0x04)
		bool bIsFPP; // 0x14(0x01)
	};

	struct Function_GPAudioRuntime_AnimNotifyState_GPAudioEvent_ReceivedNotifyBegin_Param
	{
	public:

		struct USkeletalMeshComponent* MeshComp; // 0x00(0x08)
		struct UAnimSequenceBase* Animation; // 0x08(0x08)
		float TotalDuration; // 0x10(0x04)
		bool bIsFPP; // 0x14(0x01)
	};

	struct Function_GPAudioRuntime_GameAcousticPortal_GetCurrentState_Param
	{
	public:

		enum class AkAcousticPortalState ReturnValue; // 0x00(0x01)
	};

	struct Function_GPAudioRuntime_GameAcousticPortal_EnablePortal_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GameAcousticPortal_DisablePortal_Param
	{
	public:

	};

	struct Function_GPAudioRuntime_GPAudioMultiPointEmitter_DebugDrawMultiEmitters_Param
	{
	public:

		float DrawTime; // 0x00(0x04)
	};

	struct Function_GPAudioRuntime_GPAudioMultiPointEmitter_CopySplinePointsToRelativeTransforms_Param
	{
	public:

		struct USplineComponent* TargetSpline; // 0x00(0x08)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
