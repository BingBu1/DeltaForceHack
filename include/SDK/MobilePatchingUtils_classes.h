
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class MobilePatchingUtils.MobilePatchingLibrary
// Size: 0x30 (Inherited: 0x30)
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary {
public:


	void STATIC_RequestContent(/*struct FString RemoteManifestURL, struct FString CloudURL, struct FString InstallDirectory, struct FDelegate OnSucceeded, struct FDelegate OnFailed*/); // Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MobilePatchingUtils.MobileInstalledContent
// Size: 0x50 (Inherited: 0x30)
class UMobileInstalledContent : public UObject {
public:

	char pad_30[0x20]; // 0x30(0x20)

	bool Mount(int32_t PakOrder, struct FString MountPoint); // Function MobilePatchingUtils.MobileInstalledContent.Mount // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class MobilePatchingUtils.MobilePendingContent
// Size: 0x90 (Inherited: 0x50)
class UMobilePendingContent : public UMobileInstalledContent {
public:

	char pad_50[0x40]; // 0x50(0x40)

	void StartInstall(/*struct FDelegate OnSucceeded, struct FDelegate OnFailed*/); // Function MobilePatchingUtils.MobilePendingContent.StartInstall // (Final|Native|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
