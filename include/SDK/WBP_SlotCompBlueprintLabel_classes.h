
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SlotCompBlueprintLabel.WBP_SlotCompBlueprintLabel_C
// Size: 0x58d (Inherited: 0x550)
class UWBP_SlotCompBlueprintLabel_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_SlotCompBlueprintLabel_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_SlotCompBlueprintLabel_in; // 0x560(0x08)
	struct UDFImage* DFImage_80; // 0x568(0x08)
	struct UImage* wIcon; // 0x570(0x08)
	struct UTextBlock* wtMainText; // 0x578(0x08)
	struct UTextBlock* wtMainText_4; // 0x580(0x08)
	int32_t Type; // 0x588(0x04)
	bool HiddenLine; // 0x58c(0x01)

	void SetType(int32_t Index); // Function WBP_SlotCompBlueprintLabel.WBP_SlotCompBlueprintLabel_C.SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000074
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
