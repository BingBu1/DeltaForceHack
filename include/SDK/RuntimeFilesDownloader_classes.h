
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class RuntimeFilesDownloader.TexTagAssetUserData
// Size: 0x80 (Inherited: 0x30)
class UTexTagAssetUserData : public UAssetUserData {
public:

	/*struct TSet<struct FString>*/char Tags[0x50]; // 0x30(0x50)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class RuntimeFilesDownloader.CDNIconDownManager
// Size: 0x140 (Inherited: 0x38)
class UCDNIconDownManager : public UGameInstanceSubsystem {
public:

	char pad_38[0x8]; // 0x38(0x08)
	/*struct FMulticastInlineDelegate*/char OnResult[0x10]; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)
	struct TMap<uint32_t, struct UTexture2D*> TexForRawImagePool; // 0x70(0x50)
	char pad_C0[0x80]; // 0xc0(0x80)

	struct FString TransferImagePathToSavePath(struct FString ImagePath); // Function RuntimeFilesDownloader.CDNIconDownManager.TransferImagePathToSavePath // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class RuntimeFilesDownloader.RuntimeFilesDownloaderProxy
// Size: 0xa8 (Inherited: 0x30)
class URuntimeFilesDownloaderProxy : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char OnProgress[0x10]; // 0x30(0x10)
	/*struct FMulticastInlineDelegate*/char OnResult[0x10]; // 0x40(0x10)
	/*struct FMulticastInlineDelegate*/char OnError[0x10]; // 0x50(0x10)
	struct FString FileURL; // 0x60(0x10)
	struct FString FileSavePath; // 0x70(0x10)
	struct FString LastModified_Compare; // 0x80(0x10)
	int32_t FileStreamingBuffSize; // 0x90(0x04)
	char pad_94[0x14]; // 0x94(0x14)

	void Reset(); // Function RuntimeFilesDownloader.RuntimeFilesDownloaderProxy.Reset // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class RuntimeFilesDownloader.RuntimeFilesDownloaderLibrary
// Size: 0x30 (Inherited: 0x30)
class URuntimeFilesDownloaderLibrary : public UObject {
public:


	struct FString STATIC_GetLogDirAbsolutePath(); // Function RuntimeFilesDownloader.RuntimeFilesDownloaderLibrary.GetLogDirAbsolutePath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
