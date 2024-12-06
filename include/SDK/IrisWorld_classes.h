
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class IrisWorld.BigMapExpiredQuestDetailView
// Size: 0x3d0 (Inherited: 0x388)
class UBigMapExpiredQuestDetailView : public UBaseUIView {
public:

	struct UTextBlock* QuestName; // 0x388(0x08)
	struct UTextBlock* countdown; // 0x390(0x08)
	struct UTextBlock* QuestDesTextBlock; // 0x398(0x08)
	char pad_3A0[0x30]; // 0x3a0(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.BigMapIrisHUDView
// Size: 0xa10 (Inherited: 0x940)
class UBigMapIrisHUDView : public UBigMapHUDView {
public:

	struct UBigMapIrisItem* CurSelectedItem; // 0x940(0x08)
	struct UWidgetSwitcher* SelectedStateSW; // 0x948(0x08)
	struct UWidgetSwitcher* SelectedTypeSW; // 0x950(0x08)
	struct UTextBlock* TargetDetailName; // 0x958(0x08)
	struct UTextBlock* TargetDetailDes; // 0x960(0x08)
	struct UButton* ConformStrongholdBtn; // 0x968(0x08)
	struct UBigMapQuestDetailView* QuestDetailView; // 0x970(0x08)
	struct UBigMapExpiredQuestDetailView* ExpiredQuestDetailView; // 0x978(0x08)
	bool bInSwitchAnim; // 0x980(0x01)
	char pad_981[0x7]; // 0x981(0x07)
	struct UCanvasPanel* MapInfoWidget; // 0x988(0x08)
	struct UClass* StrongholdWidget; // 0x990(0x08)
	char pad_998[0x8]; // 0x998(0x08)
	struct TArray<struct FStrongholdRow> MapStrongholdArr; // 0x9a0(0x10)
	struct TMap<int32_t, struct FIrisStartSpotRow> StartSpotDict; // 0x9b0(0x50)
	struct UClass* MissionWidget; // 0xa00(0x08)
	char pad_A08[0x8]; // 0xa08(0x08)

	void PlaySwitchAnimationIris(bool bSwitchToFullScreen); // Function IrisWorld.BigMapIrisHUDView.PlaySwitchAnimationIris // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.BigMapQuestDetailObjection
// Size: 0x3a8 (Inherited: 0x388)
class UBigMapQuestDetailObjection : public UBaseUIView {
public:

	struct UImage* QuestItemType; // 0x388(0x08)
	struct UTextBlock* QuestItemName; // 0x390(0x08)
	struct UProgressBar* ProgressBar; // 0x398(0x08)
	struct UTextBlock* ProgressText; // 0x3a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.BigMapQuestDetailView
// Size: 0x3f8 (Inherited: 0x388)
class UBigMapQuestDetailView : public UBaseUIView {
public:

	struct UTextBlock* QuestName; // 0x388(0x08)
	struct UTextBlock* QuestType; // 0x390(0x08)
	struct UScrollGridBox* QuestItemScrollGridBox; // 0x398(0x08)
	struct UScrollBox* QuestDesScrollBox; // 0x3a0(0x08)
	struct UTextBlock* QuestDesTextBlock; // 0x3a8(0x08)
	struct UUserWidget* TrackBtn; // 0x3b0(0x08)
	struct UWidget* UnReceiveDes; // 0x3b8(0x08)
	struct UClass* BigMapQusetDetailWidget; // 0x3c0(0x08)
	char pad_3C8[0x30]; // 0x3c8(0x30)

	void OnTrackBtnClick(); // Function IrisWorld.BigMapQuestDetailView.OnTrackBtnClick // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.CountDownHUDBaseView
// Size: 0x3d0 (Inherited: 0x390)
class UCountDownHUDBaseView : public UCommonHUDView {
public:

	struct FText Title; // 0x390(0x18)
	float TotalTime; // 0x3a8(0x04)
	float RemainningTime; // 0x3ac(0x04)
	enum class EQA_CountdownType CountdownType; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	int32_t FinalCountDownTime; // 0x3b4(0x04)
	int32_t EmergencyCountDownTime; // 0x3b8(0x04)
	int32_t SuperEmergencyCountDownTime; // 0x3bc(0x04)
	struct UImage* Image_64; // 0x3c0(0x08)
	char pad_3C8[0x8]; // 0x3c8(0x08)

	void SetType(int32_t TypeID); // Function IrisWorld.CountDownHUDBaseView.SetType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.DeadBodyDrugSubSystem
// Size: 0x398 (Inherited: 0x378)
class ADeadBodyDrugSubSystem : public ALevelSubsystem {
public:

	float SpawnRate; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct UClass* SpawnDrugClass; // 0x380(0x08)
	struct TArray<struct ADeadBodyDrug*> AmmoBoxArr; // 0x388(0x10)

	void OnAIPlayerDiedEvent(struct AController* cpc); // Function IrisWorld.DeadBodyDrugSubSystem.OnAIPlayerDiedEvent // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisCharacter
// Size: 0x2aa0 (Inherited: 0x2a98)
class AIrisCharacter : public ADFMPlayerCharacter {
public:

	char pad_2A98[0x8]; // 0x2a98(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisPlayerResurrectComponent
// Size: 0x148 (Inherited: 0x148)
class UIrisPlayerResurrectComponent : public UDFMPlayerResurrectComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisRaidDataComponent
// Size: 0x590 (Inherited: 0x100)
class UIrisRaidDataComponent : public UActorComponent {
public:

	struct FRaidStateInfo RaidStateInfo; // 0x100(0x18)
	struct TArray<uint64_t> ConditionProps; // 0x118(0x10)
	struct TArray<struct FRaidVoteInfo> RaidVoteInfos; // 0x128(0x10)
	struct TArray<uint64_t> ConfirmedPlayers; // 0x138(0x10)
	struct TArray<struct FMissionSettlementData> MissionSettlementDatas; // 0x148(0x10)
	struct TArray<uint64_t> GiveUpVotePlayers; // 0x158(0x10)
	struct UDataTable* IrisRaidDataTable; // 0x168(0x08)
	struct UDataTable* IrisRaidEntityDataTable; // 0x170(0x08)
	struct UDataTable* QuestDataTable; // 0x178(0x08)
	struct UDataTable* QuestTimeLimitTable; // 0x180(0x08)
	struct UDataTable* MissionLevelTable; // 0x188(0x08)
	char pad_190[0x8]; // 0x190(0x08)
	int32_t QuestStartupTimestamp; // 0x198(0x04)
	char pad_19C[0x3f4]; // 0x19c(0x3f4)

	void SwitchRaidStage(enum class ERaidStage NewStage); // Function IrisWorld.IrisRaidDataComponent.SwitchRaidStage // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisRaidDataStatisticsComponent
// Size: 0x240 (Inherited: 0x1d0)
class UIrisRaidDataStatisticsComponent : public UDataStatisticsBaseComponent {
public:

	struct FText MissionName; // 0x1d0(0x18)
	struct FRaid1Info Raid1Info; // 0x1e8(0x28)
	struct FRaid2Info Raid2Info; // 0x210(0x0c)
	char pad_21C[0x24]; // 0x21c(0x24)

	void OnServerRaidQuestEnded(int64_t CurQuestID, enum class ERaidStage CurStage, int32_t TimeSpent); // Function IrisWorld.IrisRaidDataStatisticsComponent.OnServerRaidQuestEnded // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisRaidEntranceView
// Size: 0x5d0 (Inherited: 0x5d0)
class UIrisRaidEntranceView : public UDFMInteractorView_ItemBase {
public:


	void EnterRaid(); // Function IrisWorld.IrisRaidEntranceView.EnterRaid // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.Stronghold
// Size: 0x98 (Inherited: 0x30)
class UStronghold : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	enum class EStrongholdState CurState; // 0x38(0x01)
	char pad_39[0xf]; // 0x39(0x0f)
	/*struct TSet<struct ADFMCharacter*>*/char CharArray[0x50]; // 0x48(0x50)

	void SpawnNPCs(); // Function IrisWorld.Stronghold.SpawnNPCs // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.StrongholdSpawnContainer
// Size: 0x388 (Inherited: 0x378)
class AStrongholdSpawnContainer : public AActor {
public:

	struct AInventoryPickup_Container* PickupContainer; // 0x378(0x08)
	char pad_380[0x8]; // 0x380(0x08)

	void Unspawn(); // Function IrisWorld.StrongholdSpawnContainer.Unspawn // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisStrongholdComponent
// Size: 0x1d0 (Inherited: 0x100)
class UIrisStrongholdComponent : public UActorComponent {
public:

	char pad_100[0x38]; // 0x100(0x38)
	struct TArray<struct FStrongholdData> StrongHoldArray; // 0x138(0x10)
	char pad_148[0x88]; // 0x148(0x88)

	void UpdateState(uint32_t StrongholdID, enum class EStrongholdState EState); // Function IrisWorld.IrisStrongholdComponent.UpdateState // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisStrongholdSubsystem
// Size: 0x420 (Inherited: 0x378)
class AIrisStrongholdSubsystem : public ALevelSubsystem {
public:

	struct TMap<uint32_t, struct UStronghold*> SHMap; // 0x378(0x50)
	char pad_3C8[0x58]; // 0x3c8(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisWorldCustomPlayerStateDataComponent
// Size: 0x110 (Inherited: 0x100)
class UIrisWorldCustomPlayerStateDataComponent : public UActorComponent {
public:

	struct AGPPlayerState* PlayerState; // 0x100(0x08)
	float EndAlertTimestamp; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)

	void OnRep_EndAlertTimestamp(); // Function IrisWorld.IrisWorldCustomPlayerStateDataComponent.OnRep_EndAlertTimestamp // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisWorldGameMode
// Size: 0x810 (Inherited: 0x7c0)
class AIrisWorldGameMode : public ADFMGameMode {
public:

	struct TArray<struct FName> AICreateCarryBodyContainTags; // 0x7c0(0x10)
	struct TArray<struct UIrisGameRuleComponent*> IrisGameRuleComponents; // 0x7d0(0x10)
	struct UIrisGameRuleComponent* ActivedGameRuleComponent; // 0x7e0(0x08)
	char pad_7E8[0x28]; // 0x7e8(0x28)

	void RebornPlayer(struct AController* PlayerController, bool RefillArmor); // Function IrisWorld.IrisWorldGameMode.RebornPlayer // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisWorldGameplayDelegates
// Size: 0x100 (Inherited: 0x38)
class UIrisWorldGameplayDelegates : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char IrisWorldTestdEvent[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnIrisSafeHouseReady[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char ClientOnRaidVoteGiveUpInfoChanged[0x10]; // 0x58(0x10)
	char pad_68[0x98]; // 0x68(0x98)

	void NotifyIrisSafeHouseReady(); // Function IrisWorld.IrisWorldGameplayDelegates.NotifyIrisSafeHouseReady // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisWorldGameplaySubsystem
// Size: 0x398 (Inherited: 0x378)
class AIrisWorldGameplaySubsystem : public ALevelSubsystem {
public:

	char pad_378[0x20]; // 0x378(0x20)

	void OnClientSeamlessTravelFinished(bool bReconnect); // Function IrisWorld.IrisWorldGameplaySubsystem.OnClientSeamlessTravelFinished // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisWorldGamePlayUtils
// Size: 0x30 (Inherited: 0x30)
class UIrisWorldGamePlayUtils : public UObject {
public:


	struct AActor* STATIC_SpawnTeamMateCharacter(struct UWorld* WorldContext); // Function IrisWorld.IrisWorldGamePlayUtils.SpawnTeamMateCharacter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisWorldGameplayBlueprintHelper
// Size: 0x30 (Inherited: 0x30)
class UIrisWorldGameplayBlueprintHelper : public UBlueprintFunctionLibrary {
public:


	void STATIC_StartRedAlert(struct UObject* WorldContextObject, float Timeout); // Function IrisWorld.IrisWorldGameplayBlueprintHelper.StartRedAlert // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisWorldGameState
// Size: 0xb00 (Inherited: 0xa38)
class AIrisWorldGameState : public ADFMGameState {
public:

	uint64_t TeamLeaderID; // 0xa38(0x08)
	struct TMap<struct FString, struct FIrisResStateInfo> m_ResStates; // 0xa40(0x50)
	uint64_t ResPlayerID; // 0xa90(0x08)
	struct TArray<uint64_t> RaidMatchPlayerIDs; // 0xa98(0x10)
	bool IsTeammateAllDied; // 0xaa8(0x01)
	char pad_AA9[0x7]; // 0xaa9(0x07)
	struct FString CurGameFlowState; // 0xab0(0x10)
	enum class EGameRuleType CurGameRuleType; // 0xac0(0x01)
	char pad_AC1[0x7]; // 0xac1(0x07)
	/*struct FMulticastInlineDelegate*/char ClientIrisWorldTeamAllDiedStatusChangedEvent[0x10]; // 0xac8(0x10)
	struct USOLTimeLineComponnet* TimeLineEventComponent; // 0xad8(0x08)
	struct UIrisRaidDataStatisticsComponent* IrisRaidDataStatisticsComponent; // 0xae0(0x08)
	enum class EGPPrefGroupName PerfGroupName; // 0xae8(0x01)
	char pad_AE9[0x17]; // 0xae9(0x17)

	void STATIC_SetMuteFoliage(bool bValue); // Function IrisWorld.IrisWorldGameState.SetMuteFoliage // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisWorldHUD
// Size: 0x778 (Inherited: 0x718)
class AIrisWorldHUD : public ADFMHUD {
public:

	struct UDataTable* IrisWorldUIDataTable; // 0x718(0x08)
	/*struct TSoftObjectPtr<UDataTable>*/char IrisWorldUIDataTableHDOverride[0x28]; // 0x720(0x28)
	struct UDataTable* RuleOnlyUIDataTable; // 0x748(0x08)
	struct FString RuleOnlyLuaHudTableName; // 0x750(0x10)
	struct FString RuleOnlyLuaBaseHudTableName; // 0x760(0x10)
	char pad_770[0x8]; // 0x770(0x08)

	void OnQuestStageChanged(struct FName QuestStageName); // Function IrisWorld.IrisWorldHUD.OnQuestStageChanged // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisWorldPlayerSettlementComponent
// Size: 0x1e0 (Inherited: 0x1d8)
class UIrisWorldPlayerSettlementComponent : public UBasePlayerSettlementComponent {
public:

	struct AIrisWorldRaidInfoActor* RaidActor; // 0x1d8(0x08)

	void ServerCollectPlayerSettlementData(enum class EMatchOverReason MatchOverReason); // Function IrisWorld.IrisWorldPlayerSettlementComponent.ServerCollectPlayerSettlementData // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisWorldPlayerStart
// Size: 0x3b0 (Inherited: 0x3a8)
class AIrisWorldPlayerStart : public APlayerStart {
public:

	int32_t StartSpotGroupID; // 0x3a8(0x04)
	bool bFloatStartSpot; // 0x3ac(0x01)
	bool bOnNavigationPlane; // 0x3ad(0x01)
	char pad_3AE[0x2]; // 0x3ae(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisWorldPlayerState
// Size: 0x1050 (Inherited: 0x1020)
class AIrisWorldPlayerState : public ADFMPlayerState {
public:

	char pad_1020[0x8]; // 0x1020(0x08)
	struct FIrisCheckPoint IrisCheckPoint; // 0x1028(0x08)
	struct APlayerStart* PVEPlayerStart; // 0x1030(0x08)
	int32_t DeathCount; // 0x1038(0x04)
	int32_t TaskCompleteCount; // 0x103c(0x04)
	bool IsPlayerVisiable; // 0x1040(0x01)
	char pad_1041[0x3]; // 0x1041(0x03)
	float Merit; // 0x1044(0x04)
	char bPendingLeaveDS; // 0x1048(0x01)
	char pad_1049[0x7]; // 0x1049(0x07)

	void SetPlayerVisiable(bool bPlayerVisiable); // Function IrisWorld.IrisWorldPlayerState.SetPlayerVisiable // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisWorldRaidInfoActor
// Size: 0x380 (Inherited: 0x378)
class AIrisWorldRaidInfoActor : public AActor {
public:

	struct UIrisRaidDataComponent* RaidDataCom; // 0x378(0x08)

	struct AIrisWorldRaidInfoActor* STATIC_GetRaidInfo(struct UObject* InWorldContext); // Function IrisWorld.IrisWorldRaidInfoActor.GetRaidInfo // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.MissionNewAreaView
// Size: 0x3a8 (Inherited: 0x388)
class UMissionNewAreaView : public UBaseUIView {
public:

	struct FName FindCampViewName; // 0x388(0x08)
	struct UFindCampView* FindCampViewHud; // 0x390(0x08)
	char pad_398[0x10]; // 0x398(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.PVEGameplayDelegates
// Size: 0x98 (Inherited: 0x38)
class UPVEGameplayDelegates : public UWorldSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char ClientPickupWeaponInfoChangedEvent[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char ClientBuyItemErrorCodeEvent[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char ClientUnequipItemErrorCodeEvent[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char ClientMeritChangedEvent[0x10]; // 0x68(0x10)
	/*struct FMulticastInlineDelegate*/char ClientMeritObtainEvent[0x10]; // 0x78(0x10)
	/*struct FMulticastInlineDelegate*/char PVEGameEndEvent[0x10]; // 0x88(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.QA_FillAllWeaponAmmo
// Size: 0x38 (Inherited: 0x38)
class UQA_FillAllWeaponAmmo : public UGPQuestActionAsyncReturnActionBase {
public:


	struct UQA_FillAllWeaponAmmo* STATIC_QA_FillAllWeaponAmmo(struct AGPQuestActionContext* QAContext, struct APlayerController* TargetPlayerCtrl); // Function IrisWorld.QA_FillAllWeaponAmmo.QA_FillAllWeaponAmmo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.QA_GetRaidDifficult
// Size: 0x88 (Inherited: 0x38)
class UQA_GetRaidDifficult : public UGPQuestActionAsyncReturnActionBase {
public:

	/*struct FMulticastInlineDelegate*/char Raid_Simple[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char Raid_Normal[0x10]; // 0x48(0x10)
	/*struct FMulticastInlineDelegate*/char Raid_Hard[0x10]; // 0x58(0x10)
	/*struct FMulticastInlineDelegate*/char AnyLevel[0x10]; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)

	struct UQA_GetRaidDifficult* STATIC_QA_GetRaidDifficult(struct AGPQuestActionContext* QAContext); // Function IrisWorld.QA_GetRaidDifficult.QA_GetRaidDifficult // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.QA_IrisCheckPoint
// Size: 0x38 (Inherited: 0x38)
class UQA_IrisCheckPoint : public UGPQuestActionAsyncReturnActionBase {
public:


	struct UQA_IrisCheckPoint* STATIC_QA_EnableFindNearestCheckPoint(struct AGPQuestActionContext* QAContext); // Function IrisWorld.QA_IrisCheckPoint.QA_EnableFindNearestCheckPoint // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidBuyConditionView
// Size: 0x6e0 (Inherited: 0x550)
class URaidBuyConditionView : public ULuaUIBaseView {
public:

	struct UClass* ConditionPropClass; // 0x550(0x08)
	struct UWrapBox* WrapBox_ConditionItems; // 0x558(0x08)
	struct URaidMainSideView* RaidMainSideView; // 0x560(0x08)
	struct TArray<struct URaidPropItemView*> ConditionPropViews; // 0x568(0x10)
	char pad_578[0x168]; // 0x578(0x168)

	void ShowView(); // Function IrisWorld.RaidBuyConditionView.ShowView // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidCountDownHUDView
// Size: 0x3d0 (Inherited: 0x388)
class URaidCountDownHUDView : public UBaseUIView {
public:

	struct UImage* Image_64; // 0x388(0x08)
	struct FText Title; // 0x390(0x18)
	float TotalTime; // 0x3a8(0x04)
	float RemainningTime; // 0x3ac(0x04)
	enum class EQA_CountdownType CountdownType; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	int32_t FinalCountDownTime; // 0x3b4(0x04)
	char pad_3B8[0x4]; // 0x3b8(0x04)
	int32_t EmergencyCountDownTime; // 0x3bc(0x04)
	int32_t SuperEmergencyCountDownTime; // 0x3c0(0x04)
	int32_t LoopAnimationType; // 0x3c4(0x04)
	int32_t CountDownColorChangedTime; // 0x3c8(0x04)
	bool bIsCountDownColorChanged; // 0x3cc(0x01)
	char pad_3CD[0x3]; // 0x3cd(0x03)

	void SetType(int32_t TypeID); // Function IrisWorld.RaidCountDownHUDView.SetType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidMainHUDView
// Size: 0xe18 (Inherited: 0x550)
class URaidMainHUDView : public ULuaUIBaseView {
public:

	struct UClass* MissionObjectiveClass; // 0x550(0x08)
	struct UClass* ConditionPropClass; // 0x558(0x08)
	struct UWidgetSwitcher* HudTitleSwitcher; // 0x560(0x08)
	struct UButton* Btn_RaidProcess; // 0x568(0x08)
	struct UButton* Btn_RaidCondition; // 0x570(0x08)
	struct UUserWidget* Wbp_RaidReturn; // 0x578(0x08)
	struct UButton* Btn_RaidReturn; // 0x580(0x08)
	struct UButton* Btn_ExitRaid; // 0x588(0x08)
	struct UUserWidget* WBP_ExitRaid; // 0x590(0x08)
	struct UWidgetSwitcher* LeftPanelSwitcher; // 0x598(0x08)
	struct UTextBlock* Txt_RaidActionPlan; // 0x5a0(0x08)
	struct UScrollBox* ScrollBoxConditions; // 0x5a8(0x08)
	struct UTextBlock* Txt_NoConditon; // 0x5b0(0x08)
	struct URaidMissionItemView* Wbp_Mission1; // 0x5b8(0x08)
	struct URaidMissionItemView* Wbp_Mission2; // 0x5c0(0x08)
	struct URaidMissionItemView* Wbp_Mission3; // 0x5c8(0x08)
	struct URaidMissionItemView* Wbp_MissionFinal; // 0x5d0(0x08)
	struct UWidgetSwitcher* BottomPanelSwitcher; // 0x5d8(0x08)
	struct UTextBlock* Txt_RaidName; // 0x5e0(0x08)
	struct UTextBlock* Txt_RaidDesc; // 0x5e8(0x08)
	struct UVerticalBox* SpecialPanel; // 0x5f0(0x08)
	struct UTextBlock* Txt_SelectItemName; // 0x5f8(0x08)
	struct UTextBlock* Txt_SelectExInfo; // 0x600(0x08)
	struct UTextBlock* Txt_SelectItemDesc; // 0x608(0x08)
	struct UCanvasPanel* FontPannel; // 0x610(0x08)
	struct UTextBlock* Txt_NewsTitle; // 0x618(0x08)
	struct UTextBlock* Txt_NewsContent; // 0x620(0x08)
	struct UCanvasPanel* VideolPannel; // 0x628(0x08)
	struct UUserWidget* WBP_TimeLimit; // 0x630(0x08)
	struct UUserWidget* WBP_TimeLimit_Special; // 0x638(0x08)
	struct UTextBlock* TxtRaidTimeLeft; // 0x640(0x08)
	struct UTextBlock* TxtRaidTimeLeftSpecial; // 0x648(0x08)
	struct FName AudioAssetOpenRaidPanel; // 0x650(0x08)
	struct FName AudioAssetSelectMission; // 0x658(0x08)
	struct FName AudioAssetQuit; // 0x660(0x08)
	struct TArray<struct URaidMissionItemView*> MissionItemViews; // 0x668(0x10)
	struct TArray<struct URaidMissionTargetItemView*> MissionObjectiveItemView; // 0x678(0x10)
	struct TArray<struct URaidPropItemView*> ConditionPropViews; // 0x688(0x10)
	char pad_698[0x780]; // 0x698(0x780)

	void ShowView(); // Function IrisWorld.RaidMainHUDView.ShowView // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidMainSideView
// Size: 0x598 (Inherited: 0x550)
class URaidMainSideView : public ULuaUIBaseView {
public:

	struct UHorizontalBox* PanelVoteFlag; // 0x550(0x08)
	struct UUserWidget* Btn_PurchaseComplete; // 0x558(0x08)
	struct UTextBlock* Txt_PurchasedNum; // 0x560(0x08)
	struct UCanvasPanel* Panel_AllStaffPurchased; // 0x568(0x08)
	struct URichTextBlock* RichText; // 0x570(0x08)
	char pad_578[0x10]; // 0x578(0x10)
	struct TArray<struct UPlayerVoteItem*> PlayerVoteItems; // 0x588(0x10)

	void OnInit(); // Function IrisWorld.RaidMainSideView.OnInit // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidMapHUDController
// Size: 0x510 (Inherited: 0x2e0)
class URaidMapHUDController : public UMapBaseHUDController {
public:

	struct TArray<struct URaidMapMarkerIconHUDController*> AvailableEnemyMarkControllerArr; // 0x2e0(0x10)
	struct TArray<struct URaidMapMarkerIconHUDController*> UsingEnemyMarkControllerArr; // 0x2f0(0x10)
	int32_t MaxNumEnemyDisplayed; // 0x300(0x04)
	int32_t MaxMarkbleEnemyDistance; // 0x304(0x04)
	int32_t EnemyDisappearDistance; // 0x308(0x04)
	float CheckEnemyLocationTimeGap; // 0x30c(0x04)
	char pad_310[0x8]; // 0x310(0x08)
	struct TMap<int64_t, struct AActor*> EnemyMap; // 0x318(0x50)
	struct TMap<int64_t, struct FVector> EnemySpottedLocationMap; // 0x368(0x50)
	struct TMap<int64_t, struct FVector> EnemyOnFireLocationMap; // 0x3b8(0x50)
	char pad_408[0x10]; // 0x408(0x10)
	/*struct TSet<struct AActor*>*/char RegisteredMapIconActors[0x50]; // 0x418(0x50)
	struct TMap<struct ADFMCharacter*, float> AIAlertCache; // 0x468(0x50)
	struct TMap<struct ADFMCharacter*, float> PlayerAlertCache; // 0x4b8(0x50)
	float AIAlertProtectTime; // 0x508(0x04)
	float PlayerAlertTrackTime; // 0x50c(0x04)

	void UpdateEnemyStatus(float Delta); // Function IrisWorld.RaidMapHUDController.UpdateEnemyStatus // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidMapMarkerIconHUDView
// Size: 0x490 (Inherited: 0x3f8)
class URaidMapMarkerIconHUDView : public UMapItemHUDView {
public:

	struct UUserWidget* MainView; // 0x3f8(0x08)
	struct UImage* PublicItem; // 0x400(0x08)
	struct UImage* ArrowRotation; // 0x408(0x08)
	bool bDestroyArrowRotation; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct UPaperSprite* ValkyraeImg; // 0x418(0x08)
	struct UPaperSprite* TrainImg; // 0x420(0x08)
	struct UPaperSprite* LiLiImg; // 0x428(0x08)
	struct UPaperSprite* EnemyVehicleImg; // 0x430(0x08)
	struct UPaperSprite* ArmoredVehicleImg; // 0x438(0x08)
	struct UPaperSprite* TankImg; // 0x440(0x08)
	struct UPaperSprite* EnemyImg; // 0x448(0x08)
	struct FVector2D ValkyraeImgSize; // 0x450(0x08)
	struct FVector2D TrainImgSize; // 0x458(0x08)
	struct FVector2D LiLiImgSize; // 0x460(0x08)
	struct FVector2D EnemyVehicleImgSize; // 0x468(0x08)
	struct FVector2D ArmoredVehicleImgSize; // 0x470(0x08)
	struct FVector2D TankImgSize; // 0x478(0x08)
	struct FVector2D EnemyImgSize; // 0x480(0x08)
	enum class ERaidMapMarkerType markerType; // 0x488(0x01)
	bool bIsMatchSize; // 0x489(0x01)
	char pad_48A[0x2]; // 0x48a(0x02)
	float ScaleInMiniMap; // 0x48c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidMapMarkerIconHUDController
// Size: 0x2a0 (Inherited: 0x290)
class URaidMapMarkerIconHUDController : public UMapIconViewController {
public:

	enum class ERaidMapMarkerType markerType; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	uint64_t PlayerUin; // 0x298(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidMissionCompleteView
// Size: 0x3a0 (Inherited: 0x388)
class URaidMissionCompleteView : public UBaseUIView {
public:

	struct UWrapBox* MissionRewardBox; // 0x388(0x08)
	struct UDFMTouchEventPanel* TouchEventPanel; // 0x390(0x08)
	char pad_398[0x8]; // 0x398(0x08)

	void OnTouchEvent_Clicked(); // Function IrisWorld.RaidMissionCompleteView.OnTouchEvent_Clicked // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidMissionItemView
// Size: 0x768 (Inherited: 0x388)
class URaidMissionItemView : public UBaseUIView {
public:

	char pad_388[0x10]; // 0x388(0x10)
	struct UImage* Img_MissionBg; // 0x398(0x08)
	struct UTextBlock* Txt_MissionExtraInfo; // 0x3a0(0x08)
	struct UTextBlock* Txt_MissionName; // 0x3a8(0x08)
	struct UCanvasPanel* Panel_Condition; // 0x3b0(0x08)
	struct UCanvasPanel* Panel_Select; // 0x3b8(0x08)
	struct UButton* Btn_Mission; // 0x3c0(0x08)
	struct UHorizontalBox* PanelVoteFlag; // 0x3c8(0x08)
	struct UCanvasPanel* Panel_MissionComplete; // 0x3d0(0x08)
	struct UTextBlock* Txt_Vote; // 0x3d8(0x08)
	char MissionBgState; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct TArray<struct UPlayerVoteItem*> PlayerVoteItems; // 0x3e8(0x10)
	char pad_3F8[0x370]; // 0x3f8(0x370)

	void OnRaidMissionSettlement(int32_t RaidID, int32_t QuestID); // Function IrisWorld.RaidMissionItemView.OnRaidMissionSettlement // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidMissionTargetItemView
// Size: 0x3c0 (Inherited: 0x388)
class URaidMissionTargetItemView : public UBaseUIView {
public:

	char MissionStateIndex; // 0x388(0x01)
	char pad_389[0x27]; // 0x389(0x27)
	struct UTextBlock* Txt_MissionObjectiveName; // 0x3b0(0x08)
	struct UTextBlock* Txt_ObjectiveProgress; // 0x3b8(0x08)

	void OnMissionStateChanged(); // Function IrisWorld.RaidMissionTargetItemView.OnMissionStateChanged // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidPreviewHUDView
// Size: 0x798 (Inherited: 0x550)
class URaidPreviewHUDView : public ULuaUIBaseView {
public:

	struct UUserWidget* Wbp_ReturnToWorld; // 0x550(0x08)
	struct UUserWidget* Wbp_StartRaid; // 0x558(0x08)
	struct UButton* Btn_ReqtureToWorld; // 0x560(0x08)
	struct UButton* Btn_StartRaid; // 0x568(0x08)
	struct UTextBlock* Txt_RaidName; // 0x570(0x08)
	struct UTextBlock* Txt_RaidDesc; // 0x578(0x08)
	struct UTextBlock* Txt_EXP; // 0x580(0x08)
	struct UButton* Btn_RaidDetail; // 0x588(0x08)
	struct UUserWidget* Btn_EasyMode; // 0x590(0x08)
	struct UImage* Img_EasyModeFlag; // 0x598(0x08)
	struct UUserWidget* Btn_NormalMode; // 0x5a0(0x08)
	struct UImage* Img_NormalModeFlag; // 0x5a8(0x08)
	struct UUserWidget* Btn_HardMode; // 0x5b0(0x08)
	struct UImage* Img_HardModeFlag; // 0x5b8(0x08)
	struct UCheckbox* CheckBox_StartMatch; // 0x5c0(0x08)
	struct UCheckbox* CheckBoxEasyMode; // 0x5c8(0x08)
	struct UCheckbox* CheckBoxNormalMode; // 0x5d0(0x08)
	struct UCheckbox* CheckBoxHardMode; // 0x5d8(0x08)
	char pad_5E0[0x1b8]; // 0x5e0(0x1b8)

	void StartMatchTeammate(int32_t RaidID, int32_t SubMode); // Function IrisWorld.RaidPreviewHUDView.StartMatchTeammate // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidPropItemView
// Size: 0xfe8 (Inherited: 0x550)
class URaidPropItemView : public ULuaUIBaseView {
public:

	struct UDFMImage* Img_Prop; // 0x550(0x08)
	struct UTextBlock* Txt_PropName; // 0x558(0x08)
	struct UTextBlock* Txt_Amount; // 0x560(0x08)
	struct UTextBlock* Txt_InventoryNum; // 0x568(0x08)
	struct UHorizontalBox* Box_Price; // 0x570(0x08)
	struct UTextBlock* Txt_Price; // 0x578(0x08)
	struct UImage* Img_Buy; // 0x580(0x08)
	struct UHorizontalBox* PanelVoteFlag; // 0x588(0x08)
	struct UUserWidget* Btn_Purchase; // 0x590(0x08)
	/*struct FMulticastInlineDelegate*/char OnSelectConditionProp[0x10]; // 0x598(0x10)
	/*struct FMulticastInlineDelegate*/char OnPurchaseConditionProp[0x10]; // 0x5a8(0x10)
	char pad_5B8[0x10]; // 0x5b8(0x10)
	struct TArray<struct UPlayerVoteItem*> PlayerVoteItems; // 0x5c8(0x10)
	char PropItemState; // 0x5d8(0x01)
	char pad_5D9[0xa0f]; // 0x5d9(0xa0f)

	void OnPropItemStateChange(); // Function IrisWorld.RaidPropItemView.OnPropItemStateChange // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidScreenMarkerView
// Size: 0x408 (Inherited: 0x390)
class URaidScreenMarkerView : public UCommonHUDView {
public:

	bool bNeedShowDistance; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct UMaterialInstanceDynamic* CircleProgressBarMID; // 0x398(0x08)
	struct UImage* Image_79; // 0x3a0(0x08)
	struct UImage* Image_316; // 0x3a8(0x08)
	struct UImage* IconImage; // 0x3b0(0x08)
	struct UImage* Intro; // 0x3b8(0x08)
	struct UTextBlock* DistText; // 0x3c0(0x08)
	struct UTextBlock* UpDistText; // 0x3c8(0x08)
	struct UImage* Image_Line; // 0x3d0(0x08)
	struct UCanvasPanel* DFCanvasPanel_1; // 0x3d8(0x08)
	struct UProgressBar* ProgressBar_104; // 0x3e0(0x08)
	struct UCanvasPanel* ArrowRotation; // 0x3e8(0x08)
	struct FColor ProgressColor_H; // 0x3f0(0x04)
	struct FColor ProgressColor_M; // 0x3f4(0x04)
	struct FColor ProgressColor_L; // 0x3f8(0x04)
	struct FVector2D AnchorCenterOffest; // 0x3fc(0x08)
	char pad_404[0x4]; // 0x404(0x04)

	void ShowLine(bool bEnableShow); // Function IrisWorld.RaidScreenMarkerView.ShowLine // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidStageRemainTimeView
// Size: 0x3a8 (Inherited: 0x388)
class URaidStageRemainTimeView : public UBaseUIView {
public:

	char pad_388[0x10]; // 0x388(0x10)
	struct UTextBlock* CountingTimeText; // 0x398(0x08)
	struct UTextBlock* RaidNameText; // 0x3a0(0x08)

	void SetRaidGameDifficultLevelText(); // Function IrisWorld.RaidStageRemainTimeView.SetRaidGameDifficultLevelText // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidTeamHUDController
// Size: 0xc8 (Inherited: 0xc0)
class URaidTeamHUDController : public UTeamHUDControllerBase {
public:

	bool bRPGShow; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)

	void OnHurtCheckBtnStateChanged(bool bIsChecked); // Function IrisWorld.RaidTeamHUDController.OnHurtCheckBtnStateChanged // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.PlayerVoteItem
// Size: 0x2b8 (Inherited: 0x298)
class UPlayerVoteItem : public UUserWidget {
public:

	char pad_298[0xc]; // 0x298(0x0c)
	int32_t PlayerIndex; // 0x2a4(0x04)
	bool bTeamLeader; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UImage* Img_Ready; // 0x2b0(0x08)

	void BPOnUpdatePlayer(); // Function IrisWorld.PlayerVoteItem.BPOnUpdatePlayer // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidVoteItemView
// Size: 0x5f8 (Inherited: 0x388)
class URaidVoteItemView : public UBaseUIView {
public:

	struct UTextBlock* Txt_MissionName; // 0x388(0x08)
	struct UTextBlock* Txt_VoteCount; // 0x390(0x08)
	struct UProgressBar* ProgressVote; // 0x398(0x08)
	struct UHorizontalBox* PanelPlayerFlag; // 0x3a0(0x08)
	char pad_3A8[0x218]; // 0x3a8(0x218)
	struct TArray<struct UPlayerVoteItem*> PlayerVoteItems; // 0x5c0(0x10)
	char pad_5D0[0x28]; // 0x5d0(0x28)

	void UpdateVoteInfo(struct TArray<struct FRaidVoteInfo>& RaidVoteInfo); // Function IrisWorld.RaidVoteItemView.UpdateVoteInfo // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidVoteView
// Size: 0x9c0 (Inherited: 0x550)
class URaidVoteView : public ULuaUIBaseView {
public:

	struct UProgressBar* ProgressCountDown; // 0x550(0x08)
	struct UTextBlock* Txt_CoundDown; // 0x558(0x08)
	struct URaidMissionItemView* Wbp_Mission1; // 0x560(0x08)
	struct URaidMissionItemView* Wbp_Mission2; // 0x568(0x08)
	struct URaidMissionItemView* Wbp_Mission3; // 0x570(0x08)
	struct URaidMissionItemView* Wbp_MissionFinal; // 0x578(0x08)
	struct UTextBlock* Txt_RaidName; // 0x580(0x08)
	struct UTextBlock* Txt_RaidDesc; // 0x588(0x08)
	struct URaidMainSideView* RaidMainSideView; // 0x590(0x08)
	struct FName AudioAssetOpenRaidPanel; // 0x598(0x08)
	struct FName AudioAssetSelectMission; // 0x5a0(0x08)
	struct FName AudioAssetConfirm; // 0x5a8(0x08)
	struct FName AudioAssetCountDown; // 0x5b0(0x08)
	struct TArray<struct URaidMissionItemView*> MissionItemViews; // 0x5b8(0x10)
	char pad_5C8[0x3f8]; // 0x5c8(0x3f8)

	void UpdateVoteInfo(struct TArray<struct FRaidVoteInfo> RaidVoteInfo); // Function IrisWorld.RaidVoteView.UpdateVoteInfo // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RedAlertHUDView
// Size: 0x388 (Inherited: 0x388)
class URedAlertHUDView : public UBaseUIView {
public:


	float GetRedAlertEndtimestamp(); // Function IrisWorld.RedAlertHUDView.GetRedAlertEndtimestamp // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.SafeHouseLevelSubSys
// Size: 0x380 (Inherited: 0x378)
class ASafeHouseLevelSubSys : public ALevelSubsystem {
public:

	char bInSafeHouseStage : 1; // 0x378(0x01)
	char pad_378_1 : 7; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)

	struct ASafeHouseLevelSubSys* STATIC_Get(struct UWorld* WorldContext); // Function IrisWorld.SafeHouseLevelSubSys.Get // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.SeamlessTravelTestView
// Size: 0x2b0 (Inherited: 0x298)
class USeamlessTravelTestView : public UUserWidget {
public:

	bool bAutoSwitchPlayer; // 0x298(0x01)
	bool bInSeamlessTravel; // 0x299(0x01)
	char pad_29A[0x2]; // 0x29a(0x02)
	float DelayTime; // 0x29c(0x04)
	char pad_2A0[0x10]; // 0x2a0(0x10)

	void OnSeamlessTravelEnd(); // Function IrisWorld.SeamlessTravelTestView.OnSeamlessTravelEnd // (Event|Protected|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.StartSpotAllocator_Discovery
// Size: 0xe0 (Inherited: 0x90)
class UStartSpotAllocator_Discovery : public UStartSpotAllocator {
public:

	struct TMap<int32_t, struct FIrisStartSpotGroup> IrisStartSpotGroupsMap; // 0x90(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.StartSpotAllocator_Raid
// Size: 0xe8 (Inherited: 0x90)
class UStartSpotAllocator_Raid : public UStartSpotAllocator {
public:

	char pad_90[0x8]; // 0x90(0x08)
	struct TMap<int32_t, struct FIrisStartSpotGroup> IrisStartSpotGroupsMap; // 0x98(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.TestActorComponent
// Size: 0x100 (Inherited: 0x100)
class UTestActorComponent : public UActorComponent {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.WorldCruiseActor
// Size: 0x380 (Inherited: 0x378)
class AWorldCruiseActor : public AActor {
public:

	struct AGPPlayerController* PlayerController; // 0x378(0x08)

	void StartTarget(struct AGPPlayerController* cpc); // Function IrisWorld.WorldCruiseActor.StartTarget // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.WorldCruiseActorSpawner
// Size: 0x3a8 (Inherited: 0x378)
class AWorldCruiseActorSpawner : public AActor {
public:

	char pad_378[0x8]; // 0x378(0x08)
	struct TArray<struct AGPPlayerController*> Players; // 0x380(0x10)
	char pad_390[0x18]; // 0x390(0x18)

	void Spawn(); // Function IrisWorld.WorldCruiseActorSpawner.Spawn // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.BigMapIrisItem
// Size: 0x408 (Inherited: 0x3f8)
class UBigMapIrisItem : public UMapItemHUDView {
public:

	char pad_3F8[0x10]; // 0x3f8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.ComposableGameModeBase
// Size: 0x488 (Inherited: 0x460)
class AComposableGameModeBase : public AGameMode {
public:

	struct TArray<struct UClass*> SubGameModeClasses; // 0x460(0x10)
	struct USubGameModeBase* PrimarySubGameMode; // 0x470(0x08)
	struct TArray<struct USubGameModeBase*> SecondarySubGameModes; // 0x478(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisGameRuleComponent
// Size: 0x1a0 (Inherited: 0x100)
class UIrisGameRuleComponent : public UActorComponent {
public:

	enum class EGameRuleType RuleType; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FGPGameRuleSetting RuleSetting; // 0x108(0x78)
	enum class EWeaponAmmoLogicType WeaponAmmoLogic; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct AIrisWorldGameState* IrisWorldGameState; // 0x188(0x08)
	struct AIrisWorldGameMode* IrisWorldGameMode; // 0x190(0x08)
	char pad_198[0x8]; // 0x198(0x08)

	void RemoveCharacterComponents(struct AController* DFMController); // Function IrisWorld.IrisGameRuleComponent.RemoveCharacterComponents // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.PlayerReviveView
// Size: 0x3c0 (Inherited: 0x388)
class UPlayerReviveView : public UBaseUIView {
public:

	struct UButton* BtnBuyRevive; // 0x388(0x08)
	struct UTextBlock* TextUseRecCoin; // 0x390(0x08)
	struct UTextBlock* TextNeedCoinNum; // 0x398(0x08)
	struct UTextBlock* TextResurrectionCoinNum; // 0x3a0(0x08)
	struct UProgressBar* ProgressAutoRevive; // 0x3a8(0x08)
	struct UTextBlock* TextAutoReviveTime; // 0x3b0(0x08)
	char pad_3B8[0x8]; // 0x3b8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.SubGameModeBase
// Size: 0xb0 (Inherited: 0x30)
class USubGameModeBase : public UObject {
public:

	enum class ESubGameModeType SubGameModeType; // 0x30(0x01)
	bool bAutoStartupAfterInitialize; // 0x31(0x01)
	bool bSpawnCharacterAfterMatchStarted; // 0x32(0x01)
	char bPrimarySubMode : 1; // 0x33(0x01)
	char pad_33_1 : 7; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
	struct UClass* PlayerStateClass; // 0x38(0x08)
	struct UClass* HUDClass; // 0x40(0x08)
	struct UClass* DefaultPawnClass; // 0x48(0x08)
	char bSubGameModeActive : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TMap<struct APlayerController*, struct TWeakObjectPtr<struct APawn>> SubGameModePawns; // 0x58(0x50)
	char pad_A8[0x8]; // 0xa8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.MapMissionHUDView
// Size: 0x448 (Inherited: 0x408)
class UMapMissionHUDView : public UBigMapIrisItem {
public:

	struct FPlayerMissionUIInfo MissionInfo; // 0x408(0x20)
	struct UImage* TargetIcon; // 0x428(0x08)
	struct UButton* Btn; // 0x430(0x08)
	struct UObject* ActiveQuestTexture; // 0x438(0x08)
	struct UObject* DeactiveQuestTexture; // 0x440(0x08)

	void OnClick(); // Function IrisWorld.MapMissionHUDView.OnClick // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.MapStrongholdHUDView
// Size: 0x548 (Inherited: 0x408)
class UMapStrongholdHUDView : public UBigMapIrisItem {
public:

	struct FStrongholdRow StrongholdData; // 0x408(0x100)
	struct UButton* Btn; // 0x508(0x08)
	struct UWidgetSwitcher* StateSW; // 0x510(0x08)
	struct UTextBlock* SelectedTargetName; // 0x518(0x08)
	struct UTextBlock* UnselectedTargetName; // 0x520(0x08)
	struct UImage* UnSelectedTargetIcon; // 0x528(0x08)
	struct UImage* SelectedTargetIcon; // 0x530(0x08)
	struct UObject* StrongholdTexture; // 0x538(0x08)
	struct UObject* RaidTexture; // 0x540(0x08)

	void OnClick(); // Function IrisWorld.MapStrongholdHUDView.OnClick // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.IrisSafeHouseGameMode
// Size: 0x488 (Inherited: 0x488)
class AIrisSafeHouseGameMode : public AComposableGameModeBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.DiscoveryGameRuleComponent
// Size: 0x1e8 (Inherited: 0x1a0)
class UDiscoveryGameRuleComponent : public UIrisGameRuleComponent {
public:

	char pad_1A0[0x48]; // 0x1a0(0x48)

	void OnRecAny2DSBeginRaidReq(uint64_t RaidID, struct TArray<uint64_t> PlayerIds); // Function IrisWorld.DiscoveryGameRuleComponent.OnRecAny2DSBeginRaidReq // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.RaidGameRuleComponent
// Size: 0x1b0 (Inherited: 0x1a0)
class URaidGameRuleComponent : public UIrisGameRuleComponent {
public:

	char pad_1A0[0x10]; // 0x1a0(0x10)

	void OnRecAny2DSBeginRaidReq(uint64_t RaidID, struct TArray<uint64_t> PlayerIds); // Function IrisWorld.RaidGameRuleComponent.OnRecAny2DSBeginRaidReq // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.SafeHouseGameRuleComponent
// Size: 0x1c0 (Inherited: 0x1a0)
class USafeHouseGameRuleComponent : public UIrisGameRuleComponent {
public:

	struct UClass* SafeHouseCharacter; // 0x1a0(0x08)
	struct UClass* SafeHouseHUD; // 0x1a8(0x08)
	char pad_1B0[0x10]; // 0x1b0(0x10)

	void OnCharacterEnterSafeHouseRule(struct APawn* TargetPawn); // Function IrisWorld.SafeHouseGameRuleComponent.OnCharacterEnterSafeHouseRule // (Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.PlayerReviveView_Mobile
// Size: 0x3d8 (Inherited: 0x3c0)
class UPlayerReviveView_Mobile : public UPlayerReviveView {
public:

	struct UUserWidget* WbpBuyRevive; // 0x3c0(0x08)
	struct URichTextBlock* RichTextBuyRevive; // 0x3c8(0x08)
	struct UUserWidget* WbpSelfDied; // 0x3d0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.SubGameMode_FrontEnd
// Size: 0xb0 (Inherited: 0xb0)
class USubGameMode_FrontEnd : public USubGameModeBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class IrisWorld.SubGameMode_SafeHouse
// Size: 0xc0 (Inherited: 0xb0)
class USubGameMode_SafeHouse : public USubGameModeBase {
public:

	char pad_B0[0x10]; // 0xb0(0x10)

	void OnSafeHouseEnvUnloadSuccess(); // Function IrisWorld.SubGameMode_SafeHouse.OnSafeHouseEnvUnloadSuccess // (Final|Native|Protected) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
