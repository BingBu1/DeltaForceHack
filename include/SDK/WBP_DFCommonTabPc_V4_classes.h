
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFCommonTabPc_V4.WBP_DFCommonTabPc_V4_C
// Size: 0x5c0 (Inherited: 0x550)
class UWBP_DFCommonTabPc_V4_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x558(0x08)
	struct UDFCommonCheckButton_Pc_TabV4_C* DFCommonCheckButton; // 0x560(0x08)
	bool bShowSpacerLine; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	/*struct TSoftObjectPtr<UPaperSprite>*/char ImageIcon[0x28]; // 0x570(0x28)
	bool Show_Icon; // 0x598(0x01)
	char pad_599[0x7]; // 0x599(0x07)
	struct FText btnMainTitle; // 0x5a0(0x18)
	struct USizeBoxSlot* NewVar_1; // 0x5b8(0x08)

	void BP_SetShowSpacerLine(bool bVisible); // Function WBP_DFCommonTabPc_V4.WBP_DFCommonTabPc_V4_C.BP_SetShowSpacerLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3ea9a004ff4abffd
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
