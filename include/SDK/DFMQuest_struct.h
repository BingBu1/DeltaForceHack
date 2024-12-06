
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMQuest.EQAKillAIType
enum class EQAKillAIType : int {
	KillWithTag = 0,
	KillWithoutTag = 1,
	KillAll = 2,
	EQAKillAIType_MAX = 3
};

// Enum DFMQuest.EPlayerPosition
enum class EPlayerPosition : int {
	None = 0,
	InTargetZone = 1,
	InSafeZone = 2,
	InWarningZone = 3,
	InFailZone = 4,
	EPlayerPosition_MAX = 5
};

// Enum DFMQuest.EPlayersChaseTargetMode
enum class EPlayersChaseTargetMode : int {
	None = 0,
	ClosestPlayer = 1,
	FarthestPlayer = 2,
	EPlayersChaseTargetMode_MAX = 3
};

// Enum DFMQuest.ERVLeaveBehaviour
enum class ERVLeaveBehaviour : int {
	KeepRestriction = 0,
	Revert = 1,
	NewRestriction = 2,
	ERVLeaveBehaviour_MAX = 3
};

// Enum DFMQuest.EQA_AITeamSizeListenerOption
enum class EQA_AITeamSizeListenerOption : int {
	CompareSize = 0,
	SizeChanged = 1,
	EQA_MAX = 2
};

// Enum DFMQuest.EQA_CountdownAsyncReturnBranch
enum class EQA_CountdownAsyncReturnBranch : int {
	Finished = 0,
	Stoped = 1,
	EQA_MAX = 2
};

// Enum DFMQuest.EQA_GPSequenceOption
enum class EQA_GPSequenceOption : int {
	Play = 0,
	Listen = 1,
	EQA_MAX = 2
};

// Enum DFMQuest.EQA_InteractorControllerOption
enum class EQA_InteractorControllerOption : int {
	Listen = 0,
	Activate = 1,
	Deactivate = 2,
	MakeSuccessful = 3,
	MakeFail = 4,
	EQA_MAX = 5
};

// Enum DFMQuest.EQA_PlayerSafePathListenerOption
enum class EQA_PlayerSafePathListenerOption : int {
	Play = 0,
	Stop = 1,
	Pause = 2,
	Resume = 3,
	Listen = 4,
	EQA_MAX = 5
};

// Enum DFMQuest.EQA_SimplePathFollowerOption
enum class EQA_SimplePathFollowerOption : int {
	Play = 0,
	Stop = 1,
	Pause = 2,
	Resume = 3,
	Listen = 4,
	EQA_MAX = 5
};

// Enum DFMQuest.EGPSimpleActionInnerType
enum class EGPSimpleActionInnerType : int {
	None = 0,
	SetTargets = 1,
	SetTargetState = 2,
	SetFails = 3,
	SetFailState = 4,
	SetLevelPos = 5,
	SetLevelTime = 6,
	CreateTaskGroup = 7,
	SetTargetTask = 8,
	SetTaskState = 9,
	CreateABTeam = 10,
	GetMissionPlayer = 11,
	GetMissionPlayers = 12,
	PlayMultiCastNetworkdedMontage = 13,
	GetMainTrigger = 14,
	EnableEffect = 15,
	DisableEffect = 16,
	LoadPersistLevel = 17,
	UnLoadPersistLevel = 18,
	LoadBindPersistLevel = 19,
	UnLoadBindPersistLevel = 20,
	ShowTeamScore = 21,
	AddBigWordMapMarker = 22,
	RemoveBigWordMapMarker = 23,
	CarraySomeBody = 24,
	SomeOneCarrySomeBody = 25,
	IsSomeOneCarrySomeBody = 26,
	GetMissionListeners = 27,
	GetMissionSideListeners = 28,
	GetMissionTeamListeners = 29,
	GetMissionListener = 30,
	EndAllListener = 31,
	GetMissionTeamCharacters = 32,
	SetCarryBodyTag = 33,
	AddGameStateAction = 34,
	SetGameStateAction = 35,
	GetGameStateAction = 36,
	RemoveItem = 37,
	SetMissionTotalTime = 38,
	PlayerPlayDialog = 39,
	PlayAbility = 40,
	EGPSimpleActionInnerType_MAX = 41
};

// Enum DFMQuest.EGPSimpleActionType
enum class EGPSimpleActionType : int {
	None = 0,
	Drama = 1,
	StartQuest = 2,
	PlayDialog = 3,
	NpcTalk = 4,
	PlaySequence = 5,
	EnableInteract = 6,
	DisableInteract = 7,
	SendSelfToPos = 8,
	SendTeamToPos = 9,
	EnterWorld = 10,
	RAID_SendSelfToPos = 11,
	RAID_SendTeamToPos = 12,
	EndRaid = 13,
	ShowRaidEnd = 14,
	WorldCruise = 15,
	EnableEffect = 16,
	EnableHitEffect = 17,
	EGPSimpleActionType_MAX = 18
};

// Enum DFMQuest.ETriggerTitleFlag
enum class ETriggerTitleFlag : int {
	Normal = 0,
	NormalMarkerTarget = 1,
	OnlyTitle = 2,
	OnlyProgress = 3,
	OnlyTarget = 4,
	OnlyMarkerTarget = 5,
	ETriggerTitleFlag_MAX = 6
};

// Enum DFMQuest.EGPSimpleObjectiveType
enum class EGPSimpleObjectiveType : int {
	Main = 0,
	HidenMain = 1,
	Side = 2,
	AutoSide = 3,
	HidenSide = 4,
	EGPSimpleObjectiveType_MAX = 5
};

// Enum DFMQuest.EGPSimpleQuestTypeEx
enum class EGPSimpleQuestTypeEx : int {
	None = 0,
	Quest = 1,
	InteractNPCEx = 2,
	Combine = 3,
	Event = 4,
	ServerCombine = 5,
	LoadLevel = 6,
	ConditionSearchArea = 7,
	EGPSimpleQuestTypeEx_MAX = 8
};

// Enum DFMQuest.EGPSimpleQuestType
enum class EGPSimpleQuestType : int {
	None = 0,
	KillEnermy = 1,
	ObtainItem = 2,
	SearchArea = 3,
	InteractItem = 4,
	InteractNPC = 5,
	SelfPlayerDie = 6,
	SelfPlayerReborn = 7,
	LeaveArea = 8,
	GameState = 9,
	AvoidAIFightMe = 10,
	AvoidAIFightUs = 11,
	ConditionInteractNPC = 12,
	LoseItem = 13,
	EnermyDie = 14,
	TurnInItem = 15,
	TraceItem = 16,
	Damage = 17,
	SearchAreaAndGetOnVehicle = 18,
	SearchAreaAndGetOffVehicle = 19,
	CheckGetOnVehicle = 20,
	CheckGetOffVehicle = 21,
	Raid_ReachArea_ALL = 22,
	Raid_ReachArea_Leader = 23,
	Raid_ReachArea_num = 24,
	Raid_TrainBreaks = 25,
	Max = 26
};

// Enum DFMQuest.EQADamageType
enum class EQADamageType : int {
	None = 0,
	All_Types = 1,
	Bullets = 2,
	RPG = 3,
	EQADamageType_MAX = 4
};

// Enum DFMQuest.EQA_TimerMode
enum class EQA_TimerMode : int {
	Timer = 0,
	Countdown = 1,
	EQA_MAX = 2
};

// Enum DFMQuest.EQA_TriggerListenerOption
enum class EQA_TriggerListenerOption : int {
	All = 0,
	PlayerOnly = 1,
	NotPlayer = 2,
	ExceptAICharacter = 3,
	PlayerVehicle = 4,
	AIVehicle = 5,
	EQA_MAX = 6
};

// Enum DFMQuest.EQA_VehiclePathFollowerOption
enum class EQA_VehiclePathFollowerOption : int {
	Play = 0,
	Stop = 1,
	Pause = 2,
	Resume = 3,
	Listen = 4,
	EQA_MAX = 5
};

// ScriptStruct DFMQuest.GamingAreaPlayerInfo
// Size: 0x10 (Inherited: 0x00)
struct FGamingAreaPlayerInfo {
public:

	struct AGPPlayerController* PlayerCtrl; // 0x00(0x08)
	bool bIsOutsideGamingArea; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMQuest.GamingAreaQuestSetting
// Size: 0x18 (Inherited: 0x00)
struct FGamingAreaQuestSetting {
public:

	int32_t QuestID; // 0x00(0x04)
	bool bValidDuringWholeQuest; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FGamingAreaStageSetting> StageSettings; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMQuest.GamingAreaStageSetting
// Size: 0x18 (Inherited: 0x00)
struct FGamingAreaStageSetting {
public:

	int32_t StageId; // 0x00(0x04)
	bool bValidDuringWholeStage; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<char> ValidObjectiveIndexes; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMQuest.NoticeInfos
// Size: 0x10 (Inherited: 0x00)
struct FNoticeInfos {
public:

	struct TArray<struct FSubtitleObjectiveNoticeInfo> Notices; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMQuest.SubtitleObjectiveNoticeInfo
// Size: 0x98 (Inherited: 0x00)
struct FSubtitleObjectiveNoticeInfo {
public:

	struct FGPQuestObjectiveNoticeInfo Notice; // 0x00(0x80)
	float EndTimeStamp; // 0x80(0x04)
	struct FGPAudioFuturePlayingID AudioId; // 0x84(0x08)
	char pad_8C[0x4]; // 0x8c(0x04)
	int64_t NoticeHandle; // 0x90(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMQuest.DFMQuestAudioTableItem
// Size: 0x28 (Inherited: 0x08)
struct FDFMQuestAudioTableItem : public FTableRowBase {
public:

	struct FName Key; // 0x08(0x08)
	struct UGPAudioEventAsset* AudioEvent; // 0x10(0x08)
	struct FString Comment; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMQuest.QMarkerSpawnParams
// Size: 0x28 (Inherited: 0x00)
struct FQMarkerSpawnParams {
public:

	struct UClass* QMarkerClass; // 0x00(0x08)
	struct UClass* TargetClass; // 0x08(0x08)
	struct FVector OffsetLocation; // 0x10(0x0c)
	float DistanceThreshold; // 0x1c(0x04)
	enum class EGPQuestActionMarkerType markerType; // 0x20(0x01)
	enum class EGPQuestActionScope Scope; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMQuest.SimpleActionArguments
// Size: 0x20 (Inherited: 0x00)
struct FSimpleActionArguments {
public:

	struct AGPQuest* Quest; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMQuest.SimpleActionExtArgument
// Size: 0x90 (Inherited: 0x00)
struct FSimpleActionExtArgument {
public:

	struct TArray<struct FString> ExtParams; // 0x00(0x10)
	struct TArray<int32_t> ExtIntParams; // 0x10(0x10)
	struct TArray<float> ExtFloatParams; // 0x20(0x10)
	struct FString ExtString; // 0x30(0x10)
	bool ExtBool; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FVector ExtVector; // 0x44(0x0c)
	float ExtFloat; // 0x50(0x04)
	int32_t ExtInt; // 0x54(0x04)
	int64_t ExtInt64; // 0x58(0x08)
	struct UAnimSequenceBase* montageToPlayTPP; // 0x60(0x08)
	struct UAnimSequenceBase* montageToPlayFPP; // 0x68(0x08)
	char pad_70[0x10]; // 0x70(0x10)
	struct AGPQuest* Quest; // 0x80(0x08)
	char pad_88[0x8]; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMQuest.SimpleActionArgument
// Size: 0x14 (Inherited: 0x00)
struct FSimpleActionArgument {
public:

	enum class EGPSimpleActionType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ActionTag; // 0x04(0x08)
	int32_t Num; // 0x0c(0x04)
	bool BindQuest; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMQuest.SimpleQuestArgument
// Size: 0x40 (Inherited: 0x00)
struct FSimpleQuestArgument {
public:

	struct AGPQuest* Quest; // 0x00(0x08)
	char pad_8[0x38]; // 0x08(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMQuest.MissionStateAction
// Size: 0x18 (Inherited: 0x10)
struct FMissionStateAction : public FDescRowBase {
public:

	int32_t ActionId; // 0x10(0x04)
	bool IsServer; // 0x14(0x01)
	bool SecretLoot; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMQuest.ObjectiveHintInfo
// Size: 0x20 (Inherited: 0x00)
struct FObjectiveHintInfo {
public:

	enum class EGPQuestObjectiveHUDType ObjectiveHUDType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText ObjectiveHintText; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMQuest.MapQuestRangeData
// Size: 0x18 (Inherited: 0x00)
struct FMapQuestRangeData {
public:

	int32_t IsContract; // 0x00(0x04)
	int32_t objectiveId; // 0x04(0x04)
	float ObjectiveRange; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AActor* TargetActor; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMQuest.SimpleTriggerItemInfo
// Size: 0x38 (Inherited: 0x00)
struct FSimpleTriggerItemInfo {
public:

	enum class EGPSimpleQuestType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Tag; // 0x08(0x10)
	struct FString Tag1; // 0x18(0x10)
	int32_t Num; // 0x28(0x04)
	int32_t ConfigId; // 0x2c(0x04)
	bool OnceTrigger; // 0x30(0x01)
	bool OnceUnTrigger; // 0x31(0x01)
	bool UISceneTraceTarget; // 0x32(0x01)
	enum class EGPSimpleObjectiveType ObjectiveType; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMQuest.SimpleObjectiveItemInfo
// Size: 0x50 (Inherited: 0x38)
struct FSimpleObjectiveItemInfo : public FSimpleTriggerItemInfo {
public:

	struct FString Title; // 0x38(0x10)
	enum class EGPQuestObjectiveHUDType HUDMissionType; // 0x48(0x01)
	bool ShowSingleText; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
