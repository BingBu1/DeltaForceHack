
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class DFScreenShotTool.DFScreenShotRequest
// Size: 0x70 (Inherited: 0x30)
class UDFScreenShotRequest : public UObject {
public:

	/*struct FMulticastInlineDelegate*/char DFMScreenshotFinishDelegate[0x10]; // 0x30(0x10)
	struct UTexture2D* NoWatermarkScreenShot; // 0x40(0x08)
	struct UTexture2D* WithWatermarkScreenShot; // 0x48(0x08)
	char pad_50[0x20]; // 0x50(0x20)

	void OnScreenShotCapturedSpliceWatermark(int32_t InSizeX, int32_t InSizeY, struct TArray<struct FColor>& InImageData, struct FString ScreenshotName, struct UGameInstance* GameInstance); // Function DFScreenShotTool.DFScreenShotRequest.OnScreenShotCapturedSpliceWatermark // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class DFScreenShotTool.DFScreenShotToolManager
// Size: 0x50 (Inherited: 0x38)
class UDFScreenShotToolManager : public UGameInstanceSubsystem {
public:

	/*struct FMulticastInlineDelegate*/char BusinessScreenshotFinishDelegate[0x10]; // 0x38(0x10)
	struct UDFScreenShotRequest* TheDFScreenshotReq; // 0x48(0x08)

	void OnDFMScreenshotFinishDelegate(struct FString ScreenshotName, bool WithWaterMark); // Function DFScreenShotTool.DFScreenShotToolManager.OnDFMScreenshotFinishDelegate // (Final|Native|Public) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
