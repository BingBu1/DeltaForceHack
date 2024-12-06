
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_InteractTips_Zoom.WBP_InteractTips_Zoom_C
// Size: 0x324 (Inherited: 0x2d8)
class UWBP_InteractTips_Zoom_C : public UDFHDInteractorZoomItem {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* WBP_InteractTips_Zoom_Press; // 0x2e0(0x08)
	struct UWidgetAnimation* WBP_InteractTips_Zoom_out; // 0x2e8(0x08)
	struct UWidgetAnimation* WBP_InteractTips_Zoom_in; // 0x2f0(0x08)
	struct UWidgetAnimation* WBP_InteractTips_Zoom_alert; // 0x2f8(0x08)
	struct UDFNamedSlot* DFNamedSlot_158; // 0x300(0x08)
	struct UTextBlock* NeedText_2; // 0x308(0x08)
	struct UDFRichTextBlock* TitleText; // 0x310(0x08)
	/*struct UWBP_CommonKeyIconBox_C**/char WBP_CommonKeyIconBox[0x8]; // 0x318(0x08)
	int32_t Type; // 0x320(0x04)

	void SetType(int32_t Type); // Function WBP_InteractTips_Zoom.WBP_InteractTips_Zoom_C.SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0740065
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
