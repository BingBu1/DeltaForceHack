
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Guide_BtnTips.WBP_Guide_BtnTips_C
// Size: 0x604 (Inherited: 0x550)
class UWBP_Guide_BtnTips_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Guide_BtnTips_Square_loop; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Guide_BtnTips_out; // 0x560(0x08)
	struct UWidgetAnimation* WBP_Guide_BtnTips_in; // 0x568(0x08)
	struct UWidgetAnimation* WBP_Guide_BtnTips_Circle_loop; // 0x570(0x08)
	struct UDFCanvasPanel* _wtDontSetAnim; // 0x578(0x08)
	struct UCanvasPanel* _wtEffectPanel; // 0x580(0x08)
	struct UWBP_GuideEntryComb_C* _wtTipsText; // 0x588(0x08)
	struct UDFMImage* Image_DE_1; // 0x590(0x08)
	struct UDFMImage* Image_DE_2; // 0x598(0x08)
	struct UDFMImage* Image_DE_CircleFx; // 0x5a0(0x08)
	struct UDFMImage* Image_DE_GlowFx_4; // 0x5a8(0x08)
	struct UDFMImage* Image_DE_SquareFx; // 0x5b0(0x08)
	struct UDFMImage* Image_DE_SquareglowFx_3; // 0x5b8(0x08)
	struct UDFMImage* Image_DE_SquareglowFx_4; // 0x5c0(0x08)
	int32_t Type; // 0x5c8(0x04)
	float Multiple_X; // 0x5cc(0x04)
	float Multiple_Y; // 0x5d0(0x04)
	float HalfCircle; // 0x5d4(0x04)
	float SizeX; // 0x5d8(0x04)
	float SizeY; // 0x5dc(0x04)
	struct TArray<struct UObject*> Image_DE_Array_1; // 0x5e0(0x10)
	struct TArray<struct UObject*> Image_DE_Array_2; // 0x5f0(0x10)
	float Size_Circle; // 0x600(0x04)

	void Set_Multiple(); // Function WBP_Guide_BtnTips.WBP_Guide_BtnTips_C.Set_Multiple // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c000003e
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
