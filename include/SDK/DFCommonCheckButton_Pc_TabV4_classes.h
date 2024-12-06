
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass DFCommonCheckButton_Pc_TabV4.DFCommonCheckButton_Pc_TabV4_C
// Size: 0x28d2 (Inherited: 0x2818)
class UDFCommonCheckButton_Pc_TabV4_C : public UDFCommonCheckButton {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2818(0x08)
	struct UWidgetAnimation* CheckedNormal; // 0x2820(0x08)
	struct UWidgetAnimation* UncheckedNormal; // 0x2828(0x08)
	struct UWidgetAnimation* RecoverCheckedHoveredAni; // 0x2830(0x08)
	struct UWidgetAnimation* RecoverUncheckedHoveredAni; // 0x2838(0x08)
	struct UWidgetAnimation* DFCommonCheckButton_Pc_TabV4_unlock; // 0x2840(0x08)
	struct UWidgetAnimation* FadeOutAni; // 0x2848(0x08)
	struct UWidgetAnimation* FadeInAni; // 0x2850(0x08)
	struct UWidgetAnimation* UncheckedHoveredAni; // 0x2858(0x08)
	struct UWidgetAnimation* CheckedHoveredAni; // 0x2860(0x08)
	struct UWidgetAnimation* UncheckedDownAni; // 0x2868(0x08)
	struct UWidgetAnimation* UncheckedUpAni; // 0x2870(0x08)
	struct UWidgetAnimation* CheckedDownAni; // 0x2878(0x08)
	struct UWidgetAnimation* CheckedUpAni; // 0x2880(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x2888(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_Lock; // 0x2890(0x08)
	struct UDFImage* DFImage_74; // 0x2898(0x08)
	struct UDFImage* DFImage_Line; // 0x28a0(0x08)
	struct UDFImage* DFImage_Lock; // 0x28a8(0x08)
	struct UDFSizeBox* DFSizeBox_1; // 0x28b0(0x08)
	struct UDFSizeBox* DFSizeBox_2; // 0x28b8(0x08)
	struct UImage* Image_38; // 0x28c0(0x08)
	struct UImage* Image_39; // 0x28c8(0x08)
	bool CheckStateUpdated; // 0x28d0(0x01)
	bool LastCheckState; // 0x28d1(0x01)

	void BP_SetLinePointVisible(bool Show); // Function DFCommonCheckButton_Pc_TabV4.DFCommonCheckButton_Pc_TabV4_C.BP_SetLinePointVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x27bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
