
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPWeaponRuntime.EActorPoolMethod
enum class EActorPoolMethod : int {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	EActorPoolMethod_MAX = 4
};

// Enum GPWeaponRuntime.EProjectileCustomReplicateRole
enum class EProjectileCustomReplicateRole : int {
	None = 0,
	Publisher = 1,
	Subscriber = 2,
	EProjectileCustomReplicateRole_MAX = 3
};

// Enum GPWeaponRuntime.EFakeBulletRole
enum class EFakeBulletRole : int {
	FBRoleNone = 0,
	FBRoleFake = 1,
	FBRoleMaster = 2,
	EFakeBulletRole_MAX = 3
};

// Enum GPWeaponRuntime.EWeaponBulletEvent
enum class EWeaponBulletEvent : int {
	EVENT_STOP = 0,
	EVENT_BOUNCE = 1,
	EVENT_EXPLOSION = 2,
	EVENT_MAX_max = 3
};

// Enum GPWeaponRuntime.EGPWeaponEasingType
enum class EGPWeaponEasingType : int {
	Linear = 0,
	EaseInSine = 1,
	EaseOutSine = 2,
	EaseInOutSine = 3,
	EaseInQuad = 4,
	EaseOutQuad = 5,
	EaseInOutQuad = 6,
	EaseInCubic = 7,
	EaseOutCubic = 8,
	EaseInOutCubic = 9,
	EaseInQuart = 10,
	EaseOutQuart = 11,
	EaseInOutQuart = 12,
	EaseInQuint = 13,
	EaseOutQuint = 14,
	EaseInOutQuint = 15,
	EaseInExpo = 16,
	EaseOutExpo = 17,
	EaseInOutExpo = 18,
	EaseInCirc = 19,
	EaseOutCirc = 20,
	EaseInOutCirc = 21,
	EaseInBack = 22,
	EaseOutBack = 23,
	EaseInOutBack = 24,
	EaseInElastic = 25,
	EaseOutElastic = 26,
	EaseInOutElastic = 27,
	EaseInBounce = 28,
	EaseOutBounce = 29,
	EaseInOutBounce = 30,
	EGPWeaponEasingType_MAX = 31
};

// Enum GPWeaponRuntime.EGPWeaponAnimHandIKType
enum class EGPWeaponAnimHandIKType : int {
	None = 0,
	Primary = 1,
	Pistol = 2,
	LongWeapon = 3,
	EGPWeaponAnimHandIKType_MAX = 4
};

// Enum GPWeaponRuntime.EWeaponOverrideUseAttachParentBound
enum class EWeaponOverrideUseAttachParentBound : int {
	Dont_Override = 0,
	Force_Dont_UseAttachParentBound = 1,
	Force_UseAttachParentBound = 2,
	EWeaponOverrideUseAttachParentBound_MAX = 3
};

// Enum GPWeaponRuntime.EWeaponRepCondition
enum class EWeaponRepCondition : int {
	None = 0,
	Ob = 1,
	EWeaponRepCondition_MAX = 2
};

// Enum GPWeaponRuntime.EGPWeaponFireModeSubType
enum class EGPWeaponFireModeSubType : int {
	Default = 0,
	Secondary = 1,
	EGPWeaponFireModeSubType_MAX = 2
};

// Enum GPWeaponRuntime.ESwitchWeaponContext
enum class ESwitchWeaponContext : int {
	Default = 0,
	Client = 1,
	Init = 2,
	Input = 3,
	Interact = 4,
	Preview = 5,
	AIController = 6,
	AILab = 7,
	AITask = 8,
	SafeHouse = 9,
	DSLogic = 10,
	InventoryManager = 11,
	BattleFieldCharacter = 12,
	Ability = 13,
	AIDifficulty = 14,
	Skill = 15,
	Looting = 16,
	FuncPVE = 17,
	RemoveWeapon = 18,
	Character = 19,
	MachineGun = 20,
	Vehicle = 21,
	SkillEnd = 22,
	Reborn = 23,
	WeaponBlueprint = 24,
	WeaponBase = 25,
	InitDefWeapon = 26,
	CharacterBase = 27,
	ImpendingDeathAction = 28,
	SOLEscapedStateAction = 29,
	SwitchEmptyHandComponent = 30,
	OnHelicopterAction = 31,
	GM = 32,
	CancelSwitchWeapon = 33,
	ESwitchWeaponContext_MAX = 34
};

// Enum GPWeaponRuntime.EWeaponAutoReloadOption
enum class EWeaponAutoReloadOption : int {
	OncePerState = 0,
	Always = 1,
	EWeaponAutoReloadOption_MAX = 2
};

// Enum GPWeaponRuntime.EHeadDetailType
enum class EHeadDetailType : int {
	None = 0,
	Head = 1,
	FrontHead = 2,
	FrontHeadDown = 3,
	LeftHead = 4,
	RightHead = 5,
	BackHead = 6,
	TopHead = 7,
	EHeadDetailType_MAX = 8
};

// Enum GPWeaponRuntime.EWeaponCancelCurrentStateReason
enum class EWeaponCancelCurrentStateReason : int {
	GM = 0,
	Knockback = 1,
	CancelWeaponReload = 2,
	InteractivePutWeapon = 3,
	TwoHandedGestureAction = 4,
	VaultAndClimb = 5,
	ApplySprayAction = 6,
	AssassinateGlobalAction = 7,
	OneHandedGestureAction = 8,
	RescueOperateAction = 9,
	SwitchClickSkillWeapon = 10,
	EnterSkillState = 11,
	WeaponBlueprintLibrary = 12,
	BowCancelCharging = 13,
	AbilityStopFire = 14,
	CancelPreFire = 15,
	VehicleStateChange = 16,
	Parachute = 17,
	EWeaponCancelCurrentStateReason_MAX = 18
};

// Enum GPWeaponRuntime.EGPWeaponTickFrequency
enum class EGPWeaponTickFrequency : int {
	Normal = 0,
	High = 1,
	Middle = 2,
	Low = 3,
	NotTick = 4,
	EGPWeaponTickFrequency_MAX = 5
};

// Enum GPWeaponRuntime.EGPWeaponFireSocketMode
enum class EGPWeaponFireSocketMode : int {
	Single = 0,
	Loop = 1,
	Random = 2,
	MeshOrder = 3,
	EGPWeaponFireSocketMode_MAX = 4
};

// Enum GPWeaponRuntime.EWeaponMeshHideReason
enum class EWeaponMeshHideReason : int {
	FuncAppearance = 0,
	FireThrowableWeapon = 1,
	FPPInteraction = 2,
	ThrowableWeaponAnimNotify = 3,
	EWeaponMeshHideReason_MAX = 4
};

// Enum GPWeaponRuntime.EWeaponAddAmmoType
enum class EWeaponAddAmmoType : int {
	AddWithNum = 0,
	AddWithPercent = 1,
	AddToFull = 2,
	EWeaponAddAmmoType_MAX = 3
};

// Enum GPWeaponRuntime.EWeaponConsumeAmmoType
enum class EWeaponConsumeAmmoType : int {
	Normal = 0,
	FireFreeAmmo = 1,
	RloadFreeAmmo = 2,
	EWeaponConsumeAmmoType_MAX = 3
};

// Enum GPWeaponRuntime.EInteractivePutWeaponType
enum class EInteractivePutWeaponType : int {
	FastUnEquip = 0,
	NomalUnEquip = 1,
	QuietUnEquip = 2,
	EInteractivePutWeaponType_MAX = 3
};

// Enum GPWeaponRuntime.EInteractiveGetWeaponType
enum class EInteractiveGetWeaponType : int {
	FastEquip = 0,
	NomalEquip = 1,
	QuietEquip = 2,
	EInteractiveGetWeaponType_MAX = 3
};

// Enum GPWeaponRuntime.EWeaponSwitchType
enum class EWeaponSwitchType : int {
	Default = 0,
	Quiet = 1,
	Instant = 2,
	GetWeaponQuiet = 3,
	PutWeaponQuiet = 4,
	GetWeaponFast = 5,
	PutWeaponFast = 6,
	GetAndPutWeaponFast = 7,
	PutQuietAndGetWeaponFast = 8,
	EWeaponSwitchType_MAX = 9
};

// Enum GPWeaponRuntime.EGPThrowableWeaponTypeForADS
enum class EGPThrowableWeaponTypeForADS : int {
	Damage = 0,
	Special = 1,
	Placement = 2,
	Max = 3
};

// Enum GPWeaponRuntime.EGPWeaponChangeClipMode
enum class EGPWeaponChangeClipMode : int {
	Replace = 0,
	OneByOne = 1,
	TooHotToReload = 2,
	EGPWeaponChangeClipMode_MAX = 3
};

// Enum GPWeaponRuntime.EGPWeaponFiringRateMode
enum class EGPWeaponFiringRateMode : int {
	Auto = 0,
	Burst = 1,
	Max = 2
};

// Enum GPWeaponRuntime.EGPWeaponFiringMode
enum class EGPWeaponFiringMode : int {
	Auto = 0,
	Single = 1,
	Burst = 2,
	ThrowHigh = 3,
	ThrowLow = 4,
	Max = 5
};

// Enum GPWeaponRuntime.EGPWeaponStateEvent
enum class EGPWeaponStateEvent : int {
	EStateEvent_None = 0,
	EStateEvent_Activate = 1,
	EStateEvent_ActivateNotEquip = 2,
	EStateEvent_BeginFire = 3,
	EStateEvent_BeginZoomAndFire = 4,
	EStateEvent_EndFire = 5,
	EStateEvent_BeginAltFire = 6,
	EStateEvent_EndAltFire = 7,
	EStateEvent_BeginChangeClip = 8,
	EStateEvent_CancelChangeClip = 9,
	EStateEvent_CancelChangeClipSingle = 10,
	EStateEvent_Deactivate = 11,
	EStateEvent_PutBackWeapon = 12,
	EStateEvent_PutBackWeaponNotUnEquip = 13,
	EStateEvent_BeginZooming = 14,
	EStateEvent_EndZooming = 15,
	EStateEvent_Pickup = 16,
	EStateEvent_StopShootAiming = 17,
	EStateEvent_BeginSwitchFireMode = 18,
	EStateEvent_NotifyBreak = 19,
	EStateEvent_CancelFire = 20,
	EStateEvent_CancelCurrentState = 21,
	EStateEvent_BeginInteraction = 22,
	EStateEvent_EndInteraction = 23,
	EStateEvent_BeginSwitchPot = 24,
	EStateEvent_Max = 25
};

// Enum GPWeaponRuntime.EGPWeaponStateType
enum class EGPWeaponStateType : int {
	EWeapState_None = 0,
	EWeapState_Active = 1,
	EWeapState_Inactive = 2,
	EWeapState_Equipping = 3,
	EWeapState_Unequipping = 4,
	EWeapState_PreFire = 5,
	EWeapState_KeepPreFire = 6,
	EWeapState_Firing = 7,
	EWeapState_PostFire = 8,
	EWeapState_ChangingClip = 9,
	EWeapState_Chamber = 10,
	EWeapState_Interaction = 11,
	EWeapState_Zoom = 12,
	EWeapState_AltFiring = 13,
	EWeapState_ZoomTransition = 14,
	EWeapState_SwitchFireMode = 15,
	EWeapState_BeginingInteraction = 16,
	EWeapState_CancelPreFire = 17,
	EWeapState_EndingInteraction = 18,
	EWeapState_SwitchPot = 19,
	EWeapState_MAX = 20
};

// Enum GPWeaponRuntime.EGPWeaponAppearanceAttachType
enum class EGPWeaponAppearanceAttachType : int {
	None = 0,
	Primary = 1,
	Assistant = 2,
	Grenade = 3,
	MeleeWeapon = 4,
	Pistol = 5,
	SecondaryWeapon = 6,
	EGPWeaponAppearanceAttachType_MAX = 7
};

// Enum GPWeaponRuntime.EGPWeaponAppearanceMeshType
enum class EGPWeaponAppearanceMeshType : int {
	ThirdPersonMesh = 0,
	FirstPersonMesh = 1,
	EGPWeaponAppearanceMeshType_MAX = 2
};

// Enum GPWeaponRuntime.EGPComponentSpawnCondition
enum class EGPComponentSpawnCondition : int {
	ECompInitCond_AlwaysSpawn = 0,
	ECompInitCond_Logic = 1,
	ECompInitCond_Client = 2,
	ECompInitCond_Server = 3,
	ECompInitCond_NotOwned_Tpp_Client = 4,
	ECompInitCond_Fpp_Client = 5,
	ECompInitCond_LocalFocus_Client = 6,
	ECompInitCond_MAX = 7
};

// Enum GPWeaponRuntime.EGPWeaponInnerEvent
enum class EGPWeaponInnerEvent : int {
	EInnerEvent_None = 0,
	EStateEvent_SwitchToIdle = 1,
	EStateEvent_BeginEquip = 2,
	EStateEvent_EndEquip = 3,
	EStateEvent_PreFire = 4,
	EStateEvent_BeginKeepPreFire = 5,
	EStateEvent_EndKeepPreFire = 6,
	EStateEvent_TimeoutAutoFire = 7,
	EStateEvent_CancelFire = 8,
	EStateEvent_BeginFire = 9,
	EStateEvent_NoDelayEndFire = 10,
	EStateEvent_EndFire = 11,
	EStateEvent_MeleeRealFire = 12,
	EStateEvent_PlugAfterFire = 13,
	EStateEvent_AfterFire = 14,
	EStateEvent_ZoomAfterPlug = 15,
	EStateEvent_BeginJumpFire = 16,
	EStateEvent_BeginZoom = 17,
	EStateEvent_BeginZoomAction = 18,
	EStateEvent_EndZoom = 19,
	EStateEvent_BeginChangeClip = 20,
	EStateEvent_CancelChangeClip = 21,
	EStateEvent_BeginChangeClipLogic = 22,
	EStateEvent_BeginChangeClip_Single = 23,
	EStateEvent_BeginChangeClip_Single_End = 24,
	EStateEvent_BeginChangeClip_FirstPartalSingle = 25,
	EStateEvent_BeginChangeClip_ContinuePartalSingle = 26,
	EStateEvent_BeginChangeClip_EmptyReload = 27,
	EStateEvent_BeginChangeClip_Normal = 28,
	EStateEvent_EndChangeClip = 29,
	EStateEvent_SwitchToInactive = 30,
	EStateEvent_BeginInteraction = 31,
	EStateEvent_EndInteraction = 32,
	EStateEvent_SwitchToInteraction = 33,
	EStateEvent_BeginSwitchPot = 34,
	EStateEvent_DoSwitchPot = 35,
	EStateEvent_EmptyClip = 36,
	EStateEvent_DryFire = 37,
	EStateEvent_StandToCrouch = 38,
	EStateEvent_StandToProne = 39,
	EStateEvent_CrouchToStand = 40,
	EStateEvent_CrouchToProne = 41,
	EStateEvent_ProneToStand = 42,
	EStateEvent_ProneToCrouch = 43,
	EStateEvent_InstantHit = 44,
	EStateEvent_SprayHit = 45,
	EStateEvent_BulletEffect = 46,
	EStateEvent_BeginSwitchFireMode = 47,
	EStateEvent_EndSwitchFireMode = 48,
	EStateEvent_ConfigBecomeEffective = 49,
	EStateEvent_DoFire = 50,
	EStateEvent_ReEquip = 51,
	EStateEvent_StateCacheBeginFire = 52,
	EStateEvent_StateCacheEndFire = 53,
	EStateEvent_Max = 54,
	EStateEvent_NotifyBreak = 55,
	EStateEvent_BreakEquip = 56,
	EInnerEvent_DoBeginZoom = 57,
	EInnerEvent_DoEndZoom = 58,
	EInnerEvent_OverHeat = 59,
	EInnerEvent_CoolDown = 60,
	EInnerEvent_CompoleteCoolDown = 61,
	EInnerEvent_CompleteLocking = 62,
	EInnerEvent_ModifyFireModeIndex = 63,
	EInnerEvent_ModifyFiringModeType = 64,
	EInnerEvent_NextFiringModeType = 65,
	EInnerEvent_FiringModeTypeChanged = 66,
	EInnerEvent_ModifyWeaponParts = 67,
	EInnerEvent_ModifyWeaponPartsReady = 68,
	EInnerEvent_InitModularWeaponParts = 69,
	EInnerEvent_ShowFullAmmoMag = 70,
	EInnerEvent_WeaponPartsDynamicAttrModifed = 71,
	EInnerEvent_WeaponAmmoDynamicAttrModifed = 72,
	EInnerEvent_WriteWeaponPartsDynamicAttr = 73,
	EInnerEvent_RotationBegin = 74,
	EInnerEvent_RotationEnd = 75,
	EInnerEvent_EquipPerk = 76,
	EInnerEvent_UnEquipPerk = 77,
	EInnerEvent_ClearState = 78,
	EInnerEvent_OwnerReplicated = 79,
	EInnerEvent_OnInitAbilityActorInfo = 80,
	EInnerEvent_3PExtraDataReplicated = 81,
	EInnerEvent_StateChanged = 82,
	EInnerEvent_BeginInspect = 83,
	EInnerEvent_EndInspect = 84,
	EInnerEvent_MakeDamage = 85,
	EInnerEvent_BulletHit = 86,
	EInnerEvent_BeginChamber = 87,
	EInnerEvent_ChamberMax = 88,
	EInnerEvent_CancelChamber = 89,
	EInnerEvent_AnimShellDrop = 90,
	EInnerEvent_Charging = 91,
	EInnerEvent_CancelCharge = 92,
	EInnerEvent_AnimEndFire = 93,
	EInnerEvent_ScopeParamOverrideChanged = 94,
	EInnerEvent_Max = 95,
	EStateEvent_Extend01 = 96,
	EInnerEvent_WeaponMeshAttached = 97,
	EInnerEvent_BipodUp = 98,
	EInnerEvent_BipodDown = 99,
	EInnerEvent_PowerFlashOn = 100,
	EInnerEvent_TacticalEquipUOn = 101,
	EInnerEvent_TacticalEquipUOff = 102,
	EInnerEvent_TacticalEquipU1On = 103,
	EInnerEvent_TacticalEquipU1Off = 104,
	EInnerEvent_TacticalEquipU2On = 105,
	EInnerEvent_TacticalEquipU2Off = 106,
	EInnerEvent_TacticalEquipROn = 107,
	EInnerEvent_TacticalEquipROff = 108,
	EInnerEvent_TacticalEquipR1On = 109,
	EInnerEvent_TacticalEquipR1Off = 110,
	EInnerEvent_TacticalEquipR2On = 111,
	EInnerEvent_TacticalEquipR2Off = 112,
	EInnerEvent_TacticalEquipDOn = 113,
	EInnerEvent_TacticalEquipDOff = 114,
	EInnerEvent_TacticalEquipD1On = 115,
	EInnerEvent_TacticalEquipD1Off = 116,
	EInnerEvent_TacticalEquipD2On = 117,
	EInnerEvent_TacticalEquipD2Off = 118,
	EInnerEvent_TacticalEquipLOn = 119,
	EInnerEvent_TacticalEquipLOff = 120,
	EInnerEvent_TacticalEquipL1On = 121,
	EInnerEvent_TacticalEquipL1Off = 122,
	EInnerEvent_TacticalEquipL2On = 123,
	EInnerEvent_TacticalEquipL2Off = 124,
	EInnerEvent_SwitchRangeScope = 125,
	EInnerEvent_BeginSideAiming = 126,
	EInnerEvent_EndSideAiming = 127,
	EInnerEvent_SwitchLaser = 128,
	EInnerEvent_ToggleRangeFinder = 129,
	EInnerEvent_CharacterOwnerChanged = 130,
	ENZAdapterEvent_Extend01 = 131,
	EInnerEvent_AutoAddAmmoComplete = 132,
	EStateEvent_LauncherBeginFire = 133,
	EGPWeaponInnerEvent_MAX = 134
};

// Enum GPWeaponRuntime.EGPWeaponMode
enum class EGPWeaponMode : int {
	EWeapMode_None = 0,
	EWeapMode_OwnerFirstPerson = 1,
	EWeapMode_OwnerThirdPerson = 2,
	EWeapMode_ObserverFirstPerson = 3,
	EWeapMode_ThirdPerson = 4,
	EWeapMode_MAX = 5
};

// Enum GPWeaponRuntime.EFiringModeContext
enum class EFiringModeContext : int {
	Blueprint = 0,
	DataTable = 1,
	WeaponDesc = 2,
	Input = 3,
	Max = 4
};

// Enum GPWeaponRuntime.EFireModeRole
enum class EFireModeRole : int {
	FireModeROLE_SimulatedProxy = 0,
	FireModeROLE_AutonomousProxy = 1,
	FireModeROLE_Authority = 2,
	FireModeROLE_MAX = 3
};

// Enum GPWeaponRuntime.EWeaponFuncAppearanceHideReason
enum class EWeaponFuncAppearanceHideReason : int {
	None = 0,
	HideAllWeapon = 1,
	AttachParentHidden = 2,
	StateHidden = 3,
	XPPHidden = 4,
	FPPAttachBack = 5,
	ErrorSocket = 6,
	FPPInteraction = 7,
	InPending = 8,
	WeaponFeatureChange = 9,
	Inactive = 10,
	DelayVisible = 11,
	ReplayWorld = 12,
	HideAllWeapon_ByExtraTag = 13,
	EWeaponFuncAppearanceHideReason_MAX = 14
};

// Enum GPWeaponRuntime.EGPPhysicalSurfaceGroup
enum class EGPPhysicalSurfaceGroup : int {
	Default = 0,
	Cement = 1,
	Soil = 2,
	Water = 3,
	Grass = 4,
	Glass = 5,
	Wood = 6,
	NoSurfaceEffect = 7,
	EGPPhysicalSurfaceGroup_MAX = 8
};

// Enum GPWeaponRuntime.EGPReplicatedDataOperation
enum class EGPReplicatedDataOperation : int {
	EGPReplicatedDataOperation_Add = 0,
	EGPReplicatedDataOperation_Delete = 1,
	EGPReplicatedDataOperation_Modify = 2,
	EGPReplicatedDataOperation_MAX = 3
};

// Enum GPWeaponRuntime.EWeaponThrowableExplosionType
enum class EWeaponThrowableExplosionType : int {
	None = 0,
	Hit = 1,
	Timer = 2,
	Stop = 3,
	Interval = 4,
	Manual = 5,
	HitGround = 6,
	HitEnemy = 7,
	EWeaponThrowableExplosionType_MAX = 8
};

// Enum GPWeaponRuntime.EWeaponThrowableEffectType
enum class EWeaponThrowableEffectType : int {
	None = 0,
	Damage = 1,
	Smoke = 2,
	Flash = 3,
	Incendiary = 4,
	EWeaponThrowableEffectType_MAX = 5
};

// Enum GPWeaponRuntime.ECharacterOwnerObserveState
enum class ECharacterOwnerObserveState : int {
	ObState_None = 0,
	ObState_PendingOb = 1,
	ObState_Observed = 2,
	ObState_MAX = 3
};

// ScriptStruct GPWeaponRuntime.GPWeaponDamageHitInfo
// Size: 0x20 (Inherited: 0x00)
struct FGPWeaponDamageHitInfo {
public:

	struct AActor* FromActor; // 0x00(0x08)
	struct AActor* ToActor; // 0x08(0x08)
	struct FVector HitLocation; // 0x10(0x0c)
	float DamgeAmount; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WorldActorPool
// Size: 0x68 (Inherited: 0x00)
struct FWorldActorPool {
public:

	struct TMap<struct UClass*, struct FActorPool> WorldActorPool; // 0x00(0x50)
	struct UWorld* PoolWorld; // 0x50(0x08)
	char pad_58[0x10]; // 0x58(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.ActorPool
// Size: 0x38 (Inherited: 0x00)
struct FActorPool {
public:

	struct TArray<struct FActorPoolElem> FreeActors; // 0x00(0x10)
	struct TArray<struct AActor*> InUseActors_Auto; // 0x10(0x10)
	struct TArray<struct AActor*> InUseActors_Manual; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.ActorPoolElem
// Size: 0x10 (Inherited: 0x00)
struct FActorPoolElem {
public:

	struct AActor* Actor; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPCircleArrayDataBase
// Size: 0x0c (Inherited: 0x00)
struct FGPCircleArrayDataBase {
public:

	int32_t Front; // 0x00(0x04)
	int32_t Rear; // 0x04(0x04)
	int32_t size; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.ProjectileRuntimeContext
// Size: 0x38 (Inherited: 0x00)
struct FProjectileRuntimeContext {
public:

	struct AGPProjectile* FakeProjectile; // 0x00(0x08)
	struct AGPProjectile* MasterProjectile; // 0x08(0x08)
	bool bHasFakeProjectileReleased; // 0x10(0x01)
	char pad_11[0x27]; // 0x11(0x27)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.ProjectileConfig
// Size: 0x28 (Inherited: 0x00)
struct FProjectileConfig {
public:

	struct UClass* ViewComponentClass; // 0x00(0x08)
	struct UClass* ViewMovementClass; // 0x08(0x08)
	float LifeSpanOnStop; // 0x10(0x04)
	float LifeSpan; // 0x14(0x04)
	bool bEnableTimeModify; // 0x18(0x01)
	bool bEnableNetJitterBuffer; // 0x19(0x01)
	bool bEnableTimeModifyOnSpawn; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	float NetJitterTolerant; // 0x1c(0x04)
	bool bSupportCustomReplicate; // 0x20(0x01)
	bool bEnableCustomReplicate; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float NetRelevantDistance; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.ProjectileTrajectory
// Size: 0x48 (Inherited: 0x00)
struct FProjectileTrajectory {
public:

	char pad_0[0x48]; // 0x00(0x48)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.RepProjectileTrajectory
// Size: 0x20 (Inherited: 0x00)
struct FRepProjectileTrajectory {
public:

	struct TArray<struct FProjectileTrajectoryItem> Data; // 0x00(0x10)
	int32_t Front; // 0x10(0x04)
	int32_t Rear; // 0x14(0x04)
	int32_t MaxSize; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPProjectileMovementHitInfo
// Size: 0x1c (Inherited: 0x00)
struct FGPProjectileMovementHitInfo {
public:

	struct FVector HitLocation; // 0x00(0x0c)
	struct FVector HitNormal; // 0x0c(0x0c)
	float MoveTime; // 0x18(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.PredictProjectilePathFixStepParams
// Size: 0x68 (Inherited: 0x60)
struct FPredictProjectilePathFixStepParams : public FPredictProjectilePathParams {
public:

	float ProjectileCapsuleHeight; // 0x60(0x04)
	float AirDragFactor; // 0x64(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponBitTag
// Size: 0x08 (Inherited: 0x00)
struct FGPWeaponBitTag {
public:

	uint64_t Value; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WeaponBulletBaseInitParam
// Size: 0x80 (Inherited: 0x00)
struct FWeaponBulletBaseInitParam {
public:

	struct FVector BulletSpawnLoc; // 0x00(0x0c)
	struct FRotator BulletSpawnRot; // 0x0c(0x0c)
	struct FVector InitVelocity; // 0x18(0x0c)
	float InitSpeed; // 0x24(0x04)
	float InitSpeedFor3P; // 0x28(0x04)
	float Gravity; // 0x2c(0x04)
	uint64_t FireId; // 0x30(0x08)
	uint64_t BulletIndex; // 0x38(0x08)
	float FireTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	uint64_t BulletId; // 0x48(0x08)
	enum class EFakeBulletRole FakeBulletRole; // 0x50(0x01)
	bool bMakeDamage; // 0x51(0x01)
	bool bReplicateTo1P; // 0x52(0x01)
	bool bReplicateTo3P; // 0x53(0x01)
	bool bEnableCustomReplication; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float NetRelevantDistance; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct AActor* WeaponOwner; // 0x60(0x08)
	struct ACHARACTER* CharacterOwner; // 0x68(0x08)
	struct UGPWeaponFireModeBase* FireMode; // 0x70(0x08)
	uint32_t VehicleId; // 0x78(0x04)
	bool bIsInVehicleLeanOut; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.RepBulletInfoArray
// Size: 0x118 (Inherited: 0x108)
struct FRepBulletInfoArray : public FFastArraySerializer {
public:

	struct TArray<struct FRepBulletInfo> Items; // 0x108(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.RepBulletInfo
// Size: 0x48 (Inherited: 0x0c)
struct FRepBulletInfo : public FFastArraySerializerItem {
public:

	int32_t BulletIndex; // 0x0c(0x04)
	struct FVector Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	float Speed; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct AActor* Instigator; // 0x30(0x08)
	struct AGPWeaponBulletProjectile* Bullet; // 0x38(0x08)
	bool bSpawnBullet; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.BulletInfo
// Size: 0x48 (Inherited: 0x00)
struct FBulletInfo {
public:

	int32_t BulletIndex; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FRotator Rotation; // 0x10(0x0c)
	float Speed; // 0x1c(0x04)
	bool bServerCheck; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct AActor* Instigator; // 0x28(0x08)
	bool bClientCheck; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct AGPWeaponBulletProjectile* Bullet; // 0x38(0x08)
	bool bSpawnBullet; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WeaponBulletTeleportMovement
// Size: 0x8c (Inherited: 0x00)
struct FWeaponBulletTeleportMovement {
public:

	char pad_0[0x8c]; // 0x00(0x8c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WeaponBulletRuntimeContext
// Size: 0x58 (Inherited: 0x00)
struct FWeaponBulletRuntimeContext {
public:

	struct UGPWeaponDataComponentFiring* DCFiring; // 0x00(0x08)
	struct FVector LastCheckLocation; // 0x08(0x0c)
	bool bHasGenerateDamage; // 0x14(0x01)
	bool bShouldMakeDamage; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	int64_t ProjectileMaxDamageDistanceSqr; // 0x18(0x08)
	float ProjectileViewFadeoutDistanceSqr; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x28(0x10)
	struct TArray<struct UPrimitiveComponent*> CompsToIgnore; // 0x38(0x10)
	int32_t ServerBulletID; // 0x48(0x04)
	char pad_4C[0x1]; // 0x4c(0x01)
	bool bValid; // 0x4d(0x01)
	char pad_4E[0xa]; // 0x4e(0x0a)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WeaponBulletProjectileInitParam
// Size: 0x28 (Inherited: 0x00)
struct FWeaponBulletProjectileInitParam {
public:

	float ReleaseDelayOnHit; // 0x00(0x04)
	float ViewHiddenDelayOnStop; // 0x04(0x04)
	bool bMoveByOwner; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	int64_t ProjectileMaxDamageDistance; // 0x10(0x08)
	float ProjectileViewFadeoutDistance; // 0x18(0x04)
	float BulletRadius; // 0x1c(0x04)
	float MinColCheckDistSq; // 0x20(0x04)
	enum class EActorPoolMethod ActorPoolMethod; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponBulletOnHitParams
// Size: 0x02 (Inherited: 0x00)
struct FGPWeaponBulletOnHitParams {
public:

	bool bMakeDamage; // 0x00(0x01)
	bool bMakeHitVfx; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.BulletSpawnParam
// Size: 0x20 (Inherited: 0x00)
struct FBulletSpawnParam {
public:

	char pad_0[0x20]; // 0x00(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.BulletPath
// Size: 0x20 (Inherited: 0x00)
struct FBulletPath {
public:

	struct FSoftObjectPath Path; // 0x00(0x18)
	struct UClass* BulletClass; // 0x18(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponBulletThrowableProjectileInfo
// Size: 0x60 (Inherited: 0x00)
struct FGPWeaponBulletThrowableProjectileInfo {
public:

	struct FVector InitLocation; // 0x00(0x0c)
	struct FVector InitVelocity; // 0x0c(0x0c)
	struct FVector RotationRate; // 0x18(0x0c)
	float MaxLifeTime; // 0x24(0x04)
	float GravityScale; // 0x28(0x04)
	bool bShouldBounce; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float Bounciness; // 0x30(0x04)
	float WallBounciness; // 0x34(0x04)
	float CeilingBounciness; // 0x38(0x04)
	float CharacterBounciness; // 0x3c(0x04)
	float Friction; // 0x40(0x04)
	float CharacterFriction; // 0x44(0x04)
	float SafeMoveDistance; // 0x48(0x04)
	float BounceVelocityStopLimited; // 0x4c(0x04)
	float DamageDistance; // 0x50(0x04)
	float FullExplodeDamageDistance; // 0x54(0x04)
	float FadeOutTime; // 0x58(0x04)
	int32_t FixedMoveFrame; // 0x5c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponDamageBodyPartInfo
// Size: 0x14 (Inherited: 0x00)
struct FGPWeaponDamageBodyPartInfo {
public:

	struct FName BoneName; // 0x00(0x08)
	struct FName DamageBoneName; // 0x08(0x08)
	float DamageShare; // 0x10(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponDamageValidationData
// Size: 0x10 (Inherited: 0x00)
struct FGPWeaponDamageValidationData {
public:

	struct FVector StartPos; // 0x00(0x0c)
	float ClientTime; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPRepFNamePropertyValue
// Size: 0x0c (Inherited: 0x00)
struct FGPRepFNamePropertyValue {
public:

	int32_t Index; // 0x00(0x04)
	struct FName OldValue; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPRepFloatPropertyValue
// Size: 0x08 (Inherited: 0x00)
struct FGPRepFloatPropertyValue {
public:

	int32_t Index; // 0x00(0x04)
	float OldValue; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPRepBoolPropertyValue
// Size: 0x08 (Inherited: 0x00)
struct FGPRepBoolPropertyValue {
public:

	int32_t Index; // 0x00(0x04)
	bool OldValue; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPRepIntPropertyValue
// Size: 0x08 (Inherited: 0x00)
struct FGPRepIntPropertyValue {
public:

	int32_t Index; // 0x00(0x04)
	int32_t OldValue; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponFireModeInstanceInfo
// Size: 0x10 (Inherited: 0x00)
struct FGPWeaponFireModeInstanceInfo {
public:

	char Index; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UGPWeaponFireModeBase* Instance; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponFireModeInfo
// Size: 0x28 (Inherited: 0x00)
struct FGPWeaponFireModeInfo {
public:

	struct UClass* FireModeClass; // 0x00(0x08)
	struct TArray<enum class EGPWeaponFiringMode> SupportFiringModes; // 0x08(0x10)
	enum class EGPWeaponFiringMode DefaultFiringMode; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UGPWeaponFireModeParamsBase* FireModeParam; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WeaponHeadDefine
// Size: 0x01 (Inherited: 0x00)
struct FWeaponHeadDefine {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.BulletModeConfig
// Size: 0x18 (Inherited: 0x00)
struct FBulletModeConfig {
public:

	bool b1PSpawnBullet; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MaxPingFor1PSpawnBullet; // 0x04(0x04)
	bool b1PMakeDamage; // 0x08(0x01)
	bool bDSSpawnBullet; // 0x09(0x01)
	bool bDSMakeDamage; // 0x0a(0x01)
	bool bReplicateTo1P; // 0x0b(0x01)
	bool bReplicateTo3P; // 0x0c(0x01)
	bool bEnableCustomReplication; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float NetRelevantDistance; // 0x10(0x04)
	bool b3PSpawnBullet; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WeaponFeatureOptions
// Size: 0x20 (Inherited: 0x00)
struct FWeaponFeatureOptions {
public:

	bool bShowWeaponMesh; // 0x00(0x01)
	bool bWeaponMeshCastShadow; // 0x01(0x01)
	bool bEnableWeaponAnim; // 0x02(0x01)
	bool bEnableCharacterAnim; // 0x03(0x01)
	bool bEnableCharacterFireAnim; // 0x04(0x01)
	bool bEnableEffect; // 0x05(0x01)
	bool bEnableMuzzleFlashEffect; // 0x06(0x01)
	bool bEnableShellDropEffect; // 0x07(0x01)
	bool bEnableMuzzleTrailEffect; // 0x08(0x01)
	bool bEnableFireAudio; // 0x09(0x01)
	bool bEnableOtherAudio; // 0x0a(0x01)
	bool bEnableFireEvent; // 0x0b(0x01)
	bool bEnableReloadEvent; // 0x0c(0x01)
	bool bEnableOtherEvents; // 0x0d(0x01)
	bool bWeaponSpawnDelay; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	float SwitchWeaponRetryInterval; // 0x10(0x04)
	enum class EGPWeaponTickFrequency WeaponDataCompAnimTickFrequency; // 0x14(0x01)
	enum class EGPWeaponTickFrequency WeaponSkeletalMeshCompTickFrequency; // 0x15(0x01)
	enum class EGPWeaponTickFrequency WeaponFuncCompAppearanceTickFrequency; // 0x16(0x01)
	enum class EGPWeaponTickFrequency NormalWeaponPartTickFrequency; // 0x17(0x01)
	enum class EGPWeaponTickFrequency HighlightWeaponPartTickFrequency; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float LaserAdapterTickInterval; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponHitInfo
// Size: 0xf0 (Inherited: 0x00)
struct FGPWeaponHitInfo {
public:

	char DamageType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t FireId; // 0x08(0x08)
	struct FHitResult HitResult; // 0x10(0x88)
	uint16_t BulletIndex; // 0x98(0x02)
	char pad_9A[0x2]; // 0x9a(0x02)
	struct FVector StartLocation; // 0x9c(0x0c)
	struct FVector StartDirection; // 0xa8(0x0c)
	float FireTime; // 0xb4(0x04)
	struct TWeakObjectPtr<struct AActor> BulletActor; // 0xb8(0x08)
	struct TWeakObjectPtr<struct AActor> CharacterOwner; // 0xc0(0x08)
	struct FVector RadialLocation; // 0xc8(0x0c)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct AActor*> IgnoreActors; // 0xd8(0x10)
	uint32_t VehicleId; // 0xe8(0x04)
	bool bIsInVehicleLeanOut; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.BeginFireEventParam
// Size: 0x10 (Inherited: 0x00)
struct FBeginFireEventParam {
public:

	uint64_t FireId; // 0x00(0x08)
	float LastFireTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponEventObject
// Size: 0x01 (Inherited: 0x00)
struct FGPWeaponEventObject {
public:

	char bNoNeedPlayAnim : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WeaponFireBulletInfo
// Size: 0xd0 (Inherited: 0x00)
struct FWeaponFireBulletInfo {
public:

	uint64_t BulletGuid; // 0x00(0x08)
	uint64_t BulletId; // 0x08(0x08)
	struct FVector SpawnLocation; // 0x10(0x0c)
	struct FRotator SpawnRotation; // 0x1c(0x0c)
	struct FRotator FireRotation; // 0x28(0x0c)
	struct FVector OwnerVelocity; // 0x34(0x0c)
	struct AActor* HomingTarget; // 0x40(0x08)
	struct FHitResult PredictHitResult; // 0x48(0x88)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponMeleeComboData
// Size: 0x28 (Inherited: 0x00)
struct FGPWeaponMeleeComboData {
public:

	struct FName AnimSectionName; // 0x00(0x08)
	float AttackTime; // 0x08(0x04)
	float AttackCastTime; // 0x0c(0x04)
	float AttackBackswingTime; // 0x10(0x04)
	float AttackWaitTime; // 0x14(0x04)
	float AttackRange; // 0x18(0x04)
	float AttackRadius; // 0x1c(0x04)
	int64_t AttackId; // 0x20(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponPenTrationHitResult
// Size: 0x90 (Inherited: 0x00)
struct FGPWeaponPenTrationHitResult {
public:

	char pad_0[0x90]; // 0x00(0x90)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponPenetrationModifier
// Size: 0x0c (Inherited: 0x00)
struct FGPWeaponPenetrationModifier {
public:

	float DamageModifier; // 0x00(0x04)
	float DistanceModifier; // 0x04(0x04)
	float StaggerForceModifier; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.FireCacheEvent
// Size: 0x08 (Inherited: 0x00)
struct FFireCacheEvent {
public:

	char pad_0[0x8]; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponFireRecordHitInfo
// Size: 0xb0 (Inherited: 0x00)
struct FGPWeaponFireRecordHitInfo {
public:

	char pad_0[0xb0]; // 0x00(0xb0)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.FireSocketInfo
// Size: 0x10 (Inherited: 0x00)
struct FFireSocketInfo {
public:

	struct TWeakObjectPtr<struct UMeshComponent> MeshComponent; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WeaponSocketInfo
// Size: 0x10 (Inherited: 0x00)
struct FWeaponSocketInfo {
public:

	struct TArray<struct FWeaponSocketItem> Items; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WeaponSocketItem
// Size: 0x0c (Inherited: 0x00)
struct FWeaponSocketItem {
public:

	int32_t EquipPosition; // 0x00(0x04)
	struct FName SocketName; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPPhysicalSurfaceAtlasInfo
// Size: 0x02 (Inherited: 0x00)
struct FGPPhysicalSurfaceAtlasInfo {
public:

	enum class EPhysicalSurface TargetSurfaceType; // 0x00(0x01)
	char bHideDecal : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPPhysicalSurfaceGroupInfo
// Size: 0x18 (Inherited: 0x00)
struct FGPPhysicalSurfaceGroupInfo {
public:

	enum class EGPPhysicalSurfaceGroup GroupType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EPhysicalSurface> SurfaceTypeList; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponMessageIndirectObjectRef
// Size: 0x08 (Inherited: 0x00)
struct FGPWeaponMessageIndirectObjectRef {
public:

	struct UObject* obj; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WeaponFrameNumber
// Size: 0x10 (Inherited: 0x00)
struct FWeaponFrameNumber {
public:

	struct AGameStateBase* CacheGS; // 0x00(0x08)
	struct UWorld* World; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponAttachmentGenerateInfo
// Size: 0x10 (Inherited: 0x00)
struct FGPWeaponAttachmentGenerateInfo {
public:

	struct FName AttachmentKeyName; // 0x00(0x08)
	struct UClass* AttachmentClassType; // 0x08(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponRepDataArray
// Size: 0x10 (Inherited: 0x00)
struct FGPWeaponRepDataArray {
public:

	struct TArray<struct FGPReplicatedWeaponData> Items; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponEventRepInfoFastArray
// Size: 0x118 (Inherited: 0x108)
struct FGPWeaponEventRepInfoFastArray : public FFastArraySerializer {
public:

	struct TArray<struct FGPWeaponEventRepInfo> Items; // 0x108(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponDataOperationInfo
// Size: 0xa8 (Inherited: 0x00)
struct FGPWeaponDataOperationInfo {
public:

	uint32_t DataCompNameHash; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGPIntWeaponDataOperation> IntDataArray; // 0x08(0x10)
	struct TArray<struct FGPFloatWeaponDataOperation> FloatDataArray; // 0x18(0x10)
	struct TArray<struct FGPFNameWeaponDataOperation> FNameDataArray; // 0x28(0x10)
	struct TArray<struct FGPIntWeaponDataOperation> EnumDataArray; // 0x38(0x10)
	struct TArray<struct FGPBoolWeaponDataOperation> BoolDataArray; // 0x48(0x10)
	struct TArray<struct FGPIntWeaponDataOperation> MutableIntDataArray; // 0x58(0x10)
	struct TArray<struct FGPFloatWeaponDataOperation> MutableFloatDataArray; // 0x68(0x10)
	struct TArray<struct FGPFNameWeaponDataOperation> MutableFNameDataArray; // 0x78(0x10)
	struct TArray<struct FGPIntWeaponDataOperation> MutableEnumDataArray; // 0x88(0x10)
	struct TArray<struct FGPBoolWeaponDataOperation> MutableBoolDataArray; // 0x98(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponRepInfoPairFastArray
// Size: 0x118 (Inherited: 0x108)
struct FGPWeaponRepInfoPairFastArray : public FFastArraySerializer {
public:

	struct TArray<struct FGPWeaponRepInfoPair> Items; // 0x108(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.ProjectileTimeProxy
// Size: 0x2c (Inherited: 0x00)
struct FProjectileTimeProxy {
public:

	char pad_0[0x2c]; // 0x00(0x2c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.RepWeaponStateTimeLine
// Size: 0x20 (Inherited: 0x00)
struct FRepWeaponStateTimeLine {
public:

	struct TArray<struct FStateFrame> Data; // 0x00(0x10)
	int32_t Front; // 0x10(0x04)
	int32_t Rear; // 0x14(0x04)
	int32_t MaxSize; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WeaponIdentity
// Size: 0x04 (Inherited: 0x00)
struct FWeaponIdentity {
public:

	uint32_t UniqueId; // 0x00(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.ProjectileTrajectoryItem
// Size: 0x2c (Inherited: 0x00)
struct FProjectileTrajectoryItem {
public:

	char Flag; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Time; // 0x04(0x04)
	struct FVector Position; // 0x08(0x0c)
	struct FVector Velocity; // 0x14(0x0c)
	struct FRotator Rotator; // 0x20(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.ProjectileEvent
// Size: 0x18 (Inherited: 0x00)
struct FProjectileEvent {
public:

	float Time; // 0x00(0x04)
	char Event; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FVector Position; // 0x08(0x0c)
	bool bMakeHitVfx; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.RPGExplosionInfo
// Size: 0x20 (Inherited: 0x00)
struct FRPGExplosionInfo {
public:

	enum class EPhysicalSurface ProjectileHitSurface; // 0x00(0x01)
	bool bHitLandscape; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector ExplosionPlane; // 0x04(0x0c)
	struct FVector Position; // 0x10(0x0c)
	bool bMakeHitVfx; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.BulletHitRepInfo
// Size: 0xa8 (Inherited: 0x00)
struct FBulletHitRepInfo {
public:

	char pad_0[0x8]; // 0x00(0x08)
	uint64_t BulletGuid; // 0x08(0x08)
	struct FHitResult HitResult; // 0x10(0x88)
	float InitSpeedFor3P; // 0x98(0x04)
	bool bAfterRPCOpt; // 0x9c(0x01)
	bool bHitLandscape; // 0x9d(0x01)
	bool bHitCharacterMesh; // 0x9e(0x01)
	bool bClientHitStaticSceneObject; // 0x9f(0x01)
	bool bClientHitStaticSceneLandScape; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WeaponFireMulticastInfo
// Size: 0x38 (Inherited: 0x00)
struct FWeaponFireMulticastInfo {
public:

	char pad_0[0x8]; // 0x00(0x08)
	char BulletIndex; // 0x08(0x01)
	char pad_9[0x1]; // 0x09(0x01)
	uint16_t NewAmmoCount; // 0x0a(0x02)
	char ComboNumber; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FWeaponFireBulletInfo> BulletInfos; // 0x10(0x10)
	struct FVector AimLoc; // 0x20(0x0c)
	float AimPitch; // 0x2c(0x04)
	float AimYaw; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponAttachInfo
// Size: 0x40 (Inherited: 0x00)
struct FGPWeaponAttachInfo {
public:

	enum class EGPWeaponAppearanceAttachType AttachType; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FTransform AttachOffset; // 0x10(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPReplicatedBoolWeaponData
// Size: 0x04 (Inherited: 0x00)
struct FGPReplicatedBoolWeaponData {
public:

	uint16_t DataIndex; // 0x00(0x02)
	bool DataValue; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPReplicatedIntWeaponData
// Size: 0x08 (Inherited: 0x00)
struct FGPReplicatedIntWeaponData {
public:

	uint16_t DataIndex; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t DataValue; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPReplicatedFNameWeaponData
// Size: 0x0c (Inherited: 0x00)
struct FGPReplicatedFNameWeaponData {
public:

	uint16_t DataIndex; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName DataValue; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPReplicatedFloatWeaponData
// Size: 0x08 (Inherited: 0x00)
struct FGPReplicatedFloatWeaponData {
public:

	uint16_t DataIndex; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	float DataValue; // 0x04(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPFastWeaponBPClassPath
// Size: 0x38 (Inherited: 0x00)
struct FGPFastWeaponBPClassPath {
public:

	char FastWeaponBPClassPathType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t FastWeaponBPClassId; // 0x08(0x08)
	/*struct TSoftClassPtr<UObject>*/char WeaponClassPath[0x28]; // 0x10(0x28)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.BasePreViewFrame
// Size: 0x28 (Inherited: 0x00)
struct FBasePreViewFrame {
public:

	char pad_0[0x8]; // 0x00(0x08)
	int32_t LocalFrameNo; // 0x08(0x04)
	int32_t RemoteFrameNo; // 0x0c(0x04)
	int32_t DepFrameNo; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
	float WorldTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WeaponDPVSProxy
// Size: 0x18 (Inherited: 0x00)
struct FWeaponDPVSProxy {
public:

	float LastUpdateServerTimeSeconds; // 0x00(0x04)
	struct FWeaponIdentity WeaponIdentity; // 0x04(0x04)
	struct FVector_NetQuantize10 WeaponActorLocation_RebaseOnZero; // 0x08(0x0c)
	int32_t WeaponActorRotation_Compressed; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WeaponReplicateComponentInfo
// Size: 0x18 (Inherited: 0x00)
struct FWeaponReplicateComponentInfo {
public:

	struct FWeaponIdentity WeaponIdentity; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<uint32_t> DataCompNameHashList; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.SlotActiveWeaponInfo
// Size: 0x20 (Inherited: 0x00)
struct FSlotActiveWeaponInfo {
public:

	/*struct TScriptInterface<IGPWeaponInterface>*/char CurrActiveWeaponAttachment[0x10]; // 0x00(0x10)
	struct FWeaponIdentity CurActiveWeaponIdentity; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPReplicatedWeaponData
// Size: 0x58 (Inherited: 0x00)
struct FGPReplicatedWeaponData {
public:

	struct FWeaponIdentity WeaponIdentity; // 0x00(0x04)
	uint32_t DataCompNameHash; // 0x04(0x04)
	struct TArray<struct FGPReplicatedIntWeaponData> IntDataArray; // 0x08(0x10)
	struct TArray<struct FGPReplicatedFloatWeaponData> FloatDataArray; // 0x18(0x10)
	struct TArray<struct FGPReplicatedFNameWeaponData> FNameDataArray; // 0x28(0x10)
	struct TArray<struct FGPReplicatedIntWeaponData> EnumDataArray; // 0x38(0x10)
	struct TArray<struct FGPReplicatedBoolWeaponData> BoolDataArray; // 0x48(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponRepData
// Size: 0x18 (Inherited: 0x00)
struct FGPWeaponRepData {
public:

	struct FWeaponIdentity WeaponIdentity; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGPReplicatedWeaponData> WeaponDataInfo; // 0x08(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponEventRepInfo
// Size: 0x1c (Inherited: 0x0c)
struct FGPWeaponEventRepInfo : public FFastArraySerializerItem {
public:

	struct FWeaponIdentity WeaponIdentity; // 0x0c(0x04)
	char WeaponRepStateEventType; // 0x10(0x01)
	char WeapRepContTimes; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	uint32_t WeapRepFrameNumber; // 0x14(0x04)
	char WeapRepInWeaponIndex; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.RepProjectileTrajectoryItem
// Size: 0x38 (Inherited: 0x00)
struct FRepProjectileTrajectoryItem {
public:

	uint64_t Guid; // 0x00(0x08)
	struct FProjectileTrajectoryItem TrajectoryItem; // 0x08(0x2c)
	char pad_34[0x4]; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.RepProjectileEvent
// Size: 0x20 (Inherited: 0x00)
struct FRepProjectileEvent {
public:

	uint64_t Guid; // 0x00(0x08)
	struct FProjectileEvent Event; // 0x08(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.RepRPGExplosionInfo
// Size: 0x28 (Inherited: 0x00)
struct FRepRPGExplosionInfo {
public:

	uint64_t Guid; // 0x00(0x08)
	struct FRPGExplosionInfo RPGExplosionInfo; // 0x08(0x20)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.BulletHitInfo
// Size: 0xc8 (Inherited: 0xa8)
struct FBulletHitInfo : public FBulletHitRepInfo {
public:

	uint64_t BulletIndex; // 0xa8(0x08)
	struct FVector SpawnLocation; // 0xb0(0x0c)
	float Timestamp; // 0xbc(0x04)
	char pad_C0[0x8]; // 0xc0(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponHitImpactRepInfo
// Size: 0xb0 (Inherited: 0x00)
struct FGPWeaponHitImpactRepInfo {
public:

	char WeaponSlot; // 0x00(0x01)
	bool bFppPlay; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FBulletHitRepInfo BulletHitRepInfo; // 0x08(0xa8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.WeaponFireRepInfo
// Size: 0x80 (Inherited: 0x38)
struct FWeaponFireRepInfo : public FWeaponFireMulticastInfo {
public:

	float InitSpeed; // 0x38(0x04)
	float InitSpeedFor3P; // 0x3c(0x04)
	uint64_t FireId; // 0x40(0x08)
	uint32_t VehicleId; // 0x48(0x04)
	bool bIsVehicleLeanOut; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32_t FireStateFrameNo; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	uint64_t AmmoId; // 0x58(0x08)
	float FireTimeStamp; // 0x60(0x04)
	float ClientLogicFireTimeStamp; // 0x64(0x04)
	float ServerDeltaTime; // 0x68(0x04)
	bool ForceMakeDamageOnDS; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	struct FVector CharacterOwnerLoc; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponMesh
// Size: 0xb0 (Inherited: 0x00)
struct FGPWeaponMesh {
public:

	enum class EGPWeaponAppearanceMeshType MeshType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSoftObjectPath MeshObjectPath; // 0x08(0x18)
	/*struct TSoftClassPtr<UObject>*/char MeshAnimClass[0x28]; // 0x20(0x28)
	bool bEnablePhyicals; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FName CollisionProfileName; // 0x4c(0x08)
	bool bNeedBlockBullet; // 0x54(0x01)
	char pad_55[0xb]; // 0x55(0x0b)
	struct FGPWeaponAttachInfo HangBackInfo; // 0x60(0x40)
	float HangBackDelaySeconds; // 0xa0(0x04)
	float HangFrontDelaySeconds; // 0xa4(0x04)
	char pad_A8[0x8]; // 0xa8(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPBoolWeaponDataOperation
// Size: 0x06 (Inherited: 0x00)
struct FGPBoolWeaponDataOperation {
public:

	enum class EGPReplicatedDataOperation Operation; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	struct FGPReplicatedBoolWeaponData WeaponData; // 0x02(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPIntWeaponDataOperation
// Size: 0x0c (Inherited: 0x00)
struct FGPIntWeaponDataOperation {
public:

	enum class EGPReplicatedDataOperation Operation; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGPReplicatedIntWeaponData WeaponData; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPFNameWeaponDataOperation
// Size: 0x10 (Inherited: 0x00)
struct FGPFNameWeaponDataOperation {
public:

	enum class EGPReplicatedDataOperation Operation; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGPReplicatedFNameWeaponData WeaponData; // 0x04(0x0c)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPFloatWeaponDataOperation
// Size: 0x0c (Inherited: 0x00)
struct FGPFloatWeaponDataOperation {
public:

	enum class EGPReplicatedDataOperation Operation; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGPReplicatedFloatWeaponData WeaponData; // 0x04(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.GPWeaponRepInfoPair
// Size: 0x58 (Inherited: 0x0c)
struct FGPWeaponRepInfoPair : public FFastArraySerializerItem {
public:

	bool bShouldReserveLastWeapon; // 0x0c(0x01)
	enum class EWeaponSwitchType SwitchType; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct FWeaponIdentity WeaponIdentity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FGPFastWeaponBPClassPath WeaponBPClassPath; // 0x18(0x38)
	uint32_t LastActiveFrame; // 0x50(0x04)
	char WeaponSlot; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPWeaponRuntime.StateFrame
// Size: 0x30 (Inherited: 0x28)
struct FStateFrame : public FBasePreViewFrame {
public:

	enum class EGPWeaponStateType LastStateType; // 0x28(0x01)
	enum class EGPWeaponStateType StateType; // 0x29(0x01)
	enum class EGPWeaponStateEvent EventType; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
