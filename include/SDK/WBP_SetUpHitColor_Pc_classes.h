
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SetUpHitColor_Pc.WBP_SetUpHitColor_Pc_C
// Size: 0x580 (Inherited: 0x550)
class UWBP_SetUpHitColor_Pc_C : public ULuaUIBaseView {
public:

	struct UDFImage* DFImage_128; // 0x550(0x08)
	struct UDFRichTextBlock* TextBlock_4; // 0x558(0x08)
	struct UDFRichTextBlock* Title; // 0x560(0x08)
	struct UWBP_SetUpComponent_HitColor_C* WBP_SetUpComponent_HitColor; // 0x568(0x08)
	struct UWBP_SetUpComponent_HitColor_C* WBP_SetUpComponent_HitColor_2; // 0x570(0x08)
	struct UWBP_SetUpComponent_HitColor_C* WBP_SetUpComponent_HitColor_3; // 0x578(0x08)

	void SetColor(int32_t ColorIndex); // Function WBP_SetUpHitColor_Pc.WBP_SetUpHitColor_Pc_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x3dc000003e
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
