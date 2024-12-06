
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// Size: 0x90 (Inherited: 0x30)
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject {
public:

	char pad_30[0x8]; // 0x30(0x08)
	/*struct FMulticastInlineDelegate*/char OnSuccess[0x10]; // 0x38(0x10)
	/*struct FMulticastInlineDelegate*/char OnFailure[0x10]; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
	struct FAppleImageUtilsImageConversionResult ConversionResult; // 0x68(0x20)
	char pad_88[0x8]; // 0x88(0x08)

	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForConvertToTIFF(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class AppleImageUtils.AppleImageInterface
// Size: 0x30 (Inherited: 0x30)
class UAppleImageInterface : public UInterface {
public:


	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
