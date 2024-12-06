
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SelectionAssemblyDeposCell_V2.WBP_SelectionAssemblyDeposCell_V2_C
// Size: 0x650 (Inherited: 0x550)
class UWBP_SelectionAssemblyDeposCell_V2_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_SelectionAssemblyDeposCell_V2_HighLight; // 0x558(0x08)
	struct UWidgetAnimation* WBP_SelectionAssemblyDeposCell_V2_out; // 0x560(0x08)
	struct UWidgetAnimation* WBP_SelectionAssemblyDeposCell_V2_in; // 0x568(0x08)
	struct UDFBorder* DFBorder_1; // 0x570(0x08)
	struct UDFButton* DFButton_1; // 0x578(0x08)
	struct UDFButton* DFButton_175; // 0x580(0x08)
	struct UDFCanvasPanel* DFCanvasPanel; // 0x588(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_72; // 0x590(0x08)
	struct UDFImage* DFImage; // 0x598(0x08)
	struct UDFImage* DFImage_128; // 0x5a0(0x08)
	struct UDFImage* DFImage_131; // 0x5a8(0x08)
	struct UDFImage* DFImage_168; // 0x5b0(0x08)
	struct UDFImage* DFImage_223; // 0x5b8(0x08)
	struct UDFMImage* DFImage_265; // 0x5c0(0x08)
	struct UDFImage* DFImage_FloorFX_2; // 0x5c8(0x08)
	struct UDFMImage* DFMImage; // 0x5d0(0x08)
	struct UDFMImage* DFMImage_2; // 0x5d8(0x08)
	struct UDFTextBlock* DFTextBlock_106; // 0x5e0(0x08)
	struct UDFTipsAnchor* DFTipsAnchor_79; // 0x5e8(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x5f0(0x08)
	/*struct UWBP_CommonItemTemplate_C**/char WBP_CommonItemTemplate[0x8]; // 0x5f8(0x08)
	/*struct UWBP_CommonItemTemplate_C**/char WBP_CommonItemTemplate_2[0x8]; // 0x600(0x08)
	/*struct UWBP_CommonItemTemplate_C**/char WBP_CommonItemTemplate_3[0x8]; // 0x608(0x08)
	/*struct UWBP_CommonItemTemplate_C**/char WBP_CommonItemTemplate_4[0x8]; // 0x610(0x08)
	struct UWBP_SlotCompSelected_C* WBP_SlotCompSelected; // 0x618(0x08)
	struct UDFTipsAnchor* wtDFTipsAnchor; // 0x620(0x08)
	struct UWrapBox* wtWrapBox_Mobile; // 0x628(0x08)
	struct UWrapBox* wtWrapBox_PC; // 0x630(0x08)
	int32_t Type; // 0x638(0x04)
	int32_t BPQuality; // 0x63c(0x04)
	struct FVector2D PCSize; // 0x640(0x08)
	struct FVector2D MobileSize; // 0x648(0x08)

	void BP_SetQuality(int32_t Quality); // Function WBP_SelectionAssemblyDeposCell_V2.WBP_SelectionAssemblyDeposCell_V2_C.BP_SetQuality // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec06b006c
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
