
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMGlobalDefines.EHoverNodeEffetApplyType
enum class EHoverNodeEffetApplyType : int {
	BindableParent = 0,
	DirectParent = 1,
	WidgetPath = 2,
	EHoverNodeEffetApplyType_MAX = 3
};

// Enum DFMGlobalDefines.ECommonHoverStyleMode
enum class ECommonHoverStyleMode : int {
	Visibility = 0,
	Animation = 1,
	ECommonHoverStyleMode_MAX = 2
};

// Enum DFMGlobalDefines.ECommonHoverExtMode
enum class ECommonHoverExtMode : int {
	HoverOnly = 0,
	HoverAndClick = 1,
	ECommonHoverExtMode_MAX = 2
};

// Enum DFMGlobalDefines.EIconState
enum class EIconState : int {
	None = 0,
	Loading = 1,
	Loaded = 2,
	EIconState_MAX = 3
};

// Enum DFMGlobalDefines.ESOLUIColorType
enum class ESOLUIColorType : int {
	None = 0,
	OpenEvacuationPoint = 1,
	DiscardedEvacuationPoint = 2,
	UntriggeredEventEvacuationPoint = 3,
	HighValue = 4,
	Boss = 5,
	QuestAndContract = 6,
	SecondaryInfo = 7,
	RandomEvacuationPoint = 8,
	POIProduct = 9,
	DeadBody = 10,
	BossCircle = 11,
	Sign = 12,
	TeammateSign = 13,
	Raid_ArriveOrInteract = 14,
	Raid_KillOrDestroy = 15,
	Raid_Protect = 16,
	Raid_AmmoBox = 17,
	Raid_RPG = 18,
	Raid_ValkyrieVehicle = 19,
	EventEvacuationNotOpen = 20,
	PlayerStart = 21,
	SupportPoint = 22,
	HighValue2 = 23,
	Zipline = 24,
	Helicopter = 25,
	QuestIsSeasonActivity = 26,
	PakMachineActive = 27,
	PakMachineInActive = 28,
	Adjutant = 29,
	CountDownReleaseTriggerActive = 30,
	CountDownReleaseTriggerInActive = 31,
	ESOLUIColorType_MAX = 32
};

// Enum DFMGlobalDefines.ESOLUIIconType
enum class ESOLUIIconType : int {
	None = 0,
	FixedEvacuationPoint = 1,
	RandomEvacuationPoint = 2,
	EventEvacuationPoint_Train = 3,
	EventEvacuationPoint_Rocket = 4,
	EventEvacuationPoint_Dam = 5,
	EventInteractor = 6,
	WeaponBlueprint = 7,
	HighValueBox = 8,
	Boss = 9,
	Contract = 10,
	ShopStation = 11,
	UnlockPoint = 12,
	ContractObjection = 13,
	KillPoint = 14,
	Sign = 15,
	POIProductMix = 16,
	TeammateSign = 17,
	Raid_ArriveOrInteract = 18,
	Raid_KillOrDestroy = 19,
	Raid_Protect = 20,
	Raid_AmmoBox = 21,
	Raid_RPG = 22,
	Raid_ValkyrieVehicle = 23,
	Quest = 24,
	EventEvacuationPoint_TrainNot = 25,
	EventEvacuationPoint_RocketNot = 26,
	EventEvacuationPoint_DamNot = 27,
	EventEvacuationPoint_OtherNot = 28,
	CountDown = 29,
	EvacuationPoint_Payment_Open = 30,
	EvacuationPoint_Payment_NotOpen = 31,
	EvacuationPoint_Together_Open = 32,
	EvacuationPoint_Together_NotOpen = 33,
	Ability_CQB = 34,
	Ability_Medic = 35,
	Ability_Gunner = 36,
	Ability_Sniper = 37,
	Ability_SuppressionMine = 38,
	Ability_CruiseMissile = 39,
	WeaponBlueprintStation = 40,
	PlayerStart = 41,
	Money = 42,
	SupportPoint = 43,
	WeaponBlueprintSendOut = 44,
	WeaponBlueprintNoCopy = 45,
	AlivePoint = 46,
	PlayerDir = 47,
	Defence = 48,
	Attack = 49,
	ProbeLight = 50,
	HighValueBox2 = 51,
	Zipline = 52,
	AIKillPoint = 53,
	HighValueContract = 54,
	Scouter = 55,
	IronGauze = 56,
	SelectedFrame = 57,
	TeamMateIndex0 = 58,
	TeamMateIndex1 = 59,
	TeamMateIndex2 = 60,
	Ability_Robot = 61,
	Ability_RebornFlag = 62,
	Vehicle_RebornFlag = 63,
	RankSkill_RebornFlag = 64,
	Ability_ADS = 65,
	PlayerDeathBG = 66,
	VehicleSupplyStation = 67,
	Helicopter = 68,
	PakMachine = 69,
	Adjutant = 70,
	CountDownReleaseTrigger = 71,
	FireRocketPC = 72,
	ESOLUIIconType_MAX = 73
};

// Enum DFMGlobalDefines.EHighValueBoxType
enum class EHighValueBoxType : int {
	Default = 0,
	BoxWithIntroEvent = 1,
	BoxWithOutIntroEvent = 2,
	EHighValueBoxType_MAX = 3
};

// Enum DFMGlobalDefines.EArchiveAscription
enum class EArchiveAscription : int {
	EArchiveAscription_None = 0,
	EArchiveAscription_Player = 1,
	EArchiveAscription_AI = 2,
	EArchiveAscription_Boss = 3,
	EArchiveAscription_MAX = 4
};

// Enum DFMGlobalDefines.EItemState
enum class EItemState : int {
	ItemState_None = 0,
	ItemState_Active = 1,
	ItemState_PreUsing = 2,
	ItemState_Consume = 3,
	ItemState_Using = 4,
	ItemState_ToDestroy = 5,
	ItemState_MAX = 6
};

// Enum DFMGlobalDefines.EAttachPosition
enum class EAttachPosition : int {
	Attach_None = 0,
	Attach_EquipmentStart = 1,
	Attach_Helmet = 2,
	Attach_Headset = 3,
	Attach_ArmedForceBaseProp = 4,
	Attach_Armband = 5,
	Attach_BreastPlate = 6,
	Attach_Glasses = 7,
	Attach_ChestHanging = 8,
	Attach_Bag = 9,
	Attach_SafeBox = 10,
	Attach_Shoe = 11,
	Attach_MainWeaponLeft = 12,
	Attach_MainWeaponRight = 13,
	Attach_MeleeWeapon = 14,
	Attach_PistolWeapon = 15,
	Attach_SecondaryWeapon = 16,
	Attach_ArmedForceProp1 = 17,
	Attach_KeyChain = 18,
	Attach_ArmedForceProp2 = 19,
	Attach_Character = 20,
	Attach_DogTag = 21,
	PVEMainWeaponLeft = 22,
	PVEMainWeaponRight = 23,
	Medical = 24,
	Archive = 25,
	Attach_SceneWeapon = 26,
	Attach_ClassMeleeEquipment = 27,
	Attach_ClassThrowableEquipment = 28,
	Attach_ClassConsumable = 29,
	Attach_PVEWeapon = 30,
	Attach_MissionMeleeEquipment = 31,
	Attach_BulletLeft = 32,
	Attach_BulletRight = 33,
	Attach_SkillWeaponSpecial = 34,
	Attach_SkillWeaponUltimate = 35,
	Attach_SkillWeaponActive = 36,
	Attach_SkillWeaponSupport = 37,
	Attach_SkillWeaponBattleFieldPropSkill = 38,
	Attach_SkillWeaponCustom2 = 39,
	Attach_SkillWeaponCustom3 = 40,
	Attach_MP_Begin = 41,
	Attach_MP_ArmedForceBaseProp = 42,
	Attach_MP_ArmedForceTDMProp = 43,
	Attach_MP_MainWeapon = 44,
	Attach_MP_SecondaryWeapon = 45,
	Attach_MP_MeleeWeapon = 46,
	Attach_MP_ArmedForceProp1 = 47,
	Attach_MP_ArmedForceProp2 = 48,
	Attach_MP_End = 49,
	Attach_EquipmentEnd = 50,
	Attach_Fashion = 51,
	Attach_AllNearby = 52,
	Attach_PickupBox = 53,
	Attach_LootTmp = 54,
	Attach_TmpPerk = 55,
	Attach_DeadbodyLootBox = 56,
	Attach_AbilityVehicle = 57,
	Attach_ContainerStart = 58,
	Attach_ChestHangingContainer = 59,
	Attach_BagContainer = 60,
	Attach_SafeBoxContainer = 61,
	Attach_KeyChainContainer = 62,
	Attach_ArchiveContainer = 63,
	Attach_Pocket = 64,
	Attach_BagSpaceContainer = 65,
	Attach_ContainerEnd = 66,
	Attach_CarrayItem = 67,
	Attach_Temp = 68,
	Attach_TempContainer = 69,
	Attach_Temp_FortificationHammer = 70,
	Attach_PVE_RPG = 71,
	EAttachPosition_MAX = 72
};

// Enum DFMGlobalDefines.EPickupContainerLootAudioType
enum class EPickupContainerLootAudioType : int {
	Common = 0,
	Glass = 1,
	Cloth = 2,
	Weapon = 3,
	Metal = 4,
	Device = 5,
	EPickupContainerLootAudioType_MAX = 6
};

// Enum DFMGlobalDefines.EInGameBattleClassType
enum class EInGameBattleClassType : int {
	BattleClassBegin = 0,
	CQB = 1,
	Medic = 2,
	Gunner = 3,
	Sniper = 4,
	BattleClassMax = 5,
	EInGameBattleClassType_MAX = 6
};

// Enum DFMGlobalDefines.EMapSignType
enum class EMapSignType : int {
	None = 0,
	Normal = 1,
	Chat_Normal = 2,
	Chat_Item = 3,
	PlayerExit = 4,
	PlayerExitTrigger = 5,
	Door = 6,
	Quest = 7,
	POI = 8,
	ShopStation = 9,
	HighValueBox = 10,
	ContractQuest = 11,
	ContractObjection = 12,
	WeaponBlueprintStation = 13,
	SectorAnchor = 14,
	Scouter = 15,
	IronGauze = 16,
	PakMachine = 17,
	CountDownReleaseTrigger = 18,
	Count = 19,
	EMapSignType_MAX = 20
};

// Enum DFMGlobalDefines.EFastEquipResult
enum class EFastEquipResult : int {
	EFastEquipResult_Success = 0,
	EFastEquipResult_UnknownError = 1,
	EFastEquipResult_NotEngouhSpace = 2,
	EFastEquipResult_NotEngouhSpaceAndDropItem = 3,
	EFastEquipResult_CantFastEquip = 4,
	EFastEquipResult_NotAllowedWhenReloading = 5,
	EFastEquipResult_MAX = 6
};

// Enum DFMGlobalDefines.EItemChangeType
enum class EItemChangeType : int {
	Delete = 0,
	Add = 1,
	Modified = 2,
	EItemChangeType_MAX = 3
};

// Enum DFMGlobalDefines.EGuideStage
enum class EGuideStage : int {
	LootingItem = 0,
	LootingAI = 1,
	ShootModeTips1 = 2,
	ShootModeTips2 = 3,
	SettingShootMode = 4,
	EGuideStage_MAX = 5
};

// Enum DFMGlobalDefines.EAILabBodyState
enum class EAILabBodyState : int {
	EBodyState_Stand = 0,
	EBodyState_Crouch = 1,
	EBodyState_Prone = 2,
	EBodyState_StandLeanLeft = 3,
	EBodyState_StandLeanRight = 4,
	EBodyState_CrouchLeanLeft = 5,
	EBodyState_CrouchLeanRight = 6,
	EBodyState_MAX = 7
};

// Enum DFMGlobalDefines.ECreateModelType
enum class ECreateModelType : int {
	EMod_MatchSecs = 0,
	EMod_KillBot = 1,
	EMod_KillPlayer = 2,
	EMod_KillAILab = 3,
	EMod_HitRate = 4,
	EMode_ExitDist = 5,
	EMode_TeamNum = 6,
	ECreateModelType_MAX = 7
};

// Enum DFMGlobalDefines.EAILabDiffcultType
enum class EAILabDiffcultType : int {
	EDiff_Hp = 0,
	EDiff_KillPlayer = 1,
	EDiff_KillHadson = 2,
	EDiff_Asset = 3,
	EDiff_MAX = 4
};

// Enum DFMGlobalDefines.EDropConditionType
enum class EDropConditionType : int {
	ECon_Normal = 0,
	ECon_DeadPlayer = 1,
	ECon_GameTime = 2,
	ECon_KillerLeftHp = 3,
	ECon_DeadPlayerRate = 4,
	ECon_KillerBloody = 5,
	ECon_KillerFracture = 6,
	ECon_MAX = 7
};

// Enum DFMGlobalDefines.EBreakthroughTextType
enum class EBreakthroughTextType : int {
	None = 0,
	CustomSameCampTextType = 1,
	CustomEnemyCampTextType = 2,
	CustomNeutralCampTextType = 3,
	EBreakthroughTextType_MAX = 4
};

// Enum DFMGlobalDefines.EBreakthroughUIIconType
enum class EBreakthroughUIIconType : int {
	None = 0,
	TransMarker_Helicopter = 1,
	TransMarker_Elevator = 2,
	TransMarker_Zipline = 3,
	TransMarker_SceneWeapon = 4,
	MarkerIcon_Offence = 5,
	MarkerIcon_Defence = 6,
	Icon_Hawk = 7,
	Icon_GTI = 8,
	Icon_Hawk_Topbar = 9,
	Icon_GTI_Topbar = 10,
	EBreakthroughUIIconType_MAX = 11
};

// Enum DFMGlobalDefines.EBreakthroughUIColorType
enum class EBreakthroughUIColorType : int {
	None = 0,
	CustomSameCampColor = 1,
	CustomEnemyCampColor = 2,
	CustomNeutralCampColor = 3,
	CustomSameTeamColor = 4,
	RippleSameCampColor = 5,
	RippleEnemyCampColor = 6,
	RippleNeutralCampColor = 7,
	TopBarFriendlyColor = 8,
	TopBarEnemyColor = 9,
	CustomSelfColor = 10,
	EBreakthroughUIColorType_MAX = 11
};

// Enum DFMGlobalDefines.ECarrayItemsType
enum class ECarrayItemsType : int {
	None = 0,
	Health = 1,
	Armor = 2,
	Telescope = 3,
	ECarrayItemsType_MAX = 4
};

// Enum DFMGlobalDefines.ECharacterTag
enum class ECharacterTag : int {
	Unknown = 0,
	Hero = 1,
	AI = 2,
	NPC = 3,
	ECharacterTag_MAX = 4
};

// Enum DFMGlobalDefines.ECharacterAvatarSex
enum class ECharacterAvatarSex : int {
	Male = 0,
	Female = 1,
	ECharacterAvatarSex_MAX = 2
};

// Enum DFMGlobalDefines.EMergablePart
enum class EMergablePart : int {
	Upper = 0,
	Lower = 1,
	Head = 2,
	BreastPlate = 3,
	ChestHang = 4,
	Bag = 5,
	Helmet = 6,
	ExtraPart = 7,
	EMergablePart_MAX = 8
};

// Enum DFMGlobalDefines.ECharacterAvatarExtraTag
enum class ECharacterAvatarExtraTag : int {
	ExtraItem = 0,
	SkillItem = 1,
	ECharacterAvatarExtraTag_MAX = 2
};

// Enum DFMGlobalDefines.ECharacterAvatarPartConfig
enum class ECharacterAvatarPartConfig : int {
	Upper = 0,
	Hair = 1,
	HairAdaptive = 2,
	Head = 3,
	Lower = 4,
	ECharacterAvatarPartConfig_MAX = 5
};

// Enum DFMGlobalDefines.ECharacterAvatarPart
enum class ECharacterAvatarPart : int {
	Hair = 0,
	Head = 1,
	Upper = 2,
	Lower = 3,
	Extra = 4,
	HairAdaptive = 5,
	MasterMesh = 6,
	Equipment = 7,
	Watch = 8,
	None = 9,
	ECharacterAvatarPart_MAX = 10
};

// Enum DFMGlobalDefines.ELoadLevelOption
enum class ELoadLevelOption : int {
	None = 0,
	Single = 1,
	Multiple = 2,
	ELoadLevelOption_MAX = 3
};

// Enum DFMGlobalDefines.EMeshType
enum class EMeshType : int {
	None = 0,
	FPP = 1,
	TPP = 2,
	UI = 3,
	EMeshType_MAX = 4
};

// Enum DFMGlobalDefines.ECustomTransformRule
enum class ECustomTransformRule : int {
	None = 0,
	Absolute = 1,
	Relative = 2,
	ECustomTransformRule_MAX = 3
};

// Enum DFMGlobalDefines.EVoiceType
enum class EVoiceType : int {
	None = 0,
	Lines = 1,
	KillaLines = 2,
	EVoiceType_MAX = 3
};

// Enum DFMGlobalDefines.ECharacterFeatureLODAvatarPart
enum class ECharacterFeatureLODAvatarPart : int {
	None = 0,
	Trunk = 1,
	Hair = 2,
	Equipment = 3,
	ExtraItem = 4,
	ExtraSkillItem = 5,
	Watch = 6,
	ECharacterFeatureLODAvatarPart_MAX = 7
};

// Enum DFMGlobalDefines.ECharacterSpeakType
enum class ECharacterSpeakType : int {
	NONE = 0,
	USUAL_NO_THREAT = 1,
	ALERT_BEGIN = 2,
	ALERT_HEARD_SMALL_SOUND = 3,
	ALERT_HEARD_SOUND = 4,
	ALERT_Frightened = 5,
	ALERT_HIDING = 6,
	ALERT_SEARCHING = 7,
	ALERT_BACK = 8,
	BATTLE_BEGIN = 9,
	BATTLE_START_FIGHT = 10,
	BATTLE_HIDING = 11,
	BATTLE_COME_CLOSE = 12,
	BATTLE_AIRHIT = 13,
	BATTLE_SEE_ENEMY = 14,
	BATTLE_LOSE_ENEMY_SIGHT = 15,
	BATTLE_IN_COVER = 16,
	BATTLE_HIT_ENEMY = 17,
	BATTLE_KILL_ENEMY = 18,
	COMING_GRENADE = 19,
	BATTLE_THROW_GRENADE = 20,
	BATTLE_ChangeClip = 21,
	STATE_BEGIN = 22,
	STATE_BLEEDING = 23,
	STATE_GOT_HURTED_HEAVY = 24,
	STATE_HIT_BONE_BROKEN = 25,
	STATE_LEG_BONE_BROKEN = 26,
	STATE_ARM_BONE_BROKEN = 27,
	STATE_DEATH = 28,
	STATE_PAIN = 29,
	STATE_EATFULL = 30,
	STATE_SPICY = 31,
	STATE_DRUNK = 32,
	BEATTACK_BEGIN = 33,
	BEATTACK_HEAD = 34,
	BEATTACK_BODY = 35,
	BEATTACK_BEHIT = 36,
	FPP_ONLY_BEGIN = 37,
	FPP_GOT_HIT = 38,
	BOSS_ONLY_BEGIN = 39,
	BOSS_Reis_ROAR = 40,
	BOSS_Maurice_Flame = 41,
	BOSS_Maurice_Smoke = 42,
	BOSS_Maurice_Bomb = 43,
	BOSS_Maurice_Pivot = 44,
	BOSS_Maurice_Roll = 45,
	BOSS_Maurice_Slide = 46,
	BOSS_Romytheus_StartWalk = 47,
	BOSS_Romytheus_EndWalk = 48,
	BOSS_Romytheus_PlayerLeave = 49,
	MAX = 50
};

// Enum DFMGlobalDefines.EMeritObtainType
enum class EMeritObtainType : int {
	HitTarget = 0,
	HeadShot = 1,
	Assist = 2,
	BasicKill = 3,
	ContinueKillBegin = 4,
	ContinueKillTwo = 5,
	ContinueKillEnd = 6,
	LongDistanceKill = 7,
	ShortDistanceKill = 8,
	EMeritObtainType_MAX = 9
};

// Enum DFMGlobalDefines.EBeHitedType
enum class EBeHitedType : int {
	None = 0,
	HitBody = 1,
	HitBodyWithArmor = 2,
	HitBodyWithArmorAndDamageHp = 3,
	HitHeadWithoutHelmet = 4,
	HitHelmet = 5,
	HitHelmetAndDamageHp = 6,
	HitHelmetBroken = 7,
	HitArmorBroken = 8,
	HitLowHealth = 9,
	HitBulletWhoosh = 10,
	HitBulletHitAround = 11,
	HitSuppressByBullet = 12,
	KnockDownByHitBody = 13,
	KnockDownByHitHead = 14,
	KilledByHitBody = 15,
	KilledByHitHead = 16,
	Shocked = 17,
	HitVehicle = 18,
	KillVehicle = 19,
	BreakthroughRankSkillHit = 20,
	HitShield = 21,
	HitHeavyArmor = 22,
	Stagger = 23,
	EBeHitedType_MAX = 24
};

// Enum DFMGlobalDefines.EItemHealthBuffTriggerType
enum class EItemHealthBuffTriggerType : int {
	OnFirstPeriod = 0,
	Period = 1,
	OnFinalPeriod = 2,
	EItemHealthBuffTriggerType_MAX = 3
};

// Enum DFMGlobalDefines.EItemHealthTriggerType
enum class EItemHealthTriggerType : int {
	OnFinish = 0,
	Period = 1,
	EItemHealthTriggerType_MAX = 2
};

// Enum DFMGlobalDefines.EItemHealthSubType
enum class EItemHealthSubType : int {
	None = 0,
	Painkiller = 1,
	OperationKits = 2,
	HP = 3,
	BodyArmor = 4,
	HelmetArmor = 5,
	Needle = 6,
	EItemHealthSubType_MAX = 7
};

// Enum DFMGlobalDefines.EItemHealthRecommendType
enum class EItemHealthRecommendType : int {
	None = 0,
	HealthRange01 = 1,
	HealthRange02 = 2,
	HealthRange03 = 3,
	Low_Health = 4,
	HealthInjured = 5,
	Low_Armor = 6,
	Low_HelmetArmor = 7,
	Part_Injured = 8,
	EItemHealthRecommendType_MAX = 9
};

// Enum DFMGlobalDefines.EItemUseActionLimit
enum class EItemUseActionLimit : int {
	None = 0,
	NoCrouch = 1,
	NoProne = 2,
	EItemUseActionLimit_MAX = 3
};

// Enum DFMGlobalDefines.EItemUseFunction
enum class EItemUseFunction : int {
	None = 0,
	Normal = 1,
	HoldAndUse = 2,
	Skill = 3,
	EItemUseFunction_MAX = 4
};

// Enum DFMGlobalDefines.EBuffTarget
enum class EBuffTarget : int {
	ENone = 0,
	ECharacter = 1,
	EWeapon = 2,
	ECharacterAndWeapon = 3,
	EBuffTarget_MAX = 4
};

// Enum DFMGlobalDefines.EItemSlotType
enum class EItemSlotType : int {
	None = 0,
	Minimal = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	EItemSlotType_MAX = 5
};

// Enum DFMGlobalDefines.EPropItemType
enum class EPropItemType : int {
	Sub_Prop_Default = 0,
	Sub_Prop_Energy = 1,
	Sub_Prop_Health = 2,
	Sub_Prop_Buff = 3,
	Sub_Prop_Gasoline = 4,
	Sub_Prop_PickupConsume = 5,
	Sub_Prop_MAX = 6
};

// Enum DFMGlobalDefines.EApparelItemType
enum class EApparelItemType : int {
	None = 0,
	AS_Apparel = 1,
	AS_Hat = 2,
	AS_Glasses = 3,
	AS_UpShirt = 4,
	AS_Pants = 5,
	AS_Shoes = 6,
	AS_Ghillie = 7,
	AS_Head = 8,
	AS_FullBody = 9,
	MAX = 10
};

// Enum DFMGlobalDefines.EItemUserType
enum class EItemUserType : int {
	Item_Default = 0,
	Item_Avatar = 1,
	Item_Weapon = 2,
	Item_Adapter = 3,
	Item_Ammo = 4,
	Item_Equip = 5,
	Item_Props = 6,
	Item_Apparel = 7,
	Item_Ability = 8,
	Item_MAX = 9
};

// Enum DFMGlobalDefines.EEquipmentSubType
enum class EEquipmentSubType : int {
	EquipmentSubType_None = 0,
	EquipmentSubType_Helmet = 1,
	EquipmentSubType_HeadSet = 2,
	EquipmentSubType_FaceMask = 3,
	EquipmentSubType_BreastPlate = 4,
	EquipmentSubType_Glasses = 5,
	EquipmentSubType_ChestHanging = 6,
	EquipmentSubType_Bag = 7,
	EquipmentSubType_MAX = 8
};

// Enum DFMGlobalDefines.EAdaptationCharacterType
enum class EAdaptationCharacterType : int {
	EMale = 0,
	EFemale = 1,
	EAdaptationCharacterType_MAX = 2
};

// Enum DFMGlobalDefines.EHelmetSubType
enum class EHelmetSubType : int {
	EHelmetSubType_Normal = 0,
	EHelmetSubType_MAX = 1
};

// Enum DFMGlobalDefines.EBreastPlateSubType
enum class EBreastPlateSubType : int {
	EBreastPlateSubType_Normal = 0,
	EBreastPlateSubType_MAX = 1
};

// Enum DFMGlobalDefines.EChestHangingSubType
enum class EChestHangingSubType : int {
	EChestHangingSubType_Normal = 0,
	EChestHangingSubType_MAX = 1
};

// Enum DFMGlobalDefines.EBagSubType
enum class EBagSubType : int {
	EBagSubType_BackPack = 0,
	EBagSubType_MessengerBag = 1,
	EBagSubType_MAX = 2
};

// Enum DFMGlobalDefines.ECurrencyBindType
enum class ECurrencyBindType : int {
	None = 0,
	Unbind = 1,
	Bind = 2,
	BindAndUnbind = 3,
	ECurrencyBindType_MAX = 4
};

// Enum DFMGlobalDefines.ECurrencyType
enum class ECurrencyType : int {
	None = 0,
	Timeless = 1,
	Play = 2,
	Temporary = 3,
	ECurrencyType_MAX = 4
};

// Enum DFMGlobalDefines.ECustomerServicesDisplayType
enum class ECustomerServicesDisplayType : int {
	Invalid = 0,
	Inside_Webview = 1,
	Outside_Webview = 2,
	ECustomerServicesDisplayType_MAX = 3
};

// Enum DFMGlobalDefines.ECustomerServicesPlatformType
enum class ECustomerServicesPlatformType : int {
	Invalid = 0,
	Windows = 1,
	Android = 2,
	iOS = 3,
	ECustomerServicesPlatformType_MAX = 4
};

// Enum DFMGlobalDefines.ECustomerServicesEntranceType
enum class ECustomerServicesEntranceType : int {
	InvalidPage = 0,
	LoginPage = 1,
	MainPage = 2,
	ActivityPage = 3,
	RechargePage = 4,
	SettingPage = 5,
	ESCPage = 6,
	ECustomerServicesEntranceType_MAX = 7
};

// Enum DFMGlobalDefines.EMediaPlayMode
enum class EMediaPlayMode : int {
	ONLY_ONE = 0,
	MEDIALIST = 1,
	EMediaPlayMode_MAX = 2
};

// Enum DFMGlobalDefines.EPermissionPlatformType
enum class EPermissionPlatformType : int {
	Invalid = 0,
	Android = 1,
	iOS = 2,
	EPermissionPlatformType_MAX = 3
};

// Enum DFMGlobalDefines.EDropItemType
enum class EDropItemType : int {
	DropHelmet = 0,
	DropArmor = 1,
	DropWeapon = 2,
	DropConsume = 3,
	EDropItemType_MAX = 4
};

// Enum DFMGlobalDefines.EDropSource
enum class EDropSource : int {
	LootPoint = 0,
	AI_Drop = 1,
	EDropSource_MAX = 2
};

// Enum DFMGlobalDefines.EEquipmentCheckSlotType
enum class EEquipmentCheckSlotType : int {
	None = 0,
	EAttrBuffType_Bleeding = 1,
	EAttrBuffType_Fracture = 2,
	EAttrBuffType_Pain = 3,
	Helmet = 4,
	BreastPlate = 5,
	Bag = 6,
	MainWeaponLeft = 7,
	SecondaryWeapon = 8,
	Medicine = 9,
	EEquipmentCheckSlotType_MAX = 10
};

// Enum DFMGlobalDefines.EEquipmentPanelType
enum class EEquipmentPanelType : int {
	MainCheckBoxPanel = 0,
	RecommendSwitchPanel = 1,
	ReservedSpaceSwitchPanel = 2,
	RemainItemsSWitchPanel = 3,
	DeBufCheckBoxPanel = 4,
	HelmetSliderPanel = 5,
	BreastPlateSliderPanel = 6,
	BagSliderPanel = 7,
	MedicineSliderPanel = 8,
	EEquipmentPanelType_MAX = 9
};

// Enum DFMGlobalDefines.EFashionWearPosition
enum class EFashionWearPosition : int {
	None = 0,
	Head = 1,
	Face = 2,
	Eyes = 3,
	Ears = 4,
	Neck = 5,
	Shoulders = 6,
	Upper = 7,
	Lower = 8,
	Bag = 9,
	BagBadge = 10,
	BagPendant = 11,
	EFashionWearPosition_MAX = 12
};

// Enum DFMGlobalDefines.EDamageShowType
enum class EDamageShowType : int {
	ENone = 0,
	EBluntDamge = 1,
	ENormalDamage = 2,
	ECritDamage = 3,
	EDamageShowType_MAX = 4
};

// Enum DFMGlobalDefines.EGamePlayerNumModeType
enum class EGamePlayerNumModeType : int {
	Unknown = 0,
	Single = 1,
	Double = 2,
	Triple = 3,
	Quadruple = 4,
	EGamePlayerNumModeType_MAX = 5
};

// Enum DFMGlobalDefines.EGameSubModeType
enum class EGameSubModeType : int {
	Unknown = 0,
	SOL_PMC = 1,
	SOL_SCAV = 2,
	SOL_SOL = 3,
	PVE_Easy = 4,
	PVE_Normal = 5,
	PVE_Diffcult = 6,
	PVE_RealWar = 7,
	BW_LEVEL1 = 8,
	BW_LEVEL2 = 9,
	BW_LEVEL3 = 10,
	BW_LEVEL4 = 11,
	TDM_LEVEL1 = 12,
	TDM_LEVEL2 = 13,
	TDM_LEVEL3 = 14,
	TDM_LEVEL4 = 15,
	TDM_LEVEL5 = 16,
	EGameSubModeType_MAX = 17
};

// Enum DFMGlobalDefines.EGameMainModeType
enum class EGameMainModeType : int {
	Unknown = 0,
	SOL = 1,
	PVE = 2,
	BigWorld = 3,
	TDM = 4,
	EGameMainModeType_MAX = 5
};

// Enum DFMGlobalDefines.EItemFlowType
enum class EItemFlowType : int {
	Default = 0,
	Other = 1,
	SceneBox = 2,
	SubPickup = 3,
	LabAI = 4,
	BotAI = 5,
	Player = 6,
	Quest = 7,
	HackPC = 8,
	DecipherDevice = 9,
	RaidAmmoBox = 10,
	EItemFlowType_MAX = 11
};

// Enum DFMGlobalDefines.EContainerInteractResult
enum class EContainerInteractResult : int {
	None = 0,
	Failed_KeyRoom_NotKeyMan = 1,
	Failed_OtherPlayerIsLooting = 2,
	Success = 3,
	EContainerInteractResult_MAX = 4
};

// Enum DFMGlobalDefines.EUseItemAnimType
enum class EUseItemAnimType : int {
	FullAnim = 0,
	PreUseAnim = 1,
	UsingAnim = 2,
	AfterUseAnim = 3,
	Holding = 4,
	EUseItemAnimType_MAX = 5
};

// Enum DFMGlobalDefines.EPropAnimEvent
enum class EPropAnimEvent : int {
	EPropAnimEvent_PreUseItem = 0,
	EPropAnimEvent_StopPreUsingItem = 1,
	EPropAnimEvent_PreUseThrowableItem = 2,
	EPropAnimEvent_ThrowItem = 3,
	EPropAnimEvent_MAX = 4
};

// Enum DFMGlobalDefines.ESuitableSpaceChecker
enum class ESuitableSpaceChecker : int {
	SuitableSpaceChecker_All = 0,
	SuitableSpaceChecker_Equipment = 1,
	SuitableSpaceChecker_Container = 2,
	SuitableSpaceChecker_MAX = 3
};

// Enum DFMGlobalDefines.ELootLimitType
enum class ELootLimitType : int {
	ELootLimitType_Both = 0,
	ELootLimitType_OnlySource = 1,
	ELootLimitType_OnlyTarget = 2,
	ELootLimitType_None = 3,
	ELootLimitType_MAX = 4
};

// Enum DFMGlobalDefines.ELootObjType
enum class ELootObjType : int {
	ELootObjType_None = 0,
	ELootObjType_InventoryMgr = 1,
	ELootObjType_ScenePickup = 2,
	ELootObjType_SceneContainer = 3,
	ELootObjType_OpenBox = 4,
	ELootObjType_DeadBody = 5,
	ELootObjType_MAX = 6
};

// Enum DFMGlobalDefines.EPlayerLootingState
enum class EPlayerLootingState : int {
	EPlayerLootingState_None = 0,
	EPlayerLootingState_InSearching = 1,
	EPlayerLootingState_Looting = 2,
	EPlayerLootingState_ViewBag = 3,
	EPlayerLootingState_MAX = 4
};

// Enum DFMGlobalDefines.EPreUseAnimType
enum class EPreUseAnimType : int {
	PreUseAnimType_None = 0,
	PreUseAnimType_RedBull = 1,
	PreUseAnimType_PainKiller = 2,
	PreUseAnimType_AidKit = 3,
	PreUseAnimType_Bandage = 4,
	PreUseAnimType_MedKit = 5,
	PreUseAnimType_Adrenaline = 6,
	PreUseAnimType_CMS = 7,
	PreUseAnimType_Splint = 8,
	PreUseAnimType_Augmentin = 9,
	PreUseAnimType_BearMedKit = 10,
	PreUseAnimType_MAX = 11
};

// Enum DFMGlobalDefines.EItemUseCondition
enum class EItemUseCondition : int {
	ItemUseCondition_None = 0,
	ItemUseCondition_OK = 1,
	ItemUseCondition_Cooldowning = 2,
	ItemUseCondition_AlreadyUsed = 3,
	ItemUseCondition_NotInitiativeUsable = 4,
	ItemUseCondition_OtherReason = 5,
	ItemUseCondition_MaxHeath = 6,
	ItemUseCondition_VehicleSpeed = 7,
	ItemUseCondition_VehicleFuel = 8,
	ItemUseCondition_Move = 9,
	ItemUseCondition_LeanOut = 10,
	ItemUseCondition_Swim = 11,
	ItemUseCondition_OutVehice = 12,
	ItemUseCondition_Vault = 13,
	ItemUseCondition_Climb = 14,
	ItemUseCondition_TransitionAnim = 15,
	ItemUseCondition_NoNeedToUse = 16,
	ItemUseCondition_MaxArmor = 17,
	ItemUseCondition_MaxHelmetArmorValue = 18,
	ItemUseCondition_ArmorLowDurability = 19,
	ItemUseCondition_ArmorRepairDisable = 20,
	ItemUseCondition_UnsupportedArmorType = 21,
	NoArmor = 22,
	NoHelmet = 23,
	HealthStateGood = 24,
	NoBleeding = 25,
	NoFracture = 26,
	NotEnoughDurability = 27,
	NotEnoughDurabilityToCureBody = 28,
	ItemIsBeingUsed = 29,
	CharacterCantUse = 30,
	Burden = 31,
	TargetWeaponNotFound = 32,
	TargetWeaponNotMatch = 33,
	UnequipAmmoSpaceNotEngouht = 34,
	EItemUseCondition_MAX = 35
};

// Enum DFMGlobalDefines.EUseItemAddBuffFunctionType
enum class EUseItemAddBuffFunctionType : int {
	None = 0,
	Bleeding = 1,
	EUseItemAddBuffFunctionType_MAX = 2
};

// Enum DFMGlobalDefines.EUseItemFunctionType
enum class EUseItemFunctionType : int {
	None = 0,
	HP = 1,
	BodyArmor = 2,
	HelmetArmor = 3,
	Health = 4,
	BUFF = 5,
	Bleeding = 6,
	Fracture = 7,
	PartHealth = 8,
	EUseItemFunctionType_MAX = 9
};

// Enum DFMGlobalDefines.ERealItemSource
enum class ERealItemSource : int {
	None = 0,
	PlayerSelf = 1,
	PlayerTeammate = 2,
	PlayerEnemy = 3,
	Pickup = 4,
	NormalAI = 5,
	LabAI = 6,
	SceneBox = 7,
	Other = 8,
	ERealItemSource_MAX = 9
};

// Enum DFMGlobalDefines.ERawItemSource
enum class ERawItemSource : int {
	None = 0,
	Player = 1,
	Pickup = 2,
	NormalAI = 3,
	LabAI = 4,
	SceneBox = 5,
	Other = 6,
	ERawItemSource_MAX = 7
};

// Enum DFMGlobalDefines.EItemBindTypeForSettlement
enum class EItemBindTypeForSettlement : int {
	BindingBinded = 0,
	BindingNotBind = 1,
	BindingTeammateBinded = 2,
	BindingTeammateNotBinded = 3,
	EItemBindTypeForSettlement_MAX = 4
};

// Enum DFMGlobalDefines.EItemBindType
enum class EItemBindType : int {
	BindingBinded = 0,
	BindingNotBind = 1,
	BindingTeammate = 2,
	EItemBindType_MAX = 3
};

// Enum DFMGlobalDefines.EItemViewStyleType
enum class EItemViewStyleType : int {
	ItemViewStyleType_Default = 0,
	ItemViewStyleType_Large = 1,
	ItemViewStyleType_Small = 2,
	ItemViewStyleType_Special = 3,
	ItemViewStyleType_MAX = 4
};

// Enum DFMGlobalDefines.ELineOrientation
enum class ELineOrientation : int {
	HORIZONTAL = 0,
	VERTICAL = 1,
	ELineOrientation_MAX = 2
};

// Enum DFMGlobalDefines.EMapInstancedIconLayerType
enum class EMapInstancedIconLayerType : int {
	Base = 0,
	TeamMate = 1,
	LocalPlayer = 2,
	UnderBase = 3,
	EMapInstancedIconLayerType_MAX = 4
};

// Enum DFMGlobalDefines.EMapIconSizeType
enum class EMapIconSizeType : int {
	None = 0,
	BigIcon = 1,
	MiniIcon = 2,
	XSIcon = 3,
	BigIcon_Breakthrough = 4,
	BF_Vehicle = 5,
	BF_SceneWeapon = 6,
	EMapIconSizeType_MAX = 7
};

// Enum DFMGlobalDefines.EMapPlayerIconState
enum class EMapPlayerIconState : int {
	Normal = 0,
	ImpendingDeath = 1,
	Dead = 2,
	Offline = 3,
	Escaped = 4,
	Driving = 5,
	InGlitchVolume = 6,
	Count = 7,
	EMapPlayerIconState_MAX = 8
};

// Enum DFMGlobalDefines.EDFMMapIconType
enum class EDFMMapIconType : int {
	None = 0,
	Mission = 1,
	SOL_WeaponBlueprint = 2,
	SOL_Player = 3,
	Timeline_Shelling = 4,
	SOL_CommonRange = 5,
	SOL_PlayerDeath = 6,
	SOLEvent_Train_Locomotive = 7,
	SOLEvent_Train_Car = 8,
	SOLEvent_Train_Station = 9,
	SOLEvent_Train_Railway = 10,
	SOLEvacuation_HackPoint = 11,
	SOLEvacuation_PlayerExit = 12,
	AmmoBox = 13,
	SceneWeapon = 14,
	SOL_WeaponBlueprintStation = 15,
	PlayerSignLine = 16,
	POILocationName = 17,
	SOL_PlayerExit = 18,
	SOL_Contract = 19,
	SOL_Door = 20,
	SOL_Quest = 21,
	SOL_QuestRange = 22,
	SOL_DeadBody = 23,
	BattleField_CapturePoint = 24,
	BattleField_Marker = 25,
	BattleField_Camp = 26,
	AblityDetector = 27,
	MotionDetector = 28,
	Vehicle = 29,
	QA_Marker = 30,
	SOL_Enemy = 31,
	SOL_TeammatePlayer = 32,
	Breakthrough_SectorAnchor = 33,
	Common_Enemy = 34,
	Raid_MissionTarget = 35,
	Raid_CustomizeTarget = 36,
	Raid_Enemy = 37,
	SOL_EventMaker = 38,
	SOL_WishItemMaker = 39,
	SOL_ShopStation = 40,
	SOL_POIProduct = 41,
	SOL_BossLocation = 42,
	SOL_HighValueBox = 43,
	SOL_ContractObjection = 44,
	AILab_Character = 45,
	Breakthrough_SplineArea = 46,
	AbilityRobot = 47,
	AbilitySuppressionMine = 48,
	AbilityCruiseMissile = 49,
	BattleField_Player = 50,
	BattleField_TeammatePlayer = 51,
	BattleField_PlayerDeath = 52,
	Breakthrough_SectorAnchorSplineArea = 53,
	Breakthrough_MaskSplineArea = 54,
	SOL_TeamMateSignOptimize = 55,
	Breakthrough_SupportIcon = 56,
	SOL_PlayerStart = 57,
	SOLEvent_Intro = 58,
	Breakthrough_SupportPoint = 59,
	PlayerMarkingItem = 60,
	PlayerMarkingLocation = 61,
	Player2SignLine = 62,
	SOL_Zipline = 63,
	SOLEvent_Train_HighValueBox = 64,
	SOL_FloorVolume = 65,
	SOL_Interactor_Scouter = 66,
	SOL_Interactor_IronGauze = 67,
	PlayerMarkingUnitActor = 68,
	SOL_BigMapFloorVolume = 69,
	AbilityRebornFlag = 70,
	SOL_OB_Camera = 71,
	SOL_OB_Player = 72,
	AbilityADS = 73,
	SOL_Helicopter = 74,
	PakMachine = 75,
	SOL_AdjutantLocation = 76,
	MiniMapPOILocationName = 77,
	CountDownReleaseTrigger = 78,
	Count = 79,
	EDFMMapIconType_MAX = 80
};

// Enum DFMGlobalDefines.EMapFloorType
enum class EMapFloorType : int {
	None = 0,
	Layer1 = 1,
	Layer2 = 2,
	Layer3 = 3,
	Layer4 = 4,
	Layer5 = 5,
	Layer6 = 6,
	Layer7 = 7,
	Layer8 = 8,
	Layer9 = 9,
	Layer10 = 10,
	EMapFloorType_MAX = 11
};

// Enum DFMGlobalDefines.ESeamlessEnterOperateType
enum class ESeamlessEnterOperateType : int {
	None = 0,
	TutorialHUD = 1,
	NormalHUD = 2,
	TutorialClick = 3,
	QuestPanel = 4,
	PlayerExit = 5,
	BlueprintPlunder = 6,
	BlueprintDevice = 7,
	Contract = 8,
	Quest = 9,
	Other = 10,
	SeamlessEnterStage_GetOn = 11,
	SeamlessEnterStage_PadShow = 12,
	SeamlessEnterStage_InteractionMap = 13,
	SeamlessEnterStage_ConnectDS = 14,
	SeamlessEnterStage_ConnectDSSuccess = 15,
	SeamlessEnterStage_LevelStreaming = 16,
	SeamlessEnterStage_LevelStreamingSuccess = 17,
	SeamlessEnterStage_HUDPreload = 18,
	SeamlessEnterStage_HUDPreloadSuccess = 19,
	SeamlessEnterStage_AllPlayerReady = 20,
	SeamlessEnterStage_Abseil = 21,
	SeamlessEnterStage_AbseilSuccess = 22,
	SeamlessEnterStage_Finish = 23,
	SeamlessEnterStage_Fail = 24,
	Max = 25
};

// Enum DFMGlobalDefines.EBigMapOperateType
enum class EBigMapOperateType : int {
	OpenBigMap = 0,
	CloseBigMap = 1,
	MarkEvacuationPoint = 2,
	MarkMapSign = 3,
	MarkBlueprintPlunder = 4,
	MarkContract = 5,
	SwitchInfoBtn_SupplyStation = 6,
	SwitchInfoBtn_UnlockPoint = 7,
	SwitchInfoBtn_Boss = 8,
	SwitchInfoBtn_POI = 9,
	UseQuestList = 10,
	UseWishList = 11,
	UseContractList = 12,
	UseSeasonQuestList = 13,
	EBigMapOperateType_MAX = 14
};

// Enum DFMGlobalDefines.EMapSignExtraSyncType
enum class EMapSignExtraSyncType : int {
	None = 0,
	Delete = 1,
	Location = 2,
	Icon = 3,
	MAX = 4
};

// Enum DFMGlobalDefines.ESafeHouseIconGroundType
enum class ESafeHouseIconGroundType : int {
	All = 0,
	Underground = 1,
	Overground = 2,
	ESafeHouseIconGroundType_MAX = 3
};

// Enum DFMGlobalDefines.ESafeHouseIconMapType
enum class ESafeHouseIconMapType : int {
	All = 0,
	MiniMap = 1,
	BigMap = 2,
	ESafeHouseIconMapType_MAX = 3
};

// Enum DFMGlobalDefines.EMapLocationPOIProductType
enum class EMapLocationPOIProductType : int {
	None = 0,
	ElectricalApplication = 1,
	Entertainment = 2,
	Instrument = 3,
	BuildingMaterial = 4,
	Drink = 5,
	ElectronicComponent = 6,
	DailySupply = 7,
	Information = 8,
	Fabrication = 9,
	Fuel = 10,
	Medical = 11,
	Tool = 12,
	Food = 13,
	Gun = 14,
	Communication = 15,
	EMapLocationPOIProductType_MAX = 16
};

// Enum DFMGlobalDefines.EMapLocationPOILevelType
enum class EMapLocationPOILevelType : int {
	None = 0,
	POILevel1 = 1,
	POILevel2 = 2,
	EMapLocationPOILevelType_MAX = 3
};

// Enum DFMGlobalDefines.EMapLocationType
enum class EMapLocationType : int {
	NormalPOI = 0,
	HighPOI = 1,
	HugePOI = 2,
	ShopStation = 3,
	POIProduct = 4,
	BossLocation = 5,
	HighValueBox = 6,
	Zipline = 7,
	Scouter = 8,
	IronGauze = 9,
	Count = 10,
	EMapLocationType_MAX = 11
};

// Enum DFMGlobalDefines.EMapRotationType
enum class EMapRotationType : int {
	None = 0,
	Clockwise = 1,
	CounterClockWise = 2,
	EMapRotationType_MAX = 3
};

// Enum DFMGlobalDefines.EVehicleType
enum class EVehicleType : int {
	Car = 0,
	Tank = 1,
	Helicopter = 2,
	EVehicleType_MAX = 3
};

// Enum DFMGlobalDefines.EQuestType
enum class EQuestType : int {
	ENone = 0,
	EContract_KillAI = 1,
	EContract_KillBoss = 2,
	EContract_C4 = 3,
	EContract_Interact = 4,
	EContract_DrillingSafe = 5,
	EContract_Benchmark = 6,
	EQuestType_MAX = 7
};

// Enum DFMGlobalDefines.EQuestDialogActiveType
enum class EQuestDialogActiveType : int {
	None = 0,
	OnQuestCompleted = 1,
	OnObjectiveCompleted = 2,
	OnObjectiveActivated = 3,
	OnObjectiveFailed = 4,
	OnEnterMatch = 5,
	OnReachProgressTarget = 6,
	OnContractCanceled = 7,
	EQuestDialogActiveType_MAX = 8
};

// Enum DFMGlobalDefines.EQuestBigType
enum class EQuestBigType : int {
	EQuestBigType_Quest = 0,
	EQuestBigType_Contract = 1,
	EQuestBigType_Season = 2,
	EQuestBigType_MAX = 3
};

// Enum DFMGlobalDefines.EQuestGoalForbiddenType
enum class EQuestGoalForbiddenType : int {
	ECondition = 0,
	EForbidden = 1,
	EQuestGoalForbiddenType_MAX = 2
};

// Enum DFMGlobalDefines.EGoalType
enum class EGoalType : int {
	None = 0,
	Submit = 1,
	LootPrice = 2,
	CollectItem = 3,
	Escape = 4,
	DefeatEnemy = 5,
	UpgradeSafehouseDeviceLevel_Lobby = 6,
	UseSafehouseDeviceProduceProp_Lobby = 7,
	GoToLocation = 8,
	Delivery = 9,
	DSRoomChallange_Lobby = 10,
	SubmitWeapon_Lobby = 11,
	Interact = 12,
	MatchEvent = 13,
	WorldQuestObjective_Lobby = 14,
	PlayerCG_Lobby = 15,
	EscapeWithItem = 16,
	UseItem = 17,
	AttributeModify = 18,
	InGameLootAction = 19,
	MallBuy_Lobby = 20,
	ReputationLevel_Lobby = 21,
	MandelBrick = 22,
	LootOpenBox = 23,
	KeepActionTime = 24,
	QA = 25,
	AuctionBuyProps_Lobby = 26,
	AuctionSellProps_Lobby = 27,
	SpecificExpertIntoDS_Lobby = 28,
	ObjectiveRepair_Lobby = 29,
	EquipSpecExtensionBox_Lobby = 30,
	EquipBodyProps_Lobby = 31,
	EscapeWithMates_Lobby = 32,
	UseSkill = 33,
	Contract = 34,
	BehaviorScore = 35,
	CarryBodyDoSomething = 36,
	Damage = 37,
	Assist = 38,
	UseRankSkill = 39,
	Movement = 40,
	BeenAtLocation = 41,
	LootingItem = 42,
	MPOccupySector = 43,
	AmmoSupply = 44,
	TimeLimitGoal = 45,
	UseRebornFlag = 46,
	CharcterChecking = 47,
	Rescue = 48,
	VOFinish = 49,
	VehicleAmmoSupply = 50,
	AmmoSupplyOnMap = 51,
	Activity_Lobby_Start = 52,
	MPWinning_Looby = 53,
	TotalSurvivalTime_Looby = 54,
	AddXFriends_Looby = 55,
	PlayWith_Looby = 56,
	PraiseXPlayers_Looby = 57,
	SubmitProp_Looby = 58,
	AuctionSell_Looby = 59,
	SellProp_Looby = 60,
	Login_Looby = 61,
	TotalPlayTime_Looby = 62,
	LoginStreak_Looby = 63,
	MatchStart_Looby = 64,
	MatchEnd_Looby = 65,
	TotalOnlineTime_Looby = 66,
	CompleteContract_Looby = 67,
	Escape_Looby = 68,
	MatchStartWithGroup_Looby = 69,
	EGoalType_MAX = 70
};

// Enum DFMGlobalDefines.EBreakthroughIdentity
enum class EBreakthroughIdentity : int {
	None = 0,
	Teammember = 1,
	TeamLeader = 2,
	Commander = 3,
	EBreakthroughIdentity_MAX = 4
};

// Enum DFMGlobalDefines.ERankSkillState
enum class ERankSkillState : int {
	Open = 0,
	UnOpen = 1,
	SectorCantUse = 2,
	ERankSkillState_MAX = 3
};

// Enum DFMGlobalDefines.ERankSkillType
enum class ERankSkillType : int {
	None = 0,
	DropVehicle = 1,
	ERankSkillType_MAX = 2
};

// Enum DFMGlobalDefines.EReportMode
enum class EReportMode : int {
	None = 0,
	ReportSol = 1,
	ReportMP = 2,
	Disabled = 3,
	EReportMode_MAX = 4
};

// Enum DFMGlobalDefines.ESafeHouseDeviceType
enum class ESafeHouseDeviceType : int {
	Production = 0,
	Functional = 1,
	Gameplay = 2,
	ESafeHouseDeviceType_MAX = 3
};

// Enum DFMGlobalDefines.EServerType
enum class EServerType : int {
	Default = 0,
	PreRelease = 1,
	EServerType_MAX = 2
};

// Enum DFMGlobalDefines.EEaseMode
enum class EEaseMode : int {
	LinearIn = 0,
	QuadEaseIn = 1,
	QuadEaseOut = 2,
	CubicEaseIn = 3,
	CubicEaseOut = 4,
	EEaseMode_MAX = 5
};

// Enum DFMGlobalDefines.EPlayerRelationShipType
enum class EPlayerRelationShipType : int {
	E_None = 0,
	E_Self = 1,
	E_Teammate = 2,
	E_SameCamp = 3,
	E_Enemy = 4,
	E_MAX = 5
};

// Enum DFMGlobalDefines.ETeammateState
enum class ETeammateState : int {
	ETeammateState_Normal = 0,
	ETeammateState_Dying = 1,
	ETeammateState_WaitForResurrection = 2,
	ETeammateState_Dead = 3,
	ETeammateState_Disconnect = 4,
	ETeammateState_Withdrawal = 5,
	ETeammateState_QuitGame = 6,
	ETeammateState_BeingReviveFromDying = 7,
	ETeammateState_BeingReviveFromFirstDeath = 8,
	ETeammateState_Count = 9,
	ETeammateState_MAX = 10
};

// Enum DFMGlobalDefines.EMessagetype
enum class EMessagetype : int {
	ETeamInvite = 0,
	ETeamApply = 1,
	EMessagetype_MAX = 2
};

// ScriptStruct DFMGlobalDefines.ItemArchiveInfo
// Size: 0x1c8 (Inherited: 0x00)
struct FItemArchiveInfo {
public:

	struct FString CharacterName; // 0x00(0x10)
	struct FName CharacterAvatarID; // 0x10(0x08)
	int32_t CharacterAvatarLevel; // 0x18(0x04)
	enum class EArchiveAscription Ascription; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FKillInfo KillInfo; // 0x20(0x148)
	enum class EDeadType BeKilledType; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct FText KillerName; // 0x170(0x18)
	uint64_t KillerWeaponID; // 0x188(0x08)
	int64_t KillTimestamp; // 0x190(0x08)
	uint64_t BeKilledUin; // 0x198(0x08)
	uint64_t KillerAmmoId; // 0x1a0(0x08)
	int32_t KillerAmmoLevel; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	uint64_t HolderUin; // 0x1b0(0x08)
	bool bBornInCurrentRoom; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	uint64_t MapID; // 0x1c0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.KeyChainSpaceInfo
// Size: 0x28 (Inherited: 0x00)
struct FKeyChainSpaceInfo {
public:

	char Index; // 0x00(0x01)
	char Length; // 0x01(0x01)
	char BaseCount; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct TArray<char> TotalLocked; // 0x08(0x10)
	struct TArray<char> Unlocked; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LootSearchInfo
// Size: 0x28 (Inherited: 0x00)
struct FLootSearchInfo {
public:

	bool bHasPreSearch; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BaseItemSearchTime; // 0x04(0x04)
	struct AActor* RefInteractor; // 0x08(0x08)
	struct TArray<struct FItemSearchInfo> AllItemSearchInfos; // 0x10(0x10)
	float TotalSearchTime; // 0x20(0x04)
	bool bIsFastLoot; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ItemSearchInfo
// Size: 0x20 (Inherited: 0x00)
struct FItemSearchInfo {
public:

	uint64_t ItemID; // 0x00(0x08)
	bool bHasBeenSearched; // 0x08(0x01)
	char pad_9[0x17]; // 0x09(0x17)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ContractReward
// Size: 0x18 (Inherited: 0x00)
struct FContractReward {
public:

	int32_t ContractID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int64_t> ContractProps; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MeritObtainRow
// Size: 0x50 (Inherited: 0x10)
struct FMeritObtainRow : public FDescRowBase {
public:

	enum class EMeritObtainType MeritObtainType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText MeritObtainName; // 0x18(0x18)
	float HitDamage; // 0x30(0x04)
	bool IsAssist; // 0x34(0x01)
	bool IsHitHead; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	uint32_t ContinueKillNum; // 0x38(0x04)
	float ContinueKillCD; // 0x3c(0x04)
	float LongDistanceKill; // 0x40(0x04)
	float ShortDistanceKill; // 0x44(0x04)
	float Merit; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MapInstancedIconData
// Size: 0x50 (Inherited: 0x00)
struct FMapInstancedIconData {
public:

	struct FName InstancedIconName; // 0x00(0x08)
	struct FVector2D InstancedIconLocation; // 0x08(0x08)
	float InstancedIconScale; // 0x10(0x04)
	float InstancedIconRotate; // 0x14(0x04)
	struct FLinearColor InstancedIconColor; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FVector4 IconSizeUVAndStartUV; // 0x30(0x10)
	enum class EMapInstancedIconLayerType IconLayerType; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterHeroResourceAttachMeshData
// Size: 0x1d0 (Inherited: 0x10)
struct FCharacterHeroResourceAttachMeshData : public FDescRowBase {
public:

	struct FName ResourceId; // 0x10(0x08)
	struct FName AvatarID; // 0x18(0x08)
	int32_t SkillId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	/*struct TSoftObjectPtr<USkeletalMesh>*/char ItemMeshPath[0x28]; // 0x28(0x28)
	/*struct TSoftObjectPtr<USkeletalMesh>*/char ItemMeshPath3P[0x28]; // 0x50(0x28)
	/*struct TSoftObjectPtr<USkeletalMesh>*/char ItemMeshPathUI[0x28]; // 0x78(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSeq[0x28]; // 0xa0(0x28)
	enum class EWeaponSkinRenderMode SkinRenderMode; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	/*struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>>*/char SkinMaterials[0x50]; // 0xd0(0x50)
	enum class EWeaponSkinRenderMode SkinRenderMode3P; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	/*struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>>*/char SkinMaterials3P[0x50]; // 0x128(0x50)
	bool bUseWeaponPart; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct TMap<struct FName, struct FCharacterHeroResourceAttachMeshPartData> PartMap; // 0x180(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterHeroResourceAttachMeshPartData
// Size: 0x150 (Inherited: 0x00)
struct FCharacterHeroResourceAttachMeshPartData {
public:

	/*struct TSoftObjectPtr<USkeletalMesh>*/char ItemMeshPath[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<USkeletalMesh>*/char ItemMeshPath3P[0x28]; // 0x28(0x28)
	/*struct TSoftObjectPtr<USkeletalMesh>*/char ItemMeshPathUI[0x28]; // 0x50(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSeq[0x28]; // 0x78(0x28)
	enum class EWeaponSkinRenderMode SkinRenderMode; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	/*struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>>*/char SkinMaterials[0x50]; // 0xa8(0x50)
	enum class EWeaponSkinRenderMode SkinRenderMode3P; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	/*struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>>*/char SkinMaterials3P[0x50]; // 0x100(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterHeroResourceData
// Size: 0x30 (Inherited: 0x10)
struct FCharacterHeroResourceData : public FDescRowBase {
public:

	struct FName ResourceId; // 0x10(0x08)
	struct FName AvatarID; // 0x18(0x08)
	struct FName ResourcePath; // 0x20(0x08)
	struct FName Desc; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AbilityDataInfo
// Size: 0xa0 (Inherited: 0x10)
struct FAbilityDataInfo : public FDescRowBase {
public:

	int64_t AbilityId; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	struct FText Desc; // 0x30(0x18)
	struct FSoftObjectPath Icon; // 0x48(0x18)
	struct TArray<uint32_t> BuffIdArray; // 0x60(0x10)
	struct TArray<uint64_t> SpecialItemIdArray; // 0x70(0x10)
	struct TArray<uint32_t> SpecialItemCountArray; // 0x80(0x10)
	struct TArray<uint32_t> SpecialItemSlotArray; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BeaconfireRewards
// Size: 0x1c0 (Inherited: 0x10)
struct FBeaconfireRewards : public FDescRowBase {
public:

	int32_t ActionLevel; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText UnlockType1; // 0x18(0x18)
	struct FText UnlockName1; // 0x30(0x18)
	struct FText TextDesc1; // 0x48(0x18)
	int32_t IconType1; // 0x60(0x04)
	struct FName IconPathOrID1; // 0x64(0x08)
	int32_t IsMap1; // 0x6c(0x04)
	struct FText UnlockType2; // 0x70(0x18)
	struct FText UnlockName2; // 0x88(0x18)
	struct FText TextDesc2; // 0xa0(0x18)
	int32_t IconType2; // 0xb8(0x04)
	struct FName IconPathOrID2; // 0xbc(0x08)
	int32_t IsMap2; // 0xc4(0x04)
	struct FText UnlockType3; // 0xc8(0x18)
	struct FText UnlockName3; // 0xe0(0x18)
	struct FText TextDesc3; // 0xf8(0x18)
	int32_t IconType3; // 0x110(0x04)
	struct FName IconPathOrID3; // 0x114(0x08)
	int32_t IsMap3; // 0x11c(0x04)
	struct FText UnlockType4; // 0x120(0x18)
	struct FText UnlockName4; // 0x138(0x18)
	struct FText TextDesc4; // 0x150(0x18)
	int32_t IconType4; // 0x168(0x04)
	struct FName IconPathOrID4; // 0x16c(0x08)
	int32_t IsMap4; // 0x174(0x04)
	int64_t RewardItemID; // 0x178(0x08)
	struct FText RewardItemName; // 0x180(0x18)
	struct FText RewardItemDesc; // 0x198(0x18)
	int64_t RewardItemNum; // 0x1b0(0x08)
	int32_t RewardInventoryTypeStr; // 0x1b8(0x04)
	int32_t IsBind; // 0x1bc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AccountRewards
// Size: 0x108 (Inherited: 0x10)
struct FAccountRewards : public FDescRowBase {
public:

	int32_t AccountLevel; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText UnlockType1; // 0x18(0x18)
	struct FText UnlockName1; // 0x30(0x18)
	struct FText TextDesc1; // 0x48(0x18)
	struct FName IconPathOrID1; // 0x60(0x08)
	struct FText UnlockType2; // 0x68(0x18)
	struct FText UnlockName2; // 0x80(0x18)
	struct FText TextDesc2; // 0x98(0x18)
	struct FName IconPathOrID2; // 0xb0(0x08)
	struct FText UnlockType3; // 0xb8(0x18)
	struct FText UnlockName3; // 0xd0(0x18)
	struct FText TextDesc3; // 0xe8(0x18)
	struct FName IconPathOrID3; // 0x100(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AccountLevel
// Size: 0x18 (Inherited: 0x10)
struct FAccountLevel : public FDescRowBase {
public:

	int32_t Level; // 0x10(0x04)
	int32_t Exp; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AccountPunishedData
// Size: 0x30 (Inherited: 0x10)
struct FAccountPunishedData : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	struct FText Message; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.Achievement
// Size: 0xd0 (Inherited: 0x08)
struct FAchievement : public FTableRowBase {
public:

	int64_t ID; // 0x08(0x08)
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	struct TArray<int32_t> Model; // 0x40(0x10)
	int32_t Category; // 0x50(0x04)
	int32_t Level; // 0x54(0x04)
	struct TArray<int64_t> MissionID1; // 0x58(0x10)
	struct TArray<int64_t> MissionID2; // 0x68(0x10)
	struct TArray<int64_t> MissionID3; // 0x78(0x10)
	int32_t Order; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FText Tips; // 0x90(0x18)
	struct FSoftObjectPath IconPath; // 0xa8(0x18)
	int32_t AIuse; // 0xc0(0x04)
	int32_t Type; // 0xc4(0x04)
	bool IsHighLight; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DynamicRequestLevelGroupRow
// Size: 0x38 (Inherited: 0x10)
struct FDynamicRequestLevelGroupRow : public FDescRowBase {
public:

	struct FName DRLGroupID; // 0x10(0x08)
	struct TArray<struct FSoftObjectPath> levelPaths_HD; // 0x18(0x10)
	struct TArray<struct FSoftObjectPath> levelPaths; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.StatisticsUseSkillGoalConditionRow
// Size: 0x88 (Inherited: 0x08)
struct FStatisticsUseSkillGoalConditionRow : public FTableRowBase {
public:

	int32_t ConditionID; // 0x08(0x04)
	uint32_t SkillId; // 0x0c(0x04)
	struct TArray<uint32_t> SkillIdExArr; // 0x10(0x10)
	char SkillEvent; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	uint32_t CustomSkillEvent; // 0x24(0x04)
	bool bOnce; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t OnceRequiredCount; // 0x2c(0x04)
	char TargetType; // 0x30(0x01)
	char CampType; // 0x31(0x01)
	bool bInArea; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct TArray<uint32_t> BuffIdArr; // 0x38(0x10)
	struct TArray<uint32_t> TargetBuffIdArr; // 0x48(0x10)
	bool bForbidSelfCoverBuff; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<uint64_t> AttackerValueIdArr; // 0x60(0x10)
	float ConsequentTimeLimit; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<float> FloatConditionArr; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.WeaponSkinRewardRow
// Size: 0x40 (Inherited: 0x10)
struct FWeaponSkinRewardRow : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	uint64_t GunSkinRewards; // 0x18(0x08)
	uint64_t BFConnectionID1; // 0x20(0x08)
	uint64_t BFConnectionID2; // 0x28(0x08)
	uint64_t SOLConnectionID1; // 0x30(0x08)
	uint64_t SOLConnectionID2; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.StatisticsInteractGoalConditionRow
// Size: 0x68 (Inherited: 0x10)
struct FStatisticsInteractGoalConditionRow : public FDescRowBase {
public:

	int32_t ConditionID; // 0x10(0x04)
	char InteractorType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<struct FName> InteractorSecondTypeNameArr; // 0x18(0x10)
	struct FString ExParams; // 0x28(0x10)
	bool bSpecifyOne; // 0x38(0x01)
	bool bInArea; // 0x39(0x01)
	bool bFirstInteract_All; // 0x3a(0x01)
	bool bFirstInteract_Self; // 0x3b(0x01)
	bool bNoRepeated; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct TArray<uint64_t> ValidExpertIDList; // 0x40(0x10)
	int32_t ItemMinimumQuality; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	uint64_t ConsumeItemID; // 0x58(0x08)
	uint32_t ConsumeItemCount; // 0x60(0x04)
	uint32_t ConsumeItemTimes; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.StatisticsTimeLimitGoalConditionRow
// Size: 0x38 (Inherited: 0x10)
struct FStatisticsTimeLimitGoalConditionRow : public FDescRowBase {
public:

	int32_t ConditionID; // 0x10(0x04)
	char GoalType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<int32_t> GoalConditionIDArray; // 0x18(0x10)
	int32_t GoalRequirement; // 0x28(0x04)
	int32_t TimeLimit; // 0x2c(0x04)
	bool bIsOnlyCanCompleteOne; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.StatisticsDamageGoalConditionRow
// Size: 0x128 (Inherited: 0x10)
struct FStatisticsDamageGoalConditionRow : public FDescRowBase {
public:

	int32_t ConditionID; // 0x10(0x04)
	char TargetType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<struct FString> AITargetNameClass; // 0x18(0x10)
	struct TArray<enum class EInGameBattleClassType> DamagerBattleClassTypeList; // 0x28(0x10)
	struct TArray<int64_t> DamagerExpertIDList; // 0x38(0x10)
	struct TArray<enum class EInGameBattleClassType> BedamagerBattleClassTypeList; // 0x48(0x10)
	struct TArray<int64_t> BedamagerExpertIDList; // 0x58(0x10)
	float Distance; // 0x68(0x04)
	bool IsInsideDistance; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct TArray<struct FString> TargetTagArr; // 0x70(0x10)
	bool bInArea; // 0x80(0x01)
	bool IsComplexRule_Weapon; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct FString WeaponCondition; // 0x88(0x10)
	struct FString UnWeaponCondition; // 0x98(0x10)
	bool IsComplexRule_Equipment; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FString EquipmentCondition; // 0xb0(0x10)
	struct FString UnEquipmentCondition; // 0xc0(0x10)
	bool IsComplexRule_GameItem; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FString GameItemCondition; // 0xd8(0x10)
	struct FString UnGameItemCondition; // 0xe8(0x10)
	struct TArray<uint32_t> BuffIdArr; // 0xf8(0x10)
	struct TArray<uint32_t> TargetBuffIdArr; // 0x108(0x10)
	struct TArray<enum class ELastHitPosition> HitPositions; // 0x118(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.StatisticsDefeatGoalConditionRow
// Size: 0x170 (Inherited: 0x10)
struct FStatisticsDefeatGoalConditionRow : public FDescRowBase {
public:

	int32_t ConditionID; // 0x10(0x04)
	char KillOrKnockdown; // 0x14(0x01)
	char TargetType; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct TArray<struct FString> AITargetNameClass; // 0x18(0x10)
	struct TArray<enum class EInGameBattleClassType> KillerBattleClassTypeList; // 0x28(0x10)
	struct TArray<int64_t> KillerExpertIDList; // 0x38(0x10)
	struct TArray<enum class EInGameBattleClassType> BekillerBattleClassTypeList; // 0x48(0x10)
	struct TArray<int64_t> BekillerExpertIDList; // 0x58(0x10)
	bool MustVehicleKill; // 0x68(0x01)
	bool MustRevengeKill; // 0x69(0x01)
	bool MustKillOnVehicle; // 0x6a(0x01)
	char pad_6B[0x1]; // 0x6b(0x01)
	float Distance; // 0x6c(0x04)
	bool IsInsideDistance; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FString> TargetTagArr; // 0x78(0x10)
	bool bInArea; // 0x88(0x01)
	bool IsComplexRule_Weapon; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct FString WeaponCondition; // 0x90(0x10)
	struct FString UnWeaponCondition; // 0xa0(0x10)
	bool IsComplexRule_Equipment; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FString EquipmentCondition; // 0xb8(0x10)
	struct FString UnEquipmentCondition; // 0xc8(0x10)
	bool IsComplexRule_GameItem; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FString GameItemCondition; // 0xe0(0x10)
	struct FString UnGameItemCondition; // 0xf0(0x10)
	struct TArray<uint32_t> BuffIdArr; // 0x100(0x10)
	struct TArray<uint32_t> TargetBuffIdArr; // 0x110(0x10)
	struct TArray<float> TargetBuffTimeRequireArr; // 0x120(0x10)
	struct TArray<enum class ELastHitPosition> HitPositions; // 0x130(0x10)
	struct TArray<char> TeamMemberNumArr; // 0x140(0x10)
	int32_t EquipmentPriceTargetType; // 0x150(0x04)
	bool MustMoreThan; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	int32_t TotalEquipPrice; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct TArray<uint64_t> AmmoItemArray; // 0x160(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ActivityCommonGoalConditionRow
// Size: 0x28 (Inherited: 0x10)
struct FActivityCommonGoalConditionRow : public FDescRowBase {
public:

	int32_t ConditionID; // 0x10(0x04)
	int32_t TimeLimit; // 0x14(0x04)
	struct TArray<struct FName> InAreaTags; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ActivityGoalRow
// Size: 0x108 (Inherited: 0x10)
struct FActivityGoalRow : public FDescRowBase {
public:

	int64_t GoalID; // 0x10(0x08)
	char GoalType; // 0x18(0x01)
	bool IsComplexProp; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FString Param1; // 0x20(0x10)
	struct FString Param2; // 0x30(0x10)
	struct FString Param3; // 0x40(0x10)
	struct FString Param4; // 0x50(0x10)
	struct FText Remark; // 0x60(0x18)
	struct TArray<int32_t> ConditionIDArray; // 0x78(0x10)
	struct TArray<int64_t> ConditionGoalIDArray; // 0x88(0x10)
	struct TArray<uint64_t> ListParam; // 0x98(0x10)
	int32_t RequiredCount; // 0xa8(0x04)
	bool IsAccumulativeTotal; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float TimeLimit; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<int64_t> ExpertIDList; // 0xb8(0x10)
	struct TArray<uint32_t> MapID; // 0xc8(0x10)
	struct TArray<uint32_t> GameMode; // 0xd8(0x10)
	struct TArray<uint32_t> GameRule; // 0xe8(0x10)
	struct TArray<uint64_t> MatchModeId; // 0xf8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ActivityQuestion
// Size: 0x90 (Inherited: 0x08)
struct FActivityQuestion : public FTableRowBase {
public:

	int64_t GoalID; // 0x08(0x08)
	struct FText Question; // 0x10(0x18)
	int32_t Answer; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FText Choice1; // 0x30(0x18)
	struct FText Choice2; // 0x48(0x18)
	struct FText Choice3; // 0x60(0x18)
	struct FText Choice4; // 0x78(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ActivityTeachingManual
// Size: 0x38 (Inherited: 0x08)
struct FActivityTeachingManual : public FTableRowBase {
public:

	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Text; // 0x10(0x18)
	struct FString Picture; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ActivityThemeEventTech
// Size: 0x30 (Inherited: 0x08)
struct FActivityThemeEventTech : public FTableRowBase {
public:

	int32_t ID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Name; // 0x10(0x18)
	int32_t IsCoreTech; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ActivityConstRow
// Size: 0x20 (Inherited: 0x08)
struct FActivityConstRow : public FTableRowBase {
public:

	int32_t ConstID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Value; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ActivityTaskRow
// Size: 0x80 (Inherited: 0x08)
struct FActivityTaskRow : public FTableRowBase {
public:

	int64_t TaskID; // 0x08(0x08)
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	struct TArray<int64_t> ObjectiveList; // 0x40(0x10)
	int64_t Reward1ID; // 0x50(0x08)
	int32_t Reward1Num; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	int64_t Reward2ID; // 0x60(0x08)
	int32_t Reward2Num; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	int64_t JumpId; // 0x70(0x08)
	int64_t ModeTag; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ActivityRow
// Size: 0x78 (Inherited: 0x08)
struct FActivityRow : public FTableRowBase {
public:

	int64_t ActivityID; // 0x08(0x08)
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	struct FString Info1; // 0x40(0x10)
	int32_t ModeLeaning; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	int64_t RewardShowed1; // 0x58(0x08)
	int64_t RewardShowed2; // 0x60(0x08)
	int64_t RewardShowed3; // 0x68(0x08)
	int32_t TimeCountWay; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ActivityHomePage
// Size: 0x80 (Inherited: 0x08)
struct FActivityHomePage : public FTableRowBase {
public:

	int64_t ActivityID; // 0x08(0x08)
	struct FText Name; // 0x10(0x18)
	struct FString Info1; // 0x28(0x10)
	int32_t Homepage; // 0x38(0x04)
	int32_t OrderWeight; // 0x3c(0x04)
	int32_t ScrollTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString StartTime; // 0x48(0x10)
	struct FString EndTime; // 0x58(0x10)
	int32_t JumpPageType; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString SpecialLabel; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AIDirectParams
// Size: 0xa8 (Inherited: 0x10)
struct FAIDirectParams : public FDescRowBase {
public:

	int64_t MapID; // 0x10(0x08)
	float GlobalBattleScale; // 0x18(0x04)
	float KillScale; // 0x1c(0x04)
	float KillScaleLimit; // 0x20(0x04)
	float MakeDamageScale_2; // 0x24(0x04)
	float FireScale; // 0x28(0x04)
	float HitScale; // 0x2c(0x04)
	float GlobalDebuffScale; // 0x30(0x04)
	float BloodyScale_2; // 0x34(0x04)
	float BornBreakScale_2; // 0x38(0x04)
	float PainScale_2; // 0x3c(0x04)
	float MakeDamageScale_3; // 0x40(0x04)
	float PainScale_3; // 0x44(0x04)
	float PainScale_4; // 0x48(0x04)
	float LootScale; // 0x4c(0x04)
	float TeamMateScale; // 0x50(0x04)
	float DecayScale; // 0x54(0x04)
	struct TMap<struct FString, float> EnemyScore; // 0x58(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AILabBodyStateHitPartProbabilityConf
// Size: 0x28 (Inherited: 0x10)
struct FAILabBodyStateHitPartProbabilityConf : public FDescRowBase {
public:

	enum class EAILabBodyState BodyState; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t Difficulty; // 0x14(0x04)
	struct TArray<struct FAILabHitPartProbabilityConf> WeightList; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AILabHitPartProbabilityConf
// Size: 0x08 (Inherited: 0x00)
struct FAILabHitPartProbabilityConf {
public:

	enum class ECharacterPart BodyPart; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Weight; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AILabPathPoint
// Size: 0x20 (Inherited: 0x00)
struct FAILabPathPoint {
public:

	struct FString POIName; // 0x00(0x10)
	int32_t MinArriveRandomTime; // 0x10(0x04)
	int32_t MaxArriveRandomTime; // 0x14(0x04)
	int32_t MinLootRandomTime; // 0x18(0x04)
	int32_t MaxLootRandomTime; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMAILabLaunchRow
// Size: 0x70 (Inherited: 0x10)
struct FDFMAILabLaunchRow : public FDescRowBase {
public:

	struct FName MapID; // 0x10(0x08)
	struct FFloatRange BeginTimeSecs; // 0x18(0x10)
	uint32_t HP; // 0x28(0x04)
	float Assets; // 0x2c(0x04)
	float ReLaunchGap; // 0x30(0x04)
	float LastHurtGap; // 0x34(0x04)
	int32_t RecycleDistance; // 0x38(0x04)
	float LastHitGap; // 0x3c(0x04)
	struct TArray<uint32_t> BanBuffIDs; // 0x40(0x10)
	struct TArray<struct FAILabSpawnModel> Models; // 0x50(0x10)
	struct TArray<struct FAILabCreateModel> CModels; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AILabCreateModel
// Size: 0x40 (Inherited: 0x00)
struct FAILabCreateModel {
public:

	struct TArray<struct FAILabModelOps> ModelOps; // 0x00(0x10)
	struct TArray<struct FAILabDiffcult> Diffcults; // 0x10(0x10)
	struct FFloatRange Range; // 0x20(0x10)
	int32_t Num; // 0x30(0x04)
	bool Protect; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t AILabType; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AILabDiffcult
// Size: 0x10 (Inherited: 0x00)
struct FAILabDiffcult {
public:

	int32_t Diffcult; // 0x00(0x04)
	enum class EAILabDiffcultType DiffType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float MinRange; // 0x08(0x04)
	float MaxRange; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AILabModelOps
// Size: 0x14 (Inherited: 0x00)
struct FAILabModelOps {
public:

	enum class ECreateModelType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FFloatRange Param; // 0x04(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AILabSpawnModel
// Size: 0x98 (Inherited: 0x00)
struct FAILabSpawnModel {
public:

	struct FFloatRange MatchSecs; // 0x00(0x10)
	struct FInt32Range KillBot; // 0x10(0x10)
	struct FInt32Range KillPlayer; // 0x20(0x10)
	struct FInt32Range KillAILab; // 0x30(0x10)
	struct FFloatRange HitRate; // 0x40(0x10)
	struct FFloatRange ExitDis; // 0x50(0x10)
	int32_t TeamerNum; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FAILabDiffcult> Diffcults; // 0x68(0x10)
	struct FFloatRange Range; // 0x78(0x10)
	int32_t Num; // 0x88(0x04)
	bool Protect; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	int32_t AILabType; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMAILabConditionRow
// Size: 0x28 (Inherited: 0x10)
struct FDFMAILabConditionRow : public FDescRowBase {
public:

	struct FName TrigID; // 0x10(0x08)
	struct TArray<struct FDropCondition> Cons; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DropCondition
// Size: 0x14 (Inherited: 0x00)
struct FDropCondition {
public:

	enum class EDropConditionType ConType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Param1; // 0x04(0x04)
	float Param2; // 0x08(0x04)
	float Param3; // 0x0c(0x04)
	float Param4; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMAILabDropRow
// Size: 0x30 (Inherited: 0x10)
struct FDFMAILabDropRow : public FDescRowBase {
public:

	struct FName DropID; // 0x10(0x08)
	uint32_t TrigID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FAILabDropItem> DropItems; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AILabDropItem
// Size: 0x10 (Inherited: 0x00)
struct FAILabDropItem {
public:

	uint64_t ItemPoolID; // 0x00(0x08)
	uint32_t Num; // 0x08(0x04)
	uint32_t Weight; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.EquipmentAmmoRecommendConfig
// Size: 0x20 (Inherited: 0x10)
struct FEquipmentAmmoRecommendConfig : public FDescRowBase {
public:

	int32_t WeaponItemType; // 0x10(0x04)
	int32_t RecommendNum; // 0x14(0x04)
	int32_t AddNum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.NewEquipmentCheckConfig
// Size: 0x20 (Inherited: 0x10)
struct FNewEquipmentCheckConfig : public FDescRowBase {
public:

	int64_t CheckID; // 0x10(0x08)
	int32_t CheckType; // 0x18(0x04)
	float CheckValue; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.WeaponItemTypeInfoRow
// Size: 0x30 (Inherited: 0x10)
struct FWeaponItemTypeInfoRow : public FDescRowBase {
public:

	enum class EWeaponItemType WeaponItemType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText WeaponItemTypeName; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.PresetArmedPropsRow
// Size: 0x70 (Inherited: 0x10)
struct FPresetArmedPropsRow : public FDescRowBase {
public:

	uint64_t PropId; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	struct TArray<int32_t> ArmedForceID; // 0x30(0x10)
	int32_t SkillId; // 0x40(0x04)
	bool UnLockType; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct TArray<int32_t> BanExpertList; // 0x48(0x10)
	struct FText Desc; // 0x58(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ArmedForceWeaponListRow
// Size: 0x38 (Inherited: 0x10)
struct FArmedForceWeaponListRow : public FDescRowBase {
public:

	uint32_t ID; // 0x10(0x04)
	int32_t ArmedForceID; // 0x14(0x04)
	struct TArray<uint64_t> MPWeaponList; // 0x18(0x10)
	struct TArray<uint64_t> SOLWeaponList; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ArmedForceDataInfo
// Size: 0xb8 (Inherited: 0x10)
struct FArmedForceDataInfo : public FDescRowBase {
public:

	int64_t ArmedForceID; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	struct FSoftObjectPath Icon; // 0x30(0x18)
	struct FString WeaponTypeList; // 0x48(0x10)
	struct FString WeaponList; // 0x58(0x10)
	int32_t AbilityId; // 0x68(0x04)
	struct FName RedeployHeroViewColorType; // 0x6c(0x08)
	struct FLinearColor RedeployHeroViewColor; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
	struct FSoftObjectPath RedeployHeroViewArmBigIcon; // 0x88(0x18)
	struct FSoftObjectPath IconForRedeploy; // 0xa0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ArmedForceOutfitDataInfo
// Size: 0x68 (Inherited: 0x10)
struct FArmedForceOutfitDataInfo : public FDescRowBase {
public:

	int64_t Key; // 0x10(0x08)
	int64_t ID; // 0x18(0x08)
	struct FText PresetTitle; // 0x20(0x18)
	int64_t ArmedForceID; // 0x38(0x08)
	int64_t Position; // 0x40(0x08)
	int64_t MinPrice; // 0x48(0x08)
	int64_t MaxPrice; // 0x50(0x08)
	int64_t ItemNum; // 0x58(0x08)
	int64_t MedicineType; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ArmedForcePresetTable
// Size: 0x48 (Inherited: 0x10)
struct FArmedForcePresetTable : public FDescRowBase {
public:

	int64_t StyleId; // 0x10(0x08)
	struct FText StyleName; // 0x18(0x18)
	struct FText Desc; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ArmedForcePropsInfo
// Size: 0xa8 (Inherited: 0x10)
struct FArmedForcePropsInfo : public FDescRowBase {
public:

	int64_t ItemID; // 0x10(0x08)
	struct TArray<int32_t> GameMode; // 0x18(0x10)
	struct FText PropType; // 0x28(0x18)
	struct FText Name; // 0x40(0x18)
	int32_t MPCD; // 0x58(0x04)
	int32_t MPLimit; // 0x5c(0x04)
	int32_t MPUseCount; // 0x60(0x04)
	int32_t MPDefaultNum; // 0x64(0x04)
	struct FText MPDesc; // 0x68(0x18)
	int32_t SOLCD; // 0x80(0x04)
	int32_t SOLLimit; // 0x84(0x04)
	int32_t SOLUseCount; // 0x88(0x04)
	int32_t SOLDefaultNum; // 0x8c(0x04)
	struct FText SOLDesc; // 0x90(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ArmedForceMPPropListInfo
// Size: 0x70 (Inherited: 0x10)
struct FArmedForceMPPropListInfo : public FDescRowBase {
public:

	int64_t ItemID; // 0x10(0x08)
	int32_t ArmedForceIDs; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText PropType; // 0x20(0x18)
	struct FText Name; // 0x38(0x18)
	int32_t PropCount; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FText Desc; // 0x58(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ArmedForcePropListInfo
// Size: 0x90 (Inherited: 0x10)
struct FArmedForcePropListInfo : public FDescRowBase {
public:

	int64_t ItemID; // 0x10(0x08)
	int32_t ArmedForceIDs; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText PropType; // 0x20(0x18)
	struct FText Name; // 0x38(0x18)
	int32_t MPCount; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FText MPDesc; // 0x58(0x18)
	int32_t SOLCD; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FText SOLDesc; // 0x78(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AssemblyPresetDataInfo
// Size: 0x58 (Inherited: 0x10)
struct FAssemblyPresetDataInfo : public FDescRowBase {
public:

	int64_t Key; // 0x10(0x08)
	int64_t ID; // 0x18(0x08)
	struct FText PresetTitle; // 0x20(0x18)
	int64_t Position; // 0x38(0x08)
	int64_t ItemID; // 0x40(0x08)
	int64_t ItemQuality; // 0x48(0x08)
	int64_t ItemNum; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AuctionPageInfo
// Size: 0x78 (Inherited: 0x10)
struct FAuctionPageInfo : public FDescRowBase {
public:

	int32_t PageID; // 0x10(0x04)
	int32_t LabelNo1; // 0x14(0x04)
	int32_t LabelNo2; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText LabelNo1Name; // 0x20(0x18)
	struct FText LabelNo2Name; // 0x38(0x18)
	struct FString LabelNo2Icon; // 0x50(0x10)
	int32_t SubPageOrder; // 0x60(0x04)
	int32_t MainPageOrder; // 0x64(0x04)
	struct FString PageSubId; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AuctionProp
// Size: 0x48 (Inherited: 0x10)
struct FAuctionProp : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	struct FText PropName; // 0x18(0x18)
	bool EnableRack; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	uint64_t CurrencyId; // 0x38(0x08)
	int32_t GuidePrice; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AuctionRelatedSearch
// Size: 0x40 (Inherited: 0x10)
struct FAuctionRelatedSearch : public FDescRowBase {
public:

	int64_t ItemID; // 0x10(0x08)
	struct FString RelatedIds; // 0x18(0x10)
	struct FText SimpleDescription; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BattleFieldMapItemInfoRow
// Size: 0x18 (Inherited: 0x08)
struct FBattleFieldMapItemInfoRow : public FTableRowBase {
public:

	struct FVector Location; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BattlePassExprCard
// Size: 0x20 (Inherited: 0x10)
struct FBattlePassExprCard : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t Expr; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BattlePassPack
// Size: 0x30 (Inherited: 0x10)
struct FBattlePassPack : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t SeasonID; // 0x18(0x08)
	int32_t Level; // 0x20(0x04)
	int32_t Price; // 0x24(0x04)
	int32_t OriginalPrice; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BattlePassClue
// Size: 0xc0 (Inherited: 0x10)
struct FBattlePassClue : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	int32_t ArchiveID; // 0x14(0x04)
	int64_t GoalID; // 0x18(0x08)
	int64_t FreeReward1; // 0x20(0x08)
	int32_t FreeRewardNum1; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	int64_t FreeReward2; // 0x30(0x08)
	int32_t FreeRewardNum2; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	int64_t PaidReward1; // 0x40(0x08)
	int32_t PaidRewardNum1; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t PaidReward2; // 0x50(0x08)
	int32_t PaidRewardNum2; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FText ClueTitle; // 0x60(0x18)
	struct FText ClueGoal; // 0x78(0x18)
	struct FText ClueBrief; // 0x90(0x18)
	struct FString ClueCover; // 0xa8(0x10)
	int32_t JumpId; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BattlePassArchive
// Size: 0x40 (Inherited: 0x10)
struct FBattlePassArchive : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t SeasonID; // 0x18(0x08)
	int32_t MatchType; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText ArchiveName; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BattlePassLevel
// Size: 0xe8 (Inherited: 0x10)
struct FBattlePassLevel : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t SeasonID; // 0x18(0x08)
	int32_t Level; // 0x20(0x04)
	int32_t IsCoreReward; // 0x24(0x04)
	int64_t FreeReward1; // 0x28(0x08)
	int32_t FreeRewardNum1; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	int64_t FreeReward2; // 0x38(0x08)
	int32_t FreeRewardNum2; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	int64_t FreeReward3; // 0x48(0x08)
	int32_t FreeRewardNum3; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	int64_t PaidReward1; // 0x58(0x08)
	int32_t PaidRewardNum1; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	int64_t PaidReward2; // 0x68(0x08)
	int32_t PaidRewardNum2; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	int64_t PaidReward3; // 0x78(0x08)
	int32_t PaidRewardNum3; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	int64_t UniversalReward1; // 0x88(0x08)
	int32_t UniversalRewardNum1; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	int64_t UniversalReward2; // 0x98(0x08)
	int32_t UniversalRewardNum2; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	int64_t SolReward1; // 0xa8(0x08)
	int32_t SolRewardNum1; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	int64_t SolReward2; // 0xb8(0x08)
	int32_t SolRewardNum2; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	int64_t MpReward1; // 0xc8(0x08)
	int32_t MpRewardNum1; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	int64_t MpReward2; // 0xd8(0x08)
	int32_t MpRewardNum2; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BattlePassBonus
// Size: 0x28 (Inherited: 0x10)
struct FBattlePassBonus : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	int64_t SeasonID; // 0x18(0x08)
	float BonusRate; // 0x20(0x04)
	int32_t WeekExprLimit; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BattlePassSeason
// Size: 0x1c0 (Inherited: 0x10)
struct FBattlePassSeason : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	struct FString VideoName; // 0x18(0x10)
	int32_t Number; // 0x28(0x04)
	float SolExprRate; // 0x2c(0x04)
	float MpExprRate; // 0x30(0x04)
	int32_t WeekExprLimit; // 0x34(0x04)
	int32_t MaxExprLimit; // 0x38(0x04)
	int32_t LevelExpr; // 0x3c(0x04)
	int32_t CycleStartLevel; // 0x40(0x04)
	int32_t LevelsPerCycle; // 0x44(0x04)
	int64_t CycleReward; // 0x48(0x08)
	int32_t CycleRewardNum; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	int64_t FreeCycleReward; // 0x58(0x08)
	int32_t FreeCycleRewardNum; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	int64_t UniversalCycleReward; // 0x68(0x08)
	int32_t UniversalCycleRewardNum; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	int64_t SolCycleReward; // 0x78(0x08)
	int32_t SolCycleRewardNum; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	int64_t MpCycleReward; // 0x88(0x08)
	int32_t MpCycleRewardNum; // 0x90(0x04)
	int32_t LevelPrice; // 0x94(0x04)
	int32_t CluePrice; // 0x98(0x04)
	int32_t BasePrice; // 0x9c(0x04)
	int32_t AdvancedPrice; // 0xa0(0x04)
	int32_t SolPrice; // 0xa4(0x04)
	int32_t MpPrice; // 0xa8(0x04)
	int32_t UniversalPrice; // 0xac(0x04)
	int32_t AdvancedLevel; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	int64_t BaseReward1; // 0xb8(0x08)
	int32_t BaseRewardNum1; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	int64_t BaseReward2; // 0xc8(0x08)
	int32_t BaseRewardNum2; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	int64_t BaseReward3; // 0xd8(0x08)
	int32_t BaseRewardNum3; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	int64_t BaseReward4; // 0xe8(0x08)
	int32_t BaseRewardNum4; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	int64_t BaseReward5; // 0xf8(0x08)
	int32_t BaseRewardNum5; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	int64_t AdvancedReward1; // 0x108(0x08)
	int32_t AdvancedRewardNum1; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	int64_t AdvancedReward2; // 0x118(0x08)
	int32_t AdvancedRewardNum2; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	int64_t AdvancedReward3; // 0x128(0x08)
	int32_t AdvancedRewardNum3; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	int64_t AdvancedReward4; // 0x138(0x08)
	int32_t AdvancedRewardNum4; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	int64_t AdvancedReward5; // 0x148(0x08)
	int32_t AdvancedRewardNum5; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	int64_t SolShowReward1; // 0x158(0x08)
	int64_t SolShowReward2; // 0x160(0x08)
	int64_t SolShowReward3; // 0x168(0x08)
	int64_t SolShowReward4; // 0x170(0x08)
	int64_t MpShowReward1; // 0x178(0x08)
	int64_t MpShowReward2; // 0x180(0x08)
	int64_t MpShowReward3; // 0x188(0x08)
	int64_t MpShowReward4; // 0x190(0x08)
	int64_t UniversalShowReward1; // 0x198(0x08)
	int64_t UniversalShowReward2; // 0x1a0(0x08)
	int64_t UniversalShowReward3; // 0x1a8(0x08)
	int64_t UniversalShowReward4; // 0x1b0(0x08)
	int64_t UniversalShowReward5; // 0x1b8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MsgRow
// Size: 0x40 (Inherited: 0x08)
struct FMsgRow : public FTableRowBase {
public:

	int32_t MsgSORTID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText MsgTitle; // 0x10(0x18)
	struct FText MsgContent; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BPconfRow
// Size: 0x50 (Inherited: 0x08)
struct FBPconfRow : public FTableRowBase {
public:

	int32_t BPSORTID; // 0x08(0x04)
	int32_t AreaID; // 0x0c(0x04)
	int32_t SeasonID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t Paytype; // 0x18(0x08)
	int32_t BPPrice; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	int64_t BPLvPaytype; // 0x28(0x08)
	int32_t BPLvPrice; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText BPName; // 0x38(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BPLvconfRow
// Size: 0x80 (Inherited: 0x08)
struct FBPLvconfRow : public FTableRowBase {
public:

	int32_t LVSORTID; // 0x08(0x04)
	int32_t AreaID; // 0x0c(0x04)
	int32_t SeasonID; // 0x10(0x04)
	int32_t Level; // 0x14(0x04)
	int32_t Exp; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	int64_t NoChargeAwardId1; // 0x20(0x08)
	int32_t NoChargeAwardNum1; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	int64_t NoChargeAwardId2; // 0x30(0x08)
	int32_t NoChargeAwardNum2; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	int64_t ChargeAwardId1; // 0x40(0x08)
	int32_t ChargeAwardNum1; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ChargeAwardId2; // 0x50(0x08)
	int32_t ChargeAwardNum2; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	int64_t ChargeAwardId3; // 0x60(0x08)
	int32_t ChargeAwardNum3; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	int64_t ChargeAwardId4; // 0x70(0x08)
	int32_t ChargeAwardNum4; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MatchModeId2CampaignId
// Size: 0x20 (Inherited: 0x10)
struct FMatchModeId2CampaignId : public FDescRowBase {
public:

	int32_t MatchModeId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	uint64_t CampaignId; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BHDCampaignInfo
// Size: 0x108 (Inherited: 0x10)
struct FBHDCampaignInfo : public FDescRowBase {
public:

	uint64_t CampaignId; // 0x10(0x08)
	struct FText CampaignCode; // 0x18(0x18)
	struct FText CampaignDate; // 0x30(0x18)
	struct FText CampaignSerial; // 0x48(0x18)
	struct FText CampaignTitle; // 0x60(0x18)
	struct FText CampaignTime; // 0x78(0x18)
	struct FText CampaignLoc; // 0x90(0x18)
	struct FText CampaignDesc; // 0xa8(0x18)
	struct FText CampaignGoal; // 0xc0(0x18)
	struct FSoftObjectPath CampaignImageUrl; // 0xd8(0x18)
	struct FSoftObjectPath CampaignIconUrl; // 0xf0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BlindBox
// Size: 0xe0 (Inherited: 0x10)
struct FBlindBox : public FDescRowBase {
public:

	struct FString ItemID; // 0x10(0x10)
	int32_t ConditionID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText ItemName; // 0x28(0x18)
	struct FString LotteryPoolId; // 0x40(0x10)
	int32_t ConditionType; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString ConditionArg; // 0x58(0x10)
	int32_t ConditionArg2; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString ConditionArg3; // 0x70(0x10)
	int32_t ConditionArg4; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FString ConditionArg5; // 0x88(0x10)
	int32_t Condition2Type; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString Condition2Arg; // 0xa0(0x10)
	int32_t Condition2Arg2; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString Condition2Arg3; // 0xb8(0x10)
	int32_t Condition2Arg4; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FString Condition2Arg5; // 0xd0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BattleFieldSectorAnchorIconConfigRow
// Size: 0x38 (Inherited: 0x08)
struct FBattleFieldSectorAnchorIconConfigRow : public FTableRowBase {
public:

	struct FName SectorAnchorName; // 0x08(0x08)
	/*struct TSoftObjectPtr<UObject>*/char SectorAnchorIcon[0x28]; // 0x10(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BreakthroughTextTypeConfigRow
// Size: 0x18 (Inherited: 0x08)
struct FBreakthroughTextTypeConfigRow : public FTableRowBase {
public:

	enum class EBreakthroughTextType TextType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName TextStyleName; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BreakthroughUIIconConfigRow
// Size: 0x38 (Inherited: 0x08)
struct FBreakthroughUIIconConfigRow : public FTableRowBase {
public:

	enum class EBreakthroughUIIconType IconType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	/*struct TSoftObjectPtr<UObject>*/char IconPath[0x28]; // 0x10(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BreakthroughUIColorConfigRow
// Size: 0x20 (Inherited: 0x08)
struct FBreakthroughUIColorConfigRow : public FTableRowBase {
public:

	enum class EBreakthroughUIColorType ColorType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FLinearColor LinearColor; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CarrayItem_HealArmorConfig
// Size: 0x18 (Inherited: 0x10)
struct FCarrayItem_HealArmorConfig : public FDescRowBase {
public:

	int32_t Level; // 0x10(0x04)
	int32_t HealArmor; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CarrayItemsData
// Size: 0x90 (Inherited: 0x10)
struct FCarrayItemsData : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	int32_t SerialNum; // 0x18(0x04)
	enum class ECarrayItemsType CarrayItemType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	uint64_t ProtoTypeItemId; // 0x20(0x08)
	int32_t MaxNum; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FText ItemName; // 0x30(0x18)
	struct FText EffectDesc; // 0x48(0x18)
	struct FText Desc; // 0x60(0x18)
	struct FSoftObjectPath IconPath; // 0x78(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HallWeaponDataAnim
// Size: 0x28 (Inherited: 0x10)
struct FHallWeaponDataAnim : public FDescRowBase {
public:

	struct FName AnimSetBase; // 0x10(0x08)
	struct FName AnimSetMain; // 0x18(0x08)
	struct FName AnimSetOverride; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterAnimDataRow
// Size: 0xc8 (Inherited: 0x10)
struct FCharacterAnimDataRow : public FDescRowBase {
public:

	/*struct TMap<struct FName, struct TSoftObjectPtr<UAnimSequenceBase>>*/char HallAnimations[0x50]; // 0x10(0x50)
	struct TMap<struct FName, struct FCharacterAnimPreviewHD> HallCharacterPreviewAnims; // 0x60(0x50)
	struct FName AvatarID; // 0xb0(0x08)
	struct FName WeaponID; // 0xb8(0x08)
	struct FName AnimSetOverride; // 0xc0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterAnimPreviewHD
// Size: 0x50 (Inherited: 0x00)
struct FCharacterAnimPreviewHD {
public:

	/*struct TMap<enum class ECharacterAvatarPart, struct TSoftObjectPtr<UAnimSequenceBase>>*/char HallPreviewAnims[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterAppearanceAdaptationDataRow
// Size: 0x50 (Inherited: 0x10)
struct FCharacterAppearanceAdaptationDataRow : public FDescRowBase {
public:

	struct FName ItemID; // 0x10(0x08)
	int32_t PriorityWearPosition_Head; // 0x18(0x04)
	int32_t PriorityWearPosition_Face; // 0x1c(0x04)
	int32_t PriorityWearPosition_Eyes; // 0x20(0x04)
	int32_t PriorityWearPosition_Ears; // 0x24(0x04)
	int32_t PriorityWearPosition_Neck; // 0x28(0x04)
	int32_t PriorityWearPosition_Shoulders; // 0x2c(0x04)
	int32_t PriorityWearPosition_UpperInner; // 0x30(0x04)
	int32_t PriorityWearPosition_UpperOuter; // 0x34(0x04)
	int32_t PriorityWearPosition_Lower; // 0x38(0x04)
	int32_t PriorityWearPosition_Bag; // 0x3c(0x04)
	int32_t PriorityAvatar_Hair; // 0x40(0x04)
	int32_t PriorityAvatar_Head; // 0x44(0x04)
	int32_t PriorityAvatar_Upper; // 0x48(0x04)
	int32_t PriorityAvatar_Lower; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SafeHouseNPCAvatarDataRow
// Size: 0x98 (Inherited: 0x10)
struct FSafeHouseNPCAvatarDataRow : public FDescRowBase {
public:

	/*struct TSoftObjectPtr<USkeletalMesh>*/char NPCSkeletalMesh[0x28]; // 0x10(0x28)
	/*struct TSoftClassPtr<UObject>*/char NPCAnimInsClass[0x28]; // 0x38(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char AnimSequence[0x28]; // 0x60(0x28)
	struct TArray<struct FCharacterAvatarItem> ExtraParts; // 0x88(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterAvatarItem
// Size: 0x70 (Inherited: 0x00)
struct FCharacterAvatarItem {
public:

	enum class ECharacterAvatarExtraTag ExtraTag; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName AvatarItemName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSoftObjectPath MeshPath; // 0x10(0x18)
	struct FName AttachSocket; // 0x28(0x08)
	struct FName MaterialSlotName; // 0x30(0x08)
	/*struct TSoftClassPtr<UObject>*/char AnimInstance[0x28]; // 0x38(0x28)
	struct TArray<struct FName> SkillItemMatSlotNames; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterVoiceInfo
// Size: 0x30 (Inherited: 0x10)
struct FCharacterVoiceInfo : public FDescRowBase {
public:

	struct FName CharacterAvatarID; // 0x10(0x08)
	struct TArray<struct FSoftObjectPath> CharacterVoices; // 0x18(0x10)
	struct FName HeroFashionName; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterSequenceDataRow
// Size: 0x50 (Inherited: 0x10)
struct FCharacterSequenceDataRow : public FDescRowBase {
public:

	bool IsValid; // 0x10(0x01)
	bool bUseTransitionCamera; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FSoftObjectPath LevelSequenceActor; // 0x18(0x18)
	struct FSoftObjectPath MatchLevelSequenceActor; // 0x30(0x18)
	struct FName LightGroupName; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterMasterPartDataRow
// Size: 0x70 (Inherited: 0x10)
struct FCharacterMasterPartDataRow : public FDescRowBase {
public:

	struct FSoftObjectPath UIMaleMasterPartPath; // 0x10(0x18)
	struct FSoftObjectPath UIFemaleMasterPartPath; // 0x28(0x18)
	struct FSoftObjectPath FPPMaleMasterPartPath; // 0x40(0x18)
	struct FSoftObjectPath FPPFemaleMasterPartPath; // 0x58(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterHelmetAdaptiveDataRow
// Size: 0x20 (Inherited: 0x10)
struct FCharacterHelmetAdaptiveDataRow : public FDescRowBase {
public:

	struct FName HelmetItemId; // 0x10(0x08)
	bool FemaleHairAdaptive; // 0x18(0x01)
	bool MaleHairAdaptive; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterFashionDataRow
// Size: 0xf8 (Inherited: 0x10)
struct FCharacterFashionDataRow : public FDescRowBase {
public:

	struct FName FashionID; // 0x10(0x08)
	int32_t WearPosition; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	int64_t BelongedHeroID; // 0x20(0x08)
	bool IsDefUnlock; // 0x28(0x01)
	bool IsDefEquip; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FText Name; // 0x30(0x18)
	struct FSoftObjectPath BrandIcon; // 0x48(0x18)
	struct TArray<struct FString> HeroItemIDs; // 0x60(0x10)
	int32_t Class; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FSoftObjectPath Icon; // 0x78(0x18)
	struct FText Desc; // 0x90(0x18)
	struct TArray<int32_t> PurchaseMethod; // 0xa8(0x10)
	struct FText ButtonDescription; // 0xb8(0x18)
	struct TArray<struct FSoftObjectPath> BundleIcons; // 0xd0(0x10)
	int32_t GoodsId; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FString SocialShareCDN; // 0xe8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AICharacterBodyPartMeshRow
// Size: 0x48 (Inherited: 0x10)
struct FAICharacterBodyPartMeshRow : public FDescRowBase {
public:

	struct FSoftObjectPath SkeletalMesh; // 0x10(0x18)
	struct FSoftObjectPath StaticMesh; // 0x28(0x18)
	struct FName AiName; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterSkinColorDataRow
// Size: 0x40 (Inherited: 0x28)
struct FCharacterSkinColorDataRow : public FPackageDescRow {
public:

	struct FName SkinName; // 0x28(0x08)
	struct FLinearColor SkinColor; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterUIMatRenderIngoreInfo
// Size: 0x20 (Inherited: 0x00)
struct FCharacterUIMatRenderIngoreInfo {
public:

	struct FName UIMatName; // 0x00(0x08)
	struct FSoftObjectPath UIMatReplacePath; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterAvatarCoreItem
// Size: 0x68 (Inherited: 0x00)
struct FCharacterAvatarCoreItem {
public:

	enum class ECharacterAvatarPartConfig AvatarPart; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSoftObjectPath MeshPath; // 0x08(0x18)
	/*struct TSoftClassPtr<UObject>*/char AnimInstance[0x28]; // 0x20(0x28)
	bool IsExistLowMemoryMeshPath; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FSoftObjectPath LowMemoryMeshPath; // 0x50(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeroVOData
// Size: 0x58 (Inherited: 0x10)
struct FHeroVOData : public FDescRowBase {
public:

	struct FText VODataID; // 0x10(0x18)
	struct FText LinesCN; // 0x28(0x18)
	struct FSoftObjectPath AudioPath; // 0x40(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SubLevelConfig
// Size: 0x18 (Inherited: 0x08)
struct FSubLevelConfig : public FTableRowBase {
public:

	struct TArray<struct FSoftObjectPath> LevelNames; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AnimShowAssetData
// Size: 0x40 (Inherited: 0x10)
struct FAnimShowAssetData : public FDescRowBase {
public:

	struct FName AnimShowID; // 0x10(0x08)
	bool bIsLevelSequence; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName AnimShowName; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct FSoftObjectPath AnimShowPath; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterDefaultNameTable
// Size: 0xc0 (Inherited: 0x10)
struct FCharacterDefaultNameTable : public FDescRowBase {
public:

	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	struct FName Pool; // 0x40(0x08)
	/*struct TSoftObjectPtr<UPaperSprite>*/char Icon[0x28]; // 0x48(0x28)
	/*struct TSoftObjectPtr<UPaperSprite>*/char RankIcon[0x28]; // 0x70(0x28)
	/*struct TSoftObjectPtr<UTexture2D>*/char HalfBodyImage[0x28]; // 0x98(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterFeatureLODConfigRow
// Size: 0x120 (Inherited: 0x28)
struct FCharacterFeatureLODConfigRow : public FPackageDescRow {
public:

	struct TMap<enum class ECharacterFeatureLODAvatarPart, bool> AvatarPart2VisableMap; // 0x28(0x50)
	struct TMap<enum class ECharacterFeatureLODAvatarPart, bool> AvatarPart2ShadowMap; // 0x78(0x50)
	struct TMap<struct FName, bool> ExtraAvatarItemName2UseAnimMap; // 0xc8(0x50)
	int32_t MeshMinLOD; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AbilityPlayMontageResources
// Size: 0x30 (Inherited: 0x00)
struct FAbilityPlayMontageResources {
public:

	struct UAnimSequenceBase* montageToPlayStartFPP; // 0x00(0x08)
	struct UAnimSequenceBase* montageToPlayLoopFPP; // 0x08(0x08)
	struct UAnimSequenceBase* montageToPlayEndFPP; // 0x10(0x08)
	struct UAnimSequenceBase* montageToPlayStartTPP; // 0x18(0x08)
	struct UAnimSequenceBase* montageToPlayLoopTPP; // 0x20(0x08)
	struct UAnimSequenceBase* montageToPlayEndTPP; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ChargeOfferId
// Size: 0x30 (Inherited: 0x10)
struct FChargeOfferId : public FDescRowBase {
public:

	struct FString channelID; // 0x10(0x10)
	struct FString OfferId; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ChatMinorLimitRegion
// Size: 0x20 (Inherited: 0x10)
struct FChatMinorLimitRegion : public FDescRowBase {
public:

	struct FString RegionNumCode; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CollectionTab
// Size: 0xa0 (Inherited: 0x10)
struct FCollectionTab : public FDescRowBase {
public:

	int32_t PageID; // 0x10(0x04)
	int32_t MainTabId; // 0x14(0x04)
	int32_t SubTabId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText MainTabName; // 0x20(0x18)
	struct FText SubTabName; // 0x38(0x18)
	int32_t MainTabOrder; // 0x50(0x04)
	int32_t SubTabOrder; // 0x54(0x04)
	int32_t bHide; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<int32_t> MainTabToMainTypes; // 0x60(0x10)
	struct TArray<int32_t> MainTabToSubTypes; // 0x70(0x10)
	struct TArray<int32_t> SubTabToMainTypes; // 0x80(0x10)
	struct TArray<int32_t> SubTabToSubTypes; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.WeaponSkinSceneData
// Size: 0x40 (Inherited: 0x10)
struct FWeaponSkinSceneData : public FDescRowBase {
public:

	struct FString WeaponSkinId; // 0x10(0x10)
	struct TArray<struct FSoftObjectPath> SubLevelNameGroup; // 0x20(0x10)
	struct FName LightGroupName; // 0x30(0x08)
	struct FName HeightFogName; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.WeaponNameAreaData
// Size: 0x38 (Inherited: 0x10)
struct FWeaponNameAreaData : public FDescRowBase {
public:

	struct FString WeaponID; // 0x10(0x10)
	struct FVector NameAreaLocOffset; // 0x20(0x0c)
	struct FRotator NameAreaRotation; // 0x2c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ThemeBackgroundData
// Size: 0x48 (Inherited: 0x10)
struct FThemeBackgroundData : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	int64_t BundleThemeId; // 0x18(0x08)
	struct TArray<int64_t> CollectionWeaponIds; // 0x20(0x10)
	struct FSoftObjectPath SceneBGPath; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CollectionWeaponDataConfig
// Size: 0x30 (Inherited: 0x10)
struct FCollectionWeaponDataConfig : public FDescRowBase {
public:

	struct FName DisplayCtrlType; // 0x10(0x08)
	struct FSoftObjectPath WeaponDataTablePath; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CollectionWeaponData
// Size: 0x58 (Inherited: 0x10)
struct FCollectionWeaponData : public FDescRowBase {
public:

	struct FString WeaponID; // 0x10(0x10)
	struct FVector WeaponLocation; // 0x20(0x0c)
	struct FRotator WeaponRotation; // 0x2c(0x0c)
	struct FVector WeaponScale; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString CameraType; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CombatRoleAbilityDataInfo
// Size: 0x58 (Inherited: 0x10)
struct FCombatRoleAbilityDataInfo : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	int64_t CombatRoleAbilityID; // 0x18(0x08)
	int64_t GameMode; // 0x20(0x08)
	int64_t ThrowWeapon; // 0x28(0x08)
	int32_t ThrowWeaponNum; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString AbilityList; // 0x38(0x10)
	struct FString SpecialItemIcon; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CommonErrorTextRow
// Size: 0x30 (Inherited: 0x10)
struct FCommonErrorTextRow : public FDescRowBase {
public:

	uint32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Message; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMItemToInventoryRuleRow
// Size: 0x50 (Inherited: 0x10)
struct FDFMItemToInventoryRuleRow : public FDescRowBase {
public:

	struct FName IDPrefix; // 0x10(0x08)
	int32_t Inventory; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText InventoryName; // 0x20(0x18)
	struct FText Desc; // 0x38(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HallWeaponItemDisplayTableRow
// Size: 0x50 (Inherited: 0x10)
struct FHallWeaponItemDisplayTableRow : public FDescRowBase {
public:

	struct FTransform TranformOffset; // 0x10(0x30)
	uint16_t DisplayType; // 0x40(0x02)
	char pad_42[0xe]; // 0x42(0x0e)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AbilityItemRow
// Size: 0x20 (Inherited: 0x10)
struct FAbilityItemRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	bool SwitchWhenAmmoEmpty; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ItemTagFilterMap
// Size: 0x38 (Inherited: 0x10)
struct FItemTagFilterMap : public FDescRowBase {
public:

	uint16_t TagId; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
	struct FText Desc; // 0x18(0x18)
	int32_t bIsMainTag; // 0x30(0x04)
	int32_t ParentTagID; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.PreloadLevelConfig
// Size: 0x38 (Inherited: 0x10)
struct FPreloadLevelConfig : public FDescRowBase {
public:

	struct FName MapName; // 0x10(0x08)
	struct FString MapPath; // 0x18(0x10)
	struct TArray<struct FString> NeedLoadedSubLevelsPath; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ToolConfigRow
// Size: 0x20 (Inherited: 0x10)
struct FToolConfigRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	int32_t MaxUseCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ResurrectionCoinRuleRow
// Size: 0x30 (Inherited: 0x10)
struct FResurrectionCoinRuleRow : public FDescRowBase {
public:

	int64_t DifficultLevel; // 0x10(0x08)
	int32_t DeathCount; // 0x18(0x04)
	int32_t ResurrectionCoinCount; // 0x1c(0x04)
	int32_t ResurrectionTempCoin; // 0x20(0x04)
	int32_t AutoResurrectionTimeStep; // 0x24(0x04)
	float UseResurrectionColdDownTime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.InGameMallConfigRow
// Size: 0x88 (Inherited: 0x10)
struct FInGameMallConfigRow : public FDescRowBase {
public:

	int64_t ExchangeID; // 0x10(0x08)
	int64_t ItemID; // 0x18(0x08)
	int32_t PageID; // 0x20(0x04)
	int32_t PagePropTypes; // 0x24(0x04)
	int32_t Level; // 0x28(0x04)
	struct FName Name; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	/*struct TSoftObjectPtr<UObject>*/char ItemIcon[0x28]; // 0x38(0x28)
	int32_t AttachPosition; // 0x60(0x04)
	float ConsumeMerit; // 0x64(0x04)
	int32_t Quality; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FItemID ItemIDInBP; // 0x70(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.WeaponDescInfo
// Size: 0x10 (Inherited: 0x00)
struct FWeaponDescInfo {
public:

	uint32_t ExtraInfoDataVesion; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* ExtraInfoData; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BeHitAudioRow
// Size: 0x30 (Inherited: 0x10)
struct FBeHitAudioRow : public FDescRowBase {
public:

	enum class EBeHitedType BeHitedType; // 0x10(0x01)
	enum class EDamageType DamageType; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct UGPAudioEventAsset* FPPBeHited_2DAudio; // 0x18(0x08)
	struct UGPAudioEventAsset* BeHitFromFPP_2DAudio; // 0x20(0x08)
	struct UGPAudioEventAsset* BeHit_3DAudio; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ArmorDurabilityDamageFormula
// Size: 0x30 (Inherited: 0x10)
struct FArmorDurabilityDamageFormula : public FDescRowBase {
public:

	uint32_t FormualID; // 0x10(0x04)
	float DamageFator; // 0x14(0x04)
	float ArmorDefendFator; // 0x18(0x04)
	float RandomValue; // 0x1c(0x04)
	float PenetrateFatorA; // 0x20(0x04)
	float ArmorFatorB; // 0x24(0x04)
	float ArmorMinusNumber60; // 0x28(0x04)
	float SumDivideNumberN; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SafeBoxTypeRow
// Size: 0x20 (Inherited: 0x10)
struct FSafeBoxTypeRow : public FDescRowBase {
public:

	uint64_t SafeBoxId; // 0x10(0x08)
	char SafeBoxType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ModularWeaponDescInfo
// Size: 0x10 (Inherited: 0x00)
struct FModularWeaponDescInfo {
public:

	struct TArray<struct FGPModularWeaponPartNode> WeaponParts; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ItemHoldAndUseRow
// Size: 0xb8 (Inherited: 0x10)
struct FItemHoldAndUseRow : public FDescRowBase {
public:

	struct FName ItemID; // 0x10(0x08)
	struct FName Desc; // 0x18(0x08)
	/*struct TSoftClassPtr<UObject>*/char HoldAndUseItemClass[0x28]; // 0x20(0x28)
	/*struct TSoftObjectPtr<UPaperSprite>*/char FireIcon[0x28]; // 0x48(0x28)
	bool bEnablePreview; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	/*struct TSoftClassPtr<UObject>*/char PreviewClass[0x28]; // 0x78(0x28)
	float PreviewDistance; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UGPAudioEventAsset* SuccGPAudioEvent; // 0xa8(0x08)
	struct UGPAudioEventAsset* FailedGPAudioEvent; // 0xb0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RepairArmorRatio
// Size: 0x10 (Inherited: 0x00)
struct FRepairArmorRatio {
public:

	uint64_t ArmorId; // 0x00(0x08)
	float RepairRatio; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ItemHealthPackageRow_SkillCD
// Size: 0x0c (Inherited: 0x00)
struct FItemHealthPackageRow_SkillCD {
public:

	int32_t AddAbilityCDSkillId; // 0x00(0x04)
	float AddAbilityCD; // 0x04(0x04)
	bool AddAbilityCDIsPercent; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ItemHealthSortTable
// Size: 0x20 (Inherited: 0x10)
struct FItemHealthSortTable : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	int32_t SortIndex; // 0x18(0x04)
	int32_t SortWeight; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ItemHealthRecommendRow
// Size: 0x30 (Inherited: 0x10)
struct FItemHealthRecommendRow : public FDescRowBase {
public:

	enum class EItemHealthRecommendType RecommendType; // 0x10(0x04)
	float Param01; // 0x14(0x04)
	bool bPersistent; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t Priority; // 0x1c(0x04)
	struct TArray<uint64_t> RecommandItemIds; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeadEquipApparenceAdaptationRow
// Size: 0x28 (Inherited: 0x10)
struct FHeadEquipApparenceAdaptationRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	uint32_t HeadTopPrioirty; // 0x18(0x04)
	uint32_t EyePrioirty; // 0x1c(0x04)
	uint32_t FacePrioirty; // 0x20(0x04)
	uint32_t EarPrioirty; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BoneModifyInfo
// Size: 0x2c (Inherited: 0x00)
struct FBoneModifyInfo {
public:

	struct FName BoneName; // 0x00(0x08)
	struct FVector BoneTransformOffset; // 0x08(0x0c)
	struct FRotator BoneRotationOffset; // 0x14(0x0c)
	struct FVector BoneScaleOffset; // 0x20(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HelmetApparenceAdaptationRow
// Size: 0x80 (Inherited: 0x10)
struct FHelmetApparenceAdaptationRow : public FDescRowBase {
public:

	struct TArray<struct FCharacterModifyBoneInfo> MaleDifLevelsModifyBoneInfos; // 0x10(0x10)
	struct TArray<struct FCharacterModifyBoneInfo> FemaleDifLevelsModifyBoneInfos; // 0x20(0x10)
	struct TMap<struct FName, struct FCharacterModifyBoneInfo> CustomModifyBoneInfos; // 0x30(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ChestHangingApparenceAdaptationRow
// Size: 0x30 (Inherited: 0x10)
struct FChestHangingApparenceAdaptationRow : public FDescRowBase {
public:

	struct TArray<struct FCharacterModifyBoneInfo> MaleDifLevelsModifyBoneInfos; // 0x10(0x10)
	struct TArray<struct FCharacterModifyBoneInfo> FemaleDifLevelsModifyBoneInfos; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BreastPlateAdaptationRow
// Size: 0x30 (Inherited: 0x10)
struct FBreastPlateAdaptationRow : public FDescRowBase {
public:

	struct TArray<struct FCharacterModifyBoneInfo> MaleDifLevelsModifyBoneInfos; // 0x10(0x10)
	struct TArray<struct FCharacterModifyBoneInfo> FemaleDifLevelsModifyBoneInfos; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BagApparenceAdaptationRow
// Size: 0x30 (Inherited: 0x10)
struct FBagApparenceAdaptationRow : public FDescRowBase {
public:

	struct TArray<struct FCharacterModifyBoneInfo> MaleDifLevelsModifyBoneInfos; // 0x10(0x10)
	struct TArray<struct FCharacterModifyBoneInfo> FemaleDifLevelsModifyBoneInfos; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.EquipmentPartRow
// Size: 0x28 (Inherited: 0x10)
struct FEquipmentPartRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	int32_t UseCnt; // 0x18(0x04)
	int32_t GainEquipPosLength; // 0x1c(0x04)
	int32_t GainEquipPosWidth; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMEquipmentRandomRuleRow
// Size: 0x48 (Inherited: 0x10)
struct FDFMEquipmentRandomRuleRow : public FDescRowBase {
public:

	struct FText Name; // 0x10(0x18)
	struct TArray<uint64_t> GuardianItemID; // 0x28(0x10)
	struct TArray<uint64_t> TraitorItemID; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMEquipmentGERow
// Size: 0x30 (Inherited: 0x10)
struct FDFMEquipmentGERow : public FDescRowBase {
public:

	struct FString Name; // 0x10(0x10)
	struct TArray<struct UClass*> GameplayEffectArray; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMBuffGEDurationRow
// Size: 0x40 (Inherited: 0x10)
struct FDFMBuffGEDurationRow : public FDescRowBase {
public:

	struct FName BuffType; // 0x10(0x08)
	struct FString Name; // 0x18(0x10)
	int32_t BuffPart; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct UClass*> GameplayEffectArray; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMBlueprintItemRow
// Size: 0xa8 (Inherited: 0x10)
struct FDFMBlueprintItemRow : public FDescRowBase {
public:

	struct FName ID; // 0x10(0x08)
	struct FText BlueprintName; // 0x18(0x18)
	struct FName BattlePositionID; // 0x30(0x08)
	struct FName BrandID; // 0x38(0x08)
	struct FText SeriesDes; // 0x40(0x18)
	struct FText Blueprintstory; // 0x58(0x18)
	int32_t RecvNum; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FText MaterialList; // 0x78(0x18)
	struct FText MaterialDes; // 0x90(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMCommonItemRow
// Size: 0x1f8 (Inherited: 0x10)
struct FDFMCommonItemRow : public FDescRowBase {
public:

	struct FName ItemID; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	struct FText SubName; // 0x30(0x18)
	int32_t GameItemType; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FText ShortName; // 0x50(0x18)
	int32_t Quality; // 0x68(0x04)
	int32_t Material; // 0x6c(0x04)
	int32_t MaxStackCount; // 0x70(0x04)
	int32_t Length; // 0x74(0x04)
	int32_t Width; // 0x78(0x04)
	bool CanDecomposed; // 0x7c(0x01)
	bool NeedDropped; // 0x7d(0x01)
	bool CanUsed; // 0x7e(0x01)
	bool CanBeGift; // 0x7f(0x01)
	struct FText Description; // 0x80(0x18)
	struct FText ShortDescription; // 0x98(0x18)
	float Capacity; // 0xb0(0x04)
	int32_t GainEquipPos; // 0xb4(0x04)
	int32_t DefaultCarrySlot; // 0xb8(0x04)
	bool CanStoreInSafeBox; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	int32_t Score; // 0xc0(0x04)
	bool IsCurrency; // 0xc4(0x01)
	bool bCanFastEquip; // 0xc5(0x01)
	bool IsModelOnly; // 0xc6(0x01)
	bool bIsCheck; // 0xc7(0x01)
	float Weight; // 0xc8(0x04)
	struct FName RecycleMoney; // 0xcc(0x08)
	int32_t RecyclePrice; // 0xd4(0x04)
	int32_t InitialGuidePrice; // 0xd8(0x04)
	int32_t SellPriceRates; // 0xdc(0x04)
	int32_t RedemptionRates; // 0xe0(0x04)
	int32_t DailyRecycleMax; // 0xe4(0x04)
	int32_t BitUsage; // 0xe8(0x04)
	int32_t TagFilterMain; // 0xec(0x04)
	int32_t TagFilterSub; // 0xf0(0x04)
	int32_t SortWeight; // 0xf4(0x04)
	int32_t Inventory; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct TArray<int32_t> SourceMapId; // 0x100(0x10)
	struct TArray<struct FText> SourceMapTitle; // 0x110(0x10)
	struct TArray<struct FText> SourceMapDesc; // 0x120(0x10)
	int32_t cdid; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct TArray<struct FString> Pictures; // 0x138(0x10)
	struct TArray<struct FWidgetTransform> PictureTransforms; // 0x148(0x10)
	struct FString MallItemIcon; // 0x158(0x10)
	struct FText ShortNameSec; // 0x168(0x18)
	float RecyclePricePercent; // 0x180(0x04)
	int32_t LootingAudioId; // 0x184(0x04)
	bool bHighValueItemNeedInspection; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	uint64_t ConnectedPool; // 0x190(0x08)
	bool bValuableItem; // 0x198(0x01)
	bool NoRedPoint; // 0x199(0x01)
	char pad_19A[0x2]; // 0x19a(0x02)
	int32_t CommercializeType; // 0x19c(0x04)
	uint64_t JumpId; // 0x1a0(0x08)
	struct FText ButtonDescription; // 0x1a8(0x18)
	struct FText UnlockTip; // 0x1c0(0x18)
	struct FText UsageTip; // 0x1d8(0x18)
	char pad_1F0[0x8]; // 0x1f0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ItemMaterialAssetRow
// Size: 0x90 (Inherited: 0x10)
struct FItemMaterialAssetRow : public FDescRowBase {
public:

	uint64_t ItemMaterialType; // 0x10(0x08)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char IdentifyAudioEvent[0x28]; // 0x18(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char PickupAudioEvent[0x28]; // 0x40(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char DropAudioEvent[0x28]; // 0x68(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.InventoryPresetItemRow
// Size: 0x38 (Inherited: 0x10)
struct FInventoryPresetItemRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	uint64_t ForceGID; // 0x18(0x08)
	uint64_t Num; // 0x20(0x08)
	enum class EAttachPosition pos; // 0x28(0x04)
	bool bEnabled; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float DurabilityPercent; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ItemPriceRow
// Size: 0x38 (Inherited: 0x10)
struct FItemPriceRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	uint32_t Price; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText Desription; // 0x20(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ContainerResourceConfig
// Size: 0x68 (Inherited: 0x10)
struct FContainerResourceConfig : public FDescRowBase {
public:

	struct FName InventoryIdName; // 0x10(0x08)
	/*struct TSoftObjectPtr<USkeletalMesh>*/char SkeletalMeshPath[0x28]; // 0x18(0x28)
	/*struct TSoftClassPtr<UObject>*/char AnimClassPath[0x28]; // 0x40(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ConversationConstants
// Size: 0x18 (Inherited: 0x10)
struct FConversationConstants : public FDescRowBase {
public:

	uint32_t ID; // 0x10(0x04)
	uint32_t Value; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ConversationLines
// Size: 0x60 (Inherited: 0x10)
struct FConversationLines : public FDescRowBase {
public:

	uint32_t ID; // 0x10(0x04)
	uint32_t Key; // 0x14(0x04)
	struct FText SpeakerCN; // 0x18(0x18)
	struct FText LinesCN; // 0x30(0x18)
	struct FText Audio; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ConversationProbs
// Size: 0x28 (Inherited: 0x10)
struct FConversationProbs : public FDescRowBase {
public:

	uint32_t ID; // 0x10(0x04)
	uint32_t Time; // 0x14(0x04)
	uint32_t Subtime; // 0x18(0x04)
	uint32_t LibraryID; // 0x1c(0x04)
	float LibraryProb; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CurrencyConfig
// Size: 0xa0 (Inherited: 0x10)
struct FCurrencyConfig : public FDescRowBase {
public:

	int32_t CurrencyId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText CurrencyName; // 0x18(0x18)
	struct FText CurrencyDesc; // 0x30(0x18)
	enum class ECurrencyType CurrencyType; // 0x48(0x01)
	enum class ECurrencyBindType BindType; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	uint64_t ItemID; // 0x50(0x08)
	int32_t UnbindCurrencyId; // 0x58(0x04)
	int32_t BindCurrencyId; // 0x5c(0x04)
	struct FText TransactionDesc; // 0x60(0x18)
	struct FString ImgPath; // 0x78(0x10)
	struct FString RichTxtImgId; // 0x88(0x10)
	uint64_t StoreBuyItemId; // 0x98(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DepositConstantRow
// Size: 0x20 (Inherited: 0x10)
struct FDepositConstantRow : public FDescRowBase {
public:

	struct FName ID; // 0x10(0x08)
	struct FName Value; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DepositSortClass
// Size: 0x60 (Inherited: 0x10)
struct FDepositSortClass : public FDescRowBase {
public:

	struct FText ClassName; // 0x10(0x18)
	struct TArray<uint64_t> ItemTypeID; // 0x28(0x10)
	struct TArray<uint64_t> TagId; // 0x38(0x10)
	struct FSoftObjectPath ClassIconPath; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DeviceAdapterConfig
// Size: 0x40 (Inherited: 0x10)
struct FDeviceAdapterConfig : public FDescRowBase {
public:

	struct FString DeviceModel; // 0x10(0x10)
	struct FString Resolution; // 0x20(0x10)
	int32_t LeftOffset; // 0x30(0x04)
	int32_t RightOffset; // 0x34(0x04)
	int32_t TopOffset; // 0x38(0x04)
	int32_t BottomOffset; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFCustomerServiceConfig
// Size: 0x48 (Inherited: 0x10)
struct FDFCustomerServiceConfig : public FDescRowBase {
public:

	enum class ECustomerServicesEntranceType EntranceType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString SupportPlatform; // 0x18(0x10)
	enum class ECustomerServicesDisplayType DisplayType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FText WebviewHtml; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMAbilityConfig
// Size: 0x28 (Inherited: 0x10)
struct FDFMAbilityConfig : public FDescRowBase {
public:

	struct FString Name; // 0x10(0x10)
	struct UClass* ProxyClass; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMColorDefineRow
// Size: 0x48 (Inherited: 0x10)
struct FDFMColorDefineRow : public FDescRowBase {
public:

	struct FLinearColor LinearColor; // 0x10(0x10)
	struct FSlateColor SlateColor; // 0x20(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFPermissionConfig
// Size: 0x90 (Inherited: 0x10)
struct FDFPermissionConfig : public FDescRowBase {
public:

	enum class EDFPermissionType PermissionType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText TitleText; // 0x18(0x18)
	struct FText DescribeText; // 0x30(0x18)
	struct FText JumpSettingDescribeText; // 0x48(0x18)
	enum class EDFPermissionShowType ShowType; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString SupportPlatform; // 0x68(0x10)
	struct FText PermissionDetailText; // 0x78(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DropNumericConfigTable
// Size: 0x38 (Inherited: 0x10)
struct FDropNumericConfigTable : public FDescRowBase {
public:

	uint32_t Key; // 0x10(0x04)
	enum class EDropItemType ItemType; // 0x14(0x01)
	enum class EDropSource DropSource; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FString Cfg1; // 0x18(0x10)
	struct FString Cfg2; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.EquipmentAdditionalDataRow
// Size: 0x40 (Inherited: 0x10)
struct FEquipmentAdditionalDataRow : public FDescRowBase {
public:

	struct FName ItemID; // 0x10(0x08)
	/*struct TSoftClassPtr<UObject>*/char AnimationBP[0x28]; // 0x18(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.EquipmentOutfitAmmoData
// Size: 0x48 (Inherited: 0x10)
struct FEquipmentOutfitAmmoData : public FDescRowBase {
public:

	int64_t WeaponItemType; // 0x10(0x08)
	struct FString Plan1; // 0x18(0x10)
	struct FString Plan2; // 0x28(0x10)
	struct FString Plan3; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.EquipmentAmmoData
// Size: 0x28 (Inherited: 0x10)
struct FEquipmentAmmoData : public FDescRowBase {
public:

	int64_t WeaponItemType; // 0x10(0x08)
	int64_t RecommendNum; // 0x18(0x08)
	int64_t CheckNum; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.EquipmentCheckConfig
// Size: 0x50 (Inherited: 0x10)
struct FEquipmentCheckConfig : public FDescRowBase {
public:

	char PanelType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText Title; // 0x18(0x18)
	struct FText Desc; // 0x30(0x18)
	char Slot; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ContainerBuffRow
// Size: 0x18 (Inherited: 0x00)
struct FContainerBuffRow {
public:

	uint32_t BuffId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FContainerReplaceBuffAttributeOp> AttributeOperateIDs; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ContainerReplaceBuffAttributeOp
// Size: 0x10 (Inherited: 0x00)
struct FContainerReplaceBuffAttributeOp {
public:

	uint64_t AttributeOpId; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.EquipmentPresetPriceDataInfo
// Size: 0x30 (Inherited: 0x10)
struct FEquipmentPresetPriceDataInfo : public FDescRowBase {
public:

	int64_t Key; // 0x10(0x08)
	int64_t TypeID; // 0x18(0x08)
	int64_t PresetId; // 0x20(0x08)
	int64_t PresetPrice; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.EquipmentPresetDataInfo
// Size: 0x68 (Inherited: 0x10)
struct FEquipmentPresetDataInfo : public FDescRowBase {
public:

	int64_t Key; // 0x10(0x08)
	int64_t TypeID; // 0x18(0x08)
	int64_t PresetId; // 0x20(0x08)
	struct FText PresetTitle; // 0x28(0x18)
	int64_t Position; // 0x40(0x08)
	int64_t ItemID; // 0x48(0x08)
	int64_t ItemNum; // 0x50(0x08)
	int64_t ConsumableID; // 0x58(0x08)
	int64_t RefreshPrice; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ErrcodeMsg
// Size: 0x50 (Inherited: 0x10)
struct FErrcodeMsg : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	struct FName Name; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText BaseDesc; // 0x20(0x18)
	struct FText ExtDesc; // 0x38(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ExpertFootStepConfig
// Size: 0x28 (Inherited: 0x10)
struct FExpertFootStepConfig : public FDescRowBase {
public:

	int64_t AudioStyleId; // 0x10(0x08)
	struct FName SwitchName; // 0x18(0x08)
	enum class EGPAudioFootSoundBodyType BodyType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ExpertTalentCommonPassiveData
// Size: 0x28 (Inherited: 0x10)
struct FExpertTalentCommonPassiveData : public FDescRowBase {
public:

	int64_t ArmedForceID; // 0x10(0x08)
	int64_t MPCommonCommonPassiveID; // 0x18(0x08)
	int64_t SOLCommonCommonPassiveID; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ExpertData
// Size: 0x88 (Inherited: 0x10)
struct FExpertData : public FDescRowBase {
public:

	struct FText HeroExpertID; // 0x10(0x18)
	struct FText ExpertTypeName; // 0x28(0x18)
	struct FText ExpertTalentName; // 0x40(0x18)
	struct FSoftObjectPath Icon; // 0x58(0x18)
	struct FText ExpertTalentDesc; // 0x70(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ExtensionBoxDesc
// Size: 0xf0 (Inherited: 0x10)
struct FExtensionBoxDesc : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	struct FString StorableItemTypeList; // 0x18(0x10)
	struct FString ExcludeTypeList; // 0x28(0x10)
	char GainPosWidth; // 0x38(0x01)
	char GainPosLength; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	uint64_t NextLvItemID; // 0x40(0x08)
	uint64_t MaterialItemID1; // 0x48(0x08)
	char MaterialNum1; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	uint64_t MaterialItemID2; // 0x58(0x08)
	char MaterialNum2; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	uint64_t MaterialItemID3; // 0x68(0x08)
	char MaterialNum3; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	uint64_t MaterialItemID4; // 0x78(0x08)
	char MaterialNum4; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	uint64_t MaterialItemID5; // 0x88(0x08)
	char MaterialNum5; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char TypeIcon[0x10]; // 0x98(0x10)
	struct TArray<struct FText> TypeTips; // 0xa8(0x10)
	/*struct TSoftObjectPtr<UPaperSprite>*/char BoxTabIcon[0x28]; // 0xb8(0x28)
	struct FString ExcludeQualityList; // 0xe0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.FashionSuitDataRow
// Size: 0x128 (Inherited: 0x10)
struct FFashionSuitDataRow : public FDescRowBase {
public:

	struct FName SuitId; // 0x10(0x08)
	/*struct TSet<struct FName>*/char MajorParts[0x50]; // 0x18(0x50)
	/*struct TSet<struct FName>*/char MinorParts[0x50]; // 0x68(0x50)
	/*struct TSet<struct FName>*/char BelongedHeroes[0x50]; // 0xb8(0x50)
	struct TArray<uint32_t> AttributeOperateIDArray; // 0x108(0x10)
	struct TArray<uint32_t> BuffIdArray; // 0x118(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.FashionPartDataRow
// Size: 0x90 (Inherited: 0x10)
struct FFashionPartDataRow : public FDescRowBase {
public:

	struct FName PartId; // 0x10(0x08)
	enum class EFashionWearPosition WearPosition; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	/*struct TSet<struct FName>*/char BelongedHeroes[0x50]; // 0x20(0x50)
	struct TArray<uint32_t> AttributeOperateIDArray; // 0x70(0x10)
	struct TArray<uint32_t> BuffIdArray; // 0x80(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.FashionMallDataRow
// Size: 0x60 (Inherited: 0x10)
struct FFashionMallDataRow : public FDescRowBase {
public:

	struct FName ItemID; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	int32_t Order; // 0x30(0x04)
	struct FName Money1; // 0x34(0x08)
	int32_t Price1; // 0x3c(0x04)
	struct FName Money2; // 0x40(0x08)
	int32_t Price2; // 0x48(0x04)
	struct FName Money3; // 0x4c(0x08)
	int32_t Price3; // 0x54(0x04)
	bool ForSale; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GameModeConfig
// Size: 0x58 (Inherited: 0x10)
struct FGameModeConfig : public FDescRowBase {
public:

	enum class EGameMainModeType MainModeType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText MainModeName; // 0x18(0x18)
	struct FText MainModeDesc; // 0x30(0x18)
	struct TArray<struct FGameSubMode> SubModes; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GameSubMode
// Size: 0x38 (Inherited: 0x00)
struct FGameSubMode {
public:

	enum class EGameSubModeType SubModeType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText SubModeName; // 0x08(0x18)
	struct FText SubModeDesc; // 0x20(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GarenaRegion2UrlInfo
// Size: 0x40 (Inherited: 0x10)
struct FGarenaRegion2UrlInfo : public FDescRowBase {
public:

	struct FString Region; // 0x10(0x10)
	struct FString CustomerServiceUrl; // 0x20(0x10)
	struct FString AccountDeletionUrl; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GarenaCode2RegionInfo
// Size: 0x30 (Inherited: 0x10)
struct FGarenaCode2RegionInfo : public FDescRowBase {
public:

	struct FString countryCode; // 0x10(0x10)
	struct FString Region; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GarenaLang2UrlInfo
// Size: 0x40 (Inherited: 0x10)
struct FGarenaLang2UrlInfo : public FDescRowBase {
public:

	struct FString Language; // 0x10(0x10)
	struct FString PrivacyPolicyUrl; // 0x20(0x10)
	struct FString TermsConditionsUrl; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GarenaPayUrl
// Size: 0x40 (Inherited: 0x10)
struct FGarenaPayUrl : public FDescRowBase {
public:

	struct FString RegionCode; // 0x10(0x10)
	struct FString SandboxURL; // 0x20(0x10)
	struct FString ProductionURL; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GlobalConstItemRow
// Size: 0x28 (Inherited: 0x10)
struct FGlobalConstItemRow : public FDescRowBase {
public:

	struct FName ID; // 0x10(0x08)
	struct FName Value; // 0x18(0x08)
	struct FName Desc; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GMGroupConfigRow
// Size: 0x38 (Inherited: 0x10)
struct FGMGroupConfigRow : public FDescRowBase {
public:

	struct FName GroupID; // 0x10(0x08)
	struct FText Desc; // 0x18(0x18)
	int32_t Priority; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GmSolGameStyle
// Size: 0x28 (Inherited: 0x10)
struct FGmSolGameStyle : public FDescRowBase {
public:

	struct FString LootStyleName; // 0x10(0x10)
	int32_t LootStyleID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideVedioConfig
// Size: 0x38 (Inherited: 0x10)
struct FGuideVedioConfig : public FDescRowBase {
public:

	uint64_t VedioId; // 0x10(0x08)
	struct FName VedioName; // 0x18(0x08)
	bool CanSkip; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FGuideVedioTexts> Subtitles; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideVedioTexts
// Size: 0x18 (Inherited: 0x00)
struct FGuideVedioTexts {
public:

	struct FName LaunguageTag; // 0x00(0x08)
	struct TArray<struct FGuideVedioTextRow> Texts; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideVedioTextRow
// Size: 0x38 (Inherited: 0x00)
struct FGuideVedioTextRow {
public:

	struct FText Text; // 0x00(0x18)
	struct FText NpcName; // 0x18(0x18)
	float StartTime; // 0x30(0x04)
	float EndTime; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideDisableOpItemConfig
// Size: 0x28 (Inherited: 0x10)
struct FGuideDisableOpItemConfig : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	struct TArray<int64_t> DisableOpStageList; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideMovieTypeConfig
// Size: 0x28 (Inherited: 0x10)
struct FGuideMovieTypeConfig : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	struct TArray<struct FName> Args; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideItemConfig
// Size: 0x20 (Inherited: 0x10)
struct FGuideItemConfig : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	struct FName ItemInfoList; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuidePrepare
// Size: 0x20 (Inherited: 0x10)
struct FGuidePrepare : public FDescRowBase {
public:

	int32_t PrepareID; // 0x10(0x04)
	struct FName PositionPropList; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideCondition
// Size: 0x20 (Inherited: 0x10)
struct FGuideCondition : public FDescRowBase {
public:

	int32_t ConditionID; // 0x10(0x04)
	int32_t ConditionType; // 0x14(0x04)
	int32_t MatchModeId; // 0x18(0x04)
	int32_t GameResult; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideEventConfig
// Size: 0x30 (Inherited: 0x10)
struct FGuideEventConfig : public FDescRowBase {
public:

	int64_t EventId; // 0x10(0x08)
	struct FText EventType; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuidePopTipsConfig
// Size: 0x30 (Inherited: 0x10)
struct FGuidePopTipsConfig : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	struct FText Desc; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideExplainConfig
// Size: 0x28 (Inherited: 0x10)
struct FGuideExplainConfig : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	struct TArray<int64_t> PopWindowConfigId; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuidePopFuctionDescConfig
// Size: 0xa0 (Inherited: 0x10)
struct FGuidePopFuctionDescConfig : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	struct FText Title; // 0x18(0x18)
	struct TArray<struct FGuideFuctionDescItemRow> DescInfo; // 0x30(0x10)
	bool bUseBtnGotoSummary; // 0x40(0x01)
	bool bUseBtnSkipGuide; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32_t Position; // 0x44(0x04)
	struct TArray<struct FGuideKeyTextRow> CompleteConditionTextAndKey; // 0x48(0x10)
	struct TArray<int32_t> ClickConfigId; // 0x58(0x10)
	bool bNotMask; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	int32_t ShowType; // 0x6c(0x04)
	float AutoTime; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char Audio[0x28]; // 0x78(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideFuctionDescItemRow
// Size: 0x30 (Inherited: 0x00)
struct FGuideFuctionDescItemRow {
public:

	struct FText Title; // 0x00(0x18)
	struct FText DescText; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuidePopWindowConfig
// Size: 0xb0 (Inherited: 0x10)
struct FGuidePopWindowConfig : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	struct FText Title; // 0x18(0x18)
	struct TArray<struct FGuidePopWindowItemRow> DescInfo; // 0x30(0x10)
	struct TArray<struct FGuidePopWindowItemRow> DescInfoForHD; // 0x40(0x10)
	bool bHideHudUI; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32_t ShowType; // 0x54(0x04)
	float AutoTime; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char Audio[0x28]; // 0x60(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AudioForHD[0x28]; // 0x88(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideWidgetConfig
// Size: 0x38 (Inherited: 0x10)
struct FGuideWidgetConfig : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	struct FName BPPath; // 0x18(0x08)
	struct FName WidgetName; // 0x20(0x08)
	struct FName UIName; // 0x28(0x08)
	bool IsHudUI; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideVisibilityConfig
// Size: 0x30 (Inherited: 0x10)
struct FGuideVisibilityConfig : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	bool IsVisible; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<int32_t> UIWidgetId; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideClickConfig
// Size: 0x178 (Inherited: 0x10)
struct FGuideClickConfig : public FDescRowBase {
public:

	int32_t GuideClickId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText TipsText; // 0x18(0x18)
	struct FText TipsTextForHD; // 0x30(0x18)
	struct TArray<struct FText> TipsTextForWidget; // 0x48(0x10)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char TipsAudio[0x28]; // 0x58(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char TipsAudioForHD[0x28]; // 0x80(0x28)
	struct TArray<int32_t> UIWidgetId; // 0xa8(0x10)
	int32_t UIWidgetIdForCalSizeAndPos; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<int32_t> UIWidgetIdOnlyDisplay; // 0xc0(0x10)
	struct TArray<int32_t> MaskImageType; // 0xd0(0x10)
	struct TArray<int32_t> UIType; // 0xe0(0x10)
	int32_t TipsPosType; // 0xf0(0x04)
	int32_t WeakClickType; // 0xf4(0x04)
	struct TArray<int32_t> UIOffset; // 0xf8(0x10)
	struct TArray<int32_t> UIOffsetForDisplay; // 0x108(0x10)
	struct TArray<int32_t> TipsOffset; // 0x118(0x10)
	struct TArray<int32_t> TriangleUIOffset; // 0x128(0x10)
	float TriangleScale; // 0x138(0x04)
	bool IsShowArrowWhenNoTips; // 0x13c(0x01)
	bool IsGoNextOnClickAny; // 0x13d(0x01)
	bool IsNotRealClick; // 0x13e(0x01)
	char pad_13F[0x1]; // 0x13f(0x01)
	float AutoHideTextTime; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	/*struct TSoftObjectPtr<UTexture2D>*/char MaskBgImage[0x28]; // 0x148(0x28)
	bool IsNotMaskTopBar; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	int32_t ExLoopAnimType; // 0x174(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideDialogConfig
// Size: 0x60 (Inherited: 0x10)
struct FGuideDialogConfig : public FDescRowBase {
public:

	int32_t GuideDialogId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText NpcName; // 0x18(0x18)
	struct TArray<struct FText> Dialog; // 0x30(0x10)
	/*struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>>*/char NpcSound[0x10]; // 0x40(0x10)
	struct TArray<int32_t> UIOffset; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideStageClientOnlyConfig
// Size: 0x60 (Inherited: 0x10)
struct FGuideStageClientOnlyConfig : public FDescRowBase {
public:

	int32_t GuideStageId; // 0x10(0x04)
	int32_t FirstStepGuideId; // 0x14(0x04)
	bool IsUse; // 0x18(0x01)
	bool IsNewPlayerGuide; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32_t Priority; // 0x1c(0x04)
	bool IsSelfFinishWhenBreak; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FGuideConditionItem> StartCondition; // 0x28(0x10)
	bool IsSolGuide; // 0x38(0x01)
	bool IsRaidGuide; // 0x39(0x01)
	bool IsMpGuide; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct TArray<int32_t> ForeverEndArgs; // 0x40(0x10)
	int32_t MaxTimesPerGame; // 0x50(0x04)
	int32_t AutoPlayAgainCD; // 0x54(0x04)
	int32_t PlayCD; // 0x58(0x04)
	bool IsNeedReplayOnOtherGuideEnd; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideConditionItem
// Size: 0x18 (Inherited: 0x00)
struct FGuideConditionItem {
public:

	int64_t ConditionID; // 0x00(0x08)
	struct TArray<int32_t> Params; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideStageConfig
// Size: 0x30 (Inherited: 0x10)
struct FGuideStageConfig : public FDescRowBase {
public:

	int32_t GuideStageId; // 0x10(0x04)
	bool IsNewPlayerGuideFirstStage; // 0x14(0x01)
	bool IsNotForce; // 0x15(0x01)
	bool IsSetDSStagePassed; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	int32_t PrepareID; // 0x18(0x04)
	int32_t RealFinishConditionId; // 0x1c(0x04)
	struct TArray<int32_t> NextStageId; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HallVehicleCameraData
// Size: 0x58 (Inherited: 0x10)
struct FHallVehicleCameraData : public FDescRowBase {
public:

	struct FString VehicleId; // 0x10(0x10)
	struct FVector CameraLocation; // 0x20(0x0c)
	struct FVector ModifiedCameraLocation; // 0x2c(0x0c)
	struct FString CameraType; // 0x38(0x10)
	struct FString ModifiedCameraType; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeadIconData
// Size: 0x50 (Inherited: 0x10)
struct FHeadIconData : public FDescRowBase {
public:

	struct FString IconId; // 0x10(0x10)
	struct FText Name; // 0x20(0x18)
	struct FSoftObjectPath ItemSpriteIcon; // 0x38(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeroCardData
// Size: 0xd0 (Inherited: 0x10)
struct FHeroCardData : public FDescRowBase {
public:

	struct FName HeroCardId; // 0x10(0x08)
	struct TArray<struct FName> BelongedHeroIDs; // 0x18(0x10)
	bool IsDefUnlock; // 0x28(0x01)
	bool IsDefEquip; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FName Title; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText CardName; // 0x38(0x18)
	int32_t CardLevel; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FSoftObjectPath CardPath; // 0x58(0x18)
	struct FSoftObjectPath UIPath; // 0x70(0x18)
	struct TArray<int32_t> PurchaseMethod; // 0x88(0x10)
	struct FText ButtonDescription; // 0x98(0x18)
	struct FText CardDescription; // 0xb0(0x18)
	int32_t GoodsId; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeroRecruitmentTask
// Size: 0x38 (Inherited: 0x10)
struct FHeroRecruitmentTask : public FDescRowBase {
public:

	int32_t Sequence; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t HeroID; // 0x18(0x08)
	int32_t RecruitSeletcedNum; // 0x20(0x04)
	int32_t RecruitTotalGoalNum; // 0x24(0x04)
	struct TArray<int64_t> OpMetaGoals; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeroUnLock
// Size: 0x48 (Inherited: 0x10)
struct FHeroUnLock : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	int64_t HeroID; // 0x18(0x08)
	int32_t GetType; // 0x20(0x04)
	struct FName Parameter; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FText Name; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeroDataRow
// Size: 0x120 (Inherited: 0x10)
struct FHeroDataRow : public FDescRowBase {
public:

	struct FName HeroID; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	struct FText Title; // 0x30(0x18)
	struct FText Desc; // 0x48(0x18)
	struct FSoftObjectPath Icon; // 0x60(0x18)
	struct FSoftObjectPath AvatarIcon_PC; // 0x78(0x18)
	struct FSoftObjectPath AvatarIcon; // 0x90(0x18)
	int64_t ArmedForceID; // 0xa8(0x08)
	int64_t ExpertId; // 0xb0(0x08)
	struct FSoftObjectPath ExpertIcon; // 0xb8(0x18)
	bool bUserSelectable; // 0xd0(0x01)
	bool bIsInit; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	int32_t LoadLevel; // 0xd4(0x04)
	struct FSoftObjectPath BackgroundIcon; // 0xd8(0x18)
	int64_t FootstepAudioStyleID; // 0xf0(0x08)
	struct FSoftObjectPath CodeNameImage; // 0xf8(0x18)
	struct FString SocialShareCDN; // 0x110(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeroProfessionDataRow
// Size: 0x78 (Inherited: 0x10)
struct FHeroProfessionDataRow : public FDescRowBase {
public:

	struct FName ProfessionId; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	struct FText ShortName; // 0x30(0x18)
	struct FText Desc; // 0x48(0x18)
	struct FSoftObjectPath Icon; // 0x60(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeroGoalDesc
// Size: 0x30 (Inherited: 0x10)
struct FHeroGoalDesc : public FDescRowBase {
public:

	uint64_t GoalID; // 0x10(0x08)
	struct FText Desc; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeroLevel2Rank
// Size: 0x30 (Inherited: 0x10)
struct FHeroLevel2Rank : public FDescRowBase {
public:

	int32_t Level; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Rank; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeroLevel
// Size: 0x50 (Inherited: 0x10)
struct FHeroLevel : public FDescRowBase {
public:

	uint64_t HeroID; // 0x10(0x08)
	int32_t OpMetaLevel; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	uint64_t OpMetaTaskID; // 0x20(0x08)
	int32_t OpMetaSeletcedNum; // 0x28(0x04)
	int32_t OpMetaTotalGoalNum; // 0x2c(0x04)
	struct TArray<uint64_t> OpMetaGoals; // 0x30(0x10)
	struct TArray<uint64_t> OpMetaRewards; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeroArchive
// Size: 0xa0 (Inherited: 0x10)
struct FHeroArchive : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	int32_t ArchiveID; // 0x18(0x04)
	int32_t OpMetaLevel; // 0x1c(0x04)
	int32_t ArchiveType; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText ArchiveName; // 0x28(0x18)
	struct FText ArchiveSubName; // 0x40(0x18)
	struct FSoftObjectPath ArchiveBGImg; // 0x58(0x18)
	struct FSoftObjectPath ArchiveIcon; // 0x70(0x18)
	struct FText ArchiveDesc; // 0x88(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeroProfile
// Size: 0x118 (Inherited: 0x10)
struct FHeroProfile : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	struct FText Title; // 0x30(0x18)
	struct FSoftObjectPath TeamIcon; // 0x48(0x18)
	struct FText Birthday; // 0x60(0x18)
	struct FText Height; // 0x78(0x18)
	struct FText Weight; // 0x90(0x18)
	struct FText Organization; // 0xa8(0x18)
	struct FSoftObjectPath OrganizationIcon; // 0xc0(0x18)
	struct FText Evaluation; // 0xd8(0x18)
	struct FSoftObjectPath HeroBGPath; // 0xf0(0x18)
	struct TArray<int32_t> ArchiveIds; // 0x108(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeroVideoData
// Size: 0x30 (Inherited: 0x10)
struct FHeroVideoData : public FDescRowBase {
public:

	struct FName SceneVideoId; // 0x10(0x08)
	struct FName DefaultSceneVideoId; // 0x18(0x08)
	struct FName MatchSceneVideoInId; // 0x20(0x08)
	struct FName MatchSceneVideoLoopId; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HotspotBanner
// Size: 0x40 (Inherited: 0x08)
struct FHotspotBanner : public FTableRowBase {
public:

	int64_t ID; // 0x08(0x08)
	struct FString DIYString1; // 0x10(0x10)
	struct FString DIYString2; // 0x20(0x10)
	struct FString PicResource; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HZAchievement
// Size: 0xe8 (Inherited: 0x08)
struct FHZAchievement : public FTableRowBase {
public:

	int64_t ID; // 0x08(0x08)
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	int32_t Order; // 0x40(0x04)
	int32_t Model; // 0x44(0x04)
	int64_t HeroID; // 0x48(0x08)
	int32_t Level; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<int64_t> BadgeId; // 0x58(0x10)
	struct FString Mission1; // 0x68(0x10)
	struct FString Mission2; // 0x78(0x10)
	struct FString Mission3; // 0x88(0x10)
	struct FString Mission4; // 0x98(0x10)
	struct TArray<int64_t> MissionSOL; // 0xa8(0x10)
	struct TArray<int64_t> MissionBR; // 0xb8(0x10)
	int32_t Hide; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FText MissionText; // 0xd0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.InGameBattleClassConfig
// Size: 0x60 (Inherited: 0x10)
struct FInGameBattleClassConfig : public FDescRowBase {
public:

	enum class EInGameBattleClassType ClassType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	uint64_t ExpertId; // 0x18(0x08)
	struct TArray<uint32_t> BuffIdArray; // 0x20(0x10)
	struct TArray<uint64_t> SpecialItemIdArray; // 0x30(0x10)
	struct TArray<uint32_t> SpecialItemCountArray; // 0x40(0x10)
	struct TArray<uint32_t> SpecialItemSlotArray; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ItemBindDesc
// Size: 0x38 (Inherited: 0x08)
struct FItemBindDesc : public FTableRowBase {
public:

	int32_t BindType; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FText> TypeDesc; // 0x10(0x10)
	struct FText TypeAddDesc; // 0x20(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SpecifiedDropItemInfo
// Size: 0x10 (Inherited: 0x00)
struct FSpecifiedDropItemInfo {
public:

	int64_t ItemID; // 0x00(0x08)
	int32_t ItemNum; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.PropInfo
// Size: 0x10 (Inherited: 0x00)
struct FPropInfo {
public:

	uint64_t PropId; // 0x00(0x08)
	uint64_t OwnerId; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LootingStateParam
// Size: 0x28 (Inherited: 0x00)
struct FLootingStateParam {
public:

	int64_t CmdGid; // 0x00(0x08)
	enum class EPlayerLootingState LootingState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UObject* LootContainer; // 0x10(0x08)
	bool bIsInteractingWithPickups; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	uint64_t HighValueItemGid; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ItemLabel
// Size: 0x40 (Inherited: 0x10)
struct FItemLabel : public FDescRowBase {
public:

	int32_t LabelID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString LabelName; // 0x18(0x10)
	struct FString Description; // 0x28(0x10)
	bool bIsDebuff; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CommercializeData
// Size: 0x30 (Inherited: 0x10)
struct FCommercializeData : public FDescRowBase {
public:

	int32_t CommercializeType; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FSoftObjectPath CommercializeImage; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.WeaponBpSource
// Size: 0x58 (Inherited: 0x10)
struct FWeaponBpSource : public FDescRowBase {
public:

	struct FName BattlePositionID; // 0x10(0x08)
	struct FText BattlePositionDes; // 0x18(0x18)
	/*struct TSoftObjectPtr<UTexture2D>*/char BPImage[0x28]; // 0x30(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ItemViewData
// Size: 0x70 (Inherited: 0x10)
struct FItemViewData : public FDescRowBase {
public:

	int32_t ItemViewStyle; // 0x10(0x04)
	struct FMargin LargeContainerPadding; // 0x14(0x10)
	struct FMargin SmallContainerPadding; // 0x24(0x10)
	struct FMargin SpecialContainerPadding; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FTextStyle> TextStyle; // 0x48(0x10)
	struct TArray<struct FCompAnchorData> CompPositionInfo; // 0x58(0x10)
	struct FVector2D BoxSize; // 0x68(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CompAnchorData
// Size: 0x2c (Inherited: 0x00)
struct FCompAnchorData {
public:

	int32_t PositionInfo; // 0x00(0x04)
	struct FMargin offset; // 0x04(0x10)
	struct FAnchors Anchors; // 0x14(0x10)
	struct FVector2D Alignment; // 0x24(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TextStyle
// Size: 0x08 (Inherited: 0x00)
struct FTextStyle {
public:

	int32_t pos; // 0x00(0x04)
	int32_t Style; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.JumpConfig
// Size: 0x68 (Inherited: 0x10)
struct FJumpConfig : public FDescRowBase {
public:

	int32_t JumpId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Desc; // 0x18(0x10)
	int32_t JumpFirstEnum; // 0x28(0x04)
	int32_t JumpSecendEnum; // 0x2c(0x04)
	int32_t JumpThridEnum; // 0x30(0x04)
	int32_t JumpFourthEnum; // 0x34(0x04)
	struct FString ExParams; // 0x38(0x10)
	struct FString StartTime; // 0x48(0x10)
	struct FString EndTime; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.JumpToConfig
// Size: 0x38 (Inherited: 0x10)
struct FJumpToConfig : public FDescRowBase {
public:

	int32_t JumpTypeId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText ModuleName; // 0x18(0x18)
	struct FName ExParams; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.KeyBoxRow
// Size: 0x38 (Inherited: 0x10)
struct FKeyBoxRow : public FDescRowBase {
public:

	int32_t Index; // 0x10(0x04)
	struct FName ItemID; // 0x14(0x08)
	int32_t MapID; // 0x1c(0x04)
	int32_t DefaultSlotNum; // 0x20(0x04)
	int32_t LevelSlotNums1; // 0x24(0x04)
	int32_t LevelSlotNums2; // 0x28(0x04)
	int32_t LevelSlotNums3; // 0x2c(0x04)
	int32_t LevelSlotNums4; // 0x30(0x04)
	int32_t BoxLength; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.KeyBoxUnlockRow
// Size: 0x30 (Inherited: 0x10)
struct FKeyBoxUnlockRow : public FDescRowBase {
public:

	struct FName ItemID; // 0x10(0x08)
	struct FName KeyBoxID; // 0x18(0x08)
	int32_t MapID; // 0x20(0x04)
	int32_t SlotLevel; // 0x24(0x04)
	int32_t UnlockSlotNum; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMKeyInfoRow
// Size: 0xf0 (Inherited: 0x08)
struct FDFMKeyInfoRow : public FTableRowBase {
public:

	uint64_t ID; // 0x08(0x08)
	struct FText Name; // 0x10(0x18)
	struct FString MapLevelStr; // 0x28(0x10)
	struct FText MapName; // 0x38(0x18)
	uint16_t MapID; // 0x50(0x02)
	char pad_52[0x6]; // 0x52(0x06)
	struct FText Area; // 0x58(0x18)
	struct FText LockLocation; // 0x70(0x18)
	struct FVector LockCoord; // 0x88(0x0c)
	int32_t Durability; // 0x94(0x04)
	struct FText Description; // 0x98(0x18)
	struct FText BehindTheDoor; // 0xb0(0x18)
	char Mechanic; // 0xc8(0x01)
	char Rank; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct TArray<struct FText> KeySpawnLocation; // 0xd0(0x10)
	struct TArray<uint64_t> ConnectionRelation; // 0xe0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GeneralLevelSequenceData
// Size: 0x30 (Inherited: 0x10)
struct FGeneralLevelSequenceData : public FDescRowBase {
public:

	struct FSoftObjectPath SequencePath; // 0x10(0x18)
	int32_t LoopCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DrawLineData
// Size: 0x10 (Inherited: 0x00)
struct FDrawLineData {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFResourceTag
// Size: 0x40 (Inherited: 0x10)
struct FDFResourceTag : public FDescRowBase {
public:

	struct FString Filename; // 0x10(0x10)
	struct FString Tag; // 0x20(0x10)
	struct FString Info; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LitePackageDownload
// Size: 0x90 (Inherited: 0x10)
struct FLitePackageDownload : public FDescRowBase {
public:

	int32_t QuestID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ModuleKey; // 0x18(0x10)
	struct FText QuestName; // 0x28(0x18)
	struct FText QuestDesc; // 0x40(0x18)
	struct FString PostName; // 0x58(0x10)
	int32_t Category; // 0x68(0x04)
	int32_t TriggerStyle; // 0x6c(0x04)
	int32_t Priority; // 0x70(0x04)
	int32_t MapOrModeDownload; // 0x74(0x04)
	struct FString MapOrModeParams; // 0x78(0x10)
	int32_t IsDeletable; // 0x88(0x04)
	int32_t QuestPlatform; // 0x8c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LobbyAdConfig
// Size: 0x50 (Inherited: 0x10)
struct FLobbyAdConfig : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Asset; // 0x18(0x10)
	int32_t Type; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString StartTime; // 0x30(0x10)
	struct FString EndTime; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LobbyChatParam
// Size: 0x40 (Inherited: 0x10)
struct FLobbyChatParam : public FDescRowBase {
public:

	struct FString ParamKey; // 0x10(0x10)
	float ParamValue; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText Desc; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LoginUI
// Size: 0x20 (Inherited: 0x10)
struct FLoginUI : public FDescRowBase {
public:

	enum class EGameBuildConfiguration TargetBuildConfiguration; // 0x10(0x01)
	bool bShowDevelopBtn; // 0x11(0x01)
	bool bShowDownloadBtn; // 0x12(0x01)
	bool bShowLanguageBtn; // 0x13(0x01)
	bool bShowServiceBtn; // 0x14(0x01)
	bool bShowAnnounceBtn; // 0x15(0x01)
	bool bShowFixBtn; // 0x16(0x01)
	bool bShowScanLoginBtn; // 0x17(0x01)
	bool bShopDevelopPanelBtn; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LootingSearchAudioData
// Size: 0x68 (Inherited: 0x10)
struct FLootingSearchAudioData : public FDescRowBase {
public:

	enum class EPickupContainerLootAudioType PickupContainerLootAudioType; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char GPAudioPlayEventAsset[0x28]; // 0x18(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char GPAudioStopEventAsset[0x28]; // 0x40(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.WeaponDropToGroundAudioData
// Size: 0x40 (Inherited: 0x10)
struct FWeaponDropToGroundAudioData : public FDescRowBase {
public:

	enum class EPhysicalSurface PhysicalSurface; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char GPAudioEventAsset[0x28]; // 0x18(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LootingAudioData
// Size: 0x180 (Inherited: 0x10)
struct FLootingAudioData : public FDescRowBase {
public:

	int32_t LootingAudioId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char DragItemView1PAudio[0x28]; // 0x18(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char DropItemView1PAudio[0x28]; // 0x40(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char Equip1PAudio[0x28]; // 0x68(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char UnEquip1PAudio[0x28]; // 0x90(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char DiscardFromGrid1PAudio[0x28]; // 0xb8(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char DiscardFromEquipSlot1PAudio[0x28]; // 0xe0(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char DiscardFromEquipSlot3PAudio[0x28]; // 0x108(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char InGamePickup3PAudio[0x28]; // 0x130(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char InGameEquip3PAudio[0x28]; // 0x158(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MandelBrickConstants
// Size: 0x20 (Inherited: 0x10)
struct FMandelBrickConstants : public FDescRowBase {
public:

	uint64_t ConstantID; // 0x10(0x08)
	uint64_t ConstantValue; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LotteryBoxConfig
// Size: 0x60 (Inherited: 0x10)
struct FLotteryBoxConfig : public FDescRowBase {
public:

	uint64_t boxId; // 0x10(0x08)
	struct FText BoxName; // 0x18(0x18)
	uint64_t Type; // 0x30(0x08)
	struct FText RuleDescription; // 0x38(0x18)
	uint64_t ShowID1; // 0x50(0x08)
	uint64_t ShowID2; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LotteryBoxPropConfig
// Size: 0x58 (Inherited: 0x10)
struct FLotteryBoxPropConfig : public FDescRowBase {
public:

	uint64_t NumID; // 0x10(0x08)
	uint64_t GroupID; // 0x18(0x08)
	uint64_t PropId; // 0x20(0x08)
	uint64_t Num; // 0x28(0x08)
	uint64_t ActiveFlag; // 0x30(0x08)
	uint64_t RestoreFlag; // 0x38(0x08)
	uint64_t SendByMail; // 0x40(0x08)
	float EstimatedProbability; // 0x48(0x04)
	float ProbShowed; // 0x4c(0x04)
	uint64_t AcquisitionGuaranteed; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LotteryBoxGroupConfig
// Size: 0x68 (Inherited: 0x10)
struct FLotteryBoxGroupConfig : public FDescRowBase {
public:

	uint64_t NumID; // 0x10(0x08)
	uint64_t boxId; // 0x18(0x08)
	uint64_t GroupID; // 0x20(0x08)
	uint64_t ActiveFlag; // 0x28(0x08)
	uint64_t IndepProb; // 0x30(0x08)
	uint64_t Prob; // 0x38(0x08)
	uint64_t RestoreFlag; // 0x40(0x08)
	uint64_t ChangeStart; // 0x48(0x08)
	uint64_t ChangeRate; // 0x50(0x08)
	uint64_t TimeAssured; // 0x58(0x08)
	uint64_t CoreFlag; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LotteryPool
// Size: 0x68 (Inherited: 0x10)
struct FLotteryPool : public FDescRowBase {
public:

	int64_t PoolId; // 0x10(0x08)
	int64_t PoolRandomCnt; // 0x18(0x08)
	int64_t ItemID; // 0x20(0x08)
	int64_t Num; // 0x28(0x08)
	struct FText Description; // 0x30(0x18)
	bool IsDropDirectly; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	int64_t Weight; // 0x50(0x08)
	bool RestoreFlag; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	int64_t InventoryTypeStr; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LotteryPoolClient
// Size: 0x50 (Inherited: 0x10)
struct FLotteryPoolClient : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	int64_t PoolId; // 0x18(0x08)
	int64_t ItemID; // 0x20(0x08)
	struct FText Description; // 0x28(0x18)
	bool IsDropDirectly; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	int64_t Num; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LotteryProbDistributionRow
// Size: 0x58 (Inherited: 0x10)
struct FLotteryProbDistributionRow : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	int64_t LotteryId; // 0x18(0x08)
	int32_t LotteryRound; // 0x20(0x04)
	int32_t Cost; // 0x24(0x04)
	int32_t frequency; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString RewardItem; // 0x30(0x10)
	int64_t SpecialItem; // 0x40(0x08)
	int32_t SortIndex; // 0x48(0x04)
	int32_t IsGreatReward; // 0x4c(0x04)
	int32_t Weight; // 0x50(0x04)
	int32_t IsGreatMP4; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LotteryProp
// Size: 0x38 (Inherited: 0x10)
struct FLotteryProp : public FDescRowBase {
public:

	int64_t ItemID; // 0x10(0x08)
	struct FString Action; // 0x18(0x10)
	struct FString LotteryPoolId; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MailAvatar
// Size: 0x40 (Inherited: 0x08)
struct FMailAvatar : public FTableRowBase {
public:

	int64_t AvatarID; // 0x08(0x08)
	struct FText Sender; // 0x10(0x18)
	struct FSoftObjectPath AvatarPath; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MallInfo
// Size: 0x100 (Inherited: 0x10)
struct FMallInfo : public FDescRowBase {
public:

	int64_t ExchangeID; // 0x10(0x08)
	int64_t ItemID; // 0x18(0x08)
	struct FName Name; // 0x20(0x08)
	struct FName Merchant; // 0x28(0x08)
	int32_t ExchangeType; // 0x30(0x04)
	int32_t Order; // 0x34(0x04)
	int32_t UnlockLv; // 0x38(0x04)
	int32_t LabelNo1; // 0x3c(0x04)
	int32_t LabelNo2; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	int64_t CostItem1ID; // 0x48(0x08)
	int32_t CostItem1Num; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	int64_t CostItem2ID; // 0x58(0x08)
	int32_t CostItem2Num; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	int64_t CostItem3ID; // 0x68(0x08)
	int32_t CostItem3Num; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	int64_t CostItem4ID; // 0x78(0x08)
	int32_t CostItem4Num; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	int64_t CostItem5ID; // 0x88(0x08)
	int32_t CostItem5Num; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	int64_t CostItem6ID; // 0x98(0x08)
	int32_t CostItem6Num; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	int64_t CostItem7ID; // 0xa8(0x08)
	int32_t CostItem7Num; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	int64_t CostItem8ID; // 0xb8(0x08)
	int32_t CostItem8Num; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	int64_t CostItem9ID; // 0xc8(0x08)
	int32_t CostItem9Num; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	int64_t CostItem10ID; // 0xd8(0x08)
	int32_t CostItem10Num; // 0xe0(0x04)
	int32_t MinHourlySellingNum; // 0xe4(0x04)
	int32_t MaxHourlySellingNum; // 0xe8(0x04)
	int32_t BaseChangeRatio; // 0xec(0x04)
	int32_t DefaultHourlySellingNum; // 0xf0(0x04)
	bool ForSale; // 0xf4(0x01)
	bool CanBuy; // 0xf5(0x01)
	char pad_F6[0x2]; // 0xf6(0x02)
	int32_t PurchaseLimit; // 0xf8(0x04)
	bool IsPanicBuying; // 0xfc(0x01)
	bool IsMain; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MandelBrickScanningSystemLibraries
// Size: 0x58 (Inherited: 0x10)
struct FMandelBrickScanningSystemLibraries : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	int32_t LibraryID; // 0x14(0x04)
	int32_t LineID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText LineString; // 0x20(0x18)
	struct FText LineAudio; // 0x38(0x18)
	int32_t LineWeight; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MandelBrickScanningSystemCases
// Size: 0x28 (Inherited: 0x10)
struct FMandelBrickScanningSystemCases : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	int32_t TimeID; // 0x14(0x04)
	int32_t CaseID; // 0x18(0x04)
	int32_t SilenceProbability; // 0x1c(0x04)
	int32_t LibraryID; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MapBoardEasterEgg
// Size: 0x28 (Inherited: 0x10)
struct FMapBoardEasterEgg : public FDescRowBase {
public:

	uint32_t ID; // 0x10(0x04)
	uint32_t WithRandomConversation; // 0x14(0x04)
	uint32_t Case; // 0x18(0x04)
	uint32_t Probability; // 0x1c(0x04)
	uint32_t CoolDown; // 0x20(0x04)
	uint32_t boxId; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SOLExitConfig
// Size: 0x30 (Inherited: 0x10)
struct FSOLExitConfig : public FDescRowBase {
public:

	int32_t PlayerExitID; // 0x10(0x04)
	int32_t MapID; // 0x14(0x04)
	struct FText PlayerExitName; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MapAreaInfo
// Size: 0x28 (Inherited: 0x10)
struct FMapAreaInfo : public FDescRowBase {
public:

	struct FString AreaName; // 0x10(0x10)
	int32_t AreaID; // 0x20(0x04)
	bool Precompile; // 0x24(0x01)
	enum class EWorldScale WorldScale; // 0x25(0x01)
	bool AreaNameCheckContain; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MapConfig
// Size: 0x90 (Inherited: 0x10)
struct FMapConfig : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText DisplayName; // 0x18(0x18)
	struct FString LevelName; // 0x30(0x10)
	struct FString SubWorldName; // 0x40(0x10)
	struct FString LevelFullPath; // 0x50(0x10)
	int32_t TargetKillCount; // 0x60(0x04)
	int32_t MaxMatchDuration; // 0x64(0x04)
	bool bAddToCook; // 0x68(0x01)
	bool bShowInMapSelection; // 0x69(0x01)
	bool bUseFastNetFrame; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
	struct FText MapDesc; // 0x70(0x18)
	bool bStreamingLevel; // 0x88(0x01)
	bool bUsePSOCache; // 0x89(0x01)
	bool bInGameLevel; // 0x8a(0x01)
	bool bShouldWaitingAllPlayerLoadComplete; // 0x8b(0x01)
	int32_t DoorKeyConsumeMultiple; // 0x8c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMMapDoorInfoRow
// Size: 0x40 (Inherited: 0x08)
struct FDFMMapDoorInfoRow : public FTableRowBase {
public:

	struct FText ID; // 0x08(0x18)
	struct TArray<struct FName> KeyID; // 0x20(0x10)
	struct FVector Location; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MapEnemySilencerDistanceConfigRow
// Size: 0x18 (Inherited: 0x08)
struct FMapEnemySilencerDistanceConfigRow : public FTableRowBase {
public:

	int64_t SilencerFunId; // 0x08(0x08)
	float Distance; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MapInstancedSplineAreaData
// Size: 0xa0 (Inherited: 0x00)
struct FMapInstancedSplineAreaData {
public:

	char pad_0[0xa0]; // 0x00(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MapIconSizeConfigRow
// Size: 0x38 (Inherited: 0x08)
struct FMapIconSizeConfigRow : public FTableRowBase {
public:

	enum class EMapIconSizeType MapIconSizeType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector2D BigMapIconSize; // 0x0c(0x08)
	struct FVector2D MiniMapIconSize; // 0x14(0x08)
	struct FVector2D EdgeTrackingBigMapScale; // 0x1c(0x08)
	struct FVector2D EdgeTrackingMiniMapSize; // 0x24(0x08)
	float EdgeTrackingScaleInBigMap; // 0x2c(0x04)
	float EdgeTrackingScaleInMiniMap; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MapPlayerIconData
// Size: 0x01 (Inherited: 0x00)
struct FMapPlayerIconData {
public:

	enum class EMapPlayerIconState PlayerIconState; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BossLocInfo
// Size: 0x30 (Inherited: 0x00)
struct FBossLocInfo {
public:

	bool bActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName IconName; // 0x04(0x08)
	float SphereRadius; // 0x0c(0x04)
	struct FVector Center; // 0x10(0x0c)
	int32_t OwnerTeamID; // 0x1c(0x04)
	int32_t NetGuid; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct AActor* BossActor; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HelicopterDeterrenceInfo
// Size: 0x1c (Inherited: 0x00)
struct FHelicopterDeterrenceInfo {
public:

	bool bActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName IconName; // 0x04(0x08)
	float DeterrenceRange; // 0x0c(0x04)
	struct FVector DeterrenceCenter; // 0x10(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MapHighValueBoxInfoStruct
// Size: 0x38 (Inherited: 0x10)
struct FMapHighValueBoxInfoStruct : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int64_t> EventIDForSpawnArray; // 0x18(0x10)
	struct TArray<struct FHighValueBoxInfo> HighValueBoxInfoArray; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MandelBrickSeamlessMapStruct
// Size: 0x70 (Inherited: 0x10)
struct FMandelBrickSeamlessMapStruct : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<int32_t, struct FMandelBrickSeamlessMapGeneratorStruct> GeneratorStructMap; // 0x18(0x50)
	bool bDelayStart; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MandelBrickSeamlessMapGeneratorStruct
// Size: 0x50 (Inherited: 0x10)
struct FMandelBrickSeamlessMapGeneratorStruct : public FDescRowBase {
public:

	int32_t GeneratorId; // 0x10(0x04)
	int32_t SpawnWeight; // 0x14(0x04)
	struct FVector SpawnerLoc; // 0x18(0x0c)
	struct FName SpawnerName; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FVector> DecipherLocArr; // 0x30(0x10)
	struct TArray<struct FName> DecipherNameArr; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MapFloorStruct
// Size: 0x28 (Inherited: 0x00)
struct FMapFloorStruct {
public:

	enum class EMapFloorType FloorType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t FloorWidth; // 0x04(0x04)
	struct TArray<struct FVector> CapturePointLocArr; // 0x08(0x10)
	struct TArray<struct FString> TexNameArr; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.POIProductCollectionRow
// Size: 0x30 (Inherited: 0x08)
struct FPOIProductCollectionRow : public FTableRowBase {
public:

	struct FText MapPOINameText; // 0x08(0x18)
	struct TArray<enum class EMapLocationPOIProductType> POIProductTypeArray; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.POIProductDataRow
// Size: 0x60 (Inherited: 0x08)
struct FPOIProductDataRow : public FTableRowBase {
public:

	int32_t LegendSortIndex; // 0x08(0x04)
	enum class EMapLocationPOIProductType ProductType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FText ProductName; // 0x10(0x18)
	/*struct TSoftObjectPtr<UObject>*/char IconPath[0x28]; // 0x28(0x28)
	struct FLinearColor IconColor; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LegendIconDataRow
// Size: 0x60 (Inherited: 0x08)
struct FLegendIconDataRow : public FTableRowBase {
public:

	int32_t LegendSortIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText LegendText; // 0x10(0x18)
	/*struct TSoftObjectPtr<UObject>*/char IconPath[0x28]; // 0x28(0x28)
	struct FLinearColor IconColor; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterColorRow
// Size: 0x38 (Inherited: 0x10)
struct FCharacterColorRow : public FDescRowBase {
public:

	enum class EDFMGamePlayMode CurrentGameMode; // 0x10(0x01)
	bool bTeammateUseUniqueColor; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct FLinearColor> UniqueTeammateColorArr; // 0x18(0x10)
	struct TArray<struct FLinearColor> SimpleColorArr; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MiniMapWorldRangeInfo
// Size: 0x34 (Inherited: 0x00)
struct FMiniMapWorldRangeInfo {
public:

	char pad_0[0x34]; // 0x00(0x34)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BigMapWorldRangeInfo
// Size: 0x1c (Inherited: 0x00)
struct FBigMapWorldRangeInfo {
public:

	char pad_0[0x1c]; // 0x00(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MapBaseInfoData
// Size: 0x138 (Inherited: 0x00)
struct FMapBaseInfoData {
public:

	char pad_0[0x110]; // 0x00(0x110)
	/*struct TSoftObjectPtr<UTexture2D>*/char SplineAreaAtlas[0x28]; // 0x110(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MapBaseInfo
// Size: 0x70 (Inherited: 0x10)
struct FMapBaseInfo : public FDescRowBase {
public:

	int32_t MapConfigMapID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString MapName; // 0x18(0x10)
	struct FText MapNameText; // 0x28(0x18)
	int32_t MapType; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	/*struct TSoftObjectPtr<UMapInfoConfig>*/char MapInfoConfigPath[0x28]; // 0x48(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MapThumbnailData
// Size: 0x40 (Inherited: 0x10)
struct FMapThumbnailData : public FDescRowBase {
public:

	struct FString MapName; // 0x10(0x10)
	int32_t MatchModeId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FSoftObjectPath MapThumbnail; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MarketTab
// Size: 0xa8 (Inherited: 0x10)
struct FMarketTab : public FDescRowBase {
public:

	int32_t PageID; // 0x10(0x04)
	int32_t MainTabId; // 0x14(0x04)
	int32_t SubTabId; // 0x18(0x04)
	int32_t SubTabContentId; // 0x1c(0x04)
	struct FText MainTabName; // 0x20(0x18)
	struct FText SubTabName; // 0x38(0x18)
	struct FText SubTabContentName; // 0x50(0x18)
	int32_t MainTabOrder; // 0x68(0x04)
	int32_t SubTabOrder; // 0x6c(0x04)
	int32_t SubTabContentOrder; // 0x70(0x04)
	int32_t bHide; // 0x74(0x04)
	struct TArray<int32_t> MainTabTypes; // 0x78(0x10)
	struct TArray<int32_t> SubTabTypes; // 0x88(0x10)
	struct TArray<int32_t> SubTabContentTypes; // 0x98(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MaskWidgetStyle
// Size: 0x138 (Inherited: 0x08)
struct FMaskWidgetStyle : public FSlateWidgetStyle {
public:

	struct FSlateBrush BackgroundImage; // 0x08(0x90)
	struct TArray<struct FMaskClip> MaskClips; // 0x98(0x10)
	struct FSlateBrush MaskMatBrush; // 0xa8(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MaskClip
// Size: 0x28 (Inherited: 0x00)
struct FMaskClip {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct UTexture2D* MaskTex; // 0x08(0x08)
	struct FVector2D MaskPosition; // 0x10(0x08)
	struct FVector2D MaskSize; // 0x18(0x08)
	bool ClipEnable; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MatchCommonConfig
// Size: 0x50 (Inherited: 0x10)
struct FMatchCommonConfig : public FDescRowBase {
public:

	struct FString MatchID; // 0x10(0x10)
	struct FText Desc; // 0x20(0x18)
	int32_t SubTypeId; // 0x38(0x04)
	int32_t ModeId; // 0x3c(0x04)
	int32_t SubModeId; // 0x40(0x04)
	int32_t MapID; // 0x44(0x04)
	int32_t MaxPlayerNum; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MatchGameMode
// Size: 0x60 (Inherited: 0x10)
struct FMatchGameMode : public FDescRowBase {
public:

	int32_t GameMode; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText GameModeName; // 0x18(0x18)
	struct FText GameModeFullName; // 0x30(0x18)
	struct FText GameModeDesc; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MatchGameRule
// Size: 0x60 (Inherited: 0x10)
struct FMatchGameRule : public FDescRowBase {
public:

	int32_t GameRule; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText GameRuleName; // 0x18(0x18)
	struct FText GameRuleFullName; // 0x30(0x18)
	struct FText GameRuleDesc; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MatchModeKVTable
// Size: 0x60 (Inherited: 0x10)
struct FMatchModeKVTable : public FDescRowBase {
public:

	struct FString SheetId; // 0x10(0x10)
	struct FString TypeID; // 0x20(0x10)
	struct FString ModeId; // 0x30(0x10)
	struct FString Name; // 0x40(0x10)
	struct FString ModeDesc; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MatchTypeKVTable
// Size: 0x50 (Inherited: 0x10)
struct FMatchTypeKVTable : public FDescRowBase {
public:

	struct FString SheetId; // 0x10(0x10)
	struct FString TypeID; // 0x20(0x10)
	struct FString Name; // 0x30(0x10)
	struct FString TypeDesc; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MatchModeConfig
// Size: 0x78 (Inherited: 0x10)
struct FMatchModeConfig : public FDescRowBase {
public:

	int32_t MatchModeId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText MapName; // 0x18(0x18)
	struct FText ModuleName; // 0x30(0x18)
	struct FText Desc; // 0x48(0x18)
	int32_t GameMode; // 0x60(0x04)
	int32_t GameRule; // 0x64(0x04)
	int32_t MapID; // 0x68(0x04)
	int32_t MatchSubMode; // 0x6c(0x04)
	int32_t TeamMode; // 0x70(0x04)
	int32_t RaidID; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MatchMode
// Size: 0x30 (Inherited: 0x10)
struct FMatchMode : public FDescRowBase {
public:

	int32_t ModeId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MatchRule
// Size: 0x78 (Inherited: 0x10)
struct FMatchRule : public FDescRowBase {
public:

	struct FString MatchID; // 0x10(0x10)
	struct FString MapID; // 0x20(0x10)
	struct FString ModeId; // 0x30(0x10)
	struct FString TypeID; // 0x40(0x10)
	int32_t MinPlayerNum; // 0x50(0x04)
	int32_t NormalPlayerNum; // 0x54(0x04)
	struct FString MatchExpand; // 0x58(0x10)
	struct FString MatchRatio; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MatchSubMode
// Size: 0x60 (Inherited: 0x10)
struct FMatchSubMode : public FDescRowBase {
public:

	int32_t MatchSubMode; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText MatchSubModeName; // 0x18(0x18)
	struct FText MatchSubModeFullName; // 0x30(0x18)
	struct FText MatchSubModeDesc; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MatchTeamMode
// Size: 0x60 (Inherited: 0x10)
struct FMatchTeamMode : public FDescRowBase {
public:

	int32_t TeamMode; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText TeamModeName; // 0x18(0x18)
	struct FText TeamModeFullName; // 0x30(0x18)
	struct FText TeamModeDesc; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MatchType
// Size: 0x48 (Inherited: 0x10)
struct FMatchType : public FDescRowBase {
public:

	int32_t SubTypeId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString SubTypeName; // 0x18(0x10)
	int32_t ModeId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FText ModeName; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MatchTypeModeKV
// Size: 0x68 (Inherited: 0x10)
struct FMatchTypeModeKV : public FDescRowBase {
public:

	struct FString SheetId; // 0x10(0x10)
	struct FString ObjId; // 0x20(0x10)
	struct FText Name; // 0x30(0x18)
	int32_t IsType; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FText ModeDesc; // 0x50(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MiniWorldSceneSubLevelsData
// Size: 0x28 (Inherited: 0x10)
struct FMiniWorldSceneSubLevelsData : public FDescRowBase {
public:

	struct FName SceneName; // 0x10(0x08)
	struct TArray<struct FSoftObjectPath> SubLevels; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MissionCheckPoint
// Size: 0x30 (Inherited: 0x10)
struct FMissionCheckPoint : public FDescRowBase {
public:

	struct FString ID; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MissionRelativeLevel
// Size: 0x60 (Inherited: 0x10)
struct FMissionRelativeLevel : public FDescRowBase {
public:

	struct FString Name; // 0x10(0x10)
	struct TArray<struct FSoftObjectPath> BindLoadLevels; // 0x20(0x10)
	struct TArray<struct FSoftObjectPath> BindUnLoadLevels; // 0x30(0x10)
	struct TArray<struct FSoftObjectPath> CompleteLoadLevels; // 0x40(0x10)
	struct TArray<struct FSoftObjectPath> CompleteUnLoadLevels; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MissionCompleteLevel
// Size: 0x40 (Inherited: 0x10)
struct FMissionCompleteLevel : public FDescRowBase {
public:

	struct FString Name; // 0x10(0x10)
	struct TArray<struct FSoftObjectPath> LoadLevels; // 0x20(0x10)
	struct TArray<struct FSoftObjectPath> UnloadLevels; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MissionSystemSetting
// Size: 0x50 (Inherited: 0x10)
struct FMissionSystemSetting : public FDescRowBase {
public:

	struct FString Name; // 0x10(0x10)
	struct TArray<struct FString> Values; // 0x20(0x10)
	struct UClass* ProxyClass; // 0x30(0x08)
	float FloatValue; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FSoftObjectPath> PathObjs; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CustomLayoutRow
// Size: 0x50 (Inherited: 0x10)
struct FCustomLayoutRow : public FDescRowBase {
public:

	struct FString LayoutName; // 0x10(0x10)
	struct FText LayoutText; // 0x20(0x18)
	struct TArray<struct FCustomLayoutWidgetInfo> WidgetLayoutInfos; // 0x38(0x10)
	bool bFirstLevel; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ModuleSwitcherConfig
// Size: 0x40 (Inherited: 0x10)
struct FModuleSwitcherConfig : public FDescRowBase {
public:

	int32_t ModuleID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ModuleNameDec; // 0x18(0x10)
	struct TArray<struct FModuleSwitcherUIItem> UINameToIDList; // 0x28(0x10)
	bool Review_Close; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ModuleSwitcherUIItem
// Size: 0x18 (Inherited: 0x00)
struct FModuleSwitcherUIItem {
public:

	struct FString UINameToID; // 0x00(0x10)
	int32_t SwitcherState; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ModuleUnlockConfig
// Size: 0x88 (Inherited: 0x10)
struct FModuleUnlockConfig : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Description; // 0x18(0x18)
	bool EnablePopup; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t UnlockParam1Type; // 0x34(0x04)
	int32_t UnlockParam1Condition; // 0x38(0x04)
	int32_t UnlockParam2Type; // 0x3c(0x04)
	int32_t UnlockParam2Condition; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString IconPath; // 0x48(0x10)
	struct FText UnlockBtnTxt; // 0x58(0x18)
	struct FText Unlocktips; // 0x70(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MossVoiceConfig
// Size: 0x48 (Inherited: 0x10)
struct FMossVoiceConfig : public FDescRowBase {
public:

	struct FString MossVoiceID; // 0x10(0x10)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char MossVoiceAsset[0x28]; // 0x20(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MPLobbyCharacterOffset
// Size: 0x30 (Inherited: 0x08)
struct FMPLobbyCharacterOffset : public FTableRowBase {
public:

	int64_t HeroID; // 0x08(0x08)
	struct FString HeroName; // 0x10(0x10)
	float XOffset; // 0x20(0x04)
	float YOffset; // 0x24(0x04)
	float ZOffset; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MPMandelBrickPool
// Size: 0x30 (Inherited: 0x10)
struct FMPMandelBrickPool : public FDescRowBase {
public:

	int32_t Index; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	uint64_t SeasonID; // 0x18(0x08)
	uint64_t MPMandelBrickID; // 0x20(0x08)
	int32_t MPDropRate; // 0x28(0x04)
	bool NewMandelBrick; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MysteryMerchantRefresh
// Size: 0x40 (Inherited: 0x10)
struct FMysteryMerchantRefresh : public FDescRowBase {
public:

	struct FString FirstRefreshTime; // 0x10(0x10)
	float FirstRefreshPercent; // 0x20(0x04)
	float FirstRefreshNum; // 0x24(0x04)
	struct FString SecondRefreshTime; // 0x28(0x10)
	float SecondRefreshPercent; // 0x38(0x04)
	float SecondRefreshNum; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HackGameNarrativeProps
// Size: 0x48 (Inherited: 0x10)
struct FHackGameNarrativeProps : public FDescRowBase {
public:

	int64_t NarrativePropId; // 0x10(0x08)
	struct FText Title; // 0x18(0x18)
	struct FText Content; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.NarrativePropsConfig
// Size: 0xe0 (Inherited: 0x10)
struct FNarrativePropsConfig : public FDescRowBase {
public:

	int64_t NarrativePropId; // 0x10(0x08)
	int32_t PagesNum; // 0x18(0x04)
	int32_t PageLinesNum; // 0x1c(0x04)
	int32_t LineWordsNum; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText TitleName; // 0x28(0x18)
	struct FText OneContent; // 0x40(0x18)
	struct FText SecContent; // 0x58(0x18)
	struct FText ThirContent; // 0x70(0x18)
	struct FText FourContent; // 0x88(0x18)
	struct FText FifContent; // 0xa0(0x18)
	/*struct TSoftObjectPtr<UTexture>*/char NarrativeBgImg[0x28]; // 0xb8(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.NewbieChallenge
// Size: 0x40 (Inherited: 0x10)
struct FNewbieChallenge : public FDescRowBase {
public:

	int32_t Type; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	struct TArray<uint64_t> IncludeGoal; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.NPCRoleInfoTable
// Size: 0xb8 (Inherited: 0x10)
struct FNPCRoleInfoTable : public FDescRowBase {
public:

	int32_t NpcId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	struct FText Title; // 0x30(0x18)
	int32_t Telephone; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FText Location; // 0x50(0x18)
	struct FText Mood; // 0x68(0x18)
	struct FText Resume; // 0x80(0x18)
	struct FString IconPath; // 0x98(0x10)
	struct FString BgImagePath; // 0xa8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.PresetChatAuto
// Size: 0x48 (Inherited: 0x10)
struct FPresetChatAuto : public FDescRowBase {
public:

	struct FName PresetChatID; // 0x10(0x08)
	struct FString Desc; // 0x18(0x10)
	struct FText PresetChat; // 0x28(0x18)
	int64_t ChatCD; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.PresetChatFunction
// Size: 0x38 (Inherited: 0x10)
struct FPresetChatFunction : public FDescRowBase {
public:

	struct FString FunctionId; // 0x10(0x10)
	struct FString FunctionName; // 0x20(0x10)
	int64_t FunctionDesc; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.PresetChat
// Size: 0x40 (Inherited: 0x10)
struct FPresetChat : public FDescRowBase {
public:

	struct FString PresetChatID; // 0x10(0x10)
	struct FText PresetChat; // 0x20(0x18)
	int64_t FunctionId; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.PropIDPriority
// Size: 0x20 (Inherited: 0x10)
struct FPropIDPriority : public FDescRowBase {
public:

	struct FName ItemIDPrefix; // 0x10(0x08)
	int32_t Priority; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.PropSlotConfig
// Size: 0x88 (Inherited: 0x10)
struct FPropSlotConfig : public FDescRowBase {
public:

	struct FText PageID; // 0x10(0x18)
	struct FText DisplayName; // 0x28(0x18)
	struct FString PagePropTypes; // 0x40(0x10)
	struct FString IgnorePropTypes; // 0x50(0x10)
	int32_t Capacity; // 0x60(0x04)
	int32_t PageLength; // 0x64(0x04)
	int32_t PageWidth; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString ComplexSpaceDescription; // 0x70(0x10)
	bool bIsContainerSelf; // 0x80(0x01)
	bool bIsContainerByItem; // 0x81(0x01)
	bool bHasSubTab; // 0x82(0x01)
	char pad_83[0x5]; // 0x83(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.PropSlotSubConfig
// Size: 0x58 (Inherited: 0x10)
struct FPropSlotSubConfig : public FDescRowBase {
public:

	struct FString PageSubId; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
	struct FString PagePropTypes; // 0x38(0x10)
	struct FString IgnorePropTypes; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.PVESetting
// Size: 0x60 (Inherited: 0x10)
struct FPVESetting : public FDescRowBase {
public:

	int32_t ChapterID; // 0x10(0x04)
	int32_t MapID; // 0x14(0x04)
	struct FText ChapterDesc; // 0x18(0x18)
	struct FText ChapterText; // 0x30(0x18)
	struct FText ThumbnailID; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterCheckingConditionRow
// Size: 0x98 (Inherited: 0x08)
struct FCharacterCheckingConditionRow : public FTableRowBase {
public:

	int32_t ConditionID; // 0x08(0x04)
	int32_t IsInitalStatusCheck; // 0x0c(0x04)
	float CheckStep; // 0x10(0x04)
	float CheckSingle; // 0x14(0x04)
	bool IsComplexProp; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString EquipmentCondition; // 0x20(0x10)
	struct FString UnEquipmentCondition; // 0x30(0x10)
	bool IsComplexWeapon; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString WeaponCondition; // 0x48(0x10)
	struct FString UnWeaponCondition; // 0x58(0x10)
	bool IsComplexItem; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FString GameItemCondition; // 0x70(0x10)
	struct FString UnGameItemCondition; // 0x80(0x10)
	bool MustMoreThan; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	int32_t TotalEquipPrice; // 0x94(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.InteractAnimsRow
// Size: 0x178 (Inherited: 0x08)
struct FInteractAnimsRow : public FTableRowBase {
public:

	int64_t AnimsID; // 0x08(0x08)
	float AnimTime_Start; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FSoftObjectPath FPPAnimPath_Start; // 0x18(0x18)
	struct FSoftObjectPath TPPAnimPath_Start; // 0x30(0x18)
	float AnimTime_Loop; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FSoftObjectPath FPPAnimPath_Loop; // 0x50(0x18)
	struct FSoftObjectPath TPPAnimPath_Loop; // 0x68(0x18)
	float AnimTime_Stop; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FSoftObjectPath FPPAnimPath_Stop; // 0x88(0x18)
	struct FSoftObjectPath TPPAnimPath_Stop; // 0xa0(0x18)
	struct FSoftObjectPath PropFPPMesh; // 0xb8(0x18)
	struct FSoftObjectPath PropTPPMesh; // 0xd0(0x18)
	struct FSoftObjectPath PropFPPAnimPath_Start; // 0xe8(0x18)
	struct FSoftObjectPath PropTPPAnimPath_Start; // 0x100(0x18)
	struct FSoftObjectPath PropFPPAnimPath_Loop; // 0x118(0x18)
	struct FSoftObjectPath PropTPPAnimPath_Loop; // 0x130(0x18)
	struct FSoftObjectPath PropFPPAnimPath_Stop; // 0x148(0x18)
	struct FSoftObjectPath PropTPPAnimPath_Stop; // 0x160(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.QuestReferenceRow
// Size: 0x28 (Inherited: 0x08)
struct FQuestReferenceRow : public FTableRowBase {
public:

	int64_t QuestID; // 0x08(0x08)
	struct FSoftClassPath QuestPath; // 0x10(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SOLContractRewardRow
// Size: 0xb0 (Inherited: 0x08)
struct FSOLContractRewardRow : public FTableRowBase {
public:

	int64_t QuestID; // 0x08(0x08)
	int32_t MapID; // 0x10(0x04)
	bool IsHighReward; // 0x14(0x01)
	bool IsBenchmark; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	int32_t Reward; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int64_t> RewardProps1; // 0x20(0x10)
	bool bMask1; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<int64_t> RewardProps2; // 0x38(0x10)
	bool bMask2; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<int64_t> RewardProps3; // 0x50(0x10)
	bool bMask3; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<int64_t> RewardProps4; // 0x68(0x10)
	bool bMask4; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<int64_t> RewardProps5; // 0x80(0x10)
	bool bMask5; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<int64_t> RewardProps6; // 0x98(0x10)
	bool bMask6; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SOLQuestDetailObjectivesType
// Size: 0x40 (Inherited: 0x08)
struct FSOLQuestDetailObjectivesType : public FTableRowBase {
public:

	int64_t objectiveId; // 0x08(0x08)
	struct FSoftObjectPath ObjectiveIcon; // 0x10(0x18)
	struct FText ObjectiveDesc; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SOLQuestDetailTargetType
// Size: 0x40 (Inherited: 0x08)
struct FSOLQuestDetailTargetType : public FTableRowBase {
public:

	int64_t TargetID; // 0x08(0x08)
	struct FSoftObjectPath TargetIcon; // 0x10(0x18)
	struct FText TargetDesc; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SOLQuestDetailMapConfigRow
// Size: 0xe8 (Inherited: 0x08)
struct FSOLQuestDetailMapConfigRow : public FTableRowBase {
public:

	int64_t UniqueId; // 0x08(0x08)
	int64_t QuestID; // 0x10(0x08)
	int64_t objectiveId; // 0x18(0x08)
	struct FString MapName; // 0x20(0x10)
	struct FVector MapCenterLocation; // 0x30(0x0c)
	struct FVector QuestTargetLocation; // 0x3c(0x0c)
	float MapRangeRadius; // 0x48(0x04)
	int32_t MapDetailTarget; // 0x4c(0x04)
	struct FText MapDetailTargetParam1; // 0x50(0x18)
	struct FText MapDetailTargetParam2; // 0x68(0x18)
	float MapDetailTargetScale; // 0x80(0x04)
	int32_t MapDetailObjectives; // 0x84(0x04)
	struct FText MapDetailObjectivesDesc; // 0x88(0x18)
	struct FText MapLocationInfo; // 0xa0(0x18)
	struct FText MapTemperatureInfo; // 0xb8(0x18)
	struct FText MapTimeInfo; // 0xd0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.QuestRandomRow
// Size: 0x40 (Inherited: 0x10)
struct FQuestRandomRow : public FDescRowBase {
public:

	struct FName RandomGroupName; // 0x10(0x08)
	int32_t MapID; // 0x18(0x04)
	struct FName MapName; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FContractRandomConfig> RandomConfigArray; // 0x28(0x10)
	float ContractNPCMaxDist; // 0x38(0x04)
	float ContractNPCMinDist; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ContractRandomConfig
// Size: 0x10 (Inherited: 0x00)
struct FContractRandomConfig {
public:

	int64_t ContractID; // 0x00(0x08)
	float RandomRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.QuestConfigRow
// Size: 0x30 (Inherited: 0x10)
struct FQuestConfigRow : public FDescRowBase {
public:

	int64_t QuestObjectiveID; // 0x10(0x08)
	enum class EQuestType QuestType; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FSOLQAObjectiveData> ObjectiveDataArray; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.QuestContractNPCInfoRow
// Size: 0x40 (Inherited: 0x10)
struct FQuestContractNPCInfoRow : public FDescRowBase {
public:

	struct FString Name; // 0x10(0x10)
	float WillEnableTimeStep; // 0x20(0x04)
	int32_t ContractID; // 0x24(0x04)
	struct FVector Loc; // 0x28(0x0c)
	struct FRotator Rot; // 0x34(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.QuestVolumeInfoRow
// Size: 0x48 (Inherited: 0x10)
struct FQuestVolumeInfoRow : public FDescRowBase {
public:

	struct FString Name; // 0x10(0x10)
	struct FQuestFullID FullID; // 0x20(0x10)
	struct FName VolumeTag; // 0x30(0x08)
	struct FVector Loc; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.QuestTrackingMapInfoRow
// Size: 0x40 (Inherited: 0x10)
struct FQuestTrackingMapInfoRow : public FDescRowBase {
public:

	int64_t objectiveId; // 0x10(0x08)
	struct FVector Location; // 0x18(0x0c)
	bool bEnableRangeRadius; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float RangeRadius; // 0x28(0x04)
	bool bEnableAdvancedTracking; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float ShowTrackingRangeDist; // 0x30(0x04)
	struct FVector2D TrackingRangeOffset; // 0x34(0x08)
	float ShowPreciseHudIconRangeRadius; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SOLQuestMapInfo
// Size: 0x30 (Inherited: 0x00)
struct FSOLQuestMapInfo {
public:

	int64_t objectiveId; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	float RangeRadius; // 0x14(0x04)
	bool bEnableAdvancedTracking; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ShowTrackingRangeDist; // 0x1c(0x04)
	struct FVector2D TrackingRangeOffset; // 0x20(0x08)
	float ShowPreciseHudIconRangeRadius; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.WorldTimeLimitQuestRow
// Size: 0x38 (Inherited: 0x10)
struct FWorldTimeLimitQuestRow : public FDescRowBase {
public:

	uint64_t QuestID; // 0x10(0x08)
	uint32_t EventGroupID; // 0x18(0x04)
	int32_t TimeLimit; // 0x1c(0x04)
	struct FString MapID; // 0x20(0x10)
	uint32_t RefreshWeight; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SOLQuestDialogConfigRow
// Size: 0x40 (Inherited: 0x08)
struct FSOLQuestDialogConfigRow : public FTableRowBase {
public:

	int32_t UniqueId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t QuestID; // 0x10(0x08)
	int64_t objectiveId; // 0x18(0x08)
	enum class EQuestDialogActiveType DialogActiveType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FName DialogGroupID; // 0x24(0x08)
	float DialogTriggerTime; // 0x2c(0x04)
	uint32_t BroadcastCount; // 0x30(0x04)
	uint32_t BroadcastStart; // 0x34(0x04)
	int32_t TargetProgress; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DeliverQuestPerformanceRow
// Size: 0x48 (Inherited: 0x08)
struct FDeliverQuestPerformanceRow : public FTableRowBase {
public:

	int64_t objectiveId; // 0x08(0x08)
	struct FSoftObjectPath AnimPathFPP; // 0x10(0x18)
	struct FSoftObjectPath AnimPathTPP; // 0x28(0x18)
	float TimeOfDuration; // 0x40(0x04)
	bool bLimitOperation; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.QuestLineRow
// Size: 0xc0 (Inherited: 0x10)
struct FQuestLineRow : public FDescRowBase {
public:

	int64_t QuestLineID; // 0x10(0x08)
	int32_t QuestType; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	int64_t RootQuestID; // 0x20(0x08)
	struct FText LineName; // 0x28(0x18)
	struct FString LineCover; // 0x40(0x10)
	struct FString LineTab; // 0x50(0x10)
	struct TArray<int64_t> OpenLimits; // 0x60(0x10)
	bool IsUnopenShow; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t QuestPublishNpcId; // 0x74(0x04)
	int32_t MerchantId; // 0x78(0x04)
	int32_t OpenLevel; // 0x7c(0x04)
	struct TArray<int32_t> SeasonIdArr; // 0x80(0x10)
	int32_t SeasonID; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FString SeasonDefaultIcon; // 0x98(0x10)
	struct FText SeasonDefaultDesc; // 0xa8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.QuestRewardsRow
// Size: 0x38 (Inherited: 0x10)
struct FQuestRewardsRow : public FDescRowBase {
public:

	int64_t RewardID; // 0x10(0x08)
	int32_t Type; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	int64_t ItemID; // 0x20(0x08)
	int32_t Number; // 0x28(0x04)
	int32_t BindType; // 0x2c(0x04)
	bool ImportantReward; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.QuestObjComplexWeaponTermInfo
// Size: 0x170 (Inherited: 0x08)
struct FQuestObjComplexWeaponTermInfo : public FTableRowBase {
public:

	int64_t QuestObjectiveID; // 0x08(0x08)
	int32_t WeaponSubType; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t WeaponID; // 0x18(0x08)
	struct FString BasicalDamage; // 0x20(0x10)
	struct FString AdvantageousRange; // 0x30(0x10)
	struct FString RecoilControl; // 0x40(0x10)
	struct FString ControlSpeed; // 0x50(0x10)
	struct FString WeaponStability; // 0x60(0x10)
	struct FString ShootDispersion; // 0x70(0x10)
	struct TArray<int64_t> SubAttributeIDList1; // 0x80(0x10)
	struct FText SubAttributeDescList1; // 0x90(0x18)
	struct TArray<int64_t> SubAttributeIDList2; // 0xa8(0x10)
	struct FText SubAttributeDescList2; // 0xb8(0x18)
	struct TArray<int64_t> SubAttributeIDList3; // 0xd0(0x10)
	struct FText SubAttributeDescList3; // 0xe0(0x18)
	struct TArray<int64_t> SubAttributeIDList4; // 0xf8(0x10)
	struct FText SubAttributeDescList4; // 0x108(0x18)
	struct TArray<int64_t> SubAttributeIDList5; // 0x120(0x10)
	struct FText SubAttributeDescList5; // 0x130(0x18)
	struct TArray<int64_t> SubAttributeIDList6; // 0x148(0x10)
	struct FText SubAttributeDescList6; // 0x158(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ComplexPropObjectiveRow
// Size: 0x58 (Inherited: 0x08)
struct FComplexPropObjectiveRow : public FTableRowBase {
public:

	int64_t RuleId; // 0x08(0x08)
	int32_t ItemType; // 0x10(0x04)
	int32_t ItemQuality; // 0x14(0x04)
	bool IsMoreThanQuality; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	int64_t ItemPrice; // 0x20(0x08)
	bool IsMoreThanPrice; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString ObjectiveIcon; // 0x30(0x10)
	struct FText RuleName; // 0x40(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.QuestObjectiveRow
// Size: 0x150 (Inherited: 0x08)
struct FQuestObjectiveRow : public FTableRowBase {
public:

	int64_t objectiveId; // 0x08(0x08)
	int32_t Type; // 0x10(0x04)
	bool ShouldMustBeCompleted; // 0x14(0x01)
	bool IsComplexPropObjective; // 0x15(0x01)
	bool IsComplexWeaponObjective; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	struct FString Param1; // 0x18(0x10)
	struct FString Param1Desc; // 0x28(0x10)
	struct FString Param2; // 0x38(0x10)
	struct FString Param2Desc; // 0x48(0x10)
	struct FString Param3; // 0x58(0x10)
	struct FString Param3Desc; // 0x68(0x10)
	struct FString Param4; // 0x78(0x10)
	struct FString Param4Desc; // 0x88(0x10)
	struct TArray<uint64_t> ListParam; // 0x98(0x10)
	int32_t RequiredCount; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TArray<int32_t> ConditionIDArray; // 0xb0(0x10)
	struct FText ObjectiveDesc; // 0xc0(0x18)
	struct FText BriefObjectiveDesc; // 0xd8(0x18)
	float TimeLimit; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	int64_t PrerequestObjectiveID; // 0xf8(0x08)
	struct TArray<uint32_t> MapID; // 0x100(0x10)
	struct FVector Location; // 0x110(0x0c)
	bool bShowTracking; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FString mapmarker; // 0x120(0x10)
	bool ResetWhenQuestFailed; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FText HelperTips; // 0x138(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.QuestConditionRow
// Size: 0xb0 (Inherited: 0x10)
struct FQuestConditionRow : public FDescRowBase {
public:

	int32_t QuestConditionID; // 0x10(0x04)
	enum class EGoalType GoalType; // 0x14(0x01)
	bool IsComplexProp; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FString Param1; // 0x18(0x10)
	struct FString Param2; // 0x28(0x10)
	struct FString Param3; // 0x38(0x10)
	struct FString Param4; // 0x48(0x10)
	struct FText Desc; // 0x58(0x18)
	struct FText BriefDesc; // 0x70(0x18)
	struct TArray<uint64_t> ListParam; // 0x88(0x10)
	int32_t RequiredCount; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<int32_t> ConditionIDArray; // 0xa0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.QuestRow
// Size: 0x210 (Inherited: 0x10)
struct FQuestRow : public FDescRowBase {
public:

	int64_t QuestID; // 0x10(0x08)
	int32_t IsContract; // 0x18(0x04)
	int32_t QuestType; // 0x1c(0x04)
	int32_t QuestClass; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<uint32_t> MapID; // 0x28(0x10)
	struct TArray<int64_t> PreviousIDList; // 0x38(0x10)
	bool IsConnectPrevious; // 0x48(0x01)
	bool ShouldAutoAccept; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32_t AcceptRequiredLevel; // 0x4c(0x04)
	struct FString GiverID; // 0x50(0x10)
	struct FString EnderID; // 0x60(0x10)
	struct FString AcceptDiaIogID; // 0x70(0x10)
	struct FString RewardDialogID; // 0x80(0x10)
	bool ResetAllWhenFailed; // 0x90(0x01)
	bool ResetAllWhenSettlementFailed; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
	struct TArray<enum class EQuestGoalForbiddenType> QuestGoalForbiddenTypeArray; // 0x98(0x10)
	struct TArray<int32_t> QuestConditionIDArray; // 0xa8(0x10)
	struct TArray<int64_t> ObjectiveList; // 0xb8(0x10)
	struct TArray<int64_t> RewardList; // 0xc8(0x10)
	struct FText Name; // 0xd8(0x18)
	struct FText Bulletin; // 0xf0(0x18)
	struct FText Desc; // 0x108(0x18)
	struct FString QuestIcon; // 0x120(0x10)
	struct FString QuestImage; // 0x130(0x10)
	float ContractReward; // 0x140(0x04)
	float ContractLimitTime; // 0x144(0x04)
	int64_t ParentId; // 0x148(0x08)
	int32_t YOffset; // 0x150(0x04)
	int32_t IsCG; // 0x154(0x04)
	struct FString CgPath; // 0x158(0x10)
	bool ShowRewardPrview; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct FString RewardNPCImage; // 0x170(0x10)
	struct FString RewardNPCJob; // 0x180(0x10)
	struct FString RewardNPCName; // 0x190(0x10)
	struct FString RewardNPCDesc; // 0x1a0(0x10)
	struct TArray<int64_t> ShowCondition; // 0x1b0(0x10)
	int32_t SpecialType; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct FString mapmarker; // 0x1c8(0x10)
	int32_t QuestLifeType; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct FString QuestPath; // 0x1e0(0x10)
	struct FString AreaGiverID; // 0x1f0(0x10)
	int32_t WorldType; // 0x200(0x04)
	bool IsStandalone; // 0x204(0x01)
	bool IsInMapDetail; // 0x205(0x01)
	char pad_206[0x2]; // 0x206(0x02)
	int32_t FrozenTimeAfterPreQuestReward; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RaidBulletCheckConfig
// Size: 0x30 (Inherited: 0x10)
struct FRaidBulletCheckConfig : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	int64_t MatchModeId; // 0x18(0x08)
	int64_t WeaponPrefixID; // 0x20(0x08)
	int64_t BulletNum; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RaidSettlementLevelConfig
// Size: 0x58 (Inherited: 0x10)
struct FRaidSettlementLevelConfig : public FDescRowBase {
public:

	uint32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText RaidID; // 0x18(0x18)
	uint32_t EvaluateLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	uint64_t EvaluateScore; // 0x38(0x08)
	uint32_t RaidScore; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString Prize; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RankingSeasonInfo
// Size: 0xc8 (Inherited: 0x10)
struct FRankingSeasonInfo : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	int32_t Index; // 0x14(0x04)
	struct FText SeasonName; // 0x18(0x18)
	struct FText SeasonDesc; // 0x30(0x18)
	struct FText Description; // 0x48(0x18)
	struct FString StartTime; // 0x60(0x10)
	struct FString EndTime; // 0x70(0x10)
	struct FString StopMatchTime; // 0x80(0x10)
	struct FString LobbyBanner; // 0x90(0x10)
	struct FString CoreID; // 0xa0(0x10)
	struct FString CoreURL; // 0xb0(0x10)
	int32_t CoreRank; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RankingRankRewardsSeasonal
// Size: 0x48 (Inherited: 0x10)
struct FRankingRankRewardsSeasonal : public FDescRowBase {
public:

	int32_t RewardID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString RewardItemID; // 0x18(0x10)
	int32_t RewardItemNumber; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FString> rewards; // 0x30(0x10)
	int32_t ConnectedMajorRank; // 0x40(0x04)
	int32_t SeasonNo; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RankingRankConstants
// Size: 0x28 (Inherited: 0x10)
struct FRankingRankConstants : public FDescRowBase {
public:

	int32_t ConstantID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Value; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RankingRankRewards
// Size: 0x50 (Inherited: 0x10)
struct FRankingRankRewards : public FDescRowBase {
public:

	int32_t RewardID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString RewardItemID; // 0x18(0x10)
	int32_t RewardItemNumber; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FString> rewards; // 0x30(0x10)
	int32_t ConnectedMajorRank; // 0x40(0x04)
	int32_t GamesRequired; // 0x44(0x04)
	int32_t SeasonNo; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RankingMajorRanks
// Size: 0x58 (Inherited: 0x10)
struct FRankingMajorRanks : public FDescRowBase {
public:

	int32_t MajorRankID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText MajorRankName; // 0x18(0x18)
	struct FName ArchiveItemID; // 0x30(0x08)
	struct FString RankIcon; // 0x38(0x10)
	struct FString RankABBRICon; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RankingMinorRanks
// Size: 0x98 (Inherited: 0x10)
struct FRankingMinorRanks : public FDescRowBase {
public:

	int32_t MinorRankID; // 0x10(0x04)
	int32_t MinScore; // 0x14(0x04)
	int32_t MaxScore; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText RankName; // 0x20(0x18)
	int32_t MajorRankEnlisted; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FSoftObjectPath RankIconBig; // 0x40(0x18)
	struct FString RankIconSmall; // 0x58(0x10)
	struct FString RankIconAbbrNumber; // 0x68(0x10)
	struct FText RankDesciption; // 0x78(0x18)
	int32_t StarsDivided; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RankScoreLimitConfigInfo
// Size: 0x78 (Inherited: 0x10)
struct FRankScoreLimitConfigInfo : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	int32_t DefaultUpperLimit; // 0x14(0x04)
	int32_t ScoreLimit1MapID; // 0x18(0x04)
	int32_t ScoreLimit1UpperLimit; // 0x1c(0x04)
	int32_t ScoreLimit2MapID; // 0x20(0x04)
	int32_t ScoreLimit2UpperLimit; // 0x24(0x04)
	int32_t ScoreLimit3MapID; // 0x28(0x04)
	int32_t ScoreLimit3UpperLimit; // 0x2c(0x04)
	int32_t ScoreLimit4MapID; // 0x30(0x04)
	int32_t ScoreLimit4UpperLimit; // 0x34(0x04)
	int32_t ScoreLimit5MapID; // 0x38(0x04)
	int32_t ScoreLimit5UpperLimit; // 0x3c(0x04)
	int32_t ScoreLimit6MapID; // 0x40(0x04)
	int32_t ScoreLimit6UpperLimit; // 0x44(0x04)
	int32_t ScoreLimit7MapID; // 0x48(0x04)
	int32_t ScoreLimit7UpperLimit; // 0x4c(0x04)
	int32_t ScoreLimit8MapID; // 0x50(0x04)
	int32_t ScoreLimit8UpperLimit; // 0x54(0x04)
	int32_t ScoreLimit9MapID; // 0x58(0x04)
	int32_t ScoreLimit9UpperLimit; // 0x5c(0x04)
	int32_t ScoreLimit10MapID; // 0x60(0x04)
	int32_t ScoreLimit10UpperLimit; // 0x64(0x04)
	int32_t ScoreLimit11MapID; // 0x68(0x04)
	int32_t ScoreLimit11UpperLimit; // 0x6c(0x04)
	int32_t ScoreLimit12MapID; // 0x70(0x04)
	int32_t ScoreLimit12UpperLimit; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RankSkillGameModeConfig
// Size: 0x18 (Inherited: 0x00)
struct FRankSkillGameModeConfig {
public:

	bool IsOpen; // 0x00(0x01)
	enum class EDFMGamePlayMode GameMode; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FRankSkillMapConfig> RankSkillMapConfigs; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RankSkillMapConfig
// Size: 0x18 (Inherited: 0x00)
struct FRankSkillMapConfig {
public:

	bool IsOpen; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MapID; // 0x04(0x04)
	struct TArray<struct FRankSkillConfig> RankSkillSectorConfigs; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RankSkillDropVehicleConfig
// Size: 0x0c (Inherited: 0x00)
struct FRankSkillDropVehicleConfig {
public:

	int32_t MaxCount; // 0x00(0x04)
	float ScoreCost; // 0x04(0x04)
	float AirDropSpawnCD; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RegionCode
// Size: 0xa0 (Inherited: 0x10)
struct FRegionCode : public FDescRowBase {
public:

	struct FString NumericCode; // 0x10(0x10)
	struct FString RegionCode; // 0x20(0x10)
	struct FString CurrencyCode; // 0x30(0x10)
	struct TMap<struct FString, struct FString> CurrencyCodes; // 0x40(0x50)
	struct FString RegionName; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ReportText
// Size: 0x30 (Inherited: 0x10)
struct FReportText : public FDescRowBase {
public:

	enum class EReportMode ReportMode; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText ReportName; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ReqErrTable
// Size: 0x88 (Inherited: 0x10)
struct FReqErrTable : public FDescRowBase {
public:

	int32_t ErrID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	struct FText Desc; // 0x30(0x18)
	struct FText DisplayText; // 0x48(0x18)
	struct FString DisplayNamespace; // 0x60(0x10)
	struct FString DisplayKey; // 0x70(0x10)
	float DisplayDuration; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RightsCardActivatingRow
// Size: 0x30 (Inherited: 0x10)
struct FRightsCardActivatingRow : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	struct FName TheActivating; // 0x14(0x08)
	int32_t TheActivated; // 0x1c(0x04)
	uint64_t ActiveTime; // 0x20(0x08)
	uint64_t EndTime; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RoleQuality
// Size: 0x128 (Inherited: 0x10)
struct FRoleQuality : public FDescRowBase {
public:

	int32_t QualityID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	int32_t QuestID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText DescriptionQuest; // 0x38(0x18)
	struct FText DescriptionUsage; // 0x50(0x18)
	struct FText UsageList1Desc; // 0x68(0x18)
	struct FText UsageList2Desc; // 0x80(0x18)
	struct FText UsageList3Desc; // 0x98(0x18)
	struct FText UsageList4Desc; // 0xb0(0x18)
	struct FText UsageList5Desc; // 0xc8(0x18)
	struct FText DescriptionAccess; // 0xe0(0x18)
	struct FString ImgPath; // 0xf8(0x10)
	struct FString SpritePath; // 0x108(0x10)
	struct FString CoverImgPath; // 0x118(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RoleQualityScene
// Size: 0x18 (Inherited: 0x10)
struct FRoleQualityScene : public FDescRowBase {
public:

	int32_t SceneID; // 0x10(0x04)
	bool bInEnable; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SafeAndCardpackActivatingRow
// Size: 0x38 (Inherited: 0x10)
struct FSafeAndCardpackActivatingRow : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	struct FName TheActivating; // 0x14(0x08)
	int32_t TheActivated; // 0x1c(0x04)
	uint64_t ActiveTime; // 0x20(0x08)
	uint64_t EndTime; // 0x28(0x08)
	uint64_t SeasonID; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SafeAndCardpackRow
// Size: 0x70 (Inherited: 0x10)
struct FSafeAndCardpackRow : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	int32_t Type; // 0x30(0x04)
	int32_t Slot; // 0x34(0x04)
	int32_t IsValid; // 0x38(0x04)
	int32_t HorizontalLength; // 0x3c(0x04)
	int32_t VerticalLengt; // 0x40(0x04)
	int32_t TotalLength; // 0x44(0x04)
	int32_t Endurance; // 0x48(0x04)
	int32_t Price; // 0x4c(0x04)
	int32_t ExternalItemNumber; // 0x50(0x04)
	struct FName Currency; // 0x54(0x08)
	int32_t IsFree; // 0x5c(0x04)
	int32_t MaxTime; // 0x60(0x04)
	struct FName VirtualItemID; // 0x64(0x08)
	char pad_6C[0x4]; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SafeHouseDescription
// Size: 0x78 (Inherited: 0x10)
struct FSafeHouseDescription : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Description; // 0x18(0x18)
	struct FText StartValue; // 0x30(0x18)
	struct FText EndValue; // 0x48(0x18)
	struct FText IconPath; // 0x60(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SafeHouseVistorInfoRow
// Size: 0x80 (Inherited: 0x10)
struct FSafeHouseVistorInfoRow : public FDescRowBase {
public:

	int32_t VistorInfoID; // 0x10(0x04)
	int32_t VistorRoleId; // 0x14(0x04)
	int32_t VisitProb; // 0x18(0x04)
	int32_t VisitWeight; // 0x1c(0x04)
	struct FString VisitTime; // 0x20(0x10)
	struct FString LeaveTime; // 0x30(0x10)
	struct FString RandomItemList; // 0x40(0x10)
	int32_t RandomNum; // 0x50(0x04)
	int32_t IncreaseRate; // 0x54(0x04)
	int32_t InfoVisitorProb; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	int64_t InfoItemID; // 0x60(0x08)
	float InfoInitDown; // 0x68(0x04)
	float InfoInitUp; // 0x6c(0x04)
	int32_t UpProb; // 0x70(0x04)
	float UpRate; // 0x74(0x04)
	float DownRate; // 0x78(0x04)
	int32_t InfoChangeInterval; // 0x7c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SafeHouseVistorRow
// Size: 0x60 (Inherited: 0x10)
struct FSafeHouseVistorRow : public FDescRowBase {
public:

	int32_t VistorId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FSoftObjectPath VistorImagePath; // 0x18(0x18)
	struct FSoftObjectPath VistorLittleImagePath; // 0x30(0x18)
	struct FText VisitorName; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GameSystemInfoRow
// Size: 0x48 (Inherited: 0x10)
struct FGameSystemInfoRow : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText SystemName; // 0x18(0x18)
	struct FText UnlockTip; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SafeHouseFormula
// Size: 0x98 (Inherited: 0x10)
struct FSafeHouseFormula : public FDescRowBase {
public:

	int32_t MajorKey; // 0x10(0x04)
	int32_t ID; // 0x14(0x04)
	int32_t ReplacedId; // 0x18(0x04)
	int32_t DeviceID; // 0x1c(0x04)
	int32_t Level; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString MaterialList; // 0x28(0x10)
	struct FString ProductList; // 0x38(0x10)
	struct FString WeightProductList; // 0x48(0x10)
	int32_t Time; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString BuffItemList; // 0x60(0x10)
	int32_t MaxLoopTimes; // 0x70(0x04)
	int32_t Type; // 0x74(0x04)
	int32_t bDisassemble; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	uint64_t PreviewItemId; // 0x80(0x08)
	uint64_t DefaultSort; // 0x88(0x08)
	int32_t IsBind; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SafeHouseUpgrade
// Size: 0xb8 (Inherited: 0x10)
struct FSafeHouseUpgrade : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	int32_t DeviceID; // 0x14(0x04)
	int32_t Level; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString TaskList; // 0x20(0x10)
	struct FString ItemList; // 0x30(0x10)
	struct FString DeviceList; // 0x40(0x10)
	struct FString QualityList; // 0x50(0x10)
	int32_t SeasonLevel; // 0x60(0x04)
	float SafeHouseDegree; // 0x64(0x04)
	int32_t Time; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FText Description; // 0x70(0x18)
	struct FString IconPath; // 0x88(0x10)
	struct FString UnlockSystemList; // 0x98(0x10)
	struct FString BuildingBP; // 0xa8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SafeHouseDeviceParam
// Size: 0x30 (Inherited: 0x10)
struct FSafeHouseDeviceParam : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	int32_t DeviceID; // 0x14(0x04)
	struct FName ParamName; // 0x18(0x08)
	struct FString ParamValue; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SafeHouseDevice
// Size: 0xd8 (Inherited: 0x10)
struct FSafeHouseDevice : public FDescRowBase {
public:

	int32_t DeviceID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct FText DescForUpgrade; // 0x48(0x18)
	char Type; // 0x60(0x01)
	char MaxLevel; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct FSoftObjectPath LitteIconPath; // 0x68(0x18)
	struct FSoftObjectPath BigIconPath; // 0x80(0x18)
	struct FString MainImg1; // 0x98(0x10)
	struct FString MainImg2; // 0xa8(0x10)
	struct FString MainImg3; // 0xb8(0x10)
	int32_t bShowInMain; // 0xc8(0x04)
	int32_t bCanProduction; // 0xcc(0x04)
	int32_t ShowInStrategicSelection; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SeasonDataRow
// Size: 0x60 (Inherited: 0x10)
struct FSeasonDataRow : public FDescRowBase {
public:

	struct FString ID; // 0x10(0x10)
	int32_t Index; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText SeasonName; // 0x28(0x18)
	struct FString StartTime; // 0x40(0x10)
	struct FString EndTime; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SeasonExperience
// Size: 0x40 (Inherited: 0x10)
struct FSeasonExperience : public FDescRowBase {
public:

	struct FString Variable; // 0x10(0x10)
	int32_t Value; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Desc; // 0x28(0x10)
	int32_t TipWidgetType; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SeasonLevel
// Size: 0x58 (Inherited: 0x10)
struct FSeasonLevel : public FDescRowBase {
public:

	int32_t Level; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Experience; // 0x18(0x10)
	struct FString LevelPrize; // 0x28(0x10)
	struct FString Unlock1; // 0x38(0x10)
	struct FString Unlock2; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ServerAddr
// Size: 0x90 (Inherited: 0x10)
struct FServerAddr : public FDescRowBase {
public:

	struct FText DisplayName; // 0x10(0x18)
	struct FText GroupName; // 0x28(0x18)
	enum class EGameBuildConfiguration TargetBuildConfiguration; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString Ip; // 0x48(0x10)
	int32_t Port; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString BranchID; // 0x60(0x10)
	bool bEditorOnly; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FServerAddrItem> Urls; // 0x78(0x10)
	struct FName KeyName; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ServerAddrItem
// Size: 0x28 (Inherited: 0x00)
struct FServerAddrItem {
public:

	struct FString Desc; // 0x00(0x10)
	enum class EServerType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString URL; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RaidComment
// Size: 0x38 (Inherited: 0x10)
struct FRaidComment : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText EvaluateName; // 0x18(0x18)
	int32_t EvaluateWeight; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RaidEvaluation
// Size: 0x40 (Inherited: 0x10)
struct FRaidEvaluation : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText EvaluateName; // 0x18(0x18)
	int32_t ParamID; // 0x30(0x04)
	int32_t MinValue; // 0x34(0x04)
	int32_t EvaluateWeight; // 0x38(0x04)
	int32_t EvaluateType; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RaidSettlementLong
// Size: 0xa0 (Inherited: 0x10)
struct FRaidSettlementLong : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	int32_t MapID; // 0x14(0x04)
	int32_t Difficulty; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText Description; // 0x20(0x18)
	int32_t EvaluateLevel; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString RaidPrizeSucc; // 0x40(0x10)
	struct FString RaidPrizeFailed; // 0x50(0x10)
	struct TArray<int64_t> HidePrize; // 0x60(0x10)
	int32_t PrizeNum; // 0x70(0x04)
	int32_t EvaluateDeaths; // 0x74(0x04)
	int32_t EvaluateBringIn; // 0x78(0x04)
	int32_t EvaluateTime; // 0x7c(0x04)
	struct FText DifficultyDesc; // 0x80(0x18)
	int32_t LevelID; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MandelBricksConnections
// Size: 0x28 (Inherited: 0x10)
struct FMandelBricksConnections : public FDescRowBase {
public:

	int64_t ProtoBrickID; // 0x10(0x08)
	int64_t WastedBrickID; // 0x18(0x08)
	int64_t RealBrickID; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SettlementFamousCelebrities
// Size: 0x28 (Inherited: 0x10)
struct FSettlementFamousCelebrities : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	struct FName Desc; // 0x14(0x08)
	struct FName Author; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SettlementPage
// Size: 0x50 (Inherited: 0x10)
struct FSettlementPage : public FDescRowBase {
public:

	int32_t ModeId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString PageOrder; // 0x18(0x10)
	struct FString MediaName; // 0x28(0x10)
	struct FString BitShowOrder; // 0x38(0x10)
	int32_t WaitTime; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SkillConfig
// Size: 0xa0 (Inherited: 0x10)
struct FSkillConfig : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	int64_t SkillId; // 0x18(0x08)
	int64_t GameMode; // 0x20(0x08)
	struct FString Icon; // 0x28(0x10)
	struct FText Name; // 0x38(0x18)
	struct FText Desc; // 0x50(0x18)
	int64_t SkillType; // 0x68(0x08)
	struct FString SillBPSource; // 0x70(0x10)
	int64_t BuffId; // 0x80(0x08)
	struct FText BuffName; // 0x88(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SocialAvatarDataTable
// Size: 0xa8 (Inherited: 0x08)
struct FSocialAvatarDataTable : public FTableRowBase {
public:

	int32_t AvatarType; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t AvatarID; // 0x10(0x08)
	struct FText AvatarName; // 0x18(0x18)
	int32_t UnLockType; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText AvatarDescription; // 0x38(0x18)
	struct FSoftObjectPath ResourceName; // 0x50(0x18)
	int32_t OpenCollection; // 0x68(0x04)
	int32_t DisplayResource; // 0x6c(0x04)
	struct TArray<struct FSoftObjectPath> OptionalResourceNames; // 0x70(0x10)
	int32_t JumpId; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FText ButtonDesc; // 0x88(0x18)
	int32_t ShopId; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SocialShareScene
// Size: 0x48 (Inherited: 0x10)
struct FSocialShareScene : public FDescRowBase {
public:

	struct FString ShareSceneID; // 0x10(0x10)
	struct FString ShareSceneName; // 0x20(0x10)
	struct FText Param1; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SocialShareParam
// Size: 0x40 (Inherited: 0x10)
struct FSocialShareParam : public FDescRowBase {
public:

	struct FString ID; // 0x10(0x10)
	struct FString ParamKey; // 0x20(0x10)
	struct TArray<uint64_t> ParamValue; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SOLDecalConfigRow
// Size: 0x20 (Inherited: 0x08)
struct FSOLDecalConfigRow : public FTableRowBase {
public:

	struct FName DecalID; // 0x08(0x08)
	/*struct TArray<struct TSoftObjectPtr<UObject>>*/char IconPaths[0x10]; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SOLMapValueDetailTable
// Size: 0xb8 (Inherited: 0x10)
struct FSOLMapValueDetailTable : public FDescRowBase {
public:

	int32_t MapID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText MapTitle; // 0x18(0x18)
	struct FText MapSubTitle; // 0x30(0x18)
	struct FText MapDetail; // 0x48(0x18)
	struct FText MapDiffculty; // 0x60(0x18)
	struct FText ActionLevel; // 0x78(0x18)
	struct FString ItemList; // 0x90(0x10)
	struct FText DropRate; // 0xa0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SOLUIIconConfigRow
// Size: 0x38 (Inherited: 0x08)
struct FSOLUIIconConfigRow : public FTableRowBase {
public:

	enum class ESOLUIIconType IconType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	/*struct TSoftObjectPtr<UObject>*/char IconPath[0x28]; // 0x10(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SOLUIColorConfigRow
// Size: 0x20 (Inherited: 0x08)
struct FSOLUIColorConfigRow : public FTableRowBase {
public:

	enum class ESOLUIColorType ColorType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FLinearColor LinearColor; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SHresult
// Size: 0x70 (Inherited: 0x00)
struct FSHresult {
public:

	struct FLinearColor SH01_r; // 0x00(0x10)
	struct FLinearColor SH01_g; // 0x10(0x10)
	struct FLinearColor SH01_b; // 0x20(0x10)
	struct FLinearColor SH2a_r; // 0x30(0x10)
	struct FLinearColor SH2a_g; // 0x40(0x10)
	struct FLinearColor SH2a_b; // 0x50(0x10)
	struct FLinearColor SH2b_rgb; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.StoreCharge
// Size: 0x20 (Inherited: 0x10)
struct FStoreCharge : public FDescRowBase {
public:

	struct FString ImgPath; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.StoreItem
// Size: 0x108 (Inherited: 0x10)
struct FStoreItem : public FDescRowBase {
public:

	uint64_t ShopId; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	int32_t NameSort; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText TitleName; // 0x38(0x18)
	int32_t MainTabId; // 0x50(0x04)
	int32_t SubTabId; // 0x54(0x04)
	struct FString ImgPath; // 0x58(0x10)
	struct FString AvatarID; // 0x68(0x10)
	bool bAvatarWithSuit; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	uint64_t BaseItemId; // 0x80(0x08)
	struct FText Desc; // 0x88(0x18)
	struct FText BpTechTips; // 0xa0(0x18)
	struct FText DyeTips; // 0xb8(0x18)
	struct FText DesignerStory; // 0xd0(0x18)
	struct FText BoxDescText; // 0xe8(0x18)
	int32_t OnceLimitNum; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SpecialItemBuyConf
// Size: 0x38 (Inherited: 0x10)
struct FSpecialItemBuyConf : public FDescRowBase {
public:

	uint64_t PresentItemID; // 0x10(0x08)
	uint64_t CurrencyType; // 0x18(0x08)
	uint64_t Price; // 0x20(0x08)
	uint64_t BuyItemID; // 0x28(0x08)
	int32_t PresentNum; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.StoreMallGiftConfig
// Size: 0xd0 (Inherited: 0x10)
struct FStoreMallGiftConfig : public FDescRowBase {
public:

	uint64_t GoodsId; // 0x10(0x08)
	uint64_t SortIndex; // 0x18(0x08)
	int32_t IsBlocked; // 0x20(0x04)
	int32_t GoodsType; // 0x24(0x04)
	int32_t LimitType; // 0x28(0x04)
	int32_t LimitAmount; // 0x2c(0x04)
	struct FString OnlineTime; // 0x30(0x10)
	struct FString OfflineTime; // 0x40(0x10)
	int32_t IsDisplayCountdown; // 0x50(0x04)
	int32_t IsDiscountIntensity; // 0x54(0x04)
	struct FText GiftName; // 0x58(0x18)
	struct FString Items; // 0x70(0x10)
	struct FString ItemsSortIndex; // 0x80(0x10)
	uint64_t CurrencyType; // 0x90(0x08)
	uint64_t Price; // 0x98(0x08)
	uint64_t PricePreDis; // 0xa0(0x08)
	int32_t IsCash; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString ExternalItemNumber; // 0xb0(0x10)
	struct FString IamgeSource; // 0xc0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.StoreHotRecommendation
// Size: 0xf8 (Inherited: 0x10)
struct FStoreHotRecommendation : public FDescRowBase {
public:

	uint64_t TabId; // 0x10(0x08)
	uint64_t BannerType; // 0x18(0x08)
	uint64_t SortIndex; // 0x20(0x08)
	struct FText BannerName; // 0x28(0x18)
	struct FString OnlineTime; // 0x40(0x10)
	struct FString OfflineTime; // 0x50(0x10)
	int32_t IsDisplayCountdown; // 0x60(0x04)
	int32_t IsDiscountIntensity; // 0x64(0x04)
	uint64_t BundleCurrencyType; // 0x68(0x08)
	uint64_t DisBundlePrice; // 0x70(0x08)
	uint64_t BundlePrice; // 0x78(0x08)
	struct FString BundleItem; // 0x80(0x10)
	struct FString ItemsSortIndex; // 0x90(0x10)
	struct FString IamgeSourceSmall; // 0xa0(0x10)
	struct FString IamgeSourceBig; // 0xb0(0x10)
	struct FString ImageSourceLogo; // 0xc0(0x10)
	struct FString JumpTo; // 0xd0(0x10)
	struct FString MoviesRowName; // 0xe0(0x10)
	int32_t MoviesAuto; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.StoreLottery
// Size: 0xe0 (Inherited: 0x10)
struct FStoreLottery : public FDescRowBase {
public:

	uint64_t LotteryType; // 0x10(0x08)
	uint64_t LotteryId; // 0x18(0x08)
	struct FString BeginTime; // 0x20(0x10)
	struct FString EndTime; // 0x30(0x10)
	int32_t IsDisplayCountdown; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	uint64_t MandelItemId; // 0x48(0x08)
	uint64_t LotteryKeyId; // 0x50(0x08)
	struct FString MoviesRowName; // 0x58(0x10)
	int32_t MoviesAuto; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FText LotteryText1; // 0x70(0x18)
	struct FText LotteryText2; // 0x88(0x18)
	struct FString VedioGreat; // 0xa0(0x10)
	struct FString VedioNormal; // 0xb0(0x10)
	struct FString DetailBg; // 0xc0(0x10)
	struct FString ImageSourceLogo; // 0xd0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.StoreSubTab
// Size: 0x58 (Inherited: 0x10)
struct FStoreSubTab : public FDescRowBase {
public:

	int32_t SubTabId; // 0x10(0x04)
	int32_t TabId; // 0x14(0x04)
	int32_t SortIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText SubTabName; // 0x20(0x18)
	int32_t IsDisplay; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FText CurrencyColumn; // 0x40(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.StoreMainTab
// Size: 0x48 (Inherited: 0x10)
struct FStoreMainTab : public FDescRowBase {
public:

	int32_t TabId; // 0x10(0x04)
	int32_t SortIndex; // 0x14(0x04)
	struct FText TabName; // 0x18(0x18)
	struct FText CurrencyColumn; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.StoreTab
// Size: 0x58 (Inherited: 0x10)
struct FStoreTab : public FDescRowBase {
public:

	int32_t TabId; // 0x10(0x04)
	int32_t MainTabId; // 0x14(0x04)
	int32_t SubTabId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText MainTabName; // 0x20(0x18)
	struct FText SubTabName; // 0x38(0x18)
	int32_t SubTabOrder; // 0x50(0x04)
	bool bHide; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.StoryDialogRow
// Size: 0x40 (Inherited: 0x08)
struct FStoryDialogRow : public FTableRowBase {
public:

	int64_t DialogID; // 0x08(0x08)
	int64_t TraderID; // 0x10(0x08)
	int64_t SpeakerID; // 0x18(0x08)
	struct FText Content; // 0x20(0x18)
	int64_t NextID; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SystemMail
// Size: 0x120 (Inherited: 0x08)
struct FSystemMail : public FTableRowBase {
public:

	int64_t MailID; // 0x08(0x08)
	struct FText Sender; // 0x10(0x18)
	struct FText Title; // 0x28(0x18)
	int64_t AvatarID; // 0x40(0x08)
	struct FText Content; // 0x48(0x18)
	int32_t MailType; // 0x60(0x04)
	int32_t AutoDelete; // 0x64(0x04)
	struct FString Hyperlink; // 0x68(0x10)
	struct FString HyperLinkTitle; // 0x78(0x10)
	struct FString HyperLinkURL; // 0x88(0x10)
	int32_t ExpirationTime; // 0x98(0x04)
	int32_t AttachmentExpirationTime; // 0x9c(0x04)
	int64_t Attachment1ItemID; // 0xa0(0x08)
	int32_t Attachment1Num; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	int64_t Attachment2ItemID; // 0xb0(0x08)
	int32_t Attachment2Num; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	int64_t Attachment3ItemID; // 0xc0(0x08)
	int32_t Attachment3Num; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	int64_t Attachment4ItemID; // 0xd0(0x08)
	int32_t Attachment4Num; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	int64_t Attachment5ItemID; // 0xe0(0x08)
	int32_t Attachment5Num; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	int64_t Attachment6ItemID; // 0xf0(0x08)
	int32_t Attachment6Num; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	int64_t Attachment7ItemID; // 0x100(0x08)
	int32_t Attachment7Num; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	int64_t Attachment8ItemID; // 0x110(0x08)
	int32_t Attachment8Num; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TalentDataRow
// Size: 0xf0 (Inherited: 0x10)
struct FTalentDataRow : public FDescRowBase {
public:

	struct FName TalentId; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	struct FText Desc; // 0x30(0x18)
	/*struct TSet<struct FName>*/char Professions[0x50]; // 0x48(0x50)
	/*struct TSoftObjectPtr<UPaperSprite>*/char Icon[0x28]; // 0x98(0x28)
	int32_t TimeType; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<uint32_t> AttributeOperateIDArray; // 0xc8(0x10)
	struct TArray<uint32_t> BuffIdArray; // 0xd8(0x10)
	int32_t SkillId; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ExpertSkillInfo
// Size: 0x98 (Inherited: 0x10)
struct FExpertSkillInfo : public FDescRowBase {
public:

	int64_t ExpertId; // 0x10(0x08)
	int64_t ArmedForceID; // 0x18(0x08)
	int64_t MPUltimateSkillID; // 0x20(0x08)
	int64_t MPSupportSkillID; // 0x28(0x08)
	int64_t MPPassiveSkillID; // 0x30(0x08)
	int64_t MPActiveSkillID; // 0x38(0x08)
	int64_t MPCommonPassiveSkillID; // 0x40(0x08)
	int64_t MPCustomSkillID; // 0x48(0x08)
	struct TArray<int32_t> MPCommonSkillID; // 0x50(0x10)
	int64_t SOLUltimateSkillID; // 0x60(0x08)
	int64_t SOLSupportSkillID; // 0x68(0x08)
	int64_t SOLPassiveSkillID; // 0x70(0x08)
	int64_t SOLActiveSkillID; // 0x78(0x08)
	int64_t SOLCommonPassiveSkillID; // 0x80(0x08)
	struct TArray<int32_t> SOLCommonSkillID; // 0x88(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TalentInfo
// Size: 0x90 (Inherited: 0x10)
struct FTalentInfo : public FDescRowBase {
public:

	int64_t TalentId; // 0x10(0x08)
	int64_t ArmedForceID; // 0x18(0x08)
	struct FText Name; // 0x20(0x18)
	struct FText Desc; // 0x38(0x18)
	struct FString Icon; // 0x50(0x10)
	int64_t MPActiveSkillID; // 0x60(0x08)
	int64_t MPPassiveSkillID; // 0x68(0x08)
	int64_t MPCommonPassiveSkillID; // 0x70(0x08)
	int64_t SOLActiveSkillID; // 0x78(0x08)
	int64_t SOLPassiveSkillID; // 0x80(0x08)
	int64_t SOLCommonPassiveSkillID; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TDMMapResourceConfig
// Size: 0x58 (Inherited: 0x08)
struct FTDMMapResourceConfig : public FTableRowBase {
public:

	int32_t ID; // 0x08(0x04)
	int32_t GameRule; // 0x0c(0x04)
	struct FString Desc; // 0x10(0x10)
	int32_t MatchSubMode; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FSoftObjectPath ButtonThumbnailHD; // 0x28(0x18)
	struct FSoftObjectPath ButtonThumbnail; // 0x40(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TDMMapConfig
// Size: 0x138 (Inherited: 0x08)
struct FTDMMapConfig : public FTableRowBase {
public:

	int32_t ID; // 0x08(0x04)
	int32_t DefaultMode; // 0x0c(0x04)
	int32_t GroupID; // 0x10(0x04)
	int32_t MatchModeId; // 0x14(0x04)
	int32_t GroupMapSelectType; // 0x18(0x04)
	int32_t Priority; // 0x1c(0x04)
	struct FText ModeName; // 0x20(0x18)
	struct FText ModeDesc; // 0x38(0x18)
	struct FSoftObjectPath ModeThumbnail; // 0x50(0x18)
	struct FText MapName; // 0x68(0x18)
	struct FText MapDesc; // 0x80(0x18)
	struct FSoftObjectPath MapThumbnail; // 0x98(0x18)
	struct FText ModeRuleDesc; // 0xb0(0x18)
	char AddMemberType : 1; // 0xc8(0x01)
	char Available : 1; // 0xc8(0x01)
	char Open : 1; // 0xc8(0x01)
	char pad_C8_3 : 5; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FString OpenTime; // 0xd0(0x10)
	struct FString CloseTime; // 0xe0(0x10)
	struct FString WeeklyTime; // 0xf0(0x10)
	struct FString DayTime; // 0x100(0x10)
	struct FText TimeDesc; // 0x110(0x18)
	int32_t ModePlayerLevel; // 0x128(0x04)
	char IsTournement : 1; // 0x12c(0x01)
	char pad_12C_1 : 7; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	int32_t GroupType; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TeammateUIConfigRow
// Size: 0x200 (Inherited: 0x08)
struct FTeammateUIConfigRow : public FTableRowBase {
public:

	enum class EDFMGamePlayMode DFMGamePlayMode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TMap<enum class ETeammateState, struct FTeammateStateInfo> TeammateStateInfoMap; // 0x10(0x50)
	/*struct TMap<int32_t, struct TSoftObjectPtr<UObject>>*/char PlayerGamePlayStateIconMap[0x50]; // 0x60(0x50)
	/*struct TMap<enum class EInGameBattleClassType, struct TSoftObjectPtr<UObject>>*/char InGameBattleClassType[0x50]; // 0xb0(0x50)
	/*struct TMap<uint64_t, struct TSoftObjectPtr<UObject>>*/char HeroAvatarMobile[0x50]; // 0x100(0x50)
	/*struct TMap<uint64_t, struct TSoftObjectPtr<UObject>>*/char HeroAvatarHD[0x50]; // 0x150(0x50)
	/*struct TArray<struct TSoftObjectPtr<UObject>>*/char PlayerIndexIcon[0x10]; // 0x1a0(0x10)
	struct TMap<enum class EPlayerRelationShipType, struct FLinearColor> PlayerRelationShipColorMap; // 0x1b0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TeammateStateInfo
// Size: 0x48 (Inherited: 0x00)
struct FTeammateStateInfo {
public:

	/*struct TSoftObjectPtr<UObject>*/char TeammateStateIconPath[0x28]; // 0x00(0x28)
	struct FLinearColor MaskColor; // 0x28(0x10)
	struct FLinearColor ProgressBarColor; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TeamMessage
// Size: 0x38 (Inherited: 0x10)
struct FTeamMessage : public FDescRowBase {
public:

	struct FName RowName; // 0x10(0x08)
	enum class EMessagetype Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FText Message; // 0x20(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TeamSize
// Size: 0x28 (Inherited: 0x10)
struct FTeamSize : public FDescRowBase {
public:

	int32_t TeamSizeId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString TeamSizeName; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TipsConfig
// Size: 0x68 (Inherited: 0x10)
struct FTipsConfig : public FDescRowBase {
public:

	int32_t TipsId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TSoftObjectPtr<UPaperSprite>*/char TitleIconPath[0x28]; // 0x18(0x28)
	struct FText Title; // 0x40(0x18)
	struct TArray<struct FText> Texts; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TLogDefinition
// Size: 0x28 (Inherited: 0x10)
struct FTLogDefinition : public FDescRowBase {
public:

	struct FName TLogName; // 0x10(0x08)
	int32_t MaxSendNum; // 0x18(0x04)
	int32_t MaxWaitSendNum; // 0x1c(0x04)
	int32_t ClientMaxSendNum; // 0x20(0x04)
	int32_t ClientMaxWaitSendNum; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TODConfig
// Size: 0xa0 (Inherited: 0x10)
struct FTODConfig : public FDescRowBase {
public:

	int32_t TODId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	int32_t DuringTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText Desc; // 0x38(0x18)
	int32_t WeatherID; // 0x50(0x04)
	int32_t EventId; // 0x54(0x04)
	struct FText DescSidebar; // 0x58(0x18)
	int32_t IfHerotod; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString WeatherIconPath; // 0x78(0x10)
	struct FText Temperature; // 0x88(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TournamentParameter
// Size: 0x48 (Inherited: 0x10)
struct FTournamentParameter : public FDescRowBase {
public:

	struct FString Variable; // 0x10(0x10)
	struct FString Desc; // 0x20(0x10)
	struct FText Value; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TournamentScore
// Size: 0x58 (Inherited: 0x10)
struct FTournamentScore : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	int32_t TeriaryID; // 0x14(0x04)
	struct FText Desc; // 0x18(0x18)
	int32_t MinimumAbility; // 0x30(0x04)
	int32_t ProductPara; // 0x34(0x04)
	int32_t OffsetPara; // 0x38(0x04)
	int32_t AveragePara; // 0x3c(0x04)
	float StandardPara; // 0x40(0x04)
	float VerticalOffsetPara; // 0x44(0x04)
	int32_t MapID; // 0x48(0x04)
	int32_t UpperLimit; // 0x4c(0x04)
	int32_t LowerLimit; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TournamentSeason
// Size: 0x160 (Inherited: 0x10)
struct FTournamentSeason : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString StartTime; // 0x18(0x10)
	struct FString EndTime; // 0x28(0x10)
	struct FText UIStartTime; // 0x38(0x18)
	struct FText UIEndTime; // 0x50(0x18)
	struct FString StopMatchTime; // 0x68(0x10)
	struct FText Name; // 0x78(0x18)
	struct FText SeasonDescription; // 0x90(0x18)
	struct FText Description; // 0xa8(0x18)
	struct FSoftObjectPath BackgroundPic; // 0xc0(0x18)
	struct FSoftObjectPath SeasonBeginAnimation; // 0xd8(0x18)
	struct FSoftObjectPath InterfaceAnimation; // 0xf0(0x18)
	struct FText RankPopupExplainTips; // 0x108(0x18)
	struct FText TitleExplainTips; // 0x120(0x18)
	struct FString CoreAward; // 0x138(0x10)
	int32_t CoreTier; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FString CoreAwardPicture; // 0x150(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TournamentTitle
// Size: 0x70 (Inherited: 0x10)
struct FTournamentTitle : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText TitleName; // 0x18(0x18)
	int32_t Weapon; // 0x30(0x04)
	int32_t Tactical; // 0x34(0x04)
	int32_t Vehicle; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FSoftObjectPath Icon; // 0x40(0x18)
	struct FSoftObjectPath Border; // 0x58(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TournamentRewards
// Size: 0x60 (Inherited: 0x10)
struct FTournamentRewards : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	int32_t SeasonID; // 0x14(0x04)
	int32_t TierID; // 0x18(0x04)
	int32_t RewardConditionType; // 0x1c(0x04)
	int32_t RewardConditionPar; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText RewardConditionDes; // 0x28(0x18)
	struct TArray<struct FString> rewards; // 0x40(0x10)
	struct TArray<struct FString> SeasonRewards; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TournamentTier
// Size: 0xf0 (Inherited: 0x10)
struct FTournamentTier : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText Name; // 0x18(0x18)
	int32_t TierTypeID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText Type; // 0x38(0x18)
	int32_t SubID; // 0x50(0x04)
	int32_t MinPoint; // 0x54(0x04)
	int32_t StarsDivided; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FSoftObjectPath BadgeModel; // 0x60(0x18)
	struct FSoftObjectPath BadgeIcon; // 0x78(0x18)
	struct FSoftObjectPath BadgeIconThumbnail; // 0x90(0x18)
	struct FSoftObjectPath BadgeMinIcon; // 0xa8(0x18)
	struct FSoftObjectPath BadgeMinIconThumbnail; // 0xc0(0x18)
	struct FSoftObjectPath BadgeTransitionAnimation; // 0xd8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TraderInfo
// Size: 0x188 (Inherited: 0x10)
struct FTraderInfo : public FDescRowBase {
public:

	int64_t TraderID; // 0x10(0x08)
	struct FText TraderName; // 0x18(0x18)
	struct FText TraderTitle; // 0x30(0x18)
	struct FText TraderCenterType; // 0x48(0x18)
	struct FText TraderTypeNameList; // 0x60(0x18)
	struct FString TraderTypeIDList; // 0x78(0x10)
	struct FString TraderIconPath; // 0x88(0x10)
	struct FText TraderDesc; // 0x98(0x18)
	struct FString DefaultSlot; // 0xb0(0x10)
	struct FString AllMatchSlots; // 0xc0(0x10)
	struct FString UnlockRepLv; // 0xd0(0x10)
	int32_t PlayerLv1Lv; // 0xe0(0x04)
	int32_t PlayerLv2Lv; // 0xe4(0x04)
	int32_t PlayerLv3Lv; // 0xe8(0x04)
	int32_t PlayerLv4Lv; // 0xec(0x04)
	int32_t PlayerLv1Credit; // 0xf0(0x04)
	int32_t PlayerLv2Credit; // 0xf4(0x04)
	int32_t PlayerLv3Credit; // 0xf8(0x04)
	int32_t PlayerLv4Credit; // 0xfc(0x04)
	int32_t LvN1Favorability; // 0x100(0x04)
	int32_t LvN2Favorability; // 0x104(0x04)
	int32_t LvN3Favorability; // 0x108(0x04)
	int32_t LvN4Favorability; // 0x10c(0x04)
	int32_t LvN5Favorability; // 0x110(0x04)
	int32_t Lv0Favorability; // 0x114(0x04)
	int32_t Lv1Favorability; // 0x118(0x04)
	int32_t Lv2Favorability; // 0x11c(0x04)
	int32_t Lv3Favorability; // 0x120(0x04)
	int32_t Lv4Favorability; // 0x124(0x04)
	int32_t Lv5Favorability; // 0x128(0x04)
	float LvN1FavDiscount; // 0x12c(0x04)
	float LvN2FavDiscount; // 0x130(0x04)
	float LvN3FavDiscount; // 0x134(0x04)
	float LvN4FavDiscount; // 0x138(0x04)
	float LvN5FavDiscount; // 0x13c(0x04)
	float Lv0FavDiscount; // 0x140(0x04)
	float Lv1FavDiscount; // 0x144(0x04)
	float Lv2FavDiscount; // 0x148(0x04)
	float Lv3FavDiscount; // 0x14c(0x04)
	float Lv4FavDiscount; // 0x150(0x04)
	float Lv5FavDiscount; // 0x154(0x04)
	int32_t Lv2FavDropPoolID; // 0x158(0x04)
	float Lv2FavGiftProb; // 0x15c(0x04)
	int32_t Lv2FavGiftTimes; // 0x160(0x04)
	int32_t Lv3FavDropPoolID; // 0x164(0x04)
	float Lv3FavGiftProb; // 0x168(0x04)
	int32_t Lv3FavGiftTimes; // 0x16c(0x04)
	int32_t Lv4FavDropPoolID; // 0x170(0x04)
	float Lv4FavGiftProb; // 0x174(0x04)
	int32_t Lv4FavGiftTimes; // 0x178(0x04)
	int32_t Lv5FavDropPoolID; // 0x17c(0x04)
	float Lv5FavGiftProb; // 0x180(0x04)
	int32_t Lv5FavGiftTimes; // 0x184(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TraderGiftInfo
// Size: 0xa8 (Inherited: 0x10)
struct FTraderGiftInfo : public FDescRowBase {
public:

	int64_t ItemID; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	bool CanBeGift; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString Trader1; // 0x38(0x10)
	struct FString Trader2; // 0x48(0x10)
	struct FString Trader3; // 0x58(0x10)
	struct FString Trader4; // 0x68(0x10)
	struct FString Trader5; // 0x78(0x10)
	struct FString Trader6; // 0x88(0x10)
	struct FString Trader7; // 0x98(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TraderPageMainInfo
// Size: 0x40 (Inherited: 0x10)
struct FTraderPageMainInfo : public FDescRowBase {
public:

	int32_t LabelNo1; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText LabelNo1Name; // 0x18(0x18)
	struct FString LabelNo1Icon; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TraderPageInfo
// Size: 0x70 (Inherited: 0x10)
struct FTraderPageInfo : public FDescRowBase {
public:

	int32_t PageID; // 0x10(0x04)
	int32_t TraderID; // 0x14(0x04)
	int32_t ExchangeType; // 0x18(0x04)
	int32_t LabelNo1; // 0x1c(0x04)
	int32_t LabelNo2; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText LabelNo1Name; // 0x28(0x18)
	struct FText LabelNo2Name; // 0x40(0x18)
	struct FString LabelNo2Icon; // 0x58(0x10)
	int32_t PageOrder; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TraderSectorTypeInfo
// Size: 0x48 (Inherited: 0x10)
struct FTraderSectorTypeInfo : public FDescRowBase {
public:

	int64_t TraderSectorID; // 0x10(0x08)
	int64_t QualityID; // 0x18(0x08)
	struct FText TraderSectorTypeName; // 0x20(0x18)
	struct FString TraderSectorTypeKey; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TraderTypeInfo
// Size: 0x40 (Inherited: 0x10)
struct FTraderTypeInfo : public FDescRowBase {
public:

	int64_t TraderTypeID; // 0x10(0x08)
	struct FText TraderTypeName; // 0x18(0x18)
	struct FString TraderTypeIconPath; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.TXAchievement
// Size: 0xa0 (Inherited: 0x08)
struct FTXAchievement : public FTableRowBase {
public:

	int64_t ID; // 0x08(0x08)
	struct FText Name; // 0x10(0x18)
	struct FText Desc; // 0x28(0x18)
	int32_t Order; // 0x40(0x04)
	int32_t Model; // 0x44(0x04)
	int64_t HeroID; // 0x48(0x08)
	struct TArray<int64_t> Titleid; // 0x50(0x10)
	struct TArray<int64_t> MissionSOL; // 0x60(0x10)
	struct TArray<int64_t> MissionBR; // 0x70(0x10)
	int32_t Hide; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FText MissionText; // 0x88(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.UserSystemSetting
// Size: 0x60 (Inherited: 0x10)
struct FUserSystemSetting : public FDescRowBase {
public:

	struct FName SystemSettingName; // 0x10(0x08)
	struct FText Title; // 0x18(0x18)
	struct FText Desc; // 0x30(0x18)
	struct FSoftObjectPath DescImgPath; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.VehicleModificationRulesDataConfigList
// Size: 0x18 (Inherited: 0x00)
struct FVehicleModificationRulesDataConfigList {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.VehicleFrontendTransformRow
// Size: 0x50 (Inherited: 0x10)
struct FVehicleFrontendTransformRow : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	struct FVector Location; // 0x18(0x0c)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FQuat Rotation; // 0x30(0x10)
	struct FVector Scale; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.VehicleSocketNameRow
// Size: 0x28 (Inherited: 0x10)
struct FVehicleSocketNameRow : public FDescRowBase {
public:

	int64_t SocketNum; // 0x10(0x08)
	struct FName SocketName; // 0x18(0x08)
	struct FName SocketIndex; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.VehicleSkinDataConfig
// Size: 0x80 (Inherited: 0x10)
struct FVehicleSkinDataConfig : public FDescRowBase {
public:

	int64_t SkinId; // 0x10(0x08)
	struct FText SkinName; // 0x18(0x18)
	struct FText SkinDescription; // 0x30(0x18)
	int64_t DefaultSkinAppearanceID; // 0x48(0x08)
	int64_t VehicleItemID; // 0x50(0x08)
	int64_t VehicleId; // 0x58(0x08)
	bool OpenCollection; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FText UnLock; // 0x68(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.VehicleModificationTabDataConfig
// Size: 0x58 (Inherited: 0x10)
struct FVehicleModificationTabDataConfig : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	int32_t TabId; // 0x18(0x04)
	int32_t SlotId; // 0x1c(0x04)
	bool bHide; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t SortID; // 0x24(0x04)
	struct FText Name; // 0x28(0x18)
	struct FSoftObjectPath ImgPath; // 0x40(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.VehicleModificationRulesDataConfig
// Size: 0x110 (Inherited: 0x10)
struct FVehicleModificationRulesDataConfig : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	int64_t VehicleItemID; // 0x18(0x08)
	int64_t VehicleId; // 0x20(0x08)
	struct FText VehicleName; // 0x28(0x18)
	int64_t SocketNum; // 0x40(0x08)
	struct FText SeatID; // 0x48(0x18)
	int32_t SocketType; // 0x60(0x04)
	int32_t SocketId; // 0x64(0x04)
	struct FText SocketName; // 0x68(0x18)
	int64_t PartItemId; // 0x80(0x08)
	int64_t PartId; // 0x88(0x08)
	struct FText PartName; // 0x90(0x18)
	struct FText PartDescription; // 0xa8(0x18)
	struct FText ModelPath; // 0xc0(0x18)
	int32_t DefaultPart; // 0xd8(0x04)
	int32_t UnLockType; // 0xdc(0x04)
	int32_t UnlockPara; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	int64_t UnlockTask; // 0xe8(0x08)
	struct FText UnlockDescription; // 0xf0(0x18)
	int32_t SlotId; // 0x108(0x04)
	int32_t SortID; // 0x10c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.VehicleUnlockDataConfig
// Size: 0x78 (Inherited: 0x10)
struct FVehicleUnlockDataConfig : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	int64_t VehicleId; // 0x18(0x08)
	struct FText VehicleName; // 0x20(0x18)
	struct FText VehicleDescription; // 0x38(0x18)
	int32_t UnlockMethod; // 0x50(0x04)
	int32_t UnlockPara; // 0x54(0x04)
	struct FText UnlockDescription; // 0x58(0x18)
	int32_t SortID; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.VehicleExpDataRow
// Size: 0x20 (Inherited: 0x10)
struct FVehicleExpDataRow : public FDescRowBase {
public:

	int64_t ExpType; // 0x10(0x08)
	float ExpRatio; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.VehicleUISkinAppearanceRow
// Size: 0x30 (Inherited: 0x10)
struct FVehicleUISkinAppearanceRow : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	bool IsReplaceAllTextures; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FVehicleUISkinItemInfo> UISkinItemInfos; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.VehicleUISkinItemInfo
// Size: 0x38 (Inherited: 0x00)
struct FVehicleUISkinItemInfo {
public:

	uint64_t VehiclePartItemID; // 0x00(0x08)
	int32_t MaterialIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char SkinMaterial[0x28]; // 0x10(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.VehicleSkinAppearanceRow
// Size: 0x70 (Inherited: 0x10)
struct FVehicleSkinAppearanceRow : public FDescRowBase {
public:

	int64_t ID; // 0x10(0x08)
	bool IsReplaceAllTextures; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FVehicleSkinSocketInfo> SkinSocketInfos; // 0x20(0x10)
	struct TArray<struct FVehicleSkinSocketInfo> WheelSkinSocketInfos; // 0x30(0x10)
	struct TArray<struct FVehicleSkinSocketInfo> UISkinSocketInfos; // 0x40(0x10)
	struct TArray<struct FVehicleSkinSocketInfo> SkinSocketInfosWithMeshName; // 0x50(0x10)
	struct TArray<struct FVehicleWeaponSkinInfo> WeaponSkinIds; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.VehicleWeaponSkinInfo
// Size: 0x10 (Inherited: 0x00)
struct FVehicleWeaponSkinInfo {
public:

	uint64_t WeaponID; // 0x00(0x08)
	uint64_t SkinId; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.VehicleSkinSocketInfo
// Size: 0x40 (Inherited: 0x00)
struct FVehicleSkinSocketInfo {
public:

	struct FName SocketName; // 0x00(0x08)
	struct FName SocketNameMobile; // 0x08(0x08)
	int32_t MaterialIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char SkinMaterial[0x28]; // 0x18(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MPWeaponLevelParts
// Size: 0x38 (Inherited: 0x10)
struct FMPWeaponLevelParts : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	struct FName RecFunctionId; // 0x14(0x08)
	int32_t Level; // 0x1c(0x04)
	int32_t Exp; // 0x20(0x04)
	int32_t ExpSum; // 0x24(0x04)
	struct TArray<struct FName> UnlockParts; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.WeaponLevelFormula
// Size: 0x38 (Inherited: 0x10)
struct FWeaponLevelFormula : public FDescRowBase {
public:

	int32_t factorType; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText FactorDesc; // 0x18(0x18)
	int32_t FactorPara; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.WeaponExpItem
// Size: 0x20 (Inherited: 0x10)
struct FWeaponExpItem : public FDescRowBase {
public:

	struct FName ItemID; // 0x10(0x08)
	int32_t AddWeaponExp; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.WeGameLanguageCode
// Size: 0x30 (Inherited: 0x10)
struct FWeGameLanguageCode : public FDescRowBase {
public:

	struct FString LNGCode; // 0x10(0x10)
	struct FString LNGCodeWithRegionCode; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.WorldActorConfig
// Size: 0x50 (Inherited: 0x10)
struct FWorldActorConfig : public FDescRowBase {
public:

	int64_t ActorID; // 0x10(0x08)
	int32_t DefaultState; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	int64_t Content1PropID; // 0x20(0x08)
	int32_t Content1Num; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	int64_t Content2PropID; // 0x30(0x08)
	int32_t Content2Num; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	int64_t Content3PropID; // 0x40(0x08)
	int32_t Content3Num; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.WorldEntranceConfig
// Size: 0xc8 (Inherited: 0x10)
struct FWorldEntranceConfig : public FDescRowBase {
public:

	uint32_t EntranceIdx; // 0x10(0x04)
	uint32_t GameMode; // 0x14(0x04)
	uint32_t GameRuleType; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString MapID; // 0x20(0x10)
	uint32_t RaidID; // 0x30(0x04)
	uint32_t StartSpotGroup; // 0x34(0x04)
	struct FText EntranceMainName; // 0x38(0x18)
	struct FText EntranceSubName; // 0x50(0x18)
	struct FText EntranceOrientation; // 0x68(0x18)
	struct FText EntranceDesc; // 0x80(0x18)
	struct FSoftObjectPath EntranceThumbnail; // 0x98(0x18)
	uint32_t Difficulty; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString BossName; // 0xb8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HighValueBoxInfo
// Size: 0x60 (Inherited: 0x00)
struct FHighValueBoxInfo {
public:

	bool bHighValueBox; // 0x00(0x01)
	enum class EHighValueBoxType HighValueBoxType; // 0x01(0x01)
	enum class ESOLUIIconType IconType; // 0x02(0x01)
	enum class ESOLUIColorType ColorType; // 0x03(0x01)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText HighValueBoxName; // 0x08(0x18)
	struct FText Desc; // 0x20(0x18)
	struct TArray<struct FName> HighValueItemList; // 0x38(0x10)
	struct FName IconName; // 0x48(0x08)
	struct FVector DSLoc; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AbilityPlayMontageAnimUnit
// Size: 0x20 (Inherited: 0x00)
struct FAbilityPlayMontageAnimUnit {
public:

	struct UAnimSequenceBase* AnimSeqStand; // 0x00(0x08)
	struct UAnimSequenceBase* AnimSeqCrouch; // 0x08(0x08)
	struct UAnimSequenceBase* AnimSeqProne; // 0x10(0x08)
	struct UAnimSequenceBase* AnimSeqSliding; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AILabPathDescribe
// Size: 0x10 (Inherited: 0x00)
struct FAILabPathDescribe {
public:

	struct TArray<struct FAILabPathPoint> PathPoints; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterFacialAnimation
// Size: 0x20 (Inherited: 0x00)
struct FCharacterFacialAnimation {
public:

	struct FSoftObjectPath HeadMesh; // 0x00(0x18)
	struct UClass* HeadAnimationBP; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterSkillInfo
// Size: 0x50 (Inherited: 0x00)
struct FCharacterSkillInfo {
public:

	struct TMap<int64_t, int64_t> WeaponID2AppearanceID; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SceneActorBPData
// Size: 0x48 (Inherited: 0x08)
struct FSceneActorBPData : public FTableRowBase {
public:

	struct FSoftClassPath SceneMeshBP; // 0x08(0x18)
	struct FVector SceneMeshBPLocation; // 0x20(0x0c)
	struct FRotator SceneMeshBPRotation; // 0x2c(0x0c)
	struct FVector SceneMeshBPScale; // 0x38(0x0c)
	enum class ECustomTransformRule CustomTransformRule; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CommercialBaseRow
// Size: 0x40 (Inherited: 0x10)
struct FCommercialBaseRow : public FDescRowBase {
public:

	int32_t GoodsId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> PurchaseMethod; // 0x18(0x10)
	struct FText ButtonDescription; // 0x28(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFWatchDisplayInfo
// Size: 0x48 (Inherited: 0x08)
struct FDFWatchDisplayInfo : public FTableRowBase {
public:

	struct FSoftObjectPath WatchMesh; // 0x08(0x18)
	struct FVector WatchOffset; // 0x20(0x0c)
	struct FRotator WatchRotator; // 0x2c(0x0c)
	struct FVector WatchScale; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HitAudioConfig
// Size: 0xa0 (Inherited: 0x00)
struct FHitAudioConfig {
public:

	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char FPPBeHited_2DAudioPath[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char TPPBeHited_2DAudioPath[0x28]; // 0x28(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char BeHitFromFPP_2DAudioPath[0x28]; // 0x50(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char BeHit_3DAudioPath[0x28]; // 0x78(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ItemHealth_Armor
// Size: 0x08 (Inherited: 0x00)
struct FItemHealth_Armor {
public:

	bool bCanUseOnArmor; // 0x00(0x01)
	bool bCanUseOnHelmet; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float RepairEfficient; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterModifyBoneInfo
// Size: 0x10 (Inherited: 0x00)
struct FCharacterModifyBoneInfo {
public:

	struct TArray<struct FBoneModifyInfo> LevelModifyBoneInfos; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.UseItemAnimSet
// Size: 0x140 (Inherited: 0x00)
struct FUseItemAnimSet {
public:

	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSeqStand[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSeqStandFPP[0x28]; // 0x28(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSeqCrouch[0x28]; // 0x50(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSeqCrouchFPP[0x28]; // 0x78(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSeqProne[0x28]; // 0xa0(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSeqProneFPP[0x28]; // 0xc8(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSeqSliding[0x28]; // 0xf0(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSeqSlidingFPP[0x28]; // 0x118(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ItemUseActionLimit
// Size: 0x03 (Inherited: 0x00)
struct FItemUseActionLimit {
public:

	bool CanCrouch; // 0x00(0x01)
	bool CanProne; // 0x01(0x01)
	bool CanLean; // 0x02(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterAmbientLightParms
// Size: 0x1c (Inherited: 0x00)
struct FCharacterAmbientLightParms {
public:

	float BaseColorFator; // 0x00(0x04)
	float EmissiveFator; // 0x04(0x04)
	float DistanceOffset; // 0x08(0x04)
	float OtherFator1; // 0x0c(0x04)
	float OtherFator2; // 0x10(0x04)
	float OtherFator3; // 0x14(0x04)
	float OtherFator4; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ContainerFunctionRowBase
// Size: 0x38 (Inherited: 0x10)
struct FContainerFunctionRowBase : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	int32_t GainEquipPosLength; // 0x18(0x04)
	int32_t GainEquipPosWidth; // 0x1c(0x04)
	int32_t TotalCapacity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString ComplexSpaceDescription; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GMCandidateArgConfig
// Size: 0x18 (Inherited: 0x00)
struct FGMCandidateArgConfig {
public:

	struct FName DataTable; // 0x00(0x08)
	struct FName ArgDataRow; // 0x08(0x08)
	struct FName DescDataRow; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideConfigPayload
// Size: 0x78 (Inherited: 0x10)
struct FGuideConfigPayload : public FDescRowBase {
public:

	int32_t GuideID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FName> FNameArgs; // 0x18(0x10)
	struct TMap<struct FName, struct FName> KVs; // 0x28(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideKeyTextRow
// Size: 0x38 (Inherited: 0x00)
struct FGuideKeyTextRow {
public:

	struct FText LeftText; // 0x00(0x18)
	struct FName ActionName; // 0x18(0x08)
	struct FText RightText; // 0x20(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideConfig
// Size: 0x80 (Inherited: 0x10)
struct FGuideConfig : public FDescRowBase {
public:

	int32_t GuideID; // 0x10(0x04)
	int32_t GuideStageId; // 0x14(0x04)
	struct FName GuideType; // 0x18(0x08)
	struct FName Args; // 0x20(0x08)
	bool IsSwallowTouch; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float AutoNextGuideTime; // 0x2c(0x04)
	struct TArray<struct FName> EndEvent; // 0x30(0x10)
	struct TArray<int32_t> NextGuideId; // 0x40(0x10)
	bool IsKeyStep; // 0x50(0x01)
	bool CanSkip; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32_t SkipNextGuideId; // 0x54(0x04)
	int32_t RollBackGuideId; // 0x58(0x04)
	int32_t StopGuideEvent; // 0x5c(0x04)
	struct TArray<int32_t> StopStepEvent; // 0x60(0x10)
	int32_t LogIdOnStepStart; // 0x70(0x04)
	int32_t LogIdOnStepEnd; // 0x74(0x04)
	bool IsLogStep; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HUDItemTextViewData
// Size: 0x18 (Inherited: 0x00)
struct FHUDItemTextViewData {
public:

	struct FName TableRowID; // 0x00(0x08)
	struct FName FontStyleID; // 0x08(0x08)
	struct FVector2D LetterPosition; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMMapIconData
// Size: 0x38 (Inherited: 0x00)
struct FDFMMapIconData {
public:

	struct FName IconName; // 0x00(0x08)
	enum class EDFMMapIconType MapIconType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector IconLocation; // 0x0c(0x0c)
	float IconRotateAngle; // 0x18(0x04)
	bool BindRotate; // 0x1c(0x01)
	bool bBindScale; // 0x1d(0x01)
	bool bBindWorldRange; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	float RealWorldRange; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct AActor* IconActor; // 0x28(0x08)
	int32_t CustomIntValue; // 0x30(0x04)
	int32_t CustomIntValue2; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CustomLayoutInfo
// Size: 0x2c (Inherited: 0x00)
struct FCustomLayoutInfo {
public:

	struct FVector2D offset; // 0x00(0x08)
	int32_t AnchorIndex; // 0x08(0x04)
	float RenderOpacity; // 0x0c(0x04)
	float RenderScale; // 0x10(0x04)
	bool bIsForbidable; // 0x14(0x01)
	bool IsForbiden; // 0x15(0x01)
	bool bOwnSteer; // 0x16(0x01)
	bool IsSteer; // 0x17(0x01)
	float RunAreaSize; // 0x18(0x04)
	float SprintAreaSize; // 0x1c(0x04)
	bool IsSizeScale; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FVector2D StandardSize; // 0x24(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ShowDetectorMapExConfig
// Size: 0x18 (Inherited: 0x00)
struct FShowDetectorMapExConfig {
public:

	float DetectorMapRadius; // 0x00(0x04)
	float SlideSpeedDelay; // 0x04(0x04)
	float DetectorRadius; // 0x08(0x04)
	float DetectorRadiusScale; // 0x0c(0x04)
	float SupportMarkerShowTime; // 0x10(0x04)
	bool bIsShowMarkerInMap; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RankSkillConfig
// Size: 0x68 (Inherited: 0x00)
struct FRankSkillConfig {
public:

	int32_t SectorID; // 0x00(0x04)
	bool IsOpen; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t ScoreCost; // 0x08(0x04)
	int32_t MaxCampUseNum; // 0x0c(0x04)
	int32_t MaxTeamUseNum; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<uint64_t, struct FRankSkillDropVehicleConfig> RankSkillDropVehicleConfigMap; // 0x18(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.MapLocationStruct
// Size: 0x110 (Inherited: 0x10)
struct FMapLocationStruct : public FDescRowBase {
public:

	struct FText LocationName; // 0x10(0x18)
	struct FVector Coord; // 0x28(0x0c)
	enum class EMapLocationType MapLocationType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FText DescStr; // 0x38(0x18)
	enum class EMapLocationPOILevelType POILevelType; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FName> RareItemList; // 0x58(0x10)
	bool bIsEventPOI; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FVector> EventOffsetArray; // 0x70(0x10)
	bool bSimplePOI1InMiniMap; // 0x80(0x01)
	enum class EMapLocationPOIProductType POIProductType; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct FHighValueBoxInfo HighValueBoxInfo; // 0x88(0x60)
	struct FName BossNameID; // 0xe8(0x08)
	float BigMapBossWorldRange; // 0xf0(0x04)
	char pad_F4[0x1c]; // 0xf4(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AbilityPlayMontageAnimUnitSet
// Size: 0xc0 (Inherited: 0x00)
struct FAbilityPlayMontageAnimUnitSet {
public:

	struct FAbilityPlayMontageAnimUnit FPP_Start; // 0x00(0x20)
	struct FAbilityPlayMontageAnimUnit TPP_Start; // 0x20(0x20)
	struct FAbilityPlayMontageAnimUnit FPP_Loop; // 0x40(0x20)
	struct FAbilityPlayMontageAnimUnit TPP_Loop; // 0x60(0x20)
	struct FAbilityPlayMontageAnimUnit FPP_End; // 0x80(0x20)
	struct FAbilityPlayMontageAnimUnit TPP_End; // 0xa0(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.AILabBehaviorTreeData
// Size: 0x50 (Inherited: 0x10)
struct FAILabBehaviorTreeData : public FDescRowBase {
public:

	struct FName SOLMapName; // 0x10(0x08)
	int32_t BirthPointID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString POIName; // 0x20(0x10)
	int32_t TeamStartGroupId; // 0x30(0x04)
	int32_t StartSpotIndex; // 0x34(0x04)
	struct FAILabPathDescribe Paths; // 0x38(0x10)
	int32_t ExitId; // 0x48(0x04)
	int32_t Probability; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterAvatar
// Size: 0x90 (Inherited: 0x00)
struct FCharacterAvatar {
public:

	bool IsUseMasterMesh; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSoftObjectPath MasterMesh; // 0x08(0x18)
	struct TArray<struct FCharacterAvatarCoreItem> CoreParts; // 0x20(0x10)
	struct TArray<struct FCharacterAvatarItem> ExtraParts; // 0x30(0x10)
	struct FCharacterSkillInfo SkillInfo; // 0x40(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeroHighLevelSceneConfigData
// Size: 0x1e8 (Inherited: 0x10)
struct FHeroHighLevelSceneConfigData : public FDescRowBase {
public:

	struct FString HeroFashionID; // 0x10(0x10)
	struct TMap<struct FName, struct FName> LightGroupNameMap; // 0x20(0x50)
	enum class ELoadLevelOption LoadLevelOption; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TMap<struct FName, struct FSubLevelConfig> SubLevelNamesMap; // 0x78(0x50)
	struct TMap<struct FName, struct FName> BPLevelNameMap; // 0xc8(0x50)
	struct TMap<struct FName, struct FName> HeightFogNameMap; // 0x118(0x50)
	bool bShowMatchConfig; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct FSoftObjectPath ScreenMaterialPath; // 0x170(0x18)
	struct FSceneActorBPData SceneMeshBP; // 0x188(0x48)
	struct FSoftObjectPath ClothMaterialPath; // 0x1d0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeroItemData
// Size: 0xa0 (Inherited: 0x40)
struct FHeroItemData : public FCommercialBaseRow {
public:

	struct FString HeroItemID; // 0x40(0x10)
	struct FText HeroItemName; // 0x50(0x18)
	int32_t HeroItemLevel; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FSoftObjectPath HeroItemImage; // 0x70(0x18)
	struct FSoftObjectPath HeroItemModel; // 0x88(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.KillLineData
// Size: 0xa0 (Inherited: 0x40)
struct FKillLineData : public FCommercialBaseRow {
public:

	struct FString KillLineId; // 0x40(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x50(0x10)
	int32_t KillLineLevel; // 0x60(0x04)
	bool IsDefUnlock; // 0x64(0x01)
	bool IsDefEquip; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	struct FText KillLineName; // 0x68(0x18)
	struct FName LinesRowName; // 0x80(0x08)
	struct FSoftObjectPath KillLineImage; // 0x88(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BadgeData
// Size: 0xb0 (Inherited: 0x40)
struct FBadgeData : public FCommercialBaseRow {
public:

	struct FString BadgeId; // 0x40(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x50(0x10)
	int32_t BadgeLevel; // 0x60(0x04)
	bool IsDefUnlock; // 0x64(0x01)
	bool IsDefEquip; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	struct FText BadgeName; // 0x68(0x18)
	struct FSoftObjectPath BadgeImage; // 0x80(0x18)
	struct FText BadgeDescription; // 0x98(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HeroTitleData
// Size: 0xb0 (Inherited: 0x40)
struct FHeroTitleData : public FCommercialBaseRow {
public:

	struct FString HeroTitleId; // 0x40(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x50(0x10)
	int32_t TitleLevel; // 0x60(0x04)
	bool IsDefUnlock; // 0x64(0x01)
	bool IsDefEquip; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	struct FText HeroTitleName; // 0x68(0x18)
	struct FSoftObjectPath HeroTitleImage; // 0x80(0x18)
	struct FText TitleDescription; // 0x98(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFWatchData
// Size: 0xd8 (Inherited: 0x40)
struct FDFWatchData : public FCommercialBaseRow {
public:

	struct FString DFWatchId; // 0x40(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x50(0x10)
	int32_t DFWatchLevel; // 0x60(0x04)
	bool IsDefUnlock; // 0x64(0x01)
	bool IsDefEquip; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	struct FText DFWatchName; // 0x68(0x18)
	struct FSoftObjectPath DFWatchImage; // 0x80(0x18)
	struct TArray<struct FString> VOIDs; // 0x98(0x10)
	struct FSoftObjectPath DFWatchBgImage; // 0xa8(0x18)
	struct FText DFWatchDesc; // 0xc0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.LinesData
// Size: 0xa0 (Inherited: 0x40)
struct FLinesData : public FCommercialBaseRow {
public:

	struct FString LinesId; // 0x40(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x50(0x10)
	int32_t LinesLevel; // 0x60(0x04)
	bool IsDefUnlock; // 0x64(0x01)
	bool IsDefEquip; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	struct FText LinesName; // 0x68(0x18)
	struct FName LinesRowName; // 0x80(0x08)
	struct FSoftObjectPath LinesImage; // 0x88(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SprayPaintData
// Size: 0xc0 (Inherited: 0x40)
struct FSprayPaintData : public FCommercialBaseRow {
public:

	struct FString SprayPaintId; // 0x40(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x50(0x10)
	int32_t SprayPaintLevel; // 0x60(0x04)
	bool IsDefUnlock; // 0x64(0x01)
	bool IsDefEquip; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	struct FText SprayPaintName; // 0x68(0x18)
	struct FSoftObjectPath SprayPaintImage; // 0x80(0x18)
	struct FSoftObjectPath SprayPaintDisplay; // 0x98(0x18)
	struct TArray<int32_t> SprayPaintOffset; // 0xb0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GestureData
// Size: 0x98 (Inherited: 0x40)
struct FGestureData : public FCommercialBaseRow {
public:

	struct FString GestureId; // 0x40(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x50(0x10)
	int32_t GestureLevel; // 0x60(0x04)
	bool IsDefUnlock; // 0x64(0x01)
	bool IsDefEquip; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	struct FText GestureName; // 0x68(0x18)
	struct FSoftObjectPath GestureImage; // 0x80(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ExecutionData
// Size: 0xa8 (Inherited: 0x40)
struct FExecutionData : public FCommercialBaseRow {
public:

	struct FString ExecutionId; // 0x40(0x10)
	struct TArray<struct FName> BelongedHeroIDs; // 0x50(0x10)
	struct TArray<struct FName> BelongedFashionIDs; // 0x60(0x10)
	int32_t ExecutionLevel; // 0x70(0x04)
	bool IsDefUnlock; // 0x74(0x01)
	bool IsDefEquip; // 0x75(0x01)
	char pad_76[0x2]; // 0x76(0x02)
	struct FText ExecutionName; // 0x78(0x18)
	struct FSoftObjectPath ExecutionImage; // 0x90(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterAnimShowData
// Size: 0xa0 (Inherited: 0x40)
struct FCharacterAnimShowData : public FCommercialBaseRow {
public:

	struct FName AnimShowID; // 0x40(0x08)
	struct TArray<struct FName> BelongedHeroIDs; // 0x48(0x10)
	bool IsDefUnlock; // 0x58(0x01)
	bool IsDefEquip; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	struct FName Title; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	struct FText AnimShowName; // 0x68(0x18)
	int32_t Level; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FSoftObjectPath AnimShowImage; // 0x88(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFWatchMeshData
// Size: 0xf8 (Inherited: 0x10)
struct FDFWatchMeshData : public FDescRowBase {
public:

	struct FDFWatchDisplayInfo WatchMesh1P; // 0x10(0x48)
	struct FDFWatchDisplayInfo WatchMesh3P; // 0x58(0x48)
	struct FDFWatchDisplayInfo WatchMeshUI; // 0xa0(0x48)
	struct FRotator DisplayShowRotator; // 0xe8(0x0c)
	char pad_F4[0x4]; // 0xf4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HitAudioRow
// Size: 0xab8 (Inherited: 0x10)
struct FHitAudioRow : public FDescRowBase {
public:

	int32_t HitAudioID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FHitAudioConfig HitBody; // 0x18(0xa0)
	struct FHitAudioConfig HitBodyWithArmor; // 0xb8(0xa0)
	struct FHitAudioConfig HitBodyWithArmorMachineGunAI; // 0x158(0xa0)
	struct FHitAudioConfig HitBodyWithArmorStagger; // 0x1f8(0xa0)
	struct FHitAudioConfig HitShield; // 0x298(0xa0)
	struct FHitAudioConfig HitHeadWithoutHelmet; // 0x338(0xa0)
	struct FHitAudioConfig HitHelmet; // 0x3d8(0xa0)
	struct FHitAudioConfig HitHelmetBroken; // 0x478(0xa0)
	struct FHitAudioConfig HitArmorBroken; // 0x518(0xa0)
	struct FHitAudioConfig KnockDownByHitBody; // 0x5b8(0xa0)
	struct FHitAudioConfig KnockDownByHitHead; // 0x658(0xa0)
	struct FHitAudioConfig KilledByHitBody; // 0x6f8(0xa0)
	struct FHitAudioConfig KilledByHitHead; // 0x798(0xa0)
	struct FHitAudioConfig HitVehicleLight; // 0x838(0xa0)
	struct FHitAudioConfig HitVehicleNormal; // 0x8d8(0xa0)
	struct FHitAudioConfig HitVehicleHeavy; // 0x978(0xa0)
	struct FHitAudioConfig KillVehicle; // 0xa18(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ItemHealthPackageRow
// Size: 0xf8 (Inherited: 0x10)
struct FItemHealthPackageRow : public FDescRowBase {
public:

	struct FName ItemID; // 0x10(0x08)
	struct FName Desc; // 0x18(0x08)
	struct TArray<enum class EUseItemFunctionType> FunctionTags; // 0x20(0x10)
	enum class EItemHealthSubType SubType; // 0x30(0x04)
	int32_t HealAmount; // 0x34(0x04)
	int32_t HealArmor; // 0x38(0x04)
	struct FItemHealth_Armor ArmorInfo; // 0x3c(0x08)
	int32_t CureBodyPartNum; // 0x44(0x04)
	float CureBodyConsume; // 0x48(0x04)
	float AddBuffConsume; // 0x4c(0x04)
	struct TArray<struct FItemHealthPackageRow_SkillCD> SkillCDReduces; // 0x50(0x10)
	enum class EItemHealthTriggerType TriggerType; // 0x60(0x01)
	bool bDynamicUseTime; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float TimeToUse; // 0x64(0x04)
	float Period; // 0x68(0x04)
	float PreUseTime; // 0x6c(0x04)
	float AfterUseTime; // 0x70(0x04)
	int32_t MaxUseCnt; // 0x74(0x04)
	int32_t MovementSpeedID; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<int32_t> AddBuffs; // 0x80(0x10)
	struct TArray<enum class EUseItemAddBuffFunctionType> AddBuffConditions; // 0x90(0x10)
	enum class EItemHealthBuffTriggerType AddBuffTriggerType; // 0xa0(0x01)
	char isDurabilityItem; // 0xa1(0x01)
	char pad_A2[0x2]; // 0xa2(0x02)
	int32_t Durability; // 0xa4(0x04)
	struct TArray<struct FRepairArmorRatio> RepairArmorIdList; // 0xa8(0x10)
	struct TArray<int32_t> DisplayAddBuffs; // 0xb8(0x10)
	struct TArray<int32_t> DisplayRemoveBuffs; // 0xc8(0x10)
	struct FText FunctionDes; // 0xd8(0x18)
	int32_t MedicineType; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.WatchModifyInfo
// Size: 0x68 (Inherited: 0x00)
struct FWatchModifyInfo {
public:

	struct FCharacterModifyBoneInfo DefaultWatchModifyBoneInfo; // 0x00(0x10)
	struct TMap<struct FName, struct FCharacterModifyBoneInfo> CustomWatchModifyBoneInfos; // 0x10(0x50)
	struct FName AttachToName; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMCommonItemMeshPathRow
// Size: 0xa08 (Inherited: 0x10)
struct FDFMCommonItemMeshPathRow : public FDescRowBase {
public:

	struct FName ItemID; // 0x10(0x08)
	struct FText Name; // 0x18(0x18)
	struct FSoftObjectPath Item1PMeshPath; // 0x30(0x18)
	struct FName Item1PSocketName; // 0x48(0x08)
	struct FName Item1PInspectionSocketName; // 0x50(0x08)
	struct FSoftObjectPath Item3PMeshPath; // 0x58(0x18)
	struct FName Item3PSocketName; // 0x70(0x08)
	struct FName Item3PInspectionSocketName; // 0x78(0x08)
	struct FSoftObjectPath ItemDroppedMeshPath; // 0x80(0x18)
	struct FSoftObjectPath ItemUIMeshPath; // 0x98(0x18)
	struct FVector ItemUIMeshDisplayRotation; // 0xb0(0x0c)
	struct FVector ItemUIMeshDisplayScale; // 0xbc(0x0c)
	struct FVector ItemUIMeshDisplayLocation; // 0xc8(0x0c)
	enum class EItemUseFunction ItemUseFunction; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	int32_t SkillId; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	/*struct TSoftClassPtr<UObject>*/char ItemFunComponent[0x28]; // 0xe0(0x28)
	struct TArray<enum class EUseItemFunctionType> LimitFunctionTags; // 0x108(0x10)
	struct FItemUseActionLimit ItemUseActionLimit; // 0x118(0x03)
	bool bLoopAnimtion; // 0x11b(0x01)
	bool bPlayFinishAnimWhenInterupt; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FUseItemAnimSet ItemAnimSet; // 0x120(0x140)
	struct FUseItemAnimSet PlayerAnimSet; // 0x260(0x140)
	struct FUseItemAnimSet ItemAnimSetPreUse; // 0x3a0(0x140)
	struct FUseItemAnimSet PlayerAnimSetPreUse; // 0x4e0(0x140)
	struct FUseItemAnimSet ItemAnimSetAfterUse; // 0x620(0x140)
	struct FUseItemAnimSet PlayerAnimSetAfterUse; // 0x760(0x140)
	float PlayerAnimEndTime; // 0x8a0(0x04)
	char pad_8A4[0x4]; // 0x8a4(0x04)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSeqItemInspectionFPP[0x28]; // 0x8a8(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSeqItemInspectionTPP[0x28]; // 0x8d0(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSeqCharacterInspectionFPP[0x28]; // 0x8f8(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char AnimSeqCharacterInspectionTPP[0x28]; // 0x920(0x28)
	bool bUseBasePoseFPP; // 0x948(0x01)
	bool bUseBasePoseTPP; // 0x949(0x01)
	char pad_94A[0x2]; // 0x94a(0x02)
	struct FName BasePosAnimRowNameBase; // 0x94c(0x08)
	struct FName BasePosAnimRowName; // 0x954(0x08)
	struct FName BasePosAnimOverrideRowName; // 0x95c(0x08)
	char pad_964[0x4]; // 0x964(0x04)
	/*struct TSoftObjectPtr<UPaperSprite>*/char ItemIcon[0x28]; // 0x968(0x28)
	/*struct TSoftObjectPtr<UPaperSprite>*/char ItemSpriteIcon[0x28]; // 0x990(0x28)
	struct FSoftObjectPath ItemIconPath; // 0x9b8(0x18)
	struct FSoftObjectPath ItemIconPathAfterFold; // 0x9d0(0x18)
	struct FSoftObjectPath WhiteItemIconPath; // 0x9e8(0x18)
	uint32_t IconConfigId; // 0xa00(0x04)
	char pad_A04[0x4]; // 0xa04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterAmbientLightGroupDataRow
// Size: 0x30 (Inherited: 0x10)
struct FCharacterAmbientLightGroupDataRow : public FDescRowBase {
public:

	enum class AttributeAdditionType GameplayModOp; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FCharacterAmbientLightParms LightParms; // 0x14(0x1c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SafeBoxFunctionBaseRow
// Size: 0x38 (Inherited: 0x38)
struct FSafeBoxFunctionBaseRow : public FContainerFunctionRowBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.ChestHangingFunctionBaseRow
// Size: 0x50 (Inherited: 0x38)
struct FChestHangingFunctionBaseRow : public FContainerFunctionRowBase {
public:

	int32_t BagIncrementY; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FContainerBuffRow> AddBuffs; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.BagFunctionBaseRow
// Size: 0x50 (Inherited: 0x38)
struct FBagFunctionBaseRow : public FContainerFunctionRowBase {
public:

	int32_t BagIncrementY; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FContainerBuffRow> AddBuffs; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GMArgConfig
// Size: 0x48 (Inherited: 0x00)
struct FGMArgConfig {
public:

	struct FString Arg; // 0x00(0x10)
	struct FText Desc; // 0x10(0x18)
	bool bHasCandidate; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FGMCandidateArgConfig CandidateArgConfig; // 0x2c(0x18)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideConfigPayloadForHD
// Size: 0x78 (Inherited: 0x78)
struct FGuideConfigPayloadForHD : public FGuideConfigPayload {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuidePopWindowItemRow
// Size: 0xc8 (Inherited: 0x00)
struct FGuidePopWindowItemRow {
public:

	struct FText Title; // 0x00(0x18)
	struct FText DescText; // 0x18(0x18)
	struct FText CompleteConditionText; // 0x30(0x18)
	struct FGuideKeyTextRow CompleteConditionTextAndKey; // 0x48(0x38)
	struct FName CompleteEvent; // 0x80(0x08)
	/*struct TSoftObjectPtr<UTexture2D>*/char Image[0x28]; // 0x88(0x28)
	int32_t ExContentType; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<struct FName> ExContentParams; // 0xb8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GuideConfigForHD
// Size: 0x80 (Inherited: 0x80)
struct FGuideConfigForHD : public FGuideConfig {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.HUDItemViewData
// Size: 0x98 (Inherited: 0x10)
struct FHUDItemViewData : public FDescRowBase {
public:

	struct FMargin DefaultContainerPadding; // 0x10(0x10)
	struct FMargin LargeContainerPadding; // 0x20(0x10)
	struct FMargin SmallContainerPadding; // 0x30(0x10)
	struct FMargin SpecialContainerPadding; // 0x40(0x10)
	struct FHUDItemTextViewData TopTextStyle; // 0x50(0x18)
	struct FHUDItemTextViewData LeftTextStyle; // 0x68(0x18)
	struct FHUDItemTextViewData RightTextStyle; // 0x80(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.DFMMapDetectorData
// Size: 0x38 (Inherited: 0x00)
struct FDFMMapDetectorData {
public:

	struct FDFMMapIconData IconData; // 0x00(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CustomLayoutWidgetInfo
// Size: 0x40 (Inherited: 0x00)
struct FCustomLayoutWidgetInfo {
public:

	struct FString WidgetName; // 0x00(0x10)
	struct FCustomLayoutInfo LayoutInfo; // 0x10(0x2c)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.RankSkillConfigRow
// Size: 0x108 (Inherited: 0x10)
struct FRankSkillConfigRow : public FDescRowBase {
public:

	int32_t SkillId; // 0x10(0x04)
	enum class ERankSkillType RankSkillType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FRankSkillConfig DefautRankSkillData; // 0x18(0x68)
	bool IsCampUseSameConfig; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct FRankSkillGameModeConfig> SpecialRankSkillConfigs_Camp0; // 0x88(0x10)
	struct TArray<struct FRankSkillGameModeConfig> SpecialRankSkillConfigs_Camp1; // 0x98(0x10)
	struct FShowDetectorMapExConfig ShowDetectorMapExConfig; // 0xa8(0x18)
	struct TArray<enum class EBreakthroughIdentity> NoOpenIdentity; // 0xc0(0x10)
	float ScoreMultiple; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	/*struct TSoftClassPtr<UObject>*/char SelectPositionClass[0x28]; // 0xd8(0x28)
	float NotifyTipDelayTime; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.SafeHouseMapLocationStruct
// Size: 0x190 (Inherited: 0x110)
struct FSafeHouseMapLocationStruct : public FMapLocationStruct {
public:

	enum class EDFMMapIconType IconType; // 0x110(0x01)
	enum class ESafeHouseIconMapType MapType; // 0x111(0x01)
	enum class ESafeHouseIconGroundType GroundType; // 0x112(0x01)
	char pad_113[0x5]; // 0x113(0x05)
	struct FSoftObjectPath IconImgPath; // 0x118(0x18)
	struct FText IconDesc; // 0x130(0x18)
	int32_t DeviceID; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FText TransportDesc1; // 0x150(0x18)
	struct FText TransportDesc2; // 0x168(0x18)
	struct FVector TransportPosition; // 0x180(0x0c)
	char pad_18C[0x4]; // 0x18c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterPlayMontageData
// Size: 0xc0 (Inherited: 0x00)
struct FCharacterPlayMontageData : public FAbilityFragment {
public:

	struct FAbilityPlayMontageAnimUnitSet AnimUnitSet; // 0x00(0xc0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterAvatarDataRow
// Size: 0x2c0 (Inherited: 0x10)
struct FCharacterAvatarDataRow : public FDescRowBase {
public:

	enum class ECharacterAvatarSex Sex; // 0x10(0x01)
	enum class ECharacterTag CharacterTag; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	struct FName SkinId; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FCharacterAvatar FPP; // 0x20(0x90)
	struct FCharacterAvatar TPP; // 0xb0(0x90)
	struct FCharacterAvatar UI; // 0x140(0x90)
	struct FName HairAttachSocket; // 0x1d0(0x08)
	struct FCharacterFacialAnimation CutsceneHeadAnim; // 0x1d8(0x20)
	bool IsUISectionAdaptiveIK; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	float UISectionAdaptiveIKData; // 0x1fc(0x04)
	struct TArray<struct FName> UIIngoreRenderSlots; // 0x200(0x10)
	struct TArray<struct FCharacterUIMatRenderIngoreInfo> UIMatIngoreRenderInfos; // 0x210(0x10)
	/*struct TSoftClassPtr<UObject>*/char FaceSimpleAnimInstance[0x28]; // 0x220(0x28)
	char pad_248[0x8]; // 0x248(0x08)
	struct FTransform WeaponBackLeftOffset; // 0x250(0x30)
	struct FTransform WeaponBackRightOffset; // 0x280(0x30)
	struct FName AmbientLightGroup; // 0x2b0(0x08)
	char pad_2B8[0x8]; // 0x2b8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.WatchApparenceAdaptationRow
// Size: 0x148 (Inherited: 0x10)
struct FWatchApparenceAdaptationRow : public FDescRowBase {
public:

	struct FWatchModifyInfo FPPWatchModifyInfo; // 0x10(0x68)
	struct FWatchModifyInfo TPPWatchModifyInfo; // 0x78(0x68)
	struct FWatchModifyInfo UIWatchModifyInfo; // 0xe0(0x68)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.GMConfigRow
// Size: 0x120 (Inherited: 0x10)
struct FGMConfigRow : public FDescRowBase {
public:

	struct FName GMId; // 0x10(0x08)
	struct FText Desc; // 0x18(0x18)
	struct FName Group; // 0x30(0x08)
	struct FString Code; // 0x38(0x10)
	struct FGMArgConfig ArgConfig_1; // 0x48(0x48)
	struct FGMArgConfig ArgConfig_2; // 0x90(0x48)
	struct FGMArgConfig ArgConfig_3; // 0xd8(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterHeroResourceAnim
// Size: 0xc8 (Inherited: 0xc0)
struct FCharacterHeroResourceAnim : public FCharacterPlayMontageData {
public:

	char pad_C0[0x8]; // 0xc0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct DFMGlobalDefines.CharacterHeroResourceAnimData
// Size: 0xf0 (Inherited: 0x10)
struct FCharacterHeroResourceAnimData : public FDescRowBase {
public:

	struct FName ResourceId; // 0x10(0x08)
	struct FName AvatarID; // 0x18(0x08)
	int32_t WeaponType; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FCharacterHeroResourceAnim AnimData; // 0x28(0xc8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
