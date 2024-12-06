
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass CommonButton_V1_02.CommonButton_V1_02_C
// Size: 0x599 (Inherited: 0x550)
class UCommonButton_V1_02_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UBtn_Style_02_C* Btn_Style_02; // 0x558(0x08)
	struct UBtn_Style_03_C* Btn_Style_03; // 0x560(0x08)
	struct UButton* Button_Common; // 0x568(0x08)
	struct URichTextBlock* RichTextBlock_Common; // 0x570(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_BG; // 0x578(0x08)
	struct FText Name; // 0x580(0x18)
	bool IsNameSetByCode; // 0x598(0x01)

	void GetDisabledStyle(struct FButtonStyle& disabledStyle); // Function CommonButton_V1_02.CommonButton_V1_02_C.GetDisabledStyle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
