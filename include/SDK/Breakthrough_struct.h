
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum Breakthrough.EBattleFieldMarkingItemType
enum class EBattleFieldMarkingItemType : int {
	None = 0,
	QuickChat = 1,
	Marking = 2,
	EBattleFieldMarkingItemType_MAX = 3
};

// Enum Breakthrough.ERankSkillBackgroundUIStyle
enum class ERankSkillBackgroundUIStyle : int {
	E_None = 0,
	E_CanUse = 1,
	E_CantUse = 2,
	E_Selected = 3,
	E_MAX = 4
};

// Enum Breakthrough.EOnePlayerOneSectorTLogDataType
enum class EOnePlayerOneSectorTLogDataType : int {
	None = 0,
	RedeployStayTime = 1,
	SwitchHeroStayTime = 2,
	BackpackStayTime = 3,
	KillNum = 4,
	DeathNum = 5,
	Score = 6,
	SpawnRebornFlag = 7,
	TeammateRebornOnMyRebornFlag = 8,
	HalfJoinGame = 9,
	EnterSectorAnchorNum = 10,
	EnterSectorAnchorTime = 11,
	EnterSectorAnchorFightTime = 12,
	SupportSkillAssist = 13,
	SupportSkillKill = 14,
	SupportSkillNum = 15,
	SwitchBag = 16,
	SwitchArmItem = 17,
	EOnePlayerOneSectorTLogDataType_MAX = 18
};

// Enum Breakthrough.ERoundRedeployTLogDataType
enum class ERoundRedeployTLogDataType : int {
	None = 0,
	EnterFirstDeployViewTime = 1,
	BeginFirstDeployTime = 2,
	FirstOpenDeployViewTime = 3,
	ERoundRedeployTLogDataType_MAX = 4
};

// Enum Breakthrough.ERescueFailureReason
enum class ERescueFailureReason : int {
	ERescue_None = 0,
	ERescue_Abandon_RescuerKilled = 1,
	ERescue_Abandon_RescuerGiveUp = 2,
	ERescue_MAX = 3
};

// Enum Breakthrough.ESectorAnchorState
enum class ESectorAnchorState : int {
	DefendState = 0,
	DefendNeutral = 1,
	OffensiveNeutral = 2,
	OffensiveState = 3,
	ESectorAnchorState_MAX = 4
};

// Enum Breakthrough.ERebornPositionType
enum class ERebornPositionType : int {
	None = 0,
	Base = 1,
	Anchor = 2,
	Teammate = 3,
	Beacon = 4,
	VehicleOnBase = 5,
	VehicleOnTeammate = 6,
	VehicleOnSameCamp = 7,
	ERebornPositionType_MAX = 8
};

// Enum Breakthrough.EDynamicMusicCondition
enum class EDynamicMusicCondition : int {
	EInvalid = 0,
	EAttackerLeftVotes = 1,
	EDefenderLeftVotes = 2,
	ESectorOccupyProgress = 3,
	ELeftTime = 4,
	EOverTimeSectorOnlyOneAnchorOccupyProgress = 5,
	EOverTimeSectorMultiAnchorOccupyProgress = 6,
	EMax = 7,
	EDynamicMusicCondition_MAX = 8
};

// Enum Breakthrough.EBreakthroughTipType
enum class EBreakthroughTipType : int {
	None = 0,
	BreakthroughGameStartOffence = 1,
	BreakthroughGameStartDefence = 2,
	BreakthroughGameOverOffenceVictory = 3,
	BreakthroughGameOverDefenceVictory = 4,
	BreakthroughGameOverOffenceDefeat = 5,
	BreakthroughGameOverDefenceDefeat = 6,
	BreakthroughHalfTimeRemain = 7,
	BreakthroughNoTime = 8,
	LeaveWarZoneTemporarily = 9,
	DieforLeaveWarZone = 10,
	BreakthroughSectorActivedOffence = 11,
	BreakthroughSectorActivedDefence = 12,
	BreakthroughSectorOccupyStatusChangedOffence = 13,
	BreakthroughSectorOccupyStatusChangedDefence = 14,
	BreakthroughSectorClear = 15,
	BreakthroughRetreatQuickly = 16,
	BreakthroughLastSectorActivedOffence = 17,
	BreakthroughLastSectorActivedDefence = 18,
	BreakthroughEnemyEnterOurSectorAnchor = 19,
	BreakthroughOurEnterEnemySectorAnchor = 20,
	BreakthroughEnemyTakeOverOccupyMoreThanHalf = 21,
	BreakthroughTakeOverOccupyMoreThanHalf = 22,
	EnemyTakeOverOccupySuccessfully = 23,
	TakeOverOccupySuccessfully = 24,
	BreakthroughLeftVotesRemaining80PercentOffence = 25,
	BreakthroughLeftVotesRemaining80PercentDefence = 26,
	BreakthroughLeftVotesRemaining50PercentOffence = 27,
	BreakthroughLeftVotesRemaining50PercentDefence = 28,
	BreakthroughLeftVotesRemaining25PercentOffence = 29,
	BreakthroughLeftVotesRemaining25PercentDefence = 30,
	BreakthroughLeftVotesRemaining15PercentOffence = 31,
	BreakthroughLeftVotesRemaining15PercentDefence = 32,
	BreakthroughEnemyLeftLowerThanX = 33,
	BreakthroughIceLandFirstRedeployOffence = 34,
	BreakthroughIceLandFirstRedeployDefence = 35,
	BreakthroughIceLandShipBlownIntoRedeploy = 36,
	BreakthroughIceLandShipNotBlownIntoRedeploy = 37,
	BreakthroughIceLandOffenseBaseStartOffence = 38,
	BreakthroughIceLandOffenseBaseStartDefence = 39,
	BreakthroughDesperateCounterattack = 40,
	BreakthroughOvertimeGameOffence = 41,
	BreakthroughOvertimeGameDefence = 42,
	BreakthroughOvertimeGameDefenderOccupyOneAnchorOffence = 43,
	BreakthroughOvertimeGameDefenderOccupyOneAnchorDefence = 44,
	BreakthroughWarTower3Active = 45,
	BreakthroughGuidedMissile = 46,
	BreakthroughSectorArtilerrate = 47,
	BreakthroughSectorSmoke = 48,
	BreakthroughVehicle = 49,
	BreakthroughRebornBeacons = 50,
	BreakthroughMidwayIntoTheGameOffence = 51,
	BreakthroughMidwayIntoTheGameDefence = 52,
	BreakthroughGuidedMissileReady = 53,
	BreakthroughSectorArtilerrateReady = 54,
	BreakthroughSectorSmokeReady = 55,
	BreakthroughVehicleReady = 56,
	BreakthroughRebornBeaconsReady = 57,
	BreakthroughWarOrderTakeAnchorOrder = 58,
	BreakthroughWarOrderTakeAnchorStrong = 59,
	BreakthroughWarOrderKillTargetOrder = 60,
	BreakthroughWarOrderKillTargetStrong = 61,
	BreakthroughWarOrderBeTarget = 62,
	BreakthroughWarOrderKillTargetFinish = 63,
	BreakthroughWarOrderKillTargetCancel = 64,
	BreakthroughWarOrderTakeAnchorFinish = 65,
	BreakthroughBigEventCrackedWarehouseHappen = 66,
	BreakthroughTheLastSectorAnchorOffence = 67,
	BreakthroughTheLastSectorAnchorDefence = 68,
	BreakthroughEnemyEnterOurFinalSectorAnchor = 69,
	BreakthroughOurEnterEnemyFinalSectorAnchor = 70,
	ConquestMidwayIntoTheGame = 71,
	ConquestFriendlyOccupyOneSectorAddScore = 72,
	ConquestEnemyOccupyOneSectorAddScore = 73,
	ConquestFriendlyOccupyAllSector = 74,
	ConquestEnemyOccupyAllSector = 75,
	ConquestFriendlyOccupyMoreSector = 76,
	ConquestEnemyOccupyMoreSector = 77,
	ConquestFriendlyTicketTakeLead = 78,
	ConquestEnemyTicketTakeLead = 79,
	ConquestSoonLose = 80,
	ConquestSoonWin = 81,
	ConquestSectorOccupyStatusChangedOffence = 82,
	ConquestSectorOccupyStatusChangedDefence = 83,
	ConquestTicketReach25PercentLead = 84,
	ConquestTicketReach25PercentFall = 85,
	ConquestTicketReach50PercentLead = 86,
	ConquestTicketReach50PercentFall = 87,
	ConquestTicketReach75PercentLead = 88,
	ConquestTicketReach75PercentFall = 89,
	ConquestGameStartOffence = 90,
	ConquestGameStartDefence = 91,
	ConquestGameOverOffenceVictory = 92,
	ConquestGameOverDefenceVictory = 93,
	ConquestGameOverOffenceDefeat = 94,
	ConquestGameOverDefenceDefeat = 95,
	ConquestGameOverOffenceDraw = 96,
	ConquestGameOverDefenceDraw = 97,
	GuideMobileBroadcastBreakthroughAttack = 98,
	GuideMobileBroadcastBreakthroughDefend = 99,
	GuideMobileBroadcastConquest = 100,
	GuideMobileAnchorFirstStartCapture = 101,
	ChristmasAmmoBoxInteractionSuccess = 102,
	EBreakthroughTipType_MAX = 103
};

// Enum Breakthrough.ERepositionReason
enum class ERepositionReason : int {
	None = 0,
	Expanding = 1,
	Retracting = 2,
	Insert = 3,
	Delete = 4,
	ERepositionReason_MAX = 5
};

// Enum Breakthrough.EBattleSupportViewState
enum class EBattleSupportViewState : int {
	E_None = 0,
	E_FirstOpen = 1,
	E_Selected = 2,
	E_Cancled = 3,
	E_Closed = 4,
	E_MAX = 5
};

// Enum Breakthrough.ERequestLockTeammateLocationReturnCode
enum class ERequestLockTeammateLocationReturnCode : int {
	Success = 0,
	Error_RebornCharacterIsNull = 1,
	Error_RebornCharacterControllerIsNull = 2,
	Error_RebornCharacterNotSelf = 3,
	Error_HaveBeReborn = 4,
	Error_CharacterIsNull = 5,
	Error_OwnerPlayerStateIsNull = 6,
	Error_OwnerCharacterCampIsInvalid = 7,
	Error_GameStateIsNull = 8,
	Error_CurrentStageIsWaitingForPlayers = 9,
	Error_NotDead = 10,
	Error_CurrentStateIsNotHighView = 11,
	Error_InCD = 12,
	Error_SelectActorIdButNotFindActor = 13,
	Error_SelectEmpty = 14,
	Error_NotTeamPlayer = 15,
	Error_TeamPlayerDie = 16,
	Error_TeamPlayerInBattle = 17,
	Error_TeamPlayerCurrentStateCannotRedeploy = 18,
	Error_TeamPlayerNotInSafeZone = 19,
	Error_TeamPlayerInTransition = 20,
	Error_TeamPlayerInVehicle = 21,
	Error_VehicleFull = 22,
	Error_VehicleNotSelfCamp = 23,
	Error_VehicleNotInSafeZone = 24,
	Error_RebornFlagNotSelfCamp = 25,
	Error_RebornFlagNoAvailableTime = 26,
	Error_EnemySpawnAreaHub = 27,
	Error_SpawnAreaHubIsNotActive = 28,
	Error_SpawnAreaHubDisableFootSoldier = 29,
	Error_AnchorBeOccupy = 30,
	Error_SectorIsNotActive = 31,
	Error_PlayerDeployVehicleCD = 32,
	Error_LockedVehicleSpawnerNotInSpawnAreaHub = 33,
	Error_LockedVehicleSpawnerTypeNotMatch = 34,
	Error_VehicleTypeNotInSpawnAreaHub = 35,
	Error_VehicleSpawnerInCD = 36,
	Error_NoAvailableVehicleSpawner = 37,
	Error_VehicleSpawnerIsAlive = 38,
	Error_TeamMateNoSpace = 39,
	Error_SceneWeaponNotSameTeam = 40,
	Error_SwitchSceneWeaponToPlayerFailed = 41,
	ERequestLockTeammateLocationReturnCode_MAX = 42
};

// Enum Breakthrough.ERequestRedeployReturnCode
enum class ERequestRedeployReturnCode : int {
	Success = 0,
	Error_RebornCharacterIsNull = 1,
	Error_RebornCharacterControllerIsNull = 2,
	Error_RebornCharacterNotSelf = 3,
	Error_HaveBeReborn = 4,
	Error_CharacterIsNull = 5,
	Error_OwnerPlayerStateIsNull = 6,
	Error_OwnerCharacterCampIsInvalid = 7,
	Error_CurrentArmBagHasDisableOrLockedWeaponItem = 8,
	Error_GameStateIsNull = 9,
	Error_CurrentStageIsWaitingForPlayers = 10,
	Error_NotDead = 11,
	Error_CurrentStateIsNotHighView = 12,
	Error_InCD = 13,
	Error_SelectActorIdButNotFindActor = 14,
	Error_SelectEmpty = 15,
	Error_SelectPlayerNotPreLock = 16,
	Error_SelectPlayerIdNotMatchPreLock = 17,
	Error_NotTeamPlayer = 18,
	Error_TeamPlayerDie = 19,
	Error_TeamPlayerInBattle = 20,
	Error_TeamPlayerCurrentStateCannotRedeploy = 21,
	Error_TeamPlayerNotInSafeZone = 22,
	Error_TeamPlayerInTransition = 23,
	Error_TeamPlayerInVehicle = 24,
	Error_VehicleIsDead = 25,
	Error_VehicleFull = 26,
	Error_VehicleNotSelfCamp = 27,
	Error_VehicleNotInSafeZone = 28,
	Error_RebornFlagNotSelfCamp = 29,
	Error_RebornFlagNoAvailableTime = 30,
	Error_NavMeshSystemIsNull = 31,
	Error_NavMeshIsNull = 32,
	Error_RebornFlagNotOnNavMesh = 33,
	Error_EnemySpawnAreaHub = 34,
	Error_SpawnAreaHubIsNotActive = 35,
	Error_SpawnAreaHubDisableFootSoldier = 36,
	Error_AnchorBeOccupy = 37,
	Error_SectorIsNotActive = 38,
	Error_PlayerDeployVehicleCD = 39,
	Error_LockedVehicleSpawnerNotInSpawnAreaHub = 40,
	Error_LockedVehicleSpawnerTypeNotMatch = 41,
	Error_VehicleTypeNotInSpawnAreaHub = 42,
	Error_VehicleSpawnerInCD = 43,
	Error_NoAvailableVehicleSpawner = 44,
	Error_VehicleSpawnerIsAlive = 45,
	Error_TeamMateNoSpace = 46,
	Error_SceneWeaponNotSameTeam = 47,
	Error_SwitchSceneWeaponToPlayerFailed = 48,
	ERequestRedeployReturnCode_MAX = 49
};

// Enum Breakthrough.ERedeployLockVehicleReturnCode
enum class ERedeployLockVehicleReturnCode : int {
	Success = 0,
	Error_PlayerInRedeployCD = 1,
	Error_PlayerControllerIsNull = 2,
	Error_PlayerCharacterIsNull = 3,
	Error_PlayerStateIsNull = 4,
	Error_SpawnAreaHubCampError = 5,
	Error_VehicleTypeNotInSpawnAreaHub = 6,
	Error_VehicleSpawnerInCD = 7,
	Error_NoAvailableVehicleSpawner = 8,
	Error_VehicleSpawnerIsAllDeployed = 9,
	ERedeployLockVehicleReturnCode_MAX = 10
};

// Enum Breakthrough.ERedeployStoreType
enum class ERedeployStoreType : int {
	ERedeployStore_None = 0,
	ERedeployStore_MainWeapon = 1,
	ERedeployStore_SecondaryWeapon = 2,
	ERedeployStore_MeleeWeapon = 3,
	ERedeployStore_ArmItem = 4,
	ERedeployStore_Vehicle = 5,
	ERedeployStore_WeaponPreset = 6,
	ERedeployStore_MAX = 7
};

// Enum Breakthrough.EBreakthroughRedeployButtonState
enum class EBreakthroughRedeployButtonState : int {
	WaitDeploy = 0,
	Deploying = 1,
	Deployed = 2,
	EBreakthroughRedeployButtonState_MAX = 3
};

// Enum Breakthrough.EPlayerGamePlayImageState
enum class EPlayerGamePlayImageState : int {
	None = 0,
	UsingMed = 1,
	Driving = 2,
	ArmForce = 3,
	Dead = 4,
	Disconnect = 5,
	QuitGame = 6,
	EPlayerGamePlayImageState_MAX = 7
};

// Enum Breakthrough.ETeammateStateType
enum class ETeammateStateType : int {
	ETeammateStateType_Normal = 0,
	ETeammateStateType_Dying = 1,
	ETeammateStateType_Dead = 2,
	ETeammateStateType_Disconnect = 3,
	ETeammateStateType_Escaped = 4,
	ETeammateStateType_QuitGame = 5,
	ETeammateStateType_Count = 6,
	ETeammateStateType_MAX = 7
};

// Enum Breakthrough.EFortificationBuildWeapon
enum class EFortificationBuildWeapon : int {
	EFortificationBuildWeapon_None = 0,
	EFortificationBuildWeapon_Hammer = 1,
	EFortificationBuildWeapon_MAX = 2
};

// Enum Breakthrough.EFortificationType
enum class EFortificationType : int {
	EFortificationType_None = 0,
	EFortificationType_AmmoBox = 1,
	EFortificationType_SceneWeapon = 2,
	EFortificationType_BreakableItem = 3,
	EFortificationType_MAX = 4
};

// Enum Breakthrough.EBreakthroughStage
enum class EBreakthroughStage : int {
	None = 0,
	LoadingMap = 1,
	WaitingForPlayers = 2,
	PreMatch = 3,
	EntryCutscene = 4,
	Fighting = 5,
	BattleEnd = 6,
	EBreakthroughStage_MAX = 7
};

// Enum Breakthrough.ESlotCompType
enum class ESlotCompType : int {
	ESlotCompType_None = 0,
	ESlotCompType_Countdown = 1,
	ESlotCompType_Using = 2,
	ESlotCompType_Selected = 3,
	ESlotCompType_SmallLock = 4,
	ESlotCompType_Ban = 5,
	ESlotCompType_CommonPoint = 6,
	ESlotCompType_OnlyDFIcon = 7,
	ESlotCompType_MAX = 8
};

// Enum Breakthrough.ERedeployZOrderInsideRedeployMarker
enum class ERedeployZOrderInsideRedeployMarker : int {
	None = 0,
	SelectQuad = 1,
	VehicleHub = 2,
	Top = 3,
	ERedeployZOrderInsideRedeployMarker_MAX = 4
};

// Enum Breakthrough.ERedeployShowStage
enum class ERedeployShowStage : int {
	Global = 0,
	Zoom = 1,
	ERedeployShowStage_MAX = 2
};

// Enum Breakthrough.ERedeployMarkerType
enum class ERedeployMarkerType : int {
	None = 0,
	SectorText = 1,
	CampPoint = 2,
	CampPointWithVehicle = 3,
	VehicleSelectQuad = 4,
	SameCampRebornFlag = 5,
	EnemyCampRebornFlag = 6,
	TeamDie = 7,
	SameCampDie = 8,
	EnemyCampDie = 9,
	VehiclePoint = 10,
	NeutralVehiclePoint = 11,
	EnemyCampVehiclePoint = 12,
	SameCampVehiclePoint = 13,
	TeamVehiclePoint = 14,
	EnemyCampPoint = 15,
	SameCampPoint = 16,
	TeammatePoint = 17,
	SectorAnchorInBattle = 18,
	SectorAnchorNormal = 19,
	RebornFlag = 20,
	SelectedPoint = 21,
	RandomReborn = 22,
	StaticPoint = 23,
	TeamStaticPoint = 24,
	CampStaticPoint = 25,
	EnemyStaticPoint = 26,
	ERedeployMarkerType_MAX = 27
};

// Enum Breakthrough.ERedeployKeybordMoveDirection
enum class ERedeployKeybordMoveDirection : int {
	None = 0,
	Up = 1,
	Down = 2,
	Left = 3,
	Right = 4,
	ERedeployKeybordMoveDirection_MAX = 5
};

// Enum Breakthrough.EReDeployVehicleItemViewUnDeployReason
enum class EReDeployVehicleItemViewUnDeployReason : int {
	None = 0,
	NoAvailableVehicle = 1,
	VehicleSpawnerCD = 2,
	PlayerDeployVehicleCD = 3,
	EReDeployVehicleItemViewUnDeployReason_MAX = 4
};

// Enum Breakthrough.EFlagAudioType
enum class EFlagAudioType : int {
	E_Flag_Raise = 0,
	E_Flag_Down = 1,
	E_Flag_MoveDownStop = 2,
	E_Flag_MoveTopStop = 3,
	E_Flag_MAX = 4
};

// Enum Breakthrough.EFlagStlyeType
enum class EFlagStlyeType : int {
	E_FlagNeutralType = 0,
	E_FlagDefenseType = 1,
	E_FlagOffenseType = 2,
	E_MAX = 3
};

// Enum Breakthrough.ESectorAnchorFlagState
enum class ESectorAnchorFlagState : int {
	E_FlagDisActive = 0,
	E_FlagOwnedByDefense = 1,
	E_FlagDefenseLeading = 2,
	E_FlagNeutral = 3,
	E_FlagOffenseLeading = 4,
	E_FlagOwnedByOffense = 5,
	E_MAX = 6
};

// ScriptStruct Breakthrough.BreakthroughRedeploySelectPointTweenData
// Size: 0x1c (Inherited: 0x00)
struct FBreakthroughRedeploySelectPointTweenData {
public:

	char pad_0[0x1c]; // 0x00(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.BattleFieldMarkingItemArray
// Size: 0x10 (Inherited: 0x00)
struct FBattleFieldMarkingItemArray {
public:

	struct TArray<struct FBattleFieldMarkingItemData> MarkingItemArray; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.BattleFieldMarkingItemData
// Size: 0x68 (Inherited: 0x00)
struct FBattleFieldMarkingItemData {
public:

	enum class EBattleFieldMarkingItemType ItemType; // 0x00(0x01)
	enum class EQuickChatMarkingItemType QuickChatItemType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText MarkingItemText; // 0x08(0x18)
	struct FText MarkingItemDetailText; // 0x20(0x18)
	struct FSoftObjectPath MarkingItemIcon; // 0x38(0x18)
	struct FString CharacterVOName; // 0x50(0x10)
	float VOPlayIntervals; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.VehicleThreatInfo
// Size: 0x18 (Inherited: 0x00)
struct FVehicleThreatInfo {
public:

	int32_t ThreatValue; // 0x00(0x04)
	int32_t Camp; // 0x04(0x04)
	struct TArray<struct AGPCharacter*> AssistPlayers; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RankSkillBackgroundUIInfo
// Size: 0x28 (Inherited: 0x00)
struct FRankSkillBackgroundUIInfo {
public:

	struct FSoftObjectPath IconPath; // 0x00(0x18)
	struct FLinearColor IconColor; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.ConquestTopBarScoreInfo
// Size: 0x08 (Inherited: 0x00)
struct FConquestTopBarScoreInfo {
public:

	enum class EConquestTopBarScoreType TopBarScoreType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t AddScore; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.PlayerInAnchorTimeInfo
// Size: 0x08 (Inherited: 0x00)
struct FPlayerInAnchorTimeInfo {
public:

	float EnterAnchorStartTime; // 0x00(0x04)
	float InAnchorFightTime; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.BattleSectorExtraRow
// Size: 0x68 (Inherited: 0x10)
struct FBattleSectorExtraRow : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<int32_t, struct FBattleSectorExtraData> BattleSectorExtraDataMap; // 0x18(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.BattleSectorExtraData
// Size: 0x1c (Inherited: 0x00)
struct FBattleSectorExtraData {
public:

	int32_t SerialNumber; // 0x00(0x04)
	int32_t AddVoteNum; // 0x04(0x04)
	int32_t ForbidHalfJoinVoteNum; // 0x08(0x04)
	char EnableHalfJoin; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t ForbidHalfJoinKillNum; // 0x10(0x04)
	float MatchDuration; // 0x14(0x04)
	float SectorTransTime; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.BattleSectorConcentratedFireRow
// Size: 0x38 (Inherited: 0x10)
struct FBattleSectorConcentratedFireRow : public FDescRowBase {
public:

	int32_t SerialNumber; // 0x10(0x04)
	float CheckInterval; // 0x14(0x04)
	float CheckDelay; // 0x18(0x04)
	float DisableCheckProgress; // 0x1c(0x04)
	float BehaviorScoreMultiplier; // 0x20(0x04)
	float UnitTimeScoreMultiplierWhenActivated; // 0x24(0x04)
	int32_t AttackerBalanceScoreForTriggerDetection; // 0x28(0x04)
	int32_t DefenderBalanceScoreForTriggerDetection; // 0x2c(0x04)
	int32_t AttackerBalanceScoreForCompleteCommand; // 0x30(0x04)
	int32_t DefenderBalanceScoreForCompleteCommand; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.BattleFieldHighThreatVehicleRow
// Size: 0xc0 (Inherited: 0x10)
struct FBattleFieldHighThreatVehicleRow : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<int32_t, struct FHighThreatVehicleInfo> AttackerVehicleConfig; // 0x18(0x50)
	struct TMap<int32_t, struct FHighThreatVehicleInfo> DefenderVehicleConfig; // 0x68(0x50)
	float CheckHighThreatInterval; // 0xb8(0x04)
	float CheckCDWhileHighThreatDead; // 0xbc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.HighThreatVehicleInfo
// Size: 0x10 (Inherited: 0x00)
struct FHighThreatVehicleInfo {
public:

	int32_t VehicleId; // 0x00(0x04)
	int32_t ThreatValue; // 0x04(0x04)
	float ScoreToThreatRatio; // 0x08(0x04)
	float BehaviorScoreMultiplier; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.BattleSectorDefines
// Size: 0x58 (Inherited: 0x10)
struct FBattleSectorDefines : public FDescRowBase {
public:

	int32_t SerialNumber; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText SectorName; // 0x18(0x18)
	float MatchDuration; // 0x30(0x04)
	int32_t AddVoteNum; // 0x34(0x04)
	float SectorTransTime; // 0x38(0x04)
	int32_t ForbidHalfJoinVoteNum; // 0x3c(0x04)
	bool EnableHalfJoin; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t ForbidHalfJoinKillNum; // 0x44(0x04)
	float ForbidHalfJoinOccupyProgress; // 0x48(0x04)
	float EnableHalfJoinOccupyProgress; // 0x4c(0x04)
	bool EnablePreloadTerrain; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.ObjectiveSectorInfoForAi
// Size: 0x98 (Inherited: 0x00)
struct FObjectiveSectorInfoForAi {
public:

	enum class ESectorAnchorFlagState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t AttackCampBotNum; // 0x04(0x04)
	struct TArray<struct ADFMCharacter*> AttackCampBots; // 0x08(0x10)
	int32_t AttackFlankBotNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct ADFMCharacter*> AttackFlankBots; // 0x20(0x10)
	int32_t DefendCampBotNum; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct ADFMCharacter*> DefendCampBots; // 0x38(0x10)
	int32_t DefendFlankBotNum; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct ADFMCharacter*> DefendFlankBots; // 0x50(0x10)
	int32_t AttackNumInSector; // 0x60(0x04)
	int32_t AttackBotNumInSector; // 0x64(0x04)
	struct TArray<struct ADFMCharacter*> AttackBotsInSector; // 0x68(0x10)
	int32_t DefendNumInSector; // 0x78(0x04)
	int32_t DefendBotNumInSector; // 0x7c(0x04)
	struct TArray<struct ADFMCharacter*> DefendBotsInSector; // 0x80(0x10)
	int32_t Priority; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.BreakthroughSceneWeaponInfo
// Size: 0x08 (Inherited: 0x00)
struct FBreakthroughSceneWeaponInfo {
public:

	int32_t SceneWeaponUsingNum; // 0x00(0x04)
	float SceneWeaponUsingTime; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.SectorKillInfo
// Size: 0x10 (Inherited: 0x00)
struct FSectorKillInfo {
public:

	int32_t SectorID; // 0x00(0x04)
	int32_t CampId; // 0x04(0x04)
	bool bKillerIsAI; // 0x08(0x01)
	bool bKilledIsAI; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t KillerBodyStatus; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.BreakthroughModeTgLogs
// Size: 0x48 (Inherited: 0x00)
struct FBreakthroughModeTgLogs {
public:

	int32_t SectorID; // 0x00(0x04)
	int32_t CampId; // 0x04(0x04)
	int32_t SectorCostTime; // 0x08(0x04)
	int32_t ScoreMost; // 0x0c(0x04)
	int32_t Scoreleast; // 0x10(0x04)
	int32_t ScoreAverage; // 0x14(0x04)
	int32_t AddLeftVotes; // 0x18(0x04)
	int32_t CurLeftVotes; // 0x1c(0x04)
	int32_t StrikeBackStartTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString SectorActiveTime; // 0x28(0x10)
	struct FString SectorAnchorFirstEntryTime; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.BattleRankSkillInfo
// Size: 0x28 (Inherited: 0x00)
struct FBattleRankSkillInfo {
public:

	int32_t SectorID; // 0x00(0x04)
	int32_t CampId; // 0x04(0x04)
	int32_t SkillId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	uint64_t UseSkillPlayerId; // 0x10(0x08)
	int32_t SkillUsingNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	uint64_t VehicleId; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.PlayerSwitchArmItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FPlayerSwitchArmItemInfo {
public:

	uint64_t ExpertId; // 0x00(0x08)
	uint64_t ArmItemID; // 0x08(0x08)
	int32_t SwitchNum; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RoundRedeployTLogInfo
// Size: 0x30 (Inherited: 0x00)
struct FRoundRedeployTLogInfo {
public:

	struct FString EnterFirstDeployViewTime; // 0x00(0x10)
	struct FString BeginFirstDeployTime; // 0x10(0x10)
	struct FString FirstOpenDeployViewTime; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.OnePlayerOneSectorData
// Size: 0x30 (Inherited: 0x00)
struct FOnePlayerOneSectorData {
public:

	int32_t InIntData; // 0x00(0x04)
	int32_t InIntData1; // 0x04(0x04)
	float InFloatData; // 0x08(0x04)
	float InFloatData1; // 0x0c(0x04)
	uint64_t InUint64Data; // 0x10(0x08)
	uint64_t InUint64Data1; // 0x18(0x08)
	struct FName InNameData; // 0x20(0x08)
	bool InBoolData; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.OnePlayerOneSectorTLogInfo
// Size: 0x308 (Inherited: 0x00)
struct FOnePlayerOneSectorTLogInfo {
public:

	float BackpackStayTime; // 0x00(0x04)
	int32_t Score; // 0x04(0x04)
	int32_t SpawnRebornFlagNum; // 0x08(0x04)
	int32_t TeammateRebornOnMyRebornFlagNum; // 0x0c(0x04)
	bool bHalfJoinGame; // 0x10(0x01)
	bool bTeamIntoGame; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	uint32_t MarkingTotalCount; // 0x14(0x04)
	uint32_t MarkingLocationCount; // 0x18(0x04)
	float RedeployStayTime; // 0x1c(0x04)
	float SwitchHeroStayTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TMap<struct FName, int32_t> EnterSectorNumMap; // 0x28(0x50)
	struct TMap<struct FName, float> EnterSectorTimeMap; // 0x78(0x50)
	struct TMap<struct FName, float> JoinSectorTimeMap; // 0xc8(0x50)
	struct TMap<struct FName, int32_t> KillNumInSectorMap; // 0x118(0x50)
	struct TMap<struct FName, int32_t> DeathNumInSectorMap; // 0x168(0x50)
	struct TMap<int32_t, int32_t> BattleSupportUseNumMap; // 0x1b8(0x50)
	struct TMap<int32_t, int32_t> BattleSupportAssistNumMap; // 0x208(0x50)
	struct TMap<int32_t, int32_t> BattleSupportKillNumMap; // 0x258(0x50)
	struct TMap<int32_t, int32_t> BattleSupportCostScoreMap; // 0x2a8(0x50)
	struct FString ChristmasAmmoInteractorTimes; // 0x2f8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RescueTLogInfo
// Size: 0x28 (Inherited: 0x00)
struct FRescueTLogInfo {
public:

	bool bImpendingDeathInAnchor; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector ImpendingDeathLocation; // 0x04(0x0c)
	bool bRescued; // 0x10(0x01)
	enum class ERescueFailureReason RescueFailureReason; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float RequestRescueDistance; // 0x14(0x04)
	float RequestRescueStartTime; // 0x18(0x04)
	float RequestRescueEndTime; // 0x1c(0x04)
	uint32_t RequestRescueCount; // 0x20(0x04)
	uint32_t ResponseRescueCount; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.MidWithdrawalTLogInfo
// Size: 0x24 (Inherited: 0x00)
struct FMidWithdrawalTLogInfo {
public:

	int32_t SectorID; // 0x00(0x04)
	float JoinGameTime; // 0x04(0x04)
	float MidWithdrawalTime; // 0x08(0x04)
	int32_t AttackerLeftVotes; // 0x0c(0x04)
	float SectorRemainTime; // 0x10(0x04)
	int32_t TotalKillNum; // 0x14(0x04)
	int32_t TotalDeathNum; // 0x18(0x04)
	int32_t TotalRankScore; // 0x1c(0x04)
	int32_t TeammateNum; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RedeployInfo
// Size: 0x40 (Inherited: 0x00)
struct FRedeployInfo {
public:

	int32_t SectorID; // 0x00(0x04)
	int32_t CampId; // 0x04(0x04)
	uint64_t RedeployPlayerID; // 0x08(0x08)
	enum class ERebornPositionType RebornPosition; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t VehicleId; // 0x14(0x04)
	int32_t VehicleCairrierID; // 0x18(0x04)
	int32_t BattleClass; // 0x1c(0x04)
	struct FString SpawnAreaName; // 0x20(0x10)
	struct FString SpawnTeammatePointName; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.SectorAnchorBattleInfo
// Size: 0x48 (Inherited: 0x00)
struct FSectorAnchorBattleInfo {
public:

	int32_t SectorID; // 0x00(0x04)
	int32_t CampId; // 0x04(0x04)
	struct FString AnchorID; // 0x08(0x10)
	enum class ESectorAnchorState SectorAnchorState; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t StateChangeTime; // 0x1c(0x04)
	int32_t SectorAnchorBattleTime; // 0x20(0x04)
	float OccupiedPercent; // 0x24(0x04)
	int32_t Camp0InAnchor; // 0x28(0x04)
	int32_t Camp1InAnchor; // 0x2c(0x04)
	int32_t AttackerLeftVotes; // 0x30(0x04)
	float BalanceValue; // 0x34(0x04)
	bool IsConcentratedFireSectorAnchor; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t OwnerCamp; // 0x3c(0x04)
	int32_t OwnerForceType; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.KillFeedbackEvent
// Size: 0x60 (Inherited: 0x00)
struct FKillFeedbackEvent {
public:

	enum class EScoreName ScoreName; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Score; // 0x04(0x04)
	struct FSoftObjectPath Sprite; // 0x08(0x18)
	struct FLinearColor SpriteColor; // 0x20(0x10)
	struct FText Desc; // 0x30(0x18)
	struct FString Audio; // 0x48(0x10)
	int32_t Distance; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.TipsInterruptInfo
// Size: 0x18 (Inherited: 0x00)
struct FTipsInterruptInfo {
public:

	enum class EBreakthroughTipType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FTimerHandle TipsTimerHandle_PC; // 0x08(0x08)
	float TipHaveShowTime; // 0x10(0x04)
	float TipMustShowTime; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.BreakthroughTipInfo
// Size: 0x48 (Inherited: 0x00)
struct FBreakthroughTipInfo {
public:

	enum class EBreakthroughTipType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TriggerTime; // 0x04(0x04)
	uint64_t PlayerUin; // 0x08(0x08)
	int32_t PlayerCamp; // 0x10(0x04)
	int32_t CurDominantCamp; // 0x14(0x04)
	struct FName CapturePointName; // 0x18(0x08)
	int32_t PlayerTeam; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString CustomParameters; // 0x28(0x10)
	struct TArray<struct AActor*> CustomActors; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.BreakthroughTipsDataRow
// Size: 0x118 (Inherited: 0x08)
struct FBreakthroughTipsDataRow : public FTableRowBase {
public:

	enum class EBreakthroughTipType Type; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Order; // 0x0c(0x04)
	float Intervals; // 0x10(0x04)
	float VOPlayIntervals; // 0x14(0x04)
	int32_t ValidDuration; // 0x18(0x04)
	int32_t ValidShowDuration; // 0x1c(0x04)
	float ShowDuration; // 0x20(0x04)
	enum class ENotifyListener Listener; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct TArray<struct FText> Texts; // 0x28(0x10)
	enum class EContentType ContentType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FText> SubTexts; // 0x40(0x10)
	enum class EContentType SubContentType; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString AudioStateGroup; // 0x58(0x10)
	struct TArray<struct FName> MapType; // 0x68(0x10)
	struct TArray<enum class EDFMGamePlayMode> GamePlayMode; // 0x78(0x10)
	enum class ETipColorType ColorType; // 0x88(0x01)
	enum class ETipLevelType StrongLevelType; // 0x89(0x01)
	enum class EStrongTipsViewType StrongTipsViewType; // 0x8a(0x01)
	enum class EWeakTipsViewType WeakTipsViewType; // 0x8b(0x01)
	int32_t RandomPlayCount; // 0x8c(0x04)
	/*struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>>*/char OffenceAudioEvents[0x10]; // 0x90(0x10)
	/*struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>>*/char DefenceAudioEvents[0x10]; // 0xa0(0x10)
	/*struct TSoftObjectPtr<UObject>*/char IconAsset[0x28]; // 0xb0(0x28)
	struct TArray<struct FText> SpeakerNameTexts; // 0xd8(0x10)
	float XForCompare; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char ImmediateAudioEvent[0x28]; // 0xf0(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.BattleSupportTipsInfo
// Size: 0x38 (Inherited: 0x00)
struct FBattleSupportTipsInfo {
public:

	bool bShowTips; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText ShowTipsText; // 0x08(0x18)
	struct FText StateTipsText; // 0x20(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RedeployOnFirePlayerInfo
// Size: 0x1c (Inherited: 0x0c)
struct FRedeployOnFirePlayerInfo : public FRedeployNormalPlayerInfo {
public:

	float FireBeginTime; // 0x0c(0x04)
	struct FVector_NetQuantize Location; // 0x10(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.AttachPositionToWeaponTypes
// Size: 0x18 (Inherited: 0x00)
struct FAttachPositionToWeaponTypes {
public:

	enum class EAttachPosition AttachPosition; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<enum class EWeaponItemType> WeaponItemTypes; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RedeployPointHubItemColorConfig
// Size: 0x70 (Inherited: 0x00)
struct FRedeployPointHubItemColorConfig {
public:

	struct FLinearColor BGImageColor; // 0x00(0x10)
	struct FLinearColor IconImageColor; // 0x10(0x10)
	struct FLinearColor SecondIconImageColor; // 0x20(0x10)
	struct FLinearColor NameTextColor; // 0x30(0x10)
	struct FLinearColor AvailableNumTextColor; // 0x40(0x10)
	struct FLinearColor VerticalLineImageColor; // 0x50(0x10)
	struct FLinearColor HorizontalLineImageColor; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RedeployVehicleVolatileInfo
// Size: 0x14 (Inherited: 0x00)
struct FRedeployVehicleVolatileInfo {
public:

	uint32_t VehicleNetGUID; // 0x00(0x04)
	struct FVector_NetQuantize Location; // 0x04(0x0c)
	uint16_t Rotation; // 0x10(0x02)
	bool IsBattle; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RedeployPlayerVolatileInfo
// Size: 0x14 (Inherited: 0x00)
struct FRedeployPlayerVolatileInfo {
public:

	uint32_t PlayerNetGUID; // 0x00(0x04)
	struct FVector_NetQuantize Location; // 0x04(0x0c)
	uint16_t Rotation; // 0x10(0x02)
	char pad_12[0x2]; // 0x12(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.TipsBroadCastData
// Size: 0x38 (Inherited: 0x00)
struct FTipsBroadCastData {
public:

	/*struct TSoftObjectPtr<UObject>*/char IconAsset[0x28]; // 0x00(0x28)
	struct TArray<struct FText> SpeakerNameTexts; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.BroadcastUIItemInfo
// Size: 0x10 (Inherited: 0x00)
struct FBroadcastUIItemInfo {
public:

	int32_t ShowTipsIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UBreakthroughTipsWeakBroadcastView* UIItem; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RankSkillData
// Size: 0x118 (Inherited: 0x00)
struct FRankSkillData {
public:

	int32_t SkillId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FRankSkillCampData> RankSkillCampDataArr; // 0x08(0x10)
	char pad_18[0x100]; // 0x18(0x100)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RankSkillCampData
// Size: 0x18 (Inherited: 0x00)
struct FRankSkillCampData {
public:

	int32_t CampId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FRankSkillTeamData> RankSkillTeamDataArr; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RankSkillTeamData
// Size: 0x18 (Inherited: 0x00)
struct FRankSkillTeamData {
public:

	int32_t TeamId; // 0x00(0x04)
	int32_t TeamUseNum; // 0x04(0x04)
	struct TArray<struct FRankSkillPlayerData> RankSkillPlayerDataArr; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RankSkillPlayerData
// Size: 0x08 (Inherited: 0x00)
struct FRankSkillPlayerData {
public:

	int32_t PlayerUin; // 0x00(0x04)
	int32_t UseNum; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.VehicleNumInfo
// Size: 0x08 (Inherited: 0x00)
struct FVehicleNumInfo {
public:

	int32_t VehicleId; // 0x00(0x04)
	int32_t VehicleNum; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RedeployQuadListInfo
// Size: 0x80 (Inherited: 0x00)
struct FRedeployQuadListInfo {
public:

	struct UWidget* ReDeployPointPanel; // 0x00(0x08)
	struct UWidget* MarkerWidget; // 0x08(0x08)
	int8_t IconType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FSoftObjectPath IconPath; // 0x18(0x18)
	struct FVector2D IconSize; // 0x30(0x08)
	struct FSoftObjectPath SecondIconPath; // 0x38(0x18)
	struct FVector2D SecondIconSize; // 0x50(0x08)
	struct FString TextOverIcon; // 0x58(0x10)
	struct FString Name; // 0x68(0x10)
	bool Selected; // 0x78(0x01)
	int8_t ColorType; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RedeployMarkerInfoRow
// Size: 0x28 (Inherited: 0x10)
struct FRedeployMarkerInfoRow : public FDescRowBase {
public:

	enum class ERedeployMarkerType RedeployMarkerType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t ZOrder; // 0x14(0x04)
	int32_t AutoSelectPriority; // 0x18(0x04)
	int32_t FirstDeployAttackerAutoSelectPriority; // 0x1c(0x04)
	int32_t FirstDeployDefenderAutoSelectPriority; // 0x20(0x04)
	int32_t SelectQuadSizeType; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RedeployMarkerPool
// Size: 0x10 (Inherited: 0x00)
struct FRedeployMarkerPool {
public:

	struct TArray<struct URedeployMarkerBaseWidget*> Widgets; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.FrameTask
// Size: 0x10 (Inherited: 0x00)
struct FFrameTask {
public:

	uint64_t ItemID; // 0x00(0x08)
	struct URedeployChooseItemGroupView* ParentWidget; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.RedeployStoreTypeToWeaponTypes
// Size: 0x18 (Inherited: 0x00)
struct FRedeployStoreTypeToWeaponTypes {
public:

	enum class ERedeployStoreType RedeployStoreType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EWeaponItemType> WeaponItemTypes; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.FadingDirectionConfigRow
// Size: 0x18 (Inherited: 0x08)
struct FFadingDirectionConfigRow : public FTableRowBase {
public:

	struct FName BreakthroughMapName; // 0x08(0x08)
	bool bIsVertical; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct Breakthrough.VehicleSpawnerState
// Size: 0x18 (Inherited: 0x00)
struct FVehicleSpawnerState {
public:

	struct ABreakthroughVehicleSpawner* VehicleSpawner; // 0x00(0x08)
	int32_t VehicleId; // 0x08(0x04)
	float CDProgress; // 0x0c(0x04)
	bool IsSpawnedAlive; // 0x10(0x01)
	bool IsLocked; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
