
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFCommonButtonV2S2.WBP_DFCommonButtonV2S2_C
// Size: 0x5a5 (Inherited: 0x550)
class UWBP_DFCommonButtonV2S2_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFCommonButtonV2S2_C* DFCommonButton; // 0x558(0x08)
	struct UDFCommonButtonV2S2_PCOnly_C* DFCommonButton_PCOnly; // 0x560(0x08)
	struct UDFImage* HotZone_2; // 0x568(0x08)
	struct UImage* Image; // 0x570(0x08)
	/*struct FMulticastInlineDelegate*/char ClickCallback[0x10]; // 0x578(0x10)
	struct FText btnMainTitle; // 0x588(0x18)
	int32_t size; // 0x5a0(0x04)
	bool IsDisabled; // 0x5a4(0x01)

	void GetDisabledStyle(struct FButtonStyle& disabledStyle); // Function WBP_DFCommonButtonV2S2.WBP_DFCommonButtonV2S2_C.GetDisabledStyle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xfffefffec0500000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
