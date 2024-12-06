
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Collections_Mandel.WBP_Collections_Mandel_C
// Size: 0x5e1 (Inherited: 0x550)
class UWBP_Collections_Mandel_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Collections_BlueprintPage_Cutter_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Collections_BlueprintPage_Cutter_in; // 0x560(0x08)
	struct UDFBlurSlotReContainer* DFBlurSlotReContainer_Mask; // 0x568(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_1; // 0x570(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_158; // 0x578(0x08)
	struct UDFImage* DFImage; // 0x580(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x588(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_2; // 0x590(0x08)
	struct UWBP_CommonDownload_C* wtCommonDownload; // 0x598(0x08)
	/*struct UWBP_DFCommonIconButton_C**/char wtDownloadBtn[0x8]; // 0x5a0(0x08)
	struct UDFCanvasPanel* wtEmptyBg; // 0x5a8(0x08)
	struct UDFNamedSlot* wtEmptySlot; // 0x5b0(0x08)
	struct UDFButton* wtHideUIBtn; // 0x5b8(0x08)
	/*struct UWBP_ItemDetailView_Streamline_C**/char wtItemDetailView[0x8]; // 0x5c0(0x08)
	struct UDFWaterfallScrollView* wtMandelBrickScrollView; // 0x5c8(0x08)
	/*struct UWBP_DFCommonButtonV1S1_C**/char wtStoreBtn[0x8]; // 0x5d0(0x08)
	/*struct UWBP_DFCommonIconButton_C**/char wtTradeBtn[0x8]; // 0x5d8(0x08)
	bool Hiding; // 0x5e0(0x01)

	void HideUI(bool Hiding); // Function WBP_Collections_Mandel.WBP_Collections_Mandel_C.HideUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfff50009bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
