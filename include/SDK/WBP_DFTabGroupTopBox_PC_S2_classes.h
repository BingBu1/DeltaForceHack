
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_DFTabGroupTopBox_PC_S2.WBP_DFTabGroupTopBox_PC_S2_C
// Size: 0x420 (Inherited: 0x3f8)
class UWBP_DFTabGroupTopBox_PC_S2_C : public UDFCommonTabWidget {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct UDFImage* DFImage_46; // 0x400(0x08)
	struct UDFImage* DFImage_Line_2; // 0x408(0x08)
	struct UDFNamedSlot* EmptyBackground_Line; // 0x410(0x08)
	struct UWBP_DFTabSelectionBar_PC_S1_C* WBP_DFTabSelectionBar_PC_S1; // 0x418(0x08)

	void OnUserProcessTabSlot(int32_t Position, struct UWidget* ItemWidget, struct UPanelSlot* ItemSlot, int32_t TotalCount); // Function WBP_DFTabGroupTopBox_PC_S2.WBP_DFTabGroupTopBox_PC_S2_C.OnUserProcessTabSlot // (Event|Public|BlueprintEvent) // @ game+0x4187fffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
