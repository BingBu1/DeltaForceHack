
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_AssemblyMapNeed.WBP_AssemblyMapNeed_C
// Size: 0x5b0 (Inherited: 0x550)
class UWBP_AssemblyMapNeed_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFImage* DFImage_111; // 0x558(0x08)
	struct UDFRichTextBlock* DFRichTextBlock_153; // 0x560(0x08)
	struct UImage* Icon; // 0x568(0x08)
	/*struct UWBP_DFCommonCheckInstruction_C**/char wtCommonCheckInstruction[0x8]; // 0x570(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x578(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char BPImage[0x10]; // 0x580(0x10)
	int32_t Type; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)
	struct FText BpMainTitle; // 0x598(0x18)

	void SetMainTitle(struct FText& InText); // Function WBP_AssemblyMapNeed.WBP_AssemblyMapNeed_C.SetMainTitle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
