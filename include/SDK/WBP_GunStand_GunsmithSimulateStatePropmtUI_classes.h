
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_GunStand_GunsmithSimulateStatePropmtUI.WBP_GunStand_GunsmithSimulateStatePropmtUI_C
// Size: 0x5d0 (Inherited: 0x550)
class UWBP_GunStand_GunsmithSimulateStatePropmtUI_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_GunStand_GunsmithSimulateStatePropmtUI_loop; // 0x558(0x08)
	struct UWidgetAnimation* WBP_GunStand_GunsmithSimulateStatePropmtUI_out; // 0x560(0x08)
	struct UWidgetAnimation* WBP_GunStand_GunsmithSimulateStatePropmtUI_in; // 0x568(0x08)
	struct UDFBlurSlotReContainer* DFBlurSlotReContainer_2; // 0x570(0x08)
	struct UDFImage* DFImage_265; // 0x578(0x08)
	struct UImage* Image_FX; // 0x580(0x08)
	struct UImage* Image_FX_2; // 0x588(0x08)
	struct UImage* Image_GreenLightFX; // 0x590(0x08)
	struct UImage* Image_GreenLightFX_2; // 0x598(0x08)
	struct UDFImage* LineImage_FX; // 0x5a0(0x08)
	struct UPlatformPaddingBox* PlatformPaddingBox_1; // 0x5a8(0x08)
	struct UCanvasPanel* wtCanvasContent; // 0x5b0(0x08)
	/*struct UWBP_DFCommonCheckInstruction_C**/char wtCheckBoxCustomize[0x8]; // 0x5b8(0x08)
	struct URichTextBlock* wtDescText; // 0x5c0(0x08)
	struct UImage* wtOutlineImage; // 0x5c8(0x08)

	void SetPC(); // Function WBP_GunStand_GunsmithSimulateStatePropmtUI.WBP_GunStand_GunsmithSimulateStatePropmtUI_C.SetPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffcc0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
