
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Warehouse.WBP_Warehouse_C
// Size: 0x5bc (Inherited: 0x550)
class UWBP_Warehouse_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* In_Anim; // 0x558(0x08)
	struct UDFMImage* DFMImage_129; // 0x560(0x08)
	struct UDFNamedSlot* DFNamedSlot_142; // 0x568(0x08)
	struct UDFNamedSlot* DFNamedSlot_DownMask; // 0x570(0x08)
	struct UDFNamedSlot* DFNamedSlot_UpMask; // 0x578(0x08)
	/*struct UWBP_DFCommonButtonV3S1_C**/char jumpBlackSiteBtn[0x8]; // 0x580(0x08)
	struct UDFMImage* touyin; // 0x588(0x08)
	struct UDFScrollBox* wtDepositScrollBox; // 0x590(0x08)
	struct UItemSlotView_C* wtDepositSlotView; // 0x598(0x08)
	struct UWBP_ScrollMask_C* wtDownShadow; // 0x5a0(0x08)
	struct UDFNamedSlot* wtExtensionVIPpanel; // 0x5a8(0x08)
	struct UWBP_ScrollMask_C* wtUpShadow; // 0x5b0(0x08)
	int32_t BpQualityType; // 0x5b8(0x04)

	void BP_SetStyle(); // Function WBP_Warehouse.WBP_Warehouse_C.BP_SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
