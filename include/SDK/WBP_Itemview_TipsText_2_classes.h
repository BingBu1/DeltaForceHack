
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Itemview_TipsText.WBP_Itemview_TipsText_C
// Size: 0x59c (Inherited: 0x550)
class UWBP_Itemview_TipsText_C_def2 : public UDFInteractorExposeTipsItem {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Itemview_Favorite_loop; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Itemview_Favorite_PlayOnce; // 0x560(0x08)
	struct UWidgetAnimation* WBP_Itemview_Favorite_out; // 0x568(0x08)
	struct UWidgetAnimation* WBP_Itemview_Favorite_in; // 0x570(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x578(0x08)
	struct UDFImage* DFImage_34; // 0x580(0x08)
	struct UDFImage* DFImage_47; // 0x588(0x08)
	struct UDFTextBlock* DFTextBlock_86; // 0x590(0x08)
	int32_t TempAniType; // 0x598(0x04)

	void PlayInAnimation(); // Function WBP_Itemview_TipsText.WBP_Itemview_TipsText_C.PlayInAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
