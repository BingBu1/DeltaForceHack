
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_TopBarHDSlotPanelV2_Btn.WBP_TopBarHDSlotPanelV2_Btn_C
// Size: 0x5c9 (Inherited: 0x550)
class UWBP_TopBarHDSlotPanelV2_Btn_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_TopBarHDSlotPanelV2_Btn_unlock; // 0x558(0x08)
	struct UDFButton* _wtBtn; // 0x560(0x08)
	struct UDFImage* _wtIcon; // 0x568(0x08)
	struct UDFTextBlock* _wtText; // 0x570(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_Lock; // 0x578(0x08)
	struct UImage* Image_38; // 0x580(0x08)
	struct UImage* Image_39; // 0x588(0x08)
	struct UWBP_CommonHoverBg_V2_C* WBP_CommonHoverBg_V2; // 0x590(0x08)
	int32_t Type; // 0x598(0x04)
	char pad_59C[0x4]; // 0x59c(0x04)
	/*struct TSoftObjectPtr<UPaperSprite>*/char Image[0x28]; // 0x5a0(0x28)
	bool Lock; // 0x5c8(0x01)

	void SetIsLocked(bool bLocked); // Function WBP_TopBarHDSlotPanelV2_Btn.WBP_TopBarHDSlotPanelV2_Btn_C.SetIsLocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
