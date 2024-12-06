
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_AssemblyChatInput.WBP_AssemblyChatInput_C
// Size: 0x5f4 (Inherited: 0x5a8)
class UWBP_AssemblyChatInput_C : public ULuaUIHudBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a8(0x08)
	struct UWidgetAnimation* WBP_Chat_out; // 0x5b0(0x08)
	struct UWidgetAnimation* WBP_Chat_in; // 0x5b8(0x08)
	struct UImage* Image_94; // 0x5c0(0x08)
	struct UCanvasPanel* MsgHistoryPanel; // 0x5c8(0x08)
	struct UEditableTextBox* MsgInputTB; // 0x5d0(0x08)
	struct UCanvasPanel* MsgOperationPanel; // 0x5d8(0x08)
	struct USafeZone* SafeZone_1; // 0x5e0(0x08)
	struct UDFWaterfallScrollView* WaterfallScrollView; // 0x5e8(0x08)
	int32_t Type; // 0x5f0(0x04)

	void PreConstruct(bool IsDesignTime); // Function WBP_AssemblyChatInput.WBP_AssemblyChatInput_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
