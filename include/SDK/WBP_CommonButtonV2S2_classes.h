
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_CommonButtonV2S2.WBP_CommonButtonV2S2_C
// Size: 0x5d1 (Inherited: 0x550)
class UWBP_CommonButtonV2S2_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UButton* Button_Common; // 0x558(0x08)
	struct UImage* buttonDe02; // 0x560(0x08)
	struct UImage* Image_01; // 0x568(0x08)
	struct UImage* ImageBg_01; // 0x570(0x08)
	struct UImage* ImageDe_01; // 0x578(0x08)
	struct UImage* ImageDe_02; // 0x580(0x08)
	struct URichTextBlock* RichTextBlock_Common; // 0x588(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover[0x8]; // 0x590(0x08)
	int32_t Type; // 0x598(0x04)
	bool Visi; // 0x59c(0x01)
	char pad_59D[0x3]; // 0x59d(0x03)
	struct UPaperSprite* Image; // 0x5a0(0x08)
	struct FText Name; // 0x5a8(0x18)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x5c0(0x10)
	bool IsNameSetByCode; // 0x5d0(0x01)

	void Set_Type(); // Function WBP_CommonButtonV2S2.WBP_CommonButtonV2S2_C.Set_Type // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x52c0000064
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
