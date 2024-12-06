
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass DFCommonButtonV1.DFCommonButtonV1_C
// Size: 0x288c (Inherited: 0x27d8)
class UDFCommonButtonV1_C : public UDFCommonButton {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x27d8(0x08)
	struct UWidgetAnimation* RecoverDeHoverAni; // 0x27e0(0x08)
	struct UWidgetAnimation* RecoverHoverAni; // 0x27e8(0x08)
	struct UWidgetAnimation* FadeInAni_1; // 0x27f0(0x08)
	struct UWidgetAnimation* LoopAni; // 0x27f8(0x08)
	struct UWidgetAnimation* FadeOutAni_weak; // 0x2800(0x08)
	struct UWidgetAnimation* FadeInAni_weak; // 0x2808(0x08)
	struct UWidgetAnimation* FadeOutAni; // 0x2810(0x08)
	struct UWidgetAnimation* FadeInAni; // 0x2818(0x08)
	struct UWidgetAnimation* DeHoverAni; // 0x2820(0x08)
	struct UWidgetAnimation* HoverAni; // 0x2828(0x08)
	struct UWidgetAnimation* DeDownAni; // 0x2830(0x08)
	struct UWidgetAnimation* DeUpAni; // 0x2838(0x08)
	struct UWidgetAnimation* DownAni; // 0x2840(0x08)
	struct UWidgetAnimation* UpAni; // 0x2848(0x08)
	struct UDFImage* DFImage_59; // 0x2850(0x08)
	struct UDFNamedSlot* DFNamedSlot_Content; // 0x2858(0x08)
	struct UDFImage* DownAni_fx; // 0x2860(0x08)
	struct UDFTextBlock* TextBlockSub; // 0x2868(0x08)
	struct UDFImage* TextIcon; // 0x2870(0x08)
	struct UImage* wImg_CheckedNormalAniCircle_FadeInAni_fx05; // 0x2878(0x08)
	struct UDFImage* wImg_CheckedNormalAniCircle_FadeInAni_weak_fx01; // 0x2880(0x08)
	int32_t Type; // 0x2888(0x04)

	void SetStyle(int32_t Type); // Function DFCommonButtonV1.DFCommonButtonV1_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
