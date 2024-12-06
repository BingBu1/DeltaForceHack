
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum PermissionMgr.EDFPermissionType
enum class EDFPermissionType : int {
	Unknow = 0,
	AccessAlbum = 1,
	Camera = 2,
	RecordAudio = 3,
	WriteSettings = 4,
	InstallPackages = 5,
	Notifications = 6,
	Location = 7,
	Calendar = 8,
	BlueTooth = 9,
	ManageExternalStorage = 10,
	EDFPermissionType_MAX = 11
};

// Enum PermissionMgr.EDFPermissionShowType
enum class EDFPermissionShowType : int {
	Director = 0,
	ShowConfirmWindow = 1,
	ShowFloatingWindow = 2,
	EDFPermissionShowType_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
