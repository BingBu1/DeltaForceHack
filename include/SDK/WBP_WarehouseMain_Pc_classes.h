
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_WarehouseMain_Pc.WBP_WarehouseMain_Pc_C
// Size: 0x5db (Inherited: 0x550)
class UWBP_WarehouseMain_Pc_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_WarehouseMain_out; // 0x558(0x08)
	struct UWidgetAnimation* WBP_WarehouseMain_in; // 0x560(0x08)
	struct UWidgetAnimation* Ani_in; // 0x568(0x08)
	struct UButton* Button_353; // 0x570(0x08)
	struct UDFHorizontalBox* DFHorizontalBox_1; // 0x578(0x08)
	struct UDFImage* DFImage_246; // 0x580(0x08)
	struct UDFOverlay* DFOverlay_1; // 0x588(0x08)
	struct UDFTipsAnchor* DFTipsAnchor; // 0x590(0x08)
	struct UDFTipsAnchor* DFTipsAnchor_2; // 0x598(0x08)
	struct UDFImage* fx_wu; // 0x5a0(0x08)
	struct UImage* Image_182; // 0x5a8(0x08)
	/*struct UWBP_EquipmentOnLoan_C**/char WBP_EquipmentOnLoan[0x8]; // 0x5b0(0x08)
	struct UCanvasPanel* wtCaptureImgRoot; // 0x5b8(0x08)
	struct UWBP_WarehouseEquipPanel_Pc_C* wtEquipPanel; // 0x5c0(0x08)
	struct UWBP_WarehouseWithTab_Pc_C* wtWarehousePanel; // 0x5c8(0x08)
	struct UWBP_CharacterCaptureImg_C* wtCaptureImg_1; // 0x5d0(0x08)
	bool Arrange; // 0x5d8(0x01)
	bool Sell; // 0x5d9(0x01)
	bool ExtManage; // 0x5da(0x01)

	void SetExtManage(bool ExtManage); // Function WBP_WarehouseMain_Pc.WBP_WarehouseMain_Pc_C.SetExtManage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1bfffffff
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
