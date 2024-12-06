
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFCommonTabV3.WBP_DFCommonTabV3_C
// Size: 0x3868 (Inherited: 0x550)
class UWBP_DFCommonTabV3_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCommonCheckButton_TabV3_C* DFCommonCheckButton; // 0x558(0x08)
	bool bShowSpacerLine; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	/*struct TSoftObjectPtr<UPaperSprite>*/char ImageIcon[0x28]; // 0x568(0x28)
	bool Show_Icon; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)
	struct FText btnMainTitle; // 0x598(0x18)
	bool Is_Lock; // 0x5b0(0x01)
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct FDFRichTextBlockCheckStateStyle TextStyle; // 0x5b8(0x1958)
	struct FDFRichTextBlockCheckStateStyle TextStyle_PC; // 0x1f10(0x1958)

	void BP_SetShowSpacerLine(bool bShowSpacerLine); // Function WBP_DFCommonTabV3.WBP_DFCommonTabV3_C.BP_SetShowSpacerLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x32456d5f50032aaa
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
