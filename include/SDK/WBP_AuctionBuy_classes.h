
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_AuctionBuy.WBP_AuctionBuy_C
// Size: 0x5ec (Inherited: 0x550)
class UWBP_AuctionBuy_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_AuctionBuy_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_AuctionBuy_in; // 0x560(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_Search; // 0x568(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_2; // 0x570(0x08)
	struct UDFNamedSlot* EmptySlot; // 0x578(0x08)
	struct UDFNamedSlot* PCSearchBar; // 0x580(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x588(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_PC2; // 0x590(0x08)
	struct UPlatformSizeBox* PlatformSizeBox_4; // 0x598(0x08)
	struct UPlatformSizeBox* PlatformSizeBox_pc; // 0x5a0(0x08)
	struct UDFWaterfallScrollView* ScrollGridBox; // 0x5a8(0x08)
	struct UDFVerticalBox* VerticalBox_1; // 0x5b0(0x08)
	struct UDFVerticalBox* VerticalBox_42; // 0x5b8(0x08)
	struct UWBP_AuctionSearchBar_C* WBP_AuctionSearchBar; // 0x5c0(0x08)
	struct UWBP_DFCommonSecondTab_C* WBP_DFCommonSecondTab; // 0x5c8(0x08)
	struct UWBP_DFTabV3GroupBox_C* WBP_DFTabV3GroupBox; // 0x5d0(0x08)
	struct UWBP_DFTabV3GroupBox_C* WBP_DFTabV3GroupBox2; // 0x5d8(0x08)
	bool IsCollection; // 0x5e0(0x01)
	char pad_5E1[0x3]; // 0x5e1(0x03)
	float ItemViewHeightOverrideHD; // 0x5e4(0x04)
	float ItemViewHeightOverrideMobile; // 0x5e8(0x04)

	void SetStyle(); // Function WBP_AuctionBuy.WBP_AuctionBuy_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000074
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
