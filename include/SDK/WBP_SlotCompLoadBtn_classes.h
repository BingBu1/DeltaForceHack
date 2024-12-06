
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SlotCompLoadBtn.WBP_SlotCompLoadBtn_C
// Size: 0x5cc (Inherited: 0x550)
class UWBP_SlotCompLoadBtn_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_LootPriceWeightBtn_Flash; // 0x558(0x08)
	struct UWidgetAnimation* WBP_LootPriceWeightBtn_out; // 0x560(0x08)
	struct UWidgetAnimation* WBP_LootPriceWeightBtn_in; // 0x568(0x08)
	struct UDFBorder* DFBorder_1; // 0x570(0x08)
	struct UDFImage* DFImage_65; // 0x578(0x08)
	struct UDFImage* DFImage_386; // 0x580(0x08)
	struct UDFVerticalBox* DFVerticalBox_1; // 0x588(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x590(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_2; // 0x598(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_4; // 0x5a0(0x08)
	struct UDFRichTextBlock* TextBlock_22; // 0x5a8(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x5b0(0x08)
	struct UWBP_DFCommonIconCheckButton_C* wtMobileBtn; // 0x5b8(0x08)
	/*struct UWBP_DFCommonIconButton_C**/char wtPCBtn[0x8]; // 0x5c0(0x08)
	int32_t Type; // 0x5c8(0x04)

	void SetType(int32_t Type); // Function WBP_SlotCompLoadBtn.WBP_SlotCompLoadBtn_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x4ec033005f
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
