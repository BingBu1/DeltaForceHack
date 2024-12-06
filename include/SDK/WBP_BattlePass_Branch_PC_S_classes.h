
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_BattlePass_Branch_PC_S.WBP_BattlePass_Branch_PC_S_C
// Size: 0x601 (Inherited: 0x550)
class UWBP_BattlePass_Branch_PC_S_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_BattlePass_Branch_RightTransform; // 0x558(0x08)
	struct UWidgetAnimation* WBP_BattlePass_Branch_Switch; // 0x560(0x08)
	struct UWidgetAnimation* WBP_BattlePass_Branch_out; // 0x568(0x08)
	struct UWidgetAnimation* WBP_BattlePass_Branch_in; // 0x570(0x08)
	struct UDFButton* DFButton_1; // 0x578(0x08)
	struct UDFButton* DFButton_2; // 0x580(0x08)
	struct UDFImage* DFImage_2; // 0x588(0x08)
	struct UDFImage* DFImage_123; // 0x590(0x08)
	struct UDFScrollBox* DFScrollBox_57; // 0x598(0x08)
	struct UDFScrollBox* DFScrollBox_415; // 0x5a0(0x08)
	struct UDFTextBlock* DFTextBlock_39; // 0x5a8(0x08)
	struct UDFVerticalBox* DFVerticalBox_147; // 0x5b0(0x08)
	struct UDFWaterfallScrollView* DFWaterfallScrollView_2; // 0x5b8(0x08)
	struct UDFNamedSlot* EmptySlot; // 0x5c0(0x08)
	struct UDFCanvasPanel* Panel_De; // 0x5c8(0x08)
	struct UDFCanvasPanel* Panel_Left; // 0x5d0(0x08)
	struct UDFCanvasPanel* Panel_Right; // 0x5d8(0x08)
	struct UWBP_BattlePass_Branch_Item_01_PC_S_C* WBP_BattlePass_Branch_Item_01; // 0x5e0(0x08)
	struct UWBP_Common_ScaleBg_C* WBP_Common_ScaleBg; // 0x5e8(0x08)
	/*struct UWBP_DFCommonButtonV1S2_C**/char WBP_DFCommonButtonV1S2[0x8]; // 0x5f0(0x08)
	/*struct UWBP_DFCommonButtonV1S2_C**/char WBP_DFCommonButtonV1S2_120[0x8]; // 0x5f8(0x08)
	bool Lock; // 0x600(0x01)

	void SetLock(bool Lock); // Function WBP_BattlePass_Branch_PC_S.WBP_BattlePass_Branch_PC_S_C.SetLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
