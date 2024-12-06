
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_CommonItemViewDropDownBox.WBP_CommonItemViewDropDownBox_C
// Size: 0x42a0 (Inherited: 0x550)
class UWBP_CommonItemViewDropDownBox_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_SelectionAssemblyDroDownBox_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_SelectionAssemblyDroDownBox_in; // 0x560(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_69; // 0x568(0x08)
	/*struct UDFCommonDroDownBox_C**/char DFCommonCheckButton[0x8]; // 0x570(0x08)
	struct UDFSizeBox* DFSizeBox_2; // 0x578(0x08)
	struct UDFNamedSlot* EmptyBackground; // 0x580(0x08)
	struct UDFMImage* Image_Bg; // 0x588(0x08)
	struct UDFCanvasPanel* ScrollCanvas; // 0x590(0x08)
	struct UDFScrollGridBox* ScrollGridBox; // 0x598(0x08)
	struct FDFBrushCheckStateStyle Style01; // 0x5a0(0x518)
	struct FDFBrushCheckStateStyle Style02; // 0xab8(0x518)
	struct FText btnMainTitle; // 0xfd0(0x18)
	bool Direction; // 0xfe8(0x01)
	char pad_FE9[0x7]; // 0xfe9(0x07)
	struct FDFRichTextBlockCheckStateStyle TextStyle_PC; // 0xff0(0x1958)
	struct FDFRichTextBlockCheckStateStyle TextStyle; // 0x2948(0x1958)

	void SetPC(); // Function WBP_CommonItemViewDropDownBox.WBP_CommonItemViewDropDownBox_C.SetPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec000006b
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
