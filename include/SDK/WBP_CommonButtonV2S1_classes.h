
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_CommonButtonV2S1.WBP_CommonButtonV2S1_C
// Size: 0x618 (Inherited: 0x558)
class UWBP_CommonButtonV2S1_C : public UDFMCommonButtonV2S1 {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UWidgetAnimation* HoverAni; // 0x560(0x08)
	struct UWidgetAnimation* RecoverHoverAni; // 0x568(0x08)
	struct UDFMImage* DFMImage_126; // 0x570(0x08)
	struct UDFMImage* Disable; // 0x578(0x08)
	struct UDFRichTextBlock* RichTextBlock_Common; // 0x580(0x08)
	/*struct FMulticastInlineDelegate*/char ClickCallback[0x10]; // 0x588(0x10)
	bool IsNameSetByCode; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
	struct FText Name; // 0x5a0(0x18)
	bool Disabled; // 0x5b8(0x01)
	char pad_5B9[0x7]; // 0x5b9(0x07)
	struct FSlateColor Color1; // 0x5c0(0x28)
	struct FSlateColor Color0; // 0x5e8(0x28)
	struct UDFMImage* Disable_2; // 0x610(0x08)

	void GetDisabledStyle(struct FButtonStyle& disabledStyle); // Function WBP_CommonButtonV2S1.WBP_CommonButtonV2S1_C.GetDisabledStyle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
