
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_ModeHall_Pop.WBP_ModeHall_Pop_C
// Size: 0x5a0 (Inherited: 0x550)
class UWBP_ModeHall_Pop_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* Anima_out; // 0x558(0x08)
	struct UWidgetAnimation* Anima_in; // 0x560(0x08)
	struct UDFTextBlock* DFTextBlock_492; // 0x568(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x570(0x08)
	struct UWBP_Common_ScaleBg_C* WBP_Common_ScaleBg; // 0x578(0x08)
	/*struct UWBP_TopBarHD_InputSummary_C**/char WBP_TopBarHD_InputSummary[0x8]; // 0x580(0x08)
	struct UWBP_DFCommonButtonClose_C* wtCommonButtonClose; // 0x588(0x08)
	/*struct UWBP_DFCommonButtonV1S1_C**/char wtCommonButtonV1S1[0x8]; // 0x590(0x08)
	struct UDFRichTextBlock* wtDesc; // 0x598(0x08)

	void IsPC(); // Function WBP_ModeHall_Pop.WBP_ModeHall_Pop_C.IsPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3cc71c70c0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
