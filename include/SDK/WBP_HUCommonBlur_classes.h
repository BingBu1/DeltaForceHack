
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_HUCommonBlur.WBP_HUCommonBlur_C
// Size: 0x574 (Inherited: 0x550)
class UWBP_HUCommonBlur_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_HUCommonBlur_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_HUCommonBlur_in; // 0x560(0x08)
	struct UDFBackgroundBlur* DFBackgroundBlur_34; // 0x568(0x08)
	float BlurStrength; // 0x570(0x04)

	void BP_InvalidBlurCache(); // Function WBP_HUCommonBlur.WBP_HUCommonBlur_C.BP_InvalidBlurCache // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
