
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Common_ScaleBg.WBP_Common_ScaleBg_C
// Size: 0x2db (Inherited: 0x298)
class UWBP_Common_ScaleBg_C : public UUserWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* WBP_Common_ScaleBg_in; // 0x2a0(0x08)
	struct UWidgetAnimation* WBP_Common_ScaleBg_out; // 0x2a8(0x08)
	struct UDFBackgroundBox* DFBackgroundBox_1; // 0x2b0(0x08)
	struct UNamedSlot* NamedSlot_196; // 0x2b8(0x08)
	struct UPlatformScaleBox* PlatformScaleBox_1; // 0x2c0(0x08)
	struct USafeZone* SafeZone_BG; // 0x2c8(0x08)
	struct FIntPoint OverrideContentSize; // 0x2d0(0x08)
	bool bSwallowTouch; // 0x2d8(0x01)
	bool bDisableMobile; // 0x2d9(0x01)
	bool bDisableHD; // 0x2da(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_Common_ScaleBg.WBP_Common_ScaleBg_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
