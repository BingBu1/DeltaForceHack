
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass DFCommonCheckButtonPc_V2.DFCommonCheckButtonPc_V2_C
// Size: 0x289a (Inherited: 0x2818)
class UDFCommonCheckButtonPc_V2_C : public UDFCommonCheckButton {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2818(0x08)
	struct UWidgetAnimation* RecoverUncheckedHoveredAni; // 0x2820(0x08)
	struct UWidgetAnimation* RecoverCheckedHoveredAni; // 0x2828(0x08)
	struct UWidgetAnimation* Select_Pc; // 0x2830(0x08)
	struct UWidgetAnimation* Select_Pc_2; // 0x2838(0x08)
	struct UWidgetAnimation* Checked_Loop; // 0x2840(0x08)
	struct UWidgetAnimation* FadeOutAni; // 0x2848(0x08)
	struct UWidgetAnimation* FadeInAni; // 0x2850(0x08)
	struct UWidgetAnimation* UncheckedHoveredAni; // 0x2858(0x08)
	struct UWidgetAnimation* CheckedHoveredAni; // 0x2860(0x08)
	struct UWidgetAnimation* UncheckedDownAni; // 0x2868(0x08)
	struct UWidgetAnimation* UncheckedUpAni; // 0x2870(0x08)
	struct UWidgetAnimation* CheckedDownAni; // 0x2878(0x08)
	struct UWidgetAnimation* CheckedUpAni; // 0x2880(0x08)
	struct UDFImage* DFImage_Light_2; // 0x2888(0x08)
	struct UDFImage* DFImage_lightmask_shader_2; // 0x2890(0x08)
	bool LastCheckState; // 0x2898(0x01)
	bool CheckStateUpdated; // 0x2899(0x01)

	void OnCheckButtonStateChanged_Event_1(enum class ECheckButtonState& CurCheckState); // Function DFCommonCheckButtonPc_V2.DFCommonCheckButtonPc_V2_C.OnCheckButtonStateChanged_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
