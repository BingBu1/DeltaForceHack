
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass DFCommonCheckButton_TabV3.DFCommonCheckButton_TabV3_C
// Size: 0x28a0 (Inherited: 0x2818)
class UDFCommonCheckButton_TabV3_C : public UDFCommonCheckButton {
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
	struct UDFImage* DFImage_72; // 0x2880(0x08)
	struct ULine* DFImage_Line; // 0x2888(0x08)
	struct UDFImage* DFImage_Lock; // 0x2890(0x08)
	struct UScaleBox* ScaleBox_Image; // 0x2898(0x08)

	void BP_SetShowSpacerLine(bool bShow); // Function DFCommonCheckButton_TabV3.DFCommonCheckButton_TabV3_C.BP_SetShowSpacerLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3cc71c70c0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
