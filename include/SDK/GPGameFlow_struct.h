
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum GPGameFlow.EGameFlowStageType
enum class EGameFlowStageType : int {
	None = 0,
	Hotfix = 1,
	VersionUpdate = 2,
	PrecompilePSO = 3,
	Login = 4,
	LoginToLobby = 5,
	Lobby = 6,
	LobbyToGame = 7,
	LobbyBHD = 8,
	LobbyBHDToGame = 9,
	Game = 10,
	GameToLobby = 11,
	GameToLobbyBHD = 12,
	Discovery = 13,
	SafeHouse = 14,
	LoginToModeHall = 15,
	LoginToBattleField = 16,
	LoginToSafeHouse = 17,
	LoginToLobbyBHD = 18,
	SafeHouseToBattleField = 19,
	BattleFieldToSafeHouse = 20,
	ModeHall = 21,
	ModeHallToLobby = 22,
	ModeHallToSafeHouse = 23,
	ModeHallToLobbyBHD = 24,
	SafeHouseToGame = 25,
	GameToSafeHouse = 26,
	GameToGame = 27,
	LobbyToLogin = 28,
	LoginToIntro = 29,
	Intro = 30,
	IntroToSafeHouse = 31,
	PostLaunch = 32,
	LaunchToLogin = 33,
	GameSettlement = 34,
	EGameFlowStageType_MAX = 35
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
