
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ItemDetailContent_AdapterEffect.WBP_ItemDetailContent_AdapterEffect_C
// Size: 0x5a0 (Inherited: 0x550)
class UWBP_ItemDetailContent_AdapterEffect_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_ItemDetailContent_AdapterEffect_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_ItemDetailContent_AdapterEffect_in; // 0x560(0x08)
	struct UDFImage* DFImage_107; // 0x568(0x08)
	struct UImage* Image_397; // 0x570(0x08)
	struct UImage* Image_535; // 0x578(0x08)
	struct UTextBlock* wTextDesc; // 0x580(0x08)
	int32_t BpType; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x590(0x10)

	void BpSetBuffType(bool bGreenBuffer); // Function WBP_ItemDetailContent_AdapterEffect.WBP_ItemDetailContent_AdapterEffect_C.BpSetBuffType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
