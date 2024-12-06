
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_GunStand_GunsmithSceneSocketItemUI.WBP_GunStand_GunsmithSceneSocketItemUI_C
// Size: 0x624 (Inherited: 0x550)
class UWBP_GunStand_GunsmithSceneSocketItemUI_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_GunStand_in; // 0x558(0x08)
	struct UWidgetAnimation* WBP_GunStand_GunsmithSceneSocketItemUI_breath; // 0x560(0x08)
	struct UWidgetAnimation* WBP_GunStand_GunsmithSceneSocketItemUI_show; // 0x568(0x08)
	struct UWidgetAnimation* WBP_GunStandBox_out2; // 0x570(0x08)
	struct UWidgetAnimation* WBP_GunStandBox_out1; // 0x578(0x08)
	struct UWidgetAnimation* WBP_GunStandBox_out0; // 0x580(0x08)
	struct UWidgetAnimation* WBP_GunStandBox_in3; // 0x588(0x08)
	struct UWidgetAnimation* WBP_GunStandBox_in2; // 0x590(0x08)
	struct UWidgetAnimation* WBP_GunStandBox_in1; // 0x598(0x08)
	struct UWidgetAnimation* WBP_GunStandBox_in0; // 0x5a0(0x08)
	struct UDFImage* DFImage; // 0x5a8(0x08)
	struct UDFImage* DFImage_30; // 0x5b0(0x08)
	struct UDFMImage* DFMImage_Fx; // 0x5b8(0x08)
	struct UImage* Image_3; // 0x5c0(0x08)
	/*struct UWBP_CommonHover_C**/char WBP_CommonHover[0x8]; // 0x5c8(0x08)
	struct UWBP_Itemview_Conflict_C* WBP_Itemview_Conflict; // 0x5d0(0x08)
	struct UWBP_SlotCompUsingYellow_C* WBP_SlotCompUsingYellow; // 0x5d8(0x08)
	/*struct UWBP_CommonItemTemplate_C**/char wt_WBP_CommonItem[0x8]; // 0x5e0(0x08)
	struct UWBP_SlotCompSelected_C* wt_WBP_SlotCompSelected; // 0x5e8(0x08)
	struct UDFButton* wtButtonItemUI; // 0x5f0(0x08)
	struct UImage* wtImageSocketIcon; // 0x5f8(0x08)
	struct UWBP_SlotCompAccessoryStatus_C* wtMissionWidget; // 0x600(0x08)
	struct UDFCommonTextBlock* wtTextName; // 0x608(0x08)
	struct UImage* wtWidgetLineEnd; // 0x610(0x08)
	struct UBorder* wtWidgetLineStart; // 0x618(0x08)
	int32_t Type; // 0x620(0x04)

	void SetType(int32_t Selection); // Function WBP_GunStand_GunsmithSceneSocketItemUI.WBP_GunStand_GunsmithSceneSocketItemUI_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
