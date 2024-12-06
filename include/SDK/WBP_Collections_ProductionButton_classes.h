
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Collections_ProductionButton.WBP_Collections_ProductionButton_C
// Size: 0x5f4 (Inherited: 0x550)
class UWBP_Collections_ProductionButton_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* HoverAni; // 0x558(0x08)
	struct UDFBackgroundBlur* DFBackgroundBlur_70; // 0x560(0x08)
	struct UDFImage* DFImage_Disable; // 0x568(0x08)
	struct UDFImage* DFImage_Normal; // 0x570(0x08)
	struct UDFImage* DFImage_Normal_2; // 0x578(0x08)
	struct UDFImage* DFImage_Pressed; // 0x580(0x08)
	struct UPlatformSizeBox* PlatformSizeBox_1; // 0x588(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover[0x8]; // 0x590(0x08)
	struct UDFButton* wtBtn; // 0x598(0x08)
	struct UDFImage* wtIcon; // 0x5a0(0x08)
	struct UDFTextBlock* wtTitleTxt; // 0x5a8(0x08)
	struct FText Text; // 0x5b0(0x18)
	/*struct TSoftObjectPtr<UPaperSprite>*/char Image[0x28]; // 0x5c8(0x28)
	int32_t Type; // 0x5f0(0x04)

	void SetDisabled(int32_t Selection); // Function WBP_Collections_ProductionButton.WBP_Collections_ProductionButton_C.SetDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
