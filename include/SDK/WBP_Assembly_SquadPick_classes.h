
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Assembly_SquadPick.WBP_Assembly_SquadPick_C
// Size: 0xb80 (Inherited: 0x550)
class UWBP_Assembly_SquadPick_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Hero_MainPanel_daojishi02; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Hero_MainPanel_Pc_out; // 0x560(0x08)
	struct UWidgetAnimation* WBP_Hero_MainPanel_Pc_in; // 0x568(0x08)
	struct UWidgetAnimation* WBP_Hero_MainPanel_daojishi01; // 0x570(0x08)
	struct UWidgetAnimation* WBP_Hero_MainPanel_out; // 0x578(0x08)
	struct UWidgetAnimation* WBP_Hero_MainPanel_in; // 0x580(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_134; // 0x588(0x08)
	struct UDFCanvasPosReContainer* DFCanvasPosReContainer_1; // 0x590(0x08)
	struct UDFImage* DFImage_FX; // 0x598(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_2; // 0x5a0(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_3; // 0x5a8(0x08)
	struct UCanvasPanel* Right; // 0x5b0(0x08)
	struct UWBP_Assembly_Label_C* WBP_Assembly_Label_01; // 0x5b8(0x08)
	struct UWBP_Assembly_Label_C* WBP_Assembly_Label_02; // 0x5c0(0x08)
	struct UWBP_Assembly_Label_C* WBP_Assembly_Label_03; // 0x5c8(0x08)
	struct UWBP_Assembly_Label_C* WBP_Assembly_Label_04; // 0x5d0(0x08)
	struct UWBP_AssemblyChatInput_C* WBP_AssemblyChatInput_HD; // 0x5d8(0x08)
	struct UWBP_Chat_VoiceList_C* WBP_Chat_VoiceList; // 0x5e0(0x08)
	/*struct UWBP_ChatView_C**/char WBP_ChatView_Mobile[0x8]; // 0x5e8(0x08)
	struct UWBP_ControllerButtonType_C* WBP_ControllerButtonType; // 0x5f0(0x08)
	struct UWBP_ControllerButtonType_C* WBP_ControllerButtonType_2; // 0x5f8(0x08)
	struct UWBP_ControllerFunctionButtonCommand_C* WBP_ControllerFunctionButtonCommand_Mobile; // 0x600(0x08)
	/*struct UWBP_DFCommonButtonV1S1_C**/char wtCommonButtonV1S1[0x8]; // 0x608(0x08)
	/*struct UWBP_DFCommonButtonV1S2_C**/char wtCommonButtonV1S2[0x8]; // 0x610(0x08)
	struct UTextBlock* wtCurrentLevelText; // 0x618(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* wtMicroBtn; // 0x620(0x08)
	struct UDFMMobileCustomLayoutDraggableButton* wtVoiceBtn; // 0x628(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char BP_Image[0x10]; // 0x630(0x10)
	/*struct TArray<struct TSoftObjectPtr<UTexture2D>>*/char Bp_Image2[0x10]; // 0x640(0x10)
	struct FButtonStyle BtnStyleNormal; // 0x650(0x298)
	struct FButtonStyle BtnStyleActive; // 0x8e8(0x298)

	void BPSetVoiceType(int32_t Type); // Function WBP_Assembly_SquadPick.WBP_Assembly_SquadPick_C.BPSetVoiceType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0740065
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
