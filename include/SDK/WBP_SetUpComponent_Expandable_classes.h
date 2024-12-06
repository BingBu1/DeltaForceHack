
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SetUpComponent_Expandable.WBP_SetUpComponent_Expandable_C
// Size: 0x5ac (Inherited: 0x550)
class UWBP_SetUpComponent_Expandable_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_Expandable_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_Expandable_in; // 0x560(0x08)
	struct UDFNamedSlot* DFNamedSlot_98; // 0x568(0x08)
	struct UWBP_SetUpComponent_CheckOrder_C* WBP_SetUpComponent_CheckOrder; // 0x570(0x08)
	struct FText bpTitle; // 0x578(0x18)
	bool bDefaultExpanded; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)
	/*struct FMulticastInlineDelegate*/char OnExpandStateChanged[0x10]; // 0x598(0x10)
	int32_t Type; // 0x5a8(0x04)

	void SetType(); // Function WBP_SetUpComponent_Expandable.WBP_SetUpComponent_Expandable_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0740000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
