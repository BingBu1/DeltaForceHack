
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum StreamlineBlueprint.UStreamlineDLSSGMode
enum class UStreamlineDLSSGMode : int {
	Off = 0,
	On = 1,
	UStreamlineDLSSGMode_MAX = 2
};

// Enum StreamlineBlueprint.UStreamlineDLSSGSupport
enum class UStreamlineDLSSGSupport : int {
	Supported = 0,
	NotSupported = 1,
	NotSupportedIncompatibleHardware = 2,
	NotSupportedDriverOutOfDate = 3,
	NotSupportedOperatingSystemOutOfDate = 4,
	NotSupportedByPlatformAtBuildTime = 5,
	NotSupportedIncompatibleAPICaptureToolActive = 6,
	UStreamlineDLSSGSupport_MAX = 7
};

// Enum StreamlineBlueprint.UStreamlineReflexSupport
enum class UStreamlineReflexSupport : int {
	Supported = 0,
	NotSupported = 1,
	UStreamlineReflexSupport_MAX = 2
};

// Enum StreamlineBlueprint.UStreamlineReflexMode
enum class UStreamlineReflexMode : int {
	Disabled = 0,
	Enabled = 1,
	EnabledPlusBoost = 2,
	UStreamlineReflexMode_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
