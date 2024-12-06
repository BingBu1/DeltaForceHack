
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum FSR2TemporalUpscaling.EFSR2LandscapeHISMMode
enum class EFSR2LandscapeHISMMode : int {
	Off = 0,
	AllStatic = 1,
	StaticWPO = 2,
	EFSR2LandscapeHISMMode_MAX = 3
};

// Enum FSR2TemporalUpscaling.EFSR2DeDitherMode
enum class EFSR2DeDitherMode : int {
	Off = 0,
	Full = 1,
	HairOnly = 2,
	EFSR2DeDitherMode_MAX = 3
};

// Enum FSR2TemporalUpscaling.EFSR2HistoryFormat
enum class EFSR2HistoryFormat : int {
	FloatRGBA = 0,
	FloatR11G11B10 = 1,
	EFSR2HistoryFormat_MAX = 2
};

// Enum FSR2TemporalUpscaling.EFSR2QualityMode
enum class EFSR2QualityMode : int {
	Unused = 0,
	Quality = 1,
	Balanced = 2,
	Performance = 3,
	UltraPerformance = 4,
	EFSR2QualityMode_MAX = 5
};

// Enum FSR2TemporalUpscaling.UFSR2Support
enum class UFSR2Support : int {
	Supported = 0,
	NotSupported = 1,
	NotSupportedIncompatibleHardware = 2,
	UFSR2Support_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
