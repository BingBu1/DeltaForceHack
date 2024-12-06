
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_HUCommonBlur_V1.WBP_HUCommonBlur_V1_C
// Size: 0x2b8 (Inherited: 0x298)
class UWBP_HUCommonBlur_V1_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* WBP_HUCommonBlur_out; // 0x2a0(0x08)
	struct UWidgetAnimation* WBP_HUCommonBlur_in; // 0x2a8(0x08)
	struct UDFBackgroundBlur* DFBackgroundBlur_34; // 0x2b0(0x08)

	void BP_InvalidBlurCache(); // Function WBP_HUCommonBlur_V1.WBP_HUCommonBlur_V1_C.BP_InvalidBlurCache // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x72c0650073
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
