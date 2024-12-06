
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_RoleInfo_RankRewards.WBP_RoleInfo_RankRewards_C
// Size: 0x348 (Inherited: 0x298)
class UWBP_RoleInfo_RankRewards_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* WBP_RoleInfo_RankRewards_out; // 0x2a0(0x08)
	struct UWidgetAnimation* WBP_RoleInfo_RankRewards_in; // 0x2a8(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_215; // 0x2b0(0x08)
	struct UDFCanvasPosReContainer* DFCanvasPosReContainer_60; // 0x2b8(0x08)
	struct UDFCanvasPosReContainer* DFCanvasPosReContainer_74; // 0x2c0(0x08)
	struct UDFImage* DFImage; // 0x2c8(0x08)
	struct UDFImage* DFImage_37; // 0x2d0(0x08)
	struct UDFCanvasPanel* DFImage_77; // 0x2d8(0x08)
	struct UDFImage* DFImage_91; // 0x2e0(0x08)
	struct UDFImage* DFImage_762; // 0x2e8(0x08)
	struct UDFScaleBox* DFScaleBox_1; // 0x2f0(0x08)
	struct UDFTextBlock* DFTextBlock; // 0x2f8(0x08)
	struct UImage* Image_kuangfx; // 0x300(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover[0x8]; // 0x308(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover_2[0x8]; // 0x310(0x08)
	/*struct UWBP_CommonItemTemplate_C**/char WBP_CommonItemTemplate[0x8]; // 0x318(0x08)
	struct UDFButton* wtLevelBtn; // 0x320(0x08)
	struct UDFTextBlock* wtLevelItemName; // 0x328(0x08)
	int32_t Type; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct TArray<struct FSlateBrush> ModeIcon; // 0x338(0x10)

	void SetStyle(int32_t Type, int32_t isMode, bool IsMP); // Function WBP_RoleInfo_RankRewards.WBP_RoleInfo_RankRewards_C.SetStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xca7c0000ca8
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
