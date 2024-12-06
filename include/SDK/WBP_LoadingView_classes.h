
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_LoadingView.WBP_LoadingView_C
// Size: 0x5a8 (Inherited: 0x480)
class UWBP_LoadingView_C : public ULoadingView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct UWidgetAnimation* WBP_LoadingView_out; // 0x488(0x08)
	struct UWidgetAnimation* WBP_LoadingView_weaken; // 0x490(0x08)
	struct UWidgetAnimation* WBP_LoadingView_highlight; // 0x498(0x08)
	struct UWidgetAnimation* WBP_LoadingView_Bg; // 0x4a0(0x08)
	struct UWidgetAnimation* logo; // 0x4a8(0x08)
	struct UWidgetAnimation* WBP_LoadingView_in; // 0x4b0(0x08)
	struct UImage* BgImage_3; // 0x4b8(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_120; // 0x4c0(0x08)
	struct UDFImage* DFImage; // 0x4c8(0x08)
	struct UDFImage* DFImage_186; // 0x4d0(0x08)
	struct UDFImage* DFImage_214; // 0x4d8(0x08)
	struct UDFImage* DFImage_Bg; // 0x4e0(0x08)
	struct UDFImage* DFImage_Bg_2; // 0x4e8(0x08)
	struct UDFImage* DFImage_Bg_3; // 0x4f0(0x08)
	struct UDFImage* DFImage_Line_18; // 0x4f8(0x08)
	struct UDFBlurSlotReContainer* DFNamedSlot_BlurPC; // 0x500(0x08)
	struct UDFSafeZone* DFSafeZone_91; // 0x508(0x08)
	struct UDFImage* logo_fx; // 0x510(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x518(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_2; // 0x520(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_3; // 0x528(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_4; // 0x530(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_5; // 0x538(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_6; // 0x540(0x08)
	struct UWBP_Common_ScaleBg_C* WBP_Common_ScaleBg; // 0x548(0x08)
	struct UWBP_LoadingView_Item_C* WBP_LoadingView_Item; // 0x550(0x08)
	struct UWBP_LoadingView_Item_C* WBP_LoadingView_Item_2; // 0x558(0x08)
	struct UWBP_LoadingView_Item_C* WBP_LoadingView_Item_3; // 0x560(0x08)
	struct UCanvasPanel* wt_DesPanel; // 0x568(0x08)
	struct UTextBlock* wt_LoadingTip; // 0x570(0x08)
	struct UDFTextBlock* wt_MapName; // 0x578(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x580(0x10)
	float LastPlayTime; // 0x590(0x04)
	float LoopAnimTotalTime; // 0x594(0x04)
	struct FName Body2_24pt; // 0x598(0x08)
	struct FName Body4_28pt; // 0x5a0(0x08)

	void IsPC(); // Function WBP_LoadingView.WBP_LoadingView_C.IsPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3f03a8f5fdc7211b
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
