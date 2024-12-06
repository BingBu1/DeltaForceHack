
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum UploadToolsModule.EUploadFileType
enum class EUploadFileType : int {
	Log = 0,
	LogAndDump = 1,
	LogAndUObject = 2,
	EUploadFileType_MAX = 3
};

// ScriptStruct UploadToolsModule.UploadFinishTlogInfo
// Size: 0x38 (Inherited: 0x00)
struct FUploadFinishTlogInfo {
public:

	struct FString upload_path; // 0x00(0x10)
	struct FString bucket_name_app_id; // 0x10(0x10)
	struct FString requestId; // 0x20(0x10)
	int32_t filetype; // 0x30(0x04)
	int32_t fail; // 0x34(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UploadToolsModule.UploadFileNtf
// Size: 0x70 (Inherited: 0x00)
struct FUploadFileNtf {
public:

	struct FString bucket_name_app_id; // 0x00(0x10)
	struct FString Region; // 0x10(0x10)
	struct FString Secret_id; // 0x20(0x10)
	struct FString Secret_key; // 0x30(0x10)
	struct FString upload_path; // 0x40(0x10)
	struct FString session_token; // 0x50(0x10)
	struct FVector PlayerLoc; // 0x60(0x0c)
	int32_t size_limit; // 0x6c(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct UploadToolsModule.UploadFileRequestInfo
// Size: 0x40 (Inherited: 0x00)
struct FUploadFileRequestInfo {
public:

	struct FString FilePath; // 0x00(0x10)
	struct FString FriendName; // 0x10(0x10)
	struct FString FileContent; // 0x20(0x10)
	struct FString TempBucket; // 0x30(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
