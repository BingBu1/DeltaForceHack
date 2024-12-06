
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum Gamelet.EGameletEnvironment
enum class EGameletEnvironment : int {
	Gamelet_Test = 0,
	Gamelet_Product = 1,
	Gamelet_SingaporeTest = 2,
	Gamelet_SingaporeProduct = 3,
	Gamelet_MAX = 4
};

// Enum Gamelet.ECmd
enum class ECmd : int {
	ECmdGSendMessageToApp = 0,
	ECmdS2ESDKInitialized = 1,
	ECmdS2EOnCgiProcessComplete = 2,
	ECmdS2EStartPuertsVM = 3,
	ECmdS2PMin = 4,
	ECmdS2PMax = 5,
	ECmd_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
