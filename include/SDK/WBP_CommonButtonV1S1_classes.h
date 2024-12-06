
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_CommonButtonV1S1.WBP_CommonButtonV1S1_C
// Size: 0x5f4 (Inherited: 0x550)
class UWBP_CommonButtonV1S1_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_CommonButtonV1S1_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_CommonButtonV1S1_in; // 0x560(0x08)
	struct UButton* Button_Common; // 0x568(0x08)
	struct UImage* buttonBg_01; // 0x570(0x08)
	struct UImage* buttonDe01; // 0x578(0x08)
	struct UImage* buttonDe02; // 0x580(0x08)
	struct UImage* buttonDe03; // 0x588(0x08)
	struct URichTextBlock* RichTextBlock_Common; // 0x590(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover[0x8]; // 0x598(0x08)
	int32_t Type; // 0x5a0(0x04)
	char pad_5A4[0x4]; // 0x5a4(0x04)
	struct FText Name; // 0x5a8(0x18)
	bool IsNameSetByCode; // 0x5c0(0x01)
	char pad_5C1[0x7]; // 0x5c1(0x07)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Type_Bg[0x10]; // 0x5c8(0x10)
	struct FWidgetTransform TF_01; // 0x5d8(0x1c)

	void GetDisabledStyle(struct FButtonStyle& disabledStyle); // Function WBP_CommonButtonV1S1.WBP_CommonButtonV1S1_C.GetDisabledStyle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffebfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
