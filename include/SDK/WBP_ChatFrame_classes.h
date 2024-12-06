
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ChatFrame.WBP_ChatFrame_C
// Size: 0x668 (Inherited: 0x550)
class UWBP_ChatFrame_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* wtRecruitMiniPanel_out; // 0x558(0x08)
	struct UWidgetAnimation* wtRecruitMiniPanel_in; // 0x560(0x08)
	struct UWidgetAnimation* WBP_ChatFrame_out; // 0x568(0x08)
	struct UWidgetAnimation* WBP_ChatFrame_in; // 0x570(0x08)
	struct UButton* Button_Close; // 0x578(0x08)
	struct UCanvasPanel* CanvasPanel_80; // 0x580(0x08)
	struct UDFCanvasPanel* ChatList; // 0x588(0x08)
	struct UDFBackgroundBlur* DFBackgroundBlur; // 0x590(0x08)
	struct UDFBackgroundBlur* DFBackgroundBlur_70; // 0x598(0x08)
	struct UDFBlurSlotReContainer* DFBlurSlotReContainer_170; // 0x5a0(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x5a8(0x08)
	struct UDFImage* DFImage_44; // 0x5b0(0x08)
	struct UDFImage* DFImage_285; // 0x5b8(0x08)
	struct UDFImage* DFImage_Line; // 0x5c0(0x08)
	struct UHorizontalBox* HorizontalBox_2; // 0x5c8(0x08)
	struct UImage* Image_2; // 0x5d0(0x08)
	struct UImage* Image_3; // 0x5d8(0x08)
	struct UImage* Image_4; // 0x5e0(0x08)
	struct UImage* Image_5; // 0x5e8(0x08)
	struct UImage* Image_133; // 0x5f0(0x08)
	struct UDFCanvasPanel* Image_01; // 0x5f8(0x08)
	struct UImage* Image_Shadow; // 0x600(0x08)
	struct UDFNamedSlot* PCNavigator_Slot; // 0x608(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x610(0x08)
	struct UDFCanvasPanel* Social; // 0x618(0x08)
	struct UWBP_DFTabGroupTopBox_PC_S2_C* WBP_DFTabGroupTopBox_PC_S2; // 0x620(0x08)
	struct UWBP_DFTabNavigator_S1_C* WBP_DFTabNavigator_S1; // 0x628(0x08)
	struct UWBP_DFTabV1GroupTopBox_C* wtDFTabV1GroupTopBox; // 0x630(0x08)
	struct UWBP_Recruit_Chat_C* wtRecruitMiniPanel; // 0x638(0x08)
	struct UDFButton* wtRecruitPanelBtn; // 0x640(0x08)
	struct UDFButton* wtSetting; // 0x648(0x08)
	struct TArray<struct UPaperSprite*> BPImage; // 0x650(0x10)
	int32_t PanelType; // 0x660(0x04)
	int32_t Angle; // 0x664(0x04)

	void SetAngle(int32_t Angle); // Function WBP_ChatFrame.WBP_ChatFrame_C.SetAngle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0918940
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
