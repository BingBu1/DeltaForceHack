
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_VehiclesMainV2_Item.WBP_VehiclesMainV2_Item_C
// Size: 0x5a4 (Inherited: 0x550)
class UWBP_VehiclesMainV2_Item_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFButton* DFButton_1; // 0x558(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_72; // 0x560(0x08)
	struct UDFImage* DFImage_Bg; // 0x568(0x08)
	struct UDFImage* DFImage_Pressed; // 0x570(0x08)
	struct UDFTextBlock* DFTextBlock; // 0x578(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover[0x8]; // 0x580(0x08)
	/*struct UWBP_SlotCompMaskSmallLock_C**/char WBP_SlotCompMaskSmallLock[0x8]; // 0x588(0x08)
	struct UWBP_SlotCompSelected_C* WBP_SlotCompSelected; // 0x590(0x08)
	struct UWBP_SlotCompUsing_C* WBP_SlotCompUsing; // 0x598(0x08)
	int32_t Type; // 0x5a0(0x04)

	void SetType(); // Function WBP_VehiclesMainV2_Item.WBP_VehiclesMainV2_Item_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
