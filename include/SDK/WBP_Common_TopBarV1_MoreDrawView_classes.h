
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Common_TopBarV1_MoreDrawView.WBP_Common_TopBarV1_MoreDrawView_C
// Size: 0x599 (Inherited: 0x550)
class UWBP_Common_TopBarV1_MoreDrawView_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Common_TopBarV1_MoreDrawView_drawOpen; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Common_TopBarV1_MoreDrawView_drawClose; // 0x560(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_560; // 0x568(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_draw; // 0x570(0x08)
	struct UDFImage* DFImage_26; // 0x578(0x08)
	struct UDFSizeBox* DFSizeBox_1; // 0x580(0x08)
	struct UDFWrapBox* DFWrapBox_More; // 0x588(0x08)
	struct UWBP_Common_TopBarV1_LiveStreaming_C* WBP_Common_TopBarV1_LiveStreaming; // 0x590(0x08)
	bool IsPress; // 0x598(0x01)

	void BP_GetReddotPanel(struct UPanelWidget*& Panel); // Function WBP_Common_TopBarV1_MoreDrawView.WBP_Common_TopBarV1_MoreDrawView_C.BP_GetReddotPanel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xffffffffc0000001
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
