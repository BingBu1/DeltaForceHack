
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ItemDetailContent.WBP_ItemDetailContent_C
// Size: 0x5b0 (Inherited: 0x550)
class UWBP_ItemDetailContent_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_ItemDetailContent_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_ItemDetailContent_in; // 0x560(0x08)
	struct UNamedSlot* _wContentSlotTop; // 0x568(0x08)
	struct UWBP_ItemDetailContent_DescItemInGame_C* _wtUsePlaceInGame; // 0x570(0x08)
	struct ULine* Line_21; // 0x578(0x08)
	/*struct UWBP_ItemDetailPanelBtn_C**/char WBP_ItemDetailPanelBtn[0x8]; // 0x580(0x08)
	/*struct UWBP_ItemDetailPanelBtn_C**/char WBP_ItemDetailPanelBtn_83[0x8]; // 0x588(0x08)
	struct URichTextBlock* wDesc; // 0x590(0x08)
	struct UDFScrollBox* wScrollBoxContent; // 0x598(0x08)
	struct TArray<struct FLinearColor> BpColor; // 0x5a0(0x10)

	void BndEvt__CheckBox_242_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_ItemDetailContent.WBP_ItemDetailContent_C.BndEvt__CheckBox_242_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
