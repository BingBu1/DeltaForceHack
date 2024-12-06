
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_AuctionTransactionElement.WBP_AuctionTransactionElement_C
// Size: 0x5c8 (Inherited: 0x550)
class UWBP_AuctionTransactionElement_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_AuctionTransactionElement_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_AuctionTransactionElement_in; // 0x560(0x08)
	struct UTextBlock* BoughtTimeText; // 0x568(0x08)
	struct UDFHorizontalBox* CanvasPanel_2; // 0x570(0x08)
	struct UDFImage* DFImage_260; // 0x578(0x08)
	struct UDFImage* DFImage_337; // 0x580(0x08)
	struct UDFImage* DFImage_Bg_2; // 0x588(0x08)
	struct UDFImage* DFImage_Bg_3; // 0x590(0x08)
	struct UCanvasPanel* RightPanel; // 0x598(0x08)
	/*struct UWBP_CommonHoverBg_C**/char WBP_CommonHoverBg[0x8]; // 0x5a0(0x08)
	struct UWBP_ShopItemTemplate_C* WBP_ShopItemTemplate; // 0x5a8(0x08)
	struct UWBP_SlotCompSelected_C* WBP_SlotCompSelected; // 0x5b0(0x08)
	struct TArray<struct UPaperSprite*> BgSprites; // 0x5b8(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_AuctionTransactionElement.WBP_AuctionTransactionElement_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000074
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
