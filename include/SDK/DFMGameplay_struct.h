
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMGameplay.ECharacterPartHealthState
enum class ECharacterPartHealthState : UINT8 {
	Fine = 0,
	Hurt = 1,
	Broken = 2,
	ECharacterPartHealthState_MAX = 3
};

// Enum DFMGameplay.EPawnState
enum class EPawnState : UINT8 {
	ENormal = 0,
	EDamaged = 1,
	EDead = 2,
	EPawnState_MAX = 3
};

// Enum DFMGameplay.EBreakableTriggerMode
enum class EBreakableTriggerMode : UINT8 {
	NoTrigger = 0,
	Default = 1,
	CollisionOverlap = 2,
	CollisionHit = 3,
	CollisionHitAndDamage = 4,
	CustomDamage = 5,
	CustomCollision = 6,
	CustomCollisionDamage = 7,
	EBreakableTriggerMode_MAX = 8
};

// Enum DFMGameplay.EBreakableDebrisLoadMode
enum class EBreakableDebrisLoadMode : UINT8 {
	AsyncLoadWhenTrigger = 0,
	AsyncLoadWhenBeginPlay = 1,
	SyncLoad = 2,
	EBreakableDebrisLoadMode_MAX = 3
};

// Enum DFMGameplay.EBreakableMeshDisappearMode
enum class EBreakableMeshDisappearMode : UINT8 {
	DoNotThing = 0,
	DisappearAll = 1,
	DisappearSome = 2,
	DebrisLeft = 3,
	EBreakableMeshDisappearMode_MAX = 4
};

// Enum DFMGameplay.EInteractorType
enum class EInteractorType : UINT8 {
	InteractorType_Unknow = 0,
	InteractorType_Default = 1,
	InteractorType_BoxOrBag = 2,
	InteractorType_DeadBody = 3,
	InteractorType_SingleItem = 4,
	InteractorType_Vehicle = 5,
	InteractorType_Rescue = 6,
	InteractorType_Carrybody = 7,
	InteractorType_ShopStation = 8,
	InteractorType_Door = 9,
	InteractorType_SingleItemContainer = 10,
	InteractorType_Max = 11
};

// Enum DFMGameplay.EInteractorBlockCheckType
enum class EInteractorBlockCheckType : UINT8 {
	InteractorBlockCheck_ForwardAndCheckBlock = 0,
	InteractorBlockCheck_BackwardAndCheckBlock = 1,
	InteractorBlockCheck_MAX = 2
};

// Enum DFMGameplay.EInteractorPriority
enum class EInteractorPriority : UINT8 {
	InteractorPriority_Zipline = 0,
	InteractorPriority_PickupOwnBySelf = 1,
	InteractorPriority_Delay = 2,
	InteractorPriority_Common = 3,
	InteractorPriority_PickupOwnByTeammate = 4,
	InteractorPriority_MAX = 5
};

// Enum DFMGameplay.EInteractorHUDType
enum class EInteractorHUDType : UINT8 {
	HUDType_None = 0,
	HUDType_Common = 1,
	HUDType_ContractNPC = 2,
	HUDType_MAX = 3
};

// Enum DFMGameplay.EPickupSourceType
enum class EPickupSourceType : UINT8 {
	EPickupSourceType_Default = 0,
	EPickupSourceType_BodyBox = 1,
	EPickupSourceType_Discard = 2,
	EPickupSourceType_NormalBox = 3,
	EPickupSourceType_MAX = 4
};

// Enum DFMGameplay.EItemInfoUpdatedReason
enum class EItemInfoUpdatedReason : UINT8 {
	None = 0,
	ItemState = 1,
	ItemCount = 2,
	Location = 3,
	Durability = 4,
	DurabilityLimit = 5,
	ArmorHealth = 6,
	ArmorHealthMax = 7,
	WeaponDesc = 8,
	SearchState = 9,
	UsingOwner = 10,
	EItemInfoUpdatedReason_MAX = 11
};

// Enum DFMGameplay.EMatchOverReason
enum class EMatchOverReason : UINT8 {
	Escaped = 0,
	Dead = 1,
	TimeOver = 2,
	Quit = 3,
	GiveUp = 4,
	Complete = 5,
	Fail = 6,
	MatchEnd = 7,
	EMatchOverReason_MAX = 8
};

// Enum DFMGameplay.EPickupBoxType
enum class EPickupBoxType : UINT8 {
	EPickupBoxType_Default = 0,
	EPickupBoxType_WeaponBox = 1,
	EPickupBoxType_ArmorBox = 2,
	EPickupBoxType_SundriesBox = 3,
	EPickupBoxType_Stronghold = 4,
	EPickupBoxType_MAX = 5
};

// Enum DFMGameplay.EDeadBodySkeletalMeshType
enum class EDeadBodySkeletalMeshType : UINT8 {
	None = 0,
	Player = 1,
	DarkTide_Normal = 2,
	Hudson_Normal = 3,
	DarkTide_Elite = 4,
	Hudson_Elite = 5,
	DarkTide_Boss = 6,
	Hudson_Boss = 7,
	EDeadBodySkeletalMeshType_MAX = 8
};

// Enum DFMGameplay.EAIMsgType
enum class EAIMsgType : UINT8 {
	None = 0,
	Alert = 1,
	Fight = 2,
	Vision = 3,
	CancelVision = 4,
	FightCancelVision = 5,
	EAIMsgType_MAX = 6
};

// Enum DFMGameplay.EDialogType
enum class EDialogType : UINT8 {
	EDT_None = 0,
	EDT_Wireless = 1,
	EDT_MAX = 2
};

// Enum DFMGameplay.EAIDirection
enum class EAIDirection : UINT8 {
	Forwards = 0,
	Sideways = 1,
	EAIDirection_MAX = 2
};

// Enum DFMGameplay.EAISpeed
enum class EAISpeed : UINT8 {
	Idle = 0,
	Walk = 1,
	Run = 2,
	Sprint = 3,
	EAISpeed_MAX = 4
};

// Enum DFMGameplay.EScoreName
enum class EScoreName : UINT8 {
	ENone = 0,
	ENormalKill = 1,
	ENormalAssist = 2,
	EHeadKill = 3,
	EFarGunKill = 4,
	EFarHeadKill = 5,
	EContinueKill = 6,
	EBreakEnemyContinueKill = 7,
	EKillEnemyPilot = 8,
	EReboot = 9,
	EDefendCapPointKill = 10,
	ECapturing = 11,
	ECaptured = 12,
	ECapturedByCamp = 13,
	ECaptured2Neutral = 14,
	ECaptureProgress = 15,
	ECapturedSector = 16,
	EStickToTheGoal = 17,
	ERetreat = 18,
	ERescue = 19,
	ERescueTeam = 20,
	EAid = 21,
	ERevenge = 22,
	ESquadRevenge = 23,
	EAbility_RebotRescue = 24,
	EVehicle_DriverAssist = 25,
	EVehicle_PassengerAssist = 26,
	EVehicle_Redeploy = 27,
	EVehicle_KillCharacter = 28,
	EVehicle_AttackVehicle = 29,
	EVehicle_DestroyVehicle = 30,
	ESceneWeapon_KillCharacter = 31,
	EHitPlayerCharacter = 32,
	EPositionSupportSkillHit = 33,
	EPositionSupportSkillKill = 34,
	ERedeployOnPlayer = 35,
	EReDeployOnLastMan = 36,
	SupportGunCureTeammate = 37,
	SupportGunHead = 38,
	SupportSmokeCreate = 39,
	SupportSelfCure = 40,
	SupportSmokeCureTeammate = 41,
	SupportEffectApply = 42,
	KillSupportEffectEnermy = 43,
	HelpKillSupportEffectEnermy = 44,
	ProxSensorMark = 45,
	RebornFlag = 46,
	MarkAssist = 47,
	BreakProxSensor = 48,
	BreakRebornFlag = 49,
	BreakAmmoBox = 50,
	PenetratingSniperKill = 51,
	PenetratingSniperShot = 52,
	WeaponKillCharacter = 53,
	WeaponDestroyVehicle = 54,
	WeaponHitVehicle = 55,
	EngineerSonicTrapTrigger = 56,
	EAssistKill = 57,
	ENormalKnockDown = 58,
	EHeadKnockDown = 59,
	EAssistKnockDown = 60,
	EVehicle_HeavyDamage = 61,
	EVehicle_PartCannoDamage = 62,
	EVehicle_PartTrackDamage = 63,
	EVehicle_PartEngineDamage = 64,
	EGunner_Attack = 65,
	EGunner_Defend = 66,
	EGunner_Resonate = 67,
	EGunner_ResonateMine = 68,
	ERepairCamp = 69,
	ERepairTeam = 70,
	ERepairVehicleAssist = 71,
	ERepairSceneWeaponAssist = 72,
	EFireSuppressionAssistCamp = 73,
	EFireSuppressionAssistTeam = 74,
	ERequestCompleted = 75,
	EMarkEnemy = 76,
	ESmokeAssist = 77,
	ECampMarkAssist = 78,
	EAddAmmo = 79,
	ElectricArrowHit = 80,
	ElectricArrowKill = 81,
	ElectricArrowDestroyVehicle = 82,
	ProxSensorArrowMark = 83,
	ProxSensorArrowAssist = 84,
	ArrowHit = 85,
	ArrowKill = 86,
	GrenadeAssist = 87,
	GrenadeDestroyVehicle = 88,
	CatTracingEnemy = 89,
	CatTracingEnemyAssist = 90,
	CatTracingEnemyKill = 91,
	FlashDroneHitEnemy = 92,
	FlashDroneAssist = 93,
	DataKnifeKill = 94,
	DataKnifeMarkKill = 95,
	DataKnifeAssist = 96,
	C301LauncherKill = 97,
	C301LauncherDestroyVehicle = 98,
	C301SuperSprintKill = 99,
	C301SuperSprintAssist = 100,
	C301SmokeAssist = 101,
	C301SmokeRescue = 102,
	C201SupportWeaponHit = 103,
	C201ColorSmokeBuff = 104,
	C201HealthEffect = 105,
	C401MineKill = 106,
	C401MineActivated = 107,
	C302KnockBack = 108,
	C302KnockBackBeKill = 109,
	C302C4Assist = 110,
	EMPHitEnemy = 111,
	EMPHitVehicle = 112,
	ThrowBlockingRadialDamage = 113,
	IncendiaryKill = 114,
	IncendiaryAssist = 115,
	EKillHighThreatTarget = 116,
	EKillHighThreatTargetAssist = 117,
	EHighThreatTargetClear = 118,
	EBattleFieldOrdersConcentratedFireCompleted = 119,
	DataKnifeEMP = 120,
	EKillVehicleAssist = 121,
	EKillDrone = 122,
	C102BlindingSmokeScore = 123,
	C102BlindingSmokeKill = 124,
	C102BlindingSmokeAssist = 125,
	C102AdrenalineKill = 126,
	C102AdrenalineAssist = 127,
	LaserPointerLocked = 128,
	LaserPointerAssist = 129,
	BreakAbilityLevelActor = 130,
	UseRebornFlag = 131,
	UseVehicleRebornFlag = 132,
	UseRankSkillRebornFlag = 133,
	ADSBlock = 134,
	SupportPack = 135,
	ZoyaSwarmsHit = 136,
	ZoyaSwarmsAssist = 137,
	ZoyaSwarmsKill = 138,
	EAttackerHoldingTheLine = 139,
	EDefenderHoldingTheLine = 140,
	EPlayerCaptureProgressInYourSmoke = 141,
	EAttackerInFightBack = 142,
	EDefenderInFightBack = 143,
	ERealDistanceFarGunKill = 144,
	ERealDistanceFarHeadKill = 145,
	ClayforeKill = 146,
	AntiTankKill = 147,
	ChristmasAmmoBoxInteraction = 148,
	ERebornFlagEarn = 149,
	ERescueEarn = 150,
	EDriveVehicleEarn = 151,
	ETeamLastOneRedeployEarn = 152,
	EVehicle_AttackVehicleExtra = 153,
	ECaptureToDial = 154,
	EMPHitBattleFieldItemProp = 155,
	EScoreName_MAX = 156
};

// Enum DFMGameplay.EKeyActionLogic
enum class EKeyActionLogic : UINT8 {
	None = 0,
	Switch = 1,
	Hold = 2,
	EKeyActionLogic_MAX = 3
};

// Enum DFMGameplay.EExitStageType
enum class EExitStageType : UINT8 {
	NotActive = 0,
	WaitingAwake = 1,
	Awake = 2,
	ResetCoolDown = 3,
	Close = 4,
	EExitStageType_MAX = 5
};

// Enum DFMGameplay.EAchievementType
enum class EAchievementType : UINT8 {
	AchievementType_TotalKill = 0,
	AchievementType_KillBoss = 1,
	AchievementType_GainPropertyValue = 2,
	AchievementType_MAX = 3
};

// Enum DFMGameplay.ESOLIntroEventState
enum class ESOLIntroEventState : UINT8 {
	None = 0,
	IntroEventOccur = 1,
	IntroEventNotOccur = 2,
	ESOLIntroEventState_MAX = 3
};

// Enum DFMGameplay.ESOLEventState
enum class ESOLEventState : UINT8 {
	None = 0,
	IntroEventOccur = 1,
	IntroEventNotOccur = 2,
	MandelBrickOccur = 3,
	MandelBrickNotOccur = 4,
	BenchmarkActionOccur = 5,
	BenchmarkActionNotOccur = 6,
	OtherDynamicLevel = 7,
	ESOLEventState_MAX = 8
};

// Enum DFMGameplay.ESOLEventType
enum class ESOLEventType : UINT8 {
	None = 0,
	Intro_DroneCrash = 1,
	Intro_KuroshioConvoy = 2,
	Intro_RocketRecycle = 3,
	Exit_Rocket = 4,
	Exit_Sluice = 5,
	Exit_Train = 6,
	Major_Paratrooper = 7,
	Major_WeaponPlunder = 8,
	ESOLEventType_MAX = 9
};

// Enum DFMGameplay.EBlueprintPlunderUIState
enum class EBlueprintPlunderUIState : UINT8 {
	None = 0,
	BeAppeared = 1,
	BeingWanted_Self = 2,
	BeingWanted_Teammate = 3,
	BeingWanted_Enemy = 4,
	Deciphering_Self = 5,
	Deciphering_Teammate = 6,
	Deciphering_Enemy = 7,
	Deciphering_EnemyCapture = 8,
	WaitingRecycle_Self = 9,
	WaitingRecycle_Teammate = 10,
	WaitingRecycle_TeammateCopied = 11,
	WaitingRecycle_Enemy = 12,
	BeTakenOut_Self = 13,
	BeTakenOut_Teammate = 14,
	BeTakenOut_Enemy = 15,
	IrregularExit = 16,
	EBlueprintPlunderUIState_MAX = 17
};

// Enum DFMGameplay.EDangerLevelType
enum class EDangerLevelType : UINT8 {
	None = 0,
	DangerLevel0 = 1,
	DangerLevel1 = 2,
	DangerLevel2 = 3,
	DangerLevel3 = 4,
	EDangerLevelType_MAX = 5
};

// Enum DFMGameplay.EBlueprintPlunderState
enum class EBlueprintPlunderState : UINT8 {
	None = 0,
	BeAppeared = 1,
	BeingWanted = 2,
	Deciphering = 3,
	WaitingRecycle = 4,
	BeTakenOut = 5,
	IrregularExit = 6,
	EBlueprintPlunderState_MAX = 7
};

// Enum DFMGameplay.ESOLEventBannerType
enum class ESOLEventBannerType : UINT8 {
	Normal = 0,
	HighValue = 1,
	Exit = 2,
	Gray = 3,
	ESOLEventBannerType_MAX = 4
};

// Enum DFMGameplay.ESOLEventProgressType
enum class ESOLEventProgressType : UINT8 {
	Normal = 0,
	ESOLEventProgressType_MAX = 1
};

// Enum DFMGameplay.ESOLCommonCountdownType
enum class ESOLCommonCountdownType : UINT8 {
	None = 0,
	Gray = 1,
	Red = 2,
	Green = 3,
	ESOLCommonCountdownType_MAX = 4
};

// Enum DFMGameplay.EDialogJumpType
enum class EDialogJumpType : UINT8 {
	EDHT_Dialog = 0,
	EDHT_Group = 1,
	EDHT_OpenUI = 2,
	EDHT_Quit = 3,
	EDHT_CallLuaFunction = 4,
	EDHT_MAX = 5
};

// Enum DFMGameplay.EItemMoveExtraInfo
enum class EItemMoveExtraInfo : UINT8 {
	None = 0,
	TriggerContainerReplaceFailBackup = 1,
	EItemMoveExtraInfo_MAX = 2
};

// Enum DFMGameplay.EItemMoveResult
enum class EItemMoveResult : UINT8 {
	EItemMoveResult_None = 0,
	EItemMoveResult_Success = 1,
	EItemMoveResult_PerkEquipSuccess = 2,
	EItemMoveResult_SourceItemNotFound = 3,
	EItemMoveResult_SpaceNotFound = 4,
	EItemMoveResult_UnknownError = 5,
	EItemMoveResult_EquipConflict = 6,
	EItemMoveResult_OutOfLootDistance = 7,
	EItemMoveResult_NoEnoughSpace = 8,
	EItemMoveResult_RefContainerItemsNoEnoughSpace = 9,
	EItemMoveResult_MergeBindItemWithUnbindItem = 10,
	EItemMoveResult_SourceObjNotLootable = 11,
	EItemMoveResult_TargetObjNotLootable = 12,
	EItemMoveResult_SourceObjNotInteractingWithPlayer = 13,
	EItemMoveResult_TargetObjNotInteractingWithPlayer = 14,
	EItemMoveResult_ArchiveObjNotAllowLoot = 15,
	EItemMoveResult_SpaceNotValidForVehicle = 16,
	EItemMoveResult_ItemIsUsing = 17,
	EItemMoveResult_ItemBelongsToOtherPlayer = 18,
	EItemMoveResult_SelfContainerNotAllow = 19,
	EItemMoveResult_MoveKeyChainNotAllow = 20,
	EItemMoveResult_WeaponAndAmmoNotMatch = 21,
	EItemMoveResult_SameLocationMove = 22,
	EItemMoveResult_MoveBagNoEnoughSpace = 23,
	EITemMoveResult_ItemNotInOriginSpace = 24,
	EITemMoveResult_GuideItemInvalidMove = 25,
	EItemMoveResult_SlotNotMovableInGame = 26,
	EItemMoveResult_OperateWeaponNotAllow = 27,
	EItemMoveResult_ItemNotSearched = 28,
	EItemMoveResult_CharacterExitStateInvalid = 29,
	EItemMoveResult_InteractCheckFail = 30,
	EItemMoveResult_SourceLootObjNotExist = 31,
	EItemMoveResult_MAX = 32
};

// Enum DFMGameplay.ERepUseItemState
enum class ERepUseItemState : UINT8 {
	None = 0,
	PreUse = 1,
	Holding = 2,
	Using = 3,
	AfterUse = 4,
	Finish = 5,
	ERepUseItemState_MAX = 6
};

// Enum DFMGameplay.ERebornActorType
enum class ERebornActorType : UINT8 {
	Character = 0,
	Vehicle = 1,
	RedeployPoint = 2,
	CapturePoint = 3,
	RebornFlag = 4,
	RebornArea = 5,
	RebornTower3 = 6,
	ERebornActorType_MAX = 7
};

// Enum DFMGameplay.ERebornType
enum class ERebornType : UINT8 {
	RebornToActor = 0,
	RebornToActorId = 1,
	RebornToTransForm = 2,
	RebornToPlayerStart = 3,
	ERebornType_MAX = 4
};

// Enum DFMGameplay.EBreakthroughBroadcastMarkerType
enum class EBreakthroughBroadcastMarkerType : UINT8 {
	ENone = 0,
	ESector = 1,
	EVehicle = 2,
	EBreakthroughBroadcastMarkerType_MAX = 3
};

// Enum DFMGameplay.EConquestTopBarScoreType
enum class EConquestTopBarScoreType : UINT8 {
	None = 0,
	OccupiedScore = 1,
	KillScore = 2,
	EConquestTopBarScoreType_MAX = 3
};

// Enum DFMGameplay.ESbItemOperType
enum class ESbItemOperType : UINT8 {
	None = 0,
	Reporting = 1,
	Reported = 2,
	Friending = 3,
	Friended = 4,
	ThumbUping = 5,
	ThumbUped = 6,
	ThumbUpedEachOther = 7,
	ESbItemOperType_MAX = 8
};

// Enum DFMGameplay.EInteractorIronGauzeState
enum class EInteractorIronGauzeState : UINT8 {
	IronGauze_Normal = 0,
	IronGauze_Cutting = 1,
	IronGauze_Cutted = 2,
	IronGauze_Kicked = 3,
	IronGauze_MAX = 4
};

// Enum DFMGameplay.EAnimSwitcher_State
enum class EAnimSwitcher_State : UINT8 {
	Closed = 0,
	Opened = 1,
	Closing = 2,
	Opening = 3,
	Max = 4
};

// Enum DFMGameplay.EEndInteractionType
enum class EEndInteractionType : UINT8 {
	EIT_Default = 0,
	EIT_Interrupt = 1,
	EIT_Reentry = 2,
	EIT_Destruct = 3,
	EIT_MAX = 4
};

// Enum DFMGameplay.ERaidSettlementType
enum class ERaidSettlementType : UINT8 {
	RaidSettlementSuccess = 0,
	RaidSettlementFail = 1,
	ERaidSettlementType_MAX = 2
};

// Enum DFMGameplay.EActionState
enum class EActionState : UINT8 {
	Idle = 0,
	Succeeded = 1,
	Failed = 2,
	Aborted = 3,
	InProgress = 4,
	EActionState_MAX = 5
};

// Enum DFMGameplay.ECharRotationSmoothMethod
enum class ECharRotationSmoothMethod : UINT8 {
	E_NONE = 0,
	E_AVG = 1,
	E_EXP = 2,
	E_MAX = 3
};

// Enum DFMGameplay.EAnimDirection
enum class EAnimDirection : UINT8 {
	EDir_N180 = 0,
	EDir_N135 = 1,
	EDir_N90 = 2,
	EDir_N45 = 3,
	EDir_1 = 4,
	EDir_46 = 5,
	EDir_91 = 6,
	EDir_136 = 7,
	EDir_MAX = 8
};

// Enum DFMGameplay.ESkillType
enum class ESkillType : UINT8 {
	Crocodile_DeathRoll = 0,
	Crocodile_MAX = 1
};

// Enum DFMGameplay.EAIGroupDramaVoiceRole
enum class EAIGroupDramaVoiceRole : UINT8 {
	NONE = 0,
	ROLE_MASTER = 1,
	ROLE_3 = 2,
	ROLE_4 = 3,
	ROLE_5 = 4,
	ROLE_6 = 5,
	EAIGroupDramaVoiceRole_MAX = 6
};

// Enum DFMGameplay.EPathFollowState
enum class EPathFollowState : UINT8 {
	Idle = 0,
	Finished = 1,
	Failed = 2,
	Aborted = 3,
	InProgress = 4,
	EPathFollowState_MAX = 5
};

// Enum DFMGameplay.EAILabJobType
enum class EAILabJobType : UINT8 {
	Init = 0,
	MoveToPOI = 1,
	Loot = 2,
	Exit = 3,
	MAX = 4
};

// Enum DFMGameplay.EAILabTransCommand
enum class EAILabTransCommand : UINT8 {
	ETransMove = 0,
	ETransRight = 1,
	ETransTurn = 2,
	ETransLookUp = 3,
	ETransFire = 4,
	ETransReload = 5,
	ETransAim = 6,
	ETransJump = 7,
	ETransProne = 8,
	ETransCrouch = 9,
	ETransCarryBody = 10,
	ETransInter = 11,
	ETransSlide = 12,
	ETransSkill = 13,
	EMapMark = 14,
	ETransLeftLean = 15,
	ETransRightLean = 16,
	ETransUseItem = 17,
	ETransSwitchWeapon = 18,
	ETransOperateBox = 19,
	ETransRescue = 20,
	EAILabTransCommand_MAX = 21
};

// Enum DFMGameplay.EAIQuestCommand
enum class EAIQuestCommand : UINT8 {
	EAIQuestCommand_None = 0,
	EAIQuestCommand_MoveToLocation = 1,
	EAIQuestCommand_MAX = 2
};

// Enum DFMGameplay.EAirDropResult
enum class EAirDropResult : UINT8 {
	ENone = 0,
	ESuccess = 1,
	ENotEnoughScore = 2,
	ECountDown = 3,
	ENotEnoughVehicleCount = 4,
	EOverSectorVehicleCountLimit = 5,
	EAirDropResult_MAX = 6
};

// Enum DFMGameplay.EAISpawnCheckRule
enum class EAISpawnCheckRule : UINT8 {
	PLAYERAREA = 0,
	PLAYERSIGHT = 1,
	ALL = 2,
	EAISpawnCheckRule_MAX = 3
};

// Enum DFMGameplay.EAISpawnRule
enum class EAISpawnRule : UINT8 {
	EImmediate = 0,
	ETime = 1,
	EAISpawnRule_MAX = 2
};

// Enum DFMGameplay.ESpawnState
enum class ESpawnState : UINT8 {
	Wait = 0,
	Active = 1,
	Finish = 2,
	ESpawnState_MAX = 3
};

// Enum DFMGameplay.EAISpeakContextType
enum class EAISpeakContextType : UINT8 {
	GO_SEARCH = 0,
	FOUND_ENEMY = 1,
	UNSET = 2,
	EAISpeakContextType_MAX = 3
};

// Enum DFMGameplay.EAIStyleType
enum class EAIStyleType : UINT8 {
	None = 0,
	TotalJob_TKV_Assult = 1,
	TotalJob_TKV_Prudent = 2,
	TotalJob_TKV_Normal = 3,
	TotalJob_MGS = 4,
	LocalJob_Start = 5,
	LocalJob_MGS_Alert_Search = 6,
	LocalJob_MGS_Alert_Stay = 7,
	LocalJob_MGS_Fight_Close = 8,
	LocalJob_MGS_FIght_Far = 9,
	Max = 10
};

// Enum DFMGameplay.EAIUnitTestPlayerState
enum class EAIUnitTestPlayerState : UINT8 {
	SLIENTWALK = 0,
	RUN = 1,
	SPRINT = 2,
	CROUCH = 3,
	PRONE = 4,
	SHOOT = 5,
	MAX = 6
};

// Enum DFMGameplay.EPrefectureReplenishScheme
enum class EPrefectureReplenishScheme : UINT8 {
	ReplenishByReborn = 0,
	ReplenishByCar = 1,
	ReplenishByAir = 2,
	ReplenishByNone = 3,
	End = 4,
	EPrefectureReplenishScheme_MAX = 5
};

// Enum DFMGameplay.EPrefectureBoardcastThreatType
enum class EPrefectureBoardcastThreatType : UINT8 {
	BoardcastPrefecture = 0,
	BoardcastNearby = 1,
	End = 2,
	EPrefectureBoardcastThreatType_MAX = 3
};

// Enum DFMGameplay.EAmbientLightVolumeDefine
enum class EAmbientLightVolumeDefine : UINT8 {
	ECharacterGlobalEventD_None = 0,
	ECharacterGlobalEvent_ToHandingM2HB = 1,
	ECharacterGlobalEvent_WTF = 2,
	EAmbientLightVolumeDefine_MAX = 3
};

// Enum DFMGameplay.EDBAmmoBoxCountLimitRule
enum class EDBAmmoBoxCountLimitRule : UINT8 {
	OnlyOnce = 0,
	EachOnce = 1,
	EDBAmmoBoxCountLimitRule_MAX = 2
};

// Enum DFMGameplay.EDBAmmoBoxVisibilityRule
enum class EDBAmmoBoxVisibilityRule : UINT8 {
	OnlyKiller = 0,
	OnlyKillerTeam = 1,
	All = 2,
	EDBAmmoBoxVisibilityRule_MAX = 3
};

// Enum DFMGameplay.EGPPlayParticleEffectTeamRole
enum class EGPPlayParticleEffectTeamRole : UINT8 {
	ROLE_All = 0,
	ROLE_Team = 1,
	ROLE_Enermy = 2,
	ROLE_MAX = 3
};

// Enum DFMGameplay.ETerrainType
enum class ETerrainType : UINT8 {
	Land = 0,
	River = 1,
	ETerrainType_MAX = 2
};

// Enum DFMGameplay.EHelmetProtectionPart
enum class EHelmetProtectionPart : UINT8 {
	Head = 0,
	Face = 1,
	Ear = 2,
	UpFace = 3,
	DownFace = 4,
	EHelmetProtectionPart_MAX = 5
};

// Enum DFMGameplay.EProtectionPart
enum class EProtectionPart : UINT8 {
	Chest = 0,
	Abdomen = 1,
	BigArm = 2,
	SmallArm = 3,
	Leg = 4,
	LowerLeg = 5,
	EProtectionPart_MAX = 6
};

// Enum DFMGameplay.EProcessDurabilityReason
enum class EProcessDurabilityReason : UINT8 {
	None = 0,
	StartGame = 1,
	PlayerDead = 2,
	EndGame = 3,
	EProcessDurabilityReason_MAX = 4
};

// Enum DFMGameplay.EMovePlanAvoidanceStatus
enum class EMovePlanAvoidanceStatus : UINT8 {
	None = 0,
	Idle = 1,
	Wait = 2,
	Move = 3,
	EMovePlanAvoidanceStatus_MAX = 4
};

// Enum DFMGameplay.EAvoidanceBoxType
enum class EAvoidanceBoxType : UINT8 {
	Body = 0,
	Probe = 1,
	EAvoidanceBoxType_MAX = 2
};

// Enum DFMGameplay.EPlayerDeathType
enum class EPlayerDeathType : UINT8 {
	None = 0,
	DeathByAI = 1,
	DeathByPlayer = 2,
	DeathByAIPlayer = 3,
	DeathBySelf = 4,
	EPlayerDeathType_MAX = 5
};

// Enum DFMGameplay.EVehicleSpawnerActiveConditionType
enum class EVehicleSpawnerActiveConditionType : UINT8 {
	ENone = 0,
	ELeftVoteLessthanX = 1,
	ESectorActiveSomeTime = 2,
	EMorethanBalanceValue = 3,
	EVehicleSpawnerActiveConditionType_MAX = 4
};

// Enum DFMGameplay.EBattleFieldBackgroundCharacterVoiceStatusType
enum class EBattleFieldBackgroundCharacterVoiceStatusType : UINT8 {
	None = 0,
	SeaVehicle = 1,
	LandVehicle = 2,
	AirVehicle = 3,
	FootWarfare = 4,
	EBattleFieldBackgroundCharacterVoiceStatusType_MAX = 5
};

// Enum DFMGameplay.EBattleFieldBackgroundCharacterVoiceEventType
enum class EBattleFieldBackgroundCharacterVoiceEventType : UINT8 {
	None = 0,
	FirstEntryMatch = 1,
	SectorChange = 2,
	Loading = 3,
	EBattleFieldBackgroundCharacterVoiceEventType_MAX = 4
};

// Enum DFMGameplay.EBattleFieldDeathConfigType
enum class EBattleFieldDeathConfigType : UINT8 {
	Default = 0,
	OutOfSafeArea = 1,
	Damage = 2,
	InVehicle = 3,
	InGiantTower = 4,
	InElevator = 5,
	EBattleFieldDeathConfigType_MAX = 6
};

// Enum DFMGameplay.EBattleFieldSectorType
enum class EBattleFieldSectorType : UINT8 {
	None = 0,
	SectorBase = 1,
	CampSector = 2,
	VehicleSector = 3,
	EBattleFieldSectorType_MAX = 4
};

// Enum DFMGameplay.EBattleFieldDeduceType
enum class EBattleFieldDeduceType : UINT8 {
	E_None = 0,
	E_SectorBeginDeduce = 1,
	E_SectorEndTransitionDeduce = 2,
	E_ConquestDeduce = 3,
	E_MAX = 4
};

// Enum DFMGameplay.EBattleSupportSkillType
enum class EBattleSupportSkillType : UINT8 {
	ENone = 0,
	EBattleSupportSkill_GuidedMissile = 1,
	EBattleSupportSkill_SectorArtilerrate = 2,
	EBattleSupportSkill_SectorSmoke = 3,
	EBattleSupportSkillType_MAX = 4
};

// Enum DFMGameplay.EBattleRouteOccupyAction
enum class EBattleRouteOccupyAction : UINT8 {
	OccupyAll = 0,
	ReleaseSegment = 1,
	ReleaseAll = 2,
	EBattleRouteOccupyAction_MAX = 3
};

// Enum DFMGameplay.EBattleRoutePointType
enum class EBattleRoutePointType : UINT8 {
	WayPoint = 0,
	SectorPoint = 1,
	FlankPoint = 2,
	EBattleRoutePointType_MAX = 3
};

// Enum DFMGameplay.EModalPointType
enum class EModalPointType : UINT8 {
	ENone = 0,
	EFight = 1,
	EConquer = 2,
	ELogistics = 3,
	EInformation = 4,
	EModalPointType_MAX = 5
};

// Enum DFMGameplay.EScoreBoardType
enum class EScoreBoardType : UINT8 {
	ENone = 0,
	EKill = 1,
	EAssist = 2,
	ERescue = 3,
	ECap = 4,
	EScoreBoardType_MAX = 5
};

// Enum DFMGameplay.EScoreBoardCategoryType
enum class EScoreBoardCategoryType : UINT8 {
	ENone = 0,
	EBattle = 1,
	EVehicle = 2,
	EAssist = 3,
	ELogistics = 4,
	ECapture = 5,
	EArm = 6,
	EEarn = 7,
	EScoreBoardCategoryType_MAX = 8
};

// Enum DFMGameplay.EBlueprintPlunderInteractResultType
enum class EBlueprintPlunderInteractResultType : UINT8 {
	None = 0,
	ESuccess = 1,
	EFailed_BeingWanted_LackProps = 2,
	EFailed_Deciphering_Teammate_Wait2Copy = 3,
	EFailed_BeTakenOut_Self = 4,
	EBlueprintPlunderInteractResultType_MAX = 5
};

// Enum DFMGameplay.EInteract3DAudioType
enum class EInteract3DAudioType : UINT8 {
	None = 0,
	Container_Lp_Start = 1,
	Container_Lp_Stop = 2,
	CodeBreak_Lp_Start = 3,
	CodeBreak_Lp_Stop = 4,
	CodeBreak_Mandel_Lp = 5,
	CodeBreak_Mandel_Stop = 6,
	CodeBreak_Tp_Start = 7,
	CodeBreak_Tp_Stop = 8,
	Mandel_CodeBreak_End = 9,
	Mandel_FallDown = 10,
	Mandel_Lp = 11,
	Mandel_Stop = 12,
	CodeBreak_Interact_Start = 13,
	CodeBreak_Interact_Stop = 14,
	CodeBreak_Interact_End = 15,
	CodeBreak_Cloned = 16,
	CodeBreak_Plunder = 17,
	EInteract3DAudioType_MAX = 18
};

// Enum DFMGameplay.EBlueprintPlunderSettlementType
enum class EBlueprintPlunderSettlementType : UINT8 {
	Settlement_Failed = 0,
	Settlement_Success = 1,
	Settlement_Half = 2,
	Settlement_Success_TeamMate = 3,
	Settlement_MAX = 4
};

// Enum DFMGameplay.EVegetationState
enum class EVegetationState : UINT8 {
	ENormal = 0,
	EBroken = 1,
	EDestructed = 2,
	EMax = 3,
	EVegetationState_MAX = 4
};

// Enum DFMGameplay.EBreakableNavBoxMode
enum class EBreakableNavBoxMode : UINT8 {
	Default = 0,
	InitialEffectBrokenIgnore = 1,
	InitialIgnoreBrokenEffect = 2,
	EBreakableNavBoxMode_MAX = 3
};

// Enum DFMGameplay.EBreakableItemState
enum class EBreakableItemState : UINT8 {
	None = 0,
	ReadyBreak = 1,
	PartBroken = 2,
	FullBroken = 3,
	EBreakableItemState_MAX = 4
};

// Enum DFMGameplay.EBreakableItemType
enum class EBreakableItemType : UINT8 {
	None = 0,
	SingleSection = 1,
	MultipleSection = 2,
	SingleRigid = 3,
	BuildingWall = 4,
	WholeBuilding = 5,
	Foliage = 6,
	BatchBuilding = 7,
	EBreakableItemType_MAX = 8
};

// Enum DFMGameplay.EBreakthroughGiudeType
enum class EBreakthroughGiudeType : UINT8 {
	ENone = 0,
	ESafeAreaGuide = 1,
	ETransitionGuide = 2,
	EBreakthroughGiudeType_MAX = 3
};

// Enum DFMGameplay.EBreakthroughScriptedMatchType
enum class EBreakthroughScriptedMatchType : UINT8 {
	None = 0,
	FirstGameOffenseWin = 1,
	SecondGameDefenseWin = 2,
	EBreakthroughScriptedMatchType_MAX = 3
};

// Enum DFMGameplay.EBreakthroughMapType
enum class EBreakthroughMapType : UINT8 {
	None = 0,
	All = 1,
	IceLand = 2,
	Gibraltar = 3,
	EBreakthroughMapType_MAX = 4
};

// Enum DFMGameplay.EEstimateName
enum class EEstimateName : UINT8 {
	EEnemyNone = 0,
	EEnemyDist = 1,
	EEnemySight = 2,
	EEnemyAirHit = 3,
	ETeamMateDist = 4,
	EOtherTeamMateDist = 5,
	EAnchorDist = 6,
	EDeadMateDist = 7,
	AnchorEnemyDis = 8,
	EEnemyMax = 9,
	EEstimateName_MAX = 10
};

// Enum DFMGameplay.EShootType
enum class EShootType : UINT8 {
	Dot = 0,
	Burst = 1,
	Continuous = 2,
	EShootType_MAX = 3
};

// Enum DFMGameplay.EPvpAISkill
enum class EPvpAISkill : UINT8 {
	None = 0,
	HiveTechSmokeGrenade = 1,
	EPvpAISkill_MAX = 2
};

// Enum DFMGameplay.EBuffEffectReplicateAttributeType
enum class EBuffEffectReplicateAttributeType : UINT8 {
	None = 0,
	OwnerOnly = 1,
	Multicast = 2,
	EBuffEffectReplicateAttributeType_MAX = 3
};

// Enum DFMGameplay.EOutLineRole
enum class EOutLineRole : UINT8 {
	OutLineRole_ALL = 0,
	OutLineRole_Only3P = 1,
	OutLineRole_Only1p = 2,
	OutLineRole_OnlySource = 3,
	OutLineRole_SourceAndTeammate = 4,
	OutLineRole_TeammateAndMe = 5,
	OutLineRole_TeammateNoMe = 6,
	OutLineRole_Enermy = 7,
	OutLineRole_MAX = 8
};

// Enum DFMGameplay.EBuffClientEventTag
enum class EBuffClientEventTag : UINT8 {
	None = 0,
	InjuredVoiceState = 1,
	EBuffClientEventTag_MAX = 2
};

// Enum DFMGameplay.EBuffImmunityType
enum class EBuffImmunityType : UINT8 {
	None = 0,
	Inhibition = 1,
	Reduction = 2,
	Replace = 3,
	EBuffImmunityType_MAX = 4
};

// Enum DFMGameplay.EBuffAction
enum class EBuffAction : UINT8 {
	None = 0,
	CureSOLHealthBody = 1,
	EBuffAction_MAX = 2
};

// Enum DFMGameplay.EBuffActionTriggerType
enum class EBuffActionTriggerType : UINT8 {
	None = 0,
	OnAdd = 1,
	OnRefreshTime = 2,
	OnPeriod = 3,
	OnPause = 4,
	OnResume = 5,
	OnRemove = 6,
	EBuffActionTriggerType_MAX = 7
};

// Enum DFMGameplay.EBuffConflictOp
enum class EBuffConflictOp : UINT8 {
	None = 0,
	DurationMax = 1,
	Replace = 2,
	Priority = 3,
	EBuffConflictOp_MAX = 4
};

// Enum DFMGameplay.EBuffApplyAttributeType
enum class EBuffApplyAttributeType : UINT8 {
	Always = 0,
	Once = 1,
	EBuffApplyAttributeType_MAX = 2
};

// Enum DFMGameplay.EStackType
enum class EStackType : UINT8 {
	Unable = 0,
	PartIndie = 1,
	Refresh = 2,
	Independent = 3,
	RefreshStack = 4,
	EStackType_MAX = 5
};

// Enum DFMGameplay.ECDAWardKillType
enum class ECDAWardKillType : UINT8 {
	Player = 0,
	AI = 1,
	ECDAWardKillType_MAX = 2
};

// Enum DFMGameplay.EBuffAttributeModType
enum class EBuffAttributeModType : UINT8 {
	Float = 0,
	Curve = 1,
	EBuffAttributeModType_MAX = 2
};

// Enum DFMGameplay.EBuffAttributeDataType
enum class EBuffAttributeDataType : UINT8 {
	AttributeId = 0,
	Custom = 1,
	Damage = 2,
	EBuffAttributeDataType_MAX = 3
};

// Enum DFMGameplay.EBuffEventType
enum class EBuffEventType : UINT8 {
	Add = 0,
	Remove = 1,
	Refresh = 2,
	Pause = 3,
	EBuffEventType_MAX = 4
};

// Enum DFMGameplay.ECharacterBuffDebuffType
enum class ECharacterBuffDebuffType : UINT8 {
	Unknow = 0,
	Buff = 1,
	Debuff = 2,
	ECharacterBuffDebuffType_MAX = 3
};

// Enum DFMGameplay.EBuffDisableTag
enum class EBuffDisableTag : UINT8 {
	ENone = 0,
	EImpendingDeath = 1,
	EPVEGameMode = 2,
	EDisableDebuff = 3,
	EDeath = 4,
	EVehicle = 5,
	EBuffDisableTag_MAX = 6
};

// Enum DFMGameplay.ECarryBodyStatusType
enum class ECarryBodyStatusType : UINT8 {
	AnyStatus = 0,
	Box = 1,
	Died = 2,
	ImpendingDeath = 3,
	SpecificType = 4,
	ECarryBodyStatusType_MAX = 5
};

// Enum DFMGameplay.ECarryBodyTaskType
enum class ECarryBodyTaskType : UINT8 {
	FinishCarryBody = 0,
	ReachLocation = 1,
	Escape = 2,
	KeepCarryingForDistance = 3,
	ECarryBodyTaskType_MAX = 4
};

// Enum DFMGameplay.EChangeableContainerType
enum class EChangeableContainerType : UINT8 {
	None = 0,
	FixedAmmoBox = 1,
	EChangeableContainerType_MAX = 2
};

// Enum DFMGameplay.EWeaponStaggerType
enum class EWeaponStaggerType : UINT8 {
	None = 0,
	Medium = 1,
	Heavy = 2,
	Skill = 3,
	EWeaponStaggerType_MAX = 4
};

// Enum DFMGameplay.ECharacterStaggerType
enum class ECharacterStaggerType : UINT8 {
	None = 0,
	Gentle = 1,
	Heavy = 2,
	Tumble = 3,
	InMove = 4,
	InSprint = 5,
	FlashBomb = 6,
	SpecialType1 = 7,
	MAX_Type = 8,
	ECharacterStaggerType_MAX = 9
};

// Enum DFMGameplay.EAINameClass
enum class EAINameClass : UINT8 {
	AllAI = 0,
	Class1 = 1,
	Class2 = 2,
	Class3 = 3,
	Class4 = 4,
	Class5 = 5,
	Class6 = 6,
	Class7 = 7,
	Class8 = 8,
	Class9 = 9,
	Class10 = 10,
	EAINameClass_MAX = 11
};

// Enum DFMGameplay.EFireMoveStyleBodyState
enum class EFireMoveStyleBodyState : UINT8 {
	Stand = 0,
	Sprint = 1,
	Crouch = 2,
	Prone = 3,
	EFireMoveStyleBodyState_MAX = 4
};

// Enum DFMGameplay.EAILevel
enum class EAILevel : UINT8 {
	T0 = 0,
	T1 = 1,
	T2 = 2,
	T3 = 3,
	T4 = 4,
	T5 = 5,
	EAILevel_MAX = 6
};

// Enum DFMGameplay.EHeroType
enum class EHeroType : UINT8 {
	C101_Medic = 0,
	C201_Sniper = 1,
	C301_Assault = 2,
	C401_Gunner = 3,
	EHeroType_MAX = 4
};

// Enum DFMGameplay.EPVPAIFightStyle
enum class EPVPAIFightStyle : UINT8 {
	Defensive = 0,
	Aggressive = 1,
	Passive = 2,
	EPVPAIFightStyle_MAX = 3
};

// Enum DFMGameplay.ESpawnBossRule
enum class ESpawnBossRule : UINT8 {
	Default = 0,
	Spawn = 1,
	NotSpawn = 2,
	ESpawnBossRule_MAX = 3
};

// Enum DFMGameplay.ECombatSupportType
enum class ECombatSupportType : UINT8 {
	AerialVehicle = 0,
	FlameTower = 1,
	End = 2,
	ECombatSupportType_MAX = 3
};

// Enum DFMGameplay.EBattleFieldInGameGuideType
enum class EBattleFieldInGameGuideType : UINT8 {
	None = 0,
	FirstDeployChoosePoint = 1,
	FirstDeploySelectBoat = 2,
	FirstDeployClickHeroOpenHeroList = 3,
	FirstDeployClickHeroViewHeroInfo = 4,
	FirstDeployConfirmSelectHero = 5,
	FirstDeployConfirmDeploy = 6,
	SkillReadyClickSkillButton = 7,
	ReDeployClickHeroOpenHeroList = 8,
	ReDeployClickHeroViewHeroInfo = 9,
	ReDeployClickWeaponOpenWeaponList = 10,
	ReDeployClickWeaponViewWeaponInfo = 11,
	ReDeployChoosePointTips = 12,
	ReDeployConfirmDeploy = 13,
	BroadcastBreakthroughAttack = 14,
	BroadcastBreakthroughDefend = 15,
	BroadcastConquest = 16,
	AnchorFirstStartCapture = 17,
	EBattleFieldInGameGuideType_MAX = 18
};

// Enum DFMGameplay.EBattleFieldInGameGuideGroupType
enum class EBattleFieldInGameGuideGroupType : UINT8 {
	None = 0,
	Continuous = 1,
	Independent = 2,
	EBattleFieldInGameGuideGroupType_MAX = 3
};

// Enum DFMGameplay.EBattleFieldInGameGuideGroup
enum class EBattleFieldInGameGuideGroup : UINT8 {
	None = 0,
	Deploy = 1,
	Skill = 2,
	Conquest = 3,
	Anchor = 4,
	BreakthroughAttack = 5,
	BreakthroughDefend = 6,
	EBattleFieldInGameGuideGroup_MAX = 7
};

// Enum DFMGameplay.EBreakthroughRedeployOneGuideStatus
enum class EBreakthroughRedeployOneGuideStatus : UINT8 {
	InvalidGuide = 0,
	NotStart = 1,
	Showing = 2,
	Finished = 3,
	EBreakthroughRedeployOneGuideStatus_MAX = 4
};

// Enum DFMGameplay.EStatName
enum class EStatName : UINT8 {
	None = 0,
	AIMovement_Update = 1,
	Max = 2
};

// Enum DFMGameplay.ECrashableDroneState
enum class ECrashableDroneState : UINT8 {
	NORMAL = 0,
	DAMAGED = 1,
	CRASHED = 2,
	LANDED = 3,
	ECrashableDroneState_MAX = 4
};

// Enum DFMGameplay.EDeliverProgressionStage
enum class EDeliverProgressionStage : UINT8 {
	NotInRange = 0,
	ReachLocation = 1,
	Delivering = 2,
	Delivered = 3,
	EDeliverProgressionStage_MAX = 4
};

// Enum DFMGameplay.EDesTerrainCheckCode
enum class EDesTerrainCheckCode : UINT8 {
	PASS = 0,
	INTERNAL = 1,
	NET_ROLE = 2,
	NUM_LIMIT = 3,
	DISTANCE_LIMIT = 4,
	EDesTerrainCheckCode_MAX = 5
};

// Enum DFMGameplay.EDSMCPoolMethod
enum class EDSMCPoolMethod : UINT8 {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EDSMCPoolMethod_MAX = 5
};

// Enum DFMGameplay.EDisplayInputActionPriority_Cpp
enum class EDisplayInputActionPriority_Cpp : UINT8 {
	Game = 0,
	UI_HUD = 1,
	UI_Stack = 2,
	UI_Loading = 3,
	UI_Tip = 4,
	UI_Pop = 5,
	Always = 6,
	Debug = 7,
	EDisplayInputActionPriority_MAX = 8
};

// Enum DFMGameplay.EHDInputEnableRuleType
enum class EHDInputEnableRuleType : UINT8 {
	Whitelist = 0,
	Blacklist = 1,
	EHDInputEnableRuleType_MAX = 2
};

// Enum DFMGameplay.EHDInputEnableMapType
enum class EHDInputEnableMapType : UINT8 {
	HudState = 0,
	MainStage = 1,
	PlayMode = 2,
	Dynamic = 3,
	NumMax = 4,
	EHDInputEnableMapType_MAX = 5
};

// Enum DFMGameplay.EKeyIconType
enum class EKeyIconType : UINT8 {
	Normal = 0,
	SemiTranslucent = 1,
	EKeyIconType_MAX = 2
};

// Enum DFMGameplay.ELootingKeyCondition
enum class ELootingKeyCondition : UINT8 {
	None = 0,
	CheckHover = 1,
	CheckHoverItemMarked = 2,
	CheckHoverItemNotMarked = 3,
	CheckHoverItemNotFromPlayer = 4,
	CheckIsLootingView = 5,
	CheckCanDiscard = 6,
	CheckItemCanBeMoved = 7,
	CheckItemCanBeEquipped = 8,
	ELootingKeyCondition_MAX = 9
};

// Enum DFMGameplay.EKeyFunctionBindType
enum class EKeyFunctionBindType : UINT8 {
	None = 0,
	FixedBind = 1,
	OptionalBind = 2,
	ModifiableBind = 3,
	EKeyFunctionBindType_MAX = 4
};

// Enum DFMGameplay.EMDVSwitchingMode
enum class EMDVSwitchingMode : UINT8 {
	Interp = 0,
	OnZoomIn = 1,
	ZoomedIn = 2,
	EMDVSwitchingMode_MAX = 3
};

// Enum DFMGameplay.EActionWithCastTimeType
enum class EActionWithCastTimeType : UINT8 {
	EActionWithCastTimeType_None = 0,
	EActionWithCastTimeType_UseItem = 1,
	EActionWithCastTimeType_RescueTeammate = 2,
	EActionWithCastTimeType_RescuedByTeammate = 3,
	EActionWithCastTimeType_ActivateAirBox = 4,
	EActionWithCastTimeType_FightAirBox = 5,
	EActionWithCastTimeType_RecyleSceneItem = 6,
	EActionWithCastTimeType_MAX = 7
};

// Enum DFMGameplay.EAIAnalysisFightState
enum class EAIAnalysisFightState : UINT8 {
	Leisure = 0,
	Alert = 1,
	Fight = 2,
	Dead = 3,
	_Invalid = 4,
	EAIAnalysisFightState_MAX = 5
};

// Enum DFMGameplay.EEquipLevel
enum class EEquipLevel : UINT8 {
	None = 0,
	One = 1,
	Two = 2,
	Three = 3,
	Four = 4,
	Five = 5,
	Six = 6,
	Max = 7
};

// Enum DFMGameplay.EAIMachineGunFocusMode
enum class EAIMachineGunFocusMode : UINT8 {
	EAIMachineGunFocus_Target = 0,
	EAIMachineGunFocus_Reset = 1,
	EAIMachineGunFocus_KeepCurrent = 2,
	EAIMachineGunFocus_MAX = 3
};

// Enum DFMGameplay.EAIWalkStateEvent
enum class EAIWalkStateEvent : UINT8 {
	RequestMove = 0,
	RequestStop = 1,
	RequestPreStop = 2,
	StartMoveFinish = 3,
	StopMoveFinish = 4,
	StopMoveFailed = 5,
	RequestMoveTurn = 6,
	MoveTurnFinish = 7,
	RequestTurn = 8,
	TurnFinish = 9,
	StopImmediately = 10,
	RequestPlayCustomAnimRootMotion = 11,
	PlayCustomAnimRootMotionFinish = 12,
	RequestStagger = 13,
	StaggerFinish = 14,
	RequestBeingAssassinated = 15,
	AssasssinationFinished = 16,
	Max = 17
};

// Enum DFMGameplay.EAIPoseState
enum class EAIPoseState : UINT8 {
	Stand = 0,
	Crouch = 1,
	Prone = 2,
	Stand2Crouch = 3,
	Stand2Prone = 4,
	Crouch2Stand = 5,
	Crouch2Prone = 6,
	Prone2Stand = 7,
	Prone2Crouch = 8,
	Max = 9
};

// Enum DFMGameplay.EAIWalkState
enum class EAIWalkState : UINT8 {
	Idle = 0,
	PlayCustomAnimRootMotion = 1,
	Turn = 2,
	TurnInPlace = 3,
	Stagger = 4,
	BeingAssassinated = 5,
	Move = 6,
	Move_Init = 7,
	Move_Forward = 8,
	Move_Forward_Turn = 9,
	Move_Forward_Start = 10,
	Move_Forward_Loop = 11,
	Move_Forward_PreStop = 12,
	Move_Forward_Stop = 13,
	Move_AnyAngle = 14,
	Move_AnyAngle_Init = 15,
	Move_AnyAngle_Start = 16,
	Move_AnyAngle_Loop = 17,
	Move_AnyAngle_PreStop = 18,
	Move_AnyAngle_Stop = 19,
	Move_AnyAngle_FinishStop = 20,
	Move_Finish = 21,
	Max = 22
};

// Enum DFMGameplay.EGroupDebugInfo
enum class EGroupDebugInfo : UINT8 {
	EGroupObject = 0,
	EGoal = 1,
	EPathObject = 2,
	EFightTarget = 3,
	EFireValue = 4,
	EEnd = 5,
	EGroupDebugInfo_MAX = 6
};

// Enum DFMGameplay.ESOLCoverHeightQuery
enum class ESOLCoverHeightQuery : UINT8 {
	AllHeight = 0,
	High = 1,
	Low = 2,
	ESOLCoverHeightQuery_MAX = 3
};

// Enum DFMGameplay.ESOLCoverDirQuery
enum class ESOLCoverDirQuery : UINT8 {
	AllDirection = 0,
	Left = 1,
	Right = 2,
	ESOLCoverDirQuery_MAX = 3
};

// Enum DFMGameplay.EDFMAICustomLinkType
enum class EDFMAICustomLinkType : UINT8 {
	Simple = 0,
	Jump = 1,
	Vault = 2,
	JumpAndVault = 3,
	ClimbLadder = 4,
	Zipline = 5,
	Invalid = 6,
	EDFMAICustomLinkType_MAX = 7
};

// Enum DFMGameplay.EAIThreatLevel
enum class EAIThreatLevel : UINT8 {
	Fight = 0,
	AlertThenFight = 1,
	Alert = 2,
	Ignore = 3,
	MAX = 4
};

// Enum DFMGameplay.EAITransportPoseType
enum class EAITransportPoseType : UINT8 {
	Default = 0,
	Idle = 1,
	TakeOff = 2,
	TakeOffFinished = 3,
	JumpLook = 4,
	JumpLookIdle = 5,
	BackSeat = 6,
	BackSeatFinished = 7,
	BackSeatFinished2 = 8,
	Wounded = 9,
	WoundedFinished = 10,
	GetIn = 11,
	GetInFinished = 12,
	EAITransportPoseType_MAX = 13
};

// Enum DFMGameplay.EAITransportActorType
enum class EAITransportActorType : UINT8 {
	Default = 0,
	Pilot = 1,
	Guard = 2,
	Doctor = 3,
	EAITransportActorType_MAX = 4
};

// Enum DFMGameplay.EAIHelicopterSpawnState
enum class EAIHelicopterSpawnState : UINT8 {
	Default = 0,
	Idle = 1,
	Descent = 2,
	DescentBlendOut = 3,
	Finish = 4,
	EAIHelicopterSpawnState_MAX = 5
};

// Enum DFMGameplay.EAIInteractionType
enum class EAIInteractionType : UINT8 {
	None = 0,
	SingleMontage = 1,
	UsingSceneWeapon = 2,
	AttachActor = 3,
	EAIInteractionType_MAX = 4
};

// Enum DFMGameplay.EAIInteractionState
enum class EAIInteractionState : UINT8 {
	PreStart = 0,
	Starting = 1,
	DuringInteraction = 2,
	Ending = 3,
	FinishSucceed = 4,
	FinishFailed = 5,
	EAIInteractionState_MAX = 6
};

// Enum DFMGameplay.EAICoverPointType
enum class EAICoverPointType : UINT8 {
	NONE = 0,
	HIGH_LEFT = 1,
	HIGH_RIGHT = 2,
	LOW_LEFT = 3,
	LOW_RIGHT = 4,
	LOW_CENTER = 5,
	EAICoverPointType_MAX = 6
};

// Enum DFMGameplay.EPlayerRequestAssistType
enum class EPlayerRequestAssistType : UINT8 {
	None = 0,
	NeedRescue = 1,
	NeedMedic = 2,
	NeedMunitions = 3,
	EPlayerRequestAssistType_MAX = 4
};

// Enum DFMGameplay.ERCVAISoundFxType
enum class ERCVAISoundFxType : UINT8 {
	None = 0,
	EngineStartFight = 1,
	EngineStopFight = 2,
	EngineStartRelax = 3,
	EngineStopRelax = 4,
	EngineTurnRound = 5,
	TurretTuring = 6,
	RadarRotationStart = 7,
	RadarRotationStop = 8,
	CarMusicStart = 9,
	CarMusicStop = 10,
	DoorOpen = 11,
	DoorClose = 12,
	SuicideCarEject = 13,
	BeepOneShot = 14,
	BeepWarning = 15,
	MAX = 16
};

// Enum DFMGameplay.EPreInteractionWalkingMode
enum class EPreInteractionWalkingMode : UINT8 {
	Walk = 0,
	Run = 1,
	StopAndGo = 2,
	StopAndRun = 3,
	End = 4,
	EPreInteractionWalkingMode_MAX = 5
};

// Enum DFMGameplay.EScenesFailureType
enum class EScenesFailureType : UINT8 {
	WORLDNULL = 0,
	NOVACANCY = 1,
	DEPENDENCYINCOMPLETE = 2,
	NOTGROUP = 3,
	MEMBERNULL = 4,
	COOLDOWN = 5,
	UNREACHABLE = 6,
	End = 7,
	EScenesFailureType_MAX = 8
};

// Enum DFMGameplay.EShelterType
enum class EShelterType : UINT8 {
	LowShelter = 0,
	MiddleShelter = 1,
	HighShelter = 2,
	End = 3,
	EShelterType_MAX = 4
};

// Enum DFMGameplay.EScenesInteractiveActorTag
enum class EScenesInteractiveActorTag : UINT8 {
	EPatrolPoint = 0,
	ERest = 1,
	EEat = 2,
	EDrink = 3,
	EScout = 4,
	EToilet = 5,
	EQueue = 6,
	ECheck = 7,
	ECollect = 8,
	EPutUp = 9,
	EPutDown = 10,
	EDoor = 11,
	EChat = 12,
	EQuarrel = 13,
	EProvoke = 14,
	ECarry = 15,
	EEnd = 16,
	EScenesInteractiveActorTag_MAX = 17
};

// Enum DFMGameplay.EScenesActorType
enum class EScenesActorType : UINT8 {
	EPatrol = 0,
	ERest = 1,
	EStationed = 2,
	EEnd = 3,
	EScenesActorType_MAX = 4
};

// Enum DFMGameplay.EFaceToTurnType
enum class EFaceToTurnType : UINT8 {
	FaceToTurnType_KeepLerp = 0,
	FaceToTurnType_TurnOnce = 1,
	FaceToTurnType_MAX = 2
};

// Enum DFMGameplay.EFaceToLocationType
enum class EFaceToLocationType : UINT8 {
	FaceToLocationType_CurrentLocation = 0,
	FaceToLocationType_LastSeeLocation = 1,
	FaceToLocationType_CoverCorner = 2,
	FaceToLocationType_MoveDirection = 3,
	FaceToLocationType_MAX = 4
};

// Enum DFMGameplay.EChangeFightStateMode
enum class EChangeFightStateMode : UINT8 {
	Leisure = 0,
	Alert = 1,
	AlertTurn = 2,
	AlertHearTurn = 3,
	Fight = 4,
	FightTurn = 5,
	EChangeFightStateMode_MAX = 6
};

// Enum DFMGameplay.EAICoverAreaEntryType
enum class EAICoverAreaEntryType : UINT8 {
	None = 0,
	Left = 1,
	Right = 2,
	EAICoverAreaEntryType_MAX = 3
};

// Enum DFMGameplay.ESpecialActingMontageType
enum class ESpecialActingMontageType : UINT8 {
	None = 0,
	AlertLookAround = 1,
	AlertLookAround02 = 2,
	AlertSpotTarget = 3,
	AlertCallCompany = 4,
	ForwardSliding = 5,
	ForwardRolling = 6,
	ActingType1 = 7,
	ActingType2 = 8,
	InCoverActing1 = 9,
	InCoverActing2 = 10,
	InCoverShootingStart = 11,
	InCoverShootingEnd = 12,
	SideRushingLeft = 13,
	SideRushingRight = 14,
	ESpecialActingMontageType_MAX = 15
};

// Enum DFMGameplay.EMauriceSkillType
enum class EMauriceSkillType : UINT8 {
	Attack01 = 0,
	EMauriceSkillType_MAX = 1
};

// Enum DFMGameplay.EReisSkillType
enum class EReisSkillType : UINT8 {
	RushShootLeft = 0,
	RushShootRight = 1,
	RushShootFront = 2,
	StrikeFront = 3,
	ComboShoot = 4,
	EReisSkillType_MAX = 5
};

// Enum DFMGameplay.ETakingCoverType
enum class ETakingCoverType : UINT8 {
	LeftCover = 0,
	RightCover = 1,
	ETakingCoverType_MAX = 2
};

// Enum DFMGameplay.EAIThreatEvent
enum class EAIThreatEvent : UINT8 {
	HURTED = 0,
	ALERT = 1,
	FIGHTING = 2,
	DEADBODY = 3,
	SAFE = 4,
	MAX = 5
};

// Enum DFMGameplay.EAIThreatFlagName
enum class EAIThreatFlagName : UINT8 {
	STEP_SOUND = 0,
	GUN_SOUND = 1,
	GRENADE = 2,
	VISIBLE = 3,
	HURTED = 4,
	PLAYER_OP = 5,
	SENCE = 6,
	ASN_SOUND = 7,
	ATTRACTION_SOUND = 8,
	VEHICLE_HURTED = 9,
	UNSET = 10,
	EAIThreatFlagName_MAX = 11
};

// Enum DFMGameplay.EAIThreatDetailName
enum class EAIThreatDetailName : UINT8 {
	TINY_STEP = 0,
	SMALL_STEP = 1,
	NORMAL_STEP = 2,
	LARGE_STEP = 3,
	AIR_HIT = 4,
	NEAR_SHOOT_GUN = 5,
	GUN_SOUND = 6,
	GRENADE = 7,
	VISIBLE = 8,
	TEAM_HURTED = 9,
	HURTED = 10,
	PLAYER_OP = 11,
	AIMING = 12,
	SMOKEBOMB = 13,
	FLASHBANG = 14,
	ASN = 15,
	ATTRACTION = 16,
	PVP_TEAM_HURTED = 17,
	VEHICLE_HURTED = 18,
	MAX = 19
};

// Enum DFMGameplay.EAttributeChangeOp
enum class EAttributeChangeOp : UINT8 {
	Less_Value = 0,
	Greater_Value = 1,
	Less_Percent = 2,
	Greater_Percent = 3,
	EAttributeChangeOp_MAX = 4
};

// Enum DFMGameplay.EBroadcastTeamInfoType
enum class EBroadcastTeamInfoType : UINT8 {
	NearDead = 0,
	Rescue = 1,
	EBroadcastTeamInfoType_MAX = 2
};

// Enum DFMGameplay.EBroadcastGameInfoType
enum class EBroadcastGameInfoType : UINT8 {
	PlayerEnterZone = 0,
	PlayerLoadMapFinishEnterGame = 1,
	PlayerEscape = 2,
	ExistPointAwake = 3,
	ExistPointClose = 4,
	EBroadcastGameInfoType_MAX = 5
};

// Enum DFMGameplay.EGameBrocastType
enum class EGameBrocastType : UINT8 {
	KillInfo = 0,
	GameInfo = 1,
	TeamInfo = 2,
	GamePlayerInfo = 3,
	AntiCheatDetectionInfo = 4,
	EGameBrocastType_MAX = 5
};

// Enum DFMGameplay.EGameBrocastChannel
enum class EGameBrocastChannel : UINT8 {
	Local = 0,
	Global = 1,
	Team = 2,
	Zone = 3,
	EGameBrocastChannel_MAX = 4
};

// Enum DFMGameplay.EAIActive
enum class EAIActive : UINT8 {
	Stop = 0,
	Prepare = 1,
	Active = 2,
	EAIActive_MAX = 3
};

// Enum DFMGameplay.ECharacterAudioState
enum class ECharacterAudioState : UINT8 {
	EWildRoam = 0,
	EProwl = 1,
	EWarn = 2,
	EFire = 3,
	EBoss_Area = 4,
	EBoss_Guard = 5,
	EBoss_Battle = 6,
	EMax = 7,
	ECharacterAudioState_MAX = 8
};

// Enum DFMGameplay.EWearablePreferenceType
enum class EWearablePreferenceType : UINT8 {
	Fashion = 0,
	Equipment = 1,
	EWearablePreferenceType_MAX = 2
};

// Enum DFMGameplay.EEquipmentHideReason
enum class EEquipmentHideReason : UINT8 {
	EquipmentHide_None = 0,
	EquipmentHide_FPPBeingCarryBody = 1,
	EquipmentHide_Vehicle = 2,
	EquipmentHide_MAX = 3
};

// Enum DFMGameplay.EChangeSkillCDType
enum class EChangeSkillCDType : UINT8 {
	Normal = 0,
	Percent = 1,
	EChangeSkillCDType_MAX = 2
};

// Enum DFMGameplay.ERTCharacterMergeMeshLODBias
enum class ERTCharacterMergeMeshLODBias : UINT8 {
	MergeMeshLODBias_1 = 0,
	MergeMeshLODBias_2 = 1,
	MergeMeshLODBias_3 = 2,
	MergeMeshLODBias_MAX = 3
};

// Enum DFMGameplay.ERTCharacterMergeTextureSize
enum class ERTCharacterMergeTextureSize : UINT8 {
	MergeTextureSize_129 = 0,
	MergeTextureSize_257 = 1,
	MergeTextureSize_513 = 2,
	MergeTextureSize_1025 = 3,
	MergeTextureSize_2049 = 4,
	MergeTextureSize_MAX = 5
};

// Enum DFMGameplay.ERTCharacterGameMode
enum class ERTCharacterGameMode : UINT8 {
	ERTCharacterGameMode_MP = 0,
	ERTCharacterGameMode_SOL = 1,
	ERTCharacterGameMode_MAX = 2
};

// Enum DFMGameplay.ERuntimeCharacterMeshMergeType
enum class ERuntimeCharacterMeshMergeType : UINT8 {
	CharacterMeshMerge_None = 0,
	CharacterMeshMerge_Trunk = 1,
	CharacterMeshMerge_Equipment = 2,
	CharacterMeshMerge_ExtraPart = 3,
	CharacterMeshMerge_MAX = 4
};

// Enum DFMGameplay.ERTCharacterAppearanceSCFilter
enum class ERTCharacterAppearanceSCFilter : UINT8 {
	ERTCharacterAppearanceSCFilter_None = 0,
	ERTCharacterAppearanceSCFilter_Light = 1,
	ERTCharacterAppearanceSCFilter_All = 2,
	ERTCharacterAppearanceSCFilter_MAX = 3
};

// Enum DFMGameplay.ERTCharacterAppearanceType
enum class ERTCharacterAppearanceType : UINT8 {
	ERTCharacterAppearance_None = 0,
	ERTCharacterAppearance_FPP = 1,
	ERTCharacterAppearance_TPP = 2,
	ERTCharacterAppearance_3P_Teammate = 3,
	ERTCharacterAppearance_3P_Other = 4,
	ERTCharacterAppearance_AI = 5,
	ERTCharacterAppearance_MAX = 6
};

// Enum DFMGameplay.ERTCharacterMemoryStrategy
enum class ERTCharacterMemoryStrategy : UINT8 {
	Normal = 0,
	Low = 1,
	VeryLow = 2,
	ERTCharacterMemoryStrategy_MAX = 3
};

// Enum DFMGameplay.EAssassinateChangeLocType
enum class EAssassinateChangeLocType : UINT8 {
	NONE = 0,
	ChangeSourceLoc = 1,
	ChangeTargetLoc = 2,
	RotationSourceLoc = 3,
	StayLocal = 4,
	EAssassinateChangeLocType_MAX = 5
};

// Enum DFMGameplay.EMapInteractorType
enum class EMapInteractorType : UINT8 {
	HiddenItem = 0,
	AmmoBox = 1,
	IronGauze = 2,
	EMapInteractorType_MAX = 3
};

// Enum DFMGameplay.ETagFilterMode
enum class ETagFilterMode : UINT8 {
	ETagFilterMode_None = 0,
	ETagFilterMode_HasAll = 1,
	ETagFilterMode_HasAny = 2,
	ETagFilterMode_MAX = 3
};

// Enum DFMGameplay.EquipmentType
enum class EquipmentType : UINT8 {
	Mesh = 0,
	MeshFPP = 1,
	EquipmentType_MAX = 2
};

// Enum DFMGameplay.EBonusExpType
enum class EBonusExpType : UINT8 {
	EBonusExpType_HeadShot = 0,
	EBonusExpType_KillStreak = 1,
	EBonusExpType_MAX = 2
};

// Enum DFMGameplay.EAnimType
enum class EAnimType : UINT8 {
	Firefighting = 0,
	ZoyaSwarms = 1,
	EAnimType_MAX = 2
};

// Enum DFMGameplay.EAudioNetRole
enum class EAudioNetRole : UINT8 {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4
};

// Enum DFMGameplay.EStatusBoolModifyAction
enum class EStatusBoolModifyAction : UINT8 {
	ECharacterStatusConflictSolution_DontCare = 0,
	ECharacterStatusConflictSolution_ModifyValue = 1,
	ECharacterStatusConflictSolution_MAX = 2
};

// Enum DFMGameplay.EAssassinateTargetType
enum class EAssassinateTargetType : UINT8 {
	None = 0,
	Civilian = 1,
	HPPercentPlayer = 2,
	ImpendingDeath = 3,
	EAssassinateTargetType_MAX = 4
};

// Enum DFMGameplay.EGameDifficultLevel
enum class EGameDifficultLevel : UINT8 {
	Simple = 0,
	Normal = 1,
	Hard = 2,
	EGameDifficultLevel_MAX = 3
};

// Enum DFMGameplay.EBigMapIconLayer_BB
enum class EBigMapIconLayer_BB : UINT8 {
	L_1 = 0,
	L_1_Base = 1,
	L_3 = 2,
	L_4 = 3,
	L_4_Facility = 4,
	L_7 = 5,
	L_8 = 6,
	L_9 = 7,
	L_9_Skill = 8,
	L_10_Sector = 9,
	L_12 = 10,
	L_12_DeadBody = 11,
	L_13_NormalSign = 12,
	L_14_LocalVehicle = 13,
	L_15_SameCamp = 14,
	L_16_TeamMate = 15,
	L_17_LocalPlayer = 16,
	L_18_EnemyVehicle = 17,
	L_19_Enemy = 18,
	L_20_ = 19,
	L_Max = 20
};

// Enum DFMGameplay.EBigMapIconLayer_SOL
enum class EBigMapIconLayer_SOL : UINT8 {
	L_1 = 0,
	L_1_Base = 1,
	L_2_POI = 2,
	L_3_Boss = 3,
	L_4_Facility = 4,
	L_5_InteractActor = 5,
	L_6_Lock = 6,
	L_7_Box = 7,
	L_8_Exit = 8,
	L_9_Skill = 9,
	L_10_DeadBody = 10,
	L_11_Quest = 11,
	L_12_Contract = 12,
	L_13_DecipherDevice = 13,
	L_14_MandelBrick = 14,
	L_15_TeamMateSign = 15,
	L_16_LocalSign = 16,
	L_17_Death = 17,
	L_18_TeamMate = 18,
	L_19_LocalPlayer = 19,
	L_20_Enemy = 20,
	L_Max = 21
};

// Enum DFMGameplay.EMiniMapIconLayer
enum class EMiniMapIconLayer : UINT8 {
	Lowest = 0,
	Base = 1,
	Line = 2,
	EMiniMapIconLayer_MAX = 3
};

// Enum DFMGameplay.EMapIconGamePlayMode
enum class EMapIconGamePlayMode : UINT8 {
	None = 0,
	MapIconGamePlayMode_SOL = 1,
	EMapIconGamePlayMode_Raid = 2,
	MapIconGamePlayMode_IrisDiscovery = 3,
	MapIconGamePlayMode_BattleField = 4,
	MapIconGamePlayMode_Breakthrough = 5,
	MapIconGamePlayMode_SafeHouse = 6,
	EMapIconGamePlayMode_MAX = 7
};

// Enum DFMGameplay.ENavAreaFlag
enum class ENavAreaFlag : UINT8 {
	Default = 0,
	Climb = 1,
	Vault = 2,
	JumpOff = 3,
	Door = 4,
	Water = 5,
	ENavAreaFlag_MAX = 6
};

// Enum DFMGameplay.ENPCService
enum class ENPCService : UINT8 {
	ENS_Dialogue = 0,
	ENS_Business = 1,
	ENS_RaidTrigger = 2,
	ENS_MAX = 3
};

// Enum DFMGameplay.EDialogueRule
enum class EDialogueRule : UINT8 {
	EDS_None = 0,
	EDS_InAngleRange = 1,
	EDS_NoLimit = 2,
	EDS_MAX = 3
};

// Enum DFMGameplay.ENPCCategory
enum class ENPCCategory : UINT8 {
	SKILL_STATUS_UNKNOW = 0,
	SKILL_STATUS_READY = 1,
	SKILL_STATUS_PRECAST = 2,
	SKILL_STATUS_CASTING = 3,
	SKILL_STATUS_AFTERCAST = 4,
	SKILL_STATUS_FINISH = 5,
	SKILL_STATUS_COOLING = 6,
	SKILL_STATUS_CHARGING = 7,
	SKILL_STATUS_PREPARING = 8,
	SKILL_STATUS_MAX = 9
};

// Enum DFMGameplay.ELootTotalValueRecordReason
enum class ELootTotalValueRecordReason : UINT8 {
	Exit = 0,
	Dead = 1,
	TimeOver = 2,
	ELootTotalValueRecordReason_MAX = 3
};

// Enum DFMGameplay.EPlayerCombatDamageMakerWeaponType
enum class EPlayerCombatDamageMakerWeaponType : UINT8 {
	NormalWeapon = 0,
	ElectricArrowDamage = 1,
	ProxSensorArrowMark = 2,
	LauncherDamage = 3,
	OverloadDamage = 4,
	EPlayerCombatDamageMakerWeaponType_MAX = 5
};

// Enum DFMGameplay.EPlayerMatchStatusType
enum class EPlayerMatchStatusType : UINT8 {
	BloodLoss = 0,
	HpHealed = 1,
	DehydrationTimes = 2,
	DrinkConsumed = 3,
	FoodConsumed = 4,
	DistanceTraveled = 5,
	BodiesLooted = 6,
	WeaponFound = 7,
	AccessoriesFound = 8,
	FoodFound = 9,
	RescueCount = 10,
	ReviveCount = 11,
	UnlockTimes = 12,
	TotalDamage = 13,
	TotalCombatCount = 14,
	SneakingRatio = 15,
	EPlayerMatchStatusType_MAX = 16
};

// Enum DFMGameplay.ECharacterRoleType
enum class ECharacterRoleType : UINT8 {
	CharacterRole_Boss = 0,
	CharacterRole_AI = 1,
	CharacterRole_Player = 2,
	CharacterRole_MAX = 3
};

// Enum DFMGameplay.EDFMMarkerPriority
enum class EDFMMarkerPriority : UINT8 {
	None = 0,
	NpcTalk = 1,
	Mission = 2,
	Ability = 3,
	Max = 4
};

// Enum DFMGameplay.ERedeployPlayerShowState
enum class ERedeployPlayerShowState : UINT8 {
	NotSee = 0,
	Dead = 1,
	Live = 2,
	ERedeployPlayerShowState_MAX = 3
};

// Enum DFMGameplay.ESafeHouseElevatorSwitchType
enum class ESafeHouseElevatorSwitchType : UINT8 {
	None = 0,
	Up = 1,
	Down = 2,
	Inside = 3,
	ESafeHouseElevatorSwitchType_MAX = 4
};

// Enum DFMGameplay.EBuffBlockRole
enum class EBuffBlockRole : UINT8 {
	All = 0,
	Block = 1,
	NoBlock = 2,
	EBuffBlockRole_MAX = 3
};

// Enum DFMGameplay.EBuffGameRole
enum class EBuffGameRole : UINT8 {
	All = 0,
	SOL = 1,
	MP = 2,
	INTRO = 3,
	EBuffGameRole_MAX = 4
};

// Enum DFMGameplay.EBuffApplyRole
enum class EBuffApplyRole : UINT8 {
	All = 0,
	Enermy = 1,
	TeammateNoMe = 2,
	TeammateAndMe = 3,
	OnlyMe = 4,
	EnermyAndMe = 5,
	NoMe = 6,
	TeammateNoMe_CheckEnemy = 7,
	EBuffApplyRole_MAX = 8
};

// Enum DFMGameplay.ESniperTargetMarkState
enum class ESniperTargetMarkState : UINT8 {
	InMarkRange = 0,
	InMaintainRange = 1,
	OutSideMaintainRange = 2,
	ESniperTargetMarkState_MAX = 3
};

// Enum DFMGameplay.ESoundVisualizeActionType
enum class ESoundVisualizeActionType : UINT8 {
	GunFire = 0,
	Explosion = 1,
	Walk = 2,
	Run = 3,
	Sprint = 4,
	Interaction = 5,
	OpenDoor = 6,
	BreakDoor = 7,
	CarryBody = 8,
	PutDownBody = 9,
	AIVoice = 10,
	PlayerVoice = 11,
	UseItem = 12,
	Vehicle = 13,
	None = 14,
	ESoundVisualizeActionType_MAX = 15
};

// Enum DFMGameplay.EAIAudioDebugFailReason
enum class EAIAudioDebugFailReason : UINT8 {
	SUCCESS = 0,
	TYPE_COOLDOWN = 1,
	GLOBAL_COOLDOWN = 2,
	ALLAI_COOLDOWN = 3,
	NO_MATCHED = 4,
	ABORT = 5,
	MAX = 6
};

// Enum DFMGameplay.ECharacterSpeakDynamicDialogueSwitchGroup
enum class ECharacterSpeakDynamicDialogueSwitchGroup : UINT8 {
	NONE = 0,
	STATUS_GROUP = 1,
	ACTION_GROUP = 2,
	AI_HEALTH_GROUP = 3,
	PLAYER_HEALTH_GROUP = 4,
	TEAMMATE_GROUP = 5,
	LOCATION_GROUP = 6,
	TIME_OF_DAY_GROUP = 7,
	MAX = 8
};

// Enum DFMGameplay.ECharacterSpeakDynamicDialogueSwitchTime_of_Day
enum class ECharacterSpeakDynamicDialogueSwitchTime_of_Day : UINT8 {
	NONE = 0,
	Daylight = 1,
	Evening = 2,
	Night = 3,
	Morning = 4,
	MAX = 5
};

// Enum DFMGameplay.ECharacterSpeakDynamicDialogueSwitchLocation
enum class ECharacterSpeakDynamicDialogueSwitchLocation : UINT8 {
	NONE = 0,
	Dam = 1,
	Forrest = 2,
	Spacecity = 3,
	Others = 4,
	MAX = 5
};

// Enum DFMGameplay.ECharacterSpeakDynamicDialogueSwitchTeammate
enum class ECharacterSpeakDynamicDialogueSwitchTeammate : UINT8 {
	NONE = 0,
	No = 1,
	Yes = 2,
	MAX = 3
};

// Enum DFMGameplay.ECharacterSpeakDynamicDialogueSwitchPlayer_Health
enum class ECharacterSpeakDynamicDialogueSwitchPlayer_Health : UINT8 {
	NONE = 0,
	Healthy = 1,
	Injured = 2,
	MAX = 3
};

// Enum DFMGameplay.ECharacterSpeakDynamicDialogueSwitchAI_Health
enum class ECharacterSpeakDynamicDialogueSwitchAI_Health : UINT8 {
	NONE = 0,
	Healthy = 1,
	Unhealthy = 2,
	MAX = 3
};

// Enum DFMGameplay.ECharacterSpeakDynamicDialogueSwitchaAction
enum class ECharacterSpeakDynamicDialogueSwitchaAction : UINT8 {
	NONE = 0,
	AirHit = 1,
	Confront = 2,
	Enemylost = 3,
	HearL = 4,
	HearM = 5,
	HearS = 6,
	Hide = 7,
	Hit = 8,
	Hold = 9,
	Kill = 10,
	Return = 11,
	Rush = 12,
	Search = 13,
	Start = 14,
	MAX = 15
};

// Enum DFMGameplay.ECharacterSpeakDynamicDialogueSwitchStatus
enum class ECharacterSpeakDynamicDialogueSwitchStatus : UINT8 {
	NONE = 0,
	Alert = 1,
	Combat = 2,
	Relax = 3,
	MAX = 4
};

// Enum DFMGameplay.ETieDoorState
enum class ETieDoorState : UINT8 {
	E_Close = 0,
	E_Opening = 1,
	E_Opened = 2,
	E_MAX = 3
};

// Enum DFMGameplay.ETieBreakerState
enum class ETieBreakerState : UINT8 {
	E_Dormancy = 0,
	E_ActiveWaiting = 1,
	E_Active = 2,
	E_Impaired = 3,
	E_Destory = 4,
	E_MAX = 5
};

// Enum DFMGameplay.EDFMWaterInteractionType
enum class EDFMWaterInteractionType : UINT8 {
	None = 0,
	Vehicle = 1,
	Character = 2,
	EDFMWaterInteractionType_MAX = 3
};

// Enum DFMGameplay.EPendingReloadType
enum class EPendingReloadType : UINT8 {
	Clear = 0,
	Stack = 1,
	Undefined = 2,
	EPendingReloadType_MAX = 3
};

// Enum DFMGameplay.EDFMWeaponMeshType
enum class EDFMWeaponMeshType : UINT8 {
	Bar = 0,
	Bip = 1,
	Bullet = 2,
	Dev = 3,
	Eyec = 4,
	FroG = 5,
	FroS = 6,
	GripTape = 7,
	Han = 8,
	Handle = 9,
	Mag = 10,
	Mou = 11,
	Muz = 12,
	PisG = 13,
	ReaS = 14,
	Rec = 15,
	Sco = 16,
	Spe = 17,
	Sto = 18,
	StockP = 19,
	Tri = 20,
	Unknown = 21,
	EDFMWeaponMeshType_MAX = 22
};

// Enum DFMGameplay.EAIDramaDebugLineType
enum class EAIDramaDebugLineType : UINT8 {
	EDefaultLine = 0,
	ETriggerLine = 1,
	EAIDramaDebugLineType_MAX = 2
};

// Enum DFMGameplay.EAIDramaState
enum class EAIDramaState : UINT8 {
	ENone = 0,
	EActing = 1,
	EAIDramaState_MAX = 2
};

// Enum DFMGameplay.EAIDramaPriority
enum class EAIDramaPriority : UINT8 {
	EAIDramaAboveFight = 0,
	EAIDramaAboveAlert = 1,
	EAIDramaAboveLeisure = 2,
	EAIDramaAboveAll = 3,
	EAIDramaMax = 4,
	EAIDramaPriority_MAX = 5
};

// Enum DFMGameplay.EDramaAct
enum class EDramaAct : UINT8 {
	EDA_TALK = 0,
	EDA_WAIT = 1,
	EDA_MTG = 2,
	EDA_CUSTOM = 3,
	EDA_MAX = 4
};

// Enum DFMGameplay.EDramaRole
enum class EDramaRole : UINT8 {
	EDR_ACTOR_2 = 0,
	EDR_ACTOR_3 = 1,
	EDR_ACTOR_4 = 2,
	EDR_ACTOR_5 = 3,
	EDR_ACTOR_6 = 4,
	EDR_ACTOR_7 = 5,
	EDR_ACTOR_8 = 6,
	EDR_ACTOR_MAX = 7
};

// Enum DFMGameplay.EInAllDirection
enum class EInAllDirection : UINT8 {
	Front = 0,
	Back = 1,
	Left = 2,
	Right = 3,
	LF = 4,
	RF = 5,
	LB = 6,
	RB = 7,
	EInAllDirection_MAX = 8
};

// Enum DFMGameplay.EAITestDistanceType
enum class EAITestDistanceType : UINT8 {
	ECheckDistType_3D = 0,
	ECheckDistType_2D = 1,
	ECheckDistType_Z = 2,
	ECheckDistType_AbsoluteZ = 3,
	ECheckDistType_MAX = 4
};

// Enum DFMGameplay.EEnvTestPathfindingStraightBatch
enum class EEnvTestPathfindingStraightBatch : UINT8 {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfindingStraightBatch_MAX = 3
};

// Enum DFMGameplay.EEscortBossState
enum class EEscortBossState : UINT8 {
	None = 0,
	BossAppear = 1,
	Manning = 2,
	Escort2Door = 3,
	Escort2Helicopter = 4,
	BossDownCarryBossOpenDoor = 5,
	CarryBoss2HelicopterPutDownBoss = 6,
	EEscortBossState_MAX = 7
};

// Enum DFMGameplay.EExitCloseType
enum class EExitCloseType : UINT8 {
	None = 0,
	LimitedTime = 1,
	AfterCountDown = 2,
	AfterEscapeCount = 3,
	EExitCloseType_MAX = 4
};

// Enum DFMGameplay.EExitConditionType
enum class EExitConditionType : UINT8 {
	Unconditional = 0,
	Payment = 1,
	PayItem = 2,
	EquipmentLimit = 3,
	RoleLoadLimit = 4,
	ItemLimit = 5,
	EExitConditionType_MAX = 6
};

// Enum DFMGameplay.EExitConditionEquipmentState
enum class EExitConditionEquipmentState : UINT8 {
	None = 0,
	Exist = 1,
	Empty = 2,
	EExitConditionEquipmentState_MAX = 3
};

// Enum DFMGameplay.EExitConditionEquipmentType
enum class EExitConditionEquipmentType : UINT8 {
	None = 0,
	Helmet = 1,
	BreastPlate = 2,
	ChestHanging = 3,
	Bag = 4,
	EExitConditionEquipmentType_MAX = 5
};

// Enum DFMGameplay.EExitMethodType
enum class EExitMethodType : UINT8 {
	Solo = 0,
	Together = 1,
	EExitMethodType_MAX = 2
};

// Enum DFMGameplay.EExitOpenType
enum class EExitOpenType : UINT8 {
	Normal = 0,
	Random = 1,
	Delay = 2,
	Switch = 3,
	Event = 4,
	Payment = 5,
	Item = 6,
	EExitOpenType_MAX = 7
};

// Enum DFMGameplay.EExitUIStateType
enum class EExitUIStateType : UINT8 {
	Normal = 0,
	Pay = 1,
	Limit = 2,
	Special = 3,
	Event = 4,
	EExitUIStateType_MAX = 5
};

// Enum DFMGameplay.EPeekType
enum class EPeekType : UINT8 {
	Up = 0,
	Left = 1,
	Right = 2,
	EPeekType_MAX = 3
};

// Enum DFMGameplay.EFormationSyncType
enum class EFormationSyncType : UINT8 {
	FollowSlot = 0,
	SyncPathFollowProgress = 1,
	EFormationSyncType_MAX = 2
};

// Enum DFMGameplay.EGeneralSignificanceType
enum class EGeneralSignificanceType : UINT8 {
	None = 0,
	Weapon = 1,
	SmallProp = 2,
	BigProp = 3,
	ImportantProp = 4,
	Max = 5
};

// Enum DFMGameplay.EJoggleCameraType
enum class EJoggleCameraType : UINT8 {
	EJoggleCameraType_Default = 0,
	EJoggleCameraType_CharacterPain = 1,
	EJoggleCameraType_MAX = 2
};

// Enum DFMGameplay.EGPEffectStaus
enum class EGPEffectStaus : UINT8 {
	None = 0,
	Running = 1,
	EGPEffectStaus_MAX = 2
};

// Enum DFMGameplay.EFSMAudioEventType
enum class EFSMAudioEventType : UINT8 {
	None = 0,
	GAudio = 1,
	Foot = 2,
	LoopStart = 3,
	LoopEnd = 4,
	EFSMAudioEventType_MAX = 5
};

// Enum DFMGameplay.EGPPrefGroupName
enum class EGPPrefGroupName : UINT8 {
	Default = 0,
	PVE = 1,
	EGPPrefGroupName_MAX = 2
};

// Enum DFMGameplay.EGroupAIActions
enum class EGroupAIActions : UINT8 {
	ENone = 0,
	EScene_Patrol = 1,
	EScene_Guard = 2,
	EScene_Gather = 3,
	ECombat_Assault = 4,
	ECombat_Normal = 5,
	ECombat_Dodge = 6,
	ECombat_TacticalPos = 7,
	EGroupAI_MAX = 8,
	EGroupAIActions_MAX = 9
};

// Enum DFMGameplay.EHealthAttributeUnit
enum class EHealthAttributeUnit : UINT8 {
	Normal = 0,
	Percent = 1,
	EHealthAttributeUnit_MAX = 2
};

// Enum DFMGameplay.TriggerBuffType
enum class TriggerBuffType : UINT8 {
	Probability = 0,
	Wound = 1,
	OnBroken = 2,
	RadialDamage = 3,
	RadialDamageHead = 4,
	Dizzy = 5,
	HeadDamage = 6,
	TriggerBuffType_MAX = 7
};

// Enum DFMGameplay.EHelmetMaskType
enum class EHelmetMaskType : UINT8 {
	Type_None = 0,
	Type_Mask = 1,
	Type_NightVision = 2,
	Type_MAX = 3
};

// Enum DFMGameplay.EUpgradeTipsType
enum class EUpgradeTipsType : UINT8 {
	EGameModeLevelMP = 0,
	EGunUnlock = 1,
	EGunLevel = 2,
	EGunPartUnlock = 3,
	EMedal = 4,
	EUpgradeTipsType_MAX = 5
};

// Enum DFMGameplay.ECheckItemMeshType
enum class ECheckItemMeshType : UINT8 {
	InValid = 0,
	SkeletalMesh = 1,
	StaticMesh = 2,
	ECheckItemMeshType_MAX = 3
};

// Enum DFMGameplay.EOperateFailedType
enum class EOperateFailedType : UINT8 {
	OperateFailedBegin = 0,
	Props = 1,
	ArmdedForce = 2,
	Others = 3,
	OperateFailedMax = 4,
	EOperateFailedType_MAX = 5
};

// Enum DFMGameplay.EElevatorUsingState
enum class EElevatorUsingState : UINT8 {
	ENone = 0,
	EElevatorCanUsing = 1,
	EElevatorDoorBlock = 2,
	EElevatorRunning = 3,
	EElevatorCDing = 4,
	EElevatorUsingState_MAX = 5
};

// Enum DFMGameplay.EElevatorState
enum class EElevatorState : UINT8 {
	OnTop = 0,
	OnDown = 1,
	OnMovingUp = 2,
	OnMovingDown = 3,
	EElevatorState_MAX = 4
};

// Enum DFMGameplay.EElevatorDoorState
enum class EElevatorDoorState : UINT8 {
	OnOpened = 0,
	OnClosed = 1,
	OnOpening = 2,
	OnClosing = 3,
	EElevatorDoorState_MAX = 4
};

// Enum DFMGameplay.EElevatorSwitchState
enum class EElevatorSwitchState : UINT8 {
	OnUsing = 0,
	OnGuideInteraction = 1,
	EElevatorSwitchState_MAX = 2
};

// Enum DFMGameplay.EExitTriggerScreenType
enum class EExitTriggerScreenType : UINT8 {
	Default = 0,
	Gray = 1,
	Green = 2,
	Red = 3,
	Yellow = 4,
	EExitTriggerScreenType_MAX = 5
};

// Enum DFMGameplay.EPatrolRobotTriggerType
enum class EPatrolRobotTriggerType : UINT8 {
	None = 0,
	StopSeconds = 1,
	SwitchToGuideRoute = 2,
	OpenLockedDoor = 3,
	EPatrolRobotTriggerType_MAX = 4
};

// Enum DFMGameplay.EPatrolRobotState
enum class EPatrolRobotState : UINT8 {
	OnStop = 0,
	OnMove = 1,
	OnDamaged = 2,
	OnGuideInteraction = 3,
	EPatrolRobotState_MAX = 4
};

// Enum DFMGameplay.ERadarStationElevatorSwitchType
enum class ERadarStationElevatorSwitchType : UINT8 {
	None = 0,
	Up = 1,
	Down = 2,
	Inside = 3,
	ERadarStationElevatorSwitchType_MAX = 4
};

// Enum DFMGameplay.ERaidAmmoBoxType
enum class ERaidAmmoBoxType : UINT8 {
	None = 0,
	Rifle = 1,
	Submachine = 2,
	Shotgun = 3,
	LightMachine = 4,
	PrecisionShootingRifle = 5,
	Sniper = 6,
	Pistol = 7,
	Max = 8
};

// Enum DFMGameplay.ESingleItemContainerType
enum class ESingleItemContainerType : UINT8 {
	SIContainer_None = 0,
	SIContainer_IceBox = 1,
	SIContainer_WeaponBox = 2,
	SIContainer_Cabinet = 3,
	SIContainer_Dustbin = 4,
	SIContainer_Container = 5,
	SIContainer_SafeBox = 6,
	SIContainer_AgitatingLorry = 7,
	SIContainer_PakMachine = 8,
	SIContainer_ItemHeap = 9,
	SIContainer_MAX = 10
};

// Enum DFMGameplay.ETimeBombWireLayoutType
enum class ETimeBombWireLayoutType : UINT8 {
	None = 0,
	Type1 = 1,
	Type2 = 2,
	Type3 = 3,
	Type4 = 4,
	ETimeBombWireLayoutType_MAX = 5
};

// Enum DFMGameplay.ETimeBombState
enum class ETimeBombState : UINT8 {
	None = 0,
	Activated = 1,
	Disabled = 2,
	Exploded = 3,
	ETimeBombState_MAX = 4
};

// Enum DFMGameplay.EPreciseMoveStage
enum class EPreciseMoveStage : UINT8 {
	None = 0,
	BeginPreciseMove = 1,
	OnPreciseMove = 2,
	EndPreciseMove = 3,
	EndPreciseInteract = 4,
	EPreciseMoveStage_MAX = 5
};

// Enum DFMGameplay.EInteractorOptConditionType
enum class EInteractorOptConditionType : UINT8 {
	OptCondition_None = 0,
	OptCondition_ConsumeItem = 1,
	OptCondition_MAX = 2
};

// Enum DFMGameplay.EInteractorOptSwitcherType
enum class EInteractorOptSwitcherType : UINT8 {
	InteractorOptSwitcherType_None = 0,
	InteractorOptSwitcherType_Lock = 1,
	InteractorOptSwitcherType_OpenClose = 2,
	InteractorOptSwitcherType_MAX = 3
};

// Enum DFMGameplay.EInteractorPanelLayout
enum class EInteractorPanelLayout : UINT8 {
	InteractorPanelLayout_NULL = 0,
	InteractorPanelLayout_Default = 1,
	InteractorPanelLayout_Pickup = 2,
	InteractorPanelLayout_Container = 3,
	InteractorPanelLayout_DeadBody = 4,
	InteractorPanelLayout_Door = 5,
	InteractorPanelLayout_Rescue = 6,
	InteractorPanelLayout_Vehicle = 7,
	InteractorPanelLayout_CarryBody = 8,
	InteractorPanelLayout_SingleItemContainer = 9,
	InteractorPanelLayout_PickupContainer = 10,
	InteractorPanelLayout_MAX = 11
};

// Enum DFMGameplay.EAerialWorkPlatformState
enum class EAerialWorkPlatformState : UINT8 {
	None = 0,
	Descended = 1,
	Ascended = 2,
	EAerialWorkPlatformState_MAX = 3
};

// Enum DFMGameplay.EWorkVehicleSwitchLightType
enum class EWorkVehicleSwitchLightType : UINT8 {
	Default = 0,
	Red = 1,
	Green = 2,
	Yellow = 3,
	EWorkVehicleSwitchLightType_MAX = 4
};

// Enum DFMGameplay.EWorkVehicleSwitchStatus
enum class EWorkVehicleSwitchStatus : UINT8 {
	On = 0,
	Blinking = 1,
	Off = 2,
	Max = 3
};

// Enum DFMGameplay.EInteractorOptExecuteState
enum class EInteractorOptExecuteState : UINT8 {
	ES_None = 0,
	ES_Executing = 1,
	ES_Finished = 2,
	ES_MAX = 3
};

// Enum DFMGameplay.EUnequipAmmoResultNotifyCode
enum class EUnequipAmmoResultNotifyCode : UINT8 {
	BulletUnequipFailed = 0,
	BulletUnequipToBag = 1,
	BulletUnequipToLootingObj = 2,
	BulletUnequipToGround = 3,
	BulletUnequipToBagAndGround = 4,
	BulletUnequipToBulletSlotAndBag = 5,
	BulletUnequipToBulletSlotAndGround = 6,
	BulletUnequipToBulletSlot = 7,
	EUnequipAmmoResultNotifyCode_MAX = 8
};

// Enum DFMGameplay.EUseItemInputSource
enum class EUseItemInputSource : UINT8 {
	None = 0,
	Health = 1,
	Bag = 2,
	Shortcut = 3,
	Rouletee = 4,
	EUseItemInputSource_MAX = 5
};

// Enum DFMGameplay.ECancelUseItemReason
enum class ECancelUseItemReason : UINT8 {
	None = 0,
	Fire = 1,
	Aim = 2,
	SwitchWeapon = 3,
	BothTry = 4,
	ProneMove = 5,
	ProneToOtherPose = 6,
	TipHud = 7,
	MatchEnd = 8,
	Looting = 9,
	BackgroudCancel = 10,
	FinshPeriodUse = 11,
	SprintButton = 12,
	BeingCrocodileBite = 13,
	FaildToUse = 14,
	SkillHit = 15,
	ECancelUseItemReason_MAX = 16
};

// Enum DFMGameplay.EQuickUseItemReason
enum class EQuickUseItemReason : UINT8 {
	Succeed = 0,
	NotEnoughDurability = 1,
	NoNeedToHeal = 2,
	DontHaveItem = 3,
	DontHaveNeededItem = 4,
	CantUseItem = 5,
	ItemCantUse = 6,
	NoReason = 7,
	ItemIsBeingUsed = 8,
	Burden = 9,
	UnknownReason = 10,
	EQuickUseItemReason_MAX = 11
};

// Enum DFMGameplay.EAmmoBoxCantUseReason
enum class EAmmoBoxCantUseReason : UINT8 {
	None = 0,
	EAmmoBoxCantUseReason_MAX = 1
};

// Enum DFMGameplay.EAmmoBoxCharacterLimit
enum class EAmmoBoxCharacterLimit : UINT8 {
	None = 0,
	Team = 1,
	EAmmoBoxCharacterLimit_MAX = 2
};

// Enum DFMGameplay.EAmmoBoxAddAmmoType
enum class EAmmoBoxAddAmmoType : UINT8 {
	AllGunFull = 0,
	CurrentGun = 1,
	EAmmoBoxAddAmmoType_MAX = 2
};

// Enum DFMGameplay.EAddItemMode
enum class EAddItemMode : UINT8 {
	Default = 0,
	ResortBeforeAdd = 1,
	ResortIfAddFailed = 2,
	CombineFirst = 3,
	EAddItemMode_MAX = 4
};

// Enum DFMGameplay.EItemSpaceType
enum class EItemSpaceType : UINT8 {
	None = 0,
	EItemSpaceType_MAX = 1
};

// Enum DFMGameplay.EKuroshioShellDropMethod
enum class EKuroshioShellDropMethod : UINT8 {
	RANDOM = 0,
	ORDER = 1,
	EKuroshioShellDropMethod_MAX = 2
};

// Enum DFMGameplay.EPriceSourceMode
enum class EPriceSourceMode : UINT8 {
	AllSource = 0,
	OnlySelfSource = 1,
	ExcludeSelfSource = 2,
	ExcludeTeammateSource = 3,
	ExcludeSelfAndTeammateSource = 4,
	EPriceSourceMode_MAX = 5
};

// Enum DFMGameplay.EMapClickMode
enum class EMapClickMode : UINT8 {
	Normal = 0,
	Detector = 1,
	EMapClickMode_MAX = 2
};

// Enum DFMGameplay.EMapRegionHelperType
enum class EMapRegionHelperType : UINT8 {
	RegionCenter = 0,
	GamePlayRegion = 1,
	EMapRegionHelperType_MAX = 2
};

// Enum DFMGameplay.EMatchSubType
enum class EMatchSubType : UINT8 {
	SubType_None = 0,
	SubType_SOL = 1,
	SubType_PVE = 2,
	SubType_MAX = 3
};

// Enum DFMGameplay.EMatchType
enum class EMatchType : UINT8 {
	MatchType_Normal = 0,
	MatchType_Ladder = 1,
	MatchType_Room = 2,
	MatchType_OpenWorld = 3,
	MatchType_Guide = 4,
	MatchType_MAX = 5
};

// Enum DFMGameplay.ETeamType
enum class ETeamType : UINT8 {
	TeamType_Single = 0,
	TeamType_Double = 1,
	TeamType_Three = 2,
	TeamType_Four = 3,
	TeamType_Five = 4,
	TeamType_MAX = 5
};

// Enum DFMGameplay.EMatchSOLOMode
enum class EMatchSOLOMode : UINT8 {
	MatchSOLOMode_None = 0,
	MatchSOLOMode_PMC = 1,
	MatchSOLOMode_SCAV = 2,
	MatchSOLOMode_MAX = 3
};

// Enum DFMGameplay.EModeType
enum class EModeType : UINT8 {
	ModeType_TKV = 0,
	ModeType_MAX = 1
};

// Enum DFMGameplay.ERedeployStaticPointType
enum class ERedeployStaticPointType : UINT8 {
	AmmoBox = 0,
	Weapon = 1,
	ERedeployStaticPointType_MAX = 2
};

// Enum DFMGameplay.EMotionActionFrameType
enum class EMotionActionFrameType : UINT8 {
	AnimFrame = 0,
	TickActionFrame = 1,
	RequestSeparatorFrame = 2,
	EMotionActionFrameType_MAX = 3
};

// Enum DFMGameplay.EMotionActionMsgType
enum class EMotionActionMsgType : UINT8 {
	None = 0,
	NewActionFrames = 1,
	NewTickActionFrame = 2,
	RequestSeparatorFrame = 3,
	EMotionActionMsgType_MAX = 4
};

// Enum DFMGameplay.EPlasmolysisType
enum class EPlasmolysisType : UINT8 {
	MeshCompNull = 0,
	MeshNull = 1,
	Plasmolysis_MeshComp = 2,
	Plasmolysis_Mesh = 3,
	ChangeParentMeshComp = 4,
	Burden = 5,
	EPlasmolysisType_MAX = 6
};

// Enum DFMGameplay.EMotionSegmentType
enum class EMotionSegmentType : UINT8 {
	Normal = 0,
	FilterByTags = 1,
	TraversalAction = 2,
	EMotionSegmentType_MAX = 3
};

// Enum DFMGameplay.EGuardAnimType
enum class EGuardAnimType : UINT8 {
	RandomPlay = 0,
	OrderPlay = 1,
	End = 2,
	EGuardAnimType_MAX = 3
};

// Enum DFMGameplay.EGroupPatrolPose
enum class EGroupPatrolPose : UINT8 {
	WALK = 0,
	STAND = 1,
	SPRINT = 2,
	EGroupPatrolPose_MAX = 3
};

// Enum DFMGameplay.EGuardType
enum class EGuardType : UINT8 {
	Order = 0,
	ToAndFrom = 1,
	Random = 2,
	End = 3,
	EGuardType_MAX = 4
};

// Enum DFMGameplay.EPatrolType
enum class EPatrolType : UINT8 {
	OneWay = 0,
	ToAndFrom = 1,
	Loop = 2,
	End = 3,
	EPatrolType_MAX = 4
};

// Enum DFMGameplay.ESectionType
enum class ESectionType : UINT8 {
	Order = 0,
	ToAndFrom = 1,
	ESectionType_MAX = 2
};

// Enum DFMGameplay.ENavLinkType
enum class ENavLinkType : UINT8 {
	None = 0,
	Jump = 1,
	Vault = 2,
	JumpAndVault = 3,
	Zipline = 4,
	ClimbLadder = 5,
	JumpAndZipline = 6,
	ZiplineAndGetOff = 7,
	JumpAndParachute = 8,
	_Invalid = 9,
	ENavLinkType_MAX = 10
};

// Enum DFMGameplay.ENarrowLanePatchMarkType
enum class ENarrowLanePatchMarkType : UINT8 {
	Expand = 0,
	ForceMark = 1,
	ENarrowLanePatchMarkType_MAX = 2
};

// Enum DFMGameplay.EOBPlayerStatusType
enum class EOBPlayerStatusType : UINT8 {
	Alive = 0,
	FirstDeath = 1,
	KnockedDown = 2,
	Died = 3,
	Escaped = 4,
	UnValid = 5,
	EOBPlayerStatusType_MAX = 6
};

// Enum DFMGameplay.EScreenPercentageStage
enum class EScreenPercentageStage : UINT8 {
	Low = 0,
	Mid = 1,
	High = 2,
	EScreenPercentageStage_MAX = 3
};

// Enum DFMGameplay.EPickupApproachType
enum class EPickupApproachType : UINT8 {
	EPickupApproachType_Default = 0,
	EPickupApproachType_QuickPickup = 1,
	EPickupApproachType_Bag = 2,
	EPickupApproachType_AutoPickup = 3,
	EPickupApproachType_MAX = 4
};

// Enum DFMGameplay.EExitCutSceneType
enum class EExitCutSceneType : UINT8 {
	NonGeneric = 0,
	InDoor = 1,
	OutDoor = 2,
	MediaVideo = 3,
	EExitCutSceneType_MAX = 4
};

// Enum DFMGameplay.EExitState
enum class EExitState : UINT8 {
	Normal = 0,
	WaitingToEscape = 1,
	Escaped = 2,
	ReadyToStartEscape = 3,
	InEscaping = 4,
	EExitState_MAX = 5
};

// Enum DFMGameplay.EPvpWeaponAntiVehicleActionType
enum class EPvpWeaponAntiVehicleActionType : UINT8 {
	Common = 0,
	StingerMissile = 1,
	CommonAndStingerMissile = 2,
	EPvpWeaponAntiVehicleActionType_MAX = 3
};

// Enum DFMGameplay.ESOLRadarStationElevatorSwitchType
enum class ESOLRadarStationElevatorSwitchType : UINT8 {
	None = 0,
	Up = 1,
	Down = 2,
	Inside = 3,
	ESOLRadarStationElevatorSwitchType_MAX = 4
};

// Enum DFMGameplay.ERagdollTestResult
enum class ERagdollTestResult : UINT8 {
	Default = 0,
	Error = 1,
	Failed = 2,
	Succeeded = 3,
	ERagdollTestResult_MAX = 4
};

// Enum DFMGameplay.EIrisDataType
enum class EIrisDataType : UINT8 {
	None = 0,
	Damage = 1,
	DAMAGE_TANK = 2,
	DAMAGE_GRENADE = 3,
	DAMAGE_VEHICLE = 4,
	DAMAGE_AI = 5,
	DAMAGE_TRAIN = 6,
	EIrisDataType_MAX = 7
};

// Enum DFMGameplay.EReplicateVariableType
enum class EReplicateVariableType : UINT8 {
	ERVT_Int = 0,
	ERVT_Float = 1,
	ERVT_Bool = 2,
	ERVT_Enum = 3,
	ERVT_Name = 4,
	ERVT_Object = 5,
	ERVT_MAX = 6
};

// Enum DFMGameplay.ERoleLoadType
enum class ERoleLoadType : UINT8 {
	Normal = 0,
	OverLoad = 1,
	SuperOverLoad = 2,
	ERoleLoadType_MAX = 3
};

// Enum DFMGameplay.ETurnAnimType
enum class ETurnAnimType : UINT8 {
	TurnAnimType_Alert = 0,
	TurnAnimType_Leisurely = 1,
	TurnAnimType_Leisure2Fight = 2,
	TrunAnimType_Stand2Alert = 3,
	TrunAnimType_Stand2Alert_Hit = 4,
	TurnAnimType_Stand2Alert_Hear = 5,
	TurnAnimType_Alert2Fight = 6,
	TurnAnimType_Alert2Fight_Hit = 7,
	TurnAnimType_Fight = 8,
	TurnAnimType_SprintTurn = 9,
	ETurnAnimType_MAX = 10
};

// Enum DFMGameplay.EMotionCorrectionTargetKey
enum class EMotionCorrectionTargetKey : UINT8 {
	None = 0,
	FirstTarget = 1,
	SecondTarget = 2,
	ThirdTarget = 3,
	MaxTargetSeq = 4,
	PreTarget = 5,
	RealTarget = 6,
	PostTarget = 7,
	FinalTarget = 8,
	EMotionCorrectionTargetKey_MAX = 9
};

// Enum DFMGameplay.ESafeHouseHUDMode
enum class ESafeHouseHUDMode : UINT8 {
	None = 0,
	SafeHouse3D = 1,
	Range = 2,
	ESafeHouseHUDMode_MAX = 3
};

// Enum DFMGameplay.ECurrencyChangeReason
enum class ECurrencyChangeReason : UINT8 {
	Quest = 0,
	RobberFromEnemy = 1,
	GetFromTeammate = 2,
	ConsumeFromShopStation = 3,
	ConsumeFromExitPoint = 4,
	GMAdd = 5,
	DontRecord = 6,
	ECurrencyChangeReason_MAX = 7
};

// Enum DFMGameplay.ESOLEvacuationEventState
enum class ESOLEvacuationEventState : UINT8 {
	None = 0,
	Start = 1,
	Waiting = 2,
	Ready = 3,
	Finish = 4,
	Extra = 5,
	ESOLEvacuationEventState_MAX = 6
};

// Enum DFMGameplay.ESOLEventMapIconType
enum class ESOLEventMapIconType : UINT8 {
	ShellingArea = 0,
	ESOLEventMapIconType_MAX = 1
};

// Enum DFMGameplay.ESOLMapName
enum class ESOLMapName : UINT8 {
	Forrest = 0,
	SpaceCenter = 1,
	Dam_Iris = 2,
	MAX = 3
};

// Enum DFMGameplay.EContractReportType
enum class EContractReportType : UINT8 {
	ENone = 0,
	ESuccess = 1,
	EFailure = 2,
	ECanceled = 3,
	EAccept = 4,
	EDeliver = 5,
	EContractReportType_MAX = 6
};

// Enum DFMGameplay.EVoteStatus
enum class EVoteStatus : UINT8 {
	ENone = 0,
	EVoted = 1,
	ECanceled = 2,
	EVoteStatus_MAX = 3
};

// Enum DFMGameplay.ESOLQuestState
enum class ESOLQuestState : UINT8 {
	ESOLQuestState_Locked = 0,
	ESOLQuestState_Unread = 1,
	ESOLQuestState_Unaccepted = 2,
	ESOLQuestState_Accepted = 3,
	ESOLQuestState_Failed = 4,
	ESOLQuestState_Paused = 5,
	ESOLQuestState_Completed = 6,
	ESOLQuestState_Rewarded = 7,
	ESOLQuestState_MAX = 8
};

// Enum DFMGameplay.ESOLQuestObjectionState
enum class ESOLQuestObjectionState : UINT8 {
	InActive = 0,
	Active = 1,
	Complete = 2,
	Failed = 3,
	InitialComplete = 4,
	InActive_Condition = 5,
	ESOLQuestObjectionState_MAX = 6
};

// Enum DFMGameplay.ERocketSmokeType
enum class ERocketSmokeType : UINT8 {
	ET_Landing = 0,
	ET_Launch = 1,
	ET_MAX = 2
};

// Enum DFMGameplay.EAtmosphericEventState
enum class EAtmosphericEventState : UINT8 {
	Stop = 0,
	Playing = 1,
	EAtmosphericEventState_MAX = 2
};

// Enum DFMGameplay.ESOLTimeLineEventState
enum class ESOLTimeLineEventState : UINT8 {
	BeforeEvent = 0,
	DuringEvent = 1,
	AfterEvent = 2,
	ESOLTimeLineEventState_MAX = 3
};

// Enum DFMGameplay.ESOLTimeLineEventActorType
enum class ESOLTimeLineEventActorType : UINT8 {
	Standalone = 0,
	Affiliate = 1,
	ESOLTimeLineEventActorType_MAX = 2
};

// Enum DFMGameplay.ESOLTimelineMajorEventState
enum class ESOLTimelineMajorEventState : UINT8 {
	WaitBegin = 0,
	Noticed = 1,
	Begin = 2,
	End = 3,
	AllEnd = 4,
	ESOLTimelineMajorEventState_MAX = 5
};

// Enum DFMGameplay.ESOLTimelineMajorEventType
enum class ESOLTimelineMajorEventType : UINT8 {
	ET_Void = 0,
	ET_Shelling = 1,
	ET_Paratrooper = 2,
	ET_MAX = 3
};

// Enum DFMGameplay.ESOLEventConcomitantFlags
enum class ESOLEventConcomitantFlags : UINT8 {
	IntroEvent = 0,
	MajorEvent = 1,
	EvacuationEvent = 2,
	ESOLEventConcomitantFlags_MAX = 3
};

// Enum DFMGameplay.EBTType
enum class EBTType : UINT8 {
	FightBehavior = 0,
	LeaveFightBehavior = 1,
	AlertBehavior = 2,
	LeisureBehavior = 3,
	AbilityReactBehavior = 4,
	ShootBehavior = 5,
	DyingBehavior = 6,
	EBTType_MAX = 7
};

// Enum DFMGameplay.ECharacterDuty
enum class ECharacterDuty : UINT8 {
	None = 0,
	FightDuty = 1,
	OverKill = 2,
	Camper = 3,
	Screener = 4,
	AtmosphereEnlivener = 5,
	MGS = 6,
	TKV_Assult = 7,
	TKV_Normal = 8,
	TKV_Prudent = 9,
	Warm = 10,
	FIghtDutyEnd = 11,
	AlertDuty = 12,
	AlertDutyEnd = 13,
	LeitureDuty = 14,
	LeitureDutyEnd = 15,
	Max = 16
};

// Enum DFMGameplay.ECharacterDutyType
enum class ECharacterDutyType : UINT8 {
	None = 0,
	FightDuty = 1,
	AlertDuty = 2,
	LeitureDuty = 3,
	ECharacterDutyType_MAX = 4
};

// Enum DFMGameplay.ESOLPlayerMode
enum class ESOLPlayerMode : UINT8 {
	ESOLPlayerMode_PMC = 0,
	ESOLPlayerMode_SCAV = 1,
	ESOLPlayerMode_SCAVRevenge = 2,
	ESOLPlayerMode_MAX = 3
};

// Enum DFMGameplay.EStartSpotTemplateType
enum class EStartSpotTemplateType : UINT8 {
	AllocByTemplate = 0,
	AllocByMS20Policy = 1,
	AllocByDefaultPolicy = 2,
	AllocByTemplateMS23 = 3,
	EStartSpotTemplateType_MAX = 4
};

// Enum DFMGameplay.EStatisticsConditionType
enum class EStatisticsConditionType : UINT8 {
	None = 0,
	Equipment = 1,
	Weapon = 2,
	GameItem = 3,
	All = 4,
	EStatisticsConditionType_MAX = 5
};

// Enum DFMGameplay.EStatisticsConditionOperator
enum class EStatisticsConditionOperator : UINT8 {
	And = 0,
	Or = 1,
	EStatisticsConditionOperator_MAX = 2
};

// Enum DFMGameplay.EStatisticsEnemyType
enum class EStatisticsEnemyType : UINT8 {
	EStatisticsEnemyType_All = 0,
	EStatisticsEnemyType_AI = 1,
	EStatisticsEnemyType_Player = 2,
	EStatisticsEnemyType_Vehicle = 3,
	EStatisticsEnemyType_MAX = 4
};

// Enum DFMGameplay.EGPAnimNotifyType
enum class EGPAnimNotifyType : UINT8 {
	None = 0,
	GAudio = 1,
	Foot = 2,
	EGPAnimNotifyType_MAX = 3
};

// Enum DFMGameplay.EAIBodyPartOffsetLean
enum class EAIBodyPartOffsetLean : UINT8 {
	Center = 0,
	Left = 1,
	Right = 2,
	Max = 3
};

// Enum DFMGameplay.EAIBodyPartOffsetPoise
enum class EAIBodyPartOffsetPoise : UINT8 {
	None = 0,
	Stand = 1,
	Crouch = 2,
	Prone = 3,
	Max = 4
};

// Enum DFMGameplay.ERCVWayPointType
enum class ERCVWayPointType : UINT8 {
	NONE = 0,
	PATROL = 1,
	ERCVWayPointType_MAX = 2
};

// Enum DFMGameplay.EWayPointCoverDir
enum class EWayPointCoverDir : UINT8 {
	Left = 0,
	Right = 1,
	EWayPointCoverDir_MAX = 2
};

// Enum DFMGameplay.EWayPointCoverHeight
enum class EWayPointCoverHeight : UINT8 {
	StandCover = 0,
	CrouchCover = 1,
	ProneCover = 2,
	EWayPointCoverHeight_MAX = 3
};

// Enum DFMGameplay.ENameCardMaterialParamOverrideType
enum class ENameCardMaterialParamOverrideType : UINT8 {
	Texture = 0,
	Float = 1,
	Vector = 2,
	ENameCardMaterialParamOverrideType_MAX = 3
};

// Enum DFMGameplay.EOrginNamrCardReplaceType
enum class EOrginNamrCardReplaceType : UINT8 {
	None = 0,
	Texture = 1,
	Material = 2,
	EOrginNamrCardReplaceType_MAX = 3
};

// ScriptStruct DFMGameplay.GMCoverDrawInfo
// Size: 0x24 (Inherited: 0x00)
struct FGMCoverDrawInfo {
public:

	struct FVector Location; // 0x00(0x0c)
	bool bCanPeekLeft; // 0x0c(0x01)
	bool bCanPeekRight; // 0x0d(0x01)
	bool bIsHigh; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct FVector Direction; // 0x10(0x0c)
	bool bIsChosen; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float CoverHeight; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakableTriggerPairInfo
// Size: 0x20 (Inherited: 0x00)
struct FBreakableTriggerPairInfo {
public:

	struct FName CollisionComponentName; // 0x00(0x08)
	struct FName DestructibleComponentName; // 0x08(0x08)
	struct FName HealthComponentName; // 0x10(0x08)
	struct FName NavAreaComponentName; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakableDamageFilterInfo
// Size: 0x28 (Inherited: 0x00)
struct FBreakableDamageFilterInfo {
public:

	struct FName CollisionComponentName; // 0x00(0x08)
	enum class EDamageSystemDamageType DamageType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UClass* DamageMakerActorClass; // 0x10(0x08)
	struct TArray<struct FName> TriggerHealthArray; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakableCollisionFilterInfo
// Size: 0x28 (Inherited: 0x00)
struct FBreakableCollisionFilterInfo {
public:

	struct FName CollisionComponentName; // 0x00(0x08)
	struct FName CollisionActorTag; // 0x08(0x08)
	struct UClass* CollisionActorClass; // 0x10(0x08)
	struct TArray<struct FName> TriggerHealthArray; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractorGlowParameters
// Size: 0x10 (Inherited: 0x00)
struct FInteractorGlowParameters {
public:

	float HlightLightSpace; // 0x00(0x04)
	float Speed; // 0x04(0x04)
	float Tilling; // 0x08(0x04)
	int32_t MainBodyMaterialIndex; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InventoryOwnInfo
// Size: 0x10 (Inherited: 0x00)
struct FInventoryOwnInfo {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	float StartTime; // 0x08(0x04)
	float OwnDuration; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PickupAttachActorInfo
// Size: 0x28 (Inherited: 0x00)
struct FPickupAttachActorInfo {
public:

	struct AActor* AttachActor; // 0x00(0x08)
	struct USceneComponent* AttachComponent; // 0x08(0x08)
	struct FName AttachSocketName; // 0x10(0x08)
	struct FVector RelativeLocation; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ItemArray
// Size: 0x120 (Inherited: 0x108)
struct FItemArray : public FFastArraySerializer {
public:

	struct TArray<struct FInventoryItemInfo> Items; // 0x108(0x10)
	char pad_118[0x8]; // 0x118(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ItemSpaceRepData
// Size: 0x20 (Inherited: 0x00)
struct FItemSpaceRepData {
public:

	enum class EAttachPosition SpaceType; // 0x00(0x04)
	int32_t ServerUpdateCount; // 0x04(0x04)
	struct TArray<struct FGridSize> SpaceGrids; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GridSize
// Size: 0x60 (Inherited: 0x00)
struct FGridSize {
public:

	int32_t ID; // 0x00(0x04)
	int32_t StartX; // 0x04(0x04)
	int32_t StartY; // 0x08(0x04)
	int32_t Length; // 0x0c(0x04)
	int32_t Height; // 0x10(0x04)
	int8_t LogicHalfUnitX; // 0x14(0x01)
	int8_t LogicHalfUnitY; // 0x15(0x01)
	char pad_16[0x4a]; // 0x16(0x4a)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RescueCascadeParamInfo
// Size: 0x18 (Inherited: 0x00)
struct FRescueCascadeParamInfo {
public:

	float DetectShowWhiteDotMinRadius; // 0x00(0x04)
	float DetectShowWhiteDotMaxRadius; // 0x04(0x04)
	float DetectShowHUDMinRadius; // 0x08(0x04)
	float DetectShowHUDMaxRadius; // 0x0c(0x04)
	float DetectShowHUDHorizontalAngle; // 0x10(0x04)
	float DetectShowHUDVerticalAngle; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DeadBodyBoxInfo
// Size: 0x38 (Inherited: 0x00)
struct FDeadBodyBoxInfo {
public:

	char DeadBodyBoxStatus; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AGPCharacterBase* DeadBodyCharacterOwner; // 0x08(0x08)
	int64_t CharacterUin; // 0x10(0x08)
	enum class EDeadBodySkeletalMeshType DeadBodySkeletalMeshType; // 0x18(0x01)
	bool bShowShadow; // 0x19(0x01)
	bool bPlayDeadTransparent; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	int64_t CarryBoxCharacterUin; // 0x20(0x08)
	struct FString DebugText; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIMsgExtendInfo
// Size: 0x0c (Inherited: 0x00)
struct FAIMsgExtendInfo {
public:

	float AlertMsgLastTime; // 0x00(0x04)
	float FightMsgLastTime; // 0x04(0x04)
	bool bIsSniper; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMMapSignInfo
// Size: 0x38 (Inherited: 0x00)
struct FDFMMapSignInfo {
public:

	struct FVector Location; // 0x00(0x0c)
	bool bEnable; // 0x0c(0x01)
	enum class EMapSignType MarkType; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FName SignedItemName; // 0x10(0x08)
	struct AGPPlayerState* OwnerPlayerState; // 0x18(0x08)
	struct AActor* SignedActor; // 0x20(0x08)
	int32_t ServerTimeStamp; // 0x28(0x04)
	int32_t SignedCont; // 0x2c(0x04)
	int32_t ClearSignedCont; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.EnemyLocationInfo
// Size: 0x30 (Inherited: 0x00)
struct FEnemyLocationInfo {
public:

	struct TArray<struct FPlayerLocation> EnemyLocationArr; // 0x00(0x10)
	struct FVector DetectorLoc; // 0x10(0x0c)
	int32_t DetectType; // 0x1c(0x04)
	float MarkDuration; // 0x20(0x04)
	float RealWorldRange; // 0x24(0x04)
	bool bSpottedNotFire; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DetectorLocationInfo
// Size: 0x30 (Inherited: 0x00)
struct FDetectorLocationInfo {
public:

	struct FVector DetectorLoc; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	uint64_t DetectorUin; // 0x10(0x08)
	int32_t TeamOrCampID; // 0x18(0x04)
	int32_t DetectType; // 0x1c(0x04)
	float Duration; // 0x20(0x04)
	float RealWorldRange; // 0x24(0x04)
	bool bNeedLeap; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float LeapTime; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ArmorInfo
// Size: 0x60 (Inherited: 0x00)
struct FArmorInfo {
public:

	enum class EEquipmentType EquipmentType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t ItemID; // 0x08(0x08)
	uint64_t gid; // 0x10(0x08)
	float ArmorHP; // 0x18(0x04)
	float MaxArmorHP; // 0x1c(0x04)
	struct FName ProtecetName; // 0x20(0x08)
	float Durability; // 0x28(0x04)
	float MaxDurability; // 0x2c(0x04)
	float SrcMaxDurability; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	int64_t LastEquipTimeStamp; // 0x38(0x08)
	float TotalEquipSeconds; // 0x40(0x04)
	float TotalDamage; // 0x44(0x04)
	int32_t ArmorLevel; // 0x48(0x04)
	float DamagesReduction; // 0x4c(0x04)
	float Ricochet; // 0x50(0x04)
	float RicochetDamage; // 0x54(0x04)
	bool bDamageFunctionOnly; // 0x58(0x01)
	bool bEnableDamageFunction; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RangeTargetInfo
// Size: 0x1c (Inherited: 0x00)
struct FRangeTargetInfo {
public:

	int32_t TargetHP; // 0x00(0x04)
	int32_t ArmorHP; // 0x04(0x04)
	int32_t ArmorLevelForArmor; // 0x08(0x04)
	int32_t ArmorLevelForHelmet; // 0x0c(0x04)
	float Distance; // 0x10(0x04)
	float HeadDamagesReduction; // 0x14(0x04)
	enum class EAISpeed AISpeedState; // 0x18(0x01)
	enum class EAIDirection AIDirection; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RepItemInfoForSpectating
// Size: 0x20 (Inherited: 0x00)
struct FRepItemInfoForSpectating {
public:

	uint64_t ItemGid; // 0x00(0x08)
	uint64_t ItemID; // 0x08(0x08)
	float Durability; // 0x10(0x04)
	float MaxDurability; // 0x14(0x04)
	float ModifyTimeStamp; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ItemMoveCmd
// Size: 0x120 (Inherited: 0x00)
struct FItemMoveCmd {
public:

	uint64_t CmdGid; // 0x00(0x08)
	uint64_t SourceGid; // 0x08(0x08)
	struct TArray<uint64_t> TargetGids; // 0x10(0x10)
	enum class EAttachPosition SourcePos; // 0x20(0x04)
	enum class EAttachPosition TargetPos; // 0x24(0x04)
	int32_t TargetX; // 0x28(0x04)
	int32_t TargetY; // 0x2c(0x04)
	bool bRotated; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t MoveNum; // 0x34(0x04)
	int32_t TargetIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UObject* SourceLootObj; // 0x40(0x08)
	struct TArray<struct UObject*> TargetLootObjs; // 0x48(0x10)
	bool bAllowContainerReplaceFailBackup; // 0x58(0x01)
	bool bDropItemsFromContainer; // 0x59(0x01)
	bool bForceReplaceShell; // 0x5a(0x01)
	char pad_5B[0x1d]; // 0x5b(0x1d)
	uint64_t SourceWeaponGid; // 0x78(0x08)
	uint64_t TargetWeaponGid; // 0x80(0x08)
	struct FVector OriginPos1P; // 0x88(0x0c)
	struct FVector OriginForward1P; // 0x94(0x0c)
	bool bHitInteractor1P; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct ADFMCharacter* CmdOwner; // 0xa8(0x08)
	char pad_B0[0x38]; // 0xb0(0x38)
	struct UItemSpace* SourceSpace; // 0xe8(0x08)
	struct UItemSpace* TargetSpace; // 0xf0(0x08)
	struct TArray<struct UItemSpace*> SpacesToSync; // 0xf8(0x10)
	char pad_108[0x11]; // 0x108(0x11)
	bool bUseErrorLog; // 0x119(0x01)
	char pad_11A[0x6]; // 0x11a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ScoreTipsData
// Size: 0x1a0 (Inherited: 0x00)
struct FScoreTipsData {
public:

	enum class EScoreName ScoreCategory; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ScoreNameExt; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FKillInfo KillInfo; // 0x10(0x148)
	struct TWeakObjectPtr<struct ADFMPlayerController> Controller; // 0x158(0x08)
	struct TWeakObjectPtr<struct ADFMCharacter> CHARACTER; // 0x160(0x08)
	struct TWeakObjectPtr<struct ADFMCharacter> TargetCharacter; // 0x168(0x08)
	float ScoreMultiplier; // 0x170(0x04)
	float Distance; // 0x174(0x04)
	int32_t IntValue0; // 0x178(0x04)
	int32_t IntValue1; // 0x17c(0x04)
	int32_t IntValue2; // 0x180(0x04)
	float FloatValue0; // 0x184(0x04)
	float FloatValue1; // 0x188(0x04)
	float FloatValue2; // 0x18c(0x04)
	bool BoolValue0; // 0x190(0x01)
	char pad_191[0x7]; // 0x191(0x07)
	struct AActor* RelativeActor; // 0x198(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SettlementViewModel
// Size: 0x90 (Inherited: 0x00)
struct FSettlementViewModel {
public:

	enum class EMatchOverReason MatchOverReason; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t TotalPrice; // 0x04(0x04)
	int32_t TimeUsedSec; // 0x08(0x04)
	uint32_t KilledBoss; // 0x0c(0x04)
	uint32_t KilledPlayer; // 0x10(0x04)
	uint32_t KilledNPC; // 0x14(0x04)
	uint64_t PlayerId; // 0x18(0x08)
	struct TArray<struct FAchievementInfo> AchievementArr; // 0x20(0x10)
	/*struct TSet<enum class EAchievementType>*/char AchievementTypeSet[0x50]; // 0x30(0x50)
	struct FString ExitName; // 0x80(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AchievementInfo
// Size: 0x30 (Inherited: 0x00)
struct FAchievementInfo {
public:

	struct FString AchievementName; // 0x00(0x10)
	struct FString AchievementDesc; // 0x10(0x10)
	int32_t AchievementLevelCondition; // 0x20(0x04)
	int32_t AchievementProgress; // 0x24(0x04)
	int32_t AchievementId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEventActiveInfo
// Size: 0x28 (Inherited: 0x00)
struct FSOLEventActiveInfo {
public:

	enum class ESOLEventType EventType; // 0x00(0x01)
	bool bIsActive; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector EventDSLocation; // 0x04(0x0c)
	struct FText EventDescription; // 0x10(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BlueprintPlunderInfo
// Size: 0xb0 (Inherited: 0x00)
struct FBlueprintPlunderInfo {
public:

	enum class EBlueprintPlunderState State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	int64_t PlayerUin; // 0x08(0x08)
	int32_t TeamId; // 0x10(0x04)
	int32_t LastTeamID; // 0x14(0x04)
	struct TArray<int32_t> LastPickupTeamIDArray; // 0x18(0x10)
	int32_t PickupCount; // 0x28(0x04)
	struct FVector WeaponLoc; // 0x2c(0x0c)
	struct FName MandelBrickStationIconName; // 0x38(0x08)
	int32_t UpdateWeaponLocTimes; // 0x40(0x04)
	float ServerTime_DecipherBegin; // 0x44(0x04)
	float ServerTime_DecipherEnd; // 0x48(0x04)
	float ServerTime_RecycleEnd; // 0x4c(0x04)
	struct TArray<int64_t> GuardPlayerUinArray; // 0x50(0x10)
	enum class EDangerLevelType DangerLevel; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct ABlueprintWeaponGenerator* Generator; // 0x68(0x08)
	struct AInteractor_DecipherDevice* BattleDecipherDevice; // 0x70(0x08)
	struct AInventoryPickup* MandelBrick; // 0x78(0x08)
	bool bPutInDeadBody; // 0x80(0x01)
	bool bPlayPickUpVO; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct ABlueprintPlunder* BlueprintPlunder; // 0x88(0x08)
	enum class EBlueprintPlunderUIState ClientUIState; // 0x90(0x01)
	bool bShouldAddMainHudView; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
	struct AActor* HoldingCharacter; // 0x98(0x08)
	struct TArray<int32_t> PickUpTeams; // 0xa0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEventBannerFlyIconInfo
// Size: 0x38 (Inherited: 0x00)
struct FSOLEventBannerFlyIconInfo {
public:

	char pad_0[0x38]; // 0x00(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEventBannerDataItem
// Size: 0x40 (Inherited: 0x00)
struct FSOLEventBannerDataItem {
public:

	struct FText Text; // 0x00(0x18)
	enum class ESOLEventBannerType BannerType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t CommonUIType; // 0x1c(0x04)
	struct FSoftObjectPath SoftObjectPath; // 0x20(0x18)
	float Duration; // 0x38(0x04)
	bool bType0In; // 0x3c(0x01)
	bool bSHowOpenBigMap; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEventProgressDataItem
// Size: 0x28 (Inherited: 0x00)
struct FSOLEventProgressDataItem {
public:

	enum class ESOLEventProgressType ProgressType; // 0x00(0x01)
	bool bShow; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FSoftObjectPath SoftObjectPath; // 0x08(0x18)
	struct AActor* BlueprintPlunderActor; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEventEstimatedTimeData
// Size: 0x18 (Inherited: 0x00)
struct FSOLEventEstimatedTimeData {
public:

	struct AActor* BlueprintPlunderActor; // 0x00(0x08)
	bool bShow; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ShowTime; // 0x0c(0x04)
	float DelayTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLCommonCountdownItem
// Size: 0x38 (Inherited: 0x00)
struct FSOLCommonCountdownItem {
public:

	bool bShow; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Text; // 0x08(0x18)
	enum class ESOLCommonCountdownType CommonCountdownType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	/*struct FDelegate*/char GetCountdownTime[0x10]; // 0x24(0x10)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.NPCDialogDataRow
// Size: 0xf8 (Inherited: 0x10)
struct FNPCDialogDataRow : public FDescRowBase {
public:

	int64_t UniqueId; // 0x10(0x08)
	int64_t GroupID; // 0x18(0x08)
	int64_t DialogID; // 0x20(0x08)
	enum class EDialogType DialogType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName NPCTag; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText OverrideCharacterName; // 0x38(0x18)
	float JumpNextDuration; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FText DialogText; // 0x58(0x18)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char CharacterSound[0x28]; // 0x70(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char CharacterAnimFPP[0x28]; // 0x98(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char CharacterAnimTPP[0x28]; // 0xc0(0x28)
	struct TArray<struct FNPCBranchInfo> NextBranchs; // 0xe8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.NPCBranchInfo
// Size: 0x30 (Inherited: 0x00)
struct FNPCBranchInfo {
public:

	struct FString OptionText; // 0x00(0x10)
	enum class EDialogJumpType JumpType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	int64_t NextID; // 0x18(0x08)
	struct FString Args; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.UnequipAmmoResultNotifyStruct
// Size: 0x18 (Inherited: 0x00)
struct FUnequipAmmoResultNotifyStruct {
public:

	enum class EAttachPosition Position; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	uint64_t ItemID; // 0x08(0x08)
	int32_t Num; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RepItemInfo
// Size: 0x70 (Inherited: 0x00)
struct FRepItemInfo {
public:

	float bValid; // 0x00(0x04)
	float TimeToUse; // 0x04(0x04)
	enum class ERepUseItemState UseItemState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	uint64_t PreUseItemGID; // 0x10(0x08)
	uint64_t PreUseItemId; // 0x18(0x08)
	struct TArray<uint64_t> UseItemGids; // 0x20(0x10)
	struct TArray<uint64_t> UseItemIds; // 0x30(0x10)
	float ItemStartUseTimestamp; // 0x40(0x04)
	float ItemEndUseTimestamp; // 0x44(0x04)
	enum class ECharacterPart WantUsePart; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	uint64_t TargetItemGId; // 0x50(0x08)
	bool bUsingLoopAnimation; // 0x58(0x01)
	bool bOverrideBasePos; // 0x59(0x01)
	bool bOverrideBasePosTPP; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)
	uint64_t OverrideBasePosItemId; // 0x60(0x08)
	bool bBackgroundUsing; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RepUseItemState
// Size: 0x08 (Inherited: 0x00)
struct FRepUseItemState {
public:

	enum class ERepUseItemState UseItemState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ItemUseEndTimeStamp; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RebornInformation
// Size: 0xc0 (Inherited: 0x00)
struct FRebornInformation {
public:

	struct ADFMCharacter* CHARACTER; // 0x00(0x08)
	enum class ERebornType RebornType; // 0x08(0x04)
	enum class ERebornActorType RebornActorType; // 0x0c(0x04)
	struct AActor* RebornToActor; // 0x10(0x08)
	uint32_t RebornToActorId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FTransform RebornToTransform; // 0x20(0x30)
	bool IsRandom; // 0x50(0x01)
	bool AllowEnemySee; // 0x51(0x01)
	bool AllowFollowPosture; // 0x52(0x01)
	bool DirToWideView; // 0x53(0x01)
	bool DirToRebornActor; // 0x54(0x01)
	bool DirFollowRebornActor; // 0x55(0x01)
	bool AllowRebornToInBattlingCharacter; // 0x56(0x01)
	bool AllowResetEquipment; // 0x57(0x01)
	int32_t Camp; // 0x58(0x04)
	struct FName RebornSeat; // 0x5c(0x08)
	char RebornPositionType; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	uint64_t RebornVehicleCarriedID; // 0x68(0x08)
	int32_t RebornVehicleID; // 0x70(0x04)
	uint32_t ArmedForceID; // 0x74(0x04)
	uint64_t HeroID; // 0x78(0x08)
	bool bLockedTeammateLocation; // 0x80(0x01)
	char pad_81[0xf]; // 0x81(0x0f)
	struct FTransform LockedTeammateTransform; // 0x90(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BattleFieldBroadcastTipInfo
// Size: 0x70 (Inherited: 0x00)
struct FBattleFieldBroadcastTipInfo {
public:

	struct FText ShowTip; // 0x00(0x18)
	struct FText SubShowTip; // 0x18(0x18)
	struct FString CustomParameters; // 0x30(0x10)
	struct TArray<struct AActor*> CustomActors; // 0x40(0x10)
	float RemainTime; // 0x50(0x04)
	int32_t ColorType; // 0x54(0x04)
	bool bShow; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t TipLevelType; // 0x5c(0x04)
	int32_t TipsViewType; // 0x60(0x04)
	int32_t TipType; // 0x64(0x04)
	int32_t ShowTipsIndex; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RebornScoreInformation
// Size: 0x24 (Inherited: 0x00)
struct FRebornScoreInformation {
public:

	float EnemyDisScore; // 0x00(0x04)
	float EnemyOcclusionScore; // 0x04(0x04)
	float EnemyFireScore; // 0x08(0x04)
	float MateDisSCore; // 0x0c(0x04)
	float AnchorDisScore; // 0x10(0x04)
	float SelectedMateDisScore; // 0x14(0x04)
	float DeadMateScore; // 0x18(0x04)
	float OtherMateScore; // 0x1c(0x04)
	float DyingMateNearRecentlyScore; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerStatItem
// Size: 0x48 (Inherited: 0x00)
struct FPlayerStatItem {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	struct FString PlayerName; // 0x08(0x10)
	int32_t Camp; // 0x18(0x04)
	bool bIsOffline; // 0x1c(0x01)
	bool bIsQuitMatch; // 0x1d(0x01)
	bool bIsBanned; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	int32_t Kill; // 0x20(0x04)
	int32_t Death; // 0x24(0x04)
	int32_t Assist; // 0x28(0x04)
	int32_t CaptureNum; // 0x2c(0x04)
	int32_t Score; // 0x30(0x04)
	float TotalDamage; // 0x34(0x04)
	int32_t Rescue; // 0x38(0x04)
	int32_t DestroyVehicle; // 0x3c(0x04)
	int32_t BattleLevel; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BuffDetectorUpdateData
// Size: 0x40 (Inherited: 0x00)
struct FBuffDetectorUpdateData {
public:

	struct FName uid; // 0x00(0x08)
	float Time; // 0x08(0x04)
	int32_t Count; // 0x0c(0x04)
	bool isEnermy; // 0x10(0x01)
	bool IsSelf; // 0x11(0x01)
	bool Remove; // 0x12(0x01)
	bool fromDetect; // 0x13(0x01)
	int32_t MaxCount; // 0x14(0x04)
	struct FVector Position; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct AActor* Target; // 0x28(0x08)
	struct ADFMCharacter* CHARACTER; // 0x30(0x08)
	bool IsLastWave; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RedeployKillerInfo
// Size: 0x288 (Inherited: 0x00)
struct FRedeployKillerInfo {
public:

	struct FKillInfo KillInfo; // 0x00(0x148)
	struct FModularWeaponInfo KillWeaponInfo; // 0x148(0x128)
	uint64_t KillerHeroId; // 0x270(0x08)
	uint32_t KillerActiveSkillID; // 0x278(0x04)
	uint32_t KillerPassiveSkillID; // 0x27c(0x04)
	int32_t EnemyKillSelf; // 0x280(0x04)
	int32_t SelfKillEnemy; // 0x284(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RangeTargetHitInfo
// Size: 0xa0 (Inherited: 0x00)
struct FRangeTargetHitInfo {
public:

	float HPDamage; // 0x00(0x04)
	float ArmorDamage; // 0x04(0x04)
	struct FHitResult HitResult; // 0x08(0x88)
	float HitTimeStamp; // 0x90(0x04)
	bool bLivingChange; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct AWeaponBase* EffectWeapon; // 0x98(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InventoryRepInfo
// Size: 0x98 (Inherited: 0x00)
struct FInventoryRepInfo {
public:

	char pad_0[0x98]; // 0x00(0x98)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BombWireInfo
// Size: 0x0c (Inherited: 0x00)
struct FBombWireInfo {
public:

	int32_t LightIdx; // 0x00(0x04)
	int32_t WireIdx; // 0x04(0x04)
	bool bIsCorrectLight; // 0x08(0x01)
	bool bHasBeenCut; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractableInfo
// Size: 0x30 (Inherited: 0x00)
struct FInteractableInfo {
public:

	/*struct TSoftClassPtr<UObject>*/char OperatorWidget[0x28]; // 0x00(0x28)
	struct UInteractExecutor* Executor; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MatCurveColorParameterConfig
// Size: 0x30 (Inherited: 0x00)
struct FMatCurveColorParameterConfig {
public:

	struct FName ParameterName; // 0x00(0x08)
	/*struct TSoftObjectPtr<UCurveLinearColor>*/char Curve[0x28]; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ScreenPostProcesaCurveFloatParameterConfig
// Size: 0x30 (Inherited: 0x00)
struct FScreenPostProcesaCurveFloatParameterConfig {
public:

	struct FName ParameterName; // 0x00(0x08)
	/*struct TSoftObjectPtr<UCurveFloat>*/char Curve[0x28]; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ScreenPostProcesaVectorParameterConfig
// Size: 0x20 (Inherited: 0x00)
struct FScreenPostProcesaVectorParameterConfig {
public:

	struct FName ParameterName; // 0x00(0x08)
	struct FTwoVectors VectorParamValRange; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ScreenPostProcesaScalarParameterConfig
// Size: 0x18 (Inherited: 0x00)
struct FScreenPostProcesaScalarParameterConfig {
public:

	struct FName ParameterName; // 0x00(0x08)
	struct FFloatRange ScalarParamValRange; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMAbilityFlashDroneData
// Size: 0x34 (Inherited: 0x00)
struct FDFMAbilityFlashDroneData {
public:

	enum class EDFMGamePlayMode GameMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t FlashBuffID_Near; // 0x04(0x04)
	int32_t FlashBuffID_Mid; // 0x08(0x04)
	int32_t FlashBuffID_Far; // 0x0c(0x04)
	int32_t FlashBuffID_Back; // 0x10(0x04)
	float NearDis; // 0x14(0x04)
	float FarDis; // 0x18(0x04)
	float ScanFaceAngle; // 0x1c(0x04)
	float ScanCD; // 0x20(0x04)
	float ScanAngle; // 0x24(0x04)
	float RealFlashDis; // 0x28(0x04)
	float WarinigFlashDis; // 0x2c(0x04)
	float WarinigFlashTime; // 0x30(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ActionScheduler
// Size: 0x40 (Inherited: 0x00)
struct FActionScheduler {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct UAction*> Queue; // 0x08(0x10)
	struct TArray<struct UAction*> ActiveActions; // 0x18(0x10)
	char pad_28[0x18]; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AdjutantInfo
// Size: 0x28 (Inherited: 0x00)
struct FAdjutantInfo {
public:

	struct TArray<struct FString> AdjutantActivityGoalIdStrArray; // 0x00(0x10)
	struct FString AdjutantAITargetName; // 0x10(0x10)
	struct FName AdjutantNameID; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AnimPathMoveSegment
// Size: 0x08 (Inherited: 0x00)
struct FAnimPathMoveSegment {
public:

	float Time; // 0x00(0x04)
	float MoveDirInDegree; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AICharacterAnimSnapshotConfigEx
// Size: 0x58 (Inherited: 0x10)
struct FAICharacterAnimSnapshotConfigEx : public FDescRowBase {
public:

	struct FName Name; // 0x10(0x08)
	enum class EGPCharacterPoseStateType Pose; // 0x18(0x01)
	enum class EGPCharacterFightStateType FightState; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TArray<struct FCharacterSnatshotBodyPartTransform> BodyPartsTransform; // 0x20(0x10)
	/*struct TSoftObjectPtr<UAnimSequence>*/char PoseAnim[0x28]; // 0x30(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIStyleSetting
// Size: 0x18 (Inherited: 0x00)
struct FAIStyleSetting {
public:

	enum class EAIStyleType Style; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MaxCount; // 0x04(0x04)
	float ProduceMinInterval; // 0x08(0x04)
	float ProduceMaxInterval; // 0x0c(0x04)
	int32_t ProduceMinNum; // 0x10(0x04)
	int32_t ProduceMaxNum; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIGroupDramaVoiceRecord
// Size: 0x58 (Inherited: 0x10)
struct FAIGroupDramaVoiceRecord : public FDescRowBase {
public:

	struct FName Type; // 0x10(0x08)
	struct TArray<struct FName> LevelNames; // 0x18(0x10)
	struct TArray<uint64_t> WeatherIDs; // 0x28(0x10)
	int32_t Priority; // 0x38(0x04)
	float CdTime; // 0x3c(0x04)
	float TeammateRadius; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FAIGroupDramaVoiceOne> AIDramaVoices; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIGroupDramaVoiceOne
// Size: 0x40 (Inherited: 0x00)
struct FAIGroupDramaVoiceOne {
public:

	float TriggerDelayTime; // 0x00(0x04)
	enum class EAIGroupDramaVoiceRole Role; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AudioAsset[0x28]; // 0x08(0x28)
	int32_t Priority; // 0x30(0x04)
	struct FName Subtitle; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CrashPointData
// Size: 0xc0 (Inherited: 0x00)
struct FCrashPointData {
public:

	struct FTransform CrashPoint; // 0x00(0x30)
	struct FTransform BrokenPart1; // 0x30(0x30)
	struct FTransform BrokenPart2; // 0x60(0x30)
	struct FTransform PickupBox; // 0x90(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MovePathSectionHelicopterTempData
// Size: 0x18 (Inherited: 0x00)
struct FMovePathSectionHelicopterTempData {
public:

	struct TArray<struct UMovePathPointHelicopter*> Points; // 0x00(0x10)
	int32_t SectionID; // 0x10(0x04)
	struct FColor Color; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RepSteeringData
// Size: 0x14 (Inherited: 0x00)
struct FRepSteeringData {
public:

	float MaxSpeed; // 0x00(0x04)
	float MaxAcceleration; // 0x04(0x04)
	float MaxAngularSpeed; // 0x08(0x04)
	float MaxAngularAcceleration; // 0x0c(0x04)
	float CrashRotateRate; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.akeOrientationConf
// Size: 0x18 (Inherited: 0x00)
struct FakeOrientationConf {
public:

	bool bUseFakeOrientation; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName MeshComponentName; // 0x04(0x08)
	float RandomImpactFactor; // 0x0c(0x04)
	float AccelerationFactor; // 0x10(0x04)
	float MaxAngle; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AILabFullMapModel
// Size: 0x40 (Inherited: 0x00)
struct FAILabFullMapModel {
public:

	struct TArray<struct FFullMapDeliverBeginTime> BeginTimeSecs; // 0x00(0x10)
	float DeliverRange; // 0x10(0x04)
	float DeliverInterval; // 0x14(0x04)
	int32_t CourseId; // 0x18(0x04)
	int32_t Style; // 0x1c(0x04)
	int32_t Diff; // 0x20(0x04)
	int32_t SpecNum; // 0x24(0x04)
	bool DeliverOpts; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float LastMoveGap; // 0x2c(0x04)
	float LastHurtGap; // 0x30(0x04)
	float LastFireGap; // 0x34(0x04)
	float MinDeliverHp; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FullMapDeliverBeginTime
// Size: 0x1c (Inherited: 0x00)
struct FFullMapDeliverBeginTime {
public:

	struct FFloatRange FullMapBeginTimeSecs; // 0x00(0x10)
	bool StartPointBorn; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t RealPlayerNum; // 0x14(0x04)
	bool AreaPointBorn; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AILabDeliverModel
// Size: 0x68 (Inherited: 0x00)
struct FAILabDeliverModel {
public:

	struct FFloatRange ModelScore; // 0x00(0x10)
	int32_t CourseId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FAILabDeliverInterval> Interval; // 0x18(0x10)
	int32_t DeliverRandomRange; // 0x28(0x04)
	float HurtGap; // 0x2c(0x04)
	float MinDeliverHp; // 0x30(0x04)
	float BaseDiffcult; // 0x34(0x04)
	float BaseAINum; // 0x38(0x04)
	float DeliverDist; // 0x3c(0x04)
	float LastMoveGap; // 0x40(0x04)
	float LastHurtGap; // 0x44(0x04)
	float LastFireGap; // 0x48(0x04)
	float KillNumScale; // 0x4c(0x04)
	float HpRateScale; // 0x50(0x04)
	float ArmRateScale; // 0x54(0x04)
	float BloodyScale; // 0x58(0x04)
	float LastHurtScale; // 0x5c(0x04)
	float LastFireScale; // 0x60(0x04)
	float EscDistScale; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AILabDeliverInterval
// Size: 0x30 (Inherited: 0x00)
struct FAILabDeliverInterval {
public:

	struct FFloatRange BeginTimeSecs; // 0x00(0x10)
	struct FFloatRange DeliverInterval; // 0x10(0x10)
	struct FFloatRange ExitDeliverInterval; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIMovePathList
// Size: 0x10 (Inherited: 0x00)
struct FAIMovePathList {
public:

	struct TArray<struct AAIMovePath*> AIMovePaths; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GPContext
// Size: 0x78 (Inherited: 0x00)
struct FGPContext {
public:

	struct ADramaArea* RelatedArea; // 0x00(0x08)
	struct AAIController* BoundController; // 0x08(0x08)
	struct ACHARACTER* ControlledCharacter; // 0x10(0x08)
	int32_t Ready; // 0x18(0x04)
	int32_t Step; // 0x1c(0x04)
	int32_t PathIdx; // 0x20(0x04)
	struct FVector Relative; // 0x24(0x0c)
	struct FVector InitPosition; // 0x30(0x0c)
	bool bSquadCommander; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct TArray<struct FAngleRange> AngleRanges; // 0x40(0x10)
	float MinRadius; // 0x50(0x04)
	float MaxRadius; // 0x54(0x04)
	float MinStartTime; // 0x58(0x04)
	float MaxStartTime; // 0x5c(0x04)
	float MinStartTime_Shield; // 0x60(0x04)
	float MaxStartTime_Shield; // 0x64(0x04)
	float LastMinStartTime; // 0x68(0x04)
	float LastMaxStartTime; // 0x6c(0x04)
	bool bIsGuarder; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t LastFormationID; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AngleRange
// Size: 0x08 (Inherited: 0x00)
struct FAngleRange {
public:

	float MinValue; // 0x00(0x04)
	float MaxValue; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.NewGuardState
// Size: 0x0c (Inherited: 0x00)
struct FNewGuardState {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GPatrolWPConfig
// Size: 0x50 (Inherited: 0x00)
struct FGPatrolWPConfig {
public:

	struct FVector KeyLocation; // 0x00(0x0c)
	char pad_C[0x44]; // 0x0c(0x44)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.NewPatrolState
// Size: 0x14 (Inherited: 0x00)
struct FNewPatrolState {
public:

	char pad_0[0x14]; // 0x00(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PatrolAIState
// Size: 0x90 (Inherited: 0x00)
struct FPatrolAIState {
public:

	char pad_0[0x10]; // 0x00(0x10)
	struct UAIGuardPoint* CurrentGuardPoint; // 0x10(0x08)
	struct UAIGuardPoint* LastGuardPoint; // 0x18(0x08)
	char pad_20[0x70]; // 0x20(0x70)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PatrolPathState
// Size: 0x0c (Inherited: 0x00)
struct FPatrolPathState {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PathGroup
// Size: 0x20 (Inherited: 0x00)
struct FPathGroup {
public:

	struct TArray<struct AAIPatrolPath*> Paths; // 0x00(0x10)
	int32_t Capacity; // 0x10(0x04)
	int32_t MaxAssignPathNum; // 0x14(0x04)
	int32_t RandomWeight; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIQuestCommandInfo
// Size: 0x02 (Inherited: 0x00)
struct FAIQuestCommandInfo {
public:

	enum class EAIQuestCommand CurrentQuestCommand; // 0x00(0x01)
	bool Excuting; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AirDropDataTableRow
// Size: 0xa8 (Inherited: 0x10)
struct FAirDropDataTableRow : public FDescRowBase {
public:

	int32_t AirDropID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TSoftClassPtr<UObject>*/char AirDropItemClass[0x28]; // 0x18(0x28)
	/*struct TSoftClassPtr<UObject>*/char AirDropActorClass[0x28]; // 0x40(0x28)
	struct TArray<struct FVector> AirDropSockets; // 0x68(0x10)
	struct FName SmokeEffectID; // 0x78(0x08)
	struct FVector AirDropSmokeEffectSocket; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UGPAudioEventAsset* StartDropAudioEvent; // 0x90(0x08)
	struct UGPAudioEventAsset* StopDropAudioEvent; // 0x98(0x08)
	struct UGPAudioEventAsset* LandingdAudioEvent; // 0xa0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AirDropMoveConfig
// Size: 0x14 (Inherited: 0x00)
struct FAirDropMoveConfig {
public:

	float ConstantSpeed; // 0x00(0x04)
	float DecelerateHeight; // 0x04(0x04)
	float DecelerateTime; // 0x08(0x04)
	float GravityZ; // 0x0c(0x04)
	float GravityInitialVelocity; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ClientDropVehicleInfo
// Size: 0x48 (Inherited: 0x00)
struct FClientDropVehicleInfo {
public:

	int64_t VehicleId; // 0x00(0x08)
	struct FText VehicleName; // 0x08(0x18)
	struct FSoftObjectPath VehicleIconPath; // 0x20(0x18)
	float Cost; // 0x38(0x04)
	float EnableSpawnServerTime; // 0x3c(0x04)
	float RemainSpawnCount; // 0x40(0x04)
	enum class EAirDropResult VehiclEnableDropResult; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SectionAirDrop
// Size: 0x18 (Inherited: 0x00)
struct FSectionAirDrop {
public:

	int32_t SectorID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FDroppedVehicleInfo> DroppedVehicleInfoArray; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DroppedVehicleInfo
// Size: 0x20 (Inherited: 0x00)
struct FDroppedVehicleInfo {
public:

	int64_t VehicleId; // 0x00(0x08)
	struct TArray<struct AGPVehicleBase*> Vehicles; // 0x08(0x10)
	int32_t Count; // 0x18(0x04)
	float VehicleLatestSpwanServerTime; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SectorAirDropLimitConfig
// Size: 0x58 (Inherited: 0x00)
struct FSectorAirDropLimitConfig {
public:

	int32_t SectorMaxVehicleCount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<uint64_t, struct FVehicleLimitConfig> VehicleAirDropLimitConfigMap; // 0x08(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.VehicleLimitConfig
// Size: 0x0c (Inherited: 0x00)
struct FVehicleLimitConfig {
public:

	int32_t MaxCount; // 0x00(0x04)
	float Cost; // 0x04(0x04)
	float AirDropSpawnCD; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SpawnedActorInfo
// Size: 0x10 (Inherited: 0x00)
struct FSpawnedActorInfo {
public:

	struct TWeakObjectPtr<struct AActor> SpawnedActor; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AISpawnFactor
// Size: 0x28 (Inherited: 0x00)
struct FAISpawnFactor {
public:

	struct TArray<struct FAISpawnLimitation_Staged_Collection> StagedLimitations; // 0x00(0x10)
	struct UDataTable* NpcTemplateTable; // 0x10(0x08)
	struct UDataTable* NpcGroupTable; // 0x18(0x08)
	int32_t CurrentPhase; // 0x20(0x04)
	bool CurrentPhaseFinished; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AISpawnLimitation_Staged_Collection
// Size: 0x18 (Inherited: 0x00)
struct FAISpawnLimitation_Staged_Collection {
public:

	float KeyTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FAISpawnLimitation_Staged> StagedLimitationDatas; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AISpawnLimitation_Staged
// Size: 0x48 (Inherited: 0x00)
struct FAISpawnLimitation_Staged {
public:

	struct FName SpawnerToken; // 0x00(0x08)
	int32_t SpawnerTokenWeight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int32_t NumStart; // 0x10(0x04)
	int32_t NumEnd; // 0x14(0x04)
	int32_t LivingCountLimit; // 0x18(0x04)
	int32_t Percentage; // 0x1c(0x04)
	struct TArray<struct FAINpcSelector> NpcSet; // 0x20(0x10)
	char pad_30[0x18]; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AINpcSelector
// Size: 0x88 (Inherited: 0x00)
struct FAINpcSelector {
public:

	struct FName GroupName; // 0x00(0x08)
	struct FName NpcName; // 0x08(0x08)
	int32_t Count; // 0x10(0x04)
	int32_t PercentageValue; // 0x14(0x04)
	char pad_18[0x68]; // 0x18(0x68)
	struct UDataTable* NpcTemplateTable; // 0x80(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SpawnerFlag
// Size: 0x10 (Inherited: 0x00)
struct FSpawnerFlag {
public:

	struct TArray<int32_t> Flags; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AerialVehicleSelector
// Size: 0x28 (Inherited: 0x00)
struct FAerialVehicleSelector {
public:

	struct TArray<struct FName> npcNames; // 0x00(0x10)
	struct UDataTable* AerialVehicleTemplateTable; // 0x10(0x08)
	bool bSpawnGroup; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UClass* AIGroupClass; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SpawnAIListRes
// Size: 0x10 (Inherited: 0x00)
struct FSpawnAIListRes {
public:

	struct TArray<struct AAIController*> AIControllerList; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AICurrentInx
// Size: 0x0c (Inherited: 0x00)
struct FAICurrentInx {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AISpawnDistanceTagConf
// Size: 0x20 (Inherited: 0x00)
struct FAISpawnDistanceTagConf {
public:

	struct FString DramaTagPrefix; // 0x00(0x10)
	float DistanceAvoidPlayer; // 0x10(0x04)
	float DegreeAvoidPlayer; // 0x14(0x04)
	float SightDistanceAvoidPlayer; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AISpawnEnableInfo
// Size: 0x18 (Inherited: 0x00)
struct FAISpawnEnableInfo {
public:

	enum class EDFMGamePlayMode EnableMode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString EnableMapName; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.QASpawnAIDrama
// Size: 0x10 (Inherited: 0x00)
struct FQASpawnAIDrama {
public:

	bool UseBP; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct ADramaArea* Drama; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DramaAISapwnInfo
// Size: 0x28 (Inherited: 0x00)
struct FDramaAISapwnInfo {
public:

	struct FName AITemplateName; // 0x00(0x08)
	struct FVector SpawnLocation; // 0x08(0x0c)
	float SpawnCheckDistance; // 0x14(0x04)
	bool DirectSpawn; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float RetryDelay; // 0x1c(0x04)
	int32_t RetryCount; // 0x20(0x04)
	bool SpawnByAILab; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AISpeakContext
// Size: 0x28 (Inherited: 0x00)
struct FAISpeakContext {
public:

	struct ACHARACTER* Owner; // 0x00(0x08)
	struct ACHARACTER* Responser; // 0x08(0x08)
	char pad_10[0x2]; // 0x10(0x02)
	enum class EAISpeakContextType Type; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	float CreateTime; // 0x14(0x04)
	float ContextTimeout; // 0x18(0x04)
	float ContextCooldown; // 0x1c(0x04)
	float DistanceLimit; // 0x20(0x04)
	int32_t ContextStatus; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PrefectureAIStyleInfo
// Size: 0x10 (Inherited: 0x00)
struct FPrefectureAIStyleInfo {
public:

	struct TArray<struct FPrefectureAIStyle> AIStyles; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PrefectureAIStyle
// Size: 0x08 (Inherited: 0x00)
struct FPrefectureAIStyle {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GlobalAIStyleInfo
// Size: 0x0c (Inherited: 0x00)
struct FGlobalAIStyleInfo {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIUnitTestEquipPair
// Size: 0x30 (Inherited: 0x00)
struct FAIUnitTestEquipPair {
public:

	struct FString BreastPlateID; // 0x00(0x10)
	struct FString HelmetID; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PrefectureBoardcastThreatConfig
// Size: 0x02 (Inherited: 0x00)
struct FPrefectureBoardcastThreatConfig {
public:

	enum class EPrefectureBoardcastThreatType PrefectureBoardcastThreatType; // 0x00(0x01)
	bool bIsOpen; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PrefectureStyleSetting
// Size: 0x18 (Inherited: 0x00)
struct FPrefectureStyleSetting {
public:

	enum class EAIStyleType Style; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MaxCount; // 0x04(0x04)
	float TakeMinInterval; // 0x08(0x04)
	float TakeMaxInterval; // 0x0c(0x04)
	int32_t TakeMinNum; // 0x10(0x04)
	int32_t TakeMaxNum; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIZone
// Size: 0x50 (Inherited: 0x00)
struct FAIZone {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PortableAmmoBoxRow
// Size: 0x48 (Inherited: 0x10)
struct FPortableAmmoBoxRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	struct UClass* BPClass; // 0x18(0x08)
	/*struct TSoftObjectPtr<UStaticMesh>*/char Mesh[0x28]; // 0x20(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DeadbodyAmmoBoxConfig
// Size: 0x50 (Inherited: 0x10)
struct FDeadbodyAmmoBoxConfig : public FDescRowBase {
public:

	uint64_t ConfigId; // 0x10(0x08)
	enum class EDBAmmoBoxVisibilityRule VisibilityRule; // 0x18(0x01)
	enum class EDBAmmoBoxCountLimitRule CountLimitRule; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float LifeSpan; // 0x1c(0x04)
	float Capacity; // 0x20(0x04)
	bool bOnlyAddToCurrent; // 0x24(0x01)
	bool bMainWeapon; // 0x25(0x01)
	bool bAbilityWeapon; // 0x26(0x01)
	bool bOverrideAddAmmoNum; // 0x27(0x01)
	enum class EWeaponAddAmmoType AddAmmoType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float AddAmmoValue; // 0x2c(0x04)
	struct TArray<char> AmmoType_BlackList; // 0x30(0x10)
	struct TArray<struct FAddAmmoConfig> AddAmmoOverrides; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AddAmmoConfig
// Size: 0x08 (Inherited: 0x00)
struct FAddAmmoConfig {
public:

	char AmmoType; // 0x00(0x01)
	enum class EWeaponAddAmmoType AddAmmoType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float AddAmmoValue; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AnimNode_AI3PlanAnimation
// Size: 0x118 (Inherited: 0x100)
struct FAnimNode_AI3PlanAnimation : public FAnimNode_SequencePlayer {
public:

	bool bEnablePlanning; // 0x100(0x01)
	bool bPlanByDirection; // 0x101(0x01)
	bool bPlanByRotation; // 0x102(0x01)
	bool bUseFocusToDecide; // 0x103(0x01)
	bool bUseMotionPlanAnim; // 0x104(0x01)
	bool bDisableDistanceCorrection; // 0x105(0x01)
	enum class ECharRotationSmoothMethod CharRotationSmoothMethod; // 0x106(0x01)
	char pad_107[0x1]; // 0x107(0x01)
	struct UMotionActionComponent3* Motion3Comp; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AreaAmbientAudioRow
// Size: 0xc0 (Inherited: 0x70)
struct FAreaAmbientAudioRow : public FAssetPakerPakPolicyRow {
public:

	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char IntoAreaAudioEvent[0x28]; // 0x70(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char OffAreaAudioEvent[0x28]; // 0x98(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ArmorRepairRow
// Size: 0x28 (Inherited: 0x10)
struct FArmorRepairRow : public FDescRowBase {
public:

	float LowRepairCost; // 0x10(0x04)
	float MidRepairCost; // 0x14(0x04)
	float HighRepairCost; // 0x18(0x04)
	float LowRepairReduce; // 0x1c(0x04)
	float MidRepairReduce; // 0x20(0x04)
	float HighRepairReduce; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ArmorDurabilityFormula
// Size: 0x18 (Inherited: 0x10)
struct FArmorDurabilityFormula : public FDescRowBase {
public:

	uint32_t FormualID; // 0x10(0x04)
	float TotalDamageParam; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ArmorBuffRow
// Size: 0x18 (Inherited: 0x00)
struct FArmorBuffRow {
public:

	uint32_t BuffId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FReplaceBuffAttributeOp> AttributeOperateIDs; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ReplaceBuffAttributeOp
// Size: 0x10 (Inherited: 0x00)
struct FReplaceBuffAttributeOp {
public:

	uint64_t AttributeOpId; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ProtectBodyDefineRow
// Size: 0x40 (Inherited: 0x10)
struct FProtectBodyDefineRow : public FDescRowBase {
public:

	struct FName BodyName; // 0x10(0x08)
	struct TArray<struct FName> BonesNames; // 0x18(0x10)
	struct FText ProtectPartDisplayText; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ProcessDurabilityRecordCollection
// Size: 0x10 (Inherited: 0x00)
struct FProcessDurabilityRecordCollection {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ProcessDurabilityRecord
// Size: 0x18 (Inherited: 0x00)
struct FProcessDurabilityRecord {
public:

	uint64_t ItemGid; // 0x00(0x08)
	int32_t DurabilityFrom; // 0x08(0x04)
	int32_t DurabilityTo; // 0x0c(0x04)
	bool bDebt; // 0x10(0x01)
	enum class EProcessDurabilityReason reason; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BaseSpaceItemInfo
// Size: 0x20 (Inherited: 0x00)
struct FBaseSpaceItemInfo {
public:

	struct FItemID ItemID; // 0x00(0x18)
	uint64_t ItemGid; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FeatureLevelTransition
// Size: 0x10 (Inherited: 0x00)
struct FFeatureLevelTransition {
public:

	struct UCharacterLODFeatureLevel* From; // 0x00(0x08)
	struct UCharacterLODFeatureLevel* To; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FeatureLevelTransitionClass
// Size: 0x10 (Inherited: 0x00)
struct FFeatureLevelTransitionClass {
public:

	struct UClass* From; // 0x00(0x08)
	struct UClass* To; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BattleFieldSpawnerDataRow
// Size: 0x68 (Inherited: 0x10)
struct FBattleFieldSpawnerDataRow : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<struct FName, struct FBattleFieldSpawnerData> SpawnerDataMap; // 0x18(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BattleFieldSpawnerActiveConditionInfo
// Size: 0x50 (Inherited: 0x00)
struct FBattleFieldSpawnerActiveConditionInfo {
public:

	struct TMap<enum class EVehicleSpawnerActiveConditionType, float> BattleFieldSpawnerActiveConditionInfoMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BattleFieldBackgroundCharacterVoiceRow
// Size: 0x60 (Inherited: 0x08)
struct FBattleFieldBackgroundCharacterVoiceRow : public FTableRowBase {
public:

	int32_t MapID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<enum class EBattleFieldBackgroundCharacterVoiceEventType, struct FBackgroundCharacterVoiceDataMap> VoiceEventTypeMap; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BackgroundCharacterVoiceDataMap
// Size: 0xa0 (Inherited: 0x00)
struct FBackgroundCharacterVoiceDataMap {
public:

	struct TMap<enum class EBattleFieldBackgroundCharacterVoiceStatusType, struct FBackgroundCharacterVoiceData> Camp0CharacterStatusAudioDataMap; // 0x00(0x50)
	struct TMap<enum class EBattleFieldBackgroundCharacterVoiceStatusType, struct FBackgroundCharacterVoiceData> Camp1CharacterStatusAudioDataMap; // 0x50(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BackgroundCharacterVoiceData
// Size: 0x38 (Inherited: 0x00)
struct FBackgroundCharacterVoiceData {
public:

	/*struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>>*/char AudioEventAssets[0x10]; // 0x00(0x10)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char StopAudioEventAsset[0x28]; // 0x10(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BattleFieldDeduceRow
// Size: 0x108 (Inherited: 0x08)
struct FBattleFieldDeduceRow : public FTableRowBase {
public:

	int32_t MapID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FName, struct FBattleFieldDeduceSectorInfo> SectorMap; // 0x10(0x50)
	bool bIsConquest; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TMap<float, struct FBattleFieldDeduceSectorInfo> Camp0ConquestDeduceInfoMap; // 0x68(0x50)
	struct TMap<float, struct FBattleFieldDeduceSectorInfo> Camp1ConquestDeduceInfoMap; // 0xb8(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BattleFieldDeduceSectorInfo
// Size: 0x30 (Inherited: 0x00)
struct FBattleFieldDeduceSectorInfo {
public:

	bool bEnableSectorBeginSequence; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FBattleFieldDeduceSectorSequenceInfo> SectorBeginSequenceInfos; // 0x08(0x10)
	bool bEnableSectorEndSequence; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FBattleFieldDeduceSectorSequenceInfo> SectorEndSequenceInfos; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BattleFieldDeduceSectorSequenceInfo
// Size: 0x58 (Inherited: 0x00)
struct FBattleFieldDeduceSectorSequenceInfo {
public:

	bool bNeedLoop; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LoopDelayLeftIntervalTime; // 0x04(0x04)
	int32_t LoopDelayRightIntervalTime; // 0x08(0x04)
	float FirstDelayTime; // 0x0c(0x04)
	bool bNeedRandom; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	/*struct TSoftClassPtr<UObject>*/char SequenceActor[0x28]; // 0x18(0x28)
	int32_t RandomSequencePlayNum; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FBattleFieldDeduceRandomSequenceInfo> SequenceActors; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BattleFieldDeduceRandomSequenceInfo
// Size: 0x30 (Inherited: 0x00)
struct FBattleFieldDeduceRandomSequenceInfo {
public:

	/*struct TSoftClassPtr<UObject>*/char SequenceActor[0x28]; // 0x00(0x28)
	float SequenceActorProbability; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SectorBattleRoutePointPair
// Size: 0x10 (Inherited: 0x00)
struct FSectorBattleRoutePointPair {
public:

	struct AActor* SectorFilter; // 0x00(0x08)
	struct ABattleRoutePoint* RoutePoint; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BattleRouteArrayList
// Size: 0x10 (Inherited: 0x00)
struct FBattleRouteArrayList {
public:

	struct TArray<struct ABattleRoutePoint*> PointArray; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BattleRouteLink
// Size: 0x30 (Inherited: 0x00)
struct FBattleRouteLink {
public:

	/*struct TSoftObjectPtr<ABattleRoutePoint>*/char RoutePoint[0x28]; // 0x00(0x28)
	float PathLenght; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.VehicleBeAttackedData
// Size: 0x50 (Inherited: 0x00)
struct FVehicleBeAttackedData {
public:

	struct TMap<struct APawn*, float> AttackDataMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.TournamentScoreSort
// Size: 0x30 (Inherited: 0x10)
struct FTournamentScoreSort : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	int32_t PrimaryID; // 0x14(0x04)
	int32_t SecondaryID; // 0x18(0x04)
	int32_t TeriaryID; // 0x1c(0x04)
	struct TArray<enum class EScoreName> BehavioralType; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MedalPointData
// Size: 0x98 (Inherited: 0x10)
struct FMedalPointData : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	enum class EModalPointType ModalPointType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FText ModalName; // 0x18(0x18)
	struct FText MedalDesc; // 0x30(0x18)
	struct TArray<struct FSoftObjectPath> Icon; // 0x48(0x10)
	struct TArray<enum class EScoreName> IncludeAction; // 0x58(0x10)
	struct TArray<int32_t> LevelPoint; // 0x68(0x10)
	struct TArray<struct FMedalLevelReward> LevelRewards; // 0x78(0x10)
	struct TArray<int32_t> LevelRewardBehaviorScore; // 0x88(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MedalLevelReward
// Size: 0x18 (Inherited: 0x00)
struct FMedalLevelReward {
public:

	int32_t Level; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FMedalLevelRewardItemInfo> ItemInfos; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MedalLevelRewardItemInfo
// Size: 0x08 (Inherited: 0x00)
struct FMedalLevelRewardItemInfo {
public:

	int32_t ItemID; // 0x00(0x04)
	int32_t ItemNum; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BehaviorScoreExtraDataRow
// Size: 0x68 (Inherited: 0x10)
struct FBehaviorScoreExtraDataRow : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<struct FName, struct FBehaviorScoreExtraData> BehaviorScoreExtraData; // 0x18(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BehaviorScoreExtraData
// Size: 0x78 (Inherited: 0x00)
struct FBehaviorScoreExtraData {
public:

	enum class EScoreName ScoreName; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ScoreNameExt; // 0x04(0x08)
	struct FName Category; // 0x0c(0x08)
	enum class EScoreBoardCategoryType ScoreBoardCategoryType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t Score; // 0x18(0x04)
	int32_t MedalScore; // 0x1c(0x04)
	int32_t TournamentScore; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	int64_t IntValue1; // 0x28(0x08)
	int64_t IntValue2; // 0x30(0x08)
	int64_t IntValue3; // 0x38(0x08)
	float FloatValue1; // 0x40(0x04)
	float FloatValue2; // 0x44(0x04)
	float FloatValue3; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<enum class EDFMGamePlayMode> AvailableMode; // 0x50(0x10)
	struct TArray<int64_t> AvailableWeapon; // 0x60(0x10)
	float WeaponUpgradeMultiplier; // 0x70(0x04)
	float AccountUpgradeMultiplier; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BehaviorScoreData
// Size: 0x148 (Inherited: 0x10)
struct FBehaviorScoreData : public FDescRowBase {
public:

	struct FName BehaviorScoreName; // 0x10(0x08)
	enum class EScoreName ScoreName; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName ScoreNameExt; // 0x1c(0x08)
	struct FName Category; // 0x24(0x08)
	enum class EScoreBoardCategoryType ScoreBoardCategoryType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FText ShowText; // 0x30(0x18)
	struct FLinearColor ShowTextColor; // 0x48(0x10)
	struct FLinearColor PlayerNameColor; // 0x58(0x10)
	int32_t Score; // 0x68(0x04)
	int32_t MedalScore; // 0x6c(0x04)
	int32_t TournamentScore; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FSoftObjectPath Icon; // 0x78(0x18)
	struct FLinearColor IconColor; // 0x90(0x10)
	struct FString Audio; // 0xa0(0x10)
	struct FName Condition; // 0xb0(0x08)
	enum class EScoreBoardType ScoreBoardType; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FString Notation; // 0xc0(0x10)
	int64_t IntValue1; // 0xd0(0x08)
	int64_t IntValue2; // 0xd8(0x08)
	int64_t IntValue3; // 0xe0(0x08)
	float FloatValue1; // 0xe8(0x04)
	float FloatValue2; // 0xec(0x04)
	float FloatValue3; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct TArray<enum class EScoreBoardCategoryType> ScoreBoardCategoryTypeArray1; // 0xf8(0x10)
	struct TArray<enum class EDFMGamePlayMode> AvailableMode; // 0x108(0x10)
	struct TArray<int64_t> AvailableWeapon; // 0x118(0x10)
	struct FName AnimName; // 0x128(0x08)
	float WeaponUpgradeMultiplier; // 0x130(0x04)
	float AccountUpgradeMultiplier; // 0x134(0x04)
	bool bCheckAntiBrush; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	float AntiBrushDuration; // 0x13c(0x04)
	int32_t AntiBrushCount; // 0x140(0x04)
	float AntiBrushCD; // 0x144(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.VOConfig
// Size: 0x70 (Inherited: 0x00)
struct FVOConfig {
public:

	struct FName Radio_Start; // 0x00(0x08)
	struct FName Radio_Obtain_Player; // 0x08(0x08)
	struct FName Radio_Obtain_Teammate; // 0x10(0x08)
	struct FName Radio_Obtain_Enemy; // 0x18(0x08)
	struct FName Radio_StartDecipher_ObtainedTeam; // 0x20(0x08)
	struct FName Radio_StartDecipher_OtherTeam; // 0x28(0x08)
	struct FName Radio_FinishDecipher_Player; // 0x30(0x08)
	struct FName Radio_FinishDecipher_Teammate; // 0x38(0x08)
	struct FName Radio_FinishDecipher_Enemy; // 0x40(0x08)
	struct FName Radio_Transfer_OriginalTeam; // 0x48(0x08)
	struct FName Radio_Out_SuccessPlayer; // 0x50(0x08)
	struct FName Radio_Out_TeamPlayer; // 0x58(0x08)
	struct FName Radio_Out_OtherTeam; // 0x60(0x08)
	struct FName Radio_InDanger; // 0x68(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.Interact3DAudioConfig
// Size: 0x50 (Inherited: 0x00)
struct FInteract3DAudioConfig {
public:

	/*struct TMap<enum class EInteract3DAudioType, struct TSoftObjectPtr<UGPAudioEventAsset>>*/char AudioPathMap[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.UI2DAudioConfig
// Size: 0x60 (Inherited: 0x00)
struct FUI2DAudioConfig {
public:

	struct FName UI_Loot_Appear; // 0x00(0x08)
	struct FName UI_Loot_Pickup_Player; // 0x08(0x08)
	struct FName UI_Loot_Pickup_Teammate; // 0x10(0x08)
	struct FName UI_Loot_Pickup_Enemy; // 0x18(0x08)
	struct FName UI_Loot_CodeBreak; // 0x20(0x08)
	struct FName UI_Mandel_CodeBreak_Success_Friendly; // 0x28(0x08)
	struct FName UI_Mandel_CodeBreak_Success_Enemy; // 0x30(0x08)
	struct FName UI_Loot_Copy_Success; // 0x38(0x08)
	struct FName UI_Loot_TakeOut_Friendly; // 0x40(0x08)
	struct FName UI_Loot_TakeOut_Enemy; // 0x48(0x08)
	struct TArray<struct FSoftObjectPath> AudioAssetPaths; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ProgressBarConfig
// Size: 0x50 (Inherited: 0x00)
struct FProgressBarConfig {
public:

	struct FText SubmitBlueprintWeapon; // 0x00(0x18)
	struct FText CopyBlueprintWeapon; // 0x18(0x18)
	struct FText PlunderBlueprintWeapon; // 0x30(0x18)
	float Duration; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BlueprintPlunderDangerDistanceConfig
// Size: 0x0c (Inherited: 0x00)
struct FBlueprintPlunderDangerDistanceConfig {
public:

	float DangerDistance_Level1; // 0x00(0x04)
	float DangerDistance_Level2; // 0x04(0x04)
	float DangerDistance_Level3; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BlueprintPlunderTipsBoxTextConfig
// Size: 0x78 (Inherited: 0x00)
struct FBlueprintPlunderTipsBoxTextConfig {
public:

	struct FText FunctionText; // 0x00(0x18)
	struct FText DescText; // 0x18(0x18)
	struct FText FunctionText_SendOut; // 0x30(0x18)
	struct FText FunctionText_NoCopy; // 0x48(0x18)
	struct FText MandelBrickDescText; // 0x60(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BlueprintPlunderMainHudTextConfig
// Size: 0xd8 (Inherited: 0x00)
struct FBlueprintPlunderMainHudTextConfig {
public:

	struct FText HintText_Go2Station; // 0x00(0x18)
	struct FText HintText_ProtectTeammate; // 0x18(0x18)
	struct FText HintText_ManningStation; // 0x30(0x18)
	struct FText HintText_CopyMandelBrick; // 0x48(0x18)
	struct FText HintText_RetakeMandelBrick; // 0x60(0x18)
	struct FText RewardsText_CopyMandelBrick; // 0x78(0x18)
	struct FText RewardsText_Waiting2Copy; // 0x90(0x18)
	struct FText RewardsText_Copy; // 0xa8(0x18)
	struct FText RewardsText_EnemyCapture; // 0xc0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BlueprintPlunderBannerTextConfig
// Size: 0xe8 (Inherited: 0x00)
struct FBlueprintPlunderBannerTextConfig {
public:

	struct FText BannerText_BeAppeared; // 0x00(0x18)
	struct FText BannerText_BeingWanted; // 0x18(0x18)
	struct FText BannerText_BeingWanted_Enemy; // 0x30(0x18)
	struct FText BannerText_Deciphering; // 0x48(0x18)
	struct FText BannerText_Plunder; // 0x60(0x18)
	struct FText BannerText_EnemyCapture; // 0x78(0x18)
	struct FText BannerText_BeTakenOut; // 0x90(0x18)
	struct FText BannerText_BeTakenOut_NotCopy; // 0xa8(0x18)
	struct FText BannerText_BeTakenOut_Lost; // 0xc0(0x18)
	float BannerTime_1in; // 0xd8(0x04)
	float BannerTime_0in; // 0xdc(0x04)
	float BannerTime_1inHD; // 0xe0(0x04)
	float BannerTime_0inHD; // 0xe4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BlueprintPlunderUIConfig
// Size: 0x60 (Inherited: 0x00)
struct FBlueprintPlunderUIConfig {
public:

	struct FText PickUpBlueprint; // 0x00(0x18)
	struct FText DecipherBlueprint; // 0x18(0x18)
	struct FText PlunderBlueprint; // 0x30(0x18)
	struct FText CopyBlueprint; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BlueprintPlunderDropPool
// Size: 0x28 (Inherited: 0x10)
struct FBlueprintPlunderDropPool : public FDescRowBase {
public:

	struct FName DropPoolID; // 0x10(0x08)
	struct TArray<struct FBlueprintPlunderDropWeight> BlueprintPlunderDropWeightList; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BlueprintPlunderDropWeight
// Size: 0x0c (Inherited: 0x00)
struct FBlueprintPlunderDropWeight {
public:

	struct FName MandelBrickID; // 0x00(0x08)
	int32_t Weight; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakableAnimAnimProxy
// Size: 0x780 (Inherited: 0x748)
struct FBreakableAnimAnimProxy : public FAnimInstanceProxy {
public:

	struct UAnimSequence* BreakableAnimation; // 0x748(0x08)
	float BlendToDirAnimationAlpha; // 0x750(0x04)
	float BlendPhysics; // 0x754(0x04)
	float RotateOffset; // 0x758(0x04)
	struct FVector RadialForceCenter; // 0x75c(0x0c)
	float RadialForceStrength; // 0x768(0x04)
	float RadialForceRadius; // 0x76c(0x04)
	char pad_770[0x10]; // 0x770(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FoliageRadialDamageArray
// Size: 0x120 (Inherited: 0x108)
struct FFoliageRadialDamageArray : public FFastArraySerializer {
public:

	struct TArray<struct FFoliageRadialDamageInfo> DamageRecords; // 0x108(0x10)
	struct ABreakableFoliage* BreakableFoliage; // 0x118(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FoliageRadialDamageInfo
// Size: 0x20 (Inherited: 0x0c)
struct FFoliageRadialDamageInfo : public FFastArraySerializerItem {
public:

	float DamageValue; // 0x0c(0x04)
	float HitRadius; // 0x10(0x04)
	struct FVector_NetQuantize HitPosition; // 0x14(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FoliagePointDamageArray
// Size: 0x120 (Inherited: 0x108)
struct FFoliagePointDamageArray : public FFastArraySerializer {
public:

	struct TArray<struct FFoliagePointDamageInfo> DamageRecords; // 0x108(0x10)
	struct ABreakableFoliage* BreakableFoliage; // 0x118(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FoliagePointDamageInfo
// Size: 0x14 (Inherited: 0x0c)
struct FFoliagePointDamageInfo : public FFastArraySerializerItem {
public:

	float CumulativeDamageValue; // 0x0c(0x04)
	int32_t UniqueId; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlantUnitHeathInfo
// Size: 0x08 (Inherited: 0x00)
struct FPlantUnitHeathInfo {
public:

	int32_t UnitID; // 0x00(0x04)
	float HP; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakableDamageInfo
// Size: 0x20 (Inherited: 0x00)
struct FBreakableDamageInfo {
public:

	float CurrentHP; // 0x00(0x04)
	struct FVector HitLocation; // 0x04(0x0c)
	struct FVector HitNormal; // 0x10(0x0c)
	bool bIsAlreadyPlayDestruction; // 0x1c(0x01)
	bool bIsForceTriggerMarker; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakableItemWithIndex
// Size: 0x30 (Inherited: 0x00)
struct FBreakableItemWithIndex {
public:

	/*struct TSoftObjectPtr<ABreakableItemBase>*/char BreakableItemBase[0x28]; // 0x00(0x28)
	int32_t Index; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakableReplicationItem
// Size: 0x28 (Inherited: 0x20)
struct FBreakableReplicationItem : public FPropertyReplicationItem {
public:

	bool bBreak; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakableItemOneSectionData
// Size: 0x730 (Inherited: 0x00)
struct FBreakableItemOneSectionData {
public:

	float Health; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	/*struct UDestructibleItemDamagePrest**/char DamagePreset_Override[0x8]; // 0x08(0x08)
	/*struct TArray<struct TSoftObjectPtr<UStaticMesh>>*/char BrokenStaticMeshArray[0x10]; // 0x10(0x10)
	struct TArray<int32_t> BrokenStaticMeshDependentIndexArray; // 0x20(0x10)
	/*struct TArray<struct TSoftObjectPtr<USkeletalMesh>>*/char SkeletaMeshArray[0x10]; // 0x30(0x10)
	/*struct TArray<struct TSoftObjectPtr<UAnimationAsset>>*/char BreakingAnimationArray[0x10]; // 0x40(0x10)
	/*struct TArray<struct TSoftObjectPtr<USkeletalMesh>>*/char SkeletaMeshArray_HDOverride[0x10]; // 0x50(0x10)
	/*struct TArray<struct TSoftObjectPtr<UAnimationAsset>>*/char BreakingAnimationArray_HDOverride[0x10]; // 0x60(0x10)
	struct TArray<struct FTransform> AnimationRelativeTransformArray; // 0x70(0x10)
	float DestoryNormalMeshDelayTime; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct FName> ParticleSystemResourceIDArray; // 0x88(0x10)
	struct TArray<struct FTransform> ParticleSystemTransformArray; // 0x98(0x10)
	bool isFollowActorRotationPitch; // 0xa8(0x01)
	bool isFollowActorRotationYaw; // 0xa9(0x01)
	bool isFollowActorRotationRoll; // 0xaa(0x01)
	char pad_AB[0x5]; // 0xab(0x05)
	struct FTransform FXSocketRelativeTransform; // 0xb0(0x30)
	/*struct TArray<struct TSoftObjectPtr<ABreakableItemBase>>*/char RelatedBreakingItemArray[0x10]; // 0xe0(0x10)
	/*struct TArray<struct TSoftObjectPtr<AActor>>*/char RelatedDestoryAcotr[0x10]; // 0xf0(0x10)
	struct TArray<struct FBreakableItemWithIndex> RelatedBreakingItemWithIndexArray; // 0x100(0x10)
	int32_t AttakerId; // 0x110(0x04)
	struct FVector DamageEffectPosOffset; // 0x114(0x0c)
	struct TArray<struct UActorComponent*> RelatedBreakingComponentArray; // 0x120(0x10)
	float PreHealth; // 0x130(0x04)
	char pad_134[0x5fc]; // 0x134(0x5fc)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakableControlInfo
// Size: 0x20 (Inherited: 0x00)
struct FBreakableControlInfo {
public:

	/*struct UGPDestructibleComponent**/char DestructComp[0x8]; // 0x00(0x08)
	struct UGPSkeletalMeshComponent* SkeletalMeshComp; // 0x08(0x08)
	bool bIsPlayingAnim; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t AnimationBoneCount; // 0x14(0x04)
	bool bIsSimulatePhysics; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t PhysicsBoneCount; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakableQualityRow
// Size: 0x20 (Inherited: 0x10)
struct FBreakableQualityRow : public FDescRowBase {
public:

	int32_t MaxBreakingActorCount; // 0x10(0x04)
	int32_t MaxPlayingAnimationBoneCount; // 0x14(0x04)
	int32_t MaxPhysicSimulateBoneCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakablePhysicsData
// Size: 0x750 (Inherited: 0x00)
struct FBreakablePhysicsData {
public:

	bool bEnablePhysics; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float OpenPhyxTime; // 0x04(0x04)
	int32_t MaxSimulateBoneNum; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FName, float> BulletImpulseArray; // 0x10(0x50)
	bool bOpenBrokenLinearImpulse; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float LinearImpulseSizeScale; // 0x64(0x04)
	float RadialImpulseStrength; // 0x68(0x04)
	float ImpulseRadius; // 0x6c(0x04)
	struct FVector ImpulseOriginOffset; // 0x70(0x0c)
	bool bImpulseVelChange; // 0x7c(0x01)
	bool isOpenHitEffect; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	float CanHidePercentage; // 0x80(0x04)
	float MinHitVelocitySize; // 0x84(0x04)
	float HitParticleScaleForMaxBone; // 0x88(0x04)
	struct FName ParticleName; // 0x8c(0x08)
	bool OpenPhxBlend; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct FRuntimeFloatCurve PhxBlendCurve; // 0x98(0xa0)
	float PhxBlendEvalInterval; // 0x138(0x04)
	bool bOpenPhysxWritebake; // 0x13c(0x01)
	bool bInheritVelocity; // 0x13d(0x01)
	char pad_13E[0x2]; // 0x13e(0x02)
	/*struct TSoftObjectPtr<UPhysicalMaterial>*/char OverridePhysicalMatPtr[0x28]; // 0x140(0x28)
	struct UPhysicalMaterial* OverridePhysicalMat; // 0x168(0x08)
	char pad_170[0x5e0]; // 0x170(0x5e0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakableRigidPhysicsData
// Size: 0x10 (Inherited: 0x00)
struct FBreakableRigidPhysicsData {
public:

	float ImpulseValue; // 0x00(0x04)
	float MassKG; // 0x04(0x04)
	float RigidItemImpulseValue; // 0x08(0x04)
	bool bRigidItemImpulseUseVelChange; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RedeployGuideInfo
// Size: 0x40 (Inherited: 0x00)
struct FRedeployGuideInfo {
public:

	enum class EBattleFieldInGameGuideType GuideType; // 0x00(0x01)
	enum class EBattleFieldInGameGuideGroup GuideGroup; // 0x01(0x01)
	enum class EBattleFieldInGameGuideGroupType GuideGroupType; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t GuideID; // 0x04(0x04)
	int32_t GuidePopFunctionID; // 0x08(0x04)
	int32_t GuidePopWindowId; // 0x0c(0x04)
	enum class EBreakthroughRedeployOneGuideStatus GuideStatus; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t Camp; // 0x14(0x04)
	struct TArray<enum class EBattleFieldInGameGuideType> CloseGuideList; // 0x18(0x10)
	int32_t ShowGuideCommonEventLogID; // 0x28(0x04)
	int32_t CloseGuideCommonEventLogID; // 0x2c(0x04)
	char pad_30[0x10]; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakthroughBalanceDataRow
// Size: 0x68 (Inherited: 0x10)
struct FBreakthroughBalanceDataRow : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<int32_t, struct FBreakthroughBalanceData> BreakthroughBalanceDataMap; // 0x18(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RankSkillInfo
// Size: 0x70 (Inherited: 0x00)
struct FRankSkillInfo {
public:

	struct FText SkillName; // 0x00(0x18)
	int32_t SkillId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FSoftObjectPath SkillIcon; // 0x20(0x18)
	struct FSoftObjectPath SkillIconCantUse; // 0x38(0x18)
	struct FText SkillItem; // 0x50(0x18)
	enum class ERankSkillType RankSkillType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RankInfo
// Size: 0x30 (Inherited: 0x00)
struct FRankInfo {
public:

	struct FText RankName; // 0x00(0x18)
	struct FSoftObjectPath RankIcon; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakthroughRebornConfigRow
// Size: 0x248 (Inherited: 0x10)
struct FBreakthroughRebornConfigRow : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<enum class EEstimateName, struct FEstimateNameScore> SectorAnchorEstimateNames; // 0x18(0x50)
	float SectorAnchorEstimateOffest; // 0x68(0x04)
	float SectorAnchorEnterDangerousPlayerAliveTimeLimit; // 0x6c(0x04)
	float SectorAnchorDangerousSpawnAreaAdditionalWeight; // 0x70(0x04)
	float SectorAnchorChooseSafeSpawnAreaWeightThreshold; // 0x74(0x04)
	float DangerousDuration; // 0x78(0x04)
	float PointBaseForLastEnemyReborneTime; // 0x7c(0x04)
	bool bIsUseDeathInfoOfNearWhenCalcRebronEstimate; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float WeightOfDeathInfoScore; // 0x84(0x04)
	float MaxDistanceOfEffectiveDeathWhenCalcRebronEstimate; // 0x88(0x04)
	float MaxTimeOfEffectiveDeathWhenCalcRebronEstimate; // 0x8c(0x04)
	struct TMap<struct FName, struct FSpawnAreaConfig> SectorAnchorDedicateRebornConfig; // 0x90(0x50)
	struct TMap<enum class EEstimateName, struct FEstimateNameScore> SectorCampEstimateNames; // 0xe0(0x50)
	float SectorCampEstimateOffest; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct TArray<struct FTeamRebornOffset> TeamRebornOffsets; // 0x138(0x10)
	struct TMap<enum class EEstimateName, struct FEstimateNameScore> TeamEstimateNames; // 0x148(0x50)
	struct TArray<struct FTeamRebornOffset> RebornFlagRebornOffsets; // 0x198(0x10)
	struct TMap<enum class EEstimateName, struct FEstimateNameScore> RebornFlagEstimateNames; // 0x1a8(0x50)
	float RebornFlagNavMeshCheckRange; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct TArray<int32_t> HightCheck; // 0x200(0x10)
	bool UseDonwTrace; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	float InjuredTimeLimit; // 0x214(0x04)
	float AirHitTimeLimit; // 0x218(0x04)
	float FireTimeLimit; // 0x21c(0x04)
	float AimTimeLimit; // 0x220(0x04)
	float NearEnemyDistanceLimit; // 0x224(0x04)
	float MapFootSoldierRedeployTime; // 0x228(0x04)
	bool bIsEnableSightDetectionForAllEnemies; // 0x22c(0x01)
	bool bIsEnableFourMoreXRayChecksForCalc; // 0x22d(0x01)
	char pad_22E[0x2]; // 0x22e(0x02)
	float ScoreThresholdForOptimizedPerformance; // 0x230(0x04)
	float DangerDistanceOfEnemy; // 0x234(0x04)
	bool bIsUseDeathInfoOfNearWhenCalcTeamRebronEstimate; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	float WeightOfDeathInfoScoreWhenCalcTeamRebronEstimate; // 0x23c(0x04)
	float MaxDistanceOfEffectiveDeathWhenCalcTeamRebronEstimate; // 0x240(0x04)
	float MaxTimeOfEffectiveDeathWhenCalcTeamRebronEstimate; // 0x244(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.EstimateNameScore
// Size: 0x0c (Inherited: 0x00)
struct FEstimateNameScore {
public:

	float Configuration; // 0x00(0x04)
	float radius; // 0x04(0x04)
	float Weight; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.TeamRebornOffset
// Size: 0x08 (Inherited: 0x00)
struct FTeamRebornOffset {
public:

	float radius; // 0x00(0x04)
	float DeltaYaw; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SpawnAreaConfig
// Size: 0x80 (Inherited: 0x00)
struct FSpawnAreaConfig {
public:

	struct FName SpawnAreaID; // 0x00(0x08)
	struct TMap<enum class EEstimateName, struct FEstimateNameScore> SectorAnchorEstimateNames; // 0x08(0x50)
	float SectorAnchorEstimateOffest; // 0x58(0x04)
	float SectorAnchorEnterDangerousPlayerAliveTimeLimit; // 0x5c(0x04)
	float SectorAnchorDangerousSpawnAreaAdditionalWeight; // 0x60(0x04)
	float SectorAnchorChooseSafeSpawnAreaWeightThreshold; // 0x64(0x04)
	float DangerousDuration; // 0x68(0x04)
	float PointBaseForLastEnemyReborneTime; // 0x6c(0x04)
	bool bIsUseDeathInfoOfNearWhenCalcRebronEstimate; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float WeightOfDeathInfoScore; // 0x74(0x04)
	float MaxDistanceOfEffectiveDeathWhenCalcRebronEstimate; // 0x78(0x04)
	float MaxTimeOfEffectiveDeathWhenCalcRebronEstimate; // 0x7c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakthroughDynamicMusicRow
// Size: 0x50 (Inherited: 0x10)
struct FBreakthroughDynamicMusicRow : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	int32_t Stage; // 0x14(0x04)
	int32_t VoteNum; // 0x18(0x04)
	float TimeLeft; // 0x1c(0x04)
	float OccupyProgress; // 0x20(0x04)
	float OvertimeOnlyOneAnchorOccupyProgress; // 0x24(0x04)
	float OvertimeMultiAnchorOccupyProgress; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString UIAudioStr; // 0x30(0x10)
	struct FString StopUIAudioStr; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BattleFieldModeConfig
// Size: 0xc0 (Inherited: 0x00)
struct FBattleFieldModeConfig {
public:

	int32_t MapID; // 0x00(0x04)
	int32_t VoteNum; // 0x04(0x04)
	int32_t MaxVoteNum; // 0x08(0x04)
	int32_t LowVoteNum; // 0x0c(0x04)
	float ZeroEndTime; // 0x10(0x04)
	float EdgeKillTime; // 0x14(0x04)
	int32_t KillBonus; // 0x18(0x04)
	bool bRedeployViewUseImgBg; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float MinScale; // 0x20(0x04)
	float MaxScale; // 0x24(0x04)
	float FirstTimeSelectScale; // 0x28(0x04)
	float NormalSelectScale; // 0x2c(0x04)
	float FirstDeployFirstTimeSelectScale; // 0x30(0x04)
	float FirstDeployNormalSelectScale; // 0x34(0x04)
	float FirstDeployGlobalKeepTime; // 0x38(0x04)
	float ReDeployGlobalKeepTime; // 0x3c(0x04)
	float ReDeployDelayShowVehicleHubItem; // 0x40(0x04)
	bool bHasSeaBase; // 0x44(0x01)
	char pad_45[0xb]; // 0x45(0x0b)
	float EmptyVehicleDecreaseHPMinTime; // 0x50(0x04)
	float EmptyVehicleDecreaseHPPercent; // 0x54(0x04)
	float MinVehicleDecreaseHPDist; // 0x58(0x04)
	float GuideAutoCloseDuration; // 0x5c(0x04)
	float PlayWindSoundDistance; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UGPAudioEventAsset* PlayWindSoundEventPath; // 0x68(0x08)
	struct UGPAudioEventAsset* StopWindSoundEventPath; // 0x70(0x08)
	struct FName WindSoundEventDistanceRtpcName; // 0x78(0x08)
	struct TArray<enum class EBattleFieldForcesType> BattleFieldForcesTypeArr; // 0x80(0x10)
	bool bOpenGuide; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<struct FRedeployGuideInfo> RedeployGuideInfoList; // 0x98(0x10)
	struct TArray<struct FRedeployGuideInfo> RedeployGuideInfoListHD; // 0xa8(0x10)
	float HelicopterFlyHeight; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BuffMonitorConfigRow
// Size: 0x40 (Inherited: 0x10)
struct FBuffMonitorConfigRow : public FDescRowBase {
public:

	/*struct TSoftClassPtr<UObject>*/char BuffMonitorClass[0x28]; // 0x10(0x28)
	bool bEnable; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterBuffGroup
// Size: 0x18 (Inherited: 0x00)
struct FCharacterBuffGroup {
public:

	uint32_t BuffId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCharacterBuff> Buffs; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ClientAttributeEffectContext
// Size: 0x98 (Inherited: 0x00)
struct FClientAttributeEffectContext {
public:

	uint32_t BuffId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	uint64_t Guid; // 0x08(0x08)
	struct FGPAttributeEffect AttributeEffect; // 0x10(0x88)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterBuffFastArray
// Size: 0x28 (Inherited: 0x00)
struct FCharacterBuffFastArray {
public:

	struct TArray<uint32_t> RepUpdateIndex; // 0x00(0x10)
	struct TArray<struct FCharacterBuff> Items; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BuffClientPerformanceParticleData
// Size: 0x2c (Inherited: 0x00)
struct FBuffClientPerformanceParticleData {
public:

	struct FName ResourceFXName; // 0x00(0x08)
	struct FName ParticleBoneName; // 0x08(0x08)
	float DelayRemoveCharacterParticleTime; // 0x10(0x04)
	struct FVector ParticleScale; // 0x14(0x0c)
	enum class EOutLineRole ParticleRole; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FName ParticleMeshName; // 0x24(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SpecifyTimePlayAudio
// Size: 0x80 (Inherited: 0x00)
struct FSpecifyTimePlayAudio {
public:

	struct FString AudioName; // 0x00(0x10)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char Audio3D[0x28]; // 0x10(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char Audio2D[0x28]; // 0x38(0x28)
	float Period; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<float> StartTimes; // 0x68(0x10)
	int32_t Priority; // 0x78(0x04)
	int32_t BindBuffID; // 0x7c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BuffAudioPriority
// Size: 0x08 (Inherited: 0x00)
struct FBuffAudioPriority {
public:

	uint32_t BuffId; // 0x00(0x04)
	int32_t Priority; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CameraSlowEffectData
// Size: 0x04 (Inherited: 0x00)
struct FCameraSlowEffectData {
public:

	float LastTime; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CameraDelayEffectData
// Size: 0x08 (Inherited: 0x00)
struct FCameraDelayEffectData {
public:

	float LastTime; // 0x00(0x04)
	float DelayTime; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMBuffBaseClassRow
// Size: 0x40 (Inherited: 0x10)
struct FDFMBuffBaseClassRow : public FDescRowBase {
public:

	uint32_t BuffId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TSoftClassPtr<UObject>*/char BuffEntityClass[0x28]; // 0x18(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMBuffEffectRow
// Size: 0x1e8 (Inherited: 0x10)
struct FDFMBuffEffectRow : public FDescRowBase {
public:

	uint32_t BuffId; // 0x10(0x04)
	enum class ECharacterBuffDebuffType BuffDebuffType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<enum class EBuffDisableTag> BuffDisableTagArray; // 0x18(0x10)
	bool IsDisplay; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FText DisplayName; // 0x30(0x18)
	struct FText Description; // 0x48(0x18)
	bool IsInstant; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float Duration; // 0x64(0x04)
	struct FGPGameplayAttribute DurationMultAttr; // 0x68(0x38)
	enum class EBuffApplyAttributeType BuffApplyAttributeType; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<uint32_t> BasicBuffIDArray; // 0xa8(0x10)
	struct FGameplayTagContainer TagContainer; // 0xb8(0x20)
	struct FName BuffType; // 0xd8(0x08)
	enum class EStackType StackType; // 0xe0(0x01)
	bool bOnlyRefreshTime; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)
	struct TArray<enum class ECharacterPart> StackPart; // 0xe8(0x10)
	uint32_t MaxStackCount; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct TArray<struct FName> RemoveBuffTypeArray; // 0x100(0x10)
	int32_t RemoveBuffNum; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct TArray<struct FName> RestrainBuffTypeArray; // 0x118(0x10)
	int32_t MaxValidNum; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<struct FName> CancelBuffTypeArray; // 0x130(0x10)
	struct TArray<struct FBuffActionConfig> ActionConfigs; // 0x140(0x10)
	/*struct TSoftObjectPtr<UPaperSprite>*/char BuffIconPath[0x28]; // 0x150(0x28)
	bool HasTriggerCD; // 0x178(0x01)
	char pad_179[0x3]; // 0x179(0x03)
	float TriggerCDTime; // 0x17c(0x04)
	struct FText AddTips; // 0x180(0x18)
	struct FText RemoveTips; // 0x198(0x18)
	uint32_t Priority; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct TArray<struct FName> BuffConflictTag; // 0x1b8(0x10)
	bool HurtRemove; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	float HurtPauseTime; // 0x1cc(0x04)
	bool NeedRemoveSucess; // 0x1d0(0x01)
	bool OnlyTipsButNoShowInBuffList; // 0x1d1(0x01)
	enum class EBuffImmunityType ImmunityType; // 0x1d2(0x01)
	char pad_1D3[0x1]; // 0x1d3(0x01)
	uint32_t TriggerCounter; // 0x1d4(0x04)
	float ContinueTime; // 0x1d8(0x04)
	bool bDifferTeam; // 0x1dc(0x01)
	char pad_1DD[0x3]; // 0x1dd(0x03)
	uint32_t ImmunityBuffId; // 0x1e0(0x04)
	uint32_t ReplaceBuffId; // 0x1e4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BuffActionConfig
// Size: 0x0c (Inherited: 0x00)
struct FBuffActionConfig {
public:

	enum class EBuffActionTriggerType TriggerType; // 0x00(0x01)
	enum class EBuffAction BuffAction; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Param01; // 0x04(0x04)
	float Param02; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BuffConflictRow
// Size: 0x20 (Inherited: 0x10)
struct FBuffConflictRow : public FDescRowBase {
public:

	struct FName BuffConflictTag; // 0x10(0x08)
	enum class EBuffConflictOp ConflictOp; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AddBuffParam
// Size: 0x30 (Inherited: 0x00)
struct FAddBuffParam {
public:

	struct AActor* MakerActor; // 0x00(0x08)
	struct AActor* MakerInsitgator; // 0x08(0x08)
	enum class ECharacterPart CharacterPart; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FReplaceBuffAttributeOp> AttributeOps; // 0x18(0x10)
	int32_t SkillId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BuffKillCDAWard
// Size: 0x0c (Inherited: 0x00)
struct FBuffKillCDAWard {
public:

	float AddTime; // 0x00(0x04)
	float AddPercent; // 0x04(0x04)
	uint32_t CDAWardKillType; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMBuffRow
// Size: 0x40 (Inherited: 0x10)
struct FDFMBuffRow : public FDescRowBase {
public:

	uint32_t BasicBuffID; // 0x10(0x04)
	bool IsPeriod; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float Period; // 0x18(0x04)
	bool InstantEffect; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct TArray<uint32_t> AttributeOperateIDArray; // 0x20(0x10)
	struct TArray<struct FBuffAttributeMod> AttributeOperates; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BuffAttributeMod
// Size: 0x250 (Inherited: 0x00)
struct FBuffAttributeMod {
public:

	enum class EBuffAttributeDataType DataType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t AttributeID; // 0x04(0x04)
	uint64_t AttackerValueId; // 0x08(0x08)
	struct TArray<struct FName> AttributeNames; // 0x10(0x10)
	enum class AttributeAdditionType GameplayModOp; // 0x20(0x01)
	enum class EBuffAttributeModType BuffModType; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct FRuntimeFloatCurve FloatCurve; // 0x28(0xa0)
	float OperateValue; // 0xc8(0x04)
	float HPDamage; // 0xcc(0x04)
	float ArmorDamage; // 0xd0(0x04)
	enum class EBuffAttributeModType DamageModType; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct FRuntimeFloatCurve HPDamageFloatCurve; // 0xd8(0xa0)
	struct FRuntimeFloatCurve ArmorFloatCurve; // 0x178(0xa0)
	struct FGPGameplayAttribute PostMultiplyAttribute; // 0x218(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BuffControllerConfig
// Size: 0x10 (Inherited: 0x00)
struct FBuffControllerConfig {
public:

	struct FName ControllerAttributeNames; // 0x00(0x08)
	enum class AttributeAdditionType ControllerModOp; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Value; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FlashDroneLightSpotLightCurveConfig
// Size: 0x70 (Inherited: 0x00)
struct FFlashDroneLightSpotLightCurveConfig {
public:

	/*struct TSoftObjectPtr<UCurveFloat>*/char IntensityCurveFloatPath[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char OuterConeAngleCurveFloatPath[0x28]; // 0x28(0x28)
	struct FName SpotLightTagName; // 0x50(0x08)
	struct USpotLightComponent* SpotLightComponent; // 0x58(0x08)
	struct UCurveFloat* IntensityCurveFloat; // 0x60(0x08)
	struct UCurveFloat* OuterConeAngleCurveFloat; // 0x68(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FlashDroneLightCurveConfig
// Size: 0x78 (Inherited: 0x00)
struct FFlashDroneLightCurveConfig {
public:

	/*struct TSoftObjectPtr<UCurveFloat>*/char CurveFloatPath[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UCurveVector>*/char CurveVectorPath[0x28]; // 0x28(0x28)
	struct FName ParamName; // 0x50(0x08)
	struct FName MaterialTagName; // 0x58(0x08)
	struct UMeshComponent* MeshCom; // 0x60(0x08)
	struct UCurveFloat* CurveFloat; // 0x68(0x08)
	struct UCurveVector* CurveVector; // 0x70(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ChangeableContainerConfigRow
// Size: 0x80 (Inherited: 0x10)
struct FChangeableContainerConfigRow : public FDescRowBase {
public:

	enum class EChangeableContainerType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UClass* DefaultBlueprintVariation; // 0x18(0x08)
	struct TMap<uint64_t, struct UClass*> ChangeableContainerEventItems; // 0x20(0x50)
	struct TArray<struct FChangeableContainerTimeItemConfig> ChangeableContainerTimeItems; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ChangeableContainerTimeItemConfig
// Size: 0x38 (Inherited: 0x00)
struct FChangeableContainerTimeItemConfig {
public:

	struct FDateTime StartTime; // 0x00(0x08)
	struct FDateTime EndTime; // 0x08(0x08)
	struct TArray<enum class EDFMGamePlayMode> Modes; // 0x10(0x10)
	struct TArray<enum class EDFMGamePlaySubMode> SubModes; // 0x20(0x10)
	struct UClass* BlueprintVariation; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.EquipmentInfo
// Size: 0x30 (Inherited: 0x00)
struct FEquipmentInfo {
public:

	uint64_t ItemID; // 0x00(0x08)
	uint64_t gid; // 0x08(0x08)
	float Health; // 0x10(0x04)
	float MaxHealth; // 0x14(0x04)
	float Durability; // 0x18(0x04)
	float MaxDurability; // 0x1c(0x04)
	float TotalEquipSeceonds; // 0x20(0x04)
	float LastEquipTimeSeconds; // 0x24(0x04)
	float TotalApplyDamage; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CampFashionInfo
// Size: 0x10 (Inherited: 0x00)
struct FCampFashionInfo {
public:

	int32_t Camp; // 0x00(0x04)
	struct FName FashionConfigRowName; // 0x04(0x08)
	bool EnableRandomEquip; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterHeroResourceAttachMeshDataMap
// Size: 0x50 (Inherited: 0x00)
struct FCharacterHeroResourceAttachMeshDataMap {
public:

	struct TMap<struct FName, struct FCharacterHeroResourceAttachMeshData> DataMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterHeroResourceAnimDataMap
// Size: 0x50 (Inherited: 0x00)
struct FCharacterHeroResourceAnimDataMap {
public:

	struct TMap<struct FName, struct FCharacterHeroResourceAnimDataArray> DataMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterHeroResourceAnimDataArray
// Size: 0x50 (Inherited: 0x00)
struct FCharacterHeroResourceAnimDataArray {
public:

	struct TMap<int32_t, struct FCharacterHeroResourceAnim> HeroResourceAnimMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterResourceDataNameMap
// Size: 0x50 (Inherited: 0x00)
struct FCharacterResourceDataNameMap {
public:

	struct TMap<int32_t, struct FName> DataMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterHeroResourceDataMap
// Size: 0x50 (Inherited: 0x00)
struct FCharacterHeroResourceDataMap {
public:

	struct TMap<struct FName, struct FCharacterHeroResourceData> DataMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.WeaponStaggerSequence
// Size: 0x60 (Inherited: 0x00)
struct FWeaponStaggerSequence {
public:

	/*struct TSet<enum class EWeaponItemType>*/char WeaponTypes[0x50]; // 0x00(0x50)
	struct TArray<enum class EWeaponStaggerType> StaggerSequence; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIStaggerMotionConfigTableRow
// Size: 0x20 (Inherited: 0x10)
struct FAIStaggerMotionConfigTableRow : public FDescRowBase {
public:

	struct TArray<struct FAIStaggerMotionConfig> StaggerConfigs; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIStaggerMotionConfig
// Size: 0x60 (Inherited: 0x00)
struct FAIStaggerMotionConfig {
public:

	enum class ECharacterPart HitPart; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float YawMin; // 0x04(0x04)
	float YawMax; // 0x08(0x04)
	struct FName AnimName; // 0x0c(0x08)
	bool bShouldTurnToTarget; // 0x14(0x01)
	enum class EWeaponStaggerType WeaponType; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct UClass* MotionActionClass; // 0x18(0x08)
	struct FGameplayTagContainer MotionStateTags; // 0x20(0x20)
	struct FGameplayTagContainer EndStateTags; // 0x40(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.StaggerAnimConfigWithDirRange
// Size: 0x18 (Inherited: 0x00)
struct FStaggerAnimConfigWithDirRange {
public:

	enum class ECharacterPart HitPart; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float YawMin; // 0x04(0x04)
	float YawMax; // 0x08(0x04)
	struct FName AnimName; // 0x0c(0x08)
	enum class EWeaponStaggerType WeaponType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AINameClassRow
// Size: 0x28 (Inherited: 0x10)
struct FAINameClassRow : public FDescRowBase {
public:

	enum class EAINameClass AINameClass; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FString> AINamesInThisClass; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIDelaySpawnRow
// Size: 0x20 (Inherited: 0x10)
struct FAIDelaySpawnRow : public FDescRowBase {
public:

	float MinSpawnDistance; // 0x10(0x04)
	float MaxSpawnDistance; // 0x14(0x04)
	float SpawnByAILabRate; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PVPBotArmedPreset
// Size: 0x68 (Inherited: 0x10)
struct FPVPBotArmedPreset : public FDescRowBase {
public:

	int32_t RobotID; // 0x10(0x04)
	int32_t RobotLevel; // 0x14(0x04)
	int32_t ExpertId; // 0x18(0x04)
	int32_t ArmedForceID; // 0x1c(0x04)
	int32_t Bag; // 0x20(0x04)
	int32_t pos; // 0x24(0x04)
	uint64_t PropId; // 0x28(0x08)
	uint64_t FashionID; // 0x30(0x08)
	struct FString BanMapIDs; // 0x38(0x10)
	char pad_48[0x20]; // 0x48(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PvpAiStylePool
// Size: 0x30 (Inherited: 0x10)
struct FPvpAiStylePool : public FDescRowBase {
public:

	struct TArray<struct FPvpAiStylePoolItem> Items; // 0x10(0x10)
	struct TArray<struct FPvpAiFightStyleWeight> FightStyles; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PvpAiFightStyleWeight
// Size: 0x08 (Inherited: 0x00)
struct FPvpAiFightStyleWeight {
public:

	enum class EPVPAIFightStyle FightStyle; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Weight; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PvpAiStylePoolItem
// Size: 0x0c (Inherited: 0x00)
struct FPvpAiStylePoolItem {
public:

	struct FName DifficultyName; // 0x00(0x08)
	float Probability; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PvpAiStyleConfig
// Size: 0x28 (Inherited: 0x10)
struct FPvpAiStyleConfig : public FDescRowBase {
public:

	float CampWeightScale; // 0x10(0x04)
	struct FName AntiVehicleConfig; // 0x14(0x08)
	struct FName RescueConfig; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PvpAiDifficultyPool
// Size: 0x20 (Inherited: 0x10)
struct FPvpAiDifficultyPool : public FDescRowBase {
public:

	struct TArray<struct FPvpAiDifficultyPoolItem> Items; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PvpAiDifficultyPoolItem
// Size: 0x0c (Inherited: 0x00)
struct FPvpAiDifficultyPoolItem {
public:

	struct FName DifficultyName; // 0x00(0x08)
	float Probability; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PVPAiPlayerSpawnTemplate
// Size: 0x88 (Inherited: 0x10)
struct FPVPAiPlayerSpawnTemplate : public FDescRowBase {
public:

	/*struct TSoftClassPtr<UObject>*/char ControllerBP[0x28]; // 0x10(0x28)
	/*struct TSoftClassPtr<UObject>*/char CharacterBP[0x28]; // 0x38(0x28)
	/*struct TSoftObjectPtr<UBehaviorTree>*/char DefaultBehaviorTreeBP[0x28]; // 0x60(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIHitPart
// Size: 0x28 (Inherited: 0x10)
struct FAIHitPart : public FDescRowBase {
public:

	struct TArray<struct FAIDistanceHitPartProbabilityConf> HitPartDistanceConf; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIDistanceHitPartProbabilityConf
// Size: 0x18 (Inherited: 0x00)
struct FAIDistanceHitPartProbabilityConf {
public:

	float DistanceLess; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FAIDistanceHitPartProbability> ProbabilityList; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIDistanceHitPartProbability
// Size: 0x08 (Inherited: 0x00)
struct FAIDistanceHitPartProbability {
public:

	enum class ECharacterPart BodyPart; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Weight; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AITraceTemplate
// Size: 0x130 (Inherited: 0x10)
struct FAITraceTemplate : public FDescRowBase {
public:

	float NotAllCoreHitExposePercent; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UAnimSequence* StandPoseAnim; // 0x18(0x08)
	struct FString StandAnimName; // 0x20(0x10)
	struct TArray<struct FAISightTraceTemplate> StandTemplate; // 0x30(0x10)
	struct UAnimSequence* CrouchPoseAnim; // 0x40(0x08)
	struct FString CrouchAnimName; // 0x48(0x10)
	struct TArray<struct FAISightTraceTemplate> CrouchTemplate; // 0x58(0x10)
	struct UAnimSequence* ProneAnim; // 0x68(0x08)
	struct FString ProneAnimName; // 0x70(0x10)
	struct TArray<struct FAISightTraceTemplate> ProneTemplate; // 0x80(0x10)
	struct UAnimSequence* StandLeanLeftAnim; // 0x90(0x08)
	struct FString StandLeanLeftAnimName; // 0x98(0x10)
	struct TArray<struct FAISightTraceTemplate> StandLeanLeftTemplate; // 0xa8(0x10)
	struct UAnimSequence* StandLeanRightAnim; // 0xb8(0x08)
	struct FString StandLeanRightAnimName; // 0xc0(0x10)
	struct TArray<struct FAISightTraceTemplate> StandLeanRightTemplate; // 0xd0(0x10)
	struct UAnimSequence* CrouchLeanLeftAnim; // 0xe0(0x08)
	struct FString CrouchLeanLeftAnimName; // 0xe8(0x10)
	struct TArray<struct FAISightTraceTemplate> CrouchLeanLeftTemplate; // 0xf8(0x10)
	struct UAnimSequence* CrouchLeanRightAnim; // 0x108(0x08)
	struct FString CrouchLeanRightAnimName; // 0x110(0x10)
	struct TArray<struct FAISightTraceTemplate> CrouchLeanRightTemplate; // 0x120(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AISightTraceTemplate
// Size: 0x28 (Inherited: 0x00)
struct FAISightTraceTemplate {
public:

	struct FVector PlaneOffset; // 0x00(0x0c)
	float Weight; // 0x0c(0x04)
	struct FString Name; // 0x10(0x10)
	bool IsCoreArea; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SpawnAIRandomInfo
// Size: 0x20 (Inherited: 0x00)
struct FSpawnAIRandomInfo {
public:

	struct UDataTable* NpcTemplateTable; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PreloadBaseAIInfoInLevels
// Size: 0x28 (Inherited: 0x00)
struct FPreloadBaseAIInfoInLevels {
public:

	struct FName MapName; // 0x00(0x08)
	struct FString MapPath; // 0x08(0x10)
	struct TArray<struct FSpawnBaseAIInfo> SpawnBaseAIInfoArray; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SpawnBaseAIInfo
// Size: 0x30 (Inherited: 0x00)
struct FSpawnBaseAIInfo {
public:

	struct UDataTable* NpcTemplateTable; // 0x00(0x08)
	struct FString NpcName; // 0x08(0x10)
	struct FVector SpawnLocation; // 0x18(0x0c)
	int32_t BatchNum; // 0x24(0x04)
	int32_t inx; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BotAITable
// Size: 0x20 (Inherited: 0x10)
struct FBotAITable : public FDescRowBase {
public:

	struct UDataTable* NpcTemplateTable; // 0x10(0x08)
	struct FName NpcName; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GroupTemplateTable
// Size: 0x28 (Inherited: 0x10)
struct FGroupTemplateTable : public FDescRowBase {
public:

	struct TArray<struct FGroupNpcName> GroupMember; // 0x10(0x10)
	struct UClass* ConfigObjectClass; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GroupNpcName
// Size: 0x10 (Inherited: 0x00)
struct FGroupNpcName {
public:

	struct UDataTable* NpcTemplateTable; // 0x00(0x08)
	struct FName NpcName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AINpcItemDrop
// Size: 0x20 (Inherited: 0x00)
struct FAINpcItemDrop {
public:

	struct FName ItemID; // 0x00(0x08)
	struct UClass* ItemClass; // 0x08(0x08)
	int32_t DropCount; // 0x10(0x04)
	int32_t RandomSection; // 0x14(0x04)
	float DropPercentage; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterAttributeEvent
// Size: 0x90 (Inherited: 0x00)
struct FCharacterAttributeEvent {
public:

	struct FGPGameplayAttribute AttribtueToDetect; // 0x00(0x38)
	enum class EAttributeChangeOp OperationType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FGPGameplayAttribute MaxAttributeRelated; // 0x40(0x38)
	float ThresHold; // 0x78(0x04)
	bool OnlyResetTriggerWhileOpFailed; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct TArray<int32_t> BuffId; // 0x80(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIBuff
// Size: 0x08 (Inherited: 0x00)
struct FAIBuff {
public:

	int32_t BuffId; // 0x00(0x04)
	enum class ECharacterPart Part; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIPartHealth
// Size: 0x0c (Inherited: 0x00)
struct FAIPartHealth {
public:

	enum class ECharacterPart Part; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MaxHealth; // 0x04(0x04)
	int32_t Health; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIArmorDamageScalerWithArmorTable
// Size: 0x20 (Inherited: 0x10)
struct FAIArmorDamageScalerWithArmorTable : public FDescRowBase {
public:

	struct TArray<struct UCurveFloat*> D_Values; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterProfileRow
// Size: 0x50 (Inherited: 0x10)
struct FCharacterProfileRow : public FDescRowBase {
public:

	struct TArray<struct FName> FashionList; // 0x10(0x10)
	bool bUseDefaultWeapons; // 0x20(0x01)
	bool bUseDefaultItems; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct TArray<struct FString> DefaultItems; // 0x28(0x10)
	struct TArray<struct FSkinInfo> DefaultSkins; // 0x38(0x10)
	struct FName ArchiveItemID; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SkinInfo
// Size: 0x10 (Inherited: 0x00)
struct FSkinInfo {
public:

	uint64_t SkinId; // 0x00(0x08)
	uint64_t FancyColorID; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AICurrentBehavior
// Size: 0x40 (Inherited: 0x00)
struct FAICurrentBehavior {
public:

	struct UBehaviorTree* DefaultBehaviour; // 0x00(0x08)
	struct UBehaviorTree* FightBehavior; // 0x08(0x08)
	struct UBehaviorTree* LeaveFightBehavior; // 0x10(0x08)
	struct UBehaviorTree* AlertBehavior; // 0x18(0x08)
	struct UBehaviorTree* LeisureBehavior; // 0x20(0x08)
	struct UBehaviorTree* AbilityReactBehavior; // 0x28(0x08)
	struct UBehaviorTree* ShootBehavior; // 0x30(0x08)
	struct UBehaviorTree* DyingBehavior; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GlobalAIDifficultyFactor
// Size: 0x14 (Inherited: 0x00)
struct FGlobalAIDifficultyFactor {
public:

	float HitRateFactor; // 0x00(0x04)
	float DamageFactor; // 0x04(0x04)
	float HPFactor; // 0x08(0x04)
	float ItemValueFactor; // 0x0c(0x04)
	float MoveRateFactor; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIArmorProtectParts
// Size: 0x18 (Inherited: 0x10)
struct FAIArmorProtectParts : public FDescRowBase {
public:

	bool DoProtect; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PVPAIBehavior
// Size: 0x38 (Inherited: 0x10)
struct FPVPAIBehavior : public FDescRowBase {
public:

	enum class EHeroType Hero; // 0x10(0x01)
	enum class EPVPAIFightStyle Style; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct UDataTable* Camp; // 0x18(0x08)
	struct UDataTable* Flank; // 0x20(0x08)
	struct UDataTable* Move; // 0x28(0x08)
	struct UDataTable* Retreat; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PVPAIFightStyleScoresConfig
// Size: 0x30 (Inherited: 0x10)
struct FPVPAIFightStyleScoresConfig : public FDescRowBase {
public:

	enum class EPVPAIFightStyle Style; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MainTargetTreat_Medium; // 0x14(0x04)
	float MainTargetTreat_Hight; // 0x18(0x04)
	float MainTargetVulnerable_Medium; // 0x1c(0x04)
	float MainTargetVulnerable_High; // 0x20(0x04)
	float EnvironmentTreat_Medium; // 0x24(0x04)
	float EnvironmentTreat_High; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AISpecialAttackDamage
// Size: 0x50 (Inherited: 0x10)
struct FAISpecialAttackDamage : public FDescRowBase {
public:

	float AIMeleeDamage; // 0x10(0x04)
	float AIMeleeDamageMax; // 0x14(0x04)
	float AIMeleeArmorDamage; // 0x18(0x04)
	float AIMeleeArmorDamageMax; // 0x1c(0x04)
	int32_t MeleeAttackLevel; // 0x20(0x04)
	float AIGrenadDamage; // 0x24(0x04)
	float AIGrenadeDamageMax; // 0x28(0x04)
	float AIGrenadeArmorDamage; // 0x2c(0x04)
	float AIGrenadeArmorDamageMax; // 0x30(0x04)
	int32_t GrenadeAttackLevel; // 0x34(0x04)
	float AIMachineGunDamage; // 0x38(0x04)
	float AIMachineGunDamageMax; // 0x3c(0x04)
	float AIMachineGunArmorDamage; // 0x40(0x04)
	float AIMachineGunArmorDamageMax; // 0x44(0x04)
	int32_t MachineGunAttackLevel; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AISenseDifficulty
// Size: 0xc8 (Inherited: 0x10)
struct FAISenseDifficulty : public FDescRowBase {
public:

	int64_t ExpertId; // 0x10(0x08)
	float WeaponSoundDistance; // 0x18(0x04)
	float NearShootGunSoundDistance; // 0x1c(0x04)
	float SilencerSoundDistance; // 0x20(0x04)
	float SprintSoundDistance; // 0x24(0x04)
	float RunSoundDistance; // 0x28(0x04)
	float WalkSoundDistance; // 0x2c(0x04)
	float OperateSoundDistance; // 0x30(0x04)
	float ExplodeSoundDistance; // 0x34(0x04)
	float VehicleSoundDistance; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UDataTable* ThreatLevelRule; // 0x40(0x08)
	float AlertToFightTime; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UCurveFloat* AlertToFightAngleSampleCurve; // 0x50(0x08)
	struct TArray<struct FVisionConeScaler> LeisureVisionConeScaler; // 0x58(0x10)
	struct TArray<struct FVisionConeScaler> AlertVisionConeScaler; // 0x68(0x10)
	struct TArray<struct FVisionConeScaler> FightVisionConeScaler; // 0x78(0x10)
	struct TArray<float> InFogVisionScalar; // 0x88(0x10)
	float FoliageTraceOffset; // 0x98(0x04)
	float FoliageFocusRadius; // 0x9c(0x04)
	float FoliageFocusTimelimit; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<struct FVisionDynamicScaler> GunSoundVisionScaler; // 0xa8(0x10)
	struct TArray<struct FVisionDynamicScaler> HurtedVisionScaler; // 0xb8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.VisionDynamicScaler
// Size: 0x10 (Inherited: 0x00)
struct FVisionDynamicScaler {
public:

	float Increment; // 0x00(0x04)
	float MaxIncrement; // 0x04(0x04)
	struct UCurveFloat* AttenuationCurve; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.VisionConeScaler
// Size: 0x08 (Inherited: 0x00)
struct FVisionConeScaler {
public:

	float radius; // 0x00(0x04)
	float Angle; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIWeaponDamageScale
// Size: 0x50 (Inherited: 0x10)
struct FAIWeaponDamageScale : public FDescRowBase {
public:

	float AIDamageRatio; // 0x10(0x04)
	float AIHurtRatio; // 0x14(0x04)
	float AIHurtRatioHead; // 0x18(0x04)
	float AIHurtRatioThorax; // 0x1c(0x04)
	float AIHurtRatioRightArm; // 0x20(0x04)
	float AIHurtRatioLeftArm; // 0x24(0x04)
	float AIHurtRatioRightLeg; // 0x28(0x04)
	float AIHurtRatioLeftLeg; // 0x2c(0x04)
	float AIHitEnemyRatio; // 0x30(0x04)
	float AIHitEnemyRatioHead; // 0x34(0x04)
	float AIHitEnemyRatioThorax; // 0x38(0x04)
	float AIHitEnemyRatioRightArm; // 0x3c(0x04)
	float AIHitEnemyRatioLeftArm; // 0x40(0x04)
	float AIHitEnemyRatioRightLeg; // 0x44(0x04)
	float AIHitEnemyRatioLeftLeg; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SimulateAIConfig
// Size: 0x58 (Inherited: 0x10)
struct FSimulateAIConfig : public FDescRowBase {
public:

	int32_t ScreenplayID; // 0x10(0x04)
	float MinDistanceToPlayer; // 0x14(0x04)
	float MaxDistanceToPlayer; // 0x18(0x04)
	float DestoryDistance; // 0x1c(0x04)
	float DelayTime; // 0x20(0x04)
	float MoniterInterval; // 0x24(0x04)
	float FightInterval; // 0x28(0x04)
	float HurtPercentage; // 0x2c(0x04)
	float radius; // 0x30(0x04)
	int32_t MaxPlayerNum; // 0x34(0x04)
	struct TArray<struct FName> SimulateAIDistributionOfConfig; // 0x38(0x10)
	struct TArray<uint64_t> ImportantItems; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AerialVehicleConfig
// Size: 0x58 (Inherited: 0x10)
struct FAerialVehicleConfig : public FDescRowBase {
public:

	struct UClass* AerialVehicleTemplateBP; // 0x10(0x08)
	struct UClass* DefaultController; // 0x18(0x08)
	/*struct TSoftObjectPtr<UBehaviorTree>*/char DefaultBehaviourTree[0x28]; // 0x20(0x28)
	struct TArray<struct FName> AerialVehicleTags; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIReinforceShoutConfig
// Size: 0x40 (Inherited: 0x10)
struct FAIReinforceShoutConfig : public FDescRowBase {
public:

	struct FText SubtitleText; // 0x10(0x18)
	struct UGPAudioEventAsset* AudioEvent; // 0x28(0x08)
	struct TArray<struct FName> NPCTemplateIndice; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.HitPartWeight
// Size: 0x08 (Inherited: 0x00)
struct FHitPartWeight {
public:

	enum class ECharacterPart Part; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Weight; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIDifficultyEquip
// Size: 0x50 (Inherited: 0x10)
struct FAIDifficultyEquip : public FDescRowBase {
public:

	struct FName EquipIDWithDropID; // 0x10(0x08)
	int32_t HolidayID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FClipAmmoRatio> ClipAmmoRatio; // 0x20(0x10)
	struct TArray<struct FCarriedAmmoRatio> CarriedAmmoRatio; // 0x30(0x10)
	struct TArray<struct FLinkedListOfRandomPools> LinkedLists; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LinkedListOfRandomPools
// Size: 0x0c (Inherited: 0x00)
struct FLinkedListOfRandomPools {
public:

	struct FName LinkedListID; // 0x00(0x08)
	int32_t Weight; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CarriedAmmoRatio
// Size: 0x08 (Inherited: 0x00)
struct FCarriedAmmoRatio {
public:

	float CarriedAmmoRatio; // 0x00(0x04)
	int32_t Weight; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ClipAmmoRatio
// Size: 0x08 (Inherited: 0x00)
struct FClipAmmoRatio {
public:

	float MagAmmoRatio; // 0x00(0x04)
	int32_t Weight; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LinkedListData
// Size: 0x30 (Inherited: 0x10)
struct FLinkedListData : public FDescRowBase {
public:

	struct TArray<struct FRandomPool> RandomPools; // 0x10(0x10)
	struct TArray<struct FName> WeaponOrder; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RandomPool
// Size: 0x28 (Inherited: 0x00)
struct FRandomPool {
public:

	int32_t LowerNum; // 0x00(0x04)
	int32_t UpperNum; // 0x04(0x04)
	float Percentage; // 0x08(0x04)
	struct FName RandomPoolID; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString WeightStrategy; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MagazineNum
// Size: 0x08 (Inherited: 0x00)
struct FMagazineNum {
public:

	int32_t MagazineNum; // 0x00(0x04)
	int32_t Weight; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BulletLevel
// Size: 0x08 (Inherited: 0x00)
struct FBulletLevel {
public:

	int32_t AmmoLv; // 0x00(0x04)
	int32_t Weight; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.StatInfo
// Size: 0x08 (Inherited: 0x00)
struct FStatInfo {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.StatKey
// Size: 0x10 (Inherited: 0x00)
struct FStatKey {
public:

	struct UObject* ContextObj; // 0x00(0x08)
	enum class EStatName StatName; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIHitRateDebugData
// Size: 0x40 (Inherited: 0x00)
struct FAIHitRateDebugData {
public:

	float PreclampHitRate; // 0x00(0x04)
	float LastHitRate; // 0x04(0x04)
	float BaseRate; // 0x08(0x04)
	float LastDistanceRate; // 0x0c(0x04)
	float LastSeenTimeRate; // 0x10(0x04)
	float LastFoliageRate; // 0x14(0x04)
	float LastTargetSpeedRate; // 0x18(0x04)
	float LastSelfSpeedRate; // 0x1c(0x04)
	float LastBehindPlayerRate; // 0x20(0x04)
	float LastHitTimeRate; // 0x24(0x04)
	float LastExposedRate; // 0x28(0x04)
	float LastStunRate; // 0x2c(0x04)
	float LastWeaponPriceRate; // 0x30(0x04)
	int32_t FakeRandomShouldHitShootCount; // 0x34(0x04)
	int32_t FakeRandomCurShootCount; // 0x38(0x04)
	float CurrentHitRateValue; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesBatchSystemTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FDesBatchSystemTickFunction : public FTickFunction {
public:

	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesCraterMeshArray
// Size: 0x120 (Inherited: 0x108)
struct FDesCraterMeshArray : public FFastArraySerializer {
public:

	struct TArray<struct FDesCraterMeshItem> Craters; // 0x108(0x10)
	struct ADesTerrainRuntimeActor* RuntimeActor; // 0x118(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesCraterMeshItem
// Size: 0x40 (Inherited: 0x0c)
struct FDesCraterMeshItem : public FFastArraySerializerItem {
public:

	struct FVector Location; // 0x0c(0x0c)
	char pad_18[0x8]; // 0x18(0x08)
	struct FQuat Rotation; // 0x20(0x10)
	int32_t CraterID; // 0x30(0x04)
	int32_t ItemID; // 0x34(0x04)
	struct FName SectorID; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesTerrainCraterRepInfo
// Size: 0x20 (Inherited: 0x00)
struct FDesTerrainCraterRepInfo {
public:

	int32_t UniqueId; // 0x00(0x04)
	int32_t CraterID; // 0x04(0x04)
	struct FVector Position; // 0x08(0x0c)
	struct FVector Scale; // 0x14(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesCraterGameplayConfig
// Size: 0x30 (Inherited: 0x00)
struct FDesCraterGameplayConfig {
public:

	char pad_0[0x30]; // 0x00(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesCraterRuntimeConfig
// Size: 0x10 (Inherited: 0x00)
struct FDesCraterRuntimeConfig {
public:

	struct UStaticMesh* CraterMesh; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesPartEdgeData
// Size: 0x28 (Inherited: 0x00)
struct FDesPartEdgeData {
public:

	int32_t PartIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FDesEdgeModelData> EdgeModels; // 0x08(0x10)
	struct TArray<struct FDesEdgeDecalData> EdgeDecals; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DestructibleItemAudioDataRow
// Size: 0xb8 (Inherited: 0x10)
struct FDestructibleItemAudioDataRow : public FDescRowBase {
public:

	struct FName ClassName; // 0x10(0x08)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char OnBreakAudio[0x28]; // 0x18(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char OnHitAudio[0x28]; // 0x40(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char LoopStartAudio[0x28]; // 0x68(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char LoopEndAudio[0x28]; // 0x90(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DestructibleItemFXDataRow
// Size: 0x20 (Inherited: 0x10)
struct FDestructibleItemFXDataRow : public FDescRowBase {
public:

	struct FName ClassName; // 0x10(0x08)
	struct FName DefaultParticleResourceID; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesEdgeDecalDataRow
// Size: 0xa0 (Inherited: 0x10)
struct FDesEdgeDecalDataRow : public FDescRowBase {
public:

	int32_t TypeID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DesignType; // 0x18(0x10)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char DeferredMaterialSP[0x28]; // 0x28(0x28)
	bool bUseDeferredMaterialOnMobile; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char DeferredMobileMaterialSP[0x28]; // 0x58(0x28)
	struct FVector DecalSize; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FString Desc; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesEdgeModelDataRow
// Size: 0x60 (Inherited: 0x10)
struct FDesEdgeModelDataRow : public FDescRowBase {
public:

	int32_t EdgeTypeID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TSoftObjectPtr<UStaticMesh>*/char EdgeMesh[0x28]; // 0x18(0x28)
	struct FString DesignType; // 0x40(0x10)
	struct FString Desc; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesPrimitiveHLODPair
// Size: 0x48 (Inherited: 0x00)
struct FDesPrimitiveHLODPair {
public:

	/*LazyObjectProperty*/char Primitive[0x1c]; // 0x00(0x1c)
	/*LazyObjectProperty*/char Parent[0x1c]; // 0x1c(0x1c)
	struct TArray<int32_t> PartIDs; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesPrimitiveHLODParentRow
// Size: 0x50 (Inherited: 0x08)
struct FDesPrimitiveHLODParentRow : public FTableRowBase {
public:

	/*LazyObjectProperty*/char Primitive[0x1c]; // 0x08(0x1c)
	/*LazyObjectProperty*/char Parent[0x1c]; // 0x24(0x1c)
	struct TArray<int32_t> PartIDs; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DestructibleTerrainCraterRow
// Size: 0x70 (Inherited: 0x10)
struct FDestructibleTerrainCraterRow : public FDescRowBase {
public:

	int32_t CraterID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TSoftObjectPtr<UStaticMesh>*/char MeshObject[0x28]; // 0x18(0x28)
	bool bNeedRepAndCollision; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t MaxNumLimit; // 0x44(0x04)
	struct FVector2D SelectValue; // 0x48(0x08)
	struct FVector ScaleMin; // 0x50(0x0c)
	struct FVector ScaleMax; // 0x5c(0x0c)
	int32_t FallbackId; // 0x68(0x04)
	bool bIsFallbackItem; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DestructionAnimationPoolRow
// Size: 0x88 (Inherited: 0x10)
struct FDestructionAnimationPoolRow : public FDescRowBase {
public:

	/*struct TSoftClassPtr<UObject>*/char BreakableBpClass[0x28]; // 0x10(0x28)
	struct TMap<struct FString, struct FDesAnimPoolSingleConfig> PerMapPrimeSize; // 0x38(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesAnimPoolSingleConfig
// Size: 0x58 (Inherited: 0x00)
struct FDesAnimPoolSingleConfig {
public:

	bool bPerSectorPrime; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PrimeSize; // 0x04(0x04)
	struct TMap<struct FName, int32_t> PerSectorPrimeSize; // 0x08(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SectionDependencyPair
// Size: 0x20 (Inherited: 0x00)
struct FSectionDependencyPair {
public:

	struct TArray<int32_t> FoundationIDs; // 0x00(0x10)
	struct TArray<int32_t> DependentIDs; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SectionGroup
// Size: 0x10 (Inherited: 0x00)
struct FSectionGroup {
public:

	struct TArray<int32_t> SectionIndexArray; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DestructibleFoliageRow
// Size: 0x40 (Inherited: 0x10)
struct FDestructibleFoliageRow : public FDescRowBase {
public:

	/*struct TSoftClassPtr<UObject>*/char FoliageBpClass[0x28]; // 0x10(0x28)
	bool isTakeRadialDamage; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DestructibleItemDataRowRunTime
// Size: 0x28 (Inherited: 0x00)
struct FDestructibleItemDataRowRunTime {
public:

	struct FName ClassName; // 0x00(0x08)
	float Health; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	/*struct UDestructibleItemDamagePrest**/char DamagePreset[0x8]; // 0x10(0x08)
	/*struct UDestructibleItemPhxPreset**/char PhxPreset[0x8]; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DestructibleItemDataRow
// Size: 0x128 (Inherited: 0x70)
struct FDestructibleItemDataRow : public FAssetPakerPakPolicyRow {
public:

	struct FName ClassName; // 0x70(0x08)
	/*struct TSoftObjectPtr<UBlueprint>*/char ClassPath[0x28]; // 0x78(0x28)
	float Health; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	/*struct TSoftObjectPtr<UDestructibleItemDamagePrest>*/char DamagePreset[0x28]; // 0xa8(0x28)
	/*struct TSoftObjectPtr<UDestructibleItemDamagePrest>*/char DamagePreset_HDOverride[0x28]; // 0xd0(0x28)
	/*struct TSoftObjectPtr<UDestructibleItemPhxPreset>*/char PhxPreset[0x28]; // 0xf8(0x28)
	bool bDynamicUpdateNavMesh; // 0x120(0x01)
	bool bBrokenNeedUpdateNavMesh; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	int32_t BlockVehicleLevel; // 0x124(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DestructibleItemDamageModification
// Size: 0x0c (Inherited: 0x00)
struct FDestructibleItemDamageModification {
public:

	enum class EDamageModifyType ModifyType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)
	float Extend; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesAnimationManagerTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FDesAnimationManagerTickFunction : public FTickFunction {
public:

	char pad_60[0x8]; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DSMCPool
// Size: 0x38 (Inherited: 0x00)
struct FDSMCPool {
public:

	struct TArray<struct FDSMCPoolElement> FreeElements; // 0x00(0x10)
	struct TArray<struct UDFMDesSkeletalMeshComponent*> InUseComponents_Auto; // 0x10(0x10)
	struct TArray<struct UDFMDesSkeletalMeshComponent*> InUseComponents_Manual; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DSMCPoolElement
// Size: 0x10 (Inherited: 0x00)
struct FDSMCPoolElement {
public:

	struct UDFMDesSkeletalMeshComponent* Component; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DisplayInputActionBindingRow
// Size: 0x40 (Inherited: 0x10)
struct FDisplayInputActionBindingRow : public FDescRowBase {
public:

	struct FName ActionName; // 0x10(0x08)
	struct FText DisplayName; // 0x18(0x18)
	struct TArray<struct FDisplayInputActionChord> Chords; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DisplayInputActionChord
// Size: 0x20 (Inherited: 0x00)
struct FDisplayInputActionChord {
public:

	char bShift : 1; // 0x00(0x01)
	char bCtrl : 1; // 0x00(0x01)
	char bAlt : 1; // 0x00(0x01)
	char bCmd : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FKey Key; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InputEnablePlayModeRuleRow
// Size: 0x38 (Inherited: 0x10)
struct FInputEnablePlayModeRuleRow : public FDescRowBase {
public:

	struct TArray<enum class EInputAxisType> AxisTypes; // 0x10(0x10)
	struct TArray<enum class EInputActionType> ActionTypes; // 0x20(0x10)
	enum class EDFMGamePlayMode PlayMode; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InputEnableMainStageRuleRow
// Size: 0x38 (Inherited: 0x10)
struct FInputEnableMainStageRuleRow : public FDescRowBase {
public:

	struct TArray<enum class EInputAxisType> AxisTypes; // 0x10(0x10)
	struct TArray<enum class EInputActionType> ActionTypes; // 0x20(0x10)
	enum class EGameFlowStageType MainStage; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InputEnableHUDRuleRow
// Size: 0x38 (Inherited: 0x10)
struct FInputEnableHUDRuleRow : public FDescRowBase {
public:

	enum class GameHUDSate HUDState; // 0x10(0x01)
	enum class EHDInputEnableRuleType RuleType; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<enum class EInputActionType> ActionTypes; // 0x18(0x10)
	struct TArray<enum class EInputAxisType> AxisTypes; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.KeyIconBindingTableRow
// Size: 0xb0 (Inherited: 0x10)
struct FKeyIconBindingTableRow : public FDescRowBase {
public:

	struct FString ActionOrAxisName; // 0x10(0x10)
	struct FText LeftText; // 0x20(0x18)
	struct FText RightText; // 0x38(0x18)
	bool bDisplayInput; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	/*struct TSet<enum class ELootingKeyCondition>*/char Conditions[0x50]; // 0x58(0x50)
	bool bEnabled; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.KeyIconDataTableRow
// Size: 0x78 (Inherited: 0x10)
struct FKeyIconDataTableRow : public FDescRowBase {
public:

	struct FKey Key; // 0x10(0x18)
	struct FText KeyNameTxt; // 0x28(0x18)
	bool IsAxisKeyDirIcon; // 0x40(0x01)
	bool IsAxisKeyDirPositive; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FSoftObjectPath KeyIcon; // 0x48(0x18)
	struct FSoftObjectPath KeyIconTrans; // 0x60(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.KeyMappingFunctionTypeShowDataTableRow
// Size: 0x38 (Inherited: 0x10)
struct FKeyMappingFunctionTypeShowDataTableRow : public FDescRowBase {
public:

	int32_t KeyFunctionType; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText TypeName; // 0x18(0x18)
	bool bHide; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FunctionKeyActionLogic
// Size: 0x0c (Inherited: 0x00)
struct FFunctionKeyActionLogic {
public:

	struct FName ActionOrAxisName; // 0x00(0x08)
	enum class EKeyActionLogic KeyActionLogic; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MouseInteractHUDDataTableRow
// Size: 0x28 (Inherited: 0x10)
struct FMouseInteractHUDDataTableRow : public FDescRowBase {
public:

	struct FName HudName; // 0x10(0x08)
	bool bEnableShowMouse; // 0x18(0x01)
	bool bCenterizeCursor; // 0x19(0x01)
	bool bCumulative; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	float ShowDelay; // 0x1c(0x04)
	float HideDelay; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AbilityLockerActorInfo
// Size: 0x0c (Inherited: 0x00)
struct FAbilityLockerActorInfo {
public:

	float Distance; // 0x00(0x04)
	enum class EStingerMissileLockingState State; // 0x04(0x01)
	bool bShowed; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float WaitCloseAnimFinishCounter; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AbilityLockerWidgetInfo
// Size: 0x10 (Inherited: 0x00)
struct FAbilityLockerWidgetInfo {
public:

	struct UUserWidget* Widget; // 0x00(0x08)
	struct UGPAbilityLaserPointerLockerData* Data; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CommonLockerInfo
// Size: 0x18 (Inherited: 0x00)
struct FCommonLockerInfo {
public:

	struct UUserWidget* Widget; // 0x00(0x08)
	struct UGPAbilityCommonLockerData* Data; // 0x08(0x08)
	float WaitCloseAnimFinishCounter; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PathTracingVertex
// Size: 0x1c (Inherited: 0x00)
struct FPathTracingVertex {
public:

	int32_t Index; // 0x00(0x04)
	struct FVector pos; // 0x04(0x0c)
	float gScore; // 0x10(0x04)
	int32_t PreIndex; // 0x14(0x04)
	bool bIsClimbLadderVertex; // 0x18(0x01)
	bool bIsInHeap; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PathTracingEdge
// Size: 0x20 (Inherited: 0x00)
struct FPathTracingEdge {
public:

	int32_t StartIndex; // 0x00(0x04)
	int32_t EndIndex; // 0x04(0x04)
	float Distance; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FVector> PathPos; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PathTracingClimbLadderData
// Size: 0x40 (Inherited: 0x00)
struct FPathTracingClimbLadderData {
public:

	int32_t Uin; // 0x00(0x04)
	bool bHasInit; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FVector TopPos; // 0x08(0x0c)
	struct FVector BottomPos; // 0x14(0x0c)
	float Length; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FVector> PathPos; // 0x28(0x10)
	struct TWeakObjectPtr<struct AActor> ClimbLadderPtr; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ClientTracingEnemyHUDData
// Size: 0x18 (Inherited: 0x00)
struct FClientTracingEnemyHUDData {
public:

	int32_t Index; // 0x00(0x04)
	int32_t MarkEnemyCnt; // 0x04(0x04)
	float SkillTotalTime; // 0x08(0x04)
	float SkillStartTime; // 0x0c(0x04)
	struct FVector2D PathStartScreenPos; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AbilityClientDrawPathData
// Size: 0x68 (Inherited: 0x00)
struct FAbilityClientDrawPathData {
public:

	int32_t TargetUin; // 0x00(0x04)
	int32_t PathIndex; // 0x04(0x04)
	int32_t DrawStartIndex; // 0x08(0x04)
	struct FVector PathStartPos; // 0x0c(0x0c)
	struct FVector DrawStartPos; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FVector> PathPos; // 0x28(0x10)
	struct TArray<float> PathLengths; // 0x38(0x10)
	struct TWeakObjectPtr<struct AActor> TargetChar; // 0x48(0x08)
	uint32_t AsyncTastIndex; // 0x50(0x04)
	char pad_54[0x14]; // 0x54(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AbilityTracingPathData
// Size: 0x38 (Inherited: 0x00)
struct FAbilityTracingPathData {
public:

	int32_t TargetUin; // 0x00(0x04)
	int32_t PathIndex; // 0x04(0x04)
	struct FVector TargetPos; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FVector> PathPos; // 0x18(0x10)
	float DirectDis; // 0x28(0x04)
	float PathLength; // 0x2c(0x04)
	struct TWeakObjectPtr<struct AActor> TargetChar; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMAI3AnimInstanceProxy
// Size: 0x790 (Inherited: 0x748)
struct FDFMAI3AnimInstanceProxy : public FGPAnimInstanceProxyBase {
public:

	float AnimScale; // 0x748(0x04)
	enum class EAnimDirection AnimDirection; // 0x74c(0x01)
	char pad_74D[0xf]; // 0x74d(0x0f)
	float AnimBlendTime; // 0x75c(0x04)
	float AOYaw; // 0x760(0x04)
	float AOPitch; // 0x764(0x04)
	float AOAlpha; // 0x768(0x04)
	bool bIsDead; // 0x76c(0x01)
	char pad_76D[0x7]; // 0x76d(0x07)
	bool bEnableDeadPoseSnapshot_FromRagDoll; // 0x774(0x01)
	bool bEnableDeadPoseSnapshot_FromAnim; // 0x775(0x01)
	char pad_776[0x2]; // 0x776(0x02)
	struct UGPAnimProxyComponent* AnimProxyComponent; // 0x778(0x08)
	char pad_780[0x10]; // 0x780(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AnimConfigWithDirRange
// Size: 0x10 (Inherited: 0x00)
struct FAnimConfigWithDirRange {
public:

	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	float YawMin; // 0x08(0x04)
	float YawMax; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIFightDesignatedPlayer
// Size: 0xf0 (Inherited: 0x00)
struct FAIFightDesignatedPlayer {
public:

	char pad_0[0xf0]; // 0x00(0xf0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIBaseInfo
// Size: 0x70 (Inherited: 0x00)
struct FAIBaseInfo {
public:

	char pad_0[0x70]; // 0x00(0x70)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIItemEquip
// Size: 0x30 (Inherited: 0x00)
struct FAIItemEquip {
public:

	char pad_0[0x30]; // 0x00(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIDropItemInfo
// Size: 0x20 (Inherited: 0x00)
struct FAIDropItemInfo {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.IDataAI
// Size: 0x78 (Inherited: 0x00)
struct FIDataAI {
public:

	char pad_0[0x78]; // 0x00(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CSVAIData
// Size: 0x80 (Inherited: 0x00)
struct FCSVAIData {
public:

	char pad_0[0x80]; // 0x00(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LastDutyInfo
// Size: 0x08 (Inherited: 0x00)
struct FLastDutyInfo {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FightData
// Size: 0x38 (Inherited: 0x00)
struct FFightData {
public:

	char pad_0[0x38]; // 0x00(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GuardData
// Size: 0x14 (Inherited: 0x00)
struct FGuardData {
public:

	char pad_0[0x14]; // 0x00(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AICharacterMoveSpeed
// Size: 0x0c (Inherited: 0x00)
struct FAICharacterMoveSpeed {
public:

	enum class EGPCharacterFightStateType FightState; // 0x00(0x01)
	enum class EGPCharacterPoseStateType PoseState; // 0x01(0x01)
	enum class EGPCharacterMoveDirStateType MoveDirState; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float BaseSpeed; // 0x04(0x04)
	float SpeedScaler; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMAIShootPoseConfig
// Size: 0x0c (Inherited: 0x00)
struct FDFMAIShootPoseConfig {
public:

	struct FVector ShootStartLocation; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.WeaponDistHitCurveScale
// Size: 0x10 (Inherited: 0x00)
struct FWeaponDistHitCurveScale {
public:

	enum class EWeaponItemType WeaponType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* DistCurve; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIInteractInfo_AssembleThreeAnim
// Size: 0x20 (Inherited: 0x00)
struct FAIInteractInfo_AssembleThreeAnim {
public:

	struct UAnimSequenceBase* InteractStartAnim; // 0x00(0x08)
	struct UAnimSequenceBase* InteractLoopAnim; // 0x08(0x08)
	struct UAnimSequenceBase* InteractEndAnim; // 0x10(0x08)
	float InteractLoopDuration; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIFightTargetInfo
// Size: 0x44 (Inherited: 0x00)
struct FAIFightTargetInfo {
public:

	struct TWeakObjectPtr<struct ADFMCharacter> TargetCharacter; // 0x00(0x08)
	float FinalScore; // 0x08(0x04)
	enum class EAIThreatLevel ThreatLevel; // 0x0c(0x01)
	char pad_D[0x37]; // 0x0d(0x37)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIThreatLevelRule
// Size: 0x20 (Inherited: 0x10)
struct FAIThreatLevelRule : public FDescRowBase {
public:

	int32_t VisionConeIndex; // 0x10(0x04)
	float VisionVisibleRateMin; // 0x14(0x04)
	float VisionVisibleRateMax; // 0x18(0x04)
	enum class EChracterPoseType Pose; // 0x1c(0x01)
	enum class EAIThreatLevel ThreatLevel; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharcterSetAsTargetInfoList
// Size: 0x18 (Inherited: 0x00)
struct FCharcterSetAsTargetInfoList {
public:

	struct TArray<struct FCharcterSetAsTargetScore> RelatedCharacterInfoList; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharcterSetAsTargetScore
// Size: 0x14 (Inherited: 0x00)
struct FCharcterSetAsTargetScore {
public:

	struct TWeakObjectPtr<struct ADFMCharacter> RelatedCharacter; // 0x00(0x08)
	float FinalScore; // 0x08(0x04)
	char pad_C[0x8]; // 0x0c(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ScenesActorList
// Size: 0x10 (Inherited: 0x00)
struct FScenesActorList {
public:

	struct TArray<struct AAIScenesActor*> ScenesActorList; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIGroupThreatSource
// Size: 0x18 (Inherited: 0x00)
struct FAIGroupThreatSource {
public:

	struct ACHARACTER* CHARACTER; // 0x00(0x08)
	struct FVector GoalLocation; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIGroupThreatResult
// Size: 0x10 (Inherited: 0x00)
struct FAIGroupThreatResult {
public:

	struct ACHARACTER* CHARACTER; // 0x00(0x08)
	float LastVisibleTime; // 0x08(0x04)
	float TotalThreat; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIGroupNameValue
// Size: 0x10 (Inherited: 0x00)
struct FAIGroupNameValue {
public:

	float NameValue; // 0x00(0x04)
	float LastNameValueUpdateTime; // 0x04(0x04)
	struct ACHARACTER* UpdateCharacter; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GroupThreatCharacterQueryDetail
// Size: 0x18 (Inherited: 0x00)
struct FGroupThreatCharacterQueryDetail {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct ACHARACTER* CHARACTER; // 0x08(0x08)
	float ThreatValue; // 0x10(0x04)
	bool isSuccess; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AITransportHelicopterRepParam
// Size: 0x90 (Inherited: 0x00)
struct FAITransportHelicopterRepParam {
public:

	enum class EAITransportActorType ActorType; // 0x00(0x01)
	enum class EAITransportPoseType PoseType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UAnimMontage* Montage; // 0x08(0x08)
	struct USceneComponent* SeatCom; // 0x10(0x08)
	bool HasRootMotion; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float YawOffset; // 0x1c(0x04)
	struct FVector LocationOffset; // 0x20(0x0c)
	float PlayingTime; // 0x2c(0x04)
	struct FTransform ActorTF; // 0x30(0x30)
	struct FTransform TargetTF; // 0x60(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIHelicopterSpawnParam
// Size: 0x70 (Inherited: 0x00)
struct FAIHelicopterSpawnParam {
public:

	struct UAnimMontage* IdleMontage; // 0x00(0x08)
	struct UAnimMontage* DescentMontage; // 0x08(0x08)
	struct USceneComponent* SeatCom; // 0x10(0x08)
	struct AActor* Helicopter; // 0x18(0x08)
	enum class EAIHelicopterSpawnState State; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float YawOffset; // 0x24(0x04)
	struct FVector LocationOffset; // 0x28(0x0c)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FTransform ActorTF; // 0x40(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AILabStatis
// Size: 0xd0 (Inherited: 0x00)
struct FAILabStatis {
public:

	char pad_0[0xd0]; // 0x00(0xd0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerStatis
// Size: 0x10 (Inherited: 0x00)
struct FPlayerStatis {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AILabBattleInfo
// Size: 0xb8 (Inherited: 0x00)
struct FAILabBattleInfo {
public:

	char pad_0[0xb8]; // 0x00(0xb8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.NewAILabBattleInfo
// Size: 0x18 (Inherited: 0x00)
struct FNewAILabBattleInfo {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AICoverSegmentResult
// Size: 0x1c (Inherited: 0x00)
struct FAICoverSegmentResult {
public:

	enum class EAICoverPointType CoverType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector CoverLocation; // 0x04(0x0c)
	struct FVector CoverDirection; // 0x10(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIThreatPvpTeamHurtedConfig
// Size: 0x14 (Inherited: 0x00)
struct FAIThreatPvpTeamHurtedConfig {
public:

	bool IsEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AcceptDistance; // 0x04(0x04)
	float FovHalfAngle; // 0x08(0x04)
	float FovRadius; // 0x0c(0x04)
	float ZDistDiff; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIThreatVehicleDetailRecord
// Size: 0x164 (Inherited: 0x00)
struct FAIThreatVehicleDetailRecord {
public:

	char pad_0[0x164]; // 0x00(0x164)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIThreatVehicleRecord
// Size: 0x10 (Inherited: 0x00)
struct FAIThreatVehicleRecord {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RCVAIWheelIK
// Size: 0x5c (Inherited: 0x00)
struct FRCVAIWheelIK {
public:

	struct FName WheelBoneName; // 0x00(0x08)
	struct FName BacketBoneName; // 0x08(0x08)
	bool bIsValid; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector TargetBaseLocation; // 0x14(0x0c)
	struct FVector StartBaseLoc; // 0x20(0x0c)
	struct FVector JointBaseLoc; // 0x2c(0x0c)
	struct FVector EffectorBaseLoc; // 0x38(0x0c)
	struct FVector JointLookAt; // 0x44(0x0c)
	struct FVector EffectorLookAt; // 0x50(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RCVAIAnimInstanceProxy
// Size: 0x820 (Inherited: 0x748)
struct FRCVAIAnimInstanceProxy : public FGPAnimInstanceProxyBase {
public:

	struct FRotator GunMeshRotator; // 0x748(0x0c)
	struct FRotator BaseMeshRotator; // 0x754(0x0c)
	struct FRotator RocketMeshRotator; // 0x760(0x0c)
	struct FRotator CarDoorRotator; // 0x76c(0x0c)
	struct FRotator CameraRotator; // 0x778(0x0c)
	float LastFireDuration; // 0x784(0x04)
	bool bCurrentIsFighting; // 0x788(0x01)
	bool bCurrentIsDead; // 0x789(0x01)
	char pad_78A[0x2]; // 0x78a(0x02)
	struct FRotator Wheel01Rotator; // 0x78c(0x0c)
	struct FRotator Wheel02Rotator; // 0x798(0x0c)
	struct FRotator Wheel03Rotator; // 0x7a4(0x0c)
	struct FRotator Wheel04Rotator; // 0x7b0(0x0c)
	struct FRotator Wheel05Rotator; // 0x7bc(0x0c)
	struct FRotator Wheel06Rotator; // 0x7c8(0x0c)
	struct FVector Wheel01Offset; // 0x7d4(0x0c)
	struct FVector Wheel02Offset; // 0x7e0(0x0c)
	struct FVector Wheel03Offset; // 0x7ec(0x0c)
	struct FVector Wheel04Offset; // 0x7f8(0x0c)
	struct FVector Wheel05Offset; // 0x804(0x0c)
	struct FVector Wheel06Offset; // 0x810(0x0c)
	char pad_81C[0x4]; // 0x81c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MissileTarget
// Size: 0x18 (Inherited: 0x00)
struct FMissileTarget {
public:

	struct AActor* Target; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ScenesFailureReasons
// Size: 0x10 (Inherited: 0x00)
struct FScenesFailureReasons {
public:

	struct AActor* SceneActor; // 0x00(0x08)
	enum class EScenesFailureType ScenesFailureType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PreScene
// Size: 0x10 (Inherited: 0x00)
struct FPreScene {
public:

	struct AAIScenesActor* PreSceneActor; // 0x00(0x08)
	bool bIsSequence; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractiveInfo
// Size: 0x20 (Inherited: 0x00)
struct FInteractiveInfo {
public:

	struct UAIScenesInteractiveComponent* InteractiveComp; // 0x00(0x08)
	struct TArray<char> Tags; // 0x08(0x10)
	int32_t Num; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ScenesAnimate
// Size: 0x20 (Inherited: 0x00)
struct FScenesAnimate {
public:

	bool bIsInteger; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Number; // 0x04(0x04)
	float PlayTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAnimMontage* AmmoMontage; // 0x10(0x08)
	enum class EAnimationPlayType PlayType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AISingleState
// Size: 0x30 (Inherited: 0x00)
struct FAISingleState {
public:

	struct UAIScenesInteractiveComponent* Interactor; // 0x00(0x08)
	float HungerMaxValue; // 0x08(0x04)
	float HungerValue; // 0x0c(0x04)
	float ThirstyMaxValue; // 0x10(0x04)
	float ThirstyValue; // 0x14(0x04)
	bool bHasMaterials; // 0x18(0x01)
	bool bHasKey; // 0x19(0x01)
	bool bHasState; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	struct FVector Location; // 0x1c(0x0c)
	struct AAIController* AIController; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.JobBBKey
// Size: 0x58 (Inherited: 0x00)
struct FJobBBKey {
public:

	enum class EAIJobType JobType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FBlackboardKeySelector HasSuitableJobBBKey; // 0x08(0x28)
	struct FBlackboardKeySelector HasActiveJobBBKey; // 0x30(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SelectChildPriorityBranchInfo
// Size: 0x40 (Inherited: 0x00)
struct FSelectChildPriorityBranchInfo {
public:

	struct FBTCompositeChild ChildBranch; // 0x00(0x30)
	struct FString BranchName; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PreferTagConfig
// Size: 0x30 (Inherited: 0x00)
struct FPreferTagConfig {
public:

	struct FGameplayTagContainer PreferTags; // 0x00(0x20)
	float PreferCostFactor; // 0x20(0x04)
	int32_t SameStateCountLimit; // 0x24(0x04)
	float PreferRandomRate; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CollectThreatsIntoCombat
// Size: 0x18 (Inherited: 0x00)
struct FCollectThreatsIntoCombat {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct ACHARACTER* Opponent; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIThreatCharacterQueryDetail
// Size: 0x18 (Inherited: 0x00)
struct FAIThreatCharacterQueryDetail {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct ACHARACTER* CHARACTER; // 0x08(0x08)
	float ThreatValue; // 0x10(0x04)
	bool isSuccess; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIThreatCharacterDetailRecord
// Size: 0x2b8 (Inherited: 0x00)
struct FAIThreatCharacterDetailRecord {
public:

	char pad_0[0x2b8]; // 0x00(0x2b8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AISpecialSenseQueue
// Size: 0x10 (Inherited: 0x00)
struct FAISpecialSenseQueue {
public:

	struct ACHARACTER* CHARACTER; // 0x00(0x08)
	float LastTriggerTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIThreatBoardcast
// Size: 0x28 (Inherited: 0x00)
struct FAIThreatBoardcast {
public:

	char pad_0[0x10]; // 0x00(0x10)
	struct ACHARACTER* CHARACTER; // 0x10(0x08)
	struct FVector Historyloc; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIThreatDetailRecord
// Size: 0x18 (Inherited: 0x00)
struct FAIThreatDetailRecord {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIThreatDetailInfo
// Size: 0x38 (Inherited: 0x10)
struct FAIThreatDetailInfo : public FDescRowBase {
public:

	enum class EAIThreatDetailName DetailName; // 0x10(0x01)
	enum class EAIThreatFlagName FlagName; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float BaseValue; // 0x14(0x04)
	float SumValue; // 0x18(0x04)
	float MaxSumValue; // 0x1c(0x04)
	float SumDelay; // 0x20(0x04)
	float DecreaseDistance; // 0x24(0x04)
	float DecreaseDelay; // 0x28(0x04)
	float DecreaseBaseValue; // 0x2c(0x04)
	float DecreaseSumValue; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.UnitSpawnParams
// Size: 0x14 (Inherited: 0x00)
struct FUnitSpawnParams {
public:

	bool bCanSpawn; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DefaultSpawnCoolDownTime; // 0x04(0x04)
	int32_t MinAliveAINum; // 0x08(0x04)
	bool bLimitSpawnTimes; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t MaxSpawnTimes; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AttributeChangeDetectorFactorList
// Size: 0x18 (Inherited: 0x00)
struct FAttributeChangeDetectorFactorList {
public:

	struct TArray<struct FAttributeChangeFactor> FactorList; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AttributeChangeFactor
// Size: 0x70 (Inherited: 0x00)
struct FAttributeChangeFactor {
public:

	enum class EAttributeChangeOp Op; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ThresHold; // 0x04(0x04)
	bool OnlyResetTriggerWhileOpFailed; // 0x08(0x01)
	bool CanTrigger; // 0x09(0x01)
	char pad_A[0x16]; // 0x0a(0x16)
	struct FGPGameplayAttribute MaxAttributeRelated; // 0x20(0x38)
	struct TArray<int32_t> BuffId; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RuntimeCharacterMeshMergeInfo
// Size: 0xa8 (Inherited: 0x00)
struct FRuntimeCharacterMeshMergeInfo {
public:

	char pad_0[0xa8]; // 0x00(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterMergeMeshComponentInfo
// Size: 0x20 (Inherited: 0x00)
struct FCharacterMergeMeshComponentInfo {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMBlackboardAutoDriveVehicleData
// Size: 0x08 (Inherited: 0x00)
struct FDFMBlackboardAutoDriveVehicleData {
public:

	float Velocity; // 0x00(0x04)
	float Duration; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMBuffClientPlayFXRecord
// Size: 0x0c (Inherited: 0x00)
struct FDFMBuffClientPlayFXRecord {
public:

	struct TWeakObjectPtr<struct UFXResourceContainerComponent> FXContainer; // 0x00(0x08)
	int32_t PlayHandleIndex; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.VoiceData
// Size: 0x48 (Inherited: 0x00)
struct FVoiceData {
public:

	struct TArray<enum class ECharacterAudioType> CharacterSpeakTypeArray; // 0x00(0x10)
	struct TArray<struct FString> CharacterSpeakNameArray; // 0x10(0x10)
	/*struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>>*/char Audio2DArray[0x10]; // 0x20(0x10)
	/*struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>>*/char Audio3DArray[0x10]; // 0x30(0x10)
	float Period; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BuffAudioArray
// Size: 0x10 (Inherited: 0x00)
struct FBuffAudioArray {
public:

	struct TArray<struct FSpecifyTimePlayAudio> Value; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BuffEntityArray
// Size: 0x10 (Inherited: 0x00)
struct FBuffEntityArray {
public:

	struct TArray<struct UDFMCharacterBuffEntityBase*> BuffEntityArray; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMCharacterReplicationItem
// Size: 0x90 (Inherited: 0x20)
struct FDFMCharacterReplicationItem : public FPropertyReplicationItem {
public:

	char LeanPeekAnimTypeValueRep; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FDeadInfo DeadInfo; // 0x28(0x68)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterAvatarStruct
// Size: 0x08 (Inherited: 0x00)
struct FCharacterAvatarStruct {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMBasicBuff
// Size: 0x50 (Inherited: 0x00)
struct FDFMBasicBuff {
public:

	uint64_t BasicBuffID; // 0x00(0x08)
	bool bIsPeriod; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Period; // 0x0c(0x04)
	bool bInstantEffect; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<uint32_t> AttributeOperateIDArray; // 0x18(0x10)
	struct TArray<struct FBuffAttributeMod> AttributeOperates; // 0x28(0x10)
	struct TArray<struct FAddAttributeHandle> RealtimeAdditionDataArray; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BuffCDAwardData
// Size: 0x10 (Inherited: 0x00)
struct FBuffCDAwardData {
public:

	struct TArray<struct FBuffKillCDAWard> CDAwardList; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ChangeSkillCDInfo
// Size: 0x0c (Inherited: 0x00)
struct FChangeSkillCDInfo {
public:

	uint32_t SkillId; // 0x00(0x04)
	enum class EChangeSkillCDType ChangeSkillCDType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float DeltaValue; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.TalentStrongModifyInfo
// Size: 0x08 (Inherited: 0x00)
struct FTalentStrongModifyInfo {
public:

	uint32_t BuffId; // 0x00(0x04)
	float RemoveTime; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.UsingHeroFashionData
// Size: 0x20 (Inherited: 0x00)
struct FUsingHeroFashionData {
public:

	uint64_t HeroID; // 0x00(0x08)
	uint64_t fashionSuitId; // 0x08(0x08)
	bool fashionTeammateVisible; // 0x10(0x01)
	bool fashionEnemyVisible; // 0x11(0x01)
	bool fashionSafehouseVisible; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	uint64_t watchItemId; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.C102AdrenalineData
// Size: 0x10 (Inherited: 0x00)
struct FC102AdrenalineData {
public:

	enum class EDFMGamePlayMode GameMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t RecordBuffID; // 0x04(0x04)
	int32_t AdrenalineBuffID; // 0x08(0x04)
	float radius; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BuffAttributeOperateCustomConfig
// Size: 0x0c (Inherited: 0x00)
struct FBuffAttributeOperateCustomConfig {
public:

	float BaseCustomValue; // 0x00(0x04)
	float PeriodAddCoefficient; // 0x04(0x04)
	uint32_t CurrentApplyTimes; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerInContainerVolumeInfo
// Size: 0x10 (Inherited: 0x00)
struct FPlayerInContainerVolumeInfo {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	uint64_t VolumeId; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ContainerVolumeData
// Size: 0x60 (Inherited: 0x00)
struct FContainerVolumeData {
public:

	uint64_t VolumeId; // 0x00(0x08)
	struct TArray<uint32_t> ContainerIdxArr; // 0x08(0x10)
	struct FVector Location; // 0x18(0x0c)
	struct FVector BoxExtent; // 0x24(0x0c)
	struct FTransform BoxTransform; // 0x30(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ContainerDisplayData
// Size: 0x18 (Inherited: 0x00)
struct FContainerDisplayData {
public:

	int32_t ItemLevel; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	uint64_t VolumeId; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractorDisplayData
// Size: 0x28 (Inherited: 0x00)
struct FInteractorDisplayData {
public:

	enum class EMapInteractorType InteractorType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Location; // 0x04(0x0c)
	struct FText InteractorName; // 0x10(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ContractRandomResultPair
// Size: 0x10 (Inherited: 0x00)
struct FContractRandomResultPair {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ContractLocData
// Size: 0x14 (Inherited: 0x00)
struct FContractLocData {
public:

	int32_t ContractID; // 0x00(0x04)
	struct FVector ContractDSLocation; // 0x04(0x0c)
	float EnableServerTime; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DebugPoint
// Size: 0x10 (Inherited: 0x00)
struct FDebugPoint {
public:

	struct FVector Location; // 0x00(0x0c)
	struct FColor Color; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMEquipmentItemRes
// Size: 0x30 (Inherited: 0x00)
struct FDFMEquipmentItemRes {
public:

	char pad_0[0x18]; // 0x00(0x18)
	struct FSoftObjectPath ResPath; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RescueAnims
// Size: 0x360 (Inherited: 0x00)
struct FRescueAnims {
public:

	struct UAnimSequence* Sol_Anim_Rescue1P_Start_Stand_InRescue1P; // 0x00(0x08)
	struct UAnimSequence* Sol_Anim_Rescue1P_Start_Crouch_InRescue1P; // 0x08(0x08)
	struct UAnimSequence* Sol_Anim_Rescue1P_Start_Prone_InRescue1P; // 0x10(0x08)
	struct UAnimSequence* Sol_Anim_Rescue1P_Loop_Stand_InRescue1P; // 0x18(0x08)
	struct UAnimSequence* Sol_Anim_Rescue1P_Loop_Crouch_InRescue1P; // 0x20(0x08)
	struct UAnimSequence* Sol_Anim_Rescue1P_Loop_Prone_InRescue1P; // 0x28(0x08)
	struct UAnimSequence* Sol_Anim_Rescue1P_End_Stand_InRescue1P; // 0x30(0x08)
	struct UAnimSequence* Sol_Anim_Rescue1P_End_Crouch_InRescue1P; // 0x38(0x08)
	struct UAnimSequence* Sol_Anim_Rescue1P_End_Prone_InRescue1P; // 0x40(0x08)
	struct UAnimSequence* Sol_Anim_BeRescued3p_Start_Crouch_InRescue1P; // 0x48(0x08)
	struct UAnimSequence* Sol_Anim_BeRescued3p_Loop_Crouch_InRescue1P; // 0x50(0x08)
	struct UAnimSequence* Sol_Anim_BeRescued3p_End_Crouch_InRescue1P; // 0x58(0x08)
	struct UAnimSequence* Sol_Anim_BeRescued1p_Start_Crouch_InBeRescue1P; // 0x60(0x08)
	struct UAnimSequence* Sol_Anim_BeRescued1p_Loop_Crouch_InBeRescue1P; // 0x68(0x08)
	struct UAnimSequence* Sol_Anim_BeRescued1p_End_Crouch_InBeRescue1P; // 0x70(0x08)
	struct UAnimSequence* Sol_Anim_Rescue3P_Start_InBeRescue1P; // 0x78(0x08)
	struct UAnimSequence* Sol_Anim_Rescue3P_Loop_InBeRescue1P; // 0x80(0x08)
	struct UAnimSequence* Sol_Anim_Rescue3P_End_InBeRescue1P; // 0x88(0x08)
	struct UAnimSequence* Sol_Anim_Rescue3P_Stand_Start_InEat; // 0x90(0x08)
	struct UAnimSequence* Sol_Anim_Rescue3P_Stand_Loop_InEat; // 0x98(0x08)
	struct UAnimSequence* Sol_Anim_Rescue3P_Stand_End_InEat; // 0xa0(0x08)
	struct UAnimSequence* Sol_Anim_Rescue3P_Crouch_Start_InEat; // 0xa8(0x08)
	struct UAnimSequence* Sol_Anim_Rescue3P_Crouch_Loop_InEat; // 0xb0(0x08)
	struct UAnimSequence* Sol_Anim_Rescue3P_Crouch_End_InEat; // 0xb8(0x08)
	struct UAnimSequence* Sol_Anim_Rescue3P_Prone_Start_InEat; // 0xc0(0x08)
	struct UAnimSequence* Sol_Anim_Rescue3P_Prone_Loop_InEat; // 0xc8(0x08)
	struct UAnimSequence* Sol_Anim_Rescue3P_Prone_End_InEat; // 0xd0(0x08)
	struct UAnimSequence* Sol_Anim_BeRescue3P_Crouch_Start_InEat; // 0xd8(0x08)
	struct UAnimSequence* Sol_Anim_BeRescue3P_Crouch_Loop_InEat; // 0xe0(0x08)
	struct UAnimSequence* Sol_Anim_BeRescue3P_Crouch_End_InEat; // 0xe8(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue1P_Start_InRescue1P; // 0xf0(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue1P_Loop_InRescue1P; // 0xf8(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue1P_End_InRescue1P; // 0x100(0x08)
	struct UAnimSequence* Sol_Med_Anim_BeRescue3P_Crouch_End_InRescue1P; // 0x108(0x08)
	struct UAnimSequence* Sol_Med_Anim_BeRescue1P_Crouch_End_InBeRescue1P; // 0x110(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_StandCrouch_Start_InBeRescue1P; // 0x118(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_StandCrouch_Loop_InBeRescue1P; // 0x120(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_StandCrouch_End_InBeRescue1P; // 0x128(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_Crouch_Start_InBeRescue1P; // 0x130(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_Crouch_Loop_InBeRescue1P; // 0x138(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_Crouch_End_InBeRescue1P; // 0x140(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_Prone_Start_InBeRescue1P; // 0x148(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_Prone_Loop_InBeRescue1P; // 0x150(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_Prone_End_InBeRescue1P; // 0x158(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_StandCrouch_Start_InEat; // 0x160(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_StandCrouch_Loop_InEat; // 0x168(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_StandCrouch_End_InEat; // 0x170(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_Crouch_Start_InEat; // 0x178(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_Crouch_Loop_InEat; // 0x180(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_Crouch_End_InEat; // 0x188(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_Prone_Start_InEat; // 0x190(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_Prone_Loop_InEat; // 0x198(0x08)
	struct UAnimSequence* Sol_Med_Anim_Rescue3p_Prone_End_InEat; // 0x1a0(0x08)
	struct UAnimSequence* Sol_Med_Anim_BeRescue3P_Crouch_End_InEat; // 0x1a8(0x08)
	struct UAnimSequence* Bat_Anim_Rescue1P_Start_Stand_InRescue1P; // 0x1b0(0x08)
	struct UAnimSequence* Bat_Anim_Rescue1P_Start_Crouch_InRescue1P; // 0x1b8(0x08)
	struct UAnimSequence* Bat_Anim_Rescue1P_Start_Prone_InRescue1P; // 0x1c0(0x08)
	struct UAnimSequence* Bat_Anim_Rescue1P_Loop_Stand_InRescue1P; // 0x1c8(0x08)
	struct UAnimSequence* Bat_Anim_Rescue1P_Loop_Crouch_InRescue1Ph; // 0x1d0(0x08)
	struct UAnimSequence* Bat_Anim_Rescue1P_Loop_Prone_InRescue1P; // 0x1d8(0x08)
	struct UAnimSequence* Bat_Anim_Rescue1P_End_Stand_InRescue1P; // 0x1e0(0x08)
	struct UAnimSequence* Bat_Anim_Rescue1P_End_Crouch_InRescue1P; // 0x1e8(0x08)
	struct UAnimSequence* Bat_Anim_Rescue1P_End_Prone_InRescue1P; // 0x1f0(0x08)
	struct UAnimSequence* Bat_Anim_BeRescued3p_Start_Prone_InRescue1P; // 0x1f8(0x08)
	struct UAnimSequence* Bat_Anim_BeRescued3p_Loop_Prone_InRescue1P; // 0x200(0x08)
	struct UAnimSequence* Bat_Anim_BeRescued3p_End_Prone_InRescue1P; // 0x208(0x08)
	struct UAnimSequence* Bat_Anim_BeRescued1p_Start_Prone_InBeRescue1P; // 0x210(0x08)
	struct UAnimSequence* Bat_Anim_BeRescued1p_Loop_Prone_InBeRescue1P; // 0x218(0x08)
	struct UAnimSequence* Bat_Anim_BeRescued1p_End_Prone_InBeRescue1P; // 0x220(0x08)
	struct UAnimSequence* Bat_Anim_Rescue3P_Start_InBeRescue1P; // 0x228(0x08)
	struct UAnimSequence* Bat_Anim_Rescue3P_Loop_InBeRescue1P; // 0x230(0x08)
	struct UAnimSequence* Bat_Anim_Rescue3P_End_InBeRescue1P; // 0x238(0x08)
	struct UAnimSequence* Bat_Anim_Rescue3P_Stand_Start_InEat; // 0x240(0x08)
	struct UAnimSequence* Bat_Anim_Rescue3P_Stand_Loop_InEat; // 0x248(0x08)
	struct UAnimSequence* Bat_Anim_Rescue3P_Stand_End_InEat; // 0x250(0x08)
	struct UAnimSequence* Bat_Anim_Rescue3P_Crouch_Start_InEat; // 0x258(0x08)
	struct UAnimSequence* Bat_Anim_Rescue3P_Crouch_Loop_InEat; // 0x260(0x08)
	struct UAnimSequence* Bat_Anim_Rescue3P_Crouch_End_InEat; // 0x268(0x08)
	struct UAnimSequence* Bat_Anim_Rescue3P_Prone_Start_InEat; // 0x270(0x08)
	struct UAnimSequence* Bat_Anim_Rescue3P_Prone_Loop_InEat; // 0x278(0x08)
	struct UAnimSequence* Bat_Anim_Rescue3P_Prone_End_InEat; // 0x280(0x08)
	struct UAnimSequence* Bat_Anim_BeRescue3P_Prone_Start_InEat; // 0x288(0x08)
	struct UAnimSequence* Bat_Anim_BeRescue3P_Prone_Loop_InEat; // 0x290(0x08)
	struct UAnimSequence* Bat_Anim_BeRescue3P_Prone_End_InEat; // 0x298(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue1P_Start_InRescue1P; // 0x2a0(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue1P_Loop_InRescue1P; // 0x2a8(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue1P_End_InRescue1P; // 0x2b0(0x08)
	struct UAnimSequence* Bat_Med_Anim_BeRescue3P_Prone_End_InRescue1P; // 0x2b8(0x08)
	struct UAnimSequence* Bat_Med_Anim_BeRescue1P_Prone_End_InBeRescue1P; // 0x2c0(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_StandCrouch_Start_InBeRescue1P; // 0x2c8(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_StandCrouch_Loop_InBeRescue1P; // 0x2d0(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_StandCrouch_End_InBeRescue1P; // 0x2d8(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_Crouch_Start_InBeRescue1P; // 0x2e0(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_Crouch_Loop_InBeRescue1P; // 0x2e8(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_Crouch_End_InBeRescue1P; // 0x2f0(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_Prone_Start_InBeRescue1P; // 0x2f8(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_Prone_Loop_InBeRescue1P; // 0x300(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_Prone_End_InBeRescue1P; // 0x308(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_StandCrouch_Start_InEat; // 0x310(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_StandCrouch_Loop_InEat; // 0x318(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_StandCrouch_End_InEat; // 0x320(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_Crouch_Start_InEat; // 0x328(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_Crouch_Loop_InEat; // 0x330(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_Crouch_End_InEat; // 0x338(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_Prone_Start_InEat; // 0x340(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_Prone_Loop_InEat; // 0x348(0x08)
	struct UAnimSequence* Bat_Med_Anim_Rescue3p_Prone_End_InEat; // 0x350(0x08)
	struct UAnimSequence* Bat_Med_Anim_BeRescue3P_Prone_End_InEat; // 0x358(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RescuePreciseAudio
// Size: 0x20 (Inherited: 0x00)
struct FRescuePreciseAudio {
public:

	struct UGPAudioEventAsset* AudioEvent; // 0x00(0x08)
	enum class EGPAudioBlueprintType AudioType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<enum class EAudioNetRole> PlayRole; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.StatusBoolModifyInfo
// Size: 0x05 (Inherited: 0x00)
struct FStatusBoolModifyInfo {
public:

	enum class EFSMForbidReason ForbidReason; // 0x00(0x01)
	enum class EStatusBoolModifyAction EnterModifyAction; // 0x01(0x01)
	bool EnterModifyValue; // 0x02(0x01)
	enum class EStatusBoolModifyAction ExitModifyAction; // 0x03(0x01)
	bool ExitModifyValue; // 0x04(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.StatusInterruptInfo
// Size: 0x03 (Inherited: 0x00)
struct FStatusInterruptInfo {
public:

	enum class EFSMForbidReason InterruptReason; // 0x00(0x01)
	bool bAutonomousExecute; // 0x01(0x01)
	bool bServerExecute; // 0x02(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMKnockDownVictumCacheData
// Size: 0x50 (Inherited: 0x00)
struct FDFMKnockDownVictumCacheData {
public:

	struct TMap<uint64_t, struct FDFMKnockDownPlayerData> VictumDataCache; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMKnockDownPlayerData
// Size: 0x28 (Inherited: 0x00)
struct FDFMKnockDownPlayerData {
public:

	int32_t KillerHealth; // 0x00(0x04)
	float KillerHitDamage; // 0x04(0x04)
	struct TArray<struct FInventoryItemInfo> KillerEquipmentArr; // 0x08(0x10)
	struct TArray<struct FInventoryItemInfo> VictumEquipmentArr; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMPlayerGameData
// Size: 0x68 (Inherited: 0x00)
struct FDFMPlayerGameData {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	struct TArray<struct FName> DataNameArr_Int32; // 0x08(0x10)
	struct TArray<struct FName> DataNameArr_Float; // 0x18(0x10)
	struct TArray<struct FName> DataNameArr_String; // 0x28(0x10)
	struct TArray<int32_t> DataArr_Int32; // 0x38(0x10)
	struct TArray<float> DataArr_Float; // 0x48(0x10)
	struct TArray<struct FString> DataArr_String; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMLocalGameData
// Size: 0x10 (Inherited: 0x00)
struct FDFMLocalGameData {
public:

	struct TArray<struct FDFMGameDataUnit_Uint64> DataUnitArr_Uint64; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMGameDataUnit_Uint64
// Size: 0x10 (Inherited: 0x00)
struct FDFMGameDataUnit_Uint64 {
public:

	struct FName Key; // 0x00(0x08)
	uint64_t Value; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CrocodileBiteDataInfo
// Size: 0x60 (Inherited: 0x00)
struct FCrocodileBiteDataInfo {
public:

	struct UAnimSequenceBase* BittenFPPAnim; // 0x00(0x08)
	struct UAnimSequenceBase* BittenTPPAnim; // 0x08(0x08)
	char pad_10[0x50]; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerMiscStatItem
// Size: 0x38 (Inherited: 0x00)
struct FPlayerMiscStatItem {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	int32_t Camp; // 0x08(0x04)
	int32_t HeadShotKillCharacterNum; // 0x0c(0x04)
	int32_t FarKillCharacterNum; // 0x10(0x04)
	int32_t OnVehicleSeconds; // 0x14(0x04)
	int32_t VehicleKillCharacterNum; // 0x18(0x04)
	int32_t DamageVehiclePercNum; // 0x1c(0x04)
	int32_t DestroyVehicleNum; // 0x20(0x04)
	int32_t RepairVehicleSeconds; // 0x24(0x04)
	int32_t CapturePointSeconds; // 0x28(0x04)
	int32_t DefendPointSeconds; // 0x2c(0x04)
	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerStat
// Size: 0x10 (Inherited: 0x00)
struct FPlayerStat {
public:

	struct TArray<struct FPlayerStatItem> PlayerStatsArr; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerVehicleExp
// Size: 0x18 (Inherited: 0x00)
struct FPlayerVehicleExp {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.VehicleExpInfo
// Size: 0x40 (Inherited: 0x00)
struct FVehicleExpInfo {
public:

	char pad_0[0x40]; // 0x00(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CheckPointInfo
// Size: 0x10 (Inherited: 0x00)
struct FCheckPointInfo {
public:

	struct FVector CheckPointPosition; // 0x00(0x0c)
	float Weight; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AssassinateRepInfo
// Size: 0x80 (Inherited: 0x00)
struct FAssassinateRepInfo {
public:

	struct AActor* AssassinateActor; // 0x00(0x08)
	struct TArray<float> PerdictHeightList; // 0x08(0x10)
	float PerdictPathScale; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FTransform SourceTran; // 0x20(0x30)
	struct FTransform TargetTran; // 0x50(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AISpawnError
// Size: 0x20 (Inherited: 0x00)
struct FAISpawnError {
public:

	struct FString ErrorStr; // 0x00(0x10)
	struct FVector Loc; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GemGameSettings
// Size: 0x40 (Inherited: 0x00)
struct FGemGameSettings {
public:

	struct FString MapName; // 0x00(0x10)
	struct FString SceneLoc; // 0x10(0x10)
	struct FString MapLoc; // 0x20(0x10)
	struct FString MapSize; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RespirationVolumeConfigRow
// Size: 0x20 (Inherited: 0x08)
struct FRespirationVolumeConfigRow : public FTableRowBase {
public:

	struct FName MapID; // 0x08(0x08)
	bool bEnable; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float RespirationDuration; // 0x14(0x04)
	struct UCurveFloat* RespirationCurve; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DsFightBehitedFlowData
// Size: 0x38 (Inherited: 0x00)
struct FDsFightBehitedFlowData {
public:

	char pad_0[0x38]; // 0x00(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DsFightHitFlowData
// Size: 0x60 (Inherited: 0x00)
struct FDsFightHitFlowData {
public:

	char pad_0[0x60]; // 0x00(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DsFightHPGainedFlowData
// Size: 0x38 (Inherited: 0x00)
struct FDsFightHPGainedFlowData {
public:

	char pad_0[0x38]; // 0x00(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MPMedalRepStruct
// Size: 0x10 (Inherited: 0x00)
struct FMPMedalRepStruct {
public:

	struct TArray<struct FMPMedalLevel> MedalsLevel; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MPMedalLevel
// Size: 0x10 (Inherited: 0x00)
struct FMPMedalLevel {
public:

	enum class EModalPointType MedalPointType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LevelNum; // 0x04(0x04)
	int32_t CurLevel; // 0x08(0x04)
	float NextLevelProg; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ItemAnimationCaches
// Size: 0x20 (Inherited: 0x00)
struct FItemAnimationCaches {
public:

	struct TArray<struct UObject*> Animations; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MapIconConfig
// Size: 0x110 (Inherited: 0x10)
struct FMapIconConfig : public FDescRowBase {
public:

	enum class EDFMMapIconType IconType; // 0x10(0x01)
	bool bCreateBigMapIcon; // 0x11(0x01)
	bool bCreateMiniMapIcon; // 0x12(0x01)
	enum class EBigMapIconLayer_SOL BigMapIconLayer_SOL; // 0x13(0x01)
	enum class EBigMapIconLayer_BB BigMapIconLayer_BB; // 0x14(0x01)
	enum class EMiniMapIconLayer MiniMapIconLayer; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	/*struct TSoftClassPtr<UObject>*/char IconControllerPath[0x28]; // 0x18(0x28)
	/*struct TSoftClassPtr<UObject>*/char IconBlueprintPath[0x28]; // 0x40(0x28)
	/*struct TSoftClassPtr<UObject>*/char MiniMapIconBlueprintPath[0x28]; // 0x68(0x28)
	/*struct TSoftClassPtr<UObject>*/char HDIconBlueprintPath[0x28]; // 0x90(0x28)
	/*struct TSoftClassPtr<UObject>*/char HDMiniMapIconBlueprintPath[0x28]; // 0xb8(0x28)
	enum class EMapIconSizeType MapIconSizeType; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float MiniMapInstancedIconScale; // 0xe4(0x04)
	float IconScaleInBigMap; // 0xe8(0x04)
	float EdgeTrackingIconScaleInBigMap; // 0xec(0x04)
	float IconScaleInMiniMap; // 0xf0(0x04)
	float EdgeTrackingIconScaleInMiniMap; // 0xf4(0x04)
	float OpacityBigMap; // 0xf8(0x04)
	float OpacityMiniMap; // 0xfc(0x04)
	float OpacityMiniMapSnapToBoundary; // 0x100(0x04)
	enum class ESlateVisibility BigMapDefaultVisibility; // 0x104(0x01)
	enum class ESlateVisibility MiniMapDefaultVisibility; // 0x105(0x01)
	char UpdateInterval; // 0x106(0x01)
	char UpdateInterval_BigMap; // 0x107(0x01)
	char MapIconGamePlayModes; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionProxyStateMapping
// Size: 0x28 (Inherited: 0x00)
struct FMotionProxyStateMapping {
public:

	struct FGameplayTagContainer Tags; // 0x00(0x20)
	int32_t State; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionPlanProxyAnimInstanceProxy
// Size: 0x750 (Inherited: 0x748)
struct FMotionPlanProxyAnimInstanceProxy : public FGPAnimInstanceProxyBase {
public:

	int32_t State; // 0x748(0x04)
	char pad_74C[0x4]; // 0x74c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMNPCAnimInstanceProxy
// Size: 0x770 (Inherited: 0x748)
struct FDFMNPCAnimInstanceProxy : public FAnimInstanceProxy {
public:

	struct UAnimSequence* Idle; // 0x748(0x08)
	struct UAimOffsetBlendSpace* ActiveAO; // 0x750(0x08)
	float AOBlendAlpha; // 0x758(0x04)
	float AOAimingPitch; // 0x75c(0x04)
	float AOAimingYaw; // 0x760(0x04)
	float AOBlendOutTime; // 0x764(0x04)
	struct ADFMNPCCharacter* OwnerPawn; // 0x768(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.NPCInfoDataRow
// Size: 0x18 (Inherited: 0x10)
struct FNPCInfoDataRow : public FDescRowBase {
public:

	struct UClass* NPCClass; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.NPCSpawnEventArgs
// Size: 0x01 (Inherited: 0x00)
struct FNPCSpawnEventArgs {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerStateReplicationItem
// Size: 0x28 (Inherited: 0x20)
struct FPlayerStateReplicationItem : public FPropertyReplicationItem {
public:

	char Ping; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerCombatStatics
// Size: 0x1e8 (Inherited: 0x00)
struct FPlayerCombatStatics {
public:

	struct TMap<uint64_t, struct FPlayerCombatDamageInfoContainer> TotalDoDamageMap; // 0x00(0x50)
	struct TMap<uint64_t, float> CurLifeDoDamageMap; // 0x50(0x50)
	struct TMap<uint64_t, float> TotalBeDamagedMap; // 0xa0(0x50)
	char pad_F0[0x50]; // 0xf0(0x50)
	float TimestampLastKill; // 0x140(0x04)
	int8_t ContinueKillCumCount; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	struct TMap<struct FName, float> TotalBeDamagedActorMap; // 0x148(0x50)
	struct TMap<struct FName, float> TotalDoDamageActorMap; // 0x198(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerCombatDamageInfoContainer
// Size: 0x10 (Inherited: 0x00)
struct FPlayerCombatDamageInfoContainer {
public:

	struct TArray<struct FPlayerCombatDamageInfo> DamageMakerArray; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerCombatDamageInfo
// Size: 0x18 (Inherited: 0x00)
struct FPlayerCombatDamageInfo {
public:

	enum class EPlayerCombatDamageMakerWeaponType MakerWeaponType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t MakerWeaponID; // 0x08(0x08)
	float Damage; // 0x10(0x04)
	float RefreshTime; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.HeroAccessoryItemsStruct
// Size: 0x10 (Inherited: 0x00)
struct FHeroAccessoryItemsStruct {
public:

	struct TArray<struct FHeroAccessoryItem> HeroAccessoryItems; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.HeroAccessoryItem
// Size: 0x18 (Inherited: 0x00)
struct FHeroAccessoryItem {
public:

	uint64_t BelongToHeroId; // 0x00(0x08)
	uint64_t prop_id; // 0x08(0x08)
	int64_t Slot; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AssassinateSkinIDInfo
// Size: 0x10 (Inherited: 0x00)
struct FAssassinateSkinIDInfo {
public:

	uint64_t HeroID; // 0x00(0x08)
	uint64_t SkinId; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerSneakingStatus
// Size: 0x0c (Inherited: 0x00)
struct FPlayerSneakingStatus {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerMatchStatus
// Size: 0x70 (Inherited: 0x00)
struct FPlayerMatchStatus {
public:

	char pad_0[0x70]; // 0x00(0x70)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerFrontEndMatchInfo
// Size: 0x78 (Inherited: 0x00)
struct FPlayerFrontEndMatchInfo {
public:

	enum class EGameMainModeType MainMode; // 0x00(0x01)
	enum class EGameSubModeType SubMode; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	uint64_t ds_room_id; // 0x08(0x08)
	int64_t time_stamp; // 0x10(0x08)
	uint64_t player_id; // 0x18(0x08)
	uint64_t team_id; // 0x20(0x08)
	int64_t random_seed; // 0x28(0x08)
	int32_t spawn_point_config_id; // 0x30(0x04)
	int32_t player_idx; // 0x34(0x04)
	struct TArray<uint32_t> MandelSpawnerIDArray; // 0x38(0x10)
	bool bManualSwitchPlayer; // 0x48(0x01)
	bool bDebug; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct TArray<struct FTeamMemberIdentity> TeamMemberIds; // 0x50(0x10)
	int64_t tod_weather_id; // 0x60(0x08)
	struct TArray<uint64_t> EventIds; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.TeamMemberIdentity
// Size: 0x10 (Inherited: 0x00)
struct FTeamMemberIdentity {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	uint32_t TeamId; // 0x08(0x04)
	uint32_t PlayerIdx; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerMatchInfo
// Size: 0x0c (Inherited: 0x00)
struct FPlayerMatchInfo {
public:

	bool bMatchOver; // 0x00(0x01)
	enum class EMatchOverReason MatchOverReason; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t MatchTime; // 0x04(0x04)
	bool bCanEnterScav; // 0x08(0x01)
	bool bLogin; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMMarkerPriorityData
// Size: 0x40 (Inherited: 0x00)
struct FDFMMarkerPriorityData {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TWeakObjectPtr<struct AActor> TargetActor; // 0x08(0x08)
	char pad_10[0x24]; // 0x10(0x24)
	struct TWeakObjectPtr<struct AGPQuestMarkerBase> marker; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMWigetStackArray
// Size: 0x60 (Inherited: 0x00)
struct FDFMWigetStackArray {
public:

	int32_t TopCode; // 0x00(0x04)
	int32_t TopValue; // 0x04(0x04)
	int32_t LastTopCode; // 0x08(0x04)
	int32_t LastTopValue; // 0x0c(0x04)
	struct TMap<int32_t, struct FDFMWigetStackItem> DataMap; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMWigetStackItem
// Size: 0x08 (Inherited: 0x00)
struct FDFMWigetStackItem {
public:

	int32_t Prioity; // 0x00(0x04)
	int32_t Value; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMWigetPriorityData
// Size: 0x30 (Inherited: 0x00)
struct FDFMWigetPriorityData {
public:

	char pad_0[0x20]; // 0x00(0x20)
	struct TWeakObjectPtr<struct UUserWidget> WidgetIns; // 0x20(0x08)
	struct UClass* WidgetClass; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RedeployLockedTeammateInfo
// Size: 0x40 (Inherited: 0x00)
struct FRedeployLockedTeammateInfo {
public:

	bool bLocked; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ActorID; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DynamicSpatialFrequency
// Size: 0x14 (Inherited: 0x00)
struct FDynamicSpatialFrequency {
public:

	float Dot; // 0x00(0x04)
	float MinPCT; // 0x04(0x04)
	float MaxPCT; // 0x08(0x04)
	float MinDistHz; // 0x0c(0x04)
	float MaxDistHz; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SafeHouseNPCEquipItem
// Size: 0x48 (Inherited: 0x00)
struct FSafeHouseNPCEquipItem {
public:

	struct FSoftObjectPath MeshPath; // 0x00(0x18)
	struct FName AttachSocket; // 0x18(0x08)
	/*struct TSoftClassPtr<UObject>*/char MeshAnimInstance[0x28]; // 0x20(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMSafeHouseNPCAnimInstanceProxy
// Size: 0x7d0 (Inherited: 0x748)
struct FDFMSafeHouseNPCAnimInstanceProxy : public FAnimInstanceProxy {
public:

	struct UAnimSequence* IdleAnim; // 0x748(0x08)
	struct UAnimSequence* WorkAnim; // 0x750(0x08)
	struct UAnimSequence* IdleToStandAnim; // 0x758(0x08)
	struct UAnimSequence* StandToIdleAnim; // 0x760(0x08)
	struct UAnimSequence* StandAnim; // 0x768(0x08)
	struct UAnimSequence* StandToStandAnim; // 0x770(0x08)
	struct UAnimSequence* InteractAnim; // 0x778(0x08)
	struct UAimOffsetBlendSpace1D* ActiveAO; // 0x780(0x08)
	bool bIsAOEnabled; // 0x788(0x01)
	char pad_789[0x3]; // 0x789(0x03)
	float AOAimingPitch; // 0x78c(0x04)
	float AOAimingYaw; // 0x790(0x04)
	float PlayerAndNPCAngle; // 0x794(0x04)
	bool bIsFocusing; // 0x798(0x01)
	bool bIsInteracting; // 0x799(0x01)
	char pad_79A[0x2]; // 0x79a(0x02)
	float IdleToStandAngle; // 0x79c(0x04)
	float StandToIdleAngle; // 0x7a0(0x04)
	float StandToStandAngle; // 0x7a4(0x04)
	struct ADFMSafeHouseNPC* OwnerNPC; // 0x7a8(0x08)
	struct AActor* InteractTarget; // 0x7b0(0x08)
	struct AActor* FocusTarget; // 0x7b8(0x08)
	char pad_7C0[0x10]; // 0x7c0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MedalData
// Size: 0x60 (Inherited: 0x00)
struct FMedalData {
public:

	enum class EModalPointType ModalPointType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ModalLevel; // 0x04(0x04)
	int32_t ModalScore; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<enum class EScoreName, int32_t> BehaviorScoreMap; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.WeaponBuffData
// Size: 0x10 (Inherited: 0x00)
struct FWeaponBuffData {
public:

	struct TArray<struct FAbilityDetectorBuffData> BuffList; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MarkEnemyWeightStruct
// Size: 0x0c (Inherited: 0x00)
struct FMarkEnemyWeightStruct {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SoundGuideInfo
// Size: 0x20 (Inherited: 0x00)
struct FSoundGuideInfo {
public:

	int32_t MinSoundCount; // 0x00(0x04)
	int32_t MaxSoundCount; // 0x04(0x04)
	float RandomInterval; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UGPAudioEventAsset*> FakeSounds; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SoundDisplayHUDInfoArray
// Size: 0x18 (Inherited: 0x00)
struct FSoundDisplayHUDInfoArray {
public:

	struct TArray<struct FSoundDisplayHUDInfo> AllSoundHUDInfoPerActor; // 0x00(0x10)
	int32_t HighDistanceWeightIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SoundDisplayHUDInfo
// Size: 0x28 (Inherited: 0x00)
struct FSoundDisplayHUDInfo {
public:

	enum class ESoundVisualizeActionType ActionType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TimeLeft; // 0x04(0x04)
	struct FVector InstigatorLocation; // 0x08(0x0c)
	float Angle; // 0x14(0x04)
	bool bIsNearDistance; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float DistanceWeight; // 0x1c(0x04)
	float DisplayDistance; // 0x20(0x04)
	float NearDistance; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SoundDataDisplayData
// Size: 0x18 (Inherited: 0x00)
struct FSoundDataDisplayData {
public:

	enum class ESoundVisualizeActionType ActionType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Index; // 0x04(0x04)
	float Distance; // 0x08(0x04)
	bool bShowIcon; // 0x0c(0x01)
	bool bShowDistanceText; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float Duration; // 0x10(0x04)
	float NearDistance; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MiniMapSoundData
// Size: 0x30 (Inherited: 0x00)
struct FMiniMapSoundData {
public:

	float Loudness; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	float radius; // 0x10(0x04)
	struct FName Tag; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	uint64_t InstigatorUin; // 0x20(0x08)
	struct AActor* SourceActor; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ActionSoundVisualizeConfigRow
// Size: 0x18 (Inherited: 0x08)
struct FActionSoundVisualizeConfigRow : public FTableRowBase {
public:

	enum class ESoundVisualizeActionType ActionType; // 0x08(0x01)
	bool bShowIcon; // 0x09(0x01)
	bool bShowDistanceText; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float Distance; // 0x0c(0x04)
	float NearDistance; // 0x10(0x04)
	float Duration; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ItemSoundVisualizeConfigRow
// Size: 0x20 (Inherited: 0x08)
struct FItemSoundVisualizeConfigRow : public FTableRowBase {
public:

	struct FString ItemID; // 0x08(0x10)
	float Distance; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIAudioDebugRecord
// Size: 0x28 (Inherited: 0x00)
struct FAIAudioDebugRecord {
public:

	struct FName AudioType; // 0x00(0x08)
	struct FSoftObjectPath AudioAsset; // 0x08(0x18)
	enum class EAIAudioDebugFailReason State; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float GenerateTime; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterSpeakRecord
// Size: 0x90 (Inherited: 0x10)
struct FCharacterSpeakRecord : public FDescRowBase {
public:

	struct FSoftObjectPath AudioAsset; // 0x10(0x18)
	struct FName Subtitle; // 0x28(0x08)
	enum class ECharacterSpeakType Type; // 0x30(0x01)
	enum class ECharacterSpeakDynamicDialogueSwitchAI_Health DialogueSwitchAI_Health; // 0x31(0x01)
	enum class ECharacterSpeakDynamicDialogueSwitchPlayer_Health DialogueSwitchPlayer_Health; // 0x32(0x01)
	enum class ECharacterSpeakDynamicDialogueSwitchTeammate DialogueSwitchTeammate; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FName> LevelNames; // 0x38(0x10)
	struct TArray<uint64_t> WeatherIDs; // 0x48(0x10)
	char Priority; // 0x58(0x01)
	bool bIgnoreGlobalCooldown; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float MinTypeCooldown; // 0x5c(0x04)
	float MaxTypeCooldown; // 0x60(0x04)
	float MinGlobalCooldown; // 0x64(0x04)
	float MaxGlobalCooldown; // 0x68(0x04)
	float MaxPendingTime; // 0x6c(0x04)
	struct TArray<struct FName> TagArray; // 0x70(0x10)
	float AllAIMinGlobalCooldown; // 0x80(0x04)
	float AllAIMaxGlobalCooldown; // 0x84(0x04)
	bool bDirty; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DynamicDialogueSwitchGroupRecord
// Size: 0x18 (Inherited: 0x10)
struct FDynamicDialogueSwitchGroupRecord : public FDescRowBase {
public:

	struct FName GroupName; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DynamicDialogueRecord
// Size: 0x40 (Inherited: 0x10)
struct FDynamicDialogueRecord : public FDescRowBase {
public:

	struct FString DynamicAudioAssetPrefex; // 0x10(0x10)
	struct FString Path; // 0x20(0x10)
	enum class ECharacterSpeakDynamicDialogueSwitchStatus DialogueSwitchStatus; // 0x30(0x01)
	enum class ECharacterSpeakDynamicDialogueSwitchaAction DynamicDialogueSwitchAction; // 0x31(0x01)
	enum class ECharacterSpeakDynamicDialogueSwitchAI_Health DialogueSwitchAI_Health; // 0x32(0x01)
	enum class ECharacterSpeakDynamicDialogueSwitchPlayer_Health DialogueSwitchPlayer_Health; // 0x33(0x01)
	enum class ECharacterSpeakDynamicDialogueSwitchTeammate DialogueSwitchTeammate; // 0x34(0x01)
	enum class ECharacterSpeakDynamicDialogueSwitchLocation DialogueSwitchLocation; // 0x35(0x01)
	enum class ECharacterSpeakDynamicDialogueSwitchTime_of_Day DialogueSwitchTime_of_Day; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
	struct UGPAudioEventAsset* DynamicAudioAsset; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMTailingEffectBrushParameter
// Size: 0x20 (Inherited: 0x00)
struct FDFMTailingEffectBrushParameter {
public:

	struct FVector Location; // 0x00(0x0c)
	float ZRotation; // 0x0c(0x04)
	struct UTexture2D* Texture; // 0x10(0x08)
	float Scale; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMTailingEffectMaskParameter
// Size: 0x1c (Inherited: 0x00)
struct FDFMTailingEffectMaskParameter {
public:

	struct FVector Location; // 0x00(0x0c)
	float Yaw; // 0x0c(0x04)
	struct FVector BoundSize; // 0x10(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.TieWeaponInfo
// Size: 0x20 (Inherited: 0x00)
struct FTieWeaponInfo {
public:

	struct ADFFixedWeaponPawn* TieWeapon; // 0x00(0x08)
	enum class ETieWeaponState TieWeaponState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct USkeletalMeshComponent* DoorSkeletalMeshComponent; // 0x10(0x08)
	enum class ETieDoorState TieDoorState; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.TieWeaknessInfo
// Size: 0x18 (Inherited: 0x00)
struct FTieWeaknessInfo {
public:

	struct FName TieWeaknessName; // 0x00(0x08)
	float TieWeaknessFactor; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStaticMeshComponent* TieWeaknessSMComp; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.TieBrokenPartActor
// Size: 0x20 (Inherited: 0x00)
struct FTieBrokenPartActor {
public:

	struct TArray<struct FSoftObjectPath> BrokenPartClasses; // 0x00(0x10)
	struct TArray<struct FTransform> BrokenPartTransforms; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.TieBrokenEffect
// Size: 0x50 (Inherited: 0x00)
struct FTieBrokenEffect {
public:

	float MaxHP; // 0x00(0x04)
	bool bIsContinuous; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName EffectId; // 0x08(0x08)
	struct FName AudioId; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform EffectTransform; // 0x20(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMTLogClientData
// Size: 0x60 (Inherited: 0x00)
struct FDFMTLogClientData {
public:

	char pad_0[0x60]; // 0x00(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BigMapOperateData
// Size: 0x20 (Inherited: 0x18)
struct FBigMapOperateData : public FBasicData {
public:

	enum class EBigMapOperateType BigMapTLogDataType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMTLogServerData
// Size: 0x60 (Inherited: 0x00)
struct FDFMTLogServerData {
public:

	char pad_0[0x60]; // 0x00(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.HPGainedData
// Size: 0x30 (Inherited: 0x18)
struct FHPGainedData : public FBasicData {
public:

	char pad_18[0x18]; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PropChangeData
// Size: 0x40 (Inherited: 0x18)
struct FPropChangeData : public FBasicData {
public:

	char pad_18[0x28]; // 0x18(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMWaterRippleEffectDataTableRow
// Size: 0x80 (Inherited: 0x10)
struct FDFMWaterRippleEffectDataTableRow : public FDescRowBase {
public:

	struct FName EffectId; // 0x10(0x08)
	/*struct TSoftObjectPtr<UParticleSystem>*/char EffectParticle[0x28]; // 0x18(0x28)
	struct FTransform EffectTransform; // 0x40(0x30)
	float Duration; // 0x70(0x04)
	bool bFollowTargetMoveDirection; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float MoveThreshold; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMWaterInteractionConfig
// Size: 0x70 (Inherited: 0x00)
struct FDFMWaterInteractionConfig {
public:

	struct UMaterialParameterCollection* MaterialParameterCollection; // 0x00(0x08)
	float CaptureBoxSize; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	/*struct TSoftObjectPtr<UTextureRenderTarget2D>*/char TextureTarget1[0x28]; // 0x10(0x28)
	/*struct TSoftObjectPtr<UTextureRenderTarget2D>*/char TextureTarget2[0x28]; // 0x38(0x28)
	struct UTextureRenderTarget2D* LoadedTextureTarget1; // 0x60(0x08)
	struct UTextureRenderTarget2D* LoadedTextureTarget2; // 0x68(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMilitaryPropsAnimInstanceProxy
// Size: 0x7d0 (Inherited: 0x748)
struct FDFMilitaryPropsAnimInstanceProxy : public FGPMilitaryPropsAnimInstanceProxy {
public:

	enum class EGPWeaponStateType WeaponState; // 0x748(0x01)
	char pad_749[0x7]; // 0x749(0x07)
	struct UAnimSequence* IdleSeq; // 0x750(0x08)
	struct UAnimSequence* InactiveSeq; // 0x758(0x08)
	float AOAimingPitch; // 0x760(0x04)
	float AOAimingYaw; // 0x764(0x04)
	bool bUnderFPP; // 0x768(0x01)
	bool bIsFiring; // 0x769(0x01)
	char pad_76A[0x2]; // 0x76a(0x02)
	float AddOffSetYaw; // 0x76c(0x04)
	float AddOffSetPitch; // 0x770(0x04)
	struct FVector LookAtLocation; // 0x774(0x0c)
	struct UAnimSequence* RecoilAnim; // 0x780(0x08)
	struct FRotator AddOffSetRot1; // 0x788(0x0c)
	struct FRotator AddOffSetRot2; // 0x794(0x0c)
	float IsFiringAlpha; // 0x7a0(0x04)
	float DegSpeed; // 0x7a4(0x04)
	char pad_7A8[0x8]; // 0x7a8(0x08)
	struct UDFMilitaryPropsAnimInstance* AnimInstance; // 0x7b0(0x08)
	struct ADFScenceWeaponPawn* WeaponOwner; // 0x7b8(0x08)
	char pad_7C0[0x10]; // 0x7c0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMWeaponAAGunAnimInstanceProxy
// Size: 0x750 (Inherited: 0x748)
struct FDFMWeaponAAGunAnimInstanceProxy : public FAnimInstanceProxy {
public:

	char pad_748[0x8]; // 0x748(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.WeaponFunctionConfigForGameMode
// Size: 0x68 (Inherited: 0x10)
struct FWeaponFunctionConfigForGameMode : public FDescRowBase {
public:

	uint64_t WeaponItemId; // 0x10(0x08)
	struct TMap<enum class EDFMGamePlayMode, uint64_t> GameModeFunctionIdMap; // 0x18(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PreviewModularWeaponPartNode
// Size: 0x60 (Inherited: 0x00)
struct FPreviewModularWeaponPartNode {
public:

	struct FString MeshPath; // 0x00(0x10)
	struct FString MeshType; // 0x10(0x10)
	struct TArray<struct FName> SocketBoneList; // 0x20(0x10)
	/*struct TSoftObjectPtr<USkeletalMesh>*/char NodeSkeletalMesh[0x28]; // 0x30(0x28)
	char pad_58[0x8]; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RaidDramaInfo
// Size: 0x0c (Inherited: 0x00)
struct FRaidDramaInfo {
public:

	int32_t Count; // 0x00(0x04)
	struct FName NpcName; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DramaAISpawnInfo
// Size: 0x0c (Inherited: 0x00)
struct FDramaAISpawnInfo {
public:

	struct FName NpcName; // 0x00(0x08)
	int32_t Weighting; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIDialogTableItem
// Size: 0x70 (Inherited: 0x10)
struct FAIDialogTableItem : public FDescRowBase {
public:

	struct FString DramaScriptName; // 0x10(0x10)
	char Stage; // 0x20(0x01)
	enum class EDramaRole Role; // 0x21(0x01)
	enum class EDramaAct Action; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
	struct FText SubtitleText; // 0x28(0x18)
	struct UGPAudioEventAsset* AudioEvent; // 0x40(0x08)
	struct FString Comment; // 0x48(0x10)
	float DisplayDistance; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString DramaMontage; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SpecialPosInfo
// Size: 0x10 (Inherited: 0x00)
struct FSpecialPosInfo {
public:

	struct FVector Location; // 0x00(0x0c)
	bool bUse; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitStatisticsInfo
// Size: 0x20 (Inherited: 0x00)
struct FExitStatisticsInfo {
public:

	int32_t ResetRealNum; // 0x00(0x04)
	int32_t CoolDownTargetTime; // 0x04(0x04)
	int32_t RealPlayerEscapeNum; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct ACHARACTER*> PaidPlayerArray; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitVOConfig
// Size: 0x70 (Inherited: 0x00)
struct FExitVOConfig {
public:

	struct FName OtherPlayerOpenExit; // 0x00(0x08)
	struct FName SelfOrTeamOpenExit; // 0x08(0x08)
	struct FName ExitSuccess; // 0x10(0x08)
	struct FName CloseExit; // 0x18(0x08)
	struct TMap<float, struct FName> CountDownLessThanSecondTipsInfo; // 0x20(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitResetConfig
// Size: 0x0c (Inherited: 0x00)
struct FExitResetConfig {
public:

	bool bCanReset; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ResetInterval; // 0x04(0x04)
	int32_t ResetNum; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitCloseConfig
// Size: 0x0c (Inherited: 0x00)
struct FExitCloseConfig {
public:

	enum class EExitCloseType ExitCloseType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LimitedTime; // 0x04(0x04)
	int32_t EscapeCount; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitMethodConfig
// Size: 0x08 (Inherited: 0x00)
struct FExitMethodConfig {
public:

	enum class EExitMethodType ExitMethodType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t countdown; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitOpenConfig
// Size: 0x60 (Inherited: 0x00)
struct FExitOpenConfig {
public:

	enum class EExitOpenType ExitOpenType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ActiveRatio; // 0x04(0x04)
	int32_t RandomWeight; // 0x08(0x04)
	int32_t FirstDelayTime; // 0x0c(0x04)
	int32_t ResetDelayTime; // 0x10(0x04)
	bool bOpenInAdvance; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<struct AInteractor_ExitTrigger*> InteractSwitch; // 0x18(0x10)
	bool bSwitchAnd; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct AInteractor_ExitPayment* Interactor_Exit; // 0x30(0x08)
	struct FText ExitOpenTipTemplate; // 0x38(0x18)
	int32_t PaidAmount; // 0x50(0x04)
	struct FName ItemID; // 0x54(0x08)
	int32_t ItemNum; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitTriggersConfig
// Size: 0x50 (Inherited: 0x00)
struct FExitTriggersConfig {
public:

	/*struct TSet<struct FName>*/char TriggerActorTagSet[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitUIInfo
// Size: 0x30 (Inherited: 0x00)
struct FExitUIInfo {
public:

	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor ExitIconColor; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Description; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitUIConfig
// Size: 0x178 (Inherited: 0x00)
struct FExitUIConfig {
public:

	enum class EExitUIStateType UIStateType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Description; // 0x08(0x18)
	struct FText Condition; // 0x20(0x18)
	struct FText MainText; // 0x38(0x18)
	struct FSoftObjectPath ExitIconPath; // 0x50(0x18)
	struct FLinearColor ExitIconColor; // 0x68(0x10)
	int32_t CountDownUrgent; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FText TriggerNameText; // 0x80(0x18)
	struct FText TriggerMainText; // 0x98(0x18)
	struct FText TriggerFunctionText; // 0xb0(0x18)
	struct FText TriggerDescText; // 0xc8(0x18)
	struct FSoftObjectPath TriggerIconPath; // 0xe0(0x18)
	struct FText NoticeAreaText; // 0xf8(0x18)
	struct FText ExitAreaText; // 0x110(0x18)
	struct FText ExitOpenText; // 0x128(0x18)
	float ExitOpenTextDuration; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	/*struct TSoftObjectPtr<UObject>*/char ExitBannerIconPath[0x28]; // 0x148(0x28)
	bool bCreateEventIconDefault; // 0x170(0x01)
	bool bDestroyMandelBrick; // 0x171(0x01)
	char pad_172[0x6]; // 0x172(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitAwakeConfig
// Size: 0x18 (Inherited: 0x00)
struct FExitAwakeConfig {
public:

	bool bDefaultAwake; // 0x00(0x01)
	bool bLimitAwakeTime; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float LimitAwakeTimeSec; // 0x04(0x04)
	struct UExitCheckerBase* AwakeChecker; // 0x08(0x08)
	struct UExitCheckerBase* SleepChecker; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitAcitiveConfig
// Size: 0x0c (Inherited: 0x00)
struct FExitAcitiveConfig {
public:

	float ActiveRatio; // 0x00(0x04)
	bool bRandomActive; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t RandomWeight; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitCountdownConfig
// Size: 0x18 (Inherited: 0x00)
struct FExitCountdownConfig {
public:

	float WaitTimeSec; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UExitCheckerBase* CountdownStartChecker; // 0x08(0x08)
	struct UExitCheckerBase* CountdownCancelChecker; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEqsCoverPointInfo
// Size: 0x28 (Inherited: 0x00)
struct FSOLEqsCoverPointInfo {
public:

	struct FVector Location; // 0x00(0x0c)
	bool bCanPeekLeft; // 0x0c(0x01)
	bool bCanPeekRight; // 0x0d(0x01)
	bool bIsHighCover; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct FVector Direction; // 0x10(0x0c)
	char pad_1C[0xc]; // 0x1c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMCoverContext
// Size: 0x1b0 (Inherited: 0x00)
struct FDFMCoverContext {
public:

	char pad_0[0x1b0]; // 0x00(0x1b0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMCoverAnimLocationProfile
// Size: 0x170 (Inherited: 0x00)
struct FDFMCoverAnimLocationProfile {
public:

	struct FTransform UnderCoverTransform; // 0x00(0x30)
	struct FTransform LeanOutTransform; // 0x30(0x30)
	struct FTransform HalfExposedTransform; // 0x60(0x30)
	struct FTransform FullExposedTransform; // 0x90(0x30)
	struct FTransform CoverUpTransform; // 0xc0(0x30)
	struct FTransform FullExposedProneTransform; // 0xf0(0x30)
	float CrouchCoverUpHeightMax; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct TArray<struct FDFMCoverAnimEntryPointSetting> CoverArrivalEntrySettings; // 0x128(0x10)
	struct TArray<struct FDFMCoverAnimEntryPointSetting> CoverStartEntrySettings; // 0x138(0x10)
	struct TArray<struct FDFMCoverAnimEntryPointSetting> CoverLeanArrivalEntrySettings; // 0x148(0x10)
	struct TArray<struct FDFMCoverAnimEntryPointSetting> CoverLeanStartEntrySettings; // 0x158(0x10)
	char pad_168[0x8]; // 0x168(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMCoverAnimEntryPointSetting
// Size: 0x40 (Inherited: 0x00)
struct FDFMCoverAnimEntryPointSetting {
public:

	float MinAngleDegree; // 0x00(0x04)
	float MaxAngleDegree; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform EntryPointTransform; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMCoverInfo
// Size: 0x28 (Inherited: 0x00)
struct FDFMCoverInfo {
public:

	struct FVector Location; // 0x00(0x0c)
	bool bIsHighCover; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FVector CoverDirection; // 0x10(0x0c)
	bool bCanLeaveLeft; // 0x1c(0x01)
	bool bCanLeaveRight; // 0x1d(0x01)
	bool bCanPeekLeft; // 0x1e(0x01)
	bool bCanPeekRight; // 0x1f(0x01)
	bool bCanPeekUp; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float CoverHeight; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMCoverInfoOld
// Size: 0x24 (Inherited: 0x00)
struct FDFMCoverInfoOld {
public:

	char pad_0[0x24]; // 0x00(0x24)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GuidedRocketMovementParam
// Size: 0x30 (Inherited: 0x00)
struct FGuidedRocketMovementParam {
public:

	struct FVector BulletSpawnLoc; // 0x00(0x0c)
	struct FVector BulletTargetLoc; // 0x0c(0x0c)
	struct FRotator BulletFireRot; // 0x18(0x0c)
	float MaxSpeed; // 0x24(0x04)
	float EngineAcc; // 0x28(0x04)
	bool bSpecialExplode; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FixTrackRocketLauncherAnimInstanceProxy
// Size: 0x50 (Inherited: 0x00)
struct FFixTrackRocketLauncherAnimInstanceProxy {
public:

	struct TMap<struct FName, struct FRotator> CurrentBoneRelRotatorMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SlotAssignment
// Size: 0xa0 (Inherited: 0x00)
struct FSlotAssignment {
public:

	struct AAIController* AIController; // 0x00(0x08)
	char pad_8[0x98]; // 0x08(0x98)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PathInfo
// Size: 0x28 (Inherited: 0x00)
struct FPathInfo {
public:

	char pad_0[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PathParam
// Size: 0x0c (Inherited: 0x00)
struct FPathParam {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FormationSlot
// Size: 0x30 (Inherited: 0x00)
struct FFormationSlot {
public:

	struct FVector offset; // 0x00(0x0c)
	float Yaw; // 0x0c(0x04)
	struct FDataTableRowHandle InteractiveGroupName; // 0x10(0x10)
	float IntervalTimeMin; // 0x20(0x04)
	float IntervalTimeMax; // 0x24(0x04)
	float Percentage; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MonitorArray
// Size: 0x10 (Inherited: 0x00)
struct FMonitorArray {
public:

	struct TArray<struct AGameplayMonitor*> Monitors; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DoorOpenInfo
// Size: 0x50 (Inherited: 0x00)
struct FDoorOpenInfo {
public:

	uint64_t MapID; // 0x00(0x08)
	uint64_t RoomId; // 0x08(0x08)
	uint64_t DoorID; // 0x10(0x08)
	uint64_t KeyID; // 0x18(0x08)
	uint64_t PlayerId; // 0x20(0x08)
	uint64_t OpenTime; // 0x28(0x08)
	struct FString DoorIDName; // 0x30(0x10)
	struct FString KeyIdName; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AllRandomSIContainerSafeBoxInfo
// Size: 0x30 (Inherited: 0x00)
struct FAllRandomSIContainerSafeBoxInfo {
public:

	struct FName SafeBoxArea; // 0x00(0x08)
	struct TArray<struct FRandomSIContainerSafeBoxInfo> SIContainerSafeBoxInfoGroups; // 0x08(0x10)
	struct TArray<int32_t> SelectedSIContainerSafeBoxIDs; // 0x18(0x10)
	bool bDoRandomed; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RandomSIContainerSafeBoxInfo
// Size: 0x0c (Inherited: 0x00)
struct FRandomSIContainerSafeBoxInfo {
public:

	int32_t StartID; // 0x00(0x04)
	int32_t EndID; // 0x04(0x04)
	int32_t Num; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GamePlayWantedInfo
// Size: 0x10 (Inherited: 0x00)
struct FGamePlayWantedInfo {
public:

	struct TArray<uint64_t> WantedItemList; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ShakeParams
// Size: 0x04 (Inherited: 0x00)
struct FShakeParams {
public:

	float ShakeScale; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FakeEnemyParams
// Size: 0x14 (Inherited: 0x00)
struct FFakeEnemyParams {
public:

	int32_t MinNum; // 0x00(0x04)
	int32_t MaxNum; // 0x04(0x04)
	float MinRadius; // 0x08(0x04)
	float MaxRadius; // 0x0c(0x04)
	float LastTime; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BeHitCameraModifierConfig
// Size: 0x30 (Inherited: 0x00)
struct FBeHitCameraModifierConfig {
public:

	float OuterDistance; // 0x00(0x04)
	float TotalTime; // 0x04(0x04)
	struct UCurveVector* CameraShakeCurve; // 0x08(0x08)
	bool bPitchEnableDirection; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector2D PitchRandRange; // 0x14(0x08)
	struct FVector2D YawRandRange; // 0x1c(0x08)
	bool bRollEnableDirection; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FVector2D RollRandRange; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.JoggleCameraConfig
// Size: 0x28 (Inherited: 0x00)
struct FJoggleCameraConfig {
public:

	float Duration; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCurveVector* TPPRotatorCurve; // 0x08(0x08)
	struct UCurveVector* TPPTranslationCurve; // 0x10(0x08)
	struct UCurveVector* FPPRotatorCurve; // 0x18(0x08)
	struct UCurveVector* FPPTranslationCurve; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ScreenPostProcessEffectConfig
// Size: 0x58 (Inherited: 0x00)
struct FScreenPostProcessEffectConfig {
public:

	struct FString MatInstName; // 0x00(0x10)
	bool bTimeControl; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FFloatRange TimeRange; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FScreenPostProcesaScalarParameterConfig> ScalarParams; // 0x28(0x10)
	struct TArray<struct FScreenPostProcesaVectorParameterConfig> VectorParams; // 0x38(0x10)
	struct TArray<struct FScreenPostProcesaCurveFloatParameterConfig> CurveFloatParams; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PostProcessVolumeBloomCurveConfig
// Size: 0x30 (Inherited: 0x00)
struct FPostProcessVolumeBloomCurveConfig {
public:

	/*struct TSoftObjectPtr<UCurveFloat>*/char Curve[0x28]; // 0x00(0x28)
	float BaseValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GPPerfGroup
// Size: 0x18 (Inherited: 0x00)
struct FGPPerfGroup {
public:

	enum class EGPPrefGroupName Name; // 0x00(0x01)
	bool bAutoRemoveCorpse; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ServerRemoveCorpseTimeout; // 0x04(0x04)
	float ClientRemoveCorpseTimeout; // 0x08(0x04)
	int32_t ClientCorpseMaxCount; // 0x0c(0x04)
	struct UClass* DefaultClassTest; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GrenadeRecord
// Size: 0x14 (Inherited: 0x00)
struct FGrenadeRecord {
public:

	struct TWeakObjectPtr<struct AActor> GrenadeRef; // 0x00(0x08)
	struct TWeakObjectPtr<struct ACHARACTER> WeaponOwner; // 0x08(0x08)
	bool marked; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GroupControllers
// Size: 0x10 (Inherited: 0x00)
struct FGroupControllers {
public:

	struct TArray<struct AAIController*> ControllerList; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GroupMember
// Size: 0x0c (Inherited: 0x00)
struct FGroupMember {
public:

	int32_t ID; // 0x00(0x04)
	char pad_4[0x8]; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIEventQueue
// Size: 0x10 (Inherited: 0x00)
struct FAIEventQueue {
public:

	struct TArray<struct UAIEvent*> Events; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIEventQueueHandle
// Size: 0x08 (Inherited: 0x00)
struct FAIEventQueueHandle {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.HealthSystemAttributeDisplayRow
// Size: 0x40 (Inherited: 0x10)
struct FHealthSystemAttributeDisplayRow : public FDescRowBase {
public:

	struct FName PropertyName; // 0x10(0x08)
	struct FName PropertyDisplayName; // 0x18(0x08)
	enum class EHealthAttributeUnit Unit; // 0x20(0x04)
	char RoundNum; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FText Suffix; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.HealthStateTriggerRow
// Size: 0x30 (Inherited: 0x10)
struct FHealthStateTriggerRow : public FDescRowBase {
public:

	enum class ECharacterPart CharacterPart; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FHealthBuffTrigger> BuffTriggers; // 0x18(0x10)
	uint32_t BrokenBuffId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.HealthBuffTrigger
// Size: 0x10 (Inherited: 0x00)
struct FHealthBuffTrigger {
public:

	uint32_t BuffId; // 0x00(0x04)
	enum class TriggerBuffType TriggerType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float TriggerRate; // 0x08(0x04)
	float AdditionTriggerRate; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.HealthStateBuffConfig
// Size: 0x14 (Inherited: 0x00)
struct FHealthStateBuffConfig {
public:

	uint32_t BuffId; // 0x00(0x04)
	float MinHealth; // 0x04(0x04)
	float MaxHealth; // 0x08(0x04)
	float MinTriggerRate; // 0x0c(0x04)
	float MaxTriggerRate; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.HelmetMaskDamageInfo
// Size: 0x30 (Inherited: 0x00)
struct FHelmetMaskDamageInfo {
public:

	uint64_t gid; // 0x00(0x08)
	uint64_t ItemID; // 0x08(0x08)
	float MaxHP; // 0x10(0x04)
	float CurHP; // 0x14(0x04)
	bool IsUpdateFromDamage; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FDamageViewInfo> DamageInfoArray; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DamageViewInfo
// Size: 0x18 (Inherited: 0x00)
struct FDamageViewInfo {
public:

	int32_t AreaID; // 0x00(0x04)
	int32_t CrackID; // 0x04(0x04)
	struct FVector2D DamageRelativeLocation; // 0x08(0x08)
	float DamageAngle; // 0x10(0x04)
	float DamageSizeParam; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.HelmetConfigRow
// Size: 0xc0 (Inherited: 0x08)
struct FHelmetConfigRow : public FTableRowBase {
public:

	uint64_t ItemID; // 0x08(0x08)
	/*struct TSoftObjectPtr<UAnimSequence>*/char HelmetCloseMask[0x28]; // 0x10(0x28)
	struct FName HelmetCloseName; // 0x38(0x08)
	/*struct TSoftObjectPtr<USkeletalMesh>*/char MaskMeshPath[0x28]; // 0x40(0x28)
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform RelativeTransform; // 0x70(0x30)
	struct FName MeshAttachSocket; // 0xa0(0x08)
	float HiddenMaskTime; // 0xa8(0x04)
	float LogicMaskTime; // 0xac(0x04)
	enum class EHelmetMaskType MaskType; // 0xb0(0x01)
	char pad_B1[0xf]; // 0xb1(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GlassBreakeInfo
// Size: 0x18 (Inherited: 0x00)
struct FGlassBreakeInfo {
public:

	struct FVector LocalPosition; // 0x00(0x0c)
	struct FVector LocalScale; // 0x0c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MatVectorParamter
// Size: 0x18 (Inherited: 0x00)
struct FMatVectorParamter {
public:

	struct FName ParamterName; // 0x00(0x08)
	struct FLinearColor ParamterValue; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MatScalarParameter
// Size: 0x0c (Inherited: 0x00)
struct FMatScalarParameter {
public:

	struct FName ParamterName; // 0x00(0x08)
	float ParamterValue; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.UpgradeTipData
// Size: 0x58 (Inherited: 0x00)
struct FUpgradeTipData {
public:

	enum class EUpgradeTipsType UpgradeTipsType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ShowTime; // 0x04(0x04)
	float TimeHasBeenShowed; // 0x08(0x04)
	int32_t NewLevel; // 0x0c(0x04)
	uint64_t UnlockWeaponID; // 0x10(0x08)
	struct TArray<uint64_t> UnlockWeaponPartsID; // 0x18(0x10)
	int32_t IntValue1; // 0x28(0x04)
	int32_t IntValue2; // 0x2c(0x04)
	struct FText TextValue1; // 0x30(0x18)
	struct FString StringValue1; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MPWeaponLevelConfigStruct
// Size: 0x50 (Inherited: 0x00)
struct FMPWeaponLevelConfigStruct {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MPWeaponLevelConfig
// Size: 0x28 (Inherited: 0x00)
struct FMPWeaponLevelConfig {
public:

	char pad_0[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GameModeLevelConfig
// Size: 0x20 (Inherited: 0x00)
struct FGameModeLevelConfig {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LightInfo
// Size: 0x02 (Inherited: 0x00)
struct FLightInfo {
public:

	bool bIsPowering; // 0x00(0x01)
	bool bIsDamaged; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLPwdDecalInfo
// Size: 0x18 (Inherited: 0x00)
struct FSOLPwdDecalInfo {
public:

	int32_t PwdNumDigit; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> SOLDecalIds; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MandelBrickContainerEffectInfo
// Size: 0x04 (Inherited: 0x00)
struct FMandelBrickContainerEffectInfo {
public:

	int32_t EffectType; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.VehicleInElevatorInfo
// Size: 0x40 (Inherited: 0x00)
struct FVehicleInElevatorInfo {
public:

	struct AInteractor_Elevator* OwnerElevator; // 0x00(0x08)
	struct AGPVehicleBase* InElevatorVehicle; // 0x08(0x08)
	struct FTransform VehicleTransformInElevator; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ElevatorMovingInfo
// Size: 0x08 (Inherited: 0x00)
struct FElevatorMovingInfo {
public:

	float CurElevatorMovingTime; // 0x00(0x04)
	float CurElevatorMovingOffset; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MorseCodeSuccessInfo
// Size: 0x10 (Inherited: 0x00)
struct FMorseCodeSuccessInfo {
public:

	bool bSuccess; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t PlayerUin; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RaidAmmoBoxSetsArray
// Size: 0x10 (Inherited: 0x00)
struct FRaidAmmoBoxSetsArray {
public:

	struct TArray<struct FRaidAmmoBoxSet> AmmoSets; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RaidAmmoBoxSet
// Size: 0x0c (Inherited: 0x00)
struct FRaidAmmoBoxSet {
public:

	enum class ERaidAmmoBoxType GunType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t AmmoCount; // 0x04(0x04)
	int32_t AmmoLevel; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerPurchaseInfo
// Size: 0x18 (Inherited: 0x00)
struct FPlayerPurchaseInfo {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	struct TArray<struct FPurchaseItemInfo> PurchaseItemInfoArr; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PurchaseItemInfo
// Size: 0x20 (Inherited: 0x00)
struct FPurchaseItemInfo {
public:

	int32_t ID; // 0x00(0x04)
	struct FName ItemID; // 0x04(0x08)
	int32_t Num; // 0x0c(0x04)
	struct TArray<struct FItemAttachLocation> TargetLocations; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ShopStationItemConfig
// Size: 0x70 (Inherited: 0x10)
struct FShopStationItemConfig : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	struct FName ItemID; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText DescText; // 0x20(0x18)
	struct FText ItemName; // 0x38(0x18)
	float PremiumRate; // 0x50(0x04)
	float Probability; // 0x54(0x04)
	struct FName CurrencyId; // 0x58(0x08)
	int32_t Price; // 0x60(0x04)
	bool bLimitedBuy; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	int32_t LimitedNum; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SingleItemContainerAimBoxArray
// Size: 0x30 (Inherited: 0x00)
struct FSingleItemContainerAimBoxArray {
public:

	struct TArray<struct FSingleItemContainerAimBox> AimBoxes; // 0x00(0x10)
	struct FName OpenedInteractPointName; // 0x10(0x08)
	struct USceneComponent* CachedOpenedInteractPoint; // 0x18(0x08)
	struct FName ClosedInteractPointName; // 0x20(0x08)
	struct USceneComponent* CachedClosedInteractPoint; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SingleItemContainerAimBox
// Size: 0x40 (Inherited: 0x00)
struct FSingleItemContainerAimBox {
public:

	struct FName AimBoxName; // 0x00(0x08)
	struct UBoxComponent* CachedAimBox; // 0x08(0x08)
	struct FVector OpenLoc; // 0x10(0x0c)
	struct FRotator OpenRot; // 0x1c(0x0c)
	struct FVector ClosedLoc; // 0x28(0x0c)
	struct FRotator ClosedRot; // 0x34(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AnimEvaluateInfo
// Size: 0x10 (Inherited: 0x00)
struct FAnimEvaluateInfo {
public:

	bool bNeedEvaluateEndFrame; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimSequence* EvaluateAnim; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.OperateAcquireItemInfo
// Size: 0x28 (Inherited: 0x00)
struct FOperateAcquireItemInfo {
public:

	struct FName ItemID; // 0x00(0x08)
	int32_t AcquireNum; // 0x08(0x04)
	int32_t ConsumeCount; // 0x0c(0x04)
	int32_t ConsumeHealth; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UAnimSequence* ItemUseAnimation; // 0x18(0x08)
	float ItemDelayInitializer; // 0x20(0x04)
	bool NeedSwitchEmptyHand; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LiftTruckDurationSwitcherInfo
// Size: 0x08 (Inherited: 0x00)
struct FLiftTruckDurationSwitcherInfo {
public:

	bool OpenState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float EndTimeStamp; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GeneralSkillInfo
// Size: 0x08 (Inherited: 0x00)
struct FGeneralSkillInfo {
public:

	uint32_t SkillId; // 0x00(0x04)
	uint32_t SkillLevel; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ContainerCollMatchingInfo
// Size: 0x40 (Inherited: 0x00)
struct FContainerCollMatchingInfo {
public:

	struct FName BoxName; // 0x00(0x08)
	struct UBoxComponent* BoxComp; // 0x08(0x08)
	struct FVector ClosedLoc; // 0x10(0x0c)
	struct FRotator ClosedRot; // 0x1c(0x0c)
	struct FVector OpenedLoc; // 0x28(0x0c)
	struct FRotator OpenedRot; // 0x34(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SafeBoxCodeUnlockedInfo
// Size: 0x18 (Inherited: 0x00)
struct FSafeBoxCodeUnlockedInfo {
public:

	int32_t SafeBoxId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FSafeBoxCodePasswordInfo> PasswordInfos; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SafeBoxCodePasswordInfo
// Size: 0x08 (Inherited: 0x00)
struct FSafeBoxCodePasswordInfo {
public:

	int32_t Index; // 0x00(0x04)
	int32_t Digit; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SafeBoxCodeTryInfo
// Size: 0x08 (Inherited: 0x00)
struct FSafeBoxCodeTryInfo {
public:

	int32_t SafeBoxId; // 0x00(0x04)
	int32_t TryTimes; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RotateDoorChains
// Size: 0x48 (Inherited: 0x00)
struct FRotateDoorChains {
public:

	struct USceneComponent* DoorProxy; // 0x00(0x08)
	struct FName DoorProxyName; // 0x08(0x08)
	struct FRotator ForwardOpenedRot; // 0x10(0x0c)
	struct FRotator BackwardOpenedRot; // 0x1c(0x0c)
	struct FRotator ClosedRot; // 0x28(0x0c)
	float MoveSpeed; // 0x34(0x04)
	float Tolerance; // 0x38(0x04)
	struct FRotator ReallyOpenedRot; // 0x3c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SlideDoorChains
// Size: 0x30 (Inherited: 0x00)
struct FSlideDoorChains {
public:

	struct USceneComponent* DoorProxy; // 0x00(0x08)
	struct FName DoorProxyName; // 0x08(0x08)
	struct FVector OpenedLoc; // 0x10(0x0c)
	struct FVector ClosedLoc; // 0x1c(0x0c)
	float MoveSpeed; // 0x28(0x04)
	float Tolerance; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RollingDoorChains
// Size: 0x40 (Inherited: 0x00)
struct FRollingDoorChains {
public:

	struct USceneComponent* DoorPage; // 0x00(0x08)
	struct FName DoorPageName; // 0x08(0x08)
	struct USceneComponent* Anchor; // 0x10(0x08)
	struct FName AnchorName; // 0x18(0x08)
	struct FRotator ClosedRot; // 0x20(0x0c)
	struct FRotator OpenedRot; // 0x2c(0x0c)
	float MoveSpeed; // 0x38(0x04)
	float Tolerance; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CheckBlockReFilterHitResultInfo
// Size: 0x20 (Inherited: 0x00)
struct FCheckBlockReFilterHitResultInfo {
public:

	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Index; // 0x04(0x04)
	struct TArray<struct UClass*> IgnoreClasses; // 0x08(0x10)
	float CheckDis; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractablePreStateCondition
// Size: 0x20 (Inherited: 0x00)
struct FInteractablePreStateCondition {
public:

	struct UClass* InteractableClass; // 0x00(0x08)
	struct FGameplayTag InteractorTag; // 0x08(0x08)
	enum class EFSMCharacterState PreState; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float PreStateDuration; // 0x14(0x04)
	bool bEnable; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractorPreStateCondition
// Size: 0x28 (Inherited: 0x00)
struct FInteractorPreStateCondition {
public:

	struct UClass* InteractorClass; // 0x00(0x08)
	struct FGameplayTag InteractorTag; // 0x08(0x08)
	enum class EFSMCharacterState PreState; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float PreStateDuration; // 0x14(0x04)
	bool bLongPressed; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t LongPressUIType; // 0x1c(0x04)
	bool bEnable; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SwitcherStateWithContext
// Size: 0x30 (Inherited: 0x00)
struct FSwitcherStateWithContext {
public:

	bool bSwitcherState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FInteractingContext Context; // 0x04(0x2c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SlideDoorProxy
// Size: 0x28 (Inherited: 0x00)
struct FSlideDoorProxy {
public:

	struct FName DoorProxyName; // 0x00(0x08)
	struct USceneComponent* DoorProxy; // 0x08(0x08)
	struct FVector ClosedLoc; // 0x10(0x0c)
	struct FVector OpenedLoc; // 0x1c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MultiSwitcherStateWithContext
// Size: 0x30 (Inherited: 0x00)
struct FMultiSwitcherStateWithContext {
public:

	bool bFirstSwitcherState; // 0x00(0x01)
	bool bSecondSwitcherState; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FInteractingContext Context; // 0x04(0x2c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractorOptConsumeItemInfo
// Size: 0x10 (Inherited: 0x00)
struct FInteractorOptConsumeItemInfo {
public:

	struct TArray<struct FInteractorOptConsumeSingleItem> ConsumeInfos; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractorOptConsumeSingleItem
// Size: 0x14 (Inherited: 0x00)
struct FInteractorOptConsumeSingleItem {
public:

	struct FName ItemIDName; // 0x00(0x08)
	int32_t ConsumeCount; // 0x08(0x04)
	int32_t ConsumeTimes; // 0x0c(0x04)
	bool bFakeKey; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PreciseInteractTracker
// Size: 0x70 (Inherited: 0x00)
struct FPreciseInteractTracker {
public:

	float PreciseStartTimeStamp; // 0x00(0x04)
	float PreciseEndTimeStamp; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform LeftHandStartTrans; // 0x10(0x30)
	struct FTransform LeftHandEndTrans; // 0x40(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PreciseInteractMoveInfo
// Size: 0x28 (Inherited: 0x00)
struct FPreciseInteractMoveInfo {
public:

	float StartMoveTimeStamp; // 0x00(0x04)
	float EndMoveTimeStamp; // 0x04(0x04)
	struct FVector StartLoc; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct AActor* InteractingActor; // 0x18(0x08)
	bool bNeedFindFloor; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PreciseMovementPackage
// Size: 0xa0 (Inherited: 0x00)
struct FPreciseMovementPackage {
public:

	enum class EPreciseMoveStage Stage; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StartMoveTimeStamp; // 0x04(0x04)
	float EndMoveTimeStamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AActor* InteractingActor; // 0x10(0x08)
	int32_t ProcessOldOrNew; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UInteractorOperatorProcessComponent* ProcessComp; // 0x20(0x08)
	struct UInteractorOptProcessComponent* OptProcessComp; // 0x28(0x08)
	struct FInteractingContext InteractingContext; // 0x30(0x2c)
	struct FGameplayTag NextOperatorTag; // 0x5c(0x08)
	float PreciseMoveTime; // 0x64(0x04)
	float PreciseStateTimeout; // 0x68(0x04)
	char bChangeFOVWhenMove : 1; // 0x6c(0x01)
	char bSwitchToEmptyHand : 1; // 0x6c(0x01)
	char bUseEmptyHandAnimBasePose : 1; // 0x6c(0x01)
	char pad_6C_3 : 5; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FVector MoveStartLocation; // 0x70(0x0c)
	struct FRotator MoveStartRotation; // 0x7c(0x0c)
	struct FRotator MoveStartCtrlRotation; // 0x88(0x0c)
	int32_t Index; // 0x94(0x04)
	int32_t BreakType; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractableCompConditionInfo
// Size: 0x20 (Inherited: 0x00)
struct FInteractableCompConditionInfo {
public:

	struct TArray<struct FInteractorOptConditionContext> MustConditions; // 0x00(0x10)
	struct TArray<struct FInteractorOptConditionContext> OneMoreConditions; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractorOptConditionContext
// Size: 0x0c (Inherited: 0x00)
struct FInteractorOptConditionContext {
public:

	enum class EInteractorOptConditionType OptConditionType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName CompName; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractableCompAcquireForbidInfo
// Size: 0x40 (Inherited: 0x00)
struct FInteractableCompAcquireForbidInfo {
public:

	struct FGameplayTagContainer AcquireTags; // 0x00(0x20)
	struct FGameplayTagContainer ForbidTags; // 0x20(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RefLinkComps
// Size: 0x10 (Inherited: 0x00)
struct FRefLinkComps {
public:

	struct TArray<struct UInteractorRefLinkComponent*> Comps; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CondAcquireItemInfo
// Size: 0x10 (Inherited: 0x00)
struct FCondAcquireItemInfo {
public:

	struct FName ItemID; // 0x00(0x08)
	int32_t AcquireNum; // 0x08(0x04)
	int32_t AcquireHealth; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ControllerLightNameInfo
// Size: 0x18 (Inherited: 0x00)
struct FControllerLightNameInfo {
public:

	struct FName RedLightCompName; // 0x00(0x08)
	struct FName GreenLightCompName; // 0x08(0x08)
	struct FName YellowLightCompName; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ControllerLightComps
// Size: 0x18 (Inherited: 0x00)
struct FControllerLightComps {
public:

	struct UMeshComponent* RedLightComp; // 0x00(0x08)
	struct UMeshComponent* GreenLightComp; // 0x08(0x08)
	struct UMeshComponent* YellowLightComp; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractorInterruptCheckBox
// Size: 0x0f (Inherited: 0x00)
struct FInteractorInterruptCheckBox {
public:

	bool bImpendingDeath; // 0x00(0x01)
	bool bDeath; // 0x01(0x01)
	bool bKnockBack; // 0x02(0x01)
	bool bAssassinate; // 0x03(0x01)
	bool bFiring; // 0x04(0x01)
	bool bInADS; // 0x05(0x01)
	bool bReloadAmmo; // 0x06(0x01)
	bool bChangeWeapon; // 0x07(0x01)
	bool bCastSkill; // 0x08(0x01)
	bool bMoving; // 0x09(0x01)
	bool bJump; // 0x0a(0x01)
	bool bToStand; // 0x0b(0x01)
	bool bToCrouch; // 0x0c(0x01)
	bool bToProne; // 0x0d(0x01)
	bool bOpenBag; // 0x0e(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractorOptExecuteNameContainer
// Size: 0x10 (Inherited: 0x00)
struct FInteractorOptExecuteNameContainer {
public:

	struct TArray<struct FName> OptExecuteNames; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractorOptExecuteContainer
// Size: 0x10 (Inherited: 0x00)
struct FInteractorOptExecuteContainer {
public:

	struct TArray<struct UInteractorOptExecuteComponent*> OptExecuteComponents; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractAnimConfig
// Size: 0x80 (Inherited: 0x00)
struct FInteractAnimConfig {
public:

	enum class EAnimationPlayType FPPPlayType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char FPPAnimationPath[0x28]; // 0x08(0x28)
	bool FPPStopAllMontage; // 0x30(0x01)
	enum class EAnimationPlayType TPPPlayType; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char TPPAnimationPath[0x28]; // 0x38(0x28)
	bool TPPStopAllMontage; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float FPPBlendInTime; // 0x64(0x04)
	float FPPBlendOutTime; // 0x68(0x04)
	float AnimDuration; // 0x6c(0x04)
	struct FGameplayTag AnimBeginPlayTag; // 0x70(0x08)
	struct FGameplayTag AnimPlayCompleteTag; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.UseAcquireC4Info
// Size: 0x38 (Inherited: 0x00)
struct FUseAcquireC4Info {
public:

	struct FName ItemID; // 0x00(0x08)
	struct UAnimSequence* ItemUseAnimation; // 0x08(0x08)
	float ItemDelayInitializer; // 0x10(0x04)
	float ItemLifeSpan; // 0x14(0x04)
	struct FName DelayGrabOwnerComponentName; // 0x18(0x08)
	struct FName DelayGrabOwnerAttachSocket; // 0x20(0x08)
	struct UClass* GrabClass; // 0x28(0x08)
	float GrabTimeLimit; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.UseAcquireItemInfo
// Size: 0x20 (Inherited: 0x00)
struct FUseAcquireItemInfo {
public:

	struct FName ItemID; // 0x00(0x08)
	int32_t ConsumeCount; // 0x08(0x04)
	int32_t ConsumeHealth; // 0x0c(0x04)
	struct UAnimSequence* ItemUseAnimation; // 0x10(0x08)
	float ItemDelayInitializer; // 0x18(0x04)
	float ItemLifeSpan; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LinkGroupInfo
// Size: 0x1c (Inherited: 0x00)
struct FLinkGroupInfo {
public:

	struct FName ObjectName; // 0x00(0x08)
	struct FName VariableName; // 0x08(0x08)
	struct FName Group; // 0x10(0x08)
	int32_t Index; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractorSwitcherAnimInstanceProxy
// Size: 0x770 (Inherited: 0x748)
struct FInteractorSwitcherAnimInstanceProxy : public FAnimInstanceProxy {
public:

	struct UAnimSequence* Idle; // 0x748(0x08)
	bool bNeedEvaluate; // 0x750(0x01)
	char pad_751[0x7]; // 0x751(0x07)
	struct UAnimSequence* EvaluateAnim; // 0x758(0x08)
	float EvaluateAnimTimeOffset; // 0x760(0x04)
	char pad_764[0xc]; // 0x764(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SubRegionInteractorInfo
// Size: 0x10 (Inherited: 0x00)
struct FSubRegionInteractorInfo {
public:

	struct TArray<struct AActor*> SubRegionInteractorArr; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractorAnimInstanceDataRow
// Size: 0x58 (Inherited: 0x08)
struct FInteractorAnimInstanceDataRow : public FTableRowBase {
public:

	/*struct TSoftClassPtr<UObject>*/char InteractorBPClassPath[0x28]; // 0x08(0x28)
	/*struct TSoftClassPtr<UObject>*/char AnimInstancePath[0x28]; // 0x30(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractableTag2UIDataRow
// Size: 0x70 (Inherited: 0x08)
struct FInteractableTag2UIDataRow : public FTableRowBase {
public:

	struct FGameplayTag Tag; // 0x08(0x08)
	/*struct TSoftObjectPtr<UObject>*/char SoftIcon[0x28]; // 0x10(0x28)
	struct FText HUDTitle_HD; // 0x38(0x18)
	struct FText HUDTitle_Mobile; // 0x50(0x18)
	struct FName ZoomKeyIconName_HD; // 0x68(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractExecutorDataRow
// Size: 0x38 (Inherited: 0x08)
struct FInteractExecutorDataRow : public FTableRowBase {
public:

	struct FGameplayTag TriggerTag; // 0x08(0x08)
	/*struct TSoftClassPtr<UObject>*/char ExecutorPath[0x28]; // 0x10(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InventoryCoundownDataRow
// Size: 0x28 (Inherited: 0x10)
struct FInventoryCoundownDataRow : public FDescRowBase {
public:

	int32_t cdid; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FInventoryCoundownData> CoundownData; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InventoryCoundownData
// Size: 0x28 (Inherited: 0x00)
struct FInventoryCoundownData {
public:

	int32_t CountDownInit; // 0x00(0x04)
	int32_t CountDownInitCarry; // 0x04(0x04)
	int32_t CountDownMax; // 0x08(0x04)
	float CountDownTime; // 0x0c(0x04)
	struct TArray<enum class EDFMGamePlayMode> LimitPlayMode; // 0x10(0x10)
	bool AddToCurrentAmmo; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InventoryCoundownInfo
// Size: 0x38 (Inherited: 0x00)
struct FInventoryCoundownInfo {
public:

	char pad_0[0x38]; // 0x00(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MPInventoryItemInfo
// Size: 0x68 (Inherited: 0x00)
struct FMPInventoryItemInfo {
public:

	struct FItemID ItemID; // 0x00(0x18)
	uint64_t ItemGid; // 0x18(0x08)
	int32_t ItemCount; // 0x20(0x04)
	int32_t PresetIndex; // 0x24(0x04)
	struct FString PresetName; // 0x28(0x10)
	struct FMPGPWeaponDescInfo MPGunDescInfo; // 0x38(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIDropItem
// Size: 0x30 (Inherited: 0x00)
struct FAIDropItem {
public:

	uint64_t ItemID; // 0x00(0x08)
	uint32_t Num; // 0x08(0x04)
	uint32_t Durability; // 0x0c(0x04)
	uint32_t DurabilityLimit; // 0x10(0x04)
	float ClipAmmoRatio; // 0x14(0x04)
	float CarriedAmmoRatio; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	uint64_t AmmoItemId; // 0x20(0x08)
	uint32_t SellPrice; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InventoryItemInfo_HealthPackage
// Size: 0x60 (Inherited: 0x00)
struct FInventoryItemInfo_HealthPackage {
public:

	char pad_0[0x8]; // 0x00(0x08)
	int32_t HealAmount; // 0x08(0x04)
	int32_t HealArmor; // 0x0c(0x04)
	char pad_10[0x50]; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InventoryOccupyTime
// Size: 0x10 (Inherited: 0x00)
struct FInventoryOccupyTime {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	float OpenTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BoxItemInfo
// Size: 0x48 (Inherited: 0x00)
struct FBoxItemInfo {
public:

	struct FItemID ID; // 0x00(0x18)
	int32_t Count; // 0x18(0x04)
	int32_t Durability; // 0x1c(0x04)
	char pad_20[0x28]; // 0x20(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PickupOpenBoxAnimInstanceProxy
// Size: 0x750 (Inherited: 0x748)
struct FPickupOpenBoxAnimInstanceProxy : public FAnimInstanceProxy {
public:

	struct UAnimSequenceBase* IdleAnim; // 0x748(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.UseItemArgs
// Size: 0x38 (Inherited: 0x00)
struct FUseItemArgs {
public:

	struct TWeakObjectPtr<struct ADFMCharacter> Target; // 0x00(0x08)
	enum class ECharacterPart Part; // 0x08(0x01)
	bool bUseOnHelmet; // 0x09(0x01)
	bool bUseOnArmor; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	uint64_t TargetItemGId; // 0x10(0x08)
	uint64_t TargetItemID; // 0x18(0x08)
	enum class EUseItemInputSource UseItemSource; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<bool> PutInSafeBoxFirst; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PendingPlayMeshItemAnimationInfo
// Size: 0x70 (Inherited: 0x00)
struct FPendingPlayMeshItemAnimationInfo {
public:

	uint64_t ItemID; // 0x00(0x08)
	bool bWaitToPlay; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char PendingPlayItemAnimPtr[0x28]; // 0x10(0x28)
	bool bLoop; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float PlayRate; // 0x3c(0x04)
	bool bThreeAnim; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UAnimSequenceBase* Start; // 0x48(0x08)
	struct UAnimSequenceBase* Loop; // 0x50(0x08)
	struct UAnimSequenceBase* End; // 0x58(0x08)
	float LoopTime; // 0x60(0x04)
	float RateStart; // 0x64(0x04)
	float RateLoop; // 0x68(0x04)
	float RateEnd; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RepItemFunComponentInfo
// Size: 0x10 (Inherited: 0x00)
struct FRepItemFunComponentInfo {
public:

	uint64_t ItemID; // 0x00(0x08)
	uint64_t gid; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AmmoBoxRepInfo
// Size: 0x10 (Inherited: 0x00)
struct FAmmoBoxRepInfo {
public:

	uint64_t Uin; // 0x00(0x08)
	int32_t UseNum; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PreviewParameter
// Size: 0x38 (Inherited: 0x00)
struct FPreviewParameter {
public:

	struct ACHARACTER* ActorOwner; // 0x00(0x08)
	struct FSoftObjectPath MeshPath; // 0x08(0x18)
	struct FVector Rotator; // 0x20(0x0c)
	float PreviewDistance; // 0x2c(0x04)
	float MaxDeltaHeight; // 0x30(0x04)
	bool bAttachToSurface; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BaseSpaceItem
// Size: 0x28 (Inherited: 0x00)
struct FBaseSpaceItem {
public:

	struct FItemID ItemID; // 0x00(0x18)
	uint64_t ItemGid; // 0x18(0x08)
	int32_t Length; // 0x20(0x04)
	int32_t Height; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.KuroshioShellMovementParameter
// Size: 0x24 (Inherited: 0x00)
struct FKuroshioShellMovementParameter {
public:

	struct FVector Destination; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
	struct FVector Direction; // 0x10(0x0c)
	float Time; // 0x1c(0x04)
	float FireTime; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.KuroshioShellingTemplateConfig
// Size: 0x10 (Inherited: 0x00)
struct FKuroshioShellingTemplateConfig {
public:

	struct UClass* Template; // 0x00(0x08)
	int32_t Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LandmineDataFX
// Size: 0x18 (Inherited: 0x00)
struct FLandmineDataFX {
public:

	struct FName ExplosionFXNameCement; // 0x00(0x08)
	struct FName ExplosionFXNameSoil; // 0x08(0x08)
	struct FName ExplosionFXNameWater; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterLootingState
// Size: 0x01 (Inherited: 0x00)
struct FCharacterLootingState {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AddItemReq
// Size: 0x20 (Inherited: 0x00)
struct FAddItemReq {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ItemValue
// Size: 0x10 (Inherited: 0x00)
struct FItemValue {
public:

	int64_t ItemID; // 0x00(0x08)
	float EpCount; // 0x08(0x04)
	float AvgNumber; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BoxRandomCondition
// Size: 0x48 (Inherited: 0x00)
struct FBoxRandomCondition {
public:

	int32_t MinRollCount; // 0x00(0x04)
	int32_t MaxRollCount; // 0x04(0x04)
	struct TArray<int32_t> RollCountArray; // 0x08(0x10)
	struct TArray<int32_t> RollWeightArray; // 0x18(0x10)
	char Probability; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t WelfareCount; // 0x2c(0x04)
	int32_t MainDropPoolID; // 0x30(0x04)
	char pad_34[0x14]; // 0x34(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DropGroup
// Size: 0x68 (Inherited: 0x00)
struct FDropGroup {
public:

	char pad_0[0x68]; // 0x00(0x68)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DropSubPool
// Size: 0x18 (Inherited: 0x00)
struct FDropSubPool {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PointDropItem
// Size: 0x68 (Inherited: 0x00)
struct FPointDropItem {
public:

	uint64_t ItemID; // 0x00(0x08)
	struct FString Description; // 0x08(0x10)
	uint32_t Number; // 0x18(0x04)
	uint32_t Rarity; // 0x1c(0x04)
	uint64_t SubItemId; // 0x20(0x08)
	uint32_t SubItemNumber; // 0x28(0x04)
	uint32_t Weight; // 0x2c(0x04)
	uint32_t Price; // 0x30(0x04)
	uint32_t SellPrice; // 0x34(0x04)
	uint64_t gid; // 0x38(0x08)
	bool bAIDiedDrop; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	uint32_t MinNumber; // 0x44(0x04)
	uint32_t MaxNumber; // 0x48(0x04)
	uint32_t Durability; // 0x4c(0x04)
	uint32_t DurabilityLimit; // 0x50(0x04)
	uint32_t MinDurability; // 0x54(0x04)
	uint32_t MaxDurability; // 0x58(0x04)
	uint32_t MinDurabilityLimit; // 0x5c(0x04)
	uint32_t MaxDurabilityLimit; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RandomItemCondition
// Size: 0x20 (Inherited: 0x00)
struct FRandomItemCondition {
public:

	uint32_t DropPoolID; // 0x00(0x04)
	uint32_t MinRatio; // 0x04(0x04)
	uint32_t MaxRatio; // 0x08(0x04)
	uint32_t BasePrice; // 0x0c(0x04)
	uint32_t ItemNumLimit; // 0x10(0x04)
	uint32_t ReservedPriceRatio; // 0x14(0x04)
	bool Repeatable; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	uint32_t DeltaPrice; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MapBoxDataItemRow
// Size: 0x490 (Inherited: 0x10)
struct FMapBoxDataItemRow : public FDescRowBase {
public:

	struct FName Key; // 0x10(0x08)
	uint32_t MapID; // 0x18(0x04)
	char Level; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	uint32_t boxId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString MapName; // 0x28(0x10)
	struct FString BigArea; // 0x38(0x10)
	struct FString SmallArea; // 0x48(0x10)
	struct FString Loot; // 0x58(0x10)
	int32_t MinRollCount1; // 0x68(0x04)
	int32_t MaxRollCount1; // 0x6c(0x04)
	struct FString RollCountProbList1; // 0x70(0x10)
	char Probability1; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	uint32_t WelfareCount1; // 0x84(0x04)
	uint32_t DropPoolID1; // 0x88(0x04)
	int32_t MinRollCount2; // 0x8c(0x04)
	int32_t MaxRollCount2; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FString RollCountProbList2; // 0x98(0x10)
	char Probability2; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	uint32_t WelfareCount2; // 0xac(0x04)
	uint32_t DropPoolID2; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString MapDropID; // 0xb8(0x10)
	struct FString CourseId; // 0xc8(0x10)
	struct FString LootTimes; // 0xd8(0x10)
	uint32_t HolidayID; // 0xe8(0x04)
	int32_t MinRollCount1_Level2; // 0xec(0x04)
	int32_t MaxRollCount1_Level2; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FString RollCountProbList1_Level2; // 0xf8(0x10)
	char Probability1_Level2; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	uint32_t WelfareCount1_Level2; // 0x10c(0x04)
	uint32_t DropPoolID1_Level2; // 0x110(0x04)
	int32_t MinRollCount2_Level2; // 0x114(0x04)
	int32_t MaxRollCount2_Level2; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FString RollCountProbList2_Level2; // 0x120(0x10)
	char Probability2_Level2; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	uint32_t WelfareCount2_Level2; // 0x134(0x04)
	uint32_t DropPoolID2_Level2; // 0x138(0x04)
	int32_t MinRollCount1_Level11; // 0x13c(0x04)
	int32_t MaxRollCount1_Level11; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct FString RollCountProbList1_Level11; // 0x148(0x10)
	char Probability1_Level11; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	uint32_t WelfareCount1_Level11; // 0x15c(0x04)
	uint32_t DropPoolID1_Level11; // 0x160(0x04)
	int32_t MinRollCount2_Level11; // 0x164(0x04)
	int32_t MaxRollCount2_Level11; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FString RollCountProbList2_Level11; // 0x170(0x10)
	char Probability2_Level11; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	uint32_t WelfareCount2_Level11; // 0x184(0x04)
	uint32_t DropPoolID2_Level11; // 0x188(0x04)
	int32_t MinRollCount1_Level12; // 0x18c(0x04)
	int32_t MaxRollCount1_Level12; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct FString RollCountProbList1_Level12; // 0x198(0x10)
	char Probability1_Level12; // 0x1a8(0x01)
	char pad_1A9[0x3]; // 0x1a9(0x03)
	uint32_t WelfareCount1_Level12; // 0x1ac(0x04)
	uint32_t DropPoolID1_Level12; // 0x1b0(0x04)
	int32_t MinRollCount2_Level12; // 0x1b4(0x04)
	int32_t MaxRollCount2_Level12; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct FString RollCountProbList2_Level12; // 0x1c0(0x10)
	char Probability2_Level12; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	uint32_t WelfareCount2_Level12; // 0x1d4(0x04)
	uint32_t DropPoolID2_Level12; // 0x1d8(0x04)
	int32_t MinRollCount1_Level997; // 0x1dc(0x04)
	int32_t MaxRollCount1_Level997; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct FString RollCountProbList1_Level997; // 0x1e8(0x10)
	char Probability1_Level997; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	uint32_t WelfareCount1_Level997; // 0x1fc(0x04)
	uint32_t DropPoolID1_Level997; // 0x200(0x04)
	int32_t MinRollCount2_Level997; // 0x204(0x04)
	int32_t MaxRollCount2_Level997; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct FString RollCountProbList2_Level997; // 0x210(0x10)
	char Probability2_Level997; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	uint32_t WelfareCount2_Level997; // 0x224(0x04)
	uint32_t DropPoolID2_Level997; // 0x228(0x04)
	int32_t MinRollCount1_Level998; // 0x22c(0x04)
	int32_t MaxRollCount1_Level998; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct FString RollCountProbList1_Level998; // 0x238(0x10)
	char Probability1_Level998; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	uint32_t WelfareCount1_Level998; // 0x24c(0x04)
	uint32_t DropPoolID1_Level998; // 0x250(0x04)
	int32_t MinRollCount2_Level998; // 0x254(0x04)
	int32_t MaxRollCount2_Level998; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct FString RollCountProbList2_Level998; // 0x260(0x10)
	char Probability2_Level998; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	uint32_t WelfareCount2_Level998; // 0x274(0x04)
	uint32_t DropPoolID2_Level998; // 0x278(0x04)
	int32_t MinRollCount1_Level999; // 0x27c(0x04)
	int32_t MaxRollCount1_Level999; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct FString RollCountProbList1_Level999; // 0x288(0x10)
	char Probability1_Level999; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	uint32_t WelfareCount1_Level999; // 0x29c(0x04)
	uint32_t DropPoolID1_Level999; // 0x2a0(0x04)
	int32_t MinRollCount2_Level999; // 0x2a4(0x04)
	int32_t MaxRollCount2_Level999; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FString RollCountProbList2_Level999; // 0x2b0(0x10)
	char Probability2_Level999; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	uint32_t WelfareCount2_Level999; // 0x2c4(0x04)
	uint32_t DropPoolID2_Level999; // 0x2c8(0x04)
	char pad_2CC[0x1c4]; // 0x2cc(0x1c4)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DropPointItemRow
// Size: 0xb0 (Inherited: 0x10)
struct FDropPointItemRow : public FDescRowBase {
public:

	struct FName Key; // 0x10(0x08)
	uint64_t PointID; // 0x18(0x08)
	uint32_t MapID; // 0x20(0x04)
	char Level; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FString MapName; // 0x28(0x10)
	uint32_t HolidayID; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString BigArea; // 0x40(0x10)
	struct FString SmallArea; // 0x50(0x10)
	struct FString Loot; // 0x60(0x10)
	struct FString UniqueId; // 0x70(0x10)
	struct FString MapDropID; // 0x80(0x10)
	uint32_t DropPoolID; // 0x90(0x04)
	uint32_t DropPoolID_Level2; // 0x94(0x04)
	uint32_t DropPoolID_Level11; // 0x98(0x04)
	uint32_t DropPoolID_Level12; // 0x9c(0x04)
	uint32_t DropPoolID_Level997; // 0xa0(0x04)
	uint32_t DropPoolID_Level998; // 0xa4(0x04)
	uint32_t DropPoolID_Level999; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DropPoolItemRow
// Size: 0x58 (Inherited: 0x10)
struct FDropPoolItemRow : public FDescRowBase {
public:

	struct FName Key; // 0x10(0x08)
	uint64_t DropPoolID; // 0x18(0x08)
	uint64_t ItemID; // 0x20(0x08)
	uint64_t SubDropPoolID; // 0x28(0x08)
	bool IsBoundToDrop; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	uint32_t Weight; // 0x34(0x04)
	uint32_t Number; // 0x38(0x04)
	uint32_t MinNumber; // 0x3c(0x04)
	uint32_t MaxNumber; // 0x40(0x04)
	uint32_t MinDurability; // 0x44(0x04)
	uint32_t MaxDurability; // 0x48(0x04)
	uint32_t MinDurabilityLimit; // 0x4c(0x04)
	uint32_t MaxDurabilityLimit; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MapAIDataItemRow
// Size: 0x50 (Inherited: 0x10)
struct FMapAIDataItemRow : public FDescRowBase {
public:

	uint32_t MapID; // 0x10(0x04)
	char Level; // 0x14(0x01)
	char AILevel; // 0x15(0x01)
	char Intensity; // 0x16(0x01)
	enum class EWeaponItemType WeaponType; // 0x17(0x01)
	uint32_t AIWeaponPrice; // 0x18(0x04)
	uint32_t AIWeaponDropPoolID; // 0x1c(0x04)
	uint32_t AIArmorPrice; // 0x20(0x04)
	uint32_t AIArmorDropPoolID; // 0x24(0x04)
	uint32_t AIHelmetPrice; // 0x28(0x04)
	uint32_t AIHelmetDropPoolID; // 0x2c(0x04)
	uint32_t AIOtherEquipsPrice; // 0x30(0x04)
	uint32_t AIOtherEquipsDropPoolID; // 0x34(0x04)
	uint32_t AIBagPrice; // 0x38(0x04)
	uint32_t AIBagDropPoolID; // 0x3c(0x04)
	uint32_t AIAmmoPrice; // 0x40(0x04)
	uint32_t AIAmmoDropPoolID; // 0x44(0x04)
	uint32_t AIMaterialsPrice; // 0x48(0x04)
	uint32_t AIMaterialsDropPoolID; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MapEconomyItemRow
// Size: 0x38 (Inherited: 0x10)
struct FMapEconomyItemRow : public FDescRowBase {
public:

	uint32_t MapID; // 0x10(0x04)
	uint32_t Level; // 0x14(0x04)
	char PlayerNum; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	uint32_t TotalPrice; // 0x1c(0x04)
	int32_t PriceFluctuation; // 0x20(0x04)
	uint32_t WeaponBoxPrice; // 0x24(0x04)
	uint32_t ArmorBoxPrice; // 0x28(0x04)
	uint32_t MedicineBoxPrice; // 0x2c(0x04)
	uint32_t SundriesBoxPrice; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MapIconMovePathData
// Size: 0x18 (Inherited: 0x00)
struct FMapIconMovePathData {
public:

	struct FVector pos; // 0x00(0x0c)
	float IconRange; // 0x0c(0x04)
	float TotalLeapTime; // 0x10(0x04)
	float LeapStartTime; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MapQuestLocationData
// Size: 0x14 (Inherited: 0x00)
struct FMapQuestLocationData {
public:

	struct FName IconName; // 0x00(0x08)
	struct FVector WorldPos; // 0x08(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DetectorMarkerData
// Size: 0x08 (Inherited: 0x00)
struct FDetectorMarkerData {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMMapSignMapExtraSync
// Size: 0x50 (Inherited: 0x00)
struct FDFMMapSignMapExtraSync {
public:

	struct TMap<uint64_t, struct FDFMMapSignInfo> Map; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMExtraSyncMapSign
// Size: 0x18 (Inherited: 0x00)
struct FDFMExtraSyncMapSign {
public:

	struct FVector Location; // 0x00(0x0c)
	bool bEnable; // 0x0c(0x01)
	enum class EMapSignType MarkType; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FName SignedItemName; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MapIconCtrlArray
// Size: 0x10 (Inherited: 0x00)
struct FMapIconCtrlArray {
public:

	struct TArray<struct UMapIconViewController*> MapIconCtrlArray; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.VehicleOnFireInfo
// Size: 0x40 (Inherited: 0x00)
struct FVehicleOnFireInfo {
public:

	uint32_t VehicleId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVehicleInfo VehicleInfo; // 0x08(0x20)
	struct FVector DSWorldLoc; // 0x28(0x0c)
	float RotateAngle; // 0x34(0x04)
	struct AActor* Vehicle; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SupportSkillInfo
// Size: 0x30 (Inherited: 0x00)
struct FSupportSkillInfo {
public:

	int64_t PlayerUin; // 0x00(0x08)
	int32_t CampId; // 0x08(0x04)
	int32_t SkillId; // 0x0c(0x04)
	struct TArray<struct FVector2D> SkillPosArray; // 0x10(0x10)
	float MapRange; // 0x20(0x04)
	float LifeTime; // 0x24(0x04)
	struct FName SkillName; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AmmoBoxInfo
// Size: 0x20 (Inherited: 0x00)
struct FAmmoBoxInfo {
public:

	struct FName AmmoBoxName; // 0x00(0x08)
	struct FVector DSWorldLoc; // 0x08(0x0c)
	bool bVehicleSupplyStation; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct AActor* SceneActor; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BigMapWishItemInfo
// Size: 0x38 (Inherited: 0x00)
struct FBigMapWishItemInfo {
public:

	struct FName ItemID; // 0x00(0x08)
	struct FText ItemName; // 0x08(0x18)
	struct TArray<struct FText> SourceArr; // 0x20(0x10)
	int32_t CurCount; // 0x30(0x04)
	int32_t TargetCount; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BigMapExitInfos
// Size: 0xa0 (Inherited: 0x00)
struct FBigMapExitInfos {
public:

	/*struct TSet<struct APlayerExitBase*>*/char AllPlayerExits[0x50]; // 0x00(0x50)
	struct TMap<struct APlayerExitBase*, struct FExitTriggerArray> Exit2ExitTriggers; // 0x50(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitTriggerArray
// Size: 0x50 (Inherited: 0x00)
struct FExitTriggerArray {
public:

	/*struct TSet<struct AInteractorBase*>*/char Triggers[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BigMapDoorInfo
// Size: 0x48 (Inherited: 0x00)
struct FBigMapDoorInfo {
public:

	struct FText DoorNameText; // 0x00(0x18)
	struct FName KeyID; // 0x18(0x08)
	struct FVector DoorLoc; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FText DoorDescTxt; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MapTrackData
// Size: 0x30 (Inherited: 0x00)
struct FMapTrackData {
public:

	struct FName IconName; // 0x00(0x08)
	int32_t TrackTime; // 0x08(0x04)
	enum class EMapSignType TrackType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FVector WorldPos; // 0x10(0x0c)
	bool bVisiblity; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct AActor* TrackedActor; // 0x20(0x08)
	int64_t QuestObjectionID; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MapFloorCaptureInfo
// Size: 0x30 (Inherited: 0x00)
struct FMapFloorCaptureInfo {
public:

	enum class EMapFloorType FloorType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t FloorWidth; // 0x04(0x04)
	struct TArray<int32_t> CapturePointIndexArr; // 0x08(0x10)
	struct TArray<struct FString> CapturePointTexNameArr; // 0x18(0x10)
	struct AMapFloorVolume* MapFloorVolume; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMMapPlayerableRegionInfo
// Size: 0x20 (Inherited: 0x10)
struct FDFMMapPlayerableRegionInfo : public FDescRowBase {
public:

	struct FVector2D WorldPosMin; // 0x10(0x08)
	struct FVector2D WorldPosMax; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MatchInfo
// Size: 0xd0 (Inherited: 0x00)
struct FMatchInfo {
public:

	enum class EModeType ModeType; // 0x00(0x01)
	enum class ETeamType TeamType; // 0x01(0x01)
	enum class EMatchType MatchType; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t MatchGameMode; // 0x04(0x04)
	enum class EGameRuleType MatchGameRule; // 0x08(0x01)
	enum class EMatchSubType MatchSubType; // 0x09(0x01)
	enum class EMatchSOLOMode MatchSolMode; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	uint64_t MapID; // 0x10(0x08)
	uint64_t RoomId; // 0x18(0x08)
	int32_t AILevel; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	int64_t MatchStartTimestamp; // 0x28(0x08)
	uint32_t MatchStartPhaseId; // 0x30(0x04)
	char pad_34[0x14]; // 0x34(0x14)
	uint64_t WeatherID; // 0x48(0x08)
	uint64_t TODEventConfigId; // 0x50(0x08)
	uint32_t EventScriptId; // 0x58(0x04)
	uint32_t MapDropID; // 0x5c(0x04)
	uint32_t MapLevel; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<int32_t> HolidayActivityArray; // 0x68(0x10)
	uint64_t LobbyServerTime; // 0x78(0x08)
	bool OpenAllExit; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t SpawnBossRule; // 0x84(0x04)
	struct TArray<uint32_t> WeaponBlueprintSpawnIDArray; // 0x88(0x10)
	int32_t AIDropId; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<uint64_t> EventIds; // 0xa0(0x10)
	struct TArray<struct FName> HolidayArray; // 0xb0(0x10)
	struct TArray<struct FString> DropDsTglogNameArray; // 0xc0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RedeployStaticPointInfo
// Size: 0x1c (Inherited: 0x00)
struct FRedeployStaticPointInfo {
public:

	uint32_t NetGuid; // 0x00(0x04)
	char RedeployStaticPointType; // 0x04(0x01)
	int8_t Camp; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32_t TeamId; // 0x08(0x04)
	struct FVector_NetQuantize Location; // 0x0c(0x0c)
	uint16_t Rotation; // 0x18(0x02)
	bool IsBattle; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RedeployRebornFlagInfo
// Size: 0x20 (Inherited: 0x00)
struct FRedeployRebornFlagInfo {
public:

	uint32_t NetGuid; // 0x00(0x04)
	int8_t Camp; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t TeamId; // 0x08(0x04)
	int32_t CustomValue; // 0x0c(0x04)
	struct FVector_NetQuantize Location; // 0x10(0x0c)
	int8_t SOLUIIconType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RedeployVehicleInfo
// Size: 0x28 (Inherited: 0x00)
struct FRedeployVehicleInfo {
public:

	uint32_t VehicleNetGUID; // 0x00(0x04)
	int32_t VehicleId; // 0x04(0x04)
	int8_t Camp; // 0x08(0x01)
	bool TeamMemberOnVehicle; // 0x09(0x01)
	bool IsFull; // 0x0a(0x01)
	bool IsNotInSafeZone; // 0x0b(0x01)
	bool IsLowHP; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString ShowPlayerName; // 0x10(0x10)
	bool IsCampVehicle; // 0x20(0x01)
	bool IsGuideVehicle; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RedeployNormalPlayerInfo
// Size: 0x0c (Inherited: 0x00)
struct FRedeployNormalPlayerInfo {
public:

	uint32_t PlayerNetGUID; // 0x00(0x04)
	int32_t PlayerUin; // 0x04(0x04)
	int8_t Camp; // 0x08(0x01)
	bool IsDead; // 0x09(0x01)
	bool IsOnVehicle; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RedeployTeammatePlayerInfo
// Size: 0x10 (Inherited: 0x00)
struct FRedeployTeammatePlayerInfo {
public:

	uint32_t PlayerNetGUID; // 0x00(0x04)
	int32_t PlayerUin; // 0x04(0x04)
	int8_t ArmedForceID; // 0x08(0x01)
	bool IsBattle; // 0x09(0x01)
	bool IsDying; // 0x0a(0x01)
	bool IsDead; // 0x0b(0x01)
	bool IsTransition; // 0x0c(0x01)
	bool IsNotInSafeZone; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RebornFlagData
// Size: 0x20 (Inherited: 0x00)
struct FRebornFlagData {
public:

	uint32_t FlagID; // 0x00(0x04)
	uint32_t HP; // 0x04(0x04)
	int32_t FlagCampID; // 0x08(0x04)
	int32_t FlagTeamID; // 0x0c(0x04)
	int32_t CustomValue; // 0x10(0x04)
	struct FVector Location; // 0x14(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MinimalRepCollectFrequency
// Size: 0x02 (Inherited: 0x00)
struct FMinimalRepCollectFrequency {
public:

	char LocationCollectFrameNum; // 0x00(0x01)
	char PlayerStateCollectFrameNum; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AnimAlignUtils
// Size: 0x01 (Inherited: 0x00)
struct FAnimAlignUtils {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AnimAlignTagInfo
// Size: 0x50 (Inherited: 0x00)
struct FAnimAlignTagInfo {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AnimAlignInfo
// Size: 0x40 (Inherited: 0x00)
struct FAnimAlignInfo {
public:

	struct UAnimSequenceBase* Anim; // 0x00(0x08)
	char pad_8[0x38]; // 0x08(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AnimAlignConfig
// Size: 0x10 (Inherited: 0x00)
struct FAnimAlignConfig {
public:

	struct FName AlignID; // 0x00(0x08)
	struct FName AlignBone; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionExtParam
// Size: 0x10 (Inherited: 0x00)
struct FMotionActionExtParam {
public:

	struct FName Name; // 0x00(0x08)
	struct UObject* Value; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionPathSegment
// Size: 0x2c (Inherited: 0x00)
struct FMotionPathSegment {
public:

	struct FVector Start; // 0x00(0x0c)
	struct FVector End; // 0x0c(0x0c)
	float Len; // 0x18(0x04)
	float Direction; // 0x1c(0x04)
	enum class EMotionSegmentType Type; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FGameplayTag SegmentTag; // 0x24(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InitStateSyncMsg
// Size: 0x20 (Inherited: 0x00)
struct FInitStateSyncMsg {
public:

	struct TArray<struct FMotionStateTransitionRequestSyncInfo> RequestChain; // 0x00(0x10)
	struct TArray<struct FRequestConcatInfo> ConcatInfo; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RequestConcatInfo
// Size: 0x0c (Inherited: 0x00)
struct FRequestConcatInfo {
public:

	int32_t AbortIndex; // 0x00(0x04)
	bool bWaitActionFinish; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float AbortTime; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionMsg_SyncPlayTimeStamp
// Size: 0x04 (Inherited: 0x00)
struct FMotionActionMsg_SyncPlayTimeStamp {
public:

	float PlayTimeStamp; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AnimNode_MotionActionAnimPlayer
// Size: 0x90 (Inherited: 0x60)
struct FAnimNode_MotionActionAnimPlayer : public FAnimNode_AssetPlayerBase {
public:

	int32_t ActionId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UAnimSequenceBase* Anim; // 0x68(0x08)
	float AnimPos; // 0x70(0x04)
	float AnimPlayRate; // 0x74(0x04)
	bool bAnimLoop; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float BlendTime; // 0x7c(0x04)
	struct TArray<struct FMotionAnimPlayData> MotionAnimPlayData; // 0x80(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionAnimPlayData
// Size: 0x70 (Inherited: 0x00)
struct FMotionAnimPlayData {
public:

	int32_t ActionId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequenceBase* Anim; // 0x08(0x08)
	bool bIsMontage; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UAnimSequence* AnimSeq; // 0x18(0x08)
	float StartOffset; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
	float PlayRate; // 0x30(0x04)
	bool bLooping; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float KeyBlendTime; // 0x38(0x04)
	float SequenceLength; // 0x3c(0x04)
	bool bFullyBlended; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float LocalWeight; // 0x44(0x04)
	float GlobalWeight; // 0x48(0x04)
	char pad_4C[0x24]; // 0x4c(0x24)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionGraphConfig
// Size: 0x1d8 (Inherited: 0x00)
struct FMotionGraphConfig {
public:

	char pad_0[0x1d8]; // 0x00(0x1d8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AnimPoseBoneConfig
// Size: 0x0c (Inherited: 0x00)
struct FAnimPoseBoneConfig {
public:

	struct FName BoneName; // 0x00(0x08)
	float Weight; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SimpleAnimConfigRow
// Size: 0x40 (Inherited: 0x10)
struct FSimpleAnimConfigRow : public FDescRowBase {
public:

	/*struct TSoftObjectPtr<UAnimationAsset>*/char Anim[0x28]; // 0x10(0x28)
	bool bPersistInMemory; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionMovementSectionConfig
// Size: 0x38 (Inherited: 0x00)
struct FMotionMovementSectionConfig {
public:

	bool bMoveForward; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AnimMoveDirection; // 0x04(0x04)
	float MoveDirection; // 0x08(0x04)
	float MoveDirectionRange; // 0x0c(0x04)
	bool bVariableMoveDistance; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float AnimMoveDistance; // 0x14(0x04)
	float MoveDistanceOverride; // 0x18(0x04)
	float MinMoveDistanceOverride; // 0x1c(0x04)
	float AnimRotation; // 0x20(0x04)
	float Rotation; // 0x24(0x04)
	float RotationRange; // 0x28(0x04)
	bool bRotationUseFromTo; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float RotationFrom; // 0x30(0x04)
	float RotationTo; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionAnimVariantsConfig
// Size: 0x30 (Inherited: 0x00)
struct FMotionAnimVariantsConfig {
public:

	float ProbabilityFactor; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char AnimAsset[0x28]; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionConfigRow
// Size: 0x20 (Inherited: 0x10)
struct FMotionActionConfigRow : public FDescRowBase {
public:

	struct TArray<struct FMotionActionConfig> Actions; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionStateConfig
// Size: 0x20 (Inherited: 0x00)
struct FMotionStateConfig {
public:

	struct TArray<struct FDataTableRowHandle> ActionHandles; // 0x00(0x10)
	struct TArray<struct FMotionActionConfig> Actions; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionTransitionConfig
// Size: 0x04 (Inherited: 0x00)
struct FMotionTransitionConfig {
public:

	float TransitionCost; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CostFactor
// Size: 0x04 (Inherited: 0x00)
struct FCostFactor {
public:

	char pad_0[0x4]; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PathFollowGoal
// Size: 0x18 (Inherited: 0x00)
struct FPathFollowGoal {
public:

	struct AAIController* AIController; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionGraphConfigSetValue
// Size: 0x08 (Inherited: 0x00)
struct FMotionGraphConfigSetValue {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionAnimFeatureDB
// Size: 0x110 (Inherited: 0x00)
struct FMotionAnimFeatureDB {
public:

	struct TArray<struct UAnimSequenceBase*> AnimSequences; // 0x00(0x10)
	char pad_10[0x100]; // 0x10(0x100)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AnimPairSimilarity
// Size: 0x40 (Inherited: 0x00)
struct FAnimPairSimilarity {
public:

	struct UAnimSequenceBase* Anim1; // 0x00(0x08)
	struct UAnimSequenceBase* Anim2; // 0x08(0x08)
	char pad_10[0x30]; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionAnimationConfig
// Size: 0x20 (Inherited: 0x10)
struct FMotionAnimationConfig : public FDescRowBase {
public:

	struct UAnimSequence* Anim; // 0x10(0x08)
	bool bLoop; // 0x18(0x01)
	bool bDisable; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GPMotionState
// Size: 0x02 (Inherited: 0x00)
struct FGPMotionState {
public:

	char pad_0[0x2]; // 0x00(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionScheduler
// Size: 0x38 (Inherited: 0x00)
struct FMotionActionScheduler {
public:

	char pad_0[0x8]; // 0x00(0x08)
	/*struct TArray<ObjectPtrProperty>*/char Queue[0x10]; // 0x08(0x10)
	/*ObjectPtrProperty*/char ActiveAction[0x8]; // 0x18(0x08)
	char pad_20[0x18]; // 0x20(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionAgent
// Size: 0x50 (Inherited: 0x00)
struct FMotionActionAgent {
public:

	struct ADFMAICharacter* AgentCharacter; // 0x00(0x08)
	char pad_8[0x48]; // 0x08(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MovePathPointExData
// Size: 0x60 (Inherited: 0x00)
struct FMovePathPointExData {
public:

	struct FVector PointLoc; // 0x00(0x0c)
	bool bIsWait; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float StayTime; // 0x10(0x04)
	enum class EGroupPatrolPose MoveState; // 0x14(0x01)
	char pad_15[0xb]; // 0x15(0x0b)
	struct FTransform PointTransform; // 0x20(0x30)
	int32_t FormationID; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MovePathSectionHelicopterData
// Size: 0x18 (Inherited: 0x00)
struct FMovePathSectionHelicopterData {
public:

	struct TArray<struct FVector> Points; // 0x00(0x10)
	int32_t SectionID; // 0x10(0x04)
	struct FColor Color; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MovePathPointHelicopterExData
// Size: 0x14 (Inherited: 0x00)
struct FMovePathPointHelicopterExData {
public:

	int32_t SectionID; // 0x00(0x04)
	struct FVector PointLoc; // 0x04(0x0c)
	float StayTime; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MultiDramaActingAIInfo
// Size: 0x10 (Inherited: 0x00)
struct FMultiDramaActingAIInfo {
public:

	struct AAIController* ActingAIController; // 0x00(0x08)
	int32_t ActingDecoratorIdx; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractOperators
// Size: 0x18 (Inherited: 0x00)
struct FInteractOperators {
public:

	int32_t InteractIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct AGPCharacter*> CharacterArray; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.NarrowLanePatchMark
// Size: 0x14 (Inherited: 0x00)
struct FNarrowLanePatchMark {
public:

	struct FVector PatchLocation; // 0x00(0x0c)
	float Distance; // 0x0c(0x04)
	enum class ENarrowLanePatchMarkType MarkType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.OBPlayerMatchStat
// Size: 0x18 (Inherited: 0x00)
struct FOBPlayerMatchStat {
public:

	int16_t TeamId; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	uint64_t PlayerUin; // 0x08(0x08)
	uint16_t KillNums; // 0x10(0x02)
	char pad_12[0x2]; // 0x12(0x02)
	uint32_t InventoryValue; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.OBTeamMatchStat
// Size: 0x28 (Inherited: 0x00)
struct FOBTeamMatchStat {
public:

	int16_t TeamId; // 0x00(0x02)
	uint16_t KillNums; // 0x02(0x02)
	uint32_t InventoryValue; // 0x04(0x04)
	struct TArray<uint32_t> PlayerInventoryInfo; // 0x08(0x10)
	struct TArray<enum class EOBPlayerStatusType> PlayerStatusInfo; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.OBTeamColorRow
// Size: 0x20 (Inherited: 0x10)
struct FOBTeamColorRow : public FDescRowBase {
public:

	struct FLinearColor UniqueTeamColor; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ParachuteActorRepInfo
// Size: 0x28 (Inherited: 0x00)
struct FParachuteActorRepInfo {
public:

	float StartTimestamp; // 0x00(0x04)
	struct FVector Origin; // 0x04(0x0c)
	struct FVector Dest; // 0x10(0x0c)
	int32_t WholeParachuteTime; // 0x1c(0x04)
	float OffsetZ; // 0x20(0x04)
	bool IsFake; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.TextureMipBiasSetting
// Size: 0x10 (Inherited: 0x00)
struct FTextureMipBiasSetting {
public:

	struct FName TextureTypeName; // 0x00(0x08)
	float MipBiasMin; // 0x08(0x04)
	float MipBiasMax; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitTriggerInfo
// Size: 0x10 (Inherited: 0x00)
struct FExitTriggerInfo {
public:

	struct AInteractor_ExitTrigger* ExitTrigger; // 0x00(0x08)
	bool bEnable; // 0x08(0x01)
	bool bActive; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CommonExitCutSceneConfig
// Size: 0x20 (Inherited: 0x00)
struct FCommonExitCutSceneConfig {
public:

	struct FName CommonExit_OutDoor_Single; // 0x00(0x08)
	struct FName CommonExit_OutDoor_Multi; // 0x08(0x08)
	struct FName CommonExit_InDoor_Single; // 0x10(0x08)
	struct FName CommonExit_InDoor_Multi; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AiDifficultyDebugDataInfos
// Size: 0x28 (Inherited: 0x00)
struct FAiDifficultyDebugDataInfos {
public:

	int32_t GlobalDifficultyLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FAiDifficultyDebugData> AiDifficultyDebugDataArray; // 0x08(0x10)
	struct TArray<int32_t> CanChooseDifficultyLevel; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PerceptionDebugData
// Size: 0x18 (Inherited: 0x00)
struct FPerceptionDebugData {
public:

	struct APawn* Pawn; // 0x00(0x08)
	struct TArray<char> MarshallData; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SimulateAILabDebugData
// Size: 0x30 (Inherited: 0x00)
struct FSimulateAILabDebugData {
public:

	int64_t Uin; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator CtrlRotation; // 0x14(0x0c)
	struct FVector Velocity; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SimulateAIDebugData
// Size: 0xa8 (Inherited: 0x00)
struct FSimulateAIDebugData {
public:

	int32_t TotAINum; // 0x00(0x04)
	int32_t CurrentAINum; // 0x04(0x04)
	int32_t CurrentTickAINum; // 0x08(0x04)
	int32_t TotalBossNum; // 0x0c(0x04)
	int32_t CurrentBossNum; // 0x10(0x04)
	int32_t AILevel; // 0x14(0x04)
	struct FString AIMovementFSMState; // 0x18(0x10)
	struct FString MotionGraphState; // 0x28(0x10)
	struct TArray<struct FName> Tags; // 0x38(0x10)
	struct FVector Location; // 0x48(0x0c)
	struct FRotator CtrlRotation; // 0x54(0x0c)
	struct FRotator Rotation; // 0x60(0x0c)
	struct FVector FocusLocation; // 0x6c(0x0c)
	struct FString FocusDebugInfo; // 0x78(0x10)
	struct FString HistoryFocusDebugInfo; // 0x88(0x10)
	struct FString MotionPlanPrefTag; // 0x98(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.VCCheckResult
// Size: 0x14 (Inherited: 0x00)
struct FVCCheckResult {
public:

	int32_t CellX; // 0x00(0x04)
	int32_t CellY; // 0x04(0x04)
	char AngleIndex; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Z; // 0x0c(0x04)
	bool bCanVC; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AchievementIconStruct
// Size: 0x28 (Inherited: 0x10)
struct FAchievementIconStruct : public FDescRowBase {
public:

	uint16_t AchievementId; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
	struct FString AchievementIconPath; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AchievementDescStruct
// Size: 0x58 (Inherited: 0x10)
struct FAchievementDescStruct : public FDescRowBase {
public:

	enum class EAchievementType AchievementType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<int32_t> AchieveConditionArr; // 0x18(0x10)
	struct TArray<struct FString> AchievementNameArr; // 0x28(0x10)
	struct FString AchievementDesc; // 0x38(0x10)
	/*struct TArray<struct TSoftObjectPtr<UTexture>>*/char AchievementIconArr[0x10]; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SubPickupInfo
// Size: 0x08 (Inherited: 0x00)
struct FSubPickupInfo {
public:

	int32_t CurrLeaveNumber; // 0x00(0x04)
	char Level; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AmmoPathInfo
// Size: 0x1c (Inherited: 0x00)
struct FAmmoPathInfo {
public:

	float TimeSeconds; // 0x00(0x04)
	struct FVector Loc; // 0x04(0x0c)
	struct FRotator Rot; // 0x10(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PvpAiAgainstVehicleConfig
// Size: 0x10 (Inherited: 0x00)
struct FPvpAiAgainstVehicleConfig {
public:

	int32_t VehicleId; // 0x00(0x04)
	bool IsThreatVehicle; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t VulnerableBaseValue; // 0x08(0x04)
	enum class EPvpWeaponAntiVehicleActionType AntiActionTypes; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PvpWeaponAntiVehicleInfo
// Size: 0x10 (Inherited: 0x00)
struct FPvpWeaponAntiVehicleInfo {
public:

	int64_t WeaponID; // 0x00(0x08)
	enum class EPvpWeaponAntiVehicleActionType ActionType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PvpAIAttentionVehicle
// Size: 0x10 (Inherited: 0x00)
struct FPvpAIAttentionVehicle {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AvoidSightFilterParam
// Size: 0x18 (Inherited: 0x00)
struct FAvoidSightFilterParam {
public:

	bool bValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector AvoidTargetEye; // 0x04(0x0c)
	struct AActor* Target; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.QuestBulletMovementParam
// Size: 0x1c (Inherited: 0x00)
struct FQuestBulletMovementParam {
public:

	float MaxSpeed; // 0x00(0x04)
	float LerpDistance; // 0x04(0x04)
	float MinLerpValue; // 0x08(0x04)
	float MaxLerpValue; // 0x0c(0x04)
	float DiffDirLerpValue; // 0x10(0x04)
	bool UseVectorLerp; // 0x14(0x01)
	bool UseQuatLerp; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float DelayTrackTime; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MapRagdollVolumeTestItem
// Size: 0x20 (Inherited: 0x08)
struct FMapRagdollVolumeTestItem : public FTableRowBase {
public:

	struct FName LevelName; // 0x08(0x08)
	struct TArray<struct FRagdollTestVolumeInfo> RagdollTestVolumeInfos; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RagdollTestVolumeInfo
// Size: 0x50 (Inherited: 0x00)
struct FRagdollTestVolumeInfo {
public:

	bool bGlobalTest; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FBox VolumeBounds; // 0x04(0x1c)
	int32_t NavmeshTileStepCount; // 0x20(0x04)
	float TestInterval; // 0x24(0x04)
	float SpawnAIDelayTime; // 0x28(0x04)
	int32_t SpawnAINum; // 0x2c(0x04)
	float KillAIDelayTime; // 0x30(0x04)
	int32_t TestPriority; // 0x34(0x04)
	struct TArray<struct FVector> RagdollTestPoints; // 0x38(0x10)
	int32_t RagdollTestIdx; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DamageInfos
// Size: 0x20 (Inherited: 0x00)
struct FDamageInfos {
public:

	uint64_t PlayerId; // 0x00(0x08)
	struct TArray<struct FDamageInfo> DamageArr; // 0x08(0x10)
	float AllDamageValue; // 0x18(0x04)
	float DamagePercent; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CrosshairTickmarkRow
// Size: 0x20 (Inherited: 0x10)
struct FCrosshairTickmarkRow : public FDescRowBase {
public:

	int32_t CTId; // 0x10(0x04)
	int32_t CrosshairId; // 0x14(0x04)
	int32_t TickmarkId; // 0x18(0x04)
	float PreViewScale; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RankSkillSelectPositionParameter
// Size: 0x44 (Inherited: 0x00)
struct FRankSkillSelectPositionParameter {
public:

	struct FVector TargetLocation; // 0x00(0x0c)
	struct FRotator TargetRotator; // 0x0c(0x0c)
	bool bIsInValidPosition; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FVector SweepStartLocation; // 0x1c(0x0c)
	struct FVector SweepDirection; // 0x28(0x0c)
	float SweepDistance; // 0x34(0x04)
	struct FVector CharacterLocation; // 0x38(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIShoutPair
// Size: 0x20 (Inherited: 0x00)
struct FAIShoutPair {
public:

	struct FText SubtitleText; // 0x00(0x18)
	struct UGPAudioEventAsset* AudioEvent; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SubstitutionConfig
// Size: 0x18 (Inherited: 0x00)
struct FSubstitutionConfig {
public:

	struct UDataTable* NpcTemplateTable; // 0x00(0x08)
	struct FName NpcName; // 0x08(0x08)
	float Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ReinforceAgentVehicleDeparture
// Size: 0x20 (Inherited: 0x00)
struct FReinforceAgentVehicleDeparture {
public:

	struct TArray<struct AAISpawnChecker*> FellowPassengers; // 0x00(0x10)
	struct FVector ParkingPos; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ReinforceAgentParatrooperAction
// Size: 0x20 (Inherited: 0x00)
struct FReinforceAgentParatrooperAction {
public:

	struct ASOLParatrooperAircraft* Aircraft; // 0x00(0x08)
	struct ADFMAICharacter* Paratrooper; // 0x08(0x08)
	struct FVector ReplenishPos; // 0x10(0x0c)
	float RemainingTime; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ReplicateVariableInfo
// Size: 0x18 (Inherited: 0x00)
struct FReplicateVariableInfo {
public:

	enum class ELifetimeCondition RepCondition; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ReplicateIndex; // 0x04(0x04)
	enum class EReplicateVariableType RepVarType; // 0x08(0x01)
	char pad_9[0xf]; // 0x09(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RoleLoadBuffEffectRow
// Size: 0x28 (Inherited: 0x08)
struct FRoleLoadBuffEffectRow : public FTableRowBase {
public:

	int64_t LoadLevel; // 0x08(0x08)
	bool bUseLoadItem; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FRoleLoadEffectPair> RoleLoads; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RoleLoadEffectPair
// Size: 0x18 (Inherited: 0x00)
struct FRoleLoadEffectPair {
public:

	int64_t LoadThreshold; // 0x00(0x08)
	struct TArray<struct FDFMAttributeModEffect> LoadEffects; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DebugTransitionPathInfo
// Size: 0x20 (Inherited: 0x00)
struct FDebugTransitionPathInfo {
public:

	struct TArray<struct FDebugTransitionInfo> Transitions; // 0x00(0x10)
	struct TArray<struct FVector> AllPath; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DebugTransitionInfo
// Size: 0x28 (Inherited: 0x00)
struct FDebugTransitionInfo {
public:

	int32_t MotionType; // 0x00(0x04)
	struct FVector StartPos; // 0x04(0x0c)
	struct FVector MiddlePos; // 0x10(0x0c)
	struct FVector EndPos; // 0x1c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlanningTransitionInfo
// Size: 0x68 (Inherited: 0x00)
struct FPlanningTransitionInfo {
public:

	int32_t MotionType; // 0x00(0x04)
	bool MustMotion; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float NeedPlanning; // 0x08(0x04)
	uint32_t PlanningFrameNumber; // 0x0c(0x04)
	float PlanningSpeed; // 0x10(0x04)
	struct FVector StartPos; // 0x14(0x0c)
	struct FVector EndPos; // 0x20(0x0c)
	struct FRotator StartRot; // 0x2c(0x0c)
	struct FRotator EndRot; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FVector> PlanningPath; // 0x48(0x10)
	struct TArray<struct FVector> AllPath; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SimulationGrid
// Size: 0x20 (Inherited: 0x00)
struct FSimulationGrid {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LODSolutionData
// Size: 0x68 (Inherited: 0x00)
struct FLODSolutionData {
public:

	int32_t SolutionID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct UClass*> FeatureLevels; // 0x08(0x10)
	struct TArray<struct UClass*> Features; // 0x18(0x10)
	struct TArray<float> Audacity; // 0x28(0x10)
	struct TArray<int64_t> Cost; // 0x38(0x10)
	struct TArray<struct FLODTransitionData> PotentialUpgrade; // 0x48(0x10)
	struct TArray<struct FLODTransitionData> PotentialDowngrade; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LODTransitionData
// Size: 0x40 (Inherited: 0x00)
struct FLODTransitionData {
public:

	int16_t NewSolution; // 0x00(0x02)
	int16_t OldSolution; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<float> ProbChange; // 0x08(0x10)
	struct TArray<int64_t> CostChange; // 0x18(0x10)
	bool bNoTransCondition; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FLODFeatureLevelTranslateData> FeatureLevelTranslateList; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LODFeatureLevelTranslateData
// Size: 0x10 (Inherited: 0x00)
struct FLODFeatureLevelTranslateData {
public:

	struct UClass* From; // 0x00(0x08)
	struct UClass* To; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ResourcePoolConfig
// Size: 0x30 (Inherited: 0x00)
struct FResourcePoolConfig {
public:

	struct FName Name; // 0x00(0x08)
	float ClientCPULimit; // 0x08(0x04)
	float ClientMemoryLimit; // 0x0c(0x04)
	float DSCPULimit; // 0x10(0x04)
	float DSMemoryLimit; // 0x14(0x04)
	float DSReplicateCount; // 0x18(0x04)
	int32_t UpperVisibleCount; // 0x1c(0x04)
	float UpperClientCPULimit; // 0x20(0x04)
	int32_t FloorVisibleCount; // 0x24(0x04)
	float FloorClientCPULimit; // 0x28(0x04)
	int32_t BaseVisibleCount; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ResourcePool
// Size: 0x128 (Inherited: 0x00)
struct FResourcePool {
public:

	char pad_0[0x68]; // 0x00(0x68)
	struct TArray<struct UCharacterLODComponent*> LODComponents; // 0x68(0x10)
	struct TArray<struct UCharacterLODComponent*> LODComponentPriorityHeap; // 0x78(0x10)
	char pad_88[0xa0]; // 0x88(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LODSolutionSet
// Size: 0x130 (Inherited: 0x00)
struct FLODSolutionSet {
public:

	struct UCharacterLODFeature* RootFeature; // 0x00(0x08)
	char pad_8[0xd8]; // 0x08(0xd8)
	struct TMap<struct UClass*, struct UObject*> FeatureSingletons; // 0xe0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LODTransitionApply
// Size: 0x18 (Inherited: 0x00)
struct FLODTransitionApply {
public:

	struct UCharacterLODComponent* Target; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CriticalityFactorInfo
// Size: 0x38 (Inherited: 0x00)
struct FCriticalityFactorInfo {
public:

	struct UCharacterLODComponent* LODComponent; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LODSolutionKey
// Size: 0x10 (Inherited: 0x00)
struct FLODSolutionKey {
public:

	struct TArray<struct UCharacterLODFeatureLevel*> FeatureLevels; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LODSolution
// Size: 0x80 (Inherited: 0x00)
struct FLODSolution {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct UCharacterLODFeatureLevel*> FeatureLevels; // 0x08(0x10)
	struct TArray<struct UCharacterLODFeature*> Features; // 0x18(0x10)
	char pad_28[0x58]; // 0x28(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLDecalCombineActors
// Size: 0x28 (Inherited: 0x00)
struct FSOLDecalCombineActors {
public:

	struct FName DecalCombineId; // 0x00(0x08)
	struct FString DecalCompName; // 0x08(0x10)
	struct TArray<struct ASOLDecalActor*> SOLDecalActorArray; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLDecalCombineInfo
// Size: 0x20 (Inherited: 0x00)
struct FSOLDecalCombineInfo {
public:

	struct FString DecalCompName; // 0x00(0x10)
	struct TArray<struct FTransform> SOLDecalTransformInfoArray; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLDecalTransformInfo
// Size: 0x24 (Inherited: 0x00)
struct FSOLDecalTransformInfo {
public:

	struct FVector DecalPointLoc; // 0x00(0x0c)
	struct FRotator DecalPointRot; // 0x0c(0x0c)
	struct FVector DecalPointScale; // 0x18(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEventCourseConfig
// Size: 0x30 (Inherited: 0x10)
struct FSOLEventCourseConfig : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	enum class ESOLMapName Map; // 0x18(0x01)
	bool bOverrideIntroEvent; // 0x19(0x01)
	bool bTriggerIntroEvent; // 0x1a(0x01)
	bool bOverrideMajorEvent; // 0x1b(0x01)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FSOLMajorEventCustomConfig> EventCustomConfig; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLMajorEventCustomConfig
// Size: 0x18 (Inherited: 0x00)
struct FSOLMajorEventCustomConfig {
public:

	int32_t TriggerTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> Zones; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ContractData
// Size: 0x40 (Inherited: 0x00)
struct FContractData {
public:

	int32_t ContractID; // 0x00(0x04)
	float ContractStartTime; // 0x04(0x04)
	float ContractLimitTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<enum class EVoteStatus> ContractTeamVoteStatus; // 0x10(0x10)
	struct TArray<enum class EVoteStatus> ContractTeamVoteStatus_TimeOrder; // 0x20(0x10)
	int32_t VoteSponsorInnerIndex; // 0x30(0x04)
	int32_t TeamId; // 0x34(0x04)
	float CancleContractEndTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.QuestUpdateData
// Size: 0x18 (Inherited: 0x00)
struct FQuestUpdateData {
public:

	int64_t UpdatedQuestID; // 0x00(0x08)
	int64_t UpdatedQuestObjectionID; // 0x08(0x08)
	int32_t UpdatedValue; // 0x10(0x04)
	enum class ESOLQuestObjectionState UpdateState; // 0x14(0x01)
	enum class ESOLQuestState QuestState; // 0x15(0x01)
	enum class EGoalType ObjectiveType; // 0x16(0x01)
	bool OnlyUpdateObjective; // 0x17(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLQuestDialogConfigData
// Size: 0x30 (Inherited: 0x00)
struct FSOLQuestDialogConfigData {
public:

	struct FQuestFullID FullID; // 0x00(0x10)
	enum class EQuestDialogActiveType DialogActiveType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName DialogGroupID; // 0x14(0x08)
	float DialogTriggerTime; // 0x1c(0x04)
	uint32_t BroadcastCount; // 0x20(0x04)
	uint32_t BroadcastStart; // 0x24(0x04)
	uint32_t TargetProgress; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLQuest
// Size: 0x90 (Inherited: 0x00)
struct FSOLQuest {
public:

	int64_t QuestID; // 0x00(0x08)
	int32_t QuestType; // 0x08(0x04)
	int32_t IsContract; // 0x0c(0x04)
	enum class ESOLQuestState QuestState; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	int64_t QuestAcceptTime; // 0x18(0x08)
	struct TArray<struct FSOLQuestObjection> QuestObjectionArr; // 0x20(0x10)
	bool bQuestUpdated; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	uint32_t BringInMatchCount; // 0x34(0x04)
	struct TArray<uint32_t> CustomVar; // 0x38(0x10)
	struct FString QuestName; // 0x48(0x10)
	struct FText QuestDesc; // 0x58(0x18)
	float ContractReward; // 0x70(0x04)
	bool ResetAllWhenFailed; // 0x74(0x01)
	bool ResetAllWhenSettlementFailed; // 0x75(0x01)
	char pad_76[0x2]; // 0x76(0x02)
	struct TArray<int32_t> QuestConditionIDArray; // 0x78(0x10)
	int32_t TriggeredForbbidenQuestConditionID; // 0x88(0x04)
	bool bRecieveFromActivity; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLQuestObjection
// Size: 0x80 (Inherited: 0x00)
struct FSOLQuestObjection {
public:

	int64_t QuestID; // 0x00(0x08)
	int64_t QuestObjectionID; // 0x08(0x08)
	int32_t IsContract; // 0x10(0x04)
	int32_t Value; // 0x14(0x04)
	int32_t RequiredCount; // 0x18(0x04)
	bool bObjectionUpdated; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float TimeLimit; // 0x20(0x04)
	float TimeoutSecond; // 0x24(0x04)
	float ServerTimeSpent; // 0x28(0x04)
	enum class ESOLQuestObjectionState QuestObjectionState; // 0x2c(0x01)
	bool bMustFinish; // 0x2d(0x01)
	bool bTracking; // 0x2e(0x01)
	bool bHasMark; // 0x2f(0x01)
	int32_t ObjectionIndex; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString ObjectiveDesc; // 0x38(0x10)
	struct FString BriefObjectiveDesc; // 0x48(0x10)
	struct FText HelperTips; // 0x58(0x18)
	bool ResetWhenQuestFailed; // 0x70(0x01)
	enum class EGoalType QuestObjType; // 0x71(0x01)
	char pad_72[0xe]; // 0x72(0x0e)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.QuestRadioTriggerDialogData
// Size: 0x14 (Inherited: 0x00)
struct FQuestRadioTriggerDialogData {
public:

	struct FName DialogGroupID; // 0x00(0x08)
	float DialogDelayTime; // 0x08(0x04)
	int32_t DialogStart; // 0x0c(0x04)
	int32_t DialogTriggerCount; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.WinterActivityTLog
// Size: 0x14 (Inherited: 0x00)
struct FWinterActivityTLog {
public:

	char pad_0[0x14]; // 0x00(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.HitBackActivityTLog
// Size: 0x10 (Inherited: 0x00)
struct FHitBackActivityTLog {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.StarFireTLog
// Size: 0xb0 (Inherited: 0x00)
struct FStarFireTLog {
public:

	char pad_0[0xb0]; // 0x00(0xb0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEvacuationUIConfig_Rocket
// Size: 0x138 (Inherited: 0x00)
struct FSOLEvacuationUIConfig_Rocket {
public:

	struct FText TriggerNameText; // 0x00(0x18)
	struct FText EncryptionCannotHackText; // 0x18(0x18)
	struct FText EncryptionNotHackText; // 0x30(0x18)
	struct FText EncryptionAlreadyHackText; // 0x48(0x18)
	struct FText HackPointDescText; // 0x60(0x18)
	struct FText FunctionDescText; // 0x78(0x18)
	struct FText RocketNoRecycleText; // 0x90(0x18)
	struct FText RocketCanBeHackedText; // 0xa8(0x18)
	struct FText RocketReadyToLaunchText; // 0xc0(0x18)
	struct FText RocketAlreadyExitText; // 0xd8(0x18)
	struct FText RocketAbandonedText; // 0xf0(0x18)
	struct FText NotInEvacuationMainHUDText; // 0x108(0x18)
	struct FText InEvacuationMainHUDText; // 0x120(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CutSceneTagsConfig_Rocket
// Size: 0x18 (Inherited: 0x00)
struct FCutSceneTagsConfig_Rocket {
public:

	struct FName Tag_RocketEventStart; // 0x00(0x08)
	struct FName Tag_RocketHacked; // 0x08(0x08)
	struct FName Tag_RocketLeave3P; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEvacuationWirelessConfig_Rocket
// Size: 0x18 (Inherited: 0x00)
struct FSOLEvacuationWirelessConfig_Rocket {
public:

	struct FName RocketEventStart; // 0x00(0x08)
	struct FName RocketHacked; // 0x08(0x08)
	struct FName RocketLeaveCountDown; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEvacuationUIConfig_Sluice
// Size: 0xd0 (Inherited: 0x00)
struct FSOLEvacuationUIConfig_Sluice {
public:

	struct FText ExitNotOpenText; // 0x00(0x18)
	struct FText ExitOpenText; // 0x18(0x18)
	struct FText SluiceNotOpenText; // 0x30(0x18)
	struct FText SluiceAlreadyOpenText; // 0x48(0x18)
	struct FText SluiceDescText; // 0x60(0x18)
	struct FText SluiceFunctionDescText; // 0x78(0x18)
	struct FText BannerExitOpenText; // 0x90(0x18)
	float BannerExitOpenTextDuration; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FText BannerExitCloseText; // 0xb0(0x18)
	float BannerExitCloseTextDuration; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEvacuationWirelessConfig_Sluice
// Size: 0x10 (Inherited: 0x00)
struct FSOLEvacuationWirelessConfig_Sluice {
public:

	struct FName SluiceEventStart; // 0x00(0x08)
	struct FName SluiceEventEnd; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ShellingZoneIconInfo
// Size: 0x20 (Inherited: 0x00)
struct FShellingZoneIconInfo {
public:

	struct FVector2D Position; // 0x00(0x08)
	float size; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FVector2D> ConvexHull; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLTimelineMajorEventTime
// Size: 0x0c (Inherited: 0x00)
struct FSOLTimelineMajorEventTime {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLTimelineWirelessConfig
// Size: 0x28 (Inherited: 0x00)
struct FSOLTimelineWirelessConfig {
public:

	struct FName FirstAlert; // 0x00(0x08)
	struct FName NextAlert; // 0x08(0x08)
	struct FName OtherAlert; // 0x10(0x08)
	struct FName AllEnd; // 0x18(0x08)
	struct FName Reserve; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLTimelineEventRange
// Size: 0x08 (Inherited: 0x00)
struct FSOLTimelineEventRange {
public:

	int32_t Max; // 0x00(0x04)
	int32_t Min; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLIntroEventConfig
// Size: 0x50 (Inherited: 0x10)
struct FSOLIntroEventConfig : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	struct FName IntroEventTargetPoint; // 0x18(0x08)
	struct FName IntroEventCutSceneBP; // 0x20(0x08)
	struct FSoftObjectPath CSLevel; // 0x28(0x18)
	struct FString MapName; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEventDynamicRequestLevelConfig
// Size: 0xc0 (Inherited: 0x10)
struct FSOLEventDynamicRequestLevelConfig : public FDescRowBase {
public:

	struct FString EventId; // 0x10(0x10)
	enum class ESOLEventState EventState; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString MapLevelName; // 0x28(0x10)
	struct FString DynamicRequestLDLevelDirName; // 0x38(0x10)
	struct FString DynamicRequestLALevelName; // 0x48(0x10)
	struct FString SeverRequestNavLevelName; // 0x58(0x10)
	struct FString SeverRequestPhysicsLevelName; // 0x68(0x10)
	struct FName IntroEventTargetPoint; // 0x78(0x08)
	struct FName IntroEventCutSceneBP; // 0x80(0x08)
	struct FSoftObjectPath CSLevel; // 0x88(0x18)
	struct TArray<uint64_t> ActivateContracts; // 0xa0(0x10)
	struct FString MediaName; // 0xb0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEventLevelConfig
// Size: 0x88 (Inherited: 0x10)
struct FSOLEventLevelConfig : public FDescRowBase {
public:

	struct FString LevelName; // 0x10(0x10)
	struct FSoftObjectPath ConfigLevel; // 0x20(0x18)
	struct FSoftObjectPath LevelWithIntroEvent; // 0x38(0x18)
	struct FName StreamingSceneNameWithIntroEvent; // 0x50(0x08)
	struct FSoftObjectPath LevelWithoutIntroEvent; // 0x58(0x18)
	struct FName StreamingSceneNameWithoutIntroEvent; // 0x70(0x08)
	enum class ESOLEventType EventType; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FName WirelessID; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEventTODConfig
// Size: 0x20 (Inherited: 0x10)
struct FSOLEventTODConfig : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	bool IsIntroEventActive; // 0x18(0x01)
	bool IsForceIntroEventActive; // 0x19(0x01)
	bool IsMajorEventActive; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEventConfig
// Size: 0x40 (Inherited: 0x10)
struct FSOLEventConfig : public FDescRowBase {
public:

	struct FString LevelName; // 0x10(0x10)
	struct FString IntroEventTips; // 0x20(0x10)
	int32_t MajorEventProbability; // 0x30(0x04)
	int32_t EvacuationEventProbability; // 0x34(0x04)
	char SOLEventConcomitantFlags; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEventPOIConfig
// Size: 0x58 (Inherited: 0x10)
struct FSOLEventPOIConfig : public FDescRowBase {
public:

	enum class ESOLEventType EventType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	/*struct TSoftObjectPtr<UObject>*/char IconPath[0x28]; // 0x18(0x28)
	struct FLinearColor IconColor; // 0x40(0x10)
	float EventWorldRange; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEvacuationTrainInfo
// Size: 0x0c (Inherited: 0x00)
struct FSOLEvacuationTrainInfo {
public:

	enum class ESOLEvacuationEventState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TargetTime; // 0x04(0x04)
	bool Hacked; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEvacuationTrainTypeWeight
// Size: 0x08 (Inherited: 0x00)
struct FSOLEvacuationTrainTypeWeight {
public:

	int32_t EmptyWeight; // 0x00(0x04)
	int32_t FullWeight; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEvacuationTrainUIConfig
// Size: 0xa8 (Inherited: 0x00)
struct FSOLEvacuationTrainUIConfig {
public:

	struct FText TrainNotArriveText; // 0x00(0x18)
	struct FText TrainWaitingText; // 0x18(0x18)
	struct FText TrainReadyText; // 0x30(0x18)
	struct FText TrainAlreadyLeaveText; // 0x48(0x18)
	struct FText EncryptionNotHackText; // 0x60(0x18)
	struct FText EncryptionAlreadyHackText; // 0x78(0x18)
	struct FText HackPointDescText; // 0x90(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLEvacuationTrainWirelessConfig
// Size: 0x18 (Inherited: 0x00)
struct FSOLEvacuationTrainWirelessConfig {
public:

	struct FName TrainStart; // 0x00(0x08)
	struct FName TrainArrive; // 0x08(0x08)
	struct FName TrainLeave; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLTrainMarshallingAndWeightConfig
// Size: 0x10 (Inherited: 0x00)
struct FSOLTrainMarshallingAndWeightConfig {
public:

	int32_t Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UClass* MarshallingConfig; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BeKilledInfo
// Size: 0x28 (Inherited: 0x00)
struct FBeKilledInfo {
public:

	struct FText DeceasedName; // 0x00(0x18)
	int32_t CharacterAvatarLevel; // 0x18(0x04)
	struct FName MajorRankID; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SimulateAISpawnInfo
// Size: 0x0c (Inherited: 0x00)
struct FSimulateAISpawnInfo {
public:

	struct TWeakObjectPtr<struct AGPCharacterBase> AICharacter; // 0x00(0x08)
	float SpawnTime; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerMoniterInfo
// Size: 0x1c (Inherited: 0x00)
struct FPlayerMoniterInfo {
public:

	float LastExeTime; // 0x00(0x04)
	float LastFightTime; // 0x04(0x04)
	bool bHasState; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float CurrentHealth; // 0x0c(0x04)
	float MaxHealth; // 0x10(0x04)
	int32_t SpawnNum; // 0x14(0x04)
	int32_t NearlyPlayerNum; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SpawnerToken
// Size: 0x18 (Inherited: 0x00)
struct FSpawnerToken {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SpawnerTokenRequester
// Size: 0x08 (Inherited: 0x00)
struct FSpawnerTokenRequester {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SpawnedAerialVehicleWeakList
// Size: 0x18 (Inherited: 0x00)
struct FSpawnedAerialVehicleWeakList {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct TWeakObjectPtr<struct AAerialVehicle>> AerialVehicleList; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SpawnedCharacterWeakList
// Size: 0x18 (Inherited: 0x00)
struct FSpawnedCharacterWeakList {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct TWeakObjectPtr<struct ADFMCharacter>> CharacterList; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIUnitSpawnWeakList
// Size: 0x10 (Inherited: 0x00)
struct FAIUnitSpawnWeakList {
public:

	struct TArray<struct TWeakObjectPtr<struct ADFMAIUnitSpawn>> AIUnitSpawnList; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DramaAreaWeakList
// Size: 0x60 (Inherited: 0x00)
struct FDramaAreaWeakList {
public:

	struct TArray<struct TWeakObjectPtr<struct ADramaArea>> DramaAreaList; // 0x00(0x10)
	char pad_10[0x50]; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SpawnerCheckerWeakList
// Size: 0x10 (Inherited: 0x00)
struct FSpawnerCheckerWeakList {
public:

	struct TArray<struct TWeakObjectPtr<struct AAISpawnChecker>> SpawnCheckerList; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.UserDefinedAITemplateData
// Size: 0x38 (Inherited: 0x10)
struct FUserDefinedAITemplateData : public FDescRowBase {
public:

	int32_t AIBTConfig; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString MapName; // 0x18(0x10)
	struct TArray<struct FString> OverrideTemplates; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AnimMontageList
// Size: 0x10 (Inherited: 0x00)
struct FAnimMontageList {
public:

	struct TArray<struct UAnimMontage*> AnimMontages; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SquadFormation
// Size: 0x20 (Inherited: 0x10)
struct FSquadFormation : public FDescRowBase {
public:

	struct TArray<struct FSquadFormationMember> SquadFormationMembers; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SquadFormationMember
// Size: 0xa0 (Inherited: 0x00)
struct FSquadFormationMember {
public:

	struct FTransform Transform; // 0x00(0x30)
	struct FName NpcName; // 0x30(0x08)
	/*struct TSoftClassPtr<UObject>*/char ActorClass[0x28]; // 0x38(0x28)
	int32_t FormationOrder; // 0x60(0x04)
	bool bSquadCommander; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct FAngleRange> AngleRanges; // 0x68(0x10)
	float MinRadius; // 0x78(0x04)
	float MaxRadius; // 0x7c(0x04)
	float MinStartTime; // 0x80(0x04)
	float MaxStartTime; // 0x84(0x04)
	float MinStartTime_Shield; // 0x88(0x04)
	float MaxStartTime_Shield; // 0x8c(0x04)
	bool bIsGuarder; // 0x90(0x01)
	char pad_91[0xf]; // 0x91(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SquadTactic
// Size: 0x88 (Inherited: 0x10)
struct FSquadTactic : public FDescRowBase {
public:

	/*struct TSoftClassPtr<UObject>*/char EvaluatorType[0x28]; // 0x10(0x28)
	struct TMap<enum class ECharacterDuty, struct FSquadTacticItem> SquadTactics; // 0x38(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SquadTacticItem_Temp
// Size: 0x68 (Inherited: 0x00)
struct FSquadTacticItem_Temp {
public:

	char pad_0[0x68]; // 0x00(0x68)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.StartSpotAllocatorInitParams
// Size: 0x10 (Inherited: 0x00)
struct FStartSpotAllocatorInitParams {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.StartSpotAllocParams
// Size: 0x20 (Inherited: 0x00)
struct FStartSpotAllocParams {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	int32_t TeamId; // 0x08(0x04)
	int32_t PlayerIdx; // 0x0c(0x04)
	enum class ESOLPlayerMode SOLPlayMode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct TWeakObjectPtr<struct APlayerController> PlayerController; // 0x14(0x08)
	bool bFindPlayerStartByPlayerIdx; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.StartSpotStatictic
// Size: 0x14 (Inherited: 0x00)
struct FStartSpotStatictic {
public:

	char pad_0[0x14]; // 0x00(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.TeamStartIndexInfo
// Size: 0x14 (Inherited: 0x00)
struct FTeamStartIndexInfo {
public:

	char pad_0[0x14]; // 0x00(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.OrientationGroup
// Size: 0x18 (Inherited: 0x00)
struct FOrientationGroup {
public:

	int32_t Orientation; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct ATeamStart*> TeamStarts; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SOLStartSpotTemplate
// Size: 0x58 (Inherited: 0x10)
struct FSOLStartSpotTemplate : public FDescRowBase {
public:

	struct FName SOLMapName; // 0x10(0x08)
	enum class EStartSpotTemplateType TemplateType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t Weight; // 0x1c(0x04)
	struct TArray<struct FOrientationTeamStart> StartSpotOrientations; // 0x20(0x10)
	struct TArray<struct FOrientationTeamStartGroups> OrientationTeamStartGroupsContainer; // 0x30(0x10)
	bool bRandomOrientationOnStart; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float AdjustLocStepDistance; // 0x44(0x04)
	int32_t AdjustLocMaxStep; // 0x48(0x04)
	char pad_4C[0xc]; // 0x4c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.OrientationTeamStartGroups
// Size: 0x40 (Inherited: 0x00)
struct FOrientationTeamStartGroups {
public:

	struct FName GroupName; // 0x00(0x08)
	int32_t Priority; // 0x08(0x04)
	int32_t MinTeamNums; // 0x0c(0x04)
	int32_t MaxTeamNums; // 0x10(0x04)
	bool bDesignateTeams; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t PlayerTeamNums; // 0x18(0x04)
	int32_t AIPlayerTeamNums; // 0x1c(0x04)
	bool bEqualPerOrientation; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FOrientationTeamStart> OrientationTeamStarts; // 0x28(0x10)
	int32_t TeamNums; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.OrientationTeamStart
// Size: 0x20 (Inherited: 0x00)
struct FOrientationTeamStart {
public:

	int32_t OrientationId; // 0x00(0x04)
	struct FName OrientationName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> TeamStartIdGroup; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.StingerMissileMovementParam
// Size: 0x18 (Inherited: 0x00)
struct FStingerMissileMovementParam {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PlayerExitConfig
// Size: 0x58 (Inherited: 0x00)
struct FPlayerExitConfig {
public:

	int32_t MinRandomExitNum; // 0x00(0x04)
	int32_t MaxRandomExitNum; // 0x04(0x04)
	/*struct TSet<struct APlayerExitBase*>*/char PlayerExits[0x50]; // 0x08(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMAIBodyPartOffsetRow
// Size: 0xb8 (Inherited: 0x10)
struct FDFMAIBodyPartOffsetRow : public FDescRowBase {
public:

	enum class EAIBodyPartOffsetPoise Poise; // 0x10(0x01)
	enum class EAIBodyPartOffsetLean Lean; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FVector FireOffset; // 0x14(0x0c)
	float Z_Scale; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FDFMAIBodyPartTransform> BodyPartsTransform; // 0x28(0x10)
	/*struct TSoftObjectPtr<UAnimSequence>*/char PoseAnim[0x28]; // 0x38(0x28)
	char pad_60[0x58]; // 0x60(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMAIBodyPartTransform
// Size: 0x40 (Inherited: 0x00)
struct FDFMAIBodyPartTransform {
public:

	struct FName BoneName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform BoneTransform; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMAIBodyPartBoneName
// Size: 0x18 (Inherited: 0x00)
struct FDFMAIBodyPartBoneName {
public:

	enum class ECharacterPart Part; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString BoneName; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FloatBlackBroadValue
// Size: 0x30 (Inherited: 0x00)
struct FFloatBlackBroadValue {
public:

	float ConfigValue; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FBlackboardKeySelector ConfigValueKey; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIStringValue
// Size: 0x38 (Inherited: 0x00)
struct FAIStringValue {
public:

	struct FString ConfigValue; // 0x00(0x10)
	struct FBlackboardKeySelector ConfigValueKey; // 0x10(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.EqsRCVWayPointInfo
// Size: 0x18 (Inherited: 0x00)
struct FEqsRCVWayPointInfo {
public:

	struct FVector Location; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ARCVWayPoint* WayPoint; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RCVWaypointEdge
// Size: 0x08 (Inherited: 0x00)
struct FRCVWaypointEdge {
public:

	int32_t Start; // 0x00(0x04)
	int32_t End; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SMTLockInfo
// Size: 0x20 (Inherited: 0x00)
struct FSMTLockInfo {
public:

	/*struct TScriptInterface<IStingerMissileTakerInterface>*/char SMTaker[0x10]; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.WeaponAttributeCalculator
// Size: 0x200 (Inherited: 0x00)
struct FWeaponAttributeCalculator {
public:

	char pad_0[0x200]; // 0x00(0x200)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DisplayAttributeFormulaRow
// Size: 0x70 (Inherited: 0x10)
struct FDisplayAttributeFormulaRow : public FDescRowBase {
public:

	char ID; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName DisplayName; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TMap<struct FName, char> DependAttributes; // 0x20(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DisplayAttributesRow
// Size: 0x90 (Inherited: 0x10)
struct FDisplayAttributesRow : public FDescRowBase {
public:

	char Score; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float WeaponDamage; // 0x14(0x04)
	float SprintToFireSpeed; // 0x18(0x04)
	float WaistSpreadSize; // 0x1c(0x04)
	float WaistSpreadDeltaMax; // 0x20(0x04)
	float WaistSpreadParam; // 0x24(0x04)
	float AimSpreadSize; // 0x28(0x04)
	float AimSpreadDeltaMax; // 0x2c(0x04)
	float AimSpreadParam; // 0x30(0x04)
	float WaistVerticalRecoil; // 0x34(0x04)
	float WaistHorizontalRecoil; // 0x38(0x04)
	float WaistVerticalRecoilRandomPercent; // 0x3c(0x04)
	float AimVerticalRecoil; // 0x40(0x04)
	float AimHorizontalRecoil; // 0x44(0x04)
	float AimVerticalRecoilRandomPercent; // 0x48(0x04)
	float ValidDistance; // 0x4c(0x04)
	float MaxDistance; // 0x50(0x04)
	float AttenPerMeter; // 0x54(0x04)
	float WaistVerticalRecoilReboundScale; // 0x58(0x04)
	float WaistHorizontalRecoilReboundScale; // 0x5c(0x04)
	float WaistRecoilReboundEaseTime; // 0x60(0x04)
	float WaistVerticalMaxControl; // 0x64(0x04)
	float WaistHorizontalMaxControl; // 0x68(0x04)
	float AimVerticalRecoilReboundScale; // 0x6c(0x04)
	float AimHorizontalRecoilReboundScale; // 0x70(0x04)
	float AimRecoilReboundEaseTime; // 0x74(0x04)
	float AimVerticalMaxControl; // 0x78(0x04)
	float AimHorizontalMaxControl; // 0x7c(0x04)
	float AimInSpeed; // 0x80(0x04)
	float AimingWaggleSpeed; // 0x84(0x04)
	float AimingWaggleScope; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LaserPointerLockingObjectInfo
// Size: 0x38 (Inherited: 0x00)
struct FLaserPointerLockingObjectInfo {
public:

	struct UWeaponFuncComponentLaserPointer* FuncStingerMissile; // 0x00(0x08)
	/*struct TScriptInterface<IStingerMissileTakerInterface>*/char LockingObject[0x10]; // 0x08(0x10)
	/*struct TScriptInterface<IStingerMissileTakerInterface>*/char ServerLockingObject[0x10]; // 0x18(0x10)
	char pad_28[0x10]; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.StingMissileHudInfo
// Size: 0x38 (Inherited: 0x00)
struct FStingMissileHudInfo {
public:

	bool bHasLockingObject; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Distance; // 0x04(0x04)
	struct FString TargetName; // 0x08(0x10)
	enum class EStingerMissileLockingState LockingState; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float LockingProgress; // 0x1c(0x04)
	float LockingTime; // 0x20(0x04)
	struct FVector2D LocationInScreen; // 0x24(0x08)
	bool bFired; // 0x2c(0x01)
	bool bShowAmmoTips; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float FiredTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LockingObjectInfo
// Size: 0x28 (Inherited: 0x00)
struct FLockingObjectInfo {
public:

	struct UWeaponFuncComponentStingerMissile* FuncStingerMissile; // 0x00(0x08)
	/*struct TScriptInterface<IStingerMissileTakerInterface>*/char LockingObject[0x10]; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.NameCardMaterialParamOverride
// Size: 0x28 (Inherited: 0x00)
struct FNameCardMaterialParamOverride {
public:

	enum class ENameCardMaterialParamOverrideType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ParamName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture2D* TextureParam; // 0x10(0x08)
	float FloatParam; // 0x18(0x04)
	struct FVector VectorParam; // 0x1c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.WeaponSkinNameCardKey
// Size: 0x20 (Inherited: 0x00)
struct FWeaponSkinNameCardKey {
public:

	struct FString Name; // 0x00(0x10)
	int32_t X; // 0x10(0x04)
	int32_t Y; // 0x14(0x04)
	struct FName WidgetName; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterBuff
// Size: 0x70 (Inherited: 0x0c)
struct FCharacterBuff : public FFastArraySerializerItem {
public:

	bool bValid; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName CharacterBuff; // 0x10(0x08)
	enum class ECharacterPart CharacterPart; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	uint32_t BuffId; // 0x1c(0x04)
	bool IsPaused; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float EndTime; // 0x24(0x04)
	float StartTime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	uint64_t Guid; // 0x30(0x08)
	bool bDisplay; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	uint64_t SourceActorUin; // 0x40(0x08)
	int32_t OwnerCampID; // 0x48(0x04)
	int32_t OwnerTeamID; // 0x4c(0x04)
	struct AActor* SourceActor; // 0x50(0x08)
	bool ShowHitDirView; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FName HitBoneName; // 0x5c(0x08)
	bool OnlyTipsButNoShowInBuffList; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	int32_t CustomNum; // 0x68(0x04)
	uint32_t RepCnt; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ItemLocation
// Size: 0x14 (Inherited: 0x00)
struct FItemLocation {
public:

	int8_t X; // 0x00(0x01)
	int8_t Y; // 0x01(0x01)
	char Length; // 0x02(0x01)
	char Height; // 0x03(0x01)
	bool bRotated; // 0x04(0x01)
	char GridIndex; // 0x05(0x01)
	bool bAutoSortLocation; // 0x06(0x01)
	char pad_7[0xd]; // 0x07(0x0d)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LootObjRepData
// Size: 0x18 (Inherited: 0x00)
struct FLootObjRepData {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FItemSpaceRepData> SpaceRepData; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InteractableProxy
// Size: 0x10 (Inherited: 0x00)
struct FInteractableProxy {
public:

	struct AActor* Interactor; // 0x00(0x08)
	struct UDFInteractableComponentBase* InteractableComponent; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIInvestigateConfig
// Size: 0x48 (Inherited: 0x00)
struct FAIInvestigateConfig {
public:

	struct FAIJobSetting BaseSetting; // 0x00(0x38)
	float MaxDistance; // 0x38(0x04)
	float SameTargetCooldown; // 0x3c(0x04)
	int32_t SameTargetMaxAINum; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AISearchConfig
// Size: 0x40 (Inherited: 0x00)
struct FAISearchConfig {
public:

	struct FAIJobSetting BaseSetting; // 0x00(0x38)
	struct UEnvQuery* SearchEnvQuery; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIDashConfig
// Size: 0x48 (Inherited: 0x00)
struct FAIDashConfig {
public:

	struct FAIJobSetting BaseSetting; // 0x00(0x38)
	float MaxDistance; // 0x38(0x04)
	float SameTargetCooldown; // 0x3c(0x04)
	int32_t SameTargetMaxAINum; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SteeringOutput
// Size: 0x18 (Inherited: 0x00)
struct FSteeringOutput {
public:

	struct FVector Linear; // 0x00(0x0c)
	struct FVector Angular; // 0x0c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIStyleWeight
// Size: 0x10 (Inherited: 0x00)
struct FAIStyleWeight {
public:

	int32_t TKV_Assult_Weight; // 0x00(0x04)
	int32_t TKV_Prudent_Weight; // 0x04(0x04)
	int32_t TKV_Normal_Weight; // 0x08(0x04)
	int32_t MGS_Weight; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ArmorFunctionBaseRow
// Size: 0xe0 (Inherited: 0x10)
struct FArmorFunctionBaseRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	struct FName ProtectionPart; // 0x18(0x08)
	int32_t ArmorLevel; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText ProtectionPartText; // 0x28(0x18)
	int32_t BitmaskProtectionPart; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<enum class EEquipmentPart> DisableParts; // 0x48(0x10)
	int32_t MaxDurability; // 0x58(0x04)
	float DamagedDurabilityRate; // 0x5c(0x04)
	int32_t MaxArmorValue; // 0x60(0x04)
	int32_t DamageMaxArmorValue; // 0x64(0x04)
	int32_t DamageArmorLevel; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<uint32_t> AttributeOperateIDs; // 0x70(0x10)
	struct TArray<struct FArmorBuffRow> BuffOps; // 0x80(0x10)
	uint32_t DurabilityFormula; // 0x90(0x04)
	int32_t DurabilityReductionRepair; // 0x94(0x04)
	int32_t RepairPricePerDurability; // 0x98(0x04)
	int32_t BaseRepairPrice; // 0x9c(0x04)
	float RepairDurabilityRatio; // 0xa0(0x04)
	float DurabilityReductionRepairInGame; // 0xa4(0x04)
	struct FText RepairRatioInGame; // 0xa8(0x18)
	int32_t BitmaskExceptionProtectionPart; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FText DurabilityReductionRepairInGameStr; // 0xc8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.HalfJoinScoreCalculation
// Size: 0x58 (Inherited: 0x00)
struct FHalfJoinScoreCalculation {
public:

	bool bShowContainScoreReparation; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ScorePerMinute; // 0x04(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char PlayerScoreCurveFloat[0x28]; // 0x08(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char AIScoreCurveFloat[0x28]; // 0x30(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BattleFieldVehicleSpawnerData
// Size: 0x60 (Inherited: 0x00)
struct FBattleFieldVehicleSpawnerData {
public:

	bool bNeedUseConfig; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t VehicleId; // 0x04(0x04)
	bool bIsCampVehicle; // 0x08(0x01)
	bool bPartInGlobalVehicleNumLimit; // 0x09(0x01)
	bool bIsDynamicallyBalancedVehicle; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct TMap<int32_t, struct FBattleFieldSpawnerActiveConditionInfo> SpawnerActiveConditionInfoMap; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BattleFieldBalanceData
// Size: 0xf0 (Inherited: 0x00)
struct FBattleFieldBalanceData {
public:

	/*struct TSoftObjectPtr<UCurveFloat>*/char TeamRebornCurve[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char RebornCDCurve[0x28]; // 0x28(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char OcuupySpeedCurve[0x28]; // 0x50(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char OcuupyNumCurve[0x28]; // 0x78(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char OcuupyStatusSpeedCurve[0x28]; // 0xa0(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char FightBackOcuupyStatusSpeedCurve[0x28]; // 0xc8(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BFCharacterDeathAction
// Size: 0x03 (Inherited: 0x00)
struct FBFCharacterDeathAction {
public:

	bool bTrackingMurder; // 0x00(0x01)
	bool bImpendingDeath; // 0x01(0x01)
	bool bNeedRisingState; // 0x02(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakthroughScriptedAISetting
// Size: 0x10 (Inherited: 0x00)
struct FBreakthroughScriptedAISetting {
public:

	struct FName AIDefaultDifficulty; // 0x00(0x08)
	struct FName AIDefaultStyle; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PilotNavigationQueryData
// Size: 0x30 (Inherited: 0x00)
struct FPilotNavigationQueryData {
public:

	struct TWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	struct FVector Destination; // 0x08(0x0c)
	int32_t Unit; // 0x14(0x04)
	bool VisualizeRawPath; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FVector> PathSolutionRaw; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMBuffSpeakConfig
// Size: 0x98 (Inherited: 0x00)
struct FDFMBuffSpeakConfig {
public:

	struct TArray<enum class ECharacterAudioType> OnAddSpeakTypeArray; // 0x00(0x10)
	struct TArray<enum class ECharacterAudioType> OnLoopSpeakTypeArray; // 0x10(0x10)
	struct TArray<enum class ECharacterAudioType> OnRemovePlaySpeakTypeArray; // 0x20(0x10)
	struct TArray<enum class ECharacterAudioType> OnRemoveStopSpeakTypeArray; // 0x30(0x10)
	struct TArray<struct FString> OnAddSpeakNameArray; // 0x40(0x10)
	struct TArray<struct FString> OnLoopSpeakNameArray; // 0x50(0x10)
	struct TArray<struct FString> OnRemovePlaySpeakNameArray; // 0x60(0x10)
	struct TArray<struct FString> OnRemoveStopSpeakNameArray; // 0x70(0x10)
	float StartPeriod; // 0x80(0x04)
	float LoopPeriod; // 0x84(0x04)
	struct TArray<struct FSpecifyTimePlayAudio> SpecifyAudioTimeArray; // 0x88(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMBuffVoiceConfig
// Size: 0xa8 (Inherited: 0x00)
struct FDFMBuffVoiceConfig {
public:

	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char OnAdd[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char OnRemove[0x28]; // 0x28(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char OnPeriod[0x28]; // 0x50(0x28)
	float Period; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FSoftObjectPath GPAudioOnAdd; // 0x80(0x18)
	struct UGPAudioEventAsset* GPAudioOnRemove; // 0x98(0x08)
	bool PlayGPAudioIn3P; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PvpAiFightConfig
// Size: 0x20 (Inherited: 0x00)
struct FPvpAiFightConfig {
public:

	struct UCurveFloat* CQBWeaponDistCurve; // 0x00(0x08)
	struct UCurveFloat* MedicWeaponDistCurve; // 0x08(0x08)
	struct UCurveFloat* GunnerWeaponDistCurve; // 0x10(0x08)
	struct UCurveFloat* SniperWeaponDistCurve; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PvpAiFocusConfig
// Size: 0x14 (Inherited: 0x00)
struct FPvpAiFocusConfig {
public:

	float FocusDelay; // 0x00(0x04)
	float FocusDeviation; // 0x04(0x04)
	float FocusUpdateInterval; // 0x08(0x04)
	float FocusUpdateDeviation; // 0x0c(0x04)
	float FocusDegSpeed; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PvpAiFireMoveStyleConfig
// Size: 0xc0 (Inherited: 0x00)
struct FPvpAiFireMoveStyleConfig {
public:

	float InitMoveState_OverallProb; // 0x00(0x04)
	float InitMoveState_CrouchProb; // 0x04(0x04)
	float InitMoveState_ProneProb; // 0x08(0x04)
	float InitMoveState_StandProb; // 0x0c(0x04)
	float InitMoveState_JumpProb; // 0x10(0x04)
	float MoveStateChangeNormal_Interval; // 0x14(0x04)
	float MoveStateChangeNormal_Deviation; // 0x18(0x04)
	float MoveStateChangeNormal_OverallProb; // 0x1c(0x04)
	float MoveStateChangeNormal_CrouchProb; // 0x20(0x04)
	float MoveStateChangeNormal_ProneProb; // 0x24(0x04)
	float MoveStateChangeNormal_StandProb; // 0x28(0x04)
	float MoveStateChangeNormal_JumpProb; // 0x2c(0x04)
	float FastFindPointNormal_XOffset; // 0x30(0x04)
	float FastFindPointNormal_YOffset; // 0x34(0x04)
	float FastFindPointNormal_XRandRange; // 0x38(0x04)
	float FastFindPointNormal_YRandRange; // 0x3c(0x04)
	float WaitProbNormal; // 0x40(0x04)
	float WaitTimeNormal_Time; // 0x44(0x04)
	float WaitTimeNormal_Deviation; // 0x48(0x04)
	float CloseCombatRange; // 0x4c(0x04)
	float MoveStateChangeCloseCombat_Interval; // 0x50(0x04)
	float MoveStateChangeCloseCombat_Deviation; // 0x54(0x04)
	float MoveStateChangeCloseCombat_OverallProb; // 0x58(0x04)
	float MoveStateChangeCloseCombat_CrouchProb; // 0x5c(0x04)
	float MoveStateChangeCloseCombat_ProneProb; // 0x60(0x04)
	float MoveStateChangeCloseCombat_StandProb; // 0x64(0x04)
	float MoveStateChangeCloseCombat_JumpProb; // 0x68(0x04)
	float FastFindPointCloseCombat_XOffset; // 0x6c(0x04)
	float FastFindPointCloseCombat_YOffset; // 0x70(0x04)
	float FastFindPointCloseCombat_XRandRange; // 0x74(0x04)
	float FastFindPointCloseCombat_YRandRange; // 0x78(0x04)
	float WaitProbCloseCombat; // 0x7c(0x04)
	float WaitTimeCloseCombat_Time; // 0x80(0x04)
	float WaitTimeCloseCombat_Deviation; // 0x84(0x04)
	float MoveStateChangeWithoutAmmo_Interval; // 0x88(0x04)
	float MoveStateChangeWithoutAmmo_Deviation; // 0x8c(0x04)
	float MoveStateChangeWithoutAmmo_OverallProb; // 0x90(0x04)
	float MoveStateChangeWithoutAmmo_CrouchProb; // 0x94(0x04)
	float MoveStateChangeWithoutAmmo_ProneProb; // 0x98(0x04)
	float MoveStateChangeWithoutAmmo_StandProb; // 0x9c(0x04)
	float MoveStateChangeWithoutAmmo_JumpProb; // 0xa0(0x04)
	float FastFindPointWithoutAmmo_XOffset; // 0xa4(0x04)
	float FastFindPointWithoutAmmo_YOffset; // 0xa8(0x04)
	float FastFindPointWithoutAmmo_XRandRange; // 0xac(0x04)
	float FastFindPointWithoutAmmo_YRandRange; // 0xb0(0x04)
	float WaitProbWithoutAmmo; // 0xb4(0x04)
	float WaitTimeWithoutAmmo_Time; // 0xb8(0x04)
	float WaitTimeWithoutAmmo_Deviation; // 0xbc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AICharacterBehavior
// Size: 0x118 (Inherited: 0x00)
struct FAICharacterBehavior {
public:

	/*struct TSoftObjectPtr<UBehaviorTree>*/char FightBehavior[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UBehaviorTree>*/char LeaveFightBehavior[0x28]; // 0x28(0x28)
	/*struct TSoftObjectPtr<UBehaviorTree>*/char AlertBehavior[0x28]; // 0x50(0x28)
	/*struct TSoftObjectPtr<UBehaviorTree>*/char LeisureBehavior[0x28]; // 0x78(0x28)
	/*struct TSoftObjectPtr<UBehaviorTree>*/char AbilityReactBehavior[0x28]; // 0xa0(0x28)
	/*struct TSoftObjectPtr<UBehaviorTree>*/char ShootBehavior[0x28]; // 0xc8(0x28)
	/*struct TSoftObjectPtr<UBehaviorTree>*/char DyingBehavior[0x28]; // 0xf0(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIDynamicScore
// Size: 0x10 (Inherited: 0x00)
struct FAIDynamicScore {
public:

	float HitRateDynamicScaler; // 0x00(0x04)
	float DamageScalerToPlayer; // 0x04(0x04)
	float ArmorDamageScalerToPlayer; // 0x08(0x04)
	float HealthDamageScalerToPlayer; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AICharacterItemPool
// Size: 0x08 (Inherited: 0x00)
struct FAICharacterItemPool {
public:

	int32_t AILevel; // 0x00(0x04)
	int32_t AIType; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIDynamicScoreGame
// Size: 0x100 (Inherited: 0x00)
struct FAIDynamicScoreGame {
public:

	struct FName SenseConfigKey; // 0x00(0x08)
	/*struct TSoftObjectPtr<UCurveFloat>*/char DamageScalerWithHP[0x28]; // 0x08(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char DamageScalerWithHPMember[0x28]; // 0x30(0x28)
	struct FName ArmorDamageScalerWithArmor; // 0x58(0x08)
	/*struct TSoftObjectPtr<UDataTable>*/char WeaponDamageScale[0x28]; // 0x60(0x28)
	float DamageToPlayerHpLocked; // 0x88(0x04)
	float DamageScalerWhenImpendingDeath; // 0x8c(0x04)
	float HitRateScalerWhenRescuing; // 0x90(0x04)
	struct FName ProfileOverride; // 0x94(0x08)
	bool bOverrideAttachArmorLevel; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	int32_t AttackLevel; // 0xa0(0x04)
	int32_t BulletGroup; // 0xa4(0x04)
	int32_t ArmorLevel; // 0xa8(0x04)
	int32_t ArmorHP; // 0xac(0x04)
	int32_t HelmetLevel; // 0xb0(0x04)
	int32_t HelmetArmorHP; // 0xb4(0x04)
	float ThrowGrenadeProbability; // 0xb8(0x04)
	float ThrowGrenadeMinCooldown; // 0xbc(0x04)
	float ThrowGrenadeMaxCooldown; // 0xc0(0x04)
	float ThrowSmokeBombProbability; // 0xc4(0x04)
	float ThrowSmokeBombMinCooldown; // 0xc8(0x04)
	float ThrowSmokeBombMaxCooldown; // 0xcc(0x04)
	float ThrowFlashBangProbability; // 0xd0(0x04)
	float ThrowFlashBangMinCooldown; // 0xd4(0x04)
	float ThrowFlashBangMaxCooldown; // 0xd8(0x04)
	int32_t MaxConsecutiveHitNum; // 0xdc(0x04)
	int32_t TotalFireNumInCycle; // 0xe0(0x04)
	int32_t MaxHitNumInCycle; // 0xe4(0x04)
	float AimingTimeScaler; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<struct FAIDynamicScore> DynamicDifficulty; // 0xf0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.HitRate
// Size: 0x1c0 (Inherited: 0x00)
struct FHitRate {
public:

	float BaseRate; // 0x00(0x04)
	float MinRate; // 0x04(0x04)
	float MaxRate; // 0x08(0x04)
	int32_t MaxConsecutiveHitNum; // 0x0c(0x04)
	int32_t TotalFireNumInCycle; // 0x10(0x04)
	int32_t MaxHitNumInCycle; // 0x14(0x04)
	float StandExposedScaler; // 0x18(0x04)
	float CrouchExposedScaler; // 0x1c(0x04)
	float ProneExposedScaler; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char DistanceCurve[0x28]; // 0x28(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char TargetSpeedCurve[0x28]; // 0x50(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char SelfSpeedCurve[0x28]; // 0x78(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char ExposedAreaCurve[0x28]; // 0xa0(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char FoliageCoverCurve[0x28]; // 0xc8(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char TimeSinceSeenCurve[0x28]; // 0xf0(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char BehindPlayerCurve[0x28]; // 0x118(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char LastHitCurve[0x28]; // 0x140(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char FlashBangCurve[0x28]; // 0x168(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char WeaponPriceCurve[0x28]; // 0x190(0x28)
	float IntensityForceHitRateOverrided; // 0x1b8(0x04)
	float ToAiFinalHitRateScale; // 0x1bc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesEdgeModelID
// Size: 0x20 (Inherited: 0x00)
struct FDesEdgeModelID {
public:

	int32_t OwnerPartID; // 0x00(0x04)
	int32_t RelatedPartID; // 0x04(0x04)
	int32_t TypeID; // 0x08(0x04)
	int32_t Index; // 0x0c(0x04)
	struct FString TypeName; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.KeyInfo
// Size: 0x30 (Inherited: 0x00)
struct FKeyInfo {
public:

	struct FKey Key; // 0x00(0x18)
	struct TArray<bool> NeedModifierKeys; // 0x18(0x10)
	bool IsPositiveInAxis; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ScoreRange
// Size: 0x08 (Inherited: 0x00)
struct FScoreRange {
public:

	float Lower; // 0x00(0x04)
	float Upper; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIGroupThreatExtraData
// Size: 0x01 (Inherited: 0x00)
struct FAIGroupThreatExtraData {
public:

	bool HasReachFireLimit; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BroadcastTeamInfo
// Size: 0x01 (Inherited: 0x00)
struct FBroadcastTeamInfo {
public:

	enum class EBroadcastTeamInfoType TeamInfoType; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BroadcastGameInfo
// Size: 0x20 (Inherited: 0x00)
struct FBroadcastGameInfo {
public:

	enum class EBroadcastGameInfoType GameInfoType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Info; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BrocastKillInfo
// Size: 0x68 (Inherited: 0x00)
struct FBrocastKillInfo {
public:

	uint64_t KillerUin; // 0x00(0x08)
	uint64_t BeKilledUin; // 0x08(0x08)
	enum class EDeadType DeadType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	uint64_t WeaponID; // 0x18(0x08)
	int32_t VehicleId; // 0x20(0x04)
	bool bInVehicleLeanOut; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32_t BeKilledCampId; // 0x28(0x04)
	int32_t KillerCampId; // 0x2c(0x04)
	bool bKnockDown; // 0x30(0x01)
	bool KillerIsPlayer; // 0x31(0x01)
	bool KillerIsRobotAI; // 0x32(0x01)
	bool KillerIsBossAI; // 0x33(0x01)
	bool KillerIsAILAB; // 0x34(0x01)
	bool VictimIsPlayer; // 0x35(0x01)
	bool VictimIsRobotAI; // 0x36(0x01)
	bool VictimIsBossAI; // 0x37(0x01)
	bool VictimIsAILAB; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	uint64_t AttackValueId; // 0x40(0x08)
	struct FGameplayTagContainer TagContainer; // 0x48(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FSMAudioBase
// Size: 0x28 (Inherited: 0x00)
struct FFSMAudioBase {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FString Desc; // 0x08(0x10)
	enum class EFSMAudioEventType AudioEventType; // 0x18(0x04)
	float EventTime; // 0x1c(0x04)
	char pad_20[0x8]; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AssassinateAnimAssetInfo
// Size: 0x70 (Inherited: 0x00)
struct FAssassinateAnimAssetInfo {
public:

	/*struct TSoftObjectPtr<UAnimationAsset>*/char AssassinateAnimTppSoftObjectPtr[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char BeAssassinateAnimSoftObjectPtr[0x28]; // 0x28(0x28)
	struct FVector AssassinateOffsetLoc; // 0x50(0x0c)
	float AssassinateDeathTime; // 0x5c(0x04)
	struct UAnimSequence* AssassinateAnimTPP; // 0x60(0x08)
	struct UAnimSequence* BeAssassinateAnimTPP; // 0x68(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ScoreNameAndValue
// Size: 0x08 (Inherited: 0x00)
struct FScoreNameAndValue {
public:

	enum class EScoreName ScoreName; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ScoreValue; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AbilityBuffDistanceFactor
// Size: 0x10 (Inherited: 0x00)
struct FAbilityBuffDistanceFactor {
public:

	float MinDistance; // 0x00(0x04)
	float MinDistanceFactor; // 0x04(0x04)
	float MaxDistance; // 0x08(0x04)
	float MaxDistanceFactor; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitConditionItemEntry
// Size: 0x30 (Inherited: 0x00)
struct FExitConditionItemEntry {
public:

	struct TArray<struct FName> ItemIdArray; // 0x00(0x10)
	struct FText ItemName; // 0x10(0x18)
	int32_t ItemNum; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitConditionEquipmentEntry
// Size: 0x02 (Inherited: 0x00)
struct FExitConditionEquipmentEntry {
public:

	enum class EExitConditionEquipmentType ExitConditionEquipment; // 0x00(0x01)
	enum class EExitConditionEquipmentState ExitConditionEquipmentState; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CountingInfo
// Size: 0xa8 (Inherited: 0x00)
struct FCountingInfo {
public:

	bool bWaitForCounting; // 0x00(0x01)
	bool bCountingDown; // 0x01(0x01)
	bool bCountingdownOver; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float CountDownEndTime; // 0x04(0x04)
	struct TMap<float, bool> CountDownTimeGreaterThanSecondInfo; // 0x08(0x50)
	struct TMap<float, bool> HasPlayLessThanSecondVOInfo; // 0x58(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FSMAudioEventGroup
// Size: 0x30 (Inherited: 0x00)
struct FFSMAudioEventGroup {
public:

	struct TArray<struct FFSMAudioEventInfo> AudioEvents; // 0x00(0x10)
	struct TArray<struct FFSMAudioFootEventInfo> FootAudioEvents; // 0x10(0x10)
	struct TArray<struct FFSMAudioEventInfo> LoopEvents; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GPFSMAuidoEventGroupItem
// Size: 0x20 (Inherited: 0x00)
struct FGPFSMAuidoEventGroupItem {
public:

	struct FString Desc; // 0x00(0x10)
	struct TArray<struct FFSMAudioEventInfo> GroupEvents; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ItemAttachLocation
// Size: 0x18 (Inherited: 0x00)
struct FItemAttachLocation {
public:

	enum class EAttachPosition pos; // 0x00(0x04)
	int32_t X; // 0x04(0x04)
	int32_t Y; // 0x08(0x04)
	bool bRotated; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t Index; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PreciseInteractFOVTracker
// Size: 0x18 (Inherited: 0x00)
struct FPreciseInteractFOVTracker {
public:

	char pad_0[0x8]; // 0x00(0x08)
	float StartInteractTimeStamp; // 0x08(0x04)
	float EndInteractTimeStamp; // 0x0c(0x04)
	struct UCurveFloat* FOVCurve; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PointResult
// Size: 0x20 (Inherited: 0x00)
struct FPointResult {
public:

	int32_t DropPoolID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FItemValue> ItemValueArr; // 0x08(0x10)
	float TotalValue; // 0x18(0x04)
	float TotalNum; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionMsgBase
// Size: 0x10 (Inherited: 0x00)
struct FMotionActionMsgBase {
public:

	char pad_0[0x8]; // 0x00(0x08)
	uint32_t MsgSeq; // 0x08(0x04)
	float Time; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GPAIFocusTargetInfo
// Size: 0x18 (Inherited: 0x00)
struct FGPAIFocusTargetInfo {
public:

	struct AActor* FocusActor; // 0x00(0x08)
	struct FVector FocusLocation; // 0x08(0x0c)
	bool bFocusOnActor; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionAnimState
// Size: 0x10 (Inherited: 0x00)
struct FMotionAnimState {
public:

	struct UAnimSequenceBase* Anim; // 0x00(0x08)
	int32_t Frame; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionPathParam
// Size: 0x08 (Inherited: 0x00)
struct FMotionPathParam {
public:

	int32_t Segment; // 0x00(0x04)
	float Distance; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionExtParams
// Size: 0x10 (Inherited: 0x00)
struct FMotionActionExtParams {
public:

	struct TArray<struct FMotionActionExtParam> ParamList; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionCorrectionActorTarget
// Size: 0x18 (Inherited: 0x00)
struct FMotionCorrectionActorTarget {
public:

	struct AActor* Actor; // 0x00(0x08)
	struct FVector_NetQuantize offset; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionPath
// Size: 0x30 (Inherited: 0x00)
struct FMotionPath {
public:

	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<float> SumDistanceToStart; // 0x10(0x10)
	struct TArray<struct FMotionPathSegment> Segments; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionMsg_RequestSeparatorFrame
// Size: 0x14 (Inherited: 0x00)
struct FMotionActionMsg_RequestSeparatorFrame {
public:

	int32_t PreFrameID; // 0x00(0x04)
	int32_t FrameID; // 0x04(0x04)
	float StartTime; // 0x08(0x04)
	struct FName StateName; // 0x0c(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionNumberSequence
// Size: 0x10 (Inherited: 0x00)
struct FMotionActionNumberSequence {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionGraphConfigParam
// Size: 0x20 (Inherited: 0x00)
struct FMotionGraphConfigParam {
public:

	struct UDataTable* ExtraAnimConfigTable; // 0x00(0x08)
	struct TArray<struct FAnimPoseBoneConfig> PoseBoneConfigs; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionStateAnimConfig
// Size: 0x80 (Inherited: 0x00)
struct FMotionStateAnimConfig {
public:

	/*struct TSoftObjectPtr<UAnimSequence>*/char BasicLocomotionAnim[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UBlendSpaceBase>*/char AOAnimOverride[0x28]; // 0x28(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char AdditiveLocomotionAnim[0x28]; // 0x50(0x28)
	struct FName ShootPoseConfigName; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RaidInfo
// Size: 0x08 (Inherited: 0x00)
struct FRaidInfo {
public:

	uint32_t RaidID; // 0x00(0x04)
	char RaidLevel; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DataInfo
// Size: 0x18 (Inherited: 0x00)
struct FDataInfo {
public:

	char pad_0[0x8]; // 0x00(0x08)
	int64_t QuestID; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ReplicateData
// Size: 0x10 (Inherited: 0x00)
struct FReplicateData {
public:

	struct FName ComponentName; // 0x00(0x08)
	struct FName VariableName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionCorrectionInfo
// Size: 0x60 (Inherited: 0x00)
struct FMotionCorrectionInfo {
public:

	struct TArray<struct FMotionCorrectionSection> Sections; // 0x00(0x10)
	struct TMap<enum class EMotionCorrectionTargetKey, struct FMotionCorrectionTarget> SectionTargets; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LODSolutionSetData
// Size: 0x18 (Inherited: 0x00)
struct FLODSolutionSetData {
public:

	struct UClass* RootFeature; // 0x00(0x08)
	struct TArray<struct FLODSolutionData> Solutions; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DutyInfo
// Size: 0x58 (Inherited: 0x00)
struct FDutyInfo {
public:

	enum class ECharacterDuty CharacterDuty; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Priority; // 0x04(0x04)
	/*struct TSet<enum class EAICharacterTag>*/char allowArms[0x50]; // 0x08(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BuffEffectParam
// Size: 0x78 (Inherited: 0x00)
struct FBuffEffectParam {
public:

	struct FCharacterBuff BuffData; // 0x00(0x70)
	struct AActor* Owner; // 0x70(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InventoryItemInfo
// Size: 0x538 (Inherited: 0x0c)
struct FInventoryItemInfo : public FFastArraySerializerItem {
public:

	char pad_C[0x4]; // 0x0c(0x04)
	struct FItemID ItemID; // 0x10(0x18)
	uint64_t ItemGid; // 0x28(0x08)
	int32_t ItemCount; // 0x30(0x04)
	int32_t ItemNumMax; // 0x34(0x04)
	float ItemDurability; // 0x38(0x04)
	float ItemDurabilityMax; // 0x3c(0x04)
	float ItemRecyclePricePercent; // 0x40(0x04)
	bool isKeepWhenDurabilityZero; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float ItemArmorHealth; // 0x48(0x04)
	float ItemArmorHealthMax; // 0x4c(0x04)
	float TotalApplyDamage; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	int64_t LastEquipTimeStamp; // 0x58(0x08)
	float TotalEquipTime; // 0x60(0x04)
	bool bItemIsDrop; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	enum class EAttachPosition AttachPosition; // 0x68(0x04)
	struct FItemLocation ItemSpaceLocation; // 0x6c(0x14)
	bool bDropOut; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FGPWeaponDescInfo GunDescInfo; // 0x88(0x108)
	char pad_190[0xf8]; // 0x190(0xf8)
	struct FItemArchiveInfo ArchiveInfo; // 0x288(0x1c8)
	int32_t PresetIndex; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct TArray<uint64_t> CurrentSearchingPlayers; // 0x458(0x10)
	bool IsInContainer; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct TArray<uint64_t> SearchedPlayers; // 0x470(0x10)
	float ModifyTimeStamp; // 0x480(0x04)
	enum class EItemInfoUpdatedReason LastUpdateReason; // 0x484(0x01)
	char pad_485[0x3]; // 0x485(0x03)
	struct TArray<struct FKeyChainSpaceInfo> KeyChainSpaceArr; // 0x488(0x10)
	uint64_t TempLastSearchUin; // 0x498(0x08)
	enum class EItemState ItemState; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	uint64_t UsingPlayerUin; // 0x4a8(0x08)
	float CoolDownStartTime; // 0x4b0(0x04)
	bool bIsRawBinded; // 0x4b4(0x01)
	char pad_4B5[0x3]; // 0x4b5(0x03)
	uint64_t BindPlayerId; // 0x4b8(0x08)
	char pad_4C0[0x78]; // 0x4c0(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LootBoxRepData
// Size: 0x18 (Inherited: 0x18)
struct FLootBoxRepData : public FLootObjRepData {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.InvMgrRepData
// Size: 0x48 (Inherited: 0x18)
struct FInvMgrRepData : public FLootObjRepData {
public:

	bool bInitialize; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	int64_t StartupValue; // 0x20(0x08)
	int64_t CurrentValue; // 0x28(0x08)
	int64_t GainValue; // 0x30(0x08)
	int64_t CurrencyValue; // 0x38(0x08)
	int64_t ConsumeValue; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PotentialInteractorInfo
// Size: 0x40 (Inherited: 0x00)
struct FPotentialInteractorInfo {
public:

	struct FGameplayTag InteractorTag; // 0x00(0x08)
	enum class EInteractorType InteractorType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct AActor* Interactor; // 0x10(0x08)
	struct FInteractableProxy InteractableProxy; // 0x18(0x10)
	struct TArray<struct AActor*> AllInteractors; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AICoordinatorConfig
// Size: 0xe0 (Inherited: 0x00)
struct FAICoordinatorConfig {
public:

	struct TArray<struct FAIStyleSetting> AIStyleSetting; // 0x00(0x10)
	struct FAIDashConfig DashConfig; // 0x10(0x48)
	struct FAISearchConfig SearchConfig; // 0x58(0x40)
	struct FAIInvestigateConfig InvestigateConfig; // 0x98(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RepVelocityData
// Size: 0x60 (Inherited: 0x00)
struct FRepVelocityData {
public:

	struct FVector Velocity; // 0x00(0x0c)
	struct FVector AngularVelocity; // 0x0c(0x0c)
	struct FVector Location; // 0x18(0x0c)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FQuat Rotation; // 0x30(0x10)
	struct FSteeringOutput SteeringOutput; // 0x40(0x18)
	char pad_58[0x8]; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BodyArmorFunctionRow
// Size: 0xe8 (Inherited: 0xe0)
struct FBodyArmorFunctionRow : public FArmorFunctionBaseRow {
public:

	float DamagesReduction; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.HelmetFunctionRow
// Size: 0x280 (Inherited: 0xe0)
struct FHelmetFunctionRow : public FArmorFunctionBaseRow {
public:

	float HeadDamagesReduction; // 0xe0(0x04)
	int32_t DamageHeadDamagesReduction; // 0xe4(0x04)
	float MaxHP; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	/*struct TSet<float>*/char HPDamageSet[0x50]; // 0xf0(0x50)
	struct FSoftObjectPath BorderTexturePath; // 0x140(0x18)
	struct FSoftObjectPath SurfaceTexturePath; // 0x158(0x18)
	/*struct TSoftObjectPtr<UStaticMesh>*/char HelmetMeshPtr[0x28]; // 0x170(0x28)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char HelmetMaterialPtr[0x28]; // 0x198(0x28)
	struct TArray<struct FSoftObjectPath> DamageTexturePaths; // 0x1c0(0x10)
	float DamageImageSizeScale; // 0x1d0(0x04)
	char pad_1D4[0x4]; // 0x1d4(0x04)
	struct FSoftObjectPath HelmetBreakAudioPath; // 0x1d8(0x18)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char HelmetPostMaterialPtr[0x28]; // 0x1f0(0x28)
	float BorderSizeScale; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char HelmetPostMaterialPtr_HighQuality[0x28]; // 0x220(0x28)
	float FaceMaskDistance; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char DistanceCurve[0x28]; // 0x250(0x28)
	int32_t HeadsetId; // 0x278(0x04)
	float PerformanceScore; // 0x27c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakthroughDataExtraRow
// Size: 0x120 (Inherited: 0x10)
struct FBreakthroughDataExtraRow : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	int32_t VoteNum; // 0x14(0x04)
	int32_t MaxVoteNum; // 0x18(0x04)
	int32_t KillBonus; // 0x1c(0x04)
	float OccupySpeedFactor; // 0x20(0x04)
	float ZeroEndTime; // 0x24(0x04)
	float EdgeKillTime; // 0x28(0x04)
	float EmptyVehicleDecreaseHPMinTime; // 0x2c(0x04)
	float EmptyVehicleDecreaseHPPercent; // 0x30(0x04)
	float MinVehicleDecreaseHPDist; // 0x34(0x04)
	float GuideAutoCloseDuration; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<enum class EBattleFieldForcesType> BattleFieldForcesTypeArr; // 0x40(0x10)
	char bOpenGuide; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FRedeployGuideInfo> RedeployGuideInfoList; // 0x58(0x10)
	struct TArray<struct FRedeployGuideInfo> RedeployGuideInfoListHD; // 0x68(0x10)
	struct FHalfJoinScoreCalculation HalfJoinScoreCalculation; // 0x78(0x58)
	struct TMap<enum class EBattleFieldDeathConfigType, struct FBattleFieldCharacterDeathConfig> BattleFieldCharacterDeathConfigMap; // 0xd0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakthroughDataRow
// Size: 0x130 (Inherited: 0x10)
struct FBreakthroughDataRow : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	int32_t VoteNum; // 0x14(0x04)
	int32_t MaxVoteNum; // 0x18(0x04)
	int32_t LowVoteNum; // 0x1c(0x04)
	float ZeroEndTime; // 0x20(0x04)
	float ZeroEndTimeSlowDownRatio; // 0x24(0x04)
	float ZeroEndPauseTime; // 0x28(0x04)
	float EdgeKillTime; // 0x2c(0x04)
	int32_t KillBonus; // 0x30(0x04)
	bool bRedeployViewUseImgBg; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float MinScale; // 0x38(0x04)
	float MaxScale; // 0x3c(0x04)
	float FirstTimeSelectScale; // 0x40(0x04)
	float NormalSelectScale; // 0x44(0x04)
	float FirstDeployFirstTimeSelectScale; // 0x48(0x04)
	float FirstDeployNormalSelectScale; // 0x4c(0x04)
	float FirstDeployGlobalKeepTime; // 0x50(0x04)
	float ReDeployGlobalKeepTime; // 0x54(0x04)
	float ReDeployDelayShowVehicleHubItem; // 0x58(0x04)
	bool bHasSeaBase; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float AttackerPlayerVehicleRefreshCD; // 0x60(0x04)
	float DefenderPlayerVehicleRefreshCD; // 0x64(0x04)
	float EmptyVehicleDecreaseHPMinTime; // 0x68(0x04)
	float EmptyVehicleDecreaseHPPercent; // 0x6c(0x04)
	float MinVehicleDecreaseHPDist; // 0x70(0x04)
	float GuideAutoCloseDuration; // 0x74(0x04)
	float PlayWindSoundDistance; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct UGPAudioEventAsset* PlayWindSoundEventPath; // 0x80(0x08)
	struct UGPAudioEventAsset* StopWindSoundEventPath; // 0x88(0x08)
	struct FName WindSoundEventDistanceRtpcName; // 0x90(0x08)
	struct TArray<enum class EBattleFieldForcesType> BattleFieldForcesTypeArr; // 0x98(0x10)
	bool bOpenGuide; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FRedeployGuideInfo> RedeployGuideInfoList; // 0xb0(0x10)
	struct TArray<struct FRedeployGuideInfo> RedeployGuideInfoListHD; // 0xc0(0x10)
	struct FHalfJoinScoreCalculation HalfJoinScoreCalculation; // 0xd0(0x58)
	float HelicopterFlyHeight; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ConquestDataExtraRow
// Size: 0x140 (Inherited: 0x10)
struct FConquestDataExtraRow : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	int32_t WinScore; // 0x14(0x04)
	int32_t OccupiedScore; // 0x18(0x04)
	int32_t KillBonus; // 0x1c(0x04)
	float OccupySpeedFactor; // 0x20(0x04)
	float MatchDuration; // 0x24(0x04)
	float BaseScoreSpeed; // 0x28(0x04)
	float LandslidePreTime; // 0x2c(0x04)
	float LandslideScoreSpeed; // 0x30(0x04)
	float EdgeKillTime; // 0x34(0x04)
	float EmptyVehicleDecreaseHPMinTime; // 0x38(0x04)
	float EmptyVehicleDecreaseHPPercent; // 0x3c(0x04)
	float MinVehicleDecreaseHPDist; // 0x40(0x04)
	float GuideAutoCloseDuration; // 0x44(0x04)
	float SectorBackDelayTime; // 0x48(0x04)
	float SectorBackSpeed; // 0x4c(0x04)
	float HalfJoinLimitedPercent; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<enum class EBattleFieldForcesType> BattleFieldForcesTypeArr; // 0x58(0x10)
	struct UCurveFloat* SectorSpeedCurve; // 0x68(0x08)
	char bOpenGuide; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FRedeployGuideInfo> RedeployGuideInfoList; // 0x78(0x10)
	struct TArray<struct FRedeployGuideInfo> RedeployGuideInfoListHD; // 0x88(0x10)
	struct FHalfJoinScoreCalculation HalfJoinScoreCalculation; // 0x98(0x58)
	struct TMap<enum class EBattleFieldDeathConfigType, struct FBattleFieldCharacterDeathConfig> BattleFieldCharacterDeathConfigMap; // 0xf0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ConquestDataRow
// Size: 0x148 (Inherited: 0x10)
struct FConquestDataRow : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	enum class EDFMGamePlaySubMode SubGameMode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MatchDuration; // 0x18(0x04)
	int32_t WinScore; // 0x1c(0x04)
	int32_t OccupiedScore; // 0x20(0x04)
	float BaseScoreSpeed; // 0x24(0x04)
	int32_t KillBonus; // 0x28(0x04)
	bool bRedeployViewUseImgBg; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct UCurveFloat* SectorSpeedCurve; // 0x30(0x08)
	float LandslidePreTime; // 0x38(0x04)
	float LandslideScoreSpeed; // 0x3c(0x04)
	float EdgeKillTime; // 0x40(0x04)
	float MinScale; // 0x44(0x04)
	float MaxScale; // 0x48(0x04)
	float FirstTimeSelectScale; // 0x4c(0x04)
	float NormalSelectScale; // 0x50(0x04)
	float FirstDeployFirstTimeSelectScale; // 0x54(0x04)
	float FirstDeployNormalSelectScale; // 0x58(0x04)
	float FirstDeployGlobalKeepTime; // 0x5c(0x04)
	float ReDeployGlobalKeepTime; // 0x60(0x04)
	float ReDeployDelayShowVehicleHubItem; // 0x64(0x04)
	bool bHasSeaBase; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float AttackerPlayerVehicleRefreshCD; // 0x6c(0x04)
	float DefenderPlayerVehicleRefreshCD; // 0x70(0x04)
	float EmptyVehicleDecreaseHPMinTime; // 0x74(0x04)
	float EmptyVehicleDecreaseHPPercent; // 0x78(0x04)
	float MinVehicleDecreaseHPDist; // 0x7c(0x04)
	float GuideAutoCloseDuration; // 0x80(0x04)
	float PlayWindSoundDistance; // 0x84(0x04)
	struct UGPAudioEventAsset* PlayWindSoundEventPath; // 0x88(0x08)
	struct UGPAudioEventAsset* StopWindSoundEventPath; // 0x90(0x08)
	struct FName WindSoundEventDistanceRtpcName; // 0x98(0x08)
	float SectorBackDelayTime; // 0xa0(0x04)
	float SectorBackSpeed; // 0xa4(0x04)
	struct TArray<enum class EBattleFieldForcesType> BattleFieldForcesTypeArr; // 0xa8(0x10)
	bool bOpenGuide; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct TArray<struct FRedeployGuideInfo> RedeployGuideInfoList; // 0xc0(0x10)
	struct TArray<struct FRedeployGuideInfo> RedeployGuideInfoListHD; // 0xd0(0x10)
	float HalfJoinLimitedPercent; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FHalfJoinScoreCalculation HalfJoinScoreCalculation; // 0xe8(0x58)
	float HelicopterFlyHeight; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BattleFieldSpawnerData
// Size: 0x70 (Inherited: 0x00)
struct FBattleFieldSpawnerData {
public:

	int32_t OwnCamp; // 0x00(0x04)
	float VehicleCD; // 0x04(0x04)
	float SelfVehicleCD; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FBattleFieldVehicleSpawnerData VehicleSpawnerData; // 0x10(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakthroughBalanceData
// Size: 0x258 (Inherited: 0x00)
struct FBreakthroughBalanceData {
public:

	struct FBattleFieldBalanceData Camp0BattleEieldBalanceData; // 0x00(0xf0)
	struct FBattleFieldBalanceData Camp1BattleEieldBalanceData; // 0xf0(0xf0)
	/*struct TSoftObjectPtr<UCurveFloat>*/char LastSectorCostCurve[0x28]; // 0x1e0(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char LeftVotesPercentCurve[0x28]; // 0x208(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char CurCostVoteCurve[0x28]; // 0x230(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ConquestBalanceDataRow
// Size: 0x270 (Inherited: 0x10)
struct FConquestBalanceDataRow : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FBattleFieldBalanceData Camp0BattleEieldBalanceData; // 0x18(0xf0)
	struct FBattleFieldBalanceData Camp1BattleEieldBalanceData; // 0x108(0xf0)
	/*struct TSoftObjectPtr<UCurveFloat>*/char ConquestCurve1[0x28]; // 0x1f8(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char ConquestCurve2[0x28]; // 0x220(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char ConquestCurve3[0x28]; // 0x248(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BattleFieldCharacterDeathConfig
// Size: 0x30 (Inherited: 0x10)
struct FBattleFieldCharacterDeathConfig : public FDescRowBase {
public:

	enum class EBattleFieldDeathConfigType Type; // 0x10(0x04)
	struct FBFCharacterDeathAction Enemy; // 0x14(0x03)
	struct FBFCharacterDeathAction Friend; // 0x17(0x03)
	struct FBFCharacterDeathAction World; // 0x1a(0x03)
	char pad_1D[0x3]; // 0x1d(0x03)
	uint64_t DamageId; // 0x20(0x08)
	uint64_t BuffId; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakthroughScriptedMatchDataRow
// Size: 0x40 (Inherited: 0x10)
struct FBreakthroughScriptedMatchDataRow : public FDescRowBase {
public:

	struct TArray<struct FBreakthroughSectorAIInfo> SectorAIInfo; // 0x10(0x10)
	struct FBreakthroughScriptedAISetting OffenceAIDefaultSetting; // 0x20(0x10)
	struct FBreakthroughScriptedAISetting DefenceAIDefaultSetting; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BreakthroughSectorAIInfo
// Size: 0x6c (Inherited: 0x00)
struct FBreakthroughSectorAIInfo {
public:

	int32_t LeftVotesLessThanX; // 0x00(0x04)
	struct FBreakthroughScriptedAISetting OffenceAIDifficultyX; // 0x04(0x10)
	struct FBreakthroughScriptedAISetting DefenceAIDifficultyX; // 0x14(0x10)
	int32_t LeftVotesLessThanY; // 0x24(0x04)
	struct FBreakthroughScriptedAISetting OffenceAIDifficultyY; // 0x28(0x10)
	struct FBreakthroughScriptedAISetting DefenceAIDifficultyY; // 0x38(0x10)
	bool bResetAI; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FBreakthroughScriptedAISetting TransOffenceAIDifficulty; // 0x4c(0x10)
	struct FBreakthroughScriptedAISetting TransDefenceAIDifficulty; // 0x5c(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BTDroneFollowTaskMemory
// Size: 0x38 (Inherited: 0x00)
struct FBTDroneFollowTaskMemory {
public:

	struct FPilotNavigationQueryData PilotNavigationQueryData; // 0x00(0x30)
	uint32_t inx; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMBuffClientPerformanceRow
// Size: 0x228 (Inherited: 0x10)
struct FDFMBuffClientPerformanceRow : public FDescRowBase {
public:

	uint32_t BuffId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TSoftClassPtr<UObject>*/char BuffEntityClass[0x28]; // 0x18(0x28)
	enum class EBuffEffectReplicateAttributeType ReplicateAttributeMode; // 0x40(0x01)
	bool DrunkBlur; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	struct FName ScreenEffectName; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TMap<struct FName, struct FName> AvatarScreenEffectNames; // 0x50(0x50)
	struct FName DynalmicScreenEffectName; // 0xa0(0x08)
	struct FDFMBuffVoiceConfig VoiceConfig; // 0xa8(0xa8)
	struct FDFMBuffSpeakConfig CharacterVoiceConfig; // 0x150(0x98)
	struct TArray<enum class EBuffClientEventTag> EventTags; // 0x1e8(0x10)
	struct TArray<struct FBuffClientPerformanceParticleData> CharacterParticleList; // 0x1f8(0x10)
	bool bCharacterParticPlayIn13P; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	enum class EOutLineEffectType OutLineType; // 0x20c(0x04)
	enum class EOutLineRole OutLineRole; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	int32_t OutLineUpdateType; // 0x214(0x04)
	bool InterVoicePrint; // 0x218(0x01)
	bool ShowHitDirView; // 0x219(0x01)
	char pad_21A[0x2]; // 0x21a(0x02)
	struct FName HitBoneName; // 0x21c(0x08)
	char pad_224[0x4]; // 0x224(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PvpAiAgainstVehicalConfig
// Size: 0x28 (Inherited: 0x00)
struct FPvpAiAgainstVehicalConfig {
public:

	struct FPvpAiFocusConfig FocusConfigAgainstVehical; // 0x00(0x14)
	float MaxDistance; // 0x14(0x04)
	int32_t MaxAgainstCount; // 0x18(0x04)
	int32_t MinAgainstCount; // 0x1c(0x04)
	float AgainstCD; // 0x20(0x04)
	float AgainstCDOffset; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterTemplateTable
// Size: 0x540 (Inherited: 0x10)
struct FCharacterTemplateTable : public FDescRowBase {
public:

	struct FString AITypeName; // 0x10(0x10)
	enum class EAILevel AILevel; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FAICharacterDifficulty> AIDifficultyArray; // 0x28(0x10)
	struct FText CharacterName; // 0x38(0x18)
	struct FName PoolName; // 0x50(0x08)
	struct TMap<int32_t, struct FCharacterAttributeEvent> MapAttributeEvnts1; // 0x58(0x50)
	/*struct TMap<struct TSoftObjectPtr<UDataTable>, struct FCharacterAttributeEvent>*/char MapAttributeEvnts2[0x50]; // 0xa8(0x50)
	/*struct TSet<struct TSoftObjectPtr<UDataTable>>*/char SetAttributeEvnts3[0x50]; // 0xf8(0x50)
	/*struct TSoftClassPtr<UObject>*/char NpcTemplateBP[0x28]; // 0x148(0x28)
	struct TArray<struct FCharacterAttributeEvent> AttributeEvnts; // 0x170(0x10)
	float HitHeadDamageRate; // 0x180(0x04)
	float HitThroaxDamageRate; // 0x184(0x04)
	float HitThoraxUpperDamageRate; // 0x188(0x04)
	float HitLegDamageRate; // 0x18c(0x04)
	float HitLegUpperDamageRate; // 0x190(0x04)
	float HitArmDamageRate; // 0x194(0x04)
	float HitArmUpperDamageRate; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	/*struct TSoftClassPtr<UObject>*/char DefaultController[0x28]; // 0x1a0(0x28)
	/*struct TSoftObjectPtr<UBehaviorTree>*/char DefaultBehaviourTree[0x28]; // 0x1c8(0x28)
	bool bAllowDynamicChangeBehaviors; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
	/*struct TSoftObjectPtr<UDataTable>*/char CharacterStyle[0x28]; // 0x1f8(0x28)
	struct FAICharacterBehavior Behaviors; // 0x220(0x118)
	struct TMap<enum class EGPSpecificBehaviorType, int32_t> SpecificBehaviorFactorValue; // 0x338(0x50)
	bool RemoveCorpse; // 0x388(0x01)
	bool bIsUsingPlayerCharacter; // 0x389(0x01)
	bool bIsPlayerAI; // 0x38a(0x01)
	bool bCommanderOwneredSquad; // 0x38b(0x01)
	bool bChangePrefecture; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	struct TArray<int32_t> AirHitBuffId; // 0x390(0x10)
	/*struct TSoftObjectPtr<UDataTable>*/char DifficultyTable[0x28]; // 0x3a0(0x28)
	struct FName Difficulty; // 0x3c8(0x08)
	struct FName EquipID; // 0x3d0(0x08)
	/*struct TSoftObjectPtr<UDataTable>*/char AIBuffTriggerRow[0x28]; // 0x3d8(0x28)
	bool bAssassinatible; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct TArray<struct FName> FashionList; // 0x408(0x10)
	struct FName Profile; // 0x418(0x08)
	enum class EAIStyleType DefaultStyleType; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	struct FAIStyleWeight DefaultStyleWeight; // 0x424(0x10)
	bool bUseDefaultItems; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct TArray<struct FString> DefaultItems; // 0x438(0x10)
	struct TArray<struct FAINpcItemDrop> DeadItemDrop; // 0x448(0x10)
	bool bSpawnDrugOnDeath; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	int32_t DefaultCamp; // 0x45c(0x04)
	enum class ECampType CampType; // 0x460(0x01)
	bool bEnableMotionGraph; // 0x461(0x01)
	bool EnableStaggerComponent; // 0x462(0x01)
	char pad_463[0x1]; // 0x463(0x01)
	float StaggerCooldown; // 0x464(0x04)
	float LeisureStaggerHurtThreshold; // 0x468(0x04)
	float AlertStaggerHurtThreshold; // 0x46c(0x04)
	float FightStaggerHurtThreshold; // 0x470(0x04)
	float StaggerInMoveThreshold; // 0x474(0x04)
	struct TMap<enum class ECharacterStaggerType, float> StaggerTypeProbability; // 0x478(0x50)
	float StaggerTriggerProbability; // 0x4c8(0x04)
	bool EnableFracture; // 0x4cc(0x01)
	char pad_4CD[0x3]; // 0x4cd(0x03)
	struct FVector MuzzleFlashScale; // 0x4d0(0x0c)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	/*struct TSet<enum class EAICharacterTag>*/char CharacterTags[0x50]; // 0x4e0(0x50)
	struct TArray<struct FName> Tags; // 0x530(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterStyleTable
// Size: 0x160 (Inherited: 0x10)
struct FCharacterStyleTable : public FDescRowBase {
public:

	enum class EAIStyleType TotalStyle; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FAICharacterBehavior Behaviors; // 0x18(0x118)
	/*struct TSoftObjectPtr<UDataTable>*/char DifficultyTable[0x28]; // 0x130(0x28)
	struct FName Difficulty; // 0x158(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AICharacterDifficulty
// Size: 0x488 (Inherited: 0x10)
struct FAICharacterDifficulty : public FDescRowBase {
public:

	int32_t AttackLevel; // 0x10(0x04)
	int32_t BulletGroup; // 0x14(0x04)
	float AIDanmage; // 0x18(0x04)
	float AIDanmageMax; // 0x1c(0x04)
	float AIArmorDanmage; // 0x20(0x04)
	float AIArmorDanmageMax; // 0x24(0x04)
	struct FName AISpecialAttackDamage; // 0x28(0x08)
	/*struct TSoftObjectPtr<UDataTable>*/char WeaponDamageScale[0x28]; // 0x30(0x28)
	float DamageScalerWithSkill; // 0x58(0x04)
	float DamageScalerWhenImpendingDeath; // 0x5c(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char DamageScalerWithDist[0x28]; // 0x60(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char DamageScalerWithHP[0x28]; // 0x88(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char DamageScalerWithHPMember[0x28]; // 0xb0(0x28)
	struct FName ArmorDamageScalerWithArmor; // 0xd8(0x08)
	float DamageToPlayerHpLocked; // 0xe0(0x04)
	float DamageScalerToPlayer; // 0xe4(0x04)
	float ArmorDamageScalerToPlayer; // 0xe8(0x04)
	float HealthDamageScalerToPlayer; // 0xec(0x04)
	float DamageScalerToAI; // 0xf0(0x04)
	int32_t HeavyWeaponDamageParts; // 0xf4(0x04)
	struct TArray<struct FAIPartHealth> Health; // 0xf8(0x10)
	bool bHasArmor; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	int32_t ArmorLevel; // 0x10c(0x04)
	int32_t ArmorHP; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	/*struct TSoftObjectPtr<UDataTable>*/char ProtectDataTable[0x28]; // 0x118(0x28)
	bool bHasHelmet; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	int32_t HelmetLevel; // 0x144(0x04)
	int32_t HelmetArmorHP; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FHitRate HitRate; // 0x150(0x1c0)
	float HitRateScalerWhenRescuing; // 0x310(0x04)
	bool EnableRealRandomHitRate; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	int32_t ShotgunBulletCount; // 0x318(0x04)
	struct FName HitPartRowName; // 0x31c(0x08)
	float FightWaitScaler; // 0x324(0x04)
	float AimingTimeScaler; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char ShootDelaySampleCurve[0x28]; // 0x330(0x28)
	int32_t ShootReloadAmmoCount; // 0x358(0x04)
	float StrafeShootProbability; // 0x35c(0x04)
	float StrafeShootHitRateOverride; // 0x360(0x04)
	bool DoNotTakeBullet; // 0x364(0x01)
	char pad_365[0x3]; // 0x365(0x03)
	float InitFightExposedArea; // 0x368(0x04)
	float InitFightShootDirectionAngle; // 0x36c(0x04)
	float InitFightShootingProbability; // 0x370(0x04)
	float FightBroadcastTimeMin; // 0x374(0x04)
	float FightBroadcastTimeMax; // 0x378(0x04)
	float SupFireBroadcastTimeMin; // 0x37c(0x04)
	float SupFireBroadcastTimeMax; // 0x380(0x04)
	float CoverSlidingProbability; // 0x384(0x04)
	float CoverRollingProbability; // 0x388(0x04)
	float CoverShootingProbability; // 0x38c(0x04)
	float MeleeAttackProbability; // 0x390(0x04)
	float SideRushingProbability; // 0x394(0x04)
	float CoverEnteringProbability; // 0x398(0x04)
	float Cover_FullExposePWeight; // 0x39c(0x04)
	float Cover_LeanFireWeight; // 0x3a0(0x04)
	float Cover_PeekWeight; // 0x3a4(0x04)
	float Cover_BlindFireWeight; // 0x3a8(0x04)
	float Cover_LyingBlindFireWeight; // 0x3ac(0x04)
	float ThrowGrenadeProbability; // 0x3b0(0x04)
	float ThrowGrenadeMinCooldown; // 0x3b4(0x04)
	float ThrowGrenadeMaxCooldown; // 0x3b8(0x04)
	float ThrowSmokeBombProbability; // 0x3bc(0x04)
	float ThrowSmokeBombMinCooldown; // 0x3c0(0x04)
	float ThrowSmokeBombMaxCooldown; // 0x3c4(0x04)
	float ThrowFlashBangProbability; // 0x3c8(0x04)
	float ThrowFlashBangMinCooldown; // 0x3cc(0x04)
	float ThrowFlashBangMaxCooldown; // 0x3d0(0x04)
	bool bCheckFoliage; // 0x3d4(0x01)
	bool bEnableStaticFoliage; // 0x3d5(0x01)
	bool bEnableDynamicFoliage; // 0x3d6(0x01)
	char pad_3D7[0x1]; // 0x3d7(0x01)
	struct FName SenseConfigKey; // 0x3d8(0x08)
	float AlertMsgDuration; // 0x3e0(0x04)
	float FightMsgDuration; // 0x3e4(0x04)
	float DynamicLevelScore; // 0x3e8(0x04)
	char pad_3EC[0x4]; // 0x3ec(0x04)
	struct TMap<int32_t, struct FAIDynamicScoreGame> DyanmicDifficultyGame; // 0x3f0(0x50)
	bool bUseDefaultWeapons; // 0x440(0x01)
	bool bUseDefaultItems; // 0x441(0x01)
	char pad_442[0x6]; // 0x442(0x06)
	struct TArray<struct FString> DefaultItems; // 0x448(0x10)
	float WaitTime; // 0x458(0x04)
	float WaitTimeDeviation; // 0x45c(0x04)
	struct FAICharacterItemPool ItemPool; // 0x460(0x08)
	struct TArray<struct FAIBuff> Buffs; // 0x468(0x10)
	struct TArray<struct FAIDynamicScore> DynamicDifficulty; // 0x478(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesEdgeDecalData
// Size: 0x60 (Inherited: 0x00)
struct FDesEdgeDecalData {
public:

	struct FDesEdgeModelID DecalID; // 0x00(0x20)
	struct FTransform RelativeTrans; // 0x20(0x30)
	struct FVector DecalSize; // 0x50(0x0c)
	float FadeScreenSize; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DesEdgeModelData
// Size: 0x50 (Inherited: 0x00)
struct FDesEdgeModelData {
public:

	struct FDesEdgeModelID ModelID; // 0x00(0x20)
	struct FTransform RelativeTrans; // 0x20(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.KeyMappingsDataTableRow
// Size: 0x138 (Inherited: 0x10)
struct FKeyMappingsDataTableRow : public FDescRowBase {
public:

	struct FText FunctionName; // 0x10(0x18)
	struct FName ActionOrAxisName; // 0x28(0x08)
	int32_t KeyFunctionType; // 0x30(0x04)
	bool bIsImportant; // 0x34(0x01)
	enum class EKeyFunctionBindType FunctionBindType; // 0x35(0x01)
	bool bIsOptionalBindEnable; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
	struct FName BindedFunctionActionOrAxisName; // 0x38(0x08)
	bool IsAxis; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float AxisScale; // 0x44(0x04)
	struct FName WrapAxisName; // 0x48(0x08)
	struct FName PairedWrappedAsActionName; // 0x50(0x08)
	bool IsPositiveActivatingInPaired; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FKeyInfo KeyInfo; // 0x60(0x30)
	struct FKeyInfo KeyInfo_Second; // 0x90(0x30)
	enum class EKeyActionLogic KeyActionLogic; // 0xc0(0x01)
	bool bAllowBindAxisKey; // 0xc1(0x01)
	bool bValidWhenUIOnly; // 0xc2(0x01)
	bool bOnlyForMobile; // 0xc3(0x01)
	bool bHideInSetting; // 0xc4(0x01)
	bool bProtected; // 0xc5(0x01)
	char pad_C6[0x2]; // 0xc6(0x02)
	struct FSystemSettingDescHD Desc; // 0xc8(0x70)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AICharacterScoringData
// Size: 0x50 (Inherited: 0x10)
struct FAICharacterScoringData : public FDescRowBase {
public:

	struct FScoreRange KillEnemyScore; // 0x10(0x08)
	struct FScoreRange PickupItemScore; // 0x18(0x08)
	struct FScoreRange MakeDamageScore; // 0x20(0x08)
	struct FScoreRange RecoverHealthScore; // 0x28(0x08)
	struct FScoreRange GetDamageScore; // 0x30(0x08)
	struct FScoreRange TickingScore; // 0x38(0x08)
	struct FScoreRange ScoreBound; // 0x40(0x08)
	float TickingDelay; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AIGroupThreatRecord
// Size: 0x168 (Inherited: 0x00)
struct FAIGroupThreatRecord {
public:

	struct FAIGroupThreatExtraData ExtraData; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LastVisibleTime; // 0x04(0x04)
	char pad_8[0xc]; // 0x08(0x0c)
	float TotalThreat; // 0x14(0x04)
	char pad_18[0x150]; // 0x18(0x150)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GameBrocastMsg
// Size: 0xe8 (Inherited: 0x00)
struct FGameBrocastMsg {
public:

	enum class EGameBrocastChannel Channel; // 0x00(0x01)
	enum class EGameBrocastType BrocastType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FBrocastKillInfo KillInfo; // 0x08(0x68)
	struct FBroadcastGameInfo GameInfo; // 0x70(0x20)
	struct FBroadcastTeamInfo TeamInfo; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	uint64_t Name1Uin; // 0x98(0x08)
	struct FText Name1; // 0xa0(0x18)
	uint64_t Name2Uin; // 0xb8(0x08)
	struct FText Name2; // 0xc0(0x18)
	struct TArray<int32_t> TeamIds; // 0xd8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FSMAudioEventInfo
// Size: 0x78 (Inherited: 0x28)
struct FFSMAudioEventInfo : public FFSMAudioBase {
public:

	struct FString AttachName; // 0x28(0x10)
	struct UGPAudioEventAsset* AudioEvent; // 0x38(0x08)
	bool bFollow; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString EventName; // 0x48(0x10)
	enum class EGPAudioBlueprintType AudioType; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FName NotifyName; // 0x5c(0x08)
	struct FGPAudioEventAdditionalFunction AddFunc; // 0x64(0x10)
	bool bTriggerSoundVisualization; // 0x74(0x01)
	enum class ESoundVisualizationType SoundVisualizationType; // 0x75(0x01)
	char pad_76[0x2]; // 0x76(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.FSMAudioFootEventInfo
// Size: 0x38 (Inherited: 0x28)
struct FFSMAudioFootEventInfo : public FFSMAudioBase {
public:

	enum class EGPAudioFootSoundType AudioType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UPhysicalMaterial* BindPhysMat; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFMAssassinateInfo
// Size: 0x778 (Inherited: 0x00)
struct FDFMAssassinateInfo {
public:

	struct FAssassinateAnimAssetInfo StandAssassinateAnimInfo; // 0x00(0x70)
	struct FAssassinateAnimAssetInfo ProneAssassinateAnimInfo; // 0x70(0x70)
	struct FAssassinateAnimAssetInfo PendingDeathAssassinateAnimInfo; // 0xe0(0x70)
	struct UAnimSequence* CurrentAssassinateAnimTPP; // 0x150(0x08)
	struct UAnimSequence* CurrentBeAssassinateAnimTPP; // 0x158(0x08)
	struct FVector CurrentAssassinateOffsetLoc; // 0x160(0x0c)
	float CurrentAssassinateDeathTime; // 0x16c(0x04)
	float AssassinateStepHeight; // 0x170(0x04)
	float AssassinateFincLocRadiuReduce; // 0x174(0x04)
	float AssassinateGroundZMaxError; // 0x178(0x04)
	int32_t SampleIntervalFrames; // 0x17c(0x04)
	bool bDebugAutonomous; // 0x180(0x01)
	bool bDebugSimulation; // 0x181(0x01)
	bool bDebugPerdictMove; // 0x182(0x01)
	char pad_183[0x1]; // 0x183(0x01)
	float CheckAssassinateDistance; // 0x184(0x04)
	float CheckAssassinateZDisLen; // 0x188(0x04)
	float CheckForwardAngleRange; // 0x18c(0x04)
	float CheckAssassinateViewAngle; // 0x190(0x04)
	float CheckAssassinateHealthPercent; // 0x194(0x04)
	float Step3DeltaAngle; // 0x198(0x04)
	float AssassinateMoveLerpAlpha; // 0x19c(0x04)
	float BeAssassinateMoveLerpAlpha; // 0x1a0(0x04)
	char pad_1A4[0x3c]; // 0x1a4(0x3c)
	struct FGPRootMotionAnimTrackData PlayerMoveData; // 0x1e0(0x2c8)
	struct FGPRootMotionAnimTrackData AIMoveData; // 0x4a8(0x2c8)
	struct USkeletalMeshComponent* CopyWeaponMesh; // 0x770(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AttackScore
// Size: 0x18 (Inherited: 0x00)
struct FAttackScore {
public:

	struct FScoreNameAndValue DestroyScore; // 0x00(0x08)
	struct FScoreNameAndValue HitScore; // 0x08(0x08)
	struct FScoreNameAndValue DestroyAssistScore; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AbilityDetectorBuffData
// Size: 0x88 (Inherited: 0x00)
struct FAbilityDetectorBuffData {
public:

	int32_t BuffId; // 0x00(0x04)
	bool RemoveWhenLeave; // 0x04(0x01)
	bool ClearBuffAddRecordWhenLeave; // 0x05(0x01)
	enum class ECharacterPart Part; // 0x06(0x01)
	bool IncludeImpendingDeath; // 0x07(0x01)
	enum class EBuffApplyRole BuffApplyRole; // 0x08(0x01)
	enum class EBuffGameRole BuffGameRole; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FAbilityBuffDistanceFactor AbilityBuffDistanceFactor; // 0x0c(0x10)
	bool BuffAddOnce; // 0x1c(0x01)
	enum class EScoreName ScoreName; // 0x1d(0x01)
	bool bScore; // 0x1e(0x01)
	bool bIncludeVehicle; // 0x1f(0x01)
	int32_t FlowDataSkill; // 0x20(0x04)
	bool ApplyHitMark; // 0x24(0x01)
	bool ExcluedeGod; // 0x25(0x01)
	bool ExcluedeAI; // 0x26(0x01)
	bool OneForAI; // 0x27(0x01)
	enum class EBuffBlockRole BlockRole; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t SpecialCount; // 0x2c(0x04)
	enum class EScoreName CheckHealthScoreName; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float CustomMaxBuffTime; // 0x34(0x04)
	struct TMap<struct AActor*, int64_t> BuffGUIDMap; // 0x38(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ExitConditionConfig
// Size: 0x98 (Inherited: 0x00)
struct FExitConditionConfig {
public:

	enum class EExitConditionType ExitConditionType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PaidAmount; // 0x04(0x04)
	struct AInteractor_ExitPayment* Interactor_Payment; // 0x08(0x08)
	struct FExitConditionEquipmentEntry ExitConditionEquipmentEntry; // 0x10(0x02)
	char pad_12[0x2]; // 0x12(0x02)
	struct FVector2D RoleLoadLimitRange; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FExitConditionItemEntry ExitConditionItemEntry; // 0x20(0x30)
	struct FExitConditionItemEntry ExitConditionPayItemEntry; // 0x50(0x30)
	struct FText TipsTextTemplate; // 0x80(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CharacterExitInfo
// Size: 0xc0 (Inherited: 0x00)
struct FCharacterExitInfo {
public:

	struct FCountingInfo CountingInfo; // 0x00(0xa8)
	struct ACHARACTER* CHARACTER; // 0xa8(0x08)
	bool bConditionMeet; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct APlayerExitBase* Exit; // 0xb8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GPFSMAudioTrigger
// Size: 0x58 (Inherited: 0x00)
struct FGPFSMAudioTrigger {
public:

	int32_t EventGroupID; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FFSMAudioEventGroup CurrentGroup; // 0x10(0x30)
	char pad_40[0x18]; // 0x40(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.GPFSMAuidoEventRow
// Size: 0x98 (Inherited: 0x70)
struct FGPFSMAuidoEventRow : public FAssetPakerPakPolicyRow {
public:

	int32_t GroupID; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FGPFSMAuidoEventGroupItem GroupItem; // 0x78(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PreciseInteractFOVAdditiveTracker
// Size: 0x28 (Inherited: 0x18)
struct FPreciseInteractFOVAdditiveTracker : public FPreciseInteractFOVTracker {
public:

	float RawEndSmoothTimeStamp; // 0x18(0x04)
	float FinalEndSmoothTimeStamp; // 0x1c(0x04)
	float PlayInteractTimeStamp; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PreciseInteractFOVMatrixTracker
// Size: 0x20 (Inherited: 0x18)
struct FPreciseInteractFOVMatrixTracker : public FPreciseInteractFOVTracker {
public:

	float RawEndSmoothTimeStamp; // 0x18(0x04)
	float FinalEndSmoothTimeStamp; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BoxResult
// Size: 0x50 (Inherited: 0x00)
struct FBoxResult {
public:

	struct TArray<struct FBoxRandomCondition> BoxRandomConditionArr; // 0x00(0x10)
	struct FPointResult PointResult1; // 0x10(0x20)
	struct FPointResult PointResult2; // 0x30(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionPathState
// Size: 0x0c (Inherited: 0x00)
struct FMotionPathState {
public:

	struct FMotionPathParam PathParam; // 0x00(0x08)
	float Direction; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionMsg_SyncState
// Size: 0x28 (Inherited: 0x10)
struct FMotionActionMsg_SyncState : public FMotionActionMsgBase {
public:

	struct FAIRequestID requestId; // 0x10(0x04)
	int32_t ActionIndex; // 0x14(0x04)
	struct FMotionPathParam PathParam; // 0x18(0x08)
	float ActionTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionExecuteParam
// Size: 0xf0 (Inherited: 0x00)
struct FMotionActionExecuteParam {
public:

	struct UAnimMontage* Anim; // 0x00(0x08)
	struct UAnimSequence* BasicLocomotionAnim; // 0x08(0x08)
	struct UAnimSequence* AdditiveLocomotionAnim; // 0x10(0x08)
	bool bPoseMatching; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t StartFrame; // 0x1c(0x04)
	int32_t EndFrame; // 0x20(0x04)
	int32_t FrameNum; // 0x24(0x04)
	float PlayRate; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FMotionActionPathPoint> PathPoints; // 0x30(0x10)
	struct FName StateName; // 0x40(0x08)
	struct FMotionActionExtParams ExtParams; // 0x48(0x10)
	struct FName AnimId; // 0x58(0x08)
	struct FName AnimPath; // 0x60(0x08)
	struct FName BasicLocomotionAnimID; // 0x68(0x08)
	struct FName AdditiveLocomotionAnimID; // 0x70(0x08)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char AnimSoftPtr[0x28]; // 0x78(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char BasicLocomotionAnimSoftPtr[0x28]; // 0xa0(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char AdditiveLocomotionAnimSoftPtr[0x28]; // 0xc8(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.CustomRootMotionParam
// Size: 0x50 (Inherited: 0x00)
struct FCustomRootMotionParam {
public:

	struct UAnimMontage* AnimToPlay; // 0x00(0x08)
	struct TArray<struct FMotionCorrectionTarget> Targets; // 0x08(0x10)
	struct FMotionActionExtParams ExtParams; // 0x18(0x10)
	char pad_28[0x28]; // 0x28(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionCorrectionTarget
// Size: 0x50 (Inherited: 0x00)
struct FMotionCorrectionTarget {
public:

	enum class EMotionCorrectionTargetKey Key; // 0x00(0x01)
	bool bCorrectLocation; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector TargetWorldLocation; // 0x04(0x0c)
	struct FMotionCorrectionActorTarget LocationTargetActor; // 0x10(0x18)
	bool bCorrectOrientation; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float TargetWorldYaw; // 0x2c(0x04)
	bool bFaceLocation; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector FaceLocation; // 0x34(0x0c)
	struct AActor* FaceActor; // 0x40(0x08)
	bool bKeepAnimDisplacement; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionStateTransitionRequestSyncInfo
// Size: 0x58 (Inherited: 0x00)
struct FMotionStateTransitionRequestSyncInfo {
public:

	struct FAIRequestID requestId; // 0x00(0x04)
	struct FName RequestName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMotionPath Path; // 0x10(0x30)
	struct TArray<struct FMotionStateTransition> ActionSequence; // 0x40(0x10)
	bool bAtomic; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionMsg_NewActionFrames
// Size: 0x90 (Inherited: 0x00)
struct FMotionActionMsg_NewActionFrames {
public:

	int32_t PreFrameID; // 0x00(0x04)
	int32_t StartFrameID; // 0x04(0x04)
	struct FAIRequestID requestId; // 0x08(0x04)
	int32_t TransitionIndex; // 0x0c(0x04)
	struct FName StateName; // 0x10(0x08)
	struct UClass* ActionClass; // 0x18(0x08)
	struct FName AnimId; // 0x20(0x08)
	float AnimPlayRate; // 0x28(0x04)
	bool bAnimLoop; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float StartTime; // 0x30(0x04)
	float FrameTime; // 0x34(0x04)
	bool bWaitPreActionFinish; // 0x38(0x01)
	bool bNoneMotionFrame; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FMotionActionNumberSequence AnimFrameSequence; // 0x40(0x10)
	struct FMotionActionNumberSequence LocXSequence; // 0x50(0x10)
	struct FMotionActionNumberSequence LocYSequence; // 0x60(0x10)
	struct FMotionActionNumberSequence LocZSequence; // 0x70(0x10)
	struct FMotionActionNumberSequence YawSequence; // 0x80(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionMsg_UpdateActionFrames
// Size: 0x48 (Inherited: 0x00)
struct FMotionActionMsg_UpdateActionFrames {
public:

	int32_t StartFrameID; // 0x00(0x04)
	int32_t FrameNum; // 0x04(0x04)
	struct FMotionActionNumberSequence LocXSequence; // 0x08(0x10)
	struct FMotionActionNumberSequence LocYSequence; // 0x18(0x10)
	struct FMotionActionNumberSequence LocZSequence; // 0x28(0x10)
	struct FMotionActionNumberSequence YawSequence; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionGraphConfigKey
// Size: 0x30 (Inherited: 0x00)
struct FMotionGraphConfigKey {
public:

	struct UClass* MotionStateMachine; // 0x00(0x08)
	struct UDataTable* ActionConfig; // 0x08(0x08)
	struct FMotionGraphConfigParam OtherConfigs; // 0x10(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionGraphConfigRow
// Size: 0xb8 (Inherited: 0x10)
struct FMotionGraphConfigRow : public FDescRowBase {
public:

	char pad_10[0x8]; // 0x10(0x08)
	struct TArray<struct FDataTableRowHandle> ActionHandles; // 0x18(0x10)
	struct TArray<struct FMotionActionConfig> Actions; // 0x28(0x10)
	struct FMotionStateAnimConfig AnimConfig; // 0x38(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionConfig
// Size: 0x110 (Inherited: 0x00)
struct FMotionActionConfig {
public:

	struct FName ActionName; // 0x00(0x08)
	bool bEnabled; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ActionExtraCost; // 0x0c(0x04)
	struct FGameplayTagContainer ActionFilterTags; // 0x10(0x20)
	struct UClass* MotionActionClass; // 0x30(0x08)
	/*struct TSoftObjectPtr<UAnimMontage>*/char Anim[0x28]; // 0x38(0x28)
	struct TArray<struct FMotionAnimVariantsConfig> AnimVariants; // 0x60(0x10)
	/*struct TArray<struct TSoftObjectPtr<UAnimMontage>>*/char CandidateAnims[0x10]; // 0x70(0x10)
	struct FMotionStateAnimConfig ActionAnimConfig; // 0x80(0x80)
	struct TArray<struct FMotionMovementSectionConfig> MovementSections; // 0x100(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.Raid2Info
// Size: 0x0c (Inherited: 0x08)
struct FRaid2Info : public FRaidInfo {
public:

	float ArmoredCost; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.Raid1Info
// Size: 0x28 (Inherited: 0x08)
struct FRaid1Info : public FRaidInfo {
public:

	bool IsSneakComplete; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float TrainBreakableCurrentHP; // 0x0c(0x04)
	bool IsOverTimeComplete; // 0x10(0x01)
	char pad_11[0x17]; // 0x11(0x17)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DamageInfo
// Size: 0x20 (Inherited: 0x18)
struct FDamageInfo : public FDataInfo {
public:

	char pad_18[0x4]; // 0x18(0x04)
	float DamageValue; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ReplicateObject
// Size: 0x20 (Inherited: 0x10)
struct FReplicateObject : public FReplicateData {
public:

	struct UObject* CachedValue; // 0x10(0x08)
	struct UObject* RepValue; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ReplicateName
// Size: 0x20 (Inherited: 0x10)
struct FReplicateName : public FReplicateData {
public:

	struct FName CachedValue; // 0x10(0x08)
	struct FName RepValue; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ReplicateEnum
// Size: 0x14 (Inherited: 0x10)
struct FReplicateEnum : public FReplicateData {
public:

	char CachedValue; // 0x10(0x01)
	char RepValue; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ReplicateFloat
// Size: 0x18 (Inherited: 0x10)
struct FReplicateFloat : public FReplicateData {
public:

	float CachedValue; // 0x10(0x04)
	float RepValue; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ReplicateInt
// Size: 0x18 (Inherited: 0x10)
struct FReplicateInt : public FReplicateData {
public:

	int32_t CachedValue; // 0x10(0x04)
	int32_t RepValue; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ReplicateBool
// Size: 0x14 (Inherited: 0x10)
struct FReplicateBool : public FReplicateData {
public:

	bool CachedValue; // 0x10(0x01)
	bool RepValue; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AnimRootMotionInfo
// Size: 0xd0 (Inherited: 0x00)
struct FAnimRootMotionInfo {
public:

	struct UAnimMontage* Anim; // 0x00(0x08)
	float PlayRateOveride; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform AnimTransform; // 0x10(0x30)
	struct FMotionCorrectionInfo MotionCorrectionInfo; // 0x40(0x60)
	float AnimStartTime; // 0xa0(0x04)
	float AnimEndTime; // 0xa4(0x04)
	int32_t StartFrame; // 0xa8(0x04)
	int32_t EndFrame; // 0xac(0x04)
	struct FMotionActionExtParams ExtParams; // 0xb0(0x10)
	bool bAtomic; // 0xc0(0x01)
	char pad_C1[0xf]; // 0xc1(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.LODSolutionDataRow
// Size: 0x28 (Inherited: 0x10)
struct FLODSolutionDataRow : public FDescRowBase {
public:

	struct FLODSolutionSetData SolutionSetData; // 0x10(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.SquadTacticItem
// Size: 0x60 (Inherited: 0x00)
struct FSquadTacticItem {
public:

	struct FDutyInfo DutyInfo; // 0x00(0x58)
	int32_t Number; // 0x58(0x04)
	int32_t MaxNumber; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ItemDiffRepData
// Size: 0x540 (Inherited: 0x00)
struct FItemDiffRepData {
public:

	struct FInventoryItemInfo Item; // 0x00(0x538)
	enum class EItemChangeType ChangeType; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ReqInventoryItemInfo
// Size: 0x550 (Inherited: 0x00)
struct FReqInventoryItemInfo {
public:

	struct FInventoryItemInfo ItemInfo; // 0x00(0x538)
	struct FItemAttachLocation TargetLoc; // 0x538(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.DFHDInteractHUDContext
// Size: 0x150 (Inherited: 0x00)
struct FDFHDInteractHUDContext {
public:

	char pad_0[0x2]; // 0x00(0x02)
	enum class EInteractorPanelLayout Layout; // 0x02(0x01)
	char pad_3[0xd]; // 0x03(0x0d)
	struct TArray<struct FText> ZoomNeedArray; // 0x10(0x10)
	struct TArray<struct FName> ZoomKeyIconNameArray; // 0x20(0x10)
	struct TArray<struct FText> ZoomKeyDescArray; // 0x30(0x10)
	struct FText ItemName; // 0x40(0x18)
	char pad_58[0x10]; // 0x58(0x10)
	struct TArray<int32_t> ItemSize; // 0x68(0x10)
	char pad_78[0x10]; // 0x78(0x10)
	struct AActor* CachedActor; // 0x88(0x08)
	struct UDFInteractableComponentBase* CachedInteractableComp; // 0x90(0x08)
	struct FInteractableProxy CachedInteractableProxy; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct ACHARACTER* LocalPawn; // 0xb0(0x08)
	struct FGameplayTag CachedTag; // 0xb8(0x08)
	struct TWeakObjectPtr<struct UInteractExecutor> CachedExecutor; // 0xc0(0x08)
	struct FPotentialInteractorInfo CachedInteractorInfo; // 0xc8(0x40)
	enum class EInteractorType CachedInteractorType; // 0x108(0x01)
	char pad_109[0x47]; // 0x109(0x47)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.PvpAiDifficultyConfig
// Size: 0x148 (Inherited: 0x10)
struct FPvpAiDifficultyConfig : public FDescRowBase {
public:

	struct FName BaseAiDifficultyName; // 0x10(0x08)
	struct FPvpAiFireMoveStyleConfig FireMoveStyle; // 0x18(0xc0)
	struct FPvpAiFocusConfig FocusConfig; // 0xd8(0x14)
	float CancelRescueMyselfTime; // 0xec(0x04)
	float CancelRescueMyselfTimeDeviation; // 0xf0(0x04)
	float RebornTime; // 0xf4(0x04)
	float RebornTimeDeviation; // 0xf8(0x04)
	struct FPvpAiAgainstVehicalConfig AgainstVehicalConfig; // 0xfc(0x28)
	char pad_124[0x4]; // 0x124(0x04)
	struct FPvpAiFightConfig FightConfig; // 0x128(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.AiDifficultyDebugData
// Size: 0x5b0 (Inherited: 0x00)
struct FAiDifficultyDebugData {
public:

	struct FName AiName; // 0x00(0x08)
	struct APawn* AIPawn; // 0x08(0x08)
	int32_t AiCurrAiDifficultyLevel; // 0x10(0x04)
	int32_t AiDynamicLevel; // 0x14(0x04)
	struct FAICharacterDifficulty AiCharacterDifficultyInfo; // 0x18(0x488)
	struct FAIDynamicScoreGame AIDynamicScoreGame; // 0x4a0(0x100)
	struct FAIDynamicScore AiDynamicSocre; // 0x5a0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.ClimbLadderAudioConfig
// Size: 0x80 (Inherited: 0x00)
struct FClimbLadderAudioConfig {
public:

	int32_t ClimbLadderUpId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FFSMAudioEventInfo ClimbLadderUpAudioEvent; // 0x08(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.BasePoseTransitionAudioConfig
// Size: 0x2f0 (Inherited: 0x00)
struct FBasePoseTransitionAudioConfig {
public:

	int32_t StandToCrouchAudioId; // 0x00(0x04)
	int32_t StandToProneAudioId; // 0x04(0x04)
	int32_t CrouchToStandAudioId; // 0x08(0x04)
	int32_t CrouchToProneAudioId; // 0x0c(0x04)
	int32_t ProneToStandAudioId; // 0x10(0x04)
	int32_t ProneToCrouchAudioId; // 0x14(0x04)
	bool StandToCrouchAudio3P; // 0x18(0x01)
	bool StandToProneAudio3P; // 0x19(0x01)
	bool CrouchToStandAudio3P; // 0x1a(0x01)
	bool CrouchToProneAudio3P; // 0x1b(0x01)
	bool ProneToStandAudio3P; // 0x1c(0x01)
	bool ProneToCrouchAudio3P; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FFSMAudioEventInfo StandToCrouchAudioEvent; // 0x20(0x78)
	struct FFSMAudioEventInfo StandToProneAudioEvent; // 0x98(0x78)
	struct FFSMAudioEventInfo CrouchToStandAudioEvent; // 0x110(0x78)
	struct FFSMAudioEventInfo CrouchToProneAudioEvent; // 0x188(0x78)
	struct FFSMAudioEventInfo ProneToStandAudioEvent; // 0x200(0x78)
	struct FFSMAudioEventInfo ProneToCrouchAudioEvent; // 0x278(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionRequestConcatPoint
// Size: 0x48 (Inherited: 0x00)
struct FMotionRequestConcatPoint {
public:

	struct FAIRequestID requestId; // 0x00(0x04)
	int32_t TransitionIndex; // 0x04(0x04)
	struct FName StateName; // 0x08(0x08)
	bool bWaitActionFinish; // 0x10(0x01)
	bool bAbortByTime; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float AbortTime; // 0x14(0x04)
	int32_t AbortActionFrame; // 0x18(0x04)
	struct FMotionPathState PathState; // 0x1c(0x0c)
	struct FMotionAnimState AnimState; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionPathPoint
// Size: 0x40 (Inherited: 0x00)
struct FMotionActionPathPoint {
public:

	struct FVector Location; // 0x00(0x0c)
	struct FMotionPathState PathState; // 0x0c(0x0c)
	struct AActor* FaceTarget; // 0x18(0x08)
	struct FMotionCorrectionActorTarget LocationTarget; // 0x20(0x18)
	bool bAlignAnimToLocation; // 0x38(0x01)
	bool bAlignAnimToDirection; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionStateTransition
// Size: 0x130 (Inherited: 0x00)
struct FMotionStateTransition {
public:

	struct FName FromState; // 0x00(0x08)
	struct FName ToState; // 0x08(0x08)
	struct UClass* ActionClass; // 0x10(0x08)
	struct FMotionActionExecuteParam ActionParam; // 0x18(0xf0)
	struct TArray<struct UAnimSequenceBase*> AnimList; // 0x108(0x10)
	/*ObjectPtrProperty*/char Action[0x8]; // 0x118(0x08)
	char pad_120[0x10]; // 0x120(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionCorrectionSection
// Size: 0x70 (Inherited: 0x00)
struct FMotionCorrectionSection {
public:

	float SectionStart; // 0x00(0x04)
	float SectionEnd; // 0x04(0x04)
	float SectionDuration; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMotionCorrectionTarget Target; // 0x10(0x50)
	float AnimDisplacementSize; // 0x60(0x04)
	float AnimRotationSize; // 0x64(0x04)
	float AnimDisplacementAvgSize; // 0x68(0x04)
	float AnimRotationAvgSize; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.RootMotionActionInfo
// Size: 0xf0 (Inherited: 0x00)
struct FRootMotionActionInfo {
public:

	bool bAbortPlayingAnim; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FAnimRootMotionInfo AnimInfo; // 0x10(0xd0)
	float Time; // 0xe0(0x04)
	bool IsPlanningMotion; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	uint32_t PlanningFrameNumber; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionMsg_NewRequest
// Size: 0xc8 (Inherited: 0x10)
struct FMotionActionMsg_NewRequest : public FMotionActionMsgBase {
public:

	struct FMotionStateTransitionRequestSyncInfo RequestSyncInfo; // 0x10(0x58)
	struct FMotionRequestConcatPoint PreRequestConcatPoint; // 0x68(0x48)
	struct FGPAIFocusTargetInfo FocusTargetInfo; // 0xb0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionMsg_NewTickActionFrame
// Size: 0x148 (Inherited: 0x00)
struct FMotionActionMsg_NewTickActionFrame {
public:

	int32_t PreFrameID; // 0x00(0x04)
	int32_t FrameID; // 0x04(0x04)
	struct FAIRequestID requestId; // 0x08(0x04)
	int32_t TransitionIndex; // 0x0c(0x04)
	struct FMotionStateTransition Transition; // 0x10(0x130)
	float StartTime; // 0x140(0x04)
	bool bWaitPreActionFinish; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameplay.MotionActionMsg_ActionFrameMsgUnion
// Size: 0x1f8 (Inherited: 0x00)
struct FMotionActionMsg_ActionFrameMsgUnion {
public:

	enum class EMotionActionMsgType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FMotionActionMsg_NewActionFrames NewActionFramesMsg; // 0x08(0x90)
	struct FMotionActionMsg_NewTickActionFrame NewTickActionFrameMsg; // 0x98(0x148)
	struct FMotionActionMsg_RequestSeparatorFrame RequestSeparatorFrameMsg; // 0x1e0(0x14)
	char pad_1F4[0x4]; // 0x1f4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
