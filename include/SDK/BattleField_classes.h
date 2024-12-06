
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class BattleField.BattleFieldAudioPlayerComponent
// Size: 0x448 (Inherited: 0x100)
class UBattleFieldAudioPlayerComponent : public UActorComponent {
public:

	struct FSoftObjectPath BroadcastAudioTablePath; // 0x100(0x18)
	struct FSoftObjectPath PlayerAudioTablePath; // 0x118(0x18)
	struct FSoftObjectPath TipsTablePath; // 0x130(0x18)
	struct FSoftObjectPath BGMTablePath; // 0x148(0x18)
	char pad_160[0x20]; // 0x160(0x20)
	struct TArray<struct UGPAudioEventAsset*> CacheBroadcastAudioArr; // 0x180(0x10)
	struct TArray<struct UGPAudioEventAsset*> CachePlayerAudioArr; // 0x190(0x10)
	struct TArray<struct UGPAudioEventAsset*> CacheBGMArr; // 0x1a0(0x10)
	char pad_1B0[0x140]; // 0x1b0(0x140)
	struct TArray<struct FBattleFieldAudioInfo> AudioCacheArr; // 0x2f0(0x10)
	struct TArray<struct FBattleFieldAudioInfo> PlayerAudioCacheArr; // 0x300(0x10)
	struct TArray<struct FBattleFieldTipInfo> TipsCacheArr; // 0x310(0x10)
	struct FGPAudioFuturePlayingID CurrentBroadcastAudioId; // 0x320(0x08)
	struct FGPAudioFuturePlayingID CurrentPlayerAudioId; // 0x328(0x08)
	char pad_330[0x28]; // 0x330(0x28)
	struct TMap<enum class EBroadcastAudioType, float> BroadcastAudioTriggerTimeMap; // 0x358(0x50)
	struct TMap<enum class EPlayerAudioType, float> PlayerAudioTriggerTimeMap; // 0x3a8(0x50)
	struct TMap<enum class EBattleFieldTipType, float> TipsTriggerTimeMap; // 0x3f8(0x50)

	void ServerTriggerTip(struct FBattleFieldTipInfo TipInfo); // Function BattleField.BattleFieldAudioPlayerComponent.ServerTriggerTip // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldCapturePoint
// Size: 0x548 (Inherited: 0x378)
class ABattleFieldCapturePoint : public AActor {
public:

	char pad_378[0x10]; // 0x378(0x10)
	struct USceneComponent* SceneComponent; // 0x388(0x08)
	struct UShapeComponent* CollisionComp; // 0x390(0x08)
	struct UMaterialInstance* CapturedMat; // 0x398(0x08)
	struct UMaterialInstance* NeutralMat; // 0x3a0(0x08)
	struct UMaterialInstance* EnemyCapturedMat; // 0x3a8(0x08)
	struct AStaticMeshActor* ShowModel; // 0x3b0(0x08)
	struct FText Name; // 0x3b8(0x18)
	struct FText NameInIcon; // 0x3d0(0x18)
	int32_t RebornCloseRange; // 0x3e8(0x04)
	int32_t RebornFarRange; // 0x3ec(0x04)
	int32_t DefenseRange; // 0x3f0(0x04)
	int32_t RebornTimeLimit; // 0x3f4(0x04)
	struct TArray<struct AGPPlayerState*> Camp0OverlapedPlayer; // 0x3f8(0x10)
	struct TArray<struct AGPPlayerState*> Camp1OverlapedPlayer; // 0x408(0x10)
	float CaptureNeedValue; // 0x418(0x04)
	float Captured2NeutralNeedValue; // 0x41c(0x04)
	float TickInterval; // 0x420(0x04)
	float PlayerGetValueEveryTick; // 0x424(0x04)
	float CampCaptureIncreaseLimitValue; // 0x428(0x04)
	float CapturingGetPlayerScoreInterval; // 0x42c(0x04)
	int32_t CaptureGetCampScore; // 0x430(0x04)
	int32_t CaptureGetCampScoreDelay; // 0x434(0x04)
	struct TArray<int32_t> CampIdList; // 0x438(0x10)
	struct TArray<float> CampCaptureValue; // 0x448(0x10)
	int32_t CaptureCamp; // 0x458(0x04)
	enum class ECaptureState CaptureState; // 0x45c(0x04)
	bool IsBattling; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	int32_t CampAdvanced; // 0x464(0x04)
	char pad_468[0x48]; // 0x468(0x48)
	bool bShowCapMarker; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct TArray<struct TWeakObjectPtr<struct ADFMCharacter>> Camp0InsideCharacters; // 0x4b8(0x10)
	struct TArray<struct TWeakObjectPtr<struct ADFMCharacter>> Camp1InsideCharacters; // 0x4c8(0x10)
	struct TArray<int32_t> Camp0CaptureTimeStamp; // 0x4d8(0x10)
	struct TArray<int32_t> Camp1CaptureTimeStamp; // 0x4e8(0x10)
	struct TArray<struct ADFMAIPlayerController*> DefendingAIList; // 0x4f8(0x10)
	char pad_508[0x40]; // 0x508(0x40)

	void OnRep_CapturedCamp(int32_t OldCamp); // Function BattleField.BattleFieldCapturePoint.OnRep_CapturedCamp // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldCharacter
// Size: 0x2ac0 (Inherited: 0x2a98)
class ABattleFieldCharacter : public ADFMPlayerCharacter {
public:

	char pad_2A98[0x3]; // 0x2a98(0x03)
	enum class EInGameBattleClassType BattleClassType; // 0x2a9b(0x01)
	int32_t DefaultPlayerArmedForceID; // 0x2a9c(0x04)
	int64_t DefaultPlayerExpertID; // 0x2aa0(0x08)
	struct UDFMRedeployComponent* DFMRedeployComponent; // 0x2aa8(0x08)
	struct UBattleFieldHealthDataComponent* BattleFieldHealthDataComponent; // 0x2ab0(0x08)
	char pad_2AB8[0x8]; // 0x2ab8(0x08)

	bool SwitchWeaponPreset(uint64_t WeaponItemId, int32_t WeaponPresetIndex); // Function BattleField.BattleFieldCharacter.SwitchWeaponPreset // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldCharacterDeathConfigMgr
// Size: 0xa0 (Inherited: 0x38)
class UBattleFieldCharacterDeathConfigMgr : public UDataTableSystemManagerBase {
public:

	char pad_38[0x68]; // 0x38(0x68)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldDSLogic
// Size: 0x5a0 (Inherited: 0x5a0)
class UBattleFieldDSLogic : public UDFMDSLogic {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldGameMode
// Size: 0x810 (Inherited: 0x7c0)
class ABattleFieldGameMode : public ADFMGameMode {
public:

	char pad_7C0[0x10]; // 0x7c0(0x10)
	struct TArray<struct UDFMGameRuleComponent*> BattleFieldGameRuleComponents; // 0x7d0(0x10)
	struct UDFMGameRuleComponent* ActivedGameRuleComponent; // 0x7e0(0x08)
	char pad_7E8[0x1]; // 0x7e8(0x01)
	bool EnableFastRebornSetting; // 0x7e9(0x01)
	char pad_7EA[0x6]; // 0x7ea(0x06)
	struct TArray<struct APlayerStart*> RedPlayerStarts; // 0x7f0(0x10)
	struct TArray<struct APlayerStart*> BluePlayerStarts; // 0x800(0x10)

	void RebornPlayer(struct AController* PlayerController); // Function BattleField.BattleFieldGameMode.RebornPlayer // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldGameRuleComponent
// Size: 0x250 (Inherited: 0x150)
class UBattleFieldGameRuleComponent : public UDFMGameRuleComponent {
public:

	struct TArray<enum class EGameFeature> ModeCategoryArray; // 0x150(0x10)
	int64_t ModeCategory; // 0x160(0x08)
	int32_t TargetScoreCount; // 0x168(0x04)
	int32_t SingleGetScore; // 0x16c(0x04)
	int32_t MaxMatchDuration; // 0x170(0x04)
	int32_t RebornTime; // 0x174(0x04)
	int32_t OneSideCountLimit; // 0x178(0x04)
	char pad_17C[0xc]; // 0x17c(0x0c)
	/*struct FMulticastInlineDelegate*/char OnAllPlayerLoginFinishedDelegate[0x10]; // 0x188(0x10)
	char pad_198[0x50]; // 0x198(0x50)
	struct ABattleFieldGameState* BattleFieldGameState; // 0x1e8(0x08)
	struct ABattleFieldGameMode* BattleFieldGameMode; // 0x1f0(0x08)
	struct ABattleFieldHUD* BattleFieldHUD; // 0x1f8(0x08)
	struct UBattlefieldRebornComponent* RebornComponent; // 0x200(0x08)
	struct UDFMScoreStatisticsComponent* ScoreStaticsComponent; // 0x208(0x08)
	char pad_210[0x10]; // 0x210(0x10)
	float LastNormalFireTime; // 0x220(0x04)
	char pad_224[0x2c]; // 0x224(0x2c)

	void RequsetReborn(struct FRebornInformation RebornInformation); // Function BattleField.BattleFieldGameRuleComponent.RequsetReborn // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldGameState
// Size: 0xc60 (Inherited: 0xa38)
class ABattleFieldGameState : public ADFMGameState {
public:

	struct TArray<int32_t> CampScoreList; // 0xa38(0x10)
	struct TArray<int32_t> CampIdList; // 0xa48(0x10)
	struct TArray<struct FPlayerStatItem> PlayerStatistics_BF; // 0xa58(0x10)
	struct TArray<struct FPlayerKillAssistInfo> PlayerKillAssistInfos; // 0xa68(0x10)
	int32_t TargetScoreCount; // 0xa78(0x04)
	int32_t LeftTime; // 0xa7c(0x04)
	int32_t UsedTime; // 0xa80(0x04)
	char pad_A84[0x4]; // 0xa84(0x04)
	struct TArray<struct ABattleFieldCapturePoint*> CapturePoints; // 0xa88(0x10)
	char pad_A98[0x128]; // 0xa98(0x128)
	struct UBattleFieldNotifySubSystem* BattleFieldNotifySubSystem; // 0xbc0(0x08)
	char pad_BC8[0x20]; // 0xbc8(0x20)
	struct TArray<struct AController*> Camp0Player; // 0xbe8(0x10)
	struct TArray<struct AController*> Camp1Player; // 0xbf8(0x10)
	char pad_C08[0x58]; // 0xc08(0x58)

	void UpdatePlayerStatsOffline(uint64_t InPlayerUin, bool bIsOffline); // Function BattleField.BattleFieldGameState.UpdatePlayerStatsOffline // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldHealthDataComponent
// Size: 0x890 (Inherited: 0x890)
class UBattleFieldHealthDataComponent : public UDFMHealthDataComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldHUD
// Size: 0x728 (Inherited: 0x718)
class ABattleFieldHUD : public ADFMHUD {
public:

	struct ABattleFieldGameState* GameState; // 0x718(0x08)
	struct TWeakObjectPtr<struct AGPPlayerController> PlayerController; // 0x720(0x08)

	void NotifyTeamInfoHUDMVP(); // Function BattleField.BattleFieldHUD.NotifyTeamInfoHUDMVP // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldMapHUDController
// Size: 0x438 (Inherited: 0x2e0)
class UBattleFieldMapHUDController : public UMapBaseHUDController {
public:

	char pad_2E0[0x28]; // 0x2e0(0x28)
	struct UMapInfoSystem* MapInfoSystem; // 0x308(0x08)
	struct UDFMBattleFieldSystem* BattleFieldSystem; // 0x310(0x08)
	struct TArray<struct UCapturePointIconHUDController*> CapturePointIconControllerArr; // 0x318(0x10)
	struct TArray<struct UBattleFieldTeamIconHUDController*> CampIconControllerArr; // 0x328(0x10)
	struct TArray<struct UBattleFieldMapMarkerIconHUDController*> FakeEnemyMarkerControllerArray; // 0x338(0x10)
	struct TArray<struct UBattleFieldMapMarkerIconHUDController*> AvailableMarkControllerArr; // 0x348(0x10)
	struct TArray<struct UBattleFieldMapMarkerIconHUDController*> UsingMarkControllerArr; // 0x358(0x10)
	struct TMap<uint64_t, struct FTimerHandle> EnemyLocationTimeHandleMap; // 0x368(0x50)
	/*struct TSet<struct AActor*>*/char RegisteredMapIconActors[0x50]; // 0x3b8(0x50)
	char pad_408[0x14]; // 0x408(0x14)
	float TickFrequency; // 0x41c(0x04)
	bool bEnableKillInfoIcon; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	float KillInfoDSOutTime; // 0x424(0x04)
	float KillInfoDuration; // 0x428(0x04)
	float OnFireDuration; // 0x42c(0x04)
	float SceneWeaponOnFireDuration; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)

	void OnPlayerKillInfoNtf(struct TArray<struct FKillInfo>& NewAddKillInfo); // Function BattleField.BattleFieldMapHUDController.OnPlayerKillInfoNtf // (Final|Native|Protected|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldMapMarkerIconHUDView
// Size: 0x428 (Inherited: 0x3f8)
class UBattleFieldMapMarkerIconHUDView : public UMapItemHUDView {
public:

	struct UImage* PublicItemIcon; // 0x3f8(0x08)
	char pad_400[0x28]; // 0x400(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldMapMarkerIconHUDController
// Size: 0x2d0 (Inherited: 0x290)
class UBattleFieldMapMarkerIconHUDController : public UMapIconViewController {
public:

	enum class EBattleFieldMapMarkerType markerType; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	uint64_t PlayerUin; // 0x298(0x08)
	struct AGPPlayerState* PSForThis; // 0x2a0(0x08)
	struct FVector2D EnemyImgSize; // 0x2a8(0x08)
	struct FVector2D CampMateImgSize; // 0x2b0(0x08)
	float MinimMapInstancedIconScale_Enemy; // 0x2b8(0x04)
	float MinimMapInstancedIconScale_CampMate; // 0x2bc(0x04)
	struct AGPSceneActorReplicator* SceneActorReplicator; // 0x2c0(0x08)
	char pad_2C8[0x8]; // 0x2c8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldNotifySubSystem
// Size: 0x1a8 (Inherited: 0x100)
class UBattleFieldNotifySubSystem : public UActorComponent {
public:

	char pad_100[0xa0]; // 0x100(0xa0)
	bool bFistkilled; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)

	void ShowAcRising(float RiseTime); // Function BattleField.BattleFieldNotifySubSystem.ShowAcRising // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldPlayerSettlementComponent
// Size: 0x1d8 (Inherited: 0x1d8)
class UBattleFieldPlayerSettlementComponent : public UBasePlayerSettlementComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldPlayerState
// Size: 0x1308 (Inherited: 0x1020)
class ABattleFieldPlayerState : public ADFMPlayerState {
public:

	char pad_1020[0x8]; // 0x1020(0x08)
	struct TArray<struct FTDMArm> TDMArmArray; // 0x1028(0x10)
	struct FTDMWeaponStore WeaponStore; // 0x1038(0xa0)
	struct FTDMWeaponPresetStore WeaponPresetStore; // 0x10d8(0x50)
	struct FTDMSoldierPropsStore SoldierPropsStore; // 0x1128(0xa0)
	struct TArray<uint64_t> WeaponStoreItemIDs; // 0x11c8(0x10)
	struct TArray<uint64_t> DisableWeaponItemIDs; // 0x11d8(0x10)
	struct TArray<uint64_t> AllowWeaponItemIDs; // 0x11e8(0x10)
	struct FWorkingHeroAndBag CurrentArmedPreset; // 0x11f8(0x18)
	struct TMap<uint64_t, int32_t> DirtyWeaponItemIDs; // 0x1210(0x50)
	char pad_1260[0x50]; // 0x1260(0x50)
	struct TArray<uint64_t> NeedShowRedDotNewUnlockWeaponItemIDs; // 0x12b0(0x10)
	bool bSimulateDisableWeaponItem; // 0x12c0(0x01)
	bool bSimulateAllowWeaponItem; // 0x12c1(0x01)
	bool bSimulateLockedWeaponItem; // 0x12c2(0x01)
	char pad_12C3[0x5]; // 0x12c3(0x05)
	struct TArray<uint64_t> SimulateOnlyDefaultPresetWeaponItemIDs; // 0x12c8(0x10)
	struct FSupportAbilityInfo SupportAbilityInfo; // 0x12d8(0x08)
	int32_t BattleLevel; // 0x12e0(0x04)
	char pad_12E4[0x4]; // 0x12e4(0x04)
	struct TArray<int32_t> SupportAbilityScores; // 0x12e8(0x10)
	char pad_12F8[0x4]; // 0x12f8(0x04)
	bool bInAnchor; // 0x12fc(0x01)
	bool IsPlayerOccupyingAnchor; // 0x12fd(0x01)
	char pad_12FE[0x2]; // 0x12fe(0x02)
	uint32_t KillNum; // 0x1300(0x04)
	char pad_1304[0x4]; // 0x1304(0x04)

	void UpdateFootStepAudioStyleID(int64_t CurrHeroID); // Function BattleField.BattleFieldPlayerState.UpdateFootStepAudioStyleID // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattlefieldRebornComponent
// Size: 0x108 (Inherited: 0x100)
class UBattlefieldRebornComponent : public UActorComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldRedeployView
// Size: 0x5d0 (Inherited: 0x3f8)
class UBattleFieldRedeployView : public UDFMBaseUIView {
public:

	struct URedeployConfig* RedeployConfig; // 0x3f8(0x08)
	struct URedeployConfig* RedeployConfigHD; // 0x400(0x08)
	struct UImage* MapBackImage; // 0x408(0x08)
	float TwistDelta; // 0x410(0x04)
	float TwistEnd; // 0x414(0x04)
	float RisingTime; // 0x418(0x04)
	float LandingTime; // 0x41c(0x04)
	struct UPaperSprite* Camp0Img; // 0x420(0x08)
	struct UPaperSprite* Camp0BgImg; // 0x428(0x08)
	struct FColor Camp0Clolor; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct UPaperSprite* Camp1Img; // 0x438(0x08)
	struct UPaperSprite* Camp1BgImg; // 0x440(0x08)
	struct FColor Camp1Clolor; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UPaperSprite* WeaponChangeImg; // 0x450(0x08)
	struct FName WeaponChangeTag; // 0x458(0x08)
	struct UPaperSprite* HummerImg; // 0x460(0x08)
	struct FName HummerTag; // 0x468(0x08)
	struct UPaperSprite* HelicopterImg; // 0x470(0x08)
	struct FName HelicopterTag; // 0x478(0x08)
	struct UPaperSprite* PlayerImg; // 0x480(0x08)
	struct UPaperSprite* PlayerDeidImg; // 0x488(0x08)
	int32_t RebornTimeLimit; // 0x490(0x04)
	int32_t DeathShowTime; // 0x494(0x04)
	struct UPaperSprite* CommandoImg; // 0x498(0x08)
	struct UPaperSprite* ScoutImg; // 0x4a0(0x08)
	struct UPaperSprite* MedicImg; // 0x4a8(0x08)
	struct UPaperSprite* SniperImg; // 0x4b0(0x08)
	struct FTimerHandle RebornTimer; // 0x4b8(0x08)
	struct TArray<struct FInventoryItemInfo> Weapons; // 0x4c0(0x10)
	bool IsInit; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct TArray<uint32_t> Hummers; // 0x4d8(0x10)
	struct TArray<uint32_t> Helicopters; // 0x4e8(0x10)
	struct TArray<uint64_t> AllPlayerIds; // 0x4f8(0x10)
	struct TArray<struct FVector> AllWeaponChanges; // 0x508(0x10)
	struct TArray<int32_t> AllRebornFlagIds; // 0x518(0x10)
	struct TArray<int32_t> AllCapturPointsIds; // 0x528(0x10)
	struct TArray<int32_t> AllTeamStartIds; // 0x538(0x10)
	struct FString MapName; // 0x548(0x10)
	char pad_558[0x8]; // 0x558(0x08)
	struct FMatrix ProjectMat; // 0x560(0x40)
	int32_t LoadPerCent; // 0x5a0(0x04)
	float AcProgress; // 0x5a4(0x04)
	float AcLastTime; // 0x5a8(0x04)
	float Path; // 0x5ac(0x04)
	float Speed; // 0x5b0(0x04)
	bool RisingOrLanding; // 0x5b4(0x01)
	char pad_5B5[0x3]; // 0x5b5(0x03)
	struct FTimerHandle AcTimer; // 0x5b8(0x08)
	struct UUMGSequencePlayer* Sequeue; // 0x5c0(0x08)
	float TimeUsed; // 0x5c8(0x04)
	char pad_5CC[0x4]; // 0x5cc(0x04)

	void ShowWeaponChange(); // Function BattleField.BattleFieldRedeployView.ShowWeaponChange // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldRepPolicy
// Size: 0x400 (Inherited: 0x400)
class ABattleFieldRepPolicy : public AMinimalReplicationPolicy {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldSettlementView
// Size: 0x558 (Inherited: 0x550)
class UBattleFieldSettlementView : public ULuaUIBaseView {
public:

	int32_t WinCamp; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)

	void OnBattleFieldEndMatchEvent(int32_t InWinCamp); // Function BattleField.BattleFieldSettlementView.OnBattleFieldEndMatchEvent // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldStatisticsComponent
// Size: 0x3d8 (Inherited: 0x3d0)
class UBattleFieldStatisticsComponent : public UDFMScoreStatisticsComponent {
public:

	struct ABattleFieldGameState* BattleFieldGameState; // 0x3d0(0x08)

	void CalculateAndShowStickToTheGoalInfo(struct ACHARACTER* CHARACTER); // Function BattleField.BattleFieldStatisticsComponent.CalculateAndShowStickToTheGoalInfo // (Final|Native|Private) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldTeamIconHUDView
// Size: 0x428 (Inherited: 0x3f8)
class UBattleFieldTeamIconHUDView : public UMapItemHUDView {
public:

	struct UImage* PublicItem; // 0x3f8(0x08)
	struct UImage* Icon_Team; // 0x400(0x08)
	struct UCanvasPanel* MainView; // 0x408(0x08)
	struct UPaperSprite* AttackTeam; // 0x410(0x08)
	struct UPaperSprite* DefendTeam; // 0x418(0x08)
	bool bIsMatchSize; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldTeamIconHUDController
// Size: 0x2a0 (Inherited: 0x290)
class UBattleFieldTeamIconHUDController : public UMapIconViewController {
public:

	bool bIsLocalCamp; // 0x290(0x01)
	char pad_291[0xf]; // 0x291(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldTeamSystem
// Size: 0x3b8 (Inherited: 0x3b8)
class ABattleFieldTeamSystem : public ATeamSystem {
public:


	void OnPlayerSettlementEnd(int64_t PlayerUin); // Function BattleField.BattleFieldTeamSystem.OnPlayerSettlementEnd // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleFieldUtil
// Size: 0x30 (Inherited: 0x30)
class UBattleFieldUtil : public UObject {
public:


	struct FString STATIC_PruneString(struct FString InStr, int32_t maxLen); // Function BattleField.BattleFieldUtil.PruneString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BattleReportTipsView
// Size: 0x608 (Inherited: 0x5a8)
class UBattleReportTipsView : public ULuaUIHudBaseView {
public:

	int32_t RedTime; // 0x5a8(0x04)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	struct UTextBlock* TimeText; // 0x5b0(0x08)
	struct UTextBlock* HintText; // 0x5b8(0x08)
	struct UWidgetAnimation* FadeInAnim; // 0x5c0(0x08)
	struct UWidgetAnimation* FadeOutAnim; // 0x5c8(0x08)
	float BattleRemainTime; // 0x5d0(0x04)
	bool bShowing; // 0x5d4(0x01)
	char pad_5D5[0x33]; // 0x5d5(0x33)

	void SetShow(bool Show); // Function BattleField.BattleReportTipsView.SetShow // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BigMapBattleFieldHUDView
// Size: 0x998 (Inherited: 0x940)
class UBigMapBattleFieldHUDView : public UBigMapHUDView {
public:

	struct UScaleBox* BigMapCanvasPanelRef; // 0x940(0x08)
	struct UCanvasPanel* MapBasePanel; // 0x948(0x08)
	float SnapBorderIntersectionRatio; // 0x950(0x04)
	struct FVector2D SnapBorderMarginSize; // 0x954(0x08)
	char pad_95C[0x4]; // 0x95c(0x04)
	struct UDFCommonButton* CommonButton_Self; // 0x960(0x08)
	struct UDFCommonButton* CommonButton_SignClear; // 0x968(0x08)
	struct UButton* DFMButton_268; // 0x970(0x08)
	struct UTextBlock* MapNameText; // 0x978(0x08)
	char pad_980[0x8]; // 0x980(0x08)
	struct UTextBlock* LeftTimeText; // 0x988(0x08)
	char pad_990[0x8]; // 0x990(0x08)

	void OnAddDecSliderCurNumChanged(int32_t InCurNum, int32_t InChangeNum); // Function BattleField.BigMapBattleFieldHUDView.OnAddDecSliderCurNumChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.BTTQ_PvpAIDynamicRunBehavior
// Size: 0x110 (Inherited: 0x90)
class UBTTQ_PvpAIDynamicRunBehavior : public UBTTask_RunBehaviorDynamic {
public:

	struct FBlackboardKeySelector InScenesStageBBKey; // 0x90(0x28)
	struct FBlackboardKeySelector IsRetreatingBBKey; // 0xb8(0x28)
	struct FBlackboardKeySelector AIJobBBKey; // 0xe0(0x28)
	float TickUpdateInterval; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.CanMakeDamageBreakablePawn
// Size: 0x5e8 (Inherited: 0x5b8)
class ACanMakeDamageBreakablePawn : public ABreakablePawn {
public:

	char pad_5B8[0x18]; // 0x5b8(0x18)
	int32_t AttakerId; // 0x5d0(0x04)
	char pad_5D4[0x4]; // 0x5d4(0x04)
	struct TArray<struct UClass*> DamageEffect; // 0x5d8(0x10)

	void DestroyedTrigger(struct FDamageResultInfo& DamageResult); // Function BattleField.CanMakeDamageBreakablePawn.DestroyedTrigger // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.CapturePointIconHUDView
// Size: 0x430 (Inherited: 0x3f8)
class UCapturePointIconHUDView : public UMapItemHUDView {
public:

	struct UImage* Base; // 0x3f8(0x08)
	struct UImage* Image_3; // 0x400(0x08)
	struct UImage* Image_4; // 0x408(0x08)
	struct UImage* Image_5; // 0x410(0x08)
	struct UCanvasPanel* MainView; // 0x418(0x08)
	struct ABattleFieldCapturePoint* CapturePoint; // 0x420(0x08)
	struct UWidgetAnimation* AnimLoop; // 0x428(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.CapturePointIconHUDController
// Size: 0x2a0 (Inherited: 0x290)
class UCapturePointIconHUDController : public UMapIconViewController {
public:

	struct ABattleFieldCapturePoint* CapturePoint; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)

	void OnCapturePointHUDUpdate(struct ABattleFieldCapturePoint* InCapturePoint); // Function BattleField.CapturePointIconHUDController.OnCapturePointHUDUpdate // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.CapturePointMarker
// Size: 0x830 (Inherited: 0x7b0)
class UCapturePointMarker : public UDeployPointBaseWidget {
public:

	struct UTextBlock* NameInIcon; // 0x7b0(0x08)
	struct UImage* UnitIcon; // 0x7b8(0x08)
	struct UTextBlock* DistText; // 0x7c0(0x08)
	struct UImage* CaptureProgressBaseBar; // 0x7c8(0x08)
	struct UImage* CaptureProgressBar; // 0x7d0(0x08)
	struct FLinearColor Blue; // 0x7d8(0x10)
	struct FLinearColor Red; // 0x7e8(0x10)
	struct FLinearColor Neutral; // 0x7f8(0x10)
	struct ABattleFieldCapturePoint* CurCapturePoint; // 0x808(0x08)
	int32_t LocalPlayerCamp; // 0x810(0x04)
	bool bIsLocalCharAiming; // 0x814(0x01)
	char pad_815[0x1b]; // 0x815(0x1b)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.CapturePointViewItem
// Size: 0x330 (Inherited: 0x298)
class UCapturePointViewItem : public UUserWidget {
public:

	struct UImage* CaptureProgressBaseBar; // 0x298(0x08)
	struct UImage* CaptureProgressBar; // 0x2a0(0x08)
	struct UTextBlock* NameInIcon; // 0x2a8(0x08)
	struct UTextBlock* FullName; // 0x2b0(0x08)
	struct UUserWidget* WBP_ScreenMarkerBase; // 0x2b8(0x08)
	struct UButton* RebornButton; // 0x2c0(0x08)
	bool bShowAll; // 0x2c8(0x01)
	bool bAimed; // 0x2c9(0x01)
	char pad_2CA[0x2]; // 0x2ca(0x02)
	float DistOnMaxSize; // 0x2cc(0x04)
	float DistOnMinSize; // 0x2d0(0x04)
	float MinSizeRatio; // 0x2d4(0x04)
	struct FVector WidgetOffset; // 0x2d8(0x0c)
	struct FLinearColor Blue; // 0x2e4(0x10)
	struct FLinearColor Red; // 0x2f4(0x10)
	struct FLinearColor Neutral; // 0x304(0x10)
	char pad_314[0x4]; // 0x314(0x04)
	struct ABattleFieldCapturePoint* CurCapturePoint; // 0x318(0x08)
	char pad_320[0x10]; // 0x320(0x10)

	void UnLockClickBtn(); // Function BattleField.CapturePointViewItem.UnLockClickBtn // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.CoverDebugger
// Size: 0x3b0 (Inherited: 0x378)
class ACoverDebugger : public AActor {
public:

	float CoverSearchRange; // 0x378(0x04)
	float MinCoverLength; // 0x37c(0x04)
	float HorizontalExtent; // 0x380(0x04)
	int32_t CheckPointNum; // 0x384(0x04)
	uint32_t MaxNormalAngleDeg; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct AActor* mainTarget; // 0x390(0x08)
	struct UPvpAIComponent* PvpAIComp; // 0x398(0x08)
	struct AActor* Target; // 0x3a0(0x08)
	struct UActorComponent* m_DebugLineBatcher; // 0x3a8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.DFMEQSGenerator_NavmeshCoverWallPoint
// Size: 0x140 (Inherited: 0x88)
class UDFMEQSGenerator_NavmeshCoverWallPoint : public UEnvQueryGenerator_ProjectedPoints {
public:

	struct FAIDataProviderFloatValue CircleRadius; // 0x88(0x38)
	struct FAIDataProviderFloatValue coverLength; // 0xc0(0x38)
	struct FAIDataProviderIntValue MinNormalAngelDeg; // 0xf8(0x38)
	struct UClass* MainTargetContext; // 0x130(0x08)
	float DistanceFromBunker; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.EQSContext_AllThreatTargets
// Size: 0x38 (Inherited: 0x30)
class UEQSContext_AllThreatTargets : public UEnvQueryContext {
public:

	struct FName BlackboardKey; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.EQTest_AvoidOptionalThreat
// Size: 0x210 (Inherited: 0x200)
class UEQTest_AvoidOptionalThreat : public UEnvQueryTest {
public:

	bool bMainTargetThreat; // 0x200(0x01)
	bool bEnvFightTargetListThreat; // 0x201(0x01)
	char pad_202[0x2]; // 0x202(0x02)
	int32_t EnvFightTargetThreatCount; // 0x204(0x04)
	bool bVehicleThreat; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	int32_t VehicleThreatCount; // 0x20c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.EQTest_CannPeekTargetBehindWall
// Size: 0x218 (Inherited: 0x200)
class UEQTest_CannPeekTargetBehindWall : public UEnvQueryTest {
public:

	struct UClass* InputActorContext; // 0x200(0x08)
	bool bDrawDebug; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct ULineBatchComponent* Drawer; // 0x210(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.EQTest_VisibilityToCapturePoint
// Size: 0x208 (Inherited: 0x200)
class UEQTest_VisibilityToCapturePoint : public UEnvQueryTest {
public:

	struct UClass* CapturePointContext; // 0x200(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.FingerGestureWidget
// Size: 0x4b8 (Inherited: 0x298)
class UFingerGestureWidget : public UUserWidget {
public:

	char pad_298[0x20]; // 0x298(0x20)
	/*struct FMulticastInlineDelegate*/char OnDoubleClick[0x10]; // 0x2b8(0x10)
	/*struct FMulticastInlineDelegate*/char OnClick[0x10]; // 0x2c8(0x10)
	/*struct FMulticastInlineDelegate*/char OnLongPressedBegin[0x10]; // 0x2d8(0x10)
	/*struct FMulticastInlineDelegate*/char OnLongPressedEnd[0x10]; // 0x2e8(0x10)
	/*struct FMulticastInlineDelegate*/char OnMouseBtnDown[0x10]; // 0x2f8(0x10)
	/*struct FMulticastInlineDelegate*/char OnMouseBtnUp[0x10]; // 0x308(0x10)
	/*struct FMulticastInlineDelegate*/char OnTick[0x10]; // 0x318(0x10)
	/*struct FMulticastInlineDelegate*/char OnDrag[0x10]; // 0x328(0x10)
	/*struct FMulticastInlineDelegate*/char OnDragWithPos[0x10]; // 0x338(0x10)
	/*struct FMulticastInlineDelegate*/char OnFlick[0x10]; // 0x348(0x10)
	/*struct FMulticastInlineDelegate*/char OnWheel[0x10]; // 0x358(0x10)
	/*struct FMulticastInlineDelegate*/char OnTwoFingerPinch[0x10]; // 0x368(0x10)
	/*struct FMulticastInlineDelegate*/char OnTwoFingerRotate[0x10]; // 0x378(0x10)
	/*struct FMulticastInlineDelegate*/char OnTwoFingerSwipe[0x10]; // 0x388(0x10)
	char pad_398[0x30]; // 0x398(0x30)
	struct TMap<int32_t, struct FVector2D> TouchesAnchorPosVec; // 0x3c8(0x50)
	struct TMap<int32_t, struct FVector2D> TouchesPosVec; // 0x418(0x50)
	struct TMap<int32_t, struct FVector2D> TouchesDeltaVec; // 0x468(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.PlayerGMComponentBattleField
// Size: 0x570 (Inherited: 0x570)
class UPlayerGMComponentBattleField : public UPlayerGMComponent {
public:


	void GMServerKickPvpBot(int32_t Count); // Function BattleField.PlayerGMComponentBattleField.GMServerKickPvpBot // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.PvpAIComponent
// Size: 0x560 (Inherited: 0x100)
class UPvpAIComponent : public UActorComponent {
public:

	struct UDFMAIPlayerThreatRecordComponent* ThreatComp; // 0x100(0x08)
	uint32_t MaxNormalAngleDeg; // 0x108(0x04)
	enum class EPVPAIFightStyle CurrentPVEAIFightStyle; // 0x10c(0x01)
	bool bUsingBP_CalculateTargetScore; // 0x10d(0x01)
	bool bUsingBPCalcThreatTargetFinalScore; // 0x10e(0x01)
	bool bOpenBPCalcAmbientThreatValue; // 0x10f(0x01)
	char pad_110[0x40]; // 0x110(0x40)
	struct FPvpAiStyleConfig CurrentStyleConfig; // 0x150(0x28)
	struct FPvpAiAntiVehicleWill AntiVehicleWill; // 0x178(0x20)
	struct FPvpAiRescueWill RescueWill; // 0x198(0x20)
	enum class EPvpAIThreatLevel MainTargetThreat; // 0x1b8(0x01)
	enum class EPvpAIThreatLevel MainTargetVulnerable; // 0x1b9(0x01)
	enum class EPvpAIThreatLevel AmbientThreat; // 0x1ba(0x01)
	char pad_1BB[0x1]; // 0x1bb(0x01)
	struct FThreatThreshold ThreatThreshold; // 0x1bc(0x08)
	struct FThreatThreshold AmbientThreatThreshold; // 0x1c4(0x08)
	struct FThreatThreshold VulnerableThreshold; // 0x1cc(0x08)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct UDataTable* FightTargetScoreConf; // 0x1d8(0x08)
	struct TMap<int32_t, struct FPvpAiAgainstVehicleConfig> AgainstVehiclesConfig; // 0x1e0(0x50)
	float VehicleThreatUpdateInterval; // 0x230(0x04)
	float VehicleSightThreatBaseScore; // 0x234(0x04)
	float VehicleSightThreatDecayRate; // 0x238(0x04)
	float VehicleDamageThreatBaseScore; // 0x23c(0x04)
	float VehicleDamageThreatDecayRate; // 0x240(0x04)
	float VehicleAirHitThreatBaseScore; // 0x244(0x04)
	float VehicleAirHitThreatDecayRate; // 0x248(0x04)
	float VehicleBatteryDeg; // 0x24c(0x04)
	struct UCurveFloat* VehicleThreatDistanceDecayCurve; // 0x250(0x08)
	struct UCurveFloat* VehicleAganinstDistanceDecayCurve; // 0x258(0x08)
	bool IsUseBPCalcVehicleThreat; // 0x260(0x01)
	bool IsUseBPCalcVulnerableValue; // 0x261(0x01)
	char pad_262[0x2]; // 0x262(0x02)
	float PlayerAroundCheckRefreshTime; // 0x264(0x04)
	float PlayerAroundCheckRadius; // 0x268(0x04)
	float PlayerAroundCheckOnlyAiPlayer; // 0x26c(0x04)
	enum class EPvpAIThreatLevel NewAttentionThreatLevelLimit; // 0x270(0x01)
	enum class EPvpAIThreatLevel NewAttentionVulnerableLevelLimit; // 0x271(0x01)
	char pad_272[0x2]; // 0x272(0x02)
	int32_t RecentlyTakeDamageRecordCount; // 0x274(0x04)
	struct TArray<struct ADFMCharacter*> NewAttentionThreatCharacters; // 0x278(0x10)
	struct TArray<struct AGPVehicleBase*> NewAttentionThreatVehicles; // 0x288(0x10)
	struct UCurveFloat* DistanceToSelfRatioCurve; // 0x298(0x08)
	struct UCurveFloat* DistanceToPointRatioCurve; // 0x2a0(0x08)
	struct UCurveFloat* SightThreatDistNotInSightCurve; // 0x2a8(0x08)
	struct FSelfVisionBlockRatio SelfVisionBlockRatio; // 0x2b0(0x0c)
	struct FTargetVisionRatio TargetVisionRatio; // 0x2bc(0x08)
	struct FSelfVisionBlockRatio Vul_SelfVisionBlockRatio; // 0x2c4(0x0c)
	struct FTargetVisionRatio Vul_TargetVisionRatio; // 0x2d0(0x08)
	struct FTargetPoseRatio Vul_TargetPoseRatio; // 0x2d8(0x0c)
	struct FTargetFiringRatio Vul_TargetFiringRatio; // 0x2e4(0x08)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UCurveFloat* CQBWeaponDistCurve; // 0x2f0(0x08)
	struct UCurveFloat* MedicWeaponDistCurve; // 0x2f8(0x08)
	struct UCurveFloat* GunnerWeaponDistCurve; // 0x300(0x08)
	struct UCurveFloat* SniperWeaponDistCurve; // 0x308(0x08)
	struct UCurveFloat* ThreatDistCurve; // 0x310(0x08)
	struct UCurveFloat* RifleVulnerableCurve; // 0x318(0x08)
	struct UCurveFloat* SMGVulnerableCurve; // 0x320(0x08)
	struct UCurveFloat* MGVVulnerableCurve; // 0x328(0x08)
	struct UCurveFloat* ShotGunVulnerableCurve; // 0x330(0x08)
	struct UCurveFloat* SniperVulnerableCurve; // 0x338(0x08)
	struct UCurveFloat* PistolVulnerableCurve; // 0x340(0x08)
	float VulnerableStickyPerSecond; // 0x348(0x04)
	float MainTargetStickyTime; // 0x34c(0x04)
	float MainTargetOverrideScore; // 0x350(0x04)
	float UpdateFightTargetInterval; // 0x354(0x04)
	float FightTargetValidTime; // 0x358(0x04)
	float UpdateDebugInfoInterval; // 0x35c(0x04)
	struct ADFMAIPlayerController* AIController; // 0x360(0x08)
	float MainTargetMaxScore; // 0x368(0x04)
	char pad_36C[0x54]; // 0x36c(0x54)
	struct TArray<struct FPvpAIFightTargetInfo> FightTargets; // 0x3c0(0x10)
	struct TArray<struct FPvpAIVehicleTargetInfo> VehicalTargets; // 0x3d0(0x10)
	char pad_3E0[0x70]; // 0x3e0(0x70)
	struct UDFMAIPlayerPathFollowingComponent* PathFollowComp; // 0x450(0x08)
	char pad_458[0x10]; // 0x458(0x10)
	struct APvpAIDebugInfo* DebugInfo; // 0x468(0x08)
	char pad_470[0x70]; // 0x470(0x70)
	struct ANavExtendAgent* NavExtAgent; // 0x4e0(0x08)
	char pad_4E8[0x78]; // 0x4e8(0x78)

	void TakeOverDebugInfo(struct APvpAIDebugInfo* AIDebugInfo); // Function BattleField.PvpAIComponent.TakeOverDebugInfo // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.PvpAIDebugInfo
// Size: 0x5e8 (Inherited: 0x378)
class APvpAIDebugInfo : public AActor {
public:

	struct UClass* WidgetClassMass; // 0x378(0x08)
	struct UClass* WidgetClassDirector; // 0x380(0x08)
	struct USphereComponent* Indicator; // 0x388(0x08)
	struct UWidgetComponent* Panel; // 0x390(0x08)
	enum class EPvpAIThreatLevel Threat; // 0x398(0x01)
	enum class EPvpAIThreatLevel Vulnerable; // 0x399(0x01)
	enum class EPvpAIThreatLevel AmbientThreat; // 0x39a(0x01)
	char pad_39B[0x5]; // 0x39b(0x05)
	struct FString BTs; // 0x3a0(0x10)
	struct FString ConfigName; // 0x3b0(0x10)
	float ThreatValue; // 0x3c0(0x04)
	float VulnerableValue; // 0x3c4(0x04)
	float AmbientThreatValue; // 0x3c8(0x04)
	float Health; // 0x3cc(0x04)
	float MaxHealth; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct AActor* mainTarget; // 0x3d8(0x08)
	int32_t CampId; // 0x3e0(0x04)
	float ThreatToMe; // 0x3e4(0x04)
	float VulToMe; // 0x3e8(0x04)
	enum class EPvpAIThreatLevel ThreatLevelToMe; // 0x3ec(0x01)
	enum class EPvpAIThreatLevel VulLevelToMe; // 0x3ed(0x01)
	char pad_3EE[0x2]; // 0x3ee(0x02)
	int32_t DebugMode; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct FString AiName; // 0x3f8(0x10)
	struct FString AiHeroName; // 0x408(0x10)
	int32_t AiUin; // 0x418(0x04)
	int32_t TeamId; // 0x41c(0x04)
	enum class EPVPAIFightStyle AIFightStyle; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct FString DifficultyName; // 0x428(0x10)
	struct FString WeaponInfo; // 0x438(0x10)
	enum class EPVPAIJobType AIJobType; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct FString JobObj1; // 0x450(0x10)
	struct FString JobObj2; // 0x460(0x10)
	struct FString BattleData; // 0x470(0x10)
	struct TArray<struct FVector> CurrPath; // 0x480(0x10)
	struct ADFMCharacter* CurrViewer; // 0x490(0x08)
	struct ADFMAIPlayerController* MonitorController; // 0x498(0x08)
	struct ADFMCharacter* MonitorCharacter; // 0x4a0(0x08)
	struct ADFMPlayerState* MonitorPlayerState; // 0x4a8(0x08)
	struct UPvpAIComponent* MonitorPvpAiComp; // 0x4b0(0x08)
	struct UDFMPVPAIDiffcultyComponent* MonitorDifficultyComp; // 0x4b8(0x08)
	struct UDFMPlayerDataAnalysisComponent* MonitorAnalysisComp; // 0x4c0(0x08)
	struct UTextBlock* TextName; // 0x4c8(0x08)
	struct UTextBlock* TextJobType; // 0x4d0(0x08)
	struct UTextBlock* TextFightStyle; // 0x4d8(0x08)
	struct UTextBlock* TextJobObj1; // 0x4e0(0x08)
	struct UTextBlock* TextJobObj2; // 0x4e8(0x08)
	struct UTextBlock* TextConfigName; // 0x4f0(0x08)
	struct UTextBlock* TextDifficultyName; // 0x4f8(0x08)
	struct UTextBlock* TextBTs; // 0x500(0x08)
	struct UTextBlock* TextThreat; // 0x508(0x08)
	struct UTextBlock* TextAmbientThreat; // 0x510(0x08)
	struct UTextBlock* TextVulnerable; // 0x518(0x08)
	struct UTextBlock* TextHealth; // 0x520(0x08)
	struct UTextBlock* TextDist; // 0x528(0x08)
	struct UTextBlock* TextThreatToMe; // 0x530(0x08)
	struct UTextBlock* TextVulToMe; // 0x538(0x08)
	struct UImage* BgImage; // 0x540(0x08)
	struct UImage* ViewerThreatBGImage; // 0x548(0x08)
	struct UGridPanel* TargetThreatPanel; // 0x550(0x08)
	char pad_558[0x10]; // 0x558(0x10)
	struct TWeakObjectPtr<struct AActor> DebugTarget; // 0x568(0x08)
	struct ULineBatchComponent* Drawer; // 0x570(0x08)
	struct UGPBattleFieldSystem* BFSystem; // 0x578(0x08)
	char pad_580[0x18]; // 0x580(0x18)
	struct TMap<struct FString, struct UTextBlock*> TextBlockMap; // 0x598(0x50)

	void TickTimerHandler(); // Function BattleField.PvpAIDebugInfo.TickTimerHandler // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.PvpAiOverviewDebugInfo
// Size: 0x508 (Inherited: 0x378)
class APvpAiOverviewDebugInfo : public AActor {
public:

	struct UClass* WidgetClass; // 0x378(0x08)
	struct UClass* ObjectiveListItemClass; // 0x380(0x08)
	struct FPvpAiOverviewCampInfo AttackCampInfo; // 0x388(0x88)
	struct FPvpAiOverviewCampInfo DefendCampInfo; // 0x410(0x88)
	struct UWidgetComponent* Panel; // 0x498(0x08)
	struct USphereComponent* Indicator; // 0x4a0(0x08)
	char pad_4A8[0x8]; // 0x4a8(0x08)
	struct TMap<struct FString, struct UTextBlock*> TextBlockMap; // 0x4b0(0x50)
	struct UUserWidget* WidgetInstance; // 0x500(0x08)

	void OnRep_ObjectiveInfos(); // Function BattleField.PvpAiOverviewDebugInfo.OnRep_ObjectiveInfos // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.PvpAiPersonDetailDebugInfo
// Size: 0x758 (Inherited: 0x378)
class APvpAiPersonDetailDebugInfo : public AActor {
public:

	struct UClass* WidgetClass; // 0x378(0x08)
	struct FString AiName; // 0x380(0x10)
	int32_t AiUin; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct FString CampName; // 0x398(0x10)
	int32_t TeamId; // 0x3a8(0x04)
	int32_t ArmedForceID; // 0x3ac(0x04)
	struct FString HeroName; // 0x3b0(0x10)
	struct FVector LocationPos; // 0x3c0(0x0c)
	struct FVector FocalLocation; // 0x3cc(0x0c)
	struct FString Difficulty; // 0x3d8(0x10)
	struct FString CurrentWeapon; // 0x3e8(0x10)
	float CurrentHP; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct FString CurrBehaivorTemplate; // 0x400(0x10)
	enum class EPVPAIJobType AIJobType; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FString JobObj1; // 0x418(0x10)
	struct FString JobObj2; // 0x428(0x10)
	enum class EPVPAIFightStyle FightStyle; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FString StyleName; // 0x440(0x10)
	float AmbientThreat; // 0x450(0x04)
	enum class EPvpAIThreatLevel AmbientThreatLevel; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct ADFMCharacter* MainTarChar; // 0x458(0x08)
	struct FString MainTarName; // 0x460(0x10)
	float MainTarSpottedTime; // 0x470(0x04)
	float MainTarSightThreat; // 0x474(0x04)
	float MainTarHearingThreat; // 0x478(0x04)
	float MainTarAirHitThreat; // 0x47c(0x04)
	float MainTarDamageThreat; // 0x480(0x04)
	float MainTarThreatValue; // 0x484(0x04)
	float MainTarVulnerableValue; // 0x488(0x04)
	float MainTarFinalScore; // 0x48c(0x04)
	bool MainTarInVehicle; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	float MainTarHardBlock; // 0x494(0x04)
	float MainTarSoftBlock; // 0x498(0x04)
	float MainTargetThreat; // 0x49c(0x04)
	float MainTargetVulnerable; // 0x4a0(0x04)
	enum class EPvpAIThreatLevel MainTargetThreatLevel; // 0x4a4(0x01)
	enum class EPvpAIThreatLevel MainTargetVulnerableLevel; // 0x4a5(0x01)
	char pad_4A6[0x2]; // 0x4a6(0x02)
	struct ADFMCharacter* SubTarChar; // 0x4a8(0x08)
	struct FString SubTarName; // 0x4b0(0x10)
	float SubTarSpottedTime; // 0x4c0(0x04)
	float SubTarSightThreat; // 0x4c4(0x04)
	float SubTarHearingThreat; // 0x4c8(0x04)
	float SubTarAirHitThreat; // 0x4cc(0x04)
	float SubTarDamageThreat; // 0x4d0(0x04)
	float SubTarThreatValue; // 0x4d4(0x04)
	float SubTarVulnerableValue; // 0x4d8(0x04)
	float SubTarFinalScore; // 0x4dc(0x04)
	bool SubTarInVehicle; // 0x4e0(0x01)
	char pad_4E1[0x3]; // 0x4e1(0x03)
	float SubTarHardBlock; // 0x4e4(0x04)
	float SubTarSoftBlock; // 0x4e8(0x04)
	float SubTargetThreat; // 0x4ec(0x04)
	float SubTargetVulnerable; // 0x4f0(0x04)
	enum class EPvpAIThreatLevel SubTargetThreatLevel; // 0x4f4(0x01)
	enum class EPvpAIThreatLevel SubTargetVulnerableLevel; // 0x4f5(0x01)
	char pad_4F6[0x2]; // 0x4f6(0x02)
	struct ADFMCharacter* SubTarChar_2; // 0x4f8(0x08)
	struct FString SubTarName_2; // 0x500(0x10)
	float SubTarSpottedTime_2; // 0x510(0x04)
	float SubTarSightThreat_2; // 0x514(0x04)
	float SubTarHearingThreat_2; // 0x518(0x04)
	float SubTarAirHitThreat_2; // 0x51c(0x04)
	float SubTarDamageThreat_2; // 0x520(0x04)
	float SubTarThreatValue_2; // 0x524(0x04)
	float SubTarVulnerableValue_2; // 0x528(0x04)
	float SubTarFinalScore_2; // 0x52c(0x04)
	bool SubTarInVehicle_2; // 0x530(0x01)
	char pad_531[0x3]; // 0x531(0x03)
	float SubTarHardBlock_2; // 0x534(0x04)
	float SubTarSoftBlock_2; // 0x538(0x04)
	float SubTargetThreat_2; // 0x53c(0x04)
	float SubTargetVulnerable_2; // 0x540(0x04)
	enum class EPvpAIThreatLevel SubTargetThreatLevel_2; // 0x544(0x01)
	enum class EPvpAIThreatLevel SubTargetVulnerableLevel_2; // 0x545(0x01)
	char pad_546[0x2]; // 0x546(0x02)
	struct ADFMCharacter* SubTarChar_3; // 0x548(0x08)
	struct FString SubTarName_3; // 0x550(0x10)
	float SubTarSpottedTime_3; // 0x560(0x04)
	float SubTarSightThreat_3; // 0x564(0x04)
	float SubTarHearingThreat_3; // 0x568(0x04)
	float SubTarAirHitThreat_3; // 0x56c(0x04)
	float SubTarDamageThreat_3; // 0x570(0x04)
	float SubTarThreatValue_3; // 0x574(0x04)
	float SubTarVulnerableValue_3; // 0x578(0x04)
	float SubTarFinalScore_3; // 0x57c(0x04)
	bool SubTarInVehicle_3; // 0x580(0x01)
	char pad_581[0x3]; // 0x581(0x03)
	float SubTarHardBlock_3; // 0x584(0x04)
	float SubTarSoftBlock_3; // 0x588(0x04)
	float SubTargetThreat_3; // 0x58c(0x04)
	float SubTargetVulnerable_3; // 0x590(0x04)
	enum class EPvpAIThreatLevel SubTargetThreatLevel_3; // 0x594(0x01)
	enum class EPvpAIThreatLevel SubTargetVulnerableLevel_3; // 0x595(0x01)
	char pad_596[0x2]; // 0x596(0x02)
	struct ADFMCharacter* SubTarChar_4; // 0x598(0x08)
	struct FString SubTarName_4; // 0x5a0(0x10)
	float SubTarSpottedTime_4; // 0x5b0(0x04)
	float SubTarSightThreat_4; // 0x5b4(0x04)
	float SubTarHearingThreat_4; // 0x5b8(0x04)
	float SubTarAirHitThreat_4; // 0x5bc(0x04)
	float SubTarDamageThreat_4; // 0x5c0(0x04)
	float SubTarThreatValue_4; // 0x5c4(0x04)
	float SubTarVulnerableValue_4; // 0x5c8(0x04)
	float SubTarFinalScore_4; // 0x5cc(0x04)
	bool SubTarInVehicle_4; // 0x5d0(0x01)
	char pad_5D1[0x3]; // 0x5d1(0x03)
	float SubTarHardBlock_4; // 0x5d4(0x04)
	float SubTarSoftBlock_4; // 0x5d8(0x04)
	float SubTargetThreat_4; // 0x5dc(0x04)
	float SubTargetVulnerable_4; // 0x5e0(0x04)
	enum class EPvpAIThreatLevel SubTargetThreatLevel_4; // 0x5e4(0x01)
	enum class EPvpAIThreatLevel SubTargetVulnerableLevel_4; // 0x5e5(0x01)
	char pad_5E6[0x2]; // 0x5e6(0x02)
	struct AGPVehicleBase* ThreatVehicle; // 0x5e8(0x08)
	struct FString ThreatVehicleName; // 0x5f0(0x10)
	float ThreatVehicleSpottedTime; // 0x600(0x04)
	float ThreatVehicleSightThreat; // 0x604(0x04)
	float ThreatVehicleAirHitThreat; // 0x608(0x04)
	float ThreatVehicleDamageThreat; // 0x60c(0x04)
	bool ThreatVehicleInVehicelSight; // 0x610(0x01)
	char pad_611[0x3]; // 0x611(0x03)
	float ThreatVehicleThreateValue; // 0x614(0x04)
	float ThreatVehicleVulnerableValue; // 0x618(0x04)
	char pad_61C[0x4]; // 0x61c(0x04)
	struct FString BHTCompName; // 0x620(0x10)
	struct FString BHTTreeDesc; // 0x630(0x10)
	struct FString BHTBlackboardDesc; // 0x640(0x10)
	struct TArray<struct FVector> CurrPath; // 0x650(0x10)
	struct TArray<struct FVector> CurrBattleRoute; // 0x660(0x10)
	struct TWeakObjectPtr<struct AActor> DebugTarget; // 0x670(0x08)
	struct FString ResuceInfo; // 0x678(0x10)
	struct ULineBatchComponent* Drawer; // 0x688(0x08)
	struct ULineBatchComponent* BattleRouteDrawer; // 0x690(0x08)
	struct ULineBatchComponent* LineDrawer; // 0x698(0x08)
	struct USphereComponent* Indicator; // 0x6a0(0x08)
	struct UUserWidget* WidgetInstance; // 0x6a8(0x08)
	struct TMap<struct FString, struct UTextBlock*> TextBlockMap; // 0x6b0(0x50)
	char pad_700[0x8]; // 0x700(0x08)
	struct ADFMCharacter* CurrentAiCharacter; // 0x708(0x08)
	char pad_710[0x8]; // 0x710(0x08)
	struct UPvpAIComponent* CurrentPvpAiComp; // 0x718(0x08)
	struct UDFMPVPAIDiffcultyComponent* CurrentDifficultyComp; // 0x720(0x08)
	char pad_728[0x20]; // 0x728(0x20)
	struct TArray<struct ADFMCharacter*> WatchCharacters; // 0x748(0x10)

	void ServerCloseSpectateModeLogicPlayerKillHandler(struct AGPPlayerController* LocalPlayerController); // Function BattleField.PvpAiPersonDetailDebugInfo.ServerCloseSpectateModeLogicPlayerKillHandler // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.PVPAISubsystem
// Size: 0x9d8 (Inherited: 0x800)
class APVPAISubsystem : public APVPAISubsystemBase {
public:

	struct TMap<enum class EPVPAIFightStyle, int32_t> FightStyleWeights; // 0x800(0x50)
	struct UCurveFloat* RelayPointDistanceWeightCurve; // 0x850(0x08)
	struct UCurveFloat* FlankPointDistanceWeightCurve; // 0x858(0x08)
	bool bAssignJobDelay; // 0x860(0x01)
	char pad_861[0x3]; // 0x861(0x03)
	float AssignJobInterval; // 0x864(0x04)
	int32_t AssignJobNumEverTime; // 0x868(0x04)
	float RequestSosEnemyDistance; // 0x86c(0x04)
	float RequestSosEnemyZDiff; // 0x870(0x04)
	int32_t RequestSosEnemyCharacterNum; // 0x874(0x04)
	float RequestSosEnemyThreatVehicle; // 0x878(0x04)
	float RequestSosMaxInterval; // 0x87c(0x04)
	float RequestSosMinInterval; // 0x880(0x04)
	bool RequestSosBlockByFoliage; // 0x884(0x01)
	char pad_885[0x3]; // 0x885(0x03)
	float RequestSosFoliageAsBlock; // 0x888(0x04)
	char pad_88C[0x4]; // 0x88c(0x04)
	struct UCurveFloat* RequestSosNoBlockDistCurve; // 0x890(0x08)
	struct UCurveFloat* RequestSosNoBlockAngleCurve; // 0x898(0x08)
	struct UCurveFloat* RequestSosBlockDistCurve; // 0x8a0(0x08)
	struct UCurveFloat* RequestSosBlockAngleCurve; // 0x8a8(0x08)
	float SectorScoreMinRatio; // 0x8b0(0x04)
	char pad_8B4[0x4]; // 0x8b4(0x04)
	struct TArray<struct UPVPAIJobs*> AIJobs; // 0x8b8(0x10)
	char pad_8C8[0x8]; // 0x8c8(0x08)
	struct TMap<struct AActor*, struct FPvpSectorBattleRouteInfo> SectorBattleRouteInfo; // 0x8d0(0x50)
	char pad_920[0xb8]; // 0x920(0xb8)

	int32_t RandomIndexWithWeight(struct TArray<float> Weights); // Function BattleField.PVPAISubsystem.RandomIndexWithWeight // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.DFMEQSItemType_WallCoverPoint
// Size: 0x38 (Inherited: 0x38)
class UDFMEQSItemType_WallCoverPoint : public UGPEnvQueryItemType_CommonPoint {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.VCRBuilder
// Size: 0x398 (Inherited: 0x378)
class AVCRBuilder : public AActor {
public:

	bool IsBuildVCR; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct AVCRManager* ViewManager; // 0x380(0x08)
	struct TArray<struct AVCRViewCell*> ViewCells; // 0x388(0x10)

	void GenerateViewCell(); // Function BattleField.VCRBuilder.GenerateViewCell // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.VCRManager
// Size: 0x440 (Inherited: 0x378)
class AVCRManager : public AActor {
public:

	struct UVcrCache* VcrCache; // 0x378(0x08)
	char pad_380[0x30]; // 0x380(0x30)
	struct FVector DebugTransform; // 0x3b0(0x0c)
	int32_t DebugX; // 0x3bc(0x04)
	int32_t DebugY; // 0x3c0(0x04)
	int32_t DebugZIndex; // 0x3c4(0x04)
	struct FBox Range; // 0x3c8(0x1c)
	int32_t GirdXYSize; // 0x3e4(0x04)
	int32_t GirdXSum; // 0x3e8(0x04)
	int32_t GirdYSum; // 0x3ec(0x04)
	char pad_3F0[0x50]; // 0x3f0(0x50)

	void ReadBinary(); // Function BattleField.VCRManager.ReadBinary // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.VCRViewCell
// Size: 0x390 (Inherited: 0x378)
class AVCRViewCell : public AActor {
public:

	char pad_378[0x10]; // 0x378(0x10)
	struct UProceduralMeshComponent* MeshComponent; // 0x388(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.WeaponChange
// Size: 0x110 (Inherited: 0xd0)
class UWeaponChange : public UInteractExecutor {
public:

	struct TArray<int64_t> MainWeaponID; // 0xd0(0x10)
	struct TArray<int64_t> SecondWeaponId; // 0xe0(0x10)
	struct ACHARACTER* CachedPawn; // 0xf0(0x08)
	struct AActor* CachedInteractor; // 0xf8(0x08)
	struct FTimerHandle DistanceTimer; // 0x100(0x08)
	float Disapparedistance; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.WeaponSwitchView
// Size: 0x550 (Inherited: 0x550)
class UWeaponSwitchView : public ULuaUIBaseView {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.EQTest_AvoidThreatTargets
// Size: 0x208 (Inherited: 0x200)
class UEQTest_AvoidThreatTargets : public UEnvQueryTest {
public:

	char pad_200[0x8]; // 0x200(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.PVPAIJobs
// Size: 0x70 (Inherited: 0x30)
class UPVPAIJobs : public UObject {
public:

	char pad_30[0x38]; // 0x30(0x38)
	struct ADFMAIPlayerController* Owner; // 0x68(0x08)

	void SetOwner(struct ADFMAIPlayerController* Controller); // Function BattleField.PVPAIJobs.SetOwner // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.EQTest_AvoidThreatTargetsIncludingMainTarget
// Size: 0x208 (Inherited: 0x208)
class UEQTest_AvoidThreatTargetsIncludingMainTarget : public UEQTest_AvoidThreatTargets {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.MoveToCapturePointJob
// Size: 0x80 (Inherited: 0x70)
class UMoveToCapturePointJob : public UPVPAIJobs {
public:

	struct ABattleRoutePoint* TargetRoutePoint; // 0x70(0x08)
	struct AActor* TargetPoint; // 0x78(0x08)

	void SetTargetRoutePoint(struct ABattleRoutePoint* RoutePoint); // Function BattleField.MoveToCapturePointJob.SetTargetRoutePoint // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class BattleField.MoveToCapturePointFlankJob
// Size: 0x88 (Inherited: 0x80)
class UMoveToCapturePointFlankJob : public UMoveToCapturePointJob {
public:

	struct ABattleRoutePoint* FlankRoutePoint; // 0x80(0x08)

	void SetFlankRoutePoint(struct ABattleRoutePoint* Point); // Function BattleField.MoveToCapturePointFlankJob.SetFlankRoutePoint // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
