
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_InteractPanelItem_PC.WBP_InteractPanelItem_PC_C
// Size: 0x734 (Inherited: 0x608)
class UWBP_InteractPanelItem_PC_C : public UDFHDInteractorPanelItem {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)
	struct UWidgetAnimation* WBP_InteractTips_warning; // 0x610(0x08)
	struct UWidgetAnimation* WBP_InteractTips_switch; // 0x618(0x08)
	struct UWidgetAnimation* WBP_InteractTips_Out; // 0x620(0x08)
	struct UWidgetAnimation* WBP_InteractTips_in; // 0x628(0x08)
	struct UDFBackgroundBlur* DFBackgroundBlur_34; // 0x630(0x08)
	struct UDFImage* DFImage; // 0x638(0x08)
	struct UDFImage* DFImage_99; // 0x640(0x08)
	struct UDFImage* DFImage_543; // 0x648(0x08)
	struct UDFImage* DFImage_Bg; // 0x650(0x08)
	struct UDFImage* DFImage_Line; // 0x658(0x08)
	struct UDFVerticalBox* DFVerticalBox_1; // 0x660(0x08)
	struct UDFImage* Image_271; // 0x668(0x08)
	struct UDFImage* Line; // 0x670(0x08)
	struct UTextBlock* TextNum; // 0x678(0x08)
	struct UTextBlock* TitleText; // 0x680(0x08)
	struct UVerticalBox* VerticalBox; // 0x688(0x08)
	struct UVerticalBox* VerticalBox_2; // 0x690(0x08)
	struct UWBP_Interact_SlotCompQuality_Pc_C* WBP_Interact_SlotCompQuality_Pc; // 0x698(0x08)
	struct UWBP_InteractPanelItem_Desc_PC_C* WBP_InteractPanelItem_Desc_PC; // 0x6a0(0x08)
	struct UWBP_InteractSpace_Pc_C* WBP_InteractSpace_PcS1; // 0x6a8(0x08)
	struct UWBP_InteractTipsDe_C* WBP_InteractTarget; // 0x6b0(0x08)
	struct UWBP_InteractTips_Marker_PC_C* WBP_InteractTips_Marker_PC; // 0x6b8(0x08)
	struct UWBP_InteractTips_Mission_PcS1_C* WBP_InteractTips_Mission; // 0x6c0(0x08)
	struct UWBP_InteractTips_Mission_PcS2_C* WBP_InteractTips_Mission_PcS2; // 0x6c8(0x08)
	struct UWBP_InteractTips_Zoom_C* WBP_InteractTips_Zoom; // 0x6d0(0x08)
	struct UWBP_InteractTips_Zoom_C* WBP_InteractTips_Zoom_2; // 0x6d8(0x08)
	struct UWBP_InteractTips_Zoom_C* WBP_InteractTips_Zoom_3; // 0x6e0(0x08)
	struct UWBP_InteractTips_Zoom_C* WBP_InteractTips_Zoom_4; // 0x6e8(0x08)
	struct UWBP_InteractTips_Zoom_C* WBP_InteractTips_Zoom_5; // 0x6f0(0x08)
	struct UWBP_InteractTipsDe_Pc_C* WBP_InteractTipsDe_Pc; // 0x6f8(0x08)
	struct UWBP_Itemview_TipsText_C* WBP_Itemview_TipsText; // 0x700(0x08)
	struct UWBP_InteractQuality_C* WBP_NoRoomLeft; // 0x708(0x08)
	/*struct UWBP_SlotCompIconImage_C**/char WBP_SlotCompIconImage[0x8]; // 0x710(0x08)
	struct UDFMImage* wtMainIcon; // 0x718(0x08)
	struct TArray<struct FSlateColor> ExecutableColor; // 0x720(0x10)
	int32_t Type; // 0x730(0x04)

	void SetType(int32_t Type); // Function WBP_InteractPanelItem_PC.WBP_InteractPanelItem_PC_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000001
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
