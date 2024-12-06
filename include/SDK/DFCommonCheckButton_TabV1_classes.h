
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass DFCommonCheckButton_TabV1.DFCommonCheckButton_TabV1_C
// Size: 0x28c8 (Inherited: 0x2818)
class UDFCommonCheckButton_TabV1_C : public UDFCommonCheckButton {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2818(0x08)
	struct UWidgetAnimation* CheckedNormal; // 0x2820(0x08)
	struct UWidgetAnimation* UncheckedNormal; // 0x2828(0x08)
	struct UWidgetAnimation* RecoverUncheckedHoveredAni; // 0x2830(0x08)
	struct UWidgetAnimation* RecoverCheckedHoveredAni; // 0x2838(0x08)
	struct UWidgetAnimation* FadeOutAni; // 0x2840(0x08)
	struct UWidgetAnimation* FadeInAni; // 0x2848(0x08)
	struct UWidgetAnimation* UncheckedHoveredAni; // 0x2850(0x08)
	struct UWidgetAnimation* CheckedHoveredAni; // 0x2858(0x08)
	struct UWidgetAnimation* UncheckedDownAni; // 0x2860(0x08)
	struct UWidgetAnimation* UncheckedUpAni; // 0x2868(0x08)
	struct UWidgetAnimation* CheckedDownAni; // 0x2870(0x08)
	struct UWidgetAnimation* CheckedUpAni; // 0x2878(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_Lock; // 0x2880(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_selected; // 0x2888(0x08)
	struct UDFImage* DFImage; // 0x2890(0x08)
	struct UDFImage* DFImage_2; // 0x2898(0x08)
	struct UDFImage* DFImage_27; // 0x28a0(0x08)
	struct UDFImage* DFImage_179; // 0x28a8(0x08)
	struct UDFImage* DFImage_Line; // 0x28b0(0x08)
	struct UDFImage* DFImage_Lock; // 0x28b8(0x08)
	struct UScaleBox* ScaleBox_Image; // 0x28c0(0x08)

	void BP_SetIsLocked(bool bLocked); // Function DFCommonCheckButton_TabV1.DFCommonCheckButton_TabV1_C.BP_SetIsLocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
