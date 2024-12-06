
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct BuildPatchServices.ChunkPartData
// Size: 0x18 (Inherited: 0x00)
struct FChunkPartData {
public:

	struct FGuid Guid; // 0x00(0x10)
	uint32_t offset; // 0x10(0x04)
	uint32_t size; // 0x14(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BuildPatchServices.CustomFieldData
// Size: 0x20 (Inherited: 0x00)
struct FCustomFieldData {
public:

	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BuildPatchServices.SHAHashData
// Size: 0x14 (Inherited: 0x00)
struct FSHAHashData {
public:

	char Hash[0x14]; // 0x00(0x14)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BuildPatchServices.FileManifestData
// Size: 0x68 (Inherited: 0x00)
struct FFileManifestData {
public:

	struct FString Filename; // 0x00(0x10)
	struct FSHAHashData FileHash; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FChunkPartData> FileChunkParts; // 0x28(0x10)
	struct TArray<struct FString> InstallTags; // 0x38(0x10)
	bool bIsUnixExecutable; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString SymlinkTarget; // 0x50(0x10)
	bool bIsReadOnly; // 0x60(0x01)
	bool bIsCompressed; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct BuildPatchServices.ChunkInfoData
// Size: 0x40 (Inherited: 0x00)
struct FChunkInfoData {
public:

	struct FGuid Guid; // 0x00(0x10)
	uint64_t Hash; // 0x10(0x08)
	struct FSHAHashData ShaHash; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
	int64_t FileSize; // 0x30(0x08)
	char GroupNumber; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
