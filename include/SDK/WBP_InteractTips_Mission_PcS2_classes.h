
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_InteractTips_Mission_PcS2.WBP_InteractTips_Mission_PcS2_C
// Size: 0x2f8 (Inherited: 0x2b0)
class UWBP_InteractTips_Mission_PcS2_C : public UDFHDInteractorMissionItem_Detail {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UWidgetAnimation* WBP_InteractTips_Mission_PcS2_PlayOnce; // 0x2b8(0x08)
	struct UWidgetAnimation* WBP_InteractTips_Mission_PcS2_PlayOnce_1; // 0x2c0(0x08)
	struct UDFImage* BG; // 0x2c8(0x08)
	struct UDFImage* DFImage_Icon; // 0x2d0(0x08)
	struct UWBP_HUCommonBlur_C* WBP_HUCommonBlur; // 0x2d8(0x08)
	int32_t Type; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char RefImage[0x10]; // 0x2e8(0x10)

	void SetStyle(int32_t Selection); // Function WBP_InteractTips_Mission_PcS2.WBP_InteractTips_Mission_PcS2_C.SetStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
