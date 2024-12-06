
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum RuntimeFilesDownloader.CdnDownResult
enum class CdnDownResult : int {
	None = 0,
	DownloadSuccess = 1,
	DownloadFailed = 2,
	SuccessCompare = 3,
	CdnDownResult_MAX = 4
};

// Enum RuntimeFilesDownloader.DownloadResult
enum class DownloadResult : int {
	SuccessDownloading = 0,
	DownloadFailed = 1,
	SaveFailed = 2,
	DirectoryCreationFailed = 3,
	SuccessCompare = 4,
	DownloadResult_MAX = 5
};

// Enum RuntimeFilesDownloader.CdnDownStage
enum class CdnDownStage : int {
	Wait = 0,
	Start = 1,
	Progress = 2,
	End = 3,
	CdnDownStage_MAX = 4
};

// ScriptStruct RuntimeFilesDownloader.CdnLoadDiskItem
// Size: 0x30 (Inherited: 0x00)
struct FCdnLoadDiskItem {
public:

	struct FString FileSavePath; // 0x00(0x10)
	struct FString ETag; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RuntimeFilesDownloader.CdnCompareItem
// Size: 0x38 (Inherited: 0x00)
struct FCdnCompareItem {
public:

	uint32_t HashCode; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString CDN_Url; // 0x08(0x10)
	struct FString FileSavePath; // 0x18(0x10)
	struct FString LastModified; // 0x28(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct RuntimeFilesDownloader.CdnDownItem
// Size: 0x50 (Inherited: 0x00)
struct FCdnDownItem {
public:

	uint32_t HashCode; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString CDN_Url; // 0x08(0x10)
	struct FString FileSavePath; // 0x18(0x10)
	struct FString FileSavePathHashCode; // 0x28(0x10)
	enum class CdnDownStage Stage; // 0x38(0x01)
	enum class CdnDownResult Result; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	int32_t CdnDownReconnectCount; // 0x3c(0x04)
	char pad_40[0x10]; // 0x40(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
