
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPGameHud.GameHUDSate
enum class GameHUDSate : int {
	GHS_None = 0,
	GHS_Dead = 1,
	GHS_Firing = 2,
	GHS_Aiming = 3,
	GHS_Settlement = 4,
	GHS_OpenMap = 5,
	GHS_Dying = 6,
	GHS_PrepareTime = 7,
	GHS_UseItem = 8,
	GHS_VaultAndClimb = 9,
	GHS_Operating3DUI = 10,
	GHS_CutScene = 11,
	GHS_DriveVehicle = 12,
	GHS_RideVehicle = 13,
	GHS_UseHeavyMachineGun = 14,
	GHS_Reloading = 15,
	GHS_DisposalBomb = 16,
	GHS_RescueSomeOne = 17,
	GHS_Burden = 18,
	GHS_OB = 19,
	GHS_ForbidFire = 20,
	GHS_ClimbLadder = 21,
	GHS_SwitchAds = 22,
	GHS_SwitchPot = 23,
	GHS_UseTelescope = 24,
	GHS_Escaping = 25,
	GHS_Monitor = 26,
	GHS_PVEQuestPanelOnly = 27,
	GHS_VehicleLeanOut = 28,
	GHS_SOLQuestOperation = 29,
	GHS_SeamlessGameplay = 30,
	GHS_Redeploy = 31,
	GHS_FPPView = 32,
	GHS_InteractOnly = 33,
	GHS_Prone = 34,
	GHS_COUNTDOWN = 35,
	GHS_SOLEventSilent = 36,
	GHS_BeingRescue = 37,
	GHS_ScoreTips = 38,
	GHS_BattleReportTips = 39,
	GHS_KillerMark = 40,
	GHS_RoulettePanel = 41,
	GHS_SOLEvacuation = 42,
	GHS_WeaponChange = 43,
	GHS_VehicleForbidShoot = 44,
	GHS_VehicleMode_Common = 45,
	GHS_VehicleMode_Skill = 46,
	GHS_RedeployView = 47,
	GHS_Assassinate = 48,
	GHS_PlayingSubTitle = 49,
	GHS_SOLEvacuationPOI = 50,
	GHS_PCControlMode = 51,
	GHS_UseDetectorSkill = 52,
	GHS_BattleScoreDetails = 53,
	GHS_UseZipline = 54,
	GHS_Breakthrough_Transitioning = 55,
	GHS_LiveSpectate = 56,
	GHS_VehicleForbidXPPChange = 57,
	GHS_BreakthroughTopTimeCountDown = 58,
	GHS_VehicleWeapon = 59,
	GHS_RaidRailRide = 60,
	GHS_Tutorial = 61,
	GHS_ObserverMode = 62,
	GHS_StingerMissile = 63,
	GHS_ContractAccess = 64,
	GHS_BreakthroughPreMatchWaitPlayer = 65,
	GHS_BreakthroughPreMatchChooseArm = 66,
	GHS_BreakthroughPreMatchFirstDeploy = 67,
	GHS_SOLBannerFlyIcon = 68,
	GHS_BulletTips = 69,
	GHS_AmmoAddTips = 70,
	GHS_SOLRadioInfoView = 71,
	GHS_SOLCaptureView = 72,
	GHS_SOLExitPayment = 73,
	GHS_BreakthroughSpecialStrongBroadcast = 74,
	GHS_BreakthroughSectorActivedBroadcast = 75,
	GHS_BreakthroughSectorAnchorCapView = 76,
	GHS_SafeAreaView = 77,
	GHS_BlueprintWeapon = 78,
	GHS_BlueprintWeaponTips = 79,
	GHS_SOLEventProgress = 80,
	GHS_HackPCInfoView = 81,
	GHS_SOLContract = 82,
	GHS_SOLContractProgress = 83,
	GHS_SOLContractVote = 84,
	GHS_SOLPOITips = 85,
	GHS_UseBow = 86,
	GHS_BowCanCharge = 87,
	GHS_DyingView = 88,
	GHS_MiniMapDangerous = 89,
	GHS_CountDownViewNew = 90,
	GHS_SeamlessEntry = 91,
	GHS_SeamlessEntry_Tutorial = 92,
	GHS_BreakthroughSupportReleaseView = 93,
	GHS_BlueprintWeaponEstimatedTime = 94,
	GHS_RealOpenBag = 95,
	GHS_RealOpenLoot = 96,
	GHS_RealLootSearching = 97,
	GHS_CodedLockView = 98,
	GHS_SOLKillerInfoCardView = 99,
	GHS_ChatWindow = 100,
	GHS_WeaponInspect = 101,
	GHS_InteractPanel = 102,
	GHS_InteractRescue = 103,
	GHS_HudHitFeedBack = 104,
	GHS_EscPanel = 105,
	GHS_MarkingRoulette = 106,
	GHS_ContractInManningArea = 107,
	GHS_VehicleWeaponDriver = 108,
	GHS_DeathDamageInfoPanel = 109,
	GHS_Redeploy_Rising = 110,
	GHS_UseElectricBow = 111,
	GHS_LiveReplay = 112,
	GHS_OBReplay = 113,
	GHS_RedeploySelectVehicle = 114,
	GHS_RedeployHeroInfo = 115,
	GHS_RedeployArmSelectedView = 116,
	GHS_UnlockingView = 117,
	GHS_SlienceMove = 118,
	GHS_CommonCountDownView = 119,
	GHS_BreakthroughWeakBroadcast = 120,
	GHS_SupportHudMode = 121,
	GHS_BreakthroughCharacterTransitionGuidanceEnd = 122,
	GHS_WholeRedeploy = 123,
	GHS_ScouterView = 124,
	GHS_ScouterTipsView = 125,
	GHS_GuidedCruiseMissile = 126,
	GHS_HDPerformance = 127,
	GHS_CommercializationRoulette = 128,
	GHS_AmmoRoulette = 129,
	GHS_MPRankRoulette = 130,
	GHS_WeaponScopeRoulette = 131,
	GHS_MedicRoulette = 132,
	GHS_SafeHouseRange = 133,
	GHS_SafeHouseRangeInLane = 134,
	GHS_FirstDeployCountDown = 135,
	GHS_RedeploySelectArmItemHud = 136,
	GHS_FiringBleeding = 137,
	GHS_ElectricArrowBleeding = 138,
	GHS_SkillProcessBar = 139,
	GHS_BreakthroughIconStrongBroadcast = 140,
	GHS_SnoicDirView = 141,
	GHS_UASActionProgressBar = 142,
	GHS_OpenParachute = 143,
	GHS_FirefightingAction = 144,
	GHS_CommonCancelBtn = 145,
	GHS_FlashDroneScreenEffect = 146,
	GHS_OpenMoss = 147,
	GHS_RedeployWeaponStoreHud = 148,
	GHS_RedeployWeaponPresetHud = 149,
	GHS_ActiveAdrenaline = 150,
	GHS_UseThrowBlocking = 151,
	GHS_BreakthroughOrderItemBroadcast = 152,
	GHS_GuideDisableInput = 153,
	GHS_TutorialHideAllHUD = 154,
	GHS_LoadingHideAllHUD = 155,
	GHS_GlobalHideAllHUD = 156,
	GHS_MAX = 157
};

// Enum GPGameHud.EHUDCreateType
enum class EHUDCreateType : int {
	OnDemand = 0,
	OnDemandButPreload = 1,
	OnDemandButPreloadAndShow = 2,
	Auto = 3,
	AutoAndBlockGameFlow = 4,
	AutoAndShow = 5,
	AutoAndShowAndBlockGameFlow = 6,
	EHUDCreateType_MAX = 7
};

// Enum GPGameHud.VisibleChannel
enum class VisibleChannel : int {
	VisibleChannel_1 = 0,
	VisibleChannel_2 = 1,
	VisibleChannel_3 = 2,
	VisibleChannel_4 = 3,
	VisibleChannel_5 = 4,
	VisibleChannel_6 = 5,
	VisibleChannel_7 = 6,
	VisibleChannel_8 = 7,
	VisibleChannel_MAX = 8
};

// Enum GPGameHud.LayerZorder
enum class LayerZorder : int {
	Zorder_None = 0,
	Zorder_ScreenEffect = 1,
	Zorder_Mark = 2,
	Zorder_Hint = 3,
	Zorder_Feedback = 4,
	Zorder_Common = 5,
	Zorder_Touch = 6,
	Zorder_Popup = 7,
	Zorder_LargePopup = 8,
	Zorder_MAX = 9
};

// Enum GPGameHud.EUIViewUpdateFrequency
enum class EUIViewUpdateFrequency : int {
	EveryFrame = 0,
	HighFrequency = 1,
	MidFrequency = 2,
	LowFrequency = 3,
	Freeze = 4,
	EUIViewUpdateFrequency_MAX = 5
};

// Enum GPGameHud.SelectedImgState
enum class SelectedImgState : int {
	SelectedImgState_Zero = 0,
	SelectedImgState_One = 1,
	SelectedImgState_Reduce = 2,
	SelectedImgState_MAX = 3
};

// ScriptStruct GPGameHud.HudOnShowPassInitParam
// Size: 0x18 (Inherited: 0x00)
struct FHudOnShowPassInitParam {
public:

	char Uint8Value1; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t Uint64Value1; // 0x08(0x08)
	uint64_t Uint64Value2; // 0x10(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameHud.BaseUIView_Params
// Size: 0x08 (Inherited: 0x00)
struct FBaseUIView_Params {
public:

	struct UBaseUIView* View; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameHud.UIDebugItem
// Size: 0x20 (Inherited: 0x00)
struct FUIDebugItem {
public:

	struct UBaseUIView* BaseUIView; // 0x00(0x08)
	struct FString UIName; // 0x08(0x10)
	bool bShowDebug; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameHud.AsyncUILoadID
// Size: 0x10 (Inherited: 0x00)
struct FAsyncUILoadID {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameHud.LayerContainerRow
// Size: 0x40 (Inherited: 0x10)
struct FLayerContainerRow : public FDescRowBase {
public:

	struct FName ViewName; // 0x10(0x08)
	bool Enable; // 0x18(0x01)
	enum class LayerZorder ContainerZorder; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32_t ZOrderOffset; // 0x1c(0x04)
	bool SafeZoneLayer; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FLayerItem> Items; // 0x28(0x10)
	enum class EHUDCreateType HUDCreateType; // 0x38(0x01)
	bool NeverSleep; // 0x39(0x01)
	bool LowFrequencyInvalidation; // 0x3a(0x01)
	bool bShippingNoCreate; // 0x3b(0x01)
	enum class EUIViewUpdateFrequency UpdateFrequncy; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameHud.LayerItem
// Size: 0x30 (Inherited: 0x00)
struct FLayerItem {
public:

	struct FSoftClassPath ControllerSoftClass; // 0x00(0x18)
	struct FSoftClassPath ViewSoftClass; // 0x18(0x18)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameHud.AnimationNameSelector
// Size: 0x08 (Inherited: 0x00)
struct FAnimationNameSelector {
public:

	struct FName Name; // 0x00(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct GPGameHud.BaseUIViewArray
// Size: 0x10 (Inherited: 0x00)
struct FBaseUIViewArray {
public:

	char pad_0[0x10]; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
