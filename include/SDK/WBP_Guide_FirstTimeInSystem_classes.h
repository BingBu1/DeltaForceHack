
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Guide_FirstTimeInSystem.WBP_Guide_FirstTimeInSystem_C
// Size: 0x5f0 (Inherited: 0x550)
class UWBP_Guide_FirstTimeInSystem_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* Anima_out; // 0x558(0x08)
	struct UWidgetAnimation* Anima_Loop; // 0x560(0x08)
	struct UWidgetAnimation* Anima_in; // 0x568(0x08)
	struct UImage* _wtSwallowImg; // 0x570(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x578(0x08)
	struct UDFBackgroundBlur* DFBackgroundBlur_459; // 0x580(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x588(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_140; // 0x590(0x08)
	struct UDFImage* DFImage_8; // 0x598(0x08)
	struct UDFImage* DFImage_11; // 0x5a0(0x08)
	struct UDFImage* DFImage_411; // 0x5a8(0x08)
	struct UImage* Image_fx01; // 0x5b0(0x08)
	struct UImage* Image_fx01_2; // 0x5b8(0x08)
	struct URadialImage* RadialImage_162; // 0x5c0(0x08)
	struct UWBP_Common_ScaleBg_C* WBP_Common_ScaleBg; // 0x5c8(0x08)
	/*struct UWBP_TopBarHD_InputSummary_C**/char WBP_TopBarHD_InputSummary[0x8]; // 0x5d0(0x08)
	/*struct UWBP_TopBarHD_InputSummary_C**/char WBP_TopBarHD_InputSummary_2[0x8]; // 0x5d8(0x08)
	struct UWBP_Guide_FirstTimeInSystem_Detail_C* wtDescItem; // 0x5e0(0x08)
	int32_t Position; // 0x5e8(0x04)
	int32_t Type; // 0x5ec(0x04)

	void SetType(int32_t Type); // Function WBP_Guide_FirstTimeInSystem.WBP_Guide_FirstTimeInSystem_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
