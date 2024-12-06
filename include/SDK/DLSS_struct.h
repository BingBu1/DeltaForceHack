
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum DLSS.EDLSSPreset
enum class EDLSSPreset : int {
	Default = 0,
	A = 1,
	B = 2,
	C = 3,
	D = 4,
	E = 5,
	F = 6,
	EDLSSPreset_MAX = 7
};

// Enum DLSS.EDLSSSettingOverride
enum class EDLSSSettingOverride : int {
	Enabled = 0,
	Disabled = 1,
	UseProjectSettings = 2,
	EDLSSSettingOverride_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
