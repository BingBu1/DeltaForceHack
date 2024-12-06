
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFCommonButtonHoverV1S1_Hall_Pc.WBP_DFCommonButtonHoverV1S1_Hall_Pc_C
// Size: 0x380 (Inherited: 0x00)
class UWBP_DFCommonButtonHoverV1S1_Hall_Pc_C {
public:

	char pad_0[0x338]; // 0x00(0x338)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* HoverAni; // 0x340(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_64; // 0x348(0x08)
	struct UDFImage* DFImage_2; // 0x350(0x08)
	struct UDFImage* DFImage_4; // 0x358(0x08)
	struct UDFImage* DFImage_49; // 0x360(0x08)
	struct FText btnMainTitle; // 0x368(0x18)

	void GetDisabledStyle(struct FButtonStyle& disabledStyle); // Function WBP_DFCommonButtonHoverV1S1_Hall_Pc.WBP_DFCommonButtonHoverV1S1_Hall_Pc_C.GetDisabledStyle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x7bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
