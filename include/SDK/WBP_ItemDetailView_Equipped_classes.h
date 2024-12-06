
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ItemDetailView_Equipped.WBP_ItemDetailView_Equipped_C
// Size: 0x618 (Inherited: 0x550)
class UWBP_ItemDetailView_Equipped_C : public UItemDetailViewLuaBaseWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_ItemDetailView_Equipped_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_ItemDetailView_Equipped_in; // 0x560(0x08)
	struct UDFNamedSlot* _wFloorBtnSlot; // 0x568(0x08)
	struct UDFNamedSlot* _wRealContentSlot; // 0x570(0x08)
	struct UDFBackgroundBlur* DFBackgroundBlur_36; // 0x578(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_193; // 0x580(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_BG; // 0x588(0x08)
	struct UDFImage* DFImage; // 0x590(0x08)
	struct UDFImage* DFImage_142; // 0x598(0x08)
	struct UDFMCommonImage* DFImage_fx2; // 0x5a0(0x08)
	struct UDFMCommonImage* DFImage_fx2_2; // 0x5a8(0x08)
	struct UDFNamedSlot* DFNamedSlot_133; // 0x5b0(0x08)
	struct UDFSizeBox* DFSizeBox_3; // 0x5b8(0x08)
	struct UDFMCommonImage* ItemDetailImageBg; // 0x5c0(0x08)
	struct UDFMCommonImage* ItemDetailImageBg_2; // 0x5c8(0x08)
	struct ULine* Line_1; // 0x5d0(0x08)
	struct UDFImage* Line_2; // 0x5d8(0x08)
	struct UDFCanvasPanel* Price; // 0x5e0(0x08)
	struct USizeBox* SizeBox_1; // 0x5e8(0x08)
	struct UDFRichTextBlock* wCurrencyText; // 0x5f0(0x08)
	struct URichTextBlock* wDesc; // 0x5f8(0x08)
	struct UWBP_ItemDetail_TitleContent_C* wItemDetailTitle; // 0x600(0x08)
	bool bpShowIcon; // 0x608(0x01)
	char pad_609[0x3]; // 0x609(0x03)
	float Height; // 0x60c(0x04)
	int32_t Adaptation; // 0x610(0x04)
	int32_t TypeBg; // 0x614(0x04)

	void SetTypeBg(int32_t TypeBg); // Function WBP_ItemDetailView_Equipped.WBP_ItemDetailView_Equipped_C.SetTypeBg // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
