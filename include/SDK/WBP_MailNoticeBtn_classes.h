
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_MailNoticeBtn.WBP_MailNoticeBtn_C
// Size: 0x6a1 (Inherited: 0x550)
class UWBP_MailNoticeBtn_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_MailNoticeBtn_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_MailNoticeBtn_in; // 0x560(0x08)
	struct UDFButton* Button_207; // 0x568(0x08)
	struct UCanvasPanel* CanvasPanel_53; // 0x570(0x08)
	struct UDFImage* DFImage_630; // 0x578(0x08)
	struct UImage* Image_03; // 0x580(0x08)
	struct UImage* Image_mail; // 0x588(0x08)
	struct UImage* Image_mail_Received; // 0x590(0x08)
	struct UTextBlock* TextBlock; // 0x598(0x08)
	struct UTextBlock* TextBlock_2; // 0x5a0(0x08)
	struct UTextBlock* TextBlock_01; // 0x5a8(0x08)
	/*struct UWBP_CommonHoverBg_C**/char WBP_CommonHoverBg[0x8]; // 0x5b0(0x08)
	/*struct UWBP_CommonOthersPoint_C**/char WBP_CommonPoint[0x8]; // 0x5b8(0x08)
	struct UWBP_SlotCompSelected_C* WBP_SlotCompSelected; // 0x5c0(0x08)
	struct TArray<struct UPaperSprite*> BPImage; // 0x5c8(0x10)
	struct TArray<struct UPaperSprite*> Mail; // 0x5d8(0x10)
	struct FSlateColor Text_Color_01; // 0x5e8(0x28)
	struct FSlateColor Text_Color_02; // 0x610(0x28)
	struct FSlateColor Text_Color_03; // 0x638(0x28)
	struct FSlateColor Text_Color_04; // 0x660(0x28)
	struct FName ImageColor; // 0x688(0x08)
	struct FName TextColor_2; // 0x690(0x08)
	struct FName TextColor_3; // 0x698(0x08)
	bool State; // 0x6a0(0x01)

	void SetType(bool State); // Function WBP_MailNoticeBtn.WBP_MailNoticeBtn_C.SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
