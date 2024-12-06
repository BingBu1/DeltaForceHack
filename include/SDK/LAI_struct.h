
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum LAI.ELuaLogCategory
enum class ELuaLogCategory : int {
	LuaTemp = 0,
	LuaSAccount = 1,
	LuaSActivity = 2,
	LuaSArmedForce = 3,
	LuaSAuction = 4,
	LuaSBlackSite = 5,
	LuaSChat = 6,
	LuaSCollection = 7,
	LuaSComparePrice = 8,
	LuaSCurrency = 9,
	LuaSDataTableHotfix = 10,
	LuaSEquipment = 11,
	LuaSFacePop = 12,
	LuaSFriend = 13,
	LuaSFrontEndChat = 14,
	LuaSGameMode = 15,
	LuaSGM = 16,
	LuaSGrowthRoad = 17,
	LuaSGuide = 18,
	LuaSGunsmith = 19,
	LuaSHero = 20,
	LuaSHope = 21,
	LuaSInsurance = 22,
	LuaSInventory = 23,
	LuaSIrisRaid = 24,
	LuaSIrisSafeHouse = 25,
	LuaSLitePack = 26,
	LuaSLocalize = 27,
	LuaSLogUpload = 28,
	LuaSLooting = 29,
	LuaSMail = 30,
	LuaSMatch = 31,
	LuaSMidas = 32,
	LuaSModeHall = 33,
	LuaSModuleSwitcher = 34,
	LuaSModuleUnlock = 35,
	LuaSPersonal = 36,
	LuaSPreset = 37,
	LuaSProperty = 38,
	LuaSPVEEntry = 39,
	LuaSPVESettlement = 40,
	LuaSQuest = 41,
	LuaSQuickPatch = 42,
	LuaSRanking = 43,
	LuaSRecruit = 44,
	LuaSReport = 45,
	LuaSReward = 46,
	LuaSRoleInfo = 47,
	LuaSRoom = 48,
	LuaSScav = 49,
	LuaSSDKInfo = 50,
	LuaSSeason = 51,
	LuaSSettlement = 52,
	LuaSShopMystery = 53,
	LuaSShop = 54,
	LuaSShopStation = 55,
	LuaSSocial = 56,
	LuaSStore = 57,
	LuaSSystemSetting = 58,
	LuaSTeam = 59,
	LuaSTipsRecord = 60,
	LuaSVehicle = 61,
	LuaSWeaponAssembly = 62,
	LuaSWorldEntrance = 63,
	LuaMACE = 64,
	LuaMActivity = 65,
	LuaMArchive = 66,
	LuaMArmedForce = 67,
	LuaMAuction = 68,
	LuaMBattlefieldEntry = 69,
	LuaMBlackSite = 70,
	LuaMChat = 71,
	LuaMCollection = 72,
	LuaMCommonBar = 73,
	LuaMCommonTips = 74,
	LuaMCommonUILibrary = 75,
	LuaMCommonWidget = 76,
	LuaMComparePrice = 77,
	LuaMCurrency = 78,
	LuaMDiscovery = 79,
	LuaMExample = 80,
	LuaMFacePop = 81,
	LuaMFastEquip = 82,
	LuaMFriend = 83,
	LuaMGamelet = 84,
	LuaMGameMode = 85,
	LuaMGCloudSDK = 86,
	LuaMGM = 87,
	LuaMGPM = 88,
	LuaMGuide = 89,
	LuaMGunsmith = 90,
	LuaMGVoice = 91,
	LuaMHall = 92,
	LuaMHero = 93,
	LuaMHotUpdate = 94,
	LuaMHUD = 95,
	LuaMHUDToolBar = 96,
	LuaMInGame = 97,
	LuaMInsurance = 98,
	LuaMInventory = 99,
	LuaMIrisRaid = 100,
	LuaMIrisSafeHouse = 101,
	LuaMItemDetail = 102,
	LuaMJump = 103,
	LuaMLBS = 104,
	LuaMLitePackage = 105,
	LuaMLobbyBHD = 106,
	LuaMLobbyDisplay = 107,
	LuaMLogin = 108,
	LuaMLooting = 109,
	LuaMMail = 110,
	LuaMMap = 111,
	LuaMMatch = 112,
	LuaMMidas = 113,
	LuaM = 114,
	LuaMParamAdjust = 115,
	LuaMPostLaunch = 116,
	LuaMPreload = 117,
	LuaMPreparation = 118,
	LuaMPVESettlement = 119,
	LuaMQuest = 120,
	LuaMRanking = 121,
	LuaMReconnect = 122,
	LuaMRecruit = 123,
	LuaMReddot = 124,
	LuaMReddotTrie = 125,
	LuaMReport = 126,
	LuaMReward = 127,
	LuaMRoleInfo = 128,
	LuaMRoom = 129,
	LuaMRuntimeDebug = 130,
	LuaMSandBoxMap = 131,
	LuaMSettlement = 132,
	LuaMShop = 133,
	LuaMSocial = 134,
	LuaMSOLHealthSystem = 135,
	LuaMSOL = 136,
	LuaMStore = 137,
	LuaMStoryDialog = 138,
	LuaMSystemSetting = 139,
	LuaMTeam = 140,
	LuaMTgpa = 141,
	LuaMTransition = 142,
	LuaMTss = 143,
	LuaMUISceneObject = 144,
	LuaMVehicle = 145,
	LuaMVersionUpdate = 146,
	LuaMWeaponAssembly = 147,
	LuaMWeaponDebugView = 148,
	LuaMWeaponGameplay = 149,
	LuaSLiveRadio = 150,
	LuaSMarket = 151,
	LuaMLiveRadio = 152,
	LuaMMarket = 153,
	LuaMRange = 154,
	LuaFManager = 155,
	LuaSBattlePass = 156,
	LuaMAchievement = 157,
	LuaMBattlePass = 158,
	LuaSBHD = 159,
	LuaSExperienceData = 160,
	LuaSMoss = 161,
	LuaSPay = 162,
	LuaSTournament = 163,
	LuaMCDNIcon = 164,
	LuaMCustomerServices = 165,
	LuaMDeepLink = 166,
	LuaMInvite = 167,
	LuaMMicroOfficialWeb = 168,
	LuaMMoss = 169,
	LuaMOpActMinorProtection = 170,
	LuaMOpActQQBonusCenter = 171,
	LuaMOpActQQChannel = 172,
	LuaMOpActQQGameHub = 173,
	LuaMOpActQQPrivilege = 174,
	LuaMOpActWeChatGameHub = 175,
	LuaMOpActWeChatPrivilege = 176,
	LuaMOpActWeChatWelfare = 177,
	LuaMPay = 178,
	LuaMPermission = 179,
	LuaMShare = 180,
	LuaMTournament = 181,
	LuaSPlayerReturn = 182,
	LuaMOpActWeChatVideoChannel = 183,
	LuaMOpActXYClub = 184,
	LuaMPlayerReturn = 185,
	ELuaLogCategory_MAX = 186
};

// ScriptStruct LAI.UserInfo2
// Size: 0x10 (Inherited: 0x00)
struct FUserInfo2 {
public:

	struct TArray<int32_t> p1; // 0x00(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LAI.ReplifetimeCond
// Size: 0x18 (Inherited: 0x00)
struct FReplifetimeCond {
public:

	struct FString PropertyName; // 0x00(0x10)
	enum class ELifetimeCondition Cond; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LAI.ScopedNamedEventWrapper
// Size: 0x01 (Inherited: 0x00)
struct FScopedNamedEventWrapper {
public:

	char pad_0[0x1]; // 0x00(0x01)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LAI.UserInfo1
// Size: 0x60 (Inherited: 0x00)
struct FUserInfo1 {
public:

	struct TArray<int32_t> p2; // 0x00(0x10)
	struct TMap<int32_t, struct FUserInfo2> p3; // 0x10(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct LAI.UserInfo
// Size: 0xa0 (Inherited: 0x00)
struct FUserInfo {
public:

	struct UObject* obj; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
	int32_t ID; // 0x18(0x04)
	int32_t Level; // 0x1c(0x04)
	struct TArray<int32_t> pos; // 0x20(0x10)
	struct TArray<int32_t> ids; // 0x30(0x10)
	struct FUserInfo1 others; // 0x40(0x60)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
