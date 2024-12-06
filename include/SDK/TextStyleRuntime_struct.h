
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// ScriptStruct TextStyleRuntime.CustomTextStyle
// Size: 0x88 (Inherited: 0x08)
struct FCustomTextStyle : public FTableRowBase {
public:

	struct FSlateColor ColorAndOpacity; // 0x08(0x28)
	struct FFontOutlineSettings OutlineSettings; // 0x30(0x20)
	struct FVector2D ShadowOffset; // 0x50(0x08)
	struct FLinearColor ShadowColorAndOpacity; // 0x58(0x10)
	struct FMargin Margin; // 0x68(0x10)
	float LineHeightPercentage; // 0x78(0x04)
	struct FName ColorKey; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};

// ScriptStruct TextStyleRuntime.FontConfigData
// Size: 0x68 (Inherited: 0x08)
struct FFontConfigData : public FTableRowBase {
public:

	struct FSlateFontInfo TextFontData; // 0x08(0x58)
	enum class ETextUpperPolicy TextUpperPolicy; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)

	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
