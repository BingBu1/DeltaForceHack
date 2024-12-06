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
	struct Function_Hall_HallCameraCtrlComponentBase_SetCustonViewTarget_Param
	{
	public:

	};

	struct Function_Hall_HallCharacter_UnequipWeapon_Param
	{
	public:

	};

	struct Function_Hall_HallCharacterAnimPreviewer_SpawnDisplayWeapon_Param
	{
	public:

	};

	struct Function_Hall_HallCharacterCameraActor_SetRollbackCamera_Param
	{
	public:

		struct AHallCharacterCameraActor* InRollbackCamera; // 0x00(0x08)
	};

	struct Function_Hall_HallCharacterCtrlComponentBase_SpawnPlayerCharacterWithSlot_Param
	{
	public:

		int32_t InSlot; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct AHallCharacter* ReturnValue; // 0x08(0x08)
	};

	struct Function_Hall_HallCharacterSpawnConfig_IsEnable_Param
	{
	public:

		bool ReturnValue; // 0x00(0x01)
	};

	struct Function_Hall_HallCharacterVoiceComponent_On2DVoiceStopped_Param
	{
	public:

		enum class EGPEventCallbackType EventCallback; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t PlayId; // 0x04(0x04)
	};

	struct Function_Hall_HallDisplayCameraActor_SetEasingType_Param
	{
	public:

		enum class EGPWeaponEasingType InEasingType; // 0x00(0x01)
	};

	struct Function_Hall_HallDisplayCtrlInterface_RefreshCharacterLookAtTarget_Param
	{
	public:

		struct FVector Target; // 0x00(0x0c)
	};

	struct Function_Hall_HallDisplayCtrlManager_GetMiniWorldSubLevels_Param
	{
	public:

		struct FName MiniWorldType; // 0x00(0x08)
		bool bOpenLevelExistCheck; // 0x08(0x01)
		char pad_9[0x7]; // 0x09(0x07)
		struct TArray<struct FString> NoExistSubLevelNames; // 0x10(0x10)
		struct TArray<struct FString> ReturnValue; // 0x20(0x10)
	};

	struct Function_Hall_HallFunctionStatics_Stop2DHeroAudio_Param
	{
	public:

	};

	struct Function_Hall_HallGeneralLevelSequenceCtrlComponent_ResetGeneralLevelSequence_Param
	{
	public:

	};

	struct Function_Hall_HallHighLevelDisplayComponent_UnloadBPLevel_Param
	{
	public:

		struct FString InAvatarId; // 0x00(0x10)
	};

	struct Function_Hall_HallLevelSequenceComponent_OnMovieSceneSequencePlayerEventStop_Param
	{
	public:

	};

	struct Function_Hall_HallLevelSequenceManager_UnBindOnSeqStopped_Param
	{
	public:

		struct UObject* obj; // 0x00(0x08)
	};

	struct Function_Hall_HallLevelStreamingManager_UnloadHallSubLevels_Param
	{
	public:

		struct UObject* WorldContextObject; // 0x00(0x08)
		struct TArray<struct FName> InLevelNames; // 0x08(0x10)
		bool ReturnValue; // 0x18(0x01)
	};

	struct Function_Hall_HallMainCameraCtrlComponent_GetCustomViewTarget_Param
	{
	public:

		struct ACameraActor* ReturnValue; // 0x00(0x08)
	};

	struct Function_Hall_HallMainCharacterAnimInstance_SetSettlementSceneTeamPos_Param
	{
	public:

		int32_t PosId; // 0x00(0x04)
	};

	struct Function_Hall_HallMainCharacterCtrlComponent_SpawnTeamMateCharacter_Param
	{
	public:

		int32_t Slot; // 0x00(0x04)
	};

	struct Function_Hall_HallMainDisplayCtrl_TryBindMemberHallIdleCameraSequence_Param
	{
	public:

		struct FName BindingTag; // 0x00(0x08)
		struct AHallCharacter* BindingActor; // 0x08(0x08)
	};

	struct Function_Hall_HallMainLightCtrlComponent_TurnOffAllHallLights_Param
	{
	public:

	};

	struct Function_Hall_HallPostProcessDisplayActor_SetAttachActor_Param
	{
	public:

		struct AActor* AttachActor; // 0x00(0x08)
	};

	struct Function_Hall_HallSceneActor_Unregiser_Param
	{
	public:

	};

	struct Function_Hall_HallSceneBGManager_SwitchBGMatVectorParam_Param
	{
	public:

		int32_t InMatIndex; // 0x00(0x04)
		struct FName InMeshName; // 0x04(0x08)
		struct FName InParamName; // 0x0c(0x08)
		struct FVector InValue; // 0x14(0x0c)
	};

	struct Function_Hall_HallSceneVideoPlayerComponent_OnMediaReachedEnd_Param
	{
	public:

	};

	struct Function_Hall_HallSequenceDirector_PauseSequence_Param
	{
	public:

	};

	struct Function_Hall_HallSettlementSnapshotStudio_SpawnCharacter_Param
	{
	public:

		struct AHallCharacter* ReturnValue; // 0x00(0x08)
	};

	struct Function_Hall_HallSurroundingCtrlComponent_SetBgTexFromImg_Param
	{
	public:

		struct AStaticMeshActor* BgActor; // 0x00(0x08)
		struct UImage* Image; // 0x08(0x08)
	};

	struct Function_Hall_HallWeaponDisplayComponent_PostApplyWorldOffset_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
		struct FIntVector IntVector1; // 0x08(0x0c)
		struct FIntVector IntVector2; // 0x14(0x0c)
	};

	struct Function_Hall_HallWeaponDisplaySequenceComponent_PostApplyWorldOffset_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
		struct FIntVector IntVector1; // 0x08(0x0c)
		struct FIntVector IntVector2; // 0x14(0x0c)
	};

	struct Function_Hall_HallWeaponSkinSceneDisplayComponent_OnUnloadLatentActionCompleted_Param
	{
	public:

		int32_t LinkID; // 0x00(0x04)
	};

	struct Function_Hall_LuaLevelUtil_UnloadSettlement_Param
	{
	public:

		struct UWorld* World; // 0x00(0x08)
	};

	struct Function_Hall_SandBoxMap_UnRegisterUIActor_Param
	{
	public:

		int32_t Group; // 0x00(0x04)
		char pad_4[0x4]; // 0x04(0x04)
		struct ASandBoxMapActor* Target; // 0x08(0x08)
	};

	struct Function_Hall_SandBoxMapActor_SwitchActorState_Param
	{
	public:

		enum class ESandBoxMapState SwitchState; // 0x00(0x01)
	};

	struct Function_Hall_SyncMap_StopTick_Param
	{
	public:

	};

	struct Function_Hall_HallDisplayCtrlBase_OnDisplayCtrlUnInit_Param
	{
	public:

	};

	struct Function_Hall_HallDisplayLevelSequenceComponentBase_OnMovieSequenceEventStop_Param
	{
	public:

	};

	struct Function_Hall_HallBattlePassDisplayCtrl_StopVideo_Param
	{
	public:

	};

	struct Function_Hall_HallCommonDisplayCtrl_SetRotateSensitivity_Param
	{
	public:

		float InValue; // 0x00(0x04)
	};

	struct Function_Hall_HallLotteryDisplayCtrl_SetHallDisplaySequence_Param
	{
	public:

	};

	struct Function_Hall_HallLotteryTenDisplayCtrl_SetMandelBrickThreshold_Param
	{
	public:

		int32_t MandelBrickIndex; // 0x00(0x04)
		float ThresHold; // 0x04(0x04)
	};

	struct Function_Hall_HallMainFlowDisplayCtrl_UnequipByEquipmentType_Param
	{
	public:

		enum class EMainFlowCtrlType InCtrlType; // 0x00(0x01)
		char pad_1[0x3]; // 0x01(0x03)
		int32_t InSlotId; // 0x04(0x04)
		enum class EEquipmentType EquipmentType; // 0x08(0x01)
	};

	struct Function_Hall_HallMatchDisplayCtrl_UnloadLightLevel_Param
	{
	public:

		struct FString InAvatarId; // 0x00(0x10)
	};

	struct Function_Hall_HallMPLobbyDisplayCtrl_SetDisplayType_Param
	{
	public:

		struct FString InDisplayType; // 0x00(0x10)
	};

	struct Function_Hall_HallOperatorItemDisplayCtrl_SetDisplayType_Param
	{
	public:

		struct FString InDisplayType; // 0x00(0x10)
	};

	struct Function_Hall_HallSecretServiceCtrl_StopSequence_Param
	{
	public:

		struct FString InSeqName; // 0x00(0x10)
	};

	struct Function_Hall_HallSettlementDisplayCtrl_PlayLevelSeqActor_Param
	{
	public:

		struct FName LevelSeqActorName; // 0x00(0x08)
	};

	struct Function_Hall_HallVehicleDisplayCtrl_SetVehicleDisplayType_Param
	{
	public:

		uint64_t VehicleId; // 0x00(0x08)
		bool bIsModified; // 0x08(0x01)
	};

	struct Function_Hall_HallWatchDisplayCtrl_SetDisplayWatchItem_Param
	{
	public:

		struct FString InItemID; // 0x00(0x10)
	};

	struct Function_Hall_HallWeaponDisplayCtrl_SkipWeaponCutScene_Param
	{
	public:

	};

	struct Function_Hall_HallCharacterLevelSeqComponentBase_OnSeqLoadedComplete_Param
	{
	public:

	};

	struct Function_Hall_HallExpertDisplaySequenceComponent_StopTransition_Param
	{
	public:

	};

	struct Function_Hall_HallHeroActionShowComponent_OnHallCharacterLoadedDone_Param
	{
	public:

		struct AHallCharacter* InHallCharacter; // 0x00(0x08)
		struct FString ActionId; // 0x08(0x10)
		bool IsUsedSeq; // 0x18(0x01)
	};

	struct Function_Hall_HallMatchDisplayLevelSequenceComponent_OnHallCharacterMeshLoadComplete_Param
	{
	public:

	};

	struct Function_Hall_HallCollectionDisplayCtrl_StopCurrentSequence_Param
	{
	public:

	};

	struct Function_Hall_HallExpertDisplayCtrl_ToggleInteracted_Param
	{
	public:

		bool CanInteracted; // 0x00(0x01)
	};

	struct Function_Hall_HallOperatorDisplayCtrl_UnloadBPLevel_Param
	{
	public:

		struct FString InAvatarId; // 0x00(0x10)
	};

}
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
