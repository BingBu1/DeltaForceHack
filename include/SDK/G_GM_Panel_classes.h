
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass G_GM_Panel.G_GM_Panel_C
// Size: 0x5e8 (Inherited: 0x550)
class UG_GM_Panel_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UButton* ButtonArgs; // 0x558(0x08)
	struct UButton* buttonBg; // 0x560(0x08)
	struct UCommonButton_V1_02_C* ButtonComfirm; // 0x568(0x08)
	struct UWBP_CommonPopWindowsV2_C* G_Common_PopWindows_01; // 0x570(0x08)
	struct UWBP_CommonPopWindowsV2_C* G_Common_PopWindows_02; // 0x578(0x08)
	struct UG_GM_SelectBoxDown_C* G_GM_SelectBoxDown; // 0x580(0x08)
	struct UG_GM_SelectBoxDown_C* G_GM_SelectBoxDown_1; // 0x588(0x08)
	struct UG_GM_SelectBoxDown_C* G_GM_SelectBoxDown_2; // 0x590(0x08)
	struct UG_GM_SelectBoxDown_C* G_GM_SelectBoxDown_3; // 0x598(0x08)
	struct UImage* Image_53; // 0x5a0(0x08)
	struct UMultiLineEditableTextBox* MultiLineEditableTextBox_111; // 0x5a8(0x08)
	struct UCommonButton_V1_02_C* WButtonClose; // 0x5b0(0x08)
	struct UCommonButton_V1_02_C* WButtonConfirm; // 0x5b8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Result; // 0x5c0(0x08)
	struct FString GMConfigPath; // 0x5c8(0x10)
	struct FString GMGroupConfigPath; // 0x5d8(0x10)

	void Construct(); // Function G_GM_Panel.G_GM_Panel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x6ec0780065
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
