
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Equipment_BattleItemView.WBP_Equipment_BattleItemView_C
// Size: 0x630 (Inherited: 0x550)
class UWBP_Equipment_BattleItemView_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UImage* BoxLine; // 0x558(0x08)
	struct UDFBackgroundBlur* DFBackgroundBlur_73; // 0x560(0x08)
	struct UDFImage* DFImage; // 0x568(0x08)
	struct UDFImage* DFImage_2; // 0x570(0x08)
	struct UDFImage* DFImage_3; // 0x578(0x08)
	struct UDFImage* DFImage_61; // 0x580(0x08)
	struct UDFImage* DFImage_87; // 0x588(0x08)
	struct UDFTextBlock* DFTextBlock_233; // 0x590(0x08)
	struct UDFVerticalBox* DFVerticalBox_1; // 0x598(0x08)
	struct UTextBlock* TextBlock_titleMini; // 0x5a0(0x08)
	struct UTextBlock* TextBlock_titleName; // 0x5a8(0x08)
	/*struct UWBP_CommonItemTemplate_C**/char WBP_CommonItemTemplate[0x8]; // 0x5b0(0x08)
	struct UImage* wtBgImg; // 0x5b8(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x5c0(0x08)
	/*struct TSoftObjectPtr<UPaperSprite>*/char Hover[0x28]; // 0x5c8(0x28)
	struct FMargin offset; // 0x5f0(0x10)
	int32_t Type; // 0x600(0x04)
	char pad_604[0x4]; // 0x604(0x04)
	struct TArray<struct FName> Font; // 0x608(0x10)
	struct FText TextDe; // 0x618(0x18)

	void SetType(int32_t Selection); // Function WBP_Equipment_BattleItemView.WBP_Equipment_BattleItemView_C.SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x7f4dfffec0740000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
