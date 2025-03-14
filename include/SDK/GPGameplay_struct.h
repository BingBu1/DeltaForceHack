
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPGameplay.EGameRuleType
enum class EGameRuleType : UINT8 {
	None = 0,
	Rule_SafeHouse = 1,
	Rule_Discovery = 4,
	Rule_PVERaid = 8,
	Rule_SOL = 16,
	Rule_Raid = 32,
	Rule_BattleField = 64,
	EGameRuleType_MAX = 65
};

// Enum GPGameplay.EModularPartNodeType
enum class EModularPartNodeType : UINT8 {
	None = 0,
	Adpater = 1,
	ExtraModel = 2,
	SkinAttach = 3,
	Pendant = 4,
	EModularPartNodeType_MAX = 5
};

// Enum GPGameplay.EWeaponAddFunction
enum class EWeaponAddFunction : UINT8 {
	EWeapAddFunc_None = 0,
	EWeapAddFunc_Zooming = 1,
	EWeapAddFunc_Silencer = 2,
	EWeapAddFunc_FlashSuppressor = 3,
	EWeapAddFunc_ClipExtent = 4,
	EWeapAddFunc_ChangeClipFaster = 5,
	EWeapAddFunc_LeftHandIK = 6,
	EWeapAddFunc_BipodUpDown = 7,
	EWeapAddFunc_FlashLight = 8,
	EWeapAddFunc_Laser = 9,
	EWeapAddFunc_PowerFlash = 10,
	EWeapAddFunc_InspectWeapon = 11,
	EWeapAddFunc_QuicklyAdapt = 12,
	EBackWeapPos_Max = 13,
	EWeaponAddFunction_MAX = 14
};

// Enum GPGameplay.EDamageValidateType
enum class EDamageValidateType : UINT8 {
	None = 0,
	HitScan = 1,
	Projectile = 2,
	MeleeHitScan = 3,
	EDamageValidateType_MAX = 4
};

// Enum GPGameplay.EDamageType
enum class EDamageType : UINT8 {
	ENone = 0,
	EDefault = 1,
	EBuffDamage = 2,
	EWeaponDamage = 3,
	EDroppedDamage = 4,
	EWeaponThrowableDamage = 5,
	EPVEVehicleExplodeDamage = 6,
	EVehicleHitDamage = 7,
	EWeaponMeleeDamage = 8,
	EFSMActionDamage = 9,
	EDebug = 10,
	EVehicleLightDamage = 11,
	EVehicleNormalDamage = 12,
	EVehicleHeavyDamage = 13,
	EAssassinateDamage = 14,
	ETieBreakerDamage = 15,
	EFixedTrackRocket = 16,
	EAbilityC401 = 17,
	EBattleFieldSupportDamage = 18,
	LandmineDamage = 19,
	EMax = 20,
	EDamageType_MAX = 21
};

// Enum GPGameplay.EDamageSystemDamageType
enum class EDamageSystemDamageType : UINT8 {
	None = 0,
	Point = 1,
	Radial = 2,
	Physics = 3,
	Buff = 4,
	EDamageSystemDamageType_MAX = 5
};

// Enum GPGameplay.EDamageValidateResult
enum class EDamageValidateResult : UINT8 {
	None = 0,
	Approve = 1,
	Ignore = 2,
	Abort = 3,
	AbortOnlyLog = 4,
	UseServer = 5,
	EDamageValidateResult_MAX = 6
};

// Enum GPGameplay.EHitDamageApplyType
enum class EHitDamageApplyType : UINT8 {
	HitDamageApplyType_Health = 0,
	HitDamageApplyType_Shield = 1,
	HitDamageApplyType_BothShieldHealth = 2,
	HitDamageApplyType_MAX = 3
};

// Enum GPGameplay.EDirection
enum class EDirection : UINT8 {
	Direction_None = 0,
	Direction_Front = 1,
	Direction_Back = 2,
	Direction_Left = 3,
	Direction_Right = 4,
	Direction_MAX = 5
};

// Enum GPGameplay.EHitGroupType
enum class EHitGroupType : UINT8 {
	HitGroupType_None = 0,
	HitGroupType_Head = 1,
	HitGroupType_Neck = 2,
	HitGroupType_LeftShoulder = 3,
	HitGroupType_RightShoulder = 4,
	HitGroupType_Chest = 5,
	HitGroupType_Stomach = 6,
	HitGroupType_Hip = 7,
	HitGroupType_LeftLeg = 8,
	HitGroupType_LeftLegLower = 9,
	HitGroupType_LeftFoot = 10,
	HitGroupType_RightLeg = 11,
	HitGroupType_RightLegLower = 12,
	HitGroupType_RightFoot = 13,
	HitGroupType_LeftArm = 14,
	HitGroupType_LeftForeArm = 15,
	HitGroupType_LeftHand = 16,
	HitGroupType_RightArm = 17,
	HitGroupType_RightForeArm = 18,
	HitGroupType_RightHand = 19,
	HitGroupType_Shield = 20,
	HitGroupType_Weapon = 21,
	HitGroupType_RightAnkle = 22,
	HitGroupType_LeftAnkle = 23,
	HitGroupType_MAX = 24
};

// Enum GPGameplay.EDeadType
enum class EDeadType : UINT8 {
	ENone = 0,
	EKilledByWeapon = 1,
	EkilledByVehicle = 2,
	EkilledBySelf = 3,
	EkilledByPoisonGas = 4,
	EkilledFallDown = 5,
	EKilledFromImpendingDeath = 6,
	EKilledFromBuff = 7,
	EKilledByGm = 8,
	EKilledFromEnvExplosion = 9,
	EKilledByVehicleWeapon = 10,
	EKilledByAssassinateDamage = 11,
	EKilledByBattleFieldSupportSkill = 12,
	EDeadType_MAX = 13
};

// Enum GPGameplay.EGPHealthShowMode
enum class EGPHealthShowMode : UINT8 {
	NeverShow = 0,
	ShowOnPoint = 1,
	AlwaysShow = 2,
	ShowBigBar = 3,
	EGPHealthShowMode_MAX = 4
};

// Enum GPGameplay.ECharacterLiveStatus
enum class ECharacterLiveStatus : UINT8 {
	ECharacterLiveStatus_None = 0,
	ECharacterLiveStatus_Alive = 1,
	ECharacterLiveStatus_Death = 2,
	ECharacterLiveStatus_ImpendingDeath = 3,
	ECharacterLiveStatus_WTF = 4,
	ECharacterLiveStatus_MAX = 5
};

// Enum GPGameplay.EGPFSMTransitionEvent
enum class EGPFSMTransitionEvent : UINT8 {
	EGPFSMTransitionEvent_Unknown = 0,
	EGPFSMTransitionEVent_WaitPlayerStart = 1,
	EGPFSMTransitionEVent_EndWaitPlayerStart = 2,
	EGPFSMTransitionEVent_EnterMPLogoutState = 3,
	EGPFSMTransitionEVent_ExitMPLogoutState = 4,
	EGPFSMTransitionEvent_Timeout = 5,
	EGPFSMTransitionEvent_StartSprint = 6,
	EGPFSMTransitionEvent_StartSuperSprint = 7,
	EGPFSMTransitionEvent_EndSprintToStop = 8,
	EGPFSMTransitionEvent_EndSprintToMoving = 9,
	EGPFSMTransitionEvent_Finish = 10,
	EGPFSMTransitionEvent_NormalToADS = 11,
	EGPFSMTransitionEvent_AdsToNormal = 12,
	EGPFSMTransitionEvent_BeginVault = 13,
	EGPFSMTransitionEvent_EndVault = 14,
	EGPFSMTransitionEvent_BeginOperate = 15,
	EGPFSMTransitionEvent_EndOperate = 16,
	EGPFSMTransitionEvent_BeginZipline = 17,
	EGPFSMTransitionEvent_EndZipline = 18,
	EGPFSMTransitionEvent_CancelZipline = 19,
	EGPFSMTransitionEvent_CancelOperate = 20,
	EGPFSMTransitionEvent_ToLooting = 21,
	EGPFSMTransitionEvent_ToReborn = 22,
	EGPFSMTransitionEvent_BeAssassinateToIampendingDeath = 23,
	ESkillEvent_BuffFinish = 24,
	ESkillEvent_Cast = 25,
	ESkillEvent_Charged = 26,
	ESkillEvent_Charging = 27,
	ESkillEvent_Restored = 28,
	ESkillEvent_SpawnObjectFinish = 29,
	ESkillEvent_Terminate = 30,
	ESkillEvent_Ultimate = 31,
	ESkillEvent_NormalBreak = 32,
	ESkillEvent_Timeout = 33,
	ESkillEvent_Break = 34,
	ESkillEvent_BeginCharging = 35,
	ESkillEvent_BeginCooling = 36,
	ESkillEvent_BeginPreparing = 37,
	ESkillEvent_EndPrepare = 38,
	ESkillEvent_CancelPrepare = 39,
	ESkillEvent_Yes = 40,
	ESkillEvent_No = 41,
	ESkillEvent_SkillEnerngyChange = 42,
	ESkillEvent_Failed = 43,
	ESkillEvent_EnergyChanged = 44,
	ESkillEvent_Death = 45,
	ESkillEvent_Uncharged = 46,
	EGPFSMTransitionEvent_BeginRelaxIdle = 47,
	EGPFSMTransitionEvent_EndRelaxIdle = 48,
	EGPFSMTransitionEvent_BeginStarApp = 49,
	EGPFSMTransitionEvent_BeginStarAppInRegName = 50,
	EGPFSMTransitionEvent_EndStarApp = 51,
	EGPFSMTransitionEvent_BeginCutScne = 52,
	EGPFSMTransitionEvent_EndCutScne = 53,
	EGPFSMTransitionEvent_ToLeftLean = 54,
	EGPFSMTransitionEvent_ToRightLean = 55,
	EGPFSMTransitionEvent_EndLean = 56,
	EGPFSMTransitionEvent_StartClimbLadder = 57,
	EGPFSMTransitionEvent_GetOffClimbLadder = 58,
	EGPFSMTransitionEvent_EndClimbLadder = 59,
	EGPFSMTransitionEvent_CarryBodyGetOnVehicle = 60,
	EGPFSMTransitionEvent_CarryBodyGetOffVehicle = 61,
	EGPFSMTransitionEvent_BeginBeHit = 62,
	EGPFSMTransitionEvent_EndBeHit = 63,
	EGPFSMTransitionEvent_CancelBeHit = 64,
	EGPFSMTransitionEvent_StartAutoDriveVehicle = 65,
	EGPFSMTransitionEvent_CancelAutoDriveVehicle = 66,
	EGPFSMTransitionEvent_GetOnFlyBase = 67,
	EGPFSMTransitionEvent_GetOffFlyBase = 68,
	EGPFSMTransitionEvent_BeginUseSkill = 69,
	EGPFSMTransitionEvent_EndUseSkill = 70,
	EGPFSMTransitionEvent_BeginLeftHandSkill = 71,
	EGPFSMTransitionEvent_EndLeftHandSkill = 72,
	EGPFSMTransitionEvent_BeginRightHandSkill = 73,
	EGPFSMTransitionEvent_EndRightHandSkill = 74,
	EGPFSMTransitionEvent_BeginDoubleHandsSkill = 75,
	EGPFSMTransitionEvent_EndDoubleHandsSkill = 76,
	EGPFSMTransitionEvent_BeginLegsSkill = 77,
	EGPFSMTransitionEvent_EndLegsSkill = 78,
	EGPFSMTransitionEvent_BeginSpecialSkill = 79,
	EGPFSMTransitionEvent_EndSpecialSkill = 80,
	EGPFSMTransitionEvent_BeginAssassinate = 81,
	EGPFSMTransitionEvent_EndAssassinate = 82,
	EGPFSMTransitionEvent_SkillToSkillADS = 83,
	EGPFSMTransitionEvent_SkillADSToSkill = 84,
	EGPFSMTransitionEvent_EndRescue = 85,
	EGPFSMTransitionEvent_StartSearchItem = 86,
	EGPFSMTransitionEvent_EndSearchItem = 87,
	EGPFSMTransitionEvent_StartWeaponInspect = 88,
	EGPFSMTransitionEvent_EndWeaponInspect = 89,
	EGPFSMTransitionEvent_StartHighValueItemInspect = 90,
	EGPFSMTransitionEvent_EndHighValueItemInspect = 91,
	EGPFSMTransitionEvent_StartWeaponBipodDeploy = 92,
	EGPFSMTransitionEvent_EndWeaponBipodDeploy = 93,
	EGPFSMTransitionEvent_StartSlidingTackle = 94,
	EGPFSMTransitionEvent_EndSlidingTackle = 95,
	EGPFSMTransitionEvent_StartCrocodileBite = 96,
	EGPFSMTransitionEvent_EndCrocodileBite = 97,
	EGPFSMTransitionEvent_StartSimpleOperate = 98,
	EGPFSMTransitionEvent_EndSimpleOperate = 99,
	EGPFSMTransitionEvent_StartSimpleOperateWithUI = 100,
	EGPFSMTransitionEvent_EndSimpleOperateWithUI = 101,
	EGPFSMTransitionEvent_StartPreciseOperate = 102,
	EGPFSMTransitionEvent_EndPreciseOperate = 103,
	EGPFSMTransitionEvent_StartPreciseOperateWithUI = 104,
	EGPFSMTransitionEvent_EndPreciseOperateWithUI = 105,
	EGPFSMTransitionEvent_StartDelayOperate = 106,
	EGPFSMTransitionEvent_EndDelayOperate = 107,
	EGPFSMTransitionEvent_StartDelayOperateWithUI = 108,
	EGPFSMTransitionEvent_EndDelayOperateWithUI = 109,
	EGPFSMTransitionEvent_EndKnockbacck = 110,
	EGPFSMTransitionEvent_StartKnockbacck = 111,
	EGPFSMTransitionEvent_StartFirefighting = 112,
	EGPFSMTransitionEvent_EndFirefighting = 113,
	EGPFSMTransitionEvent_StartMarking = 114,
	EGPFSMTransitionEvent_EndMarking = 115,
	EGPFSMTransitionEvent_StartOneHandedGesture = 116,
	EGPFSMTransitionEvent_EndOneHandedGesture = 117,
	EGPFSMTransitionEvent_StartTwoHandedGesture = 118,
	EGPFSMTransitionEvent_EndTwoHandedGesture = 119,
	EGPFSMTransitionEvent_StartApplySpray = 120,
	EGPFSMTransitionEvent_EndApplySpray = 121,
	EGPFSMTransitionEvent_StartFallHighBeHit = 122,
	EGPFSMTransitionEvent_EndFallHighBeHit = 123,
	EGPFSMTransitionEvent_SafeHouseEnterRange = 124,
	EGPFSMTransitionEvent_SafeHouseLeaveRange = 125,
	EGPFSMTransitionEvent_StartAirDropVehicle = 126,
	EGPFSMTransitionEvent_EndAirDropVehicle = 127,
	EGPFSMTransitionEvent_StartSeamlessShow = 128,
	EGPFSMTransitionEvent_EndSeamlessShow = 129,
	EGPFSMTransitionEvent_StartRankSKillOperate = 130,
	EGPFSMTransitionEvent_EndRankSKillOperate = 131,
	EGPFSMTransitionEvent_StartCommonLeftArmAnim = 132,
	EGPFSMTransitionEvent_EndCommonLeftArmAnim = 133,
	EGPFSMTransitionEvent_MAX = 134
};

// Enum GPGameplay.ECharacterFSMEventDefine
enum class ECharacterFSMEventDefine : UINT8 {
	EVENT_GPFSM_NONE = 0,
	EVENT_GPFSM_Server_ReceiveTransitionEvent = 1,
	EVENT_GPFSM_Client_MoveForward = 2,
	EVENT_GPFSM_Client_MoveRight = 3,
	EVENT_GPFSM_Client_MoveStatusChanged = 4,
	EVENT_GPFSM_Client_Turn = 5,
	EVENT_GPFSM_Client_TurnAtRate = 6,
	EVENT_GPFSM_Client_LookUp = 7,
	EVENT_GPFSM_Client_LookUpAtRate = 8,
	EVENT_GPFSM_Client_PrepareFire = 9,
	EVENT_GPFSM_Client_PrepareJump = 10,
	EVENT_GPFSM_Client_PrepareAim = 11,
	EVENT_GPFSM_Client_PrepareReload = 12,
	EVENT_GPFSM_Client_FireButtonPressed = 13,
	EVENT_GPFSM_Client_FireButtonReleased = 14,
	EVENT_GPFSM_Client_FireButtonRelease_IncludeF = 15,
	EVENT_GPFSM_Client_JumButtonPressed = 16,
	EVENT_GPFSM_Client_AimButtonPressed = 17,
	EVENT_GPFSM_Client_AimButtonReleased = 18,
	EVENT_GPFSM_Client_ReloadButtonPressed = 19,
	EVENT_GPFSM_Client_MoveButtonPressed = 20,
	EVENT_GPFSM_Client_SprintButtonPressed = 21,
	EVENT_GPFSM_Client_CrouchButtonPressed = 22,
	EVENT_GPFSM_Client_ProneButtonPressed = 23,
	EVENT_GPFSM_Client_SwitchWeaponButtonPressed = 24,
	EVENT_GPFSM_Client_ToogleCrouch = 25,
	EVENT_GPFSM_Client_ToogleProne = 26,
	EVENT_GPFSM_Client_TooglePose = 27,
	EVENT_GPFSM_Server_BeginUseItem = 28,
	EVENT_GPFSM_Server_EndUseItem = 29,
	EVENT_GPFSM_Server_CancelUseItem = 30,
	EVENT_GPFSM_Client_CancelUseItem = 31,
	EVENT_GPFSM_Client_ClientPreUseItem = 32,
	EVENT_GPFSM_Server_BeginOperate = 33,
	EVENT_GPFSM_Server_EndOperate = 34,
	EVENT_GPFSM_Server_CancelOperate = 35,
	EVENT_GPFSM_Server_TryRescue = 36,
	EVENT_GPFSM_Server_TryCancelRescue = 37,
	EVENT_GPFSM_Client_TryCancelRescue = 38,
	EVENT_GPFSM_Client_TryCancelRescueMySelf = 39,
	EVENT_GPFSM_Client_TryCancelCancelRescueMySelf = 40,
	EVENT_GPFSM_Client_BeingRescueInfoArrived = 41,
	EVENT_GPFSM_Client_BeingRescueAnimationTriggered = 42,
	EVENT_GPFSM_Client_TryCancelRescueMySelfImmediately = 43,
	EVENT_GPFSM_Client_TryCancelCancelRescueMySelfImmediately = 44,
	EVENT_GPFSM_Server_StartSprint = 45,
	EVENT_GPFSM_Server_EndSprint = 46,
	EVENT_GPFSM_Server_BeginLooting = 47,
	EVENT_GPFSM_Server_TryDriveCar = 48,
	EVENT_GPFSM_Server_TryTexiCar = 49,
	EVENT_GPFSM_Server_GetOnVehicleWhenCarryBody = 50,
	EVENT_GPFSM_Server_GetOffVehicleWhenCarryBody = 51,
	EVENT_GPFSM_Server_TryStopDrivingCar = 52,
	EVENT_GPFSM_Server_TryTexiOffCar = 53,
	EVENT_GPFSM_Client_CarInfoArrived = 54,
	EVENT_GPFSM_Client_TrySwitchSeat = 55,
	EVENT_GPFSM_Server_TrySwitchSeat = 56,
	EVENT_GPFSM_Server_TryGetOnCarWithSpecificSeat = 57,
	EVENT_GPFSM_Server_TryCarryBody = 58,
	EVENT_GPFSM_Server_TryCancelCarryBody = 59,
	EVENT_GPFSM_Server_TryDropCarryBody = 60,
	EVENT_GPFSM_Server_TryStartMonitor = 61,
	EVENT_GPFSM_Server_TryCancelMonitor = 62,
	EVENT_GPFSM_Server_TryEnterMonitor = 63,
	EVENT_GPFSM_Server_TryEnterNextMonitor = 64,
	EVENT_GPFSM_Server_TryEnterLastMonitor = 65,
	EVENT_GPFSM_Server_TryUseTelescope = 66,
	EVENT_GPFSM_Server_TryCancelTelescope = 67,
	EVENT_GPFSM_Both_ResetPassengerPosition = 68,
	EVENT_GPFSM_Server_TryUseH2HBInCar = 69,
	EVENT_GPFSM_Server_TryUseH2HBOnLand = 70,
	EVENT_GPFSM_Server_TryLeaveMachineGun = 71,
	EVENT_GPFSM_Client_JumpButtonPressed = 72,
	EVENT_GPFSM_Client_JumpButtonReleased = 73,
	EVENT_GPFSM_Client_ForceToStand = 74,
	EVENT_GPFSM_Client_UseItemInfoArrived = 75,
	EVENT_GPFSM_Client_TrumpetButtonPressed = 76,
	EVENT_GPFSM_Client_TrumpetButtonReleased = 77,
	EVENT_GPFSM_Client_WheelieButtonPressed = 78,
	EVENT_GPFSM_Client_WheelieButtonReleased = 79,
	EVENT_GPFSM_Client_StoppieButtonPressed = 80,
	EVENT_GPFSM_Client_StoppieButtonReleased = 81,
	EVENT_GPFSM_Client_TryUseStarApp = 82,
	EVENT_GPFSM_Client_TryCancelStarApp = 83,
	EVENT_GPFSM_Client_ToogleLeftLean = 84,
	EVENT_GPFSM_Client_ToogleRightLean = 85,
	EVENT_GPFSM_CancelLean = 86,
	EVENT_GPFSM_Server_StartSearchItem = 87,
	EVENT_GPFSM_Server_EndSearchItem = 88,
	EVENT_GPFSM_Server_StartWeaponInspect = 89,
	EVENT_GPFSM_Server_EndWeaponInspect = 90,
	EVENT_GPFSM_Server_StartWeaponBipodDeploy = 91,
	EVENT_GPFSM_Server_EndWeaponBipodDeploy = 92,
	EVENT_GPFSM_Client_StartWeaponBipodDeploy = 93,
	EVENT_GPFSM_Client_EndPerformAction = 94,
	EVENT_GPFSM_Server_EndPerformAction = 95,
	EVENT_GPFSM_Client_FirefightingButtonReleased = 96,
	EVENT_GPFSM_Server_KnockDownBeginBeHit = 97,
	EVENT_GPFSM_Server_KnockDownCancelBeHit = 98,
	EVENT_GPFSM_Server_ExplodeDamageBeginBeHit = 99,
	EVENT_GPFSM_Server_ExplodeDamageCancelBeHit = 100,
	EVENT_GPFSM_Server_BeginUseSkill = 101,
	EVENT_GPFSM_Server_EndUseSkill = 102,
	EVENT_GPFSM_Server_BeginLeftHandSkill = 103,
	EVENT_GPFSM_Server_EndLeftHandSkill = 104,
	EVENT_GPFSM_Server_BeginRightHandSkill = 105,
	EVENT_GPFSM_Server_EndRightHandSkill = 106,
	EVENT_GPFSM_Server_BeginDoubleHandsSkill = 107,
	EVENT_GPFSM_Server_EndDoubleHandsSkill = 108,
	EVENT_GPFSM_Server_BeginLegsSkill = 109,
	EVENT_GPFSM_Server_EndLegsSkill = 110,
	EVENT_GPFSM_Server_BeginSpecialSkill = 111,
	EVENT_GPFSM_Server_EndSpecialSkill = 112,
	EVENT_GPFSM_Server_BeginZipline = 113,
	EVENT_GPFSM_Server_EndZipline = 114,
	EVENT_GPFSM_Server_CancelZipline = 115,
	EVENT_GPFSM_Server_BeginAssassinate = 116,
	EVENT_GPFSM_Server_EndAssassinate = 117,
	EVENT_GPFSM_Server_CancelAssassinate = 118,
	EVENT_GPFSM_Server_BeingAssassinateBegin = 119,
	EVENT_GPFSM_Server_BeingAssassinateEnd = 120,
	EVENT_GPFSM_Server_BeingAssassinateBreakOff = 121,
	EVENT_GPFSM_CommandSkill = 122,
	EVENT_GPFSM_BeginPrepare = 123,
	EVENT_GPFSM_CancelPrepare = 124,
	EVENT_GPFSM_Both_TryCancelUseItem = 125,
	EVENT_GPFSM_Client_ParentAttachmentChange = 126,
	EVENT_GPFSM_Server_TryEnterRelaxIdle = 127,
	EVENT_GPFSM_Server_TryCancelRelaxIdle = 128,
	EVENT_GPFSM_Client_TryGetOutWeapon = 129,
	EVENT_GPFSM_Client_TryStartAutoDriveVehicle = 130,
	EVENT_GPFSM_Server_BeginFloating = 131,
	EVENT_GPFSM_Server_CancelFloating = 132,
	EVENT_GPFSM_Client_SkillPressed = 133,
	EVENT_GPFSM_Client_SkillReleased = 134,
	EVENT_GPFSM_Client_BeginVaultAndClimb = 135,
	EVENT_GPFSM_Client_EndVaultAndClimb = 136,
	EVENT_GPFSM_Server_BeginBeSuppressed = 137,
	EVENT_GPFSM_Server_CanceBeSuppressed = 138,
	EVENT_GPFSM_Server_BeginRaiseWatch = 139,
	EVENT_GPFSM_Server_EndRaiseWatch = 140,
	EVENT_GPFSM_Client_SafeHouseEnterRange = 141,
	EVENT_GPFSM_Client_SafeHouseLeaveRange = 142,
	EVENT_GPFSM_Server_StartAirDropVehicle = 143,
	EVENT_GPFSM_Server_EndAirDropVehicle = 144,
	EVENT_GPFSM_Server_StartRankSkillOperate = 145,
	EVENT_GPFSM_Server_EndRankSkillOperate = 146,
	EVENT_GPFSM_MAX = 147
};

// Enum GPGameplay.EBreathState
enum class EBreathState : UINT8 {
	None = 0,
	Breath = 1,
	HoldBreath = 2,
	UnHoldBreath = 3,
	EBreathState_MAX = 4
};

// Enum GPGameplay.ECharingSlot
enum class ECharingSlot : UINT8 {
	None = 0,
	ArmdedForceItem1 = 1,
	ArmdedForceItem2 = 2,
	Ability = 3,
	AbilityReady = 4,
	FlyRebotSkill = 5,
	FlyRebotHealth = 6,
	FlyRebotCharging = 7,
	BattleFieldPropSkillCD = 8,
	GuidedMissle = 9,
	SectorArtilerrate = 10,
	SectorSmoke = 11,
	RebornBeacons = 12,
	ArmdedForceItem1Ready = 13,
	ArmdedForceItem2Ready = 14,
	BattleFieldPropSkillReady = 15,
	Max = 16
};

// Enum GPGameplay.EFSMGamePlayStatusDefine
enum class EFSMGamePlayStatusDefine : UINT8 {
	GamePlayStatus_None = 0,
	GamePlayStatus_AimOn = 1,
	GamePlayStatus_Reload = 2,
	GamePlayStatus_Looting = 3,
	GamePlayStatus_Rescue = 4,
	GamePlayStatus_BeingRescue = 5,
	GamePlayStatus_ImpedingDeath = 6,
	GamePlayStatus_Prone = 7,
	GamePlayStatus_Crouch = 8,
	GamePlayStatus_float = 9,
	GamePlayStatus_MAX = 10
};

// Enum GPGameplay.EFSMCharacterState
enum class EFSMCharacterState : UINT8 {
	FSMPlayerState_None = 0,
	FSMPlayerState_AimOn = 1,
	FSMPlayerState_LeanPeek = 2,
	FSMPlayerState_Reload = 3,
	FSMPlayerState_Fire = 4,
	FSMPlayerState_WeaponInspect = 5,
	FSMPlayerState_WeaponBipodDeploy = 6,
	FSMPlayerState_Prone = 7,
	FSMPlayerState_Crouch = 8,
	FSMPlayerState_Stand = 9,
	FSMPlayerState_Sprint = 10,
	FSMPlayerState_SlidingTackle = 11,
	FSMPlayerState_SpecialMove = 12,
	FSMPlayerState_Marking = 13,
	FSMPlayerState_SearchItem = 14,
	FSMPlayerState_CarryBody = 15,
	FSMPlayerState_Rescue = 16,
	FSMPlayerState_BeingRescue = 17,
	FSMPlayerState_Interact = 18,
	FSMPlayerState_PreciseInteract = 19,
	FSMPlayerState_DelayInteract = 20,
	FSMPlayerState_GameOperate = 21,
	FSMPlayerState_Skill = 22,
	FSMPlayerState_Vehicle = 23,
	FSMPlayerState_SceneWeapon = 24,
	FSMPlayerState_UseItem = 25,
	FSMPlayerState_Firefighting = 26,
	FSMPlayerState_HighValueItemInspect = 27,
	FSMPlayerState_BeHit = 28,
	FSMPlayerState_ImpedingDeath = 29,
	FSMPlayerState_Death = 30,
	FSMPlayerState_CutScene = 31,
	FSMPlayerState_Assassinate = 32,
	FSMPlayerState_OneHandedGesture = 33,
	FSMPlayerState_TwoHandedGesture = 34,
	FSMPlayerState_ApplySpray = 35,
	FSMPlayerState_CommonLeftArmAnim = 36,
	FSMPlayerState_WaitStart = 37,
	FSMPlayerState_QuitGame = 38,
	FSMPlayerState_MAX = 39
};

// Enum GPGameplay.ESubtitleSequenceType
enum class ESubtitleSequenceType : UINT8 {
	None = 0,
	Subtitle_Raid1 = 1,
	Subtitle_Raid2 = 2,
	Subtitle_SafeHouse = 3,
	Subtitle_SOLEvent = 4,
	Subtitle_SOLQuest = 5,
	Subtitle_AI = 6,
	Subtitle_Intro = 7,
	Subtitle_CutScene = 8,
	Subtitle_BreakthroughThink = 9,
	ESubtitleSequenceType_MAX = 10
};

// Enum GPGameplay.ESlotButton
enum class ESlotButton : UINT8 {
	SlotButton_Right = 0,
	SlotButton_Left = 1,
	SlotButton_FirePress = 2,
	SlotButton_FireRelease = 3,
	SlotButton_MAX = 4
};

// Enum GPGameplay.ESkillUISlot
enum class ESkillUISlot : UINT8 {
	UIState_NoSlot = 0,
	UIState_FireButtonLeft = 1,
	UIState_Custom = 2,
	UIState_Custom2 = 3,
	UIState_Custom3 = 4,
	UIState_Self = 5,
	UIState_QTELeft = 6,
	UIState_QTERight = 7,
	UIState_ActiveSkill = 8,
	UIState_SupportSkill = 9,
	UIState_BattleFieldPropSkill = 10,
	UIState_MAX = 11
};

// Enum GPGameplay.ESkillCDEffectType
enum class ESkillCDEffectType : UINT8 {
	SkillCDEffect_Normal = 0,
	SkillCDEffect_Support = 1,
	SkillCDEffect_MAX = 2
};

// Enum GPGameplay.ERankSkillUIState
enum class ERankSkillUIState : UINT8 {
	None = 0,
	ScoreLess = 1,
	CDing = 2,
	ToBeUsed = 3,
	ERankSkillUIState_MAX = 4
};

// Enum GPGameplay.EMarkFeature
enum class EMarkFeature : int {
	UpdateScreenPosOnce = 1,
	UpdateScreenPos = 2,
	UpdateScreenPosFromTargetActor = 4,
	UpdateScreenPosFromGivenLocation = 8,
	UpdateScreenPosByController = 16,
	UpdateScreenPosByMatrix = 32,
	UpdateScreenPosEnableTraceXYZ = 64,
	UpdateScreenPosEnableTraceXY = 128,
	Update3DDis = 1024,
	Update2DDis = 2048,
	UpdateDir = 32768,
	UpdateAimed = 1048576,
	UpdateAimedOnTarget = 2097152,
	UpdateAimedBasedOnRadialDistance = 4194304,
	UpdateHasCoverBetween = 33554432,
	UpdateHasCoverBetweenUseRayTrace = 67108864,
	UpdateSizeOnDis = 1073741824,
	EMarkFeature_MAX = 1073741825
};

// Enum GPGameplay.ECountDownPriority
enum class ECountDownPriority : UINT8 {
	None = 0,
	Contract = 1,
	Escape = 2,
	MandelBrick = 3,
	Max = 4
};

// Enum GPGameplay.EGPAbilityLockerType
enum class EGPAbilityLockerType : UINT8 {
	None = 0,
	LaserPointer = 1,
	LaserPointerReciver = 2,
	LowAmmo = 3,
	EGPAbilityLockerType_MAX = 4
};

// Enum GPGameplay.EHitEventType
enum class EHitEventType : UINT8 {
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
	HitADS = 24,
	HitSkillActor = 25,
	EHitEventType_MAX = 26
};

// Enum GPGameplay.AttributeAdditionType
enum class AttributeAdditionType : UINT8 {
	Add_Base = 0,
	Override_Base = 1,
	InitalCover = 2,
	FinalCover = 3,
	Add = 4,
	Mult_A = 5,
	Mult_B = 6,
	Mult_C = 7,
	Mult_D = 8,
	Max = 9
};

// Enum GPGameplay.EMarkerCoordinatedType
enum class EMarkerCoordinatedType : UINT8 {
	None = 0,
	MandelBrick = 31,
	MandelBrick_MapMarked = 41,
	HighValueBox_MapMarked = 42,
	MarkingItemMarker = 51,
	EMarkerCoordinatedType_MAX = 52
};

// Enum GPGameplay.ERepairEventType
enum class ERepairEventType : UINT8 {
	RepairStop = 0,
	RepairFinished = 1,
	ERepairEventType_MAX = 2
};

// Enum GPGameplay.EStingerMissileLockingState
enum class EStingerMissileLockingState : UINT8 {
	NONE = 0,
	UNLOCK_DISTANCE = 1,
	UNLOCK_EMPTY = 2,
	CANNOTLOCK = 3,
	START_LOCKING = 4,
	COMPLETE_LOCKING = 5,
	MISSILE_ATTACK = 6,
	NAP_OF_EARTH = 7,
	EStingerMissileLockingState_MAX = 8
};

// Enum GPGameplay.ECurveBlendOption_BCOnly
enum class ECurveBlendOption_BCOnly : UINT8 {
	Override = 0,
	MaxValue = 1,
	Additive = 2,
	ECurveBlendOption_MAX = 3
};

// Enum GPGameplay.EGPPlayParticleEffectRole
enum class EGPPlayParticleEffectRole : UINT8 {
	ROLE_1PAnd3P = 0,
	ROLE_1P = 1,
	ROLE_3P = 2,
	ROLE_MAX = 3
};

// Enum GPGameplay.EClimbLadderNotifySettingType
enum class EClimbLadderNotifySettingType : UINT8 {
	EClimbLadderNotifySettingType_NONE = 0,
	EClimbLadderNotifySettingType_BreakPoint = 1,
	EClimbLadderNotifySettingType_MAX = 2
};

// Enum GPGameplay.EVaultNotifySettingType
enum class EVaultNotifySettingType : UINT8 {
	EVaultNotifySettingType_NONE = 0,
	EVaultNotifySettingType_StartPoint = 1,
	EVaultNotifySettingType_HandTouchPoint = 2,
	EVaultNotifySettingType_BeginVaultPoint = 3,
	EVaultNotifySettingType_EndVaultPoint = 4,
	EVaultNotifySettingType_LandPoint = 5,
	EVaultNotifySettingType_EndPoint = 6,
	EVaultNotifySettingType_BreakPoint = 7,
	EVaultNotifySettingType_HideWeapon = 8,
	EVaultNotifySettingType_ShowWeapon = 9,
	EVaultNotifySettingType_FallingPoint = 10,
	EVaultNotifySettingType_BeforeBreakPoint = 11,
	EVaultNotifySettingType_MAX = 12
};

// Enum GPGameplay.EAnimNotifyStateIKBlend
enum class EAnimNotifyStateIKBlend : UINT8 {
	None = 0,
	ChangeClip = 1,
	Vault = 2,
	Max = 3
};

// Enum GPGameplay.EDamageExplodeBlockCheckType
enum class EDamageExplodeBlockCheckType : UINT8 {
	Low = 0,
	High = 1,
	EDamageExplodeBlockCheckType_MAX = 2
};

// Enum GPGameplay.EGPDamageFeature
enum class EGPDamageFeature : UINT8 {
	None = 0,
	SOL = 1,
	EGPDamageFeature_MAX = 2
};

// Enum GPGameplay.EGPDamageMode
enum class EGPDamageMode : UINT8 {
	Default = 0,
	GameMode01 = 1,
	GameMode02 = 2,
	GameMode03 = 3,
	GameMode04 = 4,
	EGPDamageMode_MAX = 5
};

// Enum GPGameplay.EAttributeEffectMainTag
enum class EAttributeEffectMainTag : UINT8 {
	Default = 0,
	Damage = 1,
	Buff = 2,
	System = 3,
	Equipment = 4,
	Max = 5
};

// Enum GPGameplay.EAttributeEffectInstanceType
enum class EAttributeEffectInstanceType : UINT8 {
	None = 0,
	Damage = 1,
	Buff = 2,
	ItemHealth = 3,
	EAttributeEffectInstanceType_MAX = 4
};

// Enum GPGameplay.EPlayerQuitMatchReason
enum class EPlayerQuitMatchReason : UINT8 {
	ENone = 0,
	EEndMatch = 1,
	ESvrForceKick = 2,
	EClientReqQuit = 3,
	EPlayerQuitMatchReason_MAX = 4
};

// Enum GPGameplay.EPlayerEndMatchReason
enum class EPlayerEndMatchReason : UINT8 {
	EPlayerEndMatch_Success = 0,
	EPlayerEndMatch_Killed = 1,
	EPlayerEndMatch_TimeLimit = 2,
	EPlayerEndMatch_MAX = 3
};

// Enum GPGameplay.EBulletHitActionType
enum class EBulletHitActionType : UINT8 {
	None = 0,
	Damage = 1,
	Buff = 2,
	Custom = 3,
	EBulletHitActionType_MAX = 4
};

// Enum GPGameplay.ECampType
enum class ECampType : UINT8 {
	BF_DeltaCamp0 = 0,
	BF_DeltaCamp1 = 1,
	SOL_DeltaPMC = 101,
	SOL_DarkTide = 102,
	SOL_Hudson = 103,
	Raid_DeltaPMC = 104,
	Raid_DarkTide = 105,
	Raid_Hudson = 106,
	BF_Hudson = 109,
	SafeHouse_Player = 110,
	SafeHouse_NPC = 111,
	SafeHouse_RangeTarget = 112,
	Vehicle = 112,
	Neutral = 113,
	SOL_ContractPlayer = 5,
	SOL_BossTeam = 107,
	Max = 255
};

// Enum GPGameplay.ECharacterSnatshotSubPose
enum class ECharacterSnatshotSubPose : UINT8 {
	Center = 0,
	Left = 1,
	Right = 2,
	Max = 3
};

// Enum GPGameplay.ECharacterSnatshotBasePose
enum class ECharacterSnatshotBasePose : UINT8 {
	None = 0,
	Stand = 1,
	Crouch = 2,
	Prone = 3,
	InVehicle = 4,
	InSceneWeapon = 5,
	ImpendingDeath = 6,
	Knockback = 7,
	SlidingTackle = 8,
	Vaulting = 9,
	Climb = 10,
	Zipline = 11,
	BeingAssassinate = 12,
	Max = 13
};

// Enum GPGameplay.EHaavkTurnType
enum class EHaavkTurnType : UINT8 {
	LeftAndRight = 0,
	Circle = 1,
	EHaavkTurnType_MAX = 2
};

// Enum GPGameplay.EDamageStateRecordType
enum class EDamageStateRecordType : UINT8 {
	Default = 0,
	Character = 1,
	GeneralGun = 2,
	Melee = 3,
	Vehicle = 4,
	Door = 5,
	EDamageStateRecordType_MAX = 6
};

// Enum GPGameplay.EDamageGameState
enum class EDamageGameState : UINT8 {
	None = 0,
	Prematch = 1,
	InGame = 2,
	EndGame = 3,
	EDamageGameState_MAX = 4
};

// Enum GPGameplay.EDamageUnitType
enum class EDamageUnitType : UINT8 {
	Actor = 0,
	Component = 1,
	EDamageUnitType_MAX = 2
};

// Enum GPGameplay.EDamageActorType
enum class EDamageActorType : UINT8 {
	None = 0,
	PlayerCharacter = 1,
	AICharacter = 2,
	Vehicle = 3,
	Weapon = 4,
	World = 5,
	BreakablePawn = 6,
	Others = 7,
	EDamageActorType_MAX = 8
};

// Enum GPGameplay.EDamageModifyType
enum class EDamageModifyType : UINT8 {
	Add = 0,
	Mult = 1,
	Override = 2,
	EDamageModifyType_MAX = 3
};

// Enum GPGameplay.EGPDamageEnableType
enum class EGPDamageEnableType : UINT8 {
	Default = 0,
	Enable = 1,
	Disable = 2,
	EnableWithEnemy = 3,
	EGPDamageEnableType_MAX = 4
};

// Enum GPGameplay.EDamageChannel
enum class EDamageChannel : UINT8 {
	Default = 0,
	HP = 1,
	ArmorDamage = 2,
	HealthDamage = 3,
	Max = 4
};

// Enum GPGameplay.EWeaponFireValidateFaildReason
enum class EWeaponFireValidateFaildReason : UINT8 {
	None = 0,
	CharacterOwnerNull = 1,
	CharacterDied = 2,
	CharacterImpendingDeath = 3,
	CharacterCantFire = 4,
	WeaponInactive = 5,
	WeaponNotFiringState = 6,
	WeaponNoAmmo = 7,
	FireIntervalError = 8,
	FireIdInvalid = 9,
	FireTimeInvalid = 10,
	LogicFireTimeInvalid = 11,
	EWeaponFireValidateFaildReason_MAX = 12
};

// Enum GPGameplay.EDataTableConstrainType
enum class EDataTableConstrainType : UINT8 {
	Unique = 0,
	ForeignKey = 1,
	EDataTableConstrainType_MAX = 2
};

// Enum GPGameplay.EEMPType
enum class EEMPType : UINT8 {
	EMP = 0,
	DataKnife = 1,
	EEMPType_MAX = 2
};

// Enum GPGameplay.EFiringAnimMode
enum class EFiringAnimMode : UINT8 {
	Single = 0,
	Continue = 1,
	EFiringAnimMode_MAX = 2
};

// Enum GPGameplay.EFiringAnimBlendOutMode
enum class EFiringAnimBlendOutMode : UINT8 {
	ForceEnd = 0,
	ContinueAnim = 1,
	BlendOut = 2,
	EFiringAnimBlendOutMode_MAX = 3
};

// Enum GPGameplay.EFiringAnimDim
enum class EFiringAnimDim : UINT8 {
	Dim_Trans_Forward = 0,
	Dim_Trans_Right = 1,
	Dim_Trans_Up = 2,
	Dim_Rot_Pitch = 3,
	Dim_Rot_Yaw = 4,
	Dim_Rot_Roll = 5,
	Dim_Num = 6,
	Dim_MAX = 7
};

// Enum GPGameplay.EDFMAbilityEndReason
enum class EDFMAbilityEndReason : UINT8 {
	NormalEnd = 0,
	UnNormalEnd = 1,
	Die = 2,
	RemoveFromCharacter = 3,
	CastFaild = 4,
	PlayMontageFaild = 5,
	EDFMAbilityEndReason_MAX = 6
};

// Enum GPGameplay.EDFMAbilityLogicType
enum class EDFMAbilityLogicType : UINT8 {
	Default = 0,
	EnterState = 1,
	LeaveState = 2,
	PlayMontage = 3,
	PlayMontageInstance = 4,
	KeepActor = 5,
	SpawnActor = 6,
	Function = 7,
	WeaponProjectileActor = 8,
	ProjectileActor = 9,
	Buff = 10,
	LogicTypeMax = 11,
	EDFMAbilityLogicType_MAX = 12
};

// Enum GPGameplay.EAnimState
enum class EAnimState : UINT8 {
	Stand = 0,
	Crouch = 1,
	Prone = 2,
	Sprint = 3,
	Jump = 4,
	Dead = 5,
	Vault = 6,
	Zipline = 7,
	Rescue = 8,
	Throw = 9,
	Reload = 10,
	Medical = 11,
	Moving = 12,
	ImpendingDeath = 13,
	Max = 32
};

// Enum GPGameplay.EAnimKnockbackType
enum class EAnimKnockbackType : UINT8 {
	Knockback = 0,
	EAnimKnockbackType_MAX = 1
};

// Enum GPGameplay.EAnimCarryBodyType
enum class EAnimCarryBodyType : UINT8 {
	CarryCharacter = 0,
	CarryBox = 1,
	EAnimCarryBodyType_MAX = 2
};

// Enum GPGameplay.EAnimApplySprayType
enum class EAnimApplySprayType : UINT8 {
	ApplySpray = 0,
	EAnimApplySprayType_MAX = 1
};

// Enum GPGameplay.EAnimMarkingType
enum class EAnimMarkingType : UINT8 {
	Marking = 0,
	EAnimMarkingType_MAX = 1
};

// Enum GPGameplay.EAnimFirefightingType
enum class EAnimFirefightingType : UINT8 {
	Firefighting = 0,
	ZoyaSwarms = 1,
	EAnimFirefightingType_MAX = 2
};

// Enum GPGameplay.EAnimRaiseWatchType
enum class EAnimRaiseWatchType : UINT8 {
	RaiseWatch = 0,
	EAnimRaiseWatchType_MAX = 1
};

// Enum GPGameplay.EAnimHitPart
enum class EAnimHitPart : UINT8 {
	None = 0,
	Head = 1,
	UpperBody = 2,
	LeftLeg = 3,
	RightLeg = 4,
	EAnimHitPart_MAX = 5
};

// Enum GPGameplay.EAnimParachuteType
enum class EAnimParachuteType : UINT8 {
	Parachute = 0,
	Glide = 1,
	EAnimParachuteType_MAX = 2
};

// Enum GPGameplay.EAnimClimbLadderType
enum class EAnimClimbLadderType : UINT8 {
	ClimbLadder = 0,
	EAnimClimbLadderType_MAX = 1
};

// Enum GPGameplay.EAnimBunkerType
enum class EAnimBunkerType : UINT8 {
	NoWeapon = 0,
	EAnimBunkerType_MAX = 1
};

// Enum GPGameplay.EAnimTacticalActionType
enum class EAnimTacticalActionType : UINT8 {
	TacticalAction = 0,
	EAnimTacticalActionType_MAX = 1
};

// Enum GPGameplay.EAnimVehicleSeatPos
enum class EAnimVehicleSeatPos : UINT8 {
	Seat_FL = 0,
	Seat_FR = 1,
	Seat_BL = 2,
	Seat_BR = 3,
	Seat_BL02 = 4,
	Seat_BR02 = 5,
	Seat_BL03 = 6,
	Seat_BR03 = 7,
	Seat_MachineGun = 8,
	Seat_MAX = 9
};

// Enum GPGameplay.EAnimLoadPriority
enum class EAnimLoadPriority : UINT8 {
	Low = 0,
	Medium = 50,
	High = 100,
	SuperHigh = 200,
	EAnimLoadPriority_MAX = 201
};

// Enum GPGameplay.EGPEventToggleState
enum class EGPEventToggleState : UINT8 {
	TURN_ON = 6,
	TURN_OFF = 7,
	TURN_MAX = 8
};

// Enum GPGameplay.EGPAnimOperationInterruptType
enum class EGPAnimOperationInterruptType : UINT8 {
	Default = 0,
	Interrupt_SwitchWeapon = 1,
	Interrupt_Reload = 2,
	EGPAnimOperationInterruptType_MAX = 3
};

// Enum GPGameplay.EGPAnimNotifyLogicalBreakType
enum class EGPAnimNotifyLogicalBreakType : UINT8 {
	Default = 0,
	LogicReload_Complete = 1,
	Reload_Ready = 5,
	EventToggle_TurnOn = 6,
	EventToggle_TurnOff = 7,
	Fire_Break = 8,
	Equip_Break = 9,
	Fire_Break_End = 10,
	Do_Fire = 11,
	EnableSprint_ThrowableWeapon = 12,
	Show_PreviewLine = 13,
	Throwable_HideMesh = 14,
	Throwable_ShowMesh = 15,
	Throwable_Unlock = 16,
	EGPAnimNotifyLogicalBreakType_MAX = 17
};

// Enum GPGameplay.ERetargetConfig
enum class ERetargetConfig : UINT8 {
	ERetargetConfig_Normal = 0,
	ERetargetConfig_FPP = 1,
	ERetargetConfig_MAX = 2
};

// Enum GPGameplay.EWeaponLeanAimType
enum class EWeaponLeanAimType : UINT8 {
	EWeapLeanAimType_Center = 0,
	EWeapLeanAimType_Left = 1,
	EWeapLeanAimType_Right = 2,
	EWeapLeanAimType_MAX = 3
};

// Enum GPGameplay.ELocomotionTransitionType
enum class ELocomotionTransitionType : UINT8 {
	LocomotionTransitionType_None = 0,
	LocomotionTransitionType_IdleToWalking = 1,
	LocomotionTransitionType_IdleToRunning = 2,
	LocomotionTransitionType_IdleToFastRunning = 3,
	LocomotionTransitionType_RunningToFastRunning = 4,
	LocomotionTransitionType_WalkingToIdle = 5,
	LocomotionTransitionType_RunningToIdle = 6,
	LocomotionTransitionType_FastRunningToIdle = 7,
	LocomotionTransitionType_Pivot_Walking = 8,
	LocomotionTransitionType_Pivot_Running = 9,
	LocomotionTransitionType_Pivot_FastRunning = 10,
	LocomotionTransitionType_MAX = 11
};

// Enum GPGameplay.EAssasinateAnimType
enum class EAssasinateAnimType : UINT8 {
	Stand = 1,
	Impending = 2,
	Prone = 4,
	EAssasinateAnimType_MAX = 5
};

// Enum GPGameplay.ESmallActionTrigger
enum class ESmallActionTrigger : UINT8 {
	EStill2NotStill = 1,
	ENotStil2Still = 2,
	EFiring2NotFiring = 4,
	EFasterMove2Walk = 8,
	EJumping2Land = 16,
	EStand2Crouch = 32,
	ECrouch2Stand = 64,
	ESmallActionTrigger_MAX = 65
};

// Enum GPGameplay.ESmallActionState
enum class ESmallActionState : UINT8 {
	EStill = 0,
	EHorizonRotate = 1,
	EVerticalRotate = 2,
	EMove = 3,
	EFiring = 4,
	ENoFiring = 5,
	EWalk = 6,
	ERun = 7,
	ESprint = 8,
	EAiring = 9,
	ELanding = 10,
	EStand = 11,
	ECrouch = 12,
	EZooming = 13,
	EMax = 14,
	ESmallActionState_MAX = 15
};

// Enum GPGameplay.ESpringStatusType
enum class ESpringStatusType : UINT8 {
	ESpringStatus_Default = 0,
	ESpringStatus_Aim = 1,
	ESpringStatus_Crouch = 2,
	ESpringStatus_NumMax = 3,
	ESpringStatus_MAX = 4
};

// Enum GPGameplay.EFPPCameraRotationCalcType
enum class EFPPCameraRotationCalcType : UINT8 {
	EJointBoneAddValue = 0,
	EFPPCameraBoneAutoBlend = 1,
	EFPPCameraBone = 2,
	EFPPCameraRotationCalcType_MAX = 3
};

// Enum GPGameplay.EMotionGear
enum class EMotionGear : UINT8 {
	EMotionGear_Walk = 0,
	EMotionGear_Run = 1,
	EMotionGear_Sprint = 2,
	EMotionGear_SuperSprint = 3,
	EMotionGear_MAX = 4
};

// Enum GPGameplay.EAnimationPlayType
enum class EAnimationPlayType : UINT8 {
	AnimPlayType_None = 0,
	AnimPlayType_FullBody = 1,
	AnimPlayType_FullBodyBeforeAO = 2,
	AnimPlayType_FullBodyWithIK = 3,
	AnimPlayType_FullBodyNoMoving = 4,
	AnimPlayType_FullBodyWhenProne = 5,
	AnimPlayType_UpperBody = 6,
	AnimPlayType_UpperBodyWithIK = 7,
	AnimPlayType_UpperBodyGroupAimWithIK = 8,
	AnimPlayType_LowerBody = 9,
	AnimPlayType_FPPAnimSlot = 10,
	AnimPlayType_UpperBodyWithForceIdle = 11,
	AnimPlayType_FullBodyTakeHit = 12,
	AnimPlayType_FullBodyDeath = 13,
	AnimPlayType_LeftArm = 14,
	AnimPlayType_LeftArmBeforeAO = 15,
	AnimPlayType_RightArm = 16,
	AnimPlayType_LeftRightArm = 17,
	AnimPlayType_LeftArmMirrorByRightArm = 18,
	AnimPlayType_RightArmMirrorByLeftArm = 19,
	AnimPlayType_MirrorAnimBlend = 20,
	AnimPlayType_TurnAnim = 21,
	AnimPlayType_DefaultFullBodyMovingUpperBody = 22,
	AnimPlayType_DefaultFullBodyMovingUpperBodyWithIK = 23,
	AnimPlayType_FullBodyRescue = 24,
	AnimPlayType_InVehicle = 25,
	AnimPlayType_InVehicleBeforeDrive = 26,
	AnimPlayType_MachineGun = 27,
	AnimPlayType_FullBodyCarryBody = 28,
	AnimPlayType_FullBodyAllOverride = 29,
	AnimPlayType_UpperArms = 30,
	AnimPlayType_DefaultUpperBodyMovingUpperArms = 31,
	AnimPlayType_LocomotionFullBodyRushWithIK = 32,
	AnimPlayType_MAX = 33
};

// Enum GPGameplay.EEquipmentPart
enum class EEquipmentPart : UINT8 {
	None = 0,
	TopOfHead = 1,
	Neck = 2,
	Ear = 3,
	Eye = 4,
	Jaw = 5,
	Thorax = 6,
	LeftArm = 7,
	RightArm = 8,
	LeftLeg = 9,
	RightLeg = 10,
	Max = 11
};

// Enum GPGameplay.ECharacterPart
enum class ECharacterPart : UINT8 {
	None = 0,
	Head = 1,
	Thorax = 2,
	Abdomen = 3,
	RightArm = 4,
	LeftArm = 5,
	RightLeg = 6,
	LeftLeg = 7,
	FullBody = 8,
	ECharacterPart_MAX = 9
};

// Enum GPGameplay.EInstantGEType
enum class EInstantGEType : UINT8 {
	None = 0,
	InstantAddHP = 1,
	FixFracture = 2,
	FixBleeding = 3,
	EInstantGEType_MAX = 4
};

// Enum GPGameplay.EHeadEquipmentPartType
enum class EHeadEquipmentPartType : UINT8 {
	HeadTop = 0,
	Eye = 1,
	Face = 2,
	Ear = 3,
	Max = 4
};

// Enum GPGameplay.EEquipmentType
enum class EEquipmentType : UINT8 {
	None = 0,
	Helmet = 1,
	Headset = 2,
	FaceMask = 3,
	Armband = 4,
	BreastPlate = 5,
	Glasses = 6,
	ChestHanging = 7,
	Bag = 8,
	SafeBox = 9,
	Tool = 10,
	Shoes = 11,
	KeyChain = 12,
	Max = 13
};

// Enum GPGameplay.EWeaponBuff
enum class EWeaponBuff : UINT8 {
	None = 0,
	Max = 1
};

// Enum GPGameplay.EFootstepStateType
enum class EFootstepStateType : UINT8 {
	Default = 0,
	Walk = 1,
	Run = 2,
	Sprint = 3,
	CrouchMove = 4,
	CrouchRun = 5,
	ProneMove = 6,
	ProneRun = 7,
	EFootstepStateType_MAX = 8
};

// Enum GPGameplay.EFakeFootstepReason
enum class EFakeFootstepReason : UINT8 {
	LowAnimLOD = 0,
	PVSCut = 1,
	LossNotify = 2,
	EFakeFootstepReason_MAX = 3
};

// Enum GPGameplay.EFakeFootstepStatus
enum class EFakeFootstepStatus : UINT8 {
	Simulating = 0,
	InTransition = 1,
	PendingRemove = 2,
	EFakeFootstepStatus_MAX = 3
};

// Enum GPGameplay.ESubtitleHudType
enum class ESubtitleHudType : UINT8 {
	None = 0,
	OnlyText = 1,
	TextWithBlackBG = 2,
	ESubtitleHudType_MAX = 3
};

// Enum GPGameplay.ESubtitlePriorityType
enum class ESubtitlePriorityType : UINT8 {
	None = 0,
	QuestNotice_P1 = 1,
	QuestNotice_P2 = 2,
	QuestNotice_P3 = 3,
	AIDialog_P1 = 4,
	AIDialog_P2 = 5,
	AIDialog_P3 = 6,
	ESubtitlePriorityType_MAX = 7
};

// Enum GPGameplay.EGPCharacterCameraModeType
enum class EGPCharacterCameraModeType : UINT8 {
	ECameraMode_None = 0,
	ECameraMode_FPP = 1,
	ECameraMode_TPP = 2,
	ECameraMode_MAX = 3
};

// Enum GPGameplay.EGPCharacterCameraModeReason
enum class EGPCharacterCameraModeReason : UINT8 {
	ECameraModeReason_VehicleLiveSpectating = 0,
	ECameraModeReason_RebornEffect = 1,
	ECameraModeReason_Redeploy = 2,
	ECameraModeReason_GamePlay = 3,
	ECameraModeReason_UserXppChange = 4,
	ECameraModeReason_Vehicle = 5,
	ECameraModeReason_GamePlayLow = 6,
	ECameraModeReason_MAX = 7
};

// Enum GPGameplay.EStateAudioEventType
enum class EStateAudioEventType : UINT8 {
	None = 0,
	NormalState = 1,
	LowHealth = 2,
	PendingDeath = 3,
	HoldBreath = 4,
	MP_ExitBoundary = 5,
	MP_EnterDeploy = 6,
	Suppressed = 7,
	EStateAudioEventType_MAX = 8
};

// Enum GPGameplay.ECharacterAudioListener
enum class ECharacterAudioListener : UINT8 {
	NoNeeds = 0,
	Myself = 1,
	Teammate = 2,
	CampmateButNotTeammate = 3,
	Enemy = 4,
	ECharacterAudioListener_MAX = 5
};

// Enum GPGameplay.ECharacterAudioPlayMode
enum class ECharacterAudioPlayMode : UINT8 {
	OneShot = 0,
	Loop = 1,
	State = 2,
	ECharacterAudioPlayMode_MAX = 3
};

// Enum GPGameplay.ECharacterAudioType
enum class ECharacterAudioType : UINT8 {
	Pending = 0,
	Breath_Sprint = 1,
	Breath_Tired = 2,
	Breath_Recover = 3,
	Breath_Dying = 4,
	Breath_Injured_Heavy = 5,
	Breath_Injured_Light = 6,
	Breath_CloseMouth = 7,
	Reaction_Die = 8,
	Reaction_Pain = 9,
	Reaction_Bleeding = 10,
	Reaction_ArmBroken = 11,
	Reaction_LegBroken = 12,
	Reaction_BodyBroken = 13,
	Reaction_Yell = 14,
	Reaction_Hit = 15,
	Reaction_Healed = 16,
	State_Default = 17,
	State_Injured = 18,
	Ability_VO1 = 19,
	Ability_VO2 = 20,
	Ability_VO3 = 21,
	Ability_VO4 = 22,
	Ability_VO5 = 23,
	Ability_VO6 = 24,
	Ability_VO7 = 25,
	Ability_VO8 = 26,
	Ability_VO9 = 27,
	Ability_VO10 = 28,
	Ability_VO11 = 29,
	Ability_VO12 = 30,
	Ability_VO13 = 31,
	Ability_VO14 = 32,
	Ability_VO15 = 33,
	Ability_VO16 = 34,
	Ability_VO17 = 35,
	Ability_VO18 = 36,
	Ability_VO19 = 37,
	Ability_VO20 = 38,
	PassiveTrigger = 39,
	UltimateSmokePropUse = 40,
	UltimateSmokePropFinished = 41,
	PropEliminate = 42,
	PropAssist = 43,
	UltimateFullyCharged = 44,
	UltimateUse = 45,
	UltimateOngoing = 46,
	UltimateEliminate = 47,
	UltimateEliminateAssist = 48,
	UltimateCure = 49,
	UltimateFullyCharged401 = 50,
	UltimateUse401 = 51,
	UltimateOngoing401 = 52,
	UltimateHit401 = 53,
	UltimateAssist401 = 54,
	Begin_Throw_Throwables = 55,
	EnterSmoke_Cough = 56,
	Enemy_Explosive_Nearby = 57,
	CQB_FullyCharged = 58,
	CQB_UseSkill = 59,
	CQB_Kill = 60,
	CQB_KillAssist = 61,
	PassiveTrigger_C201 = 62,
	PropUse_C201ElectricBow = 63,
	PropHit_C201ElectricBow = 64,
	PropAssist_C201ElectricBow = 65,
	PropEliminate_C201ElectricBow = 66,
	UltimateFullyCharged_C201ProxSensorBow = 67,
	UltimateUse_C201ProxSensorBow = 68,
	UltimateOngoing_C201ProxSensorBow = 69,
	UltimateEliminate_C201ProxSensorBow = 70,
	UltimateAssist_C201ProxSensorBow = 71,
	UltimateHit_C201ProxSensorBow = 72,
	PropUse_C301Launcer = 73,
	PropHit_C301Launcer = 74,
	PropAssist_C301Launcer = 75,
	PropEliminate_C301Launcer = 76,
	Passive_Trigger_Throw = 77,
	Prop_Hit_Mine = 78,
	Prop_Use_Mine = 79,
	Prop_Eliminate_Mine = 80,
	Prop_UseSupportSmoke = 81,
	Prop_UseAssultSmoke = 82,
	Prop_StartHoldBreath = 83,
	Prop_EndHoldBreath = 84,
	Prop_StartUnHoldBreath = 85,
	NONE = 86,
	NumMax = 87,
	ECharacterAudioType_MAX = 88
};

// Enum GPGameplay.EBuffRemovedReason
enum class EBuffRemovedReason : UINT8 {
	ENormal = 0,
	EDead = 1,
	EBuffRemovedReason_MAX = 2
};

// Enum GPGameplay.EGPCharacterHiddenReason
enum class EGPCharacterHiddenReason : UINT8 {
	EGPCharacterHidden_WaitSOLStart = 0,
	EGPCharacterHidden_SOLFinishGame = 1,
	EGPCharacterHidden_MPFinishGame = 2,
	EGPCharacterHidden_MPDeathViewOther = 3,
	EGPCharacterHidden_Vehicle = 4,
	EGPCharacterHidden_VehicleCarryBody = 5,
	EGPCharacterHidden_DeathShowDeadBox = 6,
	EGPCharacterHidden_IsOfflineCharacter = 7,
	EGPCharacterHidden_MAX = 8
};

// Enum GPGameplay.ECharacterQTEStateRight
enum class ECharacterQTEStateRight : UINT8 {
	QTERight_None = 0,
	QTERight_MineActivate = 1,
	QTERight_SelfCure = 2,
	QTERight_Assassinate = 4,
	QTERight_Rescue = 8,
	QTERight_MAX = 9
};

// Enum GPGameplay.ECharacterQTEStateLeft
enum class ECharacterQTEStateLeft : UINT8 {
	QTELeft_None = 0,
	QTELeft_MineRecycle = 1,
	QTELeft_Carry = 2,
	QTELeft_MAX = 3
};

// Enum GPGameplay.EHeroResourceState
enum class EHeroResourceState : UINT8 {
	AS_Init = 0,
	AS_Invalid = 1,
	AS_Loading = 2,
	AS_Loaded = 3,
	AS_MAX = 4
};

// Enum GPGameplay.ECollisionState
enum class ECollisionState : UINT8 {
	None = 0,
	Sol_DefaultSpawn = 1,
	Sol_ImpendingDeath = 2,
	Sol_CarryBody = 3,
	Sol_BeAssassinate = 4,
	Sol_Dying = 5,
	Sol_MatchOver = 6,
	Breakthrough_DefaultSpawn = 7,
	Breakthrough_ImpendingDeath = 8,
	Breakthrough_CarryBody = 9,
	Breakthrough_BeAssassinate = 10,
	Breakthrough_Dying = 11,
	Breakthrough_MatchOver = 12,
	Prone_Default = 13,
	Prone_Prone = 14,
	Prone_ImpendingDeath_Sol = 15,
	Prone_ImpendingDeath_Breakthrough = 16,
	Prone_BeCarry = 17,
	Prone_BeAssassinate = 18,
	Prone_Dying = 19,
	ECollisionState_MAX = 20
};

// Enum GPGameplay.EProcessInputCompReason
enum class EProcessInputCompReason : UINT8 {
	EProcessInputReason_WatchingCCTV = 1,
	EProcessInputReason_WeaponAssembler = 2,
	EProcessInputReason_HALLDISPLAY = 4,
	EProcessInputReason_MAX = 5
};

// Enum GPGameplay.EAICharacterTag
enum class EAICharacterTag : UINT8 {
	EAICharacterTag_None = 0,
	EAICharacterTag_Elite = 1,
	EAICharacterTag_Civilian = 2,
	EAICharacterTag_Sniper = 3,
	EAICharacterTag_Shield = 4,
	EAICharacterTag_HeavyArmor = 5,
	EAICharacterTag_Paratrooper = 6,
	EAICharacterTag_Melee = 7,
	EAICharacterTag_Firebat = 8,
	EAICharacterTag_RPG = 9,
	EAICharacterTag_Boss = 10,
	EAICharacterTag_BoyBand = 11,
	EAICharacterTag_Crocodile = 12,
	EAICharacterTag_NonHuman = 13,
	EAICharacterTag_MAX = 14
};

// Enum GPGameplay.EStateInterruptReason
enum class EStateInterruptReason : UINT8 {
	Lean = 0,
	Sliding = 1,
	NotStandPose = 2,
	ForbidReasonMax = 3,
	EStateInterruptReason_MAX = 4
};

// Enum GPGameplay.EOverrideMovementType
enum class EOverrideMovementType : UINT8 {
	EOperateMovementType_NoMove = 0,
	EOperateMovementType_Walk = 1,
	EOperateMovementType_Run = 2,
	EOperateMovementType_Sprint = 3,
	EOperateMovementType_None = 4,
	EOperateMovementType_MAX = 5
};

// Enum GPGameplay.EOperateMovementType
enum class EOperateMovementType : UINT8 {
	EOperateMovementType_None = 0,
	EOperateMovementType_NoMove = 1,
	EOperateMovementType_NormalRun = 2,
	EOperateMovementType_NoMoveAndNoBasePoseSwitch = 3,
	EOperateMovementType_MAX = 4
};

// Enum GPGameplay.EFSMForbidReason
enum class EFSMForbidReason : UINT8 {
	EFR_Default = 0,
	EFR_Sprint = 1,
	EFR_Vault = 2,
	EFR_Reload = 3,
	EFR_Jump = 4,
	EFR_ProneFire = 5,
	EFR_FreeLook = 6,
	EFR_ImpendingDeath = 7,
	EFR_Operate = 8,
	EFR_Aim = 9,
	EFR_QuickThrow = 10,
	EFR_Prone = 11,
	EFR_Fire = 12,
	EFR_Sequence = 13,
	EFR_Vehicle = 14,
	EFR_Burden = 15,
	EFR_Death = 16,
	EFR_ClimbLadder = 17,
	EFR_WeaponState = 18,
	EFR_UseTelescope = 19,
	EFR_Monitor = 20,
	EFR_RelaxIde = 21,
	EFR_CutScene = 22,
	EFR_BeHit = 23,
	EFR_UseStarApp = 24,
	EFR_SceneWeapon = 25,
	EFR_StaminaLow = 26,
	EFR_OnFlyBase = 27,
	EFR_Assassinate = 28,
	EFR_BeAssassinate = 29,
	EFR_UsingSkill = 30,
	EFR_SearchItem = 31,
	EFR_FallHigh = 32,
	EFR_UseZipline = 33,
	EFR_Parachute = 34,
	EFR_SlidingTackle = 35,
	EFR_TutorialRotate = 36,
	EFR_TutorialMove = 37,
	EFR_TutorialShoot = 38,
	EFR_InSafeHouse = 39,
	EFR_OpenInteractUI = 40,
	EFR_RaiseWatch = 41,
	EFR_PreViewActor = 42,
	EFR_FireModePlacement = 43,
	EFR_WeaponInspect = 44,
	EFR_HighValueItemInspect = 45,
	EFR_WeaponBipodDeploy = 46,
	EFR_BowArrow = 47,
	EFR_SkillRTT = 48,
	EFR_SkillFireRTT = 49,
	EFR_ClientPreStateRTT = 50,
	EFR_WaitingStart = 51,
	EFR_SeamlessShow = 52,
	EFR_Firefighting = 53,
	EFR_ApplySpray = 54,
	EFR_OneHandedGesture = 55,
	EFR_TwoHandedGesture = 56,
	EFR_UsingDoubleHandsSkill = 57,
	EFR_UsingRightHandSkill = 58,
	EFR_UsingLeftHandSkill = 59,
	EFR_UsingLegsSkill = 60,
	EFR_UsingSpecialSkill = 61,
	EFR_Knockback = 62,
	EFR_WeaponPreFire = 63,
	EFR_WeaponFire = 64,
	EFR_Rescue = 65,
	EFR_RushMoveEnd = 66,
	EFR_UsingDoubleHandsSkillAction = 67,
	EFR_UsingRightHandSkillAction = 68,
	EFR_UsingLeftHandSkillAction = 69,
	EFR_UsingLegsSkillAction = 70,
	EFR_UsingSpecialSkillAction = 71,
	EFR_OpenBag = 72,
	EFR_Lean = 73,
	EFR_VehicleLockCamera = 74,
	EFR_PlayingMedia = 75,
	EFR_Reborn = 76,
	ForbidReasonMAX = 77,
	EFSMForbidReason_MAX = 78
};

// Enum GPGameplay.ECharacterStateMask
enum class ECharacterStateMask : UINT8 {
	None = 0,
	CanMove = 1,
	CanRotate = 2,
	CanCharacterRotate = 3,
	CanCrouch = 4,
	CanProne = 5,
	CanJump = 6,
	CanVault = 7,
	CanReload = 8,
	CanAimOn = 9,
	CanAimOff = 10,
	CanSwitchWeapon = 11,
	CanFire = 12,
	CanAutoChangeClip = 13,
	CanWeaponInspect = 14,
	CanHighValueItemInspect = 15,
	CanWeaponBolt = 16,
	CanWeaponBipodDeploy = 17,
	CanSkillSwtichWeapon = 18,
	CanDiscardOrEquipWeapon = 19,
	CanUseMachineGun = 20,
	CanUseItem = 21,
	CanOperate = 22,
	DisableWhitelistOperate = 23,
	CanLooting = 24,
	CanDetectInteractor = 25,
	CanDetectRescue = 26,
	CanUserChangeXPP = 27,
	CanSwitchHelmetMask = 28,
	PauseSwitchHelmetMask = 29,
	CanDrive = 30,
	CanPlayTacticalAction = 31,
	CanClimbLadder = 32,
	CanUseTelescope = 33,
	CanChangeWeaponMode = 34,
	CanShowInteractUI = 35,
	CanLean = 36,
	CanBeHit = 37,
	CanUseSkill = 38,
	CanAssassinate = 39,
	CanCarrybody = 40,
	CanParachute = 41,
	CanSlidingTackle = 42,
	CanUseZipline = 43,
	CanPlayMarkingAnim = 44,
	CanFirefighting = 45,
	CanApplySpray = 46,
	CanPlayOneHandedGesture = 47,
	CanPlayTwoHandedGesture = 48,
	CanNotBlockFriend = 49,
	CanStandUp = 50,
	CanProneMove = 51,
	CanProneStandUp = 52,
	CanSprint = 53,
	CanBeBreakByOtherSkill = 54,
	CanUseSpecialSkill = 55,
	CanUseLeftHandSkill = 56,
	CanUseRightHandSkill = 57,
	CanUseLegSkill = 58,
	CanSkillWeaponFire = 59,
	CanNormalWeaponFire = 60,
	CanReloadLogic = 61,
	CanRaiseWatch = 62,
	All = 63,
	ECharacterStateMask_MAX = 64
};

// Enum GPGameplay.EForbidMoveReason
enum class EForbidMoveReason : UINT8 {
	VaultAndClimb = 0,
	AbilityForbidMove = 1,
	InteractForbidMove = 2,
	InteractTrackerForbidMove = 3,
	HUDForbidMove = 4,
	SettlementForbidMove = 5,
	FSM = 6,
	TransitionMove = 7,
	ForbidMoveReasonNum = 8,
	EForbidMoveReason_MAX = 9
};

// Enum GPGameplay.EMovementFailureReason
enum class EMovementFailureReason : UINT8 {
	MovementFailureReason_None = 0,
	MovementFailureReason_AlreadyInState = 1,
	MovementFailureReason_NotSupport = 2,
	MovementFailureReason_TooFrequent = 3,
	MovementFailureReason_SimulatingPhysics = 4,
	MovementFailureReason_Swimming = 5,
	MovementFailureReason_UsingItem = 6,
	MovementFailureReason_InWeakStatus = 7,
	MovementFailureReason_NotPassCollisionTest = 8,
	MovementFailureReason_TouchWaterVolume = 9,
	MovementFailureReason_IsInKeepPreFireState = 10,
	MovementFailureReason_CanNotStandNow = 11,
	MovementFailureReason_CanNotProneNow = 12,
	MovementFailureReason_Falling = 13,
	MovementFailureReason_MAX = 14
};

// Enum GPGameplay.EPlayerScoreReturnType
enum class EPlayerScoreReturnType : UINT8 {
	PlayerScoreReturnType_None = 0,
	PlayerScoreReturnType_RebornFlag = 1,
	PlayerScoreReturnType_Rescue = 2,
	PlayerScoreReturnType_DriveVehicle = 3,
	PlayerScoreReturnType_TeamLastOneRedeploy = 4,
	PlayerScoreReturnType_MAX = 5
};

// Enum GPGameplay.EPlayerLeanType
enum class EPlayerLeanType : UINT8 {
	PlayerLeanType_NotLean = 0,
	PlayerLeanType_LeftLean = 1,
	PlayerLeanType_RightLean = 2,
	PlayerLeanType_Toggle = 16,
	PlayerLeanType_MAX = 17
};

// Enum GPGameplay.ESwimImmediateAudioType
enum class ESwimImmediateAudioType : UINT8 {
	SwimImmediateAudioType_None = 0,
	SwimImmediateAudioType_Human = 1,
	SwimImmediateAudioType_Vehicle = 2,
	SwimImmediateAudioType_MAX = 3
};

// Enum GPGameplay.ESwimStateAudioType
enum class ESwimStateAudioType : UINT8 {
	SwimStateAudioType_None = 0,
	SwimStateAudioType_AboveWater = 1,
	SwimStateAudioType_BelowWater = 2,
	SwimStateAudioType_MAX = 3
};

// Enum GPGameplay.EStaminaExclusiveChangeType
enum class EStaminaExclusiveChangeType : UINT8 {
	EStaminaExclusiveChange_Normal = 0,
	EStaminaExclusiveChange_Sprint = 1,
	EStaminaExclusiveChange_StandRun = 2,
	EStaminaExclusiveChange_SuperSprint = 3,
	EStaminaExclusiveChange_MAX = 4
};

// Enum GPGameplay.EStaminaIndependentChangeType
enum class EStaminaIndependentChangeType : UINT8 {
	EStaminaIndependentChange_None = 0,
	EStaminaIndependentChange_Jump = 1,
	EStaminaIndependentChange_Vault_One = 2,
	EStaminaIndependentChange_Vault_Two = 3,
	EStaminaIndependentChange_Vault_Three = 4,
	EStaminaIndependentChange_Vault_Four = 5,
	EStaminaIndependentChange_SlideTackle = 6,
	EStaminaIndependentChange_StandToProne = 7,
	EStaminaIndependentChange_StandToCrouch = 8,
	EStaminaIndependentChange_CrouchToStand = 9,
	EStaminaIndependentChange_CrouchToProne = 10,
	EStaminaIndependentChange_ProneToCrouch = 11,
	EStaminaIndependentChange_ProneToStand = 12,
	EStaminaIndependentChange_SkillAssaultAward = 13,
	EStaminaIndependentChange_SkillAssaultStart = 14,
	EStaminaIndependentChange_MAX = 15
};

// Enum GPGameplay.ECampNum
enum class ECampNum : UINT8 {
	ECamp_None = 0,
	ECamp_Player = 1,
	ECamp_PlayerEnemy = 2,
	ECamp_Custom1 = 3,
	ECamp_MAX = 4
};

// Enum GPGameplay.ECharacterGender
enum class ECharacterGender : UINT8 {
	CharacterGender_Male = 0,
	CharacterGender_Female = 1,
	CharacterGender_MAX = 2
};

// Enum GPGameplay.ECharacterDamagePartsName
enum class ECharacterDamagePartsName : UINT8 {
	None = 0,
	Leg = 1,
	LegUpper = 2,
	Arm = 3,
	ArmUpper = 4,
	Head = 5,
	Thorx = 6,
	ThorxUpper = 7,
	ECharacterDamagePartsName_MAX = 8
};

// Enum GPGameplay.ESetCharacterPositionAndRep2ClientReason
enum class ESetCharacterPositionAndRep2ClientReason : UINT8 {
	ENone = 0,
	ERedeploy = 1,
	ERaidResetHasVechile = 2,
	ESetCharacterPositionAndRep2ClientReason_MAX = 3
};

// Enum GPGameplay.ERedeployStateFuture
enum class ERedeployStateFuture : UINT8 {
	Idle = 0,
	Start = 1,
	FallDown = 2,
	TurnCameraToEnemy = 3,
	FovZoomOut = 4,
	KillerMark = 5,
	FovZoomIn = 6,
	TurnCameraToSelf = 7,
	Rescue = 8,
	Rising = 9,
	HighView = 10,
	WaitLoadCollision = 11,
	WaitPreMatch = 12,
	Landing = 13,
	RedeployEnd = 14,
	ERedeployStateFuture_MAX = 15
};

// Enum GPGameplay.ECharacterBaseState
enum class ECharacterBaseState : UINT8 {
	NormalFight = 0,
	SafeHouse = 1,
	ECharacterBaseState_MAX = 2
};

// Enum GPGameplay.VerifyClientMoveResult
enum class VerifyClientMoveResult : UINT8 {
	Invalid = 0,
	Success = 1,
	SuccessCustomMove = 2,
	Fail_Block = 3,
	Fail_Mode = 4,
	Fail_Velocity = 5,
	Fail_JumpCount = 6,
	Fail_ZAxis = 7,
	Fail_MaxJumpHeight = 8,
	Fail_VelocityZ = 9,
	Fail_Distance = 10,
	VerifyClientMoveResult_MAX = 11
};

// Enum GPGameplay.EGPPlayerMoveMode
enum class EGPPlayerMoveMode : UINT8 {
	None = 0,
	StandStill = 1,
	Walk = 2,
	Run = 3,
	Sprint = 4,
	EGPPlayerMoveMode_MAX = 5
};

// Enum GPGameplay.EGPCustomMovementType
enum class EGPCustomMovementType : UINT8 {
	GPCustomMovementType_None = 0,
	GPCustomMovementType_Vaulting = 1,
	GPCustomMovementType_Climbing = 2,
	GPCustomMovementType_Repel = 3,
	GPCustomMovementType_GrapplingHook = 4,
	GPCustomMovementType_ClimbingLadder = 5,
	GPCustomMovementType_StackClimb = 6,
	GPCustomMovementType_SlidingTackle = 7,
	GPCustomMovementType_ClassicTransfromReplicate = 8,
	GPCustomMovementType_Parachute = 9,
	GPCustomMovementType_Assassinate = 10,
	GPCustomMovementType_Zipline = 11,
	GPCustomMovementType_PlayerParachute = 12,
	GPCustomMovementType_Gliding = 13,
	GPCustomMovementType_Interactor = 14,
	GPCustomMovementType_Pushed = 15,
	GPCustomMovementType_Rescue = 16,
	GPCustomMovementType_BeingRescue = 17,
	GPCustomMovementType_TransitionToSequence = 18,
	GPCustomMovementType_Rush = 19,
	GPCustomMovementType_KnockBack = 20,
	GPCustomMovementType_CrocodileBite = 21,
	GPCustomMovementType_BeAssassinate = 22,
	GPCustomMovementType_MAX = 23
};

// Enum GPGameplay.EGPMoveDebug
enum class EGPMoveDebug : UINT8 {
	GPMoveDebug_None = 0,
	GPMoveDebug_Prone = 1,
	GPMoveDebug_Penetration = 2,
	GPMoveDebug_MoveAlong = 3,
	GPMoveDebug_ResetWalkingPosition = 4,
	GPMoveDebug_DrawServerPhysicCheck = 5,
	GPMoveDebug_MAX = 6
};

// Enum GPGameplay.EGPMovementType
enum class EGPMovementType : UINT8 {
	MovementType_None = 0,
	MovementType_Walk = 1,
	MovementType_Fall = 2,
	MovementType_Swim = 3,
	MovementType_Fly = 4,
	MovementType_Sprint = 5,
	MovementType_SilentWalk = 6,
	MovementType_HalfSquatWalk = 7,
	MovementType_MAX = 8
};

// Enum GPGameplay.EAbilityVehicleDestroyReason
enum class EAbilityVehicleDestroyReason : UINT8 {
	Boom = 0,
	EmptyHealth = 1,
	OwnerDie = 2,
	RetrieveItems = 3,
	Power = 4,
	EAbilityVehicleDestroyReason_MAX = 5
};

// Enum GPGameplay.EAudioEventType
enum class EAudioEventType : UINT8 {
	None = 0,
	StandToCrouch = 1,
	StandToProne = 2,
	CrouchToStand = 3,
	CrouchToProne = 4,
	ProneToStand = 5,
	ProneToCrouch = 6,
	ClimbLadderUp = 7,
	EAudioEventType_MAX = 8
};

// Enum GPGameplay.EGPAnimAssetType
enum class EGPAnimAssetType : UINT8 {
	None = 0,
	AssassinateStand = 1,
	BeAssassinateStand = 2,
	AssassinateProne = 3,
	BeAssassinateProne = 4,
	AssassinateImpendingDeath = 5,
	BeAssassinateImpendingDeath = 6,
	EGPAnimAssetType_MAX = 7
};

// Enum GPGameplay.ECharacterState
enum class ECharacterState : UINT8 {
	CharacterState_None = 0,
	CharacterState_Stand = 1,
	CharacterState_Crouch = 2,
	CharacterState_Prone = 3,
	CharacterState_SilentWalk = 4,
	CharacterState_Zipline = 5,
	CharacterState_Peek = 6,
	CharacterState_Jump = 7,
	CharacterState_Firing = 8,
	CharacterState_Zooming = 9,
	CharacterState_Reload = 10,
	CharacterState_SwitchWeapon = 11,
	CharacterState_Inspect = 12,
	CharacterState_Skill = 13,
	CharacterState_SprayPaint = 14,
	CharacterState_HandGesture = 15,
	CharacterState_LookWatch = 16,
	CharacterState_GetKill = 17,
	CharacterState_MAX = 18
};

// Enum GPGameplay.EItemCondition
enum class EItemCondition : UINT8 {
	ItemCondition_None = 0,
	ItemCondition_Empty = 1,
	ItemCondition_CannotUse = 2,
	ItemCondition_NoSpace = 3,
	ItemCondition_MAX = 4
};

// Enum GPGameplay.EItemType
enum class EItemType : UINT8 {
	None = 0,
	Spray = 1,
	Voice = 2,
	OneHandedGesture = 3,
	TwoHandedGesture = 4,
	Emote = 5,
	EItemType_MAX = 6
};

// Enum GPGameplay.EDestructAnimForwardType
enum class EDestructAnimForwardType : UINT8 {
	Forward = 0,
	Right = 1,
	Up = 2,
	NegativeForward = 3,
	NegativeRight = 4,
	NegativeUp = 5,
	EDestructAnimForwardType_MAX = 6
};

// Enum GPGameplay.EDestructPriorityType
enum class EDestructPriorityType : UINT8 {
	ENormalPriority = 0,
	EHighPriority = 1,
	EDestructPriorityType_MAX = 2
};

// Enum GPGameplay.EDestructPhysicsSimulateType
enum class EDestructPhysicsSimulateType : UINT8 {
	EAnimNodePhysics = 0,
	EGobalPhysics = 1,
	EAsyncPhysics = 2,
	EDestructPhysicsSimulateType_MAX = 3
};

// Enum GPGameplay.EDestructPhysicsType
enum class EDestructPhysicsType : UINT8 {
	ENoPhysics = 0,
	ESimulateWithAnimationSequence = 1,
	ESimulateWithDelay = 2,
	ESimulateImmediateWithForce = 3,
	ESimulateImmediateWithForceInRadius = 4,
	EDestructPhysicsType_MAX = 5
};

// Enum GPGameplay.EDestructState
enum class EDestructState : UINT8 {
	ENotDestructed = 0,
	EDamaged = 1,
	EDestroying = 2,
	EDestructed = 3,
	EDestructState_MAX = 4
};

// Enum GPGameplay.EDestructLoadMode
enum class EDestructLoadMode : UINT8 {
	AsyncLoadWhenTrigger = 0,
	AsyncLoadWhenBeginPlay = 1,
	SyncLoad = 2,
	EDestructLoadMode_MAX = 3
};

// Enum GPGameplay.EAIAdditiveBehavior
enum class EAIAdditiveBehavior : UINT8 {
	None = 0,
	AimTarget = 1,
	GunShooting = 2,
	ChangeClip = 3,
	Speaking = 4,
	SpotTurn = 5,
	ProneRotator = 6,
	AdditiveGunPos = 7,
	MAX = 8
};

// Enum GPGameplay.EAILeisureMovementType
enum class EAILeisureMovementType : UINT8 {
	DefualtType = 0,
	SpecialType01 = 1,
	SpecialType02 = 2,
	TYPE_MAX = 3,
	EAILeisureMovementType_MAX = 4
};

// Enum GPGameplay.EGPCharacterMoveDirStateType
enum class EGPCharacterMoveDirStateType : UINT8 {
	Forward = 0,
	Backward = 1,
	Horizontal = 2,
	EGPCharacterMoveDirStateType_MAX = 3
};

// Enum GPGameplay.EGPCharacterInCoverPoseType
enum class EGPCharacterInCoverPoseType : UINT8 {
	None = 0,
	LeftLow = 1,
	RightLow = 2,
	EGPCharacterInCoverPoseType_MAX = 3
};

// Enum GPGameplay.EGPCharacterPoseStateType
enum class EGPCharacterPoseStateType : UINT8 {
	Stand = 0,
	Crouch = 1,
	Prone = 2,
	Sprint = 3,
	Trott = 4,
	EGPCharacterPoseStateType_MAX = 5
};

// Enum GPGameplay.EGPCharacterAlertStateType
enum class EGPCharacterAlertStateType : UINT8 {
	Normal = 0,
	TrottMove = 1,
	Sight = 2,
	EGPCharacterAlertStateType_MAX = 3
};

// Enum GPGameplay.EGPCharacterLeisureMoveType
enum class EGPCharacterLeisureMoveType : UINT8 {
	LeisureMoveType0 = 0,
	LeisureMoveType1 = 1,
	LeisureMoveType2 = 2,
	EGPCharacterLeisureMoveType_MAX = 3
};

// Enum GPGameplay.EGPAICharaLocomotionType
enum class EGPAICharaLocomotionType : UINT8 {
	None = 0,
	Leisure_Patrol = 1,
	Alert_Trot = 2,
	Alert_Walk = 3,
	Alert_Crouch = 4,
	Alert_InLeftCover = 5,
	Alert_InRightCover = 6,
	Alert_Sprint = 7,
	Fight_Crouch = 8,
	Fight_Walk = 9,
	Fight_Run = 10,
	Fight_Sprint = 11,
	Fight_InCoverLeft = 12,
	Fight_InCoverRight = 13,
	EGPAICharaLocomotionType_MAX = 14
};

// Enum GPGameplay.EGPAIMotionType
enum class EGPAIMotionType : UINT8 {
	None = 0,
	Walk = 1,
	Run = 2,
	Sprint = 3,
	Crouch = 4,
	Prone = 5,
	Swim = 6,
	EGPAIMotionType_MAX = 7
};

// Enum GPGameplay.EGPCharacterFightStateType
enum class EGPCharacterFightStateType : UINT8 {
	Fighting = 0,
	Leisure = 1,
	Alert = 2,
	EGPCharacterFightStateType_MAX = 3
};

// Enum GPGameplay.ECharacterGlobalEventDefine
enum class ECharacterGlobalEventDefine : UINT8 {
	ECharacterGlobalEventD_None = 0,
	ECharacterGlobalEvent_ToHandingM2HB = 1,
	ECharacterGlobalEvent_WTF = 2,
	ECharacterGlobalEventDefine_MAX = 3
};

// Enum GPGameplay.EGPFSMNetworkIdentityType
enum class EGPFSMNetworkIdentityType : UINT8 {
	GPFSM_None = 0,
	GPFSM_OnlyServer = 1,
	GPFSM_OnlyClient = 2,
	GPFSM_OnlyAutonomous = 3,
	GPFSM_OnlySimulate = 4,
	GPFSM_BothServerAndAutonomous = 5,
	GPFSM_BothClientAndServer = 6,
	GPFSM_MAX = 7
};

// Enum GPGameplay.EResetWalkingPositionType
enum class EResetWalkingPositionType : UINT8 {
	None = 0,
	PreCheckSuccess = 1,
	Success = 2,
	Fail_CD = 3,
	Fail_NotStuckInGeometry = 4,
	Fail_CheckFail = 5,
	Fail_Disable = 6,
	EResetWalkingPositionType_MAX = 7
};

// Enum GPGameplay.EEndZiplineReason
enum class EEndZiplineReason : UINT8 {
	Arrive = 0,
	Collision = 1,
	Jump = 2,
	Cancel = 3,
	None = 4,
	EEndZiplineReason_MAX = 5
};

// Enum GPGameplay.EBaseTLogDataType
enum class EBaseTLogDataType : UINT8 {
	ENone = 0,
	EServerBegin = 1,
	EDamage = 2,
	EBeDamaged = 3,
	EKillInfo = 4,
	EPropChange = 5,
	EHPGained = 6,
	EServerEnd = 7,
	EClientBegin = 8,
	EBigMapOperate = 9,
	EClientEnd = 10,
	EBaseTLogDataType_MAX = 11
};

// Enum GPGameplay.ELastHitPosition
enum class ELastHitPosition : UINT8 {
	Head = 0,
	Chest = 1,
	Stomach = 2,
	LeftArm = 3,
	RightArm = 4,
	LeftLeg = 5,
	RightLeg = 6,
	None = 99,
	ELastHitPosition_MAX = 100
};

// Enum GPGameplay.ESpecialWeaponMatch
enum class ESpecialWeaponMatch : UINT8 {
	None = 0,
	Sniper = 1,
	ColdArms = 2,
	Richx3 = 3,
	Pistol = 4,
	Shotgun = 5,
	Drug = 6,
	AbilityItem = 7,
	ESpecialWeaponMatch_MAX = 8
};

// Enum GPGameplay.EGameplayType
enum class EGameplayType : UINT8 {
	EGameplayType_None = 0,
	EGameplayType_Normal = 1,
	EGameplayType_BFA = 2,
	EGameplayType_BTT = 3,
	EGameplayType_Max = 4
};

// Enum GPGameplay.EGameTeamMemberCountType
enum class EGameTeamMemberCountType : UINT8 {
	EGameTeamMemberCountType_None = 0,
	EGameTeamMemberCountType_2 = 1,
	EGameTeamMemberCountType_3 = 2,
	EGameTeamMemberCountType_5 = 4,
	EGameTeamMemberCountType_6 = 5,
	EGameRoomType_Max = 6,
	EGameTeamMemberCountType_MAX = 7
};

// Enum GPGameplay.EGameRoomType
enum class EGameRoomType : UINT8 {
	EGameRoomType_None = 0,
	EGameRoomType_Normal = 1,
	EGameRoomType_Rank = 2,
	EGameRoomType_Custom = 3,
	EGameRoomType_Max = 4
};

// Enum GPGameplay.EHitEffectType
enum class EHitEffectType : UINT8 {
	HitEffectType_None = 0,
	HitEffectType_Animation = 1,
	HitEffectType_Physx = 2,
	HitEffectType_MAX = 3
};

// Enum GPGameplay.EHitDirection
enum class EHitDirection : UINT8 {
	HitDirection_None = 0,
	HitDirection_Front = 1,
	HitDirection_Back = 2,
	HitDirection_Left = 3,
	HitDirection_Right = 4,
	HitDirection_MAX = 5
};

// Enum GPGameplay.EInputDisableReason
enum class EInputDisableReason : UINT8 {
	HUD_EmptyWhiteListBlockAll = 0,
	HUD_NotInWhiteList = 1,
	HUD_InBlackList = 2,
	MainStage = 3,
	PlayMode = 4,
	Dynamic = 5,
	EInputDisableReason_MAX = 6
};

// Enum GPGameplay.EInputActionType
enum class EInputActionType : UINT8 {
	EInputAction_None = 0,
	EInputAction_LeftFireBtnDown = 1,
	EInputAction_LeftFireBtnUp = 2,
	EInputAction_RightFireBtnDown = 3,
	EInputAction_RightFireBtnUp = 4,
	EInputAction_MoveForwardBtnDown = 5,
	EInputAction_MoveForwardBtnUp = 6,
	EInputAction_MoveBackwardBtnDown = 7,
	EInputAction_MoveBackwardBtnUp = 8,
	EInputAction_MoveLeftBtnDown = 9,
	EInputAction_MoveLeftBtnUp = 10,
	EInputAction_MoveRightBtnDown = 11,
	EInputAction_MoveRightBtnUp = 12,
	EInputAction_MoveUpBtnDown = 13,
	EInputAction_MoveUpBtnUp = 14,
	EInputAction_MoveDownBtnDown = 15,
	EInputAction_MoveDownBtnUp = 16,
	EInputAction_MoveRollLeftBtnDown = 17,
	EInputAction_MoveRollLeftBtnUp = 18,
	EInputAction_MoveRollRightBtnDown = 19,
	EInputAction_MoveRollRightBtnUp = 20,
	EInputAction_AirThrottleUpBtnDown = 21,
	EInputAction_AirThrottleUpBtnUp = 22,
	EInputAction_AirThrottleDownBtnDown = 23,
	EInputAction_AirThrottleDownBtnUp = 24,
	EInputAction_AirRollLeftBtnDown = 25,
	EInputAction_AirRollLeftBtnUp = 26,
	EInputAction_AirRollRightBtnDown = 27,
	EInputAction_AirRollRightBtnUp = 28,
	EInputAction_AirPitchUpBtnDown = 29,
	EInputAction_AirPitchUpBtnUp = 30,
	EInputAction_AirPitchDownBtnDown = 31,
	EInputAction_AirPitchDownBtnUp = 32,
	EInputAction_AirYawLeftBtnDown = 33,
	EInputAction_AirYawLeftBtnUp = 34,
	EInputAction_AirYawRightBtnDown = 35,
	EInputAction_AirYawRightBtnUp = 36,
	EInputAction_JumpAndVaultBtnDown = 37,
	EInputAction_JumpAndVaultBtnUp = 38,
	EInputAction_JumpBtnDown = 39,
	EInputAction_JumpBtnUp = 40,
	EInputAction_VaultBtnDown = 41,
	EInputAction_CrouchBtnDown = 42,
	EInputAction_CrouchHoldBtnDown = 43,
	EInputAction_CrouchHoldBtnUp = 44,
	EInputAction_ProneBtnDown = 45,
	EInputAction_ProneHoldBtnDown = 46,
	EInputAction_ProneHoldBtnUp = 47,
	EInputAction_SprintBtnDown = 48,
	EInputAction_SprintBtnUp = 49,
	EInputAction_SilentWalkBtnDown = 50,
	EInputAction_SilentWalkBtnUp = 51,
	EInputAction_PersistMoveBtnDown = 52,
	EInputAction_PersistMoveBtnUp = 53,
	EInputAction_AimBtnDown = 54,
	EInputAction_SideAimBtnDown = 55,
	EInputAction_AimBtnUp = 56,
	EInputAction_SideAimBtnUp = 57,
	EInputAction_ChangeSightBtnDown = 58,
	EInputAction_HoldBreathBtnDown = 59,
	EInputAction_HoldBreathBtnUp = 60,
	EInputAction_ReloadBtnDown = 61,
	EInputAction_ReloadBtnUp = 62,
	EInputAction_SwitchWeaponFireModeBtnDown = 63,
	EInputAction_AbilityDetailBtnUp = 64,
	EInputAction_AbilityDetailBtnDown = 65,
	EInputAction_SkillButtonBtnDown = 66,
	EInputAction_SkillButtonBtnUp = 67,
	EInputAction_AbilityItemBtnDown = 68,
	EInputAction_AbilityItemBtnUp = 69,
	EInputAction_AbilityItemSecondBtnDown = 70,
	EInputAction_AbilityItemSecondBtnUp = 71,
	EInputAction_AbilityTestSpawnBtnDown = 72,
	EInputAction_SkillCustom1BtnDown = 73,
	EInputAction_SkillCustom1BtnUp = 74,
	EInputAction_BattleFieldPropSkillBtnDown = 75,
	EInputAction_BattleFieldPropSkillBtnUp = 76,
	EInputAction_TelescopeBtnDown = 77,
	EInputAction_ChangeXPPBtnDown = 78,
	EInputAction_LeftPeekBtnDown = 79,
	EInputAction_LeftPeekBtnUp = 80,
	EInputAction_RightPeekBtnDown = 81,
	EInputAction_RightPeekBtnUp = 82,
	EInputAction_AssassinateBtnDown = 83,
	EInputAction_AssassinateBtnUp = 84,
	EInputAction_MedicalSyringeBtnDown = 85,
	EInputAction_ZiplineBtnDown = 86,
	EInputAction_RescueBtnDown = 87,
	EInputAction_RescueBtnUp = 88,
	EInputAction_CarryBodyBtnDown = 89,
	EInputAction_DropCarryBodyBtnDown = 90,
	EInputAction_InspectWeaponBtnDown = 91,
	EInputAction_WeaponBipodDeployBtnDown = 92,
	EInputAction_ParachuteBtnDown = 93,
	EInputAction_MarkingBtnDown = 94,
	EInputAction_MarkingBtnUp = 95,
	EInputAction_CommercializationBtnDown = 96,
	EInputAction_CommercializationBtnUp = 97,
	EInputAction_SwitchMouseModeBtnDown = 98,
	EInputAction_SprintKeyboardBtnDown = 99,
	EInputAction_SprintKeyboardBtnUp = 100,
	EInputAction_SilentWalkKeyboardBtnDown = 101,
	EInputAction_SilentWalkKeyboardBtnUp = 102,
	EInputAction_SwitchWeapon1BtnDown = 103,
	EInputAction_SwitchWeapon2BtnDown = 104,
	EInputAction_SwitchWeapon3BtnDown = 105,
	EInputAction_SwitchWeapon4BtnDown = 106,
	EInputAction_SwitchToPreWeaponBtnDown = 107,
	EInputAction_SwitchToNextWeaponBtnDown = 108,
	EInputAction_InteractBtnDown = 109,
	EInputAction_InteractBtnUp = 110,
	EInputAction_Interact2BtnDown = 111,
	EInputAction_Interact2BtnUp = 112,
	EInputAction_MouseScrollUpBtnDown = 113,
	EInputAction_MouseScrollDownBtnDown = 114,
	EInputAction_SwitchTacticalEquipmentBtnUp = 115,
	EInputAction_SwitchTacticalEquipmentBtnDown = 116,
	EInputAction_LootingOpenBagBtnDown = 117,
	EInputAction_LootingOpenHealthTabBtnDown = 118,
	EInputAction_ToggleScoreboardBtnDown = 119,
	EInputAction_ToggleScoreboardBtnUp = 120,
	EInputAction_QuickResYesBtnDown = 121,
	EInputAction_QuickResNoBtnDown = 122,
	EInputAction_ParachuteOpenKeyboardBtnDown = 123,
	EInputAction_ParachuteCloseKeyboardBtnDown = 124,
	EInputAction_PowerFlashOpenKeyboardBtnDown = 125,
	EInputAction_RangeFinderBtnDown = 126,
	EInputAction_OpenMapBtnDown = 127,
	EInputAction_ZoomUpBigMapScaleBtnDown = 128,
	EInputAction_ZoomDownBigMapScaleBtnDown = 129,
	EInputAction_MapLongPressSelectBtnUp = 130,
	EInputAction_MapLongPressSelectBtnDown = 131,
	EInputAction_MapDigitalKey1BtnDown = 132,
	EInputAction_MapDigitalKey2BtnDown = 133,
	EInputAction_MapDigitalKey3BtnDown = 134,
	EInputAction_MapDigitalKey4BtnDown = 135,
	EInputAction_MapKeyUpBtnDown = 136,
	EInputAction_MapKeyDownBtnDown = 137,
	EInputAction_ESCBtnDown = 138,
	EInputAction_CloseDeathDetailBtnDown = 139,
	EInputAction_HideHUDBtnDown = 140,
	EInputAction_ToggleVoiceSpeakingBtnDown = 141,
	EInputAction_KeepVoiceSpeakingBtnDown = 142,
	EInputAction_KeepVoiceSpeakingBtnUp = 143,
	EInputAction_MuteAllBtnDown = 144,
	EInputAction_ChatWindowBtnDown = 145,
	EInputAction_ChangeFOVBtnDown = 146,
	EInputAction_ChangeFovBtnUp = 147,
	EInputAction_TPPRotateCameraBtnDown = 148,
	EInputAction_TPPRotateCameraBtnUp = 149,
	EInputAction_RequestRescueBtnDown = 150,
	EInputAction_RequestRescueBtnUp = 151,
	EInputAction_AbandonRescueBtnDown = 152,
	EInputAction_AbandonRescueBtnUp = 153,
	EInputAction_RouletteLeftBtnDown = 154,
	EInputAction_RouletteMedBtnDown = 155,
	EInputAction_RouletteEquipBtnDown = 156,
	EInputAction_RouletteMedBtnUp = 157,
	EInputAction_RouletteEquipBtnUp = 158,
	EInputAction_CancelRouletteBtnDown = 159,
	EInputAction_ArtillerySupportBtnDown = 160,
	EInputAction_ArtillerySupportBtnUp = 161,
	EInputAction_LocatePlayerBtnDown = 162,
	EInputAction_ToggleLegendsBtnDown = 163,
	EInputAction_VehicleBoostBtnDown = 164,
	EInputAction_VehicleBrakeBtnDown = 165,
	EInputAction_VehicleBrakeBtnUp = 166,
	EInputAction_ChangeVehicleSeat1BtnDown = 167,
	EInputAction_ChangeVehicleSeat2BtnDown = 168,
	EInputAction_ChangeVehicleSeat3BtnDown = 169,
	EInputAction_ChangeVehicleSeat4BtnDown = 170,
	EInputAction_ChangeVehicleSeat5BtnDown = 171,
	EInputAction_ChangeVehicleSeat6BtnDown = 172,
	EInputAction_FirstVehicleSkillBtnDown = 173,
	EInputAction_FirstVehicleSkillBtnUp = 174,
	EInputAction_SecondVehicleSkillBtnDown = 175,
	EInputAction_SecondVehicleSkillBtnUp = 176,
	EInputAction_ThirdVehicleSkillBtnDown = 177,
	EInputAction_ThirdVehicleSkillBtnUp = 178,
	EInputAction_FourthVehicleSkillBtnDown = 179,
	EInputAction_FourthVehicleSkillBtnUp = 180,
	EInputAction_SecondVehicleWeaponFireBtnDown = 181,
	EInputAction_VehicleHeadOutBtnDown = 182,
	EInputAction_VehicleTrumpetBtnDown = 183,
	EInputAction_VehicleTrumpetBtnUp = 184,
	EInputAction_VehicleSwitchXPPBtnDown = 185,
	EInputAction_LeaveVehicleBtnDown = 186,
	EInputAction_LockVehicleCameraBtnDown = 187,
	EInputAction_LockVehicleCameraBtnUp = 188,
	EInputAction_VehicleAimBtnDown = 189,
	EInputAction_VehicleAimBtnUp = 190,
	EInputAction_ToggleWeaponDebugPanelBtnDown = 191,
	EInputAction_GMToggleGhostWalk = 192,
	EInputAction_GMToggleFlyWalk = 193,
	EInputAction_GMAddSpeed100 = 194,
	EInputAction_GMMinusSpeed100 = 195,
	EInputAction_OBCameraSpeedUpBtnDown = 196,
	EInputAction_OBCameraSpeedDownBtnDown = 197,
	EInputAction_OBC_ShowHidePanelBtnDown = 198,
	EInputAction_OBC_CatchMoveRoutePointBtnDown = 199,
	EInputAction_OBC_GenerateMoveRouteBtnDown = 200,
	EInputAction_OBC_ClearMoveRouteBtnDown = 201,
	EInputAction_OBC_CatchFaceRoutePointBtnDown = 202,
	EInputAction_OBC_GenerateFaceRouteBtnDown = 203,
	EInputAction_OBC_ClearFaceRouteBtnDown = 204,
	EInputAction_OBC_ShowHideRouteDebugViewBtnDown = 205,
	EInputAction_OBC_StartMoveCameraBtnDown = 206,
	EInputAction_OBC_UpdateFocusPointBtnDown = 207,
	EInputAction_OBC_LeftBtnClickBtnDown = 208,
	EInputAction_OBC_RightBtnClickBtnDown = 209,
	EInputAction_OBC_SwitchToFreeCameraBtnDown = 210,
	EInputAction_OBC_PrevTeamBtnDown = 211,
	EInputAction_OBC_NextTeamBtnDown = 212,
	EInputAction_OBC_ShowTeamInfoBtnDown = 213,
	EInputAction_OBC_ShowOutLineEffectBtnDown = 214,
	EInputAction_OBC_ShowPlayerMarkerBtnDown = 215,
	EInputAction_WatchFightChangeTargetBtnDown = 216,
	EInputAction_WatchFightExitBtnDown = 217,
	EInputAction_WatchFightReportVoiceBtnDown = 218,
	EInputAction_WatchFightReportBtnDown = 219,
	EInputAction_WatchFightPlayerCardBtnDown = 220,
	EInputAction_WatchFightDeathDetailInfoBtnDown = 221,
	EInputAction_WatchKillCamReplayBtnDown = 222,
	EInputAction_SwitchVehicleWeapon1BtnDown = 223,
	EInputAction_SwitchVehicleWeapon2BtnDown = 224,
	EInputAction_FreeLookaroundModeBtnDown = 225,
	EInputAction_FreeLookaroundModeBtnUp = 226,
	EInputAction_MiniMapScaleChangeBtnDown = 227,
	EInputAction_RangeManageWeaponBtnDown = 228,
	EInputAction_RangeToggleAnalysisPanelBtnDown = 229,
	EInputAction_RangeRefreshAnalysisPanelBtnDown = 230,
	EInputAction_SuperSprintBtnDown = 231,
	EInputAction_SuperSprintBtnUp = 232,
	EInputAction_FirefightingBtnDown = 233,
	EInputAction_FirefightingBtnUp = 234,
	EInputAction_PullOutArrowBtnDown = 235,
	EInputAction_PullOutArrowBtnUp = 236,
	EInputAction_SwitchScrollVehicleWeapon1BtnDown = 237,
	EInputAction_SwitchScrollVehicleWeapon2BtnDown = 238,
	EInputAction_Exit3DSafeHouseBtnDown = 239,
	EInputAction_NumMax = 240,
	EInputAction_MAX = 241
};

// Enum GPGameplay.EBagTabType
enum class EBagTabType : UINT8 {
	EBagTab_Character = 0,
	EBagTab_Health = 1,
	EBagTab_MAX = 2
};

// Enum GPGameplay.EInputAxisType
enum class EInputAxisType : UINT8 {
	EInputAxis_None = 0,
	EInputAxis_TurnAtRate = 1,
	EInputAxis_LookUpAtRate = 2,
	EInputAxis_MoveForward = 3,
	EInputAxis_MoveRight = 4,
	EInputAxis_MoveUp = 5,
	EInputAxis_MoveRoll = 6,
	EInputAxis_AirThrottle = 7,
	EInputAxis_AirPitch = 8,
	EInputAxis_AirRoll = 9,
	EInputAxis_AirYaw = 10,
	EInputAxis_NumMax = 11,
	EInputAxis_MAX = 12
};

// Enum GPGameplay.EKnockbackFromType
enum class EKnockbackFromType : UINT8 {
	None = 0,
	RankSkill_GuidMissle = 1,
	EKnockbackFromType_MAX = 2
};

// Enum GPGameplay.EKnockBackState
enum class EKnockBackState : UINT8 {
	KnockBackState_Undefine = 0,
	KnockBackState_Fly = 1,
	KnockBackState_Fall = 2,
	KnockBackState_GetUp = 3,
	KnockBackState_MAX = 4
};

// Enum GPGameplay.EGPMarkerColorType
enum class EGPMarkerColorType : UINT8 {
	None = 0,
	LocationMarkerEnemyColor = 1,
	EGPMarkerColorType_MAX = 2
};

// Enum GPGameplay.ELowAmmoBubbleSourceType
enum class ELowAmmoBubbleSourceType : UINT8 {
	None = 0,
	AmmoPack = 1,
	ELowAmmoBubbleSourceType_MAX = 2
};

// Enum GPGameplay.ELowHealthBubbleSourceType
enum class ELowHealthBubbleSourceType : UINT8 {
	None = 0,
	HealthPack = 1,
	ELowHealthBubbleSourceType_MAX = 2
};

// Enum GPGameplay.EAutoShowBubbleSourceType
enum class EAutoShowBubbleSourceType : UINT8 {
	None = 0,
	SupportPack = 1,
	SupportBox = 2,
	MedicalGun = 3,
	EAutoShowBubbleSourceType_MAX = 4
};

// Enum GPGameplay.EMarkingChatType
enum class EMarkingChatType : UINT8 {
	Default = 0,
	Location_Normal = 1,
	Location_Enemy = 2,
	Location_Attack = 3,
	Location_Defend = 4,
	Location_BeCareful = 5,
	Item_CommonItem = 6,
	Item_LootingItem = 7,
	Item_Container = 8,
	Item_DyingTeammate = 9,
	Item_DeadBody = 10,
	Item_Weapon = 11,
	Item_EngineerSonicTrap = 12,
	Item_Vehicle = 13,
	Item_TacticalEquip = 14,
	Item_PendingDeathCharacter = 15,
	Item_SectorAnchor = 16,
	Item_MandelBrickInteractor = 17,
	Item_MandelBrickDecipherDevice = 18,
	CancelMarking = 19,
	ReplyRescue = 20,
	Evacuation = 21,
	SafeBox = 22,
	MandelBrick = 23,
	DecipherStation = 24,
	CallForHelp = 25,
	COUNT = 26,
	EMarkingChatType_MAX = 27
};

// Enum GPGameplay.EMarkingItemType
enum class EMarkingItemType : UINT8 {
	None = 0,
	CommonItem = 1,
	LootingItem = 2,
	Container = 3,
	DyingTeammate = 4,
	DeadBody = 5,
	Weapon = 6,
	EngineerSonicTrap = 7,
	Vehicle = 8,
	TacticalEquip = 9,
	PendingDeathCharacter = 10,
	SectorAnchor = 11,
	MandelBrickInteractor = 12,
	MandelBrickDecipherDevice = 13,
	COUNT = 14,
	EMarkingItemType_MAX = 15
};

// Enum GPGameplay.EMarkingLocationType
enum class EMarkingLocationType : UINT8 {
	None = 0,
	NormalLocation = 1,
	Enemy = 2,
	Attack = 3,
	Defend = 4,
	BeCareful = 5,
	COUNT = 6,
	EMarkingLocationType_MAX = 7
};

// Enum GPGameplay.EGameMarkFeature
enum class EGameMarkFeature : UINT8 {
	UpdateDistance = 1,
	UpdateHasCoverBetween = 2,
	UpdateHasAimed = 4,
	UpdateHasAimedByCircle = 8,
	UpdateScaleWithDistance = 16,
	EGameMarkFeature_MAX = 17
};

// Enum GPGameplay.EInteractorMarkerType
enum class EInteractorMarkerType : UINT8 {
	None = 0,
	Interactor_SceneAmmoBox = 1,
	EInteractorMarkerType_MAX = 2
};

// Enum GPGameplay.EMarkingMarkerType
enum class EMarkingMarkerType : UINT8 {
	None = 0,
	PlayerMarker_Location = 1,
	PlayerMarker_Item = 2,
	EMarkingMarkerType_MAX = 3
};

// Enum GPGameplay.EMapMarkerType
enum class EMapMarkerType : UINT8 {
	None = 0,
	MapMarkerNormal = 1,
	Chat_Normal = 2,
	Chat_Item = 3,
	MapMarkerPlayerExit = 4,
	MapMarkerPlayerExitTrigger = 5,
	MapMarkerDoor = 6,
	MapMarkerQuest = 7,
	MapMarkerPOI = 8,
	MapMarkerShopStation = 9,
	MapMarkerHighValueBox = 10,
	MapMarkerContractQuest = 11,
	MapMarkerContractObjection = 12,
	MapMarkerWeaponBlueprintStation = 13,
	MapMarkerSectorAnchor = 14,
	MapMarkerScouter = 15,
	MapMarkerIronGauze = 16,
	EMapMarkerType_MAX = 17
};

// Enum GPGameplay.EQuestMarkerMarkerType
enum class EQuestMarkerMarkerType : UINT8 {
	None = 0,
	Arrive = 1,
	Destroy = 2,
	Protect = 3,
	ProtectWithHP = 4,
	Arrive_Optional = 5,
	Destroy_Optional = 6,
	Protect_Optional = 7,
	ProtectWithHP_Optional = 8,
	NPCTalk = 9,
	TargetTrack = 10,
	NPCTrigger = 11,
	RPGTrack = 12,
	Vehicle = 13,
	Hostage = 14,
	MarkerNarrow = 15,
	AmmoBox = 16,
	EliteAI = 17,
	InteractiveReading = 18,
	InteractGame = 19,
	Raid_ValkyrieVehicle = 20,
	NPCTeamMate = 21,
	SOLContractKill = 22,
	SOLContractArrive = 23,
	SOLContractInteract = 24,
	SOLContractManning = 25,
	SOLMissionKill = 26,
	SOLMissionArrive = 27,
	SOLMissionInteract = 28,
	EQuestMarkerMarkerType_MAX = 29
};

// Enum GPGameplay.ESOLGameModeMarkerType
enum class ESOLGameModeMarkerType : UINT8 {
	None = 0,
	DoorMarker = 1,
	CountDownReleaseMarker = 2,
	ESOLGameModeMarkerType_MAX = 3
};

// Enum GPGameplay.EBattleFieldGameModeMarkerType
enum class EBattleFieldGameModeMarkerType : UINT8 {
	None = 0,
	SectorAnchorMarker = 1,
	TransferMarker = 2,
	SupportSkillMarker = 3,
	BattleFieldCampSectorMarker = 4,
	EBattleFieldGameModeMarkerType_MAX = 5
};

// Enum GPGameplay.ETacticalEquipmentMarkerType
enum class ETacticalEquipmentMarkerType : UINT8 {
	None = 0,
	CommonTacticalEquipmentMarker = 1,
	RebornFlagMarker = 2,
	VehicleRebornFlagMarker = 3,
	AmmoBoxMarker = 4,
	SonicTrapMarker = 5,
	GunnerRobotMarker = 6,
	HealBoxMarker = 7,
	ADSMarker = 8,
	RecoveryMarker = 9,
	DeadBodyAmmoBoxMarker = 10,
	ThrowBlocking = 11,
	SceneAmmoBoxMarker = 12,
	StingMissleMarker = 13,
	SupportWeaponMarker = 14,
	LaserPointerMarker = 15,
	LaserPointerReciverMarker = 16,
	Detector = 17,
	RankSkillRebornFlagMarker = 18,
	SupportPackTargetMarker = 19,
	AutiTankMine = 20,
	ClaymoreMine = 21,
	ETacticalEquipmentMarkerType_MAX = 22
};

// Enum GPGameplay.EVehicleMarkerType
enum class EVehicleMarkerType : UINT8 {
	None = 0,
	CommonVehicleMarker = 1,
	EVehicleMarkerType_MAX = 2
};

// Enum GPGameplay.ESceneWeaponMarkerType
enum class ESceneWeaponMarkerType : UINT8 {
	None = 0,
	CommonSceneWeaponMarker = 1,
	FixedWeaponAAMarker = 2,
	FixedWeaponMachineGunMarker = 3,
	FixedWeaponShoreMarker = 4,
	ESceneWeaponMarkerType_MAX = 5
};

// Enum GPGameplay.EEnemyCharacterMarkerType
enum class EEnemyCharacterMarkerType : UINT8 {
	None = 0,
	RevealMarker = 1,
	AIBaseMarker = 2,
	AIWarnMarker = 3,
	AimedEnemyPlayerMarker = 4,
	AimedAIMarker = 5,
	EnemyEffectMarker = 6,
	FocusedEnemyMarker = 7,
	KillCamSelfMarker = 8,
	EEnemyCharacterMarkerType_MAX = 9
};

// Enum GPGameplay.EFriendlyCharacterMarkerType
enum class EFriendlyCharacterMarkerType : UINT8 {
	None = 0,
	FriendlyMarker = 1,
	ImpendingDeathMarker = 2,
	DeathMarker = 3,
	OBFriendlyMarker = 4,
	OBImpendingDeathMarker = 5,
	OBDeathMarker = 6,
	BattleFieldOBFriendlyMarker = 7,
	BattleFieldOBImpendingDeathMarker = 8,
	BattleFieldOBDeathMarker = 9,
	OBAIMarker = 10,
	EFriendlyCharacterMarkerType_MAX = 11
};

// Enum GPGameplay.EGPMarkerClassType
enum class EGPMarkerClassType : UINT8 {
	None = 0,
	FriendlyCharacterMarker = 1,
	EnemyCharacterMarker = 2,
	SceneWeaponMarker = 3,
	VehicleMarker = 4,
	TacticalEquipmentMarker = 5,
	BattleFieldGameModeMarker = 6,
	SOLGameModeMarker = 7,
	QuestMarker = 8,
	MapMarker = 9,
	MarkingMarker = 10,
	InteractorMarker = 11,
	EGPMarkerClassType_MAX = 12
};

// Enum GPGameplay.EGPMarkerType
enum class EGPMarkerType : UINT8 {
	None = 0,
	EGPMarkerType_MAX = 1
};

// Enum GPGameplay.EMarkerRefreshFrequencyLevel
enum class EMarkerRefreshFrequencyLevel : UINT8 {
	EveryFrame = 0,
	SuperHighFrequency = 1,
	HighFrequency = 2,
	MidFrequency = 3,
	LowFrequency = 4,
	EMarkerRefreshFrequencyLevel_MAX = 5
};

// Enum GPGameplay.EMarkerCampType
enum class EMarkerCampType : UINT8 {
	None = 0,
	Neutral = 1,
	Campmate = 2,
	Teammate = 3,
	Enemy = 4,
	Self = 5,
	EMarkerCampType_MAX = 6
};

// Enum GPGameplay.EGPMarkerViewStatus
enum class EGPMarkerViewStatus : UINT8 {
	PendingCreate = 0,
	Created = 1,
	EGPMarkerViewStatus_MAX = 2
};

// Enum GPGameplay.EGPMarkedActorStatus
enum class EGPMarkedActorStatus : UINT8 {
	Normal = 0,
	Clipped = 1,
	Destroyed = 2,
	EGPMarkedActorStatus_MAX = 3
};

// Enum GPGameplay.EMarkerUIWigetType
enum class EMarkerUIWigetType : UINT8 {
	None = 0,
	DistanceText = 1,
	NameText = 2,
	Bar = 4,
	Icon = 8,
	All = 15,
	EMarkerUIWigetType_MAX = 16
};

// Enum GPGameplay.ERevealMarkerReason
enum class ERevealMarkerReason : UINT8 {
	None = 0,
	Resident = 1,
	AimReveal = 2,
	FireReveal = 3,
	MarkingReveal = 4,
	LockReveal = 5,
	ERevealMarkerReason_MAX = 6
};

// Enum GPGameplay.ECharacterMarkerState
enum class ECharacterMarkerState : UINT8 {
	None = 0,
	Alive = 1,
	PendingDeath = 2,
	FirstDeath = 3,
	Death = 4,
	ECharacterMarkerState_MAX = 5
};

// Enum GPGameplay.EQuickChatMarkingItemType
enum class EQuickChatMarkingItemType : UINT8 {
	None = 0,
	ThankYou = 1,
	NeedMedic = 2,
	NeedRepair = 3,
	NeedMunitions = 4,
	NeedVehicle = 5,
	EQuickChatMarkingItemType_MAX = 6
};

// Enum GPGameplay.MarkType
enum class MarkType : UINT8 {
	CHARACTER = 0,
	MarkType_MAX = 1
};

// Enum GPGameplay.ENetworkNotifyPriority
enum class ENetworkNotifyPriority : UINT8 {
	NetworkIdentityNotifyPriority_NoUse = 0,
	NetworkIdentityNotifyPriority_Default = 101,
	NetworkIdentityNotifyPriority_Blackboard = 50,
	NetworkIdentityNotifyPriority_ActorRoot = 100,
	NetworkIdentityNotifyPriority_First = 110,
	NetworkIdentityNotifyPriority_Second = 120,
	NetworkIdentityNotifyPriority_Third = 130,
	NetworkIdentityNotifyPriority_Fourth = 140,
	NetworkIdentityNotifyPriority_Fifth = 150,
	NetworkIdentityNotifyPriority_Sixth = 160,
	NetworkIdentityNotifyPriority_Seventh = 170,
	NetworkIdentityNotifyPriority_Eighth = 180,
	NetworkIdentityNotifyPriority_MAX = 181
};

// Enum GPGameplay.ENotifyTeammatesType
enum class ENotifyTeammatesType : UINT8 {
	ENotify_None = 0,
	ENotify_SkillReady = 1,
	ENotify_NumMax = 2,
	ENotify_MAX = 3
};

// Enum GPGameplay.EOutLineScreenEffectStencil
enum class EOutLineScreenEffectStencil : UINT8 {
	None = 0,
	OutLineRed_3P = 30,
	OutLineWhite = 31,
	OutLineGreen = 32,
	OutLineBlue = 33,
	OutLineAI = 34,
	OutLineRed_1P = 35,
	OutLineLocking = 36,
	OutLineLockComplete = 37,
	OutLineGreen_SupportEffect = 38,
	OutLineYellow_Low = 40,
	OutLineYellow_High = 41,
	EOutLineScreenEffectStencil_MAX = 42
};

// Enum GPGameplay.EAbilityItemOutLineType
enum class EAbilityItemOutLineType : UINT8 {
	None = 0,
	OnlyTeamate = 1,
	AllCamp = 2,
	EAbilityItemOutLineType_MAX = 3
};

// Enum GPGameplay.EOutLineEffectType
enum class EOutLineEffectType : int {
	OutLineType_None = 0,
	OutLineType_ProxSensor = 1,
	OutLineType_ArrowMark = 2,
	OutLineType_MedicGun = 4,
	OutLineType_MedicGunHit = 8,
	OutLineType_SupportEffect = 16,
	OutLineType_DyingLockEnemy = 32,
	OutLineType_Breakthrough_Defender = 64,
	OutLineType_DyingShowTeammateCanRescueSelf = 128,
	OutLineType_DyingShowCampMedicCanRescueSelf = 256,
	OutLineType_Locking = 512,
	OutLineType_LockComplete = 1024,
	OutLineType_LockFire = 2048,
	OutLineType_OnlyMarker = 4096,
	OutLineType_SOL_OB_Teammate = 8192,
	OutLineType_SOL_OB_Enemy = 16384,
	OutLineType_SOL_OB_AI = 32768,
	OutLineType_SOL_OB_FreeCamera = 65536,
	OutLineType_MAX = 65537
};

// Enum GPGameplay.EPlayerParachutePhaseType
enum class EPlayerParachutePhaseType : UINT8 {
	None = 0,
	Parachute = 1,
	Glide = 2,
	EPlayerParachutePhaseType_MAX = 3
};

// Enum GPGameplay.EParachutePhaseType
enum class EParachutePhaseType : UINT8 {
	EParachutePhase_None = 0,
	EParachutePhase_Flying = 1,
	EParachutePhase_Landing = 2,
	EParachutePhase_MAX = 3
};

// Enum GPGameplay.EGPPathFollowStatus
enum class EGPPathFollowStatus : UINT8 {
	Init = 0,
	Play = 1,
	Pause = 2,
	Stop = 3,
	EGPPathFollowStatus_MAX = 4
};

// Enum GPGameplay.ECameraModifier
enum class ECameraModifier : UINT8 {
	ECM_Default = 0,
	ECM_Reborn = 1,
	ECM_Redeploy = 2,
	ECM_GunSway = 3,
	ECM_AssaultSpeedUp = 4,
	ECM_Fire = 5,
	ECM_Bleeding = 6,
	ECM_Sprint = 7,
	ECM_CameraShake = 8,
	ECM_FPPFocusActor = 9,
	ECM_AssaultShock = 10,
	ECM_BeHit = 11,
	ECM_WeaponRecoil = 12,
	ECM_InVehicle = 13,
	ECM_ProneImpact = 14,
	ECM_FPPCameraOperate = 15,
	ECM_JoggleCamera = 16,
	ECM_ExplosionBeHit = 17,
	ECM_AssaultSpeedUpMobile = 18,
	ECM_MAX = 19
};

// Enum GPGameplay.EDefaultFOVRenderReason
enum class EDefaultFOVRenderReason : UINT8 {
	EDFRR_Default = 0,
	EDFRR_MachiGun = 1,
	EDFRR_DriveCar = 2,
	EDFRR_ClimbLadder = 3,
	EDFRR_Telescope = 4,
	EDFRR_StarApp = 5,
	EDFRR_GetRopeDown = 6,
	EDFRR_Parachute = 7,
	EDFRR_Interact = 8,
	EDFRR_CrocodileBite = 9,
	EDFRR_Max = 10
};

// Enum GPGameplay.EPOVModifyOption
enum class EPOVModifyOption : UINT8 {
	DoNotModify = 0,
	DefaultValue = 1,
	SetValue = 2,
	EPOVModifyOption_MAX = 3
};

// Enum GPGameplay.ECameraRotationType
enum class ECameraRotationType : UINT8 {
	CameraRot_Final = 0,
	CameraRot_WeaponTrace = 1,
	CameraRot_MAX = 2
};

// Enum GPGameplay.EFovAdjustMode
enum class EFovAdjustMode : UINT8 {
	FovMode_FixY = 0,
	FovMode_FixX = 1,
	FovMode_FixShortSide = 2,
	FovMode_FixLongSide = 3,
	FovMode_MAX = 4
};

// Enum GPGameplay.ECameraSmoothDirection
enum class ECameraSmoothDirection : UINT8 {
	CameraSmoothDirection_None = 0,
	CameraSmoothDirection_OnlyZ = 1,
	CameraSmoothDirection_Full = 2,
	CameraSmoothDirection_MAX = 3
};

// Enum GPGameplay.ECameraSmoothType
enum class ECameraSmoothType : UINT8 {
	CameraSmoothType_None = 0,
	CameraSmoothType_Crouch = 1,
	CameraSmoothType_Prone = 2,
	CameraSmoothType_QuickCrouch = 3,
	CameraSmoothType_Parachute = 4,
	CameraSmoothType_Climb = 5,
	CameraSmoothType_MAX = 6
};

// Enum GPGameplay.EPlayerMarkerScreenPosType
enum class EPlayerMarkerScreenPosType : UINT8 {
	OnAim = 0,
	Inner = 1,
	Middle = 2,
	Outer = 3,
	EPlayerMarkerScreenPosType_MAX = 4
};

// Enum GPGameplay.EPlayerPVSConnectionVisibleReason
enum class EPlayerPVSConnectionVisibleReason : UINT8 {
	None = 0,
	EPlayerPVSConnectionVisible_OutlineEffect = 1,
	EPlayerPVSConnectionVisible_Tracing = 2,
	EPlayerPVSConnectionVisibleReason_MAX = 3
};

// Enum GPGameplay.ETeamIdentity
enum class ETeamIdentity : UINT8 {
	None = 0,
	TeamMember = 1,
	TeamLeader = 2,
	Commander = 3,
	ETeamIdentity_MAX = 4
};

// Enum GPGameplay.EBattleFieldForcesType
enum class EBattleFieldForcesType : UINT8 {
	None = 0,
	Forces_Haavk = 1,
	Forces_GTI = 2,
	EBattleFieldForcesType_MAX = 3
};

// Enum GPGameplay.EPlayerState
enum class EPlayerState : UINT8 {
	PlayerState_NONE = 0,
	PlayerState_Normal = 1,
	PlayerState_Airplane = 2,
	PlayerState_Air = 3,
	PlayerState_Drive = 4,
	PlayerState_Weak = 5,
	PlayerState_OffLine = 6,
	PlayerState_Dead = 7,
	PlayerState_Spectating = 8,
	PlayerState_MAX = 9
};

// Enum GPGameplay.EPlayerGender
enum class EPlayerGender : UINT8 {
	PlayerGender_None = 0,
	PlayerGender_Male = 1,
	PlayerGender_Female = 2,
	PlayerGender_Unknow = 3,
	PlayerGender_Hide = 4,
	PlayerGender_Max = 5
};

// Enum GPGameplay.EHitPartType
enum class EHitPartType : UINT8 {
	Body = 0,
	Head = 1,
	LeftShoulder = 2,
	RightShoulder = 3,
	LeftLeg = 4,
	RightLeg = 5,
	EHitPartType_MAX = 6
};

// Enum GPGameplay.ERagdollAnimType
enum class ERagdollAnimType : UINT8 {
	NormalDeath = 0,
	DropBody = 1,
	ToImpendingDeath = 2,
	VehicleKill = 3,
	ERagdollAnimType_MAX = 4
};

// Enum GPGameplay.ERagdollConstraintAnimType
enum class ERagdollConstraintAnimType : UINT8 {
	Blend = 0,
	Fixed = 1,
	ERagdollConstraintAnimType_MAX = 2
};

// Enum GPGameplay.EGPAIDeathWeaponType
enum class EGPAIDeathWeaponType : UINT8 {
	None = 0,
	Medium = 1,
	Heavy = 2,
	EGPAIDeathWeaponType_MAX = 3
};

// Enum GPGameplay.EWeaponDeathType
enum class EWeaponDeathType : UINT8 {
	None = 0,
	Medium = 1,
	Heavy = 2,
	EWeaponDeathType_MAX = 3
};

// Enum GPGameplay.ESHMoveMode
enum class ESHMoveMode : UINT8 {
	Stand = 0,
	Crouch = 1,
	Prone = 2,
	Sprint = 3,
	SilentWalk = 4,
	InAir = 5,
	ESHMoveMode_MAX = 6
};

// Enum GPGameplay.EFSHForbidReason
enum class EFSHForbidReason : UINT8 {
	EFR_Default = 0,
	EFR_Sprint = 1,
	EFR_Jump = 2,
	EFR_Prone = 3,
	ForbidReasonMAX = 4,
	EFSHForbidReason_MAX = 5
};

// Enum GPGameplay.ESHMovementState
enum class ESHMovementState : UINT8 {
	None = 0,
	Grounded = 1,
	InAir = 2,
	ESHMovementState_MAX = 3
};

// Enum GPGameplay.ESHPlayerMoveMode
enum class ESHPlayerMoveMode : UINT8 {
	None = 0,
	StandStill = 1,
	Walk = 2,
	Run = 3,
	Sprint = 4,
	ESHPlayerMoveMode_MAX = 5
};

// Enum GPGameplay.EGPHudDataType
enum class EGPHudDataType : UINT8 {
	None = 0,
	LocAndRot = 1,
	TeamCharacterHealth = 2,
	VehicleInfo = 3,
	SceneWeaponInfo = 4,
	EGPHudDataType_MAX = 5
};

// Enum GPGameplay.EGPSceneActorType
enum class EGPSceneActorType : UINT8 {
	SA_NONE = 0,
	SA_Character = 1,
	SA_Vehicle = 2,
	SA_SceneWeapon = 3,
	SA_MAX = 4
};

// Enum GPGameplay.EGPSceneActorStateType
enum class EGPSceneActorStateType : UINT8 {
	E_BeginPlay = 0,
	E_EndPlay = 1,
	E_Relevancy = 2,
	E_MAX = 3
};

// Enum GPGameplay.EGPHudDataUpdateFrequency
enum class EGPHudDataUpdateFrequency : UINT8 {
	Freeze = 0,
	LowFrequency = 1,
	MidFrequency = 2,
	HighFrequency = 3,
	EGPHudDataUpdateFrequency_MAX = 4
};

// Enum GPGameplay.ECustomPrimitiveDataFloatDefine
enum class ECustomPrimitiveDataFloatDefine : UINT8 {
	CPD_BaseColorFator = 0,
	CPD_EmissiveFator = 1,
	CPD_DistanceOffset = 2,
	CPD_Blank3 = 3,
	CPD_MAX = 4
};

// Enum GPGameplay.ESkeletalMeshAnimUROActorType
enum class ESkeletalMeshAnimUROActorType : UINT8 {
	Normal = 0,
	Player = 1,
	AI = 2,
	Weapon = 3,
	Equipment = 4,
	Breakable = 5,
	ESkeletalMeshAnimUROActorType_MAX = 6
};

// Enum GPGameplay.EDataFlowType
enum class EDataFlowType : UINT8 {
	None = 0,
	BeDamaged = 1,
	BeHealed = 2,
	BeKnocked = 3,
	BeBuffed = 4,
	BeRemoveBuffed = 5,
	Move = 6,
	Sprint = 7,
	Squat = 8,
	Jump = 9,
	EDataFlowType_MAX = 10
};

// Enum GPGameplay.ESkillConflictResolveType
enum class ESkillConflictResolveType : UINT8 {
	Accept = 0,
	Refuse = 1,
	Break = 2,
	ESkillConflictResolveType_MAX = 3
};

// Enum GPGameplay.EAbiltyTemplateAttachMeshMode
enum class EAbiltyTemplateAttachMeshMode : UINT8 {
	ATTACH_ALL = 0,
	ATTACH_FPP = 1,
	ATTACH_TPP = 2,
	ATTACH_MAX = 3
};

// Enum GPGameplay.EAbilitySpawnState
enum class EAbilitySpawnState : UINT8 {
	Init = 0,
	Request = 1,
	Done = 2,
	Removed = 3,
	EAbilitySpawnState_MAX = 4
};

// Enum GPGameplay.EAbilityTriggerType
enum class EAbilityTriggerType : UINT8 {
	None = 0,
	Then = 1,
	Trigger = 2,
	UnTrigger = 3,
	CallEvent = 4,
	Custom = 5,
	EAbilityTriggerType_MAX = 6
};

// Enum GPGameplay.EAbilityEnterFlag
enum class EAbilityEnterFlag : UINT8 {
	CanNotPlay = 0,
	CanPlay = 1,
	NotifyServerEnter = 2,
	EAbilityEnterFlag_MAX = 3
};

// Enum GPGameplay.EAbilityStateFlag
enum class EAbilityStateFlag : UINT8 {
	RepExcute = 0,
	PredictExcute = 1,
	EAbilityStateFlag_MAX = 2
};

// Enum GPGameplay.EAbilityNodeExcuteType
enum class EAbilityNodeExcuteType : UINT8 {
	Both = 0,
	Server = 1,
	Client = 2,
	Client1P = 3,
	Client3P = 4,
	ServerAndClient1P = 5,
	EAbilityNodeExcuteType_MAX = 6
};

// Enum GPGameplay.ECharacterSkillType
enum class ECharacterSkillType : UINT8 {
	None = 0,
	SkillType1 = 1,
	SkillType2 = 2,
	SkillType3 = 3,
	SkillType4 = 4,
	ECharacterSkillType_MAX = 5
};

// Enum GPGameplay.ELoadResourceType
enum class ELoadResourceType : UINT8 {
	NONE = 0,
	Server = 1,
	Client1P = 2,
	Client3P = 4,
	Server_Client1P = 3,
	Server_Client1P_Client3P = 7,
	ELoadResourceType_MAX = 8
};

// Enum GPGameplay.EAbilitySpawnType
enum class EAbilitySpawnType : UINT8 {
	NONE = 0,
	Server = 1,
	Client1P = 2,
	Client3P = 4,
	EAbilitySpawnType_MAX = 5
};

// Enum GPGameplay.ESkillWeaponSwitchType
enum class ESkillWeaponSwitchType : UINT8 {
	Default = 0,
	Quiet = 1,
	Instant = 2,
	GetWeaponQuiet = 3,
	PutWeaponQuiet = 4,
	GetWeaponFast = 5,
	PutWeaponFast = 6,
	GetAndPutWeaponFast = 7,
	PutQuietAndGetWeaponFast = 8,
	ESkillWeaponSwitchType_MAX = 9
};

// Enum GPGameplay.ESkillStateType
enum class ESkillStateType : UINT8 {
	DoubleHandsSkill = 1,
	LeftHandSkill = 2,
	RightHandSkill = 3,
	LegsSkill = 4,
	SpecialSkill = 5,
	ESkillStateType_MAX = 6
};

// Enum GPGameplay.ESkillBehaviorPreFilterState
enum class ESkillBehaviorPreFilterState : UINT8 {
	ESkillBehavior_Failed = 0,
	ESkillBehavior_FailedWithTips = 1,
	ESkillBehavior_Successed = 2,
	ESkillBehavior_MAX = 3
};

// Enum GPGameplay.ESkillNumType
enum class ESkillNumType : UINT8 {
	UT_Normal = 0,
	UT_Item = 1,
	UT_NoShow = 2,
	UT_MAX = 3
};

// Enum GPGameplay.ESkillUsingType
enum class ESkillUsingType : UINT8 {
	UT_Normal = 0,
	UT_Normal_Charging = 1,
	UT_Select = 2,
	UT_Rocking = 3,
	UT_Disable_Charging = 4,
	UT_Activate = 5,
	UT_Disable_UseCD = 6,
	UT_Disable_EMP = 7,
	UT_Disable_NoCharging = 8,
	UT_MAX = 9
};

// Enum GPGameplay.ESkillItemUsingType
enum class ESkillItemUsingType : UINT8 {
	UT_Normal = 0,
	UT_Selected = 1,
	UT_Activate = 2,
	UT_Disable = 3,
	UT_MAX = 4
};

// Enum GPGameplay.ESkillButtonState
enum class ESkillButtonState : UINT8 {
	ESB_Normal = 0,
	ESB_Cancel = 1,
	ESB_Activate = 2,
	ESB_Disable = 3,
	ESB_Slot1 = 4,
	ESB_Slot2 = 5,
	ESB_Fire = 6,
	ESB_MAX = 7
};

// Enum GPGameplay.ECharacterSkillAbilityMask
enum class ECharacterSkillAbilityMask : UINT8 {
	None = 0,
	CanMove = 1,
	CanRotate = 2,
	CanCharacterRotate = 3,
	CanCrouch = 4,
	CanProne = 5,
	CanJump = 6,
	CanVault = 7,
	CanReload = 8,
	CanAimOn = 9,
	CanUseItem = 10,
	CanOperate = 11,
	CanLooting = 12,
	CanDetectInteractor = 13,
	CanDetectRescue = 14,
	CanUserChangeXPP = 15,
	CanDiscardOrEquipWeapon = 16,
	CanSwitchHelmetMask = 17,
	PauseSwitchHelmetMask = 18,
	CanFire = 19,
	CanDrive = 20,
	CanPlayTacticalAction = 21,
	CanClimbLadder = 22,
	CanUseTelescope = 23,
	CanChangeWeaponMode = 24,
	CanShowInteractUI = 25,
	CanLean = 26,
	CanBeHit = 27,
	CanUseSkill = 28,
	CanAssassinate = 29,
	CanCarrybody = 30,
	CanParachute = 31,
	CanSlidingTackle = 32,
	CanUseZipline = 33,
	CanAutoChangeClip = 34,
	CanWeaponInspect = 35,
	CanHighValueItemInspect = 36,
	CanWeaponBipodDeploy = 37,
	CanNotBlockFriend = 38,
	CanStandUp = 39,
	CanProneMove = 40,
	CanProneStandUp = 41,
	CanSkillSwtichWeapon = 42,
	CanWeaponBolt = 43,
	CanZoom = 44,
	CanSwitchWeapon = 45,
	CanPlayMarkingAnim = 46,
	CanFirefighting = 47,
	CanApplySpray = 48,
	CanPlayOneHandedGesture = 49,
	CanPlayTwoHandedGesture = 50,
	CanSprint = 51,
	CanBeBreakByOtherSkill = 52,
	All = 53,
	ECharacterSkillAbilityMask_MAX = 54
};

// Enum GPGameplay.EFlowDataType
enum class EFlowDataType : UINT8 {
	None = 0,
	Props = 1,
	ActiveSKill = 2,
	Passive = 3,
	EFlowDataType_MAX = 4
};

// Enum GPGameplay.ESkillLogicType
enum class ESkillLogicType : UINT8 {
	None = 0,
	Assault = 1,
	Support = 2,
	Scout = 3,
	Engineer = 4,
	Support101_SkillSmoke = 5,
	Support101_ItemSmoke = 6,
	Support101_Gun = 7,
	Item = 8,
	TestAbility = 9,
	RecycleMine = 10,
	ActivaMine = 11,
	ESkillLogicType_MAX = 12
};

// Enum GPGameplay.ESkillActorEvent
enum class ESkillActorEvent : UINT8 {
	Idle = 0,
	Fire = 1,
	BeginEquipWeapon = 2,
	EndEquipWeapon = 3,
	WeaponChanged = 4,
	ESkillActorEvent_MAX = 5
};

// Enum GPGameplay.ESkillBehavior
enum class ESkillBehavior : UINT8 {
	NormalStart = 0,
	NormalBreak = 1,
	NormalEnd = 2,
	UnNormalEnd = 3,
	Fire = 4,
	FirePress = 5,
	Reload = 6,
	Jump = 7,
	Aim = 8,
	SwtichWeapon = 9,
	AssaultBreak = 10,
	CharacherDie = 11,
	CurWeaponAllAmmoEmpty = 12,
	UseItem = 13,
	SwtichWeaponSuccess = 14,
	BeginEquipWeapon = 15,
	EndEquipWeapon = 16,
	FireUnPress = 17,
	EndFire = 18,
	SupportWeaponFire = 19,
	UseSkill2_Begin = 20,
	UseSkill2_End = 21,
	SkillWeaponAttach = 22,
	SkillWeaponDetach = 23,
	BeginEquip = 24,
	WeaponComponentFire = 25,
	WeaponComponentEndFire = 26,
	WeaponComponentSwitchToIdle = 27,
	TakeDamge = 28,
	EMPBreak = 29,
	ESkillBehavior_MAX = 30
};

// Enum GPGameplay.ESkillBtnCall
enum class ESkillBtnCall : UINT8 {
	None = 0,
	Pressed = 1,
	Released = 2,
	Click = 3,
	LongPress = 4,
	ESkillBtnCall_MAX = 5
};

// Enum GPGameplay.ESkillDragMode
enum class ESkillDragMode : UINT8 {
	None = 0,
	ESkillDragMode_MAX = 1
};

// Enum GPGameplay.ESkillKeyStatus
enum class ESkillKeyStatus : UINT8 {
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

// Enum GPGameplay.ESkillRecycleType
enum class ESkillRecycleType : UINT8 {
	None = 0,
	SuppressionMine = 1,
	AntiTankMine = 2,
	ClaymoreMine = 3,
	ESkillRecycleType_MAX = 4
};

// Enum GPGameplay.ESkillUIState
enum class ESkillUIState : UINT8 {
	UIState_Undefine = 0,
	UIState_Ready = 1,
	UIState_Using = 2,
	UIState_CDing = 3,
	UIState_Disable = 4,
	UIState_Forbit = 5,
	UIState_StateDisable = 6,
	UIState_Score = 7,
	UIState_CampNum = 8,
	UIState_UseNoReady = 9,
	UIState_TemplateNoReady = 10,
	UIState_OtherSkill = 11,
	UIState_Blocked = 12,
	UIState_SwitchWeapon = 13,
	UIState_ZoomWeapon = 14,
	UIState_NoSkill = 15,
	UIState_NoCharacter = 16,
	UIState_TakeDamgeBreak = 17,
	UIState_FireBreak = 18,
	UIState_TeamNum = 19,
	UIState_Sector = 20,
	UIState_LieDownForbidSmoke = 21,
	UIState_MAX = 22
};

// Enum GPGameplay.EThreatMarkerType
enum class EThreatMarkerType : UINT8 {
	Origin = 0,
	Screen = 1,
	EThreatMarkerType_MAX = 2
};

// Enum GPGameplay.EThreatCampType
enum class EThreatCampType : UINT8 {
	Self = 0,
	SameTeam = 1,
	SameCamp = 2,
	Enemy = 3,
	EThreatCampType_MAX = 4
};

// Enum GPGameplay.ESlideBreakType
enum class ESlideBreakType : UINT8 {
	None = 0,
	SlideBreak_Jump = 1,
	SlideBreak_Crouch = 2,
	ESlideBreakType_MAX = 3
};

// Enum GPGameplay.ECharingSlotState
enum class ECharingSlotState : UINT8 {
	Normal = 0,
	Counting = 1,
	Pause = 2,
	Disable = 3,
	ECharingSlotState_MAX = 4
};

// Enum GPGameplay.ESoundVisualizationVerticalType
enum class ESoundVisualizationVerticalType : UINT8 {
	Upper = 0,
	Middle = 1,
	Lower = 2,
	ESoundVisualizationVerticalType_MAX = 3
};

// Enum GPGameplay.EMovementRelatedSpringArmState
enum class EMovementRelatedSpringArmState : UINT8 {
	ESpringArmState_None = 0,
	ESpringArmState_Default = 1,
	ESpringArmState_Crouch = 2,
	ESpringArmState_Prone = 3,
	ESpringArmState_Swim = 4,
	ESpringArmState_Vault = 5,
	ESpringArmState_SlidingTackle = 6,
	ESpringArmState_Parachute = 7,
	ESpringArmState_FPP = 8,
	ESpringArmState_TPPToFPP = 9,
	ESpringArmState_BeCarryBySomeOne = 10,
	ESpringArmState_LeftLeanPeek = 11,
	ESpringArmState_RightLeanPeek = 12,
	ESpringArmState_NPCTalk = 13,
	ESpringArmState_Error = 14,
	ESpringArmState_MAX = 15
};

// Enum GPGameplay.EVoiceOverTriggerType
enum class EVoiceOverTriggerType : UINT8 {
	None = 0,
	OverlapTrigger = 1,
	InteractTrigger = 2,
	EVoiceOverTriggerType_MAX = 3
};

// Enum GPGameplay.ETacticalActionType
enum class ETacticalActionType : UINT8 {
	None = 0,
	RESPECT = 1,
	WINGCHUN = 2,
	ROCKPAPERSCISSORS = 3,
	ETacticalActionType_MAX = 4
};

// Enum GPGameplay.EVaultEndMoveType
enum class EVaultEndMoveType : UINT8 {
	EVaultEndMove_Walking = 0,
	EVaultEndMove_Falling = 1,
	EVaultEndMove_MAX = 2
};

// Enum GPGameplay.EVaultAnimType
enum class EVaultAnimType : UINT8 {
	EVaultAnim_None = 0,
	EVA_StepOn = 1,
	EVA_Vault = 2,
	EVA_Climb = 3,
	EVaultAnimType_MAX = 4
};

// Enum GPGameplay.EObstacleHeightType
enum class EObstacleHeightType : UINT8 {
	EObstacleHeight_None = 0,
	EObstacleHeight_61 = 1,
	EObstacleHeight_91 = 2,
	EObstacleHeight_141 = 3,
	EObstacleHeight_181 = 4,
	EObstacleHeight_Max = 5
};

// Enum GPGameplay.EClimbVaultFailedReason
enum class EClimbVaultFailedReason : UINT8 {
	EChoice_None = 0,
	TouchAngle = 1,
	ObstacleHeight = 2,
	ApexPoint = 3,
	ObstacleAbruptSlope = 4,
	ObstacleWidth = 5,
	CollideOverHead = 6,
	EClimbVaultFailedReason_MAX = 7
};

// Enum GPGameplay.EClimbVaultChoice
enum class EClimbVaultChoice : UINT8 {
	EChoice_None = 0,
	EChoice_Climb = 1,
	EChoice_Vault = 2,
	EChoice_MAX = 3
};

// Enum GPGameplay.EClimbLadderFixTransformType
enum class EClimbLadderFixTransformType : UINT8 {
	EClimbLadderFix_DownStart = 0,
	EClimbLadderFix_DownEnd = 1,
	EClimbLadderFix_TopStart = 2,
	EClimbLadderFix_TopEnd = 3,
	EClimbLadderFix_Nearly = 4,
	EClimbLadderFix_MAX = 5
};

// Enum GPGameplay.EClimbLadderCheckType
enum class EClimbLadderCheckType : UINT8 {
	EClimbLadderCheck_None = 0,
	EClimbLadderCheck_DownEnter = 1,
	EClimbLadderCheck_DownExit = 2,
	EClimbLadderCheck_TopEnter = 3,
	EClimbLadderCheck_TopExit = 4,
	EClimbLadderCheck_JumpEnter = 5,
	EClimbLadderCheck_JumpExit = 6,
	EClimbLadderCheck_Cancel = 7,
	EClimbLadderCheck_MAX = 8
};

// Enum GPGameplay.EVehicleExtraPartType
enum class EVehicleExtraPartType : UINT8 {
	NONE = 0,
	WEAPON = 1,
	SKILL = 2,
	SKIN = 3,
	EVehicleExtraPartType_MAX = 4
};

// Enum GPGameplay.EVehicleResetType
enum class EVehicleResetType : UINT8 {
	NONE = 0,
	STATUS = 1,
	PHYSICS = 2,
	AI = 4,
	PASSENGERS = 8,
	ALL = 15,
	EVehicleResetType_MAX = 16
};

// Enum GPGameplay.EAnimVehicleSeatType
enum class EAnimVehicleSeatType : UINT8 {
	Sitting = 0,
	Stand = 1,
	EAnimVehicleSeatType_MAX = 2
};

// Enum GPGameplay.EWeaponStage
enum class EWeaponStage : UINT8 {
	Dormancy = 0,
	DeActive = 1,
	Active = 2,
	EWeaponStage_MAX = 3
};

// Enum GPGameplay.EWeaponInputOwner
enum class EWeaponInputOwner : UINT8 {
	None = 0,
	Left = 1,
	Right = 2,
	EWeaponInputOwner_MAX = 3
};

// Enum GPGameplay.EZiplineHudStatus
enum class EZiplineHudStatus : UINT8 {
	None = 0,
	Hidden = 1,
	DisplayGetOn = 2,
	DisplayGetOff = 3,
	EZiplineHudStatus_MAX = 4
};

// Enum GPGameplay.EIntCharacterSnap
enum class EIntCharacterSnap : UINT8 {
	None = 0,
	SnapToLatest = 1,
	EIntCharacterSnap_MAX = 2
};

// Enum GPGameplay.EScopeZoomType
enum class EScopeZoomType : UINT8 {
	ScopeZoomTypeDefault = 0,
	ScopeZoomTypeSideAiming = 1,
	ScopeZoomTypeMax = 2,
	EScopeZoomType_MAX = 3
};

// Enum GPGameplay.EMaterialSequencerPlayerPlayStatus
enum class EMaterialSequencerPlayerPlayStatus : UINT8 {
	None = 0,
	Playing = 1,
	EMaterialSequencerPlayerPlayStatus_MAX = 2
};

// Enum GPGameplay.EMaterialSequencerNotifyType
enum class EMaterialSequencerNotifyType : UINT8 {
	None = 0,
	Name = 1,
	EMaterialSequencerNotifyType_MAX = 2
};

// Enum GPGameplay.EMaterialSequenceParamsType
enum class EMaterialSequenceParamsType : UINT8 {
	Float = 0,
	LinearColor = 1,
	Vector = 2,
	EMaterialSequenceParamsType_MAX = 3
};

// Enum GPGameplay.EWeaponAdapterItemType
enum class EWeaponAdapterItemType : UINT8 {
	NONE = 0,
	Foregrip = 1,
	Handguard = 2,
	Receiver = 3,
	PistolGrip = 4,
	Stock = 5,
	GunBarral = 6,
	TacticalDevices = 7,
	EWeaponAdapterItemType_MAX = 8
};

// Enum GPGameplay.EWeaponAdapterHandIKPoseType
enum class EWeaponAdapterHandIKPoseType : UINT8 {
	NONE = 0,
	FPP = 1,
	TPP = 2,
	FPPWithWidget = 3,
	TPPWithWidget = 4,
	FPPNear = 5,
	FPPFar = 6,
	FPPNearWithWidget = 7,
	FPPFarWithWidget = 8,
	FPP_R = 9,
	TPP_R = 10,
	EWeaponAdapterHandIKPoseType_MAX = 11
};

// Enum GPGameplay.EMagazineAnimType
enum class EMagazineAnimType : UINT8 {
	Normal = 0,
	Long = 1,
	Drum = 2,
	Special = 3,
	EMagazineAnimType_MAX = 4
};

// Enum GPGameplay.EMagazineType
enum class EMagazineType : UINT8 {
	NONE = 0,
	NormalMagazine = 1,
	CLMagazine = 2,
	EMagazineType_MAX = 3
};

// Enum GPGameplay.ETextureType
enum class ETextureType : UINT8 {
	NONE = 0,
	BaseColorMap = 1,
	MACMap = 2,
	NRMap = 3,
	ETextureType_MAX = 4
};

// Enum GPGameplay.EWeaponPartAnimFunctionIKType
enum class EWeaponPartAnimFunctionIKType : UINT8 {
	NONE = 0,
	LeftIK = 1,
	RightIK = 2,
	EWeaponPartAnimFunctionIKType_MAX = 3
};

// Enum GPGameplay.EWeaponPartAnimFunctionType
enum class EWeaponPartAnimFunctionType : UINT8 {
	NONE = 0,
	IK_LeftHand = 1,
	Anim_MagBulletChain = 2,
	Anim_BipodUpDown = 3,
	Anim_Overide = 4,
	Anim_Sco = 5,
	Anim_TransparentMag = 6,
	EWeaponPartAnimFunctionType_MAX = 7
};

// Enum GPGameplay.EWeaponPartFunctionType
enum class EWeaponPartFunctionType : UINT8 {
	NONE = 0,
	StaticAttributeModify = 2,
	StaticAttributeReplace = 3,
	StaticArrayAttributeModify = 4,
	EWeaponPartFunctionType_MAX = 5
};

// Enum GPGameplay.EWeaponPartFunctionDynamicType
enum class EWeaponPartFunctionDynamicType : UINT8 {
	NONE = 0,
	AlwaysEffective = 1,
	TacticalEffective = 2,
	EWeaponPartFunctionDynamicType_MAX = 3
};

// Enum GPGameplay.EModularWeaponDescCompare
enum class EModularWeaponDescCompare : UINT8 {
	None = 0,
	Adapter = 1,
	ExtraModel = 2,
	Skin = 4,
	Pendant = 8,
	SolutionCompare = 1,
	AllCompare = 15,
	EModularWeaponDescCompare_MAX = 16
};

// Enum GPGameplay.EModularPartNodeFlagState
enum class EModularPartNodeFlagState : UINT8 {
	Default = 0,
	Simulate = 1,
	RelationSimulate = 2,
	EModularPartNodeFlagState_MAX = 3
};

// Enum GPGameplay.EModularWeaponBuildStage
enum class EModularWeaponBuildStage : UINT8 {
	None = 0,
	WaitLoadDynamicPartsAsset = 1,
	DynamicPartsAssetLoading = 2,
	DynamicPartsAssetLoadFinished = 3,
	ModularBuild = 4,
	EModularWeaponBuildStage_MAX = 5
};

// Enum GPGameplay.EModularWeaponMergeStage
enum class EModularWeaponMergeStage : UINT8 {
	None = 0,
	WaitLoadAllPartsAsset = 1,
	AllPartsAssetLoading = 2,
	AllPartsAssetLoadFnished = 3,
	MeshMerge = 4,
	EModularWeaponMergeStage_MAX = 5
};

// Enum GPGameplay.ETuneSliderType
enum class ETuneSliderType : UINT8 {
	Continue = 0,
	Discrete = 1,
	ETuneSliderType_MAX = 2
};

// Enum GPGameplay.ETuneMeshType
enum class ETuneMeshType : UINT8 {
	None = 0,
	Position = 1,
	Rotation = 2,
	ETuneMeshType_MAX = 3
};

// Enum GPGameplay.EWeaponVoidPartsModelConditionType
enum class EWeaponVoidPartsModelConditionType : UINT8 {
	None = 0,
	Socket = 1,
	AdapterType = 2,
	ItemId = 3,
	EWeaponVoidPartsModelConditionType_MAX = 4
};

// Enum GPGameplay.EWeaponPartMeshType
enum class EWeaponPartMeshType : UINT8 {
	Mesh1p = 0,
	Mesh3P = 1,
	MeshUI = 2,
	EWeaponPartMeshType_MAX = 3
};

// Enum GPGameplay.FPartAddtionRuleType
enum class FPartAddtionRuleType : UINT8 {
	None = 0,
	Addtive = 1,
	Replace = 2,
	FPartAddtionRuleType_MAX = 3
};

// Enum GPGameplay.EMaterialParameterType
enum class EMaterialParameterType : UINT8 {
	Vector = 0,
	Scalar = 1,
	Texture = 2,
	EMaterialParameterType_MAX = 3
};

// Enum GPGameplay.EApperanceModifyType
enum class EApperanceModifyType : UINT8 {
	None = 0,
	AppendModel = 1,
	EApperanceModifyType_MAX = 2
};

// Enum GPGameplay.EWeaponExtraModelConditionType
enum class EWeaponExtraModelConditionType : UINT8 {
	None = 0,
	Socket = 1,
	AdapterType = 2,
	ItemId = 3,
	EWeaponExtraModelConditionType_MAX = 4
};

// Enum GPGameplay.EWeaponExtraModelVisibility
enum class EWeaponExtraModelVisibility : UINT8 {
	Visible = 0,
	Hidden = 1,
	EWeaponExtraModelVisibility_MAX = 2
};

// Enum GPGameplay.EFxFuntionType
enum class EFxFuntionType : UINT8 {
	ReplaceMuzzleFlashFx = 0,
	ReplaceShellDropFx = 1,
	ReplaceMuzzleTrailFx = 2,
	ReplaceRealBulletTrailFx = 3,
	ReplaceBulletTrailFx = 4,
	ReplaceHitFx = 5,
	ReplaceMuzzleLightLevel = 6,
	AddMuzzleLightLevel = 7,
	EFxFuntionType_MAX = 8
};

// Enum GPGameplay.EAssemblerAudioType
enum class EAssemblerAudioType : UINT8 {
	None = 0,
	Receiver = 1,
	GunBarral = 2,
	PistolGrip = 3,
	Stock = 4,
	Handguard = 5,
	Sight = 11,
	Magazine = 12,
	Muzzle = 13,
	Foregrip = 14,
	Underbarrel = 15,
	TacticalDevices = 16,
	Bipod = 17,
	ForSight = 18,
	RearSight = 19,
	SightBase = 21,
	Ammo = 99,
	Pop_Gun = 201,
	Select_Gun = 202,
	EAssemblerAudioType_MAX = 203
};

// Enum GPGameplay.EForbidLeftHandIKType
enum class EForbidLeftHandIKType : UINT8 {
	EOutReachDistance = 0,
	EHaveAdapterInSocket = 1,
	EAttachInSocket = 2,
	EForbidLeftHandIKType_MAX = 3
};

// Enum GPGameplay.EAimDownSightsState
enum class EAimDownSightsState : UINT8 {
	InVisible = 0,
	Special_Pose = 1,
	Constant = 2,
	EAimDownSightsState_MAX = 3
};

// Enum GPGameplay.EPartFunctionTag
enum class EPartFunctionTag : UINT8 {
	NONE = 0,
	SupportSideAiming = 1,
	All = 255,
	EPartFunctionTag_MAX = 256
};

// Enum GPGameplay.EAssemblerCameraType
enum class EAssemblerCameraType : UINT8 {
	LOCK = 0,
	ROTATE_ROOT = 1,
	ROTATE_ARROUND = 2,
	AUTO_ROTATE = 3,
	EAssemblerCameraType_MAX = 4
};

// Enum GPGameplay.EAssemblerCamPoint
enum class EAssemblerCamPoint : UINT8 {
	POINT_DEFAULT = 0,
	POINT_GUN_SELECTED = 1,
	POINT_GUN_DISPLAY = 2,
	POINT_MUZZLE = 3,
	POINT_BARREL = 4,
	POINT_HANDGUARD = 5,
	POINT_SIGHT = 6,
	POINT_MAGAZINE = 7,
	POINT_GRIP = 8,
	POINT_STOCK = 9,
	POINT_UP_RAIL = 10,
	POINT_DOWN_RAIL = 11,
	POINT_LEFT_RAIL = 12,
	POINT_RIGHT_RAIL = 13,
	POINT_BIPOD = 14,
	POINT_GUN_PRESET = 15,
	POINT_SPECIAL = 16,
	POINT_CONNECTOR = 17,
	POINT_CHEEKPAD = 18,
	POINT_PISTOLGRIP_PATCH = 19,
	POINT_SCO_SECONDARY = 20,
	POINT_HANU_POINT = 21,
	POINT_HAND_POINT = 22,
	POINT_HANL_POINT = 23,
	POINT_HANR_POINT = 24,
	POINT_BARBIP_POINT = 25,
	POINT_HANKIT_POINT = 26,
	POINT_STOKIT_POINT = 27,
	POINT_BARKIT_POINT = 28,
	POINT_SCOU_POINT = 29,
	POINT_RISER_POINT = 30,
	POINT_FOR_POINT = 31,
	POINT_COMMON_POINT = 32,
	POINT_GRIPBASS_POINT = 33,
	POINT_MAGBASS_POINT = 34,
	POINT_FLASHKILL_POINT = 35,
	POINT_HANDGUARDU_POINT = 36,
	POINT_GAS_POINT = 37,
	POINT_HAMMER_POINT = 38,
	POINT_TRIGGER_POINT = 39,
	POINT_HYDRASCO_POINT = 50,
	POINT_SHIELD_POINT = 51,
	POINT_BOLT_POINT = 52,
	POINT_GISG2_POINT = 53,
	POINT_PENDANT_POINT = 90,
	POINT_GUN_SOLUTION = 100,
	POINT_GUN_SOL_INSPECTOR = 200,
	POINT_GUN_DISPLAY_FEATURE1 = 201,
	POINT_GUN_SKIN_DEFAULT = 202,
	POINT_GUN_FINETUNE = 203,
	POINT_GUN_UPGRADE = 204,
	NONE = 205,
	EAssemblerCamPoint_MAX = 206
};

// Enum GPGameplay.EPerkEffectAdditiveLogic
enum class EPerkEffectAdditiveLogic : UINT8 {
	None = 0,
	DurationAndCD = 1,
	TriggerIcon = 2,
	Max = 3
};

// Enum GPGameplay.EPerkEffectTriggerCond
enum class EPerkEffectTriggerCond : UINT8 {
	None = 0,
	LowHealth = 1,
	Max = 2
};

// Enum GPGameplay.EPerkSharedEffectType
enum class EPerkSharedEffectType : UINT8 {
	None = 0,
	ZoyaSOL = 1,
	ZoyaBreakThrough = 2,
	Max = 3
};

// Enum GPGameplay.EPerkSharedEffectSource
enum class EPerkSharedEffectSource : UINT8 {
	None = 0,
	Zoya = 1,
	Max = 2
};

// Enum GPGameplay.EPerkSpecialEffectType
enum class EPerkSpecialEffectType : UINT8 {
	None = 0,
	StaminaNotLose = 1,
	SuperDash = 2,
	ExSkillCoolDownReduce = 3,
	ArmdedForceItem1SkillCoolDownReduce = 4,
	ArmdedForceItem2SkillCoolDownReduce = 5,
	AimingAdverseResistance = 6,
	CrouchOrSilentWalkSpeedUp = 7,
	CureBodyWhenRescueSucceed = 8,
	Max = 9
};

// Enum GPGameplay.EPerkEffectType
enum class EPerkEffectType : UINT8 {
	AddBuff = 0,
	AddSkill = 1,
	TriggerSpecialEffect = 2,
	Max = 3
};

// Enum GPGameplay.EBuffEntityTriggerIconType
enum class EBuffEntityTriggerIconType : UINT8 {
	None = 0,
	EXSkillCooling = 1,
	BattleFieldPropSkill1Cooling = 2,
	BattleFieldPropSkill2Cooling = 3,
	CrouchOrSilentWalk = 4,
	Max = 5
};

// Enum GPGameplay.ESoftState
enum class ESoftState : UINT8 {
	Custom = 0,
	EFiring = 1,
	EReload = 2,
	ESoftState_MAX = 3
};

// Enum GPGameplay.EAbilityEntitySysteType
enum class EAbilityEntitySysteType : UINT8 {
	Ability = 0,
	SysteTypeMax = 1,
	EAbilityEntitySysteType_MAX = 2
};

// Enum GPGameplay.ESupportType
enum class ESupportType : UINT8 {
	HealthPack = 0,
	ArmorPack = 1,
	ESupportType_MAX = 2
};

// Enum GPGameplay.ESwitchWeaponOperation
enum class ESwitchWeaponOperation : UINT8 {
	OP_Start = 0,
	OP_ActivatePending = 1,
	OP_Cancel = 2,
	OP_MAX = 3
};

// Enum GPGameplay.EClassRepNodeMapping
enum class EClassRepNodeMapping : UINT8 {
	NotRouted = 0,
	RelevantAllConnections = 1,
	RelevantToTeam = 2,
	RelevantToClientProxy = 3,
	Spatialize_Static = 4,
	Spatialize_Dynamic = 5,
	Spatialize_Dormancy = 6,
	EClassRepNodeMapping_MAX = 7
};

// Enum GPGameplay.EVehiclePartType
enum class EVehiclePartType : UINT8 {
	NONE = 0,
	FRONT_WHEEL = 1,
	REAL_WHEEL = 2,
	ENGINE_MAX = 3,
	FRONT_LIGHT = 4,
	REAL_LIGHT = 5,
	VEHICLE_GLASS = 6,
	WEAPON = 7,
	LEFT_TRACK = 8,
	RIGHT_TRACK = 9,
	BODY = 10,
	EVehiclePartType_MAX = 11
};

// Enum GPGameplay.EScopeLocationType
enum class EScopeLocationType : UINT8 {
	Undefined = 0,
	Main = 1,
	Top = 2,
	Side = 3,
	Sloping = 4,
	EScopeLocationType_MAX = 5
};

// Enum GPGameplay.EShadowTransferType
enum class EShadowTransferType : UINT8 {
	FromLeft = 0,
	FromRight = 1,
	EShadowTransferType_MAX = 2
};

// Enum GPGameplay.EScopeCompositeType
enum class EScopeCompositeType : UINT8 {
	CompositeUpDown = 0,
	CompositeLeftRight = 1,
	CompositeFrontBack = 2,
	EScopeCompositeType_MAX = 3
};

// Enum GPGameplay.ECrosshairType
enum class ECrosshairType : UINT8 {
	Crosshair_None = 0,
	Crosshair_Holo = 1,
	Crosshair_RedDot = 2,
	Crosshair_MAX = 3
};

// Enum GPGameplay.EWeaponAdapterType
enum class EWeaponAdapterType : UINT8 {
	Receiver = 1,
	GunBarral = 2,
	PistolGrip = 3,
	Stock = 4,
	Handguard = 5,
	Sight = 11,
	Magazine = 12,
	Muzzle = 13,
	Foregrip = 14,
	Underbarrel = 15,
	TacticalDevices = 16,
	Bipod = 17,
	ForSight = 18,
	RearSight = 19,
	SightBase = 21,
	Special = 20,
	Silencer = 200,
	EWeaponAdapterType_MAX = 201
};

// Enum GPGameplay.EBurnningPotState
enum class EBurnningPotState : UINT8 {
	StateIdle = 0,
	StateFiring = 1,
	StateCutting = 2,
	StateDeactive = 3,
	EBurnningPotState_MAX = 4
};

// Enum GPGameplay.EWeaponAmmoLogicType
enum class EWeaponAmmoLogicType : UINT8 {
	None = 0,
	CommonAmmo = 1,
	ItemAmmo = 2,
	EWeaponAmmoLogicType_MAX = 3
};

// Enum GPGameplay.EAddAmmoFailReason
enum class EAddAmmoFailReason : UINT8 {
	None = 0,
	NoProperWeapon = 1,
	FullCarriedAmmo = 2,
	CanNotAddAmmo = 3,
	NotSupportedAmmoType = 4,
	EAddAmmoFailReason_MAX = 5
};

// Enum GPGameplay.ECharacterLeftArmAnimType
enum class ECharacterLeftArmAnimType : UINT8 {
	None = 0,
	Scene = 1,
	Weapon = 2,
	ECharacterLeftArmAnimType_MAX = 3
};

// Enum GPGameplay.EWeaponAnimDirectItemType
enum class EWeaponAnimDirectItemType : UINT8 {
	None = 0,
	FPPMoveF = 1,
	FPPMoveFR = 2,
	FPPMoveFL = 3,
	FPPMoveB = 4,
	FPPMoveBR = 5,
	FPPMoveBL = 6,
	FPPMoveL = 7,
	FPPMoveR = 8,
	TPPMoveF = 9,
	TPPMoveFR = 10,
	TPPMoveFL = 11,
	TPPMoveB = 12,
	TPPMoveBR = 13,
	TPPMoveBL = 14,
	TPPMoveL = 15,
	TPPMoveR = 16,
	EWeaponAnimDirectItemType_MAX = 17
};

// Enum GPGameplay.EWeaponAnimItemType
enum class EWeaponAnimItemType : UINT8 {
	None = 0,
	FPPDef = 1,
	FPPStand = 2,
	FPPCrouch = 3,
	FPPProne = 4,
	FPPFracture = 5,
	FPPImpendingDeath = 6,
	TPPDef = 7,
	TPPStand = 8,
	TPPCrouch = 9,
	TPPProne = 10,
	TPPFracture = 11,
	TPPImpendingDeath = 12,
	TPPUnderFPPStand = 13,
	TPPUnderFPPCrouch = 14,
	TPPUnderFPPProne = 15,
	TPPUnderFPPFracture = 16,
	TPPUnderFPPImpendingDeath = 17,
	EWeaponAnimItemType_MAX = 18
};

// Enum GPGameplay.EWeaponAnimXPPType
enum class EWeaponAnimXPPType : UINT8 {
	None = 0,
	Both = 1,
	FPP = 2,
	TPPor3P = 3,
	EWeaponAnimXPPType_MAX = 4
};

// Enum GPGameplay.ERuntimeOverrideAnimDatType
enum class ERuntimeOverrideAnimDatType : UINT8 {
	None = 0,
	WeaponAnimBasePos = 1,
	WeaponAnimBS = 2,
	WeaponAnimOperaction = 3,
	Max = 4
};

// Enum GPGameplay.EWeaponAnimDataTableType
enum class EWeaponAnimDataTableType : UINT8 {
	None = 0,
	WeaponAnimBasePos = 1,
	WeaponAnimOperaction = 2,
	SpecialWeaponAnim = 3,
	AiAnimPosTable = 4,
	InWeaponAnimMax = 5,
	WeaponPartAnim = 6,
	CharacterLeftArm = 7,
	HallCharacterAnim = 8,
	HallWeaponPartAnim = 9,
	Max = 10
};

// Enum GPGameplay.ERequestAnimType
enum class ERequestAnimType : UINT8 {
	EWeaponAnim = 0,
	EItemAnim = 1,
	EBasicAnim = 2,
	ERequestAnimType_MAX = 3
};

// Enum GPGameplay.EGunSwayType
enum class EGunSwayType : UINT8 {
	Common = 0,
	Vehicle = 1,
	EGunSwayType_MAX = 2
};

// Enum GPGameplay.EWeaponEffectType
enum class EWeaponEffectType : UINT8 {
	None = 0,
	MuzzleFlash = 1,
	ShellDrop = 2,
	MuzzleTrail = 3,
	BulletTrail = 4,
	ModelFx = 5,
	OverHeatTrail = 6,
	EWeaponEffectType_MAX = 7
};

// Enum GPGameplay.EWeaponDisplayMode
enum class EWeaponDisplayMode : UINT8 {
	None = 0,
	FirstPerson = 1,
	ThirdPerson = 2,
	ThirdPersonOther = 3,
	EWeaponDisplayMode_MAX = 4
};

// Enum GPGameplay.EWeaponHiddenTag
enum class EWeaponHiddenTag : UINT8 {
	OwnerHidden = 0,
	CarringBody = 1,
	PreciseOperate = 2,
	Redeploy = 3,
	Helicopter = 4,
	Vehicle = 5,
	VaultAndClimb = 6,
	RescuePrecise = 7,
	Assassinate = 8,
	Ability = 9,
	Parachute = 10,
	Interactive = 11,
	ExitCutScene = 12,
	RaiseWatch = 13,
	BeCarryBody = 14,
	LOD = 15,
	BeAssassinate = 16,
	ImpendingDeath = 17,
	ClimbLadder = 18,
	UseItem = 19,
	Perform = 20,
	Firefighting = 21,
	TagMax = 22,
	EWeaponHiddenTag_MAX = 23
};

// Enum GPGameplay.EWeaponAttributeValueType
enum class EWeaponAttributeValueType : UINT8 {
	Normal = 0,
	Percentage = 1,
	EWeaponAttributeValueType_MAX = 2
};

// Enum GPGameplay.EAttributeBetterDeterminer
enum class EAttributeBetterDeterminer : UINT8 {
	None = 0,
	Max = 1,
	Min = 2
};

// Enum GPGameplay.ELimitFormulateType
enum class ELimitFormulateType : UINT8 {
	None = 0,
	MULT_A_Min = 1,
	MULT_A_Max = 2,
	Final_Min = 3,
	Final_Max = 4,
	ELimitFormulateType_MAX = 5
};

// Enum GPGameplay.EWeaponAttackTriggerMode
enum class EWeaponAttackTriggerMode : UINT8 {
	OnHit = 0,
	OnExplode = 1,
	Custom = 2,
	EWeaponAttackTriggerMode_MAX = 3
};

// Enum GPGameplay.EWeaponBoolPropertyType
enum class EWeaponBoolPropertyType : UINT8 {
	None = 0,
	IsBipodDown = 1,
	IsPowerFlashOn = 2,
	IsTacticalEquipUOn = 3,
	IsTacticalEquipU1On = 4,
	IsTacticalEquipU2On = 5,
	IsTacticalEquipROn = 6,
	IsTacticalEquipR1On = 7,
	IsTacticalEquipR2On = 8,
	IsTacticalEquipDOn = 9,
	IsTacticalEquipD1On = 10,
	IsTacticalEquipD2On = 11,
	IsTacticalEquipLOn = 12,
	IsTacticalEquipL1On = 13,
	IsTacticalEquipL2On = 14,
	Max = 15
};

// Enum GPGameplay.EWeaponAmmoDamageType
enum class EWeaponAmmoDamageType : UINT8 {
	HitFirst = 0,
	PassHand = 1,
	EWeaponAmmoDamageType_MAX = 2
};

// Enum GPGameplay.EVehicleLockType
enum class EVehicleLockType : UINT8 {
	NONE = 0,
	Terrestrial = 1,
	Aerial = 2,
	All = 255,
	EVehicleLockType_MAX = 256
};

// Enum GPGameplay.EWeaponGunKickTriggerType
enum class EWeaponGunKickTriggerType : UINT8 {
	EveryFire = 0,
	FirstFireKeep = 1,
	FirstFireLoop = 2,
	EWeaponGunKickTriggerType_MAX = 3
};

// Enum GPGameplay.EWeaponFireShakeWaveform
enum class EWeaponFireShakeWaveform : UINT8 {
	CosWave = 0,
	SinWave = 1,
	PerlinNoise = 2,
	Curve = 3,
	CosWaveE = 4,
	SinWaveE = 5,
	EWeaponFireShakeWaveform_MAX = 6
};

// Enum GPGameplay.EWeaponFireShakeType
enum class EWeaponFireShakeType : UINT8 {
	FireBegin = 0,
	FireLoop = 1,
	FireAlways = 2,
	FireRecoil = 3,
	EWeaponFireShakeType_MAX = 4
};

// Enum GPGameplay.EWeaponOpenSightOnFireMode
enum class EWeaponOpenSightOnFireMode : UINT8 {
	None = 0,
	OpenSightMode_SemiAutomatic = 1,
	OpenSightMode_Automatic = 2,
	OpenSightMode_Sniper = 3,
	OpenSightMode_Missile = 4,
	EWeaponOpenSightOnFireMode_MAX = 5
};

// Enum GPGameplay.EWeaponFireWithSightRealseConfigMode
enum class EWeaponFireWithSightRealseConfigMode : UINT8 {
	None = 0,
	StopFire_CloseSight = 1,
	OpenFire_Sight = 2,
	EWeaponFireWithSightRealseConfigMode_MAX = 3
};

// Enum GPGameplay.EWeaponFireWithSightPressConfigMode
enum class EWeaponFireWithSightPressConfigMode : UINT8 {
	None = 0,
	OpenSightWithFire = 1,
	OpenSight = 2,
	EWeaponFireWithSightPressConfigMode_MAX = 3
};

// Enum GPGameplay.EWeaponInputAutoFireMode
enum class EWeaponInputAutoFireMode : UINT8 {
	None = 0,
	Single = 1,
	Auto = 2,
	EWeaponInputAutoFireMode_MAX = 3
};

// Enum GPGameplay.EWeaponInputRightActionMode
enum class EWeaponInputRightActionMode : UINT8 {
	None = 0,
	Follow_FireWithSightOpenConfig = 1,
	Follow_FireConfig = 2,
	EWeaponInputRightActionMode_MAX = 3
};

// Enum GPGameplay.EWeaponAdditiveAnimTriggerType
enum class EWeaponAdditiveAnimTriggerType : UINT8 {
	None = 0,
	Always = 1,
	EveryFire = 2,
	WhileFireOnce = 3,
	WhileFireLoop = 4,
	EndFire = 5,
	EWeaponAdditiveAnimTriggerType_MAX = 6
};

// Enum GPGameplay.EHitEventType_FX
enum class EHitEventType_FX : UINT8 {
	None = 0,
	KillWithHead = 1,
	KillWithBody = 2,
	HitWithHead = 3,
	HitWithBody = 4,
	HitWithArmor = 5,
	EHitEventType_MAX = 6
};

// Enum GPGameplay.EProjectileFlyMode
enum class EProjectileFlyMode : UINT8 {
	FlyMode_PhysicSimulate = 0,
	FlyMode_HitScan = 1,
	FlyMode_HitScanDelay = 2,
	FlyMode_MAX = 3
};

// Enum GPGameplay.EDamageAttenBlendMode
enum class EDamageAttenBlendMode : UINT8 {
	BlendMode_Dest = 0,
	BlendMode_LinearLerp = 1,
	BlendMode_MAX = 2
};

// Enum GPGameplay.ECrosshairScaleMode
enum class ECrosshairScaleMode : UINT8 {
	ScaleGap = 0,
	ScaleAll = 1,
	ScaleOverride = 2,
	ECrosshairScaleMode_MAX = 3
};

// Enum GPGameplay.EWeaponDataRecoilType
enum class EWeaponDataRecoilType : UINT8 {
	WeaponRecoil_DFM = 0,
	WeaponRecoil_Polynomial = 1,
	WeaponRecoil_VelocityModel = 2,
	WeaponRecoil_MAX = 3
};

// Enum GPGameplay.EExplosionType
enum class EExplosionType : UINT8 {
	None = 0,
	Weapon_Grenade = 1,
	Weapon_RPG_8 = 2,
	Weapon_C4 = 3,
	Weapon_Missile = 4,
	WeaponMelee_Hurt = 5,
	Weapon_3Grenade = 6,
	Vehicle_ArmedPickup = 7,
	Vehicle_Motor = 8,
	Vehicle_TutuCar = 9,
	Vehicle_UNTrunk = 10,
	Vehicle_DarkTideJeep = 11,
	Vehicle_CargoTrunk = 12,
	Vehicle_Drone = 13,
	Tank_Projectile = 14,
	FixedTrackRocket = 15,
	Other_Shell = 16,
	Other_RocketRecycling = 17,
	Type_Large = 18,
	Type_Mid = 19,
	Type_Small = 20,
	Weapon_Point = 21,
	RankSkill_GuidedMissle = 22,
	Other_Debug = 23,
	Max = 24
};

// Enum GPGameplay.EMainAttributeFunctionCurvingType
enum class EMainAttributeFunctionCurvingType : UINT8 {
	NONE = 0,
	DeltaMapping = 1,
	DeltaMappingThenScale = 2,
	AbsoluteMapping = 3,
	AbsoluteMappingThenScale = 4,
	EMainAttributeFunctionCurvingType_MAX = 5
};

// Enum GPGameplay.EWeaponDataModifierPeriod
enum class EWeaponDataModifierPeriod : UINT8 {
	GAME_MODE = 0,
	PARTS = 1,
	PART_TUNE = 2,
	Max = 3
};

// Enum GPGameplay.EWeaponDataArrayModifierType
enum class EWeaponDataArrayModifierType : UINT8 {
	None = 0,
	Add = 1,
	Rem = 2,
	Max = 3
};

// Enum GPGameplay.EWeaponDataReplaceType
enum class EWeaponDataReplaceType : UINT8 {
	None = 0,
	Final = 1,
	Initial = 2,
	Max = 3
};

// Enum GPGameplay.EWeaponDataModifierType
enum class EWeaponDataModifierType : UINT8 {
	None = 0,
	Addend = 1,
	Mult_A = 2,
	Mult_B = 3,
	Mult_C = 4,
	Max = 5
};

// Enum GPGameplay.EScopeLenMatState
enum class EScopeLenMatState : UINT8 {
	Close = 0,
	Switch = 1,
	Open = 2,
	EScopeLenMatState_MAX = 3
};

// Enum GPGameplay.WeaponInspectType
enum class WeaponInspectType : UINT8 {
	WeaponInspectType_Default = 0,
	WeaponInspectType_Empty = 1,
	WeaponInspectType_Finally = 2,
	WeaponInspectType_FirstEmpty = 3,
	WeaponInspectType_MAX = 4
};

// Enum GPGameplay.ETieWeaponState
enum class ETieWeaponState : UINT8 {
	E_Idle = 0,
	E_Vacant = 1,
	E_Using = 2,
	E_Broken = 3,
	E_Destory = 4,
	E_MAX = 5
};

// Enum GPGameplay.ESceneWeaponType
enum class ESceneWeaponType : UINT8 {
	E_None = 0,
	E_MachineGun = 1,
	E_FixedWeaponAA = 2,
	E_FixedWEaponShore = 3,
	E_GiantTowerGuidedRocket = 4,
	E_GiantTowerWeaponAA = 5,
	E_HumveeCracked = 6,
	E_HawkMachineGun = 7,
	E_MAX = 8
};

// Enum GPGameplay.ESceneHealthState
enum class ESceneHealthState : UINT8 {
	None = 0,
	E_Normal = 1,
	E_Impaired = 2,
	E_Destory = 3,
	E_Constructable = 4,
	ESceneHealthState_MAX = 5
};

// Enum GPGameplay.ECrossHairBindMode
enum class ECrossHairBindMode : UINT8 {
	BindToFireLocation = 0,
	BindToFrontSight = 1,
	BindToScreenCenter = 2,
	ECrossHairBindMode_MAX = 3
};

// Enum GPGameplay.EWeaponOffsetType
enum class EWeaponOffsetType : UINT8 {
	WeaponZoomOffset_Rotation = 0,
	WeaponZoomOffset = 1,
	WeaponDisplayOffset = 2,
	WeaponAdditiveAnim = 3,
	WeaponAdditiveAnim_FiringAnim = 4,
	WeaponCameraShakeRoll = 5,
	WeaponGunKick = 6,
	WeaponGunSway = 7,
	WeaponOwnerHitShake = 8,
	WeaponGunKick2 = 9,
	WeaponOffsetFinal = 10,
	EWeaponOffsetType_MAX = 11
};

// Enum GPGameplay.EZoomAlignmentMode
enum class EZoomAlignmentMode : UINT8 {
	TransformAlignment = 0,
	DisableAlignment = 2,
	EZoomAlignmentMode_MAX = 3
};

// Enum GPGameplay.EEquipmentPartDamageType
enum class EEquipmentPartDamageType : UINT8 {
	Default = 0,
	Fix = 1,
	EEquipmentPartDamageType_MAX = 2
};

// Enum GPGameplay.EWeaponHandAnimType
enum class EWeaponHandAnimType : UINT8 {
	None = 0,
	LeftHandType = 1,
	RightHandType = 2,
	BothHandsType = 3,
	EWeaponHandAnimType_MAX = 4
};

// Enum GPGameplay.EWeaponFireCrosshairStyle
enum class EWeaponFireCrosshairStyle : UINT8 {
	CrosshairNormal = 0,
	EWeaponFireCrosshairStyle_MAX = 1
};

// Enum GPGameplay.ECharacterLogicPoseType
enum class ECharacterLogicPoseType : UINT8 {
	None = 0,
	StandPose = 1,
	CrouchPose = 2,
	PronePose = 3,
	ECharacterLogicPoseType_MAX = 4
};

// Enum GPGameplay.EChracterPoseType
enum class EChracterPoseType : UINT8 {
	None = 0,
	Stand = 1,
	Crouch = 2,
	Prone = 3,
	Jump = 4,
	Run = 5,
	Fly = 6,
	Sprint = 7,
	Fracture = 8,
	ImpendingDeath = 9,
	Swim = 10,
	SlidingTackle = 11,
	Rescue = 12,
	EChracterPoseType_MAX = 13
};

// Enum GPGameplay.EHandIKType
enum class EHandIKType : UINT8 {
	HandIKType_None = 0,
	HandIKType_Primary = 1,
	HandIKType_Submachine = 2,
	HandIKType_Pistol = 3,
	HandIKType_SpecialLongWeapon = 4,
	HandIKType_Max = 5
};

// Enum GPGameplay.ETurn8AngleType
enum class ETurn8AngleType : UINT8 {
	None = 0,
	Angle_Turn_1 = 1,
	Angle_TurnLeft_46 = 2,
	Angle_TurnLeft_91 = 3,
	Angle_TurnLeft_136 = 4,
	Angle_TurnLeft_181 = 5,
	Angle_TurnRight_46 = 6,
	Angle_TurnRight_91 = 7,
	Angle_TurnRight_136 = 8,
	Max = 9
};

// Enum GPGameplay.EEightDirectionType
enum class EEightDirectionType : UINT8 {
	None = 0,
	Direction_F = 1,
	Direction_FR = 2,
	Direction_FL = 3,
	Direction_B = 4,
	Direction_BR = 5,
	Direction_BL = 6,
	Direction_L = 7,
	Direction_R = 8,
	Max = 9
};

// Enum GPGameplay.EAnimationSpecialUseType
enum class EAnimationSpecialUseType : UINT8 {
	None = 0,
	TPPAnim_UnderFPP = 6,
	EAnimationSpecialUseType_MAX = 7
};

// Enum GPGameplay.EWeaponSpreadModifierType
enum class EWeaponSpreadModifierType : UINT8 {
	CentralLimitTheorem = 0,
	SimpleRandom = 1,
	EWeaponSpreadModifierType_MAX = 2
};

// Enum GPGameplay.EDistributionInSpreadType
enum class EDistributionInSpreadType : UINT8 {
	UniformDistribution = 0,
	CutCakeDistribution = 1,
	CustomDistribution = 2,
	EDistributionInSpreadType_MAX = 3
};

// Enum GPGameplay.EWeaponSpreadAreaType
enum class EWeaponSpreadAreaType : UINT8 {
	Oval = 0,
	EWeaponSpreadAreaType_MAX = 1
};

// Enum GPGameplay.EWeaponAdditiveGetAnimResultType
enum class EWeaponAdditiveGetAnimResultType : UINT8 {
	RotateSpine = 0,
	RotateByCenter = 1,
	RotateByHoldPoint = 2,
	AddtiveLeftHand = 3,
	EWeaponAdditiveGetAnimResultType_MAX = 4
};

// Enum GPGameplay.EWeaponAntiCheatType
enum class EWeaponAntiCheatType : UINT8 {
	None = 0,
	Time = 1,
	SwitchWeapon = 2,
	Ammo = 3,
	FireSpread = 4,
	FireRecoil = 5,
	ChangeClip = 101,
	Chamber = 102,
	Equipping = 103,
	Firing = 104,
	OtherState = 200,
	EWeaponAntiCheatType_MAX = 201
};

// Enum GPGameplay.EShakerRuntimeRecoilSimulatorStage
enum class EShakerRuntimeRecoilSimulatorStage : UINT8 {
	None = 0,
	StartFire = 1,
	FireRebound = 2,
	Recover = 3,
	EShakerRuntimeRecoilSimulatorStage_MAX = 4
};

// Enum GPGameplay.EZoomInParamType
enum class EZoomInParamType : UINT8 {
	Default = 0,
	Sight = 1,
	Scope = 2,
	Debug = 3,
	Max = 4
};

// Enum GPGameplay.EGPCameraSwayMode
enum class EGPCameraSwayMode : UINT8 {
	EGPCameraSwayMode_AimWalk = 0,
	EGPCameraSwayMode_Walk = 1,
	EGPCameraSwayMode_Run = 2,
	EGPCameraSwayMode_MAX = 3
};

// Enum GPGameplay.EMeleeFireMode
enum class EMeleeFireMode : UINT8 {
	Auto = 0,
	Single = 1,
	EMeleeFireMode_MAX = 2
};

// Enum GPGameplay.EWeaponObjectMatchLevel
enum class EWeaponObjectMatchLevel : UINT8 {
	MatchAll = 0,
	MatchWeaponId = 1,
	MatchWeaponType = 2,
	AlwaysMatch = 3,
	Similarity = 4,
	EWeaponObjectMatchLevel_MAX = 5
};

// Enum GPGameplay.EProcedureAnimBoneType
enum class EProcedureAnimBoneType : UINT8 {
	ScopeCenter = 0,
	WeaponRoot = 1,
	Camera = 2,
	FrontSight = 3,
	Custom = 4,
	EProcedureAnimBoneType_MAX = 5
};

// Enum GPGameplay.EMysticalSkinParamValueType
enum class EMysticalSkinParamValueType : UINT8 {
	Constant = 0,
	Random = 1,
	Random01 = 2,
	EMysticalSkinParamValueType_MAX = 3
};

// Enum GPGameplay.EWeaponSkinRareType
enum class EWeaponSkinRareType : UINT8 {
	Normal = 0,
	Rare = 1,
	VeryRare = 2,
	EWeaponSkinRareType_MAX = 3
};

// Enum GPGameplay.ESkinEffectTriggerEventType
enum class ESkinEffectTriggerEventType : UINT8 {
	None = 0,
	PlayMaterialAnim = 1,
	ESkinEffectTriggerEventType_MAX = 2
};

// Enum GPGameplay.EWeaponSkinRenderMode
enum class EWeaponSkinRenderMode : UINT8 {
	None = 0,
	Dye = 1,
	EWeaponSkinRenderMode_MAX = 2
};

// Enum GPGameplay.EAbilityThrowableStickyType
enum class EAbilityThrowableStickyType : UINT8 {
	None = 0,
	All = 1,
	OnlyVehicle = 2,
	OnlyDFMChar = 3,
	EAbilityThrowableStickyType_MAX = 4
};

// Enum GPGameplay.EWeaponThrowableType
enum class EWeaponThrowableType : UINT8 {
	None = 0,
	EWeaponThrowableType_MAX = 1
};

// ScriptStruct GPGameplay.PointHitActionResult
// Size: 0x20 (Inherited: 0x00)
struct FPointHitActionResult {
public:

	uint64_t Guid; // 0x00(0x08)
	enum class EDamageValidateResult ResultType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	uint64_t RuleId; // 0x10(0x08)
	int32_t Code; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TakeHitInfo
// Size: 0xd0 (Inherited: 0x00)
struct FTakeHitInfo {
public:

	uint64_t Uin; // 0x00(0x08)
	uint64_t VictimUin; // 0x08(0x08)
	bool bEmpty; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector_NetQuantize RelHitLocation; // 0x14(0x0c)
	struct FVector_NetQuantize Momentum; // 0x20(0x0c)
	struct FVector_NetQuantize HitFromLocation; // 0x2c(0x0c)
	struct FVector_NetQuantize HitLocation; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct FGameplayTagContainer HitEffectTypeTagContainer; // 0x48(0x20)
	char ShotDirPitch; // 0x68(0x01)
	char ShotDirYaw; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	struct FName HitBoneName; // 0x6c(0x08)
	enum class EHitGroupType HitPhysicsType; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	struct UPhysicalMaterial* HitPhysicsMaterial; // 0x78(0x08)
	char Count; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct UClass* HitArmor; // 0x88(0x08)
	enum class EDirection HitDirection; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct AActor* HitCauser; // 0x98(0x08)
	enum class EHitDamageApplyType HitDamageApplyType; // 0xa0(0x01)
	enum class EDamageType DamageType; // 0xa1(0x01)
	bool bShowHitDir; // 0xa2(0x01)
	char pad_A3[0x2d]; // 0xa3(0x2d)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RescueInfo
// Size: 0x38 (Inherited: 0x00)
struct FRescueInfo {
public:

	struct AGPCharacterBase* BeRescueCharacter; // 0x00(0x08)
	bool bCurrentRescueLeft; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FRotator BeRescuueRotator; // 0x0c(0x0c)
	struct FRotator RescuueRotator; // 0x18(0x0c)
	struct FVector RescueLoc; // 0x24(0x0c)
	int32_t ChangeCount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SubtitleSequenceInfo
// Size: 0x38 (Inherited: 0x00)
struct FSubtitleSequenceInfo {
public:

	char pad_0[0x28]; // 0x00(0x28)
	struct FName SubtitleSequenceId; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SubtitleGroupItem
// Size: 0x18 (Inherited: 0x00)
struct FSubtitleGroupItem {
public:

	struct FName SubtitleId; // 0x00(0x08)
	float MinShowPercent; // 0x08(0x04)
	bool bNeedInteractToNext; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float NextSubtitleSequenceDelay; // 0x10(0x04)
	int32_t LoopTimes; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TeamScoreInfo
// Size: 0x18 (Inherited: 0x0c)
struct FTeamScoreInfo : public FFastArraySerializerItem {
public:

	struct FName ScoreType; // 0x0c(0x08)
	int32_t Score; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SpectSafeBoxInfo
// Size: 0x10 (Inherited: 0x00)
struct FSpectSafeBoxInfo {
public:

	uint32_t SafeBoxId; // 0x00(0x04)
	uint32_t OperateId; // 0x04(0x04)
	float params1; // 0x08(0x04)
	float params2; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SpectWeaponInfo
// Size: 0x0c (Inherited: 0x00)
struct FSpectWeaponInfo {
public:

	uint16_t WeaponAmmoCount; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t CacheTotalAmmoCount; // 0x04(0x04)
	int32_t FiringMode; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SpectTelescopeInfo
// Size: 0x0c (Inherited: 0x00)
struct FSpectTelescopeInfo {
public:

	bool bIsUsingTelescope; // 0x00(0x01)
	bool bStartOpenTransition; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float CurrentFOV; // 0x04(0x04)
	int32_t CurrentIndex; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayerMissionInfo
// Size: 0x40 (Inherited: 0x00)
struct FPlayerMissionInfo {
public:

	int32_t missionid; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	struct TArray<struct FMissionListener> MissionListeners; // 0x18(0x10)
	bool Complete; // 0x28(0x01)
	bool failed; // 0x29(0x01)
	bool ForceUpdate; // 0x2a(0x01)
	enum class EGameRuleType MissionWorldType; // 0x2b(0x01)
	float TotalTimeLimit; // 0x2c(0x04)
	struct TArray<struct FPlayerMissionMapIcon> MapIconMarkers; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayerMissionMapIcon
// Size: 0x18 (Inherited: 0x00)
struct FPlayerMissionMapIcon {
public:

	enum class EGPQuestActionMarkerType Type; // 0x00(0x01)
	bool BindRotate; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct AActor*> actors; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MissionListener
// Size: 0x60 (Inherited: 0x00)
struct FMissionListener {
public:

	struct FString Title; // 0x00(0x10)
	struct FString CompleteDesc; // 0x10(0x10)
	struct TArray<struct FMissionObjectiveItem> MissionObjectiveItems; // 0x20(0x10)
	bool Side; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float TimeLimit; // 0x34(0x04)
	bool TimeLimitPause; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t HintType; // 0x3c(0x04)
	bool ForceUpdate; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<int64_t> members; // 0x48(0x10)
	uint64_t SimpleQuestID; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MissionObjectiveItem
// Size: 0x70 (Inherited: 0x00)
struct FMissionObjectiveItem {
public:

	struct FString desc11; // 0x00(0x10)
	struct FString desc12; // 0x10(0x10)
	bool Complete; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString InteractTag; // 0x28(0x10)
	struct TArray<struct AActor*> InteractActors; // 0x38(0x10)
	int32_t PopupCount; // 0x48(0x04)
	bool ShowTitle; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32_t IdentityCode; // 0x50(0x04)
	float TextTimeLimit; // 0x54(0x04)
	bool BindHealth; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float Percent; // 0x5c(0x04)
	enum class EGPQuestActionMarkerType markerType; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t Index; // 0x64(0x04)
	int32_t marker; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MissionRewardsInfo
// Size: 0x28 (Inherited: 0x00)
struct FMissionRewardsInfo {
public:

	struct FString Icon; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	int32_t Num; // 0x20(0x04)
	bool Exp; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSkinParam
// Size: 0x18 (Inherited: 0x00)
struct FWeaponSkinParam {
public:

	struct TArray<struct FName> ParamNames; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AmmoDataItem
// Size: 0x20 (Inherited: 0x00)
struct FAmmoDataItem {
public:

	uint64_t ItemID; // 0x00(0x08)
	uint64_t Guid; // 0x08(0x08)
	int32_t Num; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	uint64_t BindPlayerId; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GunDescRow
// Size: 0x80 (Inherited: 0x10)
struct FGunDescRow : public FDescRowBase {
public:

	uint64_t DesKey; // 0x10(0x08)
	uint64_t DesId; // 0x18(0x08)
	int16_t Index; // 0x20(0x02)
	char pad_22[0x6]; // 0x22(0x06)
	uint64_t ItemID; // 0x28(0x08)
	uint64_t Guid; // 0x30(0x08)
	int16_t ParentIndex; // 0x38(0x02)
	char pad_3A[0x2]; // 0x3a(0x02)
	uint32_t ParentSocketId; // 0x3c(0x04)
	uint32_t SocketId; // 0x40(0x04)
	int16_t Child; // 0x44(0x02)
	char NodeType; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
	int32_t Durability; // 0x48(0x04)
	char BindType; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	uint64_t BindPlayerId; // 0x50(0x08)
	bool bRawBinded; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<uint64_t> TuneIds; // 0x60(0x10)
	struct TArray<float> TuneValues; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RightKeyTipsSkillData
// Size: 0x28 (Inherited: 0x00)
struct FRightKeyTipsSkillData {
public:

	struct FName Key; // 0x00(0x08)
	struct FText Desc; // 0x08(0x18)
	bool bOverrideDesc; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayerLocation
// Size: 0x18 (Inherited: 0x00)
struct FPlayerLocation {
public:

	int64_t Uin; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPActorChannelInfo
// Size: 0x14 (Inherited: 0x00)
struct FGPActorChannelInfo {
public:

	char pad_0[0x14]; // 0x00(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkInit
// Size: 0x150 (Inherited: 0x00)
struct FMarkInit {
public:

	struct FString MarkerTypeString; // 0x00(0x10)
	struct TWeakObjectPtr<struct AActor> TargetActor; // 0x10(0x08)
	struct APlayerController* Controller; // 0x18(0x08)
	struct TArray<enum class EMarkFeature> Features; // 0x20(0x10)
	struct UGPMarkerItemBase* MarkerItemPtr; // 0x30(0x08)
	char pad_38[0x20]; // 0x38(0x20)
	struct UPaperSprite* Sprite0; // 0x58(0x08)
	struct UPaperSprite* Sprite1; // 0x60(0x08)
	struct UPaperSprite* Sprite2; // 0x68(0x08)
	struct UPaperSprite* Sprite3; // 0x70(0x08)
	struct FColor Color0; // 0x78(0x04)
	struct FColor Color1; // 0x7c(0x04)
	struct AActor* Actor0; // 0x80(0x08)
	struct AActor* Actor1; // 0x88(0x08)
	struct UObject* Object0; // 0x90(0x08)
	struct UObject* Object1; // 0x98(0x08)
	int32_t Int0; // 0xa0(0x04)
	int32_t Int1; // 0xa4(0x04)
	float Float0; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	uint64_t Int2; // 0xb0(0x08)
	struct FString String0; // 0xb8(0x10)
	struct FText Text0; // 0xc8(0x18)
	struct FName Name0; // 0xe0(0x08)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMatrix Matrix0; // 0xf0(0x40)
	struct FVector Vector0; // 0x130(0x0c)
	char pad_13C[0x4]; // 0x13c(0x04)
	uint64_t Int64; // 0x140(0x08)
	char pad_148[0x8]; // 0x148(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CommonCountDownInfo
// Size: 0x30 (Inherited: 0x00)
struct FCommonCountDownInfo {
public:

	enum class ECountDownPriority CountDowType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText CountDownTitle; // 0x08(0x18)
	float EndCountDownTime; // 0x20(0x04)
	bool bShow; // 0x24(0x01)
	bool bUseTenSecondsWidgetShow; // 0x25(0x01)
	bool ColoredTitle; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
	int32_t UrgentTime; // 0x28(0x04)
	bool EmphasizeTen; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MissionTurnInItem
// Size: 0x60 (Inherited: 0x00)
struct FMissionTurnInItem {
public:

	struct TMap<int64_t, int32_t> DataMap; // 0x00(0x50)
	struct TArray<struct FNpcTurnInItem> Data; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.NpcTurnInItem
// Size: 0x68 (Inherited: 0x00)
struct FNpcTurnInItem {
public:

	struct TMap<struct FString, int32_t> DataMap; // 0x00(0x50)
	struct TArray<struct FItemTurnInItem> Data; // 0x50(0x10)
	int64_t Key; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ItemTurnInItem
// Size: 0x70 (Inherited: 0x00)
struct FItemTurnInItem {
public:

	struct TMap<int64_t, int32_t> DataMap; // 0x00(0x50)
	struct TArray<struct FMissionTurnInItemInfo> Data; // 0x50(0x10)
	struct FString Key; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MissionTurnInItemInfo
// Size: 0x28 (Inherited: 0x00)
struct FMissionTurnInItemInfo {
public:

	int64_t ID; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
	int32_t Num; // 0x18(0x04)
	int32_t numTotal; // 0x1c(0x04)
	int32_t gid; // 0x20(0x04)
	int32_t hasNum; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AttributeOpStructArray
// Size: 0x18 (Inherited: 0x00)
struct FAttributeOpStructArray {
public:

	struct FName AttribiteName; // 0x00(0x08)
	struct TArray<struct FAttributeOperateData> Datas; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AttributeOperateData
// Size: 0x18 (Inherited: 0x00)
struct FAttributeOperateData {
public:

	enum class AttributeAdditionType GameplayModOp; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FAttributeOperateValue> OperateValues; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AttributeOperateValue
// Size: 0x20 (Inherited: 0x00)
struct FAttributeOperateValue {
public:

	uint64_t ID; // 0x00(0x08)
	uint64_t BuffId; // 0x08(0x08)
	bool IsValid; // 0x10(0x01)
	bool isPause; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float Value; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDebugInfo
// Size: 0x18 (Inherited: 0x00)
struct FWeaponDebugInfo {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPGameModeLogicConfig
// Size: 0x30 (Inherited: 0x00)
struct FGPGameModeLogicConfig {
public:

	bool UseTPPDriving; // 0x00(0x01)
	bool SnapToGetOnOffDriving; // 0x01(0x01)
	bool DisableDeadBodyLootingFeature; // 0x02(0x01)
	bool DisableLiveSpectatingFeature; // 0x03(0x01)
	bool DisableMoveAndAttackedImpendingDeath; // 0x04(0x01)
	bool EnableCarryBody; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float RebornImpendingDeathHealthValue; // 0x08(0x04)
	float FastRescueRebornImpendingDeathHealthValue; // 0x0c(0x04)
	bool EnableParachute; // 0x10(0x01)
	bool ForceUseLocalBattleClassSkillSetting; // 0x11(0x01)
	bool ClientDefaultRecordMemoryReplayForKillcam; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	float KillCamTimeBufferBeforeDead; // 0x14(0x04)
	float KillCamTimeBufferAfterDead; // 0x18(0x04)
	float KillCamRecordHz; // 0x1c(0x04)
	struct FString KillCamHUDViewName; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SceneWeaponOnFireInfo
// Size: 0x08 (Inherited: 0x00)
struct FSceneWeaponOnFireInfo {
public:

	int32_t SceneWeaponID; // 0x00(0x04)
	int32_t CampId; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPPlayerUIN
// Size: 0x08 (Inherited: 0x00)
struct FGPPlayerUIN {
public:

	uint64_t Uin; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RedeployMarkInit
// Size: 0xd0 (Inherited: 0x00)
struct FRedeployMarkInit {
public:

	struct AActor* TargetActor; // 0x00(0x08)
	uint64_t UniqueId; // 0x08(0x08)
	struct APlayerController* Controller; // 0x10(0x08)
	struct TArray<enum class EMarkFeature> Features; // 0x18(0x10)
	struct UPaperSprite* Sprite0; // 0x28(0x08)
	struct UPaperSprite* Sprite1; // 0x30(0x08)
	struct UPaperSprite* Sprite2; // 0x38(0x08)
	struct UPaperSprite* Sprite3; // 0x40(0x08)
	struct FColor Color0; // 0x48(0x04)
	struct FColor Color1; // 0x4c(0x04)
	struct AActor* Actor0; // 0x50(0x08)
	struct AActor* Actor1; // 0x58(0x08)
	struct UObject* Object0; // 0x60(0x08)
	struct UObject* Object1; // 0x68(0x08)
	int32_t Int0; // 0x70(0x04)
	int32_t Int1; // 0x74(0x04)
	float Float0; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	uint64_t Int2; // 0x80(0x08)
	struct FString String0; // 0x88(0x10)
	struct FText Text0; // 0x98(0x18)
	struct FName Name0; // 0xb0(0x08)
	struct FVector TargetActorLocation; // 0xb8(0x0c)
	float TargetActorRotation; // 0xc4(0x04)
	uint64_t Int64; // 0xc8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityEntityQuery
// Size: 0xc0 (Inherited: 0x00)
struct FAbilityEntityQuery {
public:

	char pad_0[0xc0]; // 0x00(0xc0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityShareMemoryPool
// Size: 0x50 (Inherited: 0x00)
struct FAbilityShareMemoryPool {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ShareMemoryPoolHandle
// Size: 0x10 (Inherited: 0x00)
struct FShareMemoryPoolHandle {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityShareMemoryWithFreeList
// Size: 0x28 (Inherited: 0x00)
struct FAbilityShareMemoryWithFreeList {
public:

	char pad_0[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityShareMemoryChunk
// Size: 0x30 (Inherited: 0x00)
struct FAbilityShareMemoryChunk {
public:

	char pad_0[0x30]; // 0x00(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityShareMemory
// Size: 0x20 (Inherited: 0x00)
struct FAbilityShareMemory {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RepAmmoTimeLine
// Size: 0x20 (Inherited: 0x00)
struct FRepAmmoTimeLine {
public:

	struct TArray<struct FAmmoKeyFrame> Data; // 0x00(0x10)
	int32_t Front; // 0x10(0x04)
	int32_t Rear; // 0x14(0x04)
	int32_t MaxSize; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimLODConfigParam
// Size: 0x14 (Inherited: 0x00)
struct FAnimLODConfigParam {
public:

	int32_t Index; // 0x00(0x04)
	int32_t ExplicitlyAnimGraphLOD; // 0x04(0x04)
	int32_t ExplicitlyURO; // 0x08(0x04)
	int32_t TickRate; // 0x0c(0x04)
	bool TickReverse; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimNode_BlendCurveOnly
// Size: 0x68 (Inherited: 0x40)
struct FAnimNode_BlendCurveOnly : public FAnimNode_Base {
public:

	struct FPoseLink BasePose; // 0x40(0x10)
	struct FPoseLink CurvePose; // 0x50(0x10)
	enum class ECurveBlendOption_BCOnly CurveBlendOption; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimNode_BulletChain
// Size: 0x168 (Inherited: 0xf8)
struct FAnimNode_BulletChain : public FAnimNode_SkeletalControlBase {
public:

	int32_t CurrentBulletNum; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct TMap<int32_t, struct FBoneReference> BulletBoneMap; // 0x100(0x50)
	char pad_150[0x18]; // 0x150(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimNode_CustomBlendSpacePlayer
// Size: 0x318 (Inherited: 0x2f8)
struct FAnimNode_CustomBlendSpacePlayer : public FAnimNode_BlendSpacePlayer {
public:

	struct UAnimSequence* CacheDebugPtr; // 0x2f8(0x08)
	char pad_300[0x18]; // 0x300(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimNode_Parabola
// Size: 0x180 (Inherited: 0xf8)
struct FAnimNode_Parabola : public FAnimNode_SkeletalControlBase {
public:

	float InitSpeed; // 0xf8(0x04)
	float InitSpeedZ; // 0xfc(0x04)
	struct FVector StartLocaltion; // 0x100(0x0c)
	struct FBoneReference ParabolaBoneReference; // 0x10c(0x10)
	float LimitTime; // 0x11c(0x04)
	char pad_120[0x60]; // 0x120(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimNode_PartCopyBone
// Size: 0x78 (Inherited: 0x40)
struct FAnimNode_PartCopyBone : public FAnimNode_Base {
public:

	struct FPoseLink Source; // 0x40(0x10)
	struct FName SourceBoneName; // 0x50(0x08)
	struct USkeletalMesh* SrcSkeletalMesh; // 0x58(0x08)
	struct FName TargetBoneName; // 0x60(0x08)
	struct USkeletalMesh* TargetSkeletalMesh; // 0x68(0x08)
	char pad_70[0x8]; // 0x70(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MyStruct
// Size: 0x01 (Inherited: 0x00)
struct FMyStruct {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CloseEyeScreenFXInfo
// Size: 0x0c (Inherited: 0x00)
struct FCloseEyeScreenFXInfo {
public:

	float CloseEyeBlendInTime; // 0x00(0x04)
	float CloseEyeDurationTime; // 0x04(0x04)
	float CloseEyeBlendOutTime; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.KillInfoWeaponImageRow
// Size: 0x78 (Inherited: 0x10)
struct FKillInfoWeaponImageRow : public FDescRowBase {
public:

	struct TArray<uint64_t> WeaponIdArray; // 0x10(0x10)
	struct TArray<uint64_t> AttackerValueIdArray; // 0x20(0x10)
	struct TArray<int32_t> VehicleIdArray; // 0x30(0x10)
	enum class EWeaponItemType WeaponItemType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FText DescName; // 0x48(0x18)
	struct FSoftObjectPath WeaponImagePath; // 0x60(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FuzzyMatchIdCollection
// Size: 0x18 (Inherited: 0x00)
struct FFuzzyMatchIdCollection {
public:

	uint64_t WeaponID; // 0x00(0x08)
	uint64_t AttackValueId; // 0x08(0x08)
	int32_t VehicleId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleArmorDamageCorrectConfig
// Size: 0x40 (Inherited: 0x10)
struct FVehicleArmorDamageCorrectConfig : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	float Default; // 0x18(0x04)
	float Light; // 0x1c(0x04)
	float LightMiddle; // 0x20(0x04)
	float Middle; // 0x24(0x04)
	float Heavy; // 0x28(0x04)
	float Raid; // 0x2c(0x04)
	float RaidTankBoss; // 0x30(0x04)
	float LittleBird; // 0x34(0x04)
	float SOLHelicopter; // 0x38(0x04)
	float FSV; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageBuffValue
// Size: 0x48 (Inherited: 0x10)
struct FDamageBuffValue : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	struct FSoftObjectPath KillIconPath; // 0x18(0x18)
	struct FSoftObjectPath DeathInfoIconPath; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RangeBuffParam
// Size: 0x20 (Inherited: 0x00)
struct FRangeBuffParam {
public:

	float BuffApplyProbability; // 0x00(0x04)
	float DamageUpperBound; // 0x04(0x04)
	float DamageLowerBound; // 0x08(0x04)
	uint32_t BuffId; // 0x0c(0x04)
	struct TArray<enum class EDFMGamePlayMode> EnabledGameModes; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AttackerValueData
// Size: 0x70 (Inherited: 0x10)
struct FAttackerValueData : public FDescRowBase {
public:

	uint64_t AttackerValueId; // 0x10(0x08)
	struct FText DisplayName; // 0x18(0x18)
	enum class EDamageSystemDamageType DamageType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName DestructibleItemDemageType; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
	uint64_t DefaultDamageId; // 0x40(0x08)
	uint64_t DamageIdGameMode01; // 0x48(0x08)
	uint64_t DamageIdGameMode02; // 0x50(0x08)
	uint64_t DamageIdGameMode03; // 0x58(0x08)
	uint64_t DamageIdGameMode04; // 0x60(0x08)
	bool NeedHitMark; // 0x68(0x01)
	bool bHitDirForCharacter; // 0x69(0x01)
	bool NeedBeHitFeedback; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AttributeSystemTagRow
// Size: 0x18 (Inherited: 0x10)
struct FAttributeSystemTagRow : public FDescRowBase {
public:

	struct FName SystemTag; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AttributeOperatesRow
// Size: 0x48 (Inherited: 0x10)
struct FAttributeOperatesRow : public FDescRowBase {
public:

	uint32_t AttributeOperateID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<uint32_t> AttributeIDArray; // 0x18(0x10)
	enum class AttributeAdditionType GameplayModOp; // 0x28(0x01)
	bool bCustomValue; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float OperateValue; // 0x2c(0x04)
	struct FText Description; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DFMAttributeNameRow
// Size: 0x20 (Inherited: 0x10)
struct FDFMAttributeNameRow : public FDescRowBase {
public:

	uint32_t AttributeID; // 0x10(0x04)
	struct FName AttributeName; // 0x14(0x08)
	bool NotSyncToServer; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DFMAttributeModEffect
// Size: 0x10 (Inherited: 0x00)
struct FDFMAttributeModEffect {
public:

	struct FName AttributeName; // 0x00(0x08)
	enum class AttributeAdditionType GameplayModOp; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float OperateValue; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.HeadsetAudioPostProcessTableRow
// Size: 0x28 (Inherited: 0x10)
struct FHeadsetAudioPostProcessTableRow : public FDescRowBase {
public:

	int32_t HeadsetId; // 0x10(0x04)
	float AudioRangeScaler; // 0x14(0x04)
	float AmbientVolunme; // 0x18(0x04)
	float CutOfFrequence; // 0x1c(0x04)
	float Resonance; // 0x20(0x04)
	int32_t CompressorId; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.BulletHitAction
// Size: 0x20 (Inherited: 0x00)
struct FBulletHitAction {
public:

	enum class EBulletHitActionType HitActionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t AttackId; // 0x08(0x08)
	uint64_t BuffId; // 0x10(0x08)
	uint64_t CustomExcuteActionId; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CampConfig
// Size: 0x40 (Inherited: 0x08)
struct FCampConfig : public FTableRowBase {
public:

	int32_t CampId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText CampName; // 0x10(0x18)
	struct TArray<int32_t> FriendCamps; // 0x28(0x10)
	bool bEnableDamageInCamp; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CampInfo
// Size: 0x18 (Inherited: 0x00)
struct FCampInfo {
public:

	struct TArray<struct FTeamInfo> TeamList; // 0x00(0x10)
	int32_t Camp; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterSnapShotPoseType
// Size: 0x02 (Inherited: 0x00)
struct FCharacterSnapShotPoseType {
public:

	char pad_0[0x2]; // 0x00(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterAnimSnapshotConfig
// Size: 0x78 (Inherited: 0x10)
struct FCharacterAnimSnapshotConfig : public FDescRowBase {
public:

	enum class ECharacterSnatshotBasePose Poise; // 0x10(0x01)
	enum class ECharacterSnatshotSubPose Lean; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	uint64_t VehicleId; // 0x18(0x08)
	struct TArray<struct FCharacterAnimSnatshotInVehicle> Seat_PoseAnims; // 0x20(0x10)
	uint64_t SceneWeaponID; // 0x30(0x08)
	struct TArray<struct FCharacterSnatshotBodyPartTransform> BodyPartsTransform; // 0x38(0x10)
	float Z_Scale; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	/*struct TSoftObjectPtr<UAnimSequence>*/char PoseAnim[0x28]; // 0x50(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterSnatshotBodyPartTransform
// Size: 0x40 (Inherited: 0x00)
struct FCharacterSnatshotBodyPartTransform {
public:

	struct FName BoneName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform BoneTransform; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterAnimSnatshotInVehicle
// Size: 0x78 (Inherited: 0x00)
struct FCharacterAnimSnatshotInVehicle {
public:

	struct FName SeatName; // 0x00(0x08)
	/*struct TSoftObjectPtr<UAnimSequence>*/char PoseAnim[0x28]; // 0x08(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char LeanOutPoseAnim[0x28]; // 0x30(0x28)
	struct TArray<struct FCharacterSnatshotBodyPartTransform> BodyPartsTransform; // 0x58(0x10)
	struct TArray<struct FCharacterSnatshotBodyPartTransform> LeanOutBodyPartsTransform; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AddAtrributeOperateParam
// Size: 0x10 (Inherited: 0x00)
struct FAddAtrributeOperateParam {
public:

	uint32_t BuffId; // 0x00(0x04)
	uint32_t BuffGUID; // 0x04(0x04)
	uint32_t EquipmentId; // 0x08(0x04)
	int32_t SkillId; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.LaserLerpInfo
// Size: 0x10 (Inherited: 0x00)
struct FLaserLerpInfo {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ScopeCollection
// Size: 0x10 (Inherited: 0x00)
struct FScopeCollection {
public:

	/*struct TArray<struct TScriptInterface<IRangeScopeInterface>>*/char RangeScopes[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayerDamageValidateStat
// Size: 0x60 (Inherited: 0x00)
struct FPlayerDamageValidateStat {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	struct TMap<int64_t, int32_t> FaildCntMap; // 0x08(0x50)
	int32_t RequestHitCnt; // 0x58(0x04)
	int32_t FaildCnt; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageValidateStat
// Size: 0x18 (Inherited: 0x00)
struct FDamageValidateStat {
public:

	int64_t RuleId; // 0x00(0x08)
	int32_t AccpetCnt; // 0x08(0x04)
	int32_t AbortCnt; // 0x0c(0x04)
	int32_t AbortOnlyLogCnt; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.C2SBatchMakeDamage
// Size: 0x10 (Inherited: 0x00)
struct FC2SBatchMakeDamage {
public:

	struct TArray<struct FC2SMakeDamage> DamageItems; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.C2SMakeDamage
// Size: 0x180 (Inherited: 0x00)
struct FC2SMakeDamage {
public:

	uint64_t Guid; // 0x00(0x08)
	struct FHitResult HitResult; // 0x08(0x88)
	uint64_t AttackId; // 0x90(0x08)
	struct AActor* MakerActor; // 0x98(0x08)
	struct AActor* MakerInstigator; // 0xa0(0x08)
	struct AActor* Taker; // 0xa8(0x08)
	uint64_t InstigatorUin; // 0xb0(0x08)
	uint64_t DamageTakerUin; // 0xb8(0x08)
	enum class EDamageSystemDamageType DamageType; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	struct FVector MakerLocation; // 0xc4(0x0c)
	struct FVector MakerRotation; // 0xd0(0x0c)
	struct FVector MakerInstigatorLocation; // 0xdc(0x0c)
	struct FVector MakerInstigatorRotation; // 0xe8(0x0c)
	struct FVector TakerLocation; // 0xf4(0x0c)
	struct FVector TakerRotation; // 0x100(0x0c)
	float StartTime; // 0x10c(0x04)
	struct FVector PointStartLocation; // 0x110(0x0c)
	struct FVector PointDirection; // 0x11c(0x0c)
	struct FVector RadialLocation; // 0x128(0x0c)
	char pad_134[0x4]; // 0x134(0x04)
	struct TArray<struct AActor*> IgnoreActors; // 0x138(0x10)
	struct TArray<struct UClass*> IngoreClass; // 0x148(0x10)
	enum class EDamageType DamageTag; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct FGameplayTagContainer DamageTagsContainer; // 0x160(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.S2CDamageApply_Radial
// Size: 0x30 (Inherited: 0x00)
struct FS2CDamageApply_Radial {
public:

	struct TArray<struct FS2CDamageApplyItem_Radial> DamageItems; // 0x00(0x10)
	struct AActor* MakerActor; // 0x10(0x08)
	struct AActor* MakerInstigator; // 0x18(0x08)
	struct FVector RadialLocation; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.S2CDamageApplyItem_Radial
// Size: 0x38 (Inherited: 0x00)
struct FS2CDamageApplyItem_Radial {
public:

	uint64_t Guid; // 0x00(0x08)
	float HPDamage; // 0x08(0x04)
	float ArmorDamage; // 0x0c(0x04)
	struct AActor* Taker; // 0x10(0x08)
	uint64_t AttackId; // 0x18(0x08)
	bool bBlock; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FVector_NetQuantize MakerOwnerLocation; // 0x24(0x0c)
	int32_t HitNum; // 0x30(0x04)
	bool bBreakArmor; // 0x34(0x01)
	bool bBreakHelmetArmor; // 0x35(0x01)
	char TakerSourceStatus; // 0x36(0x01)
	char TakerResultStatus; // 0x37(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.S2CBatchDamageApply
// Size: 0x10 (Inherited: 0x00)
struct FS2CBatchDamageApply {
public:

	struct TArray<struct FS2CDamageApply> DamageItems; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.S2CDamageApply
// Size: 0x108 (Inherited: 0x00)
struct FS2CDamageApply {
public:

	uint64_t Guid; // 0x00(0x08)
	uint64_t FireId; // 0x08(0x08)
	float HPDamage; // 0x10(0x04)
	float ArmorDamage; // 0x14(0x04)
	struct FHitResult HitResult; // 0x18(0x88)
	struct AActor* MakerActor; // 0xa0(0x08)
	struct AActor* MakerInstigator; // 0xa8(0x08)
	struct AActor* Taker; // 0xb0(0x08)
	char TakerSourceStatus; // 0xb8(0x01)
	char TakerResultStatus; // 0xb9(0x01)
	char ArmorLevel; // 0xba(0x01)
	char pad_BB[0x5]; // 0xbb(0x05)
	int64_t AttackerValueId; // 0xc0(0x08)
	bool bBreakArmor; // 0xc8(0x01)
	bool bBreakHelmetArmor; // 0xc9(0x01)
	enum class EDamageType HitDamageType; // 0xca(0x01)
	char pad_CB[0x1]; // 0xcb(0x01)
	float CameraSwayHitScale; // 0xcc(0x04)
	float GunSwayHitScale; // 0xd0(0x04)
	struct FVector_NetQuantize MakerOwnerLocation; // 0xd4(0x0c)
	struct FGameplayTagContainer TagContainer; // 0xe0(0x20)
	enum class EDamageSystemDamageType DamageType; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.S2CRequestPointHitActionFaild
// Size: 0x18 (Inherited: 0x00)
struct FS2CRequestPointHitActionFaild {
public:

	uint64_t Guid; // 0x00(0x08)
	uint64_t FaildRuleId; // 0x08(0x08)
	enum class EDamageValidateResult ResultType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t ResultCode; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageItem
// Size: 0x10 (Inherited: 0x00)
struct FDamageItem {
public:

	struct FName Name; // 0x00(0x08)
	float Value; // 0x08(0x04)
	enum class EDamageModifyType ModifyType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageConstId
// Size: 0x01 (Inherited: 0x00)
struct FDamageConstId {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageSystemDamageTypeName
// Size: 0x01 (Inherited: 0x00)
struct FDamageSystemDamageTypeName {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RadialSamplePoint
// Size: 0x14 (Inherited: 0x00)
struct FRadialSamplePoint {
public:

	struct FVector Point; // 0x00(0x0c)
	struct FName BoneName; // 0x0c(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponFireRepValidateInfo
// Size: 0x88 (Inherited: 0x00)
struct FWeaponFireRepValidateInfo {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	uint64_t FireId; // 0x08(0x08)
	uint64_t AmmoId; // 0x10(0x08)
	bool bAim; // 0x18(0x01)
	bool bSuccess; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32_t RemainBulletNum; // 0x1c(0x04)
	float FireTimeStamp; // 0x20(0x04)
	float ClientLogicFireTimeStamp; // 0x24(0x04)
	float ServerDeltaTime; // 0x28(0x04)
	struct FVector WeaponPosition; // 0x2c(0x0c)
	struct FRotator WeaponRotator; // 0x38(0x0c)
	struct FVector MakerInstigatorPosition; // 0x44(0x0c)
	struct FRotator MakerInstigatorRotation; // 0x50(0x0c)
	int32_t DamageApplyNum; // 0x5c(0x04)
	int32_t ZoomFovOnFire; // 0x60(0x04)
	struct FVector2D RecoilDelta; // 0x64(0x08)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString LightFeatureStr; // 0x70(0x10)
	int32_t ContinueFireNum; // 0x80(0x04)
	enum class EWeaponFireValidateFaildReason FaildReason; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageValidateRuleRow
// Size: 0x58 (Inherited: 0x10)
struct FDamageValidateRuleRow : public FDescRowBase {
public:

	enum class EDamageValidateType DamageValidateType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	int64_t DamageValidateRuleId; // 0x18(0x08)
	/*struct TSoftClassPtr<UObject>*/char RuleClass[0x28]; // 0x20(0x28)
	struct UDamageValidationRuleBase* RuleInstance; // 0x48(0x08)
	char bEnable : 1; // 0x50(0x01)
	char bDebug : 1; // 0x50(0x01)
	char pad_50_2 : 6; // 0x50(0x01)
	bool bAbortOnlySendLog; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float AllowDiff; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DataTableConstrainRow
// Size: 0x40 (Inherited: 0x08)
struct FDataTableConstrainRow : public FTableRowBase {
public:

	/*struct TSoftObjectPtr<UDataTable>*/char DataTable[0x28]; // 0x08(0x28)
	struct TArray<struct FTableColumnConstrain> TableColumnConstrains; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TransformHistoryData
// Size: 0x20 (Inherited: 0x00)
struct FTransformHistoryData {
public:

	struct TArray<struct FTransformHistoryDataItem> DataItems; // 0x00(0x10)
	float LifeSpan; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TransformHistoryDataItem
// Size: 0x40 (Inherited: 0x00)
struct FTransformHistoryDataItem {
public:

	float Time; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DPVSConnectionInfo
// Size: 0x40 (Inherited: 0x00)
struct FDPVSConnectionInfo {
public:

	struct TArray<struct FDPVSConnectionActorInfo> Actor; // 0x00(0x10)
	char pad_10[0x30]; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DPVSConnectionActorInfo
// Size: 0x0c (Inherited: 0x00)
struct FDPVSConnectionActorInfo {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DPVSActorInfo
// Size: 0x20 (Inherited: 0x00)
struct FDPVSActorInfo {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RandomKickTransItem
// Size: 0x30 (Inherited: 0x00)
struct FRandomKickTransItem {
public:

	float KickTransScaleBase; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	/*struct TSoftObjectPtr<UCurveVector>*/char TranslationCurve[0x28]; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.LevelSubsystemContainer
// Size: 0x50 (Inherited: 0x00)
struct FLevelSubsystemContainer {
public:

	struct TMap<struct UClass*, struct ALevelSubsystem*> LevelSubsystemMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.EndAbilityOption
// Size: 0x03 (Inherited: 0x00)
struct FEndAbilityOption {
public:

	bool EquipAnim; // 0x00(0x01)
	bool CastUseCD; // 0x01(0x01)
	bool DestoryAttachMesh; // 0x02(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillLogicStateProperty
// Size: 0x20 (Inherited: 0x00)
struct FSkillLogicStateProperty {
public:

	int32_t LogicID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FVector> Params; // 0x08(0x10)
	bool bool_param; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillLogicClientState
// Size: 0x0c (Inherited: 0x00)
struct FSkillLogicClientState {
public:

	struct FName LogicName; // 0x00(0x08)
	int32_t ClientLocalExcute; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillBtnCallData
// Size: 0x18 (Inherited: 0x00)
struct FSkillBtnCallData {
public:

	int32_t LogicID; // 0x00(0x04)
	struct FName LogicName; // 0x04(0x08)
	struct FName FunctionName; // 0x0c(0x08)
	enum class ESkillBtnCall Call; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillBehaviorData
// Size: 0x18 (Inherited: 0x00)
struct FSkillBehaviorData {
public:

	int32_t LogicID; // 0x00(0x04)
	struct FName LogicName; // 0x04(0x08)
	struct FName FunctionName; // 0x0c(0x08)
	enum class ESkillBehavior Call; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAIAnimProxyFootIK
// Size: 0x64 (Inherited: 0x00)
struct FGPAIAnimProxyFootIK {
public:

	bool bEnableFootLock; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FootLockBlendOutTime; // 0x04(0x04)
	float LeftFootLockAlpha; // 0x08(0x04)
	float RightFootLockAlpha; // 0x0c(0x04)
	struct FVector LeftFootLockLocation; // 0x10(0x0c)
	struct FVector RightFootLockLocation; // 0x1c(0x0c)
	char pad_28[0x8]; // 0x28(0x08)
	float LeftFootIKAlpha; // 0x30(0x04)
	float RightFootIKAlpha; // 0x34(0x04)
	bool bLeftFootGrounded; // 0x38(0x01)
	bool bRightFootGrounded; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	struct FVector LeftFootGroundLocation; // 0x3c(0x0c)
	struct FVector RightFootGroundLocation; // 0x48(0x0c)
	struct FVector HipsTargetLocation; // 0x54(0x0c)
	char pad_60[0x4]; // 0x60(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RootMotionAnimBlendInfo
// Size: 0x38 (Inherited: 0x00)
struct FRootMotionAnimBlendInfo {
public:

	struct UAnimMontage* Anim; // 0x00(0x08)
	struct UAnimSequence* LocoAnim; // 0x08(0x08)
	char pad_10[0x28]; // 0x10(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DeathAnimConfigWithDirRange
// Size: 0x30 (Inherited: 0x00)
struct FDeathAnimConfigWithDirRange {
public:

	float YawMin; // 0x00(0x04)
	float YawMax; // 0x04(0x04)
	struct FName AnimName; // 0x08(0x08)
	struct TArray<struct FName> ExtraAnimNames; // 0x10(0x10)
	struct TArray<struct FName> InplaceAimsNames; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.OverrideAnimAssetArray
// Size: 0x10 (Inherited: 0x00)
struct FOverrideAnimAssetArray {
public:

	struct TArray<struct FOverrideAnimAsset> OverrideAnimAssets; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.OverrideAnimAsset
// Size: 0x18 (Inherited: 0x00)
struct FOverrideAnimAsset {
public:

	struct UAnimationAsset* OverrideAsset; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimDataManager
// Size: 0x50 (Inherited: 0x00)
struct FAnimDataManager {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimDataTableRow
// Size: 0x430 (Inherited: 0x08)
struct FAnimDataTableRow : public FTableRowBase {
public:

	struct TMap<enum class EAnimTacticalActionType, struct FTacticalActionAnimRow> TacticalActionAnimTable; // 0x08(0x50)
	struct TMap<enum class EAnimClimbLadderType, struct FClimbLadderAnimRow> ClimbLadderAnimTable; // 0x58(0x50)
	struct TMap<enum class EAnimParachuteType, struct FParachuteAnimRow> ParachuteAnimTable; // 0xa8(0x50)
	struct TMap<enum class EAnimRaiseWatchType, struct FRaiseWatchAnimRow> RaiseWatchAnimTable; // 0xf8(0x50)
	struct TMap<enum class EAnimMarkingType, struct FMarkingAnimRow> MarkingAnimTable; // 0x148(0x50)
	struct TMap<enum class EAnimApplySprayType, struct FApplySprayAnimRow> ApplySprayAnimTable; // 0x198(0x50)
	struct TMap<enum class EAnimFirefightingType, struct FFirefightingAnimRow> FirefightingAnimTable; // 0x1e8(0x50)
	struct TMap<enum class EAnimCarryBodyType, struct FCarryBodyAnimRow> CarryBodyAnimTable; // 0x238(0x50)
	struct TMap<enum class EAnimKnockbackType, struct FKnockbackAnimRow> KnockbackAnimTable; // 0x288(0x50)
	char pad_2D8[0x158]; // 0x2d8(0x158)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPCommonAnimationData
// Size: 0x78 (Inherited: 0x00)
struct FGPCommonAnimationData {
public:

	struct AWeaponBase* WeaponInv; // 0x00(0x08)
	/*struct TScriptInterface<IWeaponDataComponentAnimInterface>*/char WeaponAnimDataComponent[0x10]; // 0x08(0x10)
	/*struct TScriptInterface<IWeaponDataComponentAppearanceInterface>*/char WeaponAppearanceDataComponent[0x10]; // 0x18(0x10)
	struct UWeaponDataComponentAdapter* WeaponDataComponentAdapter; // 0x28(0x08)
	struct UWeaponDataComponentAnim* WeaponAnimDataComponentRealComp; // 0x30(0x08)
	/*struct TScriptInterface<IWeaponFuncComponentAdditiveAnimInterface>*/char WeaponAdditiveAnimFuncComponent[0x10]; // 0x38(0x10)
	/*struct TScriptInterface<IWeaponFuncComponentInspectInterface>*/char WeaponFuncInspect[0x10]; // 0x48(0x10)
	/*struct TScriptInterface<IGPWeaponProxyInterface>*/char WeaponProxy[0x10]; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.IntroVehicleAIAnimInstanceProxy
// Size: 0x790 (Inherited: 0x748)
struct FIntroVehicleAIAnimInstanceProxy : public FAnimInstanceProxy {
public:

	float DriveTurnX; // 0x748(0x04)
	float DriveTurnY; // 0x74c(0x04)
	struct FVector SiteRootLocation; // 0x750(0x0c)
	struct FRotator SiteRootRotation; // 0x75c(0x0c)
	bool bInVehicle; // 0x768(0x01)
	bool bIsGetOff; // 0x769(0x01)
	bool bIsDead; // 0x76a(0x01)
	bool bIsAlert; // 0x76b(0x01)
	char pad_76C[0x4]; // 0x76c(0x04)
	struct AGPCharacter* OwnerPawn; // 0x770(0x08)
	struct UGPVehicleDataComponent* VehicleDataComponent; // 0x778(0x08)
	struct UGPFightStateComponent* FightStateComponent; // 0x780(0x08)
	char pad_788[0x8]; // 0x788(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAnimProxyConfiguration
// Size: 0x28 (Inherited: 0x00)
struct FGPAnimProxyConfiguration {
public:

	float VelocityBlendInterpSpeed; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FCustomizedOrientationWarpingAngleSetting CustomizedOrientationWarpingAngleSetting; // 0x08(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAnimInstanceProxy_PlayerIK
// Size: 0x750 (Inherited: 0x748)
struct FGPAnimInstanceProxy_PlayerIK : public FAnimInstanceProxy {
public:

	char pad_748[0x8]; // 0x748(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAnimProxyFootIK
// Size: 0x50 (Inherited: 0x00)
struct FGPAnimProxyFootIK {
public:

	float LeftFootLockAlpha; // 0x00(0x04)
	float RightFootLockAlpha; // 0x04(0x04)
	struct FVector LeftFootLockLocation; // 0x08(0x0c)
	struct FVector RightFootLockLocation; // 0x14(0x0c)
	struct FRotator LeftFootLockRotation; // 0x20(0x0c)
	struct FRotator RightFootLockRotation; // 0x2c(0x0c)
	float LeftFootIKAlpha; // 0x38(0x04)
	float RightFootIKAlpha; // 0x3c(0x04)
	struct FVector Velocity; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RepTurningInfo
// Size: 0x0c (Inherited: 0x00)
struct FRepTurningInfo {
public:

	float StartYawValue; // 0x00(0x04)
	float TargetYawValue; // 0x04(0x04)
	bool IsTurning; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AIPhysBlendInfo
// Size: 0x18 (Inherited: 0x00)
struct FAIPhysBlendInfo {
public:

	struct FName BoneName; // 0x00(0x08)
	float BlendRate; // 0x08(0x04)
	float CurrentBlendAlpha; // 0x0c(0x04)
	float BlendOutStartTime; // 0x10(0x04)
	float EnablePhysTime; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimMontageBlending
// Size: 0x18 (Inherited: 0x00)
struct FAnimMontageBlending {
public:

	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	struct UAnimMontage* AnimMontage2; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RepAnimInfo
// Size: 0x28 (Inherited: 0x00)
struct FRepAnimInfo {
public:

	struct UAnimSequenceBase* AnimSequence; // 0x00(0x08)
	enum class EAnimationPlayType AnimPlayType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName StartSection; // 0x0c(0x08)
	int32_t ForcePlayBit; // 0x14(0x04)
	char NeedStopBit : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float PlayRate; // 0x1c(0x04)
	bool bJumpToAction; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RuntimeSmallActionData
// Size: 0x14 (Inherited: 0x00)
struct FRuntimeSmallActionData {
public:

	float DeltaTime2TriggerChanceScale; // 0x00(0x04)
	float CdTime; // 0x04(0x04)
	float CanTriggerTime; // 0x08(0x04)
	float BaseTriggerChance; // 0x0c(0x04)
	float RandomFailAddChance; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SequenceAnimList
// Size: 0x18 (Inherited: 0x00)
struct FSequenceAnimList {
public:

	struct TArray<struct FSequenceAnim> AnimList; // 0x00(0x10)
	float StartTime; // 0x10(0x04)
	int32_t PlayState; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SequenceAnim
// Size: 0x20 (Inherited: 0x00)
struct FSequenceAnim {
public:

	struct FSoftObjectPath AnimPath; // 0x00(0x18)
	float Length; // 0x18(0x04)
	enum class EAnimationPlayType PlayType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPRootMotionAnimTrackData
// Size: 0x2c8 (Inherited: 0x00)
struct FGPRootMotionAnimTrackData {
public:

	struct FFloatCurve PosXCurve; // 0x00(0xb0)
	struct FFloatCurve PosYCurve; // 0xb0(0xb0)
	struct FFloatCurve PosZCurve; // 0x160(0xb0)
	struct FFloatCurve RotYawCurve; // 0x210(0xb0)
	char pad_2C0[0x8]; // 0x2c0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SequenceAnimListParam
// Size: 0x10 (Inherited: 0x00)
struct FSequenceAnimListParam {
public:

	struct TArray<struct FSequenceAnim> AnimList; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.LocomotionMovePara
// Size: 0x20 (Inherited: 0x00)
struct FLocomotionMovePara {
public:

	float AnimWalkStandardSpeed; // 0x00(0x04)
	float AnimRunStandardSpeed; // 0x04(0x04)
	struct UCurveFloat* AnimSprintRateCurve; // 0x08(0x08)
	float AnimSprintStandardSpeed; // 0x10(0x04)
	float AnimSuperSprintStandardSpeed; // 0x14(0x04)
	float AimSprintScaleFromVelocity; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPGunAOProxy
// Size: 0x10 (Inherited: 0x00)
struct FGPGunAOProxy {
public:

	float GunAOHorAxis; // 0x00(0x04)
	float GunAOVerAxis; // 0x04(0x04)
	float GunHorAOFadeoutDelayTime; // 0x08(0x04)
	float HorAOSensibility; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimSpeedInfo
// Size: 0x08 (Inherited: 0x00)
struct FAnimSpeedInfo {
public:

	float NormalizedSpeed; // 0x00(0x04)
	float MaxMoveSpeed; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DFMEffectArray
// Size: 0x08 (Inherited: 0x00)
struct FDFMEffectArray {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DFMEffectData
// Size: 0x0c (Inherited: 0x00)
struct FDFMEffectData {
public:

	float GameplayEffectDuration; // 0x00(0x04)
	float GameplayEffectPeriod; // 0x04(0x04)
	float GameplayEffectValue; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.OnGPAttributeChangeData
// Size: 0x60 (Inherited: 0x00)
struct FOnGPAttributeChangeData {
public:

	char pad_0[0x40]; // 0x00(0x40)
	struct AActor* Instigator; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AddAttributeArrayHandle
// Size: 0x10 (Inherited: 0x00)
struct FAddAttributeArrayHandle {
public:

	struct TArray<struct FAddAttributeHandle> AttributeHandles; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AddAttributeHandle
// Size: 0x40 (Inherited: 0x00)
struct FAddAttributeHandle {
public:

	char pad_0[0x8]; // 0x00(0x08)
	uint64_t AttributeRowId; // 0x08(0x08)
	struct TArray<struct FAdditionData> AdditionDatas; // 0x10(0x10)
	float BaseValue; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	uint64_t Guid; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AdditionData
// Size: 0x14 (Inherited: 0x00)
struct FAdditionData {
public:

	char pad_0[0x4]; // 0x00(0x04)
	struct FName AttributeName; // 0x04(0x08)
	uint32_t ModifierIndex; // 0x0c(0x04)
	enum class AttributeAdditionType GameplayModOp; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AttributeSetHealthReplicationItem
// Size: 0x38 (Inherited: 0x20)
struct FAttributeSetHealthReplicationItem : public FPropertyReplicationItem {
public:

	float Health; // 0x20(0x04)
	float ShieldHealth; // 0x24(0x04)
	float ArmorHealth; // 0x28(0x04)
	float HelmetArmorHealth; // 0x2c(0x04)
	float IsAlive; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FakeFootstepRecord
// Size: 0x30 (Inherited: 0x00)
struct FFakeFootstepRecord {
public:

	struct AGPCharacter* CHARACTER; // 0x00(0x08)
	float LastPlayTime; // 0x08(0x04)
	enum class EGPAudioFootSoundType LastFootstepType; // 0x0c(0x01)
	bool bDistanceAllowFakeFootstep; // 0x0d(0x01)
	enum class EFakeFootstepStatus FakeFootstepStatus; // 0x0e(0x01)
	char pad_F[0x21]; // 0x0f(0x21)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FootstepAudioConfigRow
// Size: 0xf0 (Inherited: 0x10)
struct FFootstepAudioConfigRow : public FDescRowBase {
public:

	struct TMap<enum class EGPAudioFootSoundType, float> FootstepStateLength; // 0x10(0x50)
	struct TMap<enum class EGPAudioFootSoundType, float> AIFootstepStateLength; // 0x60(0x50)
	int32_t bUseFakeFootStepAnimLOD; // 0xb0(0x04)
	float EnableFakeFootstepDistance; // 0xb4(0x04)
	float DisableFakeFootstepDistance; // 0xb8(0x04)
	float EnableFakeFootstepDistanceMP; // 0xbc(0x04)
	float DisableFakeFootstepDistanceMP; // 0xc0(0x04)
	struct FName WaterRTPCName; // 0xc4(0x08)
	float MinWaterFootstepRTPCValue; // 0xcc(0x04)
	float MaxWaterFootstepRTPCValue; // 0xd0(0x04)
	float JumpLowHeight; // 0xd4(0x04)
	float JumpMiddleHeight; // 0xd8(0x04)
	float JumpHighHeight; // 0xdc(0x04)
	float AICrackTriggerCDTimeMin; // 0xe0(0x04)
	float AICrackTriggerCDTimeMax; // 0xe4(0x04)
	float FlybyTriggerCDTimeMin; // 0xe8(0x04)
	float FlybyTriggerCDTimeMax; // 0xec(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AudioSubtitleInfo
// Size: 0x38 (Inherited: 0x00)
struct FAudioSubtitleInfo {
public:

	struct FText SubtitleText; // 0x00(0x18)
	struct UGPAudioEventAsset* AudioEvent; // 0x18(0x08)
	enum class ESubtitlePriorityType SubtitlePriority; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float SubtitleShowingDuration; // 0x24(0x04)
	enum class ESubtitleHudType HUDType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct AActor* SpeakerActor; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AIDialogSubtitleTableItem
// Size: 0x48 (Inherited: 0x10)
struct FAIDialogSubtitleTableItem : public FDescRowBase {
public:

	struct FText SubtitleText; // 0x10(0x18)
	struct UGPAudioEventAsset* AudioEvent; // 0x28(0x08)
	struct FString Comment; // 0x30(0x10)
	float DisplayDistance; // 0x40(0x04)
	float SubtitleDuring; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ServerPlayerFullDataInfo
// Size: 0x58 (Inherited: 0x00)
struct FServerPlayerFullDataInfo {
public:

	struct AGPNetworkPlayerController* LocalPlayerController; // 0x00(0x08)
	struct AAIController* LocalAIController; // 0x08(0x08)
	bool IsAI; // 0x10(0x01)
	bool isAILabAI; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct AGPCharacterBase* LocalPlayerPawn; // 0x18(0x08)
	struct AController* LocalFocusPlayer; // 0x20(0x08)
	struct AGPCharacterBase* LocalFocusPlayerPawn; // 0x28(0x08)
	struct AActor* LastLocalFocusActor; // 0x30(0x08)
	struct AActor* LocalFocusActor; // 0x38(0x08)
	int32_t CurrentSpectateIndex; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct AController*> CurrentSpectatingMePlayers; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CalcPlayerViewInfo
// Size: 0x10 (Inherited: 0x00)
struct FCalcPlayerViewInfo {
public:

	struct FRotator PlayerRot; // 0x00(0x0c)
	float ServerAccTimeStamp; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CameraMovementWhenBeHitConfig
// Size: 0x30 (Inherited: 0x10)
struct FCameraMovementWhenBeHitConfig : public FDescRowBase {
public:

	int32_t CameraMoveRecID; // 0x10(0x04)
	float CameraVerticalMoveValue; // 0x14(0x04)
	float CameraHorizontalMoveValue; // 0x18(0x04)
	float CameraMoveEaseTime; // 0x1c(0x04)
	enum class EGPWeaponEasingType CameraMoveEaseType; // 0x20(0x01)
	bool bRecoverCameraMoveEase; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float CameraShakeFactor; // 0x24(0x04)
	struct UCurveFloat* CurveModifyFactor; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterStateAudioEventConfig
// Size: 0x30 (Inherited: 0x00)
struct FCharacterStateAudioEventConfig {
public:

	enum class EStateAudioEventType StateAudioEventType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Priority; // 0x04(0x04)
	struct UGPAudioEventAsset* StateAudioEventAsset; // 0x08(0x08)
	struct TArray<enum class EDFMGamePlayMode> EffectiveGamePlayModes; // 0x10(0x10)
	struct FString StateName; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterStateAudioEventConfigRow
// Size: 0x50 (Inherited: 0x10)
struct FCharacterStateAudioEventConfigRow : public FDescRowBase {
public:

	enum class EStateAudioEventType StateAudioEventType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t Priority; // 0x14(0x04)
	struct FSoftObjectPath StateAudioEventAsset; // 0x18(0x18)
	struct FString StateName; // 0x30(0x10)
	struct TArray<enum class EDFMGamePlayMode> EffectiveGamePlayModes; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ExpertVoiceTableRow
// Size: 0x30 (Inherited: 0x10)
struct FExpertVoiceTableRow : public FDescRowBase {
public:

	int64_t ExpertId; // 0x10(0x08)
	struct FSoftObjectPath ExpertSpeakConfigTablePath; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterSpeakItemInfo
// Size: 0x110 (Inherited: 0x10)
struct FCharacterSpeakItemInfo : public FDescRowBase {
public:

	enum class ECharacterAudioType AudioType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString AudioTypeString; // 0x18(0x10)
	enum class ECharacterAudioPlayMode PlayMode; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<enum class EDFMGamePlayMode> EffectiveGamePlayModes; // 0x30(0x10)
	bool bNotifyServer; // 0x40(0x01)
	bool bEnableInSOL; // 0x41(0x01)
	bool bFake3P; // 0x42(0x01)
	bool bAllowTriggerWhenDie; // 0x43(0x01)
	bool bAllowTriggerWhenImpendingDeath; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float TriggerDistance; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<enum class ECharacterAudioListener> SpeakNeedPlayers; // 0x50(0x10)
	struct TArray<enum class ECharacterAudioListener> ListenerArray; // 0x60(0x10)
	struct TArray<enum class ECharacterAudioListener> RandomSpeakers; // 0x70(0x10)
	bool bTriggerByTeamRadio; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float CdTime; // 0x84(0x04)
	int32_t Priority; // 0x88(0x04)
	bool bCanBeInterrupt; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float MaxWaitingTime; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FString StateEventToClear; // 0x98(0x10)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AudioAsset[0x28]; // 0xa8(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AudioStopAsset[0x28]; // 0xd0(0x28)
	bool bUseRandomEvent; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	int32_t AvoidRepeatNum; // 0xfc(0x04)
	/*struct TArray<struct TSoftObjectPtr<UGPAudioEventAsset>>*/char RandomEventsPool[0x10]; // 0x100(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharOutLineEffectData
// Size: 0x14 (Inherited: 0x00)
struct FCharOutLineEffectData {
public:

	int32_t OutLineEffectBitArry; // 0x00(0x04)
	int32_t ProxSensorMarkKey; // 0x04(0x04)
	int32_t PenetratingGunMarkKey; // 0x08(0x04)
	int32_t BreakthroughDefenderMarkKey; // 0x0c(0x04)
	int32_t OnlyMarkerMarkKey; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharMarkerData
// Size: 0x18 (Inherited: 0x00)
struct FCharMarkerData {
public:

	bool Active; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t OwnerCampID; // 0x04(0x04)
	int32_t OwnerTeamID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	uint64_t OwnerUin; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterTableName
// Size: 0x01 (Inherited: 0x00)
struct FCharacterTableName {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPCollisionManager
// Size: 0x38 (Inherited: 0x00)
struct FGPCollisionManager {
public:

	struct UPrimitiveComponent* CapsuleComp; // 0x00(0x08)
	struct UPrimitiveComponent* ProneComp; // 0x08(0x08)
	struct TArray<struct FGPCollisionInfoSimple> ActivateProneCollisionState; // 0x10(0x10)
	struct TArray<struct FGPCollisionInfoSimple> ActivateCapsuleCollisionState; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPCollisionInfoSimple
// Size: 0x08 (Inherited: 0x00)
struct FGPCollisionInfoSimple {
public:

	enum class ECollisionState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Priority; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPCollisionItem
// Size: 0x48 (Inherited: 0x10)
struct FGPCollisionItem : public FDescRowBase {
public:

	enum class ECollisionState State; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t Priority; // 0x14(0x04)
	struct FName ColliisonProfile; // 0x18(0x08)
	enum class ECollisionChannel ObjectType; // 0x20(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x21(0x01)
	struct FCollisionResponseContainer ResponseToChannels; // 0x22(0x20)
	bool NeedActivate; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ReplayNetworkGUID
// Size: 0x10 (Inherited: 0x00)
struct FReplayNetworkGUID {
public:

	uint32_t RawValue; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterMovementLogInfo
// Size: 0x138 (Inherited: 0x00)
struct FCharacterMovementLogInfo {
public:

	struct ACHARACTER* OwnerCharacter; // 0x00(0x08)
	struct UCharacterMovementComponent* MovementComponent; // 0x08(0x08)
	struct UPrimitiveComponent* Base; // 0x10(0x08)
	char pad_18[0x120]; // 0x18(0x120)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ClientAdjustPositionInfo
// Size: 0x60 (Inherited: 0x00)
struct FClientAdjustPositionInfo {
public:

	struct ACHARACTER* OwnerCharacter; // 0x00(0x08)
	struct UPrimitiveComponent* NewBase; // 0x08(0x08)
	char pad_10[0x50]; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RepOverrideMovementInfo
// Size: 0x02 (Inherited: 0x00)
struct FRepOverrideMovementInfo {
public:

	bool EnableOverrideSpeedPose; // 0x00(0x01)
	enum class EOverrideMovementType CurrentOverridePose; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterMovementSpeedItemConfig
// Size: 0x30 (Inherited: 0x10)
struct FCharacterMovementSpeedItemConfig : public FDescRowBase {
public:

	int32_t SpeedID; // 0x10(0x04)
	float StandSilentWalkSpeed; // 0x14(0x04)
	float StandRunSpeed; // 0x18(0x04)
	float StandSprintSpeed; // 0x1c(0x04)
	float CrouchRunSpeed; // 0x20(0x04)
	float CrouchSilentWalkSpeed; // 0x24(0x04)
	float ProneMoveSpeed; // 0x28(0x04)
	float UsingItemSpeedFactor; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterMovementConstSpeedConfig
// Size: 0x58 (Inherited: 0x10)
struct FCharacterMovementConstSpeedConfig : public FDescRowBase {
public:

	int32_t SpeedID; // 0x10(0x04)
	float StandSilentWalkSpeed; // 0x14(0x04)
	float StandRunSpeed; // 0x18(0x04)
	float StandSprintSpeed; // 0x1c(0x04)
	float CrouchRunSpeed; // 0x20(0x04)
	float CrouchSilentWalkSpeed; // 0x24(0x04)
	float ProneMoveSpeed; // 0x28(0x04)
	float SuperSprintSpeed; // 0x2c(0x04)
	float StandPeekSpeedFactor; // 0x30(0x04)
	float CrouchPeekSpeedFactor; // 0x34(0x04)
	float StandFireSpeedFactor; // 0x38(0x04)
	float CrouchFireSpeedFactor; // 0x3c(0x04)
	float ProneFireSpeedFactor; // 0x40(0x04)
	float StandAimSpeedFactor; // 0x44(0x04)
	float CrouchAimSpeedFactor; // 0x48(0x04)
	float ProneAimSpeedFactor; // 0x4c(0x04)
	float PeekAimSpeedFactor; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterSpeedFactor
// Size: 0x34 (Inherited: 0x00)
struct FCharacterSpeedFactor {
public:

	float StandPeekSpeedFactor; // 0x00(0x04)
	float CrouchPeekSpeedFactor; // 0x04(0x04)
	float StandFireSpeedFactor; // 0x08(0x04)
	float CrouchFireSpeedFactor; // 0x0c(0x04)
	float ProneFireSpeedFactor; // 0x10(0x04)
	float StandAimSpeedFactor; // 0x14(0x04)
	float CrouchAimSpeedFactor; // 0x18(0x04)
	float ProneAimSpeedFactor; // 0x1c(0x04)
	float UsingItemSpeedFactor; // 0x20(0x04)
	float StandHoldBreathSpeedFactor; // 0x24(0x04)
	float CrouchHoldBreathSpeedFactor; // 0x28(0x04)
	float ProneHoldBreathSpeedFactor; // 0x2c(0x04)
	float PeekAimSpeedFactor; // 0x30(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DeadInfo
// Size: 0x68 (Inherited: 0x00)
struct FDeadInfo {
public:

	bool bIsDead; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DyingTime; // 0x04(0x04)
	float DeadTime; // 0x08(0x04)
	bool bMoving; // 0x0c(0x01)
	char pad_D[0x2]; // 0x0d(0x02)
	enum class EDirection DeathDirection; // 0x0f(0x01)
	enum class EChracterPoseType DeathPose; // 0x10(0x01)
	enum class EDamageType DeathDamageType; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float AngleFromShotDir; // 0x14(0x04)
	struct FVector RawShotDir; // 0x18(0x0c)
	struct FName ShotBone; // 0x24(0x08)
	struct FVector RawShotPos; // 0x2c(0x0c)
	uint64_t KillerUin; // 0x38(0x08)
	uint64_t KillerGUID; // 0x40(0x08)
	float DeathAnimDelayTime; // 0x48(0x04)
	struct TWeakObjectPtr<struct AWeaponBase> SourceWeapon; // 0x4c(0x08)
	struct FVector DeathLoc; // 0x54(0x0c)
	float ServerDeadTime; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.HitDownInfo
// Size: 0x30 (Inherited: 0x00)
struct FHitDownInfo {
public:

	struct FVector ShotDir; // 0x00(0x0c)
	struct FVector ShotLocation; // 0x0c(0x0c)
	struct FName ShotBone; // 0x18(0x08)
	uint64_t InstigatorUin; // 0x20(0x08)
	bool bIsSet; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PoseTransitionTime
// Size: 0x18 (Inherited: 0x00)
struct FPoseTransitionTime {
public:

	float StandToProneTransitionTime; // 0x00(0x04)
	float StandToCrouchTransitionTime; // 0x04(0x04)
	float CrouchToStandTransitionTime; // 0x08(0x04)
	float CrouchToProneTransitionTime; // 0x0c(0x04)
	float ProneToStandTransitionTime; // 0x10(0x04)
	float ProneToCrouchTransitionTime; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterPartBoneArray
// Size: 0x10 (Inherited: 0x00)
struct FCharacterPartBoneArray {
public:

	struct TArray<struct FName> BoneNameArray; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterPartDamageRateInfo
// Size: 0x18 (Inherited: 0x00)
struct FCharacterPartDamageRateInfo {
public:

	struct TArray<struct FName> BoneNameArray; // 0x00(0x10)
	float DamageRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RecvTimeDebugInfo
// Size: 0x68 (Inherited: 0x00)
struct FRecvTimeDebugInfo {
public:

	char pad_0[0x68]; // 0x00(0x68)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPVerifyJumpInfo
// Size: 0x38 (Inherited: 0x00)
struct FGPVerifyJumpInfo {
public:

	bool bVerifyJumpHeight; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxJumpHeight; // 0x04(0x04)
	struct FVector Location; // 0x08(0x0c)
	struct FVector StartVelocity; // 0x14(0x0c)
	struct UPrimitiveComponent* MovementBase; // 0x20(0x08)
	struct FName BaseBoneName; // 0x28(0x08)
	bool bBaseRelativePosition; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CommercializationTableName
// Size: 0x01 (Inherited: 0x00)
struct FCommercializationTableName {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CommercializationWatchRow
// Size: 0xc0 (Inherited: 0x10)
struct FCommercializationWatchRow : public FDescRowBase {
public:

	struct TMap<struct FName, struct FCommercializationWatchResource> resource; // 0x10(0x50)
	struct TArray<struct FCommercializationWatchMaterialSettings> MaterialConfig; // 0x60(0x10)
	struct TMap<enum class ECharacterState, struct FCommercializationWatchStateSettings> StateConfig; // 0x70(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CommercializationWatchStateSettings
// Size: 0x60 (Inherited: 0x00)
struct FCommercializationWatchStateSettings {
public:

	char pad_0[0x8]; // 0x00(0x08)
	bool bPlayAudio; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float StateSwitchInterval; // 0x0c(0x04)
	struct TMap<struct FName, float> Settings; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CommercializationWatchMaterialSettings
// Size: 0x0c (Inherited: 0x00)
struct FCommercializationWatchMaterialSettings {
public:

	int32_t MaterialIndex; // 0x00(0x04)
	struct FName ParameterName; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CommercializationWatchResource
// Size: 0x38 (Inherited: 0x00)
struct FCommercializationWatchResource {
public:

	struct TArray<struct FCommercializationWatchTexture> Textures; // 0x00(0x10)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char Audio[0x28]; // 0x10(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CommercializationWatchTexture
// Size: 0x50 (Inherited: 0x00)
struct FCommercializationWatchTexture {
public:

	/*struct TSoftObjectPtr<UTexture>*/char TextureHD[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UTexture>*/char TextureMobile[0x28]; // 0x28(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ShuffleList
// Size: 0x10 (Inherited: 0x00)
struct FShuffleList {
public:

	struct TArray<struct FName> List; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ItemData
// Size: 0x48 (Inherited: 0x00)
struct FItemData {
public:

	char pad_0[0x48]; // 0x00(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CommercializationItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FCommercializationItemInfo {
public:

	uint64_t HeroID; // 0x00(0x08)
	uint64_t ItemID; // 0x08(0x08)
	int64_t Slot; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SprayConfig
// Size: 0x34 (Inherited: 0x00)
struct FSprayConfig {
public:

	int32_t SortOrder; // 0x00(0x04)
	struct FVector DecalSizeHD; // 0x04(0x0c)
	struct FVector DecalSizeMobile; // 0x10(0x0c)
	float FadeInDuration; // 0x1c(0x04)
	float FadeOutStartDelay; // 0x20(0x04)
	float FadeOutDuration; // 0x24(0x04)
	float CharacterPaintDuration; // 0x28(0x04)
	float BoxTextureScale; // 0x2c(0x04)
	enum class ECollisionChannel SprayTraceChannel; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DecalSizeSetting
// Size: 0x18 (Inherited: 0x00)
struct FDecalSizeSetting {
public:

	struct FVector DecalSizeHD; // 0x00(0x0c)
	struct FVector DecalSizeMobile; // 0x0c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SprayInfo
// Size: 0x3c (Inherited: 0x00)
struct FSprayInfo {
public:

	struct FName ResourceId; // 0x00(0x08)
	struct FRotator CameraRot; // 0x08(0x0c)
	struct FVector ImpactNormal; // 0x14(0x0c)
	struct FVector ImpactPoint; // 0x20(0x0c)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x2c(0x08)
	struct FName BoneName; // 0x34(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SprayPaint
// Size: 0xe8 (Inherited: 0x00)
struct FSprayPaint {
public:

	struct FSoftObjectPath FPPMesh; // 0x00(0x18)
	struct FName FPPSocketName; // 0x18(0x08)
	struct FSoftObjectPath TPPMesh; // 0x20(0x18)
	struct FName TPPSocketName; // 0x38(0x08)
	/*struct TSoftObjectPtr<UAnimSequence>*/char FPPAnim[0x28]; // 0x40(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char TPPAnim[0x28]; // 0x68(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char TPPProneAnim[0x28]; // 0x90(0x28)
	float FPPVisibleTime; // 0xb8(0x04)
	float FPPHiddenTime; // 0xbc(0x04)
	float TPPVisibleTime; // 0xc0(0x04)
	float TPPHiddenTime; // 0xc4(0x04)
	float TPPProneVisibleTime; // 0xc8(0x04)
	float TPPProneHiddenTime; // 0xcc(0x04)
	struct FName EffectId; // 0xd0(0x08)
	struct FName EffectSocketName; // 0xd8(0x08)
	float ApplySprayTime; // 0xe0(0x04)
	float LifeSpan; // 0xe4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterSpeakStatus
// Size: 0x90 (Inherited: 0x00)
struct FCharacterSpeakStatus {
public:

	char pad_0[0x90]; // 0x00(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DestructAnimationInfo
// Size: 0xa0 (Inherited: 0x00)
struct FDestructAnimationInfo {
public:

	/*struct TSoftObjectPtr<UAnimationAsset>*/char BreakableAnimPath_Forward[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char BreakableAnimPath_Back[0x28]; // 0x28(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char BreakableAnimPath_Left[0x28]; // 0x50(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char BreakableAnimPath_Right[0x28]; // 0x78(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.NPCHitMontageSectionName
// Size: 0x18 (Inherited: 0x00)
struct FNPCHitMontageSectionName {
public:

	float NPCHPRateLowerLimit; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString MontageSectionName; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ExplosionTypeInfo
// Size: 0x10 (Inherited: 0x00)
struct FExplosionTypeInfo {
public:

	float OuterDistance; // 0x00(0x04)
	float TotalTime; // 0x04(0x04)
	struct UClass* CameraShakeType; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPFootIKInstanceProxy
// Size: 0x7e0 (Inherited: 0x748)
struct FGPFootIKInstanceProxy : public FAnimInstanceProxy {
public:

	bool bEnableFootIK; // 0x748(0x01)
	char pad_749[0x3]; // 0x749(0x03)
	float FootIKAlpha; // 0x74c(0x04)
	struct FVector LeftFootOffset; // 0x750(0x0c)
	struct FRotator LeftFootRotOffset; // 0x75c(0x0c)
	struct FVector RightFootOffset; // 0x768(0x0c)
	struct FRotator RightFootRotOffset; // 0x774(0x0c)
	struct FVector BipOffset; // 0x780(0x0c)
	char pad_78C[0x4]; // 0x78c(0x04)
	struct AGPCharacterBase* OwnerPawn; // 0x790(0x08)
	char pad_798[0x48]; // 0x798(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPFSMNetworkedTransaction
// Size: 0x38 (Inherited: 0x00)
struct FGPFSMNetworkedTransaction {
public:

	struct TArray<struct FGuid> FromStateGuids; // 0x00(0x10)
	struct TArray<struct FGuid> NowStateGuids; // 0x10(0x10)
	struct FGuid TransactionGuid; // 0x20(0x10)
	struct FDateTime Timestamp; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageRecordViewItemNameMap
// Size: 0x10 (Inherited: 0x00)
struct FDamageRecordViewItemNameMap {
public:

	uint64_t Uin; // 0x00(0x08)
	struct FName ActorName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageRecordViewItem
// Size: 0x110 (Inherited: 0x00)
struct FDamageRecordViewItem {
public:

	struct FName MakerInstigatorPlayerName; // 0x00(0x08)
	struct FText MakerInstigatorPlayerNameTEXT; // 0x08(0x18)
	uint64_t MakerInstigatorUin; // 0x20(0x08)
	uint64_t MakerGUID; // 0x28(0x08)
	struct FName TakerInstigatorPlayerName; // 0x30(0x08)
	struct FText TakerInstigatorPlayerNameTEXT; // 0x38(0x18)
	uint64_t TakerUin; // 0x50(0x08)
	int64_t MakerInstigatorRankMatchScore; // 0x58(0x08)
	bool MakerIsRobotAI; // 0x60(0x01)
	bool MakerIsAILabAI; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	float Distance; // 0x64(0x04)
	uint64_t FireId; // 0x68(0x08)
	uint64_t WeaponID; // 0x70(0x08)
	uint64_t AmmoId; // 0x78(0x08)
	uint64_t BuffId; // 0x80(0x08)
	uint64_t ArmorItemId; // 0x88(0x08)
	float TakerHealthPercent; // 0x90(0x04)
	float TakerHealthMax; // 0x94(0x04)
	float TakerBaseHealthMax; // 0x98(0x04)
	float ArmorHealth; // 0x9c(0x04)
	float ArmorHealthMax; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	uint64_t AttackerValueId; // 0xa8(0x08)
	int32_t AttackerLevel; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	uint64_t SkillId; // 0xb8(0x08)
	char DamagePart; // 0xc0(0x01)
	char CharacterPart; // 0xc1(0x01)
	char pad_C2[0x2]; // 0xc2(0x02)
	float Damage; // 0xc4(0x04)
	float ArmorDamage; // 0xc8(0x04)
	float HelmetArmorDamage; // 0xcc(0x04)
	float BodyArmorDamage; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<char> CharacterParts; // 0xd8(0x10)
	float MaxDamage; // 0xe8(0x04)
	float ServerTimeSeconds; // 0xec(0x04)
	bool bAttacker; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float AttackerWeaponBulletConfigHPDamage; // 0xf4(0x04)
	float AttackerWeaponBulletConfigArmorDamage; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	uint64_t MakerHeroId; // 0x100(0x08)
	uint64_t TakerHeroId; // 0x108(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterArray
// Size: 0x10 (Inherited: 0x00)
struct FCharacterArray {
public:

	struct TArray<struct ACHARACTER*> Characters; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterPreSpawnRow
// Size: 0x18 (Inherited: 0x08)
struct FCharacterPreSpawnRow : public FTableRowBase {
public:

	struct TArray<struct FCharacterPreSpawnInfo> SpawnInfos; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterPreSpawnInfo
// Size: 0x38 (Inherited: 0x00)
struct FCharacterPreSpawnInfo {
public:

	/*struct TSoftClassPtr<UObject>*/char Class[0x28]; // 0x00(0x28)
	int32_t Num; // 0x28(0x04)
	struct FVector Location; // 0x2c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPGameModeMissionConfig
// Size: 0x20 (Inherited: 0x00)
struct FGPGameModeMissionConfig {
public:

	struct TArray<struct FSoftObjectPath> MissionPersistentLevelS; // 0x00(0x10)
	struct TArray<struct FString> MissionDirs; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPGameplayAttribute
// Size: 0x38 (Inherited: 0x00)
struct FGPGameplayAttribute {
public:

	struct FString AttributeName; // 0x00(0x10)
	/*struct TFieldPath<FNone>*/char Attribute[0x20]; // 0x10(0x20)
	struct UClass* AttributeOwner; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPGameplayAttributeData
// Size: 0x18 (Inherited: 0x00)
struct FGPGameplayAttributeData {
public:

	char pad_0[0x10]; // 0x00(0x10)
	float BaseValue; // 0x10(0x04)
	float CurrentValue; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FastRescueResouce
// Size: 0x80 (Inherited: 0x00)
struct FFastRescueResouce {
public:

	struct UAnimSequence* RescueSomeoneClipFPP_Fast; // 0x00(0x08)
	struct UAnimSequence* RescueSomeoneClipFPP_FastLoop; // 0x08(0x08)
	struct UAnimSequence* RescueSomeoneClipFPP_FastEnd; // 0x10(0x08)
	struct UAnimSequence* RescueSomeoneClipTPP_Fast; // 0x18(0x08)
	struct UAnimSequence* RescueSomeoneClipTPP_FastLoop; // 0x20(0x08)
	struct UAnimSequence* RescueSomeoneClipTPP_FastEnd; // 0x28(0x08)
	struct UAnimSequence* RescueSomeoneClipTPP_CrouchFast; // 0x30(0x08)
	struct UAnimSequence* RescueSomeoneClipTPP_CrouchFastLoop; // 0x38(0x08)
	struct UAnimSequence* RescueSomeoneClipTPP_CrouchFastEnd; // 0x40(0x08)
	struct UAnimSequence* RescueSomeoneClipTPP_ProneFast; // 0x48(0x08)
	struct UAnimSequence* RescueSomeoneClipTPP_ProneFastLoop; // 0x50(0x08)
	struct UAnimSequence* RescueSomeoneClipTPP_ProneFastEnd; // 0x58(0x08)
	struct FName ItemKey; // 0x60(0x08)
	struct FName ItemKeyBody; // 0x68(0x08)
	struct FName ItemKeyScop; // 0x70(0x08)
	struct FName FastRecueSocket; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PreStateRTTInfo
// Size: 0x18 (Inherited: 0x00)
struct FPreStateRTTInfo {
public:

	enum class EFSMCharacterState CharacterState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class ECharacterStateMask> CharacterStateMaskArray; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.LODInfoArray
// Size: 0x10 (Inherited: 0x00)
struct FLODInfoArray {
public:

	struct TArray<float> LODInfos; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPRadarCheckParams
// Size: 0x18 (Inherited: 0x00)
struct FGPRadarCheckParams {
public:

	struct TArray<struct FName> NameOfSocketsToProject; // 0x00(0x10)
	int32_t MinExposedSocketNumber; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPRadarInfo
// Size: 0x10 (Inherited: 0x00)
struct FGPRadarInfo {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPZiplineActorInfo
// Size: 0xc0 (Inherited: 0x00)
struct FGPZiplineActorInfo {
public:

	struct AZiplineInteractorActor* CurrentZiplineActor; // 0x00(0x08)
	struct FVector DraftGearLocation; // 0x08(0x0c)
	struct FRotator DraftGearRotation; // 0x14(0x0c)
	struct FRotator LockGearRotation; // 0x20(0x0c)
	float DraftGearDistance; // 0x2c(0x04)
	float DraftGearRoll; // 0x30(0x04)
	float DraftGearLineLength; // 0x34(0x04)
	float CurrentMoveSpeed; // 0x38(0x04)
	struct FVector CurrentZiplineLocation; // 0x3c(0x0c)
	struct FRotator CurrentZiplineRotation; // 0x48(0x0c)
	float ZiplineLengthHasMoved; // 0x54(0x04)
	bool bLerpVerticalRotationFinished; // 0x58(0x01)
	bool bLerpHorizontalRotationFinished; // 0x59(0x01)
	bool bLerpRotationFinished; // 0x5a(0x01)
	bool bLerpLocationFinished; // 0x5b(0x01)
	bool bEnterIsGreen; // 0x5c(0x01)
	bool bCurrentIsInGreenStartArea; // 0x5d(0x01)
	bool bCurrentIsInRedStartArea; // 0x5e(0x01)
	bool bCurrentIsInSegmentArea; // 0x5f(0x01)
	enum class EEndZiplineReason GetOffZiplineReason; // 0x60(0x01)
	bool bCollisionCheckEnabled; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	int32_t ZiplineTriggerEnterCount; // 0x64(0x04)
	bool bCollisionDetected; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct TWeakObjectPtr<struct AActor> CollidedActor; // 0x6c(0x08)
	struct FVector CollisionDropDirection; // 0x74(0x0c)
	struct FVector LerpTargetLocation; // 0x80(0x0c)
	struct FRotator LerpTargetRotation; // 0x8c(0x0c)
	struct FVector GetOffZiplineVelocity; // 0x98(0x0c)
	float CurrentDraftGearOffset; // 0xa4(0x04)
	float ClientMovedLength; // 0xa8(0x04)
	float ServerWaitTime; // 0xac(0x04)
	struct FVector ServerLocation; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPZiplineSimulatedInfo
// Size: 0x40 (Inherited: 0x00)
struct FGPZiplineSimulatedInfo {
public:

	struct AZiplineInteractorActor* CurrentZiplineActor; // 0x00(0x08)
	bool bEnterIsGreen; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float CurrentDraftGearOffset; // 0x0c(0x04)
	struct FVector DraftGearLocation; // 0x10(0x0c)
	struct FRotator DraftGearRotation; // 0x1c(0x0c)
	float DraftGearRoll; // 0x28(0x04)
	float DraftGearLineLength; // 0x2c(0x04)
	struct FRotator LockGearRotation; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPZiplineInfo
// Size: 0xa0 (Inherited: 0x00)
struct FGPZiplineInfo {
public:

	float ServerAllowPercentError; // 0x00(0x04)
	float ZiplineCollisionDropSpeed; // 0x04(0x04)
	float ZiplineEndDropSpeed; // 0x08(0x04)
	float ZiplineCancelDropSpeed; // 0x0c(0x04)
	float ZiplineJumpDropUpVerticalSpeed; // 0x10(0x04)
	float ZiplineMoveMaxSpeed; // 0x14(0x04)
	float ZiplineMoveStartSpeed; // 0x18(0x04)
	float ZiplineMoveSpeedAcc; // 0x1c(0x04)
	float LerpLocationSpeed; // 0x20(0x04)
	float LerpRotationSpeed; // 0x24(0x04)
	float SweepDistance; // 0x28(0x04)
	float SweepBeginDelayTime; // 0x2c(0x04)
	struct UGPAudioEventAsset* StartLoopZiplineVoice; // 0x30(0x08)
	struct UGPAudioEventAsset* EndZiplineVoice; // 0x38(0x08)
	struct UGPAudioEventAsset* StartLoopVerticalZiplineVoice; // 0x40(0x08)
	struct UGPAudioEventAsset* EndVerticalZiplineVoice; // 0x48(0x08)
	struct FName ZiplineRTPCName; // 0x50(0x08)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char ZiplineScreenEffectMI[0x28]; // 0x58(0x28)
	struct FName AttachSocketName; // 0x80(0x08)
	float CouplerLineSlerp; // 0x88(0x04)
	float ServerClientDistanceTolerance; // 0x8c(0x04)
	float ServerWaitClientTime; // 0x90(0x04)
	float ServerUseClientLocErrorTolerance; // 0x94(0x04)
	float CooldownAfterArrived; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPLocomotionJumpInfo
// Size: 0x30 (Inherited: 0x00)
struct FGPLocomotionJumpInfo {
public:

	float FallVelocityThreshold_Low; // 0x00(0x04)
	float FallVelocityThreshold_High; // 0x04(0x04)
	float FallVelocityThreshold_VeryHigh; // 0x08(0x04)
	float FallVelocityThreshold_Kill; // 0x0c(0x04)
	float FallDamagePercent_High; // 0x10(0x04)
	float FallDamagePercent_VeryHigh; // 0x14(0x04)
	float FallVelocityThresholdForAnimation_High; // 0x18(0x04)
	float JumpNearGroundThreashold; // 0x1c(0x04)
	float HealthMAX; // 0x20(0x04)
	float OwnerHalfHeight; // 0x24(0x04)
	float OwnerRadius; // 0x28(0x04)
	float JumpDetectRadiusAdd; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPGameRuleSetting
// Size: 0x78 (Inherited: 0x00)
struct FGPGameRuleSetting {
public:

	enum class EDFMGamePlayMode StartSpotAllocatorType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName UIDataTableType; // 0x04(0x08)
	struct FName UIDataTableTypeHDOverride; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString LuaHudTableName; // 0x18(0x10)
	struct FString LuaBaseHudTableName; // 0x28(0x10)
	struct TArray<struct FString> PersistentLevelName; // 0x38(0x10)
	struct UClass* RulePawn; // 0x48(0x08)
	struct TArray<struct UClass*> RuleInvalidCharacterComponentArray; // 0x50(0x10)
	struct TArray<struct UClass*> RuleSubsystemClass; // 0x60(0x10)
	float ReviveGodModeTime; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DSTickInfo
// Size: 0x08 (Inherited: 0x00)
struct FDSTickInfo {
public:

	int32_t NetServerMaxTickRate; // 0x00(0x04)
	float FastNetTickSeconds; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AllPlayerLoadLevelCompletedInfo
// Size: 0x0c (Inherited: 0x00)
struct FAllPlayerLoadLevelCompletedInfo {
public:

	struct FName CheckLoadLevelReason; // 0x00(0x08)
	bool HasAllPlayerLoadLevelCompleted; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SpectInfo
// Size: 0x30 (Inherited: 0x00)
struct FSpectInfo {
public:

	struct TArray<struct FSpectMemberInfo> MemberInfoList; // 0x00(0x10)
	uint64_t SpectUni; // 0x10(0x08)
	struct FString PlayerName; // 0x18(0x10)
	int32_t PlayerLevel; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SpectMemberInfo
// Size: 0x50 (Inherited: 0x00)
struct FSpectMemberInfo {
public:

	struct FString PlayerName; // 0x00(0x10)
	uint64_t PlayerUni; // 0x10(0x08)
	struct FString RankName1; // 0x18(0x10)
	struct FString RankName2; // 0x28(0x10)
	int32_t RankScore; // 0x38(0x04)
	int32_t TotalKilled; // 0x3c(0x04)
	int32_t TotalGames; // 0x40(0x04)
	float GamesRate; // 0x44(0x04)
	int32_t Level; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.NiceInfo
// Size: 0x10 (Inherited: 0x00)
struct FNiceInfo {
public:

	uint64_t PlayerUni; // 0x00(0x08)
	bool bNice; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SpectFashionMesh
// Size: 0x10 (Inherited: 0x00)
struct FSpectFashionMesh {
public:

	struct TArray<struct FName> AllMesh; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FadeInfo
// Size: 0x24 (Inherited: 0x00)
struct FFadeInfo {
public:

	struct FName FadeUITextKeyName; // 0x00(0x08)
	bool ShouldShowFadeUI; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float FadeInAlpha; // 0x0c(0x04)
	float FadeInTime; // 0x10(0x04)
	float FadeOutTime; // 0x14(0x04)
	float DelayOutTime; // 0x18(0x04)
	float MinFadeTime; // 0x1c(0x04)
	float Timeout; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GameMapIdRow
// Size: 0x38 (Inherited: 0x10)
struct FGameMapIdRow : public FDescRowBase {
public:

	int32_t GameMapId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString MapTypeDes; // 0x18(0x10)
	struct FString MapDes; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FadeUITextRow
// Size: 0x78 (Inherited: 0x10)
struct FFadeUITextRow : public FDescRowBase {
public:

	struct FName FadeUITextKeyName; // 0x10(0x08)
	struct FText Title; // 0x18(0x18)
	struct FText SubTitle1; // 0x30(0x18)
	struct FText SubTitle2; // 0x48(0x18)
	struct FText Text; // 0x60(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GameModeTypeRow
// Size: 0x40 (Inherited: 0x10)
struct FGameModeTypeRow : public FDescRowBase {
public:

	int32_t ServerGameModeType; // 0x10(0x04)
	int32_t MainGameModeType; // 0x14(0x04)
	int32_t SubGameModeType; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString Des; // 0x20(0x10)
	struct FString WeaponParamsPath; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GameTeamMemberCountTypeRow
// Size: 0x28 (Inherited: 0x10)
struct FGameTeamMemberCountTypeRow : public FDescRowBase {
public:

	int32_t GameTeamMemberCountType; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Des; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GameRoomTypeRow
// Size: 0x28 (Inherited: 0x10)
struct FGameRoomTypeRow : public FDescRowBase {
public:

	int32_t GameRoomType; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Des; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPHandIKInstanceProxy
// Size: 0x7c0 (Inherited: 0x748)
struct FGPHandIKInstanceProxy : public FAnimInstanceProxy {
public:

	bool bUsePreHandIK; // 0x748(0x01)
	enum class EHandIKType WeaponIKType; // 0x749(0x01)
	char pad_74A[0x2]; // 0x74a(0x02)
	struct FVector LeftHandJointLoc; // 0x74c(0x0c)
	struct FVector LeftHandEffectLoc; // 0x758(0x0c)
	struct FVector RightHandJointLoc; // 0x764(0x0c)
	struct FVector ZoomHandOffsetVector; // 0x770(0x0c)
	bool bIsCameraZooming; // 0x77c(0x01)
	bool bShouldCopyIKGun; // 0x77d(0x01)
	char pad_77E[0x2]; // 0x77e(0x02)
	float ZoomHandOffsetBlendOut; // 0x780(0x04)
	float LeftArmIKAlpha; // 0x784(0x04)
	float RightArmIKAlpha; // 0x788(0x04)
	bool bDualWeapon; // 0x78c(0x01)
	char pad_78D[0x3]; // 0x78d(0x03)
	struct AGPCharacterBase* OwnerPawn; // 0x790(0x08)
	struct AWeaponBase* CurWeapon; // 0x798(0x08)
	struct UGPCameraModeComponent* CameraModeComponent; // 0x7a0(0x08)
	bool bWeaponDisableIK; // 0x7a8(0x01)
	bool bEnableHandIK; // 0x7a9(0x01)
	bool bOnVehicle; // 0x7aa(0x01)
	bool bDisableHandIK; // 0x7ab(0x01)
	int32_t RecordGripOrder; // 0x7ac(0x04)
	bool bRecordUnderFPP; // 0x7b0(0x01)
	char pad_7B1[0xf]; // 0x7b1(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.HitPartInfo
// Size: 0x28 (Inherited: 0x00)
struct FHitPartInfo {
public:

	struct FName HitBoneName; // 0x00(0x08)
	float DamageScale; // 0x08(0x04)
	enum class EHitGroupType HitGroup; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FGameplayTag HitGroupTag; // 0x10(0x08)
	float PveDamageScale; // 0x18(0x04)
	float PveRandRatio; // 0x1c(0x04)
	float HardStraightScale; // 0x20(0x04)
	bool bWeaknessGroup; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.HotFixHelperDataInfo
// Size: 0x18 (Inherited: 0x00)
struct FHotFixHelperDataInfo {
public:

	struct AActor* HotFixActor; // 0x00(0x08)
	struct TArray<float> HotFixFloatArray; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.HudDataLocSceneVehicleInfo
// Size: 0x20 (Inherited: 0x00)
struct FHudDataLocSceneVehicleInfo {
public:

	struct TArray<int32_t> NetUniqueIDArr; // 0x00(0x10)
	struct TArray<int32_t> RotYawArr; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.HudDataLocCharacterInfo
// Size: 0x20 (Inherited: 0x00)
struct FHudDataLocCharacterInfo {
public:

	struct TArray<int64_t> NetUniqueIDArr; // 0x00(0x10)
	struct TArray<int32_t> RotYawArr; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.HudDataLocMsg
// Size: 0x10 (Inherited: 0x00)
struct FHudDataLocMsg {
public:

	struct TArray<struct FVector> LocationArray; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPHudDataFastArray
// Size: 0x120 (Inherited: 0x108)
struct FGPHudDataFastArray : public FFastArraySerializer {
public:

	struct TArray<struct FGPHudData> Items; // 0x108(0x10)
	struct AGPHudDataReplicator* Owner; // 0x118(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.HudDataLocSceneVehicle
// Size: 0x14 (Inherited: 0x00)
struct FHudDataLocSceneVehicle {
public:

	int32_t NetUniqueID; // 0x00(0x04)
	struct FVector_NetQuantize Loc; // 0x04(0x0c)
	int32_t RotYaw; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.HudDataLocCharacter
// Size: 0x18 (Inherited: 0x00)
struct FHudDataLocCharacter {
public:

	int64_t NetUniqueID; // 0x00(0x08)
	struct FVector_NetQuantize Loc; // 0x08(0x0c)
	int32_t RotYaw; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.InputDisableReasonSet
// Size: 0x50 (Inherited: 0x00)
struct FInputDisableReasonSet {
public:

	/*struct TSet<enum class EInputDisableReason>*/char InputDisableReasons[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityKnockbackSettingConfig
// Size: 0x88 (Inherited: 0x00)
struct FAbilityKnockbackSettingConfig {
public:

	struct UCurveFloat* HeightCurve; // 0x00(0x08)
	struct UCurveFloat* MovePath; // 0x08(0x08)
	float RotLerpTime; // 0x10(0x04)
	float KnockDownTime; // 0x14(0x04)
	float GetUpTime; // 0x18(0x04)
	float InitZSpped; // 0x1c(0x04)
	float BlendInTime; // 0x20(0x04)
	float BlendOutTime; // 0x24(0x04)
	float GravityZ; // 0x28(0x04)
	float CheckFallingTime; // 0x2c(0x04)
	bool bForceRotateImmediate; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float FallingVelocityDecelerate; // 0x34(0x04)
	float KnockBackBodyLength; // 0x38(0x04)
	float KnockBackDownTime; // 0x3c(0x04)
	struct FName EnterPostProcessName; // 0x40(0x08)
	bool DisableCrouchInSimulation; // 0x48(0x01)
	bool bUseFullBodyAllOverride; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	float SimulationAnimLoopAddTime; // 0x4c(0x04)
	struct TArray<struct FAbilityKnockbackRoleLoadConfig> RoleLoadConfigArray; // 0x50(0x10)
	int32_t FallingAttackValueId; // 0x60(0x04)
	struct FName GetUpEvent; // 0x64(0x08)
	float FallDownTime; // 0x6c(0x04)
	enum class EGPAudioFootSoundType FallDownFootSoundType; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<int32_t> AddBuffs; // 0x78(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityKnockbackRoleLoadConfig
// Size: 0x0c (Inherited: 0x00)
struct FAbilityKnockbackRoleLoadConfig {
public:

	float CurrentMinLoad; // 0x00(0x04)
	float CurrentMaxLoad; // 0x04(0x04)
	float KnockBackTimeScale; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPLuaQuestData
// Size: 0x60 (Inherited: 0x00)
struct FGPLuaQuestData {
public:

	int64_t quest_id; // 0x00(0x08)
	int32_t quest_state; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t quest_accept_time; // 0x10(0x08)
	struct TArray<struct FGPLuaQuestObjectiveData> quest_objectives; // 0x18(0x10)
	struct TArray<int64_t> marked_objective_id; // 0x28(0x10)
	int64_t expire_time; // 0x38(0x08)
	bool marked; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString map_marker; // 0x48(0x10)
	int64_t expire_left_time; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPLuaQuestObjectiveData
// Size: 0x30 (Inherited: 0x00)
struct FGPLuaQuestObjectiveData {
public:

	int64_t quest_objective_id; // 0x00(0x08)
	bool has_completed; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Value; // 0x0c(0x04)
	bool has_marked; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	int64_t spent_seconds; // 0x18(0x08)
	int64_t required_count; // 0x20(0x08)
	bool accepted_state; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPMarkerColorConfigRow
// Size: 0x20 (Inherited: 0x08)
struct FGPMarkerColorConfigRow : public FTableRowBase {
public:

	enum class EGPMarkerColorType ColorType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FLinearColor LinearColor; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkerCoordinatedStruct
// Size: 0x70 (Inherited: 0x00)
struct FMarkerCoordinatedStruct {
public:

	struct AActor* MarkedActor; // 0x00(0x08)
	uint64_t ActorID; // 0x08(0x08)
	/*struct TSet<enum class EMarkerCoordinatedType>*/char CurMarkerCoordinatedTypes[0x50]; // 0x10(0x50)
	char pad_60[0x10]; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkerItemCreateConfig
// Size: 0x50 (Inherited: 0x08)
struct FMarkerItemCreateConfig : public FTableRowBase {
public:

	struct UClass* MarkerItemClassBPClass; // 0x08(0x08)
	/*struct TSoftObjectPtr<UGPMarkerConfigDataAsset>*/char MarkerConfig[0x28]; // 0x10(0x28)
	struct TArray<enum class EDFMGamePlayMode> AllowCreateGameplayModes; // 0x38(0x10)
	uint64_t GameMarkerFeature; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkingCharacterVoiceDataTableRow
// Size: 0x28 (Inherited: 0x10)
struct FMarkingCharacterVoiceDataTableRow : public FDescRowBase {
public:

	enum class EMarkingChatType MarkingType; // 0x10(0x01)
	bool bIsRespond; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FString CharacterVoiceAudioString; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkingChatMessageDataTableRow
// Size: 0x68 (Inherited: 0x10)
struct FMarkingChatMessageDataTableRow : public FDescRowBase {
public:

	enum class EMarkingChatType MarkingChatType; // 0x10(0x01)
	bool bIsRespond; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TMap<struct FName, struct FName> Id2PresetChatIdMap; // 0x18(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkingLocationTypeDataTableRow
// Size: 0x48 (Inherited: 0x10)
struct FMarkingLocationTypeDataTableRow : public FDescRowBase {
public:

	enum class EMarkingLocationType MarkingLocationType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FSoftObjectPath MarkerIconPath; // 0x18(0x18)
	struct FText MarkerName; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkingConfigDataTableRow
// Size: 0x1f8 (Inherited: 0x10)
struct FMarkingConfigDataTableRow : public FDescRowBase {
public:

	enum class EDFMGamePlayMode DFMGamePlayMode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MarkDetectDistance; // 0x14(0x04)
	struct FVector MarkLocationOffset; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct TMap<enum class EMarkingLocationType, float> LocationMarkerExistTimeMap; // 0x28(0x50)
	float MarkingMarkerAimCheckRadius; // 0x78(0x04)
	float MarkItemDistance; // 0x7c(0x04)
	struct FVector MarkItemOffset; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TMap<enum class EMarkingItemType, float> ItemMarkerExistTimeMap; // 0x90(0x50)
	float ItemRespondMarkerExistTime; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UCurveFloat* MarkingExpandScalarCurve; // 0xe8(0x08)
	float MarkUnitDistance; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct TMap<int32_t, struct FUnitMarkingTimeCampConfig> UnitMarkerExistTimeMap; // 0xf8(0x50)
	int32_t MarkingEnemyMaxNum; // 0x148(0x04)
	int32_t MarkingNoneEnemyMaxNum; // 0x14c(0x04)
	float MarkEnemyTimeWindowLength; // 0x150(0x04)
	int32_t MarkEnemyLimitInTimeWindow; // 0x154(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char NormalLocationMarkAudio[0x28]; // 0x158(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char EnemyLocationMarkAudio[0x28]; // 0x180(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char ItemMarkAudio[0x28]; // 0x1a8(0x28)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char CancelMarkAudio[0x28]; // 0x1d0(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.UnitMarkingTimeCampConfig
// Size: 0x50 (Inherited: 0x00)
struct FUnitMarkingTimeCampConfig {
public:

	struct TMap<enum class EMarkerCampType, float> MarkingTimeMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.UnitMarkingInfoStruct
// Size: 0x60 (Inherited: 0x00)
struct FUnitMarkingInfoStruct {
public:

	struct TMap<uint64_t, struct FUnitMarkingInfo> UnitMarkingInfoArray; // 0x00(0x50)
	bool MarkerOwnerStillExist; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32_t EnemyCampMarkerCount; // 0x54(0x04)
	int32_t NoneEnemyCampMarkerCount; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.UnitMarkingInfo
// Size: 0x58 (Inherited: 0x00)
struct FUnitMarkingInfo {
public:

	struct AGPCharacter* OwnerCharacter; // 0x00(0x08)
	struct AGPPlayerState* OwnerPlayerState; // 0x08(0x08)
	uint64_t OwnerPlayerUin; // 0x10(0x08)
	struct FVector MarkerWorldLocation; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	uint64_t MarkerUniqueId; // 0x28(0x08)
	enum class EGPMarkerClassType MarkerClassType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t markerType; // 0x34(0x04)
	struct AActor* MarkedActor; // 0x38(0x08)
	enum class EMarkerCampType ShowMarkerCamp; // 0x40(0x01)
	enum class EMarkerCampType MarkedActorCamp; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float MarkTime; // 0x44(0x04)
	float ConfigValidTime; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	uint64_t CustomUniqueId; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkingSubTypeMarkerItemStruct
// Size: 0x50 (Inherited: 0x00)
struct FMarkingSubTypeMarkerItemStruct {
public:

	struct TMap<char, struct UGPMarkerItemBase*> MarkingSubTypeMarkerItemMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.BubbleMarkingInfo
// Size: 0x38 (Inherited: 0x00)
struct FBubbleMarkingInfo {
public:

	struct AGPCharacter* OwnerCharacter; // 0x00(0x08)
	struct AGPPlayerState* OwnerPlayerState; // 0x08(0x08)
	uint64_t OwnerPlayerUin; // 0x10(0x08)
	uint64_t MarkerUniqueId; // 0x18(0x08)
	uint32_t markerType; // 0x20(0x04)
	enum class EQuickChatMarkingItemType QuickChatMarkingItemType; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct AActor* MarkedActor; // 0x28(0x08)
	float MarkTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.LocationMarkingInfo
// Size: 0x48 (Inherited: 0x00)
struct FLocationMarkingInfo {
public:

	struct AGPCharacter* OwnerCharacter; // 0x00(0x08)
	struct AGPPlayerState* OwnerPlayerState; // 0x08(0x08)
	uint64_t OwnerPlayerUin; // 0x10(0x08)
	struct FVector MarkingLocation; // 0x18(0x0c)
	struct FVector MarkingHitPlaneNormal; // 0x24(0x0c)
	struct FVector MarkerShowLocation; // 0x30(0x0c)
	enum class EMarkingLocationType MarkingLocationType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float MarkTime; // 0x40(0x04)
	float ConfigValidTime; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkingBaseInfo
// Size: 0x30 (Inherited: 0x00)
struct FMarkingBaseInfo {
public:

	struct AGPCharacter* OwnerCharacter; // 0x00(0x08)
	struct AGPPlayerState* OwnerPlayerState; // 0x08(0x08)
	uint64_t OwnerPlayerUin; // 0x10(0x08)
	uint64_t MarkerUniqueId; // 0x18(0x08)
	float CurrentLeftTime; // 0x20(0x04)
	struct FVector MarkingLocation; // 0x24(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TransferMarkerUpdateConfig
// Size: 0x2c (Inherited: 0x00)
struct FTransferMarkerUpdateConfig {
public:

	bool bAllowShowDistance; // 0x00(0x01)
	bool bShowDistanceDefault; // 0x01(0x01)
	bool bShowDistanceWhenAiming; // 0x02(0x01)
	bool bHideDistanceWhenCovered; // 0x03(0x01)
	float MaxDistanceShowDistance; // 0x04(0x04)
	bool bHideDistanceWhenOutScreen; // 0x08(0x01)
	bool bEnableOpacityChange; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float NormalOpacity; // 0x0c(0x04)
	float CoveredOpacity; // 0x10(0x04)
	float AimingOpacity; // 0x14(0x04)
	bool bOutScreenOverrideOpacity; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float OutScreenOverrideOpacity; // 0x1c(0x04)
	bool bAllowShowName; // 0x20(0x01)
	bool bShowNameDefault; // 0x21(0x01)
	bool bShowNameWhenAiming; // 0x22(0x01)
	bool bHideNameWhenCovered; // 0x23(0x01)
	float MaxNameShowDistance; // 0x24(0x04)
	bool bHideNameWhenOutScreen; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SectorAnchorMarkerUpdateConfig
// Size: 0x24 (Inherited: 0x00)
struct FSectorAnchorMarkerUpdateConfig {
public:

	bool bShowNumIconNotArmedIcon; // 0x00(0x01)
	bool bAllowShowDistance; // 0x01(0x01)
	bool bShowDistanceDefault; // 0x02(0x01)
	bool bShowDistanceWhenAiming; // 0x03(0x01)
	bool bHideDistanceWhenCovered; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float MaxDistanceShowDistance; // 0x08(0x04)
	bool bHideDistanceWhenOutScreen; // 0x0c(0x01)
	bool bEnableOpacityChange; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float NormalOpacity; // 0x10(0x04)
	float CoveredOpacity; // 0x14(0x04)
	float AimingOpacity; // 0x18(0x04)
	bool bOutScreenOverrideOpacity; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float OutScreenOverrideOpacity; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayerMarkerTypeConfig
// Size: 0x14 (Inherited: 0x00)
struct FPlayerMarkerTypeConfig {
public:

	struct FVector2D MarkerOffset; // 0x00(0x08)
	struct FVector WorldLocationOffset; // 0x08(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayerMarkerUpdateCampConfig
// Size: 0x50 (Inherited: 0x00)
struct FPlayerMarkerUpdateCampConfig {
public:

	struct TMap<enum class EMarkerCampType, struct FPlayerMarkerUpdateConfig> MarkerCampConfigMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayerMarkerUpdateConfig
// Size: 0x40 (Inherited: 0x00)
struct FPlayerMarkerUpdateConfig {
public:

	bool bShowSmallIconInner; // 0x00(0x01)
	bool bShowSmallIconMiddle; // 0x01(0x01)
	bool bShowSmallIconOuter; // 0x02(0x01)
	bool bAllowShowDistance; // 0x03(0x01)
	bool bShowDistanceDefault; // 0x04(0x01)
	bool bShowDistanceWhenAiming; // 0x05(0x01)
	bool bHideDistanceWhenCovered; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float MaxDistanceShowDistance; // 0x08(0x04)
	bool bHideDistanceWhenOutScreen; // 0x0c(0x01)
	bool bHideDistanceInner; // 0x0d(0x01)
	bool bHideDistanceMiddle; // 0x0e(0x01)
	bool bHideDistanceOuter; // 0x0f(0x01)
	bool bAllowShowName; // 0x10(0x01)
	bool bShowNameDefault; // 0x11(0x01)
	bool bShowNameWhenAiming; // 0x12(0x01)
	bool bHideNameWhenCovered; // 0x13(0x01)
	float MaxDistanceShowName; // 0x14(0x04)
	bool bHideNameWhenOutScreen; // 0x18(0x01)
	bool bHideNameInner; // 0x19(0x01)
	bool bHideNameMiddle; // 0x1a(0x01)
	bool bHideNameOuter; // 0x1b(0x01)
	bool bEnableOpacityChange; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float NormalOpacity; // 0x20(0x04)
	float CoveredOpacity; // 0x24(0x04)
	float AimingOpacity; // 0x28(0x04)
	float InnerOpacity; // 0x2c(0x04)
	float MiddleOpacity; // 0x30(0x04)
	float OuterOpacity; // 0x34(0x04)
	bool bOutScreenOverrideOpacity; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float OutScreenOverrideOpacity; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.EnemyEffectTypeConfig
// Size: 0x14 (Inherited: 0x00)
struct FEnemyEffectTypeConfig {
public:

	struct FVector2D MarkerOffset; // 0x00(0x08)
	struct FVector WorldLocationOffset; // 0x08(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.EnemyEffectMarkerUpdateCampConfig
// Size: 0x50 (Inherited: 0x00)
struct FEnemyEffectMarkerUpdateCampConfig {
public:

	struct TMap<enum class EMarkerCampType, struct FEnemyEffectMarkerUpdateConfig> MarkerCampConfigMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.EnemyEffectMarkerUpdateConfig
// Size: 0x18 (Inherited: 0x00)
struct FEnemyEffectMarkerUpdateConfig {
public:

	bool bEnableOpacityChange; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NormalOpacity; // 0x04(0x04)
	float CoveredOpacity; // 0x08(0x04)
	float AimingOpacity; // 0x0c(0x04)
	bool bOutScreenOverrideOpacity; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float OutScreenOverrideOpacity; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AIWarnTypeConfig
// Size: 0x14 (Inherited: 0x00)
struct FAIWarnTypeConfig {
public:

	struct FVector2D MarkerOffset; // 0x00(0x08)
	struct FVector WorldLocationOffset; // 0x08(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AIWarnMarkerUpdateCampConfig
// Size: 0x50 (Inherited: 0x00)
struct FAIWarnMarkerUpdateCampConfig {
public:

	struct TMap<enum class EMarkerCampType, struct FAIWarnMarkerUpdateConfig> MarkerCampConfigMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AIWarnMarkerUpdateConfig
// Size: 0x18 (Inherited: 0x00)
struct FAIWarnMarkerUpdateConfig {
public:

	bool bEnableOpacityChange; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NormalOpacity; // 0x04(0x04)
	float CoveredOpacity; // 0x08(0x04)
	float AimingOpacity; // 0x0c(0x04)
	bool bOutScreenOverrideOpacity; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float OutScreenOverrideOpacity; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AIBaseTypeConfig
// Size: 0x14 (Inherited: 0x00)
struct FAIBaseTypeConfig {
public:

	struct FVector2D MarkerOffset; // 0x00(0x08)
	struct FVector WorldLocationOffset; // 0x08(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AIBaseMarkerUpdateCampConfig
// Size: 0x50 (Inherited: 0x00)
struct FAIBaseMarkerUpdateCampConfig {
public:

	struct TMap<enum class EMarkerCampType, struct FAIBaseMarkerUpdateConfig> MarkerCampConfigMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AIBaseMarkerUpdateConfig
// Size: 0x20 (Inherited: 0x00)
struct FAIBaseMarkerUpdateConfig {
public:

	bool bAllowShowDistance; // 0x00(0x01)
	bool bShowDistanceDefault; // 0x01(0x01)
	bool bShowDistanceWhenAiming; // 0x02(0x01)
	bool bHideDistanceWhenCovered; // 0x03(0x01)
	float MaxDistanceShowDistance; // 0x04(0x04)
	bool bHideDistanceWhenOutScreen; // 0x08(0x01)
	bool bEnableOpacityChange; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float NormalOpacity; // 0x0c(0x04)
	float CoveredOpacity; // 0x10(0x04)
	float AimingOpacity; // 0x14(0x04)
	bool bOutScreenOverrideOpacity; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float OutScreenOverrideOpacity; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TacticalEquipTypeConfig
// Size: 0x14 (Inherited: 0x00)
struct FTacticalEquipTypeConfig {
public:

	struct FVector2D MarkerOffset; // 0x00(0x08)
	struct FVector WorldLocationOffset; // 0x08(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TacticalEquipMarkerUpdateCampConfig
// Size: 0x50 (Inherited: 0x00)
struct FTacticalEquipMarkerUpdateCampConfig {
public:

	struct TMap<enum class EMarkerCampType, struct FTacticalEquipMarkerUpdateConfig> MarkerCampConfigMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TacticalEquipMarkerUpdateConfig
// Size: 0x24 (Inherited: 0x00)
struct FTacticalEquipMarkerUpdateConfig {
public:

	bool bAllowShowHealth; // 0x00(0x01)
	bool bShowHealthDefault; // 0x01(0x01)
	bool bShowHealthWhenAiming; // 0x02(0x01)
	bool bHideHealthWhenCovered; // 0x03(0x01)
	float MaxDistanceShowHealth; // 0x04(0x04)
	bool bHideHealthWhenOutScreen; // 0x08(0x01)
	bool bAllowShowNameInfo; // 0x09(0x01)
	bool bShowNameInfoDefault; // 0x0a(0x01)
	bool bShowNameInfoWhenAiming; // 0x0b(0x01)
	bool bHideNameInfoWhenCovered; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MaxDistanceShowNameInfo; // 0x10(0x04)
	bool bHideNameInfoWhenOutScreen; // 0x14(0x01)
	bool bAllowShowCoolDown; // 0x15(0x01)
	bool bShowCoolDownDefault; // 0x16(0x01)
	bool bShowCoolDownWhenAiming; // 0x17(0x01)
	bool bHideCoolDownWhenCovered; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float MaxDistanceShowCoolDown; // 0x1c(0x04)
	bool bHideCoolDownWhenOutScreen; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleTypeConfig
// Size: 0x14 (Inherited: 0x00)
struct FVehicleTypeConfig {
public:

	struct FVector2D MarkerOffset; // 0x00(0x08)
	struct FVector WorldLocationOffset; // 0x08(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleMarkerUpdateCampConfig
// Size: 0x50 (Inherited: 0x00)
struct FVehicleMarkerUpdateCampConfig {
public:

	struct TMap<enum class EMarkerCampType, struct FVehicleMarkerUpdateConfig> MarkerCampConfigMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleMarkerUpdateConfig
// Size: 0x44 (Inherited: 0x00)
struct FVehicleMarkerUpdateConfig {
public:

	bool bAllowShowDistance; // 0x00(0x01)
	bool bShowDistanceDefault; // 0x01(0x01)
	bool bShowDistanceWhenAiming; // 0x02(0x01)
	bool bHideDistanceWhenCovered; // 0x03(0x01)
	float MaxDistanceShowDistance; // 0x04(0x04)
	bool bHideDistanceWhenOutScreen; // 0x08(0x01)
	bool bAllowShowHealth; // 0x09(0x01)
	bool bShowHealthDefault; // 0x0a(0x01)
	bool bShowHealthWhenAiming; // 0x0b(0x01)
	bool bHideHealthWhenCovered; // 0x0c(0x01)
	bool bShowHealthWhenHit; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float ShowHealthTimeWhenHit; // 0x10(0x04)
	bool bShowHealthWhenIsEngineer; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MaxDistanceShowHealth; // 0x18(0x04)
	bool bHideHealthWhenOutScreen; // 0x1c(0x01)
	bool bAllowShowPassengerInfo; // 0x1d(0x01)
	bool bShowPassengerInfoDefault; // 0x1e(0x01)
	bool bShowPassengerInfoWhenAiming; // 0x1f(0x01)
	bool bHidePassengerInfoWhenCovered; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float MaxDistanceShowPassengerInfo; // 0x24(0x04)
	bool bHidePassengerInfoWhenOutScreen; // 0x28(0x01)
	bool bEnableOpacityChange; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float NormalOpacity; // 0x2c(0x04)
	float CoveredOpacity; // 0x30(0x04)
	float AimingOpacity; // 0x34(0x04)
	bool bOutScreenOverrideOpacity; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float OutScreenOverrideOpacity; // 0x3c(0x04)
	float EngineerSeeHealthBarDistance; // 0x40(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleMarkingCharacterVoiceConfig
// Size: 0x50 (Inherited: 0x00)
struct FVehicleMarkingCharacterVoiceConfig {
public:

	struct TMap<enum class EMarkerCampType, struct FVehicleMarkingCharacterVoiceInfo> MarkingCampCharacterVoiceMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleMarkingCharacterVoiceInfo
// Size: 0x50 (Inherited: 0x00)
struct FVehicleMarkingCharacterVoiceInfo {
public:

	struct TMap<enum class EAnimVehicleType, struct FString> VehicleTypeMarkingCharacterVoiceMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterMarkerUpdateCampConfig
// Size: 0x50 (Inherited: 0x00)
struct FCharacterMarkerUpdateCampConfig {
public:

	struct TMap<enum class EMarkerCampType, struct FCharacterMarkerUpdateConfig> MarkerCampConfigMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterMarkerUpdateConfig
// Size: 0x2c (Inherited: 0x00)
struct FCharacterMarkerUpdateConfig {
public:

	bool bShowNumIconNotArmedIcon; // 0x00(0x01)
	bool bAllowShowName; // 0x01(0x01)
	bool bShowNameDefault; // 0x02(0x01)
	bool bShowNameWhenAiming; // 0x03(0x01)
	bool bHideNameWhenCovered; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float MaxDistanceShowName; // 0x08(0x04)
	bool bHideNameWhenOutScreen; // 0x0c(0x01)
	bool bAllowShowHealth; // 0x0d(0x01)
	bool bShowHealthDefault; // 0x0e(0x01)
	bool bShowHealthWhenAiming; // 0x0f(0x01)
	bool bShowHealthWhenIsMedic; // 0x10(0x01)
	bool bHideHealthWhenCovered; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float MaxDistanceShowHealth; // 0x14(0x04)
	float MedicShowHealthPercent; // 0x18(0x04)
	bool bHideHealthWhenOutScreen; // 0x1c(0x01)
	bool bShowHealthWhenHit; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	float ShowHealthTimeWhenHit; // 0x20(0x04)
	bool bAllowShowArmorIcon; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float MPShowBigIconDistance; // 0x28(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkingCharacterVoiceConfig
// Size: 0x50 (Inherited: 0x00)
struct FMarkingCharacterVoiceConfig {
public:

	struct TMap<enum class EMarkerCampType, struct FString> MarkingCampCharacterVoiceMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkerViewCreateCampBaseConfig
// Size: 0x50 (Inherited: 0x00)
struct FMarkerViewCreateCampBaseConfig {
public:

	struct TMap<enum class EMarkerCampType, struct FMarkerViewCreateConfig> MarkerCampBaseConfigMap; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkerViewCreateConfig
// Size: 0xd0 (Inherited: 0x00)
struct FMarkerViewCreateConfig {
public:

	enum class EMarkerRefreshFrequencyLevel MarkerRefreshFrequencyLevel; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CreatedDistance; // 0x04(0x04)
	bool bHideWhenOutScreen; // 0x08(0x01)
	bool bHideWhenCovered; // 0x09(0x01)
	bool bForceShowWithinDistance; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float ForceShowDistance; // 0x0c(0x04)
	bool bShowWithinDistance; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ShowDistance; // 0x14(0x04)
	float AimCheckDistance; // 0x18(0x04)
	bool bHideWhenNotAimed; // 0x1c(0x01)
	bool bHideWhenNotInAimedCircle; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct TArray<float> AimedCircleRadiusFactorArray; // 0x20(0x10)
	struct TArray<float> AimedCircleRadiusAimingOpacityArray; // 0x30(0x10)
	struct TArray<float> AimedCircleRadiusNotAimingOpacityArray; // 0x40(0x10)
	bool bScaleWithDistance; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<float> ScaleDistanceArray; // 0x58(0x10)
	struct TArray<float> ScaleScalarArray; // 0x68(0x10)
	bool bOutScreenOverrideScale; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float OutScreenOverrideScale; // 0x7c(0x04)
	bool bOwnerPlayMarkingEffect; // 0x80(0x01)
	bool bOtherPlayMarkingEffect; // 0x81(0x01)
	bool bOwnerMarkingEffectLast; // 0x82(0x01)
	bool bOtherMarkingEffectLast; // 0x83(0x01)
	bool bEnableOpacityChange; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float NormalOpacity; // 0x88(0x04)
	float CoveredOpacity; // 0x8c(0x04)
	float AimingOpacity; // 0x90(0x04)
	bool bOutScreenOverrideOpacity; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	float OutScreenOverrideOpacity; // 0x98(0x04)
	bool bEnableOpacityDistance; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct TArray<float> OpacityDistanceArray; // 0xa0(0x10)
	struct TArray<float> OpacityScalarArray; // 0xb0(0x10)
	bool bNeedShowDistanceText; // 0xc0(0x01)
	bool bShowDistanceDefault; // 0xc1(0x01)
	bool bShowDistanceWhenAiming; // 0xc2(0x01)
	bool bHideDistanceWhenCovered; // 0xc3(0x01)
	float MaxDistanceShowDistance; // 0xc4(0x04)
	bool bHideDistanceWhenOutScreen; // 0xc8(0x01)
	bool bShowDistanceWhenMarked; // 0xc9(0x01)
	bool bNeedHideMarkerWhenImpendingDeath; // 0xca(0x01)
	bool bNeedShowArrow; // 0xcb(0x01)
	enum class EMarkerEdgeTrackType MarkerEdgeTrackType; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkingBubbleConfig
// Size: 0x40 (Inherited: 0x00)
struct FMarkingBubbleConfig {
public:

	float BubbleInterval; // 0x00(0x04)
	float BubbleDuration; // 0x04(0x04)
	float BubbleMaxDistance; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSoftObjectPath BubbleSpritePath; // 0x10(0x18)
	struct TArray<int32_t> ArmedForceIdArray; // 0x28(0x10)
	bool bLoopAnimation; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float LoopAnimationInterval; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkerStringItemPool
// Size: 0x50 (Inherited: 0x00)
struct FMarkerStringItemPool {
public:

	struct TMap<struct FString, struct UGPMarkerItemBase*> MarkerItemBaseArray; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ActorMarkerItemPoolNew
// Size: 0x58 (Inherited: 0x00)
struct FActorMarkerItemPoolNew {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<uint32_t, struct UGPMarkerItemBase*> MarkerItemBaseArray; // 0x08(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ActorMarkerItemPool
// Size: 0x58 (Inherited: 0x00)
struct FActorMarkerItemPool {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<uint32_t, struct UGPMarkerItemBase*> MarkerItemBaseArray; // 0x08(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkerTickBucket
// Size: 0x0c (Inherited: 0x00)
struct FMarkerTickBucket {
public:

	float UpdateFrequency; // 0x00(0x04)
	char pad_4[0x8]; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayerMarkerInfo
// Size: 0x10 (Inherited: 0x00)
struct FPlayerMarkerInfo {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	int32_t CharacterStatus; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkerPendingItem
// Size: 0x10 (Inherited: 0x00)
struct FMarkerPendingItem {
public:

	struct TArray<struct UGPMarkerItemBase*> PendingMarkerItems; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkCharacterInfo
// Size: 0x50 (Inherited: 0x00)
struct FMarkCharacterInfo {
public:

	struct AActor* MarkedActor; // 0x00(0x08)
	struct FVector2D ScreePos; // 0x08(0x08)
	struct FVector2D HeadScreePos; // 0x10(0x08)
	bool bInDetailSquare; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float CurrentMarkingTime; // 0x1c(0x04)
	float CurrentCancelingTime; // 0x20(0x04)
	bool bIsMarking; // 0x24(0x01)
	bool bIsMarked; // 0x25(0x01)
	bool bIsCanceling; // 0x26(0x01)
	char pad_27[0x1]; // 0x27(0x01)
	float CancelNeededTime; // 0x28(0x04)
	float MarkNeededTime; // 0x2c(0x04)
	bool bHasOutlineMesh; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct USkeletalMeshComponent* SkeletalMeshComp; // 0x38(0x08)
	float DistToCharacter; // 0x40(0x04)
	bool bShowProgressionUI; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float DelayShowProgressionTime; // 0x48(0x04)
	bool FromWeaponMark; // 0x4c(0x01)
	bool FromAbilityMark; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MaterialShaderKeyword
// Size: 0x10 (Inherited: 0x00)
struct FMaterialShaderKeyword {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MaterialVaraintDataRow
// Size: 0x48 (Inherited: 0x08)
struct FMaterialVaraintDataRow : public FTableRowBase {
public:

	struct FName MaterialName; // 0x08(0x08)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char SrcMaterial[0x28]; // 0x10(0x28)
	struct TArray<struct FMaterialVariantRow> MaterialVariants; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MaterialVariantRow
// Size: 0x50 (Inherited: 0x00)
struct FMaterialVariantRow {
public:

	struct TArray<struct FName> Keywords; // 0x00(0x10)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char Material[0x28]; // 0x10(0x28)
	struct TArray<struct FMaterialVariantStaticSwitchExtraMaterials> ExtraMaterials; // 0x38(0x10)
	bool bAutoGen; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MaterialVariantStaticSwitchExtraMaterials
// Size: 0x80 (Inherited: 0x00)
struct FMaterialVariantStaticSwitchExtraMaterials {
public:

	struct TMap<struct FName, struct FMaterialVariantStaticSwitchRow> StaticSwitchs; // 0x00(0x50)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char Material[0x28]; // 0x50(0x28)
	bool bAutoGen; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MaterialVariantStaticSwitchRow
// Size: 0x0c (Inherited: 0x00)
struct FMaterialVariantStaticSwitchRow {
public:

	struct FName StaticSwitchName; // 0x00(0x08)
	bool Value; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPMilitaryPropsAnimInstanceProxy
// Size: 0x748 (Inherited: 0x748)
struct FGPMilitaryPropsAnimInstanceProxy : public FAnimInstanceProxy {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPHaavkAnimInstanceProxy
// Size: 0x780 (Inherited: 0x748)
struct FGPHaavkAnimInstanceProxy : public FAnimInstanceProxy {
public:

	enum class EGPWeaponStateType WeaponState; // 0x748(0x01)
	char pad_749[0x7]; // 0x749(0x07)
	struct UAnimSequence* IdleSeq; // 0x750(0x08)
	struct UAnimSequence* InactiveSeq; // 0x758(0x08)
	bool bIsWeaponDamage; // 0x760(0x01)
	bool bIsWeaponActive; // 0x761(0x01)
	char pad_762[0x2]; // 0x762(0x02)
	float AOAimingPitch; // 0x764(0x04)
	float AOAimingYaw; // 0x768(0x04)
	bool bIsLaunch; // 0x76c(0x01)
	char pad_76D[0x13]; // 0x76d(0x13)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPModularWeaponAnimInstanceProxy
// Size: 0x8f0 (Inherited: 0x748)
struct FGPModularWeaponAnimInstanceProxy : public FAnimInstanceProxy {
public:

	struct FPartAnimStructForPin PartAnimStruct; // 0x748(0x10)
	bool ResetAccumulatedTimeToggle; // 0x758(0x01)
	char pad_759[0x3]; // 0x759(0x03)
	int32_t CacheModifyMultBoneMeshLod; // 0x75c(0x04)
	struct FModifyMultBoneStructForPin ModifyMultBoneStruct; // 0x760(0x70)
	float UpdateModifyBonesAlpha; // 0x7d0(0x04)
	char pad_7D4[0x4]; // 0x7d4(0x04)
	struct UAnimSequenceBase* Sequence; // 0x7d8(0x08)
	struct UAnimSequenceBase* AimSequence; // 0x7e0(0x08)
	struct UAnimSequenceBase* IdleSequence; // 0x7e8(0x08)
	float PlayRate; // 0x7f0(0x04)
	float StartPosition; // 0x7f4(0x04)
	bool bLoopAnimation; // 0x7f8(0x01)
	bool bPlayAimAnim; // 0x7f9(0x01)
	bool bPlayWeaponAnim; // 0x7fa(0x01)
	bool bHasIdlePose; // 0x7fb(0x01)
	char pad_7FC[0x4]; // 0x7fc(0x04)
	bool bUpdateMagCL; // 0x800(0x01)
	char pad_801[0x3]; // 0x801(0x03)
	float MagCLInitSpeed; // 0x804(0x04)
	float MagCLAddSpeedZ; // 0x808(0x04)
	struct FVector StartLocation; // 0x80c(0x0c)
	bool bIsEmptyAmmo; // 0x818(0x01)
	bool bIsFireMode; // 0x819(0x01)
	enum class EGPWeaponFiringMode EWeaponFiringMode; // 0x81a(0x01)
	char pad_81B[0x1]; // 0x81b(0x01)
	float EmptyAmmoAlpha; // 0x81c(0x04)
	float FireModeAlpha; // 0x820(0x04)
	char pad_824[0x6]; // 0x824(0x06)
	bool bIsFPPWeapn; // 0x82a(0x01)
	char pad_82B[0x5]; // 0x82b(0x05)
	struct UAnimSequenceBase* OnHockAnim; // 0x830(0x08)
	struct UAnimSequenceBase* FireModeAnim; // 0x838(0x08)
	struct TMap<enum class EGPWeaponFiringMode, struct UAnimSequenceBase*> FireModeAnimMap; // 0x840(0x50)
	float FireModeAnimPLayTime; // 0x890(0x04)
	char pad_894[0x4]; // 0x894(0x04)
	struct AGPCharacter* OwnerPawn; // 0x898(0x08)
	struct AWeaponBase* NewWeaponInv; // 0x8a0(0x08)
	char pad_8A8[0x10]; // 0x8a8(0x10)
	/*struct TScriptInterface<IWeaponInterface>*/char CurInv[0x10]; // 0x8b8(0x10)
	/*struct TScriptInterface<IWeaponDataComponentAnimInterface>*/char WeaponAnimDataComponent[0x10]; // 0x8c8(0x10)
	struct UModularWeaponDataComponentAnim* ModularWeaponAnimDataComponentRealComp; // 0x8d8(0x08)
	char pad_8E0[0x10]; // 0x8e0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MPGPWeaponDescInfo
// Size: 0x30 (Inherited: 0x00)
struct FMPGPWeaponDescInfo {
public:

	struct TArray<struct FGunDescRow> GunDescRows; // 0x00(0x10)
	uint64_t PoorItemId; // 0x10(0x08)
	uint64_t ModifyTimeStamp; // 0x18(0x08)
	uint64_t AttrModifyTimeStamp; // 0x20(0x08)
	uint64_t SkinId; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.NetActorInitializeFilter
// Size: 0x148 (Inherited: 0x00)
struct FNetActorInitializeFilter {
public:

	char pad_0[0x148]; // 0x00(0x148)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SpectatorBriefInfo
// Size: 0x28 (Inherited: 0x00)
struct FSpectatorBriefInfo {
public:

	struct FString MyName; // 0x00(0x10)
	uint64_t MyUin; // 0x10(0x08)
	int32_t MyTeamID; // 0x18(0x04)
	int32_t CampId; // 0x1c(0x04)
	bool bIsAILab; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ActorMoveMessage
// Size: 0x2c (Inherited: 0x00)
struct FActorMoveMessage {
public:

	struct FVector Position; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	struct FVector Velocity; // 0x18(0x0c)
	uint32_t ClientTick; // 0x24(0x04)
	bool Snapshot; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityNotifyInfo
// Size: 0x28 (Inherited: 0x00)
struct FAbilityNotifyInfo {
public:

	char pad_0[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.OutLineEffectTimeData
// Size: 0x0c (Inherited: 0x00)
struct FOutLineEffectTimeData {
public:

	enum class EOutLineEffectType ItemOutLineType; // 0x00(0x04)
	float OutlineEffectMaxTime; // 0x04(0x04)
	float OutlineForceStopTime; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityItemOutLineData
// Size: 0x10 (Inherited: 0x00)
struct FAbilityItemOutLineData {
public:

	int32_t ItemUin; // 0x00(0x04)
	enum class EAbilityItemOutLineType ItemOutLineType; // 0x04(0x04)
	int32_t TeamOrCampID; // 0x08(0x04)
	float OutlineEndTime; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPParachuteRepInfo
// Size: 0x1c (Inherited: 0x00)
struct FGPParachuteRepInfo {
public:

	float StartTimestamp; // 0x00(0x04)
	struct FVector OriginPos; // 0x04(0x0c)
	struct FVector DestPos; // 0x10(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CommonSplinePathData
// Size: 0x02 (Inherited: 0x00)
struct FCommonSplinePathData {
public:

	bool bUseCacheGroundHeight; // 0x00(0x01)
	bool bLoop; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPPathWayPointPauseSettings
// Size: 0x08 (Inherited: 0x00)
struct FGPPathWayPointPauseSettings {
public:

	bool bAutoResume; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float PauseDuration; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CachedZoomRateByFOV
// Size: 0x20 (Inherited: 0x00)
struct FCachedZoomRateByFOV {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAutoAimingSettings
// Size: 0x6c (Inherited: 0x00)
struct FGPAutoAimingSettings {
public:

	float AutoAimingFollowSpringCoeff; // 0x00(0x04)
	float AutoAimingConstantFollowSpeed; // 0x04(0x04)
	float AutoAimingConstantFollowSpeed_Verti; // 0x08(0x04)
	float AutoAimingConstantFollowSpeed_NearFire; // 0x0c(0x04)
	float AutoAimingMaxAngleSpeed; // 0x10(0x04)
	float AutoAimingMaxAngleSpeed_NearFire; // 0x14(0x04)
	bool bUseConstantSpeed; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float AutoAimingDistance_Min; // 0x1c(0x04)
	float AutoAimingDistance_Max; // 0x20(0x04)
	float AutoAimingStartRange; // 0x24(0x04)
	float AutoAimingEndRange; // 0x28(0x04)
	float AutoAimingTargetOffset; // 0x2c(0x04)
	float AutoAimingRangeScaleByDis; // 0x30(0x04)
	float AutoAimingHeightRate; // 0x34(0x04)
	float AutoAimingHeightRate_NearFire; // 0x38(0x04)
	float AutoAimingMoveCompensateRatio; // 0x3c(0x04)
	float AutoAimingMoveCompensateDisThresholdSq; // 0x40(0x04)
	float AutoAimingMoveCompensateRatio_NearFire; // 0x44(0x04)
	float AutoAimingCompensateMaxAngleSpeed; // 0x48(0x04)
	float AutoAimingCompensateMaxAngleSpeed_NearFire; // 0x4c(0x04)
	float AutoAimingQuitThreshold; // 0x50(0x04)
	float AutoAimingCheckInterval; // 0x54(0x04)
	float RotateDampingCoeff_X; // 0x58(0x04)
	float RotateDampingCoeff_Y; // 0x5c(0x04)
	float RotateDampingRange; // 0x60(0x04)
	bool bPauseAimingAfterFire; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float FireAimingCoolDownTime; // 0x68(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPSceneFOVChangeDataInfo
// Size: 0x20 (Inherited: 0x00)
struct FGPSceneFOVChangeDataInfo {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPCharacterCameraData
// Size: 0x28 (Inherited: 0x00)
struct FGPCharacterCameraData {
public:

	float OverShoulderNearDistance; // 0x00(0x04)
	struct FVector OverShoulderOffset; // 0x04(0x0c)
	float AimDistance; // 0x10(0x04)
	struct FVector AimOffset; // 0x14(0x0c)
	float AimPitch; // 0x20(0x04)
	float AimFOV; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayerMissionDialogInfo
// Size: 0x18 (Inherited: 0x00)
struct FPlayerMissionDialogInfo {
public:

	struct FString Tag; // 0x00(0x10)
	int32_t GroupID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MissionObjectiveProgress
// Size: 0x68 (Inherited: 0x00)
struct FMissionObjectiveProgress {
public:

	bool HasAuthority; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<uint64_t, int32_t> DataMap; // 0x08(0x50)
	struct TArray<struct FMissionObjectiveProgressData> Data; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MissionObjectiveProgressData
// Size: 0x68 (Inherited: 0x00)
struct FMissionObjectiveProgressData {
public:

	struct TMap<uint64_t, int32_t> DataMap; // 0x00(0x50)
	int32_t ID; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FMissionObjectiveItemData> Data; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MissionObjectiveItemData
// Size: 0x48 (Inherited: 0x00)
struct FMissionObjectiveItemData {
public:

	uint64_t missionid; // 0x00(0x08)
	uint64_t objectiveId; // 0x08(0x08)
	float Progress; // 0x10(0x04)
	float TargetProgress; // 0x14(0x04)
	struct FString QuestName; // 0x18(0x10)
	struct FString ObjectiveTitle; // 0x28(0x10)
	bool bSide; // 0x38(0x01)
	bool bCurrentActive; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	uint64_t TriggerId; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MissionGiverInfo
// Size: 0x18 (Inherited: 0x00)
struct FMissionGiverInfo {
public:

	struct TArray<int32_t> RelativeMission; // 0x00(0x10)
	int32_t Index; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayerMissionUIInfo
// Size: 0x20 (Inherited: 0x00)
struct FPlayerMissionUIInfo {
public:

	int32_t missionid; // 0x00(0x04)
	struct FVector pos; // 0x04(0x0c)
	bool bCurrentActive; // 0x10(0x01)
	bool bAccepted; // 0x11(0x01)
	bool bExpired; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	int64_t TimeLeft; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayerMissionGiverInfo
// Size: 0x30 (Inherited: 0x00)
struct FPlayerMissionGiverInfo {
public:

	uint64_t missionid; // 0x00(0x08)
	struct AActor* Actor; // 0x08(0x08)
	struct FString actorTag; // 0x10(0x10)
	struct FVector actorPos; // 0x20(0x0c)
	bool give; // 0x2c(0x01)
	bool mapmarker; // 0x2d(0x01)
	bool ForceUpdate; // 0x2e(0x01)
	bool Option; // 0x2f(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TurnInItemQueryData
// Size: 0x20 (Inherited: 0x00)
struct FTurnInItemQueryData {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FString NPCTag; // 0x08(0x10)
	int64_t QuestID; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TimeLimitMissions
// Size: 0x60 (Inherited: 0x00)
struct FTimeLimitMissions {
public:

	struct TMap<int64_t, int32_t> DataMap; // 0x00(0x50)
	struct TArray<struct FTimeLimitMissionInfo> Data; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TimeLimitMissionInfo
// Size: 0x18 (Inherited: 0x00)
struct FTimeLimitMissionInfo {
public:

	int64_t missionid; // 0x00(0x08)
	int32_t TimeLeft; // 0x08(0x04)
	int32_t ExpireTime; // 0x0c(0x04)
	int32_t DsExpireTime; // 0x10(0x04)
	bool InArea; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayerDeathAndCarryDataInfo
// Size: 0x30 (Inherited: 0x00)
struct FPlayerDeathAndCarryDataInfo {
public:

	int32_t PlayerImpendingDeathNum; // 0x00(0x04)
	int32_t ImpendingDeathToDeathFastNum; // 0x04(0x04)
	float LogImpendingDeathStartTime; // 0x08(0x04)
	int32_t ImpendingDeathGiveUpNum; // 0x0c(0x04)
	int32_t ImpendingDeathRescueNum; // 0x10(0x04)
	int32_t ImpendingDeathForHelpNum; // 0x14(0x04)
	int32_t DeathForHelpNum; // 0x18(0x04)
	int32_t PlayerCarryNum; // 0x1c(0x04)
	int32_t PlayerCarryAINum; // 0x20(0x04)
	int32_t PlayerCarryTeamMemberNum; // 0x24(0x04)
	int32_t PlayerCarryPlayerNum; // 0x28(0x04)
	int32_t ImpendingDeathForHelpResponseNum; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayerWeaponMysticalSkinInfo
// Size: 0x50 (Inherited: 0x00)
struct FPlayerWeaponMysticalSkinInfo {
public:

	uint64_t SkinGid; // 0x00(0x08)
	uint64_t SkinId; // 0x08(0x08)
	uint64_t UniqueNumber; // 0x10(0x08)
	uint64_t KillCnt; // 0x18(0x08)
	int32_t Rarity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString CustomName; // 0x28(0x10)
	uint64_t Wear; // 0x38(0x08)
	uint64_t MysticalId; // 0x40(0x08)
	uint64_t Seed; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayerWeaponSkinInfo
// Size: 0x18 (Inherited: 0x00)
struct FPlayerWeaponSkinInfo {
public:

	uint64_t SkinId; // 0x00(0x08)
	uint64_t ColorId; // 0x08(0x08)
	bool bLockApperance; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayerWeaponSkinSetup
// Size: 0x20 (Inherited: 0x00)
struct FPlayerWeaponSkinSetup {
public:

	uint64_t WeaponID; // 0x00(0x08)
	uint64_t SkinId; // 0x08(0x08)
	uint64_t SkinGid; // 0x10(0x08)
	uint64_t PendantID; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.LoginInfo
// Size: 0x18 (Inherited: 0x00)
struct FLoginInfo {
public:

	char pad_0[0x8]; // 0x00(0x08)
	int32_t LoginNumber; // 0x08(0x04)
	int32_t OfflineNumber; // 0x0c(0x04)
	int32_t ReloginNumber; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TeamMemberInfo
// Size: 0x40 (Inherited: 0x00)
struct FTeamMemberInfo {
public:

	uint64_t PlayerUin; // 0x00(0x08)
	struct FString PlayerName; // 0x08(0x10)
	int32_t InnerTeamIndex; // 0x18(0x04)
	int32_t TeamId; // 0x1c(0x04)
	int32_t CampId; // 0x20(0x04)
	uint32_t PlayerGUID; // 0x24(0x04)
	struct AGPCharacter* CHARACTER; // 0x28(0x08)
	struct AController* Controller; // 0x30(0x08)
	struct AGPPlayerState* PS; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPPostprocessDynamicMaterialInfo
// Size: 0x68 (Inherited: 0x00)
struct FGPPostprocessDynamicMaterialInfo {
public:

	uint32_t EffectPriority; // 0x00(0x04)
	uint32_t EffectIndex; // 0x04(0x04)
	struct UMaterialInstanceDynamic* VeryHighPostMaterial; // 0x08(0x08)
	struct UMaterialInstanceDynamic* VeryHighFullScreenMaterial; // 0x10(0x08)
	struct UStaticMesh* VeryHighQuadMesh; // 0x18(0x08)
	struct UMaterialInstanceDynamic* HighPostMaterial; // 0x20(0x08)
	struct UMaterialInstanceDynamic* HighFullScreenMaterial; // 0x28(0x08)
	struct UStaticMesh* HighQuadMesh; // 0x30(0x08)
	struct UMaterialInstanceDynamic* MediumFullScreenMaterial; // 0x38(0x08)
	struct UStaticMesh* MediumQuadMesh; // 0x40(0x08)
	struct UMaterialInstanceDynamic* LowFullScreenMaterial; // 0x48(0x08)
	struct UStaticMesh* LowQuadMesh; // 0x50(0x08)
	struct UMaterialInstanceDynamic* VeryLowFullScreenMaterial; // 0x58(0x08)
	struct UStaticMesh* VeryLowQuadMesh; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPProjectileFXItem
// Size: 0x1c (Inherited: 0x00)
struct FGPProjectileFXItem {
public:

	struct FVector ZeroBasedCenterPos; // 0x00(0x0c)
	float SqrDistance; // 0x0c(0x04)
	float radius; // 0x10(0x04)
	struct TWeakObjectPtr<struct UObject> FXOwner; // 0x14(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RagdollPhysicsBodyCollectionData
// Size: 0x18 (Inherited: 0x00)
struct FRagdollPhysicsBodyCollectionData {
public:

	bool bFromServer; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FRagdollPhysicsBodyData> BodyDataCollection; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RagdollPhysicsBodyData
// Size: 0x20 (Inherited: 0x00)
struct FRagdollPhysicsBodyData {
public:

	struct FName BoneName; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FVector LinearVelocity; // 0x14(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RagDollDeathConfigTable
// Size: 0x90 (Inherited: 0x10)
struct FRagDollDeathConfigTable : public FDescRowBase {
public:

	struct UPhysicsAsset* ServerRagdollPhysicsAsset; // 0x10(0x08)
	struct UPhysicsAsset* ClientRagDollPhysicsAsset; // 0x18(0x08)
	struct FName PhysicalAnimationName; // 0x20(0x08)
	float DeathAnimationFourDirTolerantAngle; // 0x28(0x04)
	float DeathMaxSpeedFromAnimation; // 0x2c(0x04)
	float DeathPhysicStrength; // 0x30(0x04)
	float DeathPhysicServerStrength; // 0x34(0x04)
	float DeathCrouchForceStrengthMul; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FRagDollDeathForceInfo> DeathForceArray; // 0x40(0x10)
	struct TArray<struct FRagdollConstraintInfo> ConstraintInfos; // 0x50(0x10)
	float ConstraintAnimTime; // 0x60(0x04)
	bool bEnableSelfCollision; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct FName> IncreaseDampingBones; // 0x68(0x10)
	bool bEnableHipsConstraint; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float HipsConstraintStiffness; // 0x7c(0x04)
	float HipsConstraintDamping; // 0x80(0x04)
	float VehicleVelocityFactor; // 0x84(0x04)
	float VehicleVerticalVelocity; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RagdollConstraintInfo
// Size: 0x34 (Inherited: 0x00)
struct FRagdollConstraintInfo {
public:

	struct FName ConstraintBoneName; // 0x00(0x08)
	float MotorStiffness; // 0x08(0x04)
	float MotorDamping; // 0x0c(0x04)
	struct FRotator ConstraintRotation; // 0x10(0x0c)
	bool bBlendToConstraintRotation; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float bBlendToConstraintRotationSpeed; // 0x20(0x04)
	enum class ERagdollConstraintAnimType ConstraintAlphaType; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float FixMotorAlpha; // 0x28(0x04)
	float OffsetMotorAlpha; // 0x2c(0x04)
	bool bStopWhileHipStable; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RagDollDeathForceInfo
// Size: 0x48 (Inherited: 0x00)
struct FRagDollDeathForceInfo {
public:

	float PlayAnimationTime; // 0x00(0x04)
	float PhysicalAnimationTimer; // 0x04(0x04)
	float BlendToPhysicsTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> BoneNameList; // 0x10(0x10)
	struct TArray<struct FName> AddForceBoneNameList; // 0x20(0x10)
	struct TArray<float> HitForceList; // 0x30(0x10)
	enum class EHitPartType PartType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RagDollReplicateData
// Size: 0x4c (Inherited: 0x00)
struct FRagDollReplicateData {
public:

	bool bIsStopPhysicsFromServer; // 0x00(0x01)
	bool RagDollStopLocationValid; // 0x01(0x01)
	bool bRagdollOnMovableBase; // 0x02(0x01)
	bool bRepMovementValid; // 0x03(0x01)
	struct FVector RagDollStopLocation; // 0x04(0x0c)
	struct FRepMovement ReplicatePhysicsMovement; // 0x10(0x34)
	float MeshOffsetZ; // 0x44(0x04)
	bool bRagdollErrorNeedClear; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RagdollPhysicsComponentPostPhysicsTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FRagdollPhysicsComponentPostPhysicsTickFunction : public FTickFunction {
public:

	struct UGPRagDollPhysicsComponent* Target; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RagdollAnimationContext
// Size: 0x1a0 (Inherited: 0x00)
struct FRagdollAnimationContext {
public:

	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct UAnimSequence* TargetAnimation; // 0x10(0x08)
	char pad_18[0x188]; // 0x18(0x188)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RagdollImpendingDeathInfo
// Size: 0x28 (Inherited: 0x00)
struct FRagdollImpendingDeathInfo {
public:

	enum class EChracterPoseType DeathPose; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ShotBone; // 0x04(0x08)
	char DeathDirection; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FVector RawShotDir; // 0x10(0x0c)
	struct FVector VehicleVelocity; // 0x1c(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAIDeathAnimConfigRow
// Size: 0x18 (Inherited: 0x08)
struct FGPAIDeathAnimConfigRow : public FTableRowBase {
public:

	struct TArray<struct FDeathAnimConfigWithDirRange> DeathAnims; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.KinematicHipRepInfo
// Size: 0x18 (Inherited: 0x00)
struct FKinematicHipRepInfo {
public:

	float ProbGroundDis; // 0x00(0x04)
	float ProbDropLen; // 0x04(0x04)
	struct TArray<struct FDeathPoints> Points; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DeathPoints
// Size: 0x1c (Inherited: 0x00)
struct FDeathPoints {
public:

	float InitSpeed; // 0x00(0x04)
	struct FVector StartPoint; // 0x04(0x0c)
	struct FVector LastPoint; // 0x10(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PlayRagDollPhysicsParam
// Size: 0x14 (Inherited: 0x00)
struct FPlayRagDollPhysicsParam {
public:

	struct TWeakObjectPtr<struct USkeletalMeshComponent> InSkeletalMeshComponent; // 0x00(0x08)
	char pad_8[0xc]; // 0x08(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityRushSettingConfig
// Size: 0x190 (Inherited: 0x00)
struct FAbilityRushSettingConfig {
public:

	struct UCurveFloat* RushHeightCurve; // 0x00(0x08)
	struct UCurveFloat* RushHeightCurveR; // 0x08(0x08)
	struct UCurveFloat* RushHeightCurveL; // 0x10(0x08)
	struct UCurveFloat* RushHeightCurveB; // 0x18(0x08)
	struct UCurveFloat* RushHeightCurve_falling; // 0x20(0x08)
	struct UCurveFloat* RushHeightCurveR_falling; // 0x28(0x08)
	struct UCurveFloat* RushHeightCurveL_falling; // 0x30(0x08)
	struct UCurveFloat* RushHeightCurveB_falling; // 0x38(0x08)
	struct FName RushAction_F_AnimKey; // 0x40(0x08)
	struct FName RushAction_L_AnimKey; // 0x48(0x08)
	struct FName RushAction_R_AnimKey; // 0x50(0x08)
	struct FName RushAction_B_AnimKey; // 0x58(0x08)
	float AnimPlate; // 0x60(0x04)
	float RushTime; // 0x64(0x04)
	float MaxMoveDist; // 0x68(0x04)
	float LastEndTime; // 0x6c(0x04)
	bool UseMovePath; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct UCurveFloat* RushMovePath; // 0x78(0x08)
	struct UCurveFloat* RushMovePathB; // 0x80(0x08)
	struct UCurveFloat* RushMovePathR; // 0x88(0x08)
	struct UCurveFloat* RushMovePathL; // 0x90(0x08)
	struct UCurveFloat* BreakCurve; // 0x98(0x08)
	float BreakBlendOutTime; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TArray<int32_t> AddBuffs; // 0xa8(0x10)
	struct TArray<int32_t> ForwadAddBuffs; // 0xb8(0x10)
	struct TArray<int32_t> BackAddBuffs; // 0xc8(0x10)
	struct TArray<int32_t> LeftAddBuffs; // 0xd8(0x10)
	struct TArray<int32_t> RightAddBuffs; // 0xe8(0x10)
	struct TArray<int32_t> AddEndBuffs; // 0xf8(0x10)
	float EndTimeOffset; // 0x108(0x04)
	bool DebugDraw; // 0x10c(0x01)
	enum class EAnimationPlayType AnimationPlayTypeFPP; // 0x10d(0x01)
	enum class EAnimationPlayType AnimationPlayTypeTPP; // 0x10e(0x01)
	enum class EFPPCameraRotationCalcType CameraRotationCalcType; // 0x10f(0x01)
	float AirSpeedFactor; // 0x110(0x04)
	bool UseAirEndSpeed; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	float AirEndSpeed; // 0x118(0x04)
	float AllowVaultControlTime; // 0x11c(0x04)
	float ContinueTime; // 0x120(0x04)
	float ContinueTimeB; // 0x124(0x04)
	float ContinueTimeR; // 0x128(0x04)
	float ContinueTimeL; // 0x12c(0x04)
	float GroundContinueTime; // 0x130(0x04)
	float GroundContinueTimeB; // 0x134(0x04)
	float GroundContinueTimeR; // 0x138(0x04)
	float GroundContinueTimeL; // 0x13c(0x04)
	float MaxZFallingSpeed; // 0x140(0x04)
	float F_Distance_Scale; // 0x144(0x04)
	float B_Distance_Scale; // 0x148(0x04)
	float L_Distance_Scale; // 0x14c(0x04)
	float R_Distance_Scale; // 0x150(0x04)
	float F_Time_Scale; // 0x154(0x04)
	float B_Time_Scale; // 0x158(0x04)
	float L_Time_Scale; // 0x15c(0x04)
	float R_Time_Scale; // 0x160(0x04)
	float GroundContinueScale; // 0x164(0x04)
	struct FSoftObjectPath GPAudioOnAdd; // 0x168(0x18)
	float MoveStopDistance; // 0x180(0x04)
	float MoveStopTime; // 0x184(0x04)
	bool MoveStopSkill; // 0x188(0x01)
	bool DebugMoveStop; // 0x189(0x01)
	bool MoveStopDistanceIncludeZ; // 0x18a(0x01)
	char pad_18B[0x5]; // 0x18b(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PendingSceneActorInfo
// Size: 0x10 (Inherited: 0x00)
struct FPendingSceneActorInfo {
public:

	struct AActor* SceneActor; // 0x00(0x08)
	int32_t NetworkGUID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SceneActorInfo
// Size: 0x18 (Inherited: 0x00)
struct FSceneActorInfo {
public:

	enum class EGPSceneActorType SceneActorType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t UniqueId; // 0x04(0x04)
	int32_t NetworkGUID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AActor* SceneActor; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SOLSeamlessEnterConfig
// Size: 0x68 (Inherited: 0x08)
struct FSOLSeamlessEnterConfig : public FTableRowBase {
public:

	struct FName MapName; // 0x08(0x08)
	float StageFailedTimeout_GetOn; // 0x10(0x04)
	float StageFailedTimeout_PadShow; // 0x14(0x04)
	float StageFailedTimeout_InteractMap; // 0x18(0x04)
	float ForceInteractTime; // 0x1c(0x04)
	float TimeOut_WaitStartMatch; // 0x20(0x04)
	float SeamlessLoginEnsureTime; // 0x24(0x04)
	float PlayerLateProtectTime; // 0x28(0x04)
	float SeamlessAbseilTime; // 0x2c(0x04)
	float DelayShowConnectDSTipsTime; // 0x30(0x04)
	float DelayShowLoadLevelTipsTime; // 0x34(0x04)
	float DelayShowWaitMatchStartTipsTime; // 0x38(0x04)
	float TimeOut_LevelStreaming; // 0x3c(0x04)
	float TimeOut_LevelPhysics; // 0x40(0x04)
	float TimeOut_ConnectingDS; // 0x44(0x04)
	float GetOnBlackScreenTime; // 0x48(0x04)
	float StageFailedTimeout_EDITOR; // 0x4c(0x04)
	float StageFailedTimeout_ASAN; // 0x50(0x04)
	float DelaySwitchGameFlowTime; // 0x54(0x04)
	float DEBUG_GetOnDelayTime; // 0x58(0x04)
	float TimeOut_HUDPreload; // 0x5c(0x04)
	float AsyncLoadingTimeLimit_InteractMap; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPSHAnimInstanceProxy
// Size: 0x860 (Inherited: 0x748)
struct FGPSHAnimInstanceProxy : public FAnimInstanceProxy {
public:

	struct AGPSafeHouseCharacter* OwnerPawn; // 0x748(0x08)
	struct UGPSafeHouseCharacterMovementComponent* MovementComponent; // 0x750(0x08)
	struct UGPSafeHouseAnimProxyComponent* SHAnimProxyComponent; // 0x758(0x08)
	bool bShouldJump; // 0x760(0x01)
	bool bShouldStop; // 0x761(0x01)
	bool bShouldSprint; // 0x762(0x01)
	bool bShouldCrouch; // 0x763(0x01)
	bool bShouldProne; // 0x764(0x01)
	bool bShouldSilentWalk; // 0x765(0x01)
	bool MoveModeChange; // 0x766(0x01)
	bool bIsFalling; // 0x767(0x01)
	bool bIsMoving; // 0x768(0x01)
	bool bIsCrouch; // 0x769(0x01)
	bool bIsProne; // 0x76a(0x01)
	bool bIsSprint; // 0x76b(0x01)
	bool bIsSilentWalk; // 0x76c(0x01)
	bool bIsStand; // 0x76d(0x01)
	char pad_76E[0x2]; // 0x76e(0x02)
	float Velocity; // 0x770(0x04)
	float MovingDirection; // 0x774(0x04)
	float VelocityForAnim; // 0x778(0x04)
	char pad_77C[0x4]; // 0x77c(0x04)
	struct UAnimSequence* CurrentMovementModeTransitionAnimation; // 0x780(0x08)
	struct UBlendSpaceBase* CurrentMovementModeTransitionAnimationBS; // 0x788(0x08)
	struct UBlendSpaceBase* CurrentMoveBS; // 0x790(0x08)
	struct UAnimSequence* CurrentIdleAnimation; // 0x798(0x08)
	struct TMap<struct FName, struct UAnimSequence*> AnimSequence; // 0x7a0(0x50)
	struct TMap<struct FName, struct UBlendSpaceBase*> AnimBlendSpece; // 0x7f0(0x50)
	/*struct TScriptInterface<IWeaponDataComponentAnimInterface>*/char WeaponAnimDataComponent[0x10]; // 0x840(0x10)
	struct UGPSafeHouseBlackboardComponent* BlackBoard; // 0x850(0x08)
	char pad_858[0x8]; // 0x858(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RepairRecord
// Size: 0x0c (Inherited: 0x00)
struct FRepairRecord {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAnimUpdateRateSettings
// Size: 0x20 (Inherited: 0x00)
struct FGPAnimUpdateRateSettings {
public:

	int32_t BaseNonRenderedUpdateRate; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<float> BaseVisibleDistanceFactorThesholds; // 0x08(0x10)
	enum class ESkeletalMeshAnimUROActorType AnimUROForActorType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillDetailInfo
// Size: 0x04 (Inherited: 0x00)
struct FSkillDetailInfo {
public:

	int32_t ExpertId; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ArmedforceDataFlow
// Size: 0x48 (Inherited: 0x00)
struct FArmedforceDataFlow {
public:

	char pad_0[0x48]; // 0x00(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ArmedforceAttrOpTgLogData
// Size: 0x18 (Inherited: 0x00)
struct FArmedforceAttrOpTgLogData {
public:

	struct FName AttributeName; // 0x00(0x08)
	int64_t AttrOperatorID; // 0x08(0x08)
	int32_t SkillId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityMeshData
// Size: 0x38 (Inherited: 0x00)
struct FAbilityMeshData {
public:

	struct FName MeshName; // 0x00(0x08)
	struct UGPSkeletalMeshComponent* SkeletalMesh; // 0x08(0x08)
	struct UGPAbilityAnimInstance* AnimIns; // 0x10(0x08)
	struct FName SkeletalMeshSocketName; // 0x18(0x08)
	bool IsFPP; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct UMaterialInstanceDynamic*> Material; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityAvatarData
// Size: 0x18 (Inherited: 0x00)
struct FAbilityAvatarData {
public:

	struct TWeakObjectPtr<struct UMeshComponent> MeshWeakPtr; // 0x00(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Material; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TimingWheelDataFlow
// Size: 0x88 (Inherited: 0x00)
struct FTimingWheelDataFlow {
public:

	float DireWolfArmedPropDamageCount10s; // 0x00(0x04)
	float DireWolfArmedPropDamageCount30s; // 0x04(0x04)
	int32_t DireWolfOverload; // 0x08(0x04)
	int32_t DragonBeKnockBack10s; // 0x0c(0x04)
	int32_t DragonBeKnockBack30s; // 0x10(0x04)
	int32_t DragonUseDash10s; // 0x14(0x04)
	float DragonC4DamageCount10s; // 0x18(0x04)
	float DragonC4DamageCount30s; // 0x1c(0x04)
	float LunaElecBowDamageCount10s; // 0x20(0x04)
	float LunaElecBowDamageCount30s; // 0x24(0x04)
	int32_t LunaDetectBowMarked10s; // 0x28(0x04)
	int32_t LunaDetectBowMarked30s; // 0x2c(0x04)
	float LunaGrenadeDamageCount10s; // 0x30(0x04)
	float LunaGrenadeDamageCount30s; // 0x34(0x04)
	int32_t HackerTracing; // 0x38(0x04)
	float HackerBeFlashBuffTime10s; // 0x3c(0x04)
	float FoleyBeHealedCount10s; // 0x40(0x04)
	float FoleyBeHealedCount30s; // 0x44(0x04)
	int32_t TerryTrapBeHit10s; // 0x48(0x04)
	int32_t TerryTrapBeActive10s; // 0x4c(0x04)
	float TerryBeSonicBuffTime10s; // 0x50(0x04)
	float TerryGrenadeDamageCount10s; // 0x54(0x04)
	float TerryGrenadeDamageCount30s; // 0x58(0x04)
	float DavidTVDamageCount10s; // 0x5c(0x04)
	float DavidTVDamageCount30s; // 0x60(0x04)
	float DavidFireDamageCount10s; // 0x64(0x04)
	float DavidFireDamageCount30s; // 0x68(0x04)
	float MoveDistance10s; // 0x6c(0x04)
	float MoveDistance30s; // 0x70(0x04)
	float SprintDistance10s; // 0x74(0x04)
	float SprintDistance30s; // 0x78(0x04)
	float SquatDistance10s; // 0x7c(0x04)
	float SquatDistance30s; // 0x80(0x04)
	int32_t JumpTimes10s; // 0x84(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TimingSkillDataFlow
// Size: 0x148 (Inherited: 0x00)
struct FTimingSkillDataFlow {
public:

	float DireWolfArmedPropDamageCountAsKiller10s; // 0x00(0x04)
	float DireWolfArmedPropDamageCountAsKilled10s; // 0x04(0x04)
	float DireWolfArmedPropDamageCountAsKiller30s; // 0x08(0x04)
	float DireWolfArmedPropDamageCountAsKilled30s; // 0x0c(0x04)
	int32_t DireWolfOverloadAsKiller; // 0x10(0x04)
	int32_t DireWolfOverloadAsKilled; // 0x14(0x04)
	int32_t DragonBeKnockBackAsKiller10s; // 0x18(0x04)
	int32_t DragonBeKnockBackAsKilled10s; // 0x1c(0x04)
	int32_t DragonBeKnockBackAsKiller30s; // 0x20(0x04)
	int32_t DragonBeKnockBackAsKilled30s; // 0x24(0x04)
	int32_t DragonUseDashAsKiller10s; // 0x28(0x04)
	int32_t DragonUseDashAsKilled10s; // 0x2c(0x04)
	float DragonC4DamageCountAsKiller10s; // 0x30(0x04)
	float DragonC4DamageCountAsKilled10s; // 0x34(0x04)
	float DragonC4DamageCountAsKiller30s; // 0x38(0x04)
	float DragonC4DamageCountAsKilled30s; // 0x3c(0x04)
	float LunaElecBowDamageCountAsKiller10s; // 0x40(0x04)
	float LunaElecBowDamageCountAsKilled10s; // 0x44(0x04)
	float LunaElecBowDamageCountAsKiller30s; // 0x48(0x04)
	float LunaElecBowDamageCountAsKilled30s; // 0x4c(0x04)
	int32_t LunaDetectBowMarkedAsKiller10s; // 0x50(0x04)
	int32_t LunaDetectBowMarkedAsKilled10s; // 0x54(0x04)
	int32_t LunaDetectBowMarkedAsKiller30s; // 0x58(0x04)
	int32_t LunaDetectBowMarkedAsKilled30s; // 0x5c(0x04)
	float LunaGrenadeDamageCountAsKiller10s; // 0x60(0x04)
	float LunaGrenadeDamageCountAsKilled10s; // 0x64(0x04)
	float LunaGrenadeDamageCountAsKiller30s; // 0x68(0x04)
	float LunaGrenadeDamageCountAsKilled30s; // 0x6c(0x04)
	int32_t HackerTracingAsKiller; // 0x70(0x04)
	int32_t HackerTracingAsKilled; // 0x74(0x04)
	float HackerBeFlashBuffTimeAsKiller10s; // 0x78(0x04)
	float HackerBeFlashBuffTimeAsKilled10s; // 0x7c(0x04)
	float FoleyBeHealedCountAsKiller10s; // 0x80(0x04)
	float FoleyBeHealedCountAsKilled10s; // 0x84(0x04)
	float FoleyBeHealedCountAsKiller30s; // 0x88(0x04)
	float FoleyBeHealedCountAsKilled30s; // 0x8c(0x04)
	int32_t TerryTrapBeHitAsKiller10s; // 0x90(0x04)
	int32_t TerryTrapBeHitAsKilled10s; // 0x94(0x04)
	int32_t TerryTrapBeActiveAsKiller10s; // 0x98(0x04)
	int32_t TerryTrapBeActiveAsKilled10s; // 0x9c(0x04)
	float TerryBeSonicBuffTimeAsKiller10s; // 0xa0(0x04)
	float TerryBeSonicBuffTimeAsKilled10s; // 0xa4(0x04)
	float TerryGrenadeDamageCountAsKiller10s; // 0xa8(0x04)
	float TerryGrenadeDamageCountAsKilled10s; // 0xac(0x04)
	float TerryGrenadeDamageCountAsKiller30s; // 0xb0(0x04)
	float TerryGrenadeDamageCountAsKilled30s; // 0xb4(0x04)
	float DavidTVDamageCountAsKiller10s; // 0xb8(0x04)
	float DavidTVDamageCountAsKilled10s; // 0xbc(0x04)
	float DavidTVDamageCountAsKiller30s; // 0xc0(0x04)
	float DavidTVDamageCountAsKilled30s; // 0xc4(0x04)
	float DavidFireDamageCountAsKiller10s; // 0xc8(0x04)
	float DavidFireDamageCountAsKilled10s; // 0xcc(0x04)
	float DavidFireDamageCountAsKiller30s; // 0xd0(0x04)
	float DavidFireDamageCountAsKilled30s; // 0xd4(0x04)
	float MoveDistanceAsKiller10s; // 0xd8(0x04)
	float MoveDistanceAsKilled10s; // 0xdc(0x04)
	float MoveDistanceAsKiller30s; // 0xe0(0x04)
	float MoveDistanceAsKilled30s; // 0xe4(0x04)
	float SprintDistanceAsKiller10s; // 0xe8(0x04)
	float SprintDistanceAsKilled10s; // 0xec(0x04)
	float SprintDistanceAsKiller30s; // 0xf0(0x04)
	float SprintDistanceAsKilled30s; // 0xf4(0x04)
	float SquatDistanceAsKiller10s; // 0xf8(0x04)
	float SquatDistanceAsKilled10s; // 0xfc(0x04)
	float SquatDistanceAsKiller30s; // 0x100(0x04)
	float SquatDistanceAsKilled30s; // 0x104(0x04)
	int32_t JumpTimesAsKiller10s; // 0x108(0x04)
	int32_t JumpTimesAsKilled10s; // 0x10c(0x04)
	struct FString GameMultiField; // 0x110(0x10)
	struct FString GamePOIKiller; // 0x120(0x10)
	struct FString GamePOIKilled; // 0x130(0x10)
	int32_t GameGlicko; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillConflictRow
// Size: 0x70 (Inherited: 0x10)
struct FSkillConflictRow : public FDescRowBase {
public:

	int32_t ConflictID; // 0x10(0x04)
	enum class ESkillConflictResolveType DoubleHands; // 0x14(0x01)
	enum class ESkillConflictResolveType RightHand; // 0x15(0x01)
	enum class ESkillConflictResolveType LeftHand; // 0x16(0x01)
	enum class ESkillConflictResolveType Leg; // 0x17(0x01)
	enum class ESkillConflictResolveType Special; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TMap<int32_t, enum class ESkillConflictResolveType> SpecialSkills; // 0x20(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbiltyTemplateAttachMeshConfig
// Size: 0x18 (Inherited: 0x00)
struct FAbiltyTemplateAttachMeshConfig {
public:

	struct FName MeshName; // 0x00(0x08)
	enum class EAbiltyTemplateAttachMeshMode AttachMode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UClass* BP; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.NodeExcuteTime
// Size: 0xa0 (Inherited: 0x00)
struct FNodeExcuteTime {
public:

	struct TMap<int32_t, float> NodeExcuteTimeMap; // 0x00(0x50)
	struct TMap<int32_t, float> NodePassTimeMap; // 0x50(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.LogicNodeProperty
// Size: 0x0c (Inherited: 0x00)
struct FLogicNodeProperty {
public:

	int32_t pos; // 0x00(0x04)
	bool isRepeat; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t TotalNodeNum; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillUIInfo
// Size: 0x78 (Inherited: 0x00)
struct FSkillUIInfo {
public:

	bool CheckWeaponAmmoWhenActivte; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t cdid; // 0x04(0x04)
	enum class ESkillUIState SkillUIState; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t SlotAmmoNum; // 0x0c(0x04)
	int32_t SlotNum; // 0x10(0x04)
	int32_t MaxSlotNum; // 0x14(0x04)
	bool ischarging; // 0x18(0x01)
	bool IsCooling; // 0x19(0x01)
	bool IsEmp; // 0x1a(0x01)
	enum class ESkillItemUsingType Activated; // 0x1b(0x01)
	int32_t SkillUsingType; // 0x1c(0x04)
	struct FText ShortName; // 0x20(0x18)
	int32_t WeaponSlot; // 0x38(0x04)
	bool TipsTextVisible; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FText TipsText; // 0x40(0x18)
	float CDRemainTime; // 0x58(0x04)
	float CDMaxTime; // 0x5c(0x04)
	float UseCDRemainTime; // 0x60(0x04)
	float UseCDMaxTime; // 0x64(0x04)
	enum class ESkillNumType NumType; // 0x68(0x01)
	bool NoCDType; // 0x69(0x01)
	bool SkillVisible; // 0x6a(0x01)
	char pad_6B[0x1]; // 0x6b(0x01)
	int32_t CDSlot; // 0x6c(0x04)
	enum class ESkillUsingType UsingType; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillLogicStateRepeatProperty
// Size: 0x08 (Inherited: 0x00)
struct FSkillLogicStateRepeatProperty {
public:

	int32_t NodeID; // 0x00(0x04)
	int32_t RepeatCount; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillConfigData
// Size: 0x38 (Inherited: 0x10)
struct FSkillConfigData : public FDescRowBase {
public:

	bool bInitAudio; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UGPAudioEventAsset* StartAudio; // 0x18(0x08)
	struct UGPAudioEventAsset* EndAudio; // 0x20(0x08)
	struct UGPAudioEventAsset* CdAudio; // 0x28(0x08)
	struct UGPAudioEventAsset* FaildAudio; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillDataRow
// Size: 0x588 (Inherited: 0x10)
struct FSkillDataRow : public FDescRowBase {
public:

	int32_t SkillId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText SkillDisplayName; // 0x18(0x18)
	struct FText ShortName; // 0x30(0x18)
	bool ClientPredictCountFSMEnter; // 0x48(0x01)
	bool bIsClientPredcit; // 0x49(0x01)
	bool CheckConsumeCommond; // 0x4a(0x01)
	bool bResetWhenReconnect; // 0x4b(0x01)
	bool CanUseWhenChangeWeapon; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TArray<struct FSkillBagWeapon> SkillBagWeapons; // 0x50(0x10)
	struct TArray<int32_t> AddSkills; // 0x60(0x10)
	struct TArray<int32_t> AddBuffs; // 0x70(0x10)
	int32_t ConflictID; // 0x80(0x04)
	enum class EFlowDataType FlowDataType; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	int32_t AbilityDataSpawnType; // 0x88(0x04)
	int32_t AbilitySpawnType; // 0x8c(0x04)
	/*struct TSoftClassPtr<UObject>*/char SkillEntityComponentClass[0x28]; // 0x90(0x28)
	/*struct TSoftClassPtr<UObject>*/char SkillEntityTemplateClass[0x28]; // 0xb8(0x28)
	enum class ESkillStateType SkillStateType; // 0xe0(0x01)
	bool MPPreLoad; // 0xe1(0x01)
	bool CanUseWhenFalling; // 0xe2(0x01)
	enum class ESkillUISlot Slot; // 0xe3(0x01)
	bool bForceCheckSlot; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	int32_t cdid; // 0xe8(0x04)
	int32_t UseCDID; // 0xec(0x04)
	float ClientUseCD; // 0xf0(0x04)
	float ClientEndUseCD; // 0xf4(0x04)
	float LockRTT; // 0xf8(0x04)
	bool CDAtStart; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct FName MoifyCDAudioName; // 0x100(0x08)
	int32_t ScoreCost; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char ScoreDiscount[0x28]; // 0x110(0x28)
	bool InVisibleIconWhenUsing; // 0x138(0x01)
	bool InitVisible; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct FSoftObjectPath Normal; // 0x140(0x18)
	struct FSoftObjectPath Cancel; // 0x158(0x18)
	struct FSoftObjectPath Disable; // 0x170(0x18)
	struct FSoftObjectPath Activate; // 0x188(0x18)
	struct FSoftObjectPath Fire; // 0x1a0(0x18)
	struct FSoftObjectPath NormalSlot1; // 0x1b8(0x18)
	struct FSoftObjectPath NormalSlot2; // 0x1d0(0x18)
	bool UseMobile; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct FSoftObjectPath Normal_Mobile; // 0x1f0(0x18)
	struct FSoftObjectPath Cancel_Mobile; // 0x208(0x18)
	struct FSoftObjectPath Disable_Mobile; // 0x220(0x18)
	struct FSoftObjectPath Activate_Mobile; // 0x238(0x18)
	struct FSoftObjectPath Fire_Mobile; // 0x250(0x18)
	struct FSoftObjectPath NormalSlot1_Mobile; // 0x268(0x18)
	struct FSoftObjectPath NormalSlot2_Mobile; // 0x280(0x18)
	struct FSoftObjectPath MapIconPath; // 0x298(0x18)
	enum class ESkillLogicType LogicType; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	/*struct TSoftObjectPtr<UObject>*/char TeamPlayerIcon[0x28]; // 0x2b8(0x28)
	struct TArray<enum class ECharacterAudioType> VoList; // 0x2e0(0x10)
	struct TArray<struct FString> VosList; // 0x2f0(0x10)
	int32_t ActivatedWeaponSlot; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct TArray<int32_t> ActivatedBuffid; // 0x308(0x10)
	bool bCanBreakByClimbingLadder; // 0x318(0x01)
	bool bCanBreakByFalling; // 0x319(0x01)
	bool bCanBreakByFire; // 0x31a(0x01)
	bool bCanBreakBySwitchWeapon; // 0x31b(0x01)
	bool bCanBreakByBotControlled; // 0x31c(0x01)
	enum class ESkillItemUsingType AbilityUseType; // 0x31d(0x01)
	bool bHideWhenRescue; // 0x31e(0x01)
	bool bHideWhenParachute; // 0x31f(0x01)
	struct TArray<enum class ECharacterStateMask> LockStateAbilitys; // 0x320(0x10)
	struct TArray<enum class ECharacterStateMask> UnLockStateAbilitys; // 0x330(0x10)
	struct TArray<enum class ECharacterStateMask> DSLockStateAbilitys; // 0x340(0x10)
	struct TArray<enum class ECharacterStateMask> DSUnLockStateAbilitys; // 0x350(0x10)
	bool bBreakSkillInKnockBack; // 0x360(0x01)
	bool bShowCancle; // 0x361(0x01)
	bool bReplaceFire; // 0x362(0x01)
	bool bReplaceFireImage; // 0x363(0x01)
	char pad_364[0x4]; // 0x364(0x04)
	struct FText TipsText; // 0x368(0x18)
	bool TipsVisible; // 0x380(0x01)
	enum class ESkillButtonState ButtonState; // 0x381(0x01)
	char pad_382[0x6]; // 0x382(0x06)
	struct TArray<enum class EFSMCharacterState> CharacterBreakStates; // 0x388(0x10)
	struct TArray<enum class EFSMCharacterState> CharacterBlockStatus; // 0x398(0x10)
	struct TArray<enum class EGPWeaponStateType> MainWeaponBlockStates; // 0x3a8(0x10)
	bool bBreakLeanState; // 0x3b8(0x01)
	bool CannotUseWhenActiavte; // 0x3b9(0x01)
	bool ResetUI2Normal; // 0x3ba(0x01)
	bool CanLongPress; // 0x3bb(0x01)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct FText ShortPressTipsDetailText; // 0x3c0(0x18)
	struct FText LongPressTipsDetailText; // 0x3d8(0x18)
	int32_t LongPressCallSkill; // 0x3f0(0x04)
	float LongPressTimeConfig; // 0x3f4(0x04)
	struct FText LongPressTipsActionText; // 0x3f8(0x18)
	struct FName LongPressTipsActionName; // 0x410(0x08)
	bool bBlockPronedMove; // 0x418(0x01)
	bool bCanUseWhenSlidingTackle; // 0x419(0x01)
	bool bTriggerFromWeapon; // 0x41a(0x01)
	char pad_41B[0x5]; // 0x41b(0x05)
	uint64_t SkillWeaponId; // 0x420(0x08)
	char WeaponAttachPos; // 0x428(0x01)
	char WeaponManagerSlotIndex; // 0x429(0x01)
	enum class ESkillWeaponSwitchType WeaponSwitchType; // 0x42a(0x01)
	bool bHoldToFire; // 0x42b(0x01)
	float CacheInputTime; // 0x42c(0x04)
	int32_t CacheInputPriority; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct TArray<enum class EFSMForbidReason> CacheInputReasons; // 0x438(0x10)
	bool CacheInputInWalkingPoseTransition; // 0x448(0x01)
	bool CacheInputInWalkingMainWeaponChange; // 0x449(0x01)
	bool bSupportHoldToActive; // 0x44a(0x01)
	char pad_44B[0x1]; // 0x44b(0x01)
	int32_t ClickSkillWeaponPos; // 0x44c(0x04)
	bool bAddSkillWeapon; // 0x450(0x01)
	bool bStopMontageWhenTakeDamge; // 0x451(0x01)
	bool bEndAbilityWhenTakeDamge; // 0x452(0x01)
	bool bEndAbilityWhenTakeEMP; // 0x453(0x01)
	bool bTryAddAmmo; // 0x454(0x01)
	bool bWeaponUseSkillConflict; // 0x455(0x01)
	bool bCanServerDoTrigger; // 0x456(0x01)
	bool bOverrideAimingCheck; // 0x457(0x01)
	bool bEnableSniperMark; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	int32_t FootStepAudioSeqDataID; // 0x45c(0x04)
	struct TArray<struct FDamgeCoifficient> DamgeCoifficient; // 0x460(0x10)
	bool UseCustomHeight; // 0x470(0x01)
	bool bFirePreLock; // 0x471(0x01)
	char pad_472[0x6]; // 0x472(0x06)
	struct TMap<int64_t, float> BuffDurationRateMap; // 0x478(0x50)
	bool bCancelWeaponOperationInPressed; // 0x4c8(0x01)
	bool UnormalBreakUnequipSkillWeapon; // 0x4c9(0x01)
	bool bSkillWeaponBreakPredictSkill; // 0x4ca(0x01)
	bool bSkillWeaponBreakPredictSkillOnlyClient; // 0x4cb(0x01)
	enum class EWeaponSwitchType UnequipSkillWeaponSwitchType; // 0x4cc(0x01)
	bool NotUnEquipSameSlotWeapon; // 0x4cd(0x01)
	bool CancelWeaponOperations; // 0x4ce(0x01)
	char pad_4CF[0x1]; // 0x4cf(0x01)
	struct TMap<enum class EGPWeaponInnerEvent, struct FRightKeyTipsSkillDataList> WeaponOperateTips; // 0x4d0(0x50)
	struct TArray<struct FRightKeyTipsSkillData> SkillOperateTips; // 0x520(0x10)
	struct TMap<enum class EGPWeaponInnerEvent, struct FWeaponEventForbitDataList> WeaponLockData; // 0x530(0x50)
	bool bCanBreakByLongFalling; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponEventForbitDataList
// Size: 0x40 (Inherited: 0x00)
struct FWeaponEventForbitDataList {
public:

	struct TArray<enum class ECharacterStateMask> LockAbility; // 0x00(0x10)
	struct TArray<enum class ECharacterStateMask> UnLockAbility; // 0x10(0x10)
	struct TArray<enum class ECharacterStateMask> DSLockAbility; // 0x20(0x10)
	struct TArray<enum class ECharacterStateMask> DSUnLockAbility; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RightKeyTipsSkillDataList
// Size: 0x10 (Inherited: 0x00)
struct FRightKeyTipsSkillDataList {
public:

	struct TArray<struct FRightKeyTipsSkillData> TipsDataList; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamgeCoifficient
// Size: 0x18 (Inherited: 0x00)
struct FDamgeCoifficient {
public:

	float fModifyRateExplodeDamage; // 0x00(0x04)
	float fModifyRateAbilitAssault; // 0x04(0x04)
	struct TArray<enum class EDFMGamePlayMode> LimitPlayMode; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillBagWeapon
// Size: 0x20 (Inherited: 0x00)
struct FSkillBagWeapon {
public:

	struct FName WeaponID; // 0x00(0x08)
	int32_t EquipPos; // 0x08(0x04)
	int32_t SlotCharingCDID; // 0x0c(0x04)
	struct TArray<enum class EDFMGamePlayMode> LimitPlayMode; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillSlotBtnCallData
// Size: 0x18 (Inherited: 0x00)
struct FSkillSlotBtnCallData {
public:

	int32_t LogicID; // 0x00(0x04)
	struct FName LogicName; // 0x04(0x08)
	struct FName FunctionName; // 0x0c(0x08)
	enum class ESlotButton Call; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillUserCommandData
// Size: 0x28 (Inherited: 0x00)
struct FSkillUserCommandData {
public:

	struct TArray<enum class ESkillBtnCall> UserCommand; // 0x00(0x10)
	struct TArray<enum class ESkillBtnCall> ConsumeCommand; // 0x10(0x10)
	bool bCanTickUserCommand; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SoundVisualizationInfo
// Size: 0x40 (Inherited: 0x00)
struct FSoundVisualizationInfo {
public:

	enum class ESoundVisualizationType EventType; // 0x00(0x01)
	enum class ESoundTypeIcon IconType; // 0x01(0x01)
	bool bIsRed; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float TimeLeft; // 0x04(0x04)
	float CDLeft; // 0x08(0x04)
	struct FVector SourceLocation; // 0x0c(0x0c)
	float Angle; // 0x18(0x04)
	char DistanceType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float DistanceWeight; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FSoundVisualizationDistanceInfo> DistanceInfoArray; // 0x28(0x10)
	bool bIsNoRealActor; // 0x38(0x01)
	enum class ESoundVisualizationVerticalType VerticalType; // 0x39(0x01)
	bool bAffectedByListenRange; // 0x3a(0x01)
	enum class EGPAudioBlueprintType AudioBlueprintType; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SoundVisualizationDistanceInfo
// Size: 0x0c (Inherited: 0x00)
struct FSoundVisualizationDistanceInfo {
public:

	float MinDistance; // 0x00(0x04)
	float MaxDistance; // 0x04(0x04)
	char DistanceLevel; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SoundVisualizationConfigRow
// Size: 0x158 (Inherited: 0x08)
struct FSoundVisualizationConfigRow : public FTableRowBase {
public:

	struct FString Description; // 0x08(0x10)
	bool bEnable; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString WeaponID; // 0x20(0x10)
	uint64_t WeaponIdInt; // 0x30(0x08)
	struct TMap<uint64_t, float> SilencerScalarMap; // 0x38(0x50)
	struct TArray<struct FSoundVisualizationDistanceInfo> DistanceInfoArray; // 0x88(0x10)
	enum class ESoundVisualizationType Type; // 0x98(0x01)
	enum class ESoundTypeIcon IconType; // 0x99(0x01)
	bool bIsRed; // 0x9a(0x01)
	char Priority; // 0x9b(0x01)
	float Duration; // 0x9c(0x04)
	float TriggerCD; // 0xa0(0x04)
	bool bUseTimeLevelMap; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct TMap<char, float> DurationMap; // 0xa8(0x50)
	struct TMap<char, float> TriggerCDMap; // 0xf8(0x50)
	bool bAffectedByListenRange; // 0x148(0x01)
	enum class EGPAudioBlueprintType AudioBlueprintType; // 0x149(0x01)
	bool bNotifyMyself; // 0x14a(0x01)
	bool bCheckState; // 0x14b(0x01)
	float Duration_Myself; // 0x14c(0x04)
	char SoundLevel_Myself; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SpringArmTransformAdditiveValue
// Size: 0x24 (Inherited: 0x00)
struct FSpringArmTransformAdditiveValue {
public:

	struct FVector TargetOffsetAdditiveValue; // 0x00(0x0c)
	struct FVector SocketOffsetAdditiveValue; // 0x0c(0x0c)
	float SpringArmLengthAdditiveValue; // 0x18(0x04)
	float EndTargetOffsetZAddidiveValue; // 0x1c(0x04)
	float InterpolateSpeedAddidiveValue; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.StaminaExclusiveChangeInfo
// Size: 0x04 (Inherited: 0x00)
struct FStaminaExclusiveChangeInfo {
public:

	float DurationValue; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.StaminaIndependentChangeInfo
// Size: 0x10 (Inherited: 0x00)
struct FStaminaIndependentChangeInfo {
public:

	bool bIsInstant; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float InstantValue; // 0x04(0x04)
	float DurationValue; // 0x08(0x04)
	bool bCanTriggerUnderLowStamina; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SubtitleSequenceTableItem
// Size: 0x28 (Inherited: 0x10)
struct FSubtitleSequenceTableItem : public FDescRowBase {
public:

	char SubtitlePriority; // 0x10(0x01)
	bool bOverrideSamePriority; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct FSubtitleItem> SubtitleItems; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SubtitleItem
// Size: 0x60 (Inherited: 0x00)
struct FSubtitleItem {
public:

	struct FText SpeakerName; // 0x00(0x18)
	struct FText SubtitleText; // 0x18(0x18)
	float SubtitleDuration; // 0x30(0x04)
	float NextSubtitleDelay; // 0x34(0x04)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char AudioEvent[0x28]; // 0x38(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPThrowUASAnimInstanceProxy
// Size: 0x750 (Inherited: 0x748)
struct FGPThrowUASAnimInstanceProxy : public FAnimInstanceProxy {
public:

	char pad_748[0x8]; // 0x748(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPThrowWeaponAnimInstanceProxy
// Size: 0x750 (Inherited: 0x748)
struct FGPThrowWeaponAnimInstanceProxy : public FAnimInstanceProxy {
public:

	bool bIsBeginEquip; // 0x748(0x01)
	bool bIsPreFired; // 0x749(0x01)
	bool IsFired; // 0x74a(0x01)
	bool bIsBeginEndEquip; // 0x74b(0x01)
	char pad_74C[0x4]; // 0x74c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPUpperBodyIKInstanceProxy
// Size: 0x790 (Inherited: 0x748)
struct FGPUpperBodyIKInstanceProxy : public FAnimInstanceProxy {
public:

	bool bShouldLookAtTarget; // 0x748(0x01)
	char pad_749[0x3]; // 0x749(0x03)
	struct FVector LookAtLocation; // 0x74c(0x0c)
	float SpineLookAtClamp; // 0x758(0x04)
	float HeadLookAtClamp; // 0x75c(0x04)
	float InterpolationTime; // 0x760(0x04)
	float UpperBodyIKAlphaScale; // 0x764(0x04)
	float SpineAlpha; // 0x768(0x04)
	float Spine1Alpha; // 0x76c(0x04)
	float Spine2Alpha; // 0x770(0x04)
	float NeckAlpha; // 0x774(0x04)
	float HeadAlpha; // 0x778(0x04)
	char pad_77C[0x4]; // 0x77c(0x04)
	struct AGPCharacterBase* OwnerPawn; // 0x780(0x08)
	char pad_788[0x8]; // 0x788(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPClimbLadderPointInfo
// Size: 0xc0 (Inherited: 0x00)
struct FGPClimbLadderPointInfo {
public:

	struct FTransform LadderBottomStartTransform; // 0x00(0x30)
	struct FTransform LadderBottomEndTransform; // 0x30(0x30)
	struct FTransform LadderTopStartTransform; // 0x60(0x30)
	struct FTransform LadderTopEndTransform; // 0x90(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPClimbLadderMoveLerpInfo
// Size: 0x0c (Inherited: 0x00)
struct FGPClimbLadderMoveLerpInfo {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RepGPClimbLadderMoveInfo
// Size: 0x04 (Inherited: 0x00)
struct FRepGPClimbLadderMoveInfo {
public:

	uint16_t CurStartMoveNum; // 0x00(0x02)
	int16_t CurMoveStepNum; // 0x02(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPClimbLadderRepInfo
// Size: 0xe0 (Inherited: 0x00)
struct FGPClimbLadderRepInfo {
public:

	bool bInClimbLadder; // 0x00(0x01)
	enum class EClimbLadderCheckType ClimbLadderCheckType; // 0x01(0x01)
	char pad_2[0xe]; // 0x02(0x0e)
	struct FTransform LadderTransform; // 0x10(0x30)
	uint16_t ClimbLadderEndMoveNum; // 0x40(0x02)
	uint16_t ClimbLadderStartMoveNum; // 0x42(0x02)
	char pad_44[0xc]; // 0x44(0x0c)
	struct FTransform LadderBottomStartTransform; // 0x50(0x30)
	struct FTransform LadderBottomEndTransform; // 0x80(0x30)
	struct FTransform LadderTopStartTransform; // 0xb0(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPPredictPathNode
// Size: 0x14 (Inherited: 0x00)
struct FGPPredictPathNode {
public:

	struct FVector PredictLocation; // 0x00(0x0c)
	float PredictTime; // 0x0c(0x04)
	float NeedSweep; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleLastCampTeamInfo
// Size: 0x0c (Inherited: 0x00)
struct FVehicleLastCampTeamInfo {
public:

	int32_t LastCamp; // 0x00(0x04)
	int32_t TeamId; // 0x04(0x04)
	float RefreshCampTeamTime; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleSkillProjectileLaunchedInfo
// Size: 0x50 (Inherited: 0x00)
struct FVehicleSkillProjectileLaunchedInfo {
public:

	struct FName SocketName; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform LocalTransform; // 0x10(0x30)
	struct FColor DrawedColor; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleSubWeaponInfo
// Size: 0x148 (Inherited: 0x00)
struct FVehicleSubWeaponInfo {
public:

	char pad_0[0x98]; // 0x00(0x98)
	uint64_t WeaponID; // 0x98(0x08)
	bool IsDependOnFirstWeapon; // 0xa0(0x01)
	bool bIsFixed; // 0xa1(0x01)
	char pad_A2[0x2]; // 0xa2(0x02)
	float FixedRotationLerpValue; // 0xa4(0x04)
	float MaxDistance; // 0xa8(0x04)
	struct FVector FixedFireStartPos; // 0xac(0x0c)
	float RotLerpValue; // 0xb8(0x04)
	float RotLerpThreshold; // 0xbc(0x04)
	float WeaponRotYawSpeed; // 0xc0(0x04)
	float WeaponRotPitchSpeed; // 0xc4(0x04)
	struct TArray<struct FName> WeaponRoots; // 0xc8(0x10)
	struct TArray<struct FName> WeaponGuns; // 0xd8(0x10)
	struct UCurveFloat* WeaponMaxPitch; // 0xe8(0x08)
	struct UCurveFloat* WeaponMinPitch; // 0xf0(0x08)
	struct FVector WeaponPitchRange; // 0xf8(0x0c)
	bool IsNeedFireEffect; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct FVector FireForcePos; // 0x108(0x0c)
	float FireVelocityValue; // 0x114(0x04)
	float FireAngularVelocityValue; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TArray<struct FName> HideSockets; // 0x120(0x10)
	struct UGPModularWeaponDesc* WeaponDesc; // 0x130(0x08)
	struct UVehicleSubWeaponRaycastInfo* RaycastInfo; // 0x138(0x08)
	char pad_140[0x8]; // 0x140(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehiclePassengerTeamCampInfo
// Size: 0x08 (Inherited: 0x00)
struct FVehiclePassengerTeamCampInfo {
public:

	uint32_t CampId; // 0x00(0x04)
	uint32_t TeamId; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleExtraPartInfo
// Size: 0x18 (Inherited: 0x00)
struct FVehicleExtraPartInfo {
public:

	uint64_t PartId; // 0x00(0x08)
	struct FName SeatName; // 0x08(0x08)
	int32_t PartIndex; // 0x10(0x04)
	enum class EVehicleExtraPartType PartType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPVehicleRepInfo
// Size: 0x30 (Inherited: 0x00)
struct FGPVehicleRepInfo {
public:

	struct APawn* GetOffVehicle; // 0x00(0x08)
	bool bIsDieGetOff; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct APawn* CurrentVehicle; // 0x10(0x08)
	struct FName CurrentSeatName; // 0x18(0x08)
	struct FName LastSeatName; // 0x20(0x08)
	bool bIsTeleportGetOnAndOff; // 0x28(0x01)
	enum class EAnimVehicleSeatType AnimVehicleSeatType; // 0x29(0x01)
	bool bCanRotation; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DFMValkyrieVehicleExtendedAnimData
// Size: 0x20 (Inherited: 0x00)
struct FDFMValkyrieVehicleExtendedAnimData {
public:

	struct FRotator FrontWindowOpenedRotator; // 0x00(0x0c)
	float FrontWindowOpenedSpeed; // 0x0c(0x04)
	struct FRotator BackWindowOpenedRotator; // 0x10(0x0c)
	float BackWindowOpenedSpeed; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPVehiclePhysicsReplicatedData
// Size: 0x40 (Inherited: 0x00)
struct FGPVehiclePhysicsReplicatedData {
public:

	struct FRigidBodyState RigidBodyState; // 0x00(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPVehicleWeaponAnimInstanceProxy
// Size: 0x930 (Inherited: 0x748)
struct FGPVehicleWeaponAnimInstanceProxy : public FAnimInstanceProxy {
public:

	struct UAnimSequence* FPPUpAdditiveAnim; // 0x748(0x08)
	float FPPUpAlpha; // 0x750(0x04)
	char pad_754[0x4]; // 0x754(0x04)
	struct UAnimSequence* FPPDownAdditiveAnim; // 0x758(0x08)
	float FPPDownAlpha; // 0x760(0x04)
	struct FRotator CameraBoneRotator; // 0x764(0x0c)
	struct FVector CameraBoneLocation; // 0x770(0x0c)
	struct FRotator GunBoneRotator; // 0x77c(0x0c)
	struct FVector GunBoneLocation; // 0x788(0x0c)
	char pad_794[0x14]; // 0x794(0x14)
	struct AGPCharacter* CharacterOwner; // 0x7a8(0x08)
	char pad_7B0[0x180]; // 0x7b0(0x180)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSeatInfo
// Size: 0x18 (Inherited: 0x00)
struct FWeaponSeatInfo {
public:

	struct FName SeatName; // 0x00(0x08)
	struct TArray<struct FRotator> Rotators; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPWeaponAnimInstanceProxy
// Size: 0x770 (Inherited: 0x748)
struct FGPWeaponAnimInstanceProxy : public FAnimInstanceProxy {
public:

	struct UAnimSequence* WeaponIdleAnim; // 0x748(0x08)
	struct UAnimSequence* WeaponIdle_Additive; // 0x750(0x08)
	struct UBlendSpaceBase* WeaponIdle_SpaceBaseAdditive; // 0x758(0x08)
	float FirearmSupportAdditiveRate; // 0x760(0x04)
	char pad_764[0xc]; // 0x764(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SubWorldSettings
// Size: 0x18 (Inherited: 0x00)
struct FSubWorldSettings {
public:

	struct UClass* GameMode; // 0x00(0x08)
	uint32_t MapType; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UClass* LevelSubsystemConfig; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.HitEffectCfg
// Size: 0x28 (Inherited: 0x08)
struct FHitEffectCfg : public FTableRowBase {
public:

	struct FLinearColor ColorAndOpacity; // 0x08(0x10)
	struct FName RowDescription; // 0x18(0x08)
	enum class EHitEffectColor ColorKey; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.InstancedStruct
// Size: 0x10 (Inherited: 0x00)
struct FInstancedStruct {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterStats
// Size: 0x50 (Inherited: 0x00)
struct FCharacterStats {
public:

	uint32_t ExtrapolateTimeMs; // 0x00(0x04)
	uint32_t ExtrapolateCount; // 0x04(0x04)
	uint32_t AvgServerReplicationDeltaTimeMs; // 0x08(0x04)
	uint32_t MinRealtimeInterpolateDelayMs; // 0x0c(0x04)
	uint32_t MaxRealtimeInterpolateDelayMs; // 0x10(0x04)
	uint32_t AvgRealtimeInterpolateDelayMs; // 0x14(0x04)
	uint32_t InterploateSnapCount; // 0x18(0x04)
	uint32_t ServerTimeMeanMs; // 0x1c(0x04)
	uint32_t ServerTimeSVMs; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	uint64_t PlayerID3P; // 0x28(0x08)
	struct TArray<struct FTimeLocation> TimeLocations; // 0x30(0x10)
	int32_t LOD; // 0x40(0x04)
	int32_t MinLOD; // 0x44(0x04)
	int32_t MaxLOD; // 0x48(0x04)
	float LODDeltaTime; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TimeLocation
// Size: 0x10 (Inherited: 0x00)
struct FTimeLocation {
public:

	float TimeSeconds; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterMoveHandle
// Size: 0x08 (Inherited: 0x00)
struct FCharacterMoveHandle {
public:

	int32_t Index; // 0x00(0x04)
	int32_t Sequence; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TurningPlaceData
// Size: 0x08 (Inherited: 0x00)
struct FTurningPlaceData {
public:

	bool bIsTurningPlace; // 0x00(0x01)
	bool bIsTurningRight; // 0x01(0x01)
	bool bIsTurningEnter; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float TurnInPlaceBeginYaw; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.StartStopData
// Size: 0x20 (Inherited: 0x00)
struct FStartStopData {
public:

	struct FVector_NetQuantize10 StopMakerPos; // 0x00(0x0c)
	struct FVector_NetQuantize10 StartMakerPos; // 0x0c(0x0c)
	bool bStoping; // 0x18(0x01)
	char StopType; // 0x19(0x01)
	bool bStarting; // 0x1a(0x01)
	bool bPivot; // 0x1b(0x01)
	char PivotDirection; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.InteractingContext
// Size: 0x2c (Inherited: 0x00)
struct FInteractingContext {
public:

	int32_t OpenDoorInFrontOrBack; // 0x00(0x04)
	int32_t CloseDoorPushOrPull; // 0x04(0x04)
	int32_t SingleItemContainerIndex; // 0x08(0x04)
	int32_t Client2ServerIndex; // 0x0c(0x04)
	struct FVector OriginPosByClient; // 0x10(0x0c)
	struct FVector OriginForwardByClient; // 0x1c(0x0c)
	bool bHitInteractorByClient; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MaterialSequenceNotify
// Size: 0x10 (Inherited: 0x00)
struct FMaterialSequenceNotify {
public:

	float Time; // 0x00(0x04)
	enum class EMaterialSequencerNotifyType NotifyType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName NotifyName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MaterialDataCurve
// Size: 0xa8 (Inherited: 0x00)
struct FMaterialDataCurve {
public:

	struct FName ParamName; // 0x00(0x08)
	struct FRuntimeFloatCurve CurveFloat; // 0x08(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MaterialSequenceParams
// Size: 0xc0 (Inherited: 0x00)
struct FMaterialSequenceParams {
public:

	struct FName ParamName; // 0x00(0x08)
	enum class EMaterialSequenceParamsType ParamsType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FRuntimeFloatCurve CurveFloat; // 0x10(0xa0)
	struct UCurveLinearColor* CurveLinearColor; // 0xb0(0x08)
	struct UCurveVector* CurveVector; // 0xb8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ModularWeaponMergedInfo
// Size: 0x40 (Inherited: 0x00)
struct FModularWeaponMergedInfo {
public:

	struct TArray<enum class EAdapterItemType> MergedPartTypeList; // 0x00(0x10)
	struct TArray<struct FName> MergedMeshAssetNameList; // 0x10(0x10)
	struct TArray<uint64_t> MergedGUIDList; // 0x20(0x10)
	struct TArray<uint64_t> MergedItemList; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponMeshMergeParams
// Size: 0x0c (Inherited: 0x00)
struct FWeaponMeshMergeParams {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponActorUserObjects
// Size: 0x10 (Inherited: 0x00)
struct FWeaponActorUserObjects {
public:

	struct TArray<struct FWeaponActorUserObject> WeaponActorUserObjects; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponActorUserObject
// Size: 0x14 (Inherited: 0x00)
struct FWeaponActorUserObject {
public:

	char pad_0[0x4]; // 0x00(0x04)
	struct TWeakObjectPtr<struct UObject> OwnerObject; // 0x04(0x08)
	struct TWeakObjectPtr<struct AActor> Actor; // 0x0c(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MaterialInstanceDynamicUsedInfo
// Size: 0x10 (Inherited: 0x00)
struct FMaterialInstanceDynamicUsedInfo {
public:

	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MeshMergeSectionContext
// Size: 0x38 (Inherited: 0x00)
struct FMeshMergeSectionContext {
public:

	char pad_0[0x38]; // 0x00(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SourceTexturesCategoryGroupUVTransform
// Size: 0x18 (Inherited: 0x00)
struct FSourceTexturesCategoryGroupUVTransform {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SourceTexturesCategoryGroupContext
// Size: 0x50 (Inherited: 0x00)
struct FSourceTexturesCategoryGroupContext {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TextureMergeInfo
// Size: 0x0c (Inherited: 0x00)
struct FTextureMergeInfo {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TextureGroupCompressContext
// Size: 0x18 (Inherited: 0x00)
struct FTextureGroupCompressContext {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MergedCompressedTextureGroup
// Size: 0x18 (Inherited: 0x00)
struct FMergedCompressedTextureGroup {
public:

	struct UTexture2D* BaseColorTargetMergedCompressedTexture2D; // 0x00(0x08)
	struct UTexture2D* MACTargetMergedCompressedTexture2D; // 0x08(0x08)
	struct UTexture2D* NRTargetMergedCompressedTexture2D; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MergedUnCompressTextureGroup
// Size: 0x18 (Inherited: 0x00)
struct FMergedUnCompressTextureGroup {
public:

	struct UTextureRenderTarget2D* BaseColorRenderTargetTexture; // 0x00(0x08)
	struct UTextureRenderTarget2D* MACRenderTargetTexture; // 0x08(0x08)
	struct UTextureRenderTarget2D* NRRenderTargetTexture; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PbWeaponSkinInfoParam
// Size: 0x78 (Inherited: 0x00)
struct FPbWeaponSkinInfoParam {
public:

	uint64_t SkinGid; // 0x00(0x08)
	uint64_t SkinId; // 0x08(0x08)
	uint64_t SkinApperanceId; // 0x10(0x08)
	uint64_t MysticalId; // 0x18(0x08)
	uint64_t FancyColorID; // 0x20(0x08)
	uint64_t Wear; // 0x28(0x08)
	uint64_t MaterialRandomSeed; // 0x30(0x08)
	struct TArray<struct FWeaponSkinParam> Params; // 0x38(0x10)
	uint64_t UniqueNumber; // 0x48(0x08)
	uint64_t KillCnt; // 0x50(0x08)
	struct FString CustomName; // 0x58(0x10)
	uint64_t SourceType; // 0x68(0x08)
	bool bLockApperance; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RepMovementInfo
// Size: 0x200 (Inherited: 0x00)
struct FRepMovementInfo {
public:

	char pad_0[0xe0]; // 0x00(0xe0)
	struct TArray<struct UNetConnection*> NakedConnections; // 0xe0(0x10)
	struct TArray<struct UNetConnection*> NewlyNakedConnections; // 0xf0(0x10)
	struct AMovementReplicationActor* MovementReplicationActor; // 0x100(0x08)
	char pad_108[0xf8]; // 0x108(0xf8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MultiPostProcessStruct
// Size: 0x10 (Inherited: 0x00)
struct FMultiPostProcessStruct {
public:

	struct TArray<struct FMultiPostProcessData> ProcessData; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MultiPostProcessData
// Size: 0x18 (Inherited: 0x00)
struct FMultiPostProcessData {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PostProcessEffectStruct
// Size: 0x18 (Inherited: 0x00)
struct FPostProcessEffectStruct {
public:

	struct TArray<struct FPostProcessEffectData> ProcessData; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PostProcessEffectData
// Size: 0x0c (Inherited: 0x00)
struct FPostProcessEffectData {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponManagerSlots
// Size: 0x20 (Inherited: 0x00)
struct FWeaponManagerSlots {
public:

	struct TArray<struct UWeaponManagerComponent*> WeaponManagerArr; // 0x00(0x10)
	struct TArray<char> WeaponSlotArr; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ObjectPoolProxyData
// Size: 0x20 (Inherited: 0x00)
struct FObjectPoolProxyData {
public:

	struct TArray<struct FObjectInfo> InUseObjects; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
	struct UClass* TemplateClass; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ObjectInfo
// Size: 0x10 (Inherited: 0x00)
struct FObjectInfo {
public:

	struct UObject* Object; // 0x00(0x08)
	float UseTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartSocketsUIAudioRow
// Size: 0x30 (Inherited: 0x10)
struct FPartSocketsUIAudioRow : public FDescRowBase {
public:

	uint32_t SocketId; // 0x10(0x04)
	struct FName SocketName; // 0x14(0x08)
	struct FName InstallUIAudio; // 0x1c(0x08)
	struct FName UninstallUIAudio; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SuggestionPresetRow
// Size: 0x40 (Inherited: 0x10)
struct FSuggestionPresetRow : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	uint64_t RecID; // 0x18(0x08)
	struct TArray<struct FSuggestionPresetInfo> SOLSuggestionPresetInfos; // 0x20(0x10)
	struct TArray<struct FSuggestionPresetInfo> MPSuggestionPresetInfos; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SuggestionPresetInfo
// Size: 0x20 (Inherited: 0x00)
struct FSuggestionPresetInfo {
public:

	struct FText PresetName; // 0x00(0x18)
	uint64_t PresetId; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GunsmithPartFixTransformRow
// Size: 0x38 (Inherited: 0x10)
struct FGunsmithPartFixTransformRow : public FDescRowBase {
public:

	uint64_t PartId; // 0x10(0x08)
	struct TArray<uint64_t> WeaponIds; // 0x18(0x10)
	struct FVector FixLocation; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SilencerVolumeScaleRow
// Size: 0x68 (Inherited: 0x10)
struct FSilencerVolumeScaleRow : public FDescRowBase {
public:

	uint64_t WeaponID; // 0x10(0x08)
	struct TMap<uint32_t, float> SilencerKeyToVolumeMap; // 0x18(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TunePartFunctionLocIDTable
// Size: 0x30 (Inherited: 0x10)
struct FTunePartFunctionLocIDTable : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	struct FText Loc; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TunePartFunctionTable
// Size: 0xa0 (Inherited: 0x10)
struct FTunePartFunctionTable : public FDescRowBase {
public:

	uint64_t TuneId; // 0x10(0x08)
	enum class ETuneSliderType SliderType; // 0x18(0x01)
	enum class ETuneMeshType TuneMeshType; // 0x19(0x01)
	bool bInExtraModel; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	uint64_t ExtraModelItemId; // 0x20(0x08)
	struct TArray<uint64_t> ExtraFindSocketsItemIds; // 0x28(0x10)
	struct FName ExtraModelItemSocketName; // 0x38(0x08)
	struct TArray<uint64_t> FindSocketsItemIds; // 0x40(0x10)
	float DefaultValue; // 0x50(0x04)
	float MinValue; // 0x54(0x04)
	float MaxValue; // 0x58(0x04)
	float StepValue; // 0x5c(0x04)
	uint64_t MainLocID; // 0x60(0x08)
	uint64_t SubLocGreaterID; // 0x68(0x08)
	uint64_t SubLocLessID; // 0x70(0x08)
	uint64_t SubLocUnitID; // 0x78(0x08)
	struct TArray<struct FTuneAttributeFunctionCurvingItem> TuneAttributeFunctions; // 0x80(0x10)
	struct TArray<struct FDisplayTuneAttributeFunctionCurvingItem> DisplayTuneAttributeFunctions; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DisplayTuneAttributeFunctionCurvingItem
// Size: 0x48 (Inherited: 0x00)
struct FDisplayTuneAttributeFunctionCurvingItem {
public:

	struct FText AttributeName; // 0x00(0x18)
	/*struct TSoftObjectPtr<UCurveFloat>*/char FloatCurve[0x28]; // 0x18(0x28)
	bool IsDebuff; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t ID; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TuneAttributeFunctionCurvingItem
// Size: 0x20 (Inherited: 0x00)
struct FTuneAttributeFunctionCurvingItem {
public:

	struct FName RuleKey; // 0x00(0x08)
	struct UCurveFloat* FloatCurve; // 0x08(0x08)
	enum class EWeaponPartFunctionType PartFunctionType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName ModifierType; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MeleeWeaponSkin
// Size: 0xd8 (Inherited: 0x10)
struct FMeleeWeaponSkin : public FDescRowBase {
public:

	int64_t MeleeSkinID; // 0x10(0x08)
	int64_t MeleeWeaponID; // 0x18(0x08)
	int64_t SkinApperaranceId; // 0x20(0x08)
	bool OpenCollection; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FText SkinDescription; // 0x30(0x18)
	struct TArray<struct FText> EffectsName; // 0x48(0x10)
	struct TArray<struct FText> EffectsDes; // 0x58(0x10)
	struct TArray<struct FText> VideosName; // 0x68(0x10)
	struct TArray<struct FText> VideosDes; // 0x78(0x10)
	struct TArray<struct FString> VideosThumbnail; // 0x88(0x10)
	struct TArray<struct FString> VideosPath; // 0x98(0x10)
	struct FString SocialShareCDN; // 0xa8(0x10)
	struct FString UnlockVideoPath; // 0xb8(0x10)
	struct FString UnlockAudio; // 0xc8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponFancyColorSkinRow
// Size: 0x60 (Inherited: 0x10)
struct FWeaponFancyColorSkinRow : public FDescRowBase {
public:

	uint64_t FancyColorID; // 0x10(0x08)
	uint64_t FeatureID; // 0x18(0x08)
	uint64_t SkinId; // 0x20(0x08)
	struct FText SkinName; // 0x28(0x18)
	uint64_t FuncType; // 0x40(0x08)
	uint64_t ColorName; // 0x48(0x08)
	uint64_t Level; // 0x50(0x08)
	uint64_t Price; // 0x58(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSkinDataRow
// Size: 0xf8 (Inherited: 0x10)
struct FWeaponSkinDataRow : public FDescRowBase {
public:

	uint64_t SkinId; // 0x10(0x08)
	struct FText SkinName; // 0x18(0x18)
	uint64_t DefaultSkinApperaranceId; // 0x30(0x08)
	struct FText SkinDescription; // 0x38(0x18)
	uint64_t BaseWeaponId; // 0x50(0x08)
	uint64_t BlueprintId; // 0x58(0x08)
	bool OpenCollection; // 0x60(0x01)
	bool DisplayResource; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct TArray<struct FText> EffectsName; // 0x68(0x10)
	struct TArray<struct FText> EffectsDes; // 0x78(0x10)
	struct TArray<struct FText> VideosName; // 0x88(0x10)
	struct TArray<struct FText> VideosDes; // 0x98(0x10)
	struct TArray<struct FString> VideosThumbnail; // 0xa8(0x10)
	struct TArray<struct FString> VideosPath; // 0xb8(0x10)
	struct FString SocialShareCDN; // 0xc8(0x10)
	struct FString MysticalSkinArtStyle; // 0xd8(0x10)
	uint64_t SeasonID; // 0xe8(0x08)
	uint64_t MandelBrickID; // 0xf0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AttackAdapterFunctionRow
// Size: 0x28 (Inherited: 0x10)
struct FAttackAdapterFunctionRow : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	int32_t MaxDurability; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	uint64_t FunctionId; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AttackerInfo
// Size: 0x14 (Inherited: 0x00)
struct FAttackerInfo {
public:

	int32_t Level; // 0x00(0x04)
	int32_t MinDurability; // 0x04(0x04)
	int32_t MaxDurability; // 0x08(0x04)
	int32_t DisplayDurability; // 0x0c(0x04)
	int32_t FunctionId; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VoidPartsTable
// Size: 0x60 (Inherited: 0x10)
struct FVoidPartsTable : public FDescRowBase {
public:

	char pad_10[0x8]; // 0x10(0x08)
	uint64_t RecID; // 0x18(0x08)
	uint64_t ItemID; // 0x20(0x08)
	uint32_t SocketId; // 0x28(0x04)
	enum class EWeaponVoidPartsModelConditionType ConditionType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct TArray<struct FName> Sockets; // 0x30(0x10)
	struct TArray<enum class EAdapterItemType> Adapters; // 0x40(0x10)
	struct TArray<uint64_t> ItemIds; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsStyleAppearanceRow
// Size: 0xb8 (Inherited: 0x28)
struct FPartsStyleAppearanceRow : public FPackageDescRow {
public:

	uint64_t ID; // 0x28(0x08)
	enum class EApperanceModifyType ApperanceType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FSoftObjectPath MeshPath1P; // 0x38(0x18)
	struct FSoftObjectPath MeshPath3P; // 0x50(0x18)
	struct FSoftObjectPath MeshPathUI; // 0x68(0x18)
	struct TArray<struct FPartsMaterialParameter> Parameters; // 0x80(0x10)
	struct FName SocketName; // 0x90(0x08)
	struct FVector PositionOffset; // 0x98(0x0c)
	struct FVector ScaleOffset; // 0xa4(0x0c)
	char pad_B0[0x8]; // 0xb0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsMaterialParameter
// Size: 0x38 (Inherited: 0x00)
struct FPartsMaterialParameter {
public:

	enum class EMaterialParameterType ParameterType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ParamterName; // 0x04(0x08)
	struct FVector VectorParamter; // 0x0c(0x0c)
	float ScalarParamter; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FSoftObjectPath ObjectPath; // 0x20(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsStyleBasicRow
// Size: 0xc8 (Inherited: 0x10)
struct FPartsStyleBasicRow : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	uint64_t StyleRuleId; // 0x18(0x08)
	uint32_t SlotId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	uint64_t AppearanceId; // 0x28(0x08)
	uint64_t UnlockId; // 0x30(0x08)
	int32_t Quality; // 0x38(0x04)
	enum class FPartAddtionRuleType FunctionType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32_t FunctionId; // 0x40(0x04)
	enum class FPartAddtionRuleType InstallRuleType; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32_t InstallRuleId; // 0x48(0x04)
	int32_t RecognizeId; // 0x4c(0x04)
	struct FSoftObjectPath StyleIconPath; // 0x50(0x18)
	struct FText Pros1; // 0x68(0x18)
	struct FText Cons1; // 0x80(0x18)
	struct FText StyleName; // 0x98(0x18)
	struct FText Descrition; // 0xb0(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GunPresetBoundsRow
// Size: 0x38 (Inherited: 0x10)
struct FGunPresetBoundsRow : public FDescRowBase {
public:

	uint64_t PresetId; // 0x10(0x08)
	struct FBoxSphereBounds Bounds; // 0x18(0x1c)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponPartsSkeletalMeshSocketNameInfo
// Size: 0x50 (Inherited: 0x10)
struct FWeaponPartsSkeletalMeshSocketNameInfo : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	struct TArray<struct FName> SocketNames; // 0x18(0x10)
	struct TArray<struct FVector> SocketLocation; // 0x28(0x10)
	struct TArray<struct FRotator> SocketRotation; // 0x38(0x10)
	struct FName RootBoneName; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponExtraModelRule
// Size: 0x58 (Inherited: 0x00)
struct FWeaponExtraModelRule {
public:

	struct FName SocketName; // 0x00(0x08)
	struct TArray<enum class EAdapterItemType> Prioirtys; // 0x08(0x10)
	enum class EWeaponExtraModelVisibility DefaultVisibility; // 0x18(0x01)
	enum class EWeaponExtraModelConditionType ConditionType; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TArray<struct FName> Sockets; // 0x20(0x10)
	struct TArray<enum class EAdapterItemType> Adapters; // 0x30(0x10)
	struct TArray<uint64_t> ItemIds; // 0x40(0x10)
	enum class EWeaponExtraModelVisibility ConditionVisibility; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponExtraModelRow
// Size: 0x98 (Inherited: 0x10)
struct FWeaponExtraModelRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	uint64_t RecID; // 0x18(0x08)
	struct FName SocketName; // 0x20(0x08)
	struct TArray<enum class EAdapterItemType> Prioirtys; // 0x28(0x10)
	struct TArray<enum class EWeaponExtraModelType> PrioirtysOnExtraModel; // 0x38(0x10)
	bool bEnableInWepaon; // 0x48(0x01)
	enum class EWeaponExtraModelVisibility DefaultVisibility; // 0x49(0x01)
	bool bInvert; // 0x4a(0x01)
	enum class EWeaponExtraModelConditionType ConditionType; // 0x4b(0x01)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FName> Sockets; // 0x50(0x10)
	struct TArray<enum class EAdapterItemType> Adapters; // 0x60(0x10)
	struct TArray<uint64_t> ItemIds; // 0x70(0x10)
	enum class EWeaponExtraModelVisibility ConditionVisibility; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct FWeaponExtraModelCondition> Conditions; // 0x88(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponExtraModelCondition
// Size: 0x38 (Inherited: 0x00)
struct FWeaponExtraModelCondition {
public:

	bool bOr; // 0x00(0x01)
	bool bInvert; // 0x01(0x01)
	enum class EWeaponExtraModelConditionType ConditionType; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct TArray<struct FName> Sockets; // 0x08(0x10)
	struct TArray<enum class EAdapterItemType> Adapters; // 0x18(0x10)
	struct TArray<uint64_t> ItemIds; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponPresetRecommendRow
// Size: 0x30 (Inherited: 0x10)
struct FWeaponPresetRecommendRow : public FDescRowBase {
public:

	uint32_t ID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	uint64_t RecID; // 0x18(0x08)
	uint32_t SectId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	uint64_t PresetId; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsFxFunctionRow
// Size: 0x40 (Inherited: 0x10)
struct FPartsFxFunctionRow : public FDescRowBase {
public:

	uint32_t RuleKey; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	uint64_t FxFuntionId; // 0x18(0x08)
	enum class EFxFuntionType FxFunctionType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	int64_t InParam; // 0x28(0x08)
	struct FString Parma1; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsSerieRow
// Size: 0x30 (Inherited: 0x10)
struct FPartsSerieRow : public FDescRowBase {
public:

	uint32_t SerieId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText SerieName; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsUIAnimRow
// Size: 0x40 (Inherited: 0x10)
struct FPartsUIAnimRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char DefaultAnim[0x28]; // 0x18(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsRuleGroup
// Size: 0x40 (Inherited: 0x10)
struct FPartsRuleGroup : public FDescRowBase {
public:

	uint32_t GroupKey; // 0x10(0x04)
	struct FName GroupName; // 0x14(0x08)
	uint32_t SocketId; // 0x1c(0x04)
	struct TArray<uint64_t> ItemIds; // 0x20(0x10)
	struct TArray<uint64_t> InstallRuleId; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RTILightConfigRow
// Size: 0x30 (Inherited: 0x10)
struct FRTILightConfigRow : public FDescRowBase {
public:

	int32_t LightPlanId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FSoftClassPath LightBPClassPath; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RTIConfigRow
// Size: 0x40 (Inherited: 0x10)
struct FRTIConfigRow : public FDescRowBase {
public:

	int32_t ID; // 0x10(0x04)
	int32_t LightPlanId; // 0x14(0x04)
	struct FRotator IconRotation; // 0x18(0x0c)
	struct FVector IconOffset; // 0x24(0x0c)
	struct FVector IconScale; // 0x30(0x0c)
	bool bUsePerspective; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AssemblePartAudio
// Size: 0x30 (Inherited: 0x10)
struct FAssemblePartAudio : public FDescRowBase {
public:

	enum class EAssemblerAudioType AudioType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FSoftObjectPath AudioAsset; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsMergeableRow
// Size: 0x48 (Inherited: 0x28)
struct FPartsMergeableRow : public FPackageDescRow {
public:

	struct FName ItemID; // 0x28(0x08)
	uint64_t ItemIdUint; // 0x30(0x08)
	uint64_t AppearanceId; // 0x38(0x08)
	bool b1PMergeable; // 0x40(0x01)
	bool b3PMergeable; // 0x41(0x01)
	bool bSupportDualMagazine; // 0x42(0x01)
	bool b1PMergeableBySpecificFunction; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsTextureDefaultSizeRow
// Size: 0x20 (Inherited: 0x10)
struct FPartsTextureDefaultSizeRow : public FDescRowBase {
public:

	enum class EAdapterItemType ApdaterType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	uint32_t TextureWidth; // 0x14(0x04)
	char TextureSizeReduceOrder; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MaterialRow
// Size: 0xd0 (Inherited: 0x08)
struct FMaterialRow : public FTableRowBase {
public:

	/*struct TSoftObjectPtr<UMaterialInterface>*/char BaseColorMaterial[0x28]; // 0x08(0x28)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char MACMaterial[0x28]; // 0x30(0x28)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char NRMaterial[0x28]; // 0x58(0x28)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char FinalMaterial[0x28]; // 0x80(0x28)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char FinalMaterial_Mask[0x28]; // 0xa8(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartExcludeRuleRow
// Size: 0x48 (Inherited: 0x10)
struct FPartExcludeRuleRow : public FDescRowBase {
public:

	uint32_t RuleKey; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	uint64_t ItemID; // 0x18(0x08)
	enum class EAdapterItemType ExcludeSocketParentType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString ExcludeSocketName; // 0x28(0x10)
	struct TArray<uint64_t> ExcludeList; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsFunctionGroupRow
// Size: 0x28 (Inherited: 0x10)
struct FPartsFunctionGroupRow : public FDescRowBase {
public:

	struct FName GroupKey; // 0x10(0x08)
	struct TArray<struct FName> Keys; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsAnimFunctionRow
// Size: 0x138 (Inherited: 0x10)
struct FPartsAnimFunctionRow : public FDescRowBase {
public:

	uint32_t RuleKey; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	uint64_t AnimFunctionId; // 0x18(0x08)
	enum class EWeaponPartAnimFunctionType PartFunctionType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	/*struct TArray<struct TSoftObjectPtr<UAnimSequence>>*/char AccessoryAnimPoseArray[0x10]; // 0x28(0x10)
	/*struct TMap<enum class EWeaponAdapterHandIKPoseType, struct TSoftObjectPtr<UAnimSequence>>*/char AccessoryAnimPoseMap[0x50]; // 0x38(0x50)
	/*struct TArray<struct TSoftObjectPtr<UAnimSequence>>*/char AccessoryTPPAnimPoseArray[0x10]; // 0x88(0x10)
	/*struct TArray<struct TSoftObjectPtr<UAnimSequence>>*/char AccessoryHallAnimPoseArray[0x10]; // 0x98(0x10)
	/*struct TArray<struct TSoftObjectPtr<UAnimSequence>>*/char AccessoryAnimRightPoseArray[0x10]; // 0xa8(0x10)
	/*struct TArray<struct TSoftObjectPtr<UAnimSequence>>*/char AccessoryTPPAnimRightPoseArray[0x10]; // 0xb8(0x10)
	/*struct TArray<struct TSoftObjectPtr<UAnimSequence>>*/char AccessoryHallAnimRightPoseArray[0x10]; // 0xc8(0x10)
	struct TArray<struct FForbidLeftHandIKRuler> ForbidLeftHandIKRulerArray; // 0xd8(0x10)
	/*struct TSoftClassPtr<UObject>*/char PartAnimInstance[0x28]; // 0xe8(0x28)
	uint64_t BipodDeployId; // 0x110(0x08)
	struct FString Param1; // 0x118(0x10)
	struct FString Param2; // 0x128(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ForbidLeftHandIKRuler
// Size: 0x10 (Inherited: 0x00)
struct FForbidLeftHandIKRuler {
public:

	enum class EForbidLeftHandIKType ForbidLeftHandIKType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float OutReachDistance; // 0x04(0x04)
	struct FName SocketName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AimDownSightsFuncRow
// Size: 0x50 (Inherited: 0x10)
struct FAimDownSightsFuncRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	struct FSoftObjectPath Pose_Open; // 0x18(0x18)
	struct FSoftObjectPath Pose_Close; // 0x30(0x18)
	enum class EAimDownSightsState State; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsFunctionRow
// Size: 0xa0 (Inherited: 0x10)
struct FPartsFunctionRow : public FDescRowBase {
public:

	uint32_t RuleKey; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	uint64_t FunctionId; // 0x18(0x08)
	enum class EWeaponPartFunctionType PartFunctionType; // 0x20(0x01)
	bool bNegative; // 0x21(0x01)
	enum class EWeaponPartFunctionDynamicType PartFunctionDynamicType; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	struct FName Param1; // 0x24(0x08)
	struct FName Param2; // 0x2c(0x08)
	struct FName Param3; // 0x34(0x08)
	struct FName Param4; // 0x3c(0x08)
	struct FName Param5; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	/*struct TSoftObjectPtr<UAnimSequence>*/char AccessoryAnimPose[0x28]; // 0x50(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char AccessoryTPPAnimPose[0x28]; // 0x78(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponRow
// Size: 0x20 (Inherited: 0x10)
struct FWeaponRow : public FDescRowBase {
public:

	uint64_t RecID; // 0x10(0x08)
	struct UClass* WeaponBPClass; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RecFunctionRow
// Size: 0xd0 (Inherited: 0x10)
struct FRecFunctionRow : public FDescRowBase {
public:

	uint64_t RecFunctionId; // 0x10(0x08)
	uint32_t SortKey; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	uint64_t CameraID; // 0x20(0x08)
	uint32_t SerieId; // 0x28(0x04)
	bool IsBaseModel; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	uint64_t DefaultPreset; // 0x30(0x08)
	uint64_t MPDefaultClearPreset; // 0x38(0x08)
	uint64_t MPDefaultPreset; // 0x40(0x08)
	uint32_t BasicPistolGrip; // 0x48(0x04)
	uint32_t BasicGunBarrel; // 0x4c(0x04)
	uint32_t BasicHandGuard; // 0x50(0x04)
	uint32_t BasicStock; // 0x54(0x04)
	uint32_t BasicMagazine; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	/*struct TSoftClassPtr<UObject>*/char BPClass[0x28]; // 0x60(0x28)
	uint32_t WeaponPlayerInputConfigId; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FSoftObjectPath SilhouetteIconPath; // 0x90(0x18)
	struct FSoftObjectPath LittleSilhouetteIconPath; // 0xa8(0x18)
	bool IsBaseWeapon; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	uint32_t WeaponAssemblyPointLimit; // 0xc4(0x04)
	uint32_t MPUnlockType; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MagazineDropRow
// Size: 0x100 (Inherited: 0x10)
struct FMagazineDropRow : public FDescRowBase {
public:

	uint64_t MagazineTypeId; // 0x10(0x08)
	bool bEnableMagazineDropAudio; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	/*struct TSoftObjectPtr<UGPAudioEventAsset>*/char DefaultMagazineDropEvent[0x28]; // 0x20(0x28)
	/*struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct TSoftObjectPtr<UGPAudioEventAsset>>*/char MagazineDropAudioMap[0x50]; // 0x48(0x50)
	struct FVector MagazineDropDeltaPos; // 0x98(0x0c)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct TMap<enum class EChracterPoseType, float> DropMagazineAudioDelay; // 0xa8(0x50)
	float DropAudioDisSqr; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GunPreviewRow
// Size: 0x38 (Inherited: 0x10)
struct FGunPreviewRow : public FDescRowBase {
public:

	uint32_t ItemID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TArray<struct TSoftObjectPtr<USkeletalMesh>>*/char SkeletalMesh[0x10]; // 0x18(0x10)
	struct TArray<struct FString> PointName; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GunPresetRow
// Size: 0x38 (Inherited: 0x10)
struct FGunPresetRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	uint64_t RecID; // 0x18(0x08)
	uint64_t DescId; // 0x20(0x08)
	struct FString Name; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartSocketsRow
// Size: 0x68 (Inherited: 0x10)
struct FPartSocketsRow : public FDescRowBase {
public:

	uint32_t SocketId; // 0x10(0x04)
	struct FName SocketName; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText SocketDisplayName; // 0x20(0x18)
	struct FSoftObjectPath SocketPartIcon; // 0x38(0x18)
	enum class EAdapterItemType SocketPartType; // 0x50(0x01)
	bool bDefaultHide; // 0x51(0x01)
	bool bIsCommon; // 0x52(0x01)
	bool bHideForPlayer; // 0x53(0x01)
	enum class EAssemblerCamPoint CamPoint; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct TArray<struct FPartSocketExtraInfo> ExtraInfos; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartSocketExtraInfo
// Size: 0x40 (Inherited: 0x00)
struct FPartSocketExtraInfo {
public:

	enum class EAdapterItemType ParentPartType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText SocketDisplayName; // 0x08(0x18)
	struct FSoftObjectPath SocketPartIcon; // 0x20(0x18)
	enum class EAssemblerCamPoint CamPoint; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsRuleRow
// Size: 0x30 (Inherited: 0x10)
struct FPartsRuleRow : public FDescRowBase {
public:

	uint32_t RuleKey; // 0x10(0x04)
	uint32_t RuleId; // 0x14(0x04)
	uint64_t ItemID; // 0x18(0x08)
	uint32_t SocketId; // 0x20(0x04)
	char bIsGroup : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char Priority; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	uint64_t FixedMeshItemId; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsDataRow
// Size: 0x130 (Inherited: 0x10)
struct FPartsDataRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	uint64_t FunctionId; // 0x18(0x08)
	uint64_t FunctionId_SOL; // 0x20(0x08)
	uint64_t FunctionId_Breakthrough; // 0x28(0x08)
	uint64_t AnimFunctionId; // 0x30(0x08)
	uint64_t AudioFunctionId; // 0x38(0x08)
	uint64_t FxFuntionId; // 0x40(0x08)
	uint32_t RuleId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	uint64_t MagazineTypeId; // 0x50(0x08)
	uint64_t PartsTypeId; // 0x58(0x08)
	char PartsTypePriority; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FName ExtendStr; // 0x64(0x08)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<uint32_t> ExtraOccupySockets; // 0x70(0x10)
	struct TArray<struct FName> SocketOffsets; // 0x80(0x10)
	struct TArray<struct FPartsBuffRow> ProsList; // 0x90(0x10)
	struct TArray<struct FPartsBuffRow> ProsList_SOL; // 0xa0(0x10)
	struct TArray<struct FPartsBuffRow> ProsList_Breakthrough; // 0xb0(0x10)
	struct TArray<struct FPartsBuffRow> ConsList; // 0xc0(0x10)
	struct TArray<struct FPartsBuffRow> ConsList_SOL; // 0xd0(0x10)
	struct TArray<struct FPartsBuffRow> ConsList_Breakthrough; // 0xe0(0x10)
	char IsHiddenInGunsmith : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	uint32_t WeaponAssemblyPoint; // 0xf4(0x04)
	struct TArray<uint64_t> TuneIds; // 0xf8(0x10)
	enum class EPartFunctionTag PartFunctionTag; // 0x108(0x01)
	bool bRelease; // 0x109(0x01)
	char pad_10A[0x6]; // 0x10a(0x06)
	struct FText SpecialDescription; // 0x110(0x18)
	bool TriggerBulletCrack; // 0x128(0x01)
	bool IsBreakthroughMode; // 0x129(0x01)
	bool OpenCollection; // 0x12a(0x01)
	bool DisplayResources; // 0x12b(0x01)
	char pad_12C[0x4]; // 0x12c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsBuffRow
// Size: 0x18 (Inherited: 0x00)
struct FPartsBuffRow {
public:

	struct FName BuffText; // 0x00(0x08)
	struct TArray<struct FName> Params; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsAttributeName
// Size: 0x30 (Inherited: 0x10)
struct FPartsAttributeName : public FDescRowBase {
public:

	struct FName AttributesID; // 0x10(0x08)
	struct FText AttributesName; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPPerkAdditiveLogicInfo
// Size: 0x10 (Inherited: 0x00)
struct FGPPerkAdditiveLogicInfo {
public:

	struct UClass* CondClass; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPPerkCondInfo
// Size: 0x10 (Inherited: 0x00)
struct FGPPerkCondInfo {
public:

	struct UClass* CondClass; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterPerkFastArray
// Size: 0x120 (Inherited: 0x108)
struct FCharacterPerkFastArray : public FFastArraySerializer {
public:

	struct TArray<struct FCharacterPerk> Items; // 0x108(0x10)
	char pad_118[0x8]; // 0x118(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterPerk
// Size: 0x14 (Inherited: 0x0c)
struct FCharacterPerk : public FFastArraySerializerItem {
public:

	uint32_t PerkID; // 0x0c(0x04)
	bool IsActive; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPPerkInFightRow
// Size: 0x30 (Inherited: 0x10)
struct FGPPerkInFightRow : public FDescRowBase {
public:

	uint32_t IconBuff; // 0x10(0x04)
	enum class EPerkEffectTriggerCond PerkEffectTriggerCond; // 0x14(0x01)
	enum class EPerkEffectAdditiveLogic PerkEffectAdditiveLogic; // 0x15(0x01)
	enum class EPerkEffectType PerkEffectTriggerType; // 0x16(0x01)
	enum class EPerkSpecialEffectType PerkSpecialEffectType; // 0x17(0x01)
	uint32_t TriggerBuffID; // 0x18(0x04)
	enum class EPerkSpecialEffectType PerkSpecialEffectWithBuff; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	int32_t GiveSkillId; // 0x20(0x04)
	uint32_t CoolDownBuffID; // 0x24(0x04)
	enum class EBuffEntityTriggerIconType TriggerIconType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	uint32_t TriggerIconBuffID; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ScopeLenMaterialProxy
// Size: 0x1c0 (Inherited: 0x00)
struct FScopeLenMaterialProxy {
public:

	struct UMaterialInterface* OriginMaterial; // 0x00(0x08)
	struct UPrimitiveComponent* PrimitiveComponent; // 0x08(0x08)
	int32_t MatIndex; // 0x10(0x04)
	char pad_14[0x14]; // 0x14(0x14)
	struct UMaterialInstanceDynamic* CurMaterial; // 0x28(0x08)
	struct TMap<struct FScopeMaterialCondition, struct UMaterialInterface*> MaterialMap; // 0x30(0x50)
	struct TMap<struct FScopeMaterialCondition, struct UMaterialInstanceDynamic*> MIDMap; // 0x80(0x50)
	struct TMap<struct FName, struct UTexture*> TextureParams; // 0xd0(0x50)
	struct TMap<struct FName, float> ScalarParams; // 0x120(0x50)
	struct TMap<struct FName, struct FLinearColor> VectorParams; // 0x170(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ScopeMaterialCondition
// Size: 0x02 (Inherited: 0x00)
struct FScopeMaterialCondition {
public:

	bool bIsRT; // 0x00(0x01)
	enum class EScopeLenMatState MatState; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SoftShadowRuntime
// Size: 0x70 (Inherited: 0x00)
struct FSoftShadowRuntime {
public:

	char pad_0[0x70]; // 0x00(0x70)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SceneCaptureInfo
// Size: 0x3c (Inherited: 0x00)
struct FSceneCaptureInfo {
public:

	char pad_0[0x3c]; // 0x00(0x3c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.EffectResource
// Size: 0x10 (Inherited: 0x00)
struct FEffectResource {
public:

	struct TArray<struct UObject*> Resources; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ScreenEffectInfoRow
// Size: 0x80 (Inherited: 0x10)
struct FScreenEffectInfoRow : public FDescRowBase {
public:

	struct TMap<enum class EPerfGearQualityLevel, struct FScreenEffectInfo> ScreenEffectInfos; // 0x10(0x50)
	float GameAttention; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<int32_t> GroupIDArray; // 0x68(0x10)
	float GPUConsume; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ScreenEffectInfo
// Size: 0xf0 (Inherited: 0x00)
struct FScreenEffectInfo {
public:

	/*struct TSoftClassPtr<UObject>*/char ScreenEffectControllerClass[0x28]; // 0x00(0x28)
	/*struct TSoftClassPtr<UObject>*/char ScreenEffectClass[0x28]; // 0x28(0x28)
	/*struct TSoftClassPtr<UObject>*/char UIObjectPath[0x28]; // 0x50(0x28)
	bool bneedShowToptoBag; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TMap<struct FName, struct FScreenEffectResource> EffectInfos; // 0x80(0x50)
	float EffectTime; // 0xd0(0x04)
	bool bNeedFadeOut; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct FName FadeOutName; // 0xd8(0x08)
	float EffectPriority; // 0xe0(0x04)
	enum class EPerfGearQualityLevel RenderQualityLevel; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	int32_t NumMaxInstructions; // 0xe8(0x04)
	int32_t QuadArea; // 0xec(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ScreenEffectResource
// Size: 0x178 (Inherited: 0x00)
struct FScreenEffectResource {
public:

	/*struct TSoftObjectPtr<UStaticMesh>*/char StaticMesh[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char MaterialInstance[0x28]; // 0x28(0x28)
	/*struct TSoftClassPtr<UObject>*/char ParticleClass[0x28]; // 0x50(0x28)
	/*struct TMap<struct FName, struct TSoftObjectPtr<UCurveFloat>>*/char EffectFloatParams[0x50]; // 0x78(0x50)
	/*struct TMap<struct FName, struct TSoftObjectPtr<UCurveVector>>*/char EffectVectorParams[0x50]; // 0xc8(0x50)
	/*struct TMap<struct FName, struct TSoftObjectPtr<UCurveLinearColor>>*/char EffectLinearColorParams[0x50]; // 0x118(0x50)
	float EffectResourceTime; // 0x168(0x04)
	bool bAutoActiveNext; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	float CurveTime; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FadeOutParams
// Size: 0x68 (Inherited: 0x00)
struct FFadeOutParams {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct UScreenEffectControllerBase* Effect; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
	/*struct TMap<struct FName, struct TSoftObjectPtr<UCurveFloat>>*/char FadeOutEffectFloatParams[0x50]; // 0x18(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ScreenEffectEvaluateParam
// Size: 0x30 (Inherited: 0x00)
struct FScreenEffectEvaluateParam {
public:

	char pad_0[0x28]; // 0x00(0x28)
	struct TWeakObjectPtr<struct UScreenEffectControllerBase> ControllerBase; // 0x28(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SlotCharingDataRow
// Size: 0x30 (Inherited: 0x10)
struct FSlotCharingDataRow : public FDescRowBase {
public:

	int32_t cdid; // 0x10(0x04)
	enum class ECharingSlot Slot; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t WeaponSlot; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FSlotCharingConfigData> SlotChargingData; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.LockerOverlapData
// Size: 0x10 (Inherited: 0x00)
struct FLockerOverlapData {
public:

	struct AActor* Actor; // 0x00(0x08)
	float Distance; // 0x08(0x04)
	bool bShowBubble; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SwitchWeaponAntiCheatCode
// Size: 0x08 (Inherited: 0x00)
struct FSwitchWeaponAntiCheatCode {
public:

	float LastWeaponAntiCheatCode; // 0x00(0x04)
	float PendingWeaponAntiCheatCode; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SwitchWeaponTimeLineRepData
// Size: 0x20 (Inherited: 0x00)
struct FSwitchWeaponTimeLineRepData {
public:

	struct TArray<struct FSwitchWeaponFrame> Data; // 0x00(0x10)
	int32_t Front; // 0x10(0x04)
	int32_t Rear; // 0x14(0x04)
	int32_t MaxSize; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SwitchWeaponFrame
// Size: 0x38 (Inherited: 0x28)
struct FSwitchWeaponFrame : public FBasePreViewFrame {
public:

	struct FWeaponIdentity LastWeaponIdentity; // 0x28(0x04)
	struct FWeaponIdentity PendingWeaponIdentity; // 0x2c(0x04)
	enum class EWeaponSwitchType SwitchType; // 0x30(0x01)
	enum class ESwitchWeaponOperation Operation; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPVehicleWeaponDataAppearance
// Size: 0xb8 (Inherited: 0x10)
struct FGPVehicleWeaponDataAppearance : public FDescRowBase {
public:

	uint64_t WeaponID; // 0x10(0x08)
	struct TMap<uint64_t, uint64_t> DependWeaponAnimIds; // 0x18(0x50)
	struct TMap<uint64_t, uint64_t> DependWeaponCharacterAnimIds; // 0x68(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehiclePartInfo
// Size: 0x60 (Inherited: 0x00)
struct FVehiclePartInfo {
public:

	bool IsMainPart; // 0x00(0x01)
	enum class EVehiclePartType TypeFlag; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float DamageScaling; // 0x04(0x04)
	float RadiusDamageScaling; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FVehicleAngleDamageInfo> AngleDamageInfos; // 0x10(0x10)
	float PenetrateConst; // 0x20(0x04)
	struct FName WeaponSeatName; // 0x24(0x08)
	float WeaponRoateDebuffRatio; // 0x2c(0x04)
	float EngineDebuffRatio; // 0x30(0x04)
	float EngineSpeedDebuffRatio; // 0x34(0x04)
	float TrackDebuffRatio; // 0x38(0x04)
	bool IsEffectPlayImmediately; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct TArray<struct FName> EffectIds; // 0x40(0x10)
	struct TArray<struct FTransform> EffectOffsetTransforms; // 0x50(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleAngleDamageInfo
// Size: 0x10 (Inherited: 0x00)
struct FVehicleAngleDamageInfo {
public:

	struct FVector AngleRanage; // 0x00(0x0c)
	float DamageScaling; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleSimulatedOptimizationConfig
// Size: 0x10 (Inherited: 0x00)
struct FVehicleSimulatedOptimizationConfig {
public:

	float PositionTolerance; // 0x00(0x04)
	float PositionSmoothSpeed; // 0x04(0x04)
	float RotationTolerance; // 0x08(0x04)
	float RotationSmoothSpeed; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponActorSpawnParam
// Size: 0x198 (Inherited: 0x00)
struct FWeaponActorSpawnParam {
public:

	char pad_0[0x198]; // 0x00(0x198)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponActorSpawnerHandle
// Size: 0x08 (Inherited: 0x00)
struct FWeaponActorSpawnerHandle {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MaskMaterialRow
// Size: 0xb8 (Inherited: 0x10)
struct FMaskMaterialRow : public FDescRowBase {
public:

	struct FName MaterialName; // 0x10(0x08)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char SrcMaterial[0x28]; // 0x18(0x28)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char MaskMaterial[0x28]; // 0x40(0x28)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char TexMaskMaterial[0x28]; // 0x68(0x28)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char WeaponStencilMaterial[0x28]; // 0x90(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponPerkRow
// Size: 0x20 (Inherited: 0x10)
struct FWeaponPerkRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	int32_t ArmorPenetrate; // 0x18(0x04)
	uint16_t Duability; // 0x1c(0x02)
	char pad_1E[0x2]; // 0x1e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FlashLightFunctionRow
// Size: 0xf0 (Inherited: 0x10)
struct FFlashLightFunctionRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	struct FName LightName_1P; // 0x18(0x08)
	float NomralFlashLightTraceDistance; // 0x20(0x04)
	bool bVisibleFor3P; // 0x24(0x01)
	bool bHavePowerFlash; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	struct FName PowerFlashName_1P; // 0x28(0x08)
	/*struct TSoftClassPtr<UObject>*/char PowerFlashFX_3P[0x28]; // 0x30(0x28)
	struct FSoftObjectPath Mat_NormalFlashLightPath; // 0x58(0x18)
	struct FSoftObjectPath LFM_CullLightPath; // 0x70(0x18)
	/*struct TSoftObjectPtr<UStaticMesh>*/char LightBeamPlaneMeshPath[0x28]; // 0x88(0x28)
	float TexIntensity1_Nomral; // 0xb0(0x04)
	float TexScale1_Nomral; // 0xb4(0x04)
	float TexIntensity2_Nomral; // 0xb8(0x04)
	float TexScale2_Nomral; // 0xbc(0x04)
	float PowerFlashLightTraceDistance; // 0xc0(0x04)
	int32_t PowerFlashCount_SOL; // 0xc4(0x04)
	int32_t PowerFlashCount_Breakthrough; // 0xc8(0x04)
	int32_t SinglePowerFlashCount; // 0xcc(0x04)
	float SinglePowerFlashDuration; // 0xd0(0x04)
	float SinglePowerFlashInterval; // 0xd4(0x04)
	float PowerFlashCD; // 0xd8(0x04)
	float TexIntensity1_PowerFlash; // 0xdc(0x04)
	float TexScale1_PowerFlash; // 0xe0(0x04)
	float TexIntensity2_PowerFlash; // 0xe4(0x04)
	float TexScale2_PowerFlash; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.LamFunctionRow
// Size: 0xf8 (Inherited: 0x10)
struct FLamFunctionRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	float MaxDistance; // 0x18(0x04)
	float MaxDistance_3P; // 0x1c(0x04)
	bool bUseMesh; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	/*struct TSoftObjectPtr<UStaticMesh>*/char LaserMesh[0x28]; // 0x28(0x28)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char LaserMat[0x28]; // 0x50(0x28)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char LaserMat_3P[0x28]; // 0x78(0x28)
	struct FVector DefMeshScale; // 0xa0(0x0c)
	struct FVector DefMeshScale_3P; // 0xac(0x0c)
	struct FVector DefMeshScale_ForMobile; // 0xb8(0x0c)
	struct FVector DefMeshScale_3P_ForMobile; // 0xc4(0x0c)
	struct FName LaserLineFXName; // 0xd0(0x08)
	struct FName LaserLineFXName_3P; // 0xd8(0x08)
	struct FName LaserPointFXName; // 0xe0(0x08)
	struct FName LaserPointFXName_3P; // 0xe8(0x08)
	bool bVisibleFor3P; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartBipodConfig
// Size: 0x228 (Inherited: 0x10)
struct FPartBipodConfig : public FDescRowBase {
public:

	uint64_t BipodDeployId; // 0x10(0x08)
	float BipodDeployInTime; // 0x18(0x04)
	float BipodDeployOutTime; // 0x1c(0x04)
	float BipodDeployCanMoveTime; // 0x20(0x04)
	float StandPitchMin; // 0x24(0x04)
	float StandPitchMax; // 0x28(0x04)
	float StandYawMin; // 0x2c(0x04)
	float StandYawhMax; // 0x30(0x04)
	float CrouchPitchMin; // 0x34(0x04)
	float CrouchPitchMax; // 0x38(0x04)
	float CrouchYawMin; // 0x3c(0x04)
	float CrouchYawhMax; // 0x40(0x04)
	float PronePitchMin; // 0x44(0x04)
	float PronePitchMax; // 0x48(0x04)
	float ProneYawMin; // 0x4c(0x04)
	float ProneYawhMax; // 0x50(0x04)
	float CameraTraceDistance; // 0x54(0x04)
	float TraceZDistance; // 0x58(0x04)
	struct FVector TraceBox; // 0x5c(0x0c)
	struct FVector StartTraceLocationOffset; // 0x68(0x0c)
	float FovRate; // 0x74(0x04)
	float FovDeployInTime; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char FovDeployInSpeedCurve[0x28]; // 0x80(0x28)
	float FovDeployOutTime; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char FovDeployOutSpeedCurve[0x28]; // 0xb0(0x28)
	float AutoBipDeployTime; // 0xd8(0x04)
	float AutoBipDeployRot; // 0xdc(0x04)
	float AutoExitBipDeployCDTime; // 0xe0(0x04)
	float InterruptBipDeployCDTime; // 0xe4(0x04)
	/*struct TSoftObjectPtr<UAnimMontage>*/char FPPUpperbodyDeployInMontage[0x28]; // 0xe8(0x28)
	/*struct TSoftObjectPtr<UAnimMontage>*/char FPPUpperbodyDeployOutMontage[0x28]; // 0x110(0x28)
	/*struct TSoftObjectPtr<UAnimMontage>*/char FPPHandDeployInMontage[0x28]; // 0x138(0x28)
	/*struct TSoftObjectPtr<UAnimMontage>*/char FPPHandDeployOutMontage[0x28]; // 0x160(0x28)
	/*struct TSoftObjectPtr<UAnimMontage>*/char UpperbodyDeployInMontage[0x28]; // 0x188(0x28)
	/*struct TSoftObjectPtr<UAnimMontage>*/char UpperbodyDeployOutMontage[0x28]; // 0x1b0(0x28)
	/*struct TSoftObjectPtr<UAnimMontage>*/char UpperbodyDeployInMontageProne[0x28]; // 0x1d8(0x28)
	/*struct TSoftObjectPtr<UAnimMontage>*/char UpperbodyDeployOutMontageProne[0x28]; // 0x200(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PartsClassConfig
// Size: 0xb8 (Inherited: 0x10)
struct FPartsClassConfig : public FDescRowBase {
public:

	uint64_t PartItemId; // 0x10(0x08)
	/*struct TSoftClassPtr<UObject>*/char FppAdapterClass[0x28]; // 0x18(0x28)
	/*struct TSoftClassPtr<UObject>*/char TppAdapterClass[0x28]; // 0x40(0x28)
	/*struct TSoftClassPtr<UObject>*/char ServerAdapterClass[0x28]; // 0x68(0x28)
	/*struct TSoftClassPtr<UObject>*/char SimulatedAdapterClass[0x28]; // 0x90(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ScoPoint2CamTransRow
// Size: 0xa0 (Inherited: 0x10)
struct FScoPoint2CamTransRow : public FDescRowBase {
public:

	uint64_t RecID; // 0x10(0x08)
	/*struct TSoftObjectPtr<UAnimSequence>*/char CharacterAnim[0x28]; // 0x18(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char WeaponAnim[0x28]; // 0x40(0x28)
	char pad_68[0x8]; // 0x68(0x08)
	struct FTransform offset; // 0x70(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ZoomRateItem
// Size: 0x10 (Inherited: 0x00)
struct FZoomRateItem {
public:

	float ZoomRate; // 0x00(0x04)
	float OutZoomRate; // 0x04(0x04)
	float ZoomRateAlpha; // 0x08(0x04)
	float ZoomRateScale; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ScopeInfoItem
// Size: 0x20 (Inherited: 0x00)
struct FScopeInfoItem {
public:

	/*struct TScriptInterface<IRangeScopeInterface>*/char CurScope[0x10]; // 0x00(0x10)
	int32_t ScopeZoomRateIndex; // 0x10(0x04)
	int32_t GlobalZoomRateIndex; // 0x14(0x04)
	float ZoomRate; // 0x18(0x04)
	bool bIsZoomTypeValid; // 0x1c(0x01)
	enum class EScopeLocationType ScopeLocationType; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CrosshairPresetRow
// Size: 0x58 (Inherited: 0x10)
struct FCrosshairPresetRow : public FDescRowBase {
public:

	int32_t PresetId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TSoftObjectPtr<UTexture>*/char SoftAsset[0x28]; // 0x18(0x28)
	struct FLinearColor Color; // 0x40(0x10)
	float BaseScale; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.OverrideItemVector
// Size: 0x10 (Inherited: 0x00)
struct FOverrideItemVector {
public:

	bool bOverride; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Value; // 0x04(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RangeScopeAnimParam
// Size: 0x10 (Inherited: 0x00)
struct FRangeScopeAnimParam {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MeshMatInfo
// Size: 0x50 (Inherited: 0x00)
struct FMeshMatInfo {
public:

	struct TMap<int32_t, struct UMaterialInterface*> MeshMaterialMats; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AddAmmoResult
// Size: 0x0c (Inherited: 0x00)
struct FAddAmmoResult {
public:

	enum class EAddAmmoFailReason FailReason; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t Capacity; // 0x04(0x04)
	uint32_t AddAmmoNum; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AddAmmoParameter
// Size: 0x20 (Inherited: 0x00)
struct FAddAmmoParameter {
public:

	enum class EWeaponAddAmmoType AddAmmoType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AddAmmoValue; // 0x04(0x04)
	bool bSimulate; // 0x08(0x01)
	bool bInfinite; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	uint32_t Capacity; // 0x0c(0x04)
	char pad_10[0x10]; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimAssetInfo
// Size: 0x40 (Inherited: 0x00)
struct FWeaponAnimAssetInfo {
public:

	char pad_0[0x18]; // 0x00(0x18)
	struct TArray<struct FName> AnimPathNodes; // 0x18(0x10)
	bool bIs1P; // 0x28(0x01)
	enum class EWeaponAnimDataTableType TableType; // 0x29(0x01)
	enum class EChracterPoseType CharacterPoseType; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	struct FName AnimKey; // 0x2c(0x08)
	struct FName AnimId; // 0x34(0x08)
	enum class EWeaponAnimXPPType XPPType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimPartItemMap
// Size: 0x50 (Inherited: 0x00)
struct FWeaponAnimPartItemMap {
public:

	struct TMap<struct FName, struct FWeaponAnimPartItemSeq> MapData; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimReloadAsset
// Size: 0x18 (Inherited: 0x00)
struct FAnimReloadAsset {
public:

	struct TArray<struct UObject*> Assets; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.LoadAnimPart
// Size: 0x50 (Inherited: 0x00)
struct FLoadAnimPart {
public:

	struct TArray<struct UObject*> RecordLocalAnimationList; // 0x00(0x10)
	char pad_10[0x40]; // 0x10(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimLoadRequest
// Size: 0x38 (Inherited: 0x00)
struct FAnimLoadRequest {
public:

	char pad_0[0x38]; // 0x00(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimGunSwingConfig
// Size: 0xb8 (Inherited: 0x10)
struct FAnimGunSwingConfig : public FDescRowBase {
public:

	uint16_t AnimGunSwingId; // 0x10(0x02)
	char pad_12[0x2]; // 0x12(0x02)
	float GunSwingSensibility; // 0x14(0x04)
	float GunSwingHoRotationScale; // 0x18(0x04)
	float GunSwingPitchScale; // 0x1c(0x04)
	float GunSwingHoDelayRotationScale; // 0x20(0x04)
	float GunSwingVerRotationScale; // 0x24(0x04)
	float GunSwingVerDelayRotationScale; // 0x28(0x04)
	struct FVector RotatorCenterOffset; // 0x2c(0x0c)
	float HoRotationSpringTime; // 0x38(0x04)
	float HoRotationSpringRadio; // 0x3c(0x04)
	float HoDelaySpringTime; // 0x40(0x04)
	float HoDelaySpringRadio; // 0x44(0x04)
	struct FRotator HoRotator; // 0x48(0x0c)
	struct FVector HoVector; // 0x54(0x0c)
	struct FRotator HoDelayRotation; // 0x60(0x0c)
	struct FVector HoDelayVector; // 0x6c(0x0c)
	struct FVector HoDelayRotatorCenterOffset; // 0x78(0x0c)
	struct FRotator VerRotator; // 0x84(0x0c)
	struct FVector VerRotatorCenterOffset; // 0x90(0x0c)
	struct FRotator VerDelayRotator; // 0x9c(0x0c)
	float VerRotationSpringTime; // 0xa8(0x04)
	float VerRotationSpringRadio; // 0xac(0x04)
	float VerDelaySpringTime; // 0xb0(0x04)
	float VerDelaySpringRadio; // 0xb4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PAnimPlayConfig
// Size: 0x0c (Inherited: 0x00)
struct FPAnimPlayConfig {
public:

	uint16_t ProcedureAnimId; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	float PlayRate; // 0x04(0x04)
	bool bLoop; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponEffectConfig
// Size: 0xa0 (Inherited: 0x00)
struct FWeaponEffectConfig {
public:

	struct TArray<struct FWeaponEffectRes> EffectsForFirstPerson; // 0x00(0x10)
	struct TArray<struct FWeaponEffectRes> EffectsForFirstPersonZooming; // 0x10(0x10)
	struct TArray<struct FWeaponEffectRes> EffectsForFirstPersonTPP; // 0x20(0x10)
	struct TArray<struct FWeaponEffectRes> EffectsForThirdPerson; // 0x30(0x10)
	struct FName SpawnTracerTemplateForFirstPerson_ResourceId; // 0x40(0x08)
	struct FName SpawnTracerTemplateForThirdPerson_ResourceId; // 0x48(0x08)
	struct FName SpawnTracerTemplateForFirstPersonTPP_ResourceId; // 0x50(0x08)
	struct FSoftObjectPath SpawnTracerTemplateForFirstPerson; // 0x58(0x18)
	struct FSoftObjectPath SpawnTracerTemplateForThirdPerson; // 0x70(0x18)
	struct FSoftObjectPath SpawnTracerTemplateForFirstPersonTPP; // 0x88(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponEffectRes
// Size: 0x80 (Inherited: 0x00)
struct FWeaponEffectRes {
public:

	enum class EWeaponEffectType EffectType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName EffectAttachSocket; // 0x04(0x08)
	struct FName EffectResourceId; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct FSoftObjectPath EffectResouceRef; // 0x18(0x18)
	struct TArray<enum class EGPWeaponInnerEvent> TriggerWeaponEventTypes; // 0x30(0x10)
	struct TArray<enum class EGPWeaponInnerEvent> StopWeaponEventTypes; // 0x40(0x10)
	enum class EWeaponAddFunction TriggerFuncCondition; // 0x50(0x01)
	enum class EWeaponAddFunction ForbidFuncCondition; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	float TriggerProbability; // 0x54(0x04)
	float MaxTriggerDistanceSqr; // 0x58(0x04)
	float DelayPlaySeconds; // 0x5c(0x04)
	char pad_60[0x10]; // 0x60(0x10)
	struct UFXResourceContainerComponent* CreatedPSC; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAttributeDetailDisplayRow
// Size: 0x38 (Inherited: 0x10)
struct FWeaponAttributeDetailDisplayRow : public FDescRowBase {
public:

	uint64_t RecID; // 0x10(0x08)
	struct TArray<struct FWeaponAttributeDetailDisplayItemRow> DisplayAttribute; // 0x18(0x10)
	struct TArray<struct FWeaponAttributeDetailDisplayGroupNewRow> NewDisplayAttribute; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAttributeDetailDisplayGroupNewRow
// Size: 0x30 (Inherited: 0x00)
struct FWeaponAttributeDetailDisplayGroupNewRow {
public:

	int32_t GroupID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText GroupName; // 0x08(0x18)
	struct TArray<struct FWeaponAttributeDetailDisplayItemNewRow> DisplayAttribute; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAttributeDetailDisplayItemNewRow
// Size: 0x20 (Inherited: 0x00)
struct FWeaponAttributeDetailDisplayItemNewRow {
public:

	struct FName MainAttribute; // 0x00(0x08)
	bool IsShowProgress; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FName> SubAttribute; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAttributeDetailDisplayItemRow
// Size: 0x28 (Inherited: 0x00)
struct FWeaponAttributeDetailDisplayItemRow {
public:

	struct FText GroupName; // 0x00(0x18)
	struct TArray<struct FName> DisplayAttribute; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAttributeDetailDisplayGroupRow
// Size: 0x20 (Inherited: 0x00)
struct FWeaponAttributeDetailDisplayGroupRow {
public:

	char GroupID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText GroupName; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAttributeLimitRow
// Size: 0x50 (Inherited: 0x10)
struct FWeaponAttributeLimitRow : public FDescRowBase {
public:

	uint64_t RecID; // 0x10(0x08)
	float EffectiveRange; // 0x18(0x04)
	float MuzzleVelocity; // 0x1c(0x04)
	float SprintToFire; // 0x20(0x04)
	float AimingTime; // 0x24(0x04)
	float VerticalRecoil; // 0x28(0x04)
	float HorizontalRecoil; // 0x2c(0x04)
	float RecoilReroundScale; // 0x30(0x04)
	float KeepFireStability; // 0x34(0x04)
	float WaistBaseSpreadReduction; // 0x38(0x04)
	float KeepFireAccuracy; // 0x3c(0x04)
	float ClipAmmo; // 0x40(0x04)
	float MaxCarriedAmmo; // 0x44(0x04)
	float ReloadTime; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAttributeDetailRow
// Size: 0xa8 (Inherited: 0x10)
struct FWeaponAttributeDetailRow : public FDescRowBase {
public:

	int32_t RowKey; // 0x10(0x04)
	struct FName AttrDetailId; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText DetailName; // 0x20(0x18)
	enum class EWeaponAttributeValueType ValueType; // 0x38(0x01)
	char RoundNum; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct FText UnitName; // 0x40(0x18)
	bool bLitmit; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct FName> LitmitAttributes; // 0x60(0x10)
	enum class ELimitFormulateType FormulateType; // 0x70(0x01)
	bool DeterminerType; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float Default; // 0x74(0x04)
	struct FText Desc01; // 0x78(0x18)
	struct FText Desc02; // 0x90(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponObjectDelegates
// Size: 0x18 (Inherited: 0x00)
struct FWeaponObjectDelegates {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSightDataRecord
// Size: 0x38 (Inherited: 0x00)
struct FWeaponSightDataRecord {
public:

	uint64_t CurBipodID; // 0x00(0x08)
	bool bEnableBipod; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	uint64_t CurLaserID; // 0x10(0x08)
	bool bEnableLaser; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	uint64_t CurFlashLightID; // 0x20(0x08)
	bool bEnableFlashLight; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t ScopeCount; // 0x2c(0x04)
	uint64_t CurScopeID; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FireAreaParam
// Size: 0x28 (Inherited: 0x00)
struct FFireAreaParam {
public:

	float FireLifeTime; // 0x00(0x04)
	float FireRadius; // 0x04(0x04)
	float FireHeight; // 0x08(0x04)
	uint32_t FireBuffId; // 0x0c(0x04)
	enum class ECharacterPart BuffPart; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float RemoveBuffDelay; // 0x14(0x04)
	struct FName FxResourceId; // 0x18(0x08)
	float FxRadius; // 0x20(0x04)
	float CharacterHeight; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponBulletEffectView
// Size: 0x50 (Inherited: 0x00)
struct FWeaponBulletEffectView {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* OwnerActor; // 0x08(0x08)
	struct USceneComponent* AttachComp; // 0x10(0x08)
	char pad_18[0x18]; // 0x18(0x18)
	struct UFXResourceContainerComponent* BulletPSC; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct UFXResourceContainerComponent* TrailPSC; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimFilter
// Size: 0x10 (Inherited: 0x00)
struct FWeaponAnimFilter {
public:

	enum class EWeaponAnimDataTableType TableType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName AnimKey; // 0x04(0x08)
	bool bMatchAllAnimkey; // 0x0c(0x01)
	bool bTPP; // 0x0d(0x01)
	bool bMobile; // 0x0e(0x01)
	bool bMinPak; // 0x0f(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AntiCheatConfig_BulletSpawn
// Size: 0xb0 (Inherited: 0x00)
struct FAntiCheatConfig_BulletSpawn {
public:

	float BulletDistToCharTolerant; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<enum class EWeaponItemType, float> BulletDistToCharTolerantMap; // 0x08(0x50)
	float CharDistTolerant; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TMap<enum class EWeaponItemType, float> CharDistTolerantMap; // 0x60(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponItemTypeDifferenceConfig
// Size: 0x08 (Inherited: 0x00)
struct FWeaponItemTypeDifferenceConfig {
public:

	enum class EWeaponItemType WeaponItemTypeA; // 0x00(0x01)
	enum class EWeaponItemType WeaponItemTypeB; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float DiffFactor; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponMeshAnimOption
// Size: 0x28 (Inherited: 0x00)
struct FWeaponMeshAnimOption {
public:

	/*struct TSoftClassPtr<UObject>*/char CommonMoularWeaponAnimBP[0x28]; // 0x00(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponMaterialVariant
// Size: 0xa0 (Inherited: 0x00)
struct FWeaponMaterialVariant {
public:

	struct TMap<struct FName, bool> MaterialVariants; // 0x00(0x50)
	/*struct TMap<enum class EScopeLenMatState, struct TSoftObjectPtr<UMaterialInterface>>*/char Materials[0x50]; // 0x50(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.BulletDsMakeDamageConfig
// Size: 0x10 (Inherited: 0x00)
struct FBulletDsMakeDamageConfig {
public:

	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinPing; // 0x04(0x04)
	float MaxPing; // 0x08(0x04)
	bool bOverrideUI; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponMeshOption
// Size: 0xb0 (Inherited: 0x00)
struct FWeaponMeshOption {
public:

	struct TArray<enum class EWeaponItemType> Weapon1PUse3PWeaponFilter; // 0x00(0x10)
	struct TArray<enum class EAdapterItemType> Weapon1PUse3PMeshFilter; // 0x10(0x10)
	struct TArray<uint64_t> Weapon1PUse3PMeshFilter_ItemId; // 0x20(0x10)
	struct TArray<enum class EWeaponItemType> WeaponUIUse1PWeaponFilter; // 0x30(0x10)
	struct TArray<enum class EAdapterItemType> WeaponUIUse1PMeshFilter; // 0x40(0x10)
	struct TArray<uint64_t> WeaponUIUse1PMeshFilter_ItemId; // 0x50(0x10)
	/*struct TMap<struct FName, struct TSoftObjectPtr<UMaterialInterface>>*/char CommonWeapon3PMergedMaterialsMap[0x50]; // 0x60(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataExtraAttackerValue
// Size: 0x10 (Inherited: 0x00)
struct FWeaponDataExtraAttackerValue {
public:

	enum class EWeaponAttackTriggerMode TriggerMode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	int64_t AttackerValue; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MagazineBoneLocalTranslations
// Size: 0x78 (Inherited: 0x10)
struct FMagazineBoneLocalTranslations : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	struct TArray<struct FWeaponMeshLocalTranslation> LocalTranslations; // 0x18(0x10)
	struct TMap<struct FName, struct FName> BoneParentMap; // 0x28(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponMeshLocalTranslation
// Size: 0x30 (Inherited: 0x00)
struct FWeaponMeshLocalTranslation {
public:

	struct FVector BulletLocalTranslation1; // 0x00(0x0c)
	struct FVector BulletLocalTranslation2; // 0x0c(0x0c)
	struct FVector BulletLocalTranslation3; // 0x18(0x0c)
	struct FVector LeafSpringRelativeTranslation; // 0x24(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponModelModifyConfig
// Size: 0x48 (Inherited: 0x10)
struct FWeaponModelModifyConfig : public FDescRowBase {
public:

	uint16_t ModelModifierId; // 0x10(0x02)
	bool bRecHasBullet; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FSoftObjectPath BulletMesh; // 0x18(0x18)
	struct FSoftObjectPath LeafSpringMesh; // 0x30(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.StingerMissileRow
// Size: 0xa0 (Inherited: 0x10)
struct FStingerMissileRow : public FDescRowBase {
public:

	uint64_t RecID; // 0x10(0x08)
	int32_t LockType; // 0x18(0x04)
	bool IsZoomLock; // 0x1c(0x01)
	bool IsIgnoreLowHeightState; // 0x1d(0x01)
	bool bLaunchRequireLock; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	float MaxLockDistance; // 0x20(0x04)
	float MaxDetectDistance; // 0x24(0x04)
	struct FName SpecialHud; // 0x28(0x08)
	bool bShowAmmoTips; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float LockValueIncreaseSpeed; // 0x34(0x04)
	float LockValueDecreaseSpeed; // 0x38(0x04)
	float RateForwardDistance; // 0x3c(0x04)
	float RateCrossDistance; // 0x40(0x04)
	float PreLockTime; // 0x44(0x04)
	float LockingAreaRatio; // 0x48(0x04)
	float LockingAreaRatioFPP; // 0x4c(0x04)
	bool ApplyLockingAreaRatioFPP; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float BulletDetectAngle; // 0x54(0x04)
	float BulletDetectTimeout; // 0x58(0x04)
	float LifeSpanOnLoseTarget; // 0x5c(0x04)
	float MaxAngularAccDuration; // 0x60(0x04)
	bool bIsStingerMissile; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float EngineDelayTime; // 0x68(0x04)
	float EngineAcc; // 0x6c(0x04)
	float AngularAcc; // 0x70(0x04)
	float MaxSpeed; // 0x74(0x04)
	uint64_t EngineFXId; // 0x78(0x08)
	bool SwithchOutWhenFire; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float DeviateAngularSpeed; // 0x84(0x04)
	float DeviateMinDistance; // 0x88(0x04)
	float DeviateMaxDistance; // 0x8c(0x04)
	float DeviateSideAngle; // 0x90(0x04)
	float LaserPointerReducePercent; // 0x94(0x04)
	float LaserPointerAddRange; // 0x98(0x04)
	bool OnlyLockEnermy; // 0x9c(0x01)
	bool EndZoomClearLock; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleLockParams
// Size: 0x0c (Inherited: 0x00)
struct FVehicleLockParams {
public:

	float AddLockTime; // 0x00(0x04)
	float AddMaxLockDistance; // 0x04(0x04)
	float AddMaxDetectDistance; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PoorFunctionRow
// Size: 0x30 (Inherited: 0x10)
struct FPoorFunctionRow : public FDescRowBase {
public:

	uint64_t PoorFunctionId; // 0x10(0x08)
	bool bEnableModified; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	uint64_t ExtraFunctionId; // 0x20(0x08)
	float DamageRate; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PoorWeaponRow
// Size: 0x38 (Inherited: 0x10)
struct FPoorWeaponRow : public FDescRowBase {
public:

	uint64_t PoorItemId; // 0x10(0x08)
	uint64_t PresetItemId; // 0x18(0x08)
	uint64_t PoorFunctionId; // 0x20(0x08)
	struct FName Name; // 0x28(0x08)
	uint32_t GunPrice; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponGunKickData
// Size: 0x60 (Inherited: 0x10)
struct FWeaponGunKickData : public FDescRowBase {
public:

	uint64_t GunKickId; // 0x10(0x08)
	enum class EWeaponGunKickTriggerType TriggerType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float Duration; // 0x1c(0x04)
	/*struct TSoftObjectPtr<UCurveVector>*/char RotationCurve[0x28]; // 0x20(0x28)
	float RotationAmplitude; // 0x48(0x04)
	float BlendInTime; // 0x4c(0x04)
	enum class EGPWeaponEasingType BlendInEasingType; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float BlendOutTime; // 0x54(0x04)
	enum class EGPWeaponEasingType BlendOutEasingType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimSocketTransformInfo
// Size: 0x58 (Inherited: 0x00)
struct FAnimSocketTransformInfo {
public:

	struct FName AnimName; // 0x00(0x08)
	struct TMap<struct FName, struct FTransform> SocketTransformMap; // 0x08(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AmmoRandomRow
// Size: 0x38 (Inherited: 0x10)
struct FAmmoRandomRow : public FDescRowBase {
public:

	uint64_t PresetItemId; // 0x10(0x08)
	struct TArray<struct FVector2D> NumWeights; // 0x18(0x10)
	struct TArray<uint32_t> LevelWeights; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AmmoDataOverideRow
// Size: 0x38 (Inherited: 0x10)
struct FAmmoDataOverideRow : public FDescRowBase {
public:

	uint64_t AmmoItemId; // 0x10(0x08)
	uint64_t RecID; // 0x18(0x08)
	uint64_t DamageRate; // 0x20(0x08)
	uint64_t ArmorDamageRate; // 0x28(0x08)
	uint64_t LimbsDamageRate; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AmmoDataRow
// Size: 0x100 (Inherited: 0x10)
struct FAmmoDataRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	char Type; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName AmmoName; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct FSoftObjectPath AmmoSprite; // 0x28(0x18)
	struct FSoftObjectPath AmmoSpriteEmpty; // 0x40(0x18)
	int32_t PenetrateLevel; // 0x58(0x04)
	int32_t AttackGroupId; // 0x5c(0x04)
	uint32_t BuffId; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<uint64_t> SpecRecIds; // 0x68(0x10)
	float DamageRate; // 0x78(0x04)
	float ArmorDamageRate; // 0x7c(0x04)
	float LimbsDamageRate; // 0x80(0x04)
	float ThrowBlockingDamageRate; // 0x84(0x04)
	float WoundRate; // 0x88(0x04)
	float DizzyRate; // 0x8c(0x04)
	float ProjectileNum; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	uint64_t WaistShootSpreadId; // 0x98(0x08)
	uint64_t AimShootSpreadId; // 0xa0(0x08)
	uint64_t WeaponBulletId; // 0xa8(0x08)
	struct FSoftObjectPath AmmoShellMeshPath; // 0xb0(0x18)
	struct TArray<uint32_t> AttributeOperateID; // 0xc8(0x10)
	bool bAvailable; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float RescueTimeIncrement; // 0xdc(0x04)
	float RescueDeathTimeIncrement; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FText AmmoCaliber; // 0xe8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataExtraFX
// Size: 0x30 (Inherited: 0x00)
struct FWeaponDataExtraFX {
public:

	struct FName EffectAttachSocket; // 0x00(0x08)
	uint64_t EffectResourceId; // 0x08(0x08)
	struct TArray<enum class EGPWeaponInnerEvent> TriggerWeaponEventTypes; // 0x10(0x10)
	struct TArray<enum class EGPWeaponInnerEvent> StopWeaponEventTypes; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageAttenConfigItem
// Size: 0x10 (Inherited: 0x00)
struct FDamageAttenConfigItem {
public:

	enum class EDamageAttenBlendMode BlendMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Distance; // 0x04(0x04)
	bool bOverrideBaseDamage; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float DamageRate; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponFireSpreadItem
// Size: 0x10 (Inherited: 0x00)
struct FWeaponFireSpreadItem {
public:

	struct FVector2D Spread; // 0x00(0x08)
	struct FVector2D ExtraSpread; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponRecoilShakeElementConfig
// Size: 0x38 (Inherited: 0x00)
struct FWeaponRecoilShakeElementConfig {
public:

	float Probability; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char ShakeBaseCurve[0x28]; // 0x08(0x28)
	struct FVector2D CurveAmplitudeRange; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AssistorConeFilterBonesOfAI
// Size: 0x18 (Inherited: 0x00)
struct FAssistorConeFilterBonesOfAI {
public:

	enum class EAICharacterTag AICharacterTag; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> ConeFilterBones; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataGraphConfigNode
// Size: 0x48 (Inherited: 0x00)
struct FWeaponDataGraphConfigNode {
public:

	/*struct TSoftObjectPtr<UDataTable>*/char DataTable[0x28]; // 0x00(0x28)
	/*struct TArray<struct TSoftObjectPtr<UDataTable>>*/char ExtraDataTables[0x10]; // 0x28(0x10)
	struct TArray<struct FWeaponDataGraphConfigEdge> Edges; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataGraphConfigEdge
// Size: 0x58 (Inherited: 0x00)
struct FWeaponDataGraphConfigEdge {
public:

	/*struct TSoftObjectPtr<UDataTable>*/char DataTableTo[0x28]; // 0x00(0x28)
	/*struct TArray<struct TSoftObjectPtr<UDataTable>>*/char ExtraDataTables[0x10]; // 0x28(0x10)
	struct FName FieldNameFrom; // 0x38(0x08)
	struct TArray<struct FName> SubFieldNamesFrom; // 0x40(0x10)
	struct FName FieldNameTo; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponMainAttributeRow
// Size: 0x48 (Inherited: 0x10)
struct FWeaponMainAttributeRow : public FDescRowBase {
public:

	char MainAttrId; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName MainAttrName; // 0x14(0x08)
	float MinDisplayValue; // 0x1c(0x04)
	float MaxDisplayValue; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FWeaponMainAttributeFunctionItem> FunctionItems; // 0x28(0x10)
	struct TArray<struct FWeaponMainAttributeFunctionCurvingItem> FunctionCurvingItems; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponMainAttributeFunctionCurvingItem
// Size: 0x18 (Inherited: 0x00)
struct FWeaponMainAttributeFunctionCurvingItem {
public:

	struct FName RuleKey; // 0x00(0x08)
	enum class EMainAttributeFunctionCurvingType CurvingType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UCurveFloat* FloatCurve; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponMainAttributeFunctionItem
// Size: 0x10 (Inherited: 0x00)
struct FWeaponMainAttributeFunctionItem {
public:

	struct FName RuleKey; // 0x00(0x08)
	float X; // 0x08(0x04)
	float Y; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataContext
// Size: 0x100 (Inherited: 0x00)
struct FWeaponDataContext {
public:

	uint64_t RecID; // 0x00(0x08)
	uint64_t SkinApperanceId; // 0x08(0x08)
	struct TArray<struct FWeaponPartFunctionIdInfo> FunctionIdInfosList; // 0x10(0x10)
	uint64_t FunctionIdInfosListHash; // 0x20(0x08)
	struct TArray<uint64_t> FxFunctionIdList; // 0x28(0x10)
	struct TArray<struct FWeaponPartInfoSimple> PartList; // 0x38(0x10)
	struct TArray<uint64_t> GameModeFunctionIdList; // 0x48(0x10)
	uint32_t Hash; // 0x58(0x04)
	char pad_5C[0xa4]; // 0x5c(0xa4)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponPartInfoSimple
// Size: 0x28 (Inherited: 0x00)
struct FWeaponPartInfoSimple {
public:

	uint64_t ItemID; // 0x00(0x08)
	uint64_t FunctionId; // 0x08(0x08)
	struct TArray<uint64_t> FunctionIds; // 0x10(0x10)
	bool bMaxPriorityOfPartsType; // 0x20(0x01)
	bool bMaxPriorityOfPartsTypeWithTacticalEffective; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponPartFunctionIdInfo
// Size: 0x28 (Inherited: 0x00)
struct FWeaponPartFunctionIdInfo {
public:

	uint64_t FunctionId; // 0x00(0x08)
	uint64_t ItemID; // 0x08(0x08)
	struct TArray<struct FWeaponPartTuneInfo> TuneInfos; // 0x10(0x10)
	bool TacticalEffective; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponPartTuneInfo
// Size: 0x10 (Inherited: 0x00)
struct FWeaponPartTuneInfo {
public:

	uint64_t TuneId; // 0x00(0x08)
	float TuneValue; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataModifierRuleFast
// Size: 0x18 (Inherited: 0x00)
struct FWeaponDataModifierRuleFast {
public:

	struct TArray<struct FName> NameArray; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.LimitValInfo
// Size: 0x14 (Inherited: 0x00)
struct FLimitValInfo {
public:

	struct FName AttrDetailId; // 0x00(0x08)
	bool Enable; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float LimitVal; // 0x0c(0x04)
	float CurVal; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataModifierRule
// Size: 0x14 (Inherited: 0x00)
struct FWeaponDataModifierRule {
public:

	char pad_0[0x14]; // 0x00(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FireAntiCheatInfo
// Size: 0x08 (Inherited: 0x00)
struct FFireAntiCheatInfo {
public:

	uint32_t RecoilAntiCheatCode; // 0x00(0x04)
	uint32_t SpreadAntiCheatCode; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SceneWeaponConfigRow
// Size: 0x78 (Inherited: 0x08)
struct FSceneWeaponConfigRow : public FTableRowBase {
public:

	enum class ESceneWeaponType WeaponType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	/*struct TSoftObjectPtr<UObject>*/char HealthIconPath[0x28]; // 0x10(0x28)
	/*struct TSoftObjectPtr<UObject>*/char ImpairedIconPath[0x28]; // 0x38(0x28)
	struct FText WeaponName; // 0x60(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponOffsetSet
// Size: 0x50 (Inherited: 0x00)
struct FWeaponOffsetSet {
public:

	/*struct TSet<enum class EWeaponOffsetType>*/char OffsetTypes[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponInventoryInfo
// Size: 0x20 (Inherited: 0x00)
struct FWeaponInventoryInfo {
public:

	struct TArray<uint64_t> PartGidArr; // 0x00(0x10)
	struct TArray<int32_t> PartUseCountArr; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponLogicConfig
// Size: 0x04 (Inherited: 0x00)
struct FWeaponLogicConfig {
public:

	float ActorDestroyDelay; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponViewConfig
// Size: 0x08 (Inherited: 0x00)
struct FWeaponViewConfig {
public:

	struct UClass* FireSocketClass; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAttributeSetConfig
// Size: 0x120 (Inherited: 0x00)
struct FWeaponAttributeSetConfig {
public:

	char pad_0[0x50]; // 0x00(0x50)
	float Damage; // 0x50(0x04)
	float PenetrateValue; // 0x54(0x04)
	float CriticalHitRate; // 0x58(0x04)
	float CriticalHitDamageRate; // 0x5c(0x04)
	float HeadDamageRate; // 0x60(0x04)
	float ThoraxDamageRate; // 0x64(0x04)
	float ThoraxUpperDamageRate; // 0x68(0x04)
	float LegDamageRate; // 0x6c(0x04)
	float LegUpperDamageRate; // 0x70(0x04)
	float ArmDamageRate; // 0x74(0x04)
	float ArmUpperDamageRate; // 0x78(0x04)
	float VehicleDamage; // 0x7c(0x04)
	float HealthDamage; // 0x80(0x04)
	float ArmorDamage; // 0x84(0x04)
	bool CanAddAmmo; // 0x88(0x01)
	char WeaponAmmoCost; // 0x89(0x01)
	enum class EWeaponConsumeAmmoType ConsumeAmmoType; // 0x8a(0x01)
	char pad_8B[0x1]; // 0x8b(0x01)
	uint16_t MaxCarriedAmmoCount; // 0x8c(0x02)
	char WeaponAmmoType; // 0x8e(0x01)
	bool CanEquipPerk; // 0x8f(0x01)
	float PerkCost; // 0x90(0x04)
	enum class EGPWeaponChangeClipMode WeaponChangeClipMode; // 0x94(0x01)
	char pad_95[0x1]; // 0x95(0x01)
	uint16_t WeaponChangeClipMaxReloadedOnce; // 0x96(0x02)
	float WeaponChangeClipTime; // 0x98(0x04)
	float WeaponChangeClipTimeWhenEmpty; // 0x9c(0x04)
	float WeaponChangeClipOneByOneTime; // 0xa0(0x04)
	float ClipAmmoCount; // 0xa4(0x04)
	float WeaponChangeClipTimeRate; // 0xa8(0x04)
	float FireInterval; // 0xac(0x04)
	float FastFireInterval; // 0xb0(0x04)
	float FireCD; // 0xb4(0x04)
	float FireDelayTime; // 0xb8(0x04)
	float BurstFireCD; // 0xbc(0x04)
	float BurstInterval; // 0xc0(0x04)
	float AutoFireSingleInterval; // 0xc4(0x04)
	float AutoFireBurstInterval; // 0xc8(0x04)
	float BurstFireInterval; // 0xcc(0x04)
	float ChamberTime; // 0xd0(0x04)
	enum class EGPWeaponFiringMode FiringMode; // 0xd4(0x01)
	char BurstFireBulletCount; // 0xd5(0x01)
	char pad_D6[0x2]; // 0xd6(0x02)
	float PreFireTime; // 0xd8(0x04)
	float PreFireKeepTime; // 0xdc(0x04)
	float PreFireCancelTime; // 0xe0(0x04)
	float PullBoltTimeRate; // 0xe4(0x04)
	float ProjectileInitialVelocityRate; // 0xe8(0x04)
	float PostFireTime; // 0xec(0x04)
	float EquipTime; // 0xf0(0x04)
	float UnEquipTime; // 0xf4(0x04)
	float FastEquipTime; // 0xf8(0x04)
	float FastUnEquipTime; // 0xfc(0x04)
	float FirstEquipTime; // 0x100(0x04)
	bool HadFirstEquipAnim; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float EquipTimeRate; // 0x108(0x04)
	float UnEquipTimeRate; // 0x10c(0x04)
	float WeaponMovingScale; // 0x110(0x04)
	float WeaponFiringMovingScale; // 0x114(0x04)
	enum class EWeaponFireCrosshairStyle CrosshairStyle; // 0x118(0x01)
	bool bCrosshairUseSpreadArea; // 0x119(0x01)
	char pad_11A[0x2]; // 0x11a(0x02)
	float CrosshairScale; // 0x11c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAssistedAimingConfigSet
// Size: 0x50 (Inherited: 0x00)
struct FWeaponAssistedAimingConfigSet {
public:

	char pad_0[0x50]; // 0x00(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.BulletDamageDataRecord
// Size: 0x78 (Inherited: 0x00)
struct FBulletDamageDataRecord {
public:

	char pad_0[0x78]; // 0x00(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FixedWeaponFireDataRecord
// Size: 0x10 (Inherited: 0x00)
struct FFixedWeaponFireDataRecord {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponFireDataRecord
// Size: 0x68 (Inherited: 0x00)
struct FWeaponFireDataRecord {
public:

	char pad_0[0x68]; // 0x00(0x68)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponInstantHitBulletInfo
// Size: 0xe0 (Inherited: 0xd0)
struct FWeaponInstantHitBulletInfo : public FWeaponFireBulletInfo {
public:

	char pad_D0[0x10]; // 0xd0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponThrowableDamageInfo
// Size: 0x18 (Inherited: 0x00)
struct FWeaponThrowableDamageInfo {
public:

	enum class ECharacterPart DamagePart; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName BoneName; // 0x04(0x08)
	struct FName DamageBoneName; // 0x0c(0x08)
	float DamageShare; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponRecoilShakeManualCurveRuntime
// Size: 0x48 (Inherited: 0x00)
struct FWeaponRecoilShakeManualCurveRuntime {
public:

	char pad_0[0x38]; // 0x00(0x38)
	struct UCurveFloat* CurShakeManualCurvePitch; // 0x38(0x08)
	struct UCurveFloat* CurShakeManualCurveYaw; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponRecoilShakeRuntime
// Size: 0xa0 (Inherited: 0x00)
struct FWeaponRecoilShakeRuntime {
public:

	char pad_0[0x98]; // 0x00(0x98)
	struct UCurveFloat* FireCountScaleCurve; // 0x98(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponRecoilRebound
// Size: 0x18 (Inherited: 0x00)
struct FWeaponRecoilRebound {
public:

	float RecoilReboundJudgementTime; // 0x00(0x04)
	float VerticalRecoilReboundScale; // 0x04(0x04)
	float HorizontalRecoilReboundScale; // 0x08(0x04)
	float RecoilReboundEaseTime; // 0x0c(0x04)
	enum class EGPWeaponEasingType RecoilReboundEaseType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float RecoilReboundAcc; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CameraShakeConfigPUBGM
// Size: 0x30 (Inherited: 0x00)
struct FCameraShakeConfigPUBGM {
public:

	float CameraRecoilExpandTime; // 0x00(0x04)
	float CameraRecoilRecoverTime; // 0x04(0x04)
	float CameraRecoilBase; // 0x08(0x04)
	float CameraRecoilModifier; // 0x0c(0x04)
	float CameraRecoilMax; // 0x10(0x04)
	float CameraRecoilZoomInitSpeed; // 0x14(0x04)
	float CameraRecoilZoomDampingRate; // 0x18(0x04)
	float CameraRecoilZoomFrictionRate; // 0x1c(0x04)
	float CameraStretchMin; // 0x20(0x04)
	float CameraStretchMax; // 0x24(0x04)
	float CameraStretchMin_FPP; // 0x28(0x04)
	float CameraStretchMax_FPP; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RecoilConfigPUBGM
// Size: 0x38 (Inherited: 0x00)
struct FRecoilConfigPUBGM {
public:

	float RecoilTime; // 0x00(0x04)
	float RecoilUpMin; // 0x04(0x04)
	float RecoilUpModifier; // 0x08(0x04)
	float RecoilUpMax; // 0x0c(0x04)
	float RecoilUpTotalMax; // 0x10(0x04)
	float RecoilSideMin; // 0x14(0x04)
	float RecoilSideModifier; // 0x18(0x04)
	float RecoilSideMax; // 0x1c(0x04)
	float RecoilSideRange; // 0x20(0x04)
	float RecoilScaleBase_Vert; // 0x24(0x04)
	float RecoilScaleBase_Hori; // 0x28(0x04)
	float RecoilScaleBase_ExtraHitRate; // 0x2c(0x04)
	bool bNeedRecoverAllRecoil; // 0x30(0x01)
	bool bSupportPercentageDrop; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float RecoilDropPercent; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponCrosshairSpreadConfig
// Size: 0x34 (Inherited: 0x00)
struct FWeaponCrosshairSpreadConfig {
public:

	bool bUseSpreadArea; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D CrossHairSize; // 0x04(0x08)
	float OverallScale; // 0x0c(0x04)
	float CrouchScale; // 0x10(0x04)
	float ProneScale; // 0x14(0x04)
	float WalkOrRunScale; // 0x18(0x04)
	float SprintScale; // 0x1c(0x04)
	float JumpScale; // 0x20(0x04)
	float ImpendingDeathScale; // 0x24(0x04)
	float FirstShotScale; // 0x28(0x04)
	float ContinueShotScale; // 0x2c(0x04)
	float MaxShotScale; // 0x30(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSpreadConfig
// Size: 0xc0 (Inherited: 0x00)
struct FWeaponSpreadConfig {
public:

	enum class EWeaponSpreadAreaType AreaType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D BaseSpread; // 0x04(0x08)
	struct FVector2D SpreadMax; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FWeaponFireSpreadItem> FireSpreadItems; // 0x18(0x10)
	struct FVector2D FireSpreadRecoverSpeed; // 0x28(0x08)
	/*struct TSoftObjectPtr<UCurveFloat>*/char FireSpreadExtraRecoverCurve[0x28]; // 0x30(0x28)
	float FireSpreadFactor; // 0x58(0x04)
	float SpreadScaleByMoving; // 0x5c(0x04)
	float SpreadScaleByMovingRecoverSpeed; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TMap<enum class EChracterPoseType, float> SpreadScaleByPose; // 0x68(0x50)
	float SpreadScaleByPoseRecoverSpeed; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SpreadConfigPUBGM
// Size: 0x34 (Inherited: 0x00)
struct FSpreadConfigPUBGM {
public:

	float SpreadMin; // 0x00(0x04)
	float SpreadMax; // 0x04(0x04)
	float SpreadModifierBase; // 0x08(0x04)
	float SpreadModifierInc; // 0x0c(0x04)
	float SpreadModifierMax; // 0x10(0x04)
	float SpreadIncreaseSpeed; // 0x14(0x04)
	float SpreadIncreaseSpeed_Firing; // 0x18(0x04)
	float SpreadDecreaseSpeed; // 0x1c(0x04)
	float SpreadDecreaseSpeed_Firing; // 0x20(0x04)
	float SpreadDelayRecoverTime; // 0x24(0x04)
	float NormalShotSpreadRatio; // 0x28(0x04)
	float ZoomingShotSpreadRatio; // 0x2c(0x04)
	float ZoomingWalkShotSpreadRatio; // 0x30(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AimOutlineOverlapData
// Size: 0x10 (Inherited: 0x00)
struct FAimOutlineOverlapData {
public:

	struct AActor* Actor; // 0x00(0x08)
	float Distance; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MeshChildrenInfo
// Size: 0x70 (Inherited: 0x00)
struct FMeshChildrenInfo {
public:

	char pad_0[0x10]; // 0x00(0x10)
	struct TArray<struct FPrimitiveProxy> Children; // 0x10(0x10)
	char pad_20[0x50]; // 0x20(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PrimitiveProxy
// Size: 0x48 (Inherited: 0x00)
struct FPrimitiveProxy {
public:

	char pad_0[0x28]; // 0x00(0x28)
	struct UPrimitiveComponent* PrimitiveComponent; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
	struct UObject* CurPrimitive; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponCrosshairConfig
// Size: 0xa0 (Inherited: 0x00)
struct FWeaponCrosshairConfig {
public:

	char pad_0[0x8]; // 0x00(0x08)
	bool bShowCrosshair; // 0x08(0x01)
	bool bShowCrossOnZooming; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char CrossHairAssetPath[0x28]; // 0x10(0x28)
	/*struct TSoftClassPtr<UObject>*/char CrossHairBPPath[0x28]; // 0x38(0x28)
	/*struct TSoftClassPtr<UObject>*/char CrossHairBPPath_HD[0x28]; // 0x60(0x28)
	struct FVector2D CrossHairSize; // 0x88(0x08)
	enum class ECrosshairScaleMode ScaleMode; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	float ScaleOverride; // 0x94(0x04)
	bool bEnableTranslation; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MuzzleLightAttachInfo
// Size: 0x24 (Inherited: 0x00)
struct FMuzzleLightAttachInfo {
public:

	struct FVector LightOffset_Fpp; // 0x00(0x0c)
	struct FVector LightOffset_OwnerTpp; // 0x0c(0x0c)
	struct FVector LightOffset_Tpp; // 0x18(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponEffectData
// Size: 0x30 (Inherited: 0x00)
struct FWeaponEffectData {
public:

	struct TArray<struct FWeaponEffectConfig> EffectConfigList; // 0x00(0x10)
	char pad_10[0xc]; // 0x10(0x0c)
	bool bUseBulletTracer; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float BulletTraceTimePer5000; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ShakeRuntimeItem
// Size: 0x78 (Inherited: 0x00)
struct FShakeRuntimeItem {
public:

	bool IsEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ForwardBackDuration; // 0x04(0x04)
	float frequency; // 0x08(0x04)
	float ShiftMin; // 0x0c(0x04)
	float ShiftMax; // 0x10(0x04)
	float AmplitudeMin; // 0x14(0x04)
	float AmplitudeMax; // 0x18(0x04)
	float InFireDamping; // 0x1c(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char FireCountScaleCurve[0x28]; // 0x20(0x28)
	float AfterFireCycle; // 0x48(0x04)
	float AfterFireDamping; // 0x4c(0x04)
	char pad_50[0x20]; // 0x50(0x20)
	struct UCurveFloat* Curve; // 0x70(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponFireShakerRuntimeRecoilSimulator
// Size: 0x78 (Inherited: 0x00)
struct FWeaponFireShakerRuntimeRecoilSimulator {
public:

	char pad_0[0x78]; // 0x00(0x78)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CompositedZoomInParam
// Size: 0x10 (Inherited: 0x00)
struct FCompositedZoomInParam {
public:

	struct TArray<struct FZoomInParamBase> Params; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ZoomInParamBase
// Size: 0x80 (Inherited: 0x00)
struct FZoomInParamBase {
public:

	struct FTransform WeaponOffset; // 0x00(0x30)
	float CameraOffset; // 0x30(0x04)
	float CameraZoomRate; // 0x34(0x04)
	float WeaponFOV; // 0x38(0x04)
	char pad_3C[0x44]; // 0x3c(0x44)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ZoomCurves
// Size: 0x18 (Inherited: 0x00)
struct FZoomCurves {
public:

	struct UCurveFloat* ZoomAnimCurve; // 0x00(0x08)
	struct UCurveFloat* WeaponFovCurve; // 0x08(0x08)
	struct UCurveFloat* CameraFovCurve; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ThreatMarkerDataArray
// Size: 0x10 (Inherited: 0x00)
struct FThreatMarkerDataArray {
public:

	struct TArray<struct FThreatMarkerData> DataArray; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponThrowableDataProjectileArray
// Size: 0x10 (Inherited: 0x00)
struct FWeaponThrowableDataProjectileArray {
public:

	struct TArray<struct FWeaponThrowableDataProjectile> Datas; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponThrowableDataDamageArray
// Size: 0x10 (Inherited: 0x00)
struct FWeaponThrowableDataDamageArray {
public:

	struct TArray<struct FWeaponThrowableDataDamage> Datas; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ProjMovementHomingInfo
// Size: 0x08 (Inherited: 0x00)
struct FProjMovementHomingInfo {
public:

	struct USceneComponent* HomingTarget; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponHudOptions
// Size: 0x01 (Inherited: 0x00)
struct FWeaponHudOptions {
public:

	bool bPlayAmmoAddAnim; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PreviewLineDataRow
// Size: 0x70 (Inherited: 0x10)
struct FPreviewLineDataRow : public FDescRowBase {
public:

	uint64_t WeaponID; // 0x10(0x08)
	uint64_t SkinId; // 0x18(0x08)
	/*struct TSoftClassPtr<UObject>*/char PreviewLine[0x28]; // 0x20(0x28)
	/*struct TSoftClassPtr<UObject>*/char HitPoint[0x28]; // 0x48(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.QueuedAddWeaponContext
// Size: 0x58 (Inherited: 0x00)
struct FQueuedAddWeaponContext {
public:

	char pad_0[0x10]; // 0x00(0x10)
	struct UGPModularWeaponDesc* WeaponDesc; // 0x10(0x08)
	char pad_18[0x40]; // 0x18(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SwitchWeaponContext
// Size: 0x60 (Inherited: 0x00)
struct FSwitchWeaponContext {
public:

	/*struct TArray<struct TScriptInterface<IWeaponInterface>>*/char AllWeapons[0x10]; // 0x00(0x10)
	/*struct TScriptInterface<IWeaponInterface>*/char LastUsedMainWeapon[0x10]; // 0x10(0x10)
	/*struct TScriptInterface<IWeaponInterface>*/char LastUsedWeapon[0x10]; // 0x20(0x10)
	struct AWeaponBase* CurrentActiveWeapon; // 0x30(0x08)
	struct AWeaponBase* LastActiveWeapon; // 0x38(0x08)
	struct AWeaponBase* PendingActiveWeapon; // 0x40(0x08)
	char pad_48[0x18]; // 0x48(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponManagerConfig
// Size: 0x18 (Inherited: 0x00)
struct FWeaponManagerConfig {
public:

	struct UClass* EmptyHandWeaponClass; // 0x00(0x08)
	uint64_t EmptyHandOverrideID; // 0x08(0x08)
	bool bUseEmptyHandOverride; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponMeleeComboDataRow
// Size: 0x28 (Inherited: 0x10)
struct FWeaponMeleeComboDataRow : public FDescRowBase {
public:

	uint64_t ComboId; // 0x10(0x08)
	struct TArray<struct FGPWeaponMeleeComboData> ComboDatas; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponObjectPoolProxy
// Size: 0xf0 (Inherited: 0x00)
struct FWeaponObjectPoolProxy {
public:

	struct TMap<uint32_t, struct FWeaponObjectPoolProxyData> ObjectPoolProxyMap; // 0x00(0x50)
	char pad_50[0xa0]; // 0x50(0xa0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponOBAmmoNum
// Size: 0x0c (Inherited: 0x00)
struct FWeaponOBAmmoNum {
public:

	struct FWeaponIdentity WeaponIdentity; // 0x00(0x04)
	int32_t OBWeaponAmmoNum; // 0x04(0x04)
	int32_t OBWeaponCarriedAmmoNum; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAdapterDynamicAttributesData
// Size: 0x70 (Inherited: 0x00)
struct FWeaponAdapterDynamicAttributesData {
public:

	struct TArray<struct FWeaponIdentity> WeaponIdentities; // 0x00(0x10)
	struct TArray<struct FModularWeaponDynamicAttributesBase> DynamicAttributes; // 0x10(0x10)
	/*struct TSet<struct FWeaponIdentity>*/char RemovedIdentities[0x50]; // 0x20(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponReplicateExtraDataArray
// Size: 0x118 (Inherited: 0x108)
struct FWeaponReplicateExtraDataArray : public FFastArraySerializer {
public:

	struct TArray<struct FWeaponReplicateExtraData> Items; // 0x108(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSkinAppearance_PartConfig
// Size: 0xf0 (Inherited: 0x00)
struct FWeaponSkinAppearance_PartConfig {
public:

	bool bCompatibleSocketWhiteList; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> CompatibleSocketNames; // 0x08(0x10)
	bool bForceLockApperance; // 0x18(0x01)
	bool bIncludeInOtherModel; // 0x19(0x01)
	enum class EAdapterItemType IncludeParentType; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	uint64_t BaseItemId; // 0x20(0x08)
	enum class EAdapterItemType AttachParent; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName AttachSocketName; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	struct FSoftObjectPath MeshPath1P; // 0x38(0x18)
	struct FSoftObjectPath MeshPath3P; // 0x50(0x18)
	struct FSoftObjectPath MeshPathUI; // 0x68(0x18)
	bool b1PMeshSpecFun; // 0x80(0x01)
	bool bUIMeshSpecFun; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct TArray<struct FWeaponSkinAppearance_ExtraModel> ExtraModels; // 0x88(0x10)
	struct TArray<struct FWeaponSkinAppearance_MaterialOverride> MaterialOverrides; // 0x98(0x10)
	bool b3PUseIndependentMaterial; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FWeaponSkinAppearance_MaterialOverride> MaterialOverridesFor3P; // 0xb0(0x10)
	bool bOverriderAnimFunction; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	uint64_t AnimFunctionId; // 0xc8(0x08)
	bool bOverriderAudioFunction; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	uint64_t AudioFunctionId; // 0xd8(0x08)
	bool bOverriderFxFuntion; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	uint64_t FxFuntionId; // 0xe8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSkinAppearance_MaterialOverride
// Size: 0x38 (Inherited: 0x00)
struct FWeaponSkinAppearance_MaterialOverride {
public:

	int32_t SectionIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FSoftObjectPath MaterialPath; // 0x08(0x18)
	struct FSoftObjectPath LowQualityMaterialPath; // 0x20(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSkinAppearance_ExtraModel
// Size: 0x18 (Inherited: 0x00)
struct FWeaponSkinAppearance_ExtraModel {
public:

	uint64_t ItemID; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	bool b3PExclude; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MysticalSkinWear
// Size: 0x48 (Inherited: 0x10)
struct FMysticalSkinWear : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	uint64_t Class; // 0x18(0x08)
	struct FText WearName; // 0x20(0x18)
	uint64_t WearMin; // 0x38(0x08)
	uint64_t WearMax; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MysticalSkinColorMaterial
// Size: 0x38 (Inherited: 0x10)
struct FMysticalSkinColorMaterial : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	uint64_t SkinId; // 0x18(0x08)
	uint64_t AppearanceId; // 0x20(0x08)
	uint64_t IsDefault; // 0x28(0x08)
	uint64_t Rarity; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MysticalSkinInterval
// Size: 0x28 (Inherited: 0x10)
struct FMysticalSkinInterval : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	uint64_t SkinId; // 0x18(0x08)
	float DefaultWear; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MysticalSkinBasicParaDataRow
// Size: 0x30 (Inherited: 0x10)
struct FMysticalSkinBasicParaDataRow : public FDescRowBase {
public:

	uint32_t SkinNameMaxLen; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	uint64_t SkinNameCurrency; // 0x18(0x08)
	uint64_t SkinNamePrice; // 0x20(0x08)
	uint32_t WearCalculator; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MysticalSkinParamWrap
// Size: 0x18 (Inherited: 0x00)
struct FMysticalSkinParamWrap {
public:

	uint64_t ItemID; // 0x00(0x08)
	struct TArray<struct FMysticalSkinParamForSpecItem> Params; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MysticalSkinParamForSpecItem
// Size: 0x18 (Inherited: 0x00)
struct FMysticalSkinParamForSpecItem {
public:

	struct TArray<struct FName> ParamNames; // 0x00(0x10)
	float ConstantValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MysticalSkinParam
// Size: 0x20 (Inherited: 0x00)
struct FMysticalSkinParam {
public:

	struct TArray<struct FName> ParamNames; // 0x00(0x10)
	enum class EMysticalSkinParamValueType ValueType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MinValue; // 0x14(0x04)
	float MaxValue; // 0x18(0x04)
	float ConstantValue; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponMaterialReplaceParam
// Size: 0x20 (Inherited: 0x00)
struct FWeaponMaterialReplaceParam {
public:

	enum class EAdapterItemType ItemType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct USkeletalMesh* SkeletalMesh; // 0x08(0x08)
	struct UMaterialInterface* BaseMaterial; // 0x10(0x08)
	struct UMaterialInterface* ReplcaceMaterial; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SrcReplaceWeaponMaterial
// Size: 0x18 (Inherited: 0x00)
struct FSrcReplaceWeaponMaterial {
public:

	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UMaterialInterface* OriMaterial; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkinRandomGenerator
// Size: 0x0c (Inherited: 0x00)
struct FSkinRandomGenerator {
public:

	char pad_0[0xc]; // 0x00(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ReplaceMaterialParam
// Size: 0x18 (Inherited: 0x00)
struct FReplaceMaterialParam {
public:

	struct FName ReplaceMaterialSrcName; // 0x00(0x08)
	struct UMaterialInterface* ReplaceMaterial; // 0x08(0x08)
	bool bCopyParameter; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TransformSpring
// Size: 0x90 (Inherited: 0x00)
struct FTransformSpring {
public:

	char pad_0[0x90]; // 0x00(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSpring
// Size: 0x10 (Inherited: 0x00)
struct FWeaponSpring {
public:

	float A; // 0x00(0x04)
	float B; // 0x04(0x04)
	float C; // 0x08(0x04)
	float D; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimData
// Size: 0x10 (Inherited: 0x00)
struct FAnimData {
public:

	struct TArray<struct UObject*> AnimDatas; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AimingResult
// Size: 0xb0 (Inherited: 0x00)
struct FAimingResult {
public:

	char pad_0[0x90]; // 0x00(0x90)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x90(0x10)
	struct TArray<struct UPrimitiveComponent*> CompsToIgnore; // 0xa0(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponThrowableSkinApperance
// Size: 0x58 (Inherited: 0x10)
struct FWeaponThrowableSkinApperance : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	uint64_t SkinApperanceId; // 0x18(0x08)
	uint64_t FXId; // 0x20(0x08)
	uint64_t PreFXId; // 0x28(0x08)
	float PreFXTIime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	uint64_t AnimId; // 0x38(0x08)
	int32_t HitFeedbackAudioId; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	uint64_t SoundFXId; // 0x48(0x08)
	struct FName WeaponSoundFXId; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponWorldSetting
// Size: 0x18 (Inherited: 0x00)
struct FWeaponWorldSetting {
public:

	bool bEnableWorldSetting; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t DecalMaxCount; // 0x04(0x04)
	float DecalDuration; // 0x08(0x04)
	int32_t EachEffectMaxNumber; // 0x0c(0x04)
	int32_t BulletTracerMaxNumberForEachWeapon; // 0x10(0x04)
	enum class EWeaponConsumeAmmoType ConsumeAmmoType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPModularWeaponAttachInfo
// Size: 0x20 (Inherited: 0x00)
struct FGPModularWeaponAttachInfo {
public:

	uint32_t SocketId; // 0x00(0x04)
	struct FName SocketName; // 0x04(0x08)
	int32_t PartNodeIndex; // 0x0c(0x04)
	char pad_10[0x10]; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.C2SEnemyScreenInfo
// Size: 0x18 (Inherited: 0x00)
struct FC2SEnemyScreenInfo {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MakeBuffDamageParams
// Size: 0x48 (Inherited: 0x00)
struct FMakeBuffDamageParams {
public:

	struct FVector Location; // 0x00(0x0c)
	enum class EDamageType DamageType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	uint32_t BufId; // 0x10(0x04)
	int32_t SkillId; // 0x14(0x04)
	int32_t SkillEntityExcuteCount; // 0x18(0x04)
	float BaseHPDamage; // 0x1c(0x04)
	float BaseArmorDamage; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FGameplayTagContainer TagContainer; // 0x28(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MakeDamageParams
// Size: 0xe8 (Inherited: 0x00)
struct FMakeDamageParams {
public:

	float StartTime; // 0x00(0x04)
	struct FVector PointStartLocation; // 0x04(0x0c)
	struct FVector PointDirection; // 0x10(0x0c)
	struct FVector RadialLocation; // 0x1c(0x0c)
	struct TArray<struct AActor*> IgnoreActors; // 0x28(0x10)
	struct TArray<struct UClass*> IngoreClass; // 0x38(0x10)
	float SpecialDamage; // 0x48(0x04)
	enum class EDamageType DamageType; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32_t AttackLevel; // 0x50(0x04)
	int32_t AttackGroupId; // 0x54(0x04)
	uint32_t BufId; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	uint64_t AmmoId; // 0x60(0x08)
	int32_t SkillId; // 0x68(0x04)
	int32_t SkillEntityID; // 0x6c(0x04)
	float DamageRate; // 0x70(0x04)
	float ArmorDamageRate; // 0x74(0x04)
	float LimbsDamageRate; // 0x78(0x04)
	float ThrowBlockingDamageRate; // 0x7c(0x04)
	float CameraSwayHitScale; // 0x80(0x04)
	float GunSwayHitScale; // 0x84(0x04)
	float WoundRate; // 0x88(0x04)
	float DizzyRate; // 0x8c(0x04)
	uint64_t ShowAttackValueId; // 0x90(0x08)
	uint64_t ShowWeaponId; // 0x98(0x08)
	uint64_t ShowSkillId; // 0xa0(0x08)
	struct FVector DamageVelocity; // 0xa8(0x0c)
	uint32_t VehicleId; // 0xb4(0x04)
	bool bIsInVehicleLeanOut; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	struct TWeakObjectPtr<struct AActor> MineShooter; // 0xbc(0x08)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FGameplayTagContainer TagContainer; // 0xc8(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.BasicData
// Size: 0x18 (Inherited: 0x00)
struct FBasicData {
public:

	char pad_0[0x18]; // 0x00(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SubtitleSequenceGroupTableItem
// Size: 0x28 (Inherited: 0x10)
struct FSubtitleSequenceGroupTableItem : public FDescRowBase {
public:

	struct TArray<struct FSubtitleGroupItem> SubtitleGroups; // 0x10(0x10)
	float LoopIntervalTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TeamScoreInfosContainer
// Size: 0x118 (Inherited: 0x108)
struct FTeamScoreInfosContainer : public FFastArraySerializer {
public:

	struct TArray<struct FTeamScoreInfo> RepDatas_Internal; // 0x108(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSkinInfo
// Size: 0x88 (Inherited: 0x00)
struct FWeaponSkinInfo {
public:

	uint64_t SkinGid; // 0x00(0x08)
	uint64_t SkinId; // 0x08(0x08)
	uint64_t SkinApperanceId; // 0x10(0x08)
	uint64_t OriginAvatarId; // 0x18(0x08)
	uint64_t MysticalId; // 0x20(0x08)
	uint64_t FancyColorID; // 0x28(0x08)
	uint64_t Wear; // 0x30(0x08)
	uint64_t MaterialRandomSeed; // 0x38(0x08)
	struct TArray<struct FWeaponSkinParam> Params; // 0x40(0x10)
	uint64_t UniqueNumber; // 0x50(0x08)
	uint64_t KillCnt; // 0x58(0x08)
	struct FString CustomName; // 0x60(0x10)
	uint64_t SourceType; // 0x70(0x08)
	uint64_t PendantID; // 0x78(0x08)
	bool bLockApperance; // 0x80(0x01)
	bool SkillSkinEnemyVisible; // 0x81(0x01)
	bool SkillSkinTeammateVisible; // 0x82(0x01)
	char pad_83[0x5]; // 0x83(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ModularWeaponDynamicAttributesBase
// Size: 0x28 (Inherited: 0x00)
struct FModularWeaponDynamicAttributesBase {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<uint64_t> PartGids; // 0x08(0x10)
	struct TArray<struct FModularWeaponPartNodeAttr> Attributes; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ModularWeaponPartNodeAttr
// Size: 0x20 (Inherited: 0x00)
struct FModularWeaponPartNodeAttr {
public:

	struct TArray<struct FName> AttrNames; // 0x00(0x10)
	struct TArray<float> AttrValues; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.OverHeatContext
// Size: 0x10 (Inherited: 0x00)
struct FOverHeatContext {
public:

	float TotalHeat; // 0x00(0x04)
	float OverHeatSecondsLeft; // 0x04(0x04)
	float HeatDecreasePerSecond; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AmmoContext
// Size: 0x10 (Inherited: 0x00)
struct FAmmoContext {
public:

	struct TArray<struct FAmmoDataItem> AmmoDataItems; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponPerk
// Size: 0x20 (Inherited: 0x00)
struct FWeaponPerk {
public:

	uint64_t gid; // 0x00(0x08)
	uint64_t ItemID; // 0x08(0x08)
	uint16_t Duability; // 0x10(0x02)
	uint16_t DuabilityMax; // 0x12(0x02)
	char Level; // 0x14(0x01)
	char pad_15[0xb]; // 0x15(0x0b)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityEntityHandle
// Size: 0x0c (Inherited: 0x00)
struct FAbilityEntityHandle {
public:

	int32_t Index; // 0x00(0x04)
	int32_t SerialNumber; // 0x04(0x04)
	int32_t InsntaceID; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AmmoDelta
// Size: 0x08 (Inherited: 0x00)
struct FAmmoDelta {
public:

	int32_t ClipAmmo; // 0x00(0x04)
	int32_t CarriedAmmo; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VirtualParent_BoneGroup
// Size: 0xb0 (Inherited: 0x00)
struct FVirtualParent_BoneGroup {
public:

	char pad_0[0x60]; // 0x00(0x60)
	struct TArray<struct FBoneReference> VirtualChildren; // 0x60(0x10)
	enum class EBoneControlSpace RotationSpace; // 0x70(0x01)
	enum class EBoneControlSpace LocationSpace; // 0x71(0x01)
	char pad_72[0x3e]; // 0x72(0x3e)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AttackLevelParamGroup
// Size: 0x14 (Inherited: 0x00)
struct FAttackLevelParamGroup {
public:

	bool PenetrateTag; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float HelmetDifferenceParam; // 0x04(0x04)
	float ArmorDifferenceParam; // 0x08(0x04)
	float HPDifferenceParam; // 0x0c(0x04)
	float HelmetHPDifferenceParam; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataModifierAttributeInterface
// Size: 0x08 (Inherited: 0x00)
struct FWeaponDataModifierAttributeInterface {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.BossOverrideDamageValue
// Size: 0x08 (Inherited: 0x00)
struct FBossOverrideDamageValue {
public:

	float Damage; // 0x00(0x04)
	bool bRealDamage; // 0x04(0x01)
	bool bAlwaysDamage; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAttributeEffect
// Size: 0x88 (Inherited: 0x00)
struct FGPAttributeEffect {
public:

	char pad_0[0x8]; // 0x00(0x08)
	uint32_t AttributeOperateID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FDFMAttributeModEffect> ModEffects; // 0x10(0x10)
	bool bIsDamage; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float HPDamage; // 0x24(0x04)
	float ArmorDamage; // 0x28(0x04)
	struct TWeakObjectPtr<struct AActor> Instigator; // 0x2c(0x08)
	struct TWeakObjectPtr<struct AActor> Taker; // 0x34(0x08)
	struct TWeakObjectPtr<struct AActor> EffectCauser; // 0x3c(0x08)
	char pad_44[0x14]; // 0x44(0x14)
	uint32_t GameplayTag; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FGameplayTagContainer TagContainer; // 0x60(0x20)
	char pad_80[0x8]; // 0x80(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.LaserItemBase
// Size: 0x18 (Inherited: 0x00)
struct FLaserItemBase {
public:

	char pad_0[0x10]; // 0x00(0x10)
	struct UPrimitiveComponent* AttachParent; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageVaildationCharacterBox
// Size: 0x24 (Inherited: 0x00)
struct FDamageVaildationCharacterBox {
public:

	struct FName PoseName; // 0x00(0x08)
	enum class ECharacterSnatshotBasePose BasePose; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FVector Extend; // 0x0c(0x0c)
	struct FVector Center; // 0x18(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TableForeignKeyConstrain
// Size: 0x50 (Inherited: 0x00)
struct FTableForeignKeyConstrain {
public:

	struct FName Foreign_TableName; // 0x00(0x08)
	struct FName Foreign_ColumnName; // 0x08(0x08)
	/*struct TSoftObjectPtr<UDataTable>*/char Foreign_Table[0x28]; // 0x10(0x28)
	/*struct TArray<struct TSoftObjectPtr<UDataTable>>*/char ExtraTables[0x10]; // 0x38(0x10)
	bool bSkipNone; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSpringDamperConfig
// Size: 0x10 (Inherited: 0x00)
struct FWeaponSpringDamperConfig {
public:

	float UndampedFrequency; // 0x00(0x04)
	float DampingRatio; // 0x04(0x04)
	float MaxVelocity; // 0x08(0x04)
	float LifeSpan; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ProcedureAnimTrackDataBase
// Size: 0x08 (Inherited: 0x00)
struct FProcedureAnimTrackDataBase {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponProcedureAnimBone
// Size: 0x40 (Inherited: 0x00)
struct FWeaponProcedureAnimBone {
public:

	enum class EProcedureAnimBoneType PABoneType; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FTransform CustomPAnimBoneTransform; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RandomValue
// Size: 0x0c (Inherited: 0x00)
struct FRandomValue {
public:

	float MinValue; // 0x00(0x04)
	float MaxValue; // 0x04(0x04)
	char pad_8[0x4]; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FiringAnimParam_ScaleArray
// Size: 0x10 (Inherited: 0x00)
struct FFiringAnimParam_ScaleArray {
public:

	struct TArray<float> Data; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FiringAnimParam_FixedOffset
// Size: 0x18 (Inherited: 0x00)
struct FFiringAnimParam_FixedOffset {
public:

	float BaseOffset; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<float> ScaleArray; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FiringAnimKickScale
// Size: 0x18 (Inherited: 0x00)
struct FFiringAnimKickScale {
public:

	float GunkickRandomVerticalScale; // 0x00(0x04)
	float GunkickRandomHorizontalScale; // 0x04(0x04)
	float GunkickTransVerticalScale; // 0x08(0x04)
	float GunkickTransHorizontalScale; // 0x0c(0x04)
	float GunkickSpringVerticalScale; // 0x10(0x04)
	float GunkickSpringHorizontalScale; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CurveBlendOutConfig
// Size: 0x30 (Inherited: 0x00)
struct FCurveBlendOutConfig {
public:

	/*struct TSoftObjectPtr<UCurveFloat>*/char CurveFloat[0x28]; // 0x00(0x28)
	float LifeSpan; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RandomKickTrans
// Size: 0x18 (Inherited: 0x00)
struct FRandomKickTrans {
public:

	struct FVector2D KickTransScale; // 0x00(0x08)
	struct TArray<struct FRandomKickTransItem> KickTransItems; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillLogicStateBitBase
// Size: 0x28 (Inherited: 0x00)
struct FSkillLogicStateBitBase {
public:

	struct TArray<struct FSkillLogicStateProperty> NodeProperty; // 0x00(0x10)
	struct TArray<uint32_t> NodePassTime; // 0x10(0x10)
	bool AbilityLeaved; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPActionSequenceBase
// Size: 0x18 (Inherited: 0x00)
struct FGPActionSequenceBase {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct UGPFSMInstance* FSMOwner; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAdvancedTickingComponentBaseTickFunction
// Size: 0x68 (Inherited: 0x60)
struct FGPAdvancedTickingComponentBaseTickFunction : public FTickFunction {
public:

	struct UGPAdvancedTickingComponent* Target; // 0x60(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAnimInstanceProxyBase
// Size: 0x748 (Inherited: 0x748)
struct FGPAnimInstanceProxyBase : public FAnimInstanceProxy {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AIAnimsBase
// Size: 0x08 (Inherited: 0x00)
struct FAIAnimsBase {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AIAnimItemBase
// Size: 0x08 (Inherited: 0x00)
struct FAIAnimItemBase {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAnimInstanceProxy_LocomotionBase
// Size: 0x748 (Inherited: 0x748)
struct FGPAnimInstanceProxy_LocomotionBase : public FAnimInstanceProxy {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAnimProxyOrientationWarping
// Size: 0x28 (Inherited: 0x00)
struct FGPAnimProxyOrientationWarping {
public:

	struct TArray<float> OrientationWarpingAngles; // 0x00(0x10)
	int32_t CurrentValidDirection; // 0x10(0x04)
	struct FVector LastVelocity; // 0x14(0x0c)
	float CurrentRotateRootAngle; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAnimProxyVelocityBlend
// Size: 0x10 (Inherited: 0x00)
struct FGPAnimProxyVelocityBlend {
public:

	float F; // 0x00(0x04)
	float B; // 0x04(0x04)
	float L; // 0x08(0x04)
	float R; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimItemBase
// Size: 0x08 (Inherited: 0x00)
struct FAnimItemBase {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPMoveTurnJumpProxy
// Size: 0x60 (Inherited: 0x00)
struct FGPMoveTurnJumpProxy {
public:

	float TurnUpDown; // 0x00(0x04)
	float TurnLeftRight; // 0x04(0x04)
	struct FRotator RotationOfHoTurn; // 0x08(0x0c)
	struct FVector SpringAdditiveOffset; // 0x14(0x0c)
	struct FTransform DelayTransformOfHoTurn; // 0x20(0x30)
	struct FVector SpringAdditiveOffsetImpetus; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPSpringBase
// Size: 0x20 (Inherited: 0x00)
struct FGPSpringBase {
public:

	char pad_0[0x8]; // 0x00(0x08)
	float Radio; // 0x08(0x04)
	float SmoothTime; // 0x0c(0x04)
	float DampingRadio; // 0x10(0x04)
	float RadioTarget; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MoveInputParams
// Size: 0x18 (Inherited: 0x00)
struct FMoveInputParams {
public:

	float Timestamp; // 0x00(0x04)
	struct FVector_NetQuantize10 InAccel; // 0x04(0x0c)
	uint32_t MoveFlags; // 0x10(0x04)
	uint32_t View; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AssassinateSkinAnim
// Size: 0x70 (Inherited: 0x00)
struct FAssassinateSkinAnim {
public:

	/*struct TSoftObjectPtr<UAnimationAsset>*/char AssassinateAnimTppSoftObjectPtr[0x28]; // 0x00(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char BeAssassinateAnimSoftObjectPtr[0x28]; // 0x28(0x28)
	struct FVector AssassinateOffsetLoc; // 0x50(0x0c)
	float AssassinateDeathTime; // 0x5c(0x04)
	struct FString AnimDesc; // 0x60(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SceneWeaponInfo
// Size: 0x28 (Inherited: 0x00)
struct FSceneWeaponInfo {
public:

	struct FVector DSWorldLoc; // 0x00(0x0c)
	enum class ESceneWeaponType WeaponType; // 0x0c(0x01)
	enum class ESceneHealthState HealthState; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	int32_t CampId; // 0x10(0x04)
	int32_t TeamId; // 0x14(0x04)
	struct TArray<int32_t> MarkedCampIDArray; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MemberHealthInfo
// Size: 0x3c (Inherited: 0x00)
struct FMemberHealthInfo {
public:

	int32_t CharacterLiveStatus; // 0x00(0x04)
	float Health; // 0x04(0x04)
	float HealthMAX; // 0x08(0x04)
	float BaseHealthMax; // 0x0c(0x04)
	float ImpendingDeathHealth; // 0x10(0x04)
	float ImpendingDeathHealthMax; // 0x14(0x04)
	float ArmourHealth; // 0x18(0x04)
	float ArmourHealthMax; // 0x1c(0x04)
	float HelmetArmourHealth; // 0x20(0x04)
	float HelmetArmourHealthMax; // 0x24(0x04)
	float ShieldHealth; // 0x28(0x04)
	float ShieldHealthMax; // 0x2c(0x04)
	int32_t NeedShowRescueNum; // 0x30(0x04)
	float CurrentRescuingProcessEndTimestamp; // 0x34(0x04)
	float CurrentRescuingProcessDuration; // 0x38(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPPathWayPointRotateSettings
// Size: 0x20 (Inherited: 0x00)
struct FGPPathWayPointRotateSettings {
public:

	bool bIgnoreSplinePitch; // 0x00(0x01)
	bool bIgnoreSplineYaw; // 0x01(0x01)
	bool bIgnoreSplineRoll; // 0x02(0x01)
	bool bOverrideRotator; // 0x03(0x01)
	struct FRotator OverrideRotator; // 0x04(0x0c)
	struct FRotator ExtralRotator; // 0x10(0x0c)
	float InterpSpeed; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.PhysicalCameraConfig
// Size: 0x14 (Inherited: 0x00)
struct FPhysicalCameraConfig {
public:

	float DepthOfFieldFocalDistance; // 0x00(0x04)
	float DepthOfFieldSensorWidth; // 0x04(0x04)
	float DepthOfFieldFstop; // 0x08(0x04)
	float DepthOfFieldMinFstop; // 0x0c(0x04)
	int32_t DepthOfFieldBladeCount; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.BaseDOFConfig
// Size: 0x10 (Inherited: 0x00)
struct FBaseDOFConfig {
public:

	float FocalDistance; // 0x00(0x04)
	float FocalRegion; // 0x04(0x04)
	float NearTransitionRegion; // 0x08(0x04)
	float FarTransitionRegion; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.POVFloatSetting
// Size: 0x08 (Inherited: 0x00)
struct FPOVFloatSetting {
public:

	enum class EPOVModifyOption Option; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.POVProjectionModeSetting
// Size: 0x02 (Inherited: 0x00)
struct FPOVProjectionModeSetting {
public:

	enum class EPOVModifyOption Option; // 0x00(0x01)
	enum class ECameraProjectionMode Value; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.POVBoolSetting
// Size: 0x02 (Inherited: 0x00)
struct FPOVBoolSetting {
public:

	enum class EPOVModifyOption Option; // 0x00(0x01)
	bool Value; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FullScreenTranslucencyQuad
// Size: 0x10 (Inherited: 0x00)
struct FFullScreenTranslucencyQuad {
public:

	struct UStaticMesh* CustomQuadMesh; // 0x00(0x08)
	struct UMaterialInterface* QuadTranslucencyMaterial; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RagDollDeathAnimAssetInfo
// Size: 0x08 (Inherited: 0x00)
struct FRagDollDeathAnimAssetInfo {
public:

	struct UAnimSequence* DeathAnim; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkeletalMeshAnimUROThresholdRateBit
// Size: 0x08 (Inherited: 0x00)
struct FSkeletalMeshAnimUROThresholdRateBit {
public:

	float ThresHold; // 0x00(0x04)
	int32_t Rate; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkeletalMeshAnimLODBit
// Size: 0x28 (Inherited: 0x08)
struct FSkeletalMeshAnimLODBit : public FTableRowBase {
public:

	float LOD_1; // 0x08(0x04)
	float LOD_2; // 0x0c(0x04)
	float LOD_3; // 0x10(0x04)
	float LOD_4; // 0x14(0x04)
	float LOD_5; // 0x18(0x04)
	float LOD_6; // 0x1c(0x04)
	float LOD_7; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillEventArgs
// Size: 0x0c (Inherited: 0x00)
struct FSkillEventArgs {
public:

	bool Pressed; // 0x00(0x01)
	bool Cancel; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct TWeakObjectPtr<struct AActor> Target; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ArmedforceCommonData
// Size: 0xa4 (Inherited: 0x00)
struct FArmedforceCommonData {
public:

	char pad_0[0x58]; // 0x00(0x58)
	int32_t ClaymoreTriggerCount; // 0x58(0x04)
	int32_t ClaymoreKillCount; // 0x5c(0x04)
	int32_t AntiTankTriggerCount; // 0x60(0x04)
	int32_t AntiTankKillCount; // 0x64(0x04)
	int32_t AdrenalineActiveCount; // 0x68(0x04)
	int32_t AdrenalineTotalLevelCount; // 0x6c(0x04)
	int32_t AdrenalineTotalKillCount; // 0x70(0x04)
	char pad_74[0x30]; // 0x74(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillDataFlowRecordItem
// Size: 0x28 (Inherited: 0x00)
struct FSkillDataFlowRecordItem {
public:

	enum class EDataFlowType DataFlowType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ExpertId; // 0x04(0x04)
	uint64_t WeaponID; // 0x08(0x08)
	int32_t SkillId; // 0x10(0x04)
	int32_t BuffId; // 0x14(0x04)
	float DamageCount; // 0x18(0x04)
	float HealCount; // 0x1c(0x04)
	float BuffTime; // 0x20(0x04)
	float MoveDistance; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityFragment
// Size: 0x00 (Inherited: 0x00)
struct FAbilityFragment {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillStateBase
// Size: 0x18 (Inherited: 0x00)
struct FSkillStateBase {
public:

	int32_t CurrentUsingSkillid; // 0x00(0x04)
	int32_t CurrentUsingDoubleHandsSkillid; // 0x04(0x04)
	int32_t CurrentUsingRightHandSkillid; // 0x08(0x04)
	int32_t CurrentUsingLeftHandSkillid; // 0x0c(0x04)
	int32_t CurrentUsingLegsSkillid; // 0x10(0x04)
	int32_t CurrentUsingSpecialSkillid; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillEntityStateBase
// Size: 0x10 (Inherited: 0x00)
struct FSkillEntityStateBase {
public:

	int32_t SkillId; // 0x00(0x04)
	int32_t ExcuteCount; // 0x04(0x04)
	int32_t SkillEntityUniqueID; // 0x08(0x04)
	bool UsingAbility; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ThreatIconConfig
// Size: 0x0c (Inherited: 0x00)
struct FThreatIconConfig {
public:

	float MaxDistance; // 0x00(0x04)
	struct FName UIAnimName; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SlotCharingConfigData
// Size: 0xa8 (Inherited: 0x00)
struct FSlotCharingConfigData {
public:

	int32_t Init; // 0x00(0x04)
	int32_t Max; // 0x04(0x04)
	float Time; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<enum class EPerkSpecialEffectType, float> PerkScaleMap; // 0x10(0x50)
	float MaxScoreReduceCDPercent; // 0x60(0x04)
	float MaxScore; // 0x64(0x04)
	struct TArray<enum class EDFMGamePlayMode> LimitPlayMode; // 0x68(0x10)
	bool AddToCurrentAmmo; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	int32_t CurrentAmmoNum; // 0x7c(0x04)
	int32_t MaxClipAmmoNum; // 0x80(0x04)
	enum class ESkillNumType SkillNumType; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct FString DoneVoiceString; // 0x88(0x10)
	bool NoCDType; // 0x98(0x01)
	bool InitReflashSlotNum; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	int32_t AmmoBoxChargeCnt; // 0x9c(0x04)
	int32_t AmmoPackChargeCnt; // 0xa0(0x04)
	bool bOnlyWeaponCountAmmo; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SpringArmTransformValue
// Size: 0x24 (Inherited: 0x00)
struct FSpringArmTransformValue {
public:

	bool IsLocalTargetOffset; // 0x00(0x01)
	bool IsLocalSocketTargetOffset; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector TargetOffsetValue; // 0x04(0x0c)
	struct FVector SocketOffsetValue; // 0x10(0x0c)
	float SpringArmLengthValue; // 0x1c(0x04)
	float InterpolateSpeed; // 0x20(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPVaultType
// Size: 0x02 (Inherited: 0x00)
struct FGPVaultType {
public:

	enum class EObstacleHeightType VaultHeightType; // 0x00(0x01)
	enum class EVaultAnimType VaultAnimType; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleWeaponAnimationConig
// Size: 0x20 (Inherited: 0x00)
struct FVehicleWeaponAnimationConig {
public:

	struct FVector RootBoneRotatorScale; // 0x00(0x0c)
	float RootBoneRotatorLerpValue; // 0x0c(0x04)
	float RefreshVehicleRotatorFrequence; // 0x10(0x04)
	struct FVector FPPAimLocationScale; // 0x14(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleLeanOutInfo
// Size: 0x88 (Inherited: 0x00)
struct FVehicleLeanOutInfo {
public:

	struct FVector2D Idle_LimitPitch; // 0x00(0x08)
	struct FVector2D Idle_LimitYaw; // 0x08(0x08)
	bool bIdleRotationAdjust; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FVector2D IdleRotationAdjust_Yaw; // 0x14(0x08)
	struct FVector IdleRotationAdjust_Offset; // 0x1c(0x0c)
	bool bCanLeanOut; // 0x28(0x01)
	bool bForceLeanOut; // 0x29(0x01)
	bool bSwitchFPPWhenLeanOut; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	struct FVector2D CanLeanOut_LimitPitch; // 0x2c(0x08)
	struct FVector2D CanLeanOut_LimitYaw; // 0x34(0x08)
	struct FVector2D LeanOut_LimitPitch; // 0x3c(0x08)
	struct FVector2D LeanOut_LimitYaw; // 0x44(0x08)
	struct FVector LeanOut_Offset; // 0x4c(0x0c)
	struct FVector LeanOut_SeatRelativeOffset; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
	struct UCurveFloat* LeanOut_OffsetCurve; // 0x68(0x08)
	bool bLeanOut_CurveLimit; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct UCurveFloat* LeanOut_LimitPitchX; // 0x78(0x08)
	struct UCurveFloat* LeanOut_LimitPitchY; // 0x80(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPWeaponPartAnimInstanceProxy
// Size: 0x7a8 (Inherited: 0x748)
struct FGPWeaponPartAnimInstanceProxy : public FAnimInstanceProxy {
public:

	enum class EGPWeaponStateType WeaponState; // 0x748(0x01)
	enum class EAdapterItemType PartType; // 0x749(0x01)
	char pad_74A[0x6]; // 0x74a(0x06)
	struct UAnimSequenceBase* IdleSeq; // 0x750(0x08)
	bool bHasPlayingSeq; // 0x758(0x01)
	char pad_759[0x7]; // 0x759(0x07)
	struct UAnimSequenceBase* PlayingSeq; // 0x760(0x08)
	float PlayingRate; // 0x768(0x04)
	char pad_76C[0x30]; // 0x76c(0x30)
	float PlayingTime; // 0x79c(0x04)
	struct AGPCharacterBase* CharacterOwner; // 0x7a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RepProjectileInfoBase
// Size: 0x10 (Inherited: 0x00)
struct FRepProjectileInfoBase {
public:

	uint64_t BulletGuid; // 0x00(0x08)
	bool bUsed; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponBulletPhysicsSimulateInitParam
// Size: 0x60 (Inherited: 0x00)
struct FWeaponBulletPhysicsSimulateInitParam {
public:

	uint64_t BulletEffectId; // 0x00(0x08)
	uint64_t TrailEffectId; // 0x08(0x08)
	uint64_t HitFxId; // 0x10(0x08)
	float AirDragFactor; // 0x18(0x04)
	float ZeroGravityDistance; // 0x1c(0x04)
	struct FTransform ViewRelativeTransform; // 0x20(0x30)
	float TrailSmokeProbability; // 0x50(0x04)
	bool bFirstWarmBulletEffectView; // 0x54(0x01)
	char pad_55[0xb]; // 0x55(0x0b)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.OverrideItemFloat
// Size: 0x08 (Inherited: 0x00)
struct FOverrideItemFloat {
public:

	bool bOverride; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Value; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.OverrideItemInt
// Size: 0x08 (Inherited: 0x00)
struct FOverrideItemInt {
public:

	bool bOverride; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Value; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.OverrideItemBool
// Size: 0x02 (Inherited: 0x00)
struct FOverrideItemBool {
public:

	bool bOverride; // 0x00(0x01)
	bool Value; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.OverrideItemVector2D
// Size: 0x0c (Inherited: 0x00)
struct FOverrideItemVector2D {
public:

	bool bOverride; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D Value; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimTableRowBase
// Size: 0x10 (Inherited: 0x10)
struct FWeaponAnimTableRowBase : public FDescRowBase {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimItemBase
// Size: 0x08 (Inherited: 0x00)
struct FWeaponAnimItemBase {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimMapData
// Size: 0x420 (Inherited: 0x00)
struct FWeaponAnimMapData {
public:

	struct TMap<struct FName, struct FWeaponAnimItemSeq> WeaponAnimMapSeq; // 0x00(0x50)
	struct TMap<struct FName, struct FWeaponAnimItemSeqBase> WeaponAnimMapSeqBase; // 0x50(0x50)
	struct TMap<struct FName, struct FWeaponAnimItemBS> WeaponAnimMapBS; // 0xa0(0x50)
	struct TMap<struct FName, struct FWeaponAnimItemMontage> WeaponAnimMapMontage; // 0xf0(0x50)
	struct TMap<struct FName, struct FWeaponAnimItemDirectionSeq> WeaponAnimMapDirectionSeq; // 0x140(0x50)
	struct TMap<struct FName, struct FWeaponAnimItemGameplayTagMap> WeaponTagAmimsMap; // 0x190(0x50)
	struct TMap<struct FName, struct FWeaponAnimItemSeqArray> WeaponTagAmimMapSeqArray; // 0x1e0(0x50)
	struct TMap<struct FName, struct FTurnAnim8AngleSeqBase> WeaponAnim8AngleSeqBaseArray; // 0x230(0x50)
	struct TMap<struct FName, struct FWeaponAnimPartItemMap> WeaponPartAnimMapSeqBase; // 0x280(0x50)
	struct TMap<struct FName, struct FWeaponAnimItemGameplayTagMap> WeaponPartTagAnimMap; // 0x2d0(0x50)
	struct TMap<struct FName, struct FWeaponAnimItemHallSeqBase> WeaponPartAnimMapSeqBaseArray; // 0x320(0x50)
	struct TMap<struct FName, struct FWeaponAnimItemStringMap> WeaponStringAnimMap; // 0x370(0x50)
	struct TMap<struct FName, struct FWeaponAnimItemStringMap> WeaponPartStringAnimMap; // 0x3c0(0x50)
	char pad_410[0x10]; // 0x410(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RecordLocalAnimationItem
// Size: 0x18 (Inherited: 0x00)
struct FRecordLocalAnimationItem {
public:

	struct TArray<struct FLoadAnimPart> Parts; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataViewLocomotionParam
// Size: 0xe0 (Inherited: 0x00)
struct FWeaponDataViewLocomotionParam {
public:

	struct FVector CrouchLocationOffset; // 0x00(0x0c)
	struct FRotator CrouchRotationOffset; // 0x0c(0x0c)
	struct FVector CrouchLocationOffsetAim; // 0x18(0x0c)
	struct FRotator CrouchRotationOffsetAim; // 0x24(0x0c)
	float CrouchLocationSpringTime; // 0x30(0x04)
	float CrouchLocationDampingRaio; // 0x34(0x04)
	float CrouchRotationSpringTime; // 0x38(0x04)
	float CrouchRotationDampingRaio; // 0x3c(0x04)
	float CrouchRotationPitchSpringTime; // 0x40(0x04)
	float CrouchRotationPitchDampingRaio; // 0x44(0x04)
	float CrouchRotationPitchCenterDistance; // 0x48(0x04)
	float CrouchOffsetFadeOutTimeScale; // 0x4c(0x04)
	float StandToProneCrouchTime; // 0x50(0x04)
	float ProneToStancCrouchTime; // 0x54(0x04)
	float ProneUseCrouchTimeScale; // 0x58(0x04)
	bool bLockPlaneInProneMoving; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float JumpUpSpringTime; // 0x60(0x04)
	float JumpUpSpringRatio; // 0x64(0x04)
	float JumpUpRecoverTime; // 0x68(0x04)
	float JumpUpRecoverSpringTime; // 0x6c(0x04)
	float JumpUpRecoverSpringRatio; // 0x70(0x04)
	struct FVector JumpUpOffset; // 0x74(0x0c)
	float JumpUpOffsetZoomingScale; // 0x80(0x04)
	float JumpUpRotationDelayTime; // 0x84(0x04)
	float JumpUpRotationSpringTime; // 0x88(0x04)
	float JumpUpRotationSpringRatio; // 0x8c(0x04)
	float JumpUpRotationRecoverTime; // 0x90(0x04)
	float JumpUpRotationRecoverSpringTime; // 0x94(0x04)
	float JumpUpRotationRecoverSpringRatio; // 0x98(0x04)
	struct FRotator JumpUpRotation; // 0x9c(0x0c)
	struct FRotator JumpUpRotationInZoomingScale; // 0xa8(0x0c)
	float JumpLandSpringTime; // 0xb4(0x04)
	float JumpLandSpringRatio; // 0xb8(0x04)
	float JumpLandRecoverTime; // 0xbc(0x04)
	float JumpLandRecoverSpringTime; // 0xc0(0x04)
	float JumpLandRecoverSpringRatio; // 0xc4(0x04)
	struct FVector JumpLandOffset; // 0xc8(0x0c)
	float JumpLandOffsetZoomingScale; // 0xd4(0x04)
	float FallingLandInitSpeed; // 0xd8(0x04)
	float FallingLandAntiGravity; // 0xdc(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponBreathConfig
// Size: 0x14 (Inherited: 0x00)
struct FWeaponBreathConfig {
public:

	float AttenSpeed; // 0x00(0x04)
	float AttenValueOnFire; // 0x04(0x04)
	float AttenDeltaOnContinueFire; // 0x08(0x04)
	float RecoverSpeed; // 0x0c(0x04)
	float HoldBreathCD; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GunSwayItemBase
// Size: 0x38 (Inherited: 0x00)
struct FGunSwayItemBase {
public:

	char pad_0[0x8]; // 0x00(0x08)
	float Intensity; // 0x08(0x04)
	float TriggerCD; // 0x0c(0x04)
	float DelayTime; // 0x10(0x04)
	float DelayBlendTime; // 0x14(0x04)
	float FireIntensity; // 0x18(0x04)
	float FireInBlendTime; // 0x1c(0x04)
	float FireOutBlendTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FPAnimPlayConfig> ProcedureAnimConfigs; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GSMiniShakeConfig
// Size: 0x10 (Inherited: 0x00)
struct FGSMiniShakeConfig {
public:

	char pad_0[0x8]; // 0x00(0x08)
	float Intensity; // 0x08(0x04)
	uint16_t MiniShakeAnimId; // 0x0c(0x02)
	char pad_E[0x2]; // 0x0e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CameraWaveDataConfig
// Size: 0xb0 (Inherited: 0x00)
struct FCameraWaveDataConfig {
public:

	char pad_0[0x8]; // 0x00(0x08)
	float Intensity; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	/*struct TSoftObjectPtr<UCurveVector>*/char RotatorScaleByZoomRateCurve[0x28]; // 0x10(0x28)
	/*struct TSoftObjectPtr<UCurveVector>*/char VectorScaleByZoomRateCurve[0x28]; // 0x38(0x28)
	struct FRotator MinRotatorOffset; // 0x60(0x0c)
	struct FRotator MaxRotatorOffset; // 0x6c(0x0c)
	struct FVector MinLocationOffset; // 0x78(0x0c)
	struct FVector MaxLocationOffset; // 0x84(0x0c)
	float RotatorDecreaseTime; // 0x90(0x04)
	float RotatorDecreaseElasticity; // 0x94(0x04)
	float LocationDecreaseTime; // 0x98(0x04)
	float LocationDecreaseElasticity; // 0x9c(0x04)
	float CanCombaTime; // 0xa0(0x04)
	float CombaDecayScale; // 0xa4(0x04)
	float MinCombaDecayScale; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ProcedureAnimBlendInfo
// Size: 0x10 (Inherited: 0x00)
struct FProcedureAnimBlendInfo {
public:

	float BlendInSeconds; // 0x00(0x04)
	enum class EGPWeaponEasingType BlendInEasingType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float BlendOutSeconds; // 0x08(0x04)
	enum class EGPWeaponEasingType BlendOutEasingType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponObjectDiffConfig
// Size: 0x80 (Inherited: 0x00)
struct FWeaponObjectDiffConfig {
public:

	uint16_t MainTypeWeight; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	struct TMap<enum class EAdapterItemType, uint16_t> AdapterTypeWeight; // 0x08(0x50)
	float DefaultWeightFactorForSameTypeRecs; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FWeaponItemTypeDifferenceConfig> WeightFactorForRecs; // 0x60(0x10)
	uint16_t SkinIdWeight; // 0x70(0x02)
	uint16_t ColorIdWeight; // 0x72(0x02)
	char pad_74[0x4]; // 0x74(0x04)
	uint64_t SkinAppearanceIdWeight; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponCameraRecoverConfig
// Size: 0x28 (Inherited: 0x00)
struct FWeaponCameraRecoverConfig {
public:

	float PitchUndampedFrequency; // 0x00(0x04)
	float YawUndampedFrequency; // 0x04(0x04)
	float PitchDampingRatio; // 0x08(0x04)
	float YawDampingRatio; // 0x0c(0x04)
	float PitchFixN; // 0x10(0x04)
	float YawFixN; // 0x14(0x04)
	float PitchMaxVelocity; // 0x18(0x04)
	float YawMaxVelocity; // 0x1c(0x04)
	float PitchRecoverRate; // 0x20(0x04)
	float YawRecoverRate; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponCurveConfig
// Size: 0x08 (Inherited: 0x00)
struct FWeaponCurveConfig {
public:

	float ChangeTimePercent; // 0x00(0x04)
	enum class EGPWeaponEasingType EaseType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponFireShakeItemData
// Size: 0x70 (Inherited: 0x00)
struct FWeaponFireShakeItemData {
public:

	char pad_0[0x8]; // 0x00(0x08)
	float Value; // 0x08(0x04)
	char Enable : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float frequency; // 0x10(0x04)
	float ShiftMin; // 0x14(0x04)
	float ShiftMax; // 0x18(0x04)
	float DampingRatio; // 0x1c(0x04)
	enum class EWeaponFireShakeWaveform ShakeWaveForm; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	/*struct TSoftObjectPtr<UCurveFloat>*/char ShakeCurve[0x28]; // 0x28(0x28)
	char IsCurveLoop : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float ShakeScaleMin; // 0x54(0x04)
	float ShakeScaleMax; // 0x58(0x04)
	char RandomReverse : 1; // 0x5c(0x01)
	char ValueAttachRecoil : 1; // 0x5c(0x01)
	char pad_5C_2 : 6; // 0x5c(0x01)
	char InitEnhanceShootCount; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	float InitEnhanceFactor; // 0x60(0x04)
	enum class EGPWeaponEasingType InitEnhanceEasingType; // 0x64(0x01)
	char UseRecoilCalcDirection : 1; // 0x65(0x01)
	char pad_65_1 : 7; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	float RecoilCalcDirectionFactor; // 0x68(0x04)
	char DelayFrames; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponFireWithSightConfig
// Size: 0x03 (Inherited: 0x00)
struct FWeaponFireWithSightConfig {
public:

	enum class EWeaponOpenSightOnFireMode OpenSightOnFireMode; // 0x00(0x01)
	enum class EWeaponFireWithSightPressConfigMode OnPressMode; // 0x01(0x01)
	bool EnableInstantFire; // 0x02(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAppearanceForCharacterItem
// Size: 0x240 (Inherited: 0x00)
struct FWeaponAppearanceForCharacterItem {
public:

	struct TMap<enum class EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> EquipSockets; // 0x00(0x50)
	struct TMap<enum class EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> AttachSockets; // 0x50(0x50)
	struct TMap<char, struct FWeaponSocketItem> AttachSocketsForWeaponType; // 0xa0(0x50)
	struct TMap<enum class EGPWeaponAppearanceAttachType, struct FWeaponSocketInfo> AttachSocketsForInitWeapon; // 0xf0(0x50)
	struct TMap<enum class EGPWeaponAppearanceAttachType, uint64_t> AnimIds; // 0x140(0x50)
	struct TMap<enum class EGPWeaponAppearanceAttachType, float> FireInterval; // 0x190(0x50)
	struct TMap<enum class EGPWeaponAppearanceAttachType, float> ChangeClipTime; // 0x1e0(0x50)
	char pad_230[0x10]; // 0x230(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataHitFXSurfaceAttribute
// Size: 0x100 (Inherited: 0x00)
struct FWeaponDataHitFXSurfaceAttribute {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FName> HitEffectIds; // 0x08(0x10)
	struct FName RicochetEffectId; // 0x18(0x08)
	/*struct TSoftObjectPtr<UCurveFloat>*/char RicochetAngleProbCurve[0x28]; // 0x20(0x28)
	float MultiBulletRicochetProb; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	/*struct TMap<struct FName, struct TSoftObjectPtr<UCurveFloat>>*/char HitEmitterDistScaleCurves[0x50]; // 0x50(0x50)
	struct FName HitDecalId; // 0xa0(0x08)
	struct FName HitLightId; // 0xa8(0x08)
	struct TMap<struct FName, struct UCurveFloat*> HitEmitterDistScaleCurveInstances; // 0xb0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSpreadModifierFunc
// Size: 0x0c (Inherited: 0x00)
struct FWeaponSpreadModifierFunc {
public:

	enum class EWeaponSpreadModifierType ModifierType; // 0x00(0x01)
	char SimulateTimes; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector2D RandomRadius; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DistributionInSpreadFunc
// Size: 0x28 (Inherited: 0x00)
struct FDistributionInSpreadFunc {
public:

	enum class EDistributionInSpreadType DistributionType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxRotateAngle; // 0x04(0x04)
	float CenterSlideValue; // 0x08(0x04)
	float VMidNum; // 0x0c(0x04)
	float VMidRadio; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FVector2D> CustomDistributionPos; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataSpringGunKick
// Size: 0x40 (Inherited: 0x00)
struct FWeaponDataSpringGunKick {
public:

	char pad_0[0x8]; // 0x00(0x08)
	bool EnableSpringGunKick; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SpringYawMin; // 0x0c(0x04)
	float SpringYawMax; // 0x10(0x04)
	float SpringYawDelta; // 0x14(0x04)
	float SpringYawMaxDelta; // 0x18(0x04)
	float SpringPitchMin; // 0x1c(0x04)
	float SpringPitchMax; // 0x20(0x04)
	float SpringPitchDelta; // 0x24(0x04)
	float SpringPitchMaxDelta; // 0x28(0x04)
	float SpringTime; // 0x2c(0x04)
	float SpringRatio; // 0x30(0x04)
	float RecoverStartTime; // 0x34(0x04)
	float RecoverSpringTime; // 0x38(0x04)
	float RecoverSpringRatio; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponRecoilFactor
// Size: 0x08 (Inherited: 0x00)
struct FWeaponRecoilFactor {
public:

	float Horizontal; // 0x00(0x04)
	float Vertical; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponRecoilShake
// Size: 0xb0 (Inherited: 0x00)
struct FWeaponRecoilShake {
public:

	float WholeAmplitude; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FWeaponRecoilShakeElementConfig> WeaponRecoilShakeManualCurveConfigs; // 0x08(0x10)
	float frequency; // 0x18(0x04)
	float ShiftMin; // 0x1c(0x04)
	float ShiftMax; // 0x20(0x04)
	float InFireDampingRatio; // 0x24(0x04)
	float Duration; // 0x28(0x04)
	float AfterFireCycleTime; // 0x2c(0x04)
	float AfterFireDampingRatio; // 0x30(0x04)
	bool LinkToRecoil; // 0x34(0x01)
	bool ClampMaxMin; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	struct TArray<float> Percent; // 0x38(0x10)
	struct TArray<float> FollowMin; // 0x48(0x10)
	struct TArray<float> FollowMax; // 0x58(0x10)
	struct TArray<float> AmplitudeMin; // 0x68(0x10)
	struct TArray<float> AmplitudeMax; // 0x78(0x10)
	/*struct TSoftObjectPtr<UCurveFloat>*/char FireCountScaleCurve[0x28]; // 0x88(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponRecoilShakeWithCurve
// Size: 0x18 (Inherited: 0x00)
struct FWeaponRecoilShakeWithCurve {
public:

	float WholeAmplitude; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FWeaponRecoilShakeElementConfig> WeaponRecoilShakeManualCurveConfigs; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponEaseConfig
// Size: 0x30 (Inherited: 0x00)
struct FWeaponEaseConfig {
public:

	enum class EGPWeaponEasingType EaseType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	/*struct TSoftObjectPtr<UCurveFloat>*/char CurveFloat[0x28]; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ClampedMapRange
// Size: 0x10 (Inherited: 0x00)
struct FClampedMapRange {
public:

	float InRangeA; // 0x00(0x04)
	float InRangeB; // 0x04(0x04)
	float OutRangeA; // 0x08(0x04)
	float OutRangeB; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataViewZoomSoftenParam
// Size: 0x28 (Inherited: 0x00)
struct FWeaponDataViewZoomSoftenParam {
public:

	bool bUseCodedAnimation; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BackSwingStartPercent; // 0x04(0x04)
	struct FVector BackSwingTransition; // 0x08(0x0c)
	struct FRotator BackSwingRotation; // 0x14(0x0c)
	float BackSwingSpringTime; // 0x20(0x04)
	float BackSwingSpringRadio; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataModifierRuleSummaryFast
// Size: 0x10 (Inherited: 0x00)
struct FWeaponDataModifierRuleSummaryFast {
public:

	struct TArray<struct FWeaponDataModifierRuleFast> Rules; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MuzzleLightInfo
// Size: 0x14 (Inherited: 0x00)
struct FMuzzleLightInfo {
public:

	float LightRadius; // 0x00(0x04)
	struct FVector LightColor; // 0x04(0x0c)
	float LightDuration; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAssistedAimingForFire
// Size: 0xc8 (Inherited: 0x00)
struct FWeaponAssistedAimingForFire {
public:

	float HorizontalRecoilSpeed; // 0x00(0x04)
	float VerticalRecoilSpeed; // 0x04(0x04)
	struct UCurveFloat* RecoilSpeedCurve; // 0x08(0x08)
	/*struct TSoftObjectPtr<UCurveFloat>*/char RecoilSpeedCurveSP[0x28]; // 0x10(0x28)
	struct UCurveFloat* RecoilSpeedDistanceCurve; // 0x38(0x08)
	/*struct TSoftObjectPtr<UCurveFloat>*/char RecoilSpeedDistanceCurveSP[0x28]; // 0x40(0x28)
	float RecoilSpeedTouchParam; // 0x68(0x04)
	float RecoilReduceActivationTime; // 0x6c(0x04)
	int32_t EnableDistanceMin; // 0x70(0x04)
	int32_t EnableDistanceMax; // 0x74(0x04)
	float AssistedBoxMinRadius; // 0x78(0x04)
	float AssistedBoxMaxRadius; // 0x7c(0x04)
	float AssistedBoxVerticalScale; // 0x80(0x04)
	enum class EGPWeaponEasingType AssistedBoxScaleEaseType; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float PauseTimeAfterFire; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char VerticalRecoilReduceScaleCurveSP[0x28]; // 0x90(0x28)
	struct UCurveFloat* VerticalRecoilReduceScaleCurve; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAssistedAimingForMagneticSticky
// Size: 0x50 (Inherited: 0x00)
struct FWeaponAssistedAimingForMagneticSticky {
public:

	/*struct TSoftObjectPtr<UCurveFloat>*/char MagneticScaleCurveSP[0x28]; // 0x00(0x28)
	struct UCurveFloat* MagneticScaleCurve; // 0x28(0x08)
	float MagneticCDSeconds; // 0x30(0x04)
	float MagneticEnableFocusSeconds; // 0x34(0x04)
	int32_t EnableDistanceMinForMagneticSticky; // 0x38(0x04)
	int32_t EnableDistanceMaxForMagneticSticky; // 0x3c(0x04)
	float AssistedBoxMinRadiusForMagneticSticky; // 0x40(0x04)
	float AssistedBoxMaxRadiusForMagneticSticky; // 0x44(0x04)
	float AssistedBoxVerticalScaleForMagneticSticky; // 0x48(0x04)
	enum class EGPWeaponEasingType AssistedBoxScaleEaseTypeForMagneticSticky; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAssistedAimingForHit
// Size: 0x0c (Inherited: 0x00)
struct FWeaponAssistedAimingForHit {
public:

	bool bPreventMissEnable; // 0x00(0x01)
	char PreventMissNumber; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float PreventMissTime; // 0x04(0x04)
	float PreventMissAddBulletRadiusDelta; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAssistedAimingForRotateSticky
// Size: 0x50 (Inherited: 0x00)
struct FWeaponAssistedAimingForRotateSticky {
public:

	float StickyParam; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char SensitivityReduceScaleByFrictionCurveSP[0x28]; // 0x08(0x28)
	struct UCurveFloat* SensitivityReduceScaleByFrictionCurve; // 0x30(0x08)
	int32_t EnableDistanceMinForRotateSticky; // 0x38(0x04)
	int32_t EnableDistanceMaxForRotateSticky; // 0x3c(0x04)
	float AssistedBoxMinRadiusForRotateSticky; // 0x40(0x04)
	float AssistedBoxMaxRadiusForRotateSticky; // 0x44(0x04)
	float AssistedBoxVerticalScaleForRotateSticky; // 0x48(0x04)
	enum class EGPWeaponEasingType AssistedBoxScaleEaseTypeForRotateSticky; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponRecoilVelocityModel
// Size: 0x20 (Inherited: 0x00)
struct FWeaponRecoilVelocityModel {
public:

	float HorizontalVelocityMin; // 0x00(0x04)
	float HorizontalVelocityMax; // 0x04(0x04)
	float HorizontalRecenterAcceleration; // 0x08(0x04)
	float HorizontalRecenterAccelerationPullFactor; // 0x0c(0x04)
	float VerticalVelocityMin; // 0x10(0x04)
	float VerticalVelocityMax; // 0x14(0x04)
	float VerticalRecenterAcceleration; // 0x18(0x04)
	float VerticalRecenterAccelerationPullFactor; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponHudModelDelegates
// Size: 0x50 (Inherited: 0x00)
struct FWeaponHudModelDelegates {
public:

	/*struct FMulticastInlineDelegate*/char OnAmmoCountChanged[0x10]; // 0x00(0x10)
	/*struct FMulticastInlineDelegate*/char OnFireModeChanged[0x10]; // 0x10(0x10)
	/*struct FMulticastInlineDelegate*/char OnGunHashChanged[0x10]; // 0x20(0x10)
	/*struct FMulticastInlineDelegate*/char OnScopeDirty[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnZoomRateSwitched[0x10]; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponReplicateAttachInfo
// Size: 0x20 (Inherited: 0x00)
struct FWeaponReplicateAttachInfo {
public:

	uint32_t SocketId; // 0x00(0x04)
	struct FName SocketName; // 0x04(0x08)
	int32_t PartNodeIndex; // 0x0c(0x04)
	uint64_t ExtraSocketId_RecID; // 0x10(0x08)
	uint64_t ExtraSocketId_ItemID; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSkinFunctionalRow
// Size: 0x48 (Inherited: 0x00)
struct FWeaponSkinFunctionalRow {
public:

	/*struct TSoftClassPtr<UObject>*/char SkinFunctionComponentClassInGame[0x28]; // 0x00(0x28)
	/*struct TArray<struct TSoftClassPtr<UObject>>*/char SkinApperanceModiferClasses[0x10]; // 0x28(0x10)
	/*struct TArray<struct TSoftClassPtr<UObject>>*/char SkinComponents[0x10]; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MysticalTracerColorParamName
// Size: 0x18 (Inherited: 0x00)
struct FMysticalTracerColorParamName {
public:

	struct FName R; // 0x00(0x08)
	struct FName G; // 0x08(0x08)
	struct FName B; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSkinEffectTriggerEvent
// Size: 0x10 (Inherited: 0x00)
struct FWeaponSkinEffectTriggerEvent {
public:

	int32_t ID; // 0x00(0x04)
	enum class ESkinEffectTriggerEventType TriggerEventType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UMaterialSequencer* MaterialSequencer; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPModularWeaponPartNode
// Size: 0x120 (Inherited: 0x00)
struct FGPModularWeaponPartNode {
public:

	uint64_t ItemID; // 0x00(0x08)
	uint64_t FunctionId; // 0x08(0x08)
	uint64_t AnimFunctionId; // 0x10(0x08)
	uint64_t AudioFunctionId; // 0x18(0x08)
	uint64_t FxFunctionId; // 0x20(0x08)
	uint64_t PartsTypeId; // 0x28(0x08)
	char PartsTypePriority; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	uint64_t Guid; // 0x38(0x08)
	enum class EAdapterItemType PartType; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FGPModularWeaponAttachInfo ParentPartInfo; // 0x48(0x20)
	struct TArray<struct FGPModularWeaponAttachInfo> ChildPartInfos; // 0x68(0x10)
	char Num; // 0x78(0x01)
	char pad_79[0x1]; // 0x79(0x01)
	int16_t SocketDepth; // 0x7a(0x02)
	char pad_7C[0x4]; // 0x7c(0x04)
	uint64_t SocketGUID; // 0x80(0x08)
	uint64_t Flag; // 0x88(0x08)
	char BindType; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	uint64_t BindPlayerId; // 0x98(0x08)
	bool bRawBinded; // 0xa0(0x01)
	enum class EModularPartNodeType NodeType; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct TArray<uint64_t> FunctionIds; // 0xa8(0x10)
	int32_t Durability; // 0xb8(0x04)
	struct FVector RelativePositionOffset; // 0xbc(0x0c)
	struct FRotator RelativeRotationOffset; // 0xc8(0x0c)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<uint64_t> TuneIds; // 0xd8(0x10)
	struct TArray<float> TuneValues; // 0xe8(0x10)
	uint64_t FindRelativePositionSocketItemId; // 0xf8(0x08)
	bool TacticalEffective; // 0x100(0x01)
	bool b3PModelExclude; // 0x101(0x01)
	char pad_102[0x1e]; // 0x102(0x1e)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RequestPointHitValidateData
// Size: 0x70 (Inherited: 0x00)
struct FRequestPointHitValidateData {
public:

	struct FVector_NetQuantize100 MakerLocation; // 0x00(0x0c)
	struct FRotator MakerRotation; // 0x0c(0x0c)
	struct FVector_NetQuantize100 MakerInstigatorLocation; // 0x18(0x0c)
	struct FRotator MakerInstigatorRotation; // 0x24(0x0c)
	struct FVector2D RD; // 0x30(0x08)
	struct FVector2D SD; // 0x38(0x08)
	int32_t ZoomFovOnFire; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	uint64_t SightId; // 0x48(0x08)
	char CharacterPose; // 0x50(0x01)
	char Lean; // 0x51(0x01)
	bool bTakerRender; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct FC2SEnemyScreenInfo EnemyScreenInfo; // 0x58(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageSourceInfo
// Size: 0x2a8 (Inherited: 0x00)
struct FDamageSourceInfo {
public:

	enum class EDamageSystemDamageType DamageType; // 0x00(0x01)
	enum class EDamageValidateType ValidateType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct TWeakObjectPtr<struct AActor> MakerInstigator; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	/*struct TScriptInterface<IDamageMakerInterface>*/char DamageMaker[0x10]; // 0x10(0x10)
	/*struct TScriptInterface<IDamageTakerInterface>*/char DamageTaker[0x10]; // 0x20(0x10)
	struct TWeakObjectPtr<struct AActor> MineShooter; // 0x30(0x08)
	char TakerSourceStatus; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct TWeakObjectPtr<struct AActor> DamageMakerActor; // 0x3c(0x08)
	struct TWeakObjectPtr<struct AActor> DamageTakerActor; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	uint64_t DamageMakerId; // 0x50(0x08)
	uint64_t DamageMakerGId; // 0x58(0x08)
	uint64_t InstigatorUin; // 0x60(0x08)
	uint64_t DamageTakerUin; // 0x68(0x08)
	struct FHitResult HitResult; // 0x70(0x88)
	struct TArray<struct FHitResult> HitResults; // 0xf8(0x10)
	float NearestHitDistance; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	uint64_t AttackerValueId; // 0x110(0x08)
	uint64_t FireId; // 0x118(0x08)
	uint16_t BatchId; // 0x120(0x02)
	char GamePlayMode; // 0x122(0x01)
	char pad_123[0x1]; // 0x123(0x01)
	int32_t AttackLevel; // 0x124(0x04)
	int32_t AttackGroupId; // 0x128(0x04)
	float MakerHeadDamageRate; // 0x12c(0x04)
	float MakerThoraxDamageRate; // 0x130(0x04)
	float MakerThoraxUpperDamageRate; // 0x134(0x04)
	float MakerLegDamageRate; // 0x138(0x04)
	float MakerLegUpperDamageRate; // 0x13c(0x04)
	float MakerArmDamageRate; // 0x140(0x04)
	float MakerArmUpperDamageRate; // 0x144(0x04)
	float MakerSOLHealthHitAddBuffRate; // 0x148(0x04)
	int32_t ArmorLevel; // 0x14c(0x04)
	uint64_t ArmorId; // 0x150(0x08)
	float ArmorMaxDurability; // 0x158(0x04)
	char pad_15C[0x1c]; // 0x15c(0x1c)
	struct FMakeDamageParams DamageParams; // 0x178(0xe8)
	struct FMakeBuffDamageParams BuffDamageParams; // 0x260(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.KillInfo
// Size: 0x148 (Inherited: 0x18)
struct FKillInfo : public FBasicData {
public:

	uint64_t KillerUin; // 0x18(0x08)
	uint64_t InstigatorUin; // 0x20(0x08)
	uint64_t MineShooterUin; // 0x28(0x08)
	uint64_t KillerWeaponID; // 0x30(0x08)
	uint64_t KillerWeaponGID; // 0x38(0x08)
	uint32_t KillerSkillID; // 0x40(0x04)
	int32_t KillerVehicleID; // 0x44(0x04)
	bool bKillerInVehicleLeanOut; // 0x48(0x01)
	enum class EWeaponItemType KillerWeaponType; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct TArray<uint64_t> KillerWeaponModuleID; // 0x50(0x10)
	uint64_t BeKilledUin; // 0x60(0x08)
	enum class EDeadType BeKilledType; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float KillDistance; // 0x6c(0x04)
	struct FVector MakerLocation; // 0x70(0x0c)
	bool MakerIsPlayer; // 0x7c(0x01)
	bool MakerIsAILAB; // 0x7d(0x01)
	bool MakerIsRobotAI; // 0x7e(0x01)
	bool MakerIsAIBoss; // 0x7f(0x01)
	struct FVector TakerLocation; // 0x80(0x0c)
	bool TakerIsPlayer; // 0x8c(0x01)
	bool TakerIsAILAB; // 0x8d(0x01)
	bool TakerIsRobotAI; // 0x8e(0x01)
	bool TakerIsAIBoss; // 0x8f(0x01)
	bool IsHitHead; // 0x90(0x01)
	char LastHitPosition; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float LastHitAmount; // 0x94(0x04)
	struct FText BeKilledName; // 0x98(0x18)
	struct FText KillerName; // 0xb0(0x18)
	struct FVector BeKilledLocation; // 0xc8(0x0c)
	float KillTime; // 0xd4(0x04)
	uint64_t KillerAmmoId; // 0xd8(0x08)
	int32_t AttackLevel; // 0xe0(0x04)
	bool bIsKnockDown; // 0xe4(0x01)
	bool bDirectDead; // 0xe5(0x01)
	char pad_E6[0x2]; // 0xe6(0x02)
	int32_t TeamId1; // 0xe8(0x04)
	int32_t TeamId2; // 0xec(0x04)
	int32_t BuffId; // 0xf0(0x04)
	int32_t BeKilledCampId; // 0xf4(0x04)
	int32_t KillerCampId; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FGameplayTagContainer DamageTags; // 0x100(0x20)
	uint64_t AttackValueId; // 0x120(0x08)
	struct AGPCharacterBase* BeKilledCharacter; // 0x128(0x08)
	struct AGPCharacterBase* KillerCharacter; // 0x130(0x08)
	struct TArray<uint64_t> AssistPlayerIds; // 0x138(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageRecordItem
// Size: 0xb0 (Inherited: 0x18)
struct FDamageRecordItem : public FBasicData {
public:

	enum class EDamageActorType TakerActorType; // 0x18(0x01)
	enum class EDamageActorType MakerInstigatorActorType; // 0x19(0x01)
	enum class EDamageType DamageType; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	float Damage; // 0x1c(0x04)
	float ArmorDamage; // 0x20(0x04)
	struct FName MakerInstigatorActorName; // 0x24(0x08)
	struct FName TakerInstigatorActorName; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
	uint64_t MakerUin; // 0x38(0x08)
	uint64_t TeamId; // 0x40(0x08)
	uint64_t MakerGUID; // 0x48(0x08)
	uint64_t TakerUin; // 0x50(0x08)
	float ServerTimeStamp; // 0x58(0x04)
	struct FName HitBoneName; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	int64_t MakerRankMatchScore; // 0x68(0x08)
	float HitDistance; // 0x70(0x04)
	float TakerHealthPercent; // 0x74(0x04)
	float TakerHealthMax; // 0x78(0x04)
	float TakerBaseHealthMax; // 0x7c(0x04)
	struct FName MakerInstigatorPlayerName; // 0x80(0x08)
	struct FName TakerInstigatorPlayerName; // 0x88(0x08)
	char pad_90[0x10]; // 0x90(0x10)
	uint64_t MakerHeroId; // 0xa0(0x08)
	uint64_t TakerHeroId; // 0xa8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SubtitleGroupInfo
// Size: 0x90 (Inherited: 0x00)
struct FSubtitleGroupInfo {
public:

	struct FSubtitleSequenceGroupTableItem SubtitleGroupTableItem; // 0x00(0x28)
	struct FName SubtitleGroupId; // 0x28(0x08)
	struct TMap<struct FName, int32_t> SubtitleGroupLoopTimes; // 0x30(0x50)
	int32_t CurrentSubtitleGroupIdx; // 0x80(0x04)
	enum class ESubtitleSequenceType SubtitleSeqType; // 0x84(0x01)
	char pad_85[0xb]; // 0x85(0x0b)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TeamInfo
// Size: 0x150 (Inherited: 0x00)
struct FTeamInfo {
public:

	int32_t TeamId; // 0x00(0x04)
	struct FName TeamName; // 0x04(0x08)
	int32_t Camp; // 0x0c(0x04)
	uint64_t TeamLeaderID; // 0x10(0x08)
	struct TArray<uint64_t> MemberUinList; // 0x18(0x10)
	struct TArray<int32_t> MemberIndexList; // 0x28(0x10)
	struct FTeamScoreInfosContainer TeamScoreInfos; // 0x38(0x118)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ModularContext
// Size: 0xc0 (Inherited: 0x00)
struct FModularContext {
public:

	struct TArray<struct FGPModularWeaponPartNode> WeaponParts; // 0x00(0x10)
	struct FWeaponSkinInfo SkinInfo; // 0x10(0x88)
	uint64_t SkinId; // 0x98(0x08)
	uint64_t FancyColorID; // 0xa0(0x08)
	struct TArray<uint64_t> SkinApperanceIds; // 0xa8(0x10)
	bool bIsBipodDeploy; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ReplicateModularWeaponInfo
// Size: 0xa0 (Inherited: 0x00)
struct FReplicateModularWeaponInfo {
public:

	struct TArray<struct FGPModularWeaponPartNode> WeaponPartNodes; // 0x00(0x10)
	uint64_t PoorItemId; // 0x10(0x08)
	struct FWeaponSkinInfo SkinInfo; // 0x18(0x88)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponReplicateExtraData
// Size: 0xf0 (Inherited: 0x0c)
struct FWeaponReplicateExtraData : public FFastArraySerializerItem {
public:

	struct FWeaponIdentity WeaponIdentity; // 0x0c(0x04)
	uint64_t WeaponID; // 0x10(0x08)
	uint64_t Guid; // 0x18(0x08)
	uint32_t WeaponEquipPosition; // 0x20(0x04)
	char WeaponSlot; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct TArray<struct FWeaponReplicatePartNode> ReplicatePartNodes; // 0x28(0x10)
	char pad_38[0x18]; // 0x38(0x18)
	uint64_t PoorItemId; // 0x50(0x08)
	enum class EWeaponAmmoLogicType AmmoLogic; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FWeaponSkinInfo SkinInfo; // 0x60(0x88)
	char pad_E8[0x8]; // 0xe8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ItemInfoContext
// Size: 0x60 (Inherited: 0x00)
struct FItemInfoContext {
public:

	int32_t Durability; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<uint64_t> TuneIds; // 0x08(0x10)
	struct TArray<float> TuneValues; // 0x18(0x10)
	char BindType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	uint64_t BindPlayerId; // 0x30(0x08)
	bool bRawBind; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FModularWeaponPartNodeAttr NodeAttr; // 0x40(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ModularWeaponDynamicAttrbuites
// Size: 0x50 (Inherited: 0x28)
struct FModularWeaponDynamicAttrbuites : public FModularWeaponDynamicAttributesBase {
public:

	uint64_t CharacterOwnerUin; // 0x28(0x08)
	struct FAmmoContext AmmoContext; // 0x30(0x10)
	struct FOverHeatContext OverHeatContext; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponOBAmmoDataInfo
// Size: 0x18 (Inherited: 0x00)
struct FWeaponOBAmmoDataInfo {
public:

	struct FWeaponIdentity WeaponIdentity; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FAmmoContext OBWeaponAmmoData; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AmmoKeyFrame
// Size: 0x38 (Inherited: 0x28)
struct FAmmoKeyFrame : public FBasePreViewFrame {
public:

	int32_t ClipAmmo; // 0x28(0x04)
	int32_t CarriedAmmo; // 0x2c(0x04)
	struct FAmmoDelta Delta; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimNode_SkeletalControlGunSwing
// Size: 0x720 (Inherited: 0xf8)
struct FAnimNode_SkeletalControlGunSwing : public FAnimNode_SkeletalControlBase {
public:

	char pad_F8[0x8]; // 0xf8(0x08)
	struct FVirtualParent_BoneGroup VBADSGunSwingTwoShoulder; // 0x100(0xb0)
	struct FVirtualParent_BoneGroup VBGunSwingTwoShoulder; // 0x1b0(0xb0)
	struct FVirtualParent_BoneGroup VBGunSwingRightArm; // 0x260(0xb0)
	struct FVirtualParent_BoneGroup VBGunSwingLeftArm; // 0x310(0xb0)
	struct FVirtualParent_BoneGroup VBMovingGunSwingTwoShoulder; // 0x3c0(0xb0)
	struct FVirtualParent_BoneGroup VBMovingGunSwingLeftHand; // 0x470(0xb0)
	struct FVirtualParent_BoneGroup OnlyRightShoulder; // 0x520(0xb0)
	struct FAnimNode_ModifyBone MBMovingGunSwingLeftShoulder; // 0x5d0(0x150)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AttackLevelCorrection
// Size: 0x138 (Inherited: 0x10)
struct FAttackLevelCorrection : public FDescRowBase {
public:

	int32_t GroupID; // 0x10(0x04)
	bool bCommon; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FAttackLevelParamGroup NegativeLevel1; // 0x18(0x14)
	struct FAttackLevelParamGroup NegativeLevel2; // 0x2c(0x14)
	struct FAttackLevelParamGroup NegativeLevel3; // 0x40(0x14)
	struct FAttackLevelParamGroup NegativeLevel4; // 0x54(0x14)
	struct FAttackLevelParamGroup NegativeLevel5; // 0x68(0x14)
	struct FAttackLevelParamGroup NegativeLevel6; // 0x7c(0x14)
	struct FAttackLevelParamGroup Level0; // 0x90(0x14)
	struct FAttackLevelParamGroup Level1; // 0xa4(0x14)
	struct FAttackLevelParamGroup Level2; // 0xb8(0x14)
	struct FAttackLevelParamGroup Level3; // 0xcc(0x14)
	struct FAttackLevelParamGroup Level4; // 0xe0(0x14)
	struct FAttackLevelParamGroup Level5; // 0xf4(0x14)
	struct FAttackLevelParamGroup Level6; // 0x108(0x14)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FText DisplayLevelTxt; // 0x120(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataModifierAttributeInfo
// Size: 0x40 (Inherited: 0x08)
struct FWeaponDataModifierAttributeInfo : public FWeaponDataModifierAttributeInterface {
public:

	char pad_8[0x38]; // 0x08(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.BossOverridePointDamageValue
// Size: 0x0c (Inherited: 0x08)
struct FBossOverridePointDamageValue : public FBossOverrideDamageValue {
public:

	float ArmorDamage; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.BossOverridePhysicalDamageValue
// Size: 0x08 (Inherited: 0x08)
struct FBossOverridePhysicalDamageValue : public FBossOverrideDamageValue {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.BossOverrideExplodeDamageValue
// Size: 0x10 (Inherited: 0x08)
struct FBossOverrideExplodeDamageValue : public FBossOverrideDamageValue {
public:

	float MinDamage; // 0x08(0x04)
	int32_t PenetrateLevel; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ItemHealthAttributeEffect
// Size: 0x90 (Inherited: 0x88)
struct FItemHealthAttributeEffect : public FGPAttributeEffect {
public:

	uint64_t ItemID; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.EquipmentAttributeEffect
// Size: 0x90 (Inherited: 0x88)
struct FEquipmentAttributeEffect : public FGPAttributeEffect {
public:

	uint64_t EquipmentItemId; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.BuffAttributeEffect
// Size: 0x98 (Inherited: 0x88)
struct FBuffAttributeEffect : public FGPAttributeEffect {
public:

	uint32_t BuffGUID; // 0x88(0x04)
	uint32_t BuffId; // 0x8c(0x04)
	int32_t SkillId; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageAttributeEffect
// Size: 0xa0 (Inherited: 0x88)
struct FDamageAttributeEffect : public FGPAttributeEffect {
public:

	uint64_t AttackValueId; // 0x88(0x08)
	char pad_90[0x10]; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.LaserItemMesh
// Size: 0x50 (Inherited: 0x18)
struct FLaserItemMesh : public FLaserItemBase {
public:

	char pad_18[0x8]; // 0x18(0x08)
	struct UStaticMesh* LaserMesh; // 0x20(0x08)
	struct UMaterialInterface* LaserMat; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
	struct UStaticMeshComponent* MeshComp; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.LaserItemFx
// Size: 0x58 (Inherited: 0x18)
struct FLaserItemFx : public FLaserItemBase {
public:

	char pad_18[0x20]; // 0x18(0x20)
	struct UFXResourceContainerComponent* LineFXComp; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
	struct UFXResourceContainerComponent* PointFXComp; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageCharacterValidateBoxRow
// Size: 0x90 (Inherited: 0x10)
struct FDamageCharacterValidateBoxRow : public FDescRowBase {
public:

	struct FDamageVaildationCharacterBox StandValidateBox; // 0x10(0x24)
	struct FDamageVaildationCharacterBox CrouchValidateBox; // 0x34(0x24)
	struct FDamageVaildationCharacterBox ProneValidateBox; // 0x58(0x24)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FDamageVaildationCharacterBox> ExtendValidateBoxs; // 0x80(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TableColumnConstrain
// Size: 0x78 (Inherited: 0x00)
struct FTableColumnConstrain {
public:

	bool bEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ColumnName; // 0x04(0x08)
	bool bUnique; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FName> UniqueExtraCols; // 0x10(0x10)
	bool bForeignKeyEnable; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FTableForeignKeyConstrain ForeignKeyConstrain; // 0x28(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.EndFireSpring
// Size: 0x64 (Inherited: 0x00)
struct FEndFireSpring {
public:

	struct FWeaponSpringDamperConfig XSpringDamperConfig; // 0x00(0x10)
	struct FWeaponSpringDamperConfig YSpringDamperConfig; // 0x10(0x10)
	struct FWeaponSpringDamperConfig ZSpringDamperConfig; // 0x20(0x10)
	struct FWeaponSpringDamperConfig YawSpringDamperConfig; // 0x30(0x10)
	struct FWeaponSpringDamperConfig PitchSpringDamperConfig; // 0x40(0x10)
	struct FWeaponSpringDamperConfig RollSpringDamperConfig; // 0x50(0x10)
	float LifeSpan; // 0x60(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ProcedureAnimTrackData
// Size: 0x80 (Inherited: 0x08)
struct FProcedureAnimTrackData : public FProcedureAnimTrackDataBase {
public:

	float TrackDataLength; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	/*struct TSoftObjectPtr<UCurveVector>*/char PositionCurve[0x28]; // 0x10(0x28)
	float PositionAmplitude; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	/*struct TSoftObjectPtr<UCurveVector>*/char RotationCurve[0x28]; // 0x40(0x28)
	float RotationAmplitude; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct UCurveVector* LoadedPositionCurve; // 0x70(0x08)
	struct UCurveVector* LoadedRotationCurve; // 0x78(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FiringAnimParam_AdditiveAnimBase
// Size: 0x80 (Inherited: 0x00)
struct FFiringAnimParam_AdditiveAnimBase {
public:

	char pad_0[0x10]; // 0x00(0x10)
	struct FWeaponProcedureAnimBone PAnimBone; // 0x10(0x40)
	struct TArray<struct FProcedureAnimTrackData> PAnimTrackData; // 0x50(0x10)
	struct TArray<float> Probabilities; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FiringAnimParam_RandomSinKick
// Size: 0x30 (Inherited: 0x00)
struct FFiringAnimParam_RandomSinKick {
public:

	struct FRandomValue PitchRandA; // 0x00(0x0c)
	struct FRandomValue PitchRandB; // 0x0c(0x0c)
	struct FRandomValue YawRandA; // 0x18(0x0c)
	struct FRandomValue YawRandB; // 0x24(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RandomSpring
// Size: 0x40 (Inherited: 0x00)
struct FRandomSpring {
public:

	struct FRandomValue RandA; // 0x00(0x0c)
	struct FRandomValue RandB; // 0x0c(0x0c)
	struct FRandomValue RandC; // 0x18(0x0c)
	struct FRandomValue RandD; // 0x24(0x0c)
	char pad_30[0x10]; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataRecoilItem
// Size: 0x48 (Inherited: 0x00)
struct FWeaponDataRecoilItem {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FString HorizontalRecoils; // 0x08(0x10)
	struct FRandomValue HorizontalRandomRecoil; // 0x18(0x0c)
	float HorizontalScale; // 0x24(0x04)
	struct FString VerticalRecoils; // 0x28(0x10)
	struct FRandomValue VerticalRandomRecoil; // 0x38(0x0c)
	float VerticalScale; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponRecoilPair
// Size: 0x38 (Inherited: 0x00)
struct FWeaponRecoilPair {
public:

	struct FString Recoils; // 0x00(0x10)
	struct FRandomValue RandomRecoil; // 0x10(0x0c)
	float Scale; // 0x1c(0x04)
	char pad_20[0x18]; // 0x20(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FiringAnimParam_SpringKick
// Size: 0x70 (Inherited: 0x00)
struct FFiringAnimParam_SpringKick {
public:

	float SightOffset; // 0x00(0x04)
	char NumOfKickPerFire; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FRandomValue RandValue; // 0x08(0x0c)
	struct FRandomValue AbsRange; // 0x14(0x0c)
	struct FRandomValue RandC; // 0x20(0x0c)
	struct FRandomValue RandD; // 0x2c(0x0c)
	struct FCurveBlendOutConfig CurveBlendOutConfig; // 0x38(0x30)
	float SideAimingScale; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FiringAnimParam_RandomKick
// Size: 0xc8 (Inherited: 0x00)
struct FFiringAnimParam_RandomKick {
public:

	struct FVector2D SightOffset; // 0x00(0x08)
	bool bRangeUseRect; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FRandomValue RandomYaw; // 0x0c(0x0c)
	struct FRandomValue RandomPitch; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FRandomKickTrans GunKickTrans; // 0x28(0x18)
	bool bStepRangeUseRect; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FRandomValue StepRangeYaw; // 0x44(0x0c)
	struct FRandomValue StepRangePitch; // 0x50(0x0c)
	enum class EGPWeaponEasingType KickEaseType; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FCurveBlendOutConfig CurveBlendOutYaw; // 0x60(0x30)
	struct FCurveBlendOutConfig CurveBlendOutPitch; // 0x90(0x30)
	struct FVector2D SideAimingRangeScale; // 0xc0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillLogicStateBit
// Size: 0x50 (Inherited: 0x28)
struct FSkillLogicStateBit : public FSkillLogicStateBitBase {
public:

	struct TArray<char> NodeEnterBit; // 0x28(0x10)
	struct TArray<char> NodeAckBit; // 0x38(0x10)
	bool AbilityLeavedAck; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillLogicStateBit3P
// Size: 0x38 (Inherited: 0x28)
struct FSkillLogicStateBit3P : public FSkillLogicStateBitBase {
public:

	struct TArray<char> NodeEnterBit; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPActionSequence_SprintInterval
// Size: 0x28 (Inherited: 0x18)
struct FGPActionSequence_SprintInterval : public FGPActionSequenceBase {
public:

	char pad_18[0x10]; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAdvancedTickingComponentPostUpdateWorkTickFunction
// Size: 0x68 (Inherited: 0x68)
struct FGPAdvancedTickingComponentPostUpdateWorkTickFunction : public FGPAdvancedTickingComponentBaseTickFunction {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAdvancedTickingComponentPostPhysicsTickFunction
// Size: 0x68 (Inherited: 0x68)
struct FGPAdvancedTickingComponentPostPhysicsTickFunction : public FGPAdvancedTickingComponentBaseTickFunction {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAdvancedTickingComponentDuringPhysicsTickFunction
// Size: 0x68 (Inherited: 0x68)
struct FGPAdvancedTickingComponentDuringPhysicsTickFunction : public FGPAdvancedTickingComponentBaseTickFunction {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAdvancedTickingComponentPrePhysicsTickFunction
// Size: 0x68 (Inherited: 0x68)
struct FGPAdvancedTickingComponentPrePhysicsTickFunction : public FGPAdvancedTickingComponentBaseTickFunction {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAI3AnimInstanceProxy
// Size: 0x750 (Inherited: 0x748)
struct FGPAI3AnimInstanceProxy : public FGPAnimInstanceProxyBase {
public:

	float StrafeMovingDirection; // 0x748(0x04)
	char pad_74C[0x4]; // 0x74c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAIAnimInstanceProxy
// Size: 0xba0 (Inherited: 0x748)
struct FGPAIAnimInstanceProxy : public FGPAnimInstanceProxyBase {
public:

	bool bEnabledMotionAction; // 0x748(0x01)
	char pad_749[0x7]; // 0x749(0x07)
	struct UAimOffsetBlendSpace* ActiveAO; // 0x750(0x08)
	struct UBlendSpaceBase* StandMoveBS; // 0x758(0x08)
	struct UAnimSequence* IKHandPose; // 0x760(0x08)
	struct UAnimSequence* StandDeathAnim; // 0x768(0x08)
	struct UAnimSequence* CrouchDeathAnim; // 0x770(0x08)
	struct UAnimSequence* SwimDeathAnim; // 0x778(0x08)
	struct UAnimSequence* BeAssassinateDeathAnim; // 0x780(0x08)
	struct UBlendSpace* HitAnim; // 0x788(0x08)
	bool bUseSimpleHitAnim; // 0x790(0x01)
	char pad_791[0x7]; // 0x791(0x07)
	struct UAnimSequence* SimpleHitAnim; // 0x798(0x08)
	struct UAnimSequence* BasicLocoToggleTrueAnim; // 0x7a0(0x08)
	struct UAnimSequence* BasicLocoToggleFalseAnim; // 0x7a8(0x08)
	struct UAnimSequence* AdditiveLocomotionAnimByState; // 0x7b0(0x08)
	bool bToggleLocomotionChangedCache; // 0x7b8(0x01)
	bool bUseAddLocoAnimByState; // 0x7b9(0x01)
	char pad_7BA[0x2]; // 0x7ba(0x02)
	float MoveLoopStartPos; // 0x7bc(0x04)
	float MoveLoopAnimScale; // 0x7c0(0x04)
	float LocoCacheBlendTime; // 0x7c4(0x04)
	bool bForbidSpeedWarping; // 0x7c8(0x01)
	char pad_7C9[0x3]; // 0x7c9(0x03)
	float SpeedWarpingScale; // 0x7cc(0x04)
	bool bPlayLocoAdditiveAnim; // 0x7d0(0x01)
	char pad_7D1[0x7]; // 0x7d1(0x07)
	struct UAnimSequence* LocoAdditiveAnim; // 0x7d8(0x08)
	float LocoAdditiveAnimBlendTime; // 0x7e0(0x04)
	float RightSpeed; // 0x7e4(0x04)
	float LowPassFilterFactor; // 0x7e8(0x04)
	char pad_7EC[0x4]; // 0x7ec(0x04)
	float MoveLoopPlayPos; // 0x7f0(0x04)
	bool bUseMotionActionAnim; // 0x7f4(0x01)
	char pad_7F5[0x3]; // 0x7f5(0x03)
	int32_t ActionId; // 0x7f8(0x04)
	char pad_7FC[0x4]; // 0x7fc(0x04)
	struct UAnimSequenceBase* ActionAnim; // 0x800(0x08)
	float ActionAnimPlayPosition; // 0x808(0x04)
	float ActionAnimPlayRate; // 0x80c(0x04)
	bool bActionAnimLoop; // 0x810(0x01)
	char pad_811[0x7]; // 0x811(0x07)
	struct UAnimSequence* WeaponAdditiveAnim; // 0x818(0x08)
	float WeaponAdditiveAlpha; // 0x820(0x04)
	bool bForbidLeftHandIK; // 0x824(0x01)
	bool bForbidHandIK; // 0x825(0x01)
	char pad_826[0x2]; // 0x826(0x02)
	float LeftHandHoldGunIKAlpha; // 0x828(0x04)
	bool bChangingClip; // 0x82c(0x01)
	char pad_82D[0x5]; // 0x82d(0x05)
	bool bShouldForbidBasicAO; // 0x832(0x01)
	bool bEnableBasicAO; // 0x833(0x01)
	float AOBlendAlpha; // 0x834(0x04)
	float AOAimingPitch; // 0x838(0x04)
	float AOAimingYaw; // 0x83c(0x04)
	bool bIsMoving; // 0x840(0x01)
	bool bIsDead; // 0x841(0x01)
	bool bIsCarried; // 0x842(0x01)
	bool bAttachPawnUnderFPP; // 0x843(0x01)
	bool bIsCarriedAndAttachPawnUnderFPP; // 0x844(0x01)
	bool bIsCarriedAndNotAttachPawnUnderFPP; // 0x845(0x01)
	bool bIsHitting; // 0x846(0x01)
	enum class EAnimHitPart HitPart; // 0x847(0x01)
	bool bIsWeaponChangeClip; // 0x848(0x01)
	enum class EAnimationPlayType CurrentAnimationPlayType; // 0x849(0x01)
	enum class EDirection DeathShotDir; // 0x84a(0x01)
	enum class EChracterPoseType DeathPose; // 0x84b(0x01)
	float CurrAttachPawnVelocity; // 0x84c(0x04)
	float CurrAttachPawnPlayRate; // 0x850(0x04)
	bool bIsStandPose; // 0x854(0x01)
	bool bIsCrouchPose; // 0x855(0x01)
	bool bIsSwimPose; // 0x856(0x01)
	bool bEnableDyingSnapShot; // 0x857(0x01)
	bool bEnableBeCarryDyingPose; // 0x858(0x01)
	bool bEnableDyingHipAdjust; // 0x859(0x01)
	bool bShouldUseDeadEndPose; // 0x85a(0x01)
	bool bDeathFromBeAssassinate; // 0x85b(0x01)
	float HitVectorX; // 0x85c(0x04)
	float HitVectorY; // 0x860(0x04)
	bool bFindIKSocket; // 0x864(0x01)
	bool bFindWeapon; // 0x865(0x01)
	char pad_866[0x2]; // 0x866(0x02)
	struct FVector WeaponGripLocation; // 0x868(0x0c)
	struct FRotator WeaponGripRotation; // 0x874(0x0c)
	char pad_880[0x18]; // 0x880(0x18)
	bool bForbidHandGripPose; // 0x898(0x01)
	char pad_899[0x7]; // 0x899(0x07)
	struct USkeletalMeshComponent* ParentMesh; // 0x8a0(0x08)
	struct FVector HipsOffset; // 0x8a8(0x0c)
	struct FRotator HipsRotation; // 0x8b4(0x0c)
	bool bUseInteractLeftHandIK; // 0x8c0(0x01)
	char pad_8C1[0x3]; // 0x8c1(0x03)
	struct FVector LeftHandInteractSocketLocation; // 0x8c4(0x0c)
	bool FobidFootIK; // 0x8d0(0x01)
	char pad_8D1[0x3]; // 0x8d1(0x03)
	int32_t AnimLODLevel; // 0x8d4(0x04)
	bool bOnlyLocomotion; // 0x8d8(0x01)
	bool bShouldForbidHiting; // 0x8d9(0x01)
	bool bInVehicle; // 0x8da(0x01)
	bool bInVehicleAndNotMachineGun; // 0x8db(0x01)
	bool bInVehiclePassenger; // 0x8dc(0x01)
	bool bInVehicleDriver; // 0x8dd(0x01)
	bool bDirver; // 0x8de(0x01)
	bool bDirverOrVehicleIdle; // 0x8df(0x01)
	bool bUseLocomotionIdle; // 0x8e0(0x01)
	bool bUseVehicleIdle; // 0x8e1(0x01)
	char pad_8E2[0x2]; // 0x8e2(0x02)
	int32_t SeatPos; // 0x8e4(0x04)
	float DriveTurnX; // 0x8e8(0x04)
	float LockSiteAlpha; // 0x8ec(0x04)
	float DriveTurnY; // 0x8f0(0x04)
	struct FVector SiteRootLocation; // 0x8f4(0x0c)
	struct FRotator SiteRootRotation; // 0x900(0x0c)
	char pad_90C[0x4]; // 0x90c(0x04)
	struct UAnimSequence* VehicleIdle_3P; // 0x910(0x08)
	struct UAimOffsetBlendSpace* VehicleDriveTurnBlend_3P; // 0x918(0x08)
	bool bEnableDoubleHandIK; // 0x920(0x01)
	bool bMachineGunMoveTurn; // 0x921(0x01)
	char pad_922[0x2]; // 0x922(0x02)
	float MoveTurnX; // 0x924(0x04)
	float DoubleIKAlpha; // 0x928(0x04)
	char pad_92C[0x4]; // 0x92c(0x04)
	struct FTransform DoubleIK_LeftTransform; // 0x930(0x30)
	struct FTransform DoubleIK_RightTransform; // 0x960(0x30)
	struct FVector DoubleIK_LeftLocation; // 0x990(0x0c)
	struct FVector DoubleIK_RightLocation; // 0x99c(0x0c)
	char pad_9A8[0x8]; // 0x9a8(0x08)
	struct FTransform PlayerPointTransform; // 0x9b0(0x30)
	struct FVector PlayerPointLocation; // 0x9e0(0x0c)
	struct FVector DoubleIK_SpineLocation; // 0x9ec(0x0c)
	struct FRotator DoubleIK_SpineRotator; // 0x9f8(0x0c)
	bool bIsSceneWeaponFiring; // 0xa04(0x01)
	char pad_A05[0x3]; // 0xa05(0x03)
	struct UAnimSequence* SceneWeaponRecoilAnim; // 0xa08(0x08)
	struct UAnimSequence* BeAssassinateTPPAnim; // 0xa10(0x08)
	float PlayBeAssassinateSequenceTime; // 0xa18(0x04)
	bool bPlayBeAssassinateSequence; // 0xa1c(0x01)
	char pad_A1D[0x3]; // 0xa1d(0x03)
	struct FRotator BeAssassinateAnimRot; // 0xa20(0x0c)
	bool bShouldUpdateAnimation; // 0xa2c(0x01)
	bool bShouldStand; // 0xa2d(0x01)
	bool bShouldCrouch; // 0xa2e(0x01)
	bool bBlockingHit; // 0xa2f(0x01)
	struct FVector FloorNormal; // 0xa30(0x0c)
	struct FVector FloorOffset; // 0xa3c(0x0c)
	bool bEnableProneRotation; // 0xa48(0x01)
	char pad_A49[0x3]; // 0xa49(0x03)
	struct FRotator ProneRotation; // 0xa4c(0x0c)
	struct UGPAIAnimProxyComponent* AIAnimProxyComponent; // 0xa58(0x08)
	struct UCharacterMovementComponent* MovementComponent; // 0xa60(0x08)
	struct UAimOffsetBlendSpace* StandAIAO; // 0xa68(0x08)
	char pad_A70[0x8]; // 0xa70(0x08)
	struct AGPCharacter* OwnerPawn; // 0xa78(0x08)
	/*struct TScriptInterface<IWeaponInterface>*/char CurInv[0x10]; // 0xa80(0x10)
	float AnimBPTickInterval; // 0xa90(0x04)
	char pad_A94[0x2c]; // 0xa94(0x2c)
	struct UGPAnimProxyComponent* AnimProxyComponent; // 0xac0(0x08)
	/*struct TScriptInterface<IWeaponDataComponentAnimInterface>*/char WeaponAnimDataComponent[0x10]; // 0xac8(0x10)
	struct UWeaponDataComponentAnim* WeaponAnimDataComponentRealComp; // 0xad8(0x08)
	struct UGPAnimDataComponent* AnimDataComponent; // 0xae0(0x08)
	/*struct TScriptInterface<IWeaponDataComponentAppearanceInterface>*/char WeaponAppearanceDataComponent[0x10]; // 0xae8(0x10)
	struct UWeaponDataComponentAdapter* WeaponDataComponentAdapter; // 0xaf8(0x08)
	struct UWeaponFuncComponentOffset* FuncOffset; // 0xb00(0x08)
	/*struct TScriptInterface<IWeaponManagerInterface>*/char WeaponManager[0x10]; // 0xb08(0x10)
	struct UGPFightStateComponent* FightStateComponent; // 0xb18(0x08)
	struct UGPVehicleDataComponent* VehicleDataComponent; // 0xb20(0x08)
	struct UGPHealthDataComponent* HealthDataComponent; // 0xb28(0x08)
	struct UGPAIAnimInstance* AnimInstance; // 0xb30(0x08)
	struct AWeaponBase* WeaponInv; // 0xb38(0x08)
	char pad_B40[0x60]; // 0xb40(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPPendantAnimInstanceProxy
// Size: 0x760 (Inherited: 0x748)
struct FGPPendantAnimInstanceProxy : public FGPAnimInstanceProxyBase {
public:

	struct UCurveFloat* ParticleDampingCoefficientCurve; // 0x748(0x08)
	struct UCurveFloat* ParticleRadiusCurve; // 0x750(0x08)
	char pad_758[0x8]; // 0x758(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPVehicleAnimInstanceProxy
// Size: 0xeb0 (Inherited: 0x748)
struct FGPVehicleAnimInstanceProxy : public FGPAnimInstanceProxyBase {
public:

	struct UAimOffsetBlendSpace* ActiveAO; // 0x748(0x08)
	struct UBlendSpaceBase* LeanPeekAdditiveBS; // 0x750(0x08)
	struct UAnimSequence* StandIdleAnim; // 0x758(0x08)
	struct UBlendSpaceBase* FallingDownBS; // 0x760(0x08)
	struct UBlendSpaceBase* StandMoveBS; // 0x768(0x08)
	struct UBlendSpaceBase* SprintMoveBS; // 0x770(0x08)
	struct UAnimSequence* ADSIdleAdditive; // 0x778(0x08)
	struct UAnimSequence* AimLeftHandAdditivePose; // 0x780(0x08)
	struct UAnimSequence* IdleToADS; // 0x788(0x08)
	struct UBlendSpaceBase* ADSIdle; // 0x790(0x08)
	struct UAnimSequence* ADSToIdle; // 0x798(0x08)
	struct UAnimSequence* IKHandPose; // 0x7a0(0x08)
	struct UBlendSpaceBase* ImpendingDeathBS; // 0x7a8(0x08)
	struct UAnimSequence* ADSIdleStaticSeq; // 0x7b0(0x08)
	struct UAnimSequence* Idle2ImpendingDeath; // 0x7b8(0x08)
	struct UAnimSequence* ImpendingDeathPose; // 0x7c0(0x08)
	struct UAnimSequence* Idle2Death; // 0x7c8(0x08)
	struct UBlendSpaceBase* HitBS; // 0x7d0(0x08)
	struct UAnimSequence* StandDeathAnim; // 0x7d8(0x08)
	bool bShouldForbidBasicAO; // 0x7e0(0x01)
	bool bEnableFPPAO; // 0x7e1(0x01)
	bool bForbidLeftHandIK; // 0x7e2(0x01)
	bool bForbidHandIK; // 0x7e3(0x01)
	float TwistAlpha; // 0x7e4(0x04)
	bool bShouldStand; // 0x7e8(0x01)
	bool bShouldStop; // 0x7e9(0x01)
	bool bShouldHeavyLand; // 0x7ea(0x01)
	bool bShouldNormalLand; // 0x7eb(0x01)
	bool bShouldFloatInAir; // 0x7ec(0x01)
	bool bInTransition; // 0x7ed(0x01)
	bool bBackToStand; // 0x7ee(0x01)
	bool bShouldEnterStandMove; // 0x7ef(0x01)
	bool bDirectToStandMove; // 0x7f0(0x01)
	bool bLandToStand; // 0x7f1(0x01)
	bool bModifySpines; // 0x7f2(0x01)
	bool bForbidTPPWeaponRecoil; // 0x7f3(0x01)
	bool bPlayerParachute; // 0x7f4(0x01)
	bool bOnlyParachute; // 0x7f5(0x01)
	bool bIsSlideTackle; // 0x7f6(0x01)
	bool bIsBurden; // 0x7f7(0x01)
	bool bIsMoving; // 0x7f8(0x01)
	bool bIsNeedMovingUpper; // 0x7f9(0x01)
	bool bThrowable; // 0x7fa(0x01)
	bool bFireDuringThrowable; // 0x7fb(0x01)
	bool bPoseModifiedDuringThrowable; // 0x7fc(0x01)
	bool bNeedUpperBodyAdditiveDuringThrowable; // 0x7fd(0x01)
	char pad_7FE[0x2]; // 0x7fe(0x02)
	float StandAdditiveBlendAlpha; // 0x800(0x04)
	bool bFastRunning; // 0x804(0x01)
	bool bIsZooming; // 0x805(0x01)
	bool bIsTPPZooming; // 0x806(0x01)
	bool isInAimingState; // 0x807(0x01)
	bool isInZoomingAimingIdle; // 0x808(0x01)
	bool isInZoomingIdle; // 0x809(0x01)
	bool isInZoomingIn; // 0x80a(0x01)
	bool isInZoomingOut; // 0x80b(0x01)
	float ZoomProcessAnimElapsedTime; // 0x80c(0x04)
	float ZoomOutProcessAnimElapsedTime; // 0x810(0x04)
	bool isInZoomOutAfterCast; // 0x814(0x01)
	char pad_815[0x3]; // 0x815(0x03)
	float ADSIdleStableFOVRate; // 0x818(0x04)
	float ZoomWaggleScope; // 0x81c(0x04)
	float ZoomWaggleSpeed; // 0x820(0x04)
	float AimLeftHandAlpha; // 0x824(0x04)
	bool bIsFalling; // 0x828(0x01)
	bool bIsEmptyHand; // 0x829(0x01)
	bool bIsDead; // 0x82a(0x01)
	bool bIsPalsy; // 0x82b(0x01)
	bool bIsCarried; // 0x82c(0x01)
	bool bAttachPawnUnderFPP; // 0x82d(0x01)
	bool bIsCarriedAndAttachPawnUnderFPP; // 0x82e(0x01)
	bool bIsCarriedAndNotAttachPawnUnderFPP; // 0x82f(0x01)
	bool bIsImpendingDeath; // 0x830(0x01)
	bool bIsImpendingDeathLayingOnGround; // 0x831(0x01)
	bool bIsPlayingRagdollPhysics; // 0x832(0x01)
	bool bUseSpineBoneRotate; // 0x833(0x01)
	bool bUseLeftShoulderBoneRotate; // 0x834(0x01)
	bool bIsHitting; // 0x835(0x01)
	bool bIsWeaponChangeClip; // 0x836(0x01)
	bool bIsChangeClipBySprint; // 0x837(0x01)
	struct FRotator Spine2BoneRotatorAll; // 0x838(0x0c)
	struct FVector Spine2BoneLocationAll; // 0x844(0x0c)
	struct FRotator LeftShoulerBoneRotatorAll; // 0x850(0x0c)
	struct FVector LeftShoulerBoneLocationAll; // 0x85c(0x0c)
	struct FRotator SpineBoneRotator; // 0x868(0x0c)
	struct FRotator LeftShoulderRotator; // 0x874(0x0c)
	struct FVector SpineLocationOffset; // 0x880(0x0c)
	struct FRotator LeanPeekRotator; // 0x88c(0x0c)
	struct FVector LeanPeekOffset; // 0x898(0x0c)
	float LeanPeekValue; // 0x8a4(0x04)
	float LeanPeekAplha; // 0x8a8(0x04)
	float RecoilAlpha; // 0x8ac(0x04)
	float FireEndAlpha; // 0x8b0(0x04)
	float FireEndAnimEvalTime; // 0x8b4(0x04)
	float ADSToIdleSequenceLength; // 0x8b8(0x04)
	float IdleToADSSequenceLength; // 0x8bc(0x04)
	float ZoomAdditiveAlpha; // 0x8c0(0x04)
	float AOBlendAlpha; // 0x8c4(0x04)
	float AOAimingPitch; // 0x8c8(0x04)
	float AOAimingYaw; // 0x8cc(0x04)
	float AOBlendOutTime; // 0x8d0(0x04)
	bool NeedGunFocus; // 0x8d4(0x01)
	char TurnningMode; // 0x8d5(0x01)
	bool bIsTurning; // 0x8d6(0x01)
	char pad_8D7[0x1]; // 0x8d7(0x01)
	float BeginTurningTime; // 0x8d8(0x04)
	enum class EAnimationPlayType CurrentAnimationPlayType; // 0x8dc(0x01)
	enum class EAnimationPlayType CurrentSkillGroupAnimationPlayType; // 0x8dd(0x01)
	bool bUnderFPP; // 0x8de(0x01)
	bool bHasHorizontalVelocity; // 0x8df(0x01)
	bool bHasVerticalVelocity; // 0x8e0(0x01)
	char pad_8E1[0x3]; // 0x8e1(0x03)
	float MovingDirection; // 0x8e4(0x04)
	float NormalizedSpeed; // 0x8e8(0x04)
	float BSPlayingRate; // 0x8ec(0x04)
	float VerticalVelocity; // 0x8f0(0x04)
	float HorizontalVelocity; // 0x8f4(0x04)
	float CurrFloorAngle; // 0x8f8(0x04)
	float CurrAttachPawnVelocity; // 0x8fc(0x04)
	float CurrAttachPawnPlayRate; // 0x900(0x04)
	struct FVector CharacterVelocity; // 0x904(0x0c)
	enum class EDirection DeathShotDir; // 0x910(0x01)
	enum class EChracterPoseType DeathPose; // 0x911(0x01)
	bool bIsStandPose; // 0x912(0x01)
	bool bIsImpendingDeathPose; // 0x913(0x01)
	bool bDeathFromParachute; // 0x914(0x01)
	bool bHeadShotDeath; // 0x915(0x01)
	bool bUseRandDeathAnim; // 0x916(0x01)
	bool bDeathFromFalling; // 0x917(0x01)
	bool bDeathFromSwimming; // 0x918(0x01)
	bool bEnableDyingSnapShot; // 0x919(0x01)
	bool bEnableBeCarryDyingPose; // 0x91a(0x01)
	char pad_91B[0x1]; // 0x91b(0x01)
	float HitVectorX; // 0x91c(0x04)
	float HitVectorY; // 0x920(0x04)
	enum class EAnimHitPart HitPart; // 0x924(0x01)
	bool bFindIKSocket; // 0x925(0x01)
	bool bFindWeapon; // 0x926(0x01)
	char pad_927[0x1]; // 0x927(0x01)
	struct FVector WeaponGripLocation; // 0x928(0x0c)
	struct FRotator WeaponGripRotation; // 0x934(0x0c)
	float FlyUpToFlyIdleBlendTime; // 0x940(0x04)
	char pad_944[0x18]; // 0x944(0x18)
	bool bForbidHandGripPose; // 0x95c(0x01)
	bool bEnableAdditiveAnim; // 0x95d(0x01)
	char pad_95E[0x2]; // 0x95e(0x02)
	struct FTransform AdditiveAnimTransform; // 0x960(0x30)
	struct FVector AdditiveAnimLocation; // 0x990(0x0c)
	struct FRotator AdditiveAnimRotation; // 0x99c(0x0c)
	struct FVector AdditiveAnimLeftHandLocation; // 0x9a8(0x0c)
	bool isInteracting; // 0x9b4(0x01)
	char pad_9B5[0x3]; // 0x9b5(0x03)
	float InteractingPercent; // 0x9b8(0x04)
	char pad_9BC[0x4]; // 0x9bc(0x04)
	struct USkeletalMeshComponent* ParentMesh; // 0x9c0(0x08)
	struct FRotator GunSwingAdditiveRotator; // 0x9c8(0x0c)
	struct FVector MoveTurnSpringAdditiveOffset; // 0x9d4(0x0c)
	float GunAOHorAxis; // 0x9e0(0x04)
	float GunAOVerAxis; // 0x9e4(0x04)
	struct FVector HipsOffset; // 0x9e8(0x0c)
	struct FRotator HipsRotation; // 0x9f4(0x0c)
	bool bUse3PSpineHeight; // 0xa00(0x01)
	char pad_A01[0x3]; // 0xa01(0x03)
	struct FVector CurrentSpineHeight; // 0xa04(0x0c)
	bool bUseInteractLeftHandIK; // 0xa10(0x01)
	char pad_A11[0x3]; // 0xa11(0x03)
	struct FVector LeftHandInteractSocketLocation; // 0xa14(0x0c)
	struct FTransform LeftHandInteractSocketTransform; // 0xa20(0x30)
	float LeftHandInteractIKBlendTime; // 0xa50(0x04)
	bool bHasVBSpineIkGunBone; // 0xa54(0x01)
	char pad_A55[0x3]; // 0xa55(0x03)
	int32_t AnimLODLevel; // 0xa58(0x04)
	bool bOnlyLocomotion; // 0xa5c(0x01)
	bool bShouldForbidZoom; // 0xa5d(0x01)
	bool bForbidTPPZooming; // 0xa5e(0x01)
	bool bShouldForbidHiting; // 0xa5f(0x01)
	bool AnimLODLevelThanLod1; // 0xa60(0x01)
	char pad_A61[0x3]; // 0xa61(0x03)
	struct FVector SpinePitchOffset; // 0xa64(0x0c)
	bool bInVehicle; // 0xa70(0x01)
	bool bInVehicleAndNotMachineGun; // 0xa71(0x01)
	bool bInVehiclePassenger; // 0xa72(0x01)
	bool bInVehicleDriver; // 0xa73(0x01)
	bool bInVehicleWeapon; // 0xa74(0x01)
	bool bWaitingForVehicleWeapon; // 0xa75(0x01)
	bool bWaitingForVehicleWeaponChanged; // 0xa76(0x01)
	bool bDirver; // 0xa77(0x01)
	bool bDriverNotWeapon; // 0xa78(0x01)
	bool bDirverOrVehicleIdle; // 0xa79(0x01)
	bool bDriverOrWeaponOrVehicleIdle; // 0xa7a(0x01)
	bool bVehicleAimBS; // 0xa7b(0x01)
	bool bVehicleLeanOut; // 0xa7c(0x01)
	bool bVehicleLeanOut_TPP; // 0xa7d(0x01)
	bool bUseLocomotionIdle; // 0xa7e(0x01)
	bool bUseVehicleIdle; // 0xa7f(0x01)
	int32_t SeatPos; // 0xa80(0x04)
	float DriveTurnX; // 0xa84(0x04)
	float LockSiteAlpha; // 0xa88(0x04)
	float DriveTurnY; // 0xa8c(0x04)
	float SoaringTime; // 0xa90(0x04)
	float FPPDriveTurnExplitTime; // 0xa94(0x04)
	struct FVector SiteRootLocation; // 0xa98(0x0c)
	struct FRotator SiteRootRotation; // 0xaa4(0x0c)
	struct UAnimSequence* VehicleIdle; // 0xab0(0x08)
	struct UAimOffsetBlendSpace* VehicleDriveTurnBlend; // 0xab8(0x08)
	struct UAimOffsetBlendSpace* VehiclePasOutBS; // 0xac0(0x08)
	struct UAimOffsetBlendSpace* VehicleSoaringBlend; // 0xac8(0x08)
	struct UAnimMontage* VehicleInteractive; // 0xad0(0x08)
	struct UAnimSequence* VehicleIdle_3P; // 0xad8(0x08)
	struct UAimOffsetBlendSpace* VehicleDriveTurnBlend_3P; // 0xae0(0x08)
	struct UAimOffsetBlendSpace* VehiclePasOutBS_3P; // 0xae8(0x08)
	struct UAimOffsetBlendSpace* VehicleSoaringBlend_3P; // 0xaf0(0x08)
	bool bEnableDoubleHandIK; // 0xaf8(0x01)
	bool bMachineGunMoveTurn; // 0xaf9(0x01)
	char pad_AFA[0x2]; // 0xafa(0x02)
	float MoveTurnX; // 0xafc(0x04)
	struct FTransform DoubleIK_LeftTransform; // 0xb00(0x30)
	struct FTransform DoubleIK_RightTransform; // 0xb30(0x30)
	struct FVector DoubleIK_LeftLocation; // 0xb60(0x0c)
	struct FVector DoubleIK_RightLocation; // 0xb6c(0x0c)
	char pad_B78[0x8]; // 0xb78(0x08)
	struct FTransform PlayerPointTransform; // 0xb80(0x30)
	struct FVector PlayerPointLocation; // 0xbb0(0x0c)
	struct FVector DoubleIK_SpineLocation; // 0xbbc(0x0c)
	struct FRotator DoubleIK_SpineRotator; // 0xbc8(0x0c)
	bool bEnableGenericDoubleHandIK; // 0xbd4(0x01)
	char pad_BD5[0x3]; // 0xbd5(0x03)
	struct FVector IK_LeftLocation; // 0xbd8(0x0c)
	struct FVector IK_RightLocation; // 0xbe4(0x0c)
	struct FRotator IK_LeftRotation; // 0xbf0(0x0c)
	struct FRotator IK_RightRotation; // 0xbfc(0x0c)
	float IK_RightAlpha; // 0xc08(0x04)
	float IK_LeftAlpha; // 0xc0c(0x04)
	struct FName IK_RightRootBone; // 0xc10(0x08)
	struct FName IK_LeftRootBone; // 0xc18(0x08)
	struct UAnimSequence* AssassinateTPPAnim; // 0xc20(0x08)
	float PlayAssassinateSequenceTime; // 0xc28(0x04)
	bool bPlayAssassinateSequence; // 0xc2c(0x01)
	char pad_C2D[0x3]; // 0xc2d(0x03)
	struct FRotator AssassinateAnimRot; // 0xc30(0x0c)
	char pad_C3C[0x4]; // 0xc3c(0x04)
	struct UAnimSequenceBase* LeftHandPoseAdditiveAnimForCurrentMag; // 0xc40(0x08)
	float LeftHandPoseAdditiveAlpha; // 0xc48(0x04)
	float GunOffsetAlpha; // 0xc4c(0x04)
	struct FRotator GunOffsetRotator; // 0xc50(0x0c)
	struct FVector GunOffsetLocation; // 0xc5c(0x0c)
	struct FVector GunShakeOffsetLocation; // 0xc68(0x0c)
	bool bLocalControlled; // 0xc74(0x01)
	char pad_C75[0x3]; // 0xc75(0x03)
	struct FVector GunFocusLocation; // 0xc78(0x0c)
	bool bShouldUpdateAnimation; // 0xc84(0x01)
	bool bShouldUpdateAIAnimation; // 0xc85(0x01)
	char pad_C86[0xa]; // 0xc86(0x0a)
	struct UAimOffsetBlendSpace* StandAO; // 0xc90(0x08)
	struct UAimOffsetBlendSpace* StandAIAO; // 0xc98(0x08)
	struct AGPCharacter* OwnerPawn; // 0xca0(0x08)
	/*struct TScriptInterface<IWeaponInterface>*/char CurInv[0x10]; // 0xca8(0x10)
	float AnimBPTickInterval; // 0xcb8(0x04)
	char pad_CBC[0x84]; // 0xcbc(0x84)
	struct UCurveFloat* RecoilRecoverCurve; // 0xd40(0x08)
	struct UCurveFloat* RecoilEndCurve; // 0xd48(0x08)
	struct UCurveFloat* RecoilFireForceAttenuationCurve; // 0xd50(0x08)
	struct UCurveFloat* ResistanceForceAttenuationCurve; // 0xd58(0x08)
	char pad_D60[0x10]; // 0xd60(0x10)
	struct UCurveFloat* TPPZoomAnimCurve; // 0xd70(0x08)
	char pad_D78[0x20]; // 0xd78(0x20)
	struct UGPAnimProxyComponent* AnimProxyComponent; // 0xd98(0x08)
	/*struct TScriptInterface<IWeaponDataComponentAnimInterface>*/char WeaponAnimDataComponent[0x10]; // 0xda0(0x10)
	struct UWeaponDataComponentAnim* WeaponAnimDataComponentRealComp; // 0xdb0(0x08)
	struct UGPAnimDataComponent* AnimDataComponent; // 0xdb8(0x08)
	/*struct TScriptInterface<IWeaponDataComponentAppearanceInterface>*/char WeaponAppearanceDataComponent[0x10]; // 0xdc0(0x10)
	struct UWeaponDataComponentAdapter* WeaponDataComponentAdapter; // 0xdd0(0x08)
	struct UWeaponFuncComponentZoom* WeaponFuncComponentZoom; // 0xdd8(0x08)
	struct UWeaponFuncComponentOffset* FuncOffset; // 0xde0(0x08)
	/*struct TScriptInterface<IWeaponFuncComponentAdditiveAnimInterface>*/char WeaponAdditiveAnimFuncComponent[0x10]; // 0xde8(0x10)
	struct UGPParachuteComponent* ParachuteComponent; // 0xdf8(0x08)
	struct UGPSlidingTackleComponent* SlidingTackleComponent; // 0xe00(0x08)
	struct UGPHealthDataComponent* HealthDataComponent; // 0xe08(0x08)
	struct UGPSprintComponent* SprintComponent; // 0xe10(0x08)
	struct UGPCameraModeComponent* CameraModeComponent; // 0xe18(0x08)
	struct UGPHandIKComponent* HandIKComponent; // 0xe20(0x08)
	/*struct TScriptInterface<IWeaponManagerInterface>*/char WeaponManager[0x10]; // 0xe28(0x10)
	struct UGPFightStateComponent* FightStateComponent; // 0xe38(0x08)
	struct UGPVehicleDataComponent* VehicleDataComponent; // 0xe40(0x08)
	struct UGPAIDataComponentAnim* AIAnimDataComponent; // 0xe48(0x08)
	struct AWeaponBase* WeaponInv; // 0xe50(0x08)
	char pad_E58[0x58]; // 0xe58(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPBalluteAnimInstanceProxy
// Size: 0x7a0 (Inherited: 0x748)
struct FGPBalluteAnimInstanceProxy : public FGPAnimInstanceProxyBase {
public:

	struct FVector IKLeftBoneLocation; // 0x748(0x0c)
	struct FRotator IKLeftBoneRotation; // 0x754(0x0c)
	struct FVector IKRightBoneLocation; // 0x760(0x0c)
	struct FRotator IKRightBoneRotation; // 0x76c(0x0c)
	float LeftIKAlpha; // 0x778(0x04)
	float RightIKAlpha; // 0x77c(0x04)
	float ParachuteSequenceTime; // 0x780(0x04)
	bool bEnableIK; // 0x784(0x01)
	char pad_785[0x3]; // 0x785(0x03)
	struct APlayerParachuteActor* PlayerParachuteActor; // 0x788(0x08)
	bool bFPPMesh; // 0x790(0x01)
	char pad_791[0xf]; // 0x791(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AIAnimItemBSBase
// Size: 0x30 (Inherited: 0x08)
struct FAIAnimItemBSBase : public FAIAnimItemBase {
public:

	/*struct TSoftObjectPtr<UBlendSpaceBase>*/char AnimBlendSpaceBase[0x28]; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AIAnimItemAnimSeq
// Size: 0x30 (Inherited: 0x08)
struct FAIAnimItemAnimSeq : public FAIAnimItemBase {
public:

	/*struct TSoftObjectPtr<UAnimSequence>*/char AnimSequence[0x28]; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AIAnimItemMontage
// Size: 0x30 (Inherited: 0x08)
struct FAIAnimItemMontage : public FAIAnimItemBase {
public:

	/*struct TSoftObjectPtr<UAnimMontage>*/char AnimMontage[0x28]; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAIAnimInstanceProxy_Locomotion
// Size: 0x9d0 (Inherited: 0x748)
struct FGPAIAnimInstanceProxy_Locomotion : public FGPAnimInstanceProxy_LocomotionBase {
public:

	struct UAnimSequence* CurrentIdleAnimation; // 0x748(0x08)
	struct UAnimSequence* CurrentIdleAdditive; // 0x750(0x08)
	struct UAnimSequence* CurrentIdle2Animation; // 0x758(0x08)
	bool bIdleAnimChangedToggle; // 0x760(0x01)
	char pad_761[0x7]; // 0x761(0x07)
	struct UBlendSpaceBase* CurrentMoveBS; // 0x768(0x08)
	struct UAnimSequence* CurrentMovingLoopAnim; // 0x770(0x08)
	bool bMovingAnimChangedToggle; // 0x778(0x01)
	bool bIs8DirMove; // 0x779(0x01)
	char pad_77A[0x6]; // 0x77a(0x06)
	struct UBlendSpaceBase* SpecialSprintBS; // 0x780(0x08)
	bool bShouldStand; // 0x788(0x01)
	bool bShouldEnterStandMove; // 0x789(0x01)
	bool bDirectToStandMove; // 0x78a(0x01)
	bool bIsCrouch; // 0x78b(0x01)
	bool bIsHalfSquat; // 0x78c(0x01)
	bool bIsMoving; // 0x78d(0x01)
	bool bResetMove; // 0x78e(0x01)
	bool bCacheMove; // 0x78f(0x01)
	bool bIsEmptyHand; // 0x790(0x01)
	bool bIsDead; // 0x791(0x01)
	bool bIsSpecialSprint; // 0x792(0x01)
	char pad_793[0x1]; // 0x793(0x01)
	float SpecialSprintType; // 0x794(0x04)
	bool bIsSprint; // 0x798(0x01)
	bool bIdleAdditveValid; // 0x799(0x01)
	char pad_79A[0x2]; // 0x79a(0x02)
	float IdleAdditiveAlpha; // 0x79c(0x04)
	float TurningAlpha; // 0x7a0(0x04)
	bool bPoseAdditveValid; // 0x7a4(0x01)
	char pad_7A5[0x3]; // 0x7a5(0x03)
	struct FRotator MovingRotation; // 0x7a8(0x0c)
	float MovingDirection; // 0x7b4(0x04)
	float NormalizedSpeed; // 0x7b8(0x04)
	float NormalizedSpeedWithLerp; // 0x7bc(0x04)
	float BSPlayingRate; // 0x7c0(0x04)
	float BSPlayingScale; // 0x7c4(0x04)
	float BSPlayingScaleRate; // 0x7c8(0x04)
	bool bSpeedWrapping; // 0x7cc(0x01)
	char pad_7CD[0x3]; // 0x7cd(0x03)
	float VerticalVelocity; // 0x7d0(0x04)
	float HorizontalVelocity; // 0x7d4(0x04)
	struct FVector Velocity; // 0x7d8(0x0c)
	float VelocityX; // 0x7e4(0x04)
	float VelocityY; // 0x7e8(0x04)
	float OriWrapingBlendTime; // 0x7ec(0x04)
	bool MoveMode; // 0x7f0(0x01)
	char pad_7F1[0x7]; // 0x7f1(0x07)
	struct UBlendSpaceBase* LeisureMovement; // 0x7f8(0x08)
	struct UBlendSpaceBase* SpecialLeisureMovement01BS; // 0x800(0x08)
	struct UBlendSpaceBase* SpecialLeisureMovement02BS; // 0x808(0x08)
	bool bUseSpecialLeisureMovement; // 0x810(0x01)
	char pad_811[0x3]; // 0x811(0x03)
	int32_t LeisureMovementType; // 0x814(0x04)
	float LeisureMoveTypeForBS; // 0x818(0x04)
	int32_t CharacterFightStateType; // 0x81c(0x04)
	struct UBlendSpaceBase* AlertTrottMovement; // 0x820(0x08)
	bool bTrottMove; // 0x828(0x01)
	bool bHalfSquatMove; // 0x829(0x01)
	char pad_82A[0xa]; // 0x82a(0x0a)
	struct FGPAnimProxyVelocityBlend AnimProxyVelocityBlend; // 0x834(0x10)
	char pad_844[0x4]; // 0x844(0x04)
	struct FGPAnimProxyOrientationWarping AnimProxyOrientationWarping; // 0x848(0x28)
	int32_t CurrentValidDirection; // 0x870(0x04)
	float OrientationWarpingAngles0; // 0x874(0x04)
	float OrientationWarpingAngles45; // 0x878(0x04)
	float OrientationWarpingAngles90; // 0x87c(0x04)
	float OrientationWarpingAngles135; // 0x880(0x04)
	float OrientationWarpingAngles180; // 0x884(0x04)
	float OrientationWarpingAnglesN135; // 0x888(0x04)
	float OrientationWarpingAnglesN90; // 0x88c(0x04)
	float OrientationWarpingAnglesN45; // 0x890(0x04)
	float MoveLoopAnimStartPos; // 0x894(0x04)
	float MoveLoopAnimPlayRate; // 0x898(0x04)
	float MoveUseIdleHandPoseAlpha; // 0x89c(0x04)
	float HipYaw; // 0x8a0(0x04)
	char pad_8A4[0x4]; // 0x8a4(0x04)
	struct AGPCharacter* OwnerPawn; // 0x8a8(0x08)
	struct AWeaponBase* CurInv; // 0x8b0(0x08)
	float AnimBPTickInterval; // 0x8b8(0x04)
	char pad_8BC[0x44]; // 0x8bc(0x44)
	struct UGPAnimProxyComponent* AnimProxyComponent; // 0x900(0x08)
	struct UGPAIAnimProxyComponent* AIAnimProxyComponent; // 0x908(0x08)
	/*struct TScriptInterface<IWeaponDataComponentAnimInterface>*/char WeaponAnimDataComponent[0x10]; // 0x910(0x10)
	/*struct TScriptInterface<IWeaponDataComponentAppearanceInterface>*/char WeaponAppearanceDataComponent[0x10]; // 0x920(0x10)
	struct UGPAnimDataComponent* AnimDataComponent; // 0x930(0x08)
	struct UGPSprintComponent* SprintComponent; // 0x938(0x08)
	struct UGPFightStateComponent* FightStateComponent; // 0x940(0x08)
	struct UGPCharacterMovementComponent* GPCharacterMovementComponent; // 0x948(0x08)
	/*struct TScriptInterface<IWeaponManagerInterface>*/char WeaponManager[0x10]; // 0x950(0x10)
	struct UGPAIDataComponentAnim* AIAnimDataComponent; // 0x960(0x08)
	struct UGPAIAnimInstance_Locomotion* AnimInstance; // 0x968(0x08)
	char pad_970[0x60]; // 0x970(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAnimInstanceProxy_Locomotion
// Size: 0x1470 (Inherited: 0x748)
struct FGPAnimInstanceProxy_Locomotion : public FGPAnimInstanceProxy_LocomotionBase {
public:

	bool AnimLODLevelThanLod2; // 0x748(0x01)
	bool bAnimWalk; // 0x749(0x01)
	bool bAnimRun; // 0x74a(0x01)
	bool bAnimSprint; // 0x74b(0x01)
	bool bAnimSuperSprint; // 0x74c(0x01)
	bool bCanSprint2SuperSprint; // 0x74d(0x01)
	bool bCanSuperSprint2Sprint; // 0x74e(0x01)
	char pad_74F[0x1]; // 0x74f(0x01)
	bool bAnimSprintResetToggle; // 0x750(0x01)
	char pad_751[0xf]; // 0x751(0x0f)
	float AnimWalkPlayRate; // 0x760(0x04)
	float AnimRunPlayRate; // 0x764(0x04)
	float AnimSprintPlayRate; // 0x768(0x04)
	float AnimSuperSprintPlayRate; // 0x76c(0x04)
	float FPPSprintLoopAlpha; // 0x770(0x04)
	float FPPSuperSprintLoopAlpha; // 0x774(0x04)
	float AnimWalkPlayAlphaEnhance; // 0x778(0x04)
	float AnimRunPlayAlphaEnhance; // 0x77c(0x04)
	float AnimSprintPlayAlphaEnhance; // 0x780(0x04)
	char pad_784[0x4]; // 0x784(0x04)
	struct TArray<struct UAnimSequence*> AnimStartSequences; // 0x788(0x10)
	struct TArray<struct UAnimSequence*> AnimPivotSequences; // 0x798(0x10)
	struct TArray<struct UAnimSequence*> AnimStopingSequences; // 0x7a8(0x10)
	struct TArray<struct UAnimSequence*> AnimSprintStartSequences; // 0x7b8(0x10)
	struct TArray<struct UAnimSequence*> AnimSprintStopSequences; // 0x7c8(0x10)
	struct UAnimSequence* AnimRun2Sprint; // 0x7d8(0x08)
	struct UAnimSequence* AnimRun2SprintNew; // 0x7e0(0x08)
	struct UAnimSequence* CurrentMovementModeTransitionAnimation; // 0x7e8(0x08)
	struct UBlendSpaceBase* CurrentMovementModeTransitionAnimationBS; // 0x7f0(0x08)
	struct UAnimSequence* CurrentMovementModeTransition2Animation; // 0x7f8(0x08)
	struct UBlendSpaceBase* CurrentMovementModeTransition2AnimationBS; // 0x800(0x08)
	float TransitionStatePlayRate; // 0x808(0x04)
	bool DuringMovementModeTransition; // 0x80c(0x01)
	bool DuringDirectMovementModeTransition; // 0x80d(0x01)
	bool UseBSInMovementModeTransition; // 0x80e(0x01)
	bool UseBSInMovementMode2Transition; // 0x80f(0x01)
	bool DirectToLocomotion; // 0x810(0x01)
	bool DirectToLocomotionSecurity; // 0x811(0x01)
	bool bMovementModeInstantBlend; // 0x812(0x01)
	bool bDisableProneIdleAdditive; // 0x813(0x01)
	bool CurentMoveBSisNO1Node; // 0x814(0x01)
	bool bInversePlay; // 0x815(0x01)
	bool CacheLastStandPose; // 0x816(0x01)
	char pad_817[0x1]; // 0x817(0x01)
	bool bForbidRightArmIK; // 0x818(0x01)
	char pad_819[0x3]; // 0x819(0x03)
	float LeftArmHoldGunIKAlpha; // 0x81c(0x04)
	float RightArmIKAlpha; // 0x820(0x04)
	float LocoLeftArmAnimCurveValue; // 0x824(0x04)
	float LeftArmAnimCurveValue; // 0x828(0x04)
	float AOBlendAlpha; // 0x82c(0x04)
	float AOAimingPitch; // 0x830(0x04)
	float AOAimingYaw; // 0x834(0x04)
	struct UAnimSequence* CurrentIdleAnimation; // 0x838(0x08)
	struct UAnimSequence* OldIdleAnimation; // 0x840(0x08)
	char pad_848[0x68]; // 0x848(0x68)
	struct UAnimSequence* CurrentIdleAdditive; // 0x8b0(0x08)
	struct UAnimSequence* CurrentIdle2Animation; // 0x8b8(0x08)
	struct UAnimSequence* CurrentIdleAnimPose; // 0x8c0(0x08)
	struct UAnimSequence* CurrentStandIdleAnimation; // 0x8c8(0x08)
	struct UAnimSequence* RelaxIdleAdditive; // 0x8d0(0x08)
	struct UAnimSequence* ArmFractureAdditive; // 0x8d8(0x08)
	struct UAnimSequence* LegFractureIdleAdditive; // 0x8e0(0x08)
	struct UAnimSequence* LegFractureMoveAdditive; // 0x8e8(0x08)
	struct UAnimSequence* CarryBodyIdleAdditive; // 0x8f0(0x08)
	struct UAnimSequence* IKLeftArmPose; // 0x8f8(0x08)
	struct UAnimSequence* IKRightArmPose; // 0x900(0x08)
	struct UAnimSequence* CurrentPoseAdditive; // 0x908(0x08)
	struct UAnimSequence* FppLocomotionAdditive_Merge; // 0x910(0x08)
	bool bFppLocomotionAdditive_Merge; // 0x918(0x01)
	char pad_919[0x7]; // 0x919(0x07)
	struct UAnimSequence* CrouchSprintAdditive; // 0x920(0x08)
	struct UBlendSpaceBase* CurrentMoveBS; // 0x928(0x08)
	struct UBlendSpaceBase* StandMoveBS; // 0x930(0x08)
	struct UBlendSpaceBase* CrouchMoveBS; // 0x938(0x08)
	struct UBlendSpaceBase* ProneMoveBS; // 0x940(0x08)
	float SprintLoopStartPosition; // 0x948(0x04)
	float SuperSprintLoopStartPosition; // 0x94c(0x04)
	struct UBlendSpaceBase* CurrentMove2BS; // 0x950(0x08)
	struct UBlendSpaceBase* SpecialSprintBS; // 0x958(0x08)
	struct UBlendSpaceBase* StandMoveBS_F; // 0x960(0x08)
	struct UBlendSpaceBase* StandMoveBS_FL; // 0x968(0x08)
	struct UBlendSpaceBase* StandMoveBS_FR; // 0x970(0x08)
	struct UBlendSpaceBase* StandMoveBS_B; // 0x978(0x08)
	struct UBlendSpaceBase* StandMoveBS_BL; // 0x980(0x08)
	struct UBlendSpaceBase* StandMoveBS_BR; // 0x988(0x08)
	struct UBlendSpaceBase* StandMoveBS_L; // 0x990(0x08)
	struct UBlendSpaceBase* StandMoveBS_R; // 0x998(0x08)
	bool bShouldForbidZoom; // 0x9a0(0x01)
	bool bIsToggleZooming; // 0x9a1(0x01)
	char pad_9A2[0x6]; // 0x9a2(0x06)
	struct UAnimSequence* ADSIdleAdditive; // 0x9a8(0x08)
	struct UAnimSequence* IdleToADS; // 0x9b0(0x08)
	struct UBlendSpaceBase* ADSIdle; // 0x9b8(0x08)
	struct UAnimSequence* ADSToIdle; // 0x9c0(0x08)
	bool bIsZooming; // 0x9c8(0x01)
	bool isInZoomingIn; // 0x9c9(0x01)
	bool isInZoomingOut; // 0x9ca(0x01)
	char pad_9CB[0x1]; // 0x9cb(0x01)
	float ZoomProcessAnimElapsedTime; // 0x9cc(0x04)
	float ZoomOutProcessAnimElapsedTime; // 0x9d0(0x04)
	bool isInZoomOutAfterCast; // 0x9d4(0x01)
	bool isInZoomInAfterCast; // 0x9d5(0x01)
	char pad_9D6[0x2]; // 0x9d6(0x02)
	float ZoomInLogicTime; // 0x9d8(0x04)
	float ZoomOutLogicTime; // 0x9dc(0x04)
	float AimLocomotionWeight; // 0x9e0(0x04)
	float AimPoseChangeWeight; // 0x9e4(0x04)
	float AimLocomotionPlayRate; // 0x9e8(0x04)
	float AnimWalkWeight; // 0x9ec(0x04)
	struct UAnimSequence* JumpStartAnim; // 0x9f0(0x08)
	struct UAnimSequence* JumpDownAnim; // 0x9f8(0x08)
	struct UAnimSequence* JumpLandAnim_Normal; // 0xa00(0x08)
	struct UAnimSequence* JumpLandAnim_Heavy; // 0xa08(0x08)
	struct UBlendSpaceBase* FallingDownBS; // 0xa10(0x08)
	struct UBlendSpaceBase* JumpStartBS; // 0xa18(0x08)
	struct UBlendSpaceBase* JumpLandBS; // 0xa20(0x08)
	struct UAnimSequence* Sprint2Idle; // 0xa28(0x08)
	struct UAnimSequence* Idle2Sprint; // 0xa30(0x08)
	struct UAnimSequence* SprintStart; // 0xa38(0x08)
	struct UAnimSequence* SprintStop; // 0xa40(0x08)
	struct UAnimSequence* RunStart; // 0xa48(0x08)
	struct UAnimSequence* RunStop; // 0xa50(0x08)
	struct UAnimSequence* RunPose; // 0xa58(0x08)
	struct UAnimSequence* SprintPose; // 0xa60(0x08)
	struct UAnimSequence* SprintOffsetPose; // 0xa68(0x08)
	struct UAnimSequence* Walk2Run; // 0xa70(0x08)
	struct UAnimSequence* Run2Walk; // 0xa78(0x08)
	struct UAnimSequence* Walk2Sprint; // 0xa80(0x08)
	struct UAnimSequence* Sprint2Walk; // 0xa88(0x08)
	struct UAnimSequence* Run2Sprint; // 0xa90(0x08)
	struct UAnimSequence* Sprint2SuperSprint; // 0xa98(0x08)
	struct UAnimSequence* SuperSprint2Sprint; // 0xaa0(0x08)
	struct UAnimSequence* LocomotionIdle; // 0xaa8(0x08)
	struct UAnimSequence* ProneLocomotionIdle; // 0xab0(0x08)
	struct UAnimSequence* SuperSprintPose; // 0xab8(0x08)
	struct UAnimSequence* SuperSprint2Walk; // 0xac0(0x08)
	struct UAnimSequence* Run2SuperSprint; // 0xac8(0x08)
	struct UAnimSequence* SuperSprintOffsetPose; // 0xad0(0x08)
	float ForbidLeftHandHoldGunIK; // 0xad8(0x04)
	float ForbidLeftHandIKCurveValue; // 0xadc(0x04)
	float ForceIdlePoseCurveValue; // 0xae0(0x04)
	bool bJumpLandAdditiveEnabled; // 0xae4(0x01)
	char pad_AE5[0x3]; // 0xae5(0x03)
	struct UAnimSequence* JumpLandAdditiveSeq; // 0xae8(0x08)
	float JumpLandEvaluatorTime; // 0xaf0(0x04)
	float GroundLandAdditiveAlphaFPP; // 0xaf4(0x04)
	float GroundLandAdditiveAlphaFPPWithWeight; // 0xaf8(0x04)
	float GroundLandEvaluatorTimeFPP; // 0xafc(0x04)
	char pad_B00[0x4]; // 0xb00(0x04)
	float StandbyEvaluatorTimeFPP; // 0xb04(0x04)
	float JumpLandAdditiveAlpha; // 0xb08(0x04)
	char pad_B0C[0x4]; // 0xb0c(0x04)
	struct UAnimSequence* ZiplineStartSeq; // 0xb10(0x08)
	struct UAnimSequence* ZiplineLoopSeq; // 0xb18(0x08)
	bool UseLandedAnimSequence; // 0xb20(0x01)
	char pad_B21[0x3]; // 0xb21(0x03)
	float PrelandAlpha; // 0xb24(0x04)
	bool bShouldStand; // 0xb28(0x01)
	bool bShouldJump; // 0xb29(0x01)
	bool bShouldHeavyLand; // 0xb2a(0x01)
	bool bShouldNormalLand; // 0xb2b(0x01)
	bool bShouldFloatInAir; // 0xb2c(0x01)
	bool bJumpToFloatInAir; // 0xb2d(0x01)
	bool bJumpToNormalLand; // 0xb2e(0x01)
	bool bDirectJumpToMove; // 0xb2f(0x01)
	bool bDirectJumpToIdle; // 0xb30(0x01)
	bool bShouldEnterStandMove; // 0xb31(0x01)
	bool bDirectToStandMove; // 0xb32(0x01)
	bool bShouldEnterCrouchMove; // 0xb33(0x01)
	bool bShouldEnterProneMove; // 0xb34(0x01)
	bool bDirectToProneMove; // 0xb35(0x01)
	bool bLandToStand; // 0xb36(0x01)
	bool bLandToProne; // 0xb37(0x01)
	bool bShouldEnterMove; // 0xb38(0x01)
	bool bUseIdleProneMove_FPP; // 0xb39(0x01)
	bool bUseIdleProne_FPP; // 0xb3a(0x01)
	bool bSpeedMoreThan200; // 0xb3b(0x01)
	bool bSpeedMoreThan200Trigger; // 0xb3c(0x01)
	bool bNormalizedSpeed100; // 0xb3d(0x01)
	bool bNormalizedSpeed200Forward; // 0xb3e(0x01)
	bool bNormalizedSpeed200NotForward; // 0xb3f(0x01)
	bool bMoveToStop; // 0xb40(0x01)
	bool bStopToMove; // 0xb41(0x01)
	bool bStopToIdle; // 0xb42(0x01)
	bool bStopToIdleTPP; // 0xb43(0x01)
	bool bMovingToIdle; // 0xb44(0x01)
	bool bMovingToIdleEx; // 0xb45(0x01)
	bool bMovingToIdleNoStop; // 0xb46(0x01)
	bool bMoveModeToCertainMoveMode; // 0xb47(0x01)
	bool bCertainMoveModeToMoveMode; // 0xb48(0x01)
	bool bCertainMoveModeToMoveModeFPP; // 0xb49(0x01)
	bool bCertainMoveModeToMoveModeInversPlayFPP; // 0xb4a(0x01)
	bool bInAirToJump; // 0xb4b(0x01)
	bool bInAirToLanding; // 0xb4c(0x01)
	bool bLandingToOnGround1; // 0xb4d(0x01)
	bool bLandingToOnGround2; // 0xb4e(0x01)
	bool bLandingToJumpStart; // 0xb4f(0x01)
	bool bJumpToGround; // 0xb50(0x01)
	char pad_B51[0x3]; // 0xb51(0x03)
	float IdleToMovingBlendAlpha; // 0xb54(0x04)
	float IdleToMovingBlendAlpha2; // 0xb58(0x04)
	bool bCrouchToAirToLanding; // 0xb5c(0x01)
	bool bLandingToJump; // 0xb5d(0x01)
	bool bDuringProneTransition; // 0xb5e(0x01)
	bool bMovingToMoveStopCertainMovementMode; // 0xb5f(0x01)
	bool bMovingToIdleCertainMovementMode; // 0xb60(0x01)
	bool bIsProne; // 0xb61(0x01)
	bool bIsCrouch; // 0xb62(0x01)
	bool bIsSlideTackle; // 0xb63(0x01)
	bool bIsHalfSquat; // 0xb64(0x01)
	bool bIsMoving; // 0xb65(0x01)
	bool bIsMovingWithInput; // 0xb66(0x01)
	bool bIsMovingWithInputNotFalling; // 0xb67(0x01)
	bool bIsMovingWithInputNotSprint; // 0xb68(0x01)
	bool bResetMove; // 0xb69(0x01)
	bool bIsStopingMove; // 0xb6a(0x01)
	bool bCacheMove; // 0xb6b(0x01)
	bool bFastRunning; // 0xb6c(0x01)
	bool bIsFalling; // 0xb6d(0x01)
	bool bIsJumped; // 0xb6e(0x01)
	bool bIsEmptyHand; // 0xb6f(0x01)
	bool bIsImpendingDeath; // 0xb70(0x01)
	bool bIsDead; // 0xb71(0x01)
	bool bIsSafeHouse; // 0xb72(0x01)
	bool bIsFractu; // 0xb73(0x01)
	bool bIsBurden; // 0xb74(0x01)
	bool bIsSpecialSprint; // 0xb75(0x01)
	char pad_B76[0x2]; // 0xb76(0x02)
	float SpecialSprintType; // 0xb78(0x04)
	bool bIsSprint; // 0xb7c(0x01)
	bool bIsSuperSprint; // 0xb7d(0x01)
	bool bIsSprintWithLand; // 0xb7e(0x01)
	bool bIsRelaxIdle; // 0xb7f(0x01)
	bool bIsCrouchSprint; // 0xb80(0x01)
	char pad_B81[0x3]; // 0xb81(0x03)
	float ArmFractureAdditiveAlpha; // 0xb84(0x04)
	bool bIsOnZipline; // 0xb88(0x01)
	bool ZiplineResetToggle; // 0xb89(0x01)
	bool bUnderFPP; // 0xb8a(0x01)
	bool bHasHorizontalVelocity; // 0xb8b(0x01)
	bool bHasVerticalVelocity; // 0xb8c(0x01)
	bool bIdleAdditveValid; // 0xb8d(0x01)
	char pad_B8E[0x2]; // 0xb8e(0x02)
	float IdleAdditiveAlpha; // 0xb90(0x04)
	float MoveIdleAdditiveAlpha; // 0xb94(0x04)
	float TurningAlpha; // 0xb98(0x04)
	bool bPoseAdditveValid; // 0xb9c(0x01)
	bool bIsBeingSpectatingUnderFPP; // 0xb9d(0x01)
	char pad_B9E[0x2]; // 0xb9e(0x02)
	struct FRotator MovingRotation; // 0xba0(0x0c)
	float MovingDirection; // 0xbac(0x04)
	float NormalizedSpeed; // 0xbb0(0x04)
	float NormalizedSpeedWithLerp; // 0xbb4(0x04)
	float BSPlayingRate; // 0xbb8(0x04)
	float BSPlayingScale; // 0xbbc(0x04)
	float BSPlayingScaleRate; // 0xbc0(0x04)
	bool bSpeedWrapping; // 0xbc4(0x01)
	char pad_BC5[0x3]; // 0xbc5(0x03)
	float VerticalVelocity; // 0xbc8(0x04)
	float HorizontalVelocity; // 0xbcc(0x04)
	struct FVector Velocity; // 0xbd0(0x0c)
	float VelocityX; // 0xbdc(0x04)
	float VelocityY; // 0xbe0(0x04)
	float OriWrapingBlendTime; // 0xbe4(0x04)
	float SprintToRunBlendTime; // 0xbe8(0x04)
	bool MoveMode; // 0xbec(0x01)
	bool bIsChangeClipBySprint; // 0xbed(0x01)
	bool NeedTwoHandOverride; // 0xbee(0x01)
	bool NeedRightHandOverride; // 0xbef(0x01)
	float TwoHandOverrideWeight; // 0xbf0(0x04)
	bool MoveModeEnter; // 0xbf4(0x01)
	bool MoveMode1Enter; // 0xbf5(0x01)
	bool MoveMode2Enter; // 0xbf6(0x01)
	bool MoveMode1EnterTransition; // 0xbf7(0x01)
	bool MoveMode2EnterTransition; // 0xbf8(0x01)
	char pad_BF9[0x3]; // 0xbf9(0x03)
	float WalkAndRunPlayRate; // 0xbfc(0x04)
	float WalkAndRunNormalizedSpeed; // 0xc00(0x04)
	float SprintPlayRate; // 0xc04(0x04)
	bool bHillLeanForbidden; // 0xc08(0x01)
	char pad_C09[0x7]; // 0xc09(0x07)
	struct UBlendSpaceBase* LeisureMovement; // 0xc10(0x08)
	bool bStandby; // 0xc18(0x01)
	bool CanStandby; // 0xc19(0x01)
	char pad_C1A[0x2]; // 0xc1a(0x02)
	int32_t iStandbyID; // 0xc1c(0x04)
	struct UAnimSequence* Standby1; // 0xc20(0x08)
	struct UAnimSequence* Standby2; // 0xc28(0x08)
	struct UAnimSequence* Standby3; // 0xc30(0x08)
	struct UBlendSpaceBase* SpecialLeisureMovement01BS; // 0xc38(0x08)
	struct UBlendSpaceBase* SpecialLeisureMovement02BS; // 0xc40(0x08)
	bool bUseSpecialLeisureMovement; // 0xc48(0x01)
	char pad_C49[0x3]; // 0xc49(0x03)
	int32_t LeisureMovementType; // 0xc4c(0x04)
	float LeisureMoveTypeForBS; // 0xc50(0x04)
	int32_t CharacterFightStateType; // 0xc54(0x04)
	struct UBlendSpaceBase* AlertTrottMovement; // 0xc58(0x08)
	bool bTrottMove; // 0xc60(0x01)
	bool DuringIdleModeTransition; // 0xc61(0x01)
	bool bHalfSquatMove; // 0xc62(0x01)
	bool bNeedMoveTransition; // 0xc63(0x01)
	bool bIsStarting; // 0xc64(0x01)
	bool bIsStartingCachePose; // 0xc65(0x01)
	char pad_C66[0x2]; // 0xc66(0x02)
	float StartAnimAPos; // 0xc68(0x04)
	float StartAnimBPos; // 0xc6c(0x04)
	float StartAnimPos; // 0xc70(0x04)
	float StartFirstStepAlpha; // 0xc74(0x04)
	float StartFirstStepTransitionAlpha; // 0xc78(0x04)
	float StartAnimDirectionAngle; // 0xc7c(0x04)
	bool EnableStartingAnimationNew; // 0xc80(0x01)
	bool bStartToMove; // 0xc81(0x01)
	char pad_C82[0x9c]; // 0xc82(0x9c)
	bool OrientationChangeStartingOut; // 0xd1e(0x01)
	bool StartingOver; // 0xd1f(0x01)
	bool StartingOverFrame; // 0xd20(0x01)
	char pad_D21[0x7]; // 0xd21(0x07)
	struct UAnimSequence* StartAnimA; // 0xd28(0x08)
	struct UAnimSequence* StartAnimB; // 0xd30(0x08)
	struct UAnimSequence* StartAnim; // 0xd38(0x08)
	char pad_D40[0x8]; // 0xd40(0x08)
	bool bIsStoping; // 0xd48(0x01)
	char pad_D49[0x7]; // 0xd49(0x07)
	struct UAnimSequence* StopAnimA; // 0xd50(0x08)
	struct UAnimSequence* StopAnimB; // 0xd58(0x08)
	float StopAnimAPos; // 0xd60(0x04)
	float StopAnimBPos; // 0xd64(0x04)
	float StopAnimAlpha; // 0xd68(0x04)
	char pad_D6C[0x4]; // 0xd6c(0x04)
	struct UAnimSequence* TurningPlaceAnim; // 0xd70(0x08)
	float TurnLeftAnimPos; // 0xd78(0x04)
	char pad_D7C[0x4]; // 0xd7c(0x04)
	struct UAnimSequence* TurningPlaceRightAnim; // 0xd80(0x08)
	float TurnRightAnimPos; // 0xd88(0x04)
	bool bTurningPlace; // 0xd8c(0x01)
	bool bTurningPlaceRight; // 0xd8d(0x01)
	bool bResetIdlePose; // 0xd8e(0x01)
	bool Pivoting; // 0xd8f(0x01)
	bool PivotingOver; // 0xd90(0x01)
	bool OrientationChangePivotingOut; // 0xd91(0x01)
	char pad_D92[0x6]; // 0xd92(0x06)
	struct UAnimSequence* PrePivotAnim; // 0xd98(0x08)
	struct UAnimSequence* PostPivotAnim; // 0xda0(0x08)
	float PrePivotAnimPos; // 0xda8(0x04)
	float PostPivotAnimPos; // 0xdac(0x04)
	float PrePivotAnimAngle; // 0xdb0(0x04)
	float PostPivotAnimAngle; // 0xdb4(0x04)
	char pad_DB8[0x8]; // 0xdb8(0x08)
	float HillSlopeAlpha; // 0xdc0(0x04)
	char pad_DC4[0x4]; // 0xdc4(0x04)
	struct UBlendSpaceBase* ActiveHillAdaptionBS; // 0xdc8(0x08)
	char pad_DD0[0x18]; // 0xdd0(0x18)
	bool bEnableSlopeWarping; // 0xde8(0x01)
	char pad_DE9[0x1]; // 0xde9(0x01)
	bool bReopenSlopeWarping; // 0xdea(0x01)
	char pad_DEB[0x1]; // 0xdeb(0x01)
	float SlopeWarpingAlpha; // 0xdec(0x04)
	bool bSlopeStop; // 0xdf0(0x01)
	bool bOnlyEnableSlopeIKWhenStop; // 0xdf1(0x01)
	char pad_DF2[0x2]; // 0xdf2(0x02)
	struct FHitResult FootIKHitResult[0x2]; // 0xdf4(0x110)
	struct FVector StopLeftFootIKDeltaHeight; // 0xf04(0x0c)
	struct FVector StopRightFootIKDeltaHeight; // 0xf10(0x0c)
	struct FVector StopLeftFootIKNormal; // 0xf1c(0x0c)
	struct FVector StopRightFootIKNormal; // 0xf28(0x0c)
	bool bBlockingHit; // 0xf34(0x01)
	char pad_F35[0x3]; // 0xf35(0x03)
	struct FVector FloorNormal; // 0xf38(0x0c)
	struct FVector FloorOffset; // 0xf44(0x0c)
	struct FHitResult SlopeHitResult; // 0xf50(0x88)
	float SlopeDirectionAngle; // 0xfd8(0x04)
	float SlopeAlpha; // 0xfdc(0x04)
	char pad_FE0[0x10]; // 0xfe0(0x10)
	bool bPoseModified_Mode; // 0xff0(0x01)
	bool bNotPoseModified_Mode; // 0xff1(0x01)
	bool bPoseModified_NotMode; // 0xff2(0x01)
	bool bNotPoseModified_NotMode; // 0xff3(0x01)
	bool bProneToStand; // 0xff4(0x01)
	char pad_FF5[0x3]; // 0xff5(0x03)
	struct UAnimSequence* ProneToStandMoveAnim; // 0xff8(0x08)
	bool bProneToStand_MoveMode; // 0x1000(0x01)
	char pad_1001[0x1]; // 0x1001(0x01)
	bool bInterruptProneToStand_Mode1; // 0x1002(0x01)
	bool bInterruptProneToStand_Mode2; // 0x1003(0x01)
	float ProneToStand_AnimPos; // 0x1004(0x04)
	float ProneToStand_Angle; // 0x1008(0x04)
	char pad_100C[0xc]; // 0x100c(0x0c)
	bool bUseLocomotionLeanAnim; // 0x1018(0x01)
	char pad_1019[0x3]; // 0x1019(0x03)
	float LeanAmountLR; // 0x101c(0x04)
	float LeanAmountFB; // 0x1020(0x04)
	float LeanAmountLRBone; // 0x1024(0x04)
	float RelativeAccelerationAmountX; // 0x1028(0x04)
	float LeanAlpha; // 0x102c(0x04)
	float LeanBoneAlpha; // 0x1030(0x04)
	struct FVector LeanHipsLocationOffset; // 0x1034(0x0c)
	struct FRotator LeanSpine1RotationOffset; // 0x1040(0x0c)
	struct FRotator LeanSpine2RotationOffset; // 0x104c(0x0c)
	char pad_1058[0x6c]; // 0x1058(0x6c)
	int32_t SprintDirection; // 0x10c4(0x04)
	bool LandMove; // 0x10c8(0x01)
	char pad_10C9[0x7]; // 0x10c9(0x07)
	struct UAnimSequence* JumpLandRunAnim; // 0x10d0(0x08)
	struct UAnimSequence* JumpLandSprintAnim; // 0x10d8(0x08)
	char pad_10E0[0x34]; // 0x10e0(0x34)
	struct FGPAnimProxyVelocityBlend AnimProxyVelocityBlend; // 0x1114(0x10)
	char pad_1124[0x4]; // 0x1124(0x04)
	struct FGPAnimProxyOrientationWarping AnimProxyOrientationWarping; // 0x1128(0x28)
	int32_t CurrentValidDirection; // 0x1150(0x04)
	float CurrentValidDirectionInFloat; // 0x1154(0x04)
	float OrientationWarpingAngles0; // 0x1158(0x04)
	float OrientationWarpingAngles45; // 0x115c(0x04)
	float OrientationWarpingAngles90; // 0x1160(0x04)
	float OrientationWarpingAngles135; // 0x1164(0x04)
	float OrientationWarpingAngles180; // 0x1168(0x04)
	float OrientationWarpingAnglesN135; // 0x116c(0x04)
	float OrientationWarpingAnglesN90; // 0x1170(0x04)
	float OrientationWarpingAnglesN45; // 0x1174(0x04)
	bool bEnableOrientationWarping; // 0x1178(0x01)
	bool bUseSimpleLocomotion; // 0x1179(0x01)
	bool bMovingToSprintStop; // 0x117a(0x01)
	char pad_117B[0x1]; // 0x117b(0x01)
	float MoveUseIdleHandPoseAlpha; // 0x117c(0x04)
	float PoseChangeBreakAlpha; // 0x1180(0x04)
	float MoveBreakAlpha; // 0x1184(0x04)
	struct FVector LandAdditiveTranslation; // 0x1188(0x0c)
	bool bPoseChangeBreak1; // 0x1194(0x01)
	bool bPoseChangeBreak2; // 0x1195(0x01)
	bool bMoveBreak; // 0x1196(0x01)
	bool bShouldParachute; // 0x1197(0x01)
	bool bPlayParachute; // 0x1198(0x01)
	bool bInParachuteIdle; // 0x1199(0x01)
	bool bQuitPlayerParachute; // 0x119a(0x01)
	bool bParachuteToLand; // 0x119b(0x01)
	bool bParachuteToInAir; // 0x119c(0x01)
	char pad_119D[0x3]; // 0x119d(0x03)
	float ParachuteMoveX; // 0x11a0(0x04)
	float ParachuteMoveY; // 0x11a4(0x04)
	struct UAnimSequence* OpenParachuteSequence; // 0x11a8(0x08)
	struct UAnimSequence* OpenParachuteSequence_FPP; // 0x11b0(0x08)
	struct UBlendSpaceBase* CurrentParachuteBS; // 0x11b8(0x08)
	struct UBlendSpaceBase* CurrentParachuteBS_FPP; // 0x11c0(0x08)
	struct UAnimSequence* CloseParachuteSequence; // 0x11c8(0x08)
	struct UAnimSequence* CloseParachuteSequence_FPP; // 0x11d0(0x08)
	struct UAnimSequence* ParachuteLandSequence; // 0x11d8(0x08)
	struct UAnimSequence* ParachuteLandSequence_FPP; // 0x11e0(0x08)
	bool bShouldGlide; // 0x11e8(0x01)
	char pad_11E9[0x3]; // 0x11e9(0x03)
	float GlideMoveX; // 0x11ec(0x04)
	float GlideMoveY; // 0x11f0(0x04)
	char pad_11F4[0x4]; // 0x11f4(0x04)
	struct UBlendSpaceBase* CurrentGlideBS; // 0x11f8(0x08)
	struct UBlendSpaceBase* CurrentGlideBS_FPP; // 0x1200(0x08)
	struct UAnimSequence* GlideLandSequence; // 0x1208(0x08)
	struct UAnimSequence* GlideLandSequence_FPP; // 0x1210(0x08)
	bool bShouldSlideTackle; // 0x1218(0x01)
	bool bBreakSlideTackle; // 0x1219(0x01)
	bool bPlaySlideTackleLoopAnim; // 0x121a(0x01)
	bool bPlaySlideTackleEndAnim; // 0x121b(0x01)
	bool bInputBreakSlideTackleEndAnim; // 0x121c(0x01)
	char pad_121D[0x3]; // 0x121d(0x03)
	struct UAnimSequence* SlideTackleStartSequence; // 0x1220(0x08)
	struct UAnimSequence* SlideTackleLoopSequence; // 0x1228(0x08)
	struct UAnimSequence* SlideTackleEndSequence; // 0x1230(0x08)
	bool bSlideTackleSeqChanged; // 0x1238(0x01)
	bool bQuitSlideTackle; // 0x1239(0x01)
	char pad_123A[0x2]; // 0x123a(0x02)
	float Run2SprintAlpha; // 0x123c(0x04)
	float HipYaw; // 0x1240(0x04)
	char pad_1244[0x4]; // 0x1244(0x04)
	struct AGPCharacter* OwnerPawn; // 0x1248(0x08)
	char pad_1250[0x8]; // 0x1250(0x08)
	struct AWeaponBase* WeaponInv; // 0x1258(0x08)
	float AnimBPTickInterval; // 0x1260(0x04)
	char pad_1264[0x4]; // 0x1264(0x04)
	struct TArray<struct UAnimSequence*> JumpHeavyLandAnimList; // 0x1268(0x10)
	char pad_1278[0xb8]; // 0x1278(0xb8)
	struct UGPAnimProxyComponent* AnimProxyComponent; // 0x1330(0x08)
	/*struct TScriptInterface<IWeaponDataComponentAnimInterface>*/char WeaponAnimDataComponent[0x10]; // 0x1338(0x10)
	/*struct TScriptInterface<IWeaponDataComponentAppearanceInterface>*/char WeaponAppearanceDataComponent[0x10]; // 0x1348(0x10)
	struct UWeaponDataComponentAdapter* WeaponDataComponentAdapter; // 0x1358(0x08)
	struct UGPAnimDataComponent* AnimDataComponent; // 0x1360(0x08)
	struct UGPSprintComponent* SprintComponent; // 0x1368(0x08)
	struct UGPFightStateComponent* FightStateComponent; // 0x1370(0x08)
	struct UGPCameraModeComponent* CameraModeComponent; // 0x1378(0x08)
	struct UGPCharacterMovementComponent* GPCharacterMovementComponent; // 0x1380(0x08)
	/*struct TScriptInterface<IWeaponManagerInterface>*/char WeaponManager[0x10]; // 0x1388(0x10)
	struct UGPAIDataComponentAnim* AIAnimDataComponent; // 0x1398(0x08)
	struct UGPAnimInstance_Locomotion* AnimInstance; // 0x13a0(0x08)
	struct UGPAnimInstance* ParentAnimInstance; // 0x13a8(0x08)
	struct UGPParachuteComponent* ParachuteComponent; // 0x13b0(0x08)
	struct UGPSlidingTackleComponent* SlideTackleComponent; // 0x13b8(0x08)
	struct UGPVaultAndClimbComponent* VaultAndClimbComponent; // 0x13c0(0x08)
	struct UGPVehicleDataComponent* VehicleDataComponent; // 0x13c8(0x08)
	char pad_13D0[0xa]; // 0x13d0(0x0a)
	bool bFPPLocoPoseVarChanged; // 0x13da(0x01)
	bool bFPPLocoLoopVarChanged; // 0x13db(0x01)
	bool ZoomingVarChanged; // 0x13dc(0x01)
	bool bStandVarChanged; // 0x13dd(0x01)
	bool bSpeedMoreVarChanged; // 0x13de(0x01)
	bool bMovingVarChanged; // 0x13df(0x01)
	bool bMovingVarChangedNew; // 0x13e0(0x01)
	bool bFPPPoseVarChanged; // 0x13e1(0x01)
	char pad_13E2[0x6]; // 0x13e2(0x06)
	bool bFPPProneOrSlidingTransition; // 0x13e8(0x01)
	char pad_13E9[0x7]; // 0x13e9(0x07)
	bool bPoseModifiedVarChanged; // 0x13f0(0x01)
	bool bSlideVarChanged; // 0x13f1(0x01)
	bool bFPPLocomotionVarChanged; // 0x13f2(0x01)
	bool bIsInDeploy; // 0x13f3(0x01)
	char pad_13F4[0x7c]; // 0x13f4(0x7c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimItemBaseAsset
// Size: 0x60 (Inherited: 0x08)
struct FAnimItemBaseAsset : public FAnimItemBase {
public:

	/*struct TSoftObjectPtr<UAnimationAsset>*/char FPPDef[0x28]; // 0x08(0x28)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char TPPDef[0x28]; // 0x30(0x28)
	enum class EAnimLoadPriority AnimLoadPriority; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAnimInstanceProxy
// Size: 0x13a0 (Inherited: 0x748)
struct FGPAnimInstanceProxy : public FGPAnimInstanceProxyBase {
public:

	struct UAimOffsetBlendSpace* ActiveAO; // 0x748(0x08)
	struct UAimOffsetBlendSpace* ADSLeanAO; // 0x750(0x08)
	struct UBlendSpaceBase* LeanPeekAdditiveBS; // 0x758(0x08)
	struct UAnimSequence* StandIdleAnim; // 0x760(0x08)
	struct UAnimSequence* CrouchIdleAnim; // 0x768(0x08)
	struct UAnimSequence* ProneIdleAnim; // 0x770(0x08)
	struct UAnimSequence* CurrentIdleAnim; // 0x778(0x08)
	struct UAnimSequence* JumpStartAnim; // 0x780(0x08)
	struct UAnimSequence* JumpDownAnim; // 0x788(0x08)
	struct UAnimSequence* JumpLandAnim_Normal; // 0x790(0x08)
	struct UAnimSequence* JumpLandAnim_Heavy; // 0x798(0x08)
	struct UBlendSpaceBase* FallingDownBS; // 0x7a0(0x08)
	struct UBlendSpaceBase* JumpStartBS; // 0x7a8(0x08)
	struct UBlendSpaceBase* JumpLandBS; // 0x7b0(0x08)
	struct UAnimSequence* ProneToStanding; // 0x7b8(0x08)
	struct UAnimSequence* ProneToCrouching; // 0x7c0(0x08)
	struct UAnimSequence* CrouchingToStanding; // 0x7c8(0x08)
	struct UAnimSequence* CrouchingToProne; // 0x7d0(0x08)
	struct UAnimSequence* StandingToProne; // 0x7d8(0x08)
	float StandingToPronePlayRate; // 0x7e0(0x04)
	char pad_7E4[0x4]; // 0x7e4(0x04)
	struct UAnimSequence* StandingToCrouching; // 0x7e8(0x08)
	struct UBlendSpaceBase* ProneToStandingBS; // 0x7f0(0x08)
	struct UBlendSpaceBase* StandingToProneBS; // 0x7f8(0x08)
	struct UBlendSpaceBase* StandMoveBS; // 0x800(0x08)
	struct UBlendSpaceBase* CrouchMoveBS; // 0x808(0x08)
	struct UBlendSpaceBase* ProneMoveBS; // 0x810(0x08)
	struct UBlendSpaceBase* SprintMoveBS; // 0x818(0x08)
	struct UAnimSequence* TargetVaultAnim; // 0x820(0x08)
	struct UAnimSequence* ADSIdleAdditive; // 0x828(0x08)
	struct UAnimSequence* AimLeftHandAdditivePose; // 0x830(0x08)
	struct UAnimSequence* IdleToADS; // 0x838(0x08)
	struct UBlendSpaceBase* ADSIdle; // 0x840(0x08)
	struct UAnimSequence* ADSToIdle; // 0x848(0x08)
	struct UAnimSequence* IKHandPose; // 0x850(0x08)
	struct UAnimSequence* IKRHandPose; // 0x858(0x08)
	struct UBlendSpaceBase* ImpendingDeathBS; // 0x860(0x08)
	struct UAnimSequence* ADSIdleStaticSeq; // 0x868(0x08)
	struct UAnimSequence* Idle2ImpendingDeath; // 0x870(0x08)
	struct UAnimSequence* ImpendingDeathPose; // 0x878(0x08)
	struct UBlendSpaceBase* ImpendingDeathBreakthroughBS; // 0x880(0x08)
	struct UAnimSequence* Idle2Death; // 0x888(0x08)
	struct UBlendSpaceBase* HitBS; // 0x890(0x08)
	struct UAnimSequence* AimFireIdlePose; // 0x898(0x08)
	struct UAnimSequence* StandDeathAnim; // 0x8a0(0x08)
	struct UAnimSequence* CrouchDeathAnim; // 0x8a8(0x08)
	struct UAnimSequence* ProneDeathAnim; // 0x8b0(0x08)
	struct UAnimSequence* ImpendingDeathAnim; // 0x8b8(0x08)
	struct UAnimSequence* BeAssassinateDeathAnim; // 0x8c0(0x08)
	float FPPUse3PLowBodyWeight; // 0x8c8(0x04)
	bool bShouldForbidBasicAO; // 0x8cc(0x01)
	bool bEnableFPPAO; // 0x8cd(0x01)
	bool bMovingUpperAO; // 0x8ce(0x01)
	char pad_8CF[0x1]; // 0x8cf(0x01)
	float NoLeftArmAOAlpha; // 0x8d0(0x04)
	char pad_8D4[0x1]; // 0x8d4(0x01)
	bool bForbidRightHandHoldGunIK; // 0x8d5(0x01)
	char pad_8D6[0x2]; // 0x8d6(0x02)
	float RightHandHoldGunIKAlpha; // 0x8d8(0x04)
	float LeftHandHoldGunIKAlpha; // 0x8dc(0x04)
	float ForbidLeftHandIKCurveValue; // 0x8e0(0x04)
	bool bForbidHandIK; // 0x8e4(0x01)
	char pad_8E5[0x3]; // 0x8e5(0x03)
	float LeftArmAnimCurveValue; // 0x8e8(0x04)
	float ForceIdlePoseCurveValue; // 0x8ec(0x04)
	float TwistAlpha; // 0x8f0(0x04)
	bool bShouldStand; // 0x8f4(0x01)
	bool bShouldStop; // 0x8f5(0x01)
	bool bShouldJump; // 0x8f6(0x01)
	bool bShouldHeavyLand; // 0x8f7(0x01)
	bool bShouldNormalLand; // 0x8f8(0x01)
	bool bShouldFloatInAir; // 0x8f9(0x01)
	bool bJumpToFloatInAir; // 0x8fa(0x01)
	bool bJumpToNormalLand; // 0x8fb(0x01)
	bool bDirectJumpToMove; // 0x8fc(0x01)
	bool bDirectJumpToIdle; // 0x8fd(0x01)
	bool bInTransition; // 0x8fe(0x01)
	bool bBackToStand; // 0x8ff(0x01)
	bool bShouldEnterStandMove; // 0x900(0x01)
	bool bDirectToStandMove; // 0x901(0x01)
	bool bBackToCrouch; // 0x902(0x01)
	bool bShouldEnterCrouchMove; // 0x903(0x01)
	bool bDirectToCrouchMove; // 0x904(0x01)
	bool bBackToProne; // 0x905(0x01)
	bool bShouldEnterProneMove; // 0x906(0x01)
	bool bDirectToProneMove; // 0x907(0x01)
	bool bLandToStand; // 0x908(0x01)
	bool bLandToProne; // 0x909(0x01)
	bool bModifySpines; // 0x90a(0x01)
	bool bForbidTPPWeaponRecoil; // 0x90b(0x01)
	bool bJumpLoopToJumpStart; // 0x90c(0x01)
	bool bJumpStartToJumpLoop; // 0x90d(0x01)
	bool bPlayerParachute; // 0x90e(0x01)
	bool bOnlyParachute; // 0x90f(0x01)
	bool bIsVaultingOrClimbingChanged; // 0x910(0x01)
	bool bIsVaultingOrClimbing; // 0x911(0x01)
	bool bIsUnder60VaultingOrClimbing; // 0x912(0x01)
	bool bQuitVaulting; // 0x913(0x01)
	bool bIsProne; // 0x914(0x01)
	bool bIsCrouch; // 0x915(0x01)
	bool bIsSlideTackle; // 0x916(0x01)
	bool bIsBurden; // 0x917(0x01)
	bool bIsMoving; // 0x918(0x01)
	bool bIsNeedMovingUpper; // 0x919(0x01)
	bool bIsNeedFullBodyWithUpperOverlay; // 0x91a(0x01)
	bool bForbidFullBodyUpperOverlay; // 0x91b(0x01)
	bool bForbidHandClimbAction; // 0x91c(0x01)
	bool bIsRush; // 0x91d(0x01)
	bool bThrowable; // 0x91e(0x01)
	bool bFireDuringThrowable; // 0x91f(0x01)
	bool bPoseModifiedDuringThrowable; // 0x920(0x01)
	bool bNeedUpperBodyAdditiveDuringThrowable; // 0x921(0x01)
	char pad_922[0x2]; // 0x922(0x02)
	float ProneAdditiveBlendAlpha; // 0x924(0x04)
	float StandAdditiveBlendAlpha; // 0x928(0x04)
	bool bIsMovingOrCrouch; // 0x92c(0x01)
	bool bFastRunning; // 0x92d(0x01)
	bool bIsZooming; // 0x92e(0x01)
	bool bIsTPPZooming; // 0x92f(0x01)
	bool isInAimingState; // 0x930(0x01)
	bool isInZoomingAimingIdle; // 0x931(0x01)
	bool isInZoomingIdle; // 0x932(0x01)
	bool isInZoomingIn; // 0x933(0x01)
	bool isInZoomingOut; // 0x934(0x01)
	char pad_935[0x3]; // 0x935(0x03)
	float ZoomProcessAnimElapsedTime; // 0x938(0x04)
	float ZoomOutProcessAnimElapsedTime; // 0x93c(0x04)
	bool isInZoomOutAfterCast; // 0x940(0x01)
	char pad_941[0x3]; // 0x941(0x03)
	float ADSIdleStableFOVRate; // 0x944(0x04)
	float ZoomWaggleScope; // 0x948(0x04)
	float ZoomWaggleSpeed; // 0x94c(0x04)
	float AimLeftHandAlpha; // 0x950(0x04)
	float AimLocomotionWeight; // 0x954(0x04)
	bool bIsFalling; // 0x958(0x01)
	bool bIsEmptyHand; // 0x959(0x01)
	bool bIsDead; // 0x95a(0x01)
	bool bShouldPlayDeathAnimation; // 0x95b(0x01)
	bool bIsPalsy; // 0x95c(0x01)
	bool bIsCarried; // 0x95d(0x01)
	bool bAttachPawnUnderFPP; // 0x95e(0x01)
	bool bIsCarriedAndAttachPawnUnderFPP; // 0x95f(0x01)
	bool bIsCarriedAndNotAttachPawnUnderFPP; // 0x960(0x01)
	bool bIsImpendingDeath; // 0x961(0x01)
	bool bIsImpendingDeathOrNotAlive; // 0x962(0x01)
	bool bIsImpendingDeathLayingOnGround; // 0x963(0x01)
	bool bIsPlayingRagdollPhysics; // 0x964(0x01)
	bool bNeedImpendingDeathPhysicsBlend; // 0x965(0x01)
	bool bLaydownAnimEnd; // 0x966(0x01)
	bool bUseLaydownPhysicsPose; // 0x967(0x01)
	bool bLaydownToImpendingDeath; // 0x968(0x01)
	bool bImpendingDeathAnimValid; // 0x969(0x01)
	bool bIsBreakthroughMode; // 0x96a(0x01)
	bool bPlayDyingHelpAnim; // 0x96b(0x01)
	bool bUseSpineBoneRotate; // 0x96c(0x01)
	bool bUseLeftShoulderBoneRotate; // 0x96d(0x01)
	bool bIsHitting; // 0x96e(0x01)
	bool bIsWeaponChangeClip; // 0x96f(0x01)
	float LogicADSPercent; // 0x970(0x04)
	float ADSMontangeAlpha; // 0x974(0x04)
	char pad_978[0x3]; // 0x978(0x03)
	bool bIsChangeClipBySprint; // 0x97b(0x01)
	bool NeedTwoHandOverride; // 0x97c(0x01)
	bool bUseRaiseFootIK; // 0x97d(0x01)
	bool bIsFirstWeaponEquip; // 0x97e(0x01)
	char pad_97F[0x31]; // 0x97f(0x31)
	struct FRotator Spine2BoneRotatorAll; // 0x9b0(0x0c)
	struct FVector Spine2BoneLocationAll; // 0x9bc(0x0c)
	struct FRotator LeftShoulerBoneRotatorAll; // 0x9c8(0x0c)
	struct FVector LeftShoulerBoneLocationAll; // 0x9d4(0x0c)
	struct FRotator SpineBoneRotator; // 0x9e0(0x0c)
	char pad_9EC[0x4]; // 0x9ec(0x04)
	struct FRotator LeftShoulderRotator; // 0x9f0(0x0c)
	struct FVector SpineLocationOffset; // 0x9fc(0x0c)
	struct FRotator LeanPeekRotator; // 0xa08(0x0c)
	struct FVector LeanPeekOffset; // 0xa14(0x0c)
	float LeanPeekValue; // 0xa20(0x04)
	float LeanPeekAplha; // 0xa24(0x04)
	float RecoilAlpha; // 0xa28(0x04)
	float FireEndAlpha; // 0xa2c(0x04)
	float FireEndAnimEvalTime; // 0xa30(0x04)
	float ADSToIdleSequenceLength; // 0xa34(0x04)
	float IdleToADSSequenceLength; // 0xa38(0x04)
	float ZoomAdditiveAlpha; // 0xa3c(0x04)
	float AOBlendAlpha; // 0xa40(0x04)
	float AOAimingPitch; // 0xa44(0x04)
	float AOAimingYaw; // 0xa48(0x04)
	float AOBlendOutTime; // 0xa4c(0x04)
	float MachineGunYaw; // 0xa50(0x04)
	float MachineGunPitch; // 0xa54(0x04)
	float ADSLeanValue; // 0xa58(0x04)
	bool bIsADSLean; // 0xa5c(0x01)
	bool bForbidADSLean; // 0xa5d(0x01)
	bool NeedGunFocus; // 0xa5e(0x01)
	char TurnningMode; // 0xa5f(0x01)
	bool bIsTurning; // 0xa60(0x01)
	char pad_A61[0x3]; // 0xa61(0x03)
	float BeginTurningTime; // 0xa64(0x04)
	bool bIsBeingSpectatingUnderFPP; // 0xa68(0x01)
	enum class EAnimationPlayType CurrentAnimationPlayType; // 0xa69(0x01)
	enum class EAnimationPlayType CurrentSkillGroupAnimationPlayType; // 0xa6a(0x01)
	bool bUseLeftHand; // 0xa6b(0x01)
	bool bOnlyLeftArm; // 0xa6c(0x01)
	bool bAnimPlayTypeLeftArmBeforeAO; // 0xa6d(0x01)
	bool bUnderFPP; // 0xa6e(0x01)
	bool bHasHorizontalVelocity; // 0xa6f(0x01)
	bool bHasVerticalVelocity; // 0xa70(0x01)
	char pad_A71[0x3]; // 0xa71(0x03)
	float MovingDirection; // 0xa74(0x04)
	float NormalizedSpeed; // 0xa78(0x04)
	float BSPlayingRate; // 0xa7c(0x04)
	float VerticalVelocity; // 0xa80(0x04)
	float HorizontalVelocity; // 0xa84(0x04)
	float VaultPlayingPercent; // 0xa88(0x04)
	bool VaultResetToggle; // 0xa8c(0x01)
	char pad_A8D[0x3]; // 0xa8d(0x03)
	float CurrFloorAngle; // 0xa90(0x04)
	float CurrAttachPawnVelocity; // 0xa94(0x04)
	float CurrAttachPawnPlayRate; // 0xa98(0x04)
	struct FVector CharacterVelocity; // 0xa9c(0x0c)
	struct UAnimSequence* TurningPlaceAnim; // 0xaa8(0x08)
	float TurnLeftAnimPos; // 0xab0(0x04)
	char pad_AB4[0x4]; // 0xab4(0x04)
	struct UAnimSequence* TurningPlaceRightAnim; // 0xab8(0x08)
	float TurnRightAnimPos; // 0xac0(0x04)
	bool bTurningPlace; // 0xac4(0x01)
	bool bTurningPlaceRight; // 0xac5(0x01)
	enum class EDirection DeathShotDir; // 0xac6(0x01)
	enum class EChracterPoseType DeathPose; // 0xac7(0x01)
	bool bIsStandPose; // 0xac8(0x01)
	bool bIsImpendingDeathPose; // 0xac9(0x01)
	bool bIsCrouchPose; // 0xaca(0x01)
	bool bIsPronePose; // 0xacb(0x01)
	bool bDeathFromParachute; // 0xacc(0x01)
	bool bHeadShotDeath; // 0xacd(0x01)
	bool bUseRandDeathAnim; // 0xace(0x01)
	bool bDeathFromFalling; // 0xacf(0x01)
	bool bDeathFromSwimming; // 0xad0(0x01)
	bool bDeathFromBeAssassinate; // 0xad1(0x01)
	bool bEnableDyingSnapShot; // 0xad2(0x01)
	bool bEnableBeCarryDyingPose; // 0xad3(0x01)
	bool bEnableDyingHipAdjust; // 0xad4(0x01)
	bool bEnableDyingHipConstraint; // 0xad5(0x01)
	char pad_AD6[0x2]; // 0xad6(0x02)
	float HitVectorX; // 0xad8(0x04)
	float HitVectorY; // 0xadc(0x04)
	bool ToggleResetHitAnimTime; // 0xae0(0x01)
	bool bEnableImpendingDeathHipsOffset; // 0xae1(0x01)
	bool bShouldPlayLaydownAnimFPP; // 0xae2(0x01)
	enum class EAnimHitPart HitPart; // 0xae3(0x01)
	bool bFindIKSocket; // 0xae4(0x01)
	bool bFindWeapon; // 0xae5(0x01)
	char pad_AE6[0x2]; // 0xae6(0x02)
	struct FVector WeaponGripLocation; // 0xae8(0x0c)
	struct FRotator WeaponGripRotation; // 0xaf4(0x0c)
	char pad_B00[0x8]; // 0xb00(0x08)
	struct FVector WeaponRHandGripLocation; // 0xb08(0x0c)
	struct FRotator WeaponRHandGripRotation; // 0xb14(0x0c)
	float FlyUpToFlyIdleBlendTime; // 0xb20(0x04)
	char pad_B24[0x18]; // 0xb24(0x18)
	bool bForbidHandGripPose; // 0xb3c(0x01)
	char pad_B3D[0x3]; // 0xb3d(0x03)
	struct FRotator IK3PLeftShoulerRotation; // 0xb40(0x0c)
	struct FRotator IK3PLeftArmRotation; // 0xb4c(0x0c)
	bool bIsKnockOff; // 0xb58(0x01)
	bool bEnableKnockOffSnapShot; // 0xb59(0x01)
	bool bIsResetCachePose; // 0xb5a(0x01)
	char pad_B5B[0x1]; // 0xb5b(0x01)
	float AdditiveAnimAlpha; // 0xb5c(0x04)
	struct FTransform AdditiveAnimTransform; // 0xb60(0x30)
	struct FVector AdditiveAnimLocation; // 0xb90(0x0c)
	struct FRotator AdditiveAnimRotation; // 0xb9c(0x0c)
	struct FVector AdditiveAnimLeftHandLocation; // 0xba8(0x0c)
	bool isInteracting; // 0xbb4(0x01)
	char pad_BB5[0x3]; // 0xbb5(0x03)
	float InteractingPercent; // 0xbb8(0x04)
	char pad_BBC[0x14]; // 0xbbc(0x14)
	struct USkeletalMeshComponent* ParentMesh; // 0xbd0(0x08)
	char pad_BD8[0x8]; // 0xbd8(0x08)
	struct FGPMoveTurnJumpProxy MoveTurnJumpProxy; // 0xbe0(0x60)
	struct FRotator GunSwingAdditiveRotator; // 0xc40(0x0c)
	struct FVector GunSwingAdditiveDelayOffsetInMoving; // 0xc4c(0x0c)
	struct FRotator GunSwingAdditiveDelayRotatorInMoving; // 0xc58(0x0c)
	struct FVector GunSwingAdditiveOffsetInMoving; // 0xc64(0x0c)
	struct FRotator GunSwingAdditiveRotatorInMoving; // 0xc70(0x0c)
	struct FVector GunSwingAdditivePullOffsetInMoving; // 0xc7c(0x0c)
	struct FRotator GunSwingAdditivePullRotatorInMoving; // 0xc88(0x0c)
	struct FVector GunSwingAdditiveLeftShoulderOffsetInMoving; // 0xc94(0x0c)
	struct FVector GunSwingAdditiveOffsetInFBMoving; // 0xca0(0x0c)
	char pad_CAC[0x4]; // 0xcac(0x04)
	struct FTransform GunSwingTransInCrouchMoving; // 0xcb0(0x30)
	char pad_CE0[0x4]; // 0xce0(0x04)
	struct FVector MoveTurnSpringAdditiveOffset; // 0xce4(0x0c)
	float GunAOHorAxis; // 0xcf0(0x04)
	float GunAOVerAxis; // 0xcf4(0x04)
	struct FVector GunSwingAdditiveOffset; // 0xcf8(0x0c)
	struct FVector GunSwingDelayAdditiveOffset; // 0xd04(0x0c)
	struct FRotator GunSwingDelayAdditiveRotator; // 0xd10(0x0c)
	struct FVector ADSGunSwingOffset; // 0xd1c(0x0c)
	struct FRotator ADSGunSwingRotator; // 0xd28(0x0c)
	struct FVector HipsOffset; // 0xd34(0x0c)
	struct FRotator HipsRotation; // 0xd40(0x0c)
	bool bUse3PSpineHeight; // 0xd4c(0x01)
	char pad_D4D[0x3]; // 0xd4d(0x03)
	struct FVector CurrentSpineHeight; // 0xd50(0x0c)
	float CurrentSpineHeightAlpha; // 0xd5c(0x04)
	bool bUseInteractLeftHandIK; // 0xd60(0x01)
	char pad_D61[0x3]; // 0xd61(0x03)
	struct FVector LeftHandInteractSocketLocation; // 0xd64(0x0c)
	struct FTransform LeftHandInteractSocketTransform; // 0xd70(0x30)
	float LeftHandInteractIKBlendTime; // 0xda0(0x04)
	bool bHasVBSpineIkGunBone; // 0xda4(0x01)
	bool bUseVBSpineIkGunBone; // 0xda5(0x01)
	bool FobidFootIK; // 0xda6(0x01)
	char pad_DA7[0x1]; // 0xda7(0x01)
	int32_t AnimLODLevel; // 0xda8(0x04)
	bool bOnlyLocomotion; // 0xdac(0x01)
	bool bShouldForbidZoom; // 0xdad(0x01)
	bool bForbidTPPZooming; // 0xdae(0x01)
	bool bShouldForbidHiting; // 0xdaf(0x01)
	bool AnimLODLevelThanLod1; // 0xdb0(0x01)
	char pad_DB1[0x3]; // 0xdb1(0x03)
	struct FVector SpinePitchOffset; // 0xdb4(0x0c)
	float SpinePitchOffsetAlpha; // 0xdc0(0x04)
	bool bInVehicle; // 0xdc4(0x01)
	bool bInVehicleAndNotMachineGun; // 0xdc5(0x01)
	bool bInVehiclePassenger; // 0xdc6(0x01)
	bool bInVehicleDriver; // 0xdc7(0x01)
	bool bInVehicleWeapon; // 0xdc8(0x01)
	bool bWaitingForVehicleWeapon; // 0xdc9(0x01)
	bool bWaitingForVehicleWeaponChanged; // 0xdca(0x01)
	bool bDirver; // 0xdcb(0x01)
	bool bDriverNotWeapon; // 0xdcc(0x01)
	bool bDirverOrVehicleIdle; // 0xdcd(0x01)
	bool bDriverOrWeaponOrVehicleIdle; // 0xdce(0x01)
	bool bVehicleAimBS; // 0xdcf(0x01)
	bool bVehicleLeanOut; // 0xdd0(0x01)
	char pad_DD1[0x7]; // 0xdd1(0x07)
	bool bVehicleLeanOut_TPP; // 0xdd8(0x01)
	bool bUseLocomotionIdle; // 0xdd9(0x01)
	bool bUseVehicleIdle; // 0xdda(0x01)
	char pad_DDB[0x1]; // 0xddb(0x01)
	int32_t SeatPos; // 0xddc(0x04)
	float DriveTurnX; // 0xde0(0x04)
	float LockSiteAlpha; // 0xde4(0x04)
	float DriveTurnY; // 0xde8(0x04)
	float SoaringTime; // 0xdec(0x04)
	float FPPDriveTurnExplitTime; // 0xdf0(0x04)
	struct FVector SiteRootLocation; // 0xdf4(0x0c)
	struct FRotator SiteRootRotation; // 0xe00(0x0c)
	char pad_E0C[0x4]; // 0xe0c(0x04)
	struct UAnimSequence* VehicleIdle; // 0xe10(0x08)
	struct UAnimSequence* VehicleDriveTurnBlend; // 0xe18(0x08)
	struct UAimOffsetBlendSpace* VehiclePasOutBS; // 0xe20(0x08)
	struct UAimOffsetBlendSpace* VehicleSoaringBlend; // 0xe28(0x08)
	struct UAnimMontage* VehicleInteractive; // 0xe30(0x08)
	struct UAnimSequence* VehicleIdle_3P; // 0xe38(0x08)
	struct UAimOffsetBlendSpace* VehicleDriveTurnBlend_3P; // 0xe40(0x08)
	struct UAimOffsetBlendSpace* VehiclePasOutBS_3P; // 0xe48(0x08)
	struct UAimOffsetBlendSpace* VehicleSoaringBlend_3P; // 0xe50(0x08)
	bool bEnableDoubleHandIK; // 0xe58(0x01)
	bool bEnableTPPDoubleHandIK; // 0xe59(0x01)
	bool bMachineGunMoveTurn; // 0xe5a(0x01)
	bool bMachineGunMoveTurnNew; // 0xe5b(0x01)
	float MoveTurnX; // 0xe5c(0x04)
	struct FTransform DoubleIK_LeftTransform; // 0xe60(0x30)
	struct FTransform DoubleIK_RightTransform; // 0xe90(0x30)
	struct FVector DoubleIK_LeftLocation; // 0xec0(0x0c)
	struct FVector DoubleIK_RightLocation; // 0xecc(0x0c)
	char pad_ED8[0x8]; // 0xed8(0x08)
	struct FTransform PlayerPointTransform; // 0xee0(0x30)
	struct FVector PlayerPointLocation; // 0xf10(0x0c)
	struct FVector DoubleIK_SpineLocation; // 0xf1c(0x0c)
	struct FRotator DoubleIK_SpineRotator; // 0xf28(0x0c)
	bool bEnableGenericDoubleHandIK; // 0xf34(0x01)
	char pad_F35[0x3]; // 0xf35(0x03)
	struct FVector IK_LeftLocation; // 0xf38(0x0c)
	struct FVector IK_RightLocation; // 0xf44(0x0c)
	struct FRotator IK_LeftRotation; // 0xf50(0x0c)
	struct FRotator IK_RightRotation; // 0xf5c(0x0c)
	float IK_RightAlpha; // 0xf68(0x04)
	float IK_LeftAlpha; // 0xf6c(0x04)
	struct FName IK_RightRootBone; // 0xf70(0x08)
	struct FName IK_LeftRootBone; // 0xf78(0x08)
	bool bShouldClimbLadder; // 0xf80(0x01)
	bool bShouldEnterClimbLadderMove; // 0xf81(0x01)
	char pad_F82[0x2]; // 0xf82(0x02)
	float ClimbLadderLeftFootHeightAlpha; // 0xf84(0x04)
	float ClimbLadderMoveExplicitTime; // 0xf88(0x04)
	bool bClimbLadderMoveR; // 0xf8c(0x01)
	char pad_F8D[0x3]; // 0xf8d(0x03)
	struct UAnimSequence* ClimbLadderSequenceFPP; // 0xf90(0x08)
	struct UAnimSequence* ClimbLadderSequenceTPP; // 0xf98(0x08)
	bool bPlayClimbLadderSequence; // 0xfa0(0x01)
	char pad_FA1[0x3]; // 0xfa1(0x03)
	float PlayClimbLadderSequenceTime; // 0xfa4(0x04)
	struct FRotator ClimbLadderAnimRot; // 0xfa8(0x0c)
	enum class EClimbLadderCheckType ClimbLadderCheckType; // 0xfb4(0x01)
	char pad_FB5[0x3]; // 0xfb5(0x03)
	struct UAnimSequence* AssassinateTPPAnim; // 0xfb8(0x08)
	float PlayAssassinateSequenceTime; // 0xfc0(0x04)
	bool bPlayAssassinateSequence; // 0xfc4(0x01)
	char pad_FC5[0x3]; // 0xfc5(0x03)
	struct FRotator AssassinateAnimRot; // 0xfc8(0x0c)
	char pad_FD4[0x4]; // 0xfd4(0x04)
	struct UAnimSequence* BeAssassinateTPPAnim; // 0xfd8(0x08)
	float PlayBeAssassinateSequenceTime; // 0xfe0(0x04)
	bool bPlayBeAssassinateSequence; // 0xfe4(0x01)
	char pad_FE5[0x3]; // 0xfe5(0x03)
	struct FRotator BeAssassinateAnimRot; // 0xfe8(0x0c)
	char pad_FF4[0x4]; // 0xff4(0x04)
	struct UAnimSequenceBase* LeftHandPoseAdditiveAnimForCurrentMag; // 0xff8(0x08)
	float LeftHandPoseAdditiveAlpha; // 0x1000(0x04)
	float GunOffsetAlpha; // 0x1004(0x04)
	struct FRotator GunOffsetRotator; // 0x1008(0x0c)
	struct FVector GunOffsetLocation; // 0x1014(0x0c)
	struct FVector GunShakeOffsetLocation; // 0x1020(0x0c)
	bool bLocalControlled; // 0x102c(0x01)
	char pad_102D[0x3]; // 0x102d(0x03)
	struct FVector GunFocusLocation; // 0x1030(0x0c)
	bool bShouldUpdateAnimation; // 0x103c(0x01)
	bool bShouldUpdateAIAnimation; // 0x103d(0x01)
	char pad_103E[0x2]; // 0x103e(0x02)
	float AimFireIdleAlpha; // 0x1040(0x04)
	bool bShouldUseSimpleAnim; // 0x1044(0x01)
	char pad_1045[0xb]; // 0x1045(0x0b)
	struct UAimOffsetBlendSpace* StandAO; // 0x1050(0x08)
	struct UAimOffsetBlendSpace* CrouchAO; // 0x1058(0x08)
	struct UAimOffsetBlendSpace* ProneAO; // 0x1060(0x08)
	struct UAimOffsetBlendSpace* StandAIAO; // 0x1068(0x08)
	struct UAimOffsetBlendSpace* ProneAIAO; // 0x1070(0x08)
	struct UAimOffsetBlendSpace* StandADSLeanAO; // 0x1078(0x08)
	struct UBlendSpaceBase* StandLeanPeekAdditiveBS; // 0x1080(0x08)
	struct UBlendSpaceBase* CrouchLeanPeekAdditiveBS; // 0x1088(0x08)
	struct AGPCharacter* OwnerPawn; // 0x1090(0x08)
	char pad_1098[0x8]; // 0x1098(0x08)
	/*struct TScriptInterface<IWeaponInterface>*/char CurInv[0x10]; // 0x10a0(0x10)
	float AnimBPTickInterval; // 0x10b0(0x04)
	char pad_10B4[0x4]; // 0x10b4(0x04)
	struct TArray<struct UAnimSequence*> JumpHeavyLandAnimList; // 0x10b8(0x10)
	char pad_10C8[0x88]; // 0x10c8(0x88)
	struct UCurveFloat* RecoilRecoverCurve; // 0x1150(0x08)
	struct UCurveFloat* RecoilEndCurve; // 0x1158(0x08)
	struct UCurveFloat* RecoilFireForceAttenuationCurve; // 0x1160(0x08)
	struct UCurveFloat* ResistanceForceAttenuationCurve; // 0x1168(0x08)
	char pad_1170[0x10]; // 0x1170(0x10)
	struct UCurveFloat* TPPZoomAnimCurve; // 0x1180(0x08)
	char pad_1188[0x28]; // 0x1188(0x28)
	struct UWeaponDataComponentAppearance* WeaponDataComponentAppearanceNormal; // 0x11b0(0x08)
	struct UGPAnimProxyComponent* AnimProxyComponent; // 0x11b8(0x08)
	/*struct TScriptInterface<IWeaponDataComponentAnimInterface>*/char WeaponAnimDataComponent[0x10]; // 0x11c0(0x10)
	struct UWeaponDataComponentAnim* WeaponAnimDataComponentRealComp; // 0x11d0(0x08)
	struct UGPAnimDataComponent* AnimDataComponent; // 0x11d8(0x08)
	/*struct TScriptInterface<IWeaponDataComponentAppearanceInterface>*/char WeaponAppearanceDataComponent[0x10]; // 0x11e0(0x10)
	struct UWeaponFuncComponentFireShake* FireShakeFunc; // 0x11f0(0x08)
	struct UWeaponDataComponentAdapter* WeaponDataComponentAdapter; // 0x11f8(0x08)
	struct UWeaponFuncComponentZoom* WeaponFuncComponentZoom; // 0x1200(0x08)
	struct UWeaponFuncComponentOffset* FuncOffset; // 0x1208(0x08)
	/*struct TScriptInterface<IWeaponFuncComponentAdditiveAnimInterface>*/char WeaponAdditiveAnimFuncComponent[0x10]; // 0x1210(0x10)
	struct UGPVaultAndClimbComponent* VaultAndClimbComponent; // 0x1220(0x08)
	struct UGPRagDollPhysicsComponent* RagdollComponent; // 0x1228(0x08)
	struct UGPParachuteComponent* ParachuteComponent; // 0x1230(0x08)
	struct UGPSlidingTackleComponent* SlidingTackleComponent; // 0x1238(0x08)
	struct UGPHealthDataComponent* HealthDataComponent; // 0x1240(0x08)
	struct UGPSprintComponent* SprintComponent; // 0x1248(0x08)
	struct UGPCameraModeComponent* CameraModeComponent; // 0x1250(0x08)
	struct UGPHandIKComponent* HandIKComponent; // 0x1258(0x08)
	/*struct TScriptInterface<IWeaponManagerInterface>*/char WeaponManager[0x10]; // 0x1260(0x10)
	struct UGPFightStateComponent* FightStateComponent; // 0x1270(0x08)
	struct UGPVehicleDataComponent* VehicleDataComponent; // 0x1278(0x08)
	struct UGPAIDataComponentAnim* AIAnimDataComponent; // 0x1280(0x08)
	struct UGPAnimInstance_Locomotion* LocomotionAnimInst; // 0x1288(0x08)
	struct UGPAnimInstance* ParentAnimInst; // 0x1290(0x08)
	struct UGPCharacterMovementComponent* GPCharacterMovementComponent; // 0x1298(0x08)
	struct AWeaponBase* WeaponInv; // 0x12a0(0x08)
	char pad_12A8[0xd8]; // 0x12a8(0xd8)
	struct APawn* OwnerPawnVehicle; // 0x1380(0x08)
	char pad_1388[0x18]; // 0x1388(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.LandProxy
// Size: 0xa0 (Inherited: 0x00)
struct FLandProxy {
public:

	struct FGPSpringBase JumpLandSpring; // 0x00(0x20)
	struct FRotator LandGunRotator; // 0x20(0x0c)
	struct FRotator LandCameraRotator; // 0x2c(0x0c)
	char pad_38[0x10]; // 0x38(0x10)
	float LandMinZOffset; // 0x48(0x04)
	float LandCameraMinZOffset; // 0x4c(0x04)
	float JumpLandSpringMinSmoothTime; // 0x50(0x04)
	float JumpLandSpringMinDampingRadio; // 0x54(0x04)
	float LandMaxZOffset; // 0x58(0x04)
	float LandCameraMaxZOffset; // 0x5c(0x04)
	float JumpLandSpringMaxSmoothTime; // 0x60(0x04)
	float JumpLandSpringMaxDampingRadio; // 0x64(0x04)
	char pad_68[0x38]; // 0x68(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPSpringWithTransform
// Size: 0x48 (Inherited: 0x20)
struct FGPSpringWithTransform : public FGPSpringBase {
public:

	char pad_20[0x28]; // 0x20(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DFMGunSwingSpringInMoving
// Size: 0x98 (Inherited: 0x20)
struct FDFMGunSwingSpringInMoving : public FGPSpringBase {
public:

	float TargetFactor; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<float> StatusSmoothTime; // 0x28(0x10)
	struct TArray<float> StatusDampingRadio; // 0x38(0x10)
	struct TArray<float> StatusFactor; // 0x48(0x10)
	struct FVector TargetOffsetInLeftMoving; // 0x58(0x0c)
	struct FVector TargetOffsetInRightMoving; // 0x64(0x0c)
	struct FRotator TargetRotatorInLeftMoving; // 0x70(0x0c)
	struct FRotator TargetRotatorInRightMoving; // 0x7c(0x0c)
	char pad_88[0x10]; // 0x88(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MoveParamsNoBase
// Size: 0x3c (Inherited: 0x18)
struct FMoveParamsNoBase : public FMoveInputParams {
public:

	struct FVector_NetQuantize100 ClientLoc; // 0x18(0x0c)
	char ClientRoll; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32_t MoveNumber; // 0x28(0x04)
	char ClientMovementMode; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FVector_NetQuantize100 ClientVelocity; // 0x30(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAssassinateSkinItem
// Size: 0x168 (Inherited: 0x10)
struct FGPAssassinateSkinItem : public FDescRowBase {
public:

	uint64_t SkinId; // 0x10(0x08)
	struct FAssassinateSkinAnim StandAssassinateAnim; // 0x18(0x70)
	struct FAssassinateSkinAnim ProneAssassinateAnim; // 0x88(0x70)
	struct FAssassinateSkinAnim ImpendingDeathAssassinateAnim; // 0xf8(0x70)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPHudData
// Size: 0xb0 (Inherited: 0x0c)
struct FGPHudData : public FFastArraySerializerItem {
public:

	enum class EGPHudDataType HudDataType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int64_t NetUniqueID; // 0x10(0x08)
	int32_t DataKeyHash; // 0x18(0x04)
	struct FVector_NetQuantize Loc; // 0x1c(0x0c)
	float RotYaw; // 0x28(0x04)
	struct FMemberHealthInfo MemberHealthInfo; // 0x2c(0x3c)
	struct FSceneWeaponInfo SceneWeaponInfo; // 0x68(0x28)
	struct FVehicleInfo VehicleInfo; // 0x90(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPPathFollowWayPointData
// Size: 0x28 (Inherited: 0x00)
struct FGPPathFollowWayPointData {
public:

	int32_t CurrentWayPointIndex; // 0x00(0x04)
	bool bNearTargetWayPoint; // 0x04(0x01)
	bool bBackOff; // 0x05(0x01)
	bool bMuteRayTrace; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	struct FGPPathWayPointRotateSettings RotateSettings; // 0x08(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DesktopDOFConfigs
// Size: 0x28 (Inherited: 0x00)
struct FDesktopDOFConfigs {
public:

	struct FPhysicalCameraConfig DefaultConfig; // 0x00(0x14)
	struct FPhysicalCameraConfig ZoomingInConfig; // 0x14(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MobileDOFConfigs
// Size: 0x24 (Inherited: 0x00)
struct FMobileDOFConfigs {
public:

	float FarDistance; // 0x00(0x04)
	struct FBaseDOFConfig FarDOFConfig; // 0x04(0x10)
	struct FBaseDOFConfig NearDOFConfig; // 0x14(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CameraModeConfig
// Size: 0x2c (Inherited: 0x00)
struct FCameraModeConfig {
public:

	struct FPOVFloatSetting FOV; // 0x00(0x08)
	struct FPOVFloatSetting OrthoWidth; // 0x08(0x08)
	struct FPOVFloatSetting AspectRatio; // 0x10(0x08)
	struct FPOVBoolSetting bConstrainAspectRatio; // 0x18(0x02)
	struct FPOVBoolSetting bUseFieldOfViewForLOD; // 0x1a(0x02)
	struct FPOVProjectionModeSetting ProjectionMode; // 0x1c(0x02)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FPOVFloatSetting PostProcessBlendWeight; // 0x20(0x08)
	bool bUpdateFOVByBuff; // 0x28(0x01)
	bool bUpdateDOFConfigDesktop; // 0x29(0x01)
	bool bUpdateMotionBlur; // 0x2a(0x01)
	bool bUpdateCameraLensEffects; // 0x2b(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPPostprocessMaterialInfo
// Size: 0x78 (Inherited: 0x00)
struct FGPPostprocessMaterialInfo {
public:

	struct FString PostEffectName; // 0x00(0x10)
	int32_t EffectPriority; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UMaterialInterface* VeryHighMaterial; // 0x18(0x08)
	struct FFullScreenTranslucencyQuad VeryHighFullScreenQuad; // 0x20(0x10)
	struct UMaterialInterface* HighMaterial; // 0x30(0x08)
	struct FFullScreenTranslucencyQuad HighFullScreenQuad; // 0x38(0x10)
	struct FFullScreenTranslucencyQuad MediumFullScreenQuad; // 0x48(0x10)
	struct FFullScreenTranslucencyQuad LowFullScreenQuad; // 0x58(0x10)
	struct FFullScreenTranslucencyQuad VeryLowFullScreenQuad; // 0x68(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RagDollDeathAnimAssets
// Size: 0x130 (Inherited: 0x00)
struct FRagDollDeathAnimAssets {
public:

	struct UAnimSequence* DefalutDeathAnim; // 0x00(0x08)
	float DefalutDeathDelayTime; // 0x08(0x04)
	float StandLeftRightRangeAngle; // 0x0c(0x04)
	struct TArray<struct FRagDollDeathAnimAssetInfo> StandDeaths; // 0x10(0x10)
	struct TArray<struct FRagDollDeathAnimAssetInfo> StandLeftShoulderDeaths; // 0x20(0x10)
	struct TArray<struct FRagDollDeathAnimAssetInfo> StandRightShoulderDeaths; // 0x30(0x10)
	struct TArray<struct FRagDollDeathAnimAssetInfo> StandLeftLegDeaths; // 0x40(0x10)
	struct TArray<struct FRagDollDeathAnimAssetInfo> StandRightLegDeaths; // 0x50(0x10)
	struct TArray<struct FRagDollDeathAnimAssetInfo> StandHeadDeaths; // 0x60(0x10)
	struct TArray<struct FRagDollDeathAnimAssetInfo> StandLegDeaths; // 0x70(0x10)
	struct FRagDollDeathAnimAssetInfo StandBodyFLDeath; // 0x80(0x08)
	struct FRagDollDeathAnimAssetInfo StandBodyFRDeath; // 0x88(0x08)
	struct FRagDollDeathAnimAssetInfo StandLegFLDeath; // 0x90(0x08)
	struct FRagDollDeathAnimAssetInfo StandLegFRDeath; // 0x98(0x08)
	struct FRagDollDeathAnimAssetInfo StandHeadHeavyDeath; // 0xa0(0x08)
	struct FRagDollDeathAnimAssetInfo StandBodyFHeavyDeath; // 0xa8(0x08)
	struct FRagDollDeathAnimAssetInfo StandBodyFLHeavyDeath; // 0xb0(0x08)
	struct FRagDollDeathAnimAssetInfo StandBodyFRHeavyDeath; // 0xb8(0x08)
	struct TArray<struct FRagDollDeathAnimAssetInfo> CrouchDeaths; // 0xc0(0x10)
	struct TArray<struct FRagDollDeathAnimAssetInfo> ProneDeaths; // 0xd0(0x10)
	struct TArray<struct FRagDollDeathAnimAssetInfo> SwimDeaths; // 0xe0(0x10)
	struct TArray<struct FRagDollDeathAnimAssetInfo> ImpendingDeaths; // 0xf0(0x10)
	struct TArray<struct FRagDollDeathAnimAssetInfo> PaasageDeaths; // 0x100(0x10)
	struct TArray<struct FRagDollDeathAnimAssetInfo> DriverDeaths; // 0x110(0x10)
	struct TArray<struct FRagDollDeathAnimAssetInfo> ParachuteDeaths; // 0x120(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkeletalMeshAnimUROBit
// Size: 0x40 (Inherited: 0x08)
struct FSkeletalMeshAnimUROBit : public FTableRowBase {
public:

	struct FSkeletalMeshAnimUROThresholdRateBit URO_1; // 0x08(0x08)
	struct FSkeletalMeshAnimUROThresholdRateBit URO_2; // 0x10(0x08)
	struct FSkeletalMeshAnimUROThresholdRateBit URO_3; // 0x18(0x08)
	struct FSkeletalMeshAnimUROThresholdRateBit URO_4; // 0x20(0x08)
	struct FSkeletalMeshAnimUROThresholdRateBit URO_5; // 0x28(0x08)
	struct FSkeletalMeshAnimUROThresholdRateBit URO_6; // 0x30(0x08)
	int32_t MaxEvalRateForInterpolation; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkeletalMeshAnimLODRow
// Size: 0xb0 (Inherited: 0x10)
struct FSkeletalMeshAnimLODRow : public FDescRowBase {
public:

	struct FSkeletalMeshAnimLODBit Low; // 0x10(0x28)
	struct FSkeletalMeshAnimLODBit Medium; // 0x38(0x28)
	struct FSkeletalMeshAnimLODBit High; // 0x60(0x28)
	struct FSkeletalMeshAnimLODBit SuperHigh; // 0x88(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SKillInputCache
// Size: 0x24 (Inherited: 0x00)
struct FSKillInputCache {
public:

	bool bIsEnable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SkillId; // 0x04(0x04)
	bool bIsPressed; // 0x08(0x01)
	bool bIsReleased; // 0x09(0x01)
	bool bSupportHoldToActive; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float BeginTime; // 0x0c(0x04)
	float CacheTime; // 0x10(0x04)
	int32_t Priority; // 0x14(0x04)
	struct FSkillEventArgs Args; // 0x18(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillLongPressData
// Size: 0x30 (Inherited: 0x00)
struct FSkillLongPressData {
public:

	int32_t SkillId; // 0x00(0x04)
	int32_t SkillID2; // 0x04(0x04)
	struct FSkillEventArgs Args; // 0x08(0x0c)
	float LongPressConfigTime; // 0x14(0x04)
	float StartPressTime; // 0x18(0x04)
	float PressTime; // 0x1c(0x04)
	char pad_20[0x10]; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ArmedforceDataFlowZoya
// Size: 0x104 (Inherited: 0x00)
struct FArmedforceDataFlowZoya {
public:

	int32_t SwarmsEquipCount; // 0x00(0x04)
	float SwarmsCastTotalDelayTime; // 0x04(0x04)
	int32_t SwarmsCastCount; // 0x08(0x04)
	int32_t SwarmsHitPlayerCount; // 0x0c(0x04)
	int32_t SwarmsHitAICount; // 0x10(0x04)
	int32_t SwarmsKillCount; // 0x14(0x04)
	int32_t SwarmsAssistKillCount; // 0x18(0x04)
	int32_t SwarmsHitCount0_21; // 0x1c(0x04)
	int32_t SwarmsHitCount20_41; // 0x20(0x04)
	int32_t SwarmsHitCount40_61; // 0x24(0x04)
	int32_t SwarmsManualClearCount; // 0x28(0x04)
	int32_t BlindingSmokeEquipCount; // 0x2c(0x04)
	int32_t BlindingSmokeUseCount; // 0x30(0x04)
	int32_t BlindingSmokeHitPlayerCount; // 0x34(0x04)
	int32_t BlindingSmokeHitAICount; // 0x38(0x04)
	float BlindingSmokeHitPlayerTime; // 0x3c(0x04)
	int32_t BlindingSmokeKillPlayerCount; // 0x40(0x04)
	int32_t BlindingSmokeKillAICount; // 0x44(0x04)
	int32_t BlindingSmoke3SecondsKillPlayerCount; // 0x48(0x04)
	int32_t BlindingSmokeDestroyCount; // 0x4c(0x04)
	int32_t BlindingSmokeHitMoreThanOnePlayerCount; // 0x50(0x04)
	int32_t AdrenalineTotalAssistCount; // 0x54(0x04)
	int32_t AdrenalineFrightingUseCount; // 0x58(0x04)
	float PassiveSkillTotalSaveTime; // 0x5c(0x04)
	struct FArmedforceCommonData CommonData; // 0x60(0xa4)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ArmedforceDataFlowC202
// Size: 0x1a8 (Inherited: 0x00)
struct FArmedforceDataFlowC202 {
public:

	int64_t PassiveSkillMarkEnermyNum; // 0x00(0x08)
	int64_t UsePathTracingCnt; // 0x08(0x08)
	int64_t PathTracingMarkPlayerCnt; // 0x10(0x08)
	int64_t PathTracingMarkPawnCnt; // 0x18(0x08)
	int64_t KillMarkedPlayerCnt; // 0x20(0x08)
	int64_t PathTracingUserDieCnt; // 0x28(0x08)
	float PathTracingLineTotalTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	int64_t UseFlashDroneCnt; // 0x38(0x08)
	int64_t FlashDroneFlowLineCnt; // 0x40(0x08)
	int64_t FlashDroneFlashCnt; // 0x48(0x08)
	int64_t FlashDroneFlashPlayerCnt; // 0x50(0x08)
	int64_t FlashDroneFlashAICnt; // 0x58(0x08)
	int64_t FlashDroneFlashRobotCnt; // 0x60(0x08)
	int64_t FlashDroneNearFlashCnt; // 0x68(0x08)
	int64_t FlashDroneMidFlashCnt; // 0x70(0x08)
	int64_t FlashDroneFarFlashCnt; // 0x78(0x08)
	int64_t FlashDroneBackFlashCnt; // 0x80(0x08)
	int64_t FlashDroneFlashAssistCnt; // 0x88(0x08)
	int64_t FlashDroneFlashBeDestoryCnt; // 0x90(0x08)
	int64_t UseDataKnifeCnt; // 0x98(0x08)
	int64_t DataKnifeHitPlayerCnt; // 0xa0(0x08)
	int64_t DataKnifeHitAICnt; // 0xa8(0x08)
	int64_t DataKnifeHitRobotCnt; // 0xb0(0x08)
	int64_t DataKnifeHitPlayerDamage; // 0xb8(0x08)
	int64_t DataKnifeKillPlayerCnt; // 0xc0(0x08)
	int64_t DataKnifeKillAICnt; // 0xc8(0x08)
	int64_t DataKnifeKillRobotCnt; // 0xd0(0x08)
	int64_t DataKnifeAssistCnt; // 0xd8(0x08)
	int64_t DataKnifeEMPSuppressionMineCnt; // 0xe0(0x08)
	int64_t DataKnifeEMPPathTracingCnt; // 0xe8(0x08)
	int64_t DataKnifeEMPRebornFlagCnt; // 0xf0(0x08)
	struct FArmedforceCommonData CommonData; // 0xf8(0xa4)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct AGPCharacter* OwnerCharacter; // 0x1a0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ArmedforceDataFlowDavid
// Size: 0x150 (Inherited: 0x00)
struct FArmedforceDataFlowDavid {
public:

	int32_t CruiseMissileAimOnFire; // 0x00(0x04)
	int32_t CruiseMissileAimOffFire; // 0x04(0x04)
	int32_t CruiseMissileMainHitTerrestrial; // 0x08(0x04)
	int32_t CruiseMissileMainHitAerial; // 0x0c(0x04)
	float CruiseMissileMainExplosionDamageToTerrestrial; // 0x10(0x04)
	float CruiseMissileMainExplosionDamageToAerial; // 0x14(0x04)
	int32_t CruiseMissileMainDestroyTerrestrial; // 0x18(0x04)
	int32_t CruiseMissileMainDestroyAerial; // 0x1c(0x04)
	int32_t CruiseMissileMainHitPlayerBeforeAcc; // 0x20(0x04)
	int32_t CruiseMissileMainHitPlayerAfterAcc; // 0x24(0x04)
	int32_t CruiseMissileMainExplodePlayer; // 0x28(0x04)
	int32_t CruiseMissileMainExplodeAIPlayer; // 0x2c(0x04)
	int32_t CruiseMissileMainExplodeAINPC; // 0x30(0x04)
	int32_t CruiseMissileSubExplodePlayer; // 0x34(0x04)
	int32_t CruiseMissileSubExplodeAIPlayer; // 0x38(0x04)
	int32_t CruiseMissileSubExplodeAINPC; // 0x3c(0x04)
	float CruiseMissileMainExplosionDamage; // 0x40(0x04)
	float CruiseMissileSubExplosionDamage; // 0x44(0x04)
	int32_t CruiseMissileMainKnockDownPlayer; // 0x48(0x04)
	int32_t CruiseMissileMainKnockDownAIPlayer; // 0x4c(0x04)
	int32_t CruiseMissileMainKnockDownAINPC; // 0x50(0x04)
	int32_t CruiseMissileHurtDeadIn10s; // 0x54(0x04)
	int32_t CruiseMissileMainDestroyed; // 0x58(0x04)
	int32_t CruiseMissileAcc; // 0x5c(0x04)
	int32_t ThrowBlockingThrowNumber; // 0x60(0x04)
	int32_t ThrowBlockingThrowTakeDamageNumber; // 0x64(0x04)
	float ThrowBlockingTakePointDamage; // 0x68(0x04)
	float ThrowBlockingTakeRadialDamage; // 0x6c(0x04)
	float ThrowBlockingTakeDamageLifeTime; // 0x70(0x04)
	float ThrowBlockingMainTakePointDamage; // 0x74(0x04)
	float ThrowBlockingMainTakeRadialDamage; // 0x78(0x04)
	float ThrowBlockingSpawnTakeDamage; // 0x7c(0x04)
	int32_t ThrowBlockingSpawnDestroyed; // 0x80(0x04)
	int32_t ThrowBlockingRadialDestroyed; // 0x84(0x04)
	int32_t ThrowBlockingPointDestroyed; // 0x88(0x04)
	int32_t ThrowBlockingMainPartDestroyed; // 0x8c(0x04)
	int32_t IncendiaryThrowNumber; // 0x90(0x04)
	int32_t IncendiaryHitPlayer; // 0x94(0x04)
	float IncendiaryPlayerDamage; // 0x98(0x04)
	int32_t IncendiaryInsidePlayerKillNum; // 0x9c(0x04)
	int32_t IncendiaryOutsidePlayerKillNum; // 0xa0(0x04)
	int32_t IncendiaryExtinguishedNum; // 0xa4(0x04)
	int32_t IncendiaryDestroyBlockingNum; // 0xa8(0x04)
	struct FArmedforceCommonData CommonData; // 0xac(0xa4)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ArmedforceDataFlowWolfWarriors
// Size: 0x118 (Inherited: 0x00)
struct FArmedforceDataFlowWolfWarriors {
public:

	int32_t PassiveActivateCnt; // 0x00(0x04)
	int32_t PassiveActivateCntTryCount; // 0x04(0x04)
	int32_t FallReduceDamageCnt; // 0x08(0x04)
	int32_t FallReduceDamageCnt1; // 0x0c(0x04)
	int32_t FallReduceDamageCnt2; // 0x10(0x04)
	int32_t FallDamageBreakBoneCnt; // 0x14(0x04)
	int32_t FireAirCannonCnt; // 0x18(0x04)
	int32_t AirCannonHitPlayerCnt; // 0x1c(0x04)
	float AirCannonHitPlayerDistance; // 0x20(0x04)
	int32_t AirCannonHitAICnt; // 0x24(0x04)
	int32_t AirCannonKnockbackKillCnt; // 0x28(0x04)
	int32_t AirCannonKnockbackBeKillCnt; // 0x2c(0x04)
	int32_t AirCannonKnockbackMultiPlayerCnt; // 0x30(0x04)
	int32_t RushForwardCnt; // 0x34(0x04)
	int32_t RushBackCnt; // 0x38(0x04)
	int32_t RushLeftCnt; // 0x3c(0x04)
	int32_t RushRightCnt; // 0x40(0x04)
	int32_t RushCnt; // 0x44(0x04)
	int32_t RushBeHit2s; // 0x48(0x04)
	int32_t UseRushCntInCDAwards2s; // 0x4c(0x04)
	int32_t KillRush2s; // 0x50(0x04)
	int32_t BekillRushing; // 0x54(0x04)
	int32_t ThrowC4Cnt; // 0x58(0x04)
	int32_t C4KillPlayerCnt; // 0x5c(0x04)
	int32_t C4KillAICnt; // 0x60(0x04)
	int32_t C4HitPlayerCnt; // 0x64(0x04)
	int32_t C4HitAICnt; // 0x68(0x04)
	int32_t C4HitVehicle; // 0x6c(0x04)
	int32_t C4DestroyVehicle; // 0x70(0x04)
	struct FArmedforceCommonData CommonData; // 0x74(0xa4)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ArmedforceDataFlowEngineer
// Size: 0x180 (Inherited: 0x00)
struct FArmedforceDataFlowEngineer {
public:

	int64_t PassiveSkillEffectValue; // 0x00(0x08)
	int64_t PassiveSkillEffectCnt; // 0x08(0x08)
	int64_t FixVehicleAndWeaponCnt; // 0x10(0x08)
	int64_t ArmedPropUseCnt; // 0x18(0x08)
	float ArmedPropUse2FireTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	int64_t ArmedPropBeDestroyCnt; // 0x28(0x08)
	int64_t ArmedPropActivatedNum; // 0x30(0x08)
	int32_t ArmedPropKillNum; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	int64_t ArmedPropPlacementCnt; // 0x40(0x08)
	int64_t ActiveSkillWave1EffectNum; // 0x48(0x08)
	int64_t ActiveSkillWave2EffectNum; // 0x50(0x08)
	int64_t ActiveSkillWave3EffectNum; // 0x58(0x08)
	int64_t ActiveSkillWave4EffectNum; // 0x60(0x08)
	int64_t ActiveSkillDetectDefense; // 0x68(0x08)
	int64_t ActiveSkillUseCnt; // 0x70(0x08)
	int64_t ActiveSkillKillPlayerNum; // 0x78(0x08)
	int64_t ActiveSkillKillAINum; // 0x80(0x08)
	struct FArmedforceCommonData CommonData; // 0x88(0xa4)
	int32_t CampVehicleAvgFixCnt; // 0x12c(0x04)
	float CampVehicleAvgFixHealth; // 0x130(0x04)
	float CampVehicleAvgFixTime; // 0x134(0x04)
	int32_t WeaponAvgFixCnt; // 0x138(0x04)
	float WeaponAvgFixHealth; // 0x13c(0x04)
	float WeaponAvgFixTime; // 0x140(0x04)
	int32_t UseActiveAbilityClickCnt; // 0x144(0x04)
	int32_t UseActiveAbilityLongPressCnt; // 0x148(0x04)
	int32_t BeKillActivateMineIn8s; // 0x14c(0x04)
	int32_t ADSDefenceCount; // 0x150(0x04)
	int32_t AT4DestoryVehicleCount; // 0x154(0x04)
	int32_t SpearDestoryVehicleCount; // 0x158(0x04)
	int32_t StingerDestoryVehicleCount; // 0x15c(0x04)
	int32_t AT4DamageCount; // 0x160(0x04)
	int32_t SpearDamageCount; // 0x164(0x04)
	int32_t StingerDamageCount; // 0x168(0x04)
	int32_t EMPFireCount; // 0x16c(0x04)
	int32_t EMPAffectedCount; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct AGPCharacter* OwnerCharacter; // 0x178(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ArmedforceDataFlowScout
// Size: 0x140 (Inherited: 0x00)
struct FArmedforceDataFlowScout {
public:

	int64_t PassiveSkillMarkEnermyNum; // 0x00(0x08)
	int64_t ArmedPropUseCnt; // 0x08(0x08)
	float ArmedPropUse2FireTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t ArmedPropFireCnt; // 0x18(0x08)
	int64_t ArmedPropKnockDownNum; // 0x20(0x08)
	float ArmedPropHitDistance; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	int64_t ArmedPropDestroyVehcleCnt; // 0x30(0x08)
	int64_t ArmedPropHitVehcleCnt; // 0x38(0x08)
	int64_t ArmedPropHitPlayerCnt; // 0x40(0x08)
	int64_t ArmedPropHitPlayerNum; // 0x48(0x08)
	int64_t ActiveSkillFireCnt; // 0x50(0x08)
	int64_t ActiveSkillUseCnt; // 0x58(0x08)
	int64_t ActiveSkillEffectEnermyNum; // 0x60(0x08)
	int64_t ActiveSkillEffectPlayerNum; // 0x68(0x08)
	int64_t ActiveSkillEffectAINum; // 0x70(0x08)
	int64_t LaserPointerLockCompleteNum; // 0x78(0x08)
	int64_t LaserPointerAssistNum; // 0x80(0x08)
	int64_t RebornFlagUseNum; // 0x88(0x08)
	struct FArmedforceCommonData CommonData; // 0x90(0xa4)
	char pad_134[0x4]; // 0x134(0x04)
	struct AGPCharacter* OwnerCharacter; // 0x138(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ArmedforceDataFlowSupport
// Size: 0x128 (Inherited: 0x00)
struct FArmedforceDataFlowSupport {
public:

	int64_t PassiveSkillRescueSuceesCnt; // 0x00(0x08)
	int64_t PassiveSkillRescueCnt; // 0x08(0x08)
	float PassiveSkillRescueFailedTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t ArmedPropFireCnt; // 0x18(0x08)
	int64_t Hit5sArmedPropFireCnt; // 0x20(0x08)
	int64_t ArmedProp5sPassiveSkillRescueCnt; // 0x28(0x08)
	int64_t ArmedProp5sKillEnermyCnt; // 0x30(0x08)
	int64_t ArmedProp5sBeKillCnt; // 0x38(0x08)
	int64_t ActiveSkillUseCnt; // 0x40(0x08)
	float ActiveSkillUse2FireTime; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t Hit5sSelfCureCnt; // 0x50(0x08)
	int64_t SelfCureCnt; // 0x58(0x08)
	int64_t ActiveSkillEffectPlayerNum; // 0x60(0x08)
	int64_t WeaponFireCnt; // 0x68(0x08)
	struct FArmedforceCommonData CommonData; // 0x70(0xa4)
	float SelfCureHealth; // 0x114(0x04)
	float TeammateCureHealth; // 0x118(0x04)
	int32_t SmokeResuceCntIn15s; // 0x11c(0x04)
	struct AGPCharacter* OwnerCharacter; // 0x120(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ArmedforceDataFlowAssault
// Size: 0x160 (Inherited: 0x00)
struct FArmedforceDataFlowAssault {
public:

	int64_t PassiveSkillUseCnt; // 0x00(0x08)
	float PassiveSkillUseTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t PassiveSkillBeKill; // 0x10(0x08)
	int64_t Hit2sPassiveSkillUseCnt; // 0x18(0x08)
	int64_t ArmedPropUseCnt; // 0x20(0x08)
	float ArmedPropUse2FireTime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	int64_t ArmedPropFireCnt; // 0x30(0x08)
	int64_t ArmedPropKnockDownPlayerCnt; // 0x38(0x08)
	float ArmedPropHitDistance; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	int64_t ArmedPropDestroyVehicleCnt; // 0x48(0x08)
	int64_t ArmedPropHitVehicleCnt; // 0x50(0x08)
	int64_t ArmedPropHitPlayerCnt; // 0x58(0x08)
	int64_t ArmedPropHitPlayerNum; // 0x60(0x08)
	int64_t ActiveSkillUseCnt; // 0x68(0x08)
	float ActiveSkillUseTime; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	int64_t ActiveSkillKillPlayerCnt; // 0x78(0x08)
	int64_t ActiveSkillKillAICnt; // 0x80(0x08)
	struct FArmedforceCommonData CommonData; // 0x88(0xa4)
	float AntiTankGrenadeTotalDamage; // 0x12c(0x04)
	float AntiTankGrenadeBullet1TotalDamage; // 0x130(0x04)
	float AntiTankGrenadeBullet2TotalDamage; // 0x134(0x04)
	float AntiTankGrenadeBullet3TotalDamage; // 0x138(0x04)
	int32_t AntiTankGrenadeHitVehicleCnt; // 0x13c(0x04)
	float AntiTankGrenadeHitVehicleAvgDamage; // 0x140(0x04)
	int32_t AntiTankGrenadeDestroyVehicleCnt; // 0x144(0x04)
	int32_t AntiPersonnelFireCount; // 0x148(0x04)
	int32_t AntiPersonnelKillCount; // 0x14c(0x04)
	int32_t EMPFireCount; // 0x150(0x04)
	int32_t EMPAffectedCount; // 0x154(0x04)
	struct AGPCharacter* OwnerCharacter; // 0x158(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillDataTimingWheelItem
// Size: 0x30 (Inherited: 0x00)
struct FSkillDataTimingWheelItem {
public:

	struct FSkillDataFlowRecordItem SkillDataFlow; // 0x00(0x28)
	float PushTime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityBlackBorad_Result
// Size: 0x08 (Inherited: 0x00)
struct FAbilityBlackBorad_Result : public FAbilityFragment {
public:

	bool IsValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t iValue; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AbilityBlackBorad_PreviewActor
// Size: 0x70 (Inherited: 0x00)
struct FAbilityBlackBorad_PreviewActor : public FAbilityFragment {
public:

	struct FVector offset; // 0x00(0x0c)
	float PressPower; // 0x0c(0x04)
	struct FVector StartLocation; // 0x10(0x0c)
	struct FVector ServerStartLocation; // 0x1c(0x0c)
	struct FVector PredictVelocity; // 0x28(0x0c)
	struct TWeakObjectPtr<struct AActor> HitActor; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UClass* ActorClass; // 0x40(0x08)
	bool IsValid; // 0x48(0x01)
	bool UpdateValid; // 0x49(0x01)
	bool SecondLine; // 0x4a(0x01)
	char pad_4B[0x1]; // 0x4b(0x01)
	struct FVector StartLocationSecond; // 0x4c(0x0c)
	struct FVector ServerStartLocationSecond; // 0x58(0x0c)
	struct FVector PredictVelocitySecond; // 0x64(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillState
// Size: 0x38 (Inherited: 0x18)
struct FSkillState : public FSkillStateBase {
public:

	struct TArray<struct FSkillEntityState> SkillEntityStates; // 0x18(0x10)
	struct TArray<int32_t> UpdateIndexArray; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillState3P
// Size: 0x28 (Inherited: 0x18)
struct FSkillState3P : public FSkillStateBase {
public:

	struct TArray<struct FSkillEntityState3P> SkillEntityStates; // 0x18(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ThreatMarkerData
// Size: 0x98 (Inherited: 0x10)
struct FThreatMarkerData : public FDescRowBase {
public:

	int32_t ThreatId; // 0x10(0x04)
	int32_t VisibleCampState; // 0x14(0x04)
	int32_t GameModeType; // 0x18(0x04)
	enum class EThreatMarkerType SoldierThreatMarkType; // 0x1c(0x01)
	enum class EThreatMarkerType TankThreatMarkType; // 0x1d(0x01)
	enum class EThreatMarkerType AirThreatMarkType; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	struct FSoftObjectPath IconTexture; // 0x20(0x18)
	struct FSoftObjectPath BlockIconTexture; // 0x38(0x18)
	struct FThreatIconConfig FlickerConfig; // 0x50(0x0c)
	struct FThreatIconConfig OpaqueConfig; // 0x5c(0x0c)
	struct FThreatIconConfig TranslucentConfig; // 0x68(0x0c)
	bool bNeedBlockTrace; // 0x74(0x01)
	bool bNeedVisionInView; // 0x75(0x01)
	char pad_76[0x2]; // 0x76(0x02)
	float MaxVisibleSpeed; // 0x78(0x04)
	struct FMargin ScreenOffset; // 0x7c(0x10)
	float InvisibleCenterScaleY; // 0x8c(0x04)
	float VisibleAngleBetweenVelocityAndPlayer; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SlotChargingData
// Size: 0x118 (Inherited: 0x00)
struct FSlotChargingData {
public:

	int32_t Update; // 0x00(0x04)
	int32_t Num; // 0x04(0x04)
	int32_t AmmoNum; // 0x08(0x04)
	float SlotCDTime; // 0x0c(0x04)
	enum class ECharingSlot Slot; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t WeaponSlot; // 0x14(0x04)
	uint64_t WeaponID; // 0x18(0x08)
	uint64_t ItemID; // 0x20(0x08)
	uint32_t ItemPos; // 0x28(0x04)
	int32_t SkillId; // 0x2c(0x04)
	struct FSlotCharingConfigData RowData; // 0x30(0xa8)
	int32_t cdid; // 0xd8(0x04)
	enum class ECharingSlotState SlotState; // 0xdc(0x01)
	char pad_DD[0x3b]; // 0xdd(0x3b)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPVaultRepInfo
// Size: 0x98 (Inherited: 0x00)
struct FGPVaultRepInfo {
public:

	struct FGPVaultType TargetVaultType; // 0x00(0x02)
	enum class EClimbVaultChoice TargetVaultChoice; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FVector RecordLocalTraceOrigin; // 0x04(0x0c)
	struct FVector TargetPlayerFaceDir; // 0x10(0x0c)
	struct FVector TargetVaultStartPoint; // 0x1c(0x0c)
	struct FVector TargetVaultApexPoint; // 0x28(0x0c)
	struct FVector TargetVaultEndPoint; // 0x34(0x0c)
	struct FVector RecordTargetVaultOthersideApexPoint; // 0x40(0x0c)
	struct FVector RecordBestVaultStartPoint; // 0x4c(0x0c)
	float RecordWallHeight; // 0x58(0x04)
	float RecordWallThickness; // 0x5c(0x04)
	float RecordHorizontalVelocity; // 0x60(0x04)
	bool RecordIsInAir; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	float RecordRealWallHeightInAir; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct AActor* RecordMovableActor; // 0x70(0x08)
	bool RecordbVaultMovableActor; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FVector RecordMovableActorStartPosition; // 0x7c(0x0c)
	int32_t Sequence; // 0x88(0x04)
	float SideOffsetSize; // 0x8c(0x04)
	float VaultInKeepSpeedRateScale; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPVaultInfo
// Size: 0x50 (Inherited: 0x00)
struct FGPVaultInfo {
public:

	struct FGPVaultType VaultType; // 0x00(0x02)
	bool IsMoving; // 0x02(0x01)
	bool IsInAir; // 0x03(0x01)
	struct FName VaultAnimationName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAnimSequence* VaultAnimation; // 0x10(0x08)
	struct UAnimSequence* VaultAnimationFPP; // 0x18(0x08)
	struct UAnimSequence* VaultAnimationLocomotion; // 0x20(0x08)
	struct UAnimSequence* VaultAnimationTPPUnderFPP; // 0x28(0x08)
	float DesignForBlockHeight; // 0x30(0x04)
	float DesignForBlockWidth; // 0x34(0x04)
	float AnimationPlayRate; // 0x38(0x04)
	float FPPAnimationPlayRateAdd; // 0x3c(0x04)
	float FPPAnimationDelay; // 0x40(0x04)
	float ForbidSwitchToVaultClimbTime; // 0x44(0x04)
	bool ClimbSimpleUseAddToWarping; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float SideInterpTargetOffsetAnimPercent; // 0x4c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleWeaponInfo
// Size: 0xa0 (Inherited: 0x00)
struct FVehicleWeaponInfo {
public:

	char pad_0[0x24]; // 0x00(0x24)
	float LerpValue3P; // 0x24(0x04)
	struct TArray<struct FVehicleSubWeaponInfo> WeaponInfos; // 0x28(0x10)
	bool bIsAimOnCam; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float FPPToTPPPitchRatio; // 0x3c(0x04)
	struct FVector FPPOffset; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FSoftObjectPath FPPUpAdditiveAnim; // 0x50(0x18)
	struct FSoftObjectPath FPPDownAdditiveAnim; // 0x68(0x18)
	struct FVehicleWeaponAnimationConig WeaponAnimationConfig; // 0x80(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPWeaponPartBulletChainAnimInstanceProxy
// Size: 0xa70 (Inherited: 0x7a8)
struct FGPWeaponPartBulletChainAnimInstanceProxy : public FGPWeaponPartAnimInstanceProxy {
public:

	bool bShowBulletMeshNumber; // 0x7a8(0x01)
	char pad_7A9[0x3]; // 0x7a9(0x03)
	int32_t ShowBulletMeshNumber; // 0x7ac(0x04)
	char pad_7B0[0x4]; // 0x7b0(0x04)
	bool bEnablePhysicsBulletChain; // 0x7b4(0x01)
	bool bResetPhysicsBulletChain; // 0x7b5(0x01)
	char pad_7B6[0xa]; // 0x7b6(0x0a)
	struct FTransform BulletChainPhysicsAnimTransform; // 0x7c0(0x30)
	char pad_7F0[0x280]; // 0x7f0(0x280)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPWeaponPartBulletHideAnimInstanceProxy
// Size: 0x7d0 (Inherited: 0x7a8)
struct FGPWeaponPartBulletHideAnimInstanceProxy : public FGPWeaponPartAnimInstanceProxy {
public:

	bool bHideUsedBullet; // 0x7a8(0x01)
	char pad_7A9[0x3]; // 0x7a9(0x03)
	float BulletRemainPercent; // 0x7ac(0x04)
	struct TArray<float> HideBulletAlphas; // 0x7b0(0x10)
	char VisibleBulletNumber; // 0x7c0(0x01)
	char pad_7C1[0xf]; // 0x7c1(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RepWeaponBulletProjectileInitParam
// Size: 0x38 (Inherited: 0x10)
struct FRepWeaponBulletProjectileInitParam : public FRepProjectileInfoBase {
public:

	struct FWeaponBulletProjectileInitParam BulletProjectileParam; // 0x10(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RepWeaponBulletBaseInitParam
// Size: 0x90 (Inherited: 0x10)
struct FRepWeaponBulletBaseInitParam : public FRepProjectileInfoBase {
public:

	struct FWeaponBulletBaseInitParam BulletBaseParam; // 0x10(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RepProjectileInfo
// Size: 0x18 (Inherited: 0x10)
struct FRepProjectileInfo : public FRepProjectileInfoBase {
public:

	struct UClass* ProjectileClass; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RepWeaponBulletPhysicsSimulateInitParam
// Size: 0x70 (Inherited: 0x10)
struct FRepWeaponBulletPhysicsSimulateInitParam : public FRepProjectileInfoBase {
public:

	struct FWeaponBulletPhysicsSimulateInitParam BulletPhysicsSimulateInitParam; // 0x10(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ScoWeaponPairParameterRow
// Size: 0x2a0 (Inherited: 0x10)
struct FScoWeaponPairParameterRow : public FDescRowBase {
public:

	uint64_t ScoItemId; // 0x10(0x08)
	uint64_t WeaponID; // 0x18(0x08)
	struct FOverrideItemFloat CamOffset; // 0x20(0x08)
	struct FOverrideItemFloat SightOffset; // 0x28(0x08)
	struct FOverrideItemFloat FovForWeapon; // 0x30(0x08)
	struct FOverrideItemFloat SoftShadowRadiusScale; // 0x38(0x08)
	struct FOverrideItemFloat HardShadowRadiusScale; // 0x40(0x08)
	struct FOverrideItemFloat SoftShadowMoveOffsetScale; // 0x48(0x08)
	struct FOverrideItemFloat SoftShadowMoveOffsetScale_Firing; // 0x50(0x08)
	struct FOverrideItemFloat SoftShadowMoveOffsetScale_Reloading; // 0x58(0x08)
	float FixedOffsetScale; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TMap<enum class EFiringAnimDim, float> AdditiveAnim_PerFire_ScalePerDim; // 0x68(0x50)
	float AdditiveAnim_PerFireState_Scale; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TMap<enum class EFiringAnimDim, float> SingleAnim_ScalePerDim; // 0xc0(0x50)
	bool bOverride_RandomKick_SightOffset; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FVector2D RandomKick_SightOffset; // 0x114(0x08)
	float RandomKickScale; // 0x11c(0x04)
	struct FOverrideItemFloat SpringKick_SightOffset_Up; // 0x120(0x08)
	struct FOverrideItemFloat SpringKick_SightOffset_Down; // 0x128(0x08)
	struct FOverrideItemFloat SpringKick_SightOffset_LeftRight; // 0x130(0x08)
	float SpringKick_Scale; // 0x138(0x04)
	bool bOverride_ADSGunSwing_SightOffset; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	float ADSGunSwing_Offset; // 0x140(0x04)
	float ADSGunSwing_SightOffset; // 0x144(0x04)
	bool bOverride_AimingIdle_SightOffset; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	struct FVector2D AimingIdle_SightOffset; // 0x14c(0x08)
	bool bOverride_MiniShake_SightOffset; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	struct FVector2D MiniShake_SightOffset; // 0x158(0x08)
	bool bOverride_GunSway4Dir_SightOffset; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	struct FVector2D GunSway4Dir_SightOffset; // 0x164(0x08)
	bool bOverride_ADSGSInMoving; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	float ADSGSInMoving_Roll; // 0x170(0x04)
	float ADSGSInMoving_Yaw; // 0x174(0x04)
	float ADSGSInMoving_YawSightOffset; // 0x178(0x04)
	float ADSGSInMoving_Offset; // 0x17c(0x04)
	struct FOverrideItemVector2D GSHit_SightOffset; // 0x180(0x0c)
	float ADSBackSwing_OffsetY; // 0x18c(0x04)
	bool bOverrideLayout; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)
	struct FTransform LayoutOffsetWPS; // 0x1a0(0x30)
	struct FOverrideItemFloat OffsetXSmoothingTime; // 0x1d0(0x08)
	struct FOverrideItemFloat OffsetXDampingRatio; // 0x1d8(0x08)
	struct FOverrideItemFloat OffsetYSmoothingTime; // 0x1e0(0x08)
	struct FOverrideItemFloat OffsetYDampingRatio; // 0x1e8(0x08)
	struct FOverrideItemFloat FireOffsetXSmoothingTime; // 0x1f0(0x08)
	struct FOverrideItemFloat FireOffsetXDampingRatio; // 0x1f8(0x08)
	struct FOverrideItemFloat FireOffsetYSmoothingTime; // 0x200(0x08)
	struct FOverrideItemFloat FireOffsetYDampingRatio; // 0x208(0x08)
	struct FOverrideItemFloat ReloadOffsetXSmoothingTime; // 0x210(0x08)
	struct FOverrideItemFloat ReloadOffsetXDampingRatio; // 0x218(0x08)
	struct FOverrideItemFloat ReloadOffsetYSmoothingTime; // 0x220(0x08)
	struct FOverrideItemFloat ReloadOffsetYDampingRatio; // 0x228(0x08)
	bool bOverriderCameraShake; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	float WaistCameraShakeScale; // 0x234(0x04)
	float AimCameraShakeScale; // 0x238(0x04)
	struct FOverrideItemBool bOverriderWaistDof; // 0x23c(0x02)
	char pad_23E[0x2]; // 0x23e(0x02)
	struct FOverrideItemFloat WaistDepthOfFieldFocalDistance; // 0x240(0x08)
	struct FOverrideItemFloat WaistDepthOfFieldSensorWidth; // 0x248(0x08)
	struct FOverrideItemFloat WaistDepthOfFieldFstop; // 0x250(0x08)
	struct FOverrideItemFloat WaistDepthOfFieldMinFstop; // 0x258(0x08)
	struct FOverrideItemInt WaistDepthOfFieldBladeCount; // 0x260(0x08)
	struct FOverrideItemBool bOverriderAimDof; // 0x268(0x02)
	char pad_26A[0x2]; // 0x26a(0x02)
	struct FOverrideItemFloat AimDepthOfFieldFocalDistance; // 0x26c(0x08)
	struct FOverrideItemFloat AimDepthOfFieldSensorWidth; // 0x274(0x08)
	struct FOverrideItemFloat AimDepthOfFieldFstop; // 0x27c(0x08)
	struct FOverrideItemFloat AimDepthOfFieldMinFstop; // 0x284(0x08)
	struct FOverrideItemInt AimDepthOfFieldBladeCount; // 0x28c(0x08)
	struct FOverrideItemFloat AimMotionBlur; // 0x294(0x08)
	char pad_29C[0x4]; // 0x29c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ScoFunctionRow
// Size: 0x288 (Inherited: 0x10)
struct FScoFunctionRow : public FDescRowBase {
public:

	uint64_t ItemID; // 0x10(0x08)
	bool bOverrideZoomRate; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float ZoomRate; // 0x1c(0x04)
	float OutZoomRate; // 0x20(0x04)
	float ZoomRateAlpha; // 0x24(0x04)
	float ZoomRateScale; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FZoomRateItem> SupportedZoomRates; // 0x30(0x10)
	float RTZoomRateFactor; // 0x40(0x04)
	float CamOffset; // 0x44(0x04)
	float SightOffset; // 0x48(0x04)
	float FovForWeapon; // 0x4c(0x04)
	char PriorityForMainScope; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UCurveFloat* ZoomAnimCurve; // 0x58(0x08)
	struct UCurveFloat* WeaponFovCurve; // 0x60(0x08)
	struct UCurveFloat* CameraFovCurve; // 0x68(0x08)
	char pad_70[0x4]; // 0x70(0x04)
	float LodSwitchTiming; // 0x74(0x04)
	bool bEnableMeshCut; // 0x78(0x01)
	enum class EZoomAlignmentMode AlignmentMode; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	float ScoRadius; // 0x7c(0x04)
	float ScoLength; // 0x80(0x04)
	float CenterOffset; // 0x84(0x04)
	/*struct TSoftObjectPtr<UTexture>*/char ScopeMaskTexture[0x28]; // 0x88(0x28)
	bool bSupportStencil; // 0xb0(0x01)
	bool bSupportUseRT; // 0xb1(0x01)
	bool bHasLens; // 0xb2(0x01)
	char pad_B3[0x1]; // 0xb3(0x01)
	int32_t CrosshairPresetId; // 0xb4(0x04)
	int32_t TickmarkPresetId; // 0xb8(0x04)
	int32_t CrosshairPresetId_HD; // 0xbc(0x04)
	int32_t TickmarkPresetId_HD; // 0xc0(0x04)
	bool bCrosshairDynamicScale; // 0xc4(0x01)
	bool bTickmarkDynamicScale; // 0xc5(0x01)
	bool bEnableDynamicTickMark; // 0xc6(0x01)
	bool bEnableScopeShadow; // 0xc7(0x01)
	enum class EShadowTransferType ShadowTransferType; // 0xc8(0x01)
	bool bEnableEdgeRefraction; // 0xc9(0x01)
	char pad_CA[0x2]; // 0xca(0x02)
	float EdgeRefraction; // 0xcc(0x04)
	float NoEdgeRefractionHardness; // 0xd0(0x04)
	float NoEdgeRefractionRadius; // 0xd4(0x04)
	bool bEnableTickMarkOpacity; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float TickmarkShowStart; // 0xdc(0x04)
	float TickmarkShowEnd; // 0xe0(0x04)
	int32_t TickmarkPresetId_Low; // 0xe4(0x04)
	int32_t TickmarkPresetId_Low_HD; // 0xe8(0x04)
	bool bTickMarkLowDynamicScale; // 0xec(0x01)
	bool bEnableTickMarkLowOpacity; // 0xed(0x01)
	char pad_EE[0x2]; // 0xee(0x02)
	float LowTickmarkDisStart; // 0xf0(0x04)
	float LowTickmarkDisEnd; // 0xf4(0x04)
	float SoftShadowRadiusScale; // 0xf8(0x04)
	float HardShadowRadiusScale; // 0xfc(0x04)
	float SoftShadowMoveOffsetScale; // 0x100(0x04)
	float SoftShadowMoveOffsetScale_Firing; // 0x104(0x04)
	float SoftShadowMoveOffsetScale_Reloading; // 0x108(0x04)
	bool bEnableReflect; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	float ReflectEffectOffset; // 0x110(0x04)
	struct FName ReflectEffectName; // 0x114(0x08)
	float OffsetXSmoothingTime; // 0x11c(0x04)
	float OffsetXDampingRatio; // 0x120(0x04)
	float OffsetYSmoothingTime; // 0x124(0x04)
	float OffsetYDampingRatio; // 0x128(0x04)
	float FireOffsetXSmoothingTime; // 0x12c(0x04)
	float FireOffsetXDampingRatio; // 0x130(0x04)
	float FireOffsetYSmoothingTime; // 0x134(0x04)
	float FireOffsetYDampingRatio; // 0x138(0x04)
	float ReloadOffsetXSmoothingTime; // 0x13c(0x04)
	float ReloadOffsetXDampingRatio; // 0x140(0x04)
	float ReloadOffsetYSmoothingTime; // 0x144(0x04)
	float ReloadOffsetYDampingRatio; // 0x148(0x04)
	float LerpTime; // 0x14c(0x04)
	float MirrorDisappearTime; // 0x150(0x04)
	float ShadowStartTime; // 0x154(0x04)
	float ShadowEndTime; // 0x158(0x04)
	float ShadowLerpStartTime; // 0x15c(0x04)
	float ShadowStartFactor; // 0x160(0x04)
	float ShadowEndFactor; // 0x164(0x04)
	float ADSGunSwingOffset; // 0x168(0x04)
	float ADSGunSwingSightOffset; // 0x16c(0x04)
	float GSFixedZoomRate; // 0x170(0x04)
	float GSHitFixedZoomRate; // 0x174(0x04)
	struct FVector2D GSAimingIdleSightOffset; // 0x178(0x08)
	struct FVector2D GSMiniShakeSightOffset; // 0x180(0x08)
	struct FVector2D GSMovePitchSightOffset; // 0x188(0x08)
	float ADSGSInMoving_Roll; // 0x190(0x04)
	float ADSGSInMoving_Yaw; // 0x194(0x04)
	float ADSGSInMoving_YawSightOffset; // 0x198(0x04)
	float ADSGSInMoving_Offset; // 0x19c(0x04)
	struct FOverrideItemVector2D GSHit_SightOffset; // 0x1a0(0x0c)
	float ADSBackSwing_OffsetY; // 0x1ac(0x04)
	bool bOverriderWaistDof; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	float WaistDepthOfFieldFocalDistance; // 0x1b4(0x04)
	float WaistDepthOfFieldSensorWidth; // 0x1b8(0x04)
	float WaistDepthOfFieldFstop; // 0x1bc(0x04)
	float WaistDepthOfFieldMinFstop; // 0x1c0(0x04)
	int32_t WaistDepthOfFieldBladeCount; // 0x1c4(0x04)
	bool bOverriderAimDof; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	float AimDepthOfFieldFocalDistance; // 0x1cc(0x04)
	float AimDepthOfFieldSensorWidth; // 0x1d0(0x04)
	float AimDepthOfFieldFstop; // 0x1d4(0x04)
	float AimDepthOfFieldMinFstop; // 0x1d8(0x04)
	int32_t AimDepthOfFieldBladeCount; // 0x1dc(0x04)
	float AimMotionBlur; // 0x1e0(0x04)
	float ZoomingSwitchValue; // 0x1e4(0x04)
	float UnZoomingSwitchValue; // 0x1e8(0x04)
	struct FName ScoDofMatName; // 0x1ec(0x08)
	float Intensity; // 0x1f4(0x04)
	float radius; // 0x1f8(0x04)
	float Hardness; // 0x1fc(0x04)
	struct FName CenterXName; // 0x200(0x08)
	struct FName CenterYName; // 0x208(0x08)
	struct FName IntensityName; // 0x210(0x08)
	struct FName RadiusName; // 0x218(0x08)
	struct FName HardnessName; // 0x220(0x08)
	bool bHasRangeFinderFunction; // 0x228(0x01)
	bool bHasHipRangeFinderFunction; // 0x229(0x01)
	char pad_22A[0x2]; // 0x22a(0x02)
	float RangeFinderInterval; // 0x22c(0x04)
	char RangeFinderMatIndex; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	/*struct TSoftClassPtr<UObject>*/char DigitalDisplayPath[0x28]; // 0x238(0x28)
	float CenterPointInterpSpeed; // 0x260(0x04)
	struct FColor AimFrontColor; // 0x264(0x04)
	bool bHasLockCharacterFunction; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float ResetLockInterval; // 0x26c(0x04)
	int64_t AimAssistorId; // 0x270(0x08)
	struct FColor LockEnemyFrontColor; // 0x278(0x04)
	float LockMaxAngle; // 0x27c(0x04)
	float LockUpdateInterval; // 0x280(0x04)
	float LockUpdateInterval_HD; // 0x284(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimNameMappingTableRow
// Size: 0x120 (Inherited: 0x10)
struct FAnimNameMappingTableRow : public FWeaponAnimTableRowBase {
public:

	struct FString FPPDef; // 0x10(0x10)
	struct FString FPPStand; // 0x20(0x10)
	struct FString FPPCrouch; // 0x30(0x10)
	struct FString FPPProne; // 0x40(0x10)
	struct FString FPPFracture; // 0x50(0x10)
	struct FString FPPImpendingDeath; // 0x60(0x10)
	struct FString TPPDef; // 0x70(0x10)
	struct FString TPPStand; // 0x80(0x10)
	struct FString TPPCrouch; // 0x90(0x10)
	struct FString TPPProne; // 0xa0(0x10)
	struct FString TPPFracture; // 0xb0(0x10)
	struct FString TPPImpendingDeath; // 0xc0(0x10)
	struct FString TPPUnderFPPStand; // 0xd0(0x10)
	struct FString TPPUnderFPPCrouch; // 0xe0(0x10)
	struct FString TPPUnderFPPProne; // 0xf0(0x10)
	struct FString TPPUnderFPPFracture; // 0x100(0x10)
	struct FString TPPUnderFPPImpendingDeath; // 0x110(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimSummaryIndexRow
// Size: 0x40 (Inherited: 0x10)
struct FWeaponAnimSummaryIndexRow : public FWeaponAnimTableRowBase {
public:

	uint16_t ID; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
	/*struct TSoftObjectPtr<UAnimationAsset>*/char AnimAsset[0x28]; // 0x18(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimItemHallSeqBase
// Size: 0x30 (Inherited: 0x08)
struct FWeaponAnimItemHallSeqBase : public FWeaponAnimItemBase {
public:

	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char UIAnim[0x28]; // 0x08(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimItemStringMap
// Size: 0x58 (Inherited: 0x08)
struct FWeaponAnimItemStringMap : public FWeaponAnimItemBase {
public:

	struct TMap<struct FName, struct FWeaponAnimItemSeqBase> DifferentMagAnimItemSeqBaseMap; // 0x08(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimItemSeqBase
// Size: 0x58 (Inherited: 0x08)
struct FWeaponAnimItemSeqBase : public FWeaponAnimItemBase {
public:

	struct TMap<enum class EWeaponAnimItemType, uint16_t> WeaponAnimItemMap; // 0x08(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimItemGameplayTagMap
// Size: 0x58 (Inherited: 0x08)
struct FWeaponAnimItemGameplayTagMap : public FWeaponAnimItemBase {
public:

	struct TMap<struct FGameplayTag, struct FWeaponAnimItemSeqBase> AnimItemSeqBaseMap; // 0x08(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimItemSeq
// Size: 0x58 (Inherited: 0x08)
struct FWeaponAnimItemSeq : public FWeaponAnimItemBase {
public:

	struct TMap<enum class EWeaponAnimItemType, uint16_t> WeaponAnimItemMap; // 0x08(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimItemSeqArray
// Size: 0x18 (Inherited: 0x08)
struct FWeaponAnimItemSeqArray : public FWeaponAnimItemBase {
public:

	struct TArray<struct FWeaponAnimItemSeqBase> AnimItemSeqBaseArray; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimItemDirectionSeq
// Size: 0x288 (Inherited: 0x08)
struct FWeaponAnimItemDirectionSeq : public FWeaponAnimItemBase {
public:

	/*struct TSoftObjectPtr<UAnimSequence>*/char FPPMoveF[0x28]; // 0x08(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char FPPMoveFR[0x28]; // 0x30(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char FPPMoveFL[0x28]; // 0x58(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char FPPMoveB[0x28]; // 0x80(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char FPPMoveBR[0x28]; // 0xa8(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char FPPMoveBL[0x28]; // 0xd0(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char FPPMoveL[0x28]; // 0xf8(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char FPPMoveR[0x28]; // 0x120(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char TPPMoveF[0x28]; // 0x148(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char TPPMoveFR[0x28]; // 0x170(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char TPPMoveFL[0x28]; // 0x198(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char TPPMoveB[0x28]; // 0x1c0(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char TPPMoveBR[0x28]; // 0x1e8(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char TPPMoveBL[0x28]; // 0x210(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char TPPMoveL[0x28]; // 0x238(0x28)
	/*struct TSoftObjectPtr<UAnimSequence>*/char TPPMoveR[0x28]; // 0x260(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimItemMontage
// Size: 0xb8 (Inherited: 0x08)
struct FWeaponAnimItemMontage : public FWeaponAnimItemBase {
public:

	/*struct TSoftClassPtr<UObject>*/char FPPCameraShakePath[0x28]; // 0x08(0x28)
	float FPPCameraShakeScale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	/*struct TSoftClassPtr<UObject>*/char TPPCameraShakePath[0x28]; // 0x38(0x28)
	float TPPCameraShakeScale; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TMap<enum class EWeaponAnimItemType, uint16_t> WeaponAnimItemMap; // 0x68(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimItemBS
// Size: 0x58 (Inherited: 0x08)
struct FWeaponAnimItemBS : public FWeaponAnimItemBase {
public:

	struct TMap<enum class EWeaponAnimItemType, uint16_t> WeaponAnimItemMap; // 0x08(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimItemSeqBaseForPack
// Size: 0x300 (Inherited: 0x08)
struct FWeaponAnimItemSeqBaseForPack : public FWeaponAnimItemBase {
public:

	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char FPPDef[0x28]; // 0x08(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char FPPStand[0x28]; // 0x30(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char FPPCrouch[0x28]; // 0x58(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char FPPProne[0x28]; // 0x80(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char FPPFracture[0x28]; // 0xa8(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char FPPImpendingDeath[0x28]; // 0xd0(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char TPPDef[0x28]; // 0xf8(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char TPPStand[0x28]; // 0x120(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char TPPCrouch[0x28]; // 0x148(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char TPPProne[0x28]; // 0x170(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char TPPFracture[0x28]; // 0x198(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char TPPImpendingDeath[0x28]; // 0x1c0(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char TPPUnderFPPStand[0x28]; // 0x1e8(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char TPPUnderFPPCrouch[0x28]; // 0x210(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char TPPUnderFPPProne[0x28]; // 0x238(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char TPPUnderFPPFracture[0x28]; // 0x260(0x28)
	/*struct TSoftObjectPtr<UAnimSequenceBase>*/char TPPUnderFPPImpendingDeath[0x28]; // 0x288(0x28)
	struct TMap<enum class EWeaponAnimItemType, uint16_t> WeaponAnimItemMap; // 0x2b0(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimSummaryTableRow
// Size: 0x458 (Inherited: 0x10)
struct FWeaponAnimSummaryTableRow : public FWeaponAnimTableRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	struct FWeaponAnimMapData AnimMapData; // 0x18(0x420)
	struct TArray<struct FWeaponAnimAssetInfo> FPPAnimPaths; // 0x438(0x10)
	struct TArray<struct FWeaponAnimAssetInfo> TPPAnimPaths; // 0x448(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RecordLocalAnimation
// Size: 0xa8 (Inherited: 0x00)
struct FRecordLocalAnimation {
public:

	struct FRecordLocalAnimationItem TPPRecordLocalAnimation; // 0x00(0x18)
	struct FRecordLocalAnimationItem FPPRecordLocalAnimation; // 0x18(0x18)
	char pad_30[0x10]; // 0x30(0x10)
	struct TMap<uint64_t, struct FAnimReloadAsset> ReloadAsset; // 0x40(0x50)
	char pad_90[0x18]; // 0x90(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AnimCrouchConfig
// Size: 0xf8 (Inherited: 0x10)
struct FAnimCrouchConfig : public FDescRowBase {
public:

	uint16_t AnimCrouchId; // 0x10(0x02)
	char pad_12[0x2]; // 0x12(0x02)
	struct FWeaponDataViewLocomotionParam LocomotionParam; // 0x14(0xe0)
	char pad_F4[0x4]; // 0xf4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GunSwayItemMovement
// Size: 0x48 (Inherited: 0x38)
struct FGunSwayItemMovement : public FGunSwayItemBase {
public:

	float EndDelay; // 0x38(0x04)
	float RefMoveSpeed; // 0x3c(0x04)
	float MoveSpeedLerpAlpha; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GunSwayDamageRatioItem
// Size: 0x48 (Inherited: 0x00)
struct FGunSwayDamageRatioItem {
public:

	char pad_0[0x8]; // 0x00(0x08)
	float DamageRatio; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FGunSwayItemBase GSDamageGunSway; // 0x10(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDiffOptions
// Size: 0xd0 (Inherited: 0x00)
struct FWeaponDiffOptions {
public:

	struct TMap<enum class EDFMGamePlayMode, int32_t> WeaponDiffToleranceForGameMode; // 0x00(0x50)
	struct FWeaponObjectDiffConfig WeaponDiffConfig; // 0x50(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ZoomConfig
// Size: 0x80 (Inherited: 0x00)
struct FZoomConfig {
public:

	bool bEnableZoom; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCurveFloat* CameraFovCurve; // 0x08(0x08)
	struct UCurveFloat* WeaponFovCurve; // 0x10(0x08)
	struct UCurveFloat* ZoomAnimCurve; // 0x18(0x08)
	struct UCurveFloat* ZoomInCastAnimCurve; // 0x20(0x08)
	struct UCurveFloat* CameraOffsetCurve; // 0x28(0x08)
	struct FWeaponCurveConfig SwitchCurve; // 0x30(0x08)
	enum class EZoomAlignmentMode ZoomAlignmentMode; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float ZoomRate; // 0x3c(0x04)
	float WeaponFOV; // 0x40(0x04)
	float CameraOffset; // 0x44(0x04)
	float AnimWaggleScope; // 0x48(0x04)
	float AnimWaggleSpeed; // 0x4c(0x04)
	float IdleWeaponFov; // 0x50(0x04)
	float IdleCameraOffset; // 0x54(0x04)
	float ZoomInAnimTime; // 0x58(0x04)
	float ZoomOutAnimTime; // 0x5c(0x04)
	float SideZoomInAnimTime; // 0x60(0x04)
	float SideZoomOutAnimTime; // 0x64(0x04)
	float ZoomSwitchTime; // 0x68(0x04)
	struct FName ZoomHudName; // 0x6c(0x08)
	struct FName CrossHairHudName; // 0x74(0x08)
	char pad_7C[0x4]; // 0x7c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponFireShakeData
// Size: 0x468 (Inherited: 0x10)
struct FWeaponFireShakeData : public FDescRowBase {
public:

	uint64_t FireShakeId; // 0x10(0x08)
	enum class EWeaponFireShakeType TriggerType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float Duration; // 0x1c(0x04)
	float BlendInTime; // 0x20(0x04)
	float BlendOutTime; // 0x24(0x04)
	bool bBreakNextFire; // 0x28(0x01)
	char UseRotateCenter : 1; // 0x29(0x01)
	char pad_29_1 : 7; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float RotateCenterDist; // 0x2c(0x04)
	struct FWeaponFireShakeItemData PitchShakeItem; // 0x30(0x70)
	struct FWeaponFireShakeItemData YawShakeItem; // 0xa0(0x70)
	struct FWeaponFireShakeItemData RollShakeItem; // 0x110(0x70)
	struct FWeaponFireShakeItemData XShakeItem; // 0x180(0x70)
	struct FWeaponFireShakeItemData YShakeItem; // 0x1f0(0x70)
	struct FWeaponFireShakeItemData ZShakeItem; // 0x260(0x70)
	float LocationXZOffsetUseGunKickFactor; // 0x2d0(0x04)
	bool CameraShakeRollTrigger; // 0x2d4(0x01)
	bool RandomRollTrigger; // 0x2d5(0x01)
	char pad_2D6[0x2]; // 0x2d6(0x02)
	struct TArray<struct FVector2D> Timestamp; // 0x2d8(0x10)
	struct TArray<struct FVector2D> Amplitude; // 0x2e8(0x10)
	float CurrentDampingRadio; // 0x2f8(0x04)
	float ExitRandomDampingTime; // 0x2fc(0x04)
	float ExitRandomDampingRadio; // 0x300(0x04)
	bool RandomMakeBoneRoll; // 0x304(0x01)
	bool RandomMakeCameraRoll; // 0x305(0x01)
	char pad_306[0x2]; // 0x306(0x02)
	/*struct TSoftObjectPtr<UCurveFloat>*/char AmplitudeControlCurve[0x28]; // 0x308(0x28)
	bool BulletRollTrigger; // 0x330(0x01)
	bool BulletMakeBoneRoll; // 0x331(0x01)
	bool BulletMakeCameraRoll; // 0x332(0x01)
	char pad_333[0x1]; // 0x333(0x01)
	float BulletDampingRadio; // 0x334(0x04)
	float ExitBulletDampingRadio; // 0x338(0x04)
	float BulletSmoothTime; // 0x33c(0x04)
	float ExitBulletSmoothTime; // 0x340(0x04)
	bool UseDeriveOrAccumulate; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	float BulletCameraDeriveMaxSlope; // 0x348(0x04)
	float BulletGunDeriveMaxSlope; // 0x34c(0x04)
	float BulletCameraDeriveScale; // 0x350(0x04)
	float BulletGunDeriveScale; // 0x354(0x04)
	float BulletAccumulateMaxSlope; // 0x358(0x04)
	float BulletAccumulateCameraScale; // 0x35c(0x04)
	float BulletAccumulateGunScale; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct TArray<struct FVector2D> BulletLocations; // 0x368(0x10)
	bool ForwardBackIsEnable; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	float ForwardBackDuration; // 0x37c(0x04)
	float ForwardBackFrequency; // 0x380(0x04)
	float ForwardBackShiftMin; // 0x384(0x04)
	float ForwardBackShiftMax; // 0x388(0x04)
	float ForwardBackAmplitudeMin; // 0x38c(0x04)
	float ForwardBackAmplitudeMax; // 0x390(0x04)
	float ForwardBackInFireDamping; // 0x394(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char ForwardBackFireCountScaleCurve[0x28]; // 0x398(0x28)
	float ForwardBackAfterFireCycle; // 0x3c0(0x04)
	float ForwardBackAfterFireDamping; // 0x3c4(0x04)
	bool UpDownIsEnable; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	float UpDownDuration; // 0x3cc(0x04)
	float UpDownFrequency; // 0x3d0(0x04)
	float UpDownShiftMin; // 0x3d4(0x04)
	float UpDownShiftMax; // 0x3d8(0x04)
	float UpDownAmplitudeMin; // 0x3dc(0x04)
	float UpDownAmplitudeMax; // 0x3e0(0x04)
	float UpDownInFireDamping; // 0x3e4(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char UpDownFireCountScaleCurve[0x28]; // 0x3e8(0x28)
	float UpDownAfterFireCycle; // 0x410(0x04)
	float UpDownAfterFireDamping; // 0x414(0x04)
	bool LeftRightIsEnable; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	float LeftRightDuration; // 0x41c(0x04)
	float LeftRightFrequency; // 0x420(0x04)
	float LeftRightShiftMin; // 0x424(0x04)
	float LeftRightShiftMax; // 0x428(0x04)
	float LeftRightAmplitudeMin; // 0x42c(0x04)
	float LeftRightAmplitudeMax; // 0x430(0x04)
	float LeftRightInFireDamping; // 0x434(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char LeftRightFireCountScaleCurve[0x28]; // 0x438(0x28)
	float LeftRightAfterFireCycle; // 0x460(0x04)
	float LeftRightAfterFireDamping; // 0x464(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponPlayerInputConfig
// Size: 0x30 (Inherited: 0x10)
struct FWeaponPlayerInputConfig : public FDescRowBase {
public:

	uint64_t ID; // 0x10(0x08)
	uint64_t RecID; // 0x18(0x08)
	struct FWeaponFireWithSightConfig FireWithSightConfig_Auto; // 0x20(0x03)
	struct FWeaponFireWithSightConfig FireWithSightConfig_Burst; // 0x23(0x03)
	struct FWeaponFireWithSightConfig FireWithSightConfig_Single; // 0x26(0x03)
	bool ContinuousFire_WaitReload; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSpreadModifierConfig
// Size: 0x40 (Inherited: 0x00)
struct FWeaponSpreadModifierConfig {
public:

	struct FDistributionInSpreadFunc DistributionFunc; // 0x00(0x28)
	struct FWeaponSpreadModifierFunc ModifyFunc; // 0x28(0x0c)
	char ModifierEnableAtShootNum; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float ModifierEnableAtShootNumCDSeconds; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponRecoilFactorByPose
// Size: 0x18 (Inherited: 0x00)
struct FWeaponRecoilFactorByPose {
public:

	struct FWeaponRecoilFactor StandRecoilFactor; // 0x00(0x08)
	struct FWeaponRecoilFactor CrouchRecoilFactor; // 0x08(0x08)
	struct FWeaponRecoilFactor ProneRecoilFactor; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponRecoilControl
// Size: 0x18 (Inherited: 0x00)
struct FWeaponRecoilControl {
public:

	struct FWeaponRecoilFactor ControlFactor; // 0x00(0x08)
	struct FWeaponRecoilFactor BaseAngle; // 0x08(0x08)
	struct FWeaponRecoilFactor MaxRecoilControlFactor; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AssistorActiveTrackingConfig
// Size: 0x24 (Inherited: 0x00)
struct FAssistorActiveTrackingConfig {
public:

	float AngleThreshold; // 0x00(0x04)
	float PitchRateAds; // 0x04(0x04)
	float YawRateAds; // 0x08(0x04)
	float PitchRateHip; // 0x0c(0x04)
	float YawRateHip; // 0x10(0x04)
	struct FClampedMapRange RangeScale; // 0x14(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AssistorCrosshairDamping
// Size: 0x20 (Inherited: 0x00)
struct FAssistorCrosshairDamping {
public:

	float PitchFactorAds; // 0x00(0x04)
	float YawFactorAds; // 0x04(0x04)
	float PitchFactorHip; // 0x08(0x04)
	float YawFactorHip; // 0x0c(0x04)
	struct FClampedMapRange RangeScale; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AssistorCrosshairFollowingConfig
// Size: 0x34 (Inherited: 0x00)
struct FAssistorCrosshairFollowingConfig {
public:

	float IntervalTime; // 0x00(0x04)
	float PitchFactorAds; // 0x04(0x04)
	float YawFactorAds; // 0x08(0x04)
	float PitchFactorLockonAds; // 0x0c(0x04)
	float YawFactorLockonAds; // 0x10(0x04)
	float PitchFactorHip; // 0x14(0x04)
	float YawFactorHip; // 0x18(0x04)
	float PitchFactorLockonHip; // 0x1c(0x04)
	float YawFactorLockonHip; // 0x20(0x04)
	struct FClampedMapRange RangeScale; // 0x24(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AssistorShootingConfig
// Size: 0x58 (Inherited: 0x00)
struct FAssistorShootingConfig {
public:

	float CdTime; // 0x00(0x04)
	float PitchFactorAds; // 0x04(0x04)
	float YawFactorAds; // 0x08(0x04)
	float PitchFactorHip; // 0x0c(0x04)
	float YawFactorHip; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char CurveAnim[0x28]; // 0x18(0x28)
	float DeltaTime; // 0x40(0x04)
	struct FClampedMapRange RangeScale; // 0x44(0x10)
	char pad_54[0x4]; // 0x54(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AssistorZoomingInConfig
// Size: 0x48 (Inherited: 0x00)
struct FAssistorZoomingInConfig {
public:

	float CdTime; // 0x00(0x04)
	float PitchFactor; // 0x04(0x04)
	float YawFactor; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char CurveAnim[0x28]; // 0x10(0x28)
	struct FClampedMapRange RangeScale; // 0x38(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataModifierRuleSummaryFastRow
// Size: 0x38 (Inherited: 0x10)
struct FWeaponDataModifierRuleSummaryFastRow : public FDescRowBase {
public:

	uint32_t FunctionIdListHash; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FWeaponDataModifierRuleSummaryFast WeaponDataAttributeRuleSummary; // 0x18(0x10)
	struct FWeaponDataModifierRuleSummaryFast WeaponDataAppearanceRuleSummary; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MuzzleLightInfoSet
// Size: 0x3c (Inherited: 0x00)
struct FMuzzleLightInfoSet {
public:

	struct FMuzzleLightInfo MuzzleLightInfoFpp; // 0x00(0x14)
	struct FMuzzleLightInfo MuzzleLightInfoOwnerTPP; // 0x14(0x14)
	struct FMuzzleLightInfo MuzzleLightInfoTpp; // 0x28(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAssistedAimingConfig
// Size: 0x298 (Inherited: 0x00)
struct FWeaponAssistedAimingConfig {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FWeaponAssistedAimingForFire AssistedAimingForFire; // 0x08(0xc8)
	struct FWeaponAssistedAimingForRotateSticky AssistedAimingForRotateSticky; // 0xd0(0x50)
	struct FWeaponAssistedAimingForHit AssistedAimingForHit; // 0x120(0x0c)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FWeaponAssistedAimingForMagneticSticky AssistedAimingForMagneticSticky; // 0x130(0x50)
	struct FWeaponAssistedAimingForFire AssistedAimingForZoomIn; // 0x180(0xc8)
	char pad_248[0x50]; // 0x248(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponHudControllerDelegates
// Size: 0x80 (Inherited: 0x50)
struct FWeaponHudControllerDelegates : public FWeaponHudModelDelegates {
public:

	/*struct FMulticastInlineDelegate*/char OnActiveWeaponChanged[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char OnBindCharacterChanged[0x10]; // 0x60(0x10)
	/*struct FMulticastInlineDelegate*/char OnWeaponListChanged[0x10]; // 0x70(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponReplicatePartNode
// Size: 0x40 (Inherited: 0x00)
struct FWeaponReplicatePartNode {
public:

	uint64_t ItemID; // 0x00(0x08)
	uint64_t Guid; // 0x08(0x08)
	enum class EModularPartNodeType NodeType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FWeaponReplicateAttachInfo ParentPartInfo; // 0x18(0x20)
	bool b3PModelExclude; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSkinAppearance
// Size: 0x1f8 (Inherited: 0x10)
struct FWeaponSkinAppearance : public FDescRowBase {
public:

	uint64_t SkinAppearanceId; // 0x10(0x08)
	enum class EWeaponSkinRenderMode SkinRenderMode; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char BaseMaterial[0x28]; // 0x20(0x28)
	/*struct TArray<struct TSoftObjectPtr<UMaterialInterface>>*/char BaseMaterials[0x10]; // 0x48(0x10)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char TemplateMaterial[0x28]; // 0x58(0x28)
	/*struct TMap<enum class EAdapterItemType, struct TSoftObjectPtr<UMaterialInterface>>*/char TemplateMaterials[0x50]; // 0x80(0x50)
	enum class EWeaponSkinRareType WeaponSkinRareType; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	/*struct TSoftObjectPtr<UMaterialInterface>*/char TemplateMaterial3P[0x28]; // 0xd8(0x28)
	bool bOverrideWeaponDataApperance; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct TMap<enum class EAdapterItemType, struct FWeaponSkinAppearance_PartConfig> PartsConfigsMap_AdapterType; // 0x108(0x50)
	struct TMap<uint64_t, struct FWeaponSkinAppearance_PartConfig> PartConfigsMap; // 0x158(0x50)
	struct FWeaponSkinFunctionalRow SkinFunctional; // 0x1a8(0x48)
	bool bDontMergeMesh; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MysticalSkinInfoDataTable
// Size: 0x70 (Inherited: 0x10)
struct FMysticalSkinInfoDataTable : public FDescRowBase {
public:

	uint64_t MysticalId; // 0x10(0x08)
	int32_t Rarity; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	uint64_t SkinId; // 0x20(0x08)
	struct TArray<struct FMysticalSkinParam> Params; // 0x28(0x10)
	struct TArray<struct FMysticalSkinParamWrap> SpecParams; // 0x38(0x10)
	uint64_t OverrideSkinApperanceId; // 0x48(0x08)
	bool bHasKillCnter; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FMysticalTracerColorParamName MysticalTracerColorParamName; // 0x54(0x18)
	char pad_6C[0x4]; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSkinEffectTrigger
// Size: 0x20 (Inherited: 0x00)
struct FWeaponSkinEffectTrigger {
public:

	struct TArray<enum class EGPWeaponInnerEvent> TriggerWeaponEventTypes; // 0x00(0x10)
	struct FWeaponSkinEffectTriggerEvent TriggerEvent; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RequestPointHitActionParam
// Size: 0x1a8 (Inherited: 0x00)
struct FRequestPointHitActionParam {
public:

	uint64_t Guid; // 0x00(0x08)
	uint64_t FireId; // 0x08(0x08)
	uint32_t VehicleId; // 0x10(0x04)
	bool IsVehicleLeanOut; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t ComboId; // 0x18(0x04)
	struct FVector MakerInstigatorLocation; // 0x1c(0x0c)
	struct AActor* MakerInstigator; // 0x28(0x08)
	struct AActor* DamageMakerActor; // 0x30(0x08)
	struct AActor* DamageTakerActor; // 0x38(0x08)
	struct FHitResult HitResult; // 0x40(0x88)
	int32_t HDetail; // 0xc8(0x04)
	enum class EDamageValidateType ValidateType; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	float StartTime; // 0xd0(0x04)
	float DamageTime; // 0xd4(0x04)
	float ShotFre; // 0xd8(0x04)
	struct FVector TakerLocation; // 0xdc(0x0c)
	struct FVector TakerMeshOffset; // 0xe8(0x0c)
	struct FRotator TakerRotator; // 0xf4(0x0c)
	struct FVector PointStartLocation; // 0x100(0x0c)
	struct FVector PointDirection; // 0x10c(0x0c)
	struct TArray<struct AActor*> IgnoreActors; // 0x118(0x10)
	struct TArray<struct UClass*> IngoreClass; // 0x128(0x10)
	struct FRequestPointHitValidateData ValidateData; // 0x138(0x70)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPWeaponDescInfo
// Size: 0x108 (Inherited: 0x00)
struct FGPWeaponDescInfo {
public:

	struct TArray<struct FGunDescRow> GunDescRows; // 0x00(0x10)
	struct FModularWeaponDynamicAttrbuites DynamicAttributes; // 0x10(0x50)
	uint64_t PoorItemId; // 0x60(0x08)
	uint64_t ModifyTimeStamp; // 0x68(0x08)
	uint64_t AttrModifyTimeStamp; // 0x70(0x08)
	uint64_t SkinId; // 0x78(0x08)
	struct FWeaponSkinInfo SkinInfo; // 0x80(0x88)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ModularWeaponInfo
// Size: 0x128 (Inherited: 0x00)
struct FModularWeaponInfo {
public:

	struct TArray<struct FGPModularWeaponPartNode> WeaponPartNodes; // 0x00(0x10)
	struct FModularWeaponDynamicAttrbuites WeaponDynamicAttrs; // 0x10(0x50)
	struct FWeaponPerk Perk; // 0x60(0x20)
	uint64_t PoorItemId; // 0x80(0x08)
	uint64_t SkinGid; // 0x88(0x08)
	uint64_t SkinApperanceId; // 0x90(0x08)
	struct FWeaponSkinInfo SkinInfo; // 0x98(0x88)
	bool bLockApperance; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataBase
// Size: 0x68 (Inherited: 0x10)
struct FWeaponDataBase : public FDescRowBase {
public:

	struct FWeaponDataModifierAttributeInfo ModifierAttributeInfo; // 0x10(0x40)
	char pad_50[0x10]; // 0x50(0x10)
	bool bApplyModified; // 0x60(0x01)
	bool bApplyWithPool; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterMovementSpeedConfig
// Size: 0xb8 (Inherited: 0x10)
struct FCharacterMovementSpeedConfig : public FDescRowBase {
public:

	int32_t SpeedID; // 0x10(0x04)
	float StandSilentWalkSpeed; // 0x14(0x04)
	float StandRunSpeed; // 0x18(0x04)
	float StandSprintSpeed; // 0x1c(0x04)
	float CrouchRunSpeed; // 0x20(0x04)
	float CrouchSilentWalkSpeed; // 0x24(0x04)
	float ProneMoveSpeed; // 0x28(0x04)
	float SuperSprintSpeed; // 0x2c(0x04)
	float StandPeekSpeedFactor; // 0x30(0x04)
	float CrouchPeekSpeedFactor; // 0x34(0x04)
	float StandFireSpeedFactor; // 0x38(0x04)
	float CrouchFireSpeedFactor; // 0x3c(0x04)
	float ProneFireSpeedFactor; // 0x40(0x04)
	float StandAimSpeedFactor; // 0x44(0x04)
	float CrouchAimSpeedFactor; // 0x48(0x04)
	float ProneAimSpeedFactor; // 0x4c(0x04)
	float JumpAimTimeFactor; // 0x50(0x04)
	float StandHoldBreathSpeedFactor; // 0x54(0x04)
	float CrouchHoldBreathSpeedFactor; // 0x58(0x04)
	float ProneHoldBreathSpeedFactor; // 0x5c(0x04)
	float PeekAimSpeedFactor; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FWeaponDataModifierAttributeInfo ModifierAttributeInfo; // 0x68(0x40)
	char pad_A8[0x10]; // 0xa8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GunSwayZoomRecoveryCamera
// Size: 0x98 (Inherited: 0x00)
struct FGunSwayZoomRecoveryCamera {
public:

	char pad_0[0x8]; // 0x00(0x08)
	float ZoomScale; // 0x08(0x04)
	float BlendOutSpeed; // 0x0c(0x04)
	float AnimDuration; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FProcedureAnimTrackData TrackData; // 0x18(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GunSwayCamera
// Size: 0xd8 (Inherited: 0x00)
struct FGunSwayCamera {
public:

	char pad_0[0x8]; // 0x00(0x08)
	float ZoomScale; // 0x08(0x04)
	float StartDelay; // 0x0c(0x04)
	float BlendInSeconds; // 0x10(0x04)
	enum class EGPWeaponEasingType BlendInEaseType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float AnimDuration; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FProcedureAnimTrackData TrackData; // 0x20(0x80)
	float WaistFireEffectedRatio; // 0xa0(0x04)
	float HoldBreathScale; // 0xa4(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char HoldBreathCurve[0x28]; // 0xa8(0x28)
	bool bPauseBreathInFiring; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ProcedureAnimTrackData4Dir
// Size: 0x208 (Inherited: 0x08)
struct FProcedureAnimTrackData4Dir : public FProcedureAnimTrackDataBase {
public:

	struct FProcedureAnimTrackData RightAnim; // 0x08(0x80)
	struct FProcedureAnimTrackData ForwardAnim; // 0x88(0x80)
	struct FProcedureAnimTrackData LeftAnim; // 0x108(0x80)
	struct FProcedureAnimTrackData BackAnim; // 0x188(0x80)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponProcedureAnim
// Size: 0x100 (Inherited: 0x00)
struct FWeaponProcedureAnim {
public:

	char pad_0[0x10]; // 0x00(0x10)
	float Duration; // 0x10(0x04)
	struct FProcedureAnimBlendInfo BlendInfo; // 0x14(0x10)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FWeaponProcedureAnimBone WeaponPABone; // 0x30(0x40)
	struct FProcedureAnimTrackData PAnimTrackData; // 0x70(0x80)
	float FixedZoomRate; // 0xf0(0x04)
	char pad_F4[0xc]; // 0xf4(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FiringAnimParam_AdditiveAnim_Continuous
// Size: 0xa0 (Inherited: 0x80)
struct FFiringAnimParam_AdditiveAnim_Continuous : public FFiringAnimParam_AdditiveAnimBase {
public:

	struct FRandomValue RandomInitTime; // 0x80(0x0c)
	float BlendInTime; // 0x8c(0x04)
	enum class EGPWeaponEasingType BlendInEasingType; // 0x90(0x01)
	char pad_91[0xf]; // 0x91(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FiringAnimParam_AdditiveAnim_PerFire_WithScale
// Size: 0x140 (Inherited: 0x80)
struct FFiringAnimParam_AdditiveAnim_PerFire_WithScale : public FFiringAnimParam_AdditiveAnimBase {
public:

	struct FFiringAnimParam_ScaleArray DefScaleArray; // 0x80(0x10)
	/*struct TSet<enum class EFiringAnimDim>*/char ScaleBackList[0x50]; // 0x90(0x50)
	struct TMap<enum class EFiringAnimDim, struct FFiringAnimParam_ScaleArray> OverrideScaleArray; // 0xe0(0x50)
	enum class EFiringAnimBlendOutMode BlendOutMode; // 0x130(0x01)
	char pad_131[0xf]; // 0x131(0x0f)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponRecoilState
// Size: 0x530 (Inherited: 0x00)
struct FWeaponRecoilState {
public:

	struct FWeaponRecoilPair HorizontalRecoil; // 0x00(0x38)
	struct FWeaponRecoilPair VerticalRecoil; // 0x38(0x38)
	char pad_70[0x4c0]; // 0x70(0x4c0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPAbilityEntityData
// Size: 0x318 (Inherited: 0x00)
struct FGPAbilityEntityData {
public:

	struct TWeakObjectPtr<struct AGPCharacter> GPCharacter; // 0x00(0x08)
	struct TWeakObjectPtr<struct UGPSkillComponent> GPSkillComponent; // 0x08(0x08)
	struct UGPAbilityInstance* AbilityInstance; // 0x10(0x08)
	struct TWeakObjectPtr<struct AGPAbilityLogicTemplate> AbilityTemplate; // 0x18(0x08)
	enum class EAbilitySpawnState AbilitySpawnState; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct AActor* SkillTarget; // 0x28(0x08)
	struct TArray<struct TWeakObjectPtr<struct AWeaponBase>> SkillWeaponArray; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	int32_t SkillId; // 0x50(0x04)
	int32_t SkillEntityID; // 0x54(0x04)
	int32_t SkillEntityIndex; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	uint64_t OwnerUin; // 0x60(0x08)
	enum class ESkillStateType SkillStateType; // 0x68(0x01)
	enum class EFSMForbidReason FSMForbidReason; // 0x69(0x01)
	bool UsingAbility; // 0x6a(0x01)
	bool IsProecessingEndingAbility; // 0x6b(0x01)
	bool bResetWhenReconnect; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float StartPressConfigTime; // 0x70(0x04)
	int32_t OverrideSkillConflictId; // 0x74(0x04)
	bool bUnnormalBreak; // 0x78(0x01)
	bool bIsClient; // 0x79(0x01)
	bool bHasAbilityTemplate; // 0x7a(0x01)
	bool bIsClientPredcit; // 0x7b(0x01)
	float ClientUseCD; // 0x7c(0x04)
	float ClientEndUseCD; // 0x80(0x04)
	bool CheckConsumeCommond; // 0x84(0x01)
	bool DoUnEquipAnim; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	uint32_t SKillWeaponQueuedIndex; // 0x88(0x04)
	float LastActivaTime; // 0x8c(0x04)
	float LastEndActivaTime; // 0x90(0x04)
	bool bSkillButtonPressed; // 0x94(0x01)
	char pad_95[0x7]; // 0x95(0x07)
	enum class ESkillLogicType SkillLogicType; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float SkillRTTTime; // 0xa0(0x04)
	char pad_A4[0x14]; // 0xa4(0x14)
	struct FTimerHandle PredictHandler; // 0xb8(0x08)
	float PredictRTTTime; // 0xc0(0x04)
	char pad_C4[0x1]; // 0xc4(0x01)
	bool InitUISlot; // 0xc5(0x01)
	enum class ESkillUISlot UISlot; // 0xc6(0x01)
	bool bGPSkillButtonVisible; // 0xc7(0x01)
	bool bSkillButtonVisible; // 0xc8(0x01)
	bool bSkillButtonVisibleSec; // 0xc9(0x01)
	bool LastbSkillButtonVisible; // 0xca(0x01)
	bool bShortNameDirty; // 0xcb(0x01)
	bool bTipsTextDirty; // 0xcc(0x01)
	bool bInitIcon; // 0xcd(0x01)
	char pad_CE[0x2]; // 0xce(0x02)
	int32_t cdid; // 0xd0(0x04)
	enum class ECharingSlot CDSlot; // 0xd4(0x01)
	enum class ECharingSlot UseCDSlot; // 0xd5(0x01)
	char pad_D6[0x2]; // 0xd6(0x02)
	struct TMap<enum class ESkillBehavior, struct FSkillBehaviorData> SkillBehaviorMap; // 0xd8(0x50)
	struct TMap<enum class ESkillBtnCall, struct FSkillBtnCallData> BehaviorGroupMap; // 0x128(0x50)
	struct TMap<enum class EFSMGamePlayStatusDefine, int32_t> FSMStatusMapBase; // 0x178(0x50)
	bool EnableLongPress; // 0x1c8(0x01)
	char pad_1C9[0x17]; // 0x1c9(0x17)
	int32_t WaitMontageCount; // 0x1e0(0x04)
	float PlayMontageTime; // 0x1e4(0x04)
	struct TArray<int32_t> RunningNodes; // 0x1e8(0x10)
	struct TMap<int32_t, struct FSkillLogicClientState> ClientLogics; // 0x1f8(0x50)
	struct FSkillLogicStateBit ClientSkillLogicStateBit; // 0x248(0x50)
	struct FSkillLogicStateBit PredictClientSkillLogicStateBit; // 0x298(0x50)
	int32_t LocalEnterFSMCount; // 0x2e8(0x04)
	int32_t LocalLeaveFSMCount; // 0x2ec(0x04)
	int32_t LocalExcuteCount; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	uint64_t AudioTriggerHandle; // 0x2f8(0x08)
	int32_t PreviewSystemCount; // 0x300(0x04)
	bool Call_BP_RemoveFromParent; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct FAbilityEntityHandle AbilityEntityHandle; // 0x308(0x0c)
	char pad_314[0x4]; // 0x314(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillEntityState
// Size: 0x78 (Inherited: 0x10)
struct FSkillEntityState : public FSkillEntityStateBase {
public:

	struct FSkillLogicStateBit SkillLogicStateBit; // 0x10(0x50)
	float EnterTime; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	int32_t EnterFSMCount; // 0x68(0x04)
	int32_t LeaveFSMCount; // 0x6c(0x04)
	bool bUnnormalBreak; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t CutOutCount; // 0x74(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkillEntityState3P
// Size: 0x58 (Inherited: 0x10)
struct FSkillEntityState3P : public FSkillEntityStateBase {
public:

	struct FSkillLogicStateBit3P SkillLogicStateBit; // 0x10(0x38)
	int32_t EnterFSMCount; // 0x48(0x04)
	int32_t LeaveFSMCount; // 0x4c(0x04)
	bool bUnnormalBreak; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SafehouseNPCTurnToPlayerAnims
// Size: 0x1b8 (Inherited: 0x08)
struct FSafehouseNPCTurnToPlayerAnims : public FAIAnimsBase {
public:

	struct FAIAnimItemAnimSeq Stand; // 0x08(0x30)
	struct FAIAnimItemAnimSeq TurnLeft45; // 0x38(0x30)
	struct FAIAnimItemAnimSeq TurnLeft90; // 0x68(0x30)
	struct FAIAnimItemAnimSeq TurnLeft135; // 0x98(0x30)
	struct FAIAnimItemAnimSeq TurnLeft180; // 0xc8(0x30)
	struct FAIAnimItemAnimSeq TurnRight45; // 0xf8(0x30)
	struct FAIAnimItemAnimSeq TurnRight90; // 0x128(0x30)
	struct FAIAnimItemAnimSeq TurnRight135; // 0x158(0x30)
	struct FAIAnimItemAnimSeq TurnRight180; // 0x188(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SafehouseNPC3AngleAnim
// Size: 0x98 (Inherited: 0x08)
struct FSafehouseNPC3AngleAnim : public FAIAnimsBase {
public:

	struct FAIAnimItemAnimSeq TurnLeft90; // 0x08(0x30)
	struct FAIAnimItemAnimSeq TurnLeft180; // 0x38(0x30)
	struct FAIAnimItemAnimSeq TurnRight90; // 0x68(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AIAnim3AngleMontage
// Size: 0x98 (Inherited: 0x08)
struct FAIAnim3AngleMontage : public FAIAnimsBase {
public:

	struct FAIAnimItemMontage TurnLeft90; // 0x08(0x30)
	struct FAIAnimItemMontage TurnLeft180; // 0x38(0x30)
	struct FAIAnimItemMontage TurnRight90; // 0x68(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.KnockbackAnimRow
// Size: 0x120 (Inherited: 0x00)
struct FKnockbackAnimRow {
public:

	struct FAnimItemBaseAsset KB_Start; // 0x00(0x60)
	struct FAnimItemBaseAsset KB_Loop; // 0x60(0x60)
	struct FAnimItemBaseAsset KB_Getup; // 0xc0(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CarryBodyAnimRow
// Size: 0x2a0 (Inherited: 0x00)
struct FCarryBodyAnimRow {
public:

	struct FAnimItemBaseAsset CarryBody; // 0x00(0x60)
	struct FAnimItemBaseAsset BeCarryUnderFPP; // 0x60(0x60)
	struct FAnimItemBaseAsset BeCarryUnderTPP; // 0xc0(0x60)
	struct FAnimItemBaseAsset DropBody; // 0x120(0x60)
	struct FAnimItemBaseAsset BeDropUnderFPP; // 0x180(0x60)
	struct FAnimItemBaseAsset BeDropUnderTPP; // 0x1e0(0x60)
	struct FAnimItemBaseAsset BoxBeCarringIdle; // 0x240(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FirefightingAnimRow
// Size: 0xc0 (Inherited: 0x00)
struct FFirefightingAnimRow {
public:

	struct FAnimItemBaseAsset Firefighting; // 0x00(0x60)
	struct FAnimItemBaseAsset FirefightingProne; // 0x60(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ApplySprayAnimRow
// Size: 0xc0 (Inherited: 0x00)
struct FApplySprayAnimRow {
public:

	struct FAnimItemBaseAsset ApplySpray; // 0x00(0x60)
	struct FAnimItemBaseAsset ApplySprayProne; // 0x60(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MarkingAnimRow
// Size: 0xc0 (Inherited: 0x00)
struct FMarkingAnimRow {
public:

	struct FAnimItemBaseAsset Marking; // 0x00(0x60)
	struct FAnimItemBaseAsset MarkingProne; // 0x60(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.RaiseWatchAnimRow
// Size: 0x240 (Inherited: 0x00)
struct FRaiseWatchAnimRow {
public:

	struct FAnimItemBaseAsset CharacterHandStart; // 0x00(0x60)
	struct FAnimItemBaseAsset CharacterHandLoop; // 0x60(0x60)
	struct FAnimItemBaseAsset CharacterHandEnd; // 0xc0(0x60)
	struct FAnimItemBaseAsset WatchStart; // 0x120(0x60)
	struct FAnimItemBaseAsset WatchLoop; // 0x180(0x60)
	struct FAnimItemBaseAsset WatchEnd; // 0x1e0(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ParachuteAnimRow
// Size: 0x2a0 (Inherited: 0x00)
struct FParachuteAnimRow {
public:

	struct FAnimItemBaseAsset OpenParachute; // 0x00(0x60)
	struct FAnimItemBaseAsset ParachuteBS; // 0x60(0x60)
	struct FAnimItemBaseAsset CloseParachute; // 0xc0(0x60)
	struct FAnimItemBaseAsset ParachuteDecelerate; // 0x120(0x60)
	struct FAnimItemBaseAsset ParachuteLand; // 0x180(0x60)
	struct FAnimItemBaseAsset GlideBS; // 0x1e0(0x60)
	struct FAnimItemBaseAsset GlideLand; // 0x240(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ClimbLadderAnimRow
// Size: 0x240 (Inherited: 0x00)
struct FClimbLadderAnimRow {
public:

	struct FAnimItemBaseAsset ClimbLadderLandStart; // 0x00(0x60)
	struct FAnimItemBaseAsset ClimbLadderLandEndL; // 0x60(0x60)
	struct FAnimItemBaseAsset ClimbLadderLandEndR; // 0xc0(0x60)
	struct FAnimItemBaseAsset ClimbLadderRoofStart; // 0x120(0x60)
	struct FAnimItemBaseAsset ClimbLadderRoofEndL; // 0x180(0x60)
	struct FAnimItemBaseAsset ClimbLadderRoofEndR; // 0x1e0(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TacticalActionAnimRow
// Size: 0x240 (Inherited: 0x00)
struct FTacticalActionAnimRow {
public:

	struct FAnimItemBaseAsset Respect; // 0x00(0x60)
	struct FAnimItemBaseAsset WingChun; // 0x60(0x60)
	struct FAnimItemBaseAsset Rock; // 0xc0(0x60)
	struct FAnimItemBaseAsset Paper; // 0x120(0x60)
	struct FAnimItemBaseAsset Scissors; // 0x180(0x60)
	struct FAnimItemBaseAsset HandShield; // 0x1e0(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.BunkerAnimRow
// Size: 0xc0 (Inherited: 0x00)
struct FBunkerAnimRow {
public:

	struct FAnimItemBaseAsset ProneRight; // 0x00(0x60)
	struct FAnimItemBaseAsset ProneLeft; // 0x60(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPGunSwingProxy
// Size: 0xb10 (Inherited: 0x00)
struct FGPGunSwingProxy {
public:

	char pad_0[0x4]; // 0x00(0x04)
	float GunSwingSensibility; // 0x04(0x04)
	float ADSGunSwingSensibility; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* GunSwingSensibilityCurve; // 0x10(0x08)
	char pad_18[0x180]; // 0x18(0x180)
	float CachedWeaponADSGunSwingOffset; // 0x198(0x04)
	float CachedWeaponADSGunSwingSightOffset; // 0x19c(0x04)
	float ADSGunSwingOffset; // 0x1a0(0x04)
	float ADSGunSwingSightOffset; // 0x1a4(0x04)
	char pad_1A8[0x78]; // 0x1a8(0x78)
	struct FDFMGunSwingSpringInMoving SpringInLRMoving; // 0x220(0x98)
	struct FDFMGunSwingSpringInMoving RollSpringInLRMoving; // 0x2b8(0x98)
	struct FDFMGunSwingSpringInMoving ADSSpringInLRMoving; // 0x350(0x98)
	struct FDFMGunSwingSpringInMoving ADSRollSpringInLRMoving; // 0x3e8(0x98)
	struct FDFMGunSwingSpringInMoving LeftShoulerSpringInLRMoving; // 0x480(0x98)
	struct FVector LeftShoulderInLeftADSMoving; // 0x518(0x0c)
	struct FVector LeftShoulderInRightADSMoving; // 0x524(0x0c)
	struct FDFMGunSwingSpringInMoving DelaySpringInLRMoving; // 0x530(0x98)
	struct FDFMGunSwingSpringInMoving PullSpringInLRMoving; // 0x5c8(0x98)
	struct FDFMGunSwingSpringInMoving SpringInFMoving; // 0x660(0x98)
	struct FDFMGunSwingSpringInMoving SpringInBMoving; // 0x6f8(0x98)
	struct FGPSpringWithTransform SpringInCourchFMoving; // 0x790(0x48)
	struct FGPSpringWithTransform SpringInCourchBMoving; // 0x7d8(0x48)
	struct FGPSpringWithTransform SpringInCourchLMoving; // 0x820(0x48)
	struct FGPSpringWithTransform SpringInCourchLMovingDelay; // 0x868(0x48)
	struct FGPSpringWithTransform SpringInCourchRMoving; // 0x8b0(0x48)
	struct FGPSpringWithTransform SpringInCourchRMovingDelay; // 0x8f8(0x48)
	struct FGPSpringBase RollSpringBehindWall; // 0x940(0x20)
	char pad_960[0x14]; // 0x960(0x14)
	float RollBehindWall; // 0x974(0x04)
	float TraceBehindWall_LROffset; // 0x978(0x04)
	float TraceBehindWall_Length; // 0x97c(0x04)
	float TraceBehindWall_FadeoutLength; // 0x980(0x04)
	char pad_984[0x18c]; // 0x984(0x18c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPMoveParams
// Size: 0x50 (Inherited: 0x3c)
struct FGPMoveParams : public FMoveParamsNoBase {
public:

	char pad_3C[0x4]; // 0x3c(0x04)
	struct UPrimitiveComponent* ClientMovementBase; // 0x40(0x08)
	struct FName ClientBaseBoneName; // 0x48(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPPathFollowRuntimeData
// Size: 0x90 (Inherited: 0x00)
struct FGPPathFollowRuntimeData {
public:

	struct AActor* CurrentPath; // 0x00(0x08)
	struct FGPPathFollowWayPointData CurrentWayPointData; // 0x08(0x28)
	float CurrentDistance; // 0x30(0x04)
	int32_t CycleNum; // 0x34(0x04)
	float CurrentSpeed; // 0x38(0x04)
	bool bIsReverse; // 0x3c(0x01)
	bool bIsCurrentSpeedFixed; // 0x3d(0x01)
	bool bShouldKeepCustomSpeed; // 0x3e(0x01)
	bool bTransToCustomSpeed; // 0x3f(0x01)
	float FadingDistance; // 0x40(0x04)
	float CustomTargetSpeed; // 0x44(0x04)
	char pad_48[0x8]; // 0x48(0x08)
	struct FTransform CurrentTransform; // 0x50(0x30)
	char pad_80[0x10]; // 0x80(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SkeletalMeshAnimURORow
// Size: 0x110 (Inherited: 0x10)
struct FSkeletalMeshAnimURORow : public FDescRowBase {
public:

	struct FSkeletalMeshAnimUROBit Low; // 0x10(0x40)
	struct FSkeletalMeshAnimUROBit Medium; // 0x50(0x40)
	struct FSkeletalMeshAnimUROBit High; // 0x90(0x40)
	struct FSkeletalMeshAnimUROBit SuperHigh; // 0xd0(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.VehicleSeat
// Size: 0x2b0 (Inherited: 0x00)
struct FVehicleSeat {
public:

	bool bForbidToUse; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName VehiclePathSocket; // 0x04(0x08)
	struct FName FloorPathSocket; // 0x0c(0x08)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FTransform GetOnTransform; // 0x20(0x30)
	enum class EAnimVehicleSeatType SeatType; // 0x50(0x01)
	enum class EAnimVehicleSeatPos SeatPosType; // 0x51(0x01)
	enum class EVehicleSeatType SeatInteractionType; // 0x52(0x01)
	bool SeatCanTurn; // 0x53(0x01)
	bool SeatCanAiming; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int32_t SeatOrder; // 0x58(0x04)
	bool bGetOffWhenDeath; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct FSpringArmTransformValue CameraConfig; // 0x60(0x24)
	struct FSpringArmTransformValue LeanOutCameraConfig; // 0x84(0x24)
	struct UCurveFloat* SpringArmTargetOffsetXCurve; // 0xa8(0x08)
	struct UCurveFloat* SpringArmTargetOffsetXCurvePC; // 0xb0(0x08)
	struct UCurveFloat* SpringArmLengthPitchCurve; // 0xb8(0x08)
	struct UCurveFloat* SpringArmLengthPitchCurvePC; // 0xc0(0x08)
	bool IsRelativeSpringLengthPitch; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FVehicleLeanOutInfo LeanOutInfo; // 0xd0(0x88)
	bool bIsWeaponSeat; // 0x158(0x01)
	bool bIsForbidShoot; // 0x159(0x01)
	bool bIsForbidChangeXPP; // 0x15a(0x01)
	bool bDefaultFPP; // 0x15b(0x01)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FVehicleWeaponInfo WeaponInfo; // 0x160(0xa0)
	float FPPFOV; // 0x200(0x04)
	float TPPFOV; // 0x204(0x04)
	bool bClampPitch; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	float MaxPitch; // 0x20c(0x04)
	float MinPitch; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	/*struct TSoftClassPtr<UObject>*/char FPPCharacterAnimInstance[0x28]; // 0x218(0x28)
	/*struct TSoftClassPtr<UObject>*/char TPPCharacterAnimInstance[0x28]; // 0x240(0x28)
	bool IsNeedHide3PTPPMesh; // 0x268(0x01)
	bool IgnoreDamage; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)
	struct AActor* OnSeatActor; // 0x270(0x08)
	char pad_278[0x38]; // 0x278(0x38)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.HallWeaponPartAnimTableRow
// Size: 0x48 (Inherited: 0x10)
struct FHallWeaponPartAnimTableRow : public FWeaponAnimTableRowBase {
public:

	struct FWeaponAnimItemHallSeqBase Anim; // 0x10(0x30)
	char pad_40[0x8]; // 0x40(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.HallCharacterAnimTableRow
// Size: 0x780 (Inherited: 0x10)
struct FHallCharacterAnimTableRow : public FWeaponAnimTableRowBase {
public:

	struct FWeaponAnimItemHallSeqBase Idle; // 0x10(0x30)
	char pad_40[0x8]; // 0x40(0x08)
	struct FWeaponAnimItemHallSeqBase IdleFace; // 0x48(0x30)
	char pad_78[0x8]; // 0x78(0x08)
	struct FWeaponAnimItemHallSeqBase EnterShow; // 0x80(0x30)
	char pad_B0[0x8]; // 0xb0(0x08)
	struct FWeaponAnimItemHallSeqBase GetWeaponShow; // 0xb8(0x30)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FWeaponAnimItemHallSeqBase IdleShow; // 0xf0(0x30)
	char pad_120[0x8]; // 0x120(0x08)
	struct FWeaponAnimItemHallSeqBase IdleShowFace; // 0x128(0x30)
	char pad_158[0x8]; // 0x158(0x08)
	struct FWeaponAnimItemHallSeqBase ArmorStartShow; // 0x160(0x30)
	char pad_190[0x8]; // 0x190(0x08)
	struct FWeaponAnimItemHallSeqBase ArmorLoopShow; // 0x198(0x30)
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FWeaponAnimItemHallSeqBase ArmorStopShow; // 0x1d0(0x30)
	char pad_200[0x8]; // 0x200(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementIdle1; // 0x208(0x30)
	char pad_238[0x8]; // 0x238(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementIdle2; // 0x240(0x30)
	char pad_270[0x8]; // 0x270(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementIdle3; // 0x278(0x30)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementIdle4; // 0x2b0(0x30)
	char pad_2E0[0x8]; // 0x2e0(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementWalk1; // 0x2e8(0x30)
	char pad_318[0x8]; // 0x318(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementWalk2; // 0x320(0x30)
	char pad_350[0x8]; // 0x350(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementWalk3; // 0x358(0x30)
	char pad_388[0x8]; // 0x388(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementWalk4; // 0x390(0x30)
	char pad_3C0[0x8]; // 0x3c0(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementShow; // 0x3c8(0x30)
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementTeamIdle1; // 0x400(0x30)
	char pad_430[0x8]; // 0x430(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementTeamIdle2; // 0x438(0x30)
	char pad_468[0x8]; // 0x468(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementTeamIdle3; // 0x470(0x30)
	char pad_4A0[0x8]; // 0x4a0(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementTeamIdle4; // 0x4a8(0x30)
	char pad_4D8[0x8]; // 0x4d8(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementTeamWalk1; // 0x4e0(0x30)
	char pad_510[0x8]; // 0x510(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementTeamWalk2; // 0x518(0x30)
	char pad_548[0x8]; // 0x548(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementTeamWalk3; // 0x550(0x30)
	char pad_580[0x8]; // 0x580(0x08)
	struct FWeaponAnimItemHallSeqBase SettlementTeamWalk4; // 0x588(0x30)
	char pad_5B8[0x8]; // 0x5b8(0x08)
	struct FWeaponAnimItemHallSeqBase MainFlowHallIdlePose1; // 0x5c0(0x30)
	char pad_5F0[0x8]; // 0x5f0(0x08)
	struct FWeaponAnimItemHallSeqBase MainFlowHallIdlePose2; // 0x5f8(0x30)
	char pad_628[0x8]; // 0x628(0x08)
	struct FWeaponAnimItemHallSeqBase MainFlowHallIdlePose3; // 0x630(0x30)
	char pad_660[0x8]; // 0x660(0x08)
	struct FWeaponAnimItemHallSeqBase MainFlowHallIdlePose4; // 0x668(0x30)
	char pad_698[0x8]; // 0x698(0x08)
	struct FWeaponAnimItemHallSeqBase MainFlowHallShowPose1; // 0x6a0(0x30)
	char pad_6D0[0x8]; // 0x6d0(0x08)
	struct FWeaponAnimItemHallSeqBase MainFlowHallShowPose2; // 0x6d8(0x30)
	char pad_708[0x8]; // 0x708(0x08)
	struct FWeaponAnimItemHallSeqBase MainFlowHallShowPose3; // 0x710(0x30)
	char pad_740[0x8]; // 0x740(0x08)
	struct FWeaponAnimItemHallSeqBase MainFlowHallShowPose4; // 0x748(0x30)
	char pad_778[0x8]; // 0x778(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.TurnAnim8AngleSeqBase
// Size: 0x2c8 (Inherited: 0x08)
struct FTurnAnim8AngleSeqBase : public FWeaponAnimItemBase {
public:

	struct FWeaponAnimItemSeqBase Turn0; // 0x08(0x58)
	struct FWeaponAnimItemSeqBase TurnLeft45; // 0x60(0x58)
	struct FWeaponAnimItemSeqBase TurnLeft90; // 0xb8(0x58)
	struct FWeaponAnimItemSeqBase TurnLeft135; // 0x110(0x58)
	struct FWeaponAnimItemSeqBase TurnLeft180; // 0x168(0x58)
	struct FWeaponAnimItemSeqBase TurnRight45; // 0x1c0(0x58)
	struct FWeaponAnimItemSeqBase TurnRight90; // 0x218(0x58)
	struct FWeaponAnimItemSeqBase TurnRight135; // 0x270(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimDifferentMagItem
// Size: 0x2c8 (Inherited: 0x00)
struct FWeaponAnimDifferentMagItem {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FWeaponAnimItemSeqBase Reload; // 0x08(0x58)
	struct FWeaponAnimItemSeqBase ReloadEmpty; // 0x60(0x58)
	struct FWeaponAnimItemSeqBase AimReload; // 0xb8(0x58)
	struct FWeaponAnimItemSeqBase AimReloadEmpty; // 0x110(0x58)
	struct FWeaponAnimItemSeqBase Inspect; // 0x168(0x58)
	struct FWeaponAnimItemSeqBase InspectEmpty; // 0x1c0(0x58)
	struct FWeaponAnimItemSeqBase InspectFinally; // 0x218(0x58)
	struct FWeaponAnimItemSeqBase InspectFirstEmpty; // 0x270(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimPartItemSeq
// Size: 0x68 (Inherited: 0x08)
struct FWeaponAnimPartItemSeq : public FWeaponAnimItemBase {
public:

	char bPlayAt3P : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FWeaponAnimItemSeq AnimItems; // 0x10(0x58)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SpecialWeaponAnimTableRow
// Size: 0x350 (Inherited: 0x10)
struct FSpecialWeaponAnimTableRow : public FWeaponAnimTableRowBase {
public:

	struct FWeaponAnimItemSeq Idle; // 0x10(0x58)
	char pad_68[0x8]; // 0x68(0x08)
	struct FWeaponAnimItemSeq Inactive; // 0x70(0x58)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FWeaponAnimItemMontage FireMontage; // 0xd0(0xb8)
	char pad_188[0x8]; // 0x188(0x08)
	struct FWeaponAnimItemMontage FireZoomingMontage; // 0x190(0xb8)
	char pad_248[0x8]; // 0x248(0x08)
	struct FWeaponAnimItemSeq Equip; // 0x250(0x58)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct FWeaponAnimItemSeq Unequip; // 0x2b0(0x58)
	char pad_308[0x8]; // 0x308(0x08)
	struct FWeaponAnimItemSeqArray Reload; // 0x310(0x18)
	char pad_328[0x8]; // 0x328(0x08)
	struct FWeaponAnimItemSeqArray AimReload; // 0x330(0x18)
	char pad_348[0x8]; // 0x348(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MeleeWeaponAnimOperationTableRow
// Size: 0x7d8 (Inherited: 0x10)
struct FMeleeWeaponAnimOperationTableRow : public FWeaponAnimTableRowBase {
public:

	struct FWeaponAnimItemMontage FireCMontage; // 0x10(0xb8)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FWeaponAnimItemSeq EquipCLeft; // 0xd0(0x58)
	char pad_128[0x8]; // 0x128(0x08)
	struct FWeaponAnimItemSeq EquipCRight; // 0x130(0x58)
	char pad_188[0x8]; // 0x188(0x08)
	struct FWeaponAnimItemSeq UnequipCLeft; // 0x190(0x58)
	char pad_1E8[0x8]; // 0x1e8(0x08)
	struct FWeaponAnimItemSeq UnequipCRight; // 0x1f0(0x58)
	char pad_248[0x8]; // 0x248(0x08)
	struct FWeaponAnimItemSeq UnequipFast; // 0x250(0x58)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct FWeaponAnimItemSeq EquipFast; // 0x2b0(0x58)
	char pad_308[0x8]; // 0x308(0x08)
	struct FWeaponAnimItemSeq EquipWLeft; // 0x310(0x58)
	char pad_368[0x8]; // 0x368(0x08)
	struct FWeaponAnimItemSeq EquipWRight; // 0x370(0x58)
	char pad_3C8[0x8]; // 0x3c8(0x08)
	struct FWeaponAnimItemSeq UnequipWLeft; // 0x3d0(0x58)
	char pad_428[0x8]; // 0x428(0x08)
	struct FWeaponAnimItemSeq UnequipWRight; // 0x430(0x58)
	char pad_488[0x8]; // 0x488(0x08)
	struct FWeaponAnimItemMontage RandomFireCMontage1; // 0x490(0xb8)
	char pad_548[0x8]; // 0x548(0x08)
	struct FWeaponAnimItemMontage RandomFireCMontage2; // 0x550(0xb8)
	char pad_608[0x8]; // 0x608(0x08)
	struct FWeaponAnimItemMontage RandomFireCMontage3; // 0x610(0xb8)
	char pad_6C8[0x8]; // 0x6c8(0x08)
	bool bEnableReload; // 0x6d0(0x01)
	char pad_6D1[0x7]; // 0x6d1(0x07)
	struct FWeaponAnimItemSeq ReloadC; // 0x6d8(0x58)
	char pad_730[0x8]; // 0x730(0x08)
	struct FWeaponAnimItemSeq ReloadW; // 0x738(0x58)
	char pad_790[0x8]; // 0x790(0x08)
	struct FWeaponAnimItemSeqArray EquipAnims; // 0x798(0x18)
	char pad_7B0[0x8]; // 0x7b0(0x08)
	struct FWeaponAnimItemSeqArray InspectAnims; // 0x7b8(0x18)
	char pad_7D0[0x8]; // 0x7d0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimOperationTableRow
// Size: 0x2050 (Inherited: 0x10)
struct FWeaponAnimOperationTableRow : public FWeaponAnimTableRowBase {
public:

	struct FWeaponAnimItemMontage FireCMontage; // 0x10(0xb8)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FWeaponAnimItemMontage FireZoomingCMontage; // 0xd0(0xb8)
	char pad_188[0x8]; // 0x188(0x08)
	struct FWeaponAnimItemSeq FireW; // 0x190(0x58)
	char pad_1E8[0x8]; // 0x1e8(0x08)
	struct FWeaponAnimItemSeq FireZoomingW; // 0x1f0(0x58)
	char pad_248[0x8]; // 0x248(0x08)
	struct FWeaponAnimItemSeq EquipCLeft; // 0x250(0x58)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct FWeaponAnimItemSeq EquipCRight; // 0x2b0(0x58)
	char pad_308[0x8]; // 0x308(0x08)
	struct FWeaponAnimItemSeq UnequipCLeft; // 0x310(0x58)
	char pad_368[0x8]; // 0x368(0x08)
	struct FWeaponAnimItemSeq UnequipCRight; // 0x370(0x58)
	char pad_3C8[0x8]; // 0x3c8(0x08)
	struct FWeaponAnimItemSeq FirstEquip; // 0x3d0(0x58)
	char pad_428[0x8]; // 0x428(0x08)
	struct FWeaponAnimItemSeq EquipWLeft; // 0x430(0x58)
	char pad_488[0x8]; // 0x488(0x08)
	struct FWeaponAnimItemSeq EquipWRight; // 0x490(0x58)
	char pad_4E8[0x8]; // 0x4e8(0x08)
	struct FWeaponAnimItemSeq UnequipWLeft; // 0x4f0(0x58)
	char pad_548[0x8]; // 0x548(0x08)
	struct FWeaponAnimItemSeq UnequipWRight; // 0x550(0x58)
	char pad_5A8[0x8]; // 0x5a8(0x08)
	struct FWeaponAnimItemSeq UnequipFast; // 0x5b0(0x58)
	char pad_608[0x8]; // 0x608(0x08)
	struct FWeaponAnimItemSeq EquipFast; // 0x610(0x58)
	char pad_668[0x8]; // 0x668(0x08)
	struct FWeaponAnimItemSeq InHoldUnEquip; // 0x670(0x58)
	char pad_6C8[0x8]; // 0x6c8(0x08)
	struct FWeaponAnimItemSeq FireEndUnEquip; // 0x6d0(0x58)
	char pad_728[0x8]; // 0x728(0x08)
	struct FWeaponAnimItemMontage WaistSmallActionSmall; // 0x730(0xb8)
	char pad_7E8[0x8]; // 0x7e8(0x08)
	struct FWeaponAnimItemMontage WaistSmallActionMid; // 0x7f0(0xb8)
	char pad_8A8[0x8]; // 0x8a8(0x08)
	struct FWeaponAnimItemMontage WaistSmallActionMax; // 0x8b0(0xb8)
	char pad_968[0x8]; // 0x968(0x08)
	struct FWeaponAnimItemMontage AimSmallActionSmall; // 0x970(0xb8)
	char pad_A28[0x8]; // 0xa28(0x08)
	struct FWeaponAnimItemMontage AimSmallActionMid; // 0xa30(0xb8)
	char pad_AE8[0x8]; // 0xae8(0x08)
	struct FWeaponAnimItemMontage AimSmallActionMax; // 0xaf0(0xb8)
	char pad_BA8[0x8]; // 0xba8(0x08)
	struct FWeaponAnimItemMontage ReloadCMontage; // 0xbb0(0xb8)
	char pad_C68[0x8]; // 0xc68(0x08)
	struct FWeaponAnimItemMontage AimReloadCMontage; // 0xc70(0xb8)
	char pad_D28[0x8]; // 0xd28(0x08)
	struct FWeaponAnimItemMontage ReloadEmptyCMontage; // 0xd30(0xb8)
	char pad_DE8[0x8]; // 0xde8(0x08)
	struct FWeaponAnimItemMontage AimReloadEmptyCMontage; // 0xdf0(0xb8)
	char pad_EA8[0x8]; // 0xea8(0x08)
	struct FWeaponAnimItemMontage ReloadWMontage; // 0xeb0(0xb8)
	char pad_F68[0x8]; // 0xf68(0x08)
	struct FWeaponAnimItemMontage ReloadEmptyWMontage; // 0xf70(0xb8)
	char pad_1028[0x8]; // 0x1028(0x08)
	struct FWeaponAnimItemSeq ReloadSingleW; // 0x1030(0x58)
	char pad_1088[0x8]; // 0x1088(0x08)
	struct FWeaponAnimItemSeq ReloadSingleEndW; // 0x1090(0x58)
	char pad_10E8[0x8]; // 0x10e8(0x08)
	struct FWeaponAnimItemSeq ReloadEmptySingleW; // 0x10f0(0x58)
	char pad_1148[0x8]; // 0x1148(0x08)
	struct FWeaponAnimItemSeq ReloadEmptySingleEndW; // 0x1150(0x58)
	char pad_11A8[0x8]; // 0x11a8(0x08)
	struct FWeaponAnimItemSeq AimReloadSingleW; // 0x11b0(0x58)
	char pad_1208[0x8]; // 0x1208(0x08)
	struct FWeaponAnimItemSeq AimReloadSingleEndW; // 0x1210(0x58)
	char pad_1268[0x8]; // 0x1268(0x08)
	struct FWeaponAnimItemSeq ReloadC; // 0x1270(0x58)
	char pad_12C8[0x8]; // 0x12c8(0x08)
	struct FWeaponAnimItemSeq AimReloadC; // 0x12d0(0x58)
	char pad_1328[0x8]; // 0x1328(0x08)
	struct FWeaponAnimItemSeq ReloadW; // 0x1330(0x58)
	char pad_1388[0x8]; // 0x1388(0x08)
	struct FWeaponAnimItemSeq AimReloadW; // 0x1390(0x58)
	char pad_13E8[0x8]; // 0x13e8(0x08)
	struct FWeaponAnimItemSeq ReloadEmptyC; // 0x13f0(0x58)
	char pad_1448[0x8]; // 0x1448(0x08)
	struct FWeaponAnimItemSeq AimReloadEmptyC; // 0x1450(0x58)
	char pad_14A8[0x8]; // 0x14a8(0x08)
	struct FWeaponAnimItemSeq ReloadEmptyW; // 0x14b0(0x58)
	char pad_1508[0x8]; // 0x1508(0x08)
	struct FWeaponAnimItemSeq AimReloadEmptyW; // 0x1510(0x58)
	char pad_1568[0x8]; // 0x1568(0x08)
	struct FWeaponAnimItemStringMap ReloadForDifferentMagazinesNew; // 0x1570(0x58)
	char pad_15C8[0x8]; // 0x15c8(0x08)
	struct FWeaponAnimItemGameplayTagMap LeftHandAdditivePose; // 0x15d0(0x58)
	char pad_1628[0x8]; // 0x1628(0x08)
	struct FWeaponAnimItemSeq ChangeFireModeC; // 0x1630(0x58)
	char pad_1688[0x8]; // 0x1688(0x08)
	struct FWeaponAnimItemSeq ChangeFireModeToSingle; // 0x1690(0x58)
	char pad_16E8[0x8]; // 0x16e8(0x08)
	struct FWeaponAnimItemSeq ChangeFireModeToBurst; // 0x16f0(0x58)
	char pad_1748[0x8]; // 0x1748(0x08)
	struct FWeaponAnimItemSeq ChangeFireModeToAuto; // 0x1750(0x58)
	char pad_17A8[0x8]; // 0x17a8(0x08)
	struct FWeaponAnimItemSeq AimChangeFireModeToSingle; // 0x17b0(0x58)
	char pad_1808[0x8]; // 0x1808(0x08)
	struct FWeaponAnimItemSeq AimChangeFireModeToBurst; // 0x1810(0x58)
	char pad_1868[0x8]; // 0x1868(0x08)
	struct FWeaponAnimItemSeq AimChangeFireModeToAuto; // 0x1870(0x58)
	char pad_18C8[0x8]; // 0x18c8(0x08)
	struct FWeaponAnimItemSeq InspectC; // 0x18d0(0x58)
	char pad_1928[0x8]; // 0x1928(0x08)
	struct FWeaponAnimItemSeq InspectEmptyC; // 0x1930(0x58)
	char pad_1988[0x8]; // 0x1988(0x08)
	struct FWeaponAnimItemSeq InspectFinallyC; // 0x1990(0x58)
	char pad_19E8[0x8]; // 0x19e8(0x08)
	struct FWeaponAnimItemSeq InspectFirstEmptyC; // 0x19f0(0x58)
	char pad_1A48[0x8]; // 0x1a48(0x08)
	struct FWeaponAnimItemMontage FireEndHoldIdle; // 0x1a50(0xb8)
	char pad_1B08[0x8]; // 0x1b08(0x08)
	struct FWeaponAnimItemMontage LeftWeaponRightIdle; // 0x1b10(0xb8)
	char pad_1BC8[0x8]; // 0x1bc8(0x08)
	struct FWeaponAnimItemSeq ChamberC; // 0x1bd0(0x58)
	char pad_1C28[0x8]; // 0x1c28(0x08)
	struct FWeaponAnimItemSeq AimChamberC; // 0x1c30(0x58)
	char pad_1C88[0x8]; // 0x1c88(0x08)
	struct FWeaponAnimItemSeq ChamberW; // 0x1c90(0x58)
	char pad_1CE8[0x8]; // 0x1ce8(0x08)
	struct FWeaponAnimItemSeq AimChamberW; // 0x1cf0(0x58)
	char pad_1D48[0x8]; // 0x1d48(0x08)
	struct FWeaponAnimItemMontage ChargingCMontage; // 0x1d50(0xb8)
	char pad_1E08[0x8]; // 0x1e08(0x08)
	struct FWeaponAnimItemMontage AimChargingCMontage; // 0x1e10(0xb8)
	char pad_1EC8[0x8]; // 0x1ec8(0x08)
	struct FWeaponAnimItemMontage CancelChargeCMontage; // 0x1ed0(0xb8)
	char pad_1F88[0x8]; // 0x1f88(0x08)
	struct FWeaponAnimItemMontage AimCancelChargeCMontage; // 0x1f90(0xb8)
	char pad_2048[0x8]; // 0x2048(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimBasePosTableRow
// Size: 0x3910 (Inherited: 0x10)
struct FWeaponAnimBasePosTableRow : public FWeaponAnimTableRowBase {
public:

	struct FWeaponAnimItemBS MoveBS; // 0x10(0x58)
	char pad_68[0x8]; // 0x68(0x08)
	struct FWeaponAnimItemBS MoveBS_F; // 0x70(0x58)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FWeaponAnimItemBS MoveBS_FL; // 0xd0(0x58)
	char pad_128[0x8]; // 0x128(0x08)
	struct FWeaponAnimItemBS MoveBS_FR; // 0x130(0x58)
	char pad_188[0x8]; // 0x188(0x08)
	struct FWeaponAnimItemBS MoveBS_B; // 0x190(0x58)
	char pad_1E8[0x8]; // 0x1e8(0x08)
	struct FWeaponAnimItemBS MoveBS_BL; // 0x1f0(0x58)
	char pad_248[0x8]; // 0x248(0x08)
	struct FWeaponAnimItemBS MoveBS_BR; // 0x250(0x58)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct FWeaponAnimItemBS MoveBS_L; // 0x2b0(0x58)
	char pad_308[0x8]; // 0x308(0x08)
	struct FWeaponAnimItemBS MoveBS_R; // 0x310(0x58)
	char pad_368[0x8]; // 0x368(0x08)
	struct FWeaponAnimItemBS SafeHouseMoveBS; // 0x370(0x58)
	char pad_3C8[0x8]; // 0x3c8(0x08)
	struct FWeaponAnimItemSeq Idle; // 0x3d0(0x58)
	char pad_428[0x8]; // 0x428(0x08)
	struct FWeaponAnimItemSeq Standby1; // 0x430(0x58)
	char pad_488[0x8]; // 0x488(0x08)
	struct FWeaponAnimItemSeq LeisureIdle; // 0x490(0x58)
	char pad_4E8[0x8]; // 0x4e8(0x08)
	struct FWeaponAnimItemSeq ArmFractureAdditive; // 0x4f0(0x58)
	char pad_548[0x8]; // 0x548(0x08)
	struct FWeaponAnimItemSeq LegFractureIdleAdditive; // 0x550(0x58)
	char pad_5A8[0x8]; // 0x5a8(0x08)
	struct FWeaponAnimItemSeq LegFractureMoveAdditive; // 0x5b0(0x58)
	char pad_608[0x8]; // 0x608(0x08)
	struct FWeaponAnimItemSeq CrouchSprintAdditive; // 0x610(0x58)
	char pad_668[0x8]; // 0x668(0x08)
	struct FWeaponAnimItemSeq CarriedCharacterIdleAdditive; // 0x670(0x58)
	char pad_6C8[0x8]; // 0x6c8(0x08)
	struct FWeaponAnimItemSeq CarriedBoxIdleAdditive; // 0x6d0(0x58)
	char pad_728[0x8]; // 0x728(0x08)
	struct FWeaponAnimItemBS ImpendingDeathBreakthroughBS; // 0x730(0x58)
	char pad_788[0x8]; // 0x788(0x08)
	struct FWeaponAnimItemBS LeanPeekAdditiveBS; // 0x790(0x58)
	char pad_7E8[0x8]; // 0x7e8(0x08)
	struct FWeaponAnimItemBS AimOffsetBS; // 0x7f0(0x58)
	char pad_848[0x8]; // 0x848(0x08)
	struct FWeaponAnimItemBS ADSLeanBS; // 0x850(0x58)
	char pad_8A8[0x8]; // 0x8a8(0x08)
	struct FWeaponAnimItemSeq JumpStart; // 0x8b0(0x58)
	char pad_908[0x8]; // 0x908(0x08)
	struct FWeaponAnimItemSeq JumpDown; // 0x910(0x58)
	char pad_968[0x8]; // 0x968(0x08)
	struct FWeaponAnimItemSeq JumpLand; // 0x970(0x58)
	char pad_9C8[0x8]; // 0x9c8(0x08)
	struct FWeaponAnimItemSeq FallHigh; // 0x9d0(0x58)
	char pad_A28[0x8]; // 0xa28(0x08)
	struct FWeaponAnimItemSeq FallingHigh; // 0xa30(0x58)
	char pad_A88[0x8]; // 0xa88(0x08)
	struct FWeaponAnimItemSeq SlideTackleStart; // 0xa90(0x58)
	char pad_AE8[0x8]; // 0xae8(0x08)
	struct FWeaponAnimItemSeq SlideTackleLoop; // 0xaf0(0x58)
	char pad_B48[0x8]; // 0xb48(0x08)
	struct FWeaponAnimItemSeq SlideTackleEnd; // 0xb50(0x58)
	char pad_BA8[0x8]; // 0xba8(0x08)
	struct FWeaponAnimItemBS JumpStartBS; // 0xbb0(0x58)
	char pad_C08[0x8]; // 0xc08(0x08)
	struct FWeaponAnimItemBS JumpLandBS; // 0xc10(0x58)
	char pad_C68[0x8]; // 0xc68(0x08)
	struct FWeaponAnimItemBS FallingDownBS; // 0xc70(0x58)
	char pad_CC8[0x8]; // 0xcc8(0x08)
	struct FWeaponAnimItemSeq JumpLandAdd; // 0xcd0(0x58)
	char pad_D28[0x8]; // 0xd28(0x08)
	struct FWeaponAnimItemSeq IdleToAiming; // 0xd30(0x58)
	char pad_D88[0x8]; // 0xd88(0x08)
	struct FWeaponAnimItemBS AimingIdle; // 0xd90(0x58)
	char pad_DE8[0x8]; // 0xde8(0x08)
	struct FWeaponAnimItemSeq AimingIdleAdditive; // 0xdf0(0x58)
	char pad_E48[0x8]; // 0xe48(0x08)
	struct FWeaponAnimItemSeq AimingIdleStaticSeq; // 0xe50(0x58)
	char pad_EA8[0x8]; // 0xea8(0x08)
	struct FWeaponAnimItemSeq AimingToIdle; // 0xeb0(0x58)
	char pad_F08[0x8]; // 0xf08(0x08)
	struct FWeaponAnimItemSeq AimLeftHandAdditivePose; // 0xf10(0x58)
	char pad_F68[0x8]; // 0xf68(0x08)
	struct FWeaponAnimItemSeq IdleAdditive; // 0xf70(0x58)
	char pad_FC8[0x8]; // 0xfc8(0x08)
	struct FWeaponAnimItemSeq Climb; // 0xfd0(0x58)
	char pad_1028[0x8]; // 0x1028(0x08)
	struct FWeaponAnimItemSeq Sprint2Idle; // 0x1030(0x58)
	char pad_1088[0x8]; // 0x1088(0x08)
	struct FWeaponAnimItemSeq IdletoSprint; // 0x1090(0x58)
	char pad_10E8[0x8]; // 0x10e8(0x08)
	struct FWeaponAnimItemSeq SprintStart; // 0x10f0(0x58)
	char pad_1148[0x8]; // 0x1148(0x08)
	struct FWeaponAnimItemSeq SprintStop; // 0x1150(0x58)
	char pad_11A8[0x8]; // 0x11a8(0x08)
	struct FWeaponAnimItemSeq RunStart; // 0x11b0(0x58)
	char pad_1208[0x8]; // 0x1208(0x08)
	struct FWeaponAnimItemSeq RunStop; // 0x1210(0x58)
	char pad_1268[0x8]; // 0x1268(0x08)
	struct FWeaponAnimItemSeq RunPose; // 0x1270(0x58)
	char pad_12C8[0x8]; // 0x12c8(0x08)
	struct FWeaponAnimItemSeq SprintPose; // 0x12d0(0x58)
	char pad_1328[0x8]; // 0x1328(0x08)
	struct FWeaponAnimItemSeq SprintOffsetPose; // 0x1330(0x58)
	char pad_1388[0x8]; // 0x1388(0x08)
	struct FWeaponAnimItemSeq Walk2Run; // 0x1390(0x58)
	char pad_13E8[0x8]; // 0x13e8(0x08)
	struct FWeaponAnimItemSeq Run2Walk; // 0x13f0(0x58)
	char pad_1448[0x8]; // 0x1448(0x08)
	struct FWeaponAnimItemSeq Walk2Sprint; // 0x1450(0x58)
	char pad_14A8[0x8]; // 0x14a8(0x08)
	struct FWeaponAnimItemSeq Sprint2Walk; // 0x14b0(0x58)
	char pad_1508[0x8]; // 0x1508(0x08)
	struct FWeaponAnimItemSeq Run2Sprint; // 0x1510(0x58)
	char pad_1568[0x8]; // 0x1568(0x08)
	struct FWeaponAnimItemSeq Sprint2SuperSprint; // 0x1570(0x58)
	char pad_15C8[0x8]; // 0x15c8(0x08)
	struct FWeaponAnimItemSeq SuperSprint2Sprint; // 0x15d0(0x58)
	char pad_1628[0x8]; // 0x1628(0x08)
	struct FWeaponAnimItemSeq LocomotionIdle; // 0x1630(0x58)
	char pad_1688[0x8]; // 0x1688(0x08)
	struct FWeaponAnimItemSeq SuperSprintPose; // 0x1690(0x58)
	char pad_16E8[0x8]; // 0x16e8(0x08)
	struct FWeaponAnimItemSeq SuperSprint2Walk; // 0x16f0(0x58)
	char pad_1748[0x8]; // 0x1748(0x08)
	struct FWeaponAnimItemSeq Run2SuperSprint; // 0x1750(0x58)
	char pad_17A8[0x8]; // 0x17a8(0x08)
	struct FWeaponAnimItemSeq SuperSprintOffsetPose; // 0x17b0(0x58)
	char pad_1808[0x8]; // 0x1808(0x08)
	struct FWeaponAnimItemSeq RelaxIdleAdditive; // 0x1810(0x58)
	char pad_1868[0x8]; // 0x1868(0x08)
	struct FWeaponAnimItemSeq SafeHouseWalk2Run; // 0x1870(0x58)
	char pad_18C8[0x8]; // 0x18c8(0x08)
	struct FWeaponAnimItemSeq SafeHouseRun2Walk; // 0x18d0(0x58)
	char pad_1928[0x8]; // 0x1928(0x08)
	struct FWeaponAnimItemSeq SafeHouseWalk2Sprint; // 0x1930(0x58)
	char pad_1988[0x8]; // 0x1988(0x08)
	struct FWeaponAnimItemSeq SafeHouseSprint2Walk; // 0x1990(0x58)
	char pad_19E8[0x8]; // 0x19e8(0x08)
	struct FWeaponAnimItemSeq SafeHouseRun2Sprint; // 0x19f0(0x58)
	char pad_1A48[0x8]; // 0x1a48(0x08)
	struct FWeaponAnimItemSeq SafeHouseRunPose; // 0x1a50(0x58)
	char pad_1AA8[0x8]; // 0x1aa8(0x08)
	struct FWeaponAnimItemSeq SafeHouseSprintPose; // 0x1ab0(0x58)
	char pad_1B08[0x8]; // 0x1b08(0x08)
	struct FWeaponAnimItemSeq SafeHouseSprintOffsetPose; // 0x1b10(0x58)
	char pad_1B68[0x8]; // 0x1b68(0x08)
	struct FWeaponAnimItemSeq SpecialDeath; // 0x1b70(0x58)
	char pad_1BC8[0x8]; // 0x1bc8(0x08)
	struct FWeaponAnimItemSeq Idle2ImpendingDeath; // 0x1bd0(0x58)
	char pad_1C28[0x8]; // 0x1c28(0x08)
	struct FWeaponAnimItemSeq Idle2ImpendingDeath_Breakthrough; // 0x1c30(0x58)
	char pad_1C88[0x8]; // 0x1c88(0x08)
	struct FWeaponAnimItemSeq Idle2Death; // 0x1c90(0x58)
	char pad_1CE8[0x8]; // 0x1ce8(0x08)
	struct FWeaponAnimItemMontage ImpendingDeathRequestRescueMontage; // 0x1cf0(0xb8)
	char pad_1DA8[0x8]; // 0x1da8(0x08)
	struct FWeaponAnimItemMontage TurnLeftMontage; // 0x1db0(0xb8)
	char pad_1E68[0x8]; // 0x1e68(0x08)
	struct FWeaponAnimItemMontage TurnRightMontage; // 0x1e70(0xb8)
	char pad_1F28[0x8]; // 0x1f28(0x08)
	struct FWeaponAnimItemSeq TurnRight90; // 0x1f30(0x58)
	char pad_1F88[0x8]; // 0x1f88(0x08)
	struct FWeaponAnimItemSeq TurnLeft90; // 0x1f90(0x58)
	char pad_1FE8[0x8]; // 0x1fe8(0x08)
	struct FWeaponAnimItemSeq TransitionCrouchToProne; // 0x1ff0(0x58)
	char pad_2048[0x8]; // 0x2048(0x08)
	struct FWeaponAnimItemSeq TransitionCrouchToStand; // 0x2050(0x58)
	char pad_20A8[0x8]; // 0x20a8(0x08)
	struct FWeaponAnimItemSeq TransitionProneToCrouch; // 0x20b0(0x58)
	char pad_2108[0x8]; // 0x2108(0x08)
	struct FWeaponAnimItemSeq TransitionProneToStand; // 0x2110(0x58)
	char pad_2168[0x8]; // 0x2168(0x08)
	struct FWeaponAnimItemSeq TransitionProneToStandSprint; // 0x2170(0x58)
	char pad_21C8[0x8]; // 0x21c8(0x08)
	struct FWeaponAnimItemSeq TransitionProneToStandRun; // 0x21d0(0x58)
	char pad_2228[0x8]; // 0x2228(0x08)
	struct FWeaponAnimItemSeq TransitionStandToCrouch; // 0x2230(0x58)
	char pad_2288[0x8]; // 0x2288(0x08)
	struct FWeaponAnimItemSeq TransitionStandToProne; // 0x2290(0x58)
	char pad_22E8[0x8]; // 0x22e8(0x08)
	struct FWeaponAnimItemBS TransitionStandToProneBS; // 0x22f0(0x58)
	char pad_2348[0x8]; // 0x2348(0x08)
	struct FWeaponAnimItemSeq TransitionRunStartF; // 0x2350(0x58)
	char pad_23A8[0x8]; // 0x23a8(0x08)
	struct FWeaponAnimItemSeq TransitionRunStartR; // 0x23b0(0x58)
	char pad_2408[0x8]; // 0x2408(0x08)
	struct FWeaponAnimItemSeq TransitionRunStartB; // 0x2410(0x58)
	char pad_2468[0x8]; // 0x2468(0x08)
	struct FWeaponAnimItemSeq TransitionRunStartL; // 0x2470(0x58)
	char pad_24C8[0x8]; // 0x24c8(0x08)
	struct FWeaponAnimItemSeq TransitionRunStartFL; // 0x24d0(0x58)
	char pad_2528[0x8]; // 0x2528(0x08)
	struct FWeaponAnimItemSeq TransitionRunStartFR; // 0x2530(0x58)
	char pad_2588[0x8]; // 0x2588(0x08)
	struct FWeaponAnimItemSeq TransitionRunStartBL; // 0x2590(0x58)
	char pad_25E8[0x8]; // 0x25e8(0x08)
	struct FWeaponAnimItemSeq TransitionRunStartBR; // 0x25f0(0x58)
	char pad_2648[0x8]; // 0x2648(0x08)
	struct FWeaponAnimItemSeq TransitionRunPivotF; // 0x2650(0x58)
	char pad_26A8[0x8]; // 0x26a8(0x08)
	struct FWeaponAnimItemSeq TransitionRunPivotR; // 0x26b0(0x58)
	char pad_2708[0x8]; // 0x2708(0x08)
	struct FWeaponAnimItemSeq TransitionRunPivotB; // 0x2710(0x58)
	char pad_2768[0x8]; // 0x2768(0x08)
	struct FWeaponAnimItemSeq TransitionRunPivotL; // 0x2770(0x58)
	char pad_27C8[0x8]; // 0x27c8(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopF; // 0x27d0(0x58)
	char pad_2828[0x8]; // 0x2828(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopR; // 0x2830(0x58)
	char pad_2888[0x8]; // 0x2888(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopB; // 0x2890(0x58)
	char pad_28E8[0x8]; // 0x28e8(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopL; // 0x28f0(0x58)
	char pad_2948[0x8]; // 0x2948(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopFL; // 0x2950(0x58)
	char pad_29A8[0x8]; // 0x29a8(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopFR; // 0x29b0(0x58)
	char pad_2A08[0x8]; // 0x2a08(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopBL; // 0x2a10(0x58)
	char pad_2A68[0x8]; // 0x2a68(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopBR; // 0x2a70(0x58)
	char pad_2AC8[0x8]; // 0x2ac8(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopB_R; // 0x2ad0(0x58)
	char pad_2B28[0x8]; // 0x2b28(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopF_R; // 0x2b30(0x58)
	char pad_2B88[0x8]; // 0x2b88(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopR_R; // 0x2b90(0x58)
	char pad_2BE8[0x8]; // 0x2be8(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopL_R; // 0x2bf0(0x58)
	char pad_2C48[0x8]; // 0x2c48(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopFL_R; // 0x2c50(0x58)
	char pad_2CA8[0x8]; // 0x2ca8(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopFR_R; // 0x2cb0(0x58)
	char pad_2D08[0x8]; // 0x2d08(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopBL_R; // 0x2d10(0x58)
	char pad_2D68[0x8]; // 0x2d68(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopBR_R; // 0x2d70(0x58)
	char pad_2DC8[0x8]; // 0x2dc8(0x08)
	struct FWeaponAnimItemSeq TransitionSprintStartF; // 0x2dd0(0x58)
	char pad_2E28[0x8]; // 0x2e28(0x08)
	struct FWeaponAnimItemSeq TransitionRun2SprintF; // 0x2e30(0x58)
	char pad_2E88[0x8]; // 0x2e88(0x08)
	struct FWeaponAnimItemSeq TransitionRun2SprintFNew; // 0x2e90(0x58)
	char pad_2EE8[0x8]; // 0x2ee8(0x08)
	struct FWeaponAnimItemSeq TransitionSprintStopF; // 0x2ef0(0x58)
	char pad_2F48[0x8]; // 0x2f48(0x08)
	struct FWeaponAnimItemSeq TransitionSprintStopFL; // 0x2f50(0x58)
	char pad_2FA8[0x8]; // 0x2fa8(0x08)
	struct FWeaponAnimItemSeq TransitionSprintStopFR; // 0x2fb0(0x58)
	char pad_3008[0x8]; // 0x3008(0x08)
	struct FWeaponAnimItemSeq TransitionLandSprintF; // 0x3010(0x58)
	char pad_3068[0x8]; // 0x3068(0x08)
	struct FWeaponAnimItemSeq TransitionLandRunF; // 0x3070(0x58)
	char pad_30C8[0x8]; // 0x30c8(0x08)
	struct FWeaponAnimItemGameplayTagMap OperationMap; // 0x30d0(0x58)
	char pad_3128[0x8]; // 0x3128(0x08)
	struct FWeaponAnimItemSeq AdditivePose; // 0x3130(0x58)
	char pad_3188[0x8]; // 0x3188(0x08)
	struct FWeaponAnimItemBS HitBS; // 0x3190(0x58)
	char pad_31E8[0x8]; // 0x31e8(0x08)
	struct FWeaponAnimItemSeq AimFireIdlePose; // 0x31f0(0x58)
	char pad_3248[0x8]; // 0x3248(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_ClimbOne; // 0x3250(0x58)
	char pad_32A8[0x8]; // 0x32a8(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_VaultOne; // 0x32b0(0x58)
	char pad_3308[0x8]; // 0x3308(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_RunVaultOne; // 0x3310(0x58)
	char pad_3368[0x8]; // 0x3368(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_RunClimbOne; // 0x3370(0x58)
	char pad_33C8[0x8]; // 0x33c8(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_ClimbTwo; // 0x33d0(0x58)
	char pad_3428[0x8]; // 0x3428(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_VaultTwo; // 0x3430(0x58)
	char pad_3488[0x8]; // 0x3488(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_RunVaultTwo; // 0x3490(0x58)
	char pad_34E8[0x8]; // 0x34e8(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_RunClimbTwo; // 0x34f0(0x58)
	char pad_3548[0x8]; // 0x3548(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_ClimbThree; // 0x3550(0x58)
	char pad_35A8[0x8]; // 0x35a8(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_VaultThree; // 0x35b0(0x58)
	char pad_3608[0x8]; // 0x3608(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_RunVaultThree; // 0x3610(0x58)
	char pad_3668[0x8]; // 0x3668(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_RunClimbThree; // 0x3670(0x58)
	char pad_36C8[0x8]; // 0x36c8(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_ClimbFour; // 0x36d0(0x58)
	char pad_3728[0x8]; // 0x3728(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_VaultFour; // 0x3730(0x58)
	char pad_3788[0x8]; // 0x3788(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_RunVaultFour; // 0x3790(0x58)
	char pad_37E8[0x8]; // 0x37e8(0x08)
	struct FWeaponAnimItemSeq ClimbVaultType_RunClimbFour; // 0x37f0(0x58)
	char pad_3848[0x8]; // 0x3848(0x08)
	struct FWeaponAnimItemSeq StartZipline; // 0x3850(0x58)
	char pad_38A8[0x8]; // 0x38a8(0x08)
	struct FWeaponAnimItemSeq LoopZipline; // 0x38b0(0x58)
	char pad_3908[0x8]; // 0x3908(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CharacterLeftArmAnimTableRow
// Size: 0x730 (Inherited: 0x10)
struct FCharacterLeftArmAnimTableRow : public FWeaponAnimTableRowBase {
public:

	enum class ECharacterLeftArmAnimType AnimType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FWeaponAnimItemSeqBaseForPack Anim; // 0x18(0x300)
	char pad_318[0x8]; // 0x318(0x08)
	struct FWeaponAnimItemSeqBaseForPack AnimRightHand; // 0x320(0x300)
	char pad_620[0x8]; // 0x620(0x08)
	struct TMap<uint64_t, struct FWeaponAnimItemSeqBaseForPack> WeaponAnimMap; // 0x628(0x50)
	struct TMap<uint64_t, struct FWeaponAnimItemSeqBaseForPack> WeaponAnimRightHandMap; // 0x678(0x50)
	float BlendInTime; // 0x6c8(0x04)
	float BlendOutTime; // 0x6cc(0x04)
	float ServerFSMTime; // 0x6d0(0x04)
	char pad_6D4[0x4]; // 0x6d4(0x04)
	struct TMap<int8_t, int8_t> MontagePlaySectionLinks; // 0x6d8(0x50)
	enum class EAnimationPlayType LeftAnimationPlayType; // 0x728(0x01)
	enum class EAnimationPlayType RightAnimationPlayType; // 0x729(0x01)
	enum class EAnimationPlayType RightAnimationPlayTypeFPP; // 0x72a(0x01)
	bool bUseRightAnimationPlayTypeFPP; // 0x72b(0x01)
	int8_t MontageStopGoToSectionIndex; // 0x72c(0x01)
	bool ArmFractureUseLegAim; // 0x72d(0x01)
	char pad_72E[0x2]; // 0x72e(0x02)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CameraRollData
// Size: 0x518 (Inherited: 0x00)
struct FCameraRollData {
public:

	struct FWeaponFireShakeData FireShakeCameraRollData; // 0x00(0x468)
	float Curtime; // 0x468(0x04)
	float CurAcumulatetime; // 0x46c(0x04)
	float RandomRandomRollRate; // 0x470(0x04)
	float ExitStartValue; // 0x474(0x04)
	float ExitRandomRollRate; // 0x478(0x04)
	float RandomBulletCameraRollRate; // 0x47c(0x04)
	float RandomBulletGunRollRate; // 0x480(0x04)
	int32_t CurtimeStampIndex; // 0x484(0x04)
	float CurTargetTime; // 0x488(0x04)
	float CurRandomRoll; // 0x48c(0x04)
	float CurRandomTarget; // 0x490(0x04)
	float RandomSmoothTime; // 0x494(0x04)
	float CurRecoilTarget; // 0x498(0x04)
	float CurBulletCameraRoll; // 0x49c(0x04)
	float CurBulletGunRoll; // 0x4a0(0x04)
	float CurBulletCameraTarget; // 0x4a4(0x04)
	float CurBulletGunTarget; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	uint64_t CurrentFireId; // 0x4b0(0x08)
	struct FRotator LastFireRotator; // 0x4b8(0x0c)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct TArray<struct FRotator> CurrentFireRotator; // 0x4c8(0x10)
	struct FVector LastBulletLoc; // 0x4d8(0x0c)
	struct FVector LastCenterLoc; // 0x4e4(0x0c)
	struct FVector CurBulletLoc; // 0x4f0(0x0c)
	struct FVector CurCenterLoc; // 0x4fc(0x0c)
	float AcumulateY; // 0x508(0x04)
	char pad_50C[0x4]; // 0x50c(0x04)
	struct UCurveFloat* Curve; // 0x510(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.MuzzleLightInfoConfig
// Size: 0xb4 (Inherited: 0x00)
struct FMuzzleLightInfoConfig {
public:

	struct FMuzzleLightInfoSet MuzzleLight_Level0; // 0x00(0x3c)
	struct FMuzzleLightInfoSet MuzzleLight_Level1; // 0x3c(0x3c)
	struct FMuzzleLightInfoSet MuzzleLight_Level2; // 0x78(0x3c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageValidateInfo
// Size: 0x1f8 (Inherited: 0x00)
struct FDamageValidateInfo {
public:

	struct FVector MakerLocation; // 0x00(0x0c)
	struct FVector MakerRotation; // 0x0c(0x0c)
	struct FVector MakerInstigatorLocation; // 0x18(0x0c)
	struct FVector MakerInstigatorRotation; // 0x24(0x0c)
	struct FVector TakerLocation; // 0x30(0x0c)
	struct FVector TakerRotation; // 0x3c(0x0c)
	float StartTime; // 0x48(0x04)
	float DamageTime; // 0x4c(0x04)
	struct FRequestPointHitActionParam HitActionParam; // 0x50(0x1a8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ItemMarkingInfo
// Size: 0x168 (Inherited: 0x00)
struct FItemMarkingInfo {
public:

	struct AGPCharacter* OwnerCharacter; // 0x00(0x08)
	struct AGPPlayerState* OwnerPlayerState; // 0x08(0x08)
	uint64_t OwnerPlayerUin; // 0x10(0x08)
	struct FVector MarkingLocation; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct AActor* MarkedActor; // 0x28(0x08)
	uint64_t ItemID; // 0x30(0x08)
	uint64_t ItemGid; // 0x38(0x08)
	int32_t ContainerOwnerSearchedMaxQuality; // 0x40(0x04)
	enum class EMarkingItemType MarkingItemType; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FGPWeaponDescInfo WeaponDescInfo; // 0x48(0x108)
	float MarkTime; // 0x150(0x04)
	float ConfigValidTime; // 0x154(0x04)
	bool bNeedHide; // 0x158(0x01)
	bool bResponded; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
	uint64_t RespondToPlayerUin; // 0x160(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageRecordViewStruct
// Size: 0x198 (Inherited: 0x00)
struct FDamageRecordViewStruct {
public:

	uint64_t Guid; // 0x00(0x08)
	struct TArray<struct FDamageRecordViewItem> RecordViewItems; // 0x08(0x10)
	struct TArray<struct FDamageRecordViewItemNameMap> NameMap; // 0x18(0x10)
	struct TArray<char> CharacterPartState; // 0x28(0x10)
	uint64_t ArmorItemId; // 0x38(0x08)
	float ArmorHealth; // 0x40(0x04)
	float ArmorHealthMax; // 0x44(0x04)
	float SrcArmorHealthMax; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	uint64_t HelmetItemId; // 0x50(0x08)
	float HelmetArmorHealth; // 0x58(0x04)
	float HelmetArmorHealthMax; // 0x5c(0x04)
	float SrcHelmetArmorHealthMax; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FModularWeaponInfo LastDamageModularWeaponInfo; // 0x68(0x128)
	char pad_190[0x8]; // 0x190(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponObjectPoolProxyData
// Size: 0x148 (Inherited: 0x00)
struct FWeaponObjectPoolProxyData {
public:

	struct TArray<struct UObject*> InUseObjects; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
	struct FModularWeaponInfo WeaponInfo; // 0x18(0x128)
	struct UClass* TemplateClass; // 0x140(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamagePointAttackValue
// Size: 0x120 (Inherited: 0x68)
struct FDamagePointAttackValue : public FWeaponDataBase {
public:

	uint64_t AttackerValueId; // 0x68(0x08)
	float Damage; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	uint64_t VehicleArmorDamageId; // 0x78(0x08)
	float VehicleDamage; // 0x80(0x04)
	float HealthDamage; // 0x84(0x04)
	float ArmorDamage; // 0x88(0x04)
	int32_t PenetrateLevel; // 0x8c(0x04)
	uint32_t AddCharcaterBuffId; // 0x90(0x04)
	uint32_t AddVehicleBuffId; // 0x94(0x04)
	int32_t AttackLevelDetailGroup; // 0x98(0x04)
	float HeadDamageRate; // 0x9c(0x04)
	float ThoraxDamageRate; // 0xa0(0x04)
	float ThoraxUpperDamageRate; // 0xa4(0x04)
	float LegDamageRate; // 0xa8(0x04)
	float LegUpperDamageRate; // 0xac(0x04)
	float ArmDamageRate; // 0xb0(0x04)
	float ArmUpperDamageRate; // 0xb4(0x04)
	float ThrowBlockingDamageRate; // 0xb8(0x04)
	bool bOverrideBossValue; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct FBossOverridePointDamageValue BossOverrideValueParam; // 0xc0(0x0c)
	bool bRealDamage; // 0xcc(0x01)
	bool bAlwaysDamage; // 0xcd(0x01)
	char pad_CE[0x2]; // 0xce(0x02)
	struct FGameplayTagContainer DamageTags; // 0xd0(0x20)
	struct FSoftObjectPath KillIconPath; // 0xf0(0x18)
	struct FSoftObjectPath DeathInfoIconPath; // 0x108(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamagePhysicalValue
// Size: 0xc0 (Inherited: 0x68)
struct FDamagePhysicalValue : public FWeaponDataBase {
public:

	uint64_t PhysicalValueId; // 0x68(0x08)
	float Damage; // 0x70(0x04)
	int32_t PenetrateLevel; // 0x74(0x04)
	float VehicleDamage; // 0x78(0x04)
	bool IgnoreImpendingDeath; // 0x7c(0x01)
	bool bOverrideBossValue; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	struct FBossOverridePhysicalDamageValue BossOverrideValueParam; // 0x80(0x08)
	bool bRealDamage; // 0x88(0x01)
	bool bAlwaysDamage; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct FSoftObjectPath KillIconPath; // 0x90(0x18)
	struct FSoftObjectPath DeathInfoIconPath; // 0xa8(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageExplodeValue
// Size: 0x150 (Inherited: 0x68)
struct FDamageExplodeValue : public FWeaponDataBase {
public:

	uint64_t ExplodeValueId; // 0x68(0x08)
	float ExplodeRadius; // 0x70(0x04)
	float Damage; // 0x74(0x04)
	float VehicleDamage; // 0x78(0x04)
	int32_t PenetrateLevel; // 0x7c(0x04)
	int32_t AttackLevelDetailGroup; // 0x80(0x04)
	float HealthHeadDamageRate; // 0x84(0x04)
	float HealthThoraxDamageRate; // 0x88(0x04)
	float HealthAbdomenDamageRate; // 0x8c(0x04)
	float HealthLegDamageRate; // 0x90(0x04)
	float HealthArmDamageRate; // 0x94(0x04)
	float HealthLegRightDamageRate; // 0x98(0x04)
	float HealthArmRightDamageRate; // 0x9c(0x04)
	uint64_t VehicleArmorDamageId; // 0xa0(0x08)
	char IsRangeAttenuation : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	float FullExplodeRadius; // 0xac(0x04)
	float MinDamage; // 0xb0(0x04)
	float MinVehicleDamage; // 0xb4(0x04)
	bool bOverrideAIDamage; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float AIDamage; // 0xbc(0x04)
	float MinAIDamage; // 0xc0(0x04)
	bool bOverrideBossValue; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct FBossOverrideExplodeDamageValue BossOverrideValueParam; // 0xc8(0x10)
	char IsThroughBunker : 1; // 0xd8(0x01)
	char pad_D8_1 : 7; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float BunkerDamageRate; // 0xdc(0x04)
	enum class EDamageExplodeBlockCheckType DamageExplodeBlockCheckType; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float CheckBlockDistOffset; // 0xe4(0x04)
	enum class EGPDamageEnableType EnableDamageToFriend; // 0xe8(0x01)
	enum class EGPDamageEnableType EnableDamageToSelf; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	float FriendDamageRate; // 0xec(0x04)
	bool bRealDamage; // 0xf0(0x01)
	bool bAlwaysDamage; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
	struct FSoftObjectPath KillIconPath; // 0xf8(0x18)
	struct FSoftObjectPath DeathInfoIconPath; // 0x110(0x18)
	bool bApplyBuffWhileMakingDamage; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct TArray<struct FRangeBuffParam> OriginDamageIntervalBuffMap; // 0x130(0x10)
	struct TArray<struct FRangeBuffParam> RealDamageIntervalBuffMap; // 0x140(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FiringAnimConfig_Single
// Size: 0x160 (Inherited: 0x68)
struct FFiringAnimConfig_Single : public FWeaponDataBase {
public:

	uint16_t FiringAnimId; // 0x68(0x02)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct FFiringAnimParam_AdditiveAnimBase AdditiveAnim_ADS; // 0x70(0x80)
	struct FEndFireSpring EndFireSpring; // 0xf0(0x64)
	char pad_154[0xc]; // 0x154(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.HoldBreathConfig
// Size: 0xb8 (Inherited: 0x68)
struct FHoldBreathConfig : public FWeaponDataBase {
public:

	uint64_t HoldBreathId; // 0x68(0x08)
	struct FWeaponBreathConfig WeaponBreathConfig; // 0x70(0x14)
	float InterpSpeed; // 0x84(0x04)
	float StandBreathFactor; // 0x88(0x04)
	float CrouchBreathFactor; // 0x8c(0x04)
	float ProneBreathFactor; // 0x90(0x04)
	float MiniShakeStandBreathFactor; // 0x94(0x04)
	float MiniShakeCrouchBreathFactor; // 0x98(0x04)
	float MiniShakeProneBreathFactor; // 0x9c(0x04)
	struct FVector2D RecoilScale; // 0xa0(0x08)
	float LuaDisplayBreathFactor; // 0xa8(0x04)
	float LuaDisplayBreathUnstableFactor; // 0xac(0x04)
	float LuaDisplayBreathUIFactor; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataAttribute
// Size: 0x638 (Inherited: 0x68)
struct FWeaponDataAttribute : public FWeaponDataBase {
public:

	uint64_t RecID; // 0x68(0x08)
	struct TArray<enum class EGPWeaponFiringMode> SuppportFireModes; // 0x70(0x10)
	enum class EGPWeaponFiringMode DefaultFireMode; // 0x80(0x01)
	enum class EGPWeaponFiringRateMode FireRateMode; // 0x81(0x01)
	enum class EGPWeaponFireSocketMode FireSocketMode; // 0x82(0x01)
	char pad_83[0x1]; // 0x83(0x01)
	float FireInterval; // 0x84(0x04)
	float FireCD; // 0x88(0x04)
	float FireDelayTime; // 0x8c(0x04)
	float BurstFireCD; // 0x90(0x04)
	float BurstInterval; // 0x94(0x04)
	float BurstFireInterval; // 0x98(0x04)
	char BurstFireBulletCount; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float ChamberTime; // 0xa0(0x04)
	float AutoFireSingleInterval; // 0xa4(0x04)
	float AutoFireBurstInterval; // 0xa8(0x04)
	bool bEnableSprintAutoDelayFireOnce; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float SingleFireTolerant; // 0xb0(0x04)
	bool bSupportFireStartRotFromView; // 0xb4(0x01)
	bool bEnableIgnoreTeammateBlock_SOLMode; // 0xb5(0x01)
	bool bEnableIgnoreTeammateBlock_MPMode; // 0xb6(0x01)
	bool CanAddAmmo; // 0xb7(0x01)
	char WeaponAmmoCost; // 0xb8(0x01)
	char ProjectileNumPerShot; // 0xb9(0x01)
	char MaxValidBulletNumPerShot; // 0xba(0x01)
	char pad_BB[0x1]; // 0xbb(0x01)
	uint16_t WeaponClipAmmoCount; // 0xbc(0x02)
	uint16_t MaxCarriedAmmoCount; // 0xbe(0x02)
	char AmmoType; // 0xc0(0x01)
	bool UseItemAmmoLogic; // 0xc1(0x01)
	enum class EWeaponAmmoDamageType AmmoDamageType; // 0xc2(0x01)
	bool EnableAmmoTip; // 0xc3(0x01)
	float LowAmmoPresent; // 0xc4(0x04)
	bool bEnableAutoModifyAmmo; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float AutoModifyAmmoInterval; // 0xcc(0x04)
	int16_t DeltaAmmoOnce; // 0xd0(0x02)
	enum class EGPWeaponChangeClipMode ChangeClipMode; // 0xd2(0x01)
	char pad_D3[0x1]; // 0xd3(0x01)
	uint16_t ChangeClipMaxReloadedOnce; // 0xd4(0x02)
	char pad_D6[0x2]; // 0xd6(0x02)
	float ChangeClipTime; // 0xd8(0x04)
	float ChangeClipTimeWhenEmpty; // 0xdc(0x04)
	float ChangeClipTimeBackground; // 0xe0(0x04)
	bool bEnableAimOnReloading; // 0xe4(0x01)
	bool bAutoReloadWhenEmpty; // 0xe5(0x01)
	enum class EWeaponAutoReloadOption AutoReloadOption; // 0xe6(0x01)
	char pad_E7[0x1]; // 0xe7(0x01)
	float HeatIncreasePerFire; // 0xe8(0x04)
	float HeatDecreasePerSecond; // 0xec(0x04)
	float OverHeatCDSeconds; // 0xf0(0x04)
	float EffectOverHeatMin; // 0xf4(0x04)
	float EquipTime; // 0xf8(0x04)
	float UnEquipTime; // 0xfc(0x04)
	float FastEquipTime; // 0x100(0x04)
	float FastUnEquipTime; // 0x104(0x04)
	float FirstEquipTime; // 0x108(0x04)
	bool HadFirstEquipAnim; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	int64_t CharacterStateId; // 0x110(0x08)
	float IK3PLeftShoulerPitch; // 0x118(0x04)
	float IK3PLeftArmYaw; // 0x11c(0x04)
	int64_t WaistShootCrossHairId; // 0x120(0x08)
	int64_t WaistShootSpreadId; // 0x128(0x08)
	int64_t WaistShootRecoilId; // 0x130(0x08)
	int64_t AimAssistorId; // 0x138(0x08)
	int64_t AimAssistorIdForMPMode; // 0x140(0x08)
	int64_t AimingId; // 0x148(0x08)
	uint16_t SideAimingId; // 0x150(0x02)
	char pad_152[0x2]; // 0x152(0x02)
	struct FWeaponCameraRecoverConfig CameraRecover; // 0x154(0x28)
	char pad_17C[0x4]; // 0x17c(0x04)
	int64_t BulletFlyingId; // 0x180(0x08)
	int64_t BulletFlyingId_Breakthrough; // 0x188(0x08)
	int64_t AttackerValueId; // 0x190(0x08)
	struct TArray<struct FWeaponDataExtraAttackerValue> ExtraAttackerValueId; // 0x198(0x10)
	float SprintToFireSpeed; // 0x1a8(0x04)
	float SuperSprintToFireSpeed; // 0x1ac(0x04)
	float ReturnSprintInterval; // 0x1b0(0x04)
	int32_t MovementSpeedID; // 0x1b4(0x04)
	int32_t BattlefieldMovementSpeedID; // 0x1b8(0x04)
	float ChangeSpeedScaleWhenHit; // 0x1bc(0x04)
	float CameraSwayHitScale; // 0x1c0(0x04)
	float GunSwayHitScale; // 0x1c4(0x04)
	float CameraSwayBeHitScale; // 0x1c8(0x04)
	float GunSwayBeHitScale; // 0x1cc(0x04)
	float GunSwayBeHitScale_Mobile; // 0x1d0(0x04)
	float AimingIdleScale; // 0x1d4(0x04)
	float AimingIdleScale_Mobile; // 0x1d8(0x04)
	float MiniShakeScale; // 0x1dc(0x04)
	int64_t BeHitCameraMoveId; // 0x1e0(0x08)
	float BeHitCameraMoveScale; // 0x1e8(0x04)
	float BeHitWeaponShakeScale; // 0x1ec(0x04)
	float SingleSuppressValue; // 0x1f0(0x04)
	float ToggleSuppressValueMax; // 0x1f4(0x04)
	bool CanEquipPerk; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	float PerkCost; // 0x1fc(0x04)
	int64_t ViewId; // 0x200(0x08)
	struct TMap<char, float> DisplayAttrValues; // 0x208(0x50)
	struct TMap<char, float> BaseMainAttributeValues; // 0x258(0x50)
	int64_t ShotDistance; // 0x2a8(0x08)
	float DeltaTime2TriggerChanceScale; // 0x2b0(0x04)
	float CdTime; // 0x2b4(0x04)
	float RandomFailAddChance; // 0x2b8(0x04)
	float RescueTimeIncrement; // 0x2bc(0x04)
	float RescueDeathTimeIncrement; // 0x2c0(0x04)
	char pad_2C4[0x374]; // 0x2c4(0x374)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponSocketTransform
// Size: 0xc0 (Inherited: 0x68)
struct FWeaponSocketTransform : public FWeaponDataBase {
public:

	uint64_t ID; // 0x68(0x08)
	struct TMap<struct FName, struct FAnimSocketTransformInfo> TransformMap; // 0x70(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAppearanceForCharacter
// Size: 0x4f8 (Inherited: 0x68)
struct FWeaponAppearanceForCharacter : public FWeaponDataBase {
public:

	uint64_t CharacterConfigId; // 0x68(0x08)
	struct FName CharacterName; // 0x70(0x08)
	struct FWeaponAppearanceForCharacterItem NormalState; // 0x78(0x240)
	struct FWeaponAppearanceForCharacterItem DoubleGunState; // 0x2b8(0x240)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAdditiveAnim
// Size: 0x110 (Inherited: 0x68)
struct FWeaponAdditiveAnim : public FWeaponDataBase {
public:

	int64_t AdditiveAnimId; // 0x68(0x08)
	char bRotateByCenterPoint : 1; // 0x70(0x01)
	char bRotateByHoldPoint : 1; // 0x70(0x01)
	char pad_70_2 : 6; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FVector HoldPointOffset; // 0x74(0x0c)
	char bAdditiveLeftHand : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	enum class EWeaponAdditiveAnimTriggerType TriggerType; // 0x81(0x01)
	char bDebugGraph : 1; // 0x82(0x01)
	char bEnable : 1; // 0x82(0x01)
	char pad_82_2 : 6; // 0x82(0x01)
	char pad_83[0x1]; // 0x83(0x01)
	float BeginAlphaRandom; // 0x84(0x04)
	float Interval; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	/*struct TSoftObjectPtr<UCurveVector>*/char PositionCurve[0x28]; // 0x90(0x28)
	float PositionAmplitude; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	/*struct TSoftObjectPtr<UCurveVector>*/char RotationCurve[0x28]; // 0xc0(0x28)
	float RotationAmplitude; // 0xe8(0x04)
	enum class EGPWeaponEasingType BlendEasingType; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	float BlendInSeconds; // 0xf0(0x04)
	float BlendOutSeconds; // 0xf4(0x04)
	bool ImpulseInversion; // 0xf8(0x01)
	bool InitShootReinforce; // 0xf9(0x01)
	char pad_FA[0x2]; // 0xfa(0x02)
	float InitShootAmplitudeFactor; // 0xfc(0x04)
	char InitShootAmplitudeContinueNum; // 0x100(0x01)
	bool UseRandomAmplitude; // 0x101(0x01)
	char pad_102[0x2]; // 0x102(0x02)
	float RandomAmplitudeRangeMin; // 0x104(0x04)
	float RandomAmplitudeRangeMax; // 0x108(0x04)
	float WeaponPartAffectScale; // 0x10c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataAppearance
// Size: 0x238 (Inherited: 0x68)
struct FWeaponDataAppearance : public FWeaponDataBase {
public:

	uint64_t RecID; // 0x68(0x08)
	uint64_t SkinApperanceId; // 0x70(0x08)
	int64_t AnimId; // 0x78(0x08)
	int64_t AdditiveAnimId; // 0x80(0x08)
	int64_t WeaponAnimId; // 0x88(0x08)
	int64_t AimOnAdditiveAnimId; // 0x90(0x08)
	int64_t FXId; // 0x98(0x08)
	struct FName SoundFXId; // 0xa0(0x08)
	int64_t MeshID; // 0xa8(0x08)
	char MuzzleLightLevel; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	uint64_t HitFxId; // 0xb8(0x08)
	char HitFXCullLevel; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	uint64_t HitFeedbackAudioId; // 0xc8(0x08)
	uint64_t WeaponControlAudioId; // 0xd0(0x08)
	enum class EFiringAnimMode FiringAnimMode; // 0xd8(0x01)
	char pad_D9[0x1]; // 0xd9(0x01)
	uint16_t FiringAnimId; // 0xda(0x02)
	float RandomKickIntensity; // 0xdc(0x04)
	float SpringKickIntensity; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	uint64_t GunKickId; // 0xe8(0x08)
	float GunKickCenterOffset; // 0xf0(0x04)
	float GunKickIntensity; // 0xf4(0x04)
	uint16_t GunSwayId; // 0xf8(0x02)
	char pad_FA[0x2]; // 0xfa(0x02)
	struct FVector2D GSAimingIdle_SightOffset; // 0xfc(0x08)
	float GSAimingIdle_CameraScale; // 0x104(0x04)
	float GSAimingIdle_GunScale; // 0x108(0x04)
	struct FVector2D GSMiniShake_SightOffset; // 0x10c(0x08)
	struct FVector2D GSMovement_SightOffset; // 0x114(0x08)
	float GSMovement_CameraScale; // 0x11c(0x04)
	float GSMovement_GunScale; // 0x120(0x04)
	float ADSGunSwing_Offset; // 0x124(0x04)
	float ADSGunSwing_SightOffset; // 0x128(0x04)
	float ADSGSInMoving_Roll; // 0x12c(0x04)
	float ADSGSInMoving_Yaw; // 0x130(0x04)
	float ADSGSInMoving_YawSightOffset; // 0x134(0x04)
	float ADSGSInMoving_Offset; // 0x138(0x04)
	struct FVector2D GSHit_SightOffset; // 0x13c(0x08)
	uint16_t AnimCrouchId; // 0x144(0x02)
	uint16_t AnimGunSwingId; // 0x146(0x02)
	bool bWeaponRecoil3P; // 0x148(0x01)
	bool bReloadAttachPointToIKGun; // 0x149(0x01)
	bool bFirstEquipAttachPointToIKGun; // 0x14a(0x01)
	bool bMovementModeInstantBlend; // 0x14b(0x01)
	bool bDisableProneIdleAdditive; // 0x14c(0x01)
	bool bNeedDoubleHandOverride; // 0x14d(0x01)
	char pad_14E[0x2]; // 0x14e(0x02)
	/*struct TSoftObjectPtr<UCurveFloat>*/char LayoutCurve[0x28]; // 0x150(0x28)
	/*struct TSoftClassPtr<UObject>*/char WeaponAnimInst_1P[0x28]; // 0x178(0x28)
	/*struct TSoftClassPtr<UObject>*/char WeaponAnimInst_3P[0x28]; // 0x1a0(0x28)
	uint16_t ModelModifierId; // 0x1c8(0x02)
	char pad_1CA[0x6]; // 0x1ca(0x06)
	uint64_t FireShakerID; // 0x1d0(0x08)
	float FireAdditiveScale; // 0x1d8(0x04)
	float FireAimAdditiveScale; // 0x1dc(0x04)
	float WaistDepthOfFieldFocalDistance; // 0x1e0(0x04)
	float WaistDepthOfFieldSensorWidth; // 0x1e4(0x04)
	float WaistDepthOfFieldFstop; // 0x1e8(0x04)
	float WaistDepthOfFieldMinFstop; // 0x1ec(0x04)
	int32_t WaistDepthOfFieldBladeCount; // 0x1f0(0x04)
	float AimDepthOfFieldFocalDistance; // 0x1f4(0x04)
	float AimDepthOfFieldSensorWidth; // 0x1f8(0x04)
	float AimDepthOfFieldFstop; // 0x1fc(0x04)
	float AimDepthOfFieldMinFstop; // 0x200(0x04)
	int32_t AimDepthOfFieldBladeCount; // 0x204(0x04)
	float WaistMotionBlur; // 0x208(0x04)
	float AimMotionBlur; // 0x20c(0x04)
	struct FVector2D IKNearToFar; // 0x210(0x08)
	uint64_t HoldBreathId; // 0x218(0x08)
	bool AutoHoldBreath; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	uint64_t AudioLevelSettingID; // 0x228(0x08)
	float ScopeZoomRateScale; // 0x230(0x04)
	float ScopeZoomRateAlpha; // 0x234(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataMesh
// Size: 0xe8 (Inherited: 0x68)
struct FWeaponDataMesh : public FWeaponDataBase {
public:

	uint64_t MeshID; // 0x68(0x08)
	struct FRotator MeshRotator; // 0x70(0x0c)
	struct FVector MeshLocation; // 0x7c(0x0c)
	struct FVector2D CollisionSize; // 0x88(0x08)
	bool bAttachToCharacter; // 0x90(0x01)
	bool bSpawn3P; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
	/*struct TSet<struct FName>*/char CustomFireSocketNames[0x50]; // 0x98(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataHitFX
// Size: 0x1680 (Inherited: 0x68)
struct FWeaponDataHitFX : public FWeaponDataBase {
public:

	uint64_t HitFxId; // 0x68(0x08)
	struct FWeaponDataHitFXSurfaceAttribute AttrDefault; // 0x70(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrDefaultLandscape; // 0x170(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrFlesh; // 0x270(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrWood; // 0x370(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrMetal; // 0x470(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrSoil; // 0x570(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrGlass; // 0x670(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrGlassCrack; // 0x770(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrWater; // 0x870(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrPaper; // 0x970(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrPot; // 0xa70(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrSand; // 0xb70(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrRubber; // 0xc70(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrFabric; // 0xd70(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrSnow; // 0xe70(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrGrass; // 0xf70(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrRedSoil; // 0x1070(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrTemperedGlass; // 0x1170(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrMetalBoard; // 0x1270(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrWoodenBoard; // 0x1370(0x100)
	struct FWeaponDataHitFXSurfaceAttribute AttrQCCJS; // 0x1470(0x100)
	struct FName ExplosionDealyEffect; // 0x1570(0x08)
	struct FName TakeHitEffectLocalPlayer; // 0x1578(0x08)
	struct FName TakeHitEffectOtherPlayer; // 0x1580(0x08)
	struct TMap<enum class EHitEventType_FX, struct FName> TakeHitEffectLocalPlayerMap; // 0x1588(0x50)
	struct TMap<enum class EHitEventType_FX, struct FName> TakeHitEffectOtherPlayerMap; // 0x15d8(0x50)
	enum class EExplosionType ExplosionType; // 0x1628(0x01)
	char pad_1629[0x57]; // 0x1629(0x57)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataFX
// Size: 0xe0 (Inherited: 0x68)
struct FWeaponDataFX : public FWeaponDataBase {
public:

	uint64_t FXId; // 0x68(0x08)
	uint64_t MuzzleFlashResId; // 0x70(0x08)
	float MuzzleFlashMaxDistance3P; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	uint64_t ShellDropResId; // 0x80(0x08)
	uint64_t MuzzleTrailResId; // 0x88(0x08)
	struct TArray<struct FWeaponDataExtraFX> ExtraEffectConfig; // 0x90(0x10)
	uint64_t RealBulletTrailResId; // 0xa0(0x08)
	bool bVirtualBulletBeamEffect; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	uint64_t VirtualBulletTrailResId; // 0xb0(0x08)
	int32_t VirtualBulletTrailSpeed; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	uint64_t BulletTrailResId; // 0xc0(0x08)
	float BulletTrailTriggerProbability; // 0xc8(0x04)
	float BulletTrailSmokeProbability; // 0xcc(0x04)
	bool bSyncRealBulletTo3P; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	uint64_t HitFXResId; // 0xd8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataFXRes
// Size: 0x90 (Inherited: 0x68)
struct FWeaponDataFXRes : public FWeaponDataBase {
public:

	uint64_t FXResId; // 0x68(0x08)
	struct FName ResIdForFPP; // 0x70(0x08)
	struct FName ResIdForTPP; // 0x78(0x08)
	struct FName ResIdFor3P; // 0x80(0x08)
	struct FName ResIdForZoom; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataAnim
// Size: 0x90 (Inherited: 0x68)
struct FWeaponDataAnim : public FWeaponDataBase {
public:

	uint64_t AnimId; // 0x68(0x08)
	struct FName BasePosAnimRowNameBase; // 0x70(0x08)
	struct FName BasePosAnimRowName; // 0x78(0x08)
	struct FName BasePosAnimOverrideRowName; // 0x80(0x08)
	struct FName BasePosAnimLastOverrideName; // 0x88(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataBullet
// Size: 0x160 (Inherited: 0x68)
struct FWeaponDataBullet : public FWeaponDataBase {
public:

	uint64_t BulletId; // 0x68(0x08)
	uint64_t InitSpeedFor1P; // 0x70(0x08)
	uint64_t InitSpeedFor3P; // 0x78(0x08)
	float ZeroGravityDistance; // 0x80(0x04)
	float AirDragFactor; // 0x84(0x04)
	float GravityParam; // 0x88(0x04)
	bool bEnableHitEffectOnWeapon; // 0x8c(0x01)
	bool bSplitView; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
	float ViewLerpDuration; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FSoftClassPath BulletBPClass; // 0x98(0x18)
	struct FSoftClassPath LaserPointerReciverBulletBPClass; // 0xb0(0x18)
	enum class EProjectileFlyMode FlyMode; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float radius; // 0xcc(0x04)
	uint64_t MaxDistance; // 0xd0(0x08)
	uint64_t ValidDistance; // 0xd8(0x08)
	struct TArray<enum class EDamageAttenBlendMode> AttenModes; // 0xe0(0x10)
	struct TArray<float> AttenDistances; // 0xf0(0x10)
	bool bOverrideBaseDamage; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct TArray<float> AttenRates; // 0x108(0x10)
	struct TArray<float> AttenShowDistances; // 0x118(0x10)
	bool bDetectByAPS; // 0x128(0x01)
	bool bOverrideBulletMode; // 0x129(0x01)
	char pad_12A[0x2]; // 0x12a(0x02)
	struct FBulletModeConfig BulletModeConfig; // 0x12c(0x18)
	float ReleaseDelayOnHit; // 0x144(0x04)
	float ViewHiddenDelayOnStop; // 0x148(0x04)
	float ViewFadeoutDistance; // 0x14c(0x04)
	float WarmupTime; // 0x150(0x04)
	bool bFirstWarmBulletEffectView; // 0x154(0x01)
	char pad_155[0x3]; // 0x155(0x03)
	float MinColCheckDistSq; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataForCharacterState
// Size: 0xa0 (Inherited: 0x68)
struct FWeaponDataForCharacterState : public FWeaponDataBase {
public:

	uint64_t CharacterStateId; // 0x68(0x08)
	float SpreadScaleByWalkOrRun; // 0x70(0x04)
	float SpreadScaleByCrouch; // 0x74(0x04)
	float SpreadScaleByProne; // 0x78(0x04)
	float SpreadScaleByJump; // 0x7c(0x04)
	float SpreadScaleByImpendingDeath; // 0x80(0x04)
	float SpreadScaleBySlidingTackle; // 0x84(0x04)
	float SpreadScaleByFly; // 0x88(0x04)
	float SpreadScaleRecoverSpeed; // 0x8c(0x04)
	float RecoilHorizontalFactorByCrouch; // 0x90(0x04)
	float RecoilVerticalFactorByCrouch; // 0x94(0x04)
	float RecoilHorizontalFactorByProne; // 0x98(0x04)
	float RecoilVerticalFactorByProne; // 0x9c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataCrossHair
// Size: 0x108 (Inherited: 0x68)
struct FWeaponDataCrossHair : public FWeaponDataBase {
public:

	uint64_t CrosshairId; // 0x68(0x08)
	bool bShowCrossOnZooming; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	/*struct TSoftClassPtr<UObject>*/char CrossHairBPPath[0x28]; // 0x78(0x28)
	/*struct TSoftClassPtr<UObject>*/char CrossHairBPPath_HD[0x28]; // 0xa0(0x28)
	/*struct TSoftObjectPtr<UMaterialInstance>*/char CrossHairAssetPath[0x28]; // 0xc8(0x28)
	enum class ECrosshairScaleMode ScaleMode; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FVector2D CrossHairSize; // 0xf4(0x08)
	bool bUseSpreadArea; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	float OverallScale; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataSpread
// Size: 0x120 (Inherited: 0x68)
struct FWeaponDataSpread : public FWeaponDataBase {
public:

	uint64_t SpreadId; // 0x68(0x08)
	enum class EWeaponSpreadAreaType AreaType; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<float> AreaSize; // 0x78(0x10)
	struct FVector2D SpreadMax; // 0x88(0x08)
	struct FDistributionInSpreadFunc DistributionFunc; // 0x90(0x28)
	struct FWeaponSpreadModifierFunc ModifierFunc; // 0xb8(0x0c)
	char ModifierEnableAtShootNum; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	float ModifierEnableAtShootNumCDSeconds; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FWeaponFireSpreadItem> FireSpreadItems; // 0xd0(0x10)
	struct FVector2D FireSpreadRecoverSpeed; // 0xe0(0x08)
	/*struct TSoftObjectPtr<UCurveFloat>*/char FireSpreadExtraRecoverCurve[0x28]; // 0xe8(0x28)
	float FireSpreadFactor; // 0x110(0x04)
	float LuaDisplaySpreadFactor; // 0x114(0x04)
	float LuaDisplaySpreadUIFactor; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataRecoil
// Size: 0x398 (Inherited: 0x68)
struct FWeaponDataRecoil : public FWeaponDataBase {
public:

	uint64_t RecoilId; // 0x68(0x08)
	struct FWeaponDataRecoilItem SingleOrBurstShootRecoil; // 0x70(0x48)
	struct FWeaponDataRecoilItem ContinueShootRecoil; // 0xb8(0x48)
	struct FWeaponDataRecoilItem ContinueShootRecoilLoop; // 0x100(0x48)
	enum class EWeaponDataRecoilType RecoilType; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float RecoilEaseTime; // 0x14c(0x04)
	struct FWeaponEaseConfig PitchEase; // 0x150(0x30)
	struct FWeaponEaseConfig YawEase; // 0x180(0x30)
	struct FWeaponRecoilFactor SideAimingRecoilFactor; // 0x1b0(0x08)
	bool bUseManualCurveEffect; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct FWeaponRecoilShakeWithCurve RecoilShakePitchWithCurve; // 0x1c0(0x18)
	struct FWeaponRecoilShakeWithCurve RecoilShakeYawWithCurve; // 0x1d8(0x18)
	struct FWeaponRecoilShake RecoilShakePitch; // 0x1f0(0xb0)
	struct FWeaponRecoilShake RecoilShakeYaw; // 0x2a0(0xb0)
	struct FWeaponRecoilFactor SideAimingRecoilShakeFactor; // 0x350(0x08)
	struct FWeaponDataSpringGunKick SpringGunKick; // 0x358(0x40)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataAimAssistor
// Size: 0x1c0 (Inherited: 0x68)
struct FWeaponDataAimAssistor : public FWeaponDataBase {
public:

	uint64_t AimAssistorId; // 0x68(0x08)
	float ConeAngleBase; // 0x70(0x04)
	float ConeAnglePower; // 0x74(0x04)
	float ConeHeightBase; // 0x78(0x04)
	float ConeHeightPower; // 0x7c(0x04)
	struct TArray<struct FName> ConeFilterBones; // 0x80(0x10)
	struct TArray<struct FAssistorConeFilterBonesOfAI> ConeFilterBonesOfAI; // 0x90(0x10)
	int32_t ConeFilterActorsMaxNum; // 0xa0(0x04)
	float LockonTime; // 0xa4(0x04)
	struct FAssistorZoomingInConfig ZoomingInConfig; // 0xa8(0x48)
	struct FAssistorShootingConfig ShootingConfig; // 0xf0(0x58)
	struct FAssistorCrosshairFollowingConfig CrosshairFollowingConfig; // 0x148(0x34)
	struct FAssistorCrosshairDamping CrosshairDampingConfig; // 0x17c(0x20)
	struct FAssistorActiveTrackingConfig ActiveTrackingConfig; // 0x19c(0x24)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataAssistedAimingGroup
// Size: 0x128 (Inherited: 0x68)
struct FWeaponDataAssistedAimingGroup : public FWeaponDataBase {
public:

	uint64_t AssistedAimingGroupId; // 0x68(0x08)
	uint64_t DefaultId; // 0x70(0x08)
	uint64_t SingleId; // 0x78(0x08)
	uint64_t AutoId; // 0x80(0x08)
	uint64_t BurstId; // 0x88(0x08)
	uint64_t AimingSingleId; // 0x90(0x08)
	uint64_t AimingAutoId; // 0x98(0x08)
	uint64_t AimingBurstId; // 0xa0(0x08)
	uint64_t SingleIdPVE; // 0xa8(0x08)
	uint64_t AutoIdPVE; // 0xb0(0x08)
	uint64_t BurstIdPVE; // 0xb8(0x08)
	uint64_t AimingSingleIdPVE; // 0xc0(0x08)
	uint64_t AimingAutoIdPVE; // 0xc8(0x08)
	uint64_t AimingBurstIdPVE; // 0xd0(0x08)
	char pad_D8[0x50]; // 0xd8(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataAssistedAiming
// Size: 0x1e0 (Inherited: 0x68)
struct FWeaponDataAssistedAiming : public FWeaponDataBase {
public:

	uint64_t AssistedAimingId; // 0x68(0x08)
	float EnableDistanceMin; // 0x70(0x04)
	float EnableDistanceMax; // 0x74(0x04)
	float AssistedBoxMinRadius; // 0x78(0x04)
	float AssistedBoxMaxRadius; // 0x7c(0x04)
	float AssistedBoxVerticalScale; // 0x80(0x04)
	float PauseTimeAfterFire; // 0x84(0x04)
	float HorizontalRecoilSpeed; // 0x88(0x04)
	float VerticalRecoilSpeed; // 0x8c(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char RecoilSpeedCurve[0x28]; // 0x90(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char RecoilSpeedDistanceCurve[0x28]; // 0xb8(0x28)
	float RecoilSpeedTouchParam; // 0xe0(0x04)
	float RecoilReduceActivationTime; // 0xe4(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char VerticalRecoilReduceScaleCurve[0x28]; // 0xe8(0x28)
	enum class EGPWeaponEasingType AssistedBoxScaleEaseType; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float EnableDistanceMinForRotateSticky; // 0x114(0x04)
	float EnableDistanceMaxForRotateSticky; // 0x118(0x04)
	float AssistedBoxMinRadiusForRotateSticky; // 0x11c(0x04)
	float AssistedBoxMaxRadiusForRotateSticky; // 0x120(0x04)
	float AssistedBoxVerticalScaleForRotateSticky; // 0x124(0x04)
	float StickyParam; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char SensitivityReduceScaleByFrictionCurve[0x28]; // 0x130(0x28)
	enum class EGPWeaponEasingType AssistedBoxScaleEaseTypeForRotateSticky; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	float MagneticCDSeconds; // 0x15c(0x04)
	float MagneticEnableFocusSeconds; // 0x160(0x04)
	float EnableDistanceMinForMagneticSticky; // 0x164(0x04)
	float EnableDistanceMaxForMagneticSticky; // 0x168(0x04)
	float AssistedBoxMinRadiusForMagneticSticky; // 0x16c(0x04)
	float AssistedBoxMaxRadiusForMagneticSticky; // 0x170(0x04)
	float AssistedBoxVerticalScaleForMagneticSticky; // 0x174(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char MagneticScaleCurve[0x28]; // 0x178(0x28)
	enum class EGPWeaponEasingType AssistedBoxScaleEaseTypeForMagneticSticky; // 0x1a0(0x01)
	bool bPreventMissEnable; // 0x1a1(0x01)
	char PreventMissNumber; // 0x1a2(0x01)
	char pad_1A3[0x1]; // 0x1a3(0x01)
	float PreventMissTime; // 0x1a4(0x04)
	float PreventMissAddBulletRadiusDelta; // 0x1a8(0x04)
	float HorizontalRecoilSpeedForZoomIn; // 0x1ac(0x04)
	float VerticalRecoilSpeedForZoomIn; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	/*struct TSoftObjectPtr<UCurveFloat>*/char RecoilSpeedCurveForZoomIn[0x28]; // 0x1b8(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataSideAiming
// Size: 0x88 (Inherited: 0x68)
struct FWeaponDataSideAiming : public FWeaponDataBase {
public:

	uint16_t SideAimingId; // 0x68(0x02)
	bool bEnableSideAiming; // 0x6a(0x01)
	char pad_6B[0x1]; // 0x6b(0x01)
	float VRecoilFactor; // 0x6c(0x04)
	float HRecoilFactor; // 0x70(0x04)
	float VCamShakeFactor; // 0x74(0x04)
	float HCamShakeFactor; // 0x78(0x04)
	float GunKickRangeFactor; // 0x7c(0x04)
	float GunKickUpFactor; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataAiming
// Size: 0xc0 (Inherited: 0x68)
struct FWeaponDataAiming : public FWeaponDataBase {
public:

	uint64_t AimingId; // 0x68(0x08)
	uint64_t SpreadId; // 0x70(0x08)
	uint64_t RecoilId; // 0x78(0x08)
	float AimingOnAnimTime; // 0x80(0x04)
	float SideAimingOnAnimTime; // 0x84(0x04)
	char pad_88[0x8]; // 0x88(0x08)
	float AimingOffAnimTime; // 0x90(0x04)
	float SideAimingOffAnimTime; // 0x94(0x04)
	float ZoomRate; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	int64_t BeHitCameraMoveId; // 0xa0(0x08)
	float BeHitCameraMoveScale; // 0xa8(0x04)
	float BeHitWeaponShakeScale; // 0xac(0x04)
	bool bSupportOpenSightOnFire; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	struct FName AimHudName; // 0xb4(0x08)
	bool bDefSupportSideAiming; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponDataViewParam
// Size: 0x278 (Inherited: 0x68)
struct FWeaponDataViewParam : public FWeaponDataBase {
public:

	int64_t ViewId; // 0x68(0x08)
	float SmokeLifeMin; // 0x70(0x04)
	float SmokeLifeMax; // 0x74(0x04)
	float IdleCamOffset; // 0x78(0x04)
	float IdleWeaponFov; // 0x7c(0x04)
	float AimCamOffset; // 0x80(0x04)
	float AimWeaponFov; // 0x84(0x04)
	enum class EZoomAlignmentMode ZoomAlignmentMode; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float FovAmplifyTimeOnReloading; // 0x8c(0x04)
	float FovShrinkTimeOnReloading; // 0x90(0x04)
	float FovFactorOnReloading; // 0x94(0x04)
	float MinFovSwitchTimeOnReloading; // 0x98(0x04)
	bool bEnableFOVAnimCurveOnReloading; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	/*struct TSoftObjectPtr<UCurveFloat>*/char AimAnimCurve[0x28]; // 0xa0(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char AimZoomInAnimCurve[0x28]; // 0xc8(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char CameraFovCurve[0x28]; // 0xf0(0x28)
	/*struct TSoftObjectPtr<UCurveFloat>*/char WeaponFovCurve[0x28]; // 0x118(0x28)
	bool GunSwingSwitch; // 0x140(0x01)
	bool GunSwingInMovingSwitch; // 0x141(0x01)
	char pad_142[0x2]; // 0x142(0x02)
	float GunSwingHoRotation; // 0x144(0x04)
	float GunSwingHoDelayRotation; // 0x148(0x04)
	float GunSwingPitch; // 0x14c(0x04)
	float HoRotationSpringTime; // 0x150(0x04)
	float HoRotationSpringRadio; // 0x154(0x04)
	float HoDelaySpringTime; // 0x158(0x04)
	float HoDelaySpringRadio; // 0x15c(0x04)
	float GunSwingGunLength; // 0x160(0x04)
	float GunSwingGunHeight; // 0x164(0x04)
	float GunSwingVerRotation; // 0x168(0x04)
	float GunSwingVerDelayRotation; // 0x16c(0x04)
	struct FWeaponDataViewLocomotionParam LocomotionParam; // 0x170(0xe0)
	struct FWeaponDataViewZoomSoftenParam ZoomSoftenParam; // 0x250(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponMainAttributeSet
// Size: 0xb8 (Inherited: 0x68)
struct FWeaponMainAttributeSet : public FWeaponDataBase {
public:

	struct TMap<char, float> MainAttrValues; // 0x68(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponThrowableDataProjectile
// Size: 0x140 (Inherited: 0x68)
struct FWeaponThrowableDataProjectile : public FWeaponDataBase {
public:

	int32_t GameModeType; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	uint64_t ProjectileId; // 0x70(0x08)
	int32_t ThreatId; // 0x78(0x04)
	int32_t AudioId; // 0x7c(0x04)
	bool bTriggerExplosionWhenDefenseByADS; // 0x80(0x01)
	enum class EGPThrowableWeaponTypeForADS ThrowableWeaponTypeForADS; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	/*struct TSoftClassPtr<UObject>*/char ProjectileClassBP[0x28]; // 0x88(0x28)
	struct FSoftObjectPath ProjectileMesh; // 0xb0(0x18)
	/*struct TSoftClassPtr<UObject>*/char ProjectileAnimationBP[0x28]; // 0xc8(0x28)
	struct FRotator ProjectileMeshRotator; // 0xf0(0x0c)
	struct FVector2D ProjectileMeshSize; // 0xfc(0x08)
	float VelocityThrowHigh; // 0x104(0x04)
	float VelocityThrowLow; // 0x108(0x04)
	float GravityScale; // 0x10c(0x04)
	bool bShouldBounce; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	float Bounciness; // 0x114(0x04)
	float WallBounciness; // 0x118(0x04)
	float CeilingBounciness; // 0x11c(0x04)
	float CharacterBounciness; // 0x120(0x04)
	float Friction; // 0x124(0x04)
	float CharacterFriction; // 0x128(0x04)
	float BounceVelocityStopLimited; // 0x12c(0x04)
	struct FRotator RotationRate; // 0x130(0x0c)
	int32_t FixedMoveFrame; // 0x13c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponThrowableDataDamage
// Size: 0xa8 (Inherited: 0x68)
struct FWeaponThrowableDataDamage : public FWeaponDataBase {
public:

	int32_t GameModeType; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	uint64_t DamageId; // 0x70(0x08)
	float MaxLifeTime; // 0x78(0x04)
	enum class EWeaponThrowableEffectType EffectType; // 0x7c(0x01)
	enum class EWeaponThrowableExplosionType ExplosionType; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	float ExplosionSeconds; // 0x80(0x04)
	float ExplosionDurationSeconds; // 0x84(0x04)
	float SafeMoveDistance; // 0x88(0x04)
	float DamageDistance; // 0x8c(0x04)
	float FullExplodeDamageDistance; // 0x90(0x04)
	float TickDamageEffectInterval; // 0x94(0x04)
	bool KeepFireExcludeExplosionTime; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float KeepFireExcludeExplosionDelayTime; // 0x9c(0x04)
	float FadeOutTime; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponMeleeDataAttribute
// Size: 0x2e8 (Inherited: 0x68)
struct FWeaponMeleeDataAttribute : public FWeaponDataBase {
public:

	uint64_t ItemID; // 0x68(0x08)
	/*struct TSoftClassPtr<UObject>*/char BPClass[0x28]; // 0x70(0x28)
	enum class EMeleeFireMode FireMode; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	float FireDelayTime; // 0x9c(0x04)
	float FireInterval; // 0xa0(0x04)
	float PostFireTime; // 0xa4(0x04)
	float FireRange; // 0xa8(0x04)
	float BulletRadius; // 0xac(0x04)
	float OverrideFireLoopPlayRate; // 0xb0(0x04)
	float EquipTime; // 0xb4(0x04)
	float UnEquipTime; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<float> EquipAnimRandRate; // 0xc0(0x10)
	struct TArray<float> InSpectAnimRandRate; // 0xd0(0x10)
	uint64_t AttackerValueId; // 0xe0(0x08)
	uint64_t AttackComboID; // 0xe8(0x08)
	bool OpenAttackCombo; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	uint64_t CrosshairId; // 0xf8(0x08)
	int64_t AimAssistorId; // 0x100(0x08)
	int64_t AimAssistorIdForMPMode; // 0x108(0x08)
	int64_t BeHitCameraMoveId; // 0x110(0x08)
	float BeHitCameraMoveScale; // 0x118(0x04)
	int32_t MovementSpeedID; // 0x11c(0x04)
	int64_t GunSwingViewId; // 0x120(0x08)
	float WeaponFOV; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FText Atkspeed; // 0x130(0x18)
	struct FText AtkRange; // 0x148(0x18)
	char pad_160[0x188]; // 0x160(0x188)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponPVEDataAttribute
// Size: 0x78 (Inherited: 0x68)
struct FWeaponPVEDataAttribute : public FWeaponDataBase {
public:

	uint64_t ItemID; // 0x68(0x08)
	bool bDiscardWeaponWhenAmmoEmpty; // 0x70(0x01)
	bool bGeneratePickupOnDiscard; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponThrowableDataAudio
// Size: 0x170 (Inherited: 0x68)
struct FWeaponThrowableDataAudio : public FWeaponDataBase {
public:

	struct TMap<enum class EPhysicalSurface, struct FName> BounceSoundByMaterialType; // 0x68(0x50)
	struct TMap<enum class EPhysicalSurface, struct FName> RollSoundStart; // 0xb8(0x50)
	struct TMap<enum class EPhysicalSurface, struct FName> RollSoundStop; // 0x108(0x50)
	struct FName RTPCName; // 0x158(0x08)
	struct FName InScopeCharacterSound; // 0x160(0x08)
	uint64_t AudioId; // 0x168(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponThrowableDataFX
// Size: 0xb0 (Inherited: 0x68)
struct FWeaponThrowableDataFX : public FWeaponDataBase {
public:

	uint64_t FXId; // 0x68(0x08)
	struct FName ProjectileFXName; // 0x70(0x08)
	struct FName TailFXName; // 0x78(0x08)
	struct FName DragTailFXName; // 0x80(0x08)
	bool ExplosionUseLiteSequence; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FName ExplosionFXNameCement; // 0x8c(0x08)
	struct FName ExplosionFXNameSoil; // 0x94(0x08)
	struct FName ExplosionFXNameAir; // 0x9c(0x08)
	struct FName ExplosionFXNameWater; // 0xa4(0x08)
	enum class EExplosionType ExplosionType; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponThrowableDataAttribute
// Size: 0x328 (Inherited: 0x68)
struct FWeaponThrowableDataAttribute : public FWeaponDataBase {
public:

	uint64_t ItemID; // 0x68(0x08)
	uint64_t SkinApperanceId; // 0x70(0x08)
	struct TArray<enum class EGPWeaponFiringMode> SuppportFireModes; // 0x78(0x10)
	enum class EGPWeaponFiringMode DefaultFireMode; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float PreFireTime; // 0x8c(0x04)
	float PreFireKeepTime; // 0x90(0x04)
	float PreFireCancelTime; // 0x94(0x04)
	float FireInterval; // 0x98(0x04)
	float FastFireInterval; // 0x9c(0x04)
	bool EnableInputCancel; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float EquipTime; // 0xa4(0x04)
	float UnEquipTime; // 0xa8(0x04)
	float FirstEquipTime; // 0xac(0x04)
	float FastEquipTime; // 0xb0(0x04)
	float FastUnEquipTime; // 0xb4(0x04)
	float VisibleDelayTime; // 0xb8(0x04)
	int32_t MovementSpeedID; // 0xbc(0x04)
	uint64_t ProjectileId; // 0xc0(0x08)
	uint64_t DamageId; // 0xc8(0x08)
	uint64_t FXId; // 0xd0(0x08)
	uint64_t PreFXId; // 0xd8(0x08)
	float PreFXTIime; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	uint64_t AnimId; // 0xe8(0x08)
	int32_t HitFeedbackAudioId; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	uint64_t SoundFXId; // 0xf8(0x08)
	struct FName WeaponSoundFXId; // 0x100(0x08)
	uint64_t CrossHairIdThrowHigh; // 0x108(0x08)
	uint64_t CrossHairIdThrowLow; // 0x110(0x08)
	uint64_t AttackerValueId; // 0x118(0x08)
	uint64_t OverlapAttackerValueId; // 0x120(0x08)
	int64_t ViewId; // 0x128(0x08)
	char EnableLastActive; // 0x130(0x01)
	char HideMeshInFire; // 0x131(0x01)
	char EnablePoseModify; // 0x132(0x01)
	bool CanAddAmmo; // 0x133(0x01)
	char WeaponAmmoCost; // 0x134(0x01)
	char pad_135[0x1]; // 0x135(0x01)
	uint16_t MaxCarriedAmmoCount; // 0x136(0x02)
	bool bIsClientOnlyThrowConfig; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	float MinClientFakeLerpTime; // 0x13c(0x04)
	float MaxClientFakeLerpTime; // 0x140(0x04)
	bool bIsClientFakeProjectileUseSocket; // 0x144(0x01)
	bool bIsClientFakePreviewUseSocket; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	struct FName ClientFakeSocketName; // 0x148(0x08)
	float ThrowRotationPitchAddition; // 0x150(0x04)
	float ThrowLocationHorizontalAddition; // 0x154(0x04)
	float ThrowLocationVerticalAddition; // 0x158(0x04)
	float ThrowLocationDepthAddition; // 0x15c(0x04)
	float ThrowLowRotationPitchAddition; // 0x160(0x04)
	float ThrowLowLocationHorizontalAddition; // 0x164(0x04)
	float ThrowLowLocationVerticalAddition; // 0x168(0x04)
	float ThrowPlusCharacterOwnerVelcoityFactor; // 0x16c(0x04)
	bool bReEquipInFireEnd; // 0x170(0x01)
	bool bCanUseSkillInPreFireState; // 0x171(0x01)
	bool bEnablePreviewLine; // 0x172(0x01)
	char pad_173[0x1]; // 0x173(0x01)
	float PreviewNearDistance; // 0x174(0x04)
	float PreviewFarDistance; // 0x178(0x04)
	float PreviewNearScale; // 0x17c(0x04)
	float PreviewFarScale; // 0x180(0x04)
	bool ForbidProneMoveInPreFire; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	float ThrowVelocityOwnerFactorForward; // 0x188(0x04)
	float ThrowVelocityOwnerFactorBack; // 0x18c(0x04)
	float ThrowVelocityOwnerFactorRight; // 0x190(0x04)
	float ThrowVelocityOwnerFactorLeft; // 0x194(0x04)
	float ThrowVelocityOwnerFactorUp; // 0x198(0x04)
	float ThrowVelocityOwnerFactorDown; // 0x19c(0x04)
	bool bMovementModeInstantBlend; // 0x1a0(0x01)
	bool bDisableProneIdleAdditive; // 0x1a1(0x01)
	bool bNeedDoubleHandOverride; // 0x1a2(0x01)
	char pad_1A3[0x5]; // 0x1a3(0x05)
	int64_t AimAssistorId; // 0x1a8(0x08)
	int64_t AimAssistorIdForMPMode; // 0x1b0(0x08)
	char pad_1B8[0x170]; // 0x1b8(0x170)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponThrowableTable
// Size: 0xf0 (Inherited: 0x68)
struct FWeaponThrowableTable : public FWeaponDataBase {
public:

	uint64_t ItemID; // 0x68(0x08)
	uint64_t FunctionId; // 0x70(0x08)
	/*struct TSoftClassPtr<UObject>*/char BPClass[0x28]; // 0x78(0x28)
	/*struct TSoftClassPtr<UObject>*/char ABP_AnimInstClass[0x28]; // 0xa0(0x28)
	/*struct TSoftClassPtr<UObject>*/char ABP_AnimInstClass_3P[0x28]; // 0xc8(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GunSwayConfig
// Size: 0x380 (Inherited: 0x10)
struct FGunSwayConfig : public FDescRowBase {
public:

	uint16_t GunSwayId; // 0x10(0x02)
	enum class EGunSwayType SwayType; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FGunSwayItemBase GSHit; // 0x18(0x38)
	struct FCameraWaveDataConfig CSHitData; // 0x50(0xb0)
	struct FGunSwayItemBase GSExplosion; // 0x100(0x38)
	struct FGunSwayItemBase GSAimingIdle; // 0x138(0x38)
	struct FGSMiniShakeConfig GSMiniShake; // 0x170(0x10)
	struct FGunSwayItemBase GSHitBlock; // 0x180(0x38)
	struct TArray<struct FGunSwayDamageRatioItem> GSDamageRatioItems; // 0x1b8(0x10)
	struct FGunSwayItemMovement GSMovement; // 0x1c8(0x48)
	struct FGunSwayCamera GSCamera; // 0x210(0xd8)
	struct FGunSwayZoomRecoveryCamera GSZoomRecoveryCamera; // 0x2e8(0x98)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.CameraProcedureAnim4Dir
// Size: 0x210 (Inherited: 0x00)
struct FCameraProcedureAnim4Dir {
public:

	char pad_0[0x8]; // 0x00(0x08)
	struct FProcedureAnimTrackData4Dir PAnimTrackData; // 0x08(0x208)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponProcedureAnim4Dir
// Size: 0x280 (Inherited: 0x00)
struct FWeaponProcedureAnim4Dir {
public:

	char pad_0[0x10]; // 0x00(0x10)
	float Duration; // 0x10(0x04)
	struct FProcedureAnimBlendInfo BlendInfo; // 0x14(0x10)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FWeaponProcedureAnimBone WeaponPABone; // 0x30(0x40)
	struct FProcedureAnimTrackData4Dir PAnimTrackData; // 0x70(0x208)
	char pad_278[0x8]; // 0x278(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ProcedureAnimConfig
// Size: 0x120 (Inherited: 0x10)
struct FProcedureAnimConfig : public FDescRowBase {
public:

	uint16_t ProcedureAnimId; // 0x10(0x02)
	char pad_12[0xe]; // 0x12(0x0e)
	struct FWeaponProcedureAnim ProcedureAnim; // 0x20(0x100)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.FiringAnimConfig
// Size: 0x740 (Inherited: 0x68)
struct FFiringAnimConfig : public FWeaponDataBase {
public:

	uint16_t FiringAnimId; // 0x68(0x02)
	char pad_6A[0x2]; // 0x6a(0x02)
	float FiringAnimDuration; // 0x6c(0x04)
	struct FFiringAnimParam_FixedOffset FixedOffset; // 0x70(0x18)
	char pad_88[0x8]; // 0x88(0x08)
	struct FFiringAnimParam_AdditiveAnim_PerFire_WithScale AdditiveAnim; // 0x90(0x140)
	struct FFiringAnimParam_AdditiveAnim_Continuous AdditiveAnim_PerFireState; // 0x1d0(0xa0)
	struct FFiringAnimParam_RandomKick RandomKick; // 0x270(0xc8)
	struct FFiringAnimParam_SpringKick SpringKick; // 0x338(0x70)
	struct FFiringAnimParam_SpringKick SpringKickDown; // 0x3a8(0x70)
	struct FFiringAnimParam_SpringKick SpringKickLeftRight; // 0x418(0x70)
	struct FFiringAnimParam_RandomSinKick SinKick; // 0x488(0x30)
	struct FFiringAnimKickScale GunKickScale; // 0x4b8(0x18)
	struct FFiringAnimParam_FixedOffset WaistAnimFixedOffset; // 0x4d0(0x18)
	char pad_4E8[0x8]; // 0x4e8(0x08)
	struct FFiringAnimParam_AdditiveAnim_PerFire_WithScale WaistAnimPerFire; // 0x4f0(0x140)
	struct FFiringAnimParam_AdditiveAnim_Continuous WaistAnimContinuous; // 0x630(0xa0)
	struct FEndFireSpring EndFireSpring; // 0x6d0(0x64)
	char pad_734[0xc]; // 0x734(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponRecoilModifierConfig
// Size: 0x11d8 (Inherited: 0x00)
struct FWeaponRecoilModifierConfig {
public:

	struct FWeaponRecoilState SingleShotRecoil; // 0x00(0x530)
	struct FWeaponRecoilState ContinueShotRecoil; // 0x530(0x530)
	struct FWeaponRecoilState ContinueShotRecoilLoop; // 0xa60(0x530)
	struct FWeaponRecoilFactorByPose RecoilByPose; // 0xf90(0x18)
	struct FWeaponRecoilFactor SideAimingRecoilFactor; // 0xfa8(0x08)
	float RecoilEaseTime; // 0xfb0(0x04)
	char pad_FB4[0x4]; // 0xfb4(0x04)
	struct FWeaponEaseConfig YawEase; // 0xfb8(0x30)
	struct FWeaponEaseConfig PitchEase; // 0xfe8(0x30)
	bool bUseManualCurveEffect; // 0x1018(0x01)
	char pad_1019[0x7]; // 0x1019(0x07)
	struct FWeaponRecoilShakeWithCurve RecoilShakeYawWithCurve; // 0x1020(0x18)
	struct FWeaponRecoilShakeWithCurve RecoilShakePitchWithCurve; // 0x1038(0x18)
	struct FWeaponRecoilShake RecoilShakeYaw; // 0x1050(0xb0)
	struct FWeaponRecoilShake RecoilShakePitch; // 0x1100(0xb0)
	struct FWeaponRecoilFactor SideAimingRecoilShakeFactor; // 0x11b0(0x08)
	struct FWeaponRecoilVelocityModel RecoilVelocityModel; // 0x11b8(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.SafeHouseNPCAnims
// Size: 0x600 (Inherited: 0x08)
struct FSafeHouseNPCAnims : public FAIAnimsBase {
public:

	struct FAIAnimItemAnimSeq IdleAnim; // 0x08(0x30)
	struct TArray<struct FAIAnimItemAnimSeq> WorkAnimList; // 0x38(0x10)
	struct FSafehouseNPCTurnToPlayerAnims IdleToStand; // 0x48(0x1b8)
	struct FSafehouseNPCTurnToPlayerAnims StandToIdle; // 0x200(0x1b8)
	struct FAIAnimItemAnimSeq StandAnim; // 0x3b8(0x30)
	struct FSafehouseNPCTurnToPlayerAnims StandToStand; // 0x3e8(0x1b8)
	struct FAIAnimItemAnimSeq InteractAnim; // 0x5a0(0x30)
	struct FAIAnimItemBSBase AimOffset; // 0x5d0(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.GPPathFollowSnapshotData
// Size: 0xb0 (Inherited: 0x00)
struct FGPPathFollowSnapshotData {
public:

	enum class EGPPathFollowStatus Status; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FGPPathFollowRuntimeData RuntimeData; // 0x10(0x90)
	struct FName LastPauseReason; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AiAnimPosTableRow
// Size: 0xa960 (Inherited: 0x10)
struct FAiAnimPosTableRow : public FWeaponAnimTableRowBase {
public:

	struct FWeaponAnimItemSeq LeisureIdle; // 0x10(0x58)
	char pad_68[0x8]; // 0x68(0x08)
	struct FWeaponAnimItemSeq LeisureMoveSeq; // 0x70(0x58)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FWeaponAnimItemBS LeisureMovement; // 0xd0(0x58)
	char pad_128[0x8]; // 0x128(0x08)
	struct FWeaponAnimItemBS SpecialLeisureMovement01; // 0x130(0x58)
	char pad_188[0x8]; // 0x188(0x08)
	struct FWeaponAnimItemBS SpecialLeisureMovement02; // 0x190(0x58)
	char pad_1E8[0x8]; // 0x1e8(0x08)
	struct FWeaponAnimItemSeq Standby1; // 0x1f0(0x58)
	char pad_248[0x8]; // 0x248(0x08)
	struct FWeaponAnimItemSeq Standby2; // 0x250(0x58)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct FWeaponAnimItemSeq Standby3; // 0x2b0(0x58)
	char pad_308[0x8]; // 0x308(0x08)
	struct FWeaponAnimItemSeq AlertIdle; // 0x310(0x58)
	char pad_368[0x8]; // 0x368(0x08)
	struct FWeaponAnimItemBS AlertMoveBS; // 0x370(0x58)
	char pad_3C8[0x8]; // 0x3c8(0x08)
	struct FWeaponAnimItemBS AlertTrottBS; // 0x3d0(0x58)
	char pad_428[0x8]; // 0x428(0x08)
	struct FWeaponAnimItemBS HalfSquatMoveBS; // 0x430(0x58)
	char pad_488[0x8]; // 0x488(0x08)
	struct FWeaponAnimItemBS SpecialSprintBS; // 0x490(0x58)
	char pad_4E8[0x8]; // 0x4e8(0x08)
	struct FWeaponAnimItemBS RunMoveBS; // 0x4f0(0x58)
	char pad_548[0x8]; // 0x548(0x08)
	struct FWeaponAnimItemBS AimOffsetBS; // 0x550(0x58)
	char pad_5A8[0x8]; // 0x5a8(0x08)
	struct FWeaponAnimItemSeq HalfSquatIdle; // 0x5b0(0x58)
	char pad_608[0x8]; // 0x608(0x08)
	struct FWeaponAnimItemSeq RunIdle; // 0x610(0x58)
	char pad_668[0x8]; // 0x668(0x08)
	struct FWeaponAnimItemSeq AlertSight; // 0x670(0x58)
	char pad_6C8[0x8]; // 0x6c8(0x08)
	struct FWeaponAnimItemSeq TransitionLeisureToFight; // 0x6d0(0x58)
	char pad_728[0x8]; // 0x728(0x08)
	struct FWeaponAnimItemSeq TransitionFightToLeisure; // 0x730(0x58)
	char pad_788[0x8]; // 0x788(0x08)
	struct FWeaponAnimItemSeq TransitionLeisureToAlert; // 0x790(0x58)
	char pad_7E8[0x8]; // 0x7e8(0x08)
	struct FWeaponAnimItemSeq TransitionAlertToLeisure; // 0x7f0(0x58)
	char pad_848[0x8]; // 0x848(0x08)
	struct FWeaponAnimItemSeq TransitionAlertCrouchToStand; // 0x850(0x58)
	char pad_8A8[0x8]; // 0x8a8(0x08)
	struct FWeaponAnimItemSeq TransitionAlertStandToCrouch; // 0x8b0(0x58)
	char pad_908[0x8]; // 0x908(0x08)
	struct FWeaponAnimItemSeq TransitionAlertToFight; // 0x910(0x58)
	char pad_968[0x8]; // 0x968(0x08)
	struct FWeaponAnimItemSeq TransitionFightToAlert; // 0x970(0x58)
	char pad_9C8[0x8]; // 0x9c8(0x08)
	struct FWeaponAnimItemSeq TransitionHalfToCrouch; // 0x9d0(0x58)
	char pad_A28[0x8]; // 0xa28(0x08)
	struct FWeaponAnimItemSeq TransitionCrouchToHalf; // 0xa30(0x58)
	char pad_A88[0x8]; // 0xa88(0x08)
	struct FWeaponAnimItemSeq TransitionCrouchToStand; // 0xa90(0x58)
	char pad_AE8[0x8]; // 0xae8(0x08)
	struct FWeaponAnimItemSeq TransitionStandToCrouch; // 0xaf0(0x58)
	char pad_B48[0x8]; // 0xb48(0x08)
	struct FWeaponAnimItemMontage FightCrouchToStand; // 0xb50(0xb8)
	char pad_C08[0x8]; // 0xc08(0x08)
	struct FWeaponAnimItemMontage FightStandToCrouch; // 0xc10(0xb8)
	char pad_CC8[0x8]; // 0xcc8(0x08)
	struct FWeaponAnimItemMontage AlertCrouchToStand; // 0xcd0(0xb8)
	char pad_D88[0x8]; // 0xd88(0x08)
	struct FWeaponAnimItemMontage AlertStandToCrouch; // 0xd90(0xb8)
	char pad_E48[0x8]; // 0xe48(0x08)
	struct FTurnAnim8AngleSeqBase FightRunF2Sprint; // 0xe50(0x2c8)
	char pad_1118[0x8]; // 0x1118(0x08)
	struct FTurnAnim8AngleSeqBase FightRunL2Sprint; // 0x1120(0x2c8)
	char pad_13E8[0x8]; // 0x13e8(0x08)
	struct FTurnAnim8AngleSeqBase FightRunR2Sprint; // 0x13f0(0x2c8)
	char pad_16B8[0x8]; // 0x16b8(0x08)
	struct FTurnAnim8AngleSeqBase FightRunB2Sprint; // 0x16c0(0x2c8)
	char pad_1988[0x8]; // 0x1988(0x08)
	struct FWeaponAnimItemSeq TransitionRunStartF; // 0x1990(0x58)
	char pad_19E8[0x8]; // 0x19e8(0x08)
	struct FWeaponAnimItemSeq TransitionRunStartR; // 0x19f0(0x58)
	char pad_1A48[0x8]; // 0x1a48(0x08)
	struct FWeaponAnimItemSeq TransitionRunStartB; // 0x1a50(0x58)
	char pad_1AA8[0x8]; // 0x1aa8(0x08)
	struct FWeaponAnimItemSeq TransitionRunStartL; // 0x1ab0(0x58)
	char pad_1B08[0x8]; // 0x1b08(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopF; // 0x1b10(0x58)
	char pad_1B68[0x8]; // 0x1b68(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopR; // 0x1b70(0x58)
	char pad_1BC8[0x8]; // 0x1bc8(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopB; // 0x1bd0(0x58)
	char pad_1C28[0x8]; // 0x1c28(0x08)
	struct FWeaponAnimItemSeq TransitionRunStopL; // 0x1c30(0x58)
	char pad_1C88[0x8]; // 0x1c88(0x08)
	struct FWeaponAnimItemSeq TransitionSprintStartF; // 0x1c90(0x58)
	char pad_1CE8[0x8]; // 0x1ce8(0x08)
	struct FWeaponAnimItemSeq TransitionSprintStartR; // 0x1cf0(0x58)
	char pad_1D48[0x8]; // 0x1d48(0x08)
	struct FWeaponAnimItemSeq TransitionSprintStartL; // 0x1d50(0x58)
	char pad_1DA8[0x8]; // 0x1da8(0x08)
	struct FWeaponAnimItemSeq TransitionHalfSquatStartF; // 0x1db0(0x58)
	char pad_1E08[0x8]; // 0x1e08(0x08)
	struct FWeaponAnimItemSeq TransitionHalfSquatStartR; // 0x1e10(0x58)
	char pad_1E68[0x8]; // 0x1e68(0x08)
	struct FWeaponAnimItemSeq TransitionHalfSquatStartB; // 0x1e70(0x58)
	char pad_1EC8[0x8]; // 0x1ec8(0x08)
	struct FWeaponAnimItemSeq TransitionHalfSquatStartL; // 0x1ed0(0x58)
	char pad_1F28[0x8]; // 0x1f28(0x08)
	struct FWeaponAnimItemSeq TransitionHalfSquatStopF; // 0x1f30(0x58)
	char pad_1F88[0x8]; // 0x1f88(0x08)
	struct FWeaponAnimItemSeq TransitionHalfSquatStopR; // 0x1f90(0x58)
	char pad_1FE8[0x8]; // 0x1fe8(0x08)
	struct FWeaponAnimItemSeq TransitionHalfSquatStopB; // 0x1ff0(0x58)
	char pad_2048[0x8]; // 0x2048(0x08)
	struct FWeaponAnimItemSeq TransitionHalfSquatStopL; // 0x2050(0x58)
	char pad_20A8[0x8]; // 0x20a8(0x08)
	struct FWeaponAnimItemSeq TransitionAlertMoveStartF; // 0x20b0(0x58)
	char pad_2108[0x8]; // 0x2108(0x08)
	struct FWeaponAnimItemSeq TransitionAlertMoveStartB; // 0x2110(0x58)
	char pad_2168[0x8]; // 0x2168(0x08)
	struct FWeaponAnimItemSeq TransitionAlertMoveStartL; // 0x2170(0x58)
	char pad_21C8[0x8]; // 0x21c8(0x08)
	struct FWeaponAnimItemSeq TransitionAlertMoveStartR; // 0x21d0(0x58)
	char pad_2228[0x8]; // 0x2228(0x08)
	struct FWeaponAnimItemSeq TransitionAlertMoveStopF; // 0x2230(0x58)
	char pad_2288[0x8]; // 0x2288(0x08)
	struct FWeaponAnimItemSeq TransitionAlertMoveStopB; // 0x2290(0x58)
	char pad_22E8[0x8]; // 0x22e8(0x08)
	struct FWeaponAnimItemSeq TransitionAlertMoveStopL; // 0x22f0(0x58)
	char pad_2348[0x8]; // 0x2348(0x08)
	struct FWeaponAnimItemSeq TransitionAlertMoveStopR; // 0x2350(0x58)
	char pad_23A8[0x8]; // 0x23a8(0x08)
	struct FTurnAnim8AngleSeqBase LeisureStart; // 0x23b0(0x2c8)
	char pad_2678[0x8]; // 0x2678(0x08)
	struct FTurnAnim8AngleSeqBase LeisureStop; // 0x2680(0x2c8)
	char pad_2948[0x8]; // 0x2948(0x08)
	struct FTurnAnim8AngleSeqBase AlertTrotStart; // 0x2950(0x2c8)
	char pad_2C18[0x8]; // 0x2c18(0x08)
	struct FTurnAnim8AngleSeqBase AlertTrotStop; // 0x2c20(0x2c8)
	char pad_2EE8[0x8]; // 0x2ee8(0x08)
	struct FTurnAnim8AngleSeqBase AlertWalkStart; // 0x2ef0(0x2c8)
	char pad_31B8[0x8]; // 0x31b8(0x08)
	struct FTurnAnim8AngleSeqBase AlertWalkStop; // 0x31c0(0x2c8)
	char pad_3488[0x8]; // 0x3488(0x08)
	struct FTurnAnim8AngleSeqBase FightWalkStart; // 0x3490(0x2c8)
	char pad_3758[0x8]; // 0x3758(0x08)
	struct FTurnAnim8AngleSeqBase FightWalkStop; // 0x3760(0x2c8)
	char pad_3A28[0x8]; // 0x3a28(0x08)
	struct FTurnAnim8AngleSeqBase FightRunStart; // 0x3a30(0x2c8)
	char pad_3CF8[0x8]; // 0x3cf8(0x08)
	struct FTurnAnim8AngleSeqBase FightRunStop; // 0x3d00(0x2c8)
	char pad_3FC8[0x8]; // 0x3fc8(0x08)
	struct FTurnAnim8AngleSeqBase FightCrouchWalkStart; // 0x3fd0(0x2c8)
	char pad_4298[0x8]; // 0x4298(0x08)
	struct FTurnAnim8AngleSeqBase FightCrouchWalkStop; // 0x42a0(0x2c8)
	char pad_4568[0x8]; // 0x4568(0x08)
	struct FTurnAnim8AngleSeqBase FightSprintStart; // 0x4570(0x2c8)
	char pad_4838[0x8]; // 0x4838(0x08)
	struct FTurnAnim8AngleSeqBase FightSprintStop; // 0x4840(0x2c8)
	char pad_4B08[0x8]; // 0x4b08(0x08)
	struct FWeaponAnimItemMontage TurnLeftMontage; // 0x4b10(0xb8)
	char pad_4BC8[0x8]; // 0x4bc8(0x08)
	struct FWeaponAnimItemMontage TurnRightMontage; // 0x4bd0(0xb8)
	char pad_4C88[0x8]; // 0x4c88(0x08)
	struct FWeaponAnimItemMontage HalfTurnLeftMontage; // 0x4c90(0xb8)
	char pad_4D48[0x8]; // 0x4d48(0x08)
	struct FWeaponAnimItemMontage HalfTurnRightMontage; // 0x4d50(0xb8)
	char pad_4E08[0x8]; // 0x4e08(0x08)
	struct FTurnAnim8AngleSeqBase LeisureTurn; // 0x4e10(0x2c8)
	char pad_50D8[0x8]; // 0x50d8(0x08)
	struct FTurnAnim8AngleSeqBase AlertTurn; // 0x50e0(0x2c8)
	char pad_53A8[0x8]; // 0x53a8(0x08)
	struct FTurnAnim8AngleSeqBase SprintTurn; // 0x53b0(0x2c8)
	char pad_5678[0x8]; // 0x5678(0x08)
	struct FTurnAnim8AngleSeqBase LeisureEnd; // 0x5680(0x2c8)
	char pad_5948[0x8]; // 0x5948(0x08)
	struct FTurnAnim8AngleSeqBase UpperBodyStaggerGentle; // 0x5950(0x2c8)
	char pad_5C18[0x8]; // 0x5c18(0x08)
	struct FTurnAnim8AngleSeqBase UpperBodyStaggerHeavy; // 0x5c20(0x2c8)
	char pad_5EE8[0x8]; // 0x5ee8(0x08)
	struct FTurnAnim8AngleSeqBase UpperBodyStaggerTumble; // 0x5ef0(0x2c8)
	char pad_61B8[0x8]; // 0x61b8(0x08)
	struct FTurnAnim8AngleSeqBase LowerBodyStaggerGentle; // 0x61c0(0x2c8)
	char pad_6488[0x8]; // 0x6488(0x08)
	struct FTurnAnim8AngleSeqBase LowerBodyStaggerHeavy; // 0x6490(0x2c8)
	char pad_6758[0x8]; // 0x6758(0x08)
	struct FTurnAnim8AngleSeqBase LowerBodyStaggerTumble; // 0x6760(0x2c8)
	char pad_6A28[0x8]; // 0x6a28(0x08)
	struct FTurnAnim8AngleSeqBase StaggerInMove; // 0x6a30(0x2c8)
	char pad_6CF8[0x8]; // 0x6cf8(0x08)
	struct FTurnAnim8AngleSeqBase StaggerSprint; // 0x6d00(0x2c8)
	char pad_6FC8[0x8]; // 0x6fc8(0x08)
	struct FTurnAnim8AngleSeqBase StaggerDeath; // 0x6fd0(0x2c8)
	char pad_7298[0x8]; // 0x7298(0x08)
	struct FTurnAnim8AngleSeqBase StaggerFlashBomb; // 0x72a0(0x2c8)
	char pad_7568[0x8]; // 0x7568(0x08)
	struct FTurnAnim8AngleSeqBase StaggerSpecialType1; // 0x7570(0x2c8)
	char pad_7838[0x8]; // 0x7838(0x08)
	struct FWeaponAnimItemMontage MeleeAttackType1; // 0x7840(0xb8)
	char pad_78F8[0x8]; // 0x78f8(0x08)
	struct FWeaponAnimItemMontage MeleeAttackType2; // 0x7900(0xb8)
	char pad_79B8[0x8]; // 0x79b8(0x08)
	struct FWeaponAnimItemMontage MeleeAttackType3; // 0x79c0(0xb8)
	char pad_7A78[0x8]; // 0x7a78(0x08)
	struct FWeaponAnimItemMontage MeleeAttackType4; // 0x7a80(0xb8)
	char pad_7B38[0x8]; // 0x7b38(0x08)
	struct FWeaponAnimItemMontage MeleeAttackType5; // 0x7b40(0xb8)
	char pad_7BF8[0x8]; // 0x7bf8(0x08)
	struct FWeaponAnimItemMontage MeleeAttackType6; // 0x7c00(0xb8)
	char pad_7CB8[0x8]; // 0x7cb8(0x08)
	struct FWeaponAnimItemMontage AlertLookAround; // 0x7cc0(0xb8)
	char pad_7D78[0x8]; // 0x7d78(0x08)
	struct FWeaponAnimItemMontage AlertLookAround02; // 0x7d80(0xb8)
	char pad_7E38[0x8]; // 0x7e38(0x08)
	struct FWeaponAnimItemMontage AlertSpotTarget; // 0x7e40(0xb8)
	char pad_7EF8[0x8]; // 0x7ef8(0x08)
	struct FWeaponAnimItemMontage AlertCallCompany; // 0x7f00(0xb8)
	char pad_7FB8[0x8]; // 0x7fb8(0x08)
	struct FWeaponAnimItemMontage ForwardSliding; // 0x7fc0(0xb8)
	char pad_8078[0x8]; // 0x8078(0x08)
	struct FWeaponAnimItemMontage ForwardRolling; // 0x8080(0xb8)
	char pad_8138[0x8]; // 0x8138(0x08)
	struct FWeaponAnimItemMontage SideRushingLeft; // 0x8140(0xb8)
	char pad_81F8[0x8]; // 0x81f8(0x08)
	struct FWeaponAnimItemMontage SideRushingRight; // 0x8200(0xb8)
	char pad_82B8[0x8]; // 0x82b8(0x08)
	struct FWeaponAnimItemMontage ThrowingGrenade; // 0x82c0(0xb8)
	char pad_8378[0x8]; // 0x8378(0x08)
	struct FWeaponAnimItemMontage ActingType1; // 0x8380(0xb8)
	char pad_8438[0x8]; // 0x8438(0x08)
	struct FWeaponAnimItemMontage ActingType2; // 0x8440(0xb8)
	char pad_84F8[0x8]; // 0x84f8(0x08)
	struct FWeaponAnimItemMontage Leisure2Alert; // 0x8500(0xb8)
	char pad_85B8[0x8]; // 0x85b8(0x08)
	struct FTurnAnim8AngleSeqBase Leisure2AlertTurn; // 0x85c0(0x2c8)
	char pad_8888[0x8]; // 0x8888(0x08)
	struct FTurnAnim8AngleSeqBase LeisureHit2AlertTurn; // 0x8890(0x2c8)
	char pad_8B58[0x8]; // 0x8b58(0x08)
	struct FTurnAnim8AngleSeqBase LeisureHear2AlertTurn; // 0x8b60(0x2c8)
	char pad_8E28[0x8]; // 0x8e28(0x08)
	struct FWeaponAnimItemMontage Leisure2Fight; // 0x8e30(0xb8)
	char pad_8EE8[0x8]; // 0x8ee8(0x08)
	struct FTurnAnim8AngleSeqBase Leisure2FightTurn; // 0x8ef0(0x2c8)
	char pad_91B8[0x8]; // 0x91b8(0x08)
	struct FWeaponAnimItemMontage Alert2Leisure; // 0x91c0(0xb8)
	char pad_9278[0x8]; // 0x9278(0x08)
	struct FWeaponAnimItemMontage Alert2Fight; // 0x9280(0xb8)
	char pad_9338[0x8]; // 0x9338(0x08)
	struct FTurnAnim8AngleSeqBase Alert2FightTurn; // 0x9340(0x2c8)
	char pad_9608[0x8]; // 0x9608(0x08)
	struct FTurnAnim8AngleSeqBase AlertHit2FightTurn; // 0x9610(0x2c8)
	char pad_98D8[0x8]; // 0x98d8(0x08)
	struct FWeaponAnimItemMontage Fight2Leisure; // 0x98e0(0xb8)
	char pad_9998[0x8]; // 0x9998(0x08)
	struct FWeaponAnimItemMontage Fight2Alert; // 0x99a0(0xb8)
	char pad_9A58[0x8]; // 0x9a58(0x08)
	struct FWeaponAnimItemSeq LeftCoverIdle; // 0x9a60(0x58)
	char pad_9AB8[0x8]; // 0x9ab8(0x08)
	struct FWeaponAnimItemMontage LeftCoverLEntry; // 0x9ac0(0xb8)
	char pad_9B78[0x8]; // 0x9b78(0x08)
	struct FWeaponAnimItemMontage LeftCoverREntry; // 0x9b80(0xb8)
	char pad_9C38[0x8]; // 0x9c38(0x08)
	struct FWeaponAnimItemMontage LeftCoverExit; // 0x9c40(0xb8)
	char pad_9CF8[0x8]; // 0x9cf8(0x08)
	struct FWeaponAnimItemMontage LeftCoverActing1; // 0x9d00(0xb8)
	char pad_9DB8[0x8]; // 0x9db8(0x08)
	struct FWeaponAnimItemMontage LeftCoverActing2; // 0x9dc0(0xb8)
	char pad_9E78[0x8]; // 0x9e78(0x08)
	struct FWeaponAnimItemMontage LeftCoverShooting; // 0x9e80(0xb8)
	char pad_9F38[0x8]; // 0x9f38(0x08)
	struct FWeaponAnimItemMontage LeftCoverShootingEnd; // 0x9f40(0xb8)
	char pad_9FF8[0x8]; // 0x9ff8(0x08)
	struct FWeaponAnimItemSeq RightCoverIdle; // 0xa000(0x58)
	char pad_A058[0x8]; // 0xa058(0x08)
	struct FWeaponAnimItemMontage RightCoverLEntry; // 0xa060(0xb8)
	char pad_A118[0x8]; // 0xa118(0x08)
	struct FWeaponAnimItemMontage RightCoverREntry; // 0xa120(0xb8)
	char pad_A1D8[0x8]; // 0xa1d8(0x08)
	struct FWeaponAnimItemMontage RightCoverExit; // 0xa1e0(0xb8)
	char pad_A298[0x8]; // 0xa298(0x08)
	struct FWeaponAnimItemMontage RightCoverActing1; // 0xa2a0(0xb8)
	char pad_A358[0x8]; // 0xa358(0x08)
	struct FWeaponAnimItemMontage RightCoverActing2; // 0xa360(0xb8)
	char pad_A418[0x8]; // 0xa418(0x08)
	struct FWeaponAnimItemMontage RightCoverShooting; // 0xa420(0xb8)
	char pad_A4D8[0x8]; // 0xa4d8(0x08)
	struct FWeaponAnimItemMontage RightCoverShootingEnd; // 0xa4e0(0xb8)
	char pad_A598[0x8]; // 0xa598(0x08)
	struct FWeaponAnimItemSeq SpecialAILeisurePose; // 0xa5a0(0x58)
	char pad_A5F8[0x8]; // 0xa5f8(0x08)
	struct FWeaponAnimItemSeq SpecialAIAlertPose; // 0xa600(0x58)
	char pad_A658[0x8]; // 0xa658(0x08)
	struct FWeaponAnimItemSeq SpecialAIFightPose; // 0xa660(0x58)
	char pad_A6B8[0x8]; // 0xa6b8(0x08)
	struct FWeaponAnimItemBS SpecialAIAimOffsetBS; // 0xa6c0(0x58)
	char pad_A718[0x8]; // 0xa718(0x08)
	struct FWeaponAnimItemMontage ChangeClipCharacterAnim; // 0xa720(0xb8)
	char pad_A7D8[0x8]; // 0xa7d8(0x08)
	struct FWeaponAnimItemSeq ChangeClipWeaponAnim; // 0xa7e0(0x58)
	char pad_A838[0x8]; // 0xa838(0x08)
	struct FWeaponAnimItemSeq WeaponAdditivePose; // 0xa840(0x58)
	char pad_A898[0x8]; // 0xa898(0x08)
	struct FWeaponAnimItemMontage WeaponFireCharacterAnim; // 0xa8a0(0xb8)
	char pad_A958[0x8]; // 0xa958(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponPartAnimsTableRow
// Size: 0x1230 (Inherited: 0x10)
struct FWeaponPartAnimsTableRow : public FWeaponAnimTableRowBase {
public:

	struct FWeaponAnimPartItemSeq Idle; // 0x10(0x68)
	char pad_78[0x8]; // 0x78(0x08)
	struct FWeaponAnimPartItemSeq OnFireModeSingle; // 0x80(0x68)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FWeaponAnimPartItemSeq OnFireModeBurst; // 0xf0(0x68)
	char pad_158[0x8]; // 0x158(0x08)
	struct FWeaponAnimPartItemSeq OnFireModeAuto; // 0x160(0x68)
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FWeaponAnimPartItemSeq EmpytAmmoOnHock; // 0x1d0(0x68)
	char pad_238[0x8]; // 0x238(0x08)
	struct FWeaponAnimPartItemSeq Walk; // 0x240(0x68)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct FWeaponAnimPartItemSeq Sprint; // 0x2b0(0x68)
	char pad_318[0x8]; // 0x318(0x08)
	struct FWeaponAnimPartItemSeq Fire; // 0x320(0x68)
	char pad_388[0x8]; // 0x388(0x08)
	struct FWeaponAnimPartItemSeq FireContinue; // 0x390(0x68)
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct FWeaponAnimPartItemSeq FireEnd; // 0x400(0x68)
	char pad_468[0x8]; // 0x468(0x08)
	struct FWeaponAnimPartItemSeq FirstEquip; // 0x470(0x68)
	char pad_4D8[0x8]; // 0x4d8(0x08)
	struct FWeaponAnimPartItemSeq Equip; // 0x4e0(0x68)
	char pad_548[0x8]; // 0x548(0x08)
	struct FWeaponAnimPartItemSeq Reload; // 0x550(0x68)
	char pad_5B8[0x8]; // 0x5b8(0x08)
	struct FWeaponAnimPartItemSeq ReloadEmpty; // 0x5c0(0x68)
	char pad_628[0x8]; // 0x628(0x08)
	struct FWeaponAnimPartItemSeq AimReload; // 0x630(0x68)
	char pad_698[0x8]; // 0x698(0x08)
	struct FWeaponAnimPartItemSeq AimReloadEmpty; // 0x6a0(0x68)
	char pad_708[0x8]; // 0x708(0x08)
	struct FWeaponAnimItemStringMap ReloadForDifferentMagazinesNew; // 0x710(0x58)
	char pad_768[0x8]; // 0x768(0x08)
	struct FWeaponAnimPartItemSeq ChamberW; // 0x770(0x68)
	char pad_7D8[0x8]; // 0x7d8(0x08)
	struct FWeaponAnimPartItemSeq AimChamberW; // 0x7e0(0x68)
	char pad_848[0x8]; // 0x848(0x08)
	struct FWeaponAnimPartItemSeq Inspect; // 0x850(0x68)
	char pad_8B8[0x8]; // 0x8b8(0x08)
	struct FWeaponAnimPartItemSeq InspectEmpty; // 0x8c0(0x68)
	char pad_928[0x8]; // 0x928(0x08)
	struct FWeaponAnimPartItemSeq InspectFinally; // 0x930(0x68)
	char pad_998[0x8]; // 0x998(0x08)
	struct FWeaponAnimPartItemSeq InspectFirstEmpty; // 0x9a0(0x68)
	char pad_A08[0x8]; // 0xa08(0x08)
	struct FWeaponAnimPartItemSeq ReloadSingleStart2; // 0xa10(0x68)
	char pad_A78[0x8]; // 0xa78(0x08)
	struct FWeaponAnimPartItemSeq ReloadSingle; // 0xa80(0x68)
	char pad_AE8[0x8]; // 0xae8(0x08)
	struct FWeaponAnimPartItemSeq ReloadSingleEnd; // 0xaf0(0x68)
	char pad_B58[0x8]; // 0xb58(0x08)
	struct FWeaponAnimPartItemSeq ReloadSingleEnd2; // 0xb60(0x68)
	char pad_BC8[0x8]; // 0xbc8(0x08)
	struct FWeaponAnimPartItemSeq AimReloadSingleStart2; // 0xbd0(0x68)
	char pad_C38[0x8]; // 0xc38(0x08)
	struct FWeaponAnimPartItemSeq AimReloadSingle; // 0xc40(0x68)
	char pad_CA8[0x8]; // 0xca8(0x08)
	struct FWeaponAnimPartItemSeq AimReloadSingleEnd; // 0xcb0(0x68)
	char pad_D18[0x8]; // 0xd18(0x08)
	struct FWeaponAnimPartItemSeq AimReloadSingleEnd2; // 0xd20(0x68)
	char pad_D88[0x8]; // 0xd88(0x08)
	struct FWeaponAnimPartItemSeq ReloadEmptySingleStart2; // 0xd90(0x68)
	char pad_DF8[0x8]; // 0xdf8(0x08)
	struct FWeaponAnimPartItemSeq ReloadEmptySingle; // 0xe00(0x68)
	char pad_E68[0x8]; // 0xe68(0x08)
	struct FWeaponAnimPartItemSeq ReloadEmptySingleEnd; // 0xe70(0x68)
	char pad_ED8[0x8]; // 0xed8(0x08)
	struct FWeaponAnimPartItemSeq ReloadEmptySingleEnd2; // 0xee0(0x68)
	char pad_F48[0x8]; // 0xf48(0x08)
	struct FWeaponAnimPartItemSeq AimReloadEmptySingleStart2; // 0xf50(0x68)
	char pad_FB8[0x8]; // 0xfb8(0x08)
	struct FWeaponAnimPartItemSeq AimReloadEmptySingle; // 0xfc0(0x68)
	char pad_1028[0x8]; // 0x1028(0x08)
	struct FWeaponAnimPartItemSeq AimReloadEmptySingleEnd; // 0x1030(0x68)
	char pad_1098[0x8]; // 0x1098(0x08)
	struct FWeaponAnimPartItemSeq AimReloadEmptySingleEnd2; // 0x10a0(0x68)
	char pad_1108[0x8]; // 0x1108(0x08)
	struct FWeaponAnimPartItemSeq ChargingW; // 0x1110(0x68)
	char pad_1178[0x8]; // 0x1178(0x08)
	struct FWeaponAnimPartItemSeq CancelChargeW; // 0x1180(0x68)
	char pad_11E8[0x8]; // 0x11e8(0x08)
	struct FWeaponAnimItemSeqArray EuipAnims; // 0x11f0(0x18)
	char pad_1208[0x8]; // 0x1208(0x08)
	struct FWeaponAnimItemSeqArray InspectAnims; // 0x1210(0x18)
	char pad_1228[0x8]; // 0x1228(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponAnimRecTableRow
// Size: 0x350 (Inherited: 0x350)
struct FWeaponAnimRecTableRow : public FSpecialWeaponAnimTableRow {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.DamageResultInfo
// Size: 0x5e0 (Inherited: 0x00)
struct FDamageResultInfo {
public:

	uint64_t Guid; // 0x00(0x08)
	enum class EDamageSystemDamageType DamageType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FDamageSourceInfo DamageSourceInfo; // 0x10(0x2a8)
	struct FDamageValidateInfo DamageValidateInfo; // 0x2b8(0x1f8)
	float BaseDamage; // 0x4b0(0x04)
	float BaseHealthDamage; // 0x4b4(0x04)
	float BaseArmorDamage; // 0x4b8(0x04)
	float OriginHPDamage; // 0x4bc(0x04)
	float RealHPDamage; // 0x4c0(0x04)
	float RealArmorDamage; // 0x4c4(0x04)
	float RealHelmetDamage; // 0x4c8(0x04)
	float RealHealthDamage; // 0x4cc(0x04)
	float ArmorToHPRate; // 0x4d0(0x04)
	char pad_4D4[0x64]; // 0x4d4(0x64)
	float ArmorHealth; // 0x538(0x04)
	char TakerResultStatus; // 0x53c(0x01)
	bool bBreakArmor; // 0x53d(0x01)
	bool bBreakHelmetArmor; // 0x53e(0x01)
	char pad_53F[0x1]; // 0x53f(0x01)
	struct FVector_NetQuantize MakerOwnerLocation; // 0x540(0x0c)
	char pad_54C[0x6c]; // 0x54c(0x6c)
	struct FGameplayTagContainer TagContainer; // 0x5b8(0x20)
	char pad_5D8[0x8]; // 0x5d8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.AIWeaponDataAttackerValue
// Size: 0x128 (Inherited: 0x120)
struct FAIWeaponDataAttackerValue : public FDamagePointAttackValue {
public:

	bool bIsCover; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.WeaponMeleeDataAnim
// Size: 0xa0 (Inherited: 0x90)
struct FWeaponMeleeDataAnim : public FWeaponDataAnim {
public:

	struct TArray<struct FWeaponAnimItemMontage> FireCMontages; // 0x90(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameplay.ProcedureAnim4DirConfig
// Size: 0x8d0 (Inherited: 0x10)
struct FProcedureAnim4DirConfig : public FDescRowBase {
public:

	uint16_t ProcedureAnimId; // 0x10(0x02)
	char pad_12[0xe]; // 0x12(0x0e)
	struct FWeaponProcedureAnim4Dir ProcedureAnim; // 0x20(0x280)
	struct FCameraProcedureAnim4Dir ProcedureCameraAnimWalk; // 0x2a0(0x210)
	struct FCameraProcedureAnim4Dir ProcedureCameraAnimRun; // 0x4b0(0x210)
	struct FCameraProcedureAnim4Dir ProcedureCameraAnimAimWalk; // 0x6c0(0x210)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
