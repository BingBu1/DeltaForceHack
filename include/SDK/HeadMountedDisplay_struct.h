
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : int {
	HeadMountedDisplay = 0,
	Controller = 1,
	TrackingReference = 2,
	Other = 3,
	Invalid = 4,
	Any = 5,
	EXRTrackedDeviceType_MAX = 6
};

// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : int {
	Disabled = 0,
	SingleEyeLetterboxed = 1,
	Undistorted = 2,
	Distorted = 3,
	SingleEye = 4,
	SingleEyeCroppedToFill = 5,
	Texture = 6,
	TexturePlusEye = 7,
	ESpectatorScreenMode_MAX = 8
};

// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : int {
	Unknown = 0,
	Worn = 1,
	NotWorn = 2,
	EHMDWornState_MAX = 3
};

// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : int {
	Floor = 0,
	Eye = 1,
	Stage = 2,
	EHMDTrackingOrigin_MAX = 3
};

// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : int {
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2,
	EOrientPositionSelector_MAX = 3
};

// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : int {
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2,
	ETrackingStatus_MAX = 3
};

// ScriptStruct HeadMountedDisplay.XRDeviceId
// Size: 0x0c (Inherited: 0x00)
struct FXRDeviceId {
public:

	struct FName SystemName; // 0x00(0x08)
	int32_t DeviceID; // 0x08(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
