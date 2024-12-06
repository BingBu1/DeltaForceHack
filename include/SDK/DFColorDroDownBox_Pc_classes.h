
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass DFColorDroDownBox_Pc.DFColorDroDownBox_Pc_C
// Size: 0x2990 (Inherited: 0x2818)
class UDFColorDroDownBox_Pc_C : public UDFCommonCheckButton {
public:

	struct UWidgetAnimation* RecoverCheckedHoveredAni; // 0x2818(0x08)
	struct UWidgetAnimation* RecoverUncheckedHoveredAni; // 0x2820(0x08)
	struct UWidgetAnimation* FadeOutAni; // 0x2828(0x08)
	struct UWidgetAnimation* FadeInAni; // 0x2830(0x08)
	struct UWidgetAnimation* UncheckedHoverAni; // 0x2838(0x08)
	struct UWidgetAnimation* CheckedHoverAni; // 0x2840(0x08)
	struct UWidgetAnimation* UncheckedDownAni; // 0x2848(0x08)
	struct UWidgetAnimation* UncheckedUpAni; // 0x2850(0x08)
	struct UWidgetAnimation* CheckedDownAni; // 0x2858(0x08)
	struct UWidgetAnimation* CheckedUpAni; // 0x2860(0x08)
	struct UDFImage* ImageColor; // 0x2868(0x08)
	struct FSlateColor NewVar_1; // 0x2870(0x28)
	struct FSlateColor NewVar_2; // 0x2898(0x28)
	struct FSlateColor NewVar_3; // 0x28c0(0x28)
	struct FSlateColor NewVar_4; // 0x28e8(0x28)
	struct FSlateColor NewVar_5; // 0x2910(0x28)
	struct FName TableName; // 0x2938(0x08)
	struct TMap<int32_t, struct FSlateColor> ColorMap; // 0x2940(0x50)

	void InitColorMap(); // Function DFColorDroDownBox_Pc.DFColorDroDownBox_Pc_C.InitColorMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
