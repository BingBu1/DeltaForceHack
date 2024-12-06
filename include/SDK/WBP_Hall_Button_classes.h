
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Hall_Button.WBP_Hall_Button_C
// Size: 0xe10 (Inherited: 0x550)
class UWBP_Hall_Button_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Hall_Button_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Hall_Button_in; // 0x560(0x08)
	struct UDFButton* DFButton_77; // 0x568(0x08)
	struct UDFImage* DFImage_221; // 0x570(0x08)
	struct UDFMImage* DFMImage_52; // 0x578(0x08)
	struct UDFMImage* DFMImage_193; // 0x580(0x08)
	struct UHorizontalBox* HorizontalBox_141; // 0x588(0x08)
	struct UImage* Image; // 0x590(0x08)
	struct UImage* Image_233; // 0x598(0x08)
	struct URichTextBlock* RichTextBlock; // 0x5a0(0x08)
	struct URichTextBlock* RichTextBlock_1; // 0x5a8(0x08)
	struct URichTextBlock* RichTextBlock_2; // 0x5b0(0x08)
	struct UWBP_CommonHoverBg_V2_C* WBP_CommonHoverBg_V2_108; // 0x5b8(0x08)
	/*struct UWBP_CommonOthersPoint_C**/char wtAtPoint[0x8]; // 0x5c0(0x08)
	/*struct UWBP_CommonOthersPoint_C**/char wtAtPoint_3[0x8]; // 0x5c8(0x08)
	struct UDFButton* wtChatButton; // 0x5d0(0x08)
	struct UButton* wtConveneBtn; // 0x5d8(0x08)
	struct UButton* wtMicroBtn; // 0x5e0(0x08)
	struct UImage* wtVoiceAni; // 0x5e8(0x08)
	struct UButton* wtVoiceBtn; // 0x5f0(0x08)
	struct FSlateBrush SpeakerCloseIcon; // 0x5f8(0x90)
	struct FSlateBrush SpeakerOpenIcon; // 0x688(0x90)
	struct FSlateBrush MicCloseIcon; // 0x718(0x90)
	struct FSlateBrush MicOpenIcon; // 0x7a8(0x90)
	struct FSlateBrush MicPTTIcon; // 0x838(0x90)
	int32_t Type; // 0x8c8(0x04)
	char pad_8CC[0x4]; // 0x8cc(0x04)
	struct FButtonStyle Style_01; // 0x8d0(0x298)
	struct FButtonStyle Style_02; // 0xb68(0x298)
	struct TArray<struct FButtonStyle> ArrStyle; // 0xe00(0x10)

	void SetButtonStyle(int32_t ButtonStyle); // Function WBP_Hall_Button.WBP_Hall_Button_C.SetButtonStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
