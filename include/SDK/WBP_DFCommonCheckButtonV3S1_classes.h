
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFCommonCheckButtonV3S1.WBP_DFCommonCheckButtonV3S1_C
// Size: 0x3870 (Inherited: 0x550)
class UWBP_DFCommonCheckButtonV3S1_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCommonCheckButtonV3_C* DFCommonCheckButton; // 0x558(0x08)
	struct UDFImage* HotZone; // 0x560(0x08)
	/*struct FMulticastInlineDelegate*/char ClickCallback[0x10]; // 0x568(0x10)
	/*struct TSoftObjectPtr<UPaperSprite>*/char ImageIcon[0x28]; // 0x578(0x28)
	struct FText btnMainTitle; // 0x5a0(0x18)
	bool Show_Icon; // 0x5b8(0x01)
	char pad_5B9[0x3]; // 0x5b9(0x03)
	int32_t size; // 0x5bc(0x04)
	struct FDFRichTextBlockCheckStateStyle TextStyle; // 0x5c0(0x1958)
	struct FDFRichTextBlockCheckStateStyle TextStyle_PC; // 0x1f18(0x1958)

	void GetDisabledStyle(struct FButtonStyle& disabledStyle); // Function WBP_DFCommonCheckButtonV3S1.WBP_DFCommonCheckButtonV3S1_C.GetDisabledStyle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
