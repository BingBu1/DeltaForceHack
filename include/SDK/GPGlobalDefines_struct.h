
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPGlobalDefines.EAdapterItemType
enum class EAdapterItemType : int {
	None = 0,
	Receiver = 1,
	GunBarral = 2,
	PistolGrip = 3,
	Stock = 4,
	Handguard = 5,
	Sight = 6,
	Magazine = 7,
	Muzzle = 8,
	Foregrip = 9,
	Underbarrel = 10,
	TacticalDevices = 11,
	Bipod = 12,
	ForSight = 13,
	RearSight = 14,
	Special = 15,
	SightBase = 16,
	Handle = 17,
	Attacker = 18,
	Connector = 19,
	Trigger = 20,
	PistolgripPatch = 21,
	CheekRest = 22,
	HandguardChip = 23,
	GripBass = 24,
	MagBass = 25,
	Flashkill = 26,
	Hammer = 27,
	GasT = 28,
	HanU = 29,
	Shield = 30,
	Bolt = 31,
	Pendant = 32,
	Ammo = 33,
	EAdapterItemType_MAX = 34
};

// Enum GPGlobalDefines.EWeaponItemType
enum class EWeaponItemType : int {
	None = 0,
	Rifle = 1,
	Submachine = 2,
	Shotgun = 3,
	LightMachine = 4,
	PrecisionShootingRifle = 5,
	Sniper = 6,
	Pistol = 7,
	Heavy = 8,
	Melee = 9,
	EmptyHand = 10,
	VehicleGun = 11,
	Bow = 12,
	HeavyMachineGun = 13,
	FlameThrower = 14,
	Max = 15
};

// Enum GPGlobalDefines.EDFMGamePlayMode
enum class EDFMGamePlayMode : int {
	None = 0,
	GamePlayMode_SOL = 1,
	GamePlayMode_Raid = 2,
	GamePlayMode_IrisDiscovery = 3,
	GamePlayMode_Conquest = 4,
	GamePlayMode_Breakthrough = 5,
	GamePlayMode_SafeHouse = 6,
	GamePlayMode_Intro = 7,
	EDFMGamePlayMode_MAX = 8
};

// Enum GPGlobalDefines.ESoundVisualizationType
enum class ESoundVisualizationType : int {
	ESVT_Default = 0,
	ESVT_None = 1,
	ESVT_Weapon_WeaponCommon = 2,
	ESVT_Weapon_Fire = 3,
	ESVT_Weapon_SubFire = 4,
	ESVT_Weapon_Reload = 5,
	ESVT_Explosion = 6,
	ESVT_Character_SwitchAction = 7,
	ESVT_Character_SwitchAction_StandCrouch = 8,
	ESVT_FootStep_Common = 9,
	ESVT_FootStep_Walk = 10,
	ESVT_FootStep_Run = 11,
	ESVT_FootStep_Sprint = 12,
	ESVT_FootStep_Jump = 13,
	ESVT_FootStep_Land = 14,
	ESVT_FootStep_CrouchMove = 15,
	ESVT_FootStep_CrouchRun = 16,
	ESVT_FootStep_ProneMove = 17,
	ESVT_FootStep_ProneRun = 18,
	ESVT_FootStep_FractureMove = 19,
	ESVT_FootStep_FractureRun = 20,
	ESVT_FootStep_ClimbMove = 21,
	ESVT_FootStep_SlideTackle = 22,
	ESVT_Interact_InteractCommon = 23,
	ESVT_Interact_OpenCloseDoor = 24,
	ESVT_Interact_BreakDoor = 25,
	ESVT_Interact_KickDoor = 26,
	ESVT_Interact_ReleaseLockDoor = 27,
	ESVT_Interact_HoldItem = 28,
	ESVT_Interact_UseItem = 29,
	ESVT_Interact_Looting = 30,
	ESVT_Interact_HackPC = 31,
	ESVT_Interact_ClimbLadder = 32,
	ESVT_Interact_Rescuing = 33,
	ESVT_Interact_Vaulting = 34,
	ESVT_Interact_CarryBody = 35,
	ESVT_Interact_FoliageOverlap = 36,
	ESVT_Interact_Parachute = 37,
	ESVT_Interact_Zipline = 38,
	ESVT_PlayerBreath = 39,
	ESVT_PlayerVoice = 40,
	ESVT_AIVoice = 41,
	ESVT_AI_FootStep_Common = 42,
	ESVT_AI_FootStep_Walk = 43,
	ESVT_AI_FootStep_Run = 44,
	ESVT_AI_FootStep_Sprint = 45,
	ESVT_AI_FootStep_Jump = 46,
	ESVT_AI_FootStep_Land = 47,
	ESVT_AI_FootStep_CrouchMove = 48,
	ESVT_AI_FootStep_CrouchRun = 49,
	ESVT_AI_FootStep_ProneMove = 50,
	ESVT_AI_FootStep_ProneRun = 51,
	ESVT_AI_FootStep_FractureMove = 52,
	ESVT_AI_FootStep_FractureRun = 53,
	ESVT_AI_FootStep_ClimbMove = 54,
	ESVT_AI_FootStep_SlideTackle = 55,
	ESVT_Vehicle_VehicleCommon = 56,
	ESVT_Vehicle_EngineerCar = 57,
	ESVT_Skill_Assault_BuffStart = 58,
	ESVT_SKill_Assault_DashStart = 59,
	ESVT_Skill_Engineer_MineActivate = 60,
	ESVT_Skill_Engineer_MineRecycle = 61,
	ESVT_Skill_Engineer_RobotStart = 62,
	ESVT_Skill_Engineer_WeldingIronGauze = 63,
	ESVT_Skill_Support_SelfCure = 64,
	ESVT_Skill_Scout_PathTracing = 65,
	ESVT_Vehicle_AIVehicleCommon = 66,
	ESVT_NumMax = 67,
	ESVT_MAX = 68
};

// Enum GPGlobalDefines.ESensitivityType
enum class ESensitivityType : int {
	Normal = 0,
	Fire = 1,
	ESensitivityType_MAX = 2
};

// Enum GPGlobalDefines.ESensitivityMode
enum class ESensitivityMode : int {
	FixedSpeed = 0,
	SpeedAcc = 1,
	ESensitivityMode_MAX = 2
};

// Enum GPGlobalDefines.EAudioMasteringPCType
enum class EAudioMasteringPCType : int {
	HomeCinema = 0,
	Headphones = 1,
	NightMode = 2,
	Max = 3
};

// Enum GPGlobalDefines.EAudioPresetPCType
enum class EAudioPresetPCType : int {
	Loudspeaker = 0,
	EarphoneStereo = 1,
	EarphoneDolbyAtmos = 2,
	Max = 3
};

// Enum GPGlobalDefines.ELODLevel
enum class ELODLevel : int {
	Low = 0,
	Medium = 1,
	High = 2,
	Superhigh = 3,
	ELODLevel_MAX = 4
};

// Enum GPGlobalDefines.EDriveAngle
enum class EDriveAngle : int {
	Follow = 0,
	Free = 1,
	EDriveAngle_MAX = 2
};

// Enum GPGlobalDefines.EWeaponVehicleMode
enum class EWeaponVehicleMode : int {
	JoyStick = 0,
	Button = 1,
	EWeaponVehicleMode_MAX = 2
};

// Enum GPGlobalDefines.EVehicleMode
enum class EVehicleMode : int {
	Button = 0,
	Glider = 1,
	JoyStick = 2,
	EVehicleMode_MAX = 3
};

// Enum GPGlobalDefines.ESuperSprintControlMode
enum class ESuperSprintControlMode : int {
	LeftStick = 0,
	Button = 1,
	ESuperSprintControlMode_MAX = 2
};

// Enum GPGlobalDefines.EMoveRunMode
enum class EMoveRunMode : int {
	LeftMoveRightFix = 0,
	LeftMoveRightFollow = 1,
	LeftFixRightFix = 2,
	EMoveRunMode_MAX = 3
};

// Enum GPGlobalDefines.ESensitivityChangeMode
enum class ESensitivityChangeMode : int {
	StartAim = 0,
	AfterOpenScope = 1,
	Transitional = 2,
	ESensitivityChangeMode_MAX = 3
};

// Enum GPGlobalDefines.EFunctionBtnRotationMode
enum class EFunctionBtnRotationMode : int {
	AllOpen = 0,
	AllClose = 1,
	Custom = 2,
	EFunctionBtnRotationMode_MAX = 3
};

// Enum GPGlobalDefines.ERightFireMode
enum class ERightFireMode : int {
	Follow = 0,
	Fixed = 1,
	ERightFireMode_MAX = 2
};

// Enum GPGlobalDefines.ELeftJoystickMode
enum class ELeftJoystickMode : int {
	Follow = 0,
	Fixed = 1,
	ELeftJoystickMode_MAX = 2
};

// Enum GPGlobalDefines.EKeyLayoutType
enum class EKeyLayoutType : int {
	Layout_1 = 0,
	Layout_2 = 1,
	Layout_3 = 2,
	Layout_MAX = 3
};

// Enum GPGlobalDefines.EFireBreakReload
enum class EFireBreakReload : int {
	Close = 0,
	BreakReload = 1,
	MixReload = 2,
	EFireBreakReload_MAX = 3
};

// Enum GPGlobalDefines.EGyroScopeOpenMode
enum class EGyroScopeOpenMode : int {
	AlwaysOpen = 0,
	Close = 1,
	OpenWhenAim = 2,
	EGyroScopeOpenMode_MAX = 3
};

// Enum GPGlobalDefines.ESilentWalkInputMode
enum class ESilentWalkInputMode : int {
	Close = 0,
	ButtonToggle = 1,
	RouletteToggle = 2,
	Blend = 3,
	ESilentWalkInputMode_MAX = 4
};

// Enum GPGlobalDefines.EQuickScopeOpenMode
enum class EQuickScopeOpenMode : int {
	AllOpen = 0,
	AllClose = 1,
	Custom = 2,
	EQuickScopeOpenMode_MAX = 3
};

// Enum GPGlobalDefines.EScopeOpenMode
enum class EScopeOpenMode : int {
	Click = 0,
	Hold = 1,
	Mix = 2,
	EScopeOpenMode_MAX = 3
};

// Enum GPGlobalDefines.EFireMode
enum class EFireMode : int {
	Press = 0,
	Release = 1,
	EFireMode_MAX = 2
};

// Enum GPGlobalDefines.EHitEffectColor
enum class EHitEffectColor : int {
	Default = 0,
	Color1 = 1,
	Color2 = 2,
	Color3 = 3,
	Color4 = 4,
	Color5 = 5,
	Color6 = 6,
	EHitEffectColor_MAX = 7
};

// Enum GPGlobalDefines.EVehicleSensitivityMode
enum class EVehicleSensitivityMode : int {
	NONE = 0,
	Vehicle_Driver_FPP = 1,
	Vehicle_Driver_TPP = 2,
	Vehicle_Weapon_Passenger_FPP = 3,
	Vehicle_Weapon_Passenger_TPP = 4,
	Helicopter_Driver_FPP = 5,
	Helicopter_Driver_TPP = 6,
	EVehicleSensitivityMode_MAX = 7
};

// Enum GPGlobalDefines.ESideAimingControlMode
enum class ESideAimingControlMode : int {
	MixWithAim = 0,
	SeparateSame = 1,
	SeparateDiff = 2,
	ESideAimingControlMode_MAX = 3
};

// Enum GPGlobalDefines.ESensitivityModeHD
enum class ESensitivityModeHD : int {
	MDVOnly = 0,
	MDVXADS = 1,
	ZoomratedMDV = 2,
	ADSOnly = 3,
	ESensitivityModeHD_MAX = 4
};

// Enum GPGlobalDefines.EMouseSensitivityMode
enum class EMouseSensitivityMode : int {
	ENormalWeapon = 0,
	EVehicleDriveWeapon = 1,
	EHelicopterDriveWeapon = 2,
	EVehicleWeapon = 3,
	EMouseSensitivityMode_MAX = 4
};

// Enum GPGlobalDefines.ESystemSettingApplyMode
enum class ESystemSettingApplyMode : int {
	Immediate = 0,
	ManullyConfirm = 1,
	Restart = 2,
	OutOfGame = 3,
	ESystemSettingApplyMode_MAX = 4
};

// Enum GPGlobalDefines.ESystemSettingInputTypeHD
enum class ESystemSettingInputTypeHD : int {
	None = 0,
	Switcher = 1,
	FloatValue = 2,
	IntValue = 3,
	DropDown = 4,
	DynamicDropDown = 5,
	Volume = 6,
	Reserve1 = 7,
	Reserve2 = 8,
	Reserve3 = 9,
	Reserve4 = 10,
	Reserve5 = 11,
	Reserve6 = 12,
	Reserve7 = 13,
	Reserve8 = 14,
	Custom = 15,
	ESystemSettingInputTypeHD_MAX = 16
};

// Enum GPGlobalDefines.ESystemSettingDescTemplateHD
enum class ESystemSettingDescTemplateHD : int {
	None = 0,
	Simple = 1,
	Reserve1 = 2,
	Reserve2 = 3,
	Reserve3 = 4,
	Reserve4 = 5,
	Reserve5 = 6,
	Reserve6 = 7,
	Reserve7 = 8,
	Reserve8 = 9,
	Custom = 10,
	ESystemSettingDescTemplateHD_MAX = 11
};

// Enum GPGlobalDefines.EInt
enum class EInt : int {
	Zero = 0,
	One = 1,
	Two = 2,
	Three = 3,
	Four = 4,
	Five = 5,
	Six = 6,
	Seven = 7,
	Eight = 8,
	Nine = 9,
	Ten = 10,
	Eleven = 11,
	Twelve = 12,
	EInt_MAX = 13
};

// Enum GPGlobalDefines.ECharacterType
enum class ECharacterType : int {
	ENone = 0,
	ECharacter = 1,
	EAlarmTower = 2,
	ECharacterType_MAX = 3
};

// Enum GPGlobalDefines.EDynamicUObjectRootType
enum class EDynamicUObjectRootType : int {
	Gameplay = 0,
	Persistent = 1,
	ClientSeamless = 2,
	EDynamicUObjectRootType_MAX = 3
};

// Enum GPGlobalDefines.ESeamlessFlag
enum class ESeamlessFlag : int {
	SF_AutoDestroy = 0,
	SF_NeedDestroyAfterSeamless = 1,
	SF_KeepInAllStage = 2,
	SF_MAX = 3
};

// Enum GPGlobalDefines.ESeamlessStage
enum class ESeamlessStage : int {
	Stage_None = 0,
	Stage_ClientOnly = 1,
	Stage_DedicatedServer = 2,
	Stage_Standalone = 3,
	Stage_MAX = 4
};

// Enum GPGlobalDefines.EDFMGamePlaySubMode
enum class EDFMGamePlaySubMode : int {
	None = 0,
	GamePlaySubMode_TacticalConquest = 1,
	EDFMGamePlaySubMode_MAX = 2
};

// Enum GPGlobalDefines.ESoundTypeIcon
enum class ESoundTypeIcon : int {
	ESTI_None = 0,
	ESTI_Ability = 1,
	ESTI_Medicine = 2,
	ESTI_MAX = 3
};

// Enum GPGlobalDefines.ENumberIncreaseType
enum class ENumberIncreaseType : int {
	Linear = 0,
	Sqrt = 1,
	CustomedCurve = 2,
	RandomThenSteadyFromTail = 3,
	ENumberIncreaseType_MAX = 4
};

// Enum GPGlobalDefines.EMarkerEdgeTrackType
enum class EMarkerEdgeTrackType : int {
	None = 0,
	TrackWhenOutEdge = 1,
	TrackWhenOutScreen = 2,
	EMarkerEdgeTrackType_MAX = 3
};

// Enum GPGlobalDefines.EMarkerEdgeType
enum class EMarkerEdgeType : int {
	None = 0,
	MobileCustomCircle = 1,
	HDCustomScreenEdge = 2,
	CenterSmallCircle = 3,
	BigEllipse = 4,
	HDScreenEdge = 5,
	EMarkerEdgeType_MAX = 6
};

// Enum GPGlobalDefines.ENZLogLevel
enum class ENZLogLevel : int {
	LogLevel_Log = 0,
	LogLevel_Warning = 1,
	LogLevel_Error = 2,
	LogLevel_Fatal = 3,
	LogLevel_MAX = 4
};

// Enum GPGlobalDefines.ETurnInfo
enum class ETurnInfo : int {
	TurnInfo_None = 0,
	TurnInfo_Left = 1,
	TurnInfo_Right = 2,
	TurnInfo_MAX = 3
};

// Enum GPGlobalDefines.EWeaponHand
enum class EWeaponHand : int {
	HAND_Right = 0,
	HAND_Left = 1,
	HAND_Center = 2,
	HAND_Hidden = 3,
	HAND_MAX = 4
};

// Enum GPGlobalDefines.EInputMode
enum class EInputMode : int {
	EIM_None = 0,
	EIM_GameOnly = 1,
	EIM_GameAndUI = 2,
	EIM_UIOnly = 3,
	EIM_MAX = 4
};

// Enum GPGlobalDefines.EClientSyncCustomData
enum class EClientSyncCustomData : int {
	ENone = 0,
	EDoorData = 1,
	EClientSyncCustomData_MAX = 2
};

// Enum GPGlobalDefines.EGPTriggerAuth
enum class EGPTriggerAuth : int {
	Unkown = 0,
	ClientOnly = 1,
	Authority = 2,
	EGPTriggerAuth_MAX = 3
};

// Enum GPGlobalDefines.EGPTriggerMode
enum class EGPTriggerMode : int {
	AnyAny = 0,
	Player1 = 1,
	Player2 = 2,
	Player3 = 3,
	Player4 = 4,
	PlayerAny = 5,
	VehicleAny = 6,
	EnemyAny = 7,
	SpecialActor = 8,
	LevelEnvEvent = 9,
	Custom = 10,
	EGPTriggerMode_MAX = 11
};

// Enum GPGlobalDefines.EGPVehicleDamageType
enum class EGPVehicleDamageType : int {
	Default = 0,
	LightDamage = 1,
	HeavyDamage = 2,
	EGPVehicleDamageType_MAX = 3
};

// Enum GPGlobalDefines.EGPVehicleArmorType
enum class EGPVehicleArmorType : int {
	Default = 0,
	Light = 1,
	LightMiddle = 2,
	Middle = 3,
	Heavy = 4,
	Raid = 5,
	RaidTankBoss = 6,
	LittleBird = 7,
	SOLHelicopter = 8,
	FSV = 9,
	Num = 10,
	EGPVehicleArmorType_MAX = 11
};

// Enum GPGlobalDefines.EVehicleSeatType
enum class EVehicleSeatType : int {
	None = 0,
	MachineGun = 1,
	Drive = 2,
	Ride = 3,
	EVehicleSeatType_MAX = 4
};

// Enum GPGlobalDefines.EVehicleDeployType
enum class EVehicleDeployType : int {
	None = 0,
	LightVehicle = 1,
	ArmoredVehicle = 2,
	LightArmor = 3,
	HeavyVehicle = 4,
	AirTransport = 5,
	AttackHelicopter = 6,
	Fighter = 7,
	EVehicleDeployType_MAX = 8
};

// Enum GPGlobalDefines.EAnimVehicleType
enum class EAnimVehicleType : int {
	BaseCar = 0,
	UNTruck = 1,
	TutuCar = 2,
	Jeep = 3,
	Valkyrie = 4,
	Boat = 5,
	MilitaryJeep = 6,
	Tank = 7,
	Helicopter = 8,
	Infantry = 9,
	SPAAG = 10,
	ATV = 11,
	ORV = 12,
	Humvee = 13,
	ArmedPickup = 14,
	OldCity_ArmoredCar = 15,
	OldCity_BossTank = 16,
	Wheel_Tank = 17,
	Bird_Helicopter = 18,
	NoVehicle = 19,
	EAnimVehicleType_MAX = 20
};

// Enum GPGlobalDefines.ECollectionItemType
enum class ECollectionItemType : int {
	None = 0,
	DailyNecessities = 1,
	ToolAndMaterial = 2,
	Electronic = 3,
	Other = 4,
	Key = 5,
	MedKit = 6,
	Intelligence = 7,
	Valuable = 8,
	Narrative = 9,
	TreasureMap = 10,
	Archive = 11,
	ECollectionItemType_MAX = 12
};

// Enum GPGlobalDefines.EWeaponExtraModelType
enum class EWeaponExtraModelType : int {
	None = 0,
	ForSight = 1,
	RearSight = 2,
	Handle = 3,
	Cheek = 4,
	Rail = 5,
	MagWell = 6,
	Rgrip = 7,
	Muzzle = 8,
	Shield = 9,
	Adapter = 10,
	Gas = 11,
	Pad = 12,
	Patch = 13,
	RailCover = 14,
	Fgrip = 15,
	Skin = 16,
	EWeaponExtraModelType_MAX = 17
};

// Enum GPGlobalDefines.EGadgetItemSubType
enum class EGadgetItemSubType : int {
	None = 0,
	AmmoBox = 1,
	EGadgetItemSubType_MAX = 2
};

// Enum GPGlobalDefines.EEquipmentItemType
enum class EEquipmentItemType : int {
	HELMET = 0,
	BreastPlate = 1,
	ChestHanging = 2,
	Bag = 3,
	SafeBox = 4,
	KeyChain = 5,
	EEquipmentItemType_MAX = 6
};

// Enum GPGlobalDefines.EItemMainType
enum class EItemMainType : int {
	ItemMainType_None = 0,
	ItemMainType_Weapon = 1,
	ItemMainType_Equip = 2,
	ItemMainType_WeaponExtraModel = 3,
	ItemMainType_Adapter = 4,
	ItemMainType_Medicine = 5,
	ItemMainType_Collection = 6,
	ItemMainType_Sundry = 7,
	ItemMainType_Box = 8,
	ItemMainType_WeaponStruct = 9,
	ItemMainType_Food = 10,
	ItemMainType_WeaponThrowable = 11,
	ItemMainType_Perk = 12,
	ItemMainType_GadgetItem = 13,
	ItemMainType_ItemSkill = 14,
	ItemMainType_WeaponSkin = 15,
	ItemMainType_Fashion = 16,
	ItemMainType_PoorWeapon = 17,
	ItemMainType_Ammo = 18,
	ItemMainType_Commercialize = 19,
	ItemMainType_Vehicle = 20,
	ItemMainType_VehicleAdapter = 21,
	ItemMainType_VehicleSkin = 22,
	ItemMainType_Hero = 23,
	ItemMainType_MAX = 24
};

// Enum GPGlobalDefines.ESightTelescopeType
enum class ESightTelescopeType : int {
	NoGlass = 0,
	RedSpot = 1,
	MechinicalAim = 2,
	VSS = 3,
	Scale_2 = 4,
	Scale_3 = 5,
	Scale_4 = 6,
	Scale_5 = 7,
	Scale_7 = 8,
	Scale_9 = 9,
	Max = 10
};

// Enum GPGlobalDefines.EScreenAdaptorMode
enum class EScreenAdaptorMode : int {
	Corner = 0,
	RoundCorner = 1,
	EScreenAdaptorMode_MAX = 2
};

// Enum GPGlobalDefines.EPlayerGuideStage
enum class EPlayerGuideStage : int {
	FirstLogin = 0,
	TrainingMatch = 1,
	WormUpMatch = 2,
	GuideStageEnd = 3,
	EPlayerGuideStage_MAX = 4
};

// Enum GPGlobalDefines.EBeginerLevel
enum class EBeginerLevel : int {
	None = 0,
	Beginer = 1,
	Regular = 2,
	Master = 3,
	EBeginerLevel_MAX = 4
};

// Enum GPGlobalDefines.EHandleMode
enum class EHandleMode : int {
	Mode_2 = 0,
	Mode_3 = 1,
	Mode_4 = 2,
	Mode_MAX = 3
};

// Enum GPGlobalDefines.ERightHandFireMode
enum class ERightHandFireMode : int {
	Fixed = 0,
	Follow = 1,
	Closed = 2,
	ERightHandFireMode_MAX = 3
};

// Enum GPGlobalDefines.EHudSubMode
enum class EHudSubMode : int {
	Mode_2 = 0,
	Mode_3 = 1,
	Mode_4 = 2,
	Mode_5 = 3,
	Mode_MAX = 4
};

// Enum GPGlobalDefines.EHudMode
enum class EHudMode : int {
	Mode_2 = 0,
	Mode_3 = 1,
	Mode_4 = 2,
	Mode_MAX = 3
};

// Enum GPGlobalDefines.EMedicineSort
enum class EMedicineSort : int {
	Mode_2 = 0,
	Mode_3 = 1,
	Mode_4 = 2,
	Mode_MAX = 3
};

// Enum GPGlobalDefines.EOperationMode
enum class EOperationMode : int {
	Mode_2 = 0,
	Mode_3 = 1,
	Mode_4 = 2,
	Mode_5 = 3,
	Mode_MAX = 4
};

// Enum GPGlobalDefines.EGyroMode
enum class EGyroMode : int {
	Closed = 0,
	Always = 1,
	WhenAim = 2,
	EGyroMode_MAX = 3
};

// Enum GPGlobalDefines.EAimMethod
enum class EAimMethod : int {
	Click = 0,
	Pressing = 1,
	EAimMethod_MAX = 2
};

// Enum GPGlobalDefines.ESideShootMethod
enum class ESideShootMethod : int {
	Click = 0,
	Pressing = 1,
	ESideShootMethod_MAX = 2
};

// Enum GPGlobalDefines.ESideShootMode
enum class ESideShootMode : int {
	Closed = 0,
	Always = 1,
	WhenAim = 2,
	ESideShootMode_MAX = 3
};

// Enum GPGlobalDefines.ELeftHandFireMode
enum class ELeftHandFireMode : int {
	Closed = 0,
	Always = 1,
	WhenAim = 2,
	ELeftHandFireMode_MAX = 3
};

// Enum GPGlobalDefines.ESwitchOnOff
enum class ESwitchOnOff : int {
	Unknown = 0,
	Off = 1,
	On = 2,
	ESwitchOnOff_MAX = 3
};

// Enum GPGlobalDefines.ERotationMethodType
enum class ERotationMethodType : int {
	ERotationMethodType_NZM = 0,
	ERotationMethodType_DFMCommon = 1,
	ERotationMethodType_DFMDistanceAcceleration = 2,
	ERotationMethodType_DFMSpeedAcceleration = 3,
	ERotationMethodType_DFMBlend = 4,
	ERotationMethodType_MAX = 5
};

// Enum GPGlobalDefines.ERotationSensitivityCatagoryType
enum class ERotationSensitivityCatagoryType : int {
	ERotationMethodType_Low = 0,
	ERotationMethodType_Middle = 1,
	ERotationMethodType_High = 2,
	ERotationMethodType_MAX = 3
};

// ScriptStruct GPGlobalDefines.MoveInput
// Size: 0x04 (Inherited: 0x00)
struct FMoveInput {
public:

	float Value; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.ItemID
// Size: 0x18 (Inherited: 0x00)
struct FItemID {
public:

	uint32_t Category; // 0x00(0x04)
	uint32_t Sequence; // 0x04(0x04)
	char pad_8[0x10]; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.VehicleInfo
// Size: 0x20 (Inherited: 0x00)
struct FVehicleInfo {
public:

	enum class EAnimVehicleType VehicleType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t VehicleId; // 0x04(0x04)
	int32_t CampId; // 0x08(0x04)
	int32_t TeamId; // 0x0c(0x04)
	struct TArray<int32_t> MarkedCampIDArray; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.PriorityRow
// Size: 0x40 (Inherited: 0x10)
struct FPriorityRow : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText PriorityText; // 0x18(0x18)
	bool bNetbar; // 0x30(0x01)
	bool bCollege; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t NetbarValue; // 0x34(0x04)
	int32_t CollegeValue; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.NetbarPriorityRow
// Size: 0x30 (Inherited: 0x10)
struct FNetbarPriorityRow : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	int32_t IfVisible; // 0x14(0x04)
	struct FText PriorityText; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.VehicleSensitivityOuterSettingHD
// Size: 0x38 (Inherited: 0x00)
struct FVehicleSensitivityOuterSettingHD {
public:

	float SensitivityFPP; // 0x00(0x04)
	float SensitivityTPP; // 0x04(0x04)
	struct TArray<struct FZoomratedDataHD> ZoomratedMDV; // 0x08(0x10)
	struct TArray<struct FWeaponZoomDataHD> ZoomDataHD; // 0x18(0x10)
	float BaseADSSensitivity; // 0x28(0x04)
	int32_t MDVSwitchingMode; // 0x2c(0x04)
	enum class ESensitivityModeHD SensitivityMode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float MDV; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.WeaponZoomDataHD
// Size: 0x28 (Inherited: 0x00)
struct FWeaponZoomDataHD {
public:

	float ADSSensitivity; // 0x00(0x04)
	float ADSSensitivity2; // 0x04(0x04)
	float DefaultADSSensitivity; // 0x08(0x04)
	float DefaultADSSensitivity2; // 0x0c(0x04)
	struct FString Desc; // 0x10(0x10)
	float ZoomRate; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.ZoomratedDataHD
// Size: 0x08 (Inherited: 0x00)
struct FZoomratedDataHD {
public:

	float Value; // 0x00(0x04)
	float ZoomRate; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.AdapterInfoHD
// Size: 0x18 (Inherited: 0x00)
struct FAdapterInfoHD {
public:

	struct FString AdapterName; // 0x00(0x10)
	int32_t AdapterID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.WeaponZoomDataSettingRowHD
// Size: 0x50 (Inherited: 0x10)
struct FWeaponZoomDataSettingRowHD : public FDescRowBase {
public:

	float DefaultADSSensitivity; // 0x10(0x04)
	float DefaultADSSensitivity2; // 0x14(0x04)
	float MaxADSSensitivity; // 0x18(0x04)
	float MinADSSensitivity; // 0x1c(0x04)
	float DefaultMDV; // 0x20(0x04)
	float MaxMDV; // 0x24(0x04)
	float MinMDV; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FText Desc; // 0x30(0x18)
	float ZoomRate; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.VideoSettingVRamRowHD
// Size: 0x40 (Inherited: 0x10)
struct FVideoSettingVRamRowHD : public FDescRowBase {
public:

	enum class ESystemSettingInputTypeHD InputType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float VRamUsage; // 0x14(0x04)
	struct TArray<float> VRamUsageLevels; // 0x18(0x10)
	float MaxVRamUsage; // 0x28(0x04)
	float MinVRamUsage; // 0x2c(0x04)
	bool bAffectedByResolution; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float ResolutionFactor; // 0x34(0x04)
	bool bAffectedByRenderScale; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float RenderScaleFactor; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.AdvancedVideoSettingRowHD
// Size: 0x50 (Inherited: 0x10)
struct FAdvancedVideoSettingRowHD : public FDescRowBase {
public:

	struct FString ParamGroup; // 0x10(0x10)
	struct FString ConsoleName; // 0x20(0x10)
	struct TArray<struct FString> Levels; // 0x30(0x10)
	struct FString Help; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.ResolutionVramRowHD
// Size: 0x20 (Inherited: 0x10)
struct FResolutionVramRowHD : public FDescRowBase {
public:

	struct FIntPoint Resolution; // 0x10(0x08)
	float MinimumVRam; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.VideoSettingClampRowHD
// Size: 0x20 (Inherited: 0x10)
struct FVideoSettingClampRowHD : public FDescRowBase {
public:

	enum class EGraphicsQualityLevelHD BenchmarkLevel; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName SettingID; // 0x14(0x08)
	int32_t ClampMin; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.CacheObjectInfo
// Size: 0x18 (Inherited: 0x00)
struct FCacheObjectInfo {
public:

	struct TWeakObjectPtr<struct UObject> CachedObjPtr; // 0x00(0x08)
	uint64_t LastHideTimeStamp; // 0x08(0x08)
	float WaitForDestroyTime; // 0x10(0x04)
	int32_t Priority; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.AILabCharacterDebugInfoBunch
// Size: 0x10 (Inherited: 0x00)
struct FAILabCharacterDebugInfoBunch {
public:

	struct TArray<struct FAILabCharacterDebugInfo> DebugInfoBunch; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.AILabCharacterDebugInfo
// Size: 0x50 (Inherited: 0x00)
struct FAILabCharacterDebugInfo {
public:

	uint64_t Uin; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
	struct FString DisplayName; // 0x18(0x10)
	struct FVector Location; // 0x28(0x0c)
	int32_t HP; // 0x34(0x04)
	uint64_t WeaponID; // 0x38(0x08)
	uint64_t ArmorId; // 0x40(0x08)
	bool IsPlayer; // 0x48(0x01)
	bool isAILabAI; // 0x49(0x01)
	bool isBTLabAI; // 0x4a(0x01)
	bool isBossAI; // 0x4b(0x01)
	bool isOtherNPCAI; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.QuestFullID
// Size: 0x10 (Inherited: 0x00)
struct FQuestFullID {
public:

	int64_t QuestID; // 0x00(0x08)
	int64_t ObjectionID; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.GPSnapshotInfo
// Size: 0x60 (Inherited: 0x00)
struct FGPSnapshotInfo {
public:

	struct AActor* TargetActor; // 0x00(0x08)
	struct FVector ActorPosition; // 0x08(0x0c)
	struct FVector ActorVelocity; // 0x14(0x0c)
	struct FRotator ActorRotation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FVector> ReplicateBonePositionArray; // 0x30(0x10)
	float SeverTime; // 0x40(0x04)
	int32_t ServerFrame; // 0x44(0x04)
	float ClientTime; // 0x48(0x04)
	bool bFromServer; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FVector LagComActorPosition; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.GPPlayerBasicInfo
// Size: 0x28 (Inherited: 0x00)
struct FGPPlayerBasicInfo {
public:

	struct FString ID; // 0x00(0x10)
	int32_t Camp; // 0x10(0x04)
	int32_t Team; // 0x14(0x04)
	struct FString Name; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.HUDAdaptationRow
// Size: 0x30 (Inherited: 0x10)
struct FHUDAdaptationRow : public FDescRowBase {
public:

	struct FString PlatformName; // 0x10(0x10)
	struct FMargin SafeZoneMargin; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.HUDAdaptationSetting
// Size: 0x10 (Inherited: 0x00)
struct FHUDAdaptationSetting {
public:

	struct FMargin CustomSafeZoneMargin; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.MiscSetting
// Size: 0x8d0 (Inherited: 0x00)
struct FMiscSetting {
public:

	int32_t Version; // 0x00(0x04)
	char pad_4[0x1]; // 0x04(0x01)
	bool bFirstLoadConfig; // 0x05(0x01)
	bool bShowFPPSBtnLog; // 0x06(0x01)
	bool bHitFeedback; // 0x07(0x01)
	bool UseAvatarMergeMali; // 0x08(0x01)
	bool UseAvatarMergeOthers; // 0x09(0x01)
	bool bAutoRunCircle; // 0x0a(0x01)
	bool bKillMsgStyle; // 0x0b(0x01)
	bool bShowSystemInfoText; // 0x0c(0x01)
	bool bDisableOperationMode2; // 0x0d(0x01)
	bool bDisableCustomPanel; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct TArray<enum class EHandleMode> HandleMode; // 0x10(0x10)
	enum class ELeftHandFireMode LeftHandFireMode; // 0x20(0x01)
	enum class ESideShootMode SideShootMode; // 0x21(0x01)
	enum class ESideShootMethod SideShootMethod; // 0x22(0x01)
	bool bSideShootAim; // 0x23(0x01)
	bool bShowFPPSwitchBtn; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32_t FPPViewportDimensionMax; // 0x28(0x04)
	int32_t FPPViewportDimension; // 0x2c(0x04)
	bool bShowFacialAction; // 0x30(0x01)
	enum class EGyroMode GyroMode; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t MedicineLowThreshold; // 0x34(0x04)
	int32_t MedicineHighThresHold; // 0x38(0x04)
	enum class EOperationMode OperationMode; // 0x3c(0x01)
	bool bDisableOperationMode; // 0x3d(0x01)
	enum class EHudSubMode HudSubMode; // 0x3e(0x01)
	bool bDisableHudSubMode; // 0x3f(0x01)
	bool bMedicineSort; // 0x40(0x01)
	bool ObserveOption; // 0x41(0x01)
	bool bShowGuideMessage; // 0x42(0x01)
	bool bMiniMapRotation; // 0x43(0x01)
	bool bShowTeamateName; // 0x44(0x01)
	bool bShowTeamateIcon; // 0x45(0x01)
	bool bShowTeamateDistance; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
	int32_t MsgUITransparent; // 0x48(0x04)
	bool bGyroYReverse; // 0x4c(0x01)
	bool bGyroXReverse; // 0x4d(0x01)
	enum class ERightHandFireMode RightHandFireMode; // 0x4e(0x01)
	bool bShowBombZoneTip; // 0x4f(0x01)
	bool bShowPoisonZoneTip; // 0x50(0x01)
	bool bEnable3DTouch; // 0x51(0x01)
	bool bDisableEnable3DTouch; // 0x52(0x01)
	char pad_53[0x1]; // 0x53(0x01)
	int32_t _3DTouchSensitive; // 0x54(0x04)
	bool bDisable3DTouchSensitive; // 0x58(0x01)
	bool bEnableTopLeftFire; // 0x59(0x01)
	enum class EAimMethod AimMethod; // 0x5a(0x01)
	bool bUseRTTInBag; // 0x5b(0x01)
	bool bUIDisableUseRTTInBag; // 0x5c(0x01)
	bool bHadInited_UseRTTInBag; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	struct TArray<enum class EDeviceLevel> DeviceLevelForRTTInBag; // 0x60(0x10)
	bool bShowNearby; // 0x70(0x01)
	bool bShowArchive; // 0x71(0x01)
	bool bDisableBagRoleAvatar; // 0x72(0x01)
	bool bAndroidCorner; // 0x73(0x01)
	bool bAndroidCurve; // 0x74(0x01)
	bool bAndroidCornerCurve; // 0x75(0x01)
	bool bAndroidX; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
	uint32_t ChangeInGameSkinUIThreshold; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TMap<struct FString, struct FCustomPanelData> DefaultOperationMode_2; // 0x80(0x50)
	struct TMap<struct FString, struct FCustomPanelData> DefaultOperationMode_3; // 0xd0(0x50)
	struct TMap<struct FString, struct FCustomPanelData> DefaultOperationMode_4; // 0x120(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultIphoneXOffsetMode_2; // 0x170(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultIphoneXOffsetMode_3; // 0x1c0(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultIphoneXOffsetMode_4; // 0x210(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCornerOffsetMode1; // 0x260(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCornerOffsetMode2; // 0x2b0(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCornerOffsetMode3; // 0x300(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCurveOffsetMode1; // 0x350(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCurveOffsetMode2; // 0x3a0(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCurveOffsetMode3; // 0x3f0(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCCOffsetMode1; // 0x440(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCCOffsetMode2; // 0x490(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidCCOffsetMode3; // 0x4e0(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidXOffsetMode_2; // 0x530(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidXOffsetMode_3; // 0x580(0x50)
	struct TMap<struct FString, struct FVector2D> DefaultAndroidXOffsetMode_4; // 0x5d0(0x50)
	struct TMap<struct FString, struct FCustomPanelData> CustomOperationMode_2; // 0x620(0x50)
	struct TMap<struct FString, struct FCustomPanelData> CustomOperationMode_3; // 0x670(0x50)
	struct TMap<struct FString, struct FCustomPanelData> CustomOperationMode_4; // 0x6c0(0x50)
	struct TMap<struct FString, struct FCustomGridPanelData> CustomGridPanelData_2; // 0x710(0x50)
	struct TMap<struct FString, struct FCustomGridPanelData> CustomGridPanelData_3; // 0x760(0x50)
	struct TMap<struct FString, struct FCustomGridPanelData> CustomGridPanelData_4; // 0x7b0(0x50)
	struct FMargin CustomSafeZoneMargin; // 0x800(0x10)
	int32_t OperationNum; // 0x810(0x04)
	int32_t HUDFireNum; // 0x814(0x04)
	int32_t SubPlanNum; // 0x818(0x04)
	bool bUseNewScalabilityMode; // 0x81c(0x01)
	bool bAutoOpenDoor; // 0x81d(0x01)
	bool bEnableAutoOpenDoor; // 0x81e(0x01)
	bool bEnableMasterVolume; // 0x81f(0x01)
	float MasterVolume; // 0x820(0x04)
	bool bEnableSoundEffect; // 0x824(0x01)
	char pad_825[0x3]; // 0x825(0x03)
	float SoundEffectVolume; // 0x828(0x04)
	bool bEnableUISoundEffect; // 0x82c(0x01)
	char pad_82D[0x3]; // 0x82d(0x03)
	float UISoundEffectVolume; // 0x830(0x04)
	bool bEnableBGM; // 0x834(0x01)
	char pad_835[0x3]; // 0x835(0x03)
	float BGMVolume; // 0x838(0x04)
	bool bEnableTalkChannel; // 0x83c(0x01)
	bool bOnlyTalkToTeam; // 0x83d(0x01)
	bool bEnableMicrophone; // 0x83e(0x01)
	char pad_83F[0x1]; // 0x83f(0x01)
	float MicrophoneVolume; // 0x840(0x04)
	bool bEnableSpeaker; // 0x844(0x01)
	char pad_845[0x3]; // 0x845(0x03)
	float SpeakerVolume; // 0x848(0x04)
	bool bDisableUI_Record; // 0x84c(0x01)
	bool bNoDisturbing; // 0x84d(0x01)
	bool bEnableFunction_NoDisturbing; // 0x84e(0x01)
	bool bShowRenderQualityForTest; // 0x84f(0x01)
	bool bShowOperationMode_3; // 0x850(0x01)
	char pad_851[0x7]; // 0x851(0x07)
	struct FString LobbyMapName; // 0x858(0x10)
	struct FString LoginMapName; // 0x868(0x10)
	struct FString StartUpMapName; // 0x878(0x10)
	struct FString GuideMapUrl; // 0x888(0x10)
	bool bAlwaysNewPlayer; // 0x898(0x01)
	enum class EBeginerLevel DefaultBeginerLevel; // 0x899(0x01)
	enum class EScreenAdaptorMode ScreenAdaptor; // 0x89a(0x01)
	char pad_89B[0x5]; // 0x89b(0x05)
	struct FString Lb_System_RenderOption_Ultra_Text; // 0x8a0(0x10)
	struct TArray<struct FName> DisableFunctionList; // 0x8b0(0x10)
	bool bDisableGameHandleOpt; // 0x8c0(0x01)
	char pad_8C1[0x3]; // 0x8c1(0x03)
	float RebaseOriginDistance; // 0x8c4(0x04)
	float RebaseOriginZoomingDistance; // 0x8c8(0x04)
	char pad_8CC[0x4]; // 0x8cc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.CustomGridPanelData
// Size: 0x0c (Inherited: 0x00)
struct FCustomGridPanelData {
public:

	bool bVertical; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D Aligment; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.CustomPanelData
// Size: 0x10 (Inherited: 0x00)
struct FCustomPanelData {
public:

	struct FVector2D Position; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	float Alpha; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.VehicleRotationSensitivitySetting
// Size: 0x08 (Inherited: 0x00)
struct FVehicleRotationSensitivitySetting {
public:

	float NormalRotationSensitivity; // 0x00(0x04)
	float ZoomRotationSensitivity; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.SoftObjectLoader
// Size: 0x18 (Inherited: 0x00)
struct FSoftObjectLoader {
public:

	struct UObject* Asset; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.BattleFieldVehicleInfoRow
// Size: 0x60 (Inherited: 0x10)
struct FBattleFieldVehicleInfoRow : public FDescRowBase {
public:

	struct FText VehicleName; // 0x10(0x18)
	enum class EAnimVehicleType CarType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FSoftObjectPath SoftRefIcon; // 0x30(0x18)
	struct FSoftObjectPath SoftRefIconInMap; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.VehicleDataTableRow
// Size: 0xf8 (Inherited: 0x10)
struct FVehicleDataTableRow : public FDescRowBase {
public:

	int32_t VehicleId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText VehicleName; // 0x18(0x18)
	enum class EAnimVehicleType CarType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FText DeployShortDesc; // 0x38(0x18)
	enum class EVehicleDeployType DeployType; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	/*struct TSoftClassPtr<UObject>*/char VehicleClass[0x28]; // 0x58(0x28)
	int32_t LockType; // 0x80(0x04)
	int32_t EffectId; // 0x84(0x04)
	struct FName AudioKey; // 0x88(0x08)
	bool bIsClosedVehicle; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FSoftObjectPath SoftRefIcon; // 0x98(0x18)
	struct FSoftObjectPath SoftRefIconInMap; // 0xb0(0x18)
	bool bShowInEdgeWhenRedeploy; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct TArray<struct FTransform> AirDropSockets; // 0xd0(0x10)
	struct FSoftObjectPath KillBroadcastIconPath; // 0xe0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.UserDefineRotationSetting
// Size: 0x0c (Inherited: 0x00)
struct FUserDefineRotationSetting {
public:

	float FactorMin; // 0x00(0x04)
	float FactorMax; // 0x04(0x04)
	float FactorDivideNumber; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.RotationSensitivityCommonSetting
// Size: 0x80 (Inherited: 0x00)
struct FRotationSensitivityCommonSetting {
public:

	struct TArray<struct FText> DescArray; // 0x00(0x10)
	struct TArray<float> ZoomRateArray; // 0x10(0x10)
	float SensitivityFactor; // 0x20(0x04)
	float CustomSensitivityFactor; // 0x24(0x04)
	float HorizontalSensitivityFactor; // 0x28(0x04)
	float CustomHorizontalSensitivityFactor; // 0x2c(0x04)
	float VerticalSensitivityFactor; // 0x30(0x04)
	float CustomVerticalSensitivityFactor; // 0x34(0x04)
	struct TArray<float> ZoomratedMDVFactor; // 0x38(0x10)
	struct TArray<float> CustomZoomratedMDVFactor; // 0x48(0x10)
	float DefaultSensitity; // 0x58(0x04)
	float DefaultSensitivity_Custom; // 0x5c(0x04)
	struct TArray<float> RotationSensitityArray; // 0x60(0x10)
	struct TArray<float> RotationSensitivityArray_Custom; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.SystemSettingDescHD
// Size: 0x70 (Inherited: 0x00)
struct FSystemSettingDescHD {
public:

	enum class ESystemSettingDescTemplateHD Template; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Title; // 0x08(0x18)
	struct FText DescText; // 0x20(0x18)
	struct FSoftObjectPath DescImage; // 0x38(0x18)
	struct FString UIName2ID; // 0x50(0x10)
	struct TArray<struct FText> DescSubTextArr; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.RotationGyroScopeSetting
// Size: 0x0c (Inherited: 0x00)
struct FRotationGyroScopeSetting {
public:

	struct FUserDefineRotationSetting SensitivityDivideSetting; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.SpeedAccSensitivitySetting
// Size: 0x30 (Inherited: 0x00)
struct FSpeedAccSensitivitySetting {
public:

	struct FUserDefineRotationSetting SpeedAccSensitivityDivideSetting; // 0x00(0x0c)
	struct FUserDefineRotationSetting SpeedAccParamDivideSetting; // 0x0c(0x0c)
	float RotationSpeedAccelerationSensitivityDefault_Low; // 0x18(0x04)
	float RotationSpeedAccelerationSensitivityDefault_Middle; // 0x1c(0x04)
	float RotationSpeedAccelerationSensitivityDefault_High; // 0x20(0x04)
	float RotationSpeedAccelerationSensitivityDefault_Custom; // 0x24(0x04)
	struct UCurveFloat* RotationSpeedAccelerationPiecewiseFunctionCurve; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.FixedSpeedSensitivitySetting
// Size: 0x0c (Inherited: 0x00)
struct FFixedSpeedSensitivitySetting {
public:

	struct FUserDefineRotationSetting SensitivityDivideSetting; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.VehicleSensitivityOuterSetting
// Size: 0x90 (Inherited: 0x00)
struct FVehicleSensitivityOuterSetting {
public:

	struct FRotationSensitivityCommonSetting SensitivitySetting; // 0x00(0x80)
	struct FUserDefineRotationSetting SensitivityDivideSetting; // 0x80(0x0c)
	float BaseADSSensitivity; // 0x8c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.SystemSettingRowHD
// Size: 0x150 (Inherited: 0x10)
struct FSystemSettingRowHD : public FDescRowBase {
public:

	struct FString ExtraStringData; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
	enum class ESystemSettingInputTypeHD InputType; // 0x38(0x01)
	enum class ESystemSettingApplyMode ApplyMode; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	int32_t DefaultValue; // 0x3c(0x04)
	float DefaultValueFloat; // 0x40(0x04)
	int32_t DecimalPrecision; // 0x44(0x04)
	float Min; // 0x48(0x04)
	float Max; // 0x4c(0x04)
	struct TArray<struct FText> Options; // 0x50(0x10)
	struct TMap<int32_t, int32_t> SettingPfLevelMap; // 0x60(0x50)
	struct FSystemSettingDescHD Desc; // 0xb0(0x70)
	struct FText Prefix; // 0x120(0x18)
	struct FText Postfix; // 0x138(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.SensitivityOuterSetting
// Size: 0x150 (Inherited: 0x00)
struct FSensitivityOuterSetting {
public:

	struct FRotationSensitivityCommonSetting SensitivitySetting; // 0x00(0x80)
	struct FFixedSpeedSensitivitySetting FixedSpeedSensitivitySetting; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FSpeedAccSensitivitySetting SpeedAccSensitivitySetting; // 0x90(0x30)
	struct FRotationSensitivityCommonSetting GyroSensitivitySetting; // 0xc0(0x80)
	struct FRotationGyroScopeSetting GyroScopeSetting; // 0x140(0x0c)
	char pad_14C[0x4]; // 0x14c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGlobalDefines.VehicleSensitivitySetting
// Size: 0x750 (Inherited: 0x00)
struct FVehicleSensitivitySetting {
public:

	struct FVehicleSensitivityOuterSetting VehicleDriverFPPSensitivitySetting; // 0x00(0x90)
	struct FVehicleSensitivityOuterSetting VehicleDriverTPPSensitivitySetting; // 0x90(0x90)
	struct FVehicleSensitivityOuterSetting VehiclePassengerWeaponFPPSensitivitySetting; // 0x120(0x90)
	struct FVehicleSensitivityOuterSetting VehiclePassengerWeaponTPPSensitivitySetting; // 0x1b0(0x90)
	struct FVehicleSensitivityOuterSetting HelicopterDriverFPPSensitivitySetting; // 0x240(0x90)
	struct FVehicleSensitivityOuterSetting HelicopterDriverTPPSensitivitySetting; // 0x2d0(0x90)
	struct FVehicleSensitivityOuterSetting GyroVehicleDriverFPPSensitivitySetting; // 0x360(0x90)
	struct FVehicleSensitivityOuterSetting GyroVehicleDriverTPPSensitivitySetting; // 0x3f0(0x90)
	struct FVehicleSensitivityOuterSetting GyroVehiclePassengerWeaponFPPSensitivitySetting; // 0x480(0x90)
	struct FVehicleSensitivityOuterSetting GyroVehiclePassengerWeaponTPPSensitivitySetting; // 0x510(0x90)
	struct FVehicleSensitivityOuterSetting GyroHelicopterDriverFPPSensitivitySetting; // 0x5a0(0x90)
	struct FVehicleSensitivityOuterSetting GyroHelicopterDriverTPPSensitivitySetting; // 0x630(0x90)
	struct FVehicleSensitivityOuterSetting DefaultVehicleSensitivitySetting; // 0x6c0(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
