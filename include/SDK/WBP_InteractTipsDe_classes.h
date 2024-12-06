
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_InteractTipsDe.WBP_InteractTipsDe_C
// Size: 0x2e0 (Inherited: 0x298)
class UWBP_InteractTipsDe_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* WBP_InteractTipsDe_out; // 0x2a0(0x08)
	struct UWidgetAnimation* WBP_InteractTipsDe_in; // 0x2a8(0x08)
	struct UBorder* Border_124; // 0x2b0(0x08)
	struct UImage* QualityImage; // 0x2b8(0x08)
	struct UTextBlock* TitleText; // 0x2c0(0x08)
	int32_t Type; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x2d0(0x10)

	void BP_SetSelectedType(int32_t Type); // Function WBP_InteractTipsDe.WBP_InteractTipsDe_C.BP_SetSelectedType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
