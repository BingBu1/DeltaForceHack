
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ItemDetailContent_Item.WBP_ItemDetailContent_Item_C
// Size: 0x2e8 (Inherited: 0x298)
class UWBP_ItemDetailContent_Item_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UCanvasPanel* CanvasPanel_273; // 0x2a0(0x08)
	struct UNamedSlot* Content; // 0x2a8(0x08)
	struct UDFNamedSlot* DFNamedSlot_519; // 0x2b0(0x08)
	struct ULine* Line_21; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_329; // 0x2c0(0x08)
	struct FText bpTitle; // 0x2c8(0x18)
	bool BpHiddenLine; // 0x2e0(0x01)
	bool Up; // 0x2e1(0x01)
	char pad_2E2[0x2]; // 0x2e2(0x02)
	int32_t Wrap; // 0x2e4(0x04)

	void SetType(struct FText InText, bool Index); // Function WBP_ItemDetailContent_Item.WBP_ItemDetailContent_Item_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000074
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
