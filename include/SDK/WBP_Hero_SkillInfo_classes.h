
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Hero_SkillInfo.WBP_Hero_SkillInfo_C
// Size: 0x620 (Inherited: 0x550)
class UWBP_Hero_SkillInfo_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Hero_SkillInfo_in; // 0x558(0x08)
	struct UDFBorder* DFBorder_2; // 0x560(0x08)
	struct UDFBorder* DFBorder_3; // 0x568(0x08)
	struct UDFImage* DFImage_42; // 0x570(0x08)
	struct UDFImage* DFImage_68; // 0x578(0x08)
	struct UDFMImage* DFMImage_89; // 0x580(0x08)
	struct UDFTextBlock* DFTextBlock_2; // 0x588(0x08)
	struct UDFTextBlock* DFTextBlock_4; // 0x590(0x08)
	struct UDFTextBlock* DFTextBlock_7; // 0x598(0x08)
	struct UComputeTextBlock* DFTextBlock_114; // 0x5a0(0x08)
	struct UDFVerticalBox* DFVerticalBox_1; // 0x5a8(0x08)
	struct UDFVerticalBox* DFVerticalBox_2; // 0x5b0(0x08)
	struct UImage* Key; // 0x5b8(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox; // 0x5c0(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x5c8(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_2; // 0x5d0(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Key_Image[0x10]; // 0x5d8(0x10)
	int32_t Type; // 0x5e8(0x04)
	char pad_5EC[0x4]; // 0x5ec(0x04)
	struct FText NewVar_1; // 0x5f0(0x18)
	float NewVar_2; // 0x608(0x04)
	int32_t Hero; // 0x60c(0x04)
	struct TArray<struct FLinearColor> RefColors; // 0x610(0x10)

	void SetType(int32_t Selection); // Function WBP_Hero_SkillInfo.WBP_Hero_SkillInfo_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec06b006c
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
