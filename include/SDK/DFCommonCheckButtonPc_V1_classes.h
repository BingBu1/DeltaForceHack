
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass DFCommonCheckButtonPc_V1.DFCommonCheckButtonPc_V1_C
// Size: 0x290a (Inherited: 0x2818)
class UDFCommonCheckButtonPc_V1_C : public UDFCommonCheckButton {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2818(0x08)
	struct UWidgetAnimation* CheckedNormal; // 0x2820(0x08)
	struct UWidgetAnimation* UncheckedNormal; // 0x2828(0x08)
	struct UWidgetAnimation* DFCommonCheckButtonPc_V1_unlock; // 0x2830(0x08)
	struct UWidgetAnimation* RecoverCheckedHoveredAni; // 0x2838(0x08)
	struct UWidgetAnimation* RecoverUncheckedHoveredAni; // 0x2840(0x08)
	struct UWidgetAnimation* FadeOutAni; // 0x2848(0x08)
	struct UWidgetAnimation* FadeInAni; // 0x2850(0x08)
	struct UWidgetAnimation* UncheckedHoveredAni; // 0x2858(0x08)
	struct UWidgetAnimation* CheckedHoveredAni; // 0x2860(0x08)
	struct UWidgetAnimation* UncheckedDownAni; // 0x2868(0x08)
	struct UWidgetAnimation* UncheckedUpAni; // 0x2870(0x08)
	struct UWidgetAnimation* CheckedDownAni; // 0x2878(0x08)
	struct UWidgetAnimation* CheckedUpAni; // 0x2880(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x2888(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_Check; // 0x2890(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_Hover; // 0x2898(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_Lock; // 0x28a0(0x08)
	struct UDFImage* DFImage; // 0x28a8(0x08)
	struct UDFImage* DFImage_2; // 0x28b0(0x08)
	struct UDFImage* DFImage_47; // 0x28b8(0x08)
	struct UDFImage* DFImage_54; // 0x28c0(0x08)
	struct UDFImage* DFImage_125; // 0x28c8(0x08)
	struct UDFImage* DFImage_329; // 0x28d0(0x08)
	struct UDFImage* DFImage_Line; // 0x28d8(0x08)
	struct UDFImage* DFImage_Lock; // 0x28e0(0x08)
	struct UDFImage* DFImage_Point; // 0x28e8(0x08)
	struct UImage* Image_38; // 0x28f0(0x08)
	struct UImage* Image_39; // 0x28f8(0x08)
	struct UDFImage* ImageBackGround_Fx; // 0x2900(0x08)
	bool LastCheckState; // 0x2908(0x01)
	bool CheckStateUpdated; // 0x2909(0x01)

	void SetIsLocked(bool bLocked); // Function DFCommonCheckButtonPc_V1.DFCommonCheckButtonPc_V1_C.SetIsLocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3bc000003c
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
