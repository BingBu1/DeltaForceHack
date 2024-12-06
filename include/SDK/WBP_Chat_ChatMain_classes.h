
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Chat_ChatMain.WBP_Chat_ChatMain_C
// Size: 0x5e1 (Inherited: 0x550)
class UWBP_Chat_ChatMain_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Chat_ChatMain_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Chat_ChatMain_in; // 0x560(0x08)
	struct UDFButton* DFButton_110; // 0x568(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_200; // 0x570(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_402; // 0x578(0x08)
	struct UDFImage* DFImage_88; // 0x580(0x08)
	struct UDFImage* DFImage_200; // 0x588(0x08)
	struct UImage* Image_182; // 0x590(0x08)
	struct UNamedSlot* NamedSlot_181; // 0x598(0x08)
	struct UNamedSlot* NamedSlot_200; // 0x5a0(0x08)
	struct UDFNamedSlot* PCVoice_Slot; // 0x5a8(0x08)
	struct UWBP_InputBoxWithBtn_C* WBP_InputBoxWithBtn; // 0x5b0(0x08)
	struct UCanvasPanel* wCanvasPanel_Input; // 0x5b8(0x08)
	struct UWBP_DFCommonIconCheckButton_C* wEmojiCheckBox; // 0x5c0(0x08)
	struct UWBP_DFCommonButtonV2S2_C* wSendButton; // 0x5c8(0x08)
	struct UWBP_DFCommonIconCheckButton_C* wShareCheckBox; // 0x5d0(0x08)
	struct UDFMLongPressButton* wVioceButton; // 0x5d8(0x08)
	bool IsElongation; // 0x5e0(0x01)

	void Elongation(bool IsElongation); // Function WBP_Chat_ChatMain.WBP_Chat_ChatMain_C.Elongation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0740065
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
