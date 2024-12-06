
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFMMission.IrisPlayerMissionComponent
// Size: 0x108 (Inherited: 0x100)
class UIrisPlayerMissionComponent : public UGPPlayerMissionComponent {
public:

	char pad_100[0x8]; // 0x100(0x08)

	void TryTraceMission(int64_t missionid); // Function DFMMission.IrisPlayerMissionComponent.TryTraceMission // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionComponent
// Size: 0x590 (Inherited: 0x248)
class UMissionComponent : public UGPMissionComponent {
public:

	char pad_248[0x8]; // 0x248(0x08)
	struct TArray<struct TWeakObjectPtr<struct AGPPlayerState>> SharePlayerStates; // 0x250(0x10)
	struct TMap<int32_t, int32_t> GameStates; // 0x260(0x50)
	struct TArray<uint64_t> FinishedMission; // 0x2b0(0x10)
	struct TArray<uint64_t> CurrentMissions; // 0x2c0(0x10)
	struct TMap<uint64_t, int32_t> AllMissions; // 0x2d0(0x50)
	struct TArray<struct UMission*> AllMissionObjects; // 0x320(0x10)
	struct TArray<struct UMissionLevel*> MissionLevels; // 0x330(0x10)
	char pad_340[0x50]; // 0x340(0x50)
	bool MissionModeActivate; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct UMission* CurrentActiveMission; // 0x398(0x08)
	char pad_3A0[0x38]; // 0x3a0(0x38)
	uint64_t LastOpenActivatedMissionId; // 0x3d8(0x08)
	char pad_3E0[0x88]; // 0x3e0(0x88)
	struct TArray<struct UMissionLevelRequest*> LevelRequest; // 0x468(0x10)
	char pad_478[0x58]; // 0x478(0x58)
	struct FMissionTurnInItem MissionTurnInItemData; // 0x4d0(0x60)
	char pad_530[0x50]; // 0x530(0x50)
	bool Enable; // 0x580(0x01)
	char pad_581[0xf]; // 0x581(0x0f)

	void ShowPanel(bool Show); // Function DFMMission.MissionComponent.ShowPanel // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionLevelRequest
// Size: 0x40 (Inherited: 0x30)
class UMissionLevelRequest : public UObject {
public:

	char pad_30[0x10]; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.WorldCruiseSpawnerInteraceface
// Size: 0x30 (Inherited: 0x30)
class UWorldCruiseSpawnerInteraceface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.DFMMissionMgr
// Size: 0x30 (Inherited: 0x30)
class UDFMMissionMgr : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.DFMMissionSimpleAction
// Size: 0x118 (Inherited: 0x50)
class UDFMMissionSimpleAction : public UQASimpleActionProxy {
public:

	char pad_50[0xb0]; // 0x50(0xb0)
	struct TArray<struct UMissionBaseSimpleAction*> MissionActions; // 0x100(0x10)
	char pad_110[0x8]; // 0x110(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.DFMMissionSimpleQuestTrigger
// Size: 0x1a0 (Inherited: 0x98)
class UDFMMissionSimpleQuestTrigger : public UQASimpleQuestProxy {
public:

	struct UMissionCombineTrigger* MissionCombineTrigger; // 0x98(0x08)
	char pad_A0[0x40]; // 0xa0(0x40)
	struct UMission* Mission; // 0xe0(0x08)
	char pad_E8[0x28]; // 0xe8(0x28)
	struct TArray<struct UMissionBaseSimpleAction*> SimpleQuestAction; // 0x110(0x10)
	char pad_120[0x28]; // 0x120(0x28)
	struct UMissionCombineTrigger* TagAreaTrigger; // 0x148(0x08)
	char pad_150[0x30]; // 0x150(0x30)
	struct TArray<struct ADFMCharacter*> BindhealthActorUpdates; // 0x180(0x10)
	char pad_190[0x10]; // 0x190(0x10)

	void UpdateObjective(bool B); // Function DFMMission.DFMMissionSimpleQuestTrigger.UpdateObjective // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionEventBusSubSystem
// Size: 0x38 (Inherited: 0x38)
class UMissionEventBusSubSystem : public UGameInstanceSubsystem {
public:


	struct UMissionEventBusSubSystem* STATIC_Get(struct UWorld* WorldContext); // Function DFMMission.MissionEventBusSubSystem.Get // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionSubsystem
// Size: 0x400 (Inherited: 0x38)
class UMissionSubsystem : public UGPMissionSubsystem {
public:

	char pad_38[0x20]; // 0x38(0x20)
	struct UClass* MarkerClass; // 0x58(0x08)
	char pad_60[0xa0]; // 0x60(0xa0)
	struct UObject* YourDaddy; // 0x100(0x08)
	struct ULevel* quest_AIConfig_level; // 0x108(0x08)
	struct TMap<struct AGPQuest*, struct UMission*> QuestMissionMap; // 0x110(0x50)
	struct UGameStateMissionComponent* GSMissionComponent; // 0x160(0x08)
	struct UMissionComponent* MissionComponent; // 0x168(0x08)
	char pad_170[0x20]; // 0x170(0x20)
	struct UMissionActorLayer* MissionActorLayer; // 0x190(0x08)
	char pad_198[0x268]; // 0x198(0x268)

	void WorldActorBoxOpenFinished(struct AGPPlayerController* cpc, struct AInventoryPickup_OpenBox* Box); // Function DFMMission.MissionSubsystem.WorldActorBoxOpenFinished // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.DFMMissionSubsystem
// Size: 0x3e0 (Inherited: 0x378)
class ADFMMissionSubsystem : public ALevelSubsystem {
public:

	char pad_378[0x68]; // 0x378(0x68)

	void OnHUDHealthDamaged(float Damage, struct FTakeHitInfo& TakeHitInfo); // Function DFMMission.DFMMissionSubsystem.OnHUDHealthDamaged // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.GameStateMissionComponent
// Size: 0x200 (Inherited: 0x100)
class UGameStateMissionComponent : public UGPGameStateMissionComponent {
public:

	struct UMissionSubsystem* MissionSubsystem; // 0x100(0x08)
	bool InitFromServer; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<struct FString> PersistLevels; // 0x110(0x10)
	char pad_120[0x10]; // 0x120(0x10)
	int32_t LoadSig; // 0x130(0x04)
	char pad_134[0xb4]; // 0x134(0xb4)
	struct TArray<struct UMissionLevel*> TickMissionLevels; // 0x1e8(0x10)
	bool MissionModeActivate; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)

	void RemoveTickLevel(struct UMissionLevel* InArg); // Function DFMMission.GameStateMissionComponent.RemoveTickLevel // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.SubLevelInstanceActor
// Size: 0x3b8 (Inherited: 0x378)
class ASubLevelInstanceActor : public AActor {
public:

	struct AGPPlayerController* cpc; // 0x378(0x08)
	struct USublevelComponent* SublevelComponent; // 0x380(0x08)
	struct FName LevelName; // 0x388(0x08)
	bool isServerLoaded; // 0x390(0x01)
	char pad_391[0x27]; // 0x391(0x27)

	void OnSubLevelTick(); // Function DFMMission.SubLevelInstanceActor.OnSubLevelTick // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.Mission
// Size: 0x468 (Inherited: 0x30)
class UMission : public UObject {
public:

	struct UMissionLevel* MissionLevel; // 0x30(0x08)
	struct TWeakObjectPtr<struct UMissionComponent> MissionComponent; // 0x38(0x08)
	enum class EGameRuleType WorldType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct TWeakObjectPtr<struct AGPPlayerState> PlayerState; // 0x44(0x08)
	int32_t missionid; // 0x4c(0x04)
	char pad_50[0x8]; // 0x50(0x08)
	struct AGPQuest* CurrentQuest; // 0x58(0x08)
	struct FString MissionName; // 0x60(0x10)
	struct FString MapMarkerStr; // 0x70(0x10)
	struct FString LongPackageName; // 0x80(0x10)
	int32_t CurrentStateIndex; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct UMissionState* CurrentState; // 0x98(0x08)
	struct TArray<struct UMissionState*> CurrentStates; // 0xa0(0x10)
	struct UMissionBaseTrigger* PauseTrigger; // 0xb0(0x08)
	struct UMissionBaseTrigger* FailedTrigger; // 0xb8(0x08)
	struct UQASimpleQuestProxy* SimpleQuest; // 0xc0(0x08)
	struct TArray<struct UQASimpleActionProxy*> SimpleActions; // 0xc8(0x10)
	struct TArray<struct UQASimpleQuestProxy*> SimpleSideQuestProxys; // 0xd8(0x10)
	struct TArray<struct UQASimpleQuestProxy*> SimpleTriggerProxys; // 0xe8(0x10)
	struct TMap<struct FString, struct UQASimpleQuestProxy*> TaskGroupQuestProxys; // 0xf8(0x50)
	bool ValidQuest; // 0x148(0x01)
	char pad_149[0x57]; // 0x149(0x57)
	struct TMap<struct FName, struct FMissionMapMarkerData> MapIconMarkers; // 0x1a0(0x50)
	char pad_1F0[0x278]; // 0x1f0(0x278)

	void OnRep_CurrentStateIndex(); // Function DFMMission.Mission.OnRep_CurrentStateIndex // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionActorLayer
// Size: 0xa8 (Inherited: 0x30)
class UMissionActorLayer : public UObject {
public:

	char pad_30[0x78]; // 0x30(0x78)

	void AddToLayer(struct FString Tag, struct AActor* InArg2); // Function DFMMission.MissionActorLayer.AddToLayer // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionState
// Size: 0x60 (Inherited: 0x30)
class UMissionState : public UObject {
public:

	struct UMission* Mission; // 0x30(0x08)
	enum class EMissionState MissionState; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UMissionBaseTrigger* MissionStateTrigger; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
	bool IsEnable; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	void ToggleStage(bool InArg1, bool InArg2); // Function DFMMission.MissionState.ToggleStage // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionTurnInItemGameplayHelper
// Size: 0x30 (Inherited: 0x30)
class UMissionTurnInItemGameplayHelper : public UBlueprintFunctionLibrary {
public:


	void STATIC_RemoveMissionTurnInItemInfo(int32_t handl); // Function DFMMission.MissionTurnInItemGameplayHelper.RemoveMissionTurnInItemInfo // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionLevel
// Size: 0x190 (Inherited: 0x30)
class UMissionLevel : public UObject {
public:

	struct TArray<struct FString> PreSublevelName; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	enum class EGameRuleType WorldType; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	uint64_t missionid; // 0x58(0x08)
	struct UMission* Mission; // 0x60(0x08)
	int32_t InitSig; // 0x68(0x04)
	int32_t LoadSig; // 0x6c(0x04)
	int32_t unLoadSig; // 0x70(0x04)
	char pad_74[0xf4]; // 0x74(0xf4)
	struct TArray<struct ASubLevelInstanceActor*> SubInstanceActors; // 0x168(0x10)
	char pad_178[0x10]; // 0x178(0x10)
	struct UGameStateMissionComponent* GSComp; // 0x188(0x08)

	void UnLevels(); // Function DFMMission.MissionLevel.UnLevels // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.SQAFunctionLib
// Size: 0x30 (Inherited: 0x30)
class USQAFunctionLib : public UObject {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.SublevelComponent
// Size: 0x340 (Inherited: 0x240)
class USublevelComponent : public USceneComponent {
public:

	enum class EGameRuleType WorldType; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct FString LevelPath; // 0x248(0x10)
	bool LevelActive; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	/*struct FMulticastInlineDelegate*/char OnLevelLoaded[0x10]; // 0x260(0x10)
	/*struct FMulticastInlineDelegate*/char OnLevelUnloaded[0x10]; // 0x270(0x10)
	/*struct FMulticastInlineDelegate*/char OnLevelShown[0x10]; // 0x280(0x10)
	/*struct FMulticastInlineDelegate*/char OnLevelHidden[0x10]; // 0x290(0x10)
	char pad_2A0[0x10]; // 0x2a0(0x10)
	struct FLevelStreamInstanceInfo TargetLevelStreamInfo; // 0x2b0(0x38)
	struct ULevelStreaming* CurrentStreamingLevel; // 0x2e8(0x08)
	struct FLevelStreamInstanceInfo CurrentLevelStreamInfo; // 0x2f0(0x38)
	char pad_328[0x18]; // 0x328(0x18)

	void OnRep_WorldType(); // Function DFMMission.SublevelComponent.OnRep_WorldType // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionBaseSimpleAction
// Size: 0x40 (Inherited: 0x30)
class UMissionBaseSimpleAction : public UObject {
public:

	struct UDFMMissionSimpleAction* Daddy; // 0x30(0x08)
	bool IsDone; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	void InitArgs(struct FSimpleActionArgument& Args, struct FSimpleActionExtArgument& InArg2); // Function DFMMission.MissionBaseSimpleAction.InitArgs // (Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionBaseTrigger
// Size: 0x1a0 (Inherited: 0x30)
class UMissionBaseTrigger : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	struct UObject* Daddy; // 0x38(0x08)
	char pad_40[0x30]; // 0x40(0x30)
	struct UMissionBaseAction* MissionStageSucAction; // 0x70(0x08)
	struct UMissionBaseAction* MissionStageFailedAction; // 0x78(0x08)
	char pad_80[0xb8]; // 0x80(0xb8)
	struct ACHARACTER* TriggerActor; // 0x138(0x08)
	char pad_140[0x60]; // 0x140(0x60)

	void Toggle(bool InArg); // Function DFMMission.MissionBaseTrigger.Toggle // (Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionBaseAction
// Size: 0x50 (Inherited: 0x30)
class UMissionBaseAction : public UObject {
public:

	char pad_30[0x18]; // 0x30(0x18)
	struct UMission* Mission; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionStartQuest
// Size: 0x58 (Inherited: 0x40)
class UMissionStartQuest : public UMissionBaseSimpleAction {
public:

	struct AGPQuest* Quest; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)

	void OnQuestEnd(struct AGPQuest* InQuest); // Function DFMMission.MissionStartQuest.OnQuestEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionGoto
// Size: 0xa0 (Inherited: 0x40)
class UMissionGoto : public UMissionBaseSimpleAction {
public:

	char pad_40[0x60]; // 0x40(0x60)

	void OnGmGoto(); // Function DFMMission.MissionGoto.OnGmGoto // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionLoadSubLevels
// Size: 0xc8 (Inherited: 0x40)
class UMissionLoadSubLevels : public UMissionBaseSimpleAction {
public:

	char pad_40[0x88]; // 0x40(0x88)

	void OnSubLevelLoadServer(struct FString Name); // Function DFMMission.MissionLoadSubLevels.OnSubLevelLoadServer // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionMonsterSpawner
// Size: 0x68 (Inherited: 0x40)
class UMissionMonsterSpawner : public UMissionBaseSimpleAction {
public:

	char pad_40[0x28]; // 0x40(0x28)

	void OnDramaAreaSpawnEnd(); // Function DFMMission.MissionMonsterSpawner.OnDramaAreaSpawnEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionPlaySequence
// Size: 0x50 (Inherited: 0x40)
class UMissionPlaySequence : public UMissionBaseSimpleAction {
public:

	char pad_40[0x10]; // 0x40(0x10)

	void OnEndSequenceInternal(struct AGPSequenceActor* SequencePlayer); // Function DFMMission.MissionPlaySequence.OnEndSequenceInternal // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionAIFightMeTrigger
// Size: 0x1c0 (Inherited: 0x1a0)
class UMissionAIFightMeTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0x20]; // 0x1a0(0x20)

	void OnAIMesgReceive(struct ADFMCharacter* AI, enum class EAIMsgType MsgType); // Function DFMMission.MissionAIFightMeTrigger.OnAIMesgReceive // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionAreaTrigger
// Size: 0x1f0 (Inherited: 0x1a0)
class UMissionAreaTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0x10]; // 0x1a0(0x10)
	struct AActor* Trigger; // 0x1b0(0x08)
	char pad_1B8[0x38]; // 0x1b8(0x38)

	void OnEndOverlap(struct AActor* InTrigger, struct AActor* OtherActor); // Function DFMMission.MissionAreaTrigger.OnEndOverlap // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionCommitItemTrigger
// Size: 0x1d8 (Inherited: 0x1a0)
class UMissionCommitItemTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0x38]; // 0x1a0(0x38)

	void OnSpaceMarkedDirty(); // Function DFMMission.MissionCommitItemTrigger.OnSpaceMarkedDirty // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionDamageTrigger
// Size: 0x1c0 (Inherited: 0x1a0)
class UMissionDamageTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0x20]; // 0x1a0(0x20)

	void OnDamage(int32_t Health); // Function DFMMission.MissionDamageTrigger.OnDamage // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionEnermyDieTrigger
// Size: 0x1c8 (Inherited: 0x1a0)
class UMissionEnermyDieTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0x28]; // 0x1a0(0x28)

	void OnMissionSpawnDelgateProxy(); // Function DFMMission.MissionEnermyDieTrigger.OnMissionSpawnDelgateProxy // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionGameStateTrigger
// Size: 0x1c0 (Inherited: 0x1a0)
class UMissionGameStateTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0x20]; // 0x1a0(0x20)

	void OnGameStateChange(int32_t Key, int32_t Value); // Function DFMMission.MissionGameStateTrigger.OnGameStateChange // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionGetItemTrigger
// Size: 0x220 (Inherited: 0x1a0)
class UMissionGetItemTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0x80]; // 0x1a0(0x80)

	void OnSpaceMarkedDirty(); // Function DFMMission.MissionGetItemTrigger.OnSpaceMarkedDirty // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionGPQuestTrigger
// Size: 0x1a8 (Inherited: 0x1a0)
class UMissionGPQuestTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0x8]; // 0x1a0(0x08)

	void OnQuestEnd(struct AGPQuest* Quest); // Function DFMMission.MissionGPQuestTrigger.OnQuestEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionInteractItemTrigger
// Size: 0x1c8 (Inherited: 0x1a0)
class UMissionInteractItemTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0x28]; // 0x1a0(0x28)

	void OnInteract(uint64_t Uin, struct AActor* Actor, enum class EInteractorType InteractorType, struct FString Params); // Function DFMMission.MissionInteractItemTrigger.OnInteract // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionInteractNPCTrigger
// Size: 0x1c0 (Inherited: 0x1a0)
class UMissionInteractNPCTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0x20]; // 0x1a0(0x20)

	void OnInteractEnd(uint64_t Uin, int64_t GroupID); // Function DFMMission.MissionInteractNPCTrigger.OnInteractEnd // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionKillEnermyTrigger
// Size: 0x1d0 (Inherited: 0x1a0)
class UMissionKillEnermyTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0x30]; // 0x1a0(0x30)

	void OnMissionSpawnDelgateProxy(); // Function DFMMission.MissionKillEnermyTrigger.OnMissionSpawnDelgateProxy // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionTraceItemTrigger
// Size: 0x1e0 (Inherited: 0x1a0)
class UMissionTraceItemTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0x40]; // 0x1a0(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionTrainBreaksTrigger
// Size: 0x1c8 (Inherited: 0x1a0)
class UMissionTrainBreaksTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0x14]; // 0x1a0(0x14)
	int32_t CurrentKillNum; // 0x1b4(0x04)
	struct ADFMTrain* CurrentTrain; // 0x1b8(0x08)
	char pad_1C0[0x8]; // 0x1c0(0x08)

	void FireBreakStatusChange(int32_t nDestruct, int32_t nTotal); // Function DFMMission.MissionTrainBreaksTrigger.FireBreakStatusChange // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionTriggerCheckGetOnOffVehicle
// Size: 0x1e8 (Inherited: 0x1a0)
class UMissionTriggerCheckGetOnOffVehicle : public UMissionBaseTrigger {
public:

	char pad_1A0[0x40]; // 0x1a0(0x40)
	struct ADFMWheeledVehicle* TargetVehicle; // 0x1e0(0x08)

	void OnVehiclePassengerOn(struct AActor* inActor, struct FName SeatName); // Function DFMMission.MissionTriggerCheckGetOnOffVehicle.OnVehiclePassengerOn // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionCombineTrigger
// Size: 0x1d0 (Inherited: 0x1a0)
class UMissionCombineTrigger : public UMissionBaseTrigger {
public:

	struct TArray<struct UMissionBaseTrigger*> Triggers; // 0x1a0(0x10)
	char pad_1B0[0x20]; // 0x1b0(0x20)

	void AddTrigger(struct UMissionBaseTrigger* InArg); // Function DFMMission.MissionCombineTrigger.AddTrigger // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionEventTrigger
// Size: 0x240 (Inherited: 0x1a0)
class UMissionEventTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0xa0]; // 0x1a0(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionAttributeTrigger
// Size: 0x1a8 (Inherited: 0x1a0)
class UMissionAttributeTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0x8]; // 0x1a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionLevelLoadTrigger
// Size: 0x1a8 (Inherited: 0x1a0)
class UMissionLevelLoadTrigger : public UMissionBaseTrigger {
public:

	struct UMissionLoadSubLevels* LoadAction; // 0x1a0(0x08)

	void OnLevelComplete(); // Function DFMMission.MissionLevelLoadTrigger.OnLevelComplete // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionPlayerDie
// Size: 0x1c0 (Inherited: 0x1a0)
class UMissionPlayerDie : public UMissionBaseTrigger {
public:

	char pad_1A0[0x20]; // 0x1a0(0x20)

	void OnSpawnedAIDied(struct AGPCharacterBase* InCharacter, struct AController* Killer, struct UDamageType* DamageType); // Function DFMMission.MissionPlayerDie.OnSpawnedAIDied // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionPlayerReborn
// Size: 0x1c0 (Inherited: 0x1a0)
class UMissionPlayerReborn : public UMissionBaseTrigger {
public:

	char pad_1A0[0x20]; // 0x1a0(0x20)

	void OnCharacterReborn(); // Function DFMMission.MissionPlayerReborn.OnCharacterReborn // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionTriggerLeaveArea
// Size: 0x1e0 (Inherited: 0x1a0)
class UMissionTriggerLeaveArea : public UMissionBaseTrigger {
public:

	char pad_1A0[0x10]; // 0x1a0(0x10)
	struct AActor* Trigger; // 0x1b0(0x08)
	char pad_1B8[0x28]; // 0x1b8(0x28)

	void OnEndOverlap(struct AActor* InTrigger, struct AActor* OtherActor); // Function DFMMission.MissionTriggerLeaveArea.OnEndOverlap // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionTriggerSearchAreaAndGetOnOffVehicle
// Size: 0x1e8 (Inherited: 0x1a0)
class UMissionTriggerSearchAreaAndGetOnOffVehicle : public UMissionBaseTrigger {
public:

	char pad_1A0[0x40]; // 0x1a0(0x40)
	struct ADFMWheeledVehicle* TargetVehicle; // 0x1e0(0x08)

	void OnVehiclePassengerOn(struct AActor* inActor, struct FName SeatName); // Function DFMMission.MissionTriggerSearchAreaAndGetOnOffVehicle.OnVehiclePassengerOn // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionTurnInItemTrigger
// Size: 0x1c8 (Inherited: 0x1a0)
class UMissionTurnInItemTrigger : public UMissionBaseTrigger {
public:

	char pad_1A0[0x28]; // 0x1a0(0x28)

	void OnTurnInItem(struct FMissionTurnInItemInfo& Item); // Function DFMMission.MissionTurnInItemTrigger.OnTurnInItem // (Final|Native|Public|HasOutParms) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionCombineAction
// Size: 0x60 (Inherited: 0x50)
class UMissionCombineAction : public UMissionBaseAction {
public:

	struct TArray<struct UMissionBaseAction*> Actions; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionActionLoadGPQuest
// Size: 0x58 (Inherited: 0x50)
class UMissionActionLoadGPQuest : public UMissionBaseAction {
public:

	char pad_50[0x8]; // 0x50(0x08)

	void OnPreBegin(struct AGPQuest* Quest); // Function DFMMission.MissionActionLoadGPQuest.OnPreBegin // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionConditionAreaTrigger
// Size: 0x200 (Inherited: 0x1f0)
class UMissionConditionAreaTrigger : public UMissionAreaTrigger {
public:

	char pad_1F0[0x10]; // 0x1f0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionInteractNPCExt
// Size: 0x1d0 (Inherited: 0x1c0)
class UMissionInteractNPCExt : public UMissionInteractNPCTrigger {
public:

	char pad_1C0[0x10]; // 0x1c0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionConditionInteractNPCTrigger
// Size: 0x1c8 (Inherited: 0x1c0)
class UMissionConditionInteractNPCTrigger : public UMissionInteractNPCTrigger {
public:

	char pad_1C0[0x8]; // 0x1c0(0x08)

	void OnProcessDialogStart(uint64_t GroupID); // Function DFMMission.MissionConditionInteractNPCTrigger.OnProcessDialogStart // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFMMission.MissionServerAcceptCombineTrigger
// Size: 0x1d0 (Inherited: 0x1d0)
class UMissionServerAcceptCombineTrigger : public UMissionCombineTrigger {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
