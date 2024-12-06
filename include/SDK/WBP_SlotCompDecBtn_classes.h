
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SlotCompDecBtn.WBP_SlotCompDecBtn_C
// Size: 0x590 (Inherited: 0x550)
class UWBP_SlotCompDecBtn_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_SlotCompDispensing_in; // 0x558(0x08)
	struct UCanvasPanel* CanvasPanel_Dispensing; // 0x560(0x08)
	struct UDFTipsAnchor* DFTipsAnchor; // 0x568(0x08)
	struct UDFButton* DispensingBtn; // 0x570(0x08)
	int32_t Type; // 0x578(0x04)
	char pad_57C[0x4]; // 0x57c(0x04)
	struct TArray<struct FButtonStyle> Icon; // 0x580(0x10)

	void SetType(); // Function WBP_SlotCompDecBtn.WBP_SlotCompDecBtn_C.SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
