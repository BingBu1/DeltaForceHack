
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass BP_MobileHUD_GMButton.BP_MobileHUD_GMButton_C
// Size: 0x4d9 (Inherited: 0x3b8)
class UBP_MobileHUD_GMButton_C : public UDFMGMButtonView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UButton* AILAB; // 0x3c0(0x08)
	struct UButton* Anim; // 0x3c8(0x08)
	struct UButton* Button_133; // 0x3d0(0x08)
	struct UCanvasPanel* CanvasPanel_3; // 0x3d8(0x08)
	struct UButton* CharacterLog; // 0x3e0(0x08)
	struct UGMButtonItem_C* GMButtonItem; // 0x3e8(0x08)
	struct UButton* OB; // 0x3f0(0x08)
	struct UButton* OB_Next; // 0x3f8(0x08)
	struct UButton* OB_Switch_AI; // 0x400(0x08)
	struct UButton* OldGM; // 0x408(0x08)
	struct UButton* QuestJump; // 0x410(0x08)
	struct UButton* Replay; // 0x418(0x08)
	struct UButton* SwitchModeGMSettingBtn; // 0x420(0x08)
	struct UButton* SwitchModeGMWeaponBtn; // 0x428(0x08)
	struct UTextBlock* TextBlock_OBStatus; // 0x430(0x08)
	struct UTextBlock* TextBlock_OBStatus_2; // 0x438(0x08)
	struct UTextBlock* TextBlock_OBStatus_3; // 0x440(0x08)
	struct UTextBlock* TextBlock_OBStatus_4; // 0x448(0x08)
	struct UTextBlock* TextBlock_OBStatus_5; // 0x450(0x08)
	struct UTextBlock* TextBlock_OBStatus_6; // 0x458(0x08)
	struct UTextBlock* TextBlock_OBStatus_7; // 0x460(0x08)
	struct UTextBlock* TextBlock_Time; // 0x468(0x08)
	struct UImage* VisualBtnBG; // 0x470(0x08)
	struct UImage* VisualBtnBG_2; // 0x478(0x08)
	struct UImage* VisualBtnBG_3; // 0x480(0x08)
	struct UImage* VisualBtnBG_4; // 0x488(0x08)
	struct UImage* VisualBtnBG_5; // 0x490(0x08)
	struct UImage* VisualBtnBG_6; // 0x498(0x08)
	struct UImage* VisualBtnBG_7; // 0x4a0(0x08)
	struct UImage* VisualBtnBG_8; // 0x4a8(0x08)
	struct UImage* VisualBtnBG_9; // 0x4b0(0x08)
	struct UImage* VisualBtnBG_10; // 0x4b8(0x08)
	struct UImage* VisualBtnBG_11; // 0x4c0(0x08)
	struct UImage* VisualBtnBG_12; // 0x4c8(0x08)
	struct UGP_GM_Panel_C* GMPanel; // 0x4d0(0x08)
	bool IaAISpectate; // 0x4d8(0x01)

	void ListenMessage_BP_MobileHUD_GMButton_K2Node_ListenMessage_0_1(struct UObject* Sender, struct FString MessageId, struct TArray<struct FMessageAny>& Params); // Function BP_MobileHUD_GMButton.BP_MobileHUD_GMButton_C.ListenMessage_BP_MobileHUD_GMButton_K2Node_ListenMessage_0_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x76470999071eaaae
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
