
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Recruit_Main_RecruitInfo_Item.WBP_Recruit_Main_RecruitInfo_Item_C
// Size: 0x5b0 (Inherited: 0x550)
class UWBP_Recruit_Main_RecruitInfo_Item_C : public ULuaUIBaseView {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UDFImage* DFImage_68; // 0x558(0x08)
	struct UDFImage* wtLabelBg; // 0x560(0x08)
	struct UDFImage* wtLabelIcon; // 0x568(0x08)
	struct UDFTextBlock* wtLabelName; // 0x570(0x08)
	struct UDFTipsAnchor* wtTipAnchor; // 0x578(0x08)
	struct UDFCheckBox* wtTipCheckBtn; // 0x580(0x08)
	/*struct TArray<struct TSoftObjectPtr<UPaperSprite>>*/char Icon[0x10]; // 0x588(0x10)
	struct FText Text; // 0x598(0x18)

	void SetText(); // Function WBP_Recruit_Main_RecruitInfo_Item.WBP_Recruit_Main_RecruitInfo_Item_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000044
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
