
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_AuctionSellElement.WBP_AuctionSellElement_C
// Size: 0x604 (Inherited: 0x550)
class UWBP_AuctionSellElement_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_AuctionSellElement_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_AuctionSellElement_in; // 0x560(0x08)
	/*struct UWBP_DFCommonButtonV3S1_C**/char Button[0x8]; // 0x568(0x08)
	/*struct UWBP_DFCommonButtonV3S1_C**/char Button_93[0x8]; // 0x570(0x08)
	/*struct UWBP_DFCommonButtonV3S1_C**/char Button_View[0x8]; // 0x578(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x580(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_2; // 0x588(0x08)
	struct UDFImage* DFImage_Bg_2; // 0x590(0x08)
	struct UDFImage* DFImage_Bg_3; // 0x598(0x08)
	struct UDFImage* DFImage_Bg01; // 0x5a0(0x08)
	struct UImage* Image_250; // 0x5a8(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x5b0(0x08)
	struct UPlatformSizeBox* PlatformSizeBox_3; // 0x5b8(0x08)
	struct UCanvasPanel* RightPanel; // 0x5c0(0x08)
	struct UCanvasPanel* TimePanel; // 0x5c8(0x08)
	struct UTextBlock* TimeText; // 0x5d0(0x08)
	struct UWBP_AuctionSellEmpty_C* WBP_AuctionSellEmpty; // 0x5d8(0x08)
	/*struct UWBP_CommonHoverBg_C**/char WBP_CommonHoverBg[0x8]; // 0x5e0(0x08)
	struct UWBP_ShopItemTemplate_C* WBP_ShopItemTemplate; // 0x5e8(0x08)
	struct UWBP_SlotCompSelected_C* WBP_SlotCompSelected; // 0x5f0(0x08)
	struct UWBP_SlotCompSoldOut_C* WBP_SlotCompSoldOut; // 0x5f8(0x08)
	int32_t Type; // 0x600(0x04)

	void SetType(int32_t Selection); // Function WBP_AuctionSellElement.WBP_AuctionSellElement_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
