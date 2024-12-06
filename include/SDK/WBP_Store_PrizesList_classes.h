
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Store_PrizesList.WBP_Store_PrizesList_C
// Size: 0x588 (Inherited: 0x550)
class UWBP_Store_PrizesList_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_2; // 0x558(0x08)
	struct UDFImage* DFImage_158; // 0x560(0x08)
	struct UDFTextBlock* wtGroupTitle; // 0x568(0x08)
	struct UDFRichTextBlock* wtGuaranteedProbText; // 0x570(0x08)
	struct UDFWrapBox* wtPrizesBox; // 0x578(0x08)
	int32_t Type; // 0x580(0x04)
	int32_t SetTextSize; // 0x584(0x04)

	void SetOffset(int32_t Type); // Function WBP_Store_PrizesList.WBP_Store_PrizesList_C.SetOffset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x72c0650073
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
