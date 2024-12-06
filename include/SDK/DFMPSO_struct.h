
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DFMPSO.EPSOCachePrecompileState
enum class EPSOCachePrecompileState : int {
	Uninitialized = 0,
	PrecompilingAll = 1,
	PrecompiledAll = 2,
	Precompiling = 3,
	PrecompilingAllBackground = 4,
	EPSOCachePrecompileState_MAX = 5
};

// Enum DFMPSO.EDFMPSOStage
enum class EDFMPSOStage : int {
	None = 0,
	START_UP = 1,
	ALL_GAMEITEM = 2,
	ALL_EFFECT = 3,
	ALL_CHARACTER = 4,
	ENTER_MAP = 5,
	EDFMPSOStage_MAX = 6
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
