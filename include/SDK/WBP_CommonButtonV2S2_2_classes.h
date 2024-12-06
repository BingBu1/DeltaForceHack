
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_CommonButtonV2S2.WBP_CommonButtonV2S2_C
// Size: 0x5f8 (Inherited: 0x558)
class UWBP_CommonButtonV2S2_C_def2 : public UDFMCommonButtonV2S2 {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UWidgetAnimation* HoverAni; // 0x560(0x08)
	struct UWidgetAnimation* RecoverHoverAni; // 0x568(0x08)
	struct UDFMImage* DFMImage_126; // 0x570(0x08)
	struct UDFMImage* Disable; // 0x578(0x08)
	struct UDFRichTextBlock* RichTextBlock_Common; // 0x580(0x08)
	struct FText Name; // 0x588(0x18)
	bool IsNameSetByCode; // 0x5a0(0x01)
	bool Disabled; // 0x5a1(0x01)
	char pad_5A2[0x6]; // 0x5a2(0x06)
	struct FSlateColor Color1; // 0x5a8(0x28)
	struct FSlateColor Color0; // 0x5d0(0x28)

	void SetDisadled(); // Function WBP_CommonButtonV2S2.WBP_CommonButtonV2S2_C.SetDisadled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
