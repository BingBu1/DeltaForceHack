
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SetUpComponent_SplitBtn_4.WBP_SetUpComponent_SplitBtn_3_C
// Size: 0x5fd (Inherited: 0x558)
class UWBP_SetUpComponent_SplitBtn_3_C : public UWBP_BaseSetUpItem_C {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_SplitBtn_2_out; // 0x560(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_SplitBtn_2_in; // 0x568(0x08)
	struct UDFImage* DFImage_329; // 0x570(0x08)
	struct UDFImage* DFImage_Disabled; // 0x578(0x08)
	struct UCanvasPanel* HoverPan; // 0x580(0x08)
	/*struct UWBP_SetUpComponent_Slider_C**/char Slider[0x8]; // 0x588(0x08)
	struct UDFTextBlock* TextBlock; // 0x590(0x08)
	struct FText bpTitle; // 0x598(0x18)
	bool BpGoldIconVisi; // 0x5b0(0x01)
	bool BpSoundIconVisi; // 0x5b1(0x01)
	bool BpSoundIconStop; // 0x5b2(0x01)
	char pad_5B3[0x1]; // 0x5b3(0x01)
	float BpWidth; // 0x5b4(0x04)
	struct FVector2D TextSize; // 0x5b8(0x08)
	bool BpEnableNumInput; // 0x5c0(0x01)
	char pad_5C1[0x7]; // 0x5c1(0x07)
	/*struct FMulticastInlineDelegate*/char OnSliderValueChanged[0x10]; // 0x5c8(0x10)
	/*struct FMulticastInlineDelegate*/char OnSliderMouseCaptureEnd[0x10]; // 0x5d8(0x10)
	/*struct FMulticastInlineDelegate*/char OnConfirmValue[0x10]; // 0x5e8(0x10)
	float BpSliderLength; // 0x5f8(0x04)
	bool Disabled; // 0x5fc(0x01)

	void BP_SetTitle(struct FText InTile); // Function WBP_SetUpComponent_SplitBtn_4.WBP_SetUpComponent_SplitBtn_3_C.BP_SetTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2b95814688cb4b4a
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
