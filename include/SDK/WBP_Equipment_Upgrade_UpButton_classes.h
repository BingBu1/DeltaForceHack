
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Equipment_Upgrade_UpButton.WBP_Equipment_Upgrade_UpButton_C
// Size: 0x58c (Inherited: 0x550)
class UWBP_Equipment_Upgrade_UpButton_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* WBP_Equipment_Upgrade_UpButton_2_xuanzhong; // 0x558(0x08)
	struct UWidgetAnimation* WBP_Equipment_Upgrade_UpButton_2_weixuanzhong; // 0x560(0x08)
	struct UDFBlurSlotReContainer* DFBlurSlotReContainer_70; // 0x568(0x08)
	struct UDFButton* DFButton_116; // 0x570(0x08)
	struct UDFImage* DFImage_176; // 0x578(0x08)
	struct UDFTextBlock* wLvlText; // 0x580(0x08)
	int32_t Type; // 0x588(0x04)

	void BPSetSelected(int32_t Type); // Function WBP_Equipment_Upgrade_UpButton.WBP_Equipment_Upgrade_UpButton_C.BPSetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
