
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : int {
	NonDropFrameTimecode = 0,
	DropFrameTimecode = 1,
	Seconds = 2,
	Frames = 3,
	MAX_Count = 4,
	EFrameNumberDisplayFormats_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
