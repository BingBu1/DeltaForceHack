
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass DFCommonMediaView.DFCommonMediaView_C
// Size: 0x411 (Inherited: 0x3a0)
class UDFCommonMediaView_C : public UDFCommonMediaView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UWidgetAnimation* SkipBtnHide; // 0x3a8(0x08)
	struct UWidgetAnimation* SkipBtnShow; // 0x3b0(0x08)
	struct UWBP_Common_ScaleBg_C* BgImgRoot; // 0x3b8(0x08)
	struct UWBP_Common_MediaBg_C* CommonMediaBg; // 0x3c0(0x08)
	struct UDFImage* DFImage_122; // 0x3c8(0x08)
	struct UDFImage* HotZone; // 0x3d0(0x08)
	struct UWBP_Common_ScaleBg_C* WBP_Common_ScaleBg; // 0x3d8(0x08)
	/*struct UWBP_CommonKeyIconBoxText_C**/char WBP_CommonKeyIconBoxText_C_2[0x8]; // 0x3e0(0x08)
	struct UWBP_CommonRoundedRectMask_C* WBP_CommonRoundedRectMask; // 0x3e8(0x08)
	/*struct UDFCommonButtonV3_C**/char wt_SkipBtn[0x8]; // 0x3f0(0x08)
	struct FText SkipBtnText; // 0x3f8(0x18)
	bool bIsBackground; // 0x410(0x01)

	void Finished_FCBDC8AC4185B41801046DA43AEF311B(); // Function DFCommonMediaView.DFCommonMediaView_C.Finished_FCBDC8AC4185B41801046DA43AEF311B // (BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
