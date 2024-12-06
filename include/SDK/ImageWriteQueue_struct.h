
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// Enum ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : int {
	PNG = 0,
	JPG = 1,
	BMP = 2,
	EXR = 3,
	EDesiredImageFormat_MAX = 4
};

// ScriptStruct ImageWriteQueue.ImageWriteOptions
// Size: 0x60 (Inherited: 0x00)
struct FImageWriteOptions {
public:

	enum class EDesiredImageFormat Format; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	/*struct FDelegate*/char OnComplete[0x10]; // 0x04(0x10)
	int32_t CompressionQuality; // 0x14(0x04)
	bool bOverwriteFile; // 0x18(0x01)
	bool bAsync; // 0x19(0x01)
	char pad_1A[0x46]; // 0x1a(0x46)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
