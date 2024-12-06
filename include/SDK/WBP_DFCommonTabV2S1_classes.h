
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFCommonTabV2S1.WBP_DFCommonTabV2S1_C
// Size: 0x3880 (Inherited: 0x550)
class UWBP_DFCommonTabV2S1_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* CheckedUpAni; // 0x558(0x08)
	struct UWidgetAnimation* UncheckedUpAni; // 0x560(0x08)
	struct UWidgetAnimation* WBP_DFCommonTabV2S1_out; // 0x568(0x08)
	struct UWidgetAnimation* WBP_DFCommonTabV2S1_in; // 0x570(0x08)
	/*struct UDFCommonTabV2_C**/char DFCommonCheckButton[0x8]; // 0x578(0x08)
	struct UDFNamedSlot* DFNamedSlot_Out; // 0x580(0x08)
	/*struct TSoftObjectPtr<UPaperSprite>*/char ImageIcon[0x28]; // 0x588(0x28)
	struct FText btnMainTitle; // 0x5b0(0x18)
	bool Show_Icon; // 0x5c8(0x01)
	bool Is_Lock; // 0x5c9(0x01)
	bool CheckStateUpdated; // 0x5ca(0x01)
	bool LastCheckState; // 0x5cb(0x01)
	char pad_5CC[0x4]; // 0x5cc(0x04)
	struct FDFRichTextBlockCheckStateStyle TextStyle; // 0x5d0(0x1958)
	struct FDFRichTextBlockCheckStateStyle TextStyle_PC; // 0x1f28(0x1958)

	void SetPC(); // Function WBP_DFCommonTabV2S1.WBP_DFCommonTabV2S1_C.SetPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
