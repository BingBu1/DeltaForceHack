
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Common_TopBarV1_LeftBottom_Item.WBP_Common_TopBarV1_LeftBottom_Item_C
// Size: 0x5d9 (Inherited: 0x550)
class UWBP_Common_TopBarV1_LeftBottom_Item_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* unlockAni; // 0x558(0x08)
	struct UDFButton* DFButton_Bottom; // 0x560(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_111; // 0x568(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_Lock; // 0x570(0x08)
	struct UDFImage* DFImage_Line; // 0x578(0x08)
	struct UDFImage* DFImage_Lock; // 0x580(0x08)
	struct UImage* DFImage_Lock_2; // 0x588(0x08)
	struct UImage* DFImage_Lock_3; // 0x590(0x08)
	struct UDFTextBlock* Text_Chinese; // 0x598(0x08)
	struct UDFTextBlock* Text_English; // 0x5a0(0x08)
	struct FText Chinese; // 0x5a8(0x18)
	struct FText English; // 0x5c0(0x18)
	bool Lock; // 0x5d8(0x01)

	void BP_GetReddotPanel(struct UPanelWidget*& Panel); // Function WBP_Common_TopBarV1_LeftBottom_Item.WBP_Common_TopBarV1_LeftBottom_Item_C.BP_GetReddotPanel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x72c0000001
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
