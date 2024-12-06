
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class GPGlobalDefines.BlueprintFunctionHelper
// Size: 0x30 (Inherited: 0x30)
class UBlueprintFunctionHelper : public UBlueprintFunctionLibrary {
public:


	void STATIC_SnapToGround(struct USplineComponent* SplineComp, bool bInAlign); // Function GPGlobalDefines.BlueprintFunctionHelper.SnapToGround // (Final|Native|Static|Private|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientDebugSetting
// Size: 0x50 (Inherited: 0x38)
class UClientDebugSetting : public UEngineSubsystem {
public:

	bool bOverrideWalkRunArea; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Movement_RunValue; // 0x3c(0x04)
	float Movement_SilentWalkXValue; // 0x40(0x04)
	float Movement_SilentWalkYValue; // 0x44(0x04)
	bool bShowWalkRunArea; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	void SaveDataConfig(); // Function GPGlobalDefines.ClientDebugSetting.SaveDataConfig // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientGameSetting
// Size: 0xb0 (Inherited: 0x38)
class UClientGameSetting : public UWorldSubsystem {
public:

	bool bUnderFPPMode; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float SensibilityValue; // 0x3c(0x04)
	float SensibilityValue_NoZooming; // 0x40(0x04)
	float SensibilityValue_MechanicalScope; // 0x44(0x04)
	float SensibilityValue_2XScope; // 0x48(0x04)
	float SensibilityMinValue; // 0x4c(0x04)
	bool bUseMsaa; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32_t MobileMsaaCount; // 0x54(0x04)
	int32_t ScalabilityQualityLevel; // 0x58(0x04)
	bool bPhysicsDyingEnable; // 0x5c(0x01)
	bool bPhysicsDyingAnimProfileEnable; // 0x5d(0x01)
	bool bPhysicsDyingIgnoreBoneHitResponce; // 0x5e(0x01)
	bool bShowXPPSwitchButton; // 0x5f(0x01)
	bool bShowGMButton; // 0x60(0x01)
	bool bShowAimCamOffsetFovTest; // 0x61(0x01)
	bool bShowDebugInfo; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	int32_t ShowDebugInfoType; // 0x64(0x04)
	/*struct FMulticastInlineDelegate*/char OnScopeUseRTChanged[0x10]; // 0x68(0x10)
	/*struct FMulticastInlineDelegate*/char OnReloadOpModeChanged[0x10]; // 0x78(0x10)
	/*struct FMulticastInlineDelegate*/char OnUseDofChanged[0x10]; // 0x88(0x10)
	/*struct FMulticastInlineDelegate*/char OnSeparateSideAimingChanged[0x10]; // 0x98(0x10)
	char pad_A8[0x1]; // 0xa8(0x01)
	bool bUseRotationInputForDebug; // 0xa9(0x01)
	bool bScopeUseRT; // 0xaa(0x01)
	bool bSeparateSideAiming; // 0xab(0x01)
	bool bReloadOpModeSlide; // 0xac(0x01)
	bool bUseDof; // 0xad(0x01)
	char pad_AE[0x2]; // 0xae(0x02)

	void SetUseDof(bool InUseDof); // Function GPGlobalDefines.ClientGameSetting.SetUseDof // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientSettingDelagate
// Size: 0xf8 (Inherited: 0x38)
class UClientSettingDelagate : public UEngineSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnSettingPanelReset[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnResetBaseSetting[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnResetDisplaySetting[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char OnCameraModeChange[0x10]; // 0x68(0x10)
	/*struct FMulticastInlineDelegate*/char OnCustomLayoutChange[0x10]; // 0x78(0x10)
	/*struct FMulticastInlineDelegate*/char OnCusmtomButtonChange[0x10]; // 0x88(0x10)
	/*struct FMulticastInlineDelegate*/char OnClientSettingLeanPeekChange[0x10]; // 0x98(0x10)
	/*struct FMulticastInlineDelegate*/char SilentWalkModeChangeDelegate[0x10]; // 0xa8(0x10)
	/*struct FMulticastInlineDelegate*/char OnAfterSettingPanelReset[0x10]; // 0xb8(0x10)
	/*struct FMulticastInlineDelegate*/char MoveFireModeChangeDelegate[0x10]; // 0xc8(0x10)
	/*struct FMulticastInlineDelegate*/char SprintTriggerSensitivityChangeDelegate[0x10]; // 0xd8(0x10)
	/*struct FMulticastInlineDelegate*/char MarkingButtonChangeDelegate[0x10]; // 0xe8(0x10)

	struct UClientSettingDelagate* STATIC_Get(struct UObject* WorldContextObject); // Function GPGlobalDefines.ClientSettingDelagate.Get // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientDisplaySetting
// Size: 0x60 (Inherited: 0x38)
class UClientDisplaySetting : public UEngineSubsystem {
public:

	int32_t SafeZoneValue; // 0x38(0x04)
	enum class EPerfGearQualityLevel DisplayQuality; // 0x3c(0x01)
	enum class EPerfGearQualityLevel FrameQuality; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FString DisplayStyle; // 0x40(0x10)
	float HudSafeZone; // 0x50(0x04)
	enum class EHitEffectColor HitEffectColor; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32_t FrameStyle; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)

	void SetSafeZoneValue(int32_t Value); // Function GPGlobalDefines.ClientDisplaySetting.SetSafeZoneValue // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientBaseSetting
// Size: 0x130 (Inherited: 0x38)
class UClientBaseSetting : public UEngineSubsystem {
public:

	bool bIsAimAssistOpen; // 0x38(0x01)
	bool bIsAimMagnify; // 0x39(0x01)
	bool bIsInventoryAutoOrganize; // 0x3a(0x01)
	enum class EFireMode ShotGunFireMode; // 0x3b(0x01)
	enum class EFireMode SRFireMode; // 0x3c(0x01)
	enum class EFireMode AbilityItemFireMode; // 0x3d(0x01)
	bool bSRInstantFire; // 0x3e(0x01)
	enum class EScopeOpenMode ScopeOpenMode; // 0x3f(0x01)
	enum class EScopeOpenMode SideAimOpenMode; // 0x40(0x01)
	enum class EQuickScopeOpenMode QuickScopeOpen; // 0x41(0x01)
	bool bCanFireOnQuickScopeOpen; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
	struct TMap<enum class EWeaponItemType, bool> QuickScopeOpenMap; // 0x48(0x50)
	bool QuickScopeOpenAbilityItem; // 0x98(0x01)
	bool QuickScopeOpenFixedWeapon; // 0x99(0x01)
	enum class EQuickScopeOpenMode QuickScopeOpen_MP; // 0x9a(0x01)
	bool bCanFireOnQuickScopeOpen_MP; // 0x9b(0x01)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TMap<enum class EWeaponItemType, bool> QuickScopeOpenMap_MP; // 0xa0(0x50)
	bool QuickScopeOpenAbilityItem_MP; // 0xf0(0x01)
	bool QuickScopeOpenFixedWeapon_MP; // 0xf1(0x01)
	enum class EFireMode ShotGunFireMode_MP; // 0xf2(0x01)
	enum class EFireMode SRFireMode_MP; // 0xf3(0x01)
	enum class EFireMode AbilityItemFireMode_MP; // 0xf4(0x01)
	bool bEnableReloadOnAiming; // 0xf5(0x01)
	bool bReloadBreakMirror; // 0xf6(0x01)
	bool bCanSprintBreakZoom; // 0xf7(0x01)
	bool bCanSprintBreakZoomMP; // 0xf8(0x01)
	bool bCanSprintBreakUsingItem; // 0xf9(0x01)
	bool bEnableAutoFire; // 0xfa(0x01)
	char pad_FB[0x1]; // 0xfb(0x01)
	float FPPViewRange; // 0xfc(0x04)
	float FPPViewRangeMin; // 0x100(0x04)
	float FPPViewRangeMax; // 0x104(0x04)
	float TPPViewRange; // 0x108(0x04)
	float TPPViewRangeMin; // 0x10c(0x04)
	float TPPViewRangeMax; // 0x110(0x04)
	bool bCanSwitchXPP; // 0x114(0x01)
	enum class EFireBreakReload FireBreakReload; // 0x115(0x01)
	bool bRunBreakReload; // 0x116(0x01)
	bool bAutoHoldBreathOnZoom; // 0x117(0x01)
	bool bSceneFOVCalcOpenCameraFOV; // 0x118(0x01)
	bool OpenQuicklySwitchButton; // 0x119(0x01)
	char pad_11A[0x16]; // 0x11a(0x16)

	void SetScopeUseRT(bool InUseRT); // Function GPGlobalDefines.ClientBaseSetting.SetScopeUseRT // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientOtherSetting
// Size: 0x40 (Inherited: 0x38)
class UClientOtherSetting : public UEngineSubsystem {
public:

	bool bDisableRuntimeAtlas; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	void SaveDataConfig(); // Function GPGlobalDefines.ClientOtherSetting.SaveDataConfig // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientControlSetting
// Size: 0x100 (Inherited: 0x38)
class UClientControlSetting : public UEngineSubsystem {
public:

	enum class EKeyLayoutType LayoutType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TMap<char, enum class EMoveRunMode> MoveRunModeMap; // 0x40(0x50)
	enum class ELeftJoystickMode LeftJoyStickMode; // 0x90(0x01)
	enum class ERightFireMode RightFireMode; // 0x91(0x01)
	enum class EFunctionBtnRotationMode FunctionBtnRotationMode; // 0x92(0x01)
	bool bAutoUpRun; // 0x93(0x01)
	bool bAutoUpRunMP; // 0x94(0x01)
	bool bShowDamageHitHud; // 0x95(0x01)
	bool bCanLeanPeek; // 0x96(0x01)
	enum class EScopeOpenMode PeekOpenMode; // 0x97(0x01)
	bool bPeekAutoScopeOpen; // 0x98(0x01)
	enum class ESilentWalkInputMode SilentWalkInputMode; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	float SprintTriggerSensitivity; // 0x9c(0x04)
	float SprintTriggerSensitivityMP; // 0xa0(0x04)
	enum class ESensitivityChangeMode SensitivityChangeMode; // 0xa4(0x01)
	bool bFireBtnRotated; // 0xa5(0x01)
	bool bAimBtnRotated; // 0xa6(0x01)
	bool bPeekBtnRotated; // 0xa7(0x01)
	bool bCrouchBtnRotated; // 0xa8(0x01)
	bool bSeparateVault; // 0xa9(0x01)
	bool bVaultTriggerMode; // 0xaa(0x01)
	enum class EGyroScopeOpenMode GyroScopeOpenMode; // 0xab(0x01)
	bool bGyroScopeReverseX; // 0xac(0x01)
	bool bGyroScopeReverseY; // 0xad(0x01)
	enum class ESuperSprintControlMode SuperSprintControlMode; // 0xae(0x01)
	char pad_AF[0x51]; // 0xaf(0x51)

	bool SetBtnRotated(struct FString BtnName, bool bRotated); // Function GPGlobalDefines.ClientControlSetting.SetBtnRotated // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientVehicleSetting
// Size: 0xee0 (Inherited: 0x38)
class UClientVehicleSetting : public UEngineSubsystem {
public:

	enum class EVehicleMode VehicleMode; // 0x38(0x01)
	enum class EWeaponVehicleMode WeaponVehicleMode; // 0x39(0x01)
	enum class EDriveAngle DriveAngle; // 0x3a(0x01)
	bool CannonCamFollow; // 0x3b(0x01)
	bool TankCamFollow; // 0x3c(0x01)
	bool TankDirection; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FVehicleSensitivitySetting NormalSetting; // 0x40(0x750)
	struct FVehicleSensitivitySetting FireSetting; // 0x790(0x750)

	void SetSensitivityFactor(bool IsFire, enum class EVehicleSensitivityMode VehicleSensitivityMode, bool IsGyro, float SensitivityFactor, float VerticalSensitivityFactor, float HorizontalSensitivityFactor, struct TArray<float> RotationSensitivityArray_Custom); // Function GPGlobalDefines.ClientVehicleSetting.SetSensitivityFactor // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientVolumeSetting
// Size: 0x68 (Inherited: 0x38)
class UClientVolumeSetting : public UEngineSubsystem {
public:

	float VolumeAll; // 0x38(0x04)
	float VolumeMusic; // 0x3c(0x04)
	float VolumeSFX; // 0x40(0x04)
	float VolumeUI; // 0x44(0x04)
	float VolumeVO; // 0x48(0x04)
	float EarpieceVolume; // 0x4c(0x04)
	float MicrophoneVolume; // 0x50(0x04)
	float VolumeMin; // 0x54(0x04)
	float VolumeMax; // 0x58(0x04)
	enum class ELODLevel LODLevel; // 0x5c(0x01)
	enum class EAudioPresetPCType PCAudioPreset; // 0x5d(0x01)
	enum class EAudioMasteringPCType PCAudioMasteringType; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
	int32_t ThreeDAudioType; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)

	void SaveDataConfig(); // Function GPGlobalDefines.ClientVolumeSetting.SaveDataConfig // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientSensitivitySetting
// Size: 0x2e0 (Inherited: 0x38)
class UClientSensitivitySetting : public UEngineSubsystem {
public:

	enum class ESensitivityMode RotationSensitivityMode; // 0x38(0x01)
	char CategoryLevel_Sensitivity; // 0x39(0x01)
	char CategoryLevel_GyroSensitivity; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct FSensitivityOuterSetting NormalSetting; // 0x40(0x150)
	struct FSensitivityOuterSetting FireSetting; // 0x190(0x150)

	void UpdateCustomSensitivityValues(int32_t LevelNum); // Function GPGlobalDefines.ClientSensitivitySetting.UpdateCustomSensitivityValues // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientDownloadSetting
// Size: 0x40 (Inherited: 0x38)
class UClientDownloadSetting : public UEngineSubsystem {
public:

	char DownloadType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	void SaveDataConfig(); // Function GPGlobalDefines.ClientDownloadSetting.SaveDataConfig // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientChatSetting
// Size: 0x48 (Inherited: 0x38)
class UClientChatSetting : public UEngineSubsystem {
public:

	bool bShowWorld; // 0x38(0x01)
	bool bShowNear; // 0x39(0x01)
	bool bShowPrivate; // 0x3a(0x01)
	bool bShowTeam; // 0x3b(0x01)
	bool bShowUnion; // 0x3c(0x01)
	bool bAutoPlayWorld; // 0x3d(0x01)
	bool bAutoPlayNear; // 0x3e(0x01)
	bool bAutoPlayPrivate; // 0x3f(0x01)
	bool bAutoPlayTeam; // 0x40(0x01)
	bool bAutoPlayUnion; // 0x41(0x01)
	bool bForbiddenStranger; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)

	void SaveDataConfig(); // Function GPGlobalDefines.ClientChatSetting.SaveDataConfig // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientComminicateSetting
// Size: 0x1d8 (Inherited: 0x38)
class UClientComminicateSetting : public UEngineSubsystem {
public:

	struct TArray<int32_t> SolChatArray; // 0x38(0x10)
	struct TArray<int32_t> RaidChatArray; // 0x48(0x10)
	struct TArray<int32_t> BattleChatArray; // 0x58(0x10)
	struct TMap<char, bool> bOpenFlag; // 0x68(0x50)
	struct TMap<char, bool> bOpenFlagVoice; // 0xb8(0x50)
	bool bAutoMarkingTeammateWishItem; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TMap<char, float> RouletteColorA; // 0x110(0x50)
	float RouletteColorAMax; // 0x160(0x04)
	float RouletteColorAMin; // 0x164(0x04)
	struct TMap<char, float> FlagColorA; // 0x168(0x50)
	float FlagColorAMax; // 0x1b8(0x04)
	float FlagColorAMin; // 0x1bc(0x04)
	bool bMPSingleClickCreateLocMark; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	float BattleFlagSize; // 0x1c4(0x04)
	float BattleFlagSizeMin; // 0x1c8(0x04)
	float BattleFlagSizeMax; // 0x1cc(0x04)
	float BattleFlagColorA; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)

	void SaveDataConfig(); // Function GPGlobalDefines.ClientComminicateSetting.SaveDataConfig // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientSolSetting
// Size: 0x78 (Inherited: 0x38)
class UClientSolSetting : public UEngineSubsystem {
public:

	bool bSafeBoxPreferMarkItem; // 0x38(0x01)
	bool bSafeBoxPreferHighValueItem; // 0x39(0x01)
	bool bHurtCloseLootPanel; // 0x3a(0x01)
	bool bEnableTreat; // 0x3b(0x01)
	float SafeBoxPriceThreshold; // 0x3c(0x04)
	float OpenRouletteTime; // 0x40(0x04)
	float MaxOpenRouletteTime; // 0x44(0x04)
	float MinOpenRouletteTime; // 0x48(0x04)
	bool bIsAuctionAutoOrganize; // 0x4c(0x01)
	bool bInventoryAutoNewline; // 0x4d(0x01)
	bool bInventorySortEveryEnter; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	float InfantryVision; // 0x50(0x04)
	float VehicleVision; // 0x54(0x04)
	float AirPlaneVision; // 0x58(0x04)
	float VisionMin; // 0x5c(0x04)
	float VisionMax; // 0x60(0x04)
	float MpMapScale; // 0x64(0x04)
	float MpMapScaleMin; // 0x68(0x04)
	float MpMapScaleMax; // 0x6c(0x04)
	bool bMapAutoRotateSol; // 0x70(0x01)
	bool bMapAutoRotateMp; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)

	void SaveDataConfig(); // Function GPGlobalDefines.ClientSolSetting.SaveDataConfig // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.AdvancedVideoSetting
// Size: 0x98 (Inherited: 0x38)
class UAdvancedVideoSetting : public UEngineSubsystem {
public:

	char pad_38[0x58]; // 0x38(0x58)
	struct UDataTable* ParamSettings; // 0x90(0x08)

	void SetRayTracingEnable(bool bEnabled); // Function GPGlobalDefines.AdvancedVideoSetting.SetRayTracingEnable // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPCachePool
// Size: 0x48 (Inherited: 0x30)
class UGPCachePool : public UObject {
public:

	struct TArray<struct FCacheObjectInfo> CachedObjectArray; // 0x30(0x10)
	float CheckToDestroyTimeStep; // 0x40(0x04)
	float CheckElapsedTime; // 0x44(0x04)

	void RemoveWaitingDestroyObject(struct UObject* obj); // Function GPGlobalDefines.GPCachePool.RemoveWaitingDestroyObject // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPCatenaryUtil
// Size: 0x30 (Inherited: 0x30)
class UGPCatenaryUtil : public UBlueprintFunctionLibrary {
public:


	struct TArray<struct FVector> STATIC_CreateCatenaryPoints(struct FVector Point1, struct FVector Point2, float Length, struct FVector Up, int32_t NumPoints); // Function GPGlobalDefines.GPCatenaryUtil.CreateCatenaryPoints // (Final|Native|Static|Private|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPCharacterInterface
// Size: 0x30 (Inherited: 0x30)
class UGPCharacterInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPDebugDrawComponent
// Size: 0x150 (Inherited: 0x100)
class UGPDebugDrawComponent : public UActorComponent {
public:

	char pad_100[0x14]; // 0x100(0x14)
	bool bDrawServerDebugBox; // 0x114(0x01)
	bool bDrawClientDebugBox; // 0x115(0x01)
	char pad_116[0xa]; // 0x116(0x0a)
	struct FTransform ServerDebugBox; // 0x120(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPGlobalUtil
// Size: 0x30 (Inherited: 0x30)
class UGPGlobalUtil : public UBlueprintFunctionLibrary {
public:


	bool STATIC_IsStandalone(struct UObject* WorldContextObject); // Function GPGlobalDefines.GPGlobalUtil.IsStandalone // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPWidgetUtil
// Size: 0x30 (Inherited: 0x30)
class UGPWidgetUtil : public UBlueprintFunctionLibrary {
public:


	void STATIC_TransformFromWorldToScreenMarker(enum class EMarkerEdgeType MarkerEdgeType, struct FVector2D CustomMarkerCircleScale, enum class EMarkerEdgeTrackType MarkerEdgeTrackType, struct FMatrix ViewProjectMatrix, struct FVector CameraDir, struct FVector CameraLoc, struct FVector2D ViewportSize, float ViewportScale, struct FVector MarkerWorldLoc, struct FVector2D MarkerAnchor2CenterOffset, struct FVector2D& MarkerScreenPos, bool& bOnCameraBack, bool& bTrackOnEdge, struct FVector2D& OutEdgeDir); // Function GPGlobalDefines.GPWidgetUtil.TransformFromWorldToScreenMarker // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPGlobalConfig
// Size: 0x48 (Inherited: 0x40)
class UGPGlobalConfig : public UDeveloperSettings {
public:

	bool bDebugDraw; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	void STATIC_SetDebugDrawEnabled(bool bValue); // Function GPGlobalDefines.GPGlobalConfig.SetDebugDrawEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPLevelEnvEvents
// Size: 0x48 (Inherited: 0x38)
class UGPLevelEnvEvents : public UWorldSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char OnEnvEvent[0x10]; // 0x38(0x10)

	void STATIC_FireEnvEvent(struct UObject* EventSourceObject, struct FName EventName); // Function GPGlobalDefines.GPLevelEnvEvents.FireEnvEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPPlayerInfoUtils
// Size: 0x30 (Inherited: 0x30)
class UGPPlayerInfoUtils : public UBlueprintFunctionLibrary {
public:


	struct FString STATIC_ToString(struct FGPPlayerBasicInfo& InInfo); // Function GPGlobalDefines.GPPlayerInfoUtils.ToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPShowActorTags
// Size: 0x390 (Inherited: 0x378)
class AGPShowActorTags : public AActor {
public:

	struct FColor TagsColor; // 0x378(0x04)
	bool bShowTagsInEditor; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
	struct FString FinalString; // 0x380(0x10)

	bool ShowTagsInEditor(); // Function GPGlobalDefines.GPShowActorTags.ShowTagsInEditor // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPSpawnerBase
// Size: 0x378 (Inherited: 0x378)
class AGPSpawnerBase : public AActor {
public:


	void SpawnActors(); // Function GPGlobalDefines.GPSpawnerBase.SpawnActors // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPSpawnPool
// Size: 0xf8 (Inherited: 0x38)
class UGPSpawnPool : public UWorldSubsystem {
public:

	struct TArray<struct AActor*> AllChars; // 0x38(0x10)
	char pad_48[0xb0]; // 0x48(0xb0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPSplineUtil
// Size: 0x30 (Inherited: 0x30)
class UGPSplineUtil : public UBlueprintFunctionLibrary {
public:


	void STATIC_SnapToGround(struct USplineComponent* SplineComp, bool bInAlign); // Function GPGlobalDefines.GPSplineUtil.SnapToGround // (Final|Native|Static|Private|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPVehicleInterface
// Size: 0x30 (Inherited: 0x30)
class UGPVehicleInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.HeavyTaskScheduler
// Size: 0x60 (Inherited: 0x38)
class UHeavyTaskScheduler : public UWorldSubsystem {
public:

	char pad_38[0x28]; // 0x38(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ItemIDUtil
// Size: 0x30 (Inherited: 0x30)
class UItemIDUtil : public UObject {
public:


	uint64_t STATIC_ToUint64(struct FItemID ItemID); // Function GPGlobalDefines.ItemIDUtil.ToUint64 // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ItemInterface
// Size: 0x30 (Inherited: 0x30)
class UItemInterface : public UInterface {
public:


	struct FSoftObjectPath GetItemMesh3PPath(uint64_t ItemID); // Function GPGlobalDefines.ItemInterface.GetItemMesh3PPath // (Native|Public|HasDefaults) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPTriggerBase
// Size: 0x3c0 (Inherited: 0x380)
class AGPTriggerBase : public ATriggerBox {
public:

	enum class EGPTriggerMode TriggerMode; // 0x380(0x01)
	enum class EGPTriggerAuth TriggerAuth; // 0x381(0x01)
	char pad_382[0x2]; // 0x382(0x02)
	struct FName LevelEnvEvent; // 0x384(0x08)
	char pad_38C[0x4]; // 0x38c(0x04)
	/*struct TSoftObjectPtr<AActor>*/char SpecialTrigger[0x28]; // 0x390(0x28)
	bool bWhenEndOverlap; // 0x3b8(0x01)
	bool bTriggerMute; // 0x3b9(0x01)
	bool bTriggerOnce; // 0x3ba(0x01)
	bool bDebugDraw; // 0x3bb(0x01)
	int32_t TriggerNum; // 0x3bc(0x04)

	void TryTrigger(); // Function GPGlobalDefines.GPTriggerBase.TryTrigger // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientSettingHelperHD
// Size: 0x48 (Inherited: 0x38)
class UClientSettingHelperHD : public UEngineSubsystem {
public:

	char pad_38[0x10]; // 0x38(0x10)

	void SaveToSaved(); // Function GPGlobalDefines.ClientSettingHelperHD.SaveToSaved // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.GPEffectTriggerBase
// Size: 0x3e8 (Inherited: 0x3c0)
class AGPEffectTriggerBase : public AGPTriggerBase {
public:

	bool AutoSpawn; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	float Alpha; // 0x3c4(0x04)
	float size; // 0x3c8(0x04)
	struct FLinearColor Color; // 0x3cc(0x10)
	float BoxScale; // 0x3dc(0x04)
	float SphereScale; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)

	void CallBPFunction(int32_t Code); // Function GPGlobalDefines.GPEffectTriggerBase.CallBPFunction // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientBHDSetting
// Size: 0xf0 (Inherited: 0x48)
class UClientBHDSetting : public UClientSettingHelperHD {
public:

	bool bVaultTriggerMode; // 0x48(0x01)
	bool bCanMouseTurnMelee; // 0x49(0x01)
	bool bSeparateSideAiming; // 0x4a(0x01)
	bool bScopeUseRT; // 0x4b(0x01)
	bool bSceneFOVCalcOpenCameraFOV; // 0x4c(0x01)
	enum class EHitEffectColor HitEffectColor; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	float PassengerWeaponSensitivity; // 0x50(0x04)
	bool bOpenFlagVoice; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float FlagColorA; // 0x58(0x04)
	float BaseSensitivity; // 0x5c(0x04)
	float VerticalSensitivity; // 0x60(0x04)
	float HorizontalSensitivity; // 0x64(0x04)
	float BaseADSSensitivity; // 0x68(0x04)
	float AimVerticalSensitivity; // 0x6c(0x04)
	float AimHorizontalSensitivity; // 0x70(0x04)
	enum class ESensitivityModeHD SensitivityMode; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct TArray<struct FWeaponZoomDataHD> ZoomDataHD; // 0x78(0x10)
	struct TArray<struct FZoomratedDataHD> ZoomratedMDV; // 0x88(0x10)
	float MDV; // 0x98(0x04)
	int32_t MDVSwitchingMode; // 0x9c(0x04)
	bool bAllVerticalMMReversed; // 0xa0(0x01)
	bool bInfantryVerticalMMReversed; // 0xa1(0x01)
	bool bDisplay_PerformanceStatus; // 0xa2(0x01)
	char pad_A3[0x1]; // 0xa3(0x01)
	float VolumeAll; // 0xa4(0x04)
	float Volume_Music; // 0xa8(0x04)
	float Volume_SFX; // 0xac(0x04)
	float Volume_UI; // 0xb0(0x04)
	float Volume_VO; // 0xb4(0x04)
	float Volume_GVoice; // 0xb8(0x04)
	float Volume_Microphone; // 0xbc(0x04)
	int32_t AudioDynamicRange; // 0xc0(0x04)
	int32_t AudioLevel; // 0xc4(0x04)
	int32_t MicrophoneButtonType; // 0xc8(0x04)
	int32_t ThreeDAudioType; // 0xcc(0x04)
	struct FString AudioInputDevice; // 0xd0(0x10)
	struct FString AudioOutputDevice; // 0xe0(0x10)

	void SetZoomratedMDVByIndex(int32_t Index, float Value); // Function GPGlobalDefines.ClientBHDSetting.SetZoomratedMDVByIndex // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientBaseSettingHD
// Size: 0x68 (Inherited: 0x48)
class UClientBaseSettingHD : public UClientSettingHelperHD {
public:

	struct FString DataTableGUID; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char OnSettingHD[0x10]; // 0x58(0x10)

	void SettingHD(struct TArray<struct FString>& Args); // Function GPGlobalDefines.ClientBaseSettingHD.SettingHD // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientSensitivitySettingHD
// Size: 0xc8 (Inherited: 0x48)
class UClientSensitivitySettingHD : public UClientSettingHelperHD {
public:

	float MDV; // 0x48(0x04)
	float BaseADSSensitivity; // 0x4c(0x04)
	float BaseSensitivity; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FWeaponZoomDataHD> ZoomDataHD; // 0x58(0x10)
	bool bUseCustomADS; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32_t MDVSwitchingMode; // 0x6c(0x04)
	int32_t SideAimingSwitchMode; // 0x70(0x04)
	bool TestSwitcher; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct FString ZoomDataTableGUID; // 0x78(0x10)
	float UISensitivity; // 0x88(0x04)
	float HorizontalSensitivity; // 0x8c(0x04)
	float VerticalSensitivity; // 0x90(0x04)
	float AimHorizontalSensitivity; // 0x94(0x04)
	float AimVerticalSensitivity; // 0x98(0x04)
	enum class ESensitivityModeHD SensitivityMode; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct TArray<struct FZoomratedDataHD> ZoomratedMDV; // 0xa0(0x10)
	enum class ESideAimingControlMode SideAimingControlMode; // 0xb0(0x01)
	bool bAllVerticalMMReversed; // 0xb1(0x01)
	bool bInfantryVerticalMMReversed; // 0xb2(0x01)
	bool bVehicleVerticalMMReversed; // 0xb3(0x01)
	bool bHelicopterVerticalMMReversed; // 0xb4(0x01)
	bool bGunnerVerticalMMReversed; // 0xb5(0x01)
	bool bSceneFOVCalcOpenCameraFOV; // 0xb6(0x01)
	char pad_B7[0x1]; // 0xb7(0x01)
	/*struct FMulticastInlineDelegate*/char OnSideAimingControlModeChanged[0x10]; // 0xb8(0x10)

	void SetZoomratedMDVByIndex(int32_t Index, float Value); // Function GPGlobalDefines.ClientSensitivitySettingHD.SetZoomratedMDVByIndex // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientCameraSettingHD
// Size: 0x50 (Inherited: 0x48)
class UClientCameraSettingHD : public UClientSettingHelperHD {
public:

	float FPPViewRange; // 0x48(0x04)
	float BasicFovForScale; // 0x4c(0x04)

	struct UClientCameraSettingHD* STATIC_Get(struct UObject* WorldContextObject); // Function GPGlobalDefines.ClientCameraSettingHD.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientVideoSettingHD
// Size: 0x180 (Inherited: 0x48)
class UClientVideoSettingHD : public UClientSettingHelperHD {
public:

	char pad_48[0x20]; // 0x48(0x20)
	int32_t DisplayMode; // 0x68(0x04)
	int32_t Resolution; // 0x6c(0x04)
	int32_t ResolutionX; // 0x70(0x04)
	int32_t ResolutionY; // 0x74(0x04)
	int32_t AntiAliasingMethod; // 0x78(0x04)
	int32_t SuperResolutionMethod; // 0x7c(0x04)
	int32_t SuperResolutionQualityDLSS; // 0x80(0x04)
	int32_t SuperResolutionQualityTSR; // 0x84(0x04)
	int32_t SuperResolutionQualityFSR2; // 0x88(0x04)
	int32_t SuperResolutionQualityXESS; // 0x8c(0x04)
	bool DLSSFrameGeneration; // 0x90(0x01)
	bool NVIDIAReflex; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	int32_t NVIDIAReflexMode; // 0x94(0x04)
	bool FastSync; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t RayTracingQuality; // 0x9c(0x04)
	int32_t RayTracingGlobalIllumination; // 0xa0(0x04)
	int32_t RayTracingReflections; // 0xa4(0x04)
	int32_t RayTracingAmbientOcclusion; // 0xa8(0x04)
	int32_t RayTracingShadows; // 0xac(0x04)
	bool bWorldMotionBlur; // 0xb0(0x01)
	bool bWeaponMotionBlur; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	int32_t MotionBlurQuality; // 0xb4(0x04)
	int32_t ReflectionQuality; // 0xb8(0x04)
	int32_t TextureFilteringQuality; // 0xbc(0x04)
	int32_t AmbientOcclusionQuality; // 0xc0(0x04)
	int32_t ParticleQuality; // 0xc4(0x04)
	int32_t DistortionQuality; // 0xc8(0x04)
	int32_t SceneDetailLevel; // 0xcc(0x04)
	int32_t ViewDistanceLevel; // 0xd0(0x04)
	bool VSync; // 0xd4(0x01)
	bool bDepthOfFieldADS; // 0xd5(0x01)
	bool bDepthOfFieldADSRuntime; // 0xd6(0x01)
	char pad_D7[0x1]; // 0xd7(0x01)
	int32_t Brightness; // 0xd8(0x04)
	int32_t ShadingQuality; // 0xdc(0x04)
	int32_t TextureQuality; // 0xe0(0x04)
	int32_t StreamingQuality; // 0xe4(0x04)
	int32_t ShadowQuality; // 0xe8(0x04)
	int32_t ShadowMapResolution; // 0xec(0x04)
	int32_t PostProcessQuality; // 0xf0(0x04)
	int32_t FoliageQuality; // 0xf4(0x04)
	int32_t AnimationQuality; // 0xf8(0x04)
	int32_t GraphicsPreset; // 0xfc(0x04)
	struct FString MonitorID; // 0x100(0x10)
	int32_t AdapterID; // 0x110(0x04)
	int32_t RefreshRate; // 0x114(0x04)
	int32_t MaxFPS; // 0x118(0x04)
	int32_t MaxFPSFrontEnd; // 0x11c(0x04)
	int32_t RenderScale; // 0x120(0x04)
	int32_t VolumetricFogQuality; // 0x124(0x04)
	struct FString RecommandVersion; // 0x128(0x10)
	int32_t ViewportRatio; // 0x138(0x04)
	struct FIntPoint ViewportRatioValue; // 0x13c(0x08)
	int32_t GameplayQuality; // 0x144(0x04)
	int32_t Sharpen; // 0x148(0x04)
	int32_t GIQuality; // 0x14c(0x04)
	int32_t ArtStyle; // 0x150(0x04)
	int32_t BenchmarkLevel; // 0x154(0x04)
	int32_t CPUBenchmarkLevel; // 0x158(0x04)
	int32_t GPUBenchmarkLevel; // 0x15c(0x04)
	int32_t RamBenchmarkLevel; // 0x160(0x04)
	int32_t VRamBenchmarkLevel; // 0x164(0x04)
	struct FIntPoint RealViewportResolution; // 0x168(0x08)
	bool bOnceGPUDriverWarning; // 0x170(0x01)
	bool bScopeUseRT; // 0x171(0x01)
	bool bOnceReBarWarning; // 0x172(0x01)
	char pad_173[0x5]; // 0x173(0x05)
	struct UDataTable* ResolutionVRamTable; // 0x178(0x08)

	void ToggleWindowTitleBar(bool bEnable); // Function GPGlobalDefines.ClientVideoSettingHD.ToggleWindowTitleBar // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientVehicleSettingHD
// Size: 0x130 (Inherited: 0x48)
class UClientVehicleSettingHD : public UClientSettingHelperHD {
public:

	bool CannonCamFollow; // 0x48(0x01)
	bool VehiclePlaneMouseReverse; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct FVehicleSensitivityOuterSettingHD DriverWeaponSensitivity; // 0x50(0x38)
	struct FVehicleSensitivityOuterSettingHD HelicopterDriverWeaponSensitivity; // 0x88(0x38)
	struct FVehicleSensitivityOuterSettingHD PassengerWeaponSensitivity; // 0xc0(0x38)
	float FOVRatioTPP; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString ZoomDataTableGUID; // 0x100(0x10)
	struct FString ZoomDataTableGUID2; // 0x110(0x10)
	struct FString ZoomDataTableGUID3; // 0x120(0x10)

	void SetZoomratedMDVByIndex(enum class EMouseSensitivityMode MouseInputType, int32_t Index, float Value); // Function GPGlobalDefines.ClientVehicleSettingHD.SetZoomratedMDVByIndex // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientGameSettingHD
// Size: 0x70 (Inherited: 0x48)
class UClientGameSettingHD : public UClientSettingHelperHD {
public:

	bool bRunBreakReload; // 0x48(0x01)
	bool bAutoUpRun; // 0x49(0x01)
	bool bAutoUpRunMP; // 0x4a(0x01)
	bool bSeparateVault; // 0x4b(0x01)
	bool bVaultTriggerMode; // 0x4c(0x01)
	bool bSprintCloseBag; // 0x4d(0x01)
	bool bCanMouseTurnMelee; // 0x4e(0x01)
	enum class ESensitivityChangeMode SensitivityChangeMode; // 0x4f(0x01)
	enum class EHitEffectColor HitEffectColor; // 0x50(0x01)
	bool bOpenFlagVoice; // 0x51(0x01)
	bool bAutoMarkingTeammateWishItem; // 0x52(0x01)
	char pad_53[0x1]; // 0x53(0x01)
	float RouletteColorA; // 0x54(0x04)
	float FlagColorA; // 0x58(0x04)
	bool bMPSingleClickCreateLocMark; // 0x5c(0x01)
	bool bSafeBoxPreferMarkItem; // 0x5d(0x01)
	bool bSafeBoxPreferHighValueItem; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
	int32_t SafeBoxPriceThreshold; // 0x60(0x04)
	bool bInventoryAutoNewline; // 0x64(0x01)
	bool bInventorySortEveryEnter; // 0x65(0x01)
	bool bAutoHoldBreathOnZoom; // 0x66(0x01)
	enum class EScopeOpenMode SideAimOpenMode; // 0x67(0x01)
	bool bSceneFOVCalcOpenCameraFOV; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)

	struct UClientGameSettingHD* STATIC_Get(struct UObject* WorldContextObject); // Function GPGlobalDefines.ClientGameSettingHD.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientDisplaySettingHD
// Size: 0x110 (Inherited: 0x48)
class UClientDisplaySettingHD : public UClientSettingHelperHD {
public:

	struct TMap<struct FName, int32_t> OptionalHUDPanelGHS; // 0x48(0x50)
	struct TMap<struct FName, bool> OptionalHUDPanelSwitchers; // 0x98(0x50)
	bool bEnablePickupDetailHUD; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float InfantryVision; // 0xec(0x04)
	float VehicleVision; // 0xf0(0x04)
	float AirPlaneVision; // 0xf4(0x04)
	float MpMapScale; // 0xf8(0x04)
	bool bMapAutoRotateSol; // 0xfc(0x01)
	bool bMapAutoRotateMp; // 0xfd(0x01)
	bool bHurtCloseLootPanel; // 0xfe(0x01)
	char pad_FF[0x1]; // 0xff(0x01)
	struct FString Culture; // 0x100(0x10)

	struct UClientDisplaySettingHD* STATIC_Get(struct UObject* WorldContextObject); // Function GPGlobalDefines.ClientDisplaySettingHD.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class GPGlobalDefines.ClientAudioSettingHD
// Size: 0xa0 (Inherited: 0x48)
class UClientAudioSettingHD : public UClientSettingHelperHD {
public:

	float VolumeAll; // 0x48(0x04)
	float Volume_Music; // 0x4c(0x04)
	float Volume_SFX; // 0x50(0x04)
	float Volume_UI; // 0x54(0x04)
	float Volume_VO; // 0x58(0x04)
	float Volume_GVoice; // 0x5c(0x04)
	float Volume_Microphone; // 0x60(0x04)
	float Volume_Mark; // 0x64(0x04)
	int32_t AudioDynamicRange; // 0x68(0x04)
	int32_t AudioLevel; // 0x6c(0x04)
	int32_t MicrophoneButtonType; // 0x70(0x04)
	int32_t SpeakingChanel; // 0x74(0x04)
	int32_t ListeningChanel; // 0x78(0x04)
	int32_t ThreeDAudioType; // 0x7c(0x04)
	struct FString AudioInputDevice; // 0x80(0x10)
	struct FString AudioOutputDevice; // 0x90(0x10)

	struct UClientAudioSettingHD* STATIC_Get(struct UObject* WorldContextObject); // Function GPGlobalDefines.ClientAudioSettingHD.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
