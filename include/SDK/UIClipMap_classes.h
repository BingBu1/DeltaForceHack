
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Class UIClipMap.UIClipMapTestWidget
// Size: 0x2d8 (Inherited: 0x298)
class UUIClipMapTestWidget : public UUserWidget {
public:

	char pad_298[0x8]; // 0x298(0x08)
	struct UUIClipMapTexture* ClipMapTexture; // 0x2a0(0x08)
	struct FName ParamClipMapTex; // 0x2a8(0x08)
	float UpdateTime; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct UImage* Img_ClipMap; // 0x2b8(0x08)
	struct UMaterialInstanceDynamic* ClipMapMat; // 0x2c0(0x08)
	char pad_2C8[0x10]; // 0x2c8(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UIClipMap.UIClipMapTexture
// Size: 0x330 (Inherited: 0x140)
class UUIClipMapTexture : public UTexture {
public:

	struct FIntPoint OriginTextureSize; // 0x140(0x08)
	bool ForceCompressionNoAlpha; // 0x148(0x01)
	enum class TextureCompressionSettings ForceCompressionSettings; // 0x149(0x01)
	bool bSubTextureUseClampAddress; // 0x14a(0x01)
	bool bGenerateSubTextureButton; // 0x14b(0x01)
	bool bLogAllMipTexture; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	struct FIntPoint PatchCountXY; // 0x150(0x08)
	int32_t PatchSize; // 0x158(0x04)
	struct FIntPoint ClipMapSizeXY; // 0x15c(0x08)
	struct FIntPoint ReservedPatchCountXY; // 0x164(0x08)
	int32_t MaxMipCount; // 0x16c(0x04)
	enum class EPixelFormat CachedPF; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct TArray<struct FIntPoint> SizeInPatches; // 0x178(0x10)
	/*struct TMap<struct FIntVector, struct TSoftObjectPtr<UTexture2D>>*/char SubTexture[0x50]; // 0x188(0x50)
	struct TMap<struct FIntVector, struct UTexture2D*> BackupTextures; // 0x1d8(0x50)
	bool bFillSubTextureForPack; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	/*struct TArray<struct TSoftObjectPtr<UTexture2D>>*/char SubTextureForPack[0x10]; // 0x230(0x10)
	bool bEnableMip0; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	int32_t SamplerFilter; // 0x244(0x04)
	char pad_248[0xe8]; // 0x248(0xe8)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// Class UIClipMap.UIClipMapWrapper
// Size: 0x188 (Inherited: 0x30)
class UUIClipMapWrapper : public UObject {
public:

	struct FIntPoint OriginTextureSize; // 0x30(0x08)
	enum class EOriginTextureSizeType OriginTextureSizeType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t PatchSize; // 0x3c(0x04)
	struct FIntPoint ClipMapSizeXY; // 0x40(0x08)
	struct FIntPoint PatchCountXY; // 0x48(0x08)
	struct TMap<struct FString, struct FPlatformCustomSettings> ForcePlatformSettings; // 0x50(0x50)
	enum class TextureCompressionSettings ForceCompressionSettings; // 0xa0(0x01)
	bool ForceCompressionNoAlpha; // 0xa1(0x01)
	bool bGenerateSubTextureButton; // 0xa2(0x01)
	char pad_A3[0x5]; // 0xa3(0x05)
	struct TArray<struct FIntPoint> SizeInPatches; // 0xa8(0x10)
	/*struct TMap<struct FIntVector, struct TSoftObjectPtr<UTexture2D>>*/char SubTexture[0x50]; // 0xb8(0x50)
	struct TMap<struct FIntVector, struct UTexture2D*> BackupTextures; // 0x108(0x50)
	bool bFillSubTextureForPack; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	/*struct TArray<struct TSoftObjectPtr<UTexture2D>>*/char SubTextureForPack[0x10]; // 0x160(0x10)
	bool bEnableMip0; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	int32_t SamplerFilter; // 0x174(0x04)
	struct UTexture2D* HDTexture2D; // 0x178(0x08)
	struct UTexture2D* LDTexture2D; // 0x180(0x08)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
