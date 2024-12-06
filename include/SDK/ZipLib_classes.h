
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class ZipLib.Unzipper
// Size: 0x98 (Inherited: 0x30)
class UUnzipper : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnFilesUnzippedDynamicEvent[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFileUnzippedDynamicEvent[0x10]; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	void UnzipAllAsync(struct FString TargetLocation, struct FString Password, bool bForce); // Function ZipLib.Unzipper.UnzipAllAsync // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ZipLib.ZipLibrary
// Size: 0x30 (Inherited: 0x30)
class UZipLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_UnZipCompletedSetFlag(bool bSuccess, int64_t FilesZippedCount); // Function ZipLib.ZipLibrary.UnZipCompletedSetFlag // (Final|Native|Static|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ZipLib.Zipper
// Size: 0x100 (Inherited: 0x30)
class UZipper : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnFileZippedEventDynamic[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnFilesZippedEventDynamic[0x10]; // 0x40(0x10)
	char pad_50[0xb0]; // 0x50(0xb0)

	void ZipAsync(struct FString TargetLocation, struct FString Password, enum class EZipCompressLevel CompressLevel, enum class EZipCreationFlag CreationFlag, int64_t CheckSize); // Function ZipLib.Zipper.ZipAsync // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ZipLib.ZipAsyncBase
// Size: 0x40 (Inherited: 0x38)
class UZipAsyncBase : public UBlueprintAsyncActionBase {
public:

	struct UZipper* Zipper; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ZipLib.UnzipAsyncBase
// Size: 0x40 (Inherited: 0x38)
class UUnzipAsyncBase : public UBlueprintAsyncActionBase {
public:

	struct UUnzipper* Unzipper; // 0x38(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ZipLib.ZipDirectoryProxy
// Size: 0xa8 (Inherited: 0x40)
class UZipDirectoryProxy : public UZipAsyncBase {
public:

	/*struct FMulticastInlineDelegate*/char OnDirectoryZipped[0x10]; // 0x40(0x10)
	/*struct FMulticastInlineDelegate*/char OnError[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char OnFileZipped[0x10]; // 0x60(0x10)
	char pad_70[0x38]; // 0x70(0x38)

	struct UZipDirectoryProxy* STATIC_ZipDirectory(struct FString DirectoryToZip, struct FString ResultLocation, struct FString Password, enum class EZipCreationFlag CreationFlag, enum class EZipCompressLevel Compression); // Function ZipLib.ZipDirectoryProxy.ZipDirectory // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ZipLib.ZipFilesProxy
// Size: 0xa8 (Inherited: 0x40)
class UZipFilesProxy : public UZipAsyncBase {
public:

	/*struct FMulticastInlineDelegate*/char OnDirectoryZipped[0x10]; // 0x40(0x10)
	/*struct FMulticastInlineDelegate*/char OnError[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char OnFileZipped[0x10]; // 0x60(0x10)
	char pad_70[0x38]; // 0x70(0x38)

	struct UZipFilesProxy* STATIC_ZipFiles(struct TArray<struct FFileToZip>& FilesToZip, struct FString ResultLocation, struct FString Password, enum class EZipCreationFlag CreationFlag, enum class EZipCompressLevel Compression); // Function ZipLib.ZipFilesProxy.ZipFiles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class ZipLib.UnzipArchiveProxy
// Size: 0xa8 (Inherited: 0x40)
class UUnzipArchiveProxy : public UUnzipAsyncBase {
public:

	/*struct FMulticastInlineDelegate*/char OnArchiveUnzipped[0x10]; // 0x40(0x10)
	/*struct FMulticastInlineDelegate*/char OnError[0x10]; // 0x50(0x10)
	/*struct FMulticastInlineDelegate*/char OnFileUnzipped[0x10]; // 0x60(0x10)
	char pad_70[0x38]; // 0x70(0x38)

	struct UUnzipArchiveProxy* STATIC_UnzipZipArchive(struct FString ZipArchiveLocation, struct FString ResultLocation, struct FString Password, bool bOverwrite); // Function ZipLib.UnzipArchiveProxy.UnzipZipArchive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
