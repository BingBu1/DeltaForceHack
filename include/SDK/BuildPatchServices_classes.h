
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class BuildPatchServices.BuildPatchManifest
// Size: 0x128 (Inherited: 0x30)
class UBuildPatchManifest : public UObject {
public:

	char ManifestFileVersion; // 0x30(0x01)
	bool bIsFileData; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	uint32_t APPID; // 0x34(0x04)
	struct FString AppName; // 0x38(0x10)
	struct FString BuildVersion; // 0x48(0x10)
	struct FString LaunchExe; // 0x58(0x10)
	struct FString LaunchCommand; // 0x68(0x10)
	/*struct TSet<struct FString>*/char PrereqIds[0x50]; // 0x78(0x50)
	struct FString PrereqName; // 0xc8(0x10)
	struct FString PrereqPath; // 0xd8(0x10)
	struct FString PrereqArgs; // 0xe8(0x10)
	struct TArray<struct FFileManifestData> FileManifestList; // 0xf8(0x10)
	struct TArray<struct FChunkInfoData> ChunkList; // 0x108(0x10)
	struct TArray<struct FCustomFieldData> CustomFields; // 0x118(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
