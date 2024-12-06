
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_CommonButtonV1S2.WBP_CommonButtonV1S2_C
// Size: 0x5f8 (Inherited: 0x550)
class UWBP_CommonButtonV1S2_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_CommonButtonV1S1_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_CommonButtonV1S1_in; // 0x560(0x08)
	struct UButton* Button_Common; // 0x568(0x08)
	struct UImage* buttonBg; // 0x570(0x08)
	struct UImage* buttonDe01; // 0x578(0x08)
	struct UImage* buttonDe02; // 0x580(0x08)
	struct UImage* buttonDe03; // 0x588(0x08)
	struct UImage* buttonDe04; // 0x590(0x08)
	struct UCanvasPanel* buttonDe05; // 0x598(0x08)
	struct UDFImage* DFImage_99; // 0x5a0(0x08)
	struct UImage* Image_423; // 0x5a8(0x08)
	struct URichTextBlock* RichTextBlock_Common; // 0x5b0(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover[0x8]; // 0x5b8(0x08)
	int32_t Type; // 0x5c0(0x04)
	char pad_5C4[0x4]; // 0x5c4(0x04)
	struct FText Name; // 0x5c8(0x18)
	bool IsNameSetByCode; // 0x5e0(0x01)
	char pad_5E1[0x7]; // 0x5e1(0x07)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x5e8(0x10)

	void GetDisabledStyle(struct FButtonStyle& disabledStyle); // Function WBP_CommonButtonV1S2.WBP_CommonButtonV1S2_C.GetDisabledStyle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x72c0000070
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
