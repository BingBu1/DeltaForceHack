
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : int {
	Unknown = 0,
	Image = 1,
	PixelBuffer = 2,
	Surface = 3,
	MetalTexture = 4,
	EAppleTextureType_MAX = 5
};

// Enum AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : int {
	None = 0,
	Left = 1,
	Right = 2,
	Down = 3,
	ETextureRotationDirection_MAX = 4
};

// ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
// Size: 0x20 (Inherited: 0x00)
struct FAppleImageUtilsImageConversionResult {
public:

	struct FString Error; // 0x00(0x10)
	struct TArray<char> ImageData; // 0x10(0x10)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
