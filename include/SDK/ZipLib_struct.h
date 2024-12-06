
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum ZipLib.EZipErrType
enum class EZipErrType : int {
	NoError = 0,
	ExceedSizeLimit = 1,
	OverwriteExistingArchiveFailed = 2,
	TargetArchiveExists = 3,
	CreateOrOpenFileFailed = 4,
	CloseFileFailed = 5,
	EZipErrType_MAX = 6
};

// Enum ZipLib.EZipCreationFlag
enum class EZipCreationFlag : int {
	CancelIfExists = 0,
	Overwrite = 1,
	Append = 2,
	EZipCreationFlag_MAX = 3
};

// Enum ZipLib.EZipCompressLevel
enum class EZipCompressLevel : int {
	Level0 = 0,
	Level1 = 1,
	Level2 = 2,
	Level3 = 3,
	Level4 = 4,
	Level5 = 5,
	Level6 = 6,
	Level7 = 7,
	Level8 = 8,
	Level9 = 9,
	EZipCompressLevel_MAX = 10
};

// ScriptStruct ZipLib.FileToZip
// Size: 0x20 (Inherited: 0x00)
struct FFileToZip {
public:

	struct FString FileSource; // 0x00(0x10)
	struct FString ArchiveFullPath; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct ZipLib.UnzipFileInfo
// Size: 0x30 (Inherited: 0x00)
struct FUnzipFileInfo {
public:

	char pad_0[0x30]; // 0x00(0x30)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
