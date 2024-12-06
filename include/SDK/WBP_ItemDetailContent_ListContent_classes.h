
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ItemDetailContent_ListContent.WBP_ItemDetailContent_ListContent_C
// Size: 0x2e8 (Inherited: 0x298)
class UWBP_ItemDetailContent_ListContent_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UNamedSlot* Content; // 0x2a0(0x08)
	struct UDFImage* Line_21; // 0x2a8(0x08)
	struct UNamedSlot* ListSlot; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_4; // 0x2b8(0x08)
	struct UVerticalBox* VerticalBox_2; // 0x2c0(0x08)
	struct FText TitleName; // 0x2c8(0x18)
	bool BpHiddenLine; // 0x2e0(0x01)
	bool Up; // 0x2e1(0x01)
	char pad_2E2[0x2]; // 0x2e2(0x02)
	float Position; // 0x2e4(0x04)

	void SetLinePos(bool Condition); // Function WBP_ItemDetailContent_ListContent.WBP_ItemDetailContent_ListContent_C.SetLinePos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
