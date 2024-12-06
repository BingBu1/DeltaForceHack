
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPQuest.ETraceActorAttributeType
enum class ETraceActorAttributeType : int {
	None = 0,
	HEALTH = 1,
	ETraceActorAttributeType_MAX = 2
};

// Enum GPQuest.EGPQuestObjectiveHUDType
enum class EGPQuestObjectiveHUDType : int {
	None = 0,
	Normal = 1,
	TimeLimit = 2,
	ProtectTarget = 3,
	ProtectVehicle = 4,
	Kill = 5,
	Complete = 6,
	Type_MAX = 7,
	EGPQuestObjectiveHUDType_MAX = 8
};

// Enum GPQuest.EGPQuestStageState
enum class EGPQuestStageState : int {
	Begin = 0,
	Update = 1,
	Complete = 2,
	Failed = 3,
	AllDieFailed = 4,
	TimeOutFailed = 5,
	EGPQuestStageState_MAX = 6
};

// Enum GPQuest.ELootingStatus
enum class ELootingStatus : int {
	None = 0,
	ShowButton = 1,
	LootingBegin = 2,
	LootingEnd = 3,
	ELootingStatus_MAX = 4
};

// Enum GPQuest.ESubtitleType
enum class ESubtitleType : int {
	EST_Sequence = 0,
	EST_CutScene = 1,
	EST_NPCDialogue = 2,
	EST_Wireless = 3,
	EST_SoldierDialog = 4,
	EST_Max = 5
};

// Enum GPQuest.EGPQuestObjectiveState
enum class EGPQuestObjectiveState : int {
	None = 0,
	Begin = 1,
	Complete = 2,
	Failed = 3,
	EGPQuestObjectiveState_MAX = 4
};

// Enum GPQuest.ESOLActionType
enum class ESOLActionType : int {
	ENone = 0,
	ESpawnAI = 1,
	EInteract = 2,
	EPlay2DAudio = 3,
	EPlay3DAudio = 4,
	ESOLActionType_MAX = 5
};

// Enum GPQuest.EGPQuestObjectiveAsyncReturnBranch
enum class EGPQuestObjectiveAsyncReturnBranch : int {
	Failed = 0,
	Complete = 1,
	EGPQuestObjectiveAsyncReturnBranch_MAX = 2
};

// Enum GPQuest.ESOLTargetType
enum class ESOLTargetType : int {
	None = 0,
	ReachArea = 1,
	Interact = 2,
	KillAI = 3,
	KillBoss = 4,
	Timer = 5,
	PlacingC4 = 6,
	SpawnAI = 7,
	LootingSafeBox = 8,
	ESOLTargetType_MAX = 9
};

// Enum GPQuest.VisibleGameHUDStateOperators
enum class VisibleGameHUDStateOperators : int {
	None = 0,
	Remove_InvisibleGameHudState = 1,
	Add_InvisibleGameHudState = 2,
	Remove_VisibleGameHudState = 3,
	Add_VisibleGameHudState = 4,
	VisibleGameHUDStateOperators_MAX = 5
};

// Enum GPQuest.EQA_CountdownType
enum class EQA_CountdownType : int {
	ENone = 0,
	EAirDrop = 1,
	EAirSupport = 2,
	ERaid_NeedWaitCountDown = 3,
	ERaid_NoNeedWaitCountDown = 4,
	EQA_MAX = 5
};

// Enum GPQuest.ECountDownHUDClassType
enum class ECountDownHUDClassType : int {
	ENone = 0,
	ERaidCountDownHUDClassType = 1,
	ECountDownHUDClassType_MAX = 2
};

// Enum GPQuest.EGPQuestOptionalObjectiveOperationType
enum class EGPQuestOptionalObjectiveOperationType : int {
	Show = 0,
	Hide = 1,
	Complete = 2,
	Failed = 3,
	EGPQuestOptionalObjectiveOperationType_MAX = 4
};

// Enum GPQuest.EGPQuestObjectiveType
enum class EGPQuestObjectiveType : int {
	Unkown = 0,
	Kill = 1,
	Arrive = 2,
	Interact = 3,
	Protect = 4,
	Follow = 5,
	Destory = 6,
	TotalCount = 7,
	EGPQuestObjectiveType_MAX = 8
};

// Enum GPQuest.EGPQuestActionMarkerType
enum class EGPQuestActionMarkerType : int {
	Arrive = 0,
	Destroy = 1,
	Protect = 2,
	ProtectWithHP = 3,
	Arrive_Optional = 4,
	Destroy_Optional = 5,
	Protect_Optional = 6,
	ProtectWithHP_Optional = 7,
	NPCTalk = 8,
	TargetTrack = 9,
	NPCTrigger = 10,
	RPGTrack = 11,
	Vehicle = 12,
	Hostage = 13,
	MarkerNarrow = 14,
	AmmoBox = 15,
	EliteAI = 16,
	InteractiveReading = 17,
	InteractGame = 18,
	Raid_ValkyrieVehicle = 19,
	NPCTeamMate = 20,
	SOLContractKill = 21,
	SOLContractArrive = 22,
	SOLContractInteract = 23,
	SOLContractManning = 24,
	SOLMissionKill = 25,
	SOLMissionArrive = 26,
	SOLMissionInteract = 27,
	EGPQuestActionMarkerType_MAX = 28
};

// Enum GPQuest.EGPQuestActionTeamId
enum class EGPQuestActionTeamId : int {
	TeamAll = 0,
	Team1 = 1,
	Team2 = 2,
	Team3 = 3,
	Team4 = 4,
	Team5 = 5,
	Team6 = 6,
	Team7 = 7,
	Team8 = 8,
	Team9 = 9,
	Team10 = 10,
	TeamCount = 11,
	EGPQuestActionTeamId_MAX = 12
};

// Enum GPQuest.EGPQuestActionTriggerType
enum class EGPQuestActionTriggerType : int {
	BeginOverlap = 0,
	EndOverlap = 1,
	Hit = 2,
	EGPQuestActionTriggerType_MAX = 3
};

// Enum GPQuest.EGPQuestActionCompareOperator
enum class EGPQuestActionCompareOperator : int {
	Equal = 0,
	NotEqual = 1,
	Greater = 2,
	GreaterEqual = 3,
	Less = 4,
	LessEqual = 5,
	EGPQuestActionCompareOperator_MAX = 6
};

// Enum GPQuest.EGPQuestPlayReason
enum class EGPQuestPlayReason : int {
	DefaultPlay = 0,
	DebugJump = 1,
	FailReplay = 2,
	EGPQuestPlayReason_MAX = 3
};

// Enum GPQuest.EGPQuestEndReason
enum class EGPQuestEndReason : int {
	Complete = 0,
	Fail = 1,
	Cancel = 2,
	Break = 3,
	AllDied = 4,
	TimeOut = 5,
	EGPQuestEndReason_MAX = 6
};

// Enum GPQuest.EGPQuestActionScope
enum class EGPQuestActionScope : int {
	Stage = 0,
	World = 1,
	Volume = 2,
	EGPQuestActionScope_MAX = 3
};

// Enum GPQuest.EGPQuestInteractorStatus
enum class EGPQuestInteractorStatus : int {
	Unkown = 0,
	Activated = 1,
	Deactivated = 2,
	Succeed = 3,
	Failed = 4,
	EGPQuestInteractorStatus_MAX = 5
};

// Enum GPQuest.EGPQuestStageAsyncReturnBranch
enum class EGPQuestStageAsyncReturnBranch : int {
	Failed = 0,
	Complete = 1,
	Branch2 = 2,
	Branch3 = 3,
	Branch4 = 4,
	Branch5 = 5,
	AllDieFailed = 6,
	EGPQuestStageAsyncReturnBranch_MAX = 7
};

// ScriptStruct GPQuest.GPQuestObjectiveHUDInfo
// Size: 0x50 (Inherited: 0x00)
struct FGPQuestObjectiveHUDInfo {
public:

	struct FText PrimaryTitle; // 0x00(0x18)
	struct FText ObjectiveTitle; // 0x18(0x18)
	enum class EGPQuestObjectiveHUDType HUDType; // 0x30(0x01)
	enum class ETraceActorAttributeType TraceType; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct AActor* TargetActor; // 0x38(0x08)
	struct FTimerHandle TimeOutHandler; // 0x40(0x08)
	bool bShowObjectiveUpdateHint; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.QAMakerMapIconInfo
// Size: 0x40 (Inherited: 0x00)
struct FQAMakerMapIconInfo {
public:

	struct FName IconName; // 0x00(0x08)
	bool bAdd; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector ClientActorLocation; // 0x0c(0x0c)
	struct FSoftObjectPath IconPath; // 0x18(0x18)
	struct FLinearColor IconColor; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.SOLQAObjectiveData
// Size: 0x40 (Inherited: 0x00)
struct FSOLQAObjectiveData {
public:

	struct FText BriefObjectionDesc; // 0x00(0x18)
	int32_t MaxStepCount; // 0x18(0x04)
	enum class ESOLTargetType SOLTargetType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float TimerValue; // 0x20(0x04)
	struct FName ProtecedVIPTag; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FSOLQA_ActionTypeData> SOLQA_ActionTypeDataArray; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.SOLQA_ActionTypeData
// Size: 0x10 (Inherited: 0x00)
struct FSOLQA_ActionTypeData {
public:

	int32_t TargetNum; // 0x00(0x04)
	enum class ESOLActionType ActionType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName ActionParamTag; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.GPQuestPlayingAudioInfo
// Size: 0x18 (Inherited: 0x00)
struct FGPQuestPlayingAudioInfo {
public:

	struct FName DataTableKey; // 0x00(0x08)
	bool bIs3DAudio; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector Audio3DLocation; // 0x0c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.GPQuestObjectiveInfo
// Size: 0x08 (Inherited: 0x00)
struct FGPQuestObjectiveInfo {
public:

	int32_t ID; // 0x00(0x04)
	enum class EGPQuestObjectiveState ObjectiveState; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.GPQuestStageData
// Size: 0x60 (Inherited: 0x00)
struct FGPQuestStageData {
public:

	struct TMap<int32_t, struct FGPQuestObjectiveData> Objectives; // 0x00(0x50)
	struct TArray<struct FGPQuestRewardData> rewards; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.GPQuestRewardData
// Size: 0x08 (Inherited: 0x00)
struct FGPQuestRewardData {
public:

	int32_t ItemID; // 0x00(0x04)
	int32_t ItemNum; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.GPQuestTargetData
// Size: 0x20 (Inherited: 0x00)
struct FGPQuestTargetData {
public:

	bool bStatic; // 0x00(0x01)
	bool bNameIsVildcard; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString Name; // 0x08(0x10)
	struct UClass* Type; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.GPQuestReleventStageInfo
// Size: 0x08 (Inherited: 0x00)
struct FGPQuestReleventStageInfo {
public:

	int32_t QuestID; // 0x00(0x04)
	int32_t StageId; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.GPQuestText
// Size: 0x28 (Inherited: 0x00)
struct FGPQuestText {
public:

	struct FText Text; // 0x00(0x18)
	struct TArray<struct FString> FormatArgs; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.GPQuestAudioTableRow
// Size: 0x48 (Inherited: 0x10)
struct FGPQuestAudioTableRow : public FDescRowBase {
public:

	struct FName Key; // 0x10(0x08)
	bool bIsLoopAudio; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AudioEvent[0x28]; // 0x20(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.GPQuestValueRange
// Size: 0x08 (Inherited: 0x00)
struct FGPQuestValueRange {
public:

	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.GPQuestObjectiveNoticeInfo
// Size: 0x80 (Inherited: 0x00)
struct FGPQuestObjectiveNoticeInfo {
public:

	struct FGPQuestText NoticeName; // 0x00(0x28)
	struct FGPQuestText NoticeText; // 0x28(0x28)
	struct FString Args; // 0x50(0x10)
	bool bNoticeAudio; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float Duration; // 0x64(0x04)
	int32_t Priority; // 0x68(0x04)
	enum class ESubtitleType SubtitleType; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct TArray<struct FGPQuestObjectiveNoticeNextBrunchInfo> NextBrunchs; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.GPQuestObjectiveNoticeNextBrunchInfo
// Size: 0x48 (Inherited: 0x00)
struct FGPQuestObjectiveNoticeNextBrunchInfo {
public:

	struct FGPQuestText NextText; // 0x00(0x28)
	int64_t NextBrunchParam; // 0x28(0x08)
	char JumpParam; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString JumpArgs; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.GPQuestAudioCommonTableRow
// Size: 0x50 (Inherited: 0x48)
struct FGPQuestAudioCommonTableRow : public FGPQuestAudioTableRow {
public:

	bool Is3DAudio; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.GPQuestObjectiveParams
// Size: 0x28 (Inherited: 0x00)
struct FGPQuestObjectiveParams {
public:

	struct TArray<struct FGPQuestTargetData> Targets; // 0x00(0x10)
	bool bSneak; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FGPQuestValueRange TimeRange; // 0x14(0x08)
	struct FGPQuestValueRange DistanceRange; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPQuest.GPQuestObjectiveData
// Size: 0x30 (Inherited: 0x00)
struct FGPQuestObjectiveData {
public:

	enum class EGPQuestObjectiveType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FGPQuestObjectiveParams Params; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
