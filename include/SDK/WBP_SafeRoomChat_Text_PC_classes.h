
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SafeRoomChat_Text_PC.WBP_SafeRoomChat_Text_PC_C
// Size: 0x5b0 (Inherited: 0x550)
class UWBP_SafeRoomChat_Text_PC_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_SafeRoomChat_Text_PC_loading; // 0x558(0x08)
	struct UDFCanvasPanel* AimPanel_Loading; // 0x560(0x08)
	struct UDFImage* DFImage; // 0x568(0x08)
	struct UDFImage* DFImage_70; // 0x570(0x08)
	struct UDFImage* DFImage_FX; // 0x578(0x08)
	struct UDFImage* DFImage_Fx_01; // 0x580(0x08)
	struct URichTextBlock* RichTextBlock_2; // 0x588(0x08)
	struct URichTextBlock* RichTextBlock_Translation; // 0x590(0x08)
	bool Set_Scale; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
	struct UClass* ChatLinkClickReplySymbol; // 0x5a0(0x08)
	struct UClass* ChatLinkClickTranslateSymbol; // 0x5a8(0x08)

	void BP_SetText(struct FText showTxt); // Function WBP_SafeRoomChat_Text_PC.WBP_SafeRoomChat_Text_PC_C.BP_SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
