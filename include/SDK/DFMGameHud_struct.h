
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMGameHud.EMutexChangeReason
enum class EMutexChangeReason : int {
	OccupyIdle = 0,
	ReleaseActive = 1,
	ReleaseOverTime = 2,
	Preempt = 3,
	EMutexChangeReason_MAX = 4
};

// Enum DFMGameHud.EWidgetPriorityType
enum class EWidgetPriorityType : int {
	A = 0,
	B = 1,
	C = 2,
	D = 3,
	E = 4,
	F = 5,
	G = 6,
	H = 7,
	I = 8,
	J = 9,
	Never = 10,
	EWidgetPriorityType_MAX = 11
};

// Enum DFMGameHud.EDFMWidgetEventType
enum class EDFMWidgetEventType : int {
	None = 0,
	UISystemSetting_Close = 1,
	UISystemSetting_Logout = 2,
	UISystemSetting_QuitMatch = 3,
	UISystemSetting_QuitGame = 4,
	Common_LastMsgID = 5,
	EDFMWidgetEventType_MAX = 6
};

// Enum DFMGameHud.EAmmoUpdateType
enum class EAmmoUpdateType : int {
	FirstGun = 0,
	SecondGun = 1,
	AbilityItem = 2,
	PVE = 3,
	None = 4,
	EAmmoUpdateType_MAX = 5
};

// Enum DFMGameHud.EWeaponTipsType
enum class EWeaponTipsType : int {
	None = 0,
	AmmoTipEmpty = 1,
	StingerNoTarget = 2,
	AmmoTipLow = 3,
	EWeaponTipsType_MAX = 4
};

// Enum DFMGameHud.EAmmoTipState
enum class EAmmoTipState : int {
	None = 0,
	Low = 1,
	Empty = 2,
	EAmmoTipState_MAX = 3
};

// Enum DFMGameHud.EAnimDebugType
enum class EAnimDebugType : int {
	None = 0,
	Anim = 1,
	EAnimDebugType_MAX = 2
};

// Enum DFMGameHud.EBattlefieldPlayerDeathType
enum class EBattlefieldPlayerDeathType : int {
	NONE = 0,
	TeamMate = 1,
	SameCamp = 2,
	EBattlefieldPlayerDeathType_MAX = 3
};

// Enum DFMGameHud.EWeaponIconType
enum class EWeaponIconType : int {
	None = 0,
	Default = 1,
	Gun = 2,
	Melee = 3,
	Throw = 4,
	Vehicles = 5,
	FallingDown = 6,
	EWeaponIconType_MAX = 7
};

// Enum DFMGameHud.EBroadcastNameColorType
enum class EBroadcastNameColorType : int {
	None = 0,
	Self = 1,
	Team = 2,
	Enemy = 3,
	Game = 4,
	BattleField_Self = 5,
	BattleField_Team = 6,
	BattleField_Camp = 7,
	BattleField_Enemy = 8,
	EBroadcastNameColorType_MAX = 9
};

// Enum DFMGameHud.EBroadcastKillIconType
enum class EBroadcastKillIconType : int {
	None = 0,
	KnockDown = 1,
	HeadShotAndKnockDown = 2,
	HeadShot = 3,
	PenetrationKill = 4,
	EBroadcastKillIconType_MAX = 5
};

// Enum DFMGameHud.EKillInfoMemberType
enum class EKillInfoMemberType : int {
	None = 0,
	All = 1,
	NormalAI = 2,
	SpecialAI = 3,
	AllPlayer = 4,
	CampMember = 5,
	TeamMember = 6,
	Self = 7,
	EKillInfoMemberType_MAX = 8
};

// Enum DFMGameHud.ECommonIconMapZOrder
enum class ECommonIconMapZOrder : int {
	Detector = 0,
	Enemy = 1,
	EnemyBeKilled = 2,
	ECommonIconMapZOrder_MAX = 3
};

// Enum DFMGameHud.ECommonIconMapMarkerType
enum class ECommonIconMapMarkerType : int {
	None = 0,
	Enemy = 1,
	EnemyBeKilled = 2,
	Detector = 3,
	EnemySpotted = 4,
	ECommonIconMapMarkerType_MAX = 5
};

// Enum DFMGameHud.EDFRouletteActivateType
enum class EDFRouletteActivateType : int {
	EImmediately = 0,
	ELongPressed = 1,
	EPressedMove = 2,
	EPlaceHolder1 = 3,
	EPlaceHolder2 = 4,
	EDFRouletteActivateType_MAX = 5
};

// Enum DFMGameHud.EDFRouletteType
enum class EDFRouletteType : int {
	ENone = 0,
	ERankSupport = 1,
	ESOLMarking = 2,
	EAmmoPriority = 3,
	ECommercialization = 4,
	EScope = 5,
	EMPMarking = 6,
	EDFRouletteType_MAX = 7
};

// Enum DFMGameHud.EActionTipsAnimType
enum class EActionTipsAnimType : int {
	OpenParachuteWarning = 0,
	EActionTipsAnimType_Count = 1,
	EActionTipsAnimType_MAX = 2
};

// Enum DFMGameHud.EPlayerStatePC
enum class EPlayerStatePC : int {
	Normal = 0,
	Dying = 1,
	BeingRescue = 2,
	DeadWaitingRevive = 3,
	BeingRevive = 4,
	Escaped = 5,
	DeadCompletely = 6,
	QuitGame = 7,
	MaxCount = 8,
	EPlayerStatePC_MAX = 9
};

// Enum DFMGameHud.EMainKeyType
enum class EMainKeyType : int {
	Keyboard = 0,
	MouseButton = 1,
	MouseWheel = 2,
	MouseAxis = 3,
	Invalid = 4,
	EMainKeyType_MAX = 5
};

// Enum DFMGameHud.ETestEmitterAudioType
enum class ETestEmitterAudioType : int {
	DEFAULT = 0,
	FOOTSTEP_RUN = 1,
	FOOTSTEP_WALK = 2,
	FOOTSTEP_SPRINT = 3,
	WEAPON_AK = 4,
	WEAPON_AK_SUP = 5,
	ETestEmitterAudioType_MAX = 6
};

// Enum DFMGameHud.ETestEmitterMoveMode
enum class ETestEmitterMoveMode : int {
	Static = 0,
	Circular = 1,
	ETestEmitterMoveMode_MAX = 2
};

// Enum DFMGameHud.ETestEmitterPlayMode
enum class ETestEmitterPlayMode : int {
	Loop = 0,
	PlayOnce = 1,
	ETestEmitterPlayMode_MAX = 2
};

// Enum DFMGameHud.EButtonViewState
enum class EButtonViewState : int {
	ButtonViewState_None = 0,
	ButtonViewState_Normal = 1,
	ButtonViewState_Activated = 2,
	ButtonViewState_Forbidden = 3,
	ButtonViewState_Cooldown = 4,
	ButtonViewState_MAX = 5
};

// Enum DFMGameHud.ECountDownColorType
enum class ECountDownColorType : int {
	None = 0,
	White = 1,
	Red = 2,
	Green = 3,
	ECountDownColorType_MAX = 4
};

// Enum DFMGameHud.ECrosshairFeedbackPlaceType
enum class ECrosshairFeedbackPlaceType : int {
	ScreenCenter = 0,
	FrontSight = 1,
	ECrosshairFeedbackPlaceType_MAX = 2
};

// Enum DFMGameHud.EFeedbackAnimType
enum class EFeedbackAnimType : int {
	NONE = 0,
	HitHead = 1,
	HitBody = 2,
	KilledWithHead = 3,
	KilledWithBody = 4,
	HitVehicle = 5,
	KillVehicle = 6,
	HitADS = 7,
	HitSkillActor = 8,
	EFeedbackAnimType_MAX = 9
};

// Enum DFMGameHud.ECrosshairFeedbackTypes
enum class ECrosshairFeedbackTypes : int {
	CrosshairFeedback_Damage = 0,
	CrosshairFeedback_Kill = 1,
	CrosshairFeedback_Shock = 2,
	CrosshairFeedback_Vehicle = 3,
	CrosshairFeedback_Ability = 4,
	CrosshairFeedback_MAX = 5
};

// Enum DFMGameHud.ECurveKind
enum class ECurveKind : int {
	None = 0,
	Up = 1,
	Down = 2,
	ECurveKind_MAX = 3
};

// Enum DFMGameHud.EFeedbackTipsAnimType
enum class EFeedbackTipsAnimType : int {
	None = 0,
	KnockDown = 1,
	HitArmor = 2,
	HitArmorAndDamageHp = 3,
	HitArmorBroken = 4,
	HitHelmet = 5,
	HitHelmetAndDamageHp = 6,
	HitHelmetBroken = 7,
	HitSkillActor = 8,
	EFeedbackTipsAnimType_MAX = 9
};

// Enum DFMGameHud.EHudModuleType
enum class EHudModuleType : int {
	None = 0,
	Redeploy = 1,
	EHudModuleType_MAX = 2
};

// Enum DFMGameHud.EProgressType
enum class EProgressType : int {
	Cutting = 0,
	Repairing = 1,
	EProgressType_MAX = 2
};

// Enum DFMGameHud.EWhiteDotAnimaStatus
enum class EWhiteDotAnimaStatus : int {
	Small = 0,
	Small2Medium = 1,
	Medium = 2,
	Medium2Small = 3,
	Medium2Tiny = 4,
	Tiny = 5,
	Tiny2Medium = 6,
	LootFailed2Medium = 7,
	EWhiteDotAnimaStatus_MAX = 8
};

// Enum DFMGameHud.EBowControlType
enum class EBowControlType : int {
	Bow = 0,
	ThrowBlocking = 1,
	EBowControlType_MAX = 2
};

// Enum DFMGameHud.CarryBodyButtonViewType
enum class CarryBodyButtonViewType : int {
	None = 0,
	DropBody = 1,
	DropBox = 2,
	PullOutArrow = 3,
	Firefighting = 4,
	ZoyaSwarms = 5,
	CarryBody = 6,
	CarryBox = 7,
	CarryBodyButtonViewType_MAX = 8
};

// Enum DFMGameHud.EFireIconType
enum class EFireIconType : int {
	Normal = 0,
	Throw = 1,
	MeleeNotEmptyHand = 2,
	EFireIconType_MAX = 3
};

// Enum DFMGameHud.EHelmetImageType
enum class EHelmetImageType : int {
	Surface = 0,
	Damage = 1,
	Border = 2,
	EHelmetImageType_MAX = 3
};

// Enum DFMGameHud.EDFMScopeBtnType
enum class EDFMScopeBtnType : int {
	EZoomRate = 0,
	EIconWithArrow = 1,
	EIconWithoutArrow = 2,
	EDFMScopeBtnType_MAX = 3
};

// Enum DFMGameHud.EExpandableButtonType
enum class EExpandableButtonType : int {
	None = 0,
	ThrowableWeapon = 1,
	MedicalItem = 2,
	EExpandableButtonType_MAX = 3
};

// Enum DFMGameHud.ETypeState
enum class ETypeState : int {
	None = 0,
	NotActive = 1,
	Active = 2,
	ETypeState_MAX = 3
};

// Enum DFMGameHud.EAnimPlayConfig
enum class EAnimPlayConfig : int {
	HighConfig = 0,
	LowConfig = 1,
	EAnimPlayConfig_MAX = 2
};

// Enum DFMGameHud.ECurActiveWeaponType
enum class ECurActiveWeaponType : int {
	EmptyHand = 0,
	Gun = 1,
	AbilityItem = 2,
	PVEWeapon = 3,
	MeleeWeapon = 4,
	ThrowableWeapon = 5,
	ECurActiveWeaponType_MAX = 6
};

// Enum DFMGameHud.ECancelRescueMySelfType
enum class ECancelRescueMySelfType : int {
	None = 0,
	Normal = 1,
	SpeedUp = 2,
	ECancelRescueMySelfType_MAX = 3
};

// Enum DFMGameHud.EMarkerState
enum class EMarkerState : int {
	Init = 0,
	Translucent = 1,
	Opaque = 2,
	Flicker = 3,
	EMarkerState_MAX = 4
};

// Enum DFMGameHud.ESTipsCommonButtonAnimType
enum class ESTipsCommonButtonAnimType : int {
	UT_None = 0,
	UT_InLoop = 1,
	UT_InOnce = 2,
	UT_MAX = 3
};

// Enum DFMGameHud.EWeakNetWorkWaitFunctionID
enum class EWeakNetWorkWaitFunctionID : int {
	None = 0,
	ERequestRedeploy = 1,
	ERequestWeaponStore = 2,
	EWeakNetWorkWaitFunctionID_MAX = 3
};

// Enum DFMGameHud.EPlayerMarkerType
enum class EPlayerMarkerType : int {
	Permanent = 0,
	PermanentAndCovered = 1,
	Aimed = 2,
	AimedAndCovered = 3,
	ScoutMarkPermanent = 4,
	ScoutMarkPermanentAndCovered = 5,
	EPlayerMarkerType_MAX = 6
};

// Enum DFMGameHud.ECountDownViewState
enum class ECountDownViewState : int {
	NormalExiting = 0,
	LastMomentNotice = 1,
	LastMomentExiting = 2,
	ECountDownViewState_MAX = 3
};

// Enum DFMGameHud.EExitHudType
enum class EExitHudType : int {
	NONE = 0,
	ESCAPING = 1,
	UNOPEN = 2,
	EExitHudType_MAX = 3
};

// Enum DFMGameHud.ELoadingDestination
enum class ELoadingDestination : int {
	ELD_NONE = 0,
	ELD_Login = 1,
	ELD_MainHall = 2,
	ELD_BattlefieldHall = 3,
	ELD_SOLHall = 4,
	ELD_SOLGame = 5,
	ELD_MPGame = 6,
	ELD_RaidGame = 7,
	ELD_MAX = 8
};

// Enum DFMGameHud.EKillTipWidgetType
enum class EKillTipWidgetType : int {
	ETipWidgetType_Kill = 0,
	ETipWidgetType_HeadShot = 1,
	ETipwidgetType_KillStreak = 2,
	EKillTipWidgetType_MAX = 3
};

// Enum DFMGameHud.EKillTipsShowType
enum class EKillTipsShowType : int {
	HeadShot = 0,
	MultiKill = 1,
	EKillTipsShowType_MAX = 2
};

// Enum DFMGameHud.ERippleType
enum class ERippleType : int {
	None = 0,
	TrackingLoc = 1,
	ERippleType_MAX = 2
};

// Enum DFMGameHud.ESoundWaveSourceType
enum class ESoundWaveSourceType : int {
	SilentWalk = 0,
	Run = 1,
	Sprint = 2,
	Gun = 3,
	GunWithSilencer = 4,
	ESoundWaveSourceType_MAX = 5
};

// Enum DFMGameHud.EBodyPartType
enum class EBodyPartType : int {
	Head = 0,
	Throax = 1,
	LeftArm = 2,
	RightArm = 3,
	LeftLeg = 4,
	RightLeg = 5,
	EBodyPartType_MAX = 6
};

// Enum DFMGameHud.EMiniMapTipsType
enum class EMiniMapTipsType : int {
	None = 0,
	Hide = 1,
	Sneaking = 2,
	Alert = 3,
	Fight = 4,
	EMiniMapTipsType_MAX = 5
};

// Enum DFMGameHud.EImpendingDeathMarkerType
enum class EImpendingDeathMarkerType : int {
	None = 0,
	SOL_ImpendingDeath = 1,
	SOL_FirstDeath = 2,
	SOL_Death = 3,
	BT_SameTeamImpendingDeath = 4,
	BT_SameCampImpendingDeath = 5,
	EImpendingDeathMarkerType_MAX = 6
};

// Enum DFMGameHud.EPlayerReviveButtonState
enum class EPlayerReviveButtonState : int {
	None = 0,
	White = 1,
	Green = 2,
	Red = 3,
	Forbidden = 4,
	EPlayerReviveButtonState_MAX = 5
};

// Enum DFMGameHud.ECancelRescueType
enum class ECancelRescueType : int {
	None = 0,
	Normal = 1,
	SpeedUp = 2,
	ECancelRescueType_MAX = 3
};

// Enum DFMGameHud.ECharacterSoundInfoType
enum class ECharacterSoundInfoType : int {
	NoSound = 0,
	Sprint = 1,
	SilentWalk = 2,
	CrouchRun = 3,
	ProneRun = 4,
	StandRun = 5,
	Gun = 6,
	ECharacterSoundInfoType_MAX = 7
};

// Enum DFMGameHud.ERaidLiveTabType
enum class ERaidLiveTabType : int {
	None = 0,
	DataBoard = 1,
	Advantages = 2,
	ERaidLiveTabType_MAX = 3
};

// Enum DFMGameHud.ERankSkillUIStyle
enum class ERankSkillUIStyle : int {
	E_None = 0,
	E_Ready = 1,
	E_NoReady = 2,
	E_ReadySelected = 3,
	E_NoReadySelected = 4,
	E_MAX = 5
};

// Enum DFMGameHud.EMatchTimeState
enum class EMatchTimeState : int {
	EMatchTimeState_Normal = 0,
	EMatchTimeState_Urgent = 1,
	EMatchTimeState_MAX = 2
};

// Enum DFMGameHud.ERouletteActionType
enum class ERouletteActionType : int {
	RA_None = 0,
	RA_FlashLight = 1,
	RA_OperateLaser = 2,
	RA_OperateMask = 3,
	RA_OperateTool = 4,
	RA_PlayEmote = 5,
	RA_OperateBipod = 6,
	RA_WeaponInspect = 7,
	RA_MAX = 8
};

// Enum DFMGameHud.EShopType
enum class EShopType : int {
	EWeaponShop = 0,
	EAmmorShop = 1,
	EPropShop = 2,
	EShopType_MAX = 3
};

// Enum DFMGameHud.ESOLSidePanelType
enum class ESOLSidePanelType : int {
	None = 0,
	Quest = 1,
	Wish = 2,
	Contract = 3,
	SeasonQuest = 4,
	SeamlessMapNoContract = 5,
	ESOLSidePanelType_MAX = 6
};

// Enum DFMGameHud.ESOLMapInfoSwitchType
enum class ESOLMapInfoSwitchType : int {
	None = 0,
	Boss = 1,
	POI = 2,
	SupplyStation = 3,
	UnlockPoint = 4,
	ESOLMapInfoSwitchType_MAX = 5
};

// Enum DFMGameHud.EEvacuateBtnType
enum class EEvacuateBtnType : int {
	Exit = 0,
	Trigger = 1,
	EEvacuateBtnType_MAX = 2
};

// Enum DFMGameHud.ESOLLiveTabType
enum class ESOLLiveTabType : int {
	None = 0,
	Exit = 1,
	Quest = 2,
	Resource = 3,
	Key = 4,
	Wish = 5,
	ESOLLiveTabType_MAX = 6
};

// Enum DFMGameHud.EQuestPlayerExitState
enum class EQuestPlayerExitState : int {
	None = 0,
	Exist = 1,
	NoExist = 2,
	NoActive = 3,
	EQuestPlayerExitState_MAX = 4
};

// Enum DFMGameHud.ESOLEvacuationEventHUDViewState
enum class ESOLEvacuationEventHUDViewState : int {
	Inactive = 0,
	Start = 1,
	Waiting = 2,
	Ready = 3,
	Finish = 4,
	ESOLEvacuationEventHUDViewState_MAX = 5
};

// Enum DFMGameHud.EProgressTipsState
enum class EProgressTipsState : int {
	None = 0,
	Normal = 1,
	CannotCopy = 2,
	NotCopy = 3,
	Copied = 4,
	EProgressTipsState_MAX = 5
};

// Enum DFMGameHud.ESOLTimelineTipHUDViewState
enum class ESOLTimelineTipHUDViewState : int {
	Ready = 0,
	Inactive = 1,
	NoticeBegin = 2,
	NoticeEnd = 3,
	EventBegin = 4,
	EventEnd = 5,
	ESOLTimelineTipHUDViewState_MAX = 6
};

// Enum DFMGameHud.FDebugCommandLineType
enum class FDebugCommandLineType : int {
	Toggle = 0,
	Attribute = 1,
	AttributeInput = 2,
	FDebugCommandLineType_MAX = 3
};

// Enum DFMGameHud.EWeaponDebugType
enum class EWeaponDebugType : int {
	None = 0,
	Base = 1,
	Recoil = 2,
	AssistedAiming = 3,
	Anim = 4,
	Effect = 5,
	Audio = 6,
	Setting = 7,
	Modular = 8,
	Spread = 9,
	DataModifier = 10,
	AttributeDisplay = 11,
	Damage = 12,
	AttributeDetailDisplay = 13,
	HotReflashDisplay = 14,
	PreViewTimeLine = 15,
	UI = 16,
	Spawn = 17,
	Mesh = 18,
	EWeaponDebugType_MAX = 19
};

// ScriptStruct DFMGameHud.DFMWidgetEvent
// Size: 0x10 (Inherited: 0x00)
struct FDFMWidgetEvent {
public:

	struct UWidget* Widget; // 0x00(0x08)
	enum class EDFMWidgetEventType EventType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.GameMarkerPool2
// Size: 0x10 (Inherited: 0x00)
struct FGameMarkerPool2 {
public:

	struct TArray<struct UAbilityLockerItemBase*> Widgets; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.ActorTipsConfig
// Size: 0x20 (Inherited: 0x00)
struct FActorTipsConfig {
public:

	struct UClass* ActorClass; // 0x00(0x08)
	struct UClass* TipsWdigetClass; // 0x08(0x08)
	float HeightOffset; // 0x10(0x04)
	bool bFilterByDistance; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float FilterDistance; // 0x18(0x04)
	bool bFilterByVisibility; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.AIMarkerWidgetConfig
// Size: 0x10 (Inherited: 0x00)
struct FAIMarkerWidgetConfig {
public:

	struct UPlayerMarkerAIMakerWidget* AIMarkerWidget; // 0x00(0x08)
	float TimeLeft; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.AIMsgWidgets
// Size: 0x50 (Inherited: 0x00)
struct FAIMsgWidgets {
public:

	struct TMap<enum class EAIMsgType, struct FAIMsgWidgetInfo> AIMsgWidgetMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.AIMsgWidgetInfo
// Size: 0x30 (Inherited: 0x00)
struct FAIMsgWidgetInfo {
public:

	struct ADFMCharacter* AICharacter; // 0x00(0x08)
	enum class EAIMsgType AIMsgType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UAIMsgWidgetBase* MsgWidget; // 0x10(0x08)
	struct UPlayerMarkerAIWarnWidget* MarkerWidget; // 0x18(0x08)
	bool bHasCountDown; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float RemainTime; // 0x24(0x04)
	bool bNeedRemove; // 0x28(0x01)
	bool bIsFight; // 0x29(0x01)
	bool bIsSniper; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.GlitchEffectParameters
// Size: 0x18 (Inherited: 0x00)
struct FGlitchEffectParameters {
public:

	float ColorClipOffset; // 0x00(0x04)
	float StepLevelClip; // 0x04(0x04)
	float BlockWeight; // 0x08(0x04)
	float MaxPixelSize; // 0x0c(0x04)
	float RateParam; // 0x10(0x04)
	float BigMapIconGlitchAlpha; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.BigMapQuestTipData
// Size: 0x28 (Inherited: 0x00)
struct FBigMapQuestTipData {
public:

	struct FString QuestName; // 0x00(0x10)
	struct FString QuestObjectDesc; // 0x10(0x10)
	enum class EGoalType QuestObjType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t RequiredCount; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.BroadcastHudNameColor
// Size: 0x38 (Inherited: 0x00)
struct FBroadcastHudNameColor {
public:

	struct FSlateColor NameColor; // 0x00(0x28)
	struct FLinearColor OutlineColor; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.KillInfoRelationInfo
// Size: 0x02 (Inherited: 0x00)
struct FKillInfoRelationInfo {
public:

	enum class EKillInfoMemberType KillerType; // 0x00(0x01)
	enum class EKillInfoMemberType VictimType; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.BroadcastWeaponIcon
// Size: 0x38 (Inherited: 0x10)
struct FBroadcastWeaponIcon : public FDescRowBase {
public:

	struct FSoftObjectPath IconPath; // 0x10(0x18)
	struct TArray<uint64_t> WeaponIdArr; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.CaptureTextInfo
// Size: 0x28 (Inherited: 0x00)
struct FCaptureTextInfo {
public:

	struct TArray<struct FText> Texts; // 0x00(0x10)
	struct FText CaptureText; // 0x10(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.CharacterArmorBarItemView
// Size: 0x3c (Inherited: 0x00)
struct FCharacterArmorBarItemView {
public:

	struct FLinearColor IncreaseColor; // 0x00(0x10)
	struct FLinearColor DecreaseColor; // 0x10(0x10)
	float CurHealth; // 0x20(0x04)
	float MaxHealth; // 0x24(0x04)
	float CacheLastHealthPercent; // 0x28(0x04)
	float HealthChangeSpeed; // 0x2c(0x04)
	bool bPlayHealthChange; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float PlayHealthChangeFlushThreshold; // 0x34(0x04)
	float BackCountdownTime; // 0x38(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.ArmorStatusDataView
// Size: 0x10 (Inherited: 0x00)
struct FArmorStatusDataView {
public:

	struct ADFMCharacter* CHARACTER; // 0x00(0x08)
	bool bHelmet; // 0x08(0x01)
	bool bBodyArmor; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float HitAnimSpeed; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.CharacterAttrsDebugItemData
// Size: 0x28 (Inherited: 0x00)
struct FCharacterAttrsDebugItemData {
public:

	char pad_0[0x10]; // 0x00(0x10)
	float BaseValue; // 0x10(0x04)
	float CurrentValue; // 0x14(0x04)
	struct TArray<struct FAttributeOperateData> Datas; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.BloodBarDataView
// Size: 0x20 (Inherited: 0x00)
struct FBloodBarDataView {
public:

	struct FName mKeyPercent; // 0x00(0x08)
	struct FName mKeyPercentDown; // 0x08(0x08)
	float CurHealth; // 0x10(0x04)
	float MaxHealth; // 0x14(0x04)
	bool bAddHealth; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float CurShieldHealth; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.CharacterBuffListViewData
// Size: 0x78 (Inherited: 0x00)
struct FCharacterBuffListViewData {
public:

	struct FCharacterBuff BuffData; // 0x00(0x70)
	int32_t Num; // 0x70(0x04)
	bool hasNewData; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.CommonBuffItemDataView
// Size: 0x20 (Inherited: 0x00)
struct FCommonBuffItemDataView {
public:

	uint32_t BuffId; // 0x00(0x04)
	float BuffStartTime; // 0x04(0x04)
	float BuffTotalTime; // 0x08(0x04)
	int32_t Num; // 0x0c(0x04)
	bool bNeedShowBloodDebuff; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct ADFMCharacter* CHARACTER; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.CrosshairState
// Size: 0x30 (Inherited: 0x00)
struct FCrosshairState {
public:

	float SpreadRadius; // 0x00(0x04)
	float SpreadAlpha; // 0x04(0x04)
	float centerAlpha; // 0x08(0x04)
	float TranslationLerpValue; // 0x0c(0x04)
	struct FVector2D translation; // 0x10(0x08)
	struct FLinearColor Color; // 0x18(0x10)
	struct FVector2D imageSize; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.BodyPartPopupInfo
// Size: 0x10 (Inherited: 0x00)
struct FBodyPartPopupInfo {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.DamageHudAnimData
// Size: 0x2b0 (Inherited: 0x00)
struct FDamageHudAnimData {
public:

	struct FRuntimeFloatCurve PositionCurveX; // 0x00(0xa0)
	struct FRuntimeFloatCurve PositionCurveY; // 0xa0(0xa0)
	struct FRuntimeFloatCurve AlphaCurve; // 0x140(0xa0)
	struct FRuntimeFloatCurve ScaleCurve; // 0x1e0(0xa0)
	struct FVector2D InitPosOffset; // 0x280(0x08)
	char pad_288[0x8]; // 0x288(0x08)
	struct FVector4 RandomPosOffset; // 0x290(0x10)
	float Duration; // 0x2a0(0x04)
	bool bPureRandomLeftRight; // 0x2a4(0x01)
	char RandomWeight; // 0x2a5(0x01)
	char pad_2A6[0xa]; // 0x2a6(0x0a)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.MarkerPool
// Size: 0x10 (Inherited: 0x00)
struct FMarkerPool {
public:

	struct TArray<struct UDeployPointBaseWidget*> Widgets; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.HDActionTips
// Size: 0x38 (Inherited: 0x00)
struct FHDActionTips {
public:

	struct FName ActionOrAxisName; // 0x00(0x08)
	float AxisScale; // 0x08(0x04)
	bool bNeedHold; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float ActiveWorldTime; // 0x10(0x04)
	float ShowTime; // 0x14(0x04)
	struct FText OverrideFuncName; // 0x18(0x18)
	bool StopCountDownWhenNotOnTop; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float ShowTimeCount; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.AudioTypeDebugArrayStruct
// Size: 0x10 (Inherited: 0x00)
struct FAudioTypeDebugArrayStruct {
public:

	struct TArray<struct FString> TypesArray; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.ViewCharacterInfo
// Size: 0x30 (Inherited: 0x00)
struct FViewCharacterInfo {
public:

	struct FBox2D Box; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString CharacterName; // 0x18(0x10)
	struct ACHARACTER* ViewCharacter; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.CrosshairWidgetContext
// Size: 0x28 (Inherited: 0x00)
struct FCrosshairWidgetContext {
public:

	struct UWidget* Widget; // 0x00(0x08)
	struct FWidgetTransform OriRenderTransform; // 0x08(0x1c)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.DFMCrossHairFeedbackWidgetAnimationConfig
// Size: 0x60 (Inherited: 0x00)
struct FDFMCrossHairFeedbackWidgetAnimationConfig {
public:

	struct FString BindWidgetAnimName; // 0x00(0x10)
	struct FName BindWidgetName; // 0x10(0x08)
	bool bUseColorConfig; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FLinearColor ColorConfig; // 0x1c(0x10)
	bool bReceiveWidgetAnimFinishCallback; // 0x2c(0x01)
	bool bHidePanelWhenFinishAnimation; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float StartAtTime; // 0x30(0x04)
	int32_t NumLoopsToPlay; // 0x34(0x04)
	enum class EUMGSequencePlayMode PlayMode; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float PlaybackSpeed; // 0x3c(0x04)
	bool bRestoreState; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UWidgetAnimation* BindWidgetAnim; // 0x48(0x08)
	bool bReceiveWidgetAnimFromBlueprints; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UCanvasPanel* BindWidgetPtr; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.CrossHairAssetInfo
// Size: 0x18 (Inherited: 0x00)
struct FCrossHairAssetInfo {
public:

	struct UObject* AssetObject; // 0x00(0x08)
	struct UWidget* RootWidget; // 0x08(0x08)
	struct UCrosshairViewProxy* ViewProxy; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.DFMFeedbackWidgetAnimationConfig
// Size: 0x30 (Inherited: 0x00)
struct FDFMFeedbackWidgetAnimationConfig {
public:

	struct FString BindWidgetAnimName; // 0x00(0x10)
	struct FName BindWidgetName; // 0x10(0x08)
	struct UObject* TipsIcon; // 0x18(0x08)
	struct UWidgetAnimation* BindWidgetAnim; // 0x20(0x08)
	struct UWidget* BindWidgetPtr; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.HitViewConf
// Size: 0x40 (Inherited: 0x00)
struct FHitViewConf {
public:

	struct FGameplayTagContainer HitTag; // 0x00(0x20)
	bool ShouldTick; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FSoftClassPath HitViewPath; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.DFMHudMvcConfig
// Size: 0x18 (Inherited: 0x00)
struct FDFMHudMvcConfig {
public:

	struct UClass* FieldClass; // 0x00(0x08)
	struct UClass* LogicClass; // 0x08(0x08)
	float TimerTickInterval; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.ItemBaseViewInfo
// Size: 0x28 (Inherited: 0x00)
struct FItemBaseViewInfo {
public:

	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct UDFMInteractorView_ItemBase* ItemView; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.ItemBaseSoftClassInfo
// Size: 0x50 (Inherited: 0x00)
struct FItemBaseSoftClassInfo {
public:

	struct FGameplayTagContainer Tags; // 0x00(0x20)
	/*struct TSoftClassPtr<UObject>*/char ItemClass[0x28]; // 0x20(0x28)
	bool bPreCreate; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.FireIconInfo
// Size: 0x10 (Inherited: 0x00)
struct FFireIconInfo {
public:

	enum class EFireIconType IconType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UObject* IconObj; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.GMMobileInputData
// Size: 0x38 (Inherited: 0x00)
struct FGMMobileInputData {
public:

	enum class ETouchIndex FingerIndex; // 0x00(0x01)
	enum class EMobileInputPhase Phase; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector2D BeginLocation; // 0x04(0x08)
	struct FVector2D Location; // 0x0c(0x08)
	struct FVector2D LastLocation; // 0x14(0x08)
	struct FVector2D DeltaMove; // 0x1c(0x08)
	float BeginTime; // 0x24(0x04)
	float UpdateTime; // 0x28(0x04)
	float DeltaTime; // 0x2c(0x04)
	float ForceValue; // 0x30(0x04)
	uint32_t CurrentFrameCount; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.LoadedCache
// Size: 0x10 (Inherited: 0x00)
struct FLoadedCache {
public:

	struct TArray<struct UObject*> LoadedAssets; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.SonicInfoData
// Size: 0x48 (Inherited: 0x00)
struct FSonicInfoData {
public:

	struct USonicInfoWidget* Widget; // 0x00(0x08)
	struct FBuffDetectorUpdateData Data; // 0x08(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.DFMVehicleSwitchWeaponButtonInitParamter
// Size: 0x20 (Inherited: 0x00)
struct FDFMVehicleSwitchWeaponButtonInitParamter {
public:

	struct AGPCharacter* OwnerCharacter; // 0x00(0x08)
	struct AWeaponBase* CurrentWeapon; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponToolBarTypeHelper
// Size: 0x100 (Inherited: 0x00)
struct FWeaponToolBarTypeHelper {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct UDFTextBlock* SlashSymbol; // 0x08(0x08)
	struct UTextBlock* CarriedAmmoCountText; // 0x10(0x08)
	struct UDFMImage* tmpSlotCompIconImage; // 0x18(0x08)
	struct UImage* Image_148; // 0x20(0x08)
	struct UHorizontalBox* HorizontalBox_2; // 0x28(0x08)
	struct UCanvasPanel* CanvasPanel_281; // 0x30(0x08)
	struct UCanvasPanel* CanvasPanel_204; // 0x38(0x08)
	struct UImage* WeaponSelectionIcon; // 0x40(0x08)
	struct UVerticalBox* DFVerticalBox_2; // 0x48(0x08)
	struct UImage* Image_116; // 0x50(0x08)
	struct UTextBlock* AmmoCountText; // 0x58(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_109; // 0x60(0x08)
	int32_t WeaponBarID; // 0x68(0x04)
	struct FLinearColor LowAmmoColor; // 0x6c(0x10)
	struct FLinearColor AmmoColor; // 0x7c(0x10)
	struct FLinearColor LowCarriedAmmoColor; // 0x8c(0x10)
	struct FLinearColor CarriedAmmoColor; // 0x9c(0x10)
	struct FLinearColor LowAmmoWeaponIconColor; // 0xac(0x10)
	struct FLinearColor WeaponIconColor; // 0xbc(0x10)
	struct FLinearColor SelectedWeaponIconColor; // 0xcc(0x10)
	struct FLinearColor NotSelectedWeaponIconColor; // 0xdc(0x10)
	struct FLinearColor BgColor; // 0xec(0x10)
	char pad_FC[0x4]; // 0xfc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponBarType
// Size: 0x08 (Inherited: 0x00)
struct FWeaponBarType {
public:

	enum class ETypeState Selected; // 0x00(0x01)
	enum class ETypeState IsNoGuns; // 0x01(0x01)
	enum class ETypeState IsLowBullet; // 0x02(0x01)
	enum class ETypeState IsNoBullet; // 0x03(0x01)
	enum class ETypeState IsNoCarriedBullet; // 0x04(0x01)
	enum class ETypeState IsAddBullet; // 0x05(0x01)
	enum class ETypeState bShowAmmo; // 0x06(0x01)
	enum class ETypeState IsMeleeActivated; // 0x07(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.MarkerViewData
// Size: 0xa8 (Inherited: 0x00)
struct FMarkerViewData {
public:

	char pad_0[0xa8]; // 0x00(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.NearMedicOrTeammateInfoObject
// Size: 0x30 (Inherited: 0x00)
struct FNearMedicOrTeammateInfoObject {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	struct AGPCharacter* GPCharacter; // 0x08(0x08)
	int32_t Distance; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString PlayerName; // 0x18(0x10)
	bool Response; // 0x28(0x01)
	bool IsTeammate; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.HeroDataInfo
// Size: 0x30 (Inherited: 0x00)
struct FHeroDataInfo {
public:

	struct FSoftObjectPath AvatarIcon; // 0x00(0x18)
	struct FSoftObjectPath ExpertIcon; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.VehicleWeaponColorInfo
// Size: 0x18 (Inherited: 0x00)
struct FVehicleWeaponColorInfo {
public:

	float MinValue; // 0x00(0x04)
	float MaxValue; // 0x04(0x04)
	struct FLinearColor Color; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.EnemyMarkerSettingDataTableRow
// Size: 0x28 (Inherited: 0x10)
struct FEnemyMarkerSettingDataTableRow : public FDescRowBase {
public:

	struct FName AICharacterNamePool; // 0x10(0x08)
	enum class EDFMGamePlayMode GameMode; // 0x18(0x01)
	enum class EPlayerMarkerType PlayerMarkerType; // 0x19(0x01)
	bool bShowPoint; // 0x1a(0x01)
	bool bShowName; // 0x1b(0x01)
	bool bShowDistance; // 0x1c(0x01)
	bool bShowWarning; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	int32_t IconType; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.GameLoadingSubData
// Size: 0x80 (Inherited: 0x00)
struct FGameLoadingSubData {
public:

	struct FText ModeName; // 0x00(0x18)
	struct FText MapName; // 0x18(0x18)
	struct FText ModeRule; // 0x30(0x18)
	struct TArray<struct FLoadingImageData> Images; // 0x48(0x10)
	struct TArray<struct FLoadingTipsData> Tips; // 0x58(0x10)
	float TimeOfImage; // 0x68(0x04)
	float TimeOfTips; // 0x6c(0x04)
	int32_t CampType; // 0x70(0x04)
	int32_t MapID; // 0x74(0x04)
	bool bShouldShowGuidInfo; // 0x78(0x01)
	enum class ELoadingDestination Destination; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.LoadingTipsData
// Size: 0x28 (Inherited: 0x00)
struct FLoadingTipsData {
public:

	int32_t TipID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText LoadingTipsContent; // 0x08(0x18)
	float DisplayTime; // 0x20(0x04)
	float ProportionOfTips; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.LoadingImageData
// Size: 0x48 (Inherited: 0x00)
struct FLoadingImageData {
public:

	int32_t ImageID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FSoftObjectPath ImagePath; // 0x08(0x18)
	struct FText ModeRule; // 0x20(0x18)
	float ProportionOfImage; // 0x38(0x04)
	struct FName MovieRowName; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.MarkerUIInfo
// Size: 0x40 (Inherited: 0x00)
struct FMarkerUIInfo {
public:

	struct FText NameText; // 0x00(0x18)
	struct UPaperSprite* IconSprite; // 0x18(0x08)
	struct FText BrokenNameText; // 0x20(0x18)
	struct UPaperSprite* BrokenIconSprite; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.MarkingAnimDataMap
// Size: 0x50 (Inherited: 0x00)
struct FMarkingAnimDataMap {
public:

	struct TMap<enum class ETeamIdentity, struct FMarkingAnimData> MarkingTeamAnimDataMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.MarkingAnimData
// Size: 0x50 (Inherited: 0x00)
struct FMarkingAnimData {
public:

	struct UClass* MarkingAnimWidgetClass; // 0x00(0x08)
	struct FName AnimName_Marking; // 0x08(0x08)
	struct FName MarkingSoundName; // 0x10(0x08)
	struct FLinearColor MarkingColor; // 0x18(0x10)
	struct FAnchorData MarkerAnchorData; // 0x28(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.GameMarkerPool
// Size: 0x10 (Inherited: 0x00)
struct FGameMarkerPool {
public:

	struct TArray<struct UGameMarkerBaseWidget*> Widgets; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.TowerWeaponStateIcon
// Size: 0x28 (Inherited: 0x00)
struct FTowerWeaponStateIcon {
public:

	struct FSoftObjectPath IconPath; // 0x00(0x18)
	struct FLinearColor IconColor; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.GiantTowerSeatViewInfo
// Size: 0x18 (Inherited: 0x00)
struct FGiantTowerSeatViewInfo {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct UGiantTowerSeatButton* SeatButton; // 0x08(0x08)
	struct UUserWidget* SeatIcon; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.InstancedIconDataMgr
// Size: 0xd0 (Inherited: 0x00)
struct FInstancedIconDataMgr {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct FName, bool> IconActiveOrNotMap; // 0x08(0x50)
	struct TArray<struct FMapInstancedIconData> InstancedIconDataArr; // 0x58(0x10)
	struct TMap<struct FName, int32_t> InstancedIconDataMap; // 0x68(0x50)
	struct TArray<int32_t> DormantInstancedIconIndexArr; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.KillTipWidgetInfo
// Size: 0x168 (Inherited: 0x00)
struct FKillTipWidgetInfo {
public:

	enum class EKillTipWidgetType TipWidgetType; // 0x00(0x01)
	char pad_1[0x167]; // 0x01(0x167)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.KillTipsItemPosInfo
// Size: 0x14 (Inherited: 0x00)
struct FKillTipsItemPosInfo {
public:

	struct FVector2D pos; // 0x00(0x08)
	struct FVector2D Scale; // 0x08(0x08)
	float Opactiy; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.KillTipsViewData
// Size: 0x01 (Inherited: 0x00)
struct FKillTipsViewData {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.MapItemInfo
// Size: 0xb0 (Inherited: 0x00)
struct FMapItemInfo {
public:

	struct UClass* WidgetClass; // 0x00(0x08)
	struct TMap<struct FName, struct UMapItemHUDView*> MapItemCache; // 0x08(0x50)
	struct TMap<uint64_t, struct UMapItemHUDView*> MapItemCacheUin; // 0x58(0x50)
	int32_t CreateCount; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.MapActorData
// Size: 0x10 (Inherited: 0x00)
struct FMapActorData {
public:

	struct AActor* WorldActor; // 0x00(0x08)
	bool bWelt; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.SoundWaveInfo
// Size: 0x18 (Inherited: 0x00)
struct FSoundWaveInfo {
public:

	float BaseValue; // 0x00(0x04)
	float WaveVariance; // 0x04(0x04)
	struct FLinearColor WaveColor; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.MinimanBodyPart
// Size: 0x38 (Inherited: 0x00)
struct FMinimanBodyPart {
public:

	struct FLinearColor CurrentColor; // 0x00(0x10)
	float FakeHealth; // 0x10(0x04)
	float RealHealth; // 0x14(0x04)
	enum class ECharacterPart PartType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FString> SlotNames; // 0x20(0x10)
	float RemainingGlintTime; // 0x30(0x04)
	bool bIsGlint; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.ObstaclesRow
// Size: 0x20 (Inherited: 0x10)
struct FObstaclesRow : public FDescRowBase {
public:

	struct TArray<struct FObstacleInfo> Obstacles; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.ObstacleInfo
// Size: 0x10 (Inherited: 0x00)
struct FObstacleInfo {
public:

	struct FVector2D size; // 0x00(0x08)
	float VerticalOffset; // 0x08(0x04)
	float HorizontalOffset; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.BuffInfo4UI
// Size: 0x18 (Inherited: 0x00)
struct FBuffInfo4UI {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.NearMedicOrTeammateInfo
// Size: 0x30 (Inherited: 0x00)
struct FNearMedicOrTeammateInfo {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	struct AGPCharacter* GPCharacter; // 0x08(0x08)
	int32_t Distance; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString PlayerName; // 0x18(0x10)
	bool bResponse; // 0x28(0x01)
	bool IsTeammate; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.CharacterSoundInfo
// Size: 0x14 (Inherited: 0x00)
struct FCharacterSoundInfo {
public:

	int32_t SoundLevel; // 0x00(0x04)
	struct FLinearColor WaveColor; // 0x04(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.CharacterSoundLevelParams
// Size: 0xa0 (Inherited: 0x00)
struct FCharacterSoundLevelParams {
public:

	struct TMap<struct FName, float> MaterialParamMap; // 0x00(0x50)
	struct TMap<struct FName, struct FLinearColor> MaterialVectorParamMap; // 0x50(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.RaidSidePanelBtnDataS2
// Size: 0x20 (Inherited: 0x00)
struct FRaidSidePanelBtnDataS2 {
public:

	struct FText Content; // 0x00(0x18)
	bool IsVictory; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.RaidSidePanelBtnDataS1
// Size: 0x50 (Inherited: 0x00)
struct FRaidSidePanelBtnDataS1 {
public:

	struct FText Title; // 0x00(0x18)
	struct FText Content; // 0x18(0x18)
	bool IsDown; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FSoftObjectPath OverwriteRefImgPath; // 0x38(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.RouletteDataInfo
// Size: 0x30 (Inherited: 0x10)
struct FRouletteDataInfo : public FDescRowBase {
public:

	struct FName ActionName; // 0x10(0x08)
	enum class ERouletteActionType ActionType; // 0x18(0x01)
	bool bTacticalAction; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	struct FName AnimOn; // 0x1c(0x08)
	struct FName AnimOff; // 0x24(0x08)
	enum class EGPWeaponInnerEvent WeaponOnEvent; // 0x2c(0x01)
	enum class EGPWeaponInnerEvent WeaponOffEvent; // 0x2d(0x01)
	enum class EWeaponBoolPropertyType WeaponStorePropertyType; // 0x2e(0x01)
	enum class EWeaponAddFunction WeaponAddFunction; // 0x2f(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.RouletteLayoutInfo
// Size: 0x01 (Inherited: 0x00)
struct FRouletteLayoutInfo {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.SeamlessEntryHUDView_InstructionListConfig
// Size: 0x10 (Inherited: 0x00)
struct FSeamlessEntryHUDView_InstructionListConfig {
public:

	/*struct TArray<struct FSeamlessEntryHUDView_InstructionConfig>*/char InstructionList[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.SeamlessEntryHUDView_InstructionConfig
// Size: 0x30 (Inherited: 0x00)
struct FSeamlessEntryHUDView_InstructionConfig {
public:

	struct FText Title; // 0x00(0x18)
	struct UTexture2D* Image; // 0x18(0x08)
	struct TArray<struct FText> Descriptions; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.SeamlessEntryHUDView_InstructionDescConfig
// Size: 0x20 (Inherited: 0x00)
struct FSeamlessEntryHUDView_InstructionDescConfig {
public:

	enum class ESOLUIIconType UIIcon; // 0x00(0x01)
	enum class ESOLUIColorType UIColor; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText Description; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.SOLCaptureTextInfo
// Size: 0x28 (Inherited: 0x00)
struct FSOLCaptureTextInfo {
public:

	struct TArray<struct FText> Texts; // 0x00(0x10)
	struct FText CaptureText; // 0x10(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.EstimatedTimeItemData
// Size: 0x28 (Inherited: 0x00)
struct FEstimatedTimeItemData {
public:

	struct FVector DeviceLoc; // 0x00(0x0c)
	int32_t TotalDuration; // 0x0c(0x04)
	struct USOLEstimatedTimeItem* ItemWidget; // 0x10(0x08)
	struct FVector2D StartPos; // 0x18(0x08)
	float ShowTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.SOLHealthMainLineInfo
// Size: 0x14 (Inherited: 0x00)
struct FSOLHealthMainLineInfo {
public:

	struct FVector2D StartPoint; // 0x00(0x08)
	struct FVector2D EndPoint; // 0x08(0x08)
	char State; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.EventPOIMarkerInfo
// Size: 0x20 (Inherited: 0x00)
struct FEventPOIMarkerInfo {
public:

	struct TArray<struct FName> POINameArr; // 0x00(0x10)
	struct TArray<struct USOLEventMarkerController*> PoiMarkerArray; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.PlayerExitDescStruct
// Size: 0x48 (Inherited: 0x00)
struct FPlayerExitDescStruct {
public:

	struct FText DescStr; // 0x00(0x18)
	struct FText ConditionStr; // 0x18(0x18)
	struct FText MainStr; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.SOLQuestObjectiveTipData
// Size: 0xa8 (Inherited: 0x00)
struct FSOLQuestObjectiveTipData {
public:

	bool IsUpdateObjective; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString DescText; // 0x08(0x10)
	struct FString BriefDescText; // 0x18(0x10)
	struct FString ProgressText; // 0x28(0x10)
	enum class ESOLQuestObjectionState ObjState; // 0x38(0x01)
	enum class EGoalType ObjType; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	int64_t QuestObjectiveID; // 0x40(0x08)
	bool bTimerStart; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float TimeLimitSec; // 0x4c(0x04)
	float TimeoutSec; // 0x50(0x04)
	bool bQuestIsActivity; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32_t QuestID; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString QuestName; // 0x60(0x10)
	struct FText QuestDesc; // 0x70(0x18)
	enum class ESOLQuestState QuestState; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float QuestReward; // 0x8c(0x04)
	struct FText ForbbidenQuestConditionDes; // 0x90(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.SoundVisualizationItem
// Size: 0x10 (Inherited: 0x00)
struct FSoundVisualizationItem {
public:

	enum class ESoundVisualizationType SoundType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UTopDirectionSoundWidget* SoundWidget; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.DirectionItem
// Size: 0x28 (Inherited: 0x00)
struct FDirectionItem {
public:

	int32_t LowerLimit; // 0x00(0x04)
	int32_t UpperLimit; // 0x04(0x04)
	struct FText DirectionText; // 0x08(0x18)
	bool bEdgeCase; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.SoundWidgetAnimParams
// Size: 0xc0 (Inherited: 0x00)
struct FSoundWidgetAnimParams {
public:

	struct TMap<struct FName, float> MaterialParamMap; // 0x00(0x50)
	struct TMap<struct FName, struct FLinearColor> MaterialVectorParamMap; // 0x50(0x50)
	struct FVector2D SoundImageScale; // 0xa0(0x08)
	struct FVector2D IconImageScale; // 0xa8(0x08)
	struct FVector2D UpArrowTranslation; // 0xb0(0x08)
	struct FVector2D DownArrowTranslation; // 0xb8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.DebugCommandLineItem
// Size: 0x30 (Inherited: 0x00)
struct FDebugCommandLineItem {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
	struct FString Command; // 0x18(0x10)
	float DefaultValue; // 0x28(0x04)
	enum class FDebugCommandLineType CommandType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponInputDisableNotice
// Size: 0x20 (Inherited: 0x00)
struct FWeaponInputDisableNotice {
public:

	struct UClass* TipClass; // 0x00(0x08)
	struct FString TipContent; // 0x08(0x10)
	float Duration; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.MutexRegisterTableRow
// Size: 0x20 (Inherited: 0x10)
struct FMutexRegisterTableRow : public FDescRowBase {
public:

	struct FName WidgetName; // 0x10(0x08)
	enum class EWidgetPriorityType PriorityType; // 0x18(0x01)
	bool bPreemptSamePriority; // 0x19(0x01)
	bool bRecoverAfterPreempted; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	float OccupyTimeLimit; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.AnimDebugLogInfoBase
// Size: 0x20 (Inherited: 0x00)
struct FAnimDebugLogInfoBase {
public:

	char pad_0[0xc]; // 0x00(0x0c)
	struct TWeakObjectPtr<struct UWorld> GameWorld; // 0x0c(0x08)
	struct TWeakObjectPtr<struct UAnimDebugLogView> DebugView; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponDebugLogInfoBase
// Size: 0x20 (Inherited: 0x00)
struct FWeaponDebugLogInfoBase {
public:

	char pad_0[0xc]; // 0x00(0x0c)
	struct TWeakObjectPtr<struct UWorld> GameWorld; // 0x0c(0x08)
	struct TWeakObjectPtr<struct UWeaponDebugLogView> DebugView; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.BroadcastInfoConfig
// Size: 0xb0 (Inherited: 0x00)
struct FBroadcastInfoConfig {
public:

	struct TArray<enum class EDeadType> DeadTypeBlackList; // 0x00(0x10)
	struct TMap<struct FKillInfoRelationInfo, bool> KillBroadCastCache; // 0x10(0x50)
	struct TMap<enum class EBroadcastGameInfoType, bool> GameInfoBroadCastCache; // 0x60(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.HitPostProcessEffect
// Size: 0x38 (Inherited: 0x00)
struct FHitPostProcessEffect {
public:

	/*struct TSoftObjectPtr<UMaterialInstance>*/char EffectMat[0x28]; // 0x00(0x28)
	float PlayTime; // 0x28(0x04)
	struct FName TimeConName; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponBarProxyBase
// Size: 0x10 (Inherited: 0x00)
struct FWeaponBarProxyBase {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct UDFMWeaponBarBase* WeaponBar; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.CommonLoadingStruct
// Size: 0x38 (Inherited: 0x10)
struct FCommonLoadingStruct : public FDescRowBase {
public:

	struct FString MatchModeId; // 0x10(0x10)
	float Proportion; // 0x20(0x04)
	int32_t MinPlayerLevel; // 0x24(0x04)
	int32_t MaxPlayerLevel; // 0x28(0x04)
	int32_t MinNumOfGames; // 0x2c(0x04)
	int32_t MaxNumOfGames; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.MutexQueueItem
// Size: 0x30 (Inherited: 0x00)
struct FMutexQueueItem {
public:

	struct FMutexRegisterTableRow InfoRow; // 0x00(0x20)
	struct UUserWidget* WidgetInstance; // 0x20(0x08)
	float OccupyTimeCount; // 0x28(0x04)
	float WaitingTimeCount; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.AnimDebugLogInfo
// Size: 0x20 (Inherited: 0x20)
struct FAnimDebugLogInfo : public FAnimDebugLogInfoBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.AssistedAimingDebugViewInfo
// Size: 0x50 (Inherited: 0x20)
struct FAssistedAimingDebugViewInfo : public FWeaponDebugLogInfoBase {
public:

	struct TWeakObjectPtr<struct UAssistedAimingDebugLogView> AssistedAimingDebugView; // 0x20(0x08)
	float StickyParam; // 0x28(0x04)
	float Friction; // 0x2c(0x04)
	float MoveSpeed; // 0x30(0x04)
	float DistanceHorizontal; // 0x34(0x04)
	float ReduceScale; // 0x38(0x04)
	bool bHitPreventMissEnable; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32_t HitContinueMissNumber; // 0x40(0x04)
	float HitPreventMissStartTime; // 0x44(0x04)
	float HitBulletRadius; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponDebugSpawnLogInfo
// Size: 0x20 (Inherited: 0x20)
struct FWeaponDebugSpawnLogInfo : public FWeaponDebugLogInfoBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponPreViewTimeLineLogInfo
// Size: 0x20 (Inherited: 0x20)
struct FWeaponPreViewTimeLineLogInfo : public FWeaponDebugLogInfoBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponDebugDamageLogInfo
// Size: 0x30 (Inherited: 0x20)
struct FWeaponDebugDamageLogInfo : public FWeaponDebugLogInfoBase {
public:

	char pad_20[0x10]; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponDebugAttributeDetailDisplayLogInfo
// Size: 0x20 (Inherited: 0x20)
struct FWeaponDebugAttributeDetailDisplayLogInfo : public FWeaponDebugLogInfoBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponDebugAttributeDisplayLogInfo
// Size: 0x20 (Inherited: 0x20)
struct FWeaponDebugAttributeDisplayLogInfo : public FWeaponDebugLogInfoBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponDebugModularLogInfo
// Size: 0x20 (Inherited: 0x20)
struct FWeaponDebugModularLogInfo : public FWeaponDebugLogInfoBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponDebugDataModifierLogInfo
// Size: 0x20 (Inherited: 0x20)
struct FWeaponDebugDataModifierLogInfo : public FWeaponDebugLogInfoBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponDebugAudioLogInfo
// Size: 0x20 (Inherited: 0x20)
struct FWeaponDebugAudioLogInfo : public FWeaponDebugLogInfoBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponDebugUILogInfo
// Size: 0x20 (Inherited: 0x20)
struct FWeaponDebugUILogInfo : public FWeaponDebugLogInfoBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponDebugEffectLogInfo
// Size: 0x20 (Inherited: 0x20)
struct FWeaponDebugEffectLogInfo : public FWeaponDebugLogInfoBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponDebugBaseAttributeLogInfo
// Size: 0x20 (Inherited: 0x20)
struct FWeaponDebugBaseAttributeLogInfo : public FWeaponDebugLogInfoBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponDebugMeshLogInfo
// Size: 0x20 (Inherited: 0x20)
struct FWeaponDebugMeshLogInfo : public FWeaponDebugLogInfoBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponDebugAnimLogInfo
// Size: 0x20 (Inherited: 0x20)
struct FWeaponDebugAnimLogInfo : public FWeaponDebugLogInfoBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponDebugAssistedAimingLogInfo
// Size: 0x68 (Inherited: 0x20)
struct FWeaponDebugAssistedAimingLogInfo : public FWeaponDebugLogInfoBase {
public:

	char pad_20[0x48]; // 0x20(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponDebugRecoilLogInfo
// Size: 0x70 (Inherited: 0x20)
struct FWeaponDebugRecoilLogInfo : public FWeaponDebugLogInfoBase {
public:

	char pad_20[0x50]; // 0x20(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.BroadcastConfig
// Size: 0xc8 (Inherited: 0x10)
struct FBroadcastConfig : public FDescRowBase {
public:

	enum class EDFMGamePlayMode GamePlayMode; // 0x10(0x01)
	bool bShowMyKillInfo; // 0x11(0x01)
	bool bShowTeamKillInfo; // 0x12(0x01)
	bool bShowEnemyKillInfo; // 0x13(0x01)
	bool bShowAIKillInfo; // 0x14(0x01)
	bool bShowKnowDown; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FBroadcastInfoConfig BroadCastSettingConfig; // 0x18(0xb0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.HitSuppressByBulletEffect
// Size: 0x70 (Inherited: 0x00)
struct FHitSuppressByBulletEffect {
public:

	struct FHitPostProcessEffect EnterEffect; // 0x00(0x38)
	struct FHitPostProcessEffect LoopEffect; // 0x38(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.WeaponBarProxy
// Size: 0x48 (Inherited: 0x10)
struct FWeaponBarProxy : public FWeaponBarProxyBase {
public:

	struct TArray<enum class EWeaponItemType> WhiteList; // 0x10(0x10)
	struct TArray<enum class EWeaponItemType> Blacklist; // 0x20(0x10)
	struct TArray<enum class EAttachPosition> AttachPositions; // 0x30(0x10)
	bool bCanBindToPVEWeapon; // 0x40(0x01)
	bool bCanBindToSkillWeapon; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.LoadingImageStruct
// Size: 0x88 (Inherited: 0x38)
struct FLoadingImageStruct : public FCommonLoadingStruct {
public:

	int32_t ID; // 0x38(0x04)
	enum class ELoadingDestination LoadingType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32_t MatchType; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FText ModeRule; // 0x48(0x18)
	struct FSoftObjectPath LoadingTexturePath; // 0x60(0x18)
	float StartTime; // 0x78(0x04)
	float EndTime; // 0x7c(0x04)
	struct FName MovieRowName; // 0x80(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGameHud.LoadingTipsStruct
// Size: 0x70 (Inherited: 0x38)
struct FLoadingTipsStruct : public FCommonLoadingStruct {
public:

	int32_t ID; // 0x38(0x04)
	enum class ELoadingDestination LoadingType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FText TipContent; // 0x40(0x18)
	struct FString TipComment; // 0x58(0x10)
	float DisplayTime; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
