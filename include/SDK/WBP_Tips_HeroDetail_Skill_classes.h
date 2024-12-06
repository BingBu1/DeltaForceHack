
#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace Dumper {
// WidgetBlueprintGeneratedClass WBP_Tips_HeroDetail_Skill.WBP_Tips_HeroDetail_Skill_C
// Size: 0x350 (Inherited: 0x298)
class UWBP_Tips_HeroDetail_Skill_C : public UDFMSkillDetailViewItem {
public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UDFBorder* DFBorder; // 0x2a0(0x08)
	struct UDFBorder* DFBorder_2; // 0x2a8(0x08)
	struct UDFCanvasPanel* DFCanvasPanel_1; // 0x2b0(0x08)
	struct UDFImage* DFImage_28; // 0x2b8(0x08)
	struct UDFImage* DFImage_78; // 0x2c0(0x08)
	struct UDFImage* DFImage_202; // 0x2c8(0x08)
	struct UDFTextBlock* DFTextBlock; // 0x2d0(0x08)
	struct UDFTextBlock* DFTextBlock_2; // 0x2d8(0x08)
	struct UComputeTextBlock* DFTextBlock_4; // 0x2e0(0x08)
	struct UComputeTextBlock* DFTextBlock_6; // 0x2e8(0x08)
	struct UDFTextBlock* DFTextBlock_61; // 0x2f0(0x08)
	struct UDFVerticalBox* DFVerticalBox_2; // 0x2f8(0x08)
	struct UDFImage* Icon; // 0x300(0x08)
	/*struct UWBP_CommonKeyIconBox_C**/char WBP_CommonKeyIconBox[0x8]; // 0x308(0x08)
	struct TArray<struct FLinearColor> RefColors; // 0x310(0x10)
	int32_t Hero; // 0x320(0x04)
	bool Ultimate; // 0x324(0x01)
	bool ShowKey; // 0x325(0x01)
	char pad_326[0x2]; // 0x326(0x02)
	struct FName ActionName; // 0x328(0x08)
	struct TArray<struct FLinearColor> RefColors_3; // 0x330(0x10)
	int64_t SkillId; // 0x340(0x08)
	struct FName NewVar_1; // 0x348(0x08)

	void SetLongPressVisible(); // Function WBP_Tips_HeroDetail_Skill.WBP_Tips_HeroDetail_Skill_C.SetLongPressVisible // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xfffffffec0000000
	static UClass* StaticClass(); // Dumper_Generated_Function // () // @ game+0x000000
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
