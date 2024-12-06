
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_CommonHeadIcon.WBP_CommonHeadIcon_C
// Size: 0x5ac (Inherited: 0x550)
class UWBP_CommonHeadIcon_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* RecoverHoverAni; // 0x558(0x08)
	struct UWidgetAnimation* HoverAni; // 0x560(0x08)
	struct UWidgetAnimation* Anima_AutoIn; // 0x568(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_Mask; // 0x570(0x08)
	struct UDFImage* DFImage_PressedBg; // 0x578(0x08)
	struct UDFButton* DFMButton_7; // 0x580(0x08)
	struct UImage* Image_533; // 0x588(0x08)
	struct UTextBlock* TextBlock_66; // 0x590(0x08)
	struct UDFTextBlock* TextBlock_LvBord; // 0x598(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover[0x8]; // 0x5a0(0x08)
	int32_t Type; // 0x5a8(0x04)

	void BP_SetType(int32_t InType); // Function WBP_CommonHeadIcon.WBP_CommonHeadIcon_C.BP_SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
