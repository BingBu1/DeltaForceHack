
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_SetUpComponent_TwoBtnExpandable.WBP_SetUpComponent_TwoBtnExpandable_C
// Size: 0x5a8 (Inherited: 0x550)
class UWBP_SetUpComponent_TwoBtnExpandable_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_TwoBtnExpandable_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_SetUpComponent_TwoBtnExpandable_in; // 0x560(0x08)
	struct UDFNamedSlot* Body; // 0x568(0x08)
	struct UDFNamedSlot* Head; // 0x570(0x08)
	struct FText bpTitle; // 0x578(0x18)
	bool bDefaultExpanded; // 0x590(0x01)
	bool bExpanded; // 0x591(0x01)
	char pad_592[0x6]; // 0x592(0x06)
	/*struct FMulticastInlineDelegate*/char OnStateChanged[0x10]; // 0x598(0x10)

	void GetVisibleChildren(struct TArray<struct UWidget*>& OutChildren); // Function WBP_SetUpComponent_TwoBtnExpandable.WBP_SetUpComponent_TwoBtnExpandable_C.GetVisibleChildren // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x72c0650073
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
